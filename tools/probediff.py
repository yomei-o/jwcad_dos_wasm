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
