"""Endpoints far enough from every other readable point to probe on their own.

    python tools/isolated.py orig/SAMPLE1.JWC [how many]

A readable point is a line's two ends and a text's two ends (tools/read.sh says
those are what the original's 読取 takes).  Printed as screen pixels, which is
what the probes press.
"""
import struct
import sys

sys.path.insert(0, 'tools')
from onlykind import Jwc

j = Jwc(sys.argv[1])
d = j.d
# The same two tables src/jwc.c reads: the groups shown and the layers shown.
group_on = d[j.at - 288:j.at - 272]
layer_on = d[j.at - 272:j.at - 16]


def visible(lay):
    return layer_on[lay] and group_on[lay >> 4]

want = int(sys.argv[2]) if len(sys.argv) > 2 else 6
cand = []
for k in range(j.n_lines):
    p = j.at + k * 22
    x0, y0, x1, y1 = struct.unpack_from('<ffff', d, p)
    lay = d[p + 18]
    if visible(lay):
        cand += [(x0 + 121, 463 - y0, lay), (x1 + 121, 463 - y1, lay)]
for k in range(j.n_texts):
    p = j.texts_at + k * 24
    x0, y0, x1, y1 = struct.unpack_from('<ffff', d, p)
    lay = d[p + 17]
    if visible(lay):
        cand += [(x0 + 121, 463 - y0, lay), (x1 + 121, 463 - y1, lay)]
out = []
for i, (x, y, lay) in enumerate(cand):
    if not (140 < x < 620 and 40 < y < 450):
        continue
    m = min(abs(x - b[0]) + abs(y - b[1]) for jx, b in enumerate(cand) if jx != i)
    if m > 20:
        out.append((round(m, 1), round(x, 2), round(y, 2), lay))
out.sort(reverse=True)
for m, x, y, lay in out[:want]:
    print('%7.2f %7.2f  layer %02x  margin %.1f' % (x, y, lay, m))
