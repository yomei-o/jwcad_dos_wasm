"""List a drawing's arcs with the screen box each one lands in.

    python tools/arcdump.py orig/SAMPLE6.JWC [x0 y0 x1 y1]

With a box, only the arcs whose own box overlaps it are printed -- which is how
a cluster of differing pixels is turned into "these three arcs".  The screen
transform is jw_view_original's: x + 121, 463 - y, scale 1.
"""
import struct
import sys

from onlykind import Jwc

AX, AY = 121.0, 463.0


def arcs(path):
    j = Jwc(path)
    out = []
    for k in range(j.n_arcs):
        p = j.arcs_at + k * 32
        cx, cy, r = struct.unpack_from('<fff', j.d, p)
        flat = struct.unpack_from('<h', j.d, p + 12)[0]
        # 16.16 fixed degrees, as src/jwc.h explains.
        s, e = struct.unpack_from('<ii', j.d, p + 14)
        tilt = struct.unpack_from('<h', j.d, p + 24)[0]
        typ, pen = j.d[p + 26], j.d[p + 27]
        layer = j.d[p + 28]
        out.append(dict(k=k, cx=cx, cy=cy, r=r, flat=flat,
                        start=s / 65536.0, end=e / 65536.0,
                        tilt=tilt, type=typ, pen=pen, layer=layer))
    return j, out


def box(a):
    rx = int(a['r'])
    ry = int(a['r'] * (a['flat'] / 10000.0 if a['flat'] > 0 else 1.0))
    m = max(rx, ry) + 1
    sx, sy = a['cx'] + AX, AY - a['cy']
    return (int(sx - m), int(sy - m), int(sx + m) + 1, int(sy + m) + 1)


def main():
    j, aa = arcs(sys.argv[1])
    want = None
    if len(sys.argv) == 6:
        want = tuple(int(x) for x in sys.argv[2:6])
    for a in aa:
        b = box(a)
        if want and (b[2] < want[0] or b[0] > want[2]
                     or b[3] < want[1] or b[1] > want[3]):
            continue
        rx = int(a['r'])
        ry = int(a['r'] * (a['flat'] / 10000.0 if a['flat'] > 0 else 1.0))
        print('%4d c=(%9.3f,%9.3f)->(%7.2f,%7.2f) r=%8.4f rx=%d ry=%d '
              'flat=%5d ang=%9.4f..%9.4f tilt=%4d type=%d pen=%d lay=%02x '
              'box=(%d,%d)-(%d,%d)'
              % (a['k'], a['cx'], a['cy'], a['cx'] + AX, AY - a['cy'], a['r'],
                 rx, ry, a['flat'], a['start'], a['end'], a['tilt'],
                 a['type'], a['pen'], a['layer'], b[0], b[1], b[2], b[3]))


if __name__ == '__main__':
    main()
