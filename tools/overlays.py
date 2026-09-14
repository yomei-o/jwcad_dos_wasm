"""Split JW_CADV.EXE into its root and its 36 Microsoft C overlays.

JW_CAD is one 1.45 MB file: an EXEPACK-compressed root, and after it 36
overlays, each a small MZ of its own with its own relocation table, padded to a
512-byte boundary.  There is a table in the root at `DS:0x8f53` with a file
offset per overlay, but it is in BSS -- the overlay manager fills it at startup
by walking that chain of MZ headers, which is also why EXEPACK compressing the
root did not break anything: nothing stores an absolute offset at link time.

All 36 load at the same place, segment 0x2ab8, so only one is resident at a
time.  The proof that this is the right reading: the largest overlay's load
image is 35,783 bytes and the gap between the overlay segment and DGROUP
(0x3375 - 0x2ab8 paragraphs) is 35,792 -- the linker sized the hole to the
largest overlay, with nine bytes to spare.

    python tools/overlays.py                 # list the chain
    python tools/overlays.py --split         # decomp/ovl/ovlNN.bin (raw images)
    python tools/overlays.py --merge         # decomp/ovl/jwNN.exe  (for Ghidra)

`--merge` is the one that matters for analysis.  An overlay on its own is not
something Ghidra can make sense of: its code calls back into the root and reads
DGROUP.  So each merged file is a complete MZ holding the unpacked root with
one overlay dropped into the overlay hole, and with both relocation tables
combined, so Ghidra's MZ loader lays out all of it at the addresses the code
actually runs at.
"""
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
PACKED = os.path.join(ROOT, 'orig', 'JW_CADV.EXE')
UNPACKED = os.path.join(ROOT, 'decomp', 'JW_CADV.unp.exe')
OUTDIR = os.path.join(ROOT, 'decomp', 'ovl')

OVL_SEG = 0x2ab8         # where every overlay is loaded, from the INT 3Fh handler
DGROUP = 0x3375          # first paragraph past the overlay hole
ALIGN = 512


def mz(data, at=0):
    """(header_len, image_len, relocs, cs, ip, ss, sp) of the MZ at `at`."""
    if data[at:at + 2] != b'MZ':
        raise ValueError('no MZ at 0x%x' % at)
    cblp, cp, crlc, cparhdr = struct.unpack('<4H', data[at + 2:at + 10])
    ss, sp = struct.unpack('<2H', data[at + 14:at + 18])
    ip, cs = struct.unpack('<2H', data[at + 20:at + 24])
    lfarlc = struct.unpack('<H', data[at + 24:at + 26])[0]
    hdr = cparhdr * 16
    size = (cp - 1) * 512 + (cblp or 512)
    relocs = []
    p = at + lfarlc
    for _ in range(crlc):
        off, seg = struct.unpack('<2H', data[p:p + 2 + 2])
        relocs.append((seg, off))
        p += 4
    return hdr, size, relocs, cs, ip, ss, sp


def root_image_end(packed):
    cblp, cp = struct.unpack('<2H', packed[2:6])
    return (cp - 1) * 512 + (cblp or 512)


def chain(packed):
    """Walk the overlay chain exactly as the overlay manager does."""
    out = []
    p = -(-root_image_end(packed) // ALIGN) * ALIGN
    while p + 32 <= len(packed) and packed[p:p + 2] == b'MZ':
        hdr, size, relocs, cs, ip, ss, sp = mz(packed, p)
        out.append(dict(off=p, size=size, hdr=hdr, relocs=relocs,
                        image=packed[p + hdr:p + size]))
        p = -(-(p + size) // ALIGN) * ALIGN
    return out


def build_mz(image, relocs, cs, ip, ss, sp, minalloc=0x0aa9):
    n = len(relocs)
    hdr = max(32, -(-(28 + 4 * n) // 16) * 16)
    total = hdr + len(image)
    h = bytearray(hdr)
    struct.pack_into('<2s6H', h, 0, b'MZ', total % 512, -(-total // 512), n,
                     hdr // 16, minalloc, 0xffff)
    struct.pack_into('<5H', h, 14, ss, sp, 0, ip, cs)
    struct.pack_into('<H', h, 24, 28)
    off = 28
    for seg, o in relocs:
        struct.pack_into('<2H', h, off, o, seg)
        off += 4
    return bytes(h) + image


def main():
    packed = open(PACKED, 'rb').read()
    ovls = chain(packed)
    hole = (DGROUP - OVL_SEG) * 16

    if '--split' not in sys.argv and '--merge' not in sys.argv:
        print(' ovl   file_off      size  hdr  relocs   image')
        for i, o in enumerate(ovls, 1):
            print('  %2d  0x%06x  %8d %5d   %5d  %7d'
                  % (i, o['off'], o['size'], o['hdr'], len(o['relocs']),
                     len(o['image'])))
        big = max(len(o['image']) for o in ovls)
        print('%d overlays, %d bytes; largest image %d, overlay hole %d'
              % (len(ovls), sum(o['size'] for o in ovls), big, hole))
        return

    os.makedirs(OUTDIR, exist_ok=True)
    if '--split' in sys.argv:
        for i, o in enumerate(ovls, 1):
            path = os.path.join(OUTDIR, 'ovl%02d.bin' % i)
            open(path, 'wb').write(o['image'])
            print('wrote %s  %d bytes' % (path, len(o['image'])))
        return

    unp = open(UNPACKED, 'rb').read()
    rhdr, rsize, rrelocs, rcs, rip, rss, rsp = mz(unp)
    rimage = unp[rhdr:rsize]          # the tail past rsize is the overlay area
    for i, o in enumerate(ovls, 1):
        if len(o['image']) > hole:
            raise SystemExit('overlay %d does not fit the hole' % i)
        merged = bytearray(rimage)
        at = OVL_SEG * 16
        merged[at:at + len(o['image'])] = o['image']
        relocs = list(rrelocs)
        for seg, off in o['relocs']:
            relocs.append((seg + OVL_SEG, off))
        path = os.path.join(OUTDIR, 'jw%02d.exe' % i)
        open(path, 'wb').write(
            build_mz(bytes(merged), relocs, rcs, rip, rss, rsp))
        print('wrote %s  root + overlay %d (%d bytes, %d relocs)'
              % (path, i, len(o['image']), len(o['relocs'])))


if __name__ == '__main__':
    main()
