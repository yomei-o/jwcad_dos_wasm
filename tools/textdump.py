"""List a drawing's texts with the screen box each one lands in.

    python tools/textdump.py orig/TEST2.JWC [x0 y0 x1 y1]

The four floats in a text record are its baseline: where the string starts and
where it ends.  They are not always horizontal -- TEST1, TEST2 and TEST3 have
strings running straight up the paper and at other angles -- so the printed
angle is the one the glyphs are turned by.
"""
import math
import struct
import sys

from onlykind import Jwc

AX, AY = 121.0, 463.0


def texts(path):
    j = Jwc(path)
    out = []
    for k in range(j.n_texts):
        p = j.texts_at + k * 24
        x0, y0, x1, y1 = struct.unpack_from('<ffff', j.d, p)
        off = struct.unpack_from('<H', j.d, p + 16)[0]
        end = j.d.index(0, j.pool_at + off)
        s = bytes(j.d[j.pool_at + off:end]).decode('cp932', 'replace')
        out.append(dict(k=k, x0=x0, y0=y0, x1=x1, y1=y1, text=s,
                        size=j.d[p + 20], layer=j.d[p + 21]))
    return out


def main():
    want = tuple(float(x) for x in sys.argv[2:6]) if len(sys.argv) == 6 else None
    for t in texts(sys.argv[1]):
        sx0, sy0 = t['x0'] + AX, AY - t['y0']
        sx1, sy1 = t['x1'] + AX, AY - t['y1']
        if want and (max(sx0, sx1) < want[0] or min(sx0, sx1) > want[2]
                     or max(sy0, sy1) < want[1] or min(sy0, sy1) > want[3]):
            continue
        print('%4d (%8.3f,%8.3f)-(%8.3f,%8.3f) ang=%7.2f size=%d lay=%02x %r'
              % (t['k'], sx0, sy0, sx1, sy1,
                 math.degrees(math.atan2(t['y1'] - t['y0'], t['x1'] - t['x0'])),
                 t['size'], t['layer'], t['text']))


if __name__ == '__main__':
    main()
