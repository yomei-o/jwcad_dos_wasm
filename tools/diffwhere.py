# -*- coding: utf-8 -*-
"""Where two screens differ, as rows, columns and colour pairs.

    python tools/diffwhere.py tmp/seq/orig.raw tmp/seq/port.raw

tools/fulldiff.py counts the pixels and boxes them; this says which text rows
they are on and which colour turned into which, which is what tells a band
that is one row too tall from a word in the wrong place.
"""
import collections
import sys

W, H = 640, 480

a = open(sys.argv[1], 'rb').read()
b = open(sys.argv[2], 'rb').read()
rows = collections.Counter()
cols = collections.Counter()
pair = collections.Counter()
n = 0
for y in range(H):
    for x in range(W):
        i = (y * W + x) * 4
        if a[i:i + 3] != b[i:i + 3]:
            n += 1
            rows[y] += 1
            cols[x] += 1
            pair[(a[i:i + 3][::-1].hex(), b[i:i + 3][::-1].hex())] += 1
print('%d different' % n)
if not n:
    sys.exit(0)
print('colours (original -> port):')
for (o, p), k in pair.most_common(8):
    print('  %s -> %s : %d' % (o, p, k))
print('rows (text row in brackets):')
for y, k in sorted(rows.items()):
    print('  y %3d [row %2d] : %d' % (y, y // 16 + 1, k))
print('columns %d..%d' % (min(cols), max(cols)))
