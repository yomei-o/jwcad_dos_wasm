"""Ask the original what it plots for a list of small circular arcs.

    python tools/qarc.py "270,0 270,1 270,5"      # start,end[,r[,flatten,tilt]]

Each case becomes one arc record in a copy of SAMPLE6 with everything else
pushed off the paper, laid out on a grid so the cases cannot touch.  The
original is run in the emulator and the port on the same file, and each case is
printed as the set of offsets from its centre with the angle each one sits at
(mathematical angles, y up, which is what the record's own two angles are).

The mouse pointer is on the screen too; a run with every arc banished as well
gives the pixels to ignore.
"""
import json
import math
import os
import struct
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from onlykind import FAR, Jwc

W, H = 640, 480
AX, AY = 121.0, 463.0                 # the drawing area's origin, in pixels
COLS, X0, XS = 15, 150, 30
ROWS, Y0, YS = 8, 120, 40
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def build(cases, path, banish_arcs=False):
    j = Jwc(os.path.join(ROOT, 'orig/SAMPLE6.JWC'))
    if len(cases) > j.n_arcs:
        raise SystemExit('only %d arc records to borrow' % j.n_arcs)
    for k in ('lines', 'texts', 'points'):
        j.banish(k)
    for k in range(j.n_arcs):
        struct.pack_into('<ff', j.d, j.arcs_at + k * 32, FAR, FAR)
    if not banish_arcs:
        for i, c in enumerate(cases):
            s, e, r, flat, tilt = c
            cx, cy = X0 + (i % COLS) * XS, Y0 + (i // COLS) * YS
            p = j.arcs_at + i * 32
            struct.pack_into('<fff', j.d, p, cx - AX, AY - cy, r)
            struct.pack_into('<h', j.d, p + 12, flat)
            struct.pack_into('<ii', j.d, p + 14,
                             int(round(s * 65536)), int(round(e * 65536)))
            struct.pack_into('<hh', j.d, p + 22, 0, tilt)
            j.d[p + 26], j.d[p + 27], j.d[p + 28] = 1, 2, 0
    open(path, 'wb').write(bytes(j.d))


def shot(jwc, out, port):
    if port:
        subprocess.check_call([os.path.join(ROOT, 'tests/drawing.exe'),
                               '-o', jwc, out], stdout=subprocess.DEVNULL)
    else:
        script = os.path.join(ROOT, 'tmp/ask/script.txt')
        open(script, 'w').write('wait 60000000\nshot %s\n'
                                % os.path.abspath(out).replace(chr(92), '/'))
        subprocess.check_call([os.path.join(ROOT, '../dosv_emu_cpp/dosemu.exe'),
                               '--root', os.path.join(ROOT, 'orig'),
                               '--font-ank', os.path.join(ROOT, 'font/JWANK16.FNT'),
                               '--font-kanji', os.path.join(ROOT, 'font/JWKAN16.FNT'),
                               '--script', script,
                               os.path.join(ROOT, 'orig/JW_CADV.EXE'),
                               os.path.basename(jwc)],
                              stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)


def lit(raw):
    d = open(raw, 'rb').read()
    return set((x, y) for y in range(H) for x in range(W)
               if d[(y * W + x) * 4] or d[(y * W + x) * 4 + 1]
               or d[(y * W + x) * 4 + 2])


def ang(dx, dy):
    return math.degrees(math.atan2(-dy, dx)) % 360.0


def around(pix, cx, cy, r):
    w = int(r) + 3
    return sorted(((x - cx, y - cy) for (x, y) in pix
                   if abs(x - cx) <= w and abs(y - cy) <= w),
                  key=lambda p: ang(*p))


def parse(arg):
    f = arg.split(',')
    s, e = float(f[0]), float(f[1])
    r = float(f[2]) if len(f) > 2 else 5.0
    flat = int(f[3]) if len(f) > 3 else 10000
    tilt = int(f[4]) if len(f) > 4 else 0
    return (s, e, r, flat, tilt)


def main(args):
    cases = [parse(a) for a in args]
    if len(cases) > COLS * ROWS:
        raise SystemExit('too many cases for the grid')
    jwc = os.path.join(ROOT, 'orig/ONE.JWC')
    tmp = os.path.join(ROOT, 'tmp/ask')
    bg = os.path.join(tmp, 'bg.raw')
    if not os.path.exists(bg):
        build([], jwc, banish_arcs=True)
        shot(jwc, bg, False)
    back = lit(bg)
    build(cases, jwc)
    shot(jwc, os.path.join(tmp, 'q_o.raw'), False)
    shot(jwc, os.path.join(tmp, 'q_p.raw'), True)
    os.remove(jwc)
    o = lit(os.path.join(tmp, 'q_o.raw')) - back
    p = lit(os.path.join(tmp, 'q_p.raw')) - back
    for i, c in enumerate(cases):
        s, e, r, flat, tilt = c
        cx, cy = X0 + (i % COLS) * XS, Y0 + (i // COLS) * YS
        oa, ob = around(o, cx, cy, r), around(p, cx, cy, r)
        print('%7.2f..%7.2f r%-5g flat%-6d tilt%-4d %s' %
              (s, e, r, flat, tilt, 'same' if oa == ob else 'DIFF'))
        print('   orig %s' % ' '.join('%g' % ang(*q) for q in oa))
        if oa != ob:
            print('   port %s' % ' '.join('%g' % ang(*q) for q in ob))


if __name__ == '__main__':
    main(sys.argv[1:])
