"""Print the lit pixels of one or two RGBA screens as a little map.

    python tools/px.py x0 y0 x1 y1 a.raw [b.raw]

With two, `#` is both, `O` only the first, `+` only the second -- which is what
a pixel-level disagreement looks like when it is small enough to read.
"""
import sys

W = 640


def lit(path, x, y):
    return path[(y * W + x) * 4: (y * W + x) * 3 + 3]


def main():
    x0, y0, x1, y1 = (int(v) for v in sys.argv[1:5])
    a = open(sys.argv[5], 'rb').read()
    b = open(sys.argv[6], 'rb').read() if len(sys.argv) > 6 else None
    print('    ' + ''.join('%d' % (x % 10) for x in range(x0, x1 + 1)))
    for y in range(y0, y1 + 1):
        row = ''
        for x in range(x0, x1 + 1):
            o = (y * W + x) * 4
            la = a[o:o + 3] != b'\0\0\0'
            lb = b[o:o + 3] != b'\0\0\0' if b else False
            row += ('#' if la and lb else 'O' if la else '+' if lb else '.') if b \
                else ('#' if la else '.')
        print('%3d %s' % (y, row))


if __name__ == '__main__':
    main()
