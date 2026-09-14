"""Collect every `INT 3Fh` overlay call in JW_CADV.EXE.

The overlay call is a four-byte trap that replaces a far call:

    cd 3f  1c  f4 0e       INT 3Fh / overlay 0x1c / offset 0x0ef4 inside it

Two things follow from that, and both matter for the analysis.

Ghidra disassembles the `INT 3Fh` and then keeps going straight into the three
operand bytes, so every function that calls an overlay turns to noise from its
first overlay call onward.  `tools/ghidra_scripts/MarkOverlayThunks.java` fixes
that, and it needs to know where the traps are.

And an overlay's functions are reached only through these traps.  Nothing in an
overlay's own bytes says "a function starts here", so Ghidra finds only what it
can reach by falling into it -- 95 functions out of overlay 1's 43 KB on the
first attempt.  The offsets collected here are the entry points, gathered from
the whole file at once, because an overlay is mostly called from the root and
from *other* overlays, which are not in the image being analysed.

    python tools/thunks.py                  # summary per overlay
    python tools/thunks.py --write          # decomp/thunks.csv + decomp/entries/NN.txt

A raw byte scan finds false positives -- `cd 3f` occurs in data too -- so a hit
only counts when the overlay number is one that exists and the offset lands
inside that overlay's image.
"""
import collections
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)

import overlays as ov


def scan(img, ovl_sizes, origin):
    """Yield (offset_in_img, overlay_number, offset_in_overlay)."""
    i = 0
    while True:
        i = img.find(b'\xcd\x3f', i)
        if i < 0 or i + 5 > len(img):
            return
        n = img[i + 2]
        off = img[i + 3] | (img[i + 4] << 8)
        if 1 <= n <= len(ovl_sizes) and off < ovl_sizes[n - 1]:
            yield origin + i, n, off
        i += 2


def main():
    packed = open(ov.PACKED, 'rb').read()
    ovls = ov.chain(packed)
    sizes = [len(o['image']) for o in ovls]

    unp = open(ov.UNPACKED, 'rb').read()
    rhdr, rsize, _r, _cs, _ip, _ss, _sp = ov.mz(unp)
    images = [('root', unp[rhdr:rsize])]
    for i, o in enumerate(ovls, 1):
        images.append(('ovl%02d' % i, o['image']))

    hits = []
    for name, img in images:
        for at, n, off in scan(img, sizes, 0):
            hits.append((name, at, n, off))

    by_target = collections.defaultdict(set)
    by_source = collections.Counter()
    for name, at, n, off in hits:
        by_target[n].add(off)
        by_source[name] += 1

    print('%d overlay calls found in %d images' % (len(hits), len(images)))
    print()
    print(' ovl   calls in   entry points   size')
    for n in range(1, len(ovls) + 1):
        calls = sum(1 for h in hits if h[2] == n)
        print('  %2d   %7d   %12d   %6d'
              % (n, calls, len(by_target[n]), sizes[n - 1]))
    print()
    top = by_source.most_common(8)
    print('most calls made by: ' + ', '.join('%s=%d' % t for t in top))

    if '--write' not in sys.argv:
        return

    out = os.path.join(ROOT, 'decomp')
    with open(os.path.join(out, 'thunks.csv'), 'w', newline='\n') as f:
        f.write('image,offset,overlay,target\n')
        for name, at, n, off in hits:
            f.write('%s,%04x,%d,%04x\n' % (name, at, n, off))
    ent = os.path.join(out, 'entries')
    os.makedirs(ent, exist_ok=True)
    for n in range(1, len(ovls) + 1):
        with open(os.path.join(ent, '%02d.txt' % n), 'w', newline='\n') as f:
            for off in sorted(by_target[n]):
                f.write('%04x\n' % off)
    print('wrote decomp/thunks.csv and decomp/entries/NN.txt')


if __name__ == '__main__':
    main()
