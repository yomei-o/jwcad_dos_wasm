"""Every string the original drew after a given instruction count, with the
arguments the character routine was handed.

    DUMP=tmp/sp/str.txt FROM=64000000 python tools/dumpstr.py

Prints `col row fg bg  text`, the last write to each cell kept in order.
"""
import os
import sys

sys.stdout.reconfigure(encoding='utf-8', errors='replace')
path = os.environ.get('DUMP', 'tmp/sp/str.txt')
lo = int(os.environ.get('FROM', '0'))
hi = int(os.environ.get('TO', '0')) or 1 << 62
seen = []
for line in open(path, encoding='latin-1'):
    f = line.split()
    if len(f) < 15 or f[0] != '[bp]' or line.count('"') < 2:
        continue
    t = int(f[3])
    if t < lo or t > hi:
        continue
    s = line[line.index('"') + 1:line.rindex('"')].encode('latin-1')
    if not s.strip():
        continue
    key = (int(f[8], 16), int(f[9], 16), int(f[10], 16), int(f[11], 16), s)
    if key in seen:
        continue
    seen.append(key)
    print('%9d col=%-3d row=%-3d fg=%d bg=%04x  %s'
          % (t, key[0], key[1], key[2], key[3], s.decode('cp932', 'replace')))
