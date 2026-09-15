"""Turn what tools/read.sh captured into the point the original read.

With one point taken, the original writes the length and the angle from that
point to wherever the pointer is; tools/read.sh does not move the pointer after
the press, so the pair says exactly where the point it took is.
"""
import math
import os
import re
import sys

sys.stdout.reconfigure(encoding='utf-8', errors='replace')
px, py = float(os.environ['X']), float(os.environ['Y'])
NAGASA = bytes([0x20, 0x92, 0xb7, 0x3d])            # " 長="
KAKUDO = bytes([0x20, 0x8a, 0x70, 0x93, 0x78, 0x3d])  # " 角度="
NODATA = bytes([0x93, 0xc7, 0x8e, 0xe6, 0x89, 0xc2, 0x94, 0x5c])  # 読取可能
NUM = re.compile(rb'(-?\d+\.\d+)')
length = angle = None
nothing = False
for line in open('tmp/read/str.txt', encoding='latin-1'):
    f = line.split()
    if len(f) < 15 or f[0] != '[bp]' or line.count('"') < 2:
        continue
    if int(f[3]) < 66_000_000:
        continue
    s = line[line.index('"') + 1:line.rindex('"')].encode('latin-1')
    if s.startswith(NAGASA):
        length = float(NUM.search(s).group(1))
    elif s.startswith(KAKUDO):
        angle = float(NUM.search(s).group(1))
    elif NODATA in s:
        nothing = True
if length is None or angle is None:
    print('(%g,%g) -> nothing read%s'
          % (px, py, '  (読取可能データ無)' if nothing else ''))
    sys.exit(0)
# The band's length is millimetres of the real thing; jw_view_original is one
# drawing unit to the pixel, so units = mm * unit_mm.
unit_mm = float(os.environ.get('UNIT_MM', '1.744108'))
r = length * unit_mm
dx = r * math.cos(math.radians(angle))
dy = r * math.sin(math.radians(angle))
ux, uy = px - 121.0, 463.0 - py
print('(%g,%g) -> drawing (%.3f,%.3f)  screen (%.3f,%.3f)  [%.4f mm at %.3f deg]'
      % (px, py, ux - dx, uy - dy, ux - dx + 121.0, 463.0 - (uy - dy),
         length, angle))
