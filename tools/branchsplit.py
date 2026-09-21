# -*- coding: utf-8 -*-
"""Which branches are only a line of words, and which are a whole screen.

    python tools/branchsplit.py

Writes tmp/branch/line.txt (the ones whose only difference is in row 1) and
tmp/branch/screen.txt (the rest).  The first are what src/item.h covers; the
second have to be built one at a time.
"""
W, H = 640, 480
CLOCK = (66, 69)


def load(p):
    d = open(p, 'rb').read()
    return d, len(d) // (W * H)


line, screen = [], []
for row in open('tmp/branch/table.txt', encoding='utf-8'):
    f = row.split()
    if len(f) < 7 or not f[0].isdigit() or int(f[-1]) == 0:
        continue
    n = int(f[0])
    da, pa = load('tmp/branch/o%d.raw' % n)
    db, pb = load('tmp/branch/p%d.raw' % n)
    deep = False
    for y in range(16, H):
        for x in range(W):
            if CLOCK[0] <= x <= CLOCK[1]:
                continue
            i, j = (y * W + x) * pa, (y * W + x) * pb
            if da[i:i + 3] != db[j:j + 3]:
                deep = True
                break
        if deep:
            break
    (screen if deep else line).append(n)

open('tmp/branch/line.txt', 'w').write(' '.join(map(str, line)) + '\n')
open('tmp/branch/screen.txt', 'w').write(' '.join(map(str, screen)) + '\n')
print('row 1 only: %d   whole screen: %d' % (len(line), len(screen)))
