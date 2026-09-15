"""Make a .JWC holding a single arc, for reading what the original does to it.

    python tools/onearc.py orig/SAMPLE6.JWC 8 orig/ONEARC.JWC

Every other entity -- lines, texts, points and the other arcs -- is pushed off
the paper the way tools/onlykind.py does it, so the file stays the same size
and the offsets in its preamble go on meaning what they say.
"""
import struct
import sys

from onlykind import FAR, Jwc


def main():
    if len(sys.argv) != 4:
        raise SystemExit(__doc__)
    src, which, out = sys.argv[1], int(sys.argv[2]), sys.argv[3]
    j = Jwc(src)
    for k in ('lines', 'texts', 'points'):
        j.banish(k)
    for k in range(j.n_arcs):
        if k == which:
            continue
        struct.pack_into('<ff', j.d, j.arcs_at + k * 32, FAR, FAR)
    open(out, 'wb').write(bytes(j.d))
    p = j.arcs_at + which * 32
    cx, cy, r = struct.unpack_from('<fff', j.d, p)
    print('%s arc %d: c=(%.4f,%.4f) r=%.4f -> %s' % (src, which, cx, cy, r, out))


if __name__ == '__main__':
    main()
