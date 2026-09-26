# -*- coding: utf-8 -*-
"""傾いた文字枠の**向こう側の角の出し方**を、推測ではなく表から決めます。

    python tools/boxrule.py TEST3 TEST7 TEST2 TEST1

本物の線引きルーチンに仕掛けて枠の 5 本を拾い（tools/qbox.py と同じ）、
移植が持っている元の小数と並べて、候補の規則ごとに**何個合うか**を数えます。
2026-09-26 の 90 個での結果:

    floor(int+hn)        89/90   ← いまの src/view.c
    16.16>>16            87/90
    int-dir floor        85/90
    int+(int)(hn)        56/90
    16.16 round          55/90
    floorx/ceily(float)  52/90
    floorx/ceily(int)    45/90

**推測で直す前にこれを走らせること。** 同じ日に 2 つの案（小数から出す／
離れを切り捨ててから足す）を当てて、6 画素を 593・668 画素に増やしました。
"""

import math
import os
import subprocess
import sys

sys.path.insert(0, 'tools')
from lr import calls                                        # noqa: E402


def gather(name):
    only = 'orig/%sBOX.JWC' % name[:2]
    subprocess.check_call([sys.executable, 'tools/onlykind.py',
                           'orig/%s.JWC' % name, 'texts', only],
                          stdout=subprocess.DEVNULL)
    os.makedirs('tmp/ask', exist_ok=True)
    os.makedirs('tmp/work', exist_ok=True)
    open('tmp/ask/script.txt', 'w').write('wait 60000000' + chr(10)
                                          + 'quit' + chr(10))
    env = dict(os.environ, DOSEMU_BP='+0DEF:17BB', DOSEMU_BPN='8',
               DOSEMU_BPPTR='2,3,4,5', DOSEMU_BPPTRAT='0', DOSEMU_BPPTRN='4')
    log = 'tmp/work/lr_%s.txt' % name
    with open(log, 'w') as f:
        subprocess.check_call(
            ['../dosv_emu_cpp/dosemu.exe', '--root', 'orig',
             '--font-ank', 'font/JWANK16.FNT',
             '--font-kanji', 'font/JWKAN16.FNT',
             '--script', 'tmp/ask/script.txt', 'orig/JW_CADV.EXE',
             os.path.basename(only)],
            stdout=f, stderr=subprocess.DEVNULL, env=env)
    out = subprocess.check_output(
        ['./tests/drawing.exe', '-o', only, 'tmp/work/box.raw'],
        env=dict(os.environ, JW_TRACE='1')).decode('cp932','replace')
    os.remove(only)

    seq = [tuple(int(round(v)) for v in c) for c in calls(log)]
    rows = []
    for l in out.splitlines():
        if not l.startswith('box'):
            continue
        head = l[4:l.index(' u=')]
        a, b = head.split(')-(')
        x0, y0 = [float(v) for v in a[1:].split(',')]
        x1, y1 = [float(v) for v in b[:-1].split(',')]
        ux, uy = [float(v) for v in
                  l[l.index('u=(') + 3:l.index(') h=')].split(',')]
        rest = l[l.index(' h=') + 3:].split()
        h = int(rest[0])
        pts = [tuple(int(v) for v in p.split(',')) for p in rest[1:]]
        near_a, near_b = pts[0], pts[1]
        hit = None
        for i in range(len(seq) - 4):
            if seq[i][:2] == near_a and seq[i][2:] == near_b:
                hit = seq[i:i + 5]
                break
        if not hit:
            continue
        rows.append(dict(x0=x0, y0=y0, x1=x1, y1=y1, ux=ux, uy=uy, h=h,
                         a=near_a, b=near_b,
                         c=hit[1][2:], d=hit[2][2:]))
    return rows


