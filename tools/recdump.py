"""Every entity record of a drawing as raw hex, one per line -- what
tools/functest.sh compares, so that a float differing in its last bit (which
linedump's three decimals and arcdump's four do not show) is still caught.

    python tools/recdump.py tmp/func/orig.JWC

Text records carry a far pointer into the pool, which is not the same between
two saves, so for a text the pointer bytes are replaced by the string itself.
"""
import sys

from onlykind import Jwc


def main():
    j = Jwc(sys.argv[1])
    d = j.d
    for k in range(j.n_lines):
        p = j.at + 22 * k
        print('L%4d %s' % (k, d[p:p + 22].hex()))
    for k in range(j.n_arcs):
        p = j.arcs_at + 32 * k
        print('A%4d %s' % (k, d[p:p + 32].hex()))
    for k in range(j.n_texts):
        p = j.texts_at + 24 * k
        r = d[p:p + 24]
        off = int.from_bytes(r[16:18], 'little')
        s = d[j.pool_at + off:j.pool_at + off + 80].split(b'\0')[0]
        print('T%4d %s %s|%s' % (k, r[:16].hex(), r[20:].hex(), s.hex()))
    p = j.points_at
    for k in range(j.n_points):
        print('P%4d %s' % (k, d[p + 12 * k:p + 12 * k + 12].hex()))


if __name__ == '__main__':
    main()
