"""Ask the original for the chain of straight pieces it makes one arc out of.

    python tools/qpoly.py 0,360,100,5000,89        # start,end,r,flatten,tilt
    python tools/qpoly.py 0,360,2.7,8068,89,291.6458,309.665     # ... and a centre

One arc goes into a copy of SAMPLE2 with everything else pushed off the paper,
the original draws it with a breakpoint on the line routine, and the vertices
are printed beside the port's own (which JW_TRACE=1 makes tests/drawing.exe
print).  Both lists are offsets from the centre, so what is left when they
disagree is the rounding, not the placing.
"""
import os
import struct
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from onlykind import FAR, Jwc
import lr

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
AX, AY = 121.0, 463.0
CX, CY = 380.0, 240.0                  # middle of the drawing area


def build(case, path):
    s, e, r, flat, tilt = case
    j = Jwc(os.path.join(ROOT, 'orig/SAMPLE2.JWC'))
    for k in ('lines', 'texts', 'points'):
        j.banish(k)
    for k in range(j.n_arcs):
        struct.pack_into('<ff', j.d, j.arcs_at + k * 32, FAR, FAR)
    p = j.arcs_at
    struct.pack_into('<fff', j.d, p, CX - AX, AY - CY, r)
    struct.pack_into('<h', j.d, p + 12, flat)
    struct.pack_into('<ii', j.d, p + 14,
                     int(round(s * 65536)), int(round(e * 65536)))
    struct.pack_into('<hh', j.d, p + 22, 0, tilt)
    j.d[p + 26], j.d[p + 27], j.d[p + 28] = 1, 2, 0
    open(path, 'wb').write(bytes(j.d))


def chain(calls, reach):
    """The vertex list of the one chain that is near the centre."""
    out = []
    for (x0, y0, x1, y1) in calls:
        if (abs(x0 - CX) > reach or abs(y0 - CY) > reach
                or abs(x1 - CX) > reach or abs(y1 - CY) > reach):
            continue
        if not out:
            out.append((x0, y0))
        out.append((x1, y1))
    return out


def main(args):
    global CX, CY
    case = [float(f) for f in args[0].split(',')]
    if len(case) > 5:
        CX, CY = case[5], case[6]
    case = (case[0], case[1], case[2], int(case[3]), int(case[4]))
    jwc = os.path.join(ROOT, 'orig/ONE.JWC')
    script = os.path.join(ROOT, 'tmp/ask/script.txt')
    log = os.path.join(ROOT, 'tmp/ask/qpoly.txt')
    build(case, jwc)
    open(script, 'w').write('wait 60000000' + chr(10) + 'quit' + chr(10))
    env = dict(os.environ, DOSEMU_BP='0EFF:17BB', DOSEMU_BPN='8',
               DOSEMU_BPPTR='2,3,4,5', DOSEMU_BPPTRAT='0', DOSEMU_BPPTRN='4')
    with open(log, 'w') as f:
        subprocess.check_call([os.path.join(ROOT, '../dosv_emu_cpp/dosemu.exe'),
                               '--root', os.path.join(ROOT, 'orig'),
                               '--font-ank', os.path.join(ROOT, 'font/JWANK16.FNT'),
                               '--font-kanji', os.path.join(ROOT, 'font/JWKAN16.FNT'),
                               '--script', script,
                               os.path.join(ROOT, 'orig/JW_CADV.EXE'), 'ONE.JWC'],
                              stdout=f, stderr=subprocess.DEVNULL, env=env)
    reach = case[2] + 4
    o = chain(lr.calls(log), reach)
    out = subprocess.check_output([os.path.join(ROOT, 'tests/drawing.exe'), '-o',
                                   jwc, os.path.join(ROOT, 'tmp/ask/qpoly.raw')],
                                  env=dict(os.environ, JW_TRACE='1')).decode()
    calls = []
    for ln in out.splitlines():
        if ln.startswith('('):
            a, b = ln.split(')-(')
            calls.append(tuple(float(v) for v in
                               (a[1:] + ',' + b[:-1]).split(',')))
    p = chain(calls, reach)
    os.remove(jwc)
    print('%-28s %s' % ('original', 'port'))
    for i in range(max(len(o), len(p))):
        a = '%+5d %+5d' % (round(o[i][0] - CX), round(o[i][1] - CY)) if i < len(o) else ' ' * 11
        b = '%+5d %+5d' % (round(p[i][0] - CX), round(p[i][1] - CY)) if i < len(p) else ''
        print('%2d  %s        %s   %s' % (i, a, b, '' if a.strip() == b.strip() else '<'))


if __name__ == '__main__':
    main(sys.argv[1:])
