"""Find every call to an address and recover the arguments pushed for it.

    python tools/callsites.py 0x00446        # main
    python tools/callsites.py 2ab8:31df      # an overlay entry point
    python tools/callsites.py 10a9:0732      # the VGA set-colour helper

Ghidra's 16-bit output loses arguments: a pushed constant comes out as a local
(`local_a = (int *)param_2;` right before the call) and a pushed return address
sometimes comes out looking like a constant, so a number in the decompilation
cannot be trusted to be an argument.  The machine code settles it.  Microsoft C
pushes arguments right to left, and a constant argument compiles to
`mov ax, imm16` + `push ax`, or `push imm16` where the linker allowed 186
encodings, so walking backwards over that pattern from the call gives the real
values.

Addresses are **link** addresses -- what `tools/disasm.py` prints, and 0x1000
segments below what Ghidra shows.  The overlay hole is 2ab8.

Three kinds of call reach a function here, and all three are searched, in the
root and in all 36 overlays:

    e8 lo hi              near, within one segment
    9a off off seg seg    far
    cd 3f n off off       the overlay trap (tools/thunks.py explains it)
"""
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)

import overlays as ov

OVL_SEG = ov.OVL_SEG


def images():
    """[(name, bytes, base_linear)] for the root and every overlay."""
    packed = open(ov.PACKED, 'rb').read()
    unp = open(ov.UNPACKED, 'rb').read()
    hdr, size, _r, _cs, _ip, _ss, _sp = ov.mz(unp)
    out = [('root', unp[hdr:size], 0)]
    for i, o in enumerate(ov.chain(packed), 1):
        out.append(('ovl%02d' % i, o['image'], OVL_SEG * 16))
    return out


def parse_addr(s):
    if ':' in s:
        seg, off = s.split(':')
        return int(seg, 16) * 16 + int(off, 16)
    return int(s, 0)


def pushed_before(code, at, want=6):
    """Values pushed just before `at`, innermost first (cdecl: reverse order).

    None marks a push whose value is not an immediate -- a variable, usually.
    Stops at the first instruction that is not a recognisable push.
    """
    out = []
    p = at
    while len(out) < want and p > 4:
        if code[p - 4] == 0xb8 and code[p - 1] == 0x50:
            # mov ax, imm16 (3 bytes) / push ax (1)
            out.append(struct.unpack('<H', code[p - 3:p - 1])[0])
            p -= 4
        elif code[p - 3] == 0x68:
            # push imm16 (3 bytes)
            out.append(struct.unpack('<H', code[p - 2:p])[0])
            p -= 3
        elif code[p - 3] == 0xff and code[p - 2] == 0x76:
            out.append('[bp%+d]' % struct.unpack('<b', code[p - 1:p])[0])
            p -= 3
        elif code[p - 4] == 0xff and code[p - 3] == 0x36:
            out.append('[%04x]' % struct.unpack('<H', code[p - 2:p])[0])
            p -= 4
        elif code[p - 1] in (0x0e, 0x16):
            # push cs / push ss right before a near call: Microsoft C makes a
            # far call out of a near one this way, so the callee can `retf`.
            # Not an argument -- the real ones are pushed before it.
            out.append('(cs)' if code[p - 1] == 0x0e else '(ss)')
            p -= 1
        elif code[p - 1] in (0x50, 0x51, 0x52, 0x53, 0x55, 0x56, 0x57, 0x06, 0x1e):
            out.append(None)          # push reg / push es / push ds
            p -= 1
        else:
            break
    return out


def find(target):
    hits = []
    for name, img, base in images():
        n = len(img)
        for i in range(n - 4):
            b = img[i]
            hit = None
            if b == 0xe8:             # near call, stays inside its segment
                rel = struct.unpack('<h', img[i + 1:i + 3])[0]
                if base + i + 3 + rel == target:
                    hit = ('near', i + 3)
            elif b == 0x9a:           # far call
                off, seg = struct.unpack('<2H', img[i + 1:i + 5])
                if seg * 16 + off == target:
                    hit = ('far', i + 5)
            elif b == 0xcd and img[i + 1] == 0x3f:
                off = img[i + 3] | (img[i + 4] << 8)
                if OVL_SEG * 16 + off == target:
                    hit = ('overlay %d' % img[i + 2], i + 5)
            if hit:
                kind, end = hit
                hits.append((name, i, kind, pushed_before(img, i)))
    return hits


def main():
    if len(sys.argv) < 2:
        raise SystemExit(__doc__)
    target = parse_addr(sys.argv[1])
    hits = find(target)
    print('%d call sites for %s (linear %06x)' % (len(hits), sys.argv[1], target))
    for name, at, kind, args in hits:
        shown = ', '.join('?' if a is None
                          else a if isinstance(a, str) else '0x%04x' % a
                          for a in args)
        print('  %-7s %06x  %-11s pushed: %s' % (name, at, kind, shown))
    if hits:
        print()
        print('Pushes are listed innermost first, so for cdecl the first one is')
        print('the last argument.  "?" is a push whose value is not a constant.')


if __name__ == '__main__':
    main()
