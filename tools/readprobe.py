"""Where each press of tools/readprobe.sh dropped its 仮点, if it dropped one."""
import os
import sys

W = 640
pts = [float(v) for v in os.environ['PTS'].split()]
pts = list(zip(pts[0::2], pts[1::2]))
prev = open('tmp/probe/b.raw', 'rb').read()
for i, (px, py) in enumerate(pts):
    cur = open('tmp/probe/s%d.raw' % i, 'rb').read()
    hit = [(x, y) for y in range(40, 463) for x in range(122, 639)
           if prev[(y * W + x) * 4:(y * W + x) * 4 + 3]
           != cur[(y * W + x) * 4:(y * W + x) * 4 + 3]]
    if hit:
        xs = [p[0] for p in hit]
        ys = [p[1] for p in hit]
        print('  press %d at (%g,%g) -> ring at (%.1f,%.1f)'
              % (i, px, py, (min(xs) + max(xs)) / 2.0, (min(ys) + max(ys)) / 2.0))
    else:
        print('  press %d at (%g,%g) -> nothing' % (i, px, py))
    prev = cur
