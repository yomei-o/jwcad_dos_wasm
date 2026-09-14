"""Disassemble a range of the unpacked JW_CADV.EXE, with names filled in.

    python tools/disasm.py 0x26100 0x200        # image-linear offset
    python tools/disasm.py 3375:8ee4 0x40       # seg:off (segments as linked)
    python tools/disasm.py 0x26100 0x200 --raw  # no annotations
    python tools/disasm.py --ovl 36 0x12ae 0x80 # inside an overlay

(Named disasm.py, not dis.py: the latter shadows the standard library module
capstone imports, and the import fails in a way that reads like a capstone bug.)

Ghidra's 16-bit output loses arguments -- a pushed constant comes out as a
local, a pushed return address as a constant -- so the only way to be sure what
a call was given is sometimes to read the instructions.  This prints them with
the parts that matter named:

  * `int 21h` / `int 10h` / `int 33h` get the function name for the AH/AX the
    code just loaded
  * `int 3fh` is decoded as the overlay thunk it is: the three bytes after it
    are the overlay number and the offset inside the overlay area
  * a constant that lands in DGROUP is flagged with the string it points at
  * the VGA ports JW_CAD writes for mode 12h planar drawing are named

Needs capstone (`pip install capstone`).
"""
import os
import re
import struct
import sys

import capstone

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
EXE = os.path.join(ROOT, 'decomp', 'JW_CADV.unp.exe')

DGROUP = 0x3375          # ds set by the MSC startup: mov ax,3375 / mov ds,ax
OVL_SEG = 0x2ab8         # the single overlay area, from the INT 3Fh handler
OVL_TAB_W = 0x8ee4       # DS:8ee4  word per overlay -- load segment
OVL_TAB_B = 0x8f2e       # DS:8f2e  byte per overlay -- overlay region

PORTS = {
    0x3c0: 'VGA attribute controller', 0x3c2: 'VGA misc output',
    0x3c4: 'VGA sequencer index', 0x3c5: 'VGA sequencer data (02h = plane mask)',
    0x3c7: 'VGA DAC read index', 0x3c8: 'VGA DAC write index', 0x3c9: 'VGA DAC data',
    0x3ce: 'VGA graphics index',
    0x3cf: 'VGA graphics data (00h set/reset, 03h rop, 08h bitmask)',
    0x3d4: 'CRTC index', 0x3d5: 'CRTC data', 0x3da: 'input status 1 (bit3 = VBLANK)',
    0x60: 'keyboard data', 0x61: 'system control port', 0x64: 'keyboard status',
    0x40: '8253 counter 0', 0x43: '8253 control',
}

INT21 = {
    0x09: 'print string', 0x0e: 'select disk', 0x19: 'current disk',
    0x25: 'set interrupt vector', 0x2a: 'get date', 0x2c: 'get time',
    0x30: 'get DOS version', 0x35: 'get interrupt vector',
    0x36: 'get free disk space', 0x39: 'mkdir', 0x3a: 'rmdir', 0x3b: 'chdir',
    0x3c: 'creat', 0x3d: 'open', 0x3e: 'close', 0x3f: 'read', 0x40: 'write',
    0x41: 'unlink', 0x42: 'lseek', 0x43: 'get/set attributes', 0x44: 'ioctl',
    0x47: 'getcwd', 0x48: 'allocate memory', 0x49: 'free memory',
    0x4a: 'resize memory block', 0x4b: 'exec', 0x4c: 'exit',
    0x4e: 'find first', 0x4f: 'find next', 0x56: 'rename', 0x57: 'file date',
}

INT10 = {
    0x00: 'set video mode', 0x02: 'set cursor position', 0x03: 'get cursor',
    0x05: 'select display page', 0x09: 'write char+attr', 0x0c: 'write pixel',
    0x0d: 'read pixel', 0x0e: 'teletype output', 0x0f: 'get video mode',
    0x10: 'palette / DAC', 0x11: 'character generator', 0x12: 'EGA/VGA config',
    0x13: 'write string', 0x1a: 'display combination code',
}

INT33 = {
    0x00: 'reset mouse', 0x01: 'show cursor', 0x02: 'hide cursor',
    0x03: 'get position and buttons', 0x04: 'set position',
    0x07: 'set horizontal range', 0x08: 'set vertical range',
    0x09: 'set graphics cursor', 0x0a: 'set text cursor',
    0x0b: 'read motion counters', 0x0c: 'set event handler',
    0x0f: 'set mickeys per pixel',
}


