# -*- coding: utf-8 -*-
"""The two sliders down the file-selection screen, measured off a screen.

    python tools/slider.py tmp/sb/list.raw

入出力 → ①ﾌｧｲﾙ → ②読込 draws two of them, at x 231..247 and x 623..639.
Each has a triangle at the top and the bottom and a coloured thumb in
between.  What the thumb's length and position mean is the question, so
this prints them rather than assuming.
"""
import sys

W, H = 640, 480
NAMES = {(0, 0, 0): 'black', (0, 0, 255): 'blue', (255, 255, 255): 'white',
         (255, 255, 0): 'yellow', (0, 255, 255): 'cyan', (0, 255, 0): 'green'}

def runs(d, per, x, y0, y1):
    out, start, cur = [], y0, None
    for y in range(y0, y1 + 1):
        i = (y * W + x) * per
        c = (d[i], d[i + 1], d[i + 2])
        if c != cur:
            if cur is not None:
                out.append((start, y - 1, NAMES.get(cur, str(cur))))
            start, cur = y, c
    out.append((start, y1, NAMES.get(cur, str(cur))))
    return [r for r in out if r[1] - r[0] >= 1]

for path in sys.argv[1:]:
    d = open(path, 'rb').read()
    per = len(d) // (W * H)
    print(path)
    for x in (239, 631):
        print('  down the middle of the slider at x=%d:' % x)
        for a, b, c in runs(d, per, x, 100, 470):
            print('    y %3d..%3d  %-6s  (%d px)' % (a, b, c, b - a + 1))
