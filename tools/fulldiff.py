"""How many of the 307,200 pixels differ, and where.  Used by tools/full.sh."""
import collections
import sys

W, H = 640, 480
a = open(sys.argv[1], 'rb').read()
b = open(sys.argv[2], 'rb').read()
n = 0
boxes = collections.Counter()
for y in range(H):
    row = y * W * 4
    for x in range(W):
        i = row + x * 4
        if a[i:i + 3] != b[i:i + 3]:
            n += 1
            boxes[(x // 64 * 64, y // 16 * 16)] += 1
if len(sys.argv) > 3:
    for k, v in sorted(boxes.items(), key=lambda kv: (kv[0][1], kv[0][0])):
        print('  x%3d..%3d y%3d..%3d : %d' % (k[0], k[0] + 63, k[1], k[1] + 15, v))
inside = sum(v for k, v in boxes.items() if 128 <= k[0] < 640 and 16 <= k[1] < 464)
print('%d different (%d of them in the drawing area)' % (n, inside))
