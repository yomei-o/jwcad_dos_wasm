"""Print the panel strings tools/panel.sh captured, and the preamble they
come from.  Run through tools/panel.sh, not on its own."""
import sys

sys.stdout.reconfigure(encoding="utf-8", errors="replace")

name = sys.argv[1]
rows = {2: 'counts', 20: 'pen', 21: 'paper', 22: 'group', 30: 'zoom'}
seen = []
for line in open('tmp/panel_%s.txt' % name, encoding='latin-1'):
    f = line.split()
    if len(f) < 15:
        continue
    col, row = int(f[8], 16), int(f[9], 16)
    if row not in rows:
        continue
    s = line[line.index('"') + 1:line.rindex('"')]
    key = (row, col, f[10], s)
    if key in seen:
        continue
    seen.append(key)
    print('   row %-2d col %-2d fg=%s  %r' % (row, col, f[10], s))
head = open('orig/%s.JWC' % name, 'rb').read(600)
for i in (1, 2):
    print('   line%d %s' % (i, head[i * 200:(i + 1) * 200].split(b'\x00')[0]
                            .split(b'\n')[0].decode('latin-1').strip()))
