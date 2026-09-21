# -*- coding: utf-8 -*-
"""The port's plot against the original's.

    python tools/plotcmp.py ../dosv_emu_cpp/tmp/proot/PLOT orig/SAMPLE0.JWC

The original plots through a `*.JWP` definition (dosv_emu_cpp's
plot/WASM.JWP writes one plain line per thing drawn); the port walks the
drawing itself (src/plot.c).  Both work in millimetres of paper, but the
plotter's origin is the sheet's centre and the drawing's is its own corner,
so the two differ by a **constant translation** -- which this works out from
the first segment and then holds everything else to.

Needs tmp/walk.exe, which prints the port's walk:

    sh tools/cc.sh -O1 -Isrc -o tmp/walk.exe tools/walk.c src/plot.c \\
        src/png.c src/jwc.c src/view.c src/draw.c src/vga.c src/fontx.c -lm
"""
import subprocess
import sys

TOL = 0.02          # millimetres; the plot rounds to 1/100


def original(path):
    """The M/D chains of a plot file, as segments in millimetres."""
    out = []
    at = None
    for raw in open(path, 'rb').read().split(b'\n'):
        f = raw.split()
        if not f:
            continue
        k = f[0]
        if k == b'M' and len(f) >= 3:
            at = (int(f[1]) / 100.0, int(f[2]) / 100.0)
        elif k == b'D' and len(f) >= 3:
            to = (int(f[1]) / 100.0, int(f[2]) / 100.0)
            if at:
                out.append((at[0], at[1], to[0], to[1]))
            at = to
    return out


def port(exe, jwc):
    out = []
    for line in subprocess.run([exe, jwc], capture_output=True, shell=False).stdout.split(b'\n'):
        f = line.split()
        if len(f) >= 5 and f[0] == b'L':
            out.append(tuple(float(v) for v in f[1:5]))
    return out


def main():
    plot, jwc = sys.argv[1], sys.argv[2]
    exe = sys.argv[3] if len(sys.argv) > 3 else './tmp/walk.exe'
    a = original(plot)
    b = port(exe, jwc)

    print('%-14s original %d segments, port %d' % (jwc.split('/')[-1], len(a), len(b)))
    if not a or not b:
        print('  nothing to compare')
        return 1
    if len(a) != len(b):
        print('  **different counts**')
        return 1
    dx = a[0][0] - b[0][0]
    dy = a[0][1] - b[0][1]
    # **Either way round.**  The plotter chains M/D to keep the pen down, so
    # a segment can come out end-first; it is the same line on the paper.
    def shifted(q, flip):
        v = [q[2], q[3], q[0], q[1]] if flip else list(q)
        return [v[0] + dx, v[1] + dy, v[2] + dx, v[3] + dy]

    def same(p, q):
        return any(all(abs(p[j] - w[j]) <= TOL for j in range(4))
                   for w in (shifted(q, False), shifted(q, True)))

    bad = 0
    for i, (p, q) in enumerate(zip(a, b)):
        if not same(p, q):
            if bad < 5:
                print('  %d: %s vs %s (+%.3f,%.3f)' % (i, p, q, dx, dy))
            bad += 1
    print('  offset (%.3f, %.3f); %d of %d segments differ' % (dx, dy, bad, len(a)))
    return 1 if bad else 0


sys.exit(main())
