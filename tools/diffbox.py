"""二枚の .raw（RGBA 640x480）の違う画素の外枠と、その中を文字で見せる。
    python tools/diffbox.py tmp/seq/NAME/orig.raw tmp/seq/NAME/port.raw [x0 y0 x1 y1]
"""
import sys

W = 640
a = open(sys.argv[1], 'rb').read()
b = open(sys.argv[2], 'rb').read()
pts = [(i // 4 % W, i // 4 // W) for i in range(0, len(a), 4) if a[i:i + 4] != b[i:i + 4]]
if not pts:
    print('same')
    sys.exit(0)
x0, y0 = min(p[0] for p in pts), min(p[1] for p in pts)
x1, y1 = max(p[0] for p in pts), max(p[1] for p in pts)
print(len(pts), 'diff; bbox', x0, y0, x1, y1)
if len(sys.argv) > 3:
    x0, y0, x1, y1 = [int(v) for v in sys.argv[3:7]]
if x1 - x0 < 100 and y1 - y0 < 40:
    for y in range(y0, y1 + 1):
        def row(d):
            return ''.join('#' if d[(y * W + x) * 4:(y * W + x) * 4 + 3] != b'\0\0\0' else '.' for x in range(x0, x1 + 1))
        print('%3d %s %s' % (y, row(a), row(b)))
