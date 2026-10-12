# -*- coding: utf-8 -*-
"""ｵﾌﾟｼｮﾝ ④一括処理 ③データ整理 を測るための図面 TEST9.JWC。

    python tools/mkdata.py orig/TEST3.JWC orig/TEST9.JWC [variant]

**測ったら orig/TEST9.JWC は消すこと。** `tools/check.sh` は orig/ に図面が十四枚あることを確かめている。

TEST3（線 104・円弧 6・文字 56・点 22）の記録を全部上書きする：使わない分は遠くへ。座標は**画面**
（倍率 1 の見え方、記録は x-121、463-y）で書く。範囲は 2 つに分けて取る：

    重複の範囲  (130,60)-(380,330)   重複線整理・連結･重複線整理・同一文字整理
    ソートの範囲 (390,60)-(520,330)   ソート

variant:
  base   重複・連結の例が一通り（線・円弧・点・文字）
  sort   ソートの線を 1 組（線色 1〜7、曲線印あり、範囲外あり）
"""
import random
import struct
import sys

sys.path.insert(0, 'tools')
from onlykind import Jwc, FAR

AX, AY = 121.0, 463.0
K16 = 65536


def rec_line(j, k, x0, y0, x1, y1, typ=1, pen=2, layer=0, rest=(0, 0x00, 0)):
    p = j.at + k * 22
    struct.pack_into('<ffff', j.d, p, x0 - AX, AY - y0, x1 - AX, AY - y1)
    j.d[p + 16] = typ
    j.d[p + 17] = pen
    j.d[p + 18] = layer
    j.d[p + 19], j.d[p + 20], j.d[p + 21] = rest


def far_line(j, k):
    p = j.at + k * 22
    struct.pack_into('<ffff', j.d, p, FAR, FAR, FAR + 1.0, FAR)
    j.d[p + 20] = 0


def rec_arc(j, k, cx, cy, r, a0, a1, flat=10000, tilt=0, typ=1, pen=2, layer=0):
    p = j.arcs_at + k * 32
    struct.pack_into('<fff', j.d, p, cx - AX, AY - cy, r)
    struct.pack_into('<h', j.d, p + 12, flat)
    struct.pack_into('<iii', j.d, p + 14, int(a0 * K16), int(a1 * K16), int(tilt * K16))
    j.d[p + 26] = typ
    j.d[p + 27] = pen
    j.d[p + 28] = layer
    j.d[p + 29] = 0
    j.d[p + 30] = 0
    j.d[p + 31] = 0


def far_arc(j, k):
    p = j.arcs_at + k * 32
    struct.pack_into('<ff', j.d, p, FAR, FAR)
    j.d[p + 30] = 0


def rec_point(j, k, x, y, layer=0, pen=1):
    p = j.points_at + k * 12
    struct.pack_into('<ff', j.d, p, x - AX, AY - y)
    j.d[p + 8] = layer
    j.d[p + 9] = pen
    j.d[p + 10] = 0
    j.d[p + 11] = 0


def far_point(j, k):
    p = j.points_at + k * 12
    struct.pack_into('<ff', j.d, p, FAR, FAR)
    j.d[p + 10] = 0


