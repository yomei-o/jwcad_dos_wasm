"""How many pixels differ **inside the drawing window, below the top band**.

    python tools/windiff.py a.raw b.raw [-v]

tools/fulldiff.py counts the whole 640x480, which is what most of the checks
want.  The zoom check wants only x 122..638 and y 48..462: the original
rewrites the top line, the magnification in the bottom bar and the menu's
highlight when it zooms, and `tests/drawing.exe -Z` only changes the view.
"""
import collections
import sys

W, H = 640, 480
X0, X1, Y0, Y1 = 122, 638, 48, 462
a = open(sys.argv[1], 'rb').read()
b = open(sys.argv[2], 'rb').read()
n = 0
boxes = collections.Counter()
for y in range(Y0, Y1 + 1):
    row = y * W * 4
    for x in range(X0, X1 + 1):
        i = row + x * 4
        if a[i:i + 3] != b[i:i + 3]:
            n += 1
            boxes[(x // 64 * 64, y // 16 * 16)] += 1
if len(sys.argv) > 3:
    for k, v in sorted(boxes.items(), key=lambda kv: (kv[0][1], kv[0][0])):
        print('  x%3d..%3d y%3d..%3d : %d' % (k[0], k[0] + 63, k[1], k[1] + 15, v))
print('%d different in the window' % n)
