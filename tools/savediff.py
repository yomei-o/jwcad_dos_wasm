# -*- coding: utf-8 -*-
"""The save road, the original against the port, step by step.

    python tools/savediff.py

tools/saveroad.sh leaves tmp/save/stepN.raw (the original) and
tools/saveport.mjs leaves tmp/save/portN.raw (the port).  This says how many
pixels differ on each, and on which rows, so the next thing to fix is the
biggest number rather than a guess.
"""
import os

W, H = 640, 480

def load(path):
    d = open(path, 'rb').read()
    return d, len(d) // (W * H)

def rows(a, b):
    da, pa = load(a)
    db, pb = load(b)
    out = {}
    for y in range(H):
        n = 0
        for x in range(W):
            i = (y * W + x) * pa
            j = (y * W + x) * pb
            if da[i:i + 3] != db[j:j + 3]:
                n += 1
        if n:
            out[y // 16 + 1] = out.get(y // 16 + 1, 0) + n
    return out

for n in range(1, 15):
    a = 'tmp/save/step%d.raw' % n
    b = 'tmp/save/port%d.raw' % n
    if not (os.path.exists(a) and os.path.exists(b)):
        continue
    r = rows(a, b)
    total = sum(r.values())
    worst = sorted(r.items(), key=lambda kv: -kv[1])[:4]
    print('step %-3d %7d different   worst rows %s'
          % (n, total, ', '.join('%d:%d' % kv for kv in worst)))