def build_base(j):
    L = []
    h = lambda y, a, b, **kw: L.append((a, y, b, y, kw))
    h(120, 200, 260)
    h(120, 200, 260)                                  # 同じ
    h(130, 200, 260)
    h(130, 240, 300)                                  # 重なり
    h(140, 200, 260)
    h(140, 260, 320)                                  # 接する
    h(150, 200, 260)
    h(150, 260.0005, 320)                             # 離れ（0.0005）
    h(160, 200, 300)
    h(160, 220, 250)                                  # 含む
    h(170, 200, 260)
    h(170, 260, 200)                                  # 逆向き
    L.append((200, 180, 230, 210, {}))
    L.append((220, 200, 260, 240, {}))                # 斜めの重なり
    h(190, 200, 260)
    L.append((230, 190.00005, 290, 190.00005, {}))    # 直線から 5e-5
    h(195, 200, 260)
    L.append((230, 195.0002, 290, 195.0002, {}))      # 直線から 2e-4
    h(200, 200, 260)
    h(200, 220, 280, pen=3)                           # 線色違い
    h(210, 200, 260)
    h(210, 220, 280, typ=2)                           # 線種違い
    L.append((200, 220, 200.0005, 220, {}))           # 極短線（消える）
    L.append((210, 220, 210.002, 220, {}))            # 短いが残る
    L.append((230, 220, 230, 220, {}))                # 長さ 0
    h(230, 200, 250)
    h(230, 280, 330)
    h(230, 240, 290)                                  # 三本の連なり（順は A C B）
    # 曲線印（rest[2] の 0x40）だけを一本ずつ付けた線は、本物が範囲を取るときに印を落とす（鎖の長さ 1 は不正。
    # root 07a6:0bf0〜0d9a）ので、曲線印は SAMPLE3 のような本物の鎖で測る。
    h(250, 200, 260, layer=1)
    h(250, 200, 260)                                  # レイヤ違い
    h(260, 300, 350)
    h(260, 330, 375)
    h(260, 340, 360)                                  # 連なり 3 本（接するのは 2 本目と 3 本目の間）
    h(350, 200, 260)
    h(350, 200, 260)                                  # 範囲の外
    for k in range(104):
        if k < len(L):
            x0, y0, x1, y1, kw = L[k]
            rec_line(j, k, x0, y0, x1, y1, typ=kw.get('typ', 1), pen=kw.get('pen', 2),
                     layer=kw.get('layer', 0), rest=kw.get('rest', (0, 0x00, 0)))
        else:
            far_line(j, k)
    A = [
        (180, 300, 20, 0, 0, 10000, 0),
        (180, 300, 20, 0, 0, 10000, 0),            # 同じ円
        (250, 300, 20, 0, 90, 10000, 0),
        (250, 300, 20, 45, 135, 10000, 0),         # 重なる弧
        (320, 300, 20, 90, 180, 10000, 0),
        (320, 300, 20, 180, 270, 10000, 0),        # 接する弧
    ]
    for k in range(6):
        if k < len(A):
            cx, cy, r, a0, a1, fl, tl = A[k]
            rec_arc(j, k, cx, cy, r, a0, a1, fl, tl)
        else:
            far_arc(j, k)
    P = [
        (300, 100, 0, 1), (300.00005, 100, 0, 1), (300.0003, 100, 0, 1), (300, 100, 0, 2),
        (300, 100, 1, 1), (320, 100, 0, 1), (320, 100.00009, 0, 1), (320, 100, 0, 1),
    ]
    for k in range(22):
        if k < len(P):
            rec_point(j, k, *P[k])
        else:
            far_point(j, k)
    # 文字：使う記録の元の（文字列の位置・大きさ）を借りる
    d = j.d
    donors = []
    for k in range(j.n_texts):
        p = j.texts_at + k * 24
        donors.append(bytes(d[p + 16:p + 20]) + bytes([d[p + 20], d[p + 21]]))
    uniq = []
    for dn in donors:
        if dn[:4] not in [u[:4] for u in uniq]:
            uniq.append(dn)
    s0, s1 = uniq[0], uniq[1]
    T = [
        (200, 100, 240, 100, s0, None, None),
        (200, 100.005, 240, 100.005, s0, None, None),    # 近い→消える
        (200, 100.02, 240, 100.02, s0, None, None),      # 遠い→残る
        (200, 100, 240, 100, s1, None, None),            # 文字列違い
        (200, 100, 240, 100, s0, 3, None),               # 文字種違い
        (200, 100, 240, 100, s0, None, 1),               # レイヤ違い
        (200, 110, 240, 110, s0, None, None),
        (200, 110, 240, 110, s0, None, None),            # 二つ目の組
    ]
    for k in range(j.n_texts):
        p = j.texts_at + k * 24
        if k < len(T):
            x0, y0, x1, y1, dn, size, lay = T[k]
            struct.pack_into('<ffff', d, p, x0 - AX, AY - y0, x1 - AX, AY - y1)
            d[p + 16:p + 20] = dn[:4]
            d[p + 20] = size if size is not None else dn[4]
            d[p + 21] = lay if lay is not None else 0
            d[p + 22] = 0
            d[p + 23] = 0
        else:
            struct.pack_into('<ffff', d, p, FAR, FAR, FAR + 1.0, FAR)
            d[p + 22] = 0


def build_sort(j):
    rnd = random.Random(7)
    k = 0
    # 範囲の中（x 390..520、y 60..330）に線色 1〜7 の線を 30 本
    for pen in [1, 2, 3, 4, 5, 6, 7]:
        for m in range(4 if pen != 7 else 3):
            x0, y0 = rnd.randint(395, 515), rnd.randint(70, 320)
            x1, y1 = x0 + rnd.randint(-30, 30), y0 + rnd.randint(-30, 30)
            if (x1, y1) == (x0, y0):
                x1 += 5
            rec_line(j, k, x0, y0, x1, y1, pen=pen)
            k += 1
    # 曲線印のある線・範囲の外の線
    for m in range(6):
        rec_line(j, k, 200 + 10 * m, 340, 220 + 10 * m, 350, pen=1 + m % 3)
        k += 1
    while k < 104:
        far_line(j, k)
        k += 1
    for m in range(j.n_arcs):
        far_arc(j, m)
    for m in range(j.n_points):
        far_point(j, m)
    for m in range(j.n_texts):
        p = j.texts_at + m * 24
        struct.pack_into('<ffff', j.d, p, FAR, FAR, FAR + 1.0, FAR)
        j.d[p + 22] = 0


def build_arcs(j):
    for k in range(104):
        far_line(j, k)
    A = [
        (200, 300, 20, 300, 60, 10000, 0),
        (200, 300, 20, 30, 100, 10000, 0),         # 回り込む A と B
        (300, 300, 20, 10, 40, 10000, 0),
        (300, 300, 20, 350, 20, 10000, 0),         # 回り込む B
        (400, 300, 20, 0, 0, 10000, 30),           # 傾いた円（角度に畳む）
        (400, 300, 20, 30, 30, 10000, 0),
    ]
    for k in range(6):
        cx, cy, r, a0, a1, fl, tl = A[k]
        rec_arc(j, k, cx, cy, r, a0, a1, fl, tl)
    for m in range(j.n_points):
        far_point(j, m)
    for m in range(j.n_texts):
        p = j.texts_at + m * 24
        struct.pack_into('<ffff', j.d, p, FAR, FAR, FAR + 1.0, FAR)
        j.d[p + 22] = 0


def main():
    src, out = sys.argv[1], sys.argv[2]
    variant = sys.argv[3] if len(sys.argv) > 3 else 'base'
    j = Jwc(src)
    if variant == 'arcs':
        build_arcs(j)
    elif variant == 'sort':
        build_sort(j)
    else:
        build_base(j)
    open(out, 'wb').write(bytes(j.d))
    print('wrote', out, variant)


main()
