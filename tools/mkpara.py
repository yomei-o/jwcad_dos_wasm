"""SAMPLE0 の線を平行四辺形の四辺だけにした図面（接楕円 ②③ を測るため）。

    python mkpara.py orig/SAMPLE0.JWC orig/TEST9.JWC

文字はそのまま（移植が縮尺を読む一行目の 9 番が要ります）。
点は遠くへ。線は 0..3 を四辺にして、残りは遠くへ。
"""
import math
import struct
import sys

sys.path.insert(0, 'tools')
from onlykind import Jwc, FAR

AX, AY = 121.0, 463.0
CX, CY = 400.0, 250.0           # 画面での中心
A = (1.0, 0.0)
B = (1.0 / math.sqrt(2), 1.0 / math.sqrt(2))
HA, HB = 120.0, 80.0


def vertex(s, t):
    x = CX + s * HA * A[0] + t * HB * B[0]
    y = CY + s * HA * A[1] + t * HB * B[1]
    return (x - AX, AY - y)     # 図面の座標へ


def main():
    src, out = sys.argv[1], sys.argv[2]
    j = Jwc(src)
    j.banish('points')
    v = [vertex(+1, +1), vertex(+1, -1), vertex(-1, -1), vertex(-1, +1)]
    for i in range(j.n_lines):
        p = j.at + i * 22
        if i < 4:
            a, b = v[i], v[(i + 1) % 4]
            struct.pack_into('<ffff', j.d, p, a[0], a[1], b[0], b[1])
        else:
            struct.pack_into('<ffff', j.d, p, FAR, FAR, FAR + 1.0, FAR)
    open(out, 'wb').write(bytes(j.d))
    for i in range(4):
        a, b = v[i], v[(i + 1) % 4]
        print('side %d  (%.3f,%.3f)-(%.3f,%.3f)  mid screen (%.1f,%.1f)'
              % (i, a[0], a[1], b[0], b[1],
                 (a[0] + b[0]) / 2 + AX, AY - (a[1] + b[1]) / 2))


main()
