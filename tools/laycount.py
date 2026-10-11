# -*- coding: utf-8 -*-
"""How many lines are on each layer byte, in two functest dumps.

    python tools/laycount.py tmp/func/orig.txt tmp/func/port.txt
"""
import re
import sys
from collections import Counter

cs = []
for p in sys.argv[1:3]:
    c = Counter()
    for l in open(p, encoding='utf-8', errors='replace'):
        m = re.search(r'type=(\d+) pen=(\d+) lay=([0-9a-f]+)', l)
        if m:
            c[m.group(3)] += 1
    cs.append(c)
for k in sorted(set(cs[0]) | set(cs[1])):
    flag = '' if cs[0][k] == cs[1][k] else '   <-- differs'
    print('lay=%s  orig %5d  port %5d%s' % (k, cs[0][k], cs[1][k], flag))
