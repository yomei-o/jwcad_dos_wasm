"""Print the strings tools/menus.sh captured after a menu item was picked.

Only what came after the click: everything before it is the screen the drawing
was already showing, which tools/full.sh already checks."""
import sys

sys.stdout.reconfigure(encoding='utf-8', errors='replace')
AFTER = 42_000_000
for line in open('tmp/menus/s%s.txt' % sys.argv[1], encoding='latin-1'):
    f = line.split()
    if len(f) < 15 or f[0] != '[bp]':
        continue
    if int(f[3]) < AFTER:
        continue
    s = line[line.index('"') + 1:line.rindex('"')]
    print('   t=%-10s col=%-3d row=%-3d fg=%s bg=%s  %r'
          % (f[3], int(f[8], 16), int(f[9], 16), f[10], f[11], s))
