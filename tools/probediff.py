"""What tools/probe.sh's SAVE=1 run changed in the drawing's records."""
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from onlykind import Jwc                                         # noqa: E402

name = os.environ.get('DRAW', 'SAMPLE0')
a = Jwc('orig/%s.JWC' % name)
b = Jwc('tmp/sroot/%s.JWC' % name)


def lines(j):
    return [(struct.unpack_from('<4f', j.d, j.at + k * 22),
             bytes(j.d[j.at + k * 22 + 16:j.at + k * 22 + 22]))
            for k in range(j.n_lines)]


def arcs(j):
    return [(struct.unpack_from('<3f', j.d, j.arcs_at + k * 32),
             bytes(j.d[j.arcs_at + k * 32 + 20:j.arcs_at + k * 32 + 32]))
            for k in range(j.n_arcs)]


print('  lines %d -> %d, arcs %d -> %d, texts %d -> %d'
      % (a.n_lines, b.n_lines, a.n_arcs, b.n_arcs, a.n_texts, b.n_texts))
old, new = lines(a), lines(b)
for k, v in enumerate(new):
    if v not in old:
        print('  NEW  line %-4d (%9.3f,%9.3f)-(%9.3f,%9.3f) %s'
              % ((k,) + v[0] + (v[1].hex(' '),)))
for k, v in enumerate(old):
    if v not in new:
        print('  GONE line %-4d (%9.3f,%9.3f)-(%9.3f,%9.3f) %s'
              % ((k,) + v[0] + (v[1].hex(' '),)))
old, new = arcs(a), arcs(b)
for k, v in enumerate(new):
    if v not in old:
        print('  NEW  arc  %-4d c=(%.3f,%.3f) r=%.3f %s'
              % ((k,) + v[0] + (v[1].hex(' '),)))


def texts(j):
    """Coordinates, the string itself and the four bytes after it.  The string
    has to be pulled out of the pool -- the record only carries the offset, and
    an edit that leaves the offset alone still changes what it points at."""
    out = []
    for k in range(j.n_texts):
        p = j.texts_at + k * 24
        off = struct.unpack_from('<H', j.d, p + 16)[0]
        end = j.d.index(0, j.pool_at + off)
        out.append((struct.unpack_from('<4f', j.d, p),
                    bytes(j.d[j.pool_at + off:end]),
                    bytes(j.d[p + 20:p + 24])))
    return out


def show(what, k, v):
    print('  %s text %-4d (%9.3f,%9.3f)-(%9.3f,%9.3f) %s %s'
          % ((what, k) + v[0] + (v[2].hex(' '), v[1].decode('cp932', 'replace'))))


old, new = texts(a), texts(b)
for k, v in enumerate(new):
    if v not in old:
        show('NEW ', k, v)
for k, v in enumerate(old):
    if v not in new:
        show('GONE', k, v)

# A record that is rewritten unchanged still **moves to the back** -- 文編集's
# [Enter] does that even when nothing was typed -- and a set difference cannot
# see it.  So say where each one went as well.
if sorted(old) == sorted(new) and old != new:
    for k, v in enumerate(old):
        if k < len(new) and new[k] != v:
            print('  MOVED text %d -> %d  %s'
                  % (k, new.index(v), v[1].decode('cp932', 'replace')))
