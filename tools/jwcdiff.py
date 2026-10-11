# -*- coding: utf-8 -*-
"""Two saved .JWC files, byte for byte: where they differ, in runs.

    python tools/jwcdiff.py tmp/func/orig.JWC tmp/func/port.JWC [names]

tools/functest.sh compares the records (lines, arcs, texts); this is for what
it does not look at -- the layer names and group names at the end of the file
(2048 bytes of layer names, then 256 of group names) and the tables in the
preamble.  The first 200 bytes of text lines carry the clock and are expected
to differ.
"""
import sys

a = open(sys.argv[1], 'rb').read()
b = open(sys.argv[2], 'rb').read()
print('sizes', len(a), len(b))
n = min(len(a), len(b))
runs = []
i = 0
while i < n:
    if a[i] != b[i]:
        j = i
        while j < n and a[j] != b[j]:
            j += 1
        runs.append((i, j))
        i = j
    else:
        i += 1
tail = len(a) - 2304
if len(sys.argv) > 3 and sys.argv[3] == 'names':
    runs = [r for r in runs if r[0] >= tail]       # the names only
for s, e in runs[:60]:
    where = 'preamble' if s < 1600 else ('names+%d' % (s - tail) if s >= tail else 'records')
    print('  %6d..%6d (%d)  %s  orig=%s port=%s' % (
        s, e, e - s, where, a[s:min(e, s + 12)].hex(), b[s:min(e, s + 12)].hex()))
print('%d runs' % len(runs))
