#!/usr/bin/env python3
"""Microsoft EXEPACK unpacker.

JW_CADV.EXE is EXEPACK-compressed, which is why its MZ header says
"0 relocations": the real relocation table is packed inside the stub and
replayed by the stub at load time.  Unpacking gives back a plain MZ with a
real relocation table -- which is what Ghidra needs in order to see the
segmentation.

    python tools/unexepack.py orig/JW_CADV.EXE decomp/JW_CADV.unp.exe

Anything appended after the MZ image (JW_CAD keeps ~1.2 MB of Microsoft C
overlays there) is carried over to the output unchanged.
"""
import struct, sys


def unpack(data):
    if data[:2] not in (b'MZ', b'ZM'):
        raise SystemExit('not an MZ executable')
    e_cblp, e_cp, e_crlc, e_cparhdr = struct.unpack('<4H', data[2:10])
    e_ss, e_sp, _csum, e_ip, e_cs = struct.unpack('<5H', data[14:24])
    hdr_len = e_cparhdr * 16
    img_len = (e_cp - 1) * 512 + (e_cblp or 512)
    # The overlays start at the first 512-byte boundary past the image, so the
    # bytes in between are padding; drop them and re-pad in build().
    tail = data[-(-img_len // 512) * 512:]
    img = data[hdr_len:img_len]

    # The EXEPACK header sits at the entry segment; IP is its length (16 or 18).
    base = e_cs * 16
    if e_ip not in (16, 18):
        raise SystemExit('entry IP %d is not an EXEPACK header length' % e_ip)
    h = img[base:base + e_ip]
    sig = h[14:16] if e_ip == 16 else h[16:18]
    if sig != b'RB':
        raise SystemExit('no "RB" signature -- not EXEPACK')
    if e_ip == 16:
        real_ip, real_cs, _mem, exepack_size, real_sp, real_ss, dest_para = \
            struct.unpack('<7H', h[:14])
        skip_para = 1
    else:
        real_ip, real_cs, _mem, exepack_size, real_sp, real_ss, dest_para, skip_para = \
            struct.unpack('<8H', h[:16])

    packed = img[:base]
    dest_len = dest_para * 16
    out = bytearray(dest_len)

    # Trailing 0xff padding is filler the packer added to round up.
    s = len(packed)
    while s > 0 and packed[s - 1] == 0xff:
        s -= 1
    d = dest_len

    while True:
        cmd = packed[s - 1]; s -= 1
        count = packed[s - 2] | (packed[s - 1] << 8); s -= 2
        op = cmd & 0xfe
        if op == 0xb0:                      # run of one byte
            b = packed[s - 1]; s -= 1
            if d - count < 0:
                raise SystemExit('fill underflows destination')
            out[d - count:d] = bytes([b]) * count
            d -= count
        elif op == 0xb2:                    # literal block
            if d - count < 0 or s - count < 0:
                raise SystemExit('copy underflows')
            out[d - count:d] = packed[s - count:s]
            s -= count
            d -= count
        else:
            raise SystemExit('bad EXEPACK command 0x%02x at %d' % (cmd, s))
        if cmd & 1:
            break

    # Anything the loop never reached is already the literal head of the image.
    if d:
        out[:d] = packed[:d]

    # Packed relocation table: 16 blocks, one per 0x1000 segment step.
    relocs = []
    p = base + exepack_size
    # The table lives inside the stub; it starts right after the stub code.
    # Find it by trying the documented position and validating the 16 counts.
    for start in range(base + e_ip, base + exepack_size):
        q = start
        cand = []
        ok = True
        for blk in range(16):
            if q + 2 > len(img):
                ok = False; break
            n = img[q] | (img[q + 1] << 8); q += 2
            if q + 2 * n > len(img) or n > 0x4000:
                ok = False; break
            for k in range(n):
                off = img[q] | (img[q + 1] << 8); q += 2
                cand.append((blk * 0x1000, off))
            if not ok:
                break
        if ok and q <= base + exepack_size and cand:
            relocs = cand
            p = start
            break
    if not relocs:
        raise SystemExit('could not locate the packed relocation table')

    return out, relocs, real_cs, real_ip, real_ss, real_sp, tail, p - base


def build(image, relocs, cs, ip, ss, sp, tail):
    n = len(relocs)
    hdr_len = max(32, -(-(28 + 4 * n) // 16) * 16)
    # The overlay manager finds the first overlay by rounding the root's image
    # end up to 512, so pad the image to that boundary before appending the
    # overlays -- otherwise unpacking shifts the whole chain and the manager
    # reads garbage.  With the padding the unpacked file runs like the original.
    pad = -(hdr_len + len(image)) % 512
    image = image + b'\0' * pad
    total = hdr_len + len(image)
    pages = (total + 511) // 512
    cblp = total % 512
    h = bytearray(hdr_len)
    struct.pack_into('<2s6H', h, 0, b'MZ', cblp, pages, n, hdr_len // 16, 0x0010, 0xffff)
    struct.pack_into('<5H', h, 14, ss, sp, 0, ip, cs)
    struct.pack_into('<H', h, 24, 28)
    off = 28
    for seg, o in relocs:
        struct.pack_into('<2H', h, off, o, seg); off += 4
    return bytes(h) + image + tail


if __name__ == '__main__':
    src, dst = sys.argv[1], sys.argv[2]
    data = open(src, 'rb').read()
    img, relocs, cs, ip, ss, sp, tail, rel_off = unpack(data)
    print('unpacked image  %d bytes' % len(img))
    print('relocations     %d (table at stub+0x%x)' % (len(relocs), rel_off))
    print('entry           %04x:%04x   stack %04x:%04x' % (cs, ip, ss, sp))
    print('appended tail   %d bytes (Microsoft C overlays)' % len(tail))
    open(dst, 'wb').write(build(img, relocs, cs, ip, ss, sp, tail))
    print('wrote', dst)
