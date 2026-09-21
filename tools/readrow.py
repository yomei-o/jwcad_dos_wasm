# -*- coding: utf-8 -*-
"""Read a row of the screen back as text.

    python tools/readrow.py tmp/shot.raw 1          # the top line
    python tools/readrow.py tmp/shot.raw 1 30       # rows 1 to 30

A screenshot is the only record of what a screen that nobody logged says, and
matching glyphs against the fonts the original draws with is quicker than
reading the dots.  FONTX2, the same two files the port loads (src/fontx.c).
"""
import sys

W = 640
MAP = {(0, 0, 0): 0, (0, 0, 255): 1, (243, 0, 0): 2, (255, 0, 255): 3,
       (0, 255, 0): 4, (0, 255, 255): 5, (255, 255, 0): 6, (255, 255, 255): 7}


class Fontx:
    def __init__(self, path):
        b = open(path, 'rb').read()
        assert b[:6] == b'FONTX2', path
        self.b = b
        self.w = b[14]
        self.h = b[15]
        self.dbcs = b[16]
        self.stride = (self.w + 7) // 8
        self.size = self.stride * self.h
        if self.dbcs:
            self.nblocks = b[17]
            self.images = 18 + 4 * self.nblocks
            self.blocks = []
            at = 18
            for _ in range(self.nblocks):
                lo = b[at] | (b[at + 1] << 8)
                hi = b[at + 2] | (b[at + 3] << 8)
                self.blocks.append((lo, hi))
                at += 4
        else:
            self.images = 17

    def glyph(self, code):
        if not self.dbcs:
            if code > 255:
                return None
            return self.b[self.images + code * self.size:][:self.size]
        n = 0
        for lo, hi in self.blocks:
            if lo <= code <= hi:
                n += code - lo
                return self.b[self.images + n * self.size:][:self.size]
            n += hi - lo + 1
        return None


def bits(g, stride, h):
    return [[(g[y * stride + x // 8] >> (7 - (x & 7))) & 1
             for x in range(stride * 8)] for y in range(h)]


def main():
    raw = open(sys.argv[1], 'rb').read()
    r0 = int(sys.argv[2]) if len(sys.argv) > 2 else 1
    r1 = int(sys.argv[3]) if len(sys.argv) > 3 else r0
    ank = Fontx('font/JWANK16.FNT')
    knj = Fontx('font/JWKAN16.FNT')

    def px(x, y):
        i = (y * W + x) * 4
        return MAP.get((raw[i], raw[i + 1], raw[i + 2]), 9)

    # Every ANK glyph, and every kanji the two-byte space covers, by its dots.
    ank_by = {}
    for c in range(256):
        g = ank.glyph(c)
        if g:
            ank_by.setdefault(tuple(g), c)
    knj_by = {}
    for hi in range(0x81, 0xfd):
        if 0x9f < hi < 0xe0:
            continue
        for lo in range(0x40, 0xfd):
            if lo == 0x7f:
                continue
            g = knj.glyph((hi << 8) | lo)
            if g:
                knj_by.setdefault(tuple(g), bytes((hi, lo)))

    for row in range(r0, r1 + 1):
        y0 = (row - 1) * 16
        out = bytearray()
        col = 0
        while col < 80:
            x0 = col * 8
            # a 16-wide cell first, then an 8-wide one
            two = bytearray()
            for y in range(16):
                for half in (0, 1):
                    v = 0
                    for x in range(8):
                        if px(x0 + half * 8 + x, y0 + y):
                            v |= 0x80 >> x
                    two.append(v)
            # FONTX keeps a 16-wide glyph as two bytes a row, in order
            k = knj_by.get(tuple(two))
            if k and col + 1 < 80:
                out += k
                col += 2
                continue
            one = bytearray()
            for y in range(16):
                v = 0
                for x in range(8):
                    if px(x0 + x, y0 + y):
                        v |= 0x80 >> x
                one.append(v)
            c = ank_by.get(tuple(one))
            out.append(c if c is not None else ord('.'))
            col += 1
        print('%2d %s' % (row, out.decode('cp932', 'replace').rstrip()))


main()
