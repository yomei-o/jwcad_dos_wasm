# -*- coding: utf-8 -*-
"""The line segments in one cell of ｵﾌﾟｼｮﾝ's 建具 screen.

    python tools/tatecell.py tmp/branch/o256.raw 2

Cells are numbered the way the original labels them, [1] to [16], two to a row
and eight rows of 48 pixels.  Prints every horizontal and vertical run in the
cell, with the `[n]` label's own pixels left out, so the shapes can be put
beside what orig/JW_OPT1.DAT says they are.
"""
import sys

W, H = 640, 480


def load(path):
    d = open(path, 'rb').read()
    return d, len(d) // (W * H)


def runs(vals):
    out = []
    if not vals:
        return out
    s = p = vals[0]
    for v in vals[1:]:
        if v != p + 1:
            out.append((s, p))
            s = v
        p = v
    out.append((s, p))
    return out


path = sys.argv[1]
n = int(sys.argv[2])
rows = int(sys.argv[3]) if len(sys.argv) > 3 else 8
d, step = load(path)
lit = lambda x, y: d[((y * W + x) * step):((y * W + x) * step) + 3] != b'\x00\x00\x00'

per = 16 if rows == 8 else 32
tall = 48 if rows == 8 else 96
col = (n - 1) % (2 if rows == 8 else 4)
row = (n - 1) // (2 if rows == 8 else 4)
wide = (638 - 122) // (2 if rows == 8 else 4)
x0 = 122 + col * (wide + 1)
x1 = x0 + wide
y0 = 17 + row * tall
y1 = y0 + tall - 2
print('cell [%d]  x %d..%d  y %d..%d' % (n, x0, x1, y0, y1))

# the label `[n]` sits in the top-left; skip its columns on its own rows
for y in range(y0, y1 + 1):
    r = [x for x in range(x0, x1 + 1) if lit(x, y)]
    if not r:
        continue
    if y < y0 + 16:
        r = [x for x in r if x > x0 + 30]
    if r:
        print('  y=%-4d %s' % (y, runs(r)))
