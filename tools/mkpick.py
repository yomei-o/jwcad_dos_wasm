"""Make a drawing that asks the original which entity a press picks.

    python tools/mkpick.py orig/QPICK.JWC

Everything in SAMPLE0 is pushed off the paper and the first records are
replaced by lines and arcs at places chosen so that the answer separates the
rules apart -- nearest, first, last, a tolerance -- instead of agreeing with
all of them at once.  `sh tools/pickat.sh` then presses at a point and reads
what the original's search answered, so the layout here and the presses there
have to be read together.

Screen coordinates go in; the drawing keeps `x - 121` and `463 - y`, which is
the view the original opens a file with (`jw_view_original`).

The groups, by entity number counting from **one**, which is what the search
answers:

     1..5   five separate horizontal lines, ten pixels apart, y = 100..140.
            Pressing between two of them says whether it takes the nearer.
     6,7    two lines on the *same* row (y = 250) whose x ranges overlap
            between 250 and 300.  A press there is the same distance from
            both, so the answer says which of two it prefers -- the earlier
            record or the later.
     8,9    two lines two pixels apart (y = 300 and 302).  A press at 301 is
            half a pixel from each once the rounding is allowed for.
    10      one line by itself at y = 350.  Pressing further and further away
            from it says how far the search reaches.
    11,12   the same pair as 6,7 but with the trailing bytes swapped, to see
            whether the `rest` bytes have anything to do with it.
    13      a circle, to see what a non-line answers with (and whether DX
            stops being zero).
"""
import struct
import sys

sys.path.insert(0, __file__.rsplit('/', 1)[0] if '/' in __file__ else '.')
from onlykind import FAR, Jwc                                    # noqa: E402

AX, AY = 121.0, 463.0


def to_draw(sx, sy):
    return sx - AX, AY - sy


LINES = [
    # (x0, y0, x1, y1, rest1) in screen pixels
    (200, 100, 400, 100, 0x41),
    (200, 110, 400, 110, 0x41),
    (200, 120, 400, 120, 0x41),
    (200, 130, 400, 130, 0x41),
    (200, 140, 400, 140, 0x41),
    (200, 250, 300, 250, 0x41),
    (250, 250, 400, 250, 0x41),
    (200, 300, 400, 300, 0x41),
    (200, 302, 400, 302, 0x41),
    (200, 350, 400, 350, 0x41),
    (200, 400, 300, 400, 0x03),
    (250, 400, 400, 400, 0x41),
]
CIRCLE = (500, 200, 30)         # centre and radius, in pixels


def layers(out):
    """Twelve lines that differ only in the byte behind the pen.

    Same place, same length, ten pixels apart, every layer table turned on, so
    the only thing that can decide whether the original's search will pick one
    is the layer it is on.  SAMPLE0 writes to layer 0.
    """
    j = Jwc('orig/SAMPLE0.JWC')
    for k in ('texts', 'points', 'lines'):
        j.banish(k)
    for k in range(12):
        p = j.at + k * 22
        a = to_draw(200, 60 + k * 30)
        b = to_draw(400, 60 + k * 30)
        struct.pack_into('<4f', j.d, p, a[0], a[1], b[0], b[1])
        j.d[p + 16] = 1
        j.d[p + 17] = 2
        j.d[p + 18] = k         # the layer: 0 to B, all in group 0
        j.d[p + 19] = 0x41
        j.d[p + 20] = 0
        j.d[p + 21] = 0
    # every layer and group shown and editable, so nothing but the layer number
    # itself can be the reason
    for off in (288, 272, 560, 544):
        n = 16 if off in (288, 560) else 256
        for i in range(n):
            j.d[j.at - off + i] = 1
    open(out, 'wb').write(bytes(j.d))
    print('%s: twelve lines, layer 0 to B, at y = 60 to 390 every 30' % out)
    for k in range(12):
        print('  %2d  layer %X  press (300,%d)' % (k + 1, k, 60 + k * 30))


