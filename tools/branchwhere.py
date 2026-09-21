# -*- coding: utf-8 -*-
"""Where a branch still differs.

    python tools/branchwhere.py 7

tools/branchdiff.py says how many pixels a branch is out; this says which.
It prints the bounding box of the run, the rows it touches, and for each row
the columns -- in character cells as well as pixels, because everything on
these screens is written a cell at a time and a cell is 8 by 16.
"""
import sys

W, H = 640, 480
CLOCK = (66, 69)


def load(path):
    d = open(path, 'rb').read()
    return d, len(d) // (W * H)


n = int(sys.argv[1])
da, pa = load('tmp/branch/o%d.raw' % n)
db, pb = load('tmp/branch/p%d.raw' % n)

rows = {}
for y in range(H):
    for x in range(W):
        if CLOCK[0] <= x <= CLOCK[1]:
            continue
        i = (y * W + x) * pa
        j = (y * W + x) * pb
        if da[i:i + 3] != db[j:j + 3]:
            rows.setdefault(y, []).append(x)

if not rows:
    print('branch %d: nought' % n)
    raise SystemExit

ys = sorted(rows)
xs = [x for r in rows.values() for x in r]
print('branch %d: %d px  x %d..%d  y %d..%d  (cells col %d..%d row %d..%d)'
      % (n, len(xs), min(xs), max(xs), ys[0], ys[-1],
         min(xs) // 8 + 1, max(xs) // 8 + 1, ys[0] // 16 + 1, ys[-1] // 16 + 1))
for y in ys:
    r = rows[y]
    print('  y=%-3d row=%-3d  x %d..%d  cols %d..%d  (%d px)'
          % (y, y // 16 + 1, min(r), max(r),
             min(r) // 8 + 1, max(r) // 8 + 1, len(r)))
