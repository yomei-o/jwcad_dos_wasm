"""Measure what the original does, from its own screen.

    python tools/measure.py <drawing.JWC> <screen.raw> [what]

`screen.raw` is 640x480 RGBA, as dosv_emu_cpp writes for a `shot` whose name
ends in .raw:

    printf 'wait 60000000\nshot ../jwcad_dos_wasm/tmp/emu.raw\n' > /tmp/s.txt
    ./dosemu --root ../jwcad_dos_wasm/orig \
             --font-ank ../jwcad_dos_wasm/font/JWANK16.FNT \
             --font-kanji ../jwcad_dos_wasm/font/JWKAN16.FNT \
             --script /tmp/s.txt ../jwcad_dos_wasm/orig/JW_CADV.EXE SAMPLE1.JWC

`what` is `pens`, `text` or `all` (the default).

This is how the port's view, its pen colours and the two bytes in a line record
were decided: not by reading the decompilation and guessing, but by putting the
original's own picture next to the file it drew it from.  Everything here
assumes the transform the original uses, which is

    screen_x = (int)(x + 121)      screen_y = (int)(463 - y)

-- itself measured, with dosv_emu_cpp's DOSEMU_BP on the line routine.
"""
import struct
import sys

W, H = 640, 480
X0, Y0, X1, Y1 = 122, 17, 638, 462          # the drawing area

def load_screen(path):
    d = open(path, 'rb').read()
    if len(d) != W * H * 4:
        raise SystemExit('%s is %d bytes, not %d of RGBA' % (path, len(d), W * H * 4))
    return d


def lit(scr, x, y):
    i = (y * W + x) * 4
    return scr[i] or scr[i + 1] or scr[i + 2]


def rgb(scr, x, y):
    i = (y * W + x) * 4
    return scr[i], scr[i + 1], scr[i + 2]


def colour_index(pal, c):
    return pal.get(c)


def read_palette(path='orig/JW_PAL.DAT'):
    """index -> (r,g,b), 8 bits, the way both sides scale the DAC."""
    out = {}
    for i, line in enumerate(open(path, 'rb').read().split(b'\n')):
        parts = line.split()
        if len(parts) != 3 or i >= 16:
            continue
        v = [int(p, 16) for p in parts]
        out[tuple(((x << 2) | (x >> 4)) for x in v)] = i
    return out


class Jwc(object):
    def __init__(self, path):
        d = open(path, 'rb').read()
        self.d = d
        head = d[0xc8:0xc8 + 200].split(b'\x00')[0].decode('cp932', 'replace')
        n = [int(x) for x in head.split(',')[:4]]
        self.n_lines, self.n_arcs, self.n_texts, self.n_points = n
        line4 = d[0x258:0x258 + 200].split(b'\x00')[0].decode('cp932', 'replace')
        self.pool_len = int(line4.split(',')[1].split(':')[1], 16)
        span = (self.n_lines * 22 + self.n_arcs * 32 + self.n_texts * 24
                + self.pool_len + self.n_points * 12)
        # src/jwc.c's rule: the body ends at the last non-zero byte. Trailing
        # zeros inside the last record make that off by a byte or two, and a
        # misaligned start reads floats out of the middle of other floats -- so
        # the candidates are checked rather than trusted.
        end = len(d)
        while end > 0 and d[end - 1] == 0:
            end -= 1
        self.at = None
        # src/jwc.c searches 1000..2600 past the four header lines; the samples
        # sit at 1589 and 1621. Bounding the search is what keeps it from
        # finding an earlier offset where a handful of records happen to look
        # like coordinates.
        for cand in [end - span] + list(range(800 + 1000, 800 + 2600)):
            if cand > 0 and self._fits(cand, span):
                self.at = cand
                break
        if self.at is None:
            raise SystemExit('cannot find where the data starts in ' + path)
        self.texts_at = self.at + self.n_lines * 22 + self.n_arcs * 32
        self.pool_at = self.texts_at + self.n_texts * 24

    def _fits(self, at, span):
        """src/jwc.c's layout_fits(), in Python.

        Every record, not a sample of them: a wrong start reads floats out of
        the middle of other floats, and a handful of those *do* look like
        coordinates -- sampling sixteen of them found four different wrong
        answers across four drawings before this was tightened to match the
        port's own rule."""
        d = self.d
        if at < 0 or at + span > len(d):
            return False

        def sane(p, n):
            for f in struct.unpack_from('<%df' % n, d, p):
                if f != f or not (-1e6 < f < 1e6):
                    return False
            return True

        p = at
        for _ in range(self.n_lines):
            if not sane(p, 4):
                return False
            p += 22
        for _ in range(self.n_arcs):
            if not sane(p, 3):
                return False
            if struct.unpack_from('<f', d, p + 8)[0] <= 0.0:       # the radius
                return False
            flat = struct.unpack_from('<h', d, p + 12)[0]          # x10000
            if flat <= 0 or flat > 10000:
                return False
            p += 32
        for _ in range(self.n_texts):
            if not sane(p, 4):
                return False
            if struct.unpack_from('<H', d, p + 16)[0] >= self.pool_len:
                return False
            p += 24
        p += self.pool_len
        for _ in range(self.n_points):
            if not sane(p, 2):
                return False
            p += 12
        return p <= len(d)

    def line(self, k):
        p = self.at + k * 22
        x0, y0, x1, y1 = struct.unpack_from('<4f', self.d, p)
        return x0, y0, x1, y1, self.d[p + 16], self.d[p + 17]

    def text(self, k):
        p = self.texts_at + k * 24
        x0, y0, x1, y1 = struct.unpack_from('<4f', self.d, p)
        off = struct.unpack_from('<H', self.d, p + 16)[0]
        return x0, y0, x1, y1, off, self.d[p + 20]

    def cells(self, off):
        """Character cells in a pool string; a full-width character is two."""
        n, i = 0, self.pool_at + off
        while i < len(self.d) and self.d[i]:
            wide = 0x81 <= self.d[i] <= 0x9F or 0xE0 <= self.d[i] <= 0xFC
            n += 2 if wide else 1
            i += 2 if wide else 1
        return n


