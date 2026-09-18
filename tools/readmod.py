"""Print what tools/readmod.sh saw the original write, in order.

Only the interesting strings: blanks and the unchanged parts of the panel are
dropped, because what matters is which words appeared and when.

A `長=`/`角度=` pair is the rubber band from the point the command has taken to
wherever the pointer is, so it says where that point is -- but only relative to
the pointer, which moves during a probe.  Each pair is therefore printed as the
**screen offset from the pointer**: add it to whatever position the script had
the pointer at, and that is the point the original took.
"""
import io
import math
import os
import re
import sys

out = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8', errors='replace',
                       newline='')
frm = int(os.environ.get('FROM', '60000000'))
unit_mm = float(os.environ.get('UNIT_MM', '0'))
denom = float(os.environ.get('DENOM', '1'))
NUM = re.compile(r'(-?\d+\.\d+)')
last = None
length = None
for line in open('tmp/read/mod_str.txt', encoding='latin-1'):
    f = line.split()
    if len(f) < 15 or f[0] != '[bp]' or line.count('"') < 2:
        continue
    if int(f[3]) < frm:
        continue
    s = line[line.index('"') + 1:line.rindex('"')].encode('latin-1')
    if not s.strip() or s.strip(b'\x20|') == b'':
        continue
    t = s.decode('shift_jis', errors='replace')
    if t == last:
        continue
    last = t
    # The column and the row the original wrote at, which is what the
    # port has to match to put the same string in the same place.
    out.write('%12s  c%-3d r%-2d  %s\n'
              % (f[3], int(f[8], 16), int(f[9], 16), t))
    if t.startswith(' 長='):
        length = float(NUM.search(t).group(1))
    elif t.startswith(' 角度=') and length is not None and unit_mm:
        a = math.radians(float(NUM.search(t).group(1)))
        r = length * unit_mm / denom
        # point = pointer - r*(cos,sin) in drawing units with y up, and the
        # original's view is one unit to the pixel.
        out.write('%12s  -> point is (%+.3f,%+.3f) screen dots from the pointer\n'
                  % ('', -r * math.cos(a), r * math.sin(a)))
        length = None
out.flush()
