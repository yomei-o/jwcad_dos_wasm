# -*- coding: utf-8 -*-
"""The top line of a branch, original over port.

    python tools/branchtop.py 2 127 202 204

Most of what a menu item does is one line of words, so this crops row 1 out
of both screens and stacks them, one pair per branch, with a red rule between
the two and a wider gap between branches.  Written to tmp/branch/top.png.
"""
import sys

from PIL import Image

W, H = 640, 480
ROW = 16


def load(path):
    d = open(path, 'rb').read()
    s = len(d) // (W * H)
    return Image.frombytes('RGBA' if s == 4 else 'RGB', (W, H), d).convert('RGB')


ns = [a for a in sys.argv[1:] if a.isdigit()]
unit = ROW * 2 + 2 + 6
out = Image.new('RGB', (W, unit * len(ns)), (255, 0, 0))
for i, n in enumerate(ns):
    y = i * unit
    out.paste(load('tmp/branch/o%s.raw' % n).crop((0, 0, W, ROW)), (0, y))
    out.paste(load('tmp/branch/p%s.raw' % n).crop((0, 0, W, ROW)), (0, y + ROW + 2))
    out.paste(Image.new('RGB', (W, 6), (0, 0, 128)), (0, y + ROW * 2 + 2))
out = out.resize((W * 2, out.height * 2), Image.NEAREST)
out.save('tmp/branch/top.png')
print('tmp/branch/top.png  ' + ' '.join(ns))
