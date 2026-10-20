"""Render a page of orig/JW_CADV.HLP the way the original's HELP draws it, and
find which page a screenshot of the original shows.

    python tools/helprender.py match shot.png      # prints the page number(s)
    python tools/helprender.py diff  shot.png K    # pixels that differ from page K

A page is 20 lines of the file (line 20*K ..), drawn from character column 17
(x=128), row 4 (y=48), one line per 16 pixels, white on black.
"""
import sys
from PIL import Image

X0, Y0 = 128, 48
ank = open('font/JWANK16.FNT', 'rb').read()
kan = open('font/JWKAN16.FNT', 'rb').read()
blocks = kan[17]
rng = [(kan[18 + 4*i] | kan[19 + 4*i] << 8, kan[20 + 4*i] | kan[21 + 4*i] << 8) for i in range(blocks)]
img0 = 18 + 4 * blocks


def kglyph(code):
    before = 0
    for lo, hi in rng:
        if lo <= code <= hi:
            at = img0 + (before + code - lo) * 32
            return kan[at:at + 32]
        before += hi - lo + 1
    return None


def lines():
    t = open('orig/JW_CADV.HLP', 'rb').read().split(b'\r\n')
    return t


def render(k, rows=20):
    t = lines()
    im = Image.new('RGB', (640, 480))
    px = im.load()
    for r in range(rows):
        ln = t[20 * k + r].replace(b'\x0c', b'') if 20 * k + r < len(t) else b''
        x = X0
        i = 0
        while i < len(ln):
            c = ln[i]
            if c < 0x20:
                i += 1
                continue
            if 0x81 <= c <= 0x9f or 0xe0 <= c <= 0xfc:
                if i + 1 >= len(ln):
                    break
                g = kglyph(c << 8 | ln[i + 1]); w = 16; i += 2
            else:
                g = ank[17 + c * 16:17 + c * 16 + 16]; w = 8; i += 1
            if g:
                bpr = w // 8
                for yy in range(16):
                    for xx in range(w):
                        if g[yy * bpr + xx // 8] & (0x80 >> (xx % 8)):
                            px[x + xx, Y0 + 16 * r + yy] = (255, 255, 255)
            x += w
    return im


def same(a, b, box=(128, 48, 639, 368)):
    import numpy as np
    x0, y0, x1, y1 = box
    return int((np.asarray(a)[y0:y1, x0:x1] != np.asarray(b)[y0:y1, x0:x1]).any(axis=2).sum())


_cache = {}


def cached(k):
    if k not in _cache:
        _cache[k] = render(k)
    return _cache[k]


if __name__ == '__main__':
    shot = Image.open(sys.argv[2]).convert('RGB')
    if sys.argv[1] == 'match':
        best = sorted((same(shot, cached(k)), k) for k in range(160))[:3]
        print(best)
    else:
        k = int(sys.argv[3]); print(same(shot, render(k)))