def rules(r):
    """候補ごとに (cx, cy, dx, dy) を返します。"""
    nx, ny = r['uy'], -r['ux']
    h = r['h']
    ax, ay = r['a']
    bx, by = r['b']
    x0, y0, x1, y1 = r['x0'], r['y0'], r['x1'], r['y1']
    th = math.atan2(r['uy'], r['ux'])
    out = {}
    out['floor(int+hn)'] = (math.floor(bx + h * nx), math.floor(by + h * ny),
                            math.floor(ax + h * nx), math.floor(ay + h * ny))
    out['int+(int)(hn)'] = (bx + int(h * nx), by + int(h * ny),
                            ax + int(h * nx), ay + int(h * ny))
    out['floorx/ceily(int)'] = (math.floor(bx + h * nx), math.ceil(by + h * ny),
                                math.floor(ax + h * nx), math.ceil(ay + h * ny))
    out['floorx/ceily(float)'] = (math.floor(x1 + h * nx),
                                  math.ceil(y1 + h * ny),
                                  math.floor(x0 + h * nx),
                                  math.ceil(y0 + h * ny))
    # **丸めたあとの整数の角から向きを取る**案: a と b は既に整数なので、
    # ほぼ真上の枠なら向きはきっかり (0,1) になり、極小の横成分が消えます。
    idx, idy = bx - ax, by - ay
    il = math.hypot(idx, idy)
    if il > 0:
        iux, iuy = idx / il, idy / il
        inx, iny = iuy, -iux
        out['int-dir floor'] = (math.floor(bx + h * inx),
                                math.floor(by + h * iny),
                                math.floor(ax + h * inx),
                                math.floor(ay + h * iny))
    else:
        out['int-dir floor'] = (bx, by, ax, ay)
    # 16.16 の離れ（第 5 本の規則と同じ作り方）を画素に落としたもの
    ox = h * int(math.sin(th) * 65536.0)
    oy = h * int(math.cos(th) * 65536.0)
    # n = (uy, -ux) = (sin, -cos) の向き
    out['16.16>>16'] = (bx + (ox >> 16), by + ((-oy) >> 16),
                        ax + (ox >> 16), ay + ((-oy) >> 16))
    out['16.16 round'] = (bx + int(round(ox / 65536.0)),
                          by + int(round(-oy / 65536.0)),
                          ax + int(round(ox / 65536.0)),
                          ay + int(round(-oy / 65536.0)))
    return out


def main():
    rows = []
    for name in sys.argv[1:]:
        got = gather(name)
        print('%-8s %d 個の枠が本物と対応' % (name, len(got)))
        rows += got
    print()
    print('--- 離れの成分が極小（|h*n| < 0.02）のものだけ並べます')
    print('%-9s %-9s %-22s %-11s %-11s %s'
          % ('h*nx', 'h*ny', '近い角 a / b', '本物 c', '本物 d', '落ちた?'))
    for r in rows:
        nx, ny = r['uy'], -r['ux']
        hx, hy = r['h'] * nx, r['h'] * ny
        if min(abs(hx), abs(hy)) >= 0.02:
            continue
        drop_y = r['c'][1] != r['b'][1]
        drop_x = r['c'][0] != r['b'][0]
        print('%+9.6f %+9.6f  a=%-10s b=%-10s c=%-10s d=%-10s  x:%s y:%s'
              % (hx, hy, r['a'], r['b'], r['c'], r['d'],
                 '落' if drop_x else '同', '落' if drop_y else '同'))
    print()
    names = list(rules(rows[0]).keys())
    for nm in names:
        ok = 0
        bad = []
        for r in rows:
            cx, cy, dx, dy = rules(r)[nm]
            if (cx, cy) == r['c'] and (dx, dy) == r['d']:
                ok += 1
            elif len(bad) < 3:
                bad.append((r, (cx, cy, dx, dy)))
        print('%-22s %3d / %3d' % (nm, ok, len(rows)))
        for r, got in bad:
            print('      n=(%+.7f,%+.7f) h=%d  本物 c=%s d=%s  この規則 %s'
                  % (r['uy'], -r['ux'], r['h'], r['c'], r['d'], got))


main()
