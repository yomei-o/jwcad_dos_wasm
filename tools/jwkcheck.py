# -*- coding: utf-8 -*-
"""Read a .JWK back and check its own header against its own records.

    python tools/jwkcheck.py tmp/zukei/grid/*.JWK

The three preview numbers are worked out again from the geometry in the file
and held against the ones written in it, in **float** -- which is what the
original does: SAMPLE0's BOX comes out 43.032700 in float and 43.032702 in
double, and the file says 43.032700.
"""
import glob
import math
import struct
import sys


def f32(v):
    return struct.unpack('<f', struct.pack('<f', v))[0]


def arc_extent(cx, cy, r, flatten, start, end, tilt):
    d2r = math.pi / 180.0 / 65536.0
    rx = r
    ry = r * (flatten / 10000.0 if flatten > 0 else 1.0)
    t = tilt * d2r
    ct, st = math.cos(t), math.sin(t)
    frm = start * d2r
    span = (2 * math.pi if end == start
            else (end - start if end > start else end + (360 << 16) - start) * d2r)
    cand = [frm, frm + span]
    cand.append(math.atan2(-ry * st, rx * ct))
    cand.append(cand[-1] + math.pi)
    cand.append(math.atan2(ry * ct, rx * st))
    cand.append(cand[-1] + math.pi)
    xs, ys = [], []
    for i, a in enumerate(cand):
        if i >= 2:
            off = math.fmod(a - frm, 2 * math.pi)
            if off < 0:
                off += 2 * math.pi
            if off > span:
                continue
        xs.append(cx + rx * math.cos(a) * ct - ry * math.sin(a) * st)
        ys.append(cy + rx * math.cos(a) * st + ry * math.sin(a) * ct)
    return min(xs), min(ys), max(xs), max(ys)


def check(path):
    d = open(path, 'rb').read()
    nl = d.find(b'\n')
    csv = d[nl + 1:d.find(b'\x00', nl)].decode('latin-1').split(',')
    n_line, n_arc, n_point, n_text = [int(v) for v in csv[:4]]
    xs, ys = [0.0], [0.0]
    o = 0x190
    for _ in range(n_line):
        a = struct.unpack_from('<4f', d, o)
        xs += [a[0], a[2]]
        ys += [a[1], a[3]]
        o += 22
    for _ in range(n_arc):
        cx, cy, r = struct.unpack_from('<3f', d, o)
        fl = struct.unpack_from('<h', d, o + 12)[0]
        st, en, ti = struct.unpack_from('<3i', d, o + 14)
        x0, y0, x1, y1 = arc_extent(cx, cy, r, fl, st, en, ti)
        xs += [x0, x1]
        ys += [y0, y1]
        o += 32
    for _ in range(n_point):
        x, y = struct.unpack_from('<2f', d, o)
        xs.append(x)
        ys.append(y)
        o += 12
    pool_at = o + n_text * 24
    for _ in range(n_text):
        a = struct.unpack_from('<4f', d, o)
        xs += [a[0], a[2]]
        ys += [a[1], a[3]]
        o += 24
    span = f32(max(max(xs) - min(xs), max(ys) - min(ys)))
    s = f32(88.0 / span) if span > 0 else 0.0
    n1 = f32(4.0 + f32(s * f32(-min(min(xs), 0.0))))
    n2 = f32(4.0 + f32(s * f32(-min(min(ys), 0.0))))
    want = '%f,%f,%f,%d' % (n1, n2, s, len(d) - pool_at)
    have = ','.join(csv[4:8])
    print('%-28s %s  %s' % (path, 'OK ' if want == have else '**', have),
          '' if want == have else '(worked out ' + want + ')')


for arg in sys.argv[1:]:
    for f in sorted(glob.glob(arg)) or [arg]:
        check(f)
