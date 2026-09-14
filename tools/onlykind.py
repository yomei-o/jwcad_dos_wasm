"""Make a .JWC that holds only one kind of entity, for comparing one at a time.

    python tools/onlykind.py orig/SAMPLE6.JWC arcs tmp/only_arcs.JWC

Everything is easier to settle when only one thing is on the screen, and the
only way to be sure the original is drawing the same one thing is to give the
*original* a drawing that has only that in it.

Records are not removed -- that would move everything after them and the file
is a memory image, so the offsets in its preamble would stop meaning what they
say.  The unwanted ones are pushed a long way off the paper instead; both the
original and the port clip them away, and the bytes stay exactly where they
were.

`kind` is lines, arcs, texts, points, or a comma-separated list of them.
"""
import struct
import sys

FAR = 60000.0          # far outside the drawing area, well inside the float
                       # range src/jwc.c sanity-checks (+/- 1e6)
TEXT_LINE = 200


class Jwc(object):
    """The same layout src/jwc.c works out, so the two agree by construction."""

    def __init__(self, path):
        d = bytearray(open(path, 'rb').read())
        self.d = d
        head = bytes(d[0xc8:0xc8 + TEXT_LINE]).split(b'\x00')[0].decode('cp932')
        n = [int(x) for x in head.split(',')[:4]]
        self.n_lines, self.n_arcs, self.n_texts, self.n_points = n
        line4 = bytes(d[0x258:0x258 + TEXT_LINE]).split(b'\x00')[0].decode('cp932')
        self.pool_len = int(line4.split(',')[1].split(':')[1], 16)
        span = (self.n_lines * 22 + self.n_arcs * 32 + self.n_texts * 24
                + self.pool_len + self.n_points * 12)
        end = len(d)
        while end > 0 and d[end - 1] == 0:
            end -= 1
        self.at = None
        for cand in [end - span] + list(range(1800, 3400)):
            if cand > 0 and self._fits(cand, span):
                self.at = cand
                break
        if self.at is None:
            raise SystemExit('cannot find where the data starts in ' + path)
        self.arcs_at = self.at + self.n_lines * 22
        self.texts_at = self.arcs_at + self.n_arcs * 32
        self.pool_at = self.texts_at + self.n_texts * 24
        self.points_at = self.pool_at + self.pool_len

    def _fits(self, at, span):
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
            if struct.unpack_from('<f', d, p + 8)[0] <= 0.0:
                return False
            flat = struct.unpack_from('<h', d, p + 12)[0]
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

    def banish(self, kind):
        """Push every record of this kind off the paper."""
        if kind == 'lines':
            for k in range(self.n_lines):
                p = self.at + k * 22
                for i in range(4):
                    struct.pack_into('<f', self.d, p + i * 4,
                                     FAR + (i % 2) * 10.0)
        elif kind == 'arcs':
            for k in range(self.n_arcs):
                p = self.arcs_at + k * 32
                struct.pack_into('<ff', self.d, p, FAR, FAR)
        elif kind == 'texts':
            for k in range(self.n_texts):
                p = self.texts_at + k * 24
                for i in range(4):
                    struct.pack_into('<f', self.d, p + i * 4,
                                     FAR + (i % 2) * 10.0)
        elif kind == 'points':
            for k in range(self.n_points):
                p = self.points_at + k * 12
                struct.pack_into('<ff', self.d, p, FAR, FAR)
        else:
            raise SystemExit('unknown kind ' + kind)


def main():
    if len(sys.argv) != 4:
        raise SystemExit(__doc__)
    src, keep, out = sys.argv[1], sys.argv[2], sys.argv[3]
    keep = set(k.strip() for k in keep.split(','))
    all_kinds = ('lines', 'arcs', 'texts', 'points')
    for k in keep:
        if k not in all_kinds:
            raise SystemExit('unknown kind ' + k)
    j = Jwc(src)
    for k in all_kinds:
        if k not in keep:
            j.banish(k)
    open(out, 'wb').write(bytes(j.d))
    print('%s: kept %s -> %s  (%d lines, %d arcs, %d texts, %d points)'
          % (src, ','.join(sorted(keep)), out,
             j.n_lines, j.n_arcs, j.n_texts, j.n_points))


if __name__ == '__main__':
    main()
