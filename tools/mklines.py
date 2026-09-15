"""Make a drawing of short lines, to ask the original how it rasterises them.

    python tools/mklines.py orig/SAMPLE6.JWC orig/QLINE.JWC

Every other entity is pushed off the paper and the first N line records are
replaced by a grid of short segments: for each length in tenths of a pixel and
each of eight directions, one segment starting at a known place.  Reading the
screen back says, for every length and direction, how many pixels the original
lights -- which is the one thing a Bresenham cannot be guessed into.

The segments are laid out eight to a row, ten pixels apart, so no two touch.
`spec()` returns the same list the drawing was built from, so the reader can
line them up without repeating the arithmetic.
"""
import math
import struct
import sys

from onlykind import FAR, Jwc

AX, AY = 121.0, 463.0
DIRS = [(1, 0), (1, 1), (0, 1), (-1, 1), (-1, 0), (-1, -1), (0, -1), (1, -1)]
LENS = [0.3, 0.5, 0.8, 1.0, 1.34]
# Where inside its pixel each segment starts, x and y separately.  It matters,
# and not symmetrically: a diagonal segment under a pixel long can cross into
# the next row without crossing into the next column, and then its two ends
# truncate to a *vertical* pair while the walk is diagonal.
FRACS = [(0.25, 0.25), (0.9, 0.9), (0.05, 0.3), (0.3, 0.05), (0.9, 0.3)]


def spec():
    """(index, screen x0, y0, x1, y1) for every segment."""
    out = []
    n = 0
    for fi, (fx, fy) in enumerate(FRACS):
        for li, L in enumerate(LENS):
            for di, (ux, uy) in enumerate(DIRS):
                m = math.hypot(ux, uy)
                x0 = 150.0 + di * 30 + fx
                y0 = 60.0 + (fi * len(LENS) + li) * 14 + fy
                out.append((n, x0, y0, x0 + L * ux / m, y0 + L * uy / m))
                n += 1
    return out


def main():
    src, out = sys.argv[1], sys.argv[2]
    j = Jwc(src)
    for k in ('arcs', 'texts', 'points'):
        j.banish(k)
    segs = spec()
    if len(segs) > j.n_lines:
        raise SystemExit('%s has only %d lines' % (src, j.n_lines))
    for k in range(j.n_lines):
        p = j.at + k * 22
        for i in range(4):
            struct.pack_into('<f', j.d, p + i * 4, FAR + (i % 2) * 10.0)
    for n, x0, y0, x1, y1 in segs:
        p = j.at + n * 22
        struct.pack_into('<ffff', j.d, p,
                         x0 - AX, AY - y0, x1 - AX, AY - y1)
        j.d[p + 16] = 1          # solid
        j.d[p + 17] = 2          # pen 2, white
        j.d[p + 18] = 0          # layer 0
    open(out, 'wb').write(bytes(j.d))
    print('%s: %d short lines -> %s' % (src, len(segs), out))


if __name__ == '__main__':
    main()
