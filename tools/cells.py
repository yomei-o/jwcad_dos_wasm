"""Pull the character cells out of a DOSEMU_BP=+0DEF:17BB log.

    python tools/cells.py tmp/ask/lr.txt tmp/ask/e.raw [x0 y0 x1 y1]

The original draws an upright string as horizontal lines, one per row of the
glyph, with the row's dots as the line-style pattern (see RESUME).  So a log of
its line calls is a list of `(x0, x1, y, pattern)`, and grouping them by their
two ends gives back the cells: where each character started, how wide it was,
and which rows it covered.

**The coordinates it is handed are already screen pixels.**  `x + 121` and
`463 - y` is what turns a *record* into a screen position; by the time the line
routine sees it that has been done.  Reading the log as if it had not is how
three measurements in a row came out 121 pixels and a mirror away from the
truth.

**A cell in the log is not necessarily a cell on the screen.**  JW_CAD redraws
several times in one run -- it comes up, opens the drawing, redraws -- and a
record on a hidden layer is still drawn in one of the earlier passes, at a
different place.  Those lines look exactly like the ones that survive, and
reading them as if they had survived is how three measurements in a row came
out wrong.  So a cell is kept only when the screenshot actually has something
lit inside it.
"""
import collections
import re
import struct
import sys

W = 640

PAT = re.compile(r'args (\w{4}) (\w{4}) (\w{4}).*'
                 r'\[2\]->(\w{8}).*\[3\]->(\w{8}).*\[4\]->(\w{8}).*\[5\]->(\w{8})')


def f(h):
    return struct.unpack('<f', bytes.fromhex(h))[0]


def cells(path, shot=None, box=None):
    px = open(shot, 'rb').read() if shot else None
    rows = collections.defaultdict(list)
    for ln in open(path):
        m = PAT.search(ln)
        if not m:
            continue
        x0, y0, x1, y1 = (f(h) for h in m.groups()[3:])
        if y0 != y1 or x1 < x0:
            continue                      # not a glyph row
        sx0, sx1, sy = x0, x1, y0            # the line routine is given screen units
        if box and not (box[0] <= sx0 <= box[2] and box[1] <= sy <= box[3]):
            continue
        rows[(sx0, sx1)].append((sy, int(m.group(3), 16)))

    def lit(x0, x1, ys):
        for y in ys:
            for x in range(int(x0), int(x1) + 1):
                if 0 <= x < W and 0 <= y < 480:
                    o = (int(y) * W + x) * 4
                    if px[o] or px[o + 1] or px[o + 2]:
                        return True
        return False

    out = []
    for (sx0, sx1), rs in sorted(rows.items()):
        rs.sort()
        ys = [y for y, _ in rs]
        if px and not lit(sx0, sx1, ys):
            continue
        out.append(dict(x0=sx0, x1=sx1, w=int(sx1 - sx0) + 1,
                        top=ys[0], bottom=ys[-1], n=len(rs),
                        pats=[p for _, p in rs]))
    return out


def main():
    shot = sys.argv[2] if len(sys.argv) > 2 else None
    box = tuple(float(v) for v in sys.argv[3:7]) if len(sys.argv) == 7 else None
    for c in cells(sys.argv[1], shot, box):
        print('x %7.2f..%7.2f  w=%2d   y %6.1f..%6.1f  rows=%2d'
              % (c['x0'], c['x1'], c['w'], c['top'], c['bottom'], c['n']))


if __name__ == '__main__':
    main()
