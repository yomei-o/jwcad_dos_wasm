"""The strings the original wrote after `since`, from tools/bar.sh's dump.

    AFTER=60000000 python tools/barstr.py [tmp/bar/str.txt]

tools/probe.py counts from the moment a menu item was picked, which the bottom
bar has nothing to do with, so this one just takes a plain instruction count.
"""
import os
import sys

path = sys.argv[1] if len(sys.argv) > 1 else 'tmp/bar/str.txt'
since = int(os.environ.get('AFTER', '0'))
last = {}
for line in open(path, encoding='latin-1'):
    f = line.split()
    if len(f) < 15 or f[0] != '[bp]' or line.count('"') < 2:
        continue
    t = int(f[3])
    if t < since:
        continue
    col, row, fg, bg = (int(f[8], 16), int(f[9], 16), int(f[10], 16),
                        int(f[11], 16))
    last[(col, row)] = (t, fg, bg, line[line.index('"') + 1:line.rindex('"')])
for (col, row), (t, fg, bg, s) in sorted(last.items(), key=lambda kv: kv[1][0]):
    b = s.encode('latin-1')
    sys.stdout.buffer.write(
        ('%12d col=%-3d row=%-3d fg=%d bg=%04x  ' % (t, col, row, fg, bg)).encode('utf-8')
        + b.decode('cp932', 'replace').encode('utf-8')
        + b'  | ' + b.hex(' ').encode('ascii') + b'\n')
