"""List a drawing's lines with the screen positions of their two ends.

    python tools/linedump.py orig/SAMPLE0.JWC [x0 y0 x1 y1]

With a box, only the lines whose own box overlaps it are printed -- which is
how a cluster of differing pixels, or "which line is at that press", is turned
into a record number.  The screen transform is jw_view_original's: x + 121,
463 - y, scale 1.  The printed angle is the **record's**, y upward, which is
the one 複写 ⑤反転 and 線角度 talk about.
"""
import math
import struct
import sys

from onlykind import Jwc

AX, AY = 121.0, 463.0


def lines(path):
    j = Jwc(path)
    out = []
    for k in range(j.n_lines):
        p = j.at + k * 22
        x0, y0, x1, y1 = struct.unpack_from('<ffff', j.d, p)
        typ, pen = j.d[p + 16], j.d[p + 17]
        layer = j.d[p + 18]
        rest = bytes(j.d[p + 19:p + 22])
        out.append(dict(k=k, x0=x0, y0=y0, x1=x1, y1=y1, type=typ, pen=pen,
                        layer=layer, rest=rest))
    return out


def main():
    want = tuple(float(x) for x in sys.argv[2:6]) if len(sys.argv) == 6 else None
    for t in lines(sys.argv[1]):
        sx0, sy0 = t['x0'] + AX, AY - t['y0']
        sx1, sy1 = t['x1'] + AX, AY - t['y1']
        if want and (max(sx0, sx1) < want[0] or min(sx0, sx1) > want[2]
                     or max(sy0, sy1) < want[1] or min(sy0, sy1) > want[3]):
            continue
        print('%4d (%8.3f,%8.3f)-(%8.3f,%8.3f) ang=%7.2f type=%d pen=%d '
              'lay=%02x rest=%s'
              % (t['k'], sx0, sy0, sx1, sy1,
                 math.degrees(math.atan2(t['y1'] - t['y0'], t['x1'] - t['x0'])),
                 t['type'], t['pen'], t['layer'], t['rest'].hex()))


if __name__ == '__main__':
    main()