BYTES = [
    # (type, pen, layer, rest1, rest2, rest3) -- one line each, ten pixels
    # apart, nothing else changed.  The values are the ones SAMPLE6 carries on
    # the lines its search refuses (rest3 = 08) and on the ones it answers with
    # (rest3 = 00, rest1 = 33).
    (1, 2, 0, 0x41, 0x00, 0x00),
    (1, 2, 0, 0x41, 0x00, 0x08),
    (1, 2, 0, 0x41, 0x00, 0x52),
    (1, 2, 0, 0x41, 0x00, 0x3B),
    (1, 2, 0, 0x41, 0x01, 0x00),
    (1, 2, 0, 0x41, 0x10, 0x00),
    (1, 2, 0, 0x25, 0x00, 0x08),
    (1, 2, 0, 0x03, 0x00, 0x08),
    (2, 2, 0, 0x41, 0x00, 0x00),
    (1, 5, 0, 0x41, 0x00, 0x00),
    (1, 2, 0, 0xF6, 0x00, 0x08),
    (1, 2, 0, 0x33, 0x00, 0x00),
]


def bytes_(out):
    """Twelve lines that differ only in the bytes behind the coordinates."""
    j = Jwc('orig/SAMPLE0.JWC')
    for k in ('texts', 'points', 'lines'):
        j.banish(k)
    for k, (typ, pen, lay, r1, r2, r3) in enumerate(BYTES):
        p = j.at + k * 22
        a = to_draw(200, 60 + k * 30)
        b = to_draw(400, 60 + k * 30)
        struct.pack_into('<4f', j.d, p, a[0], a[1], b[0], b[1])
        j.d[p + 16] = typ
        j.d[p + 17] = pen
        j.d[p + 18] = lay
        j.d[p + 19] = r1
        j.d[p + 20] = r2
        j.d[p + 21] = r3
    for off in (288, 272, 560, 544):
        n = 16 if off in (288, 560) else 256
        for i in range(n):
            j.d[j.at - off + i] = 1
    open(out, 'wb').write(bytes(j.d))
    print('%s: twelve lines at y = 60 to 390 every 30' % out)
    for k, v in enumerate(BYTES):
        print('  %2d  type %d pen %d layer %d rest %02X %02X %02X  press (300,%d)'
              % ((k + 1,) + v + (60 + k * 30,)))


def main():
    out = sys.argv[1] if len(sys.argv) > 1 else 'orig/QPICK.JWC'
    if len(sys.argv) > 2 and sys.argv[2] == 'layers':
        layers(out)
        return
    if len(sys.argv) > 2 and sys.argv[2] == 'bytes':
        bytes_(out)
        return
    j = Jwc('orig/SAMPLE0.JWC')
    for k in ('texts', 'points'):
        j.banish(k)
    # every line off the paper first, then the ones this asks about back on
    j.banish('lines')
    for k, (x0, y0, x1, y1, r1) in enumerate(LINES):
        if k >= j.n_lines:
            raise SystemExit('SAMPLE0 has only %d lines' % j.n_lines)
        p = j.at + k * 22
        a = to_draw(x0, y0)
        b = to_draw(x1, y1)
        struct.pack_into('<4f', j.d, p, a[0], a[1], b[0], b[1])
        j.d[p + 16] = 1                 # line type
        j.d[p + 17] = 2                 # pen
        j.d[p + 18] = 0                 # layer 0, which SAMPLE0 shows
        j.d[p + 19] = r1
        j.d[p + 20] = 0
        j.d[p + 21] = 0
    print('%s: %d lines at %d, %d arcs at %d'
          % (out, j.n_lines, j.at, j.n_arcs, j.arcs_at))
    open(out, 'wb').write(bytes(j.d))
    for k, (x0, y0, x1, y1, r1) in enumerate(LINES):
        print('  %2d  (%d,%d)-(%d,%d)  rest1=%02X' % (k + 1, x0, y0, x1, y1, r1))
    print('  (SAMPLE0 has no arcs, so %r is not in it)' % (CIRCLE,))


if __name__ == '__main__':
    main()
