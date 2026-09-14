"""Work out what each of the 36 overlays is for.

An overlay is pure code -- the strings all live in the root's DGROUP -- so
nothing in an overlay's own bytes says what it does.  But its code loads DGROUP
offsets as immediates to get at those strings, and the string table is known, so
the strings an overlay reaches for say a great deal about which part of the CAD
it is.

    python tools/ovlmap.py              # a few strings per overlay
    python tools/ovlmap.py 28           # everything overlay 28 reaches for
    python tools/ovlmap.py --callers    # who calls whom, from decomp/thunks.csv

Immediate loads only (`mov reg,imm16` and `push imm16`), not every two-byte
value that happens to match, or the noise buries the signal.  It is still a
guess made from byte patterns, so treat the output as a lead, not a fact.
"""
import collections
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)

import overlays as ov

DGROUP = 0x3375

# Instructions that load a 16-bit immediate, which is how a DGROUP offset gets
# into a register before a call.  b8..bf is mov r16,imm16; 68 is push imm16.
IMM = {0xb8: 'ax', 0xb9: 'cx', 0xba: 'dx', 0xbb: 'bx',
       0xbc: 'sp', 0xbd: 'bp', 0xbe: 'si', 0xbf: 'di', 0x68: 'push'}


def dgroup_strings(img):
    """{offset: text} for every printable, NUL-terminated string in DGROUP."""
    dg = img[DGROUP * 16:]
    out = {}
    i = 0
    while i < len(dg):
        j = dg.find(b'\x00', i)
        if j < 0:
            break
        s = dg[i:j]
        if 3 <= len(s) <= 80:
            try:
                t = s.decode('cp932')
            except UnicodeDecodeError:
                t = None
            if t and re.search(r'[A-Za-z぀-ヿ一-鿿]', t) \
                    and all(c == '\t' or c >= ' ' for c in t):
                out[i] = t
        i = j + 1
    return out


def referenced(img, strings):
    """Which DGROUP strings this image loads the address of, in order."""
    hits = []
    seen = set()
    for i in range(len(img) - 2):
        if img[i] in IMM:
            v = img[i + 1] | (img[i + 2] << 8)
            if v in strings and v not in seen:
                seen.add(v)
                hits.append((v, strings[v]))
    return hits


def load_images():
    packed = open(ov.PACKED, 'rb').read()
    unp = open(ov.UNPACKED, 'rb').read()
    hdr, size, _r, _cs, _ip, _ss, _sp = ov.mz(unp)
    return unp[hdr:size], ov.chain(packed)


def callers():
    path = os.path.join(ROOT, 'decomp', 'thunks.csv')
    if not os.path.exists(path):
        raise SystemExit('run: python tools/thunks.py --write')
    edges = collections.defaultdict(collections.Counter)
    for line in open(path).read().splitlines()[1:]:
        image, _off, ovl, _target = line.split(',')
        edges[int(ovl)][image] += 1
    print(' ovl  called from')
    for n in sorted(edges):
        who = ', '.join('%s x%d' % (k, v) for k, v in edges[n].most_common())
        print('  %2d  %s' % (n, who))


def main():
    if '--callers' in sys.argv:
        callers()
        return
    only = int(sys.argv[1]) if len(sys.argv) > 1 and sys.argv[1].isdigit() else 0

    root, ovls = load_images()
    strings = dgroup_strings(root)
    print('%d DGROUP strings\n' % len(strings))

    for n, o in enumerate(ovls, 1):
        if only and n != only:
            continue
        hits = referenced(o['image'], strings)
        limit = len(hits) if only else 14
        print('--- overlay %2d  (%d bytes, %d string references)'
              % (n, len(o['image']), len(hits)))
        for off, text in hits[:limit]:
            print('     %04x  %s' % (off, text))
        if not only and len(hits) > limit:
            print('     ... %d more' % (len(hits) - limit))
        print()


if __name__ == '__main__':
    main()
