"""Every string tools/probe.sh's run wrote, in the order the cells were last
touched, and the top line as it ended up.

The bare list is what the stage tables are made of; the assembled line is what
the screen says, which is the quicker thing to read."""
import os
import sys

sys.stdout.reconfigure(encoding='utf-8', errors='replace')

last = {}
order = []
for line in open('tmp/probe/str.txt', encoding='latin-1'):
    f = line.split()
    if len(f) < 15 or f[0] != '[bp]' or line.count('"') < 2:
        continue
    t = int(f[3])
    if t < 60_000_000:
        continue
    s = line[line.index('"') + 1:line.rindex('"')]
    cell = (int(f[8], 16), int(f[9], 16))
    if cell not in last:
        order.append(cell)
    last[cell] = (t, s, int(f[10], 16), int(f[11], 16))

for cell in order:
    t, s, fg, bg = last[cell]
    if not s.strip():
        continue
    b = s.encode('latin-1')
    print('  %-10d col=%-3d row=%-2d fg=%d bg=%d  %s  | %s'
          % (t, cell[0], cell[1], fg, bg, b.decode('cp932', 'replace'), b.hex(' ')))

for row in (1, 2, 3):
    line = [' '] * 90
    for (col, r), (t, s, fg, bg) in last.items():
        if r != row:
            continue
        for k, ch in enumerate(s.encode('latin-1').decode('cp932', 'replace')):
            if col - 1 + k < 90:
                line[col - 1 + k] = ch
    text = ''.join(line).rstrip()
    if text:
        print('  row %d: %s' % (row, text))
