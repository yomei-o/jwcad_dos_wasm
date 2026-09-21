"""What is lit inside the drawing area, and where the red paper edge is.

    python tools/inkbox.py a.raw b.raw

Two screens side by side.  A difference count alone does not say whether the
drawing is too big, too small or in the wrong place; this does.
"""
import sys

W = 640
MAP = {(0, 0, 0): 0, (0, 0, 255): 1, (243, 0, 0): 2, (255, 0, 255): 3,
       (0, 255, 0): 4, (0, 255, 255): 5, (255, 255, 0): 6, (255, 255, 255): 7}


def report(path):
    z = open(path, 'rb').read()

    def px(x, y):
        i = (y * W + x) * 4
        return MAP.get((z[i], z[i + 1], z[i + 2]), 9)

    ink = [(x, y) for y in range(17, 463) for x in range(122, 639) if px(x, y)]
    red = [p for p in ink if px(p[0], p[1]) == 2]
    out = '%-22s lit %5d' % (path, len(ink))
    for name, s in (('ink', ink), ('red', red)):
        if s:
            out += '  %s x %d..%d y %d..%d' % (
                name, min(p[0] for p in s), max(p[0] for p in s),
                min(p[1] for p in s), max(p[1] for p in s))
        else:
            out += '  %s none' % name
    print(out)


for p in sys.argv[1:]:
    report(p)
