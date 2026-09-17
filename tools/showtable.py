"""Print a generated stage table as text, to check what was captured.

    python tools/showtable.py src/copy.h
"""
import re
import sys

sys.stdout.reconfigure(encoding='utf-8', errors='replace')
B = chr(92)
ROW = re.compile(r'\s*\{ *(\d+), *(\d+), *(\d+), *(\d+),')
for line in open(sys.argv[1], encoding='utf-8'):
    if '/*' in line and 'stage' in line:
        print(line.rstrip())
        continue
    m = ROW.match(line)
    if not m or '"' not in line:
        continue
    q = line[line.index('"'):line.rindex('"') + 1]
    b = bytearray()
    i = 0
    while i < len(q):
        if q[i] == B and q[i + 1] == 'x':
            b.append(int(q[i + 2:i + 4], 16))
            i += 4
        elif q[i] in '" ':
            i += 1
        else:
            b.append(ord(q[i]))
            i += 1
    print('  cmd%-3s st%-3s col%-3s row%s  %s'
          % (m.group(1), m.group(2), m.group(3), m.group(4),
             bytes(b).decode('cp932', 'replace')[:64]))
