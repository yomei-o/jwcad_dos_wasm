"""Compare one answer from the original with the port's.

    ORIG='(165,143) -> drawing (...)' PORT='...' python tools/readcheck.py

Numbers are compared with a tolerance, not as text: the original's point is
worked back out of a length and an angle that the band prints to three decimals
each, so a thousandth of a drawing unit is the arithmetic's own noise and not a
difference between the two.  "nothing read" has to match exactly.
"""
import os
import re
import sys

sys.stdout.reconfigure(encoding='utf-8', errors='replace')
TOL = 0.01
a, b = os.environ['ORIG'], os.environ['PORT']
NUM = re.compile(r'drawing \((-?\d+\.\d+),(-?\d+\.\d+)\)')
ma, mb = NUM.search(a), NUM.search(b)
if (ma is None) != (mb is None):
    same = False
elif ma is None:
    same = ('nothing read' in a) == ('nothing read' in b)
else:
    same = (abs(float(ma.group(1)) - float(mb.group(1))) <= TOL
            and abs(float(ma.group(2)) - float(mb.group(2))) <= TOL)
print('same' if same else 'differs')
