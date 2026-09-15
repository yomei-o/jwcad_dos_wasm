"""Make a .JWC holding a single entity, for reading what the original does to it.

    python tools/onerec.py orig/SAMPLE6.JWC arcs 8 orig/ONE.JWC
    python tools/onerec.py orig/TEST2.JWC texts 12 orig/ONE.JWC

Everything else -- the other kinds, and the other records of the same kind --
is pushed off the paper the way tools/onlykind.py does it, so the file stays
the same size and the offsets in its preamble go on meaning what they say.

One entity at a time is what makes a breakpoint readable: the line routine is
handed a few dozen calls instead of ten thousand, and every one of them belongs
to the thing being asked about.
"""
import struct
import sys

from onlykind import FAR, Jwc

KINDS = ('lines', 'arcs', 'texts', 'points')


def banish_one(j, kind, k):
    """Push record `k` of `kind` off the paper, leaving the rest alone."""
    if kind == 'lines':
        at, size, n = j.at, 22, 4
    elif kind == 'arcs':
        at, size, n = j.arcs_at, 32, 2
    elif kind == 'texts':
        at, size, n = j.texts_at, 24, 4
    else:
        at, size, n = j.points_at, 12, 2
    p = at + k * size
    for i in range(n):
        struct.pack_into('<f', j.d, p + i * 4, FAR + (i % 2) * 10.0)


def main():
    if len(sys.argv) != 5:
        raise SystemExit(__doc__)
    src, kind, which, out = sys.argv[1], sys.argv[2], int(sys.argv[3]), sys.argv[4]
    if kind not in KINDS:
        raise SystemExit('unknown kind ' + kind)
    j = Jwc(src)
    count = {'lines': j.n_lines, 'arcs': j.n_arcs,
             'texts': j.n_texts, 'points': j.n_points}[kind]
    if not 0 <= which < count:
        raise SystemExit('%s has %d %s' % (src, count, kind))
    for other in KINDS:
        if other != kind:
            j.banish(other)
    for k in range(count):
        if k != which:
            banish_one(j, kind, k)
    open(out, 'wb').write(bytes(j.d))
    print('%s: kept %s %d -> %s' % (src, kind, which, out))


if __name__ == '__main__':
    main()
