"""Put one case of tools/snapcheck.sh side by side and say `same` or why not.

The original's answer has to be worked out: it writes the length and the angle
from the point it took to wherever the pointer is, and tools/readmod.py has
already turned the last such pair into an offset in screen dots.  Adding the
place the script left the pointer gives the point.  The port prints its own
point outright.

When no point was taken at all -- the read found nothing, or a modifier put the
original into a snap mode and it is waiting for the second press -- there is no
pair, and the two are compared by what they say instead.
"""
import io
import os
import re
import sys

out = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8', errors='replace',
                       newline='')
orig = os.environ['ORIG']
port = os.environ['PORT']
ax, ay = (float(v) for v in os.environ['AT'].split())

OFFSET = re.compile(r'point is \(([-+0-9.]+),([-+0-9.]+)\)')
SCREEN = re.compile(r'screen \(([-0-9.]+),([-0-9.]+)\)')

# The original: the last offset it printed, against the pointer it was left at.
hits = OFFSET.findall(orig)
o = (ax + float(hits[-1][0]), ay + float(hits[-1][1])) if hits else None
# The port: the point it says it took, if it took one.
m = SCREEN.search(port)
p = (float(m.group(1)), float(m.group(2))) if m and port.startswith('point') else None

if o is None or p is None:
    # Neither took a point, or only one did.  What state the original was
    # left in is the **last** of its three markers to appear, not its last
    # line: a read that finds nothing writes 読取可能データ無 and then puts the
    # command's own line back over it.
    said = ''
    for line in orig.splitlines():
        for mark in ('線･円上点スナップ', 'Ｂ点', '読取可能データ無'):
            if mark in line:
                said = mark
    if o is None and p is None and said and said in port:
        out.write('same\n')
    else:
        out.write('original: %s\nport:     %s\n'
                  % (said or '(took a point)', port.strip()))
    out.flush()
    sys.exit(0)

# A thousandth of a millimetre of paper is the width of the original's field;
# in screen dots that is unit_mm/denom thousandths, and five thousandths of a
# dot covers every drawing here.
if abs(o[0] - p[0]) < 0.01 and abs(o[1] - p[1]) < 0.01:
    out.write('same\n')
else:
    out.write('original: screen (%.3f,%.3f)\nport:     screen (%.3f,%.3f)\n'
              % (o[0], o[1], p[0], p[1]))
out.flush()
