"""Write a .JWC whose arcs are a sweep of radii, to ask the original questions.

    python tools/mkarcs.py orig/SAMPLE2.JWC 5 34 orig/ARCSW.JWC

The samples only happen to contain a few radii, so the rules that depend on the
radius (how many straight pieces the original cuts an arc into) have gaps in
them.  This takes a drawing with plenty of arc records, pushes everything else
off the paper, and rewrites the arcs as a grid of quarter circles of the radii
asked for -- which the original will then draw, and its own line calls can be
read.
"""
import struct
import sys

sys.path.insert(0, 'tools')
from onlykind import Jwc, FAR


def main():
    if len(sys.argv) < 5:
        raise SystemExit(__doc__)
    src, lo, hi, out = sys.argv[1], int(sys.argv[2]), int(sys.argv[3]), sys.argv[4]
    a0 = int(sys.argv[5]) if len(sys.argv) > 5 else 0
    a1 = int(sys.argv[6]) if len(sys.argv) > 6 else 90
    j = Jwc(src)
    for kind in ('lines', 'texts', 'points'):
        j.banish(kind)
    radii = list(range(lo, hi + 1))
    if len(radii) > j.n_arcs:
        raise SystemExit('%s has only %d arc records, %d radii asked for'
                         % (src, j.n_arcs, len(radii)))
    # A grid with room for the biggest circle, in the drawing's own units:
    # the drawing area is (0,0)-(517,445) once the 121/463 anchor is taken off.
    cell = 2 * hi + 6
    cols = max(1, 517 // cell)
    for i in range(j.n_arcs):
        p = j.arcs_at + i * 32
        if i < len(radii):
            r = float(radii[i])
            cx = cell * (i % cols) + cell / 2.0
            cy = 445.0 - (cell * (i // cols) + cell / 2.0)
            struct.pack_into('<fff', j.d, p, cx, cy, r)
            struct.pack_into('<7h', j.d, p + 12, 10000, 0, a0, 0, a1, 0, 0)
        else:
            struct.pack_into('<ff', j.d, p, FAR, FAR)
    open(out, 'wb').write(bytes(j.d))
    print('%s -> %s: %d quarter circles, radii %d..%d, %d per row'
          % (src, out, len(radii), lo, hi, cols))


if __name__ == '__main__':
    main()
