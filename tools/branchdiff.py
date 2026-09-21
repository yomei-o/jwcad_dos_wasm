# -*- coding: utf-8 -*-
"""Every branch of the menus, the original against the port.

    python tools/branchdiff.py            # the table
    python tools/branchdiff.py --bad      # only the ones that differ

tools/branchorig.sh leaves tmp/branch/o<n>.raw and tools/branchport.mjs
leaves p<n>.raw.  This prints how many pixels apart each pair is, so the next
thing to build is the biggest number rather than a guess.
"""
import os
import sys

W, H = 640, 480
NAMES = {}


def load(path):
    d = open(path, 'rb').read()
    return d, len(d) // (W * H)


# The thin bar between the two menu columns is the session clock -- how long
# the drawing has been worked on (jwc.h, field 18).  The original has been
# running for as long as the batch takes and the port starts fresh, so it is
# never the same and never will be.  It is two pixels wide, at x 67 and 68.
CLOCK = (66, 69)


def diff(a, b):
    da, pa = load(a)
    db, pb = load(b)
    n = 0
    for y in range(H):
        row = y * W
        for x in range(W):
            if CLOCK[0] <= x <= CLOCK[1]:
                continue
            i = (row + x) * pa
            j = (row + x) * pb
            if da[i:i + 3] != db[j:j + 3]:
                n += 1
    return n


only_bad = '--bad' in sys.argv
lines = open('tmp/branch/list.txt', encoding='utf-8').read().strip().split('\n')
total = 0
shown = 0
for i, line in enumerate(lines):
    n = i + 1
    a = 'tmp/branch/o%d.raw' % n
    b = 'tmp/branch/p%d.raw' % n
    if not (os.path.exists(a) and os.path.exists(b)):
        continue
    d = diff(a, b)
    total += 1
    if d:
        shown += 1
    if d or not only_bad:
        menu, item, button = line.split()[:3]
        print('%4d  menu %-3s item %-2s %-6s %8d' % (n, menu, item, button, d))
print('-- %d compared, %d differ' % (total, shown))