def load(ovl=0):
    """The root image, or one overlay's, laid out where it runs.

    An overlay is loaded at segment 0x2ab8, so its bytes are returned with the
    root's first 0x2ab8 paragraphs in front of them.  That keeps every address
    in this tool the same as the address the code runs at, and lets DGROUP
    string lookups keep working, since DGROUP is in the root.
    """
    data = open(EXE, 'rb').read()
    hdr = struct.unpack('<H', data[8:10])[0] * 16
    cblp, cp = struct.unpack('<2H', data[2:6])
    img_len = (cp - 1) * 512 + (cblp or 512) - hdr
    root = data[hdr:hdr + img_len]
    if not ovl:
        return root

    sys.path.insert(0, HERE)
    import overlays

    packed = open(overlays.PACKED, 'rb').read()
    image = overlays.chain(packed)[ovl - 1]['image']
    at = OVL_SEG * 16
    out = bytearray(root)
    out[at:at + len(image)] = image
    return bytes(out)


def parse_addr(s):
    if ':' in s:
        seg, off = s.split(':')
        return int(seg, 16) * 16 + int(off, 16)
    return int(s, 0)


def dgroup_string(img, off):
    """If DS:off points at printable text, return it."""
    p = DGROUP * 16 + off
    if not 0 <= p < len(img):
        return None
    end = img.find(b'\x00', p, p + 120)
    if end < 0:
        return None
    s = img[p:end]
    if len(s) < 4 or not re.fullmatch(rb'[\x20-\x7e\t]+', s):
        return None
    return s.decode('latin1')


def annotate(img, i, state):
    m, ops = i.mnemonic, i.op_str
    if m == 'mov' and ops.startswith('ah, 0x'):
        state['ah'] = int(ops[4:], 16)
    elif m == 'mov' and ops.startswith('al, 0x'):
        state['al'] = int(ops[4:], 16)
    elif m == 'mov' and ops.startswith('ax, 0x'):
        v = int(ops[4:], 16)
        state['ax'], state['ah'], state['al'] = v, v >> 8, v & 0xff

    if m == 'int':
        n = int(ops, 16)
        ah, ax = state.get('ah'), state.get('ax')
        if n == 0x21 and ah in INT21:
            return 'DOS %02xh %s' % (ah, INT21[ah])
        if n == 0x10 and ah in INT10:
            return 'BIOS video %02xh %s' % (ah, INT10[ah])
        if n == 0x33 and ax in INT33:
            return 'mouse %02xh %s' % (ax, INT33[ax])
        if n == 0x3f:
            t = img[i.address + 2:i.address + 5]
            if len(t) == 3:
                return 'OVERLAY %d -> %04x:%04x' % (t[0], OVL_SEG, t[1] | (t[2] << 8))
        return ''
    if m in ('in', 'out'):
        for p, name in PORTS.items():
            if ('0x%x' % p) in ops:
                return name
        return ''
    if '0x' in ops:
        for lit in re.findall(r'0x[0-9a-f]+', ops):
            s = dgroup_string(img, int(lit, 16))
            if s:
                return 'DS:%s = %r' % (lit, s)
    return ''


def main():
    args = sys.argv[1:]
    ovl = 0
    if '--ovl' in args:
        i = args.index('--ovl')
        ovl = int(args[i + 1], 0)
        del args[i:i + 2]
    img = load(ovl)
    start = parse_addr(args[0])
    if ovl and start < OVL_SEG * 16:
        start += OVL_SEG * 16      # an offset inside the overlay
    length = int(args[1], 0) if len(args) > 1 else 0x80
    raw = '--raw' in args

    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_16)
    state = {}
    pos, end = start, start + length
    while pos < end:
        stepped = False
        for i in md.disasm(img[pos:end], pos):
            stepped = True
            note = '' if raw else annotate(img, i, state)
            print('  %06x  %-16s %-7s %-30s %s'
                  % (i.address, i.bytes.hex(), i.mnemonic, i.op_str, note))
            pos = i.address + i.size
            if i.mnemonic == 'int' and int(i.op_str, 16) == 0x3f:
                # The three bytes after the trap are operands, not code.
                print('  %06x  %-16s %-7s %s'
                      % (pos, img[pos:pos + 3].hex(), 'db', '; overlay number, offset'))
                pos += 3
                break
        if not stepped:
            print('  %06x  %-16s %-7s' % (pos, img[pos:pos + 1].hex(), '(bad)'))
            pos += 1


if __name__ == '__main__':
    main()
