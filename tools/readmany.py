"""Split what tools/readmany.sh captured into one answer per point.

Every press is a fixed number of instructions after the one before, so the
strings fall into windows; what matters is only the order they came in.
"""
import math
import os
import re
import sys

sys.stdout.reconfigure(encoding='utf-8', errors='replace')
pts = [float(v) for v in os.environ['PTS'].split()]
pts = list(zip(pts[0::2], pts[1::2]))
NAGASA = bytes([0x20, 0x92, 0xb7, 0x3d])
KAKUDO = bytes([0x20, 0x8a, 0x70, 0x93, 0x78, 0x3d])
NODATA = bytes([0x93, 0xc7, 0x8e, 0xe6, 0x89, 0xc2, 0x94, 0x5c])
NUM = re.compile(rb'(-?\d+\.\d+)')
# One window per point: the script is 40M to start and 40M for each press.
START = 40_000_000
STEP = (2_000_000 + int(os.environ.get('SETTLE', 20_000_000))
        + 3_000_000 + 3_000_000 + int(os.environ.get('AFTER', 12_000_000)))
got = [[None, None, False] for _ in pts]
for line in open('tmp/read/many_str.txt', encoding='latin-1'):
    f = line.split()
    if len(f) < 15 or f[0] != '[bp]' or line.count('"') < 2:
        continue
    t = int(f[3])
    k = (t - START) // STEP
    if k < 0 or k >= len(pts):
        continue
    s = line[line.index('"') + 1:line.rindex('"')].encode('latin-1')
    if s.startswith(NAGASA):
        got[k][0] = float(NUM.search(s).group(1))
    elif s.startswith(KAKUDO):
        got[k][1] = float(NUM.search(s).group(1))
    elif NODATA in s:
        got[k][2] = True
unit_mm = float(os.environ['UNIT_MM'])
denom = float(os.environ['DENOM'])
for (px, py), (length, angle, nothing) in zip(pts, got):
    if length is None or angle is None:
        print('(%g,%g) -> nothing read%s'
              % (px, py, '  (読取可能データ無)' if nothing else ''))
        continue
    r = length * unit_mm / denom
    dx = r * math.cos(math.radians(angle))
    dy = r * math.sin(math.radians(angle))
    ux, uy = px - 121.0, 463.0 - py
    print('(%g,%g) -> drawing (%.3f,%.3f)  screen (%.3f,%.3f)  [%.4f mm at %.3f deg]'
          % (px, py, ux - dx, uy - dy, ux - dx + 121.0, 463.0 - (uy - dy),
             length, angle))