def sx(x):
    return int(x + 121)


def sy(y):
    return int(463 - y)


def pens(jwc, scr, pal):
    """Which colour index the original gives each value of the two bytes."""
    tab = ({}, {})
    for k in range(jwc.n_lines):
        x0, y0, x1, y1, b16, b17 = jwc.line(k)
        votes = {}
        for i in range(1, 12):
            t = i / 12.0
            x, y = sx(x0 + (x1 - x0) * t), sy(y0 + (y1 - y0) * t)
            if not (X0 <= x <= X1 and Y0 <= y <= Y1) or not lit(scr, x, y):
                continue
            c = colour_index(pal, rgb(scr, x, y))
            if c is not None:
                votes[c] = votes.get(c, 0) + 1
        if not votes:
            continue
        c = max(votes.items(), key=lambda kv: kv[1])[0]
        for t, b in zip(tab, (b16, b17)):
            t.setdefault(b, {})
            t[b][c] = t[b].get(c, 0) + 1

    for name, t in zip(('byte 16 (line type)', 'byte 17 (pen)'), tab):
        print(name)
        for b in sorted(t):
            items = sorted(t[b].items(), key=lambda kv: -kv[1])
            total = sum(t[b].values())
            print('  %2d -> %s   (%d%% agree on colour %d)'
                  % (b, ' '.join('%d:%d' % kv for kv in items[:4]),
                     100 * items[0][1] // total, items[0][0]))


def text(jwc, scr):
    """The original draws a .JWC text as a hollow rectangle of its box, not as
    glyphs -- at least at the zooms the samples were saved with.  This reports
    the box it actually drew, against the character cell the record implies."""
    print('text: size, cells, pixels per full-width cell, box height')
    for k in range(jwc.n_texts):
        x0, y0, x1, y1, off, size = jwc.text(k)
        a, b, base = sx(x0), sx(x1), sy(y0)
        if not (X0 + 3 <= a and b <= X1 - 3 and Y0 + 13 <= base <= Y1 - 3) or b - a < 8:
            continue
        h = 0
        for up in range(1, 16):
            y = base - up
            if not (lit(scr, a, y) and lit(scr, b, y)):
                break
            h = up
            if lit(scr, (a + b) // 2, y):
                break                        # the top edge, filled across
        n = jwc.cells(off)
        if not n or not h:
            continue
        print('  size %d  %2d cells  %5.2f px/cell  box %d tall  (ratio %.2f)'
              % (size, n, (b - a) / (n / 2.0), h + 1, (h + 1) / ((b - a) / (n / 2.0))))


def main():
    if len(sys.argv) < 3:
        raise SystemExit(__doc__)
    jwc = Jwc(sys.argv[1])
    scr = load_screen(sys.argv[2])
    what = sys.argv[3] if len(sys.argv) > 3 else 'all'
    print('%s: %d lines, %d arcs, %d texts, %d points, data at %d'
          % (sys.argv[1], jwc.n_lines, jwc.n_arcs, jwc.n_texts, jwc.n_points, jwc.at))
    if what in ('all', 'pens'):
        pens(jwc, scr, read_palette())
    if what in ('all', 'text'):
        text(jwc, scr)


main()
