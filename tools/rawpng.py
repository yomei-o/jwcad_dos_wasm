# -*- coding: utf-8 -*-
"""A .raw screen as a .png, so it can be looked at.

    python tools/rawpng.py tmp/branch/o228.raw            # -> the same name .png
    python tools/rawpng.py tmp/branch/o228.raw out.png
    python tools/rawpng.py --pair 228                     # original | port, side by side

The screens the checks compare are raw RGBA, 640x480, which nothing opens.
This turns one into a picture.  `--pair` puts the original above the port with
a red row between them, which is the quickest way to see what a branch is
missing.
"""
import sys

from PIL import Image

W, H = 640, 480


def load(path):
    d = open(path, 'rb').read()
    s = len(d) // (W * H)
    if s == 4:
        return Image.frombytes('RGBA', (W, H), d).convert('RGB')
    return Image.frombytes('RGB', (W, H), d)


if sys.argv[1] == '--pair':
    n = sys.argv[2]
    a = load('tmp/branch/o%s.raw' % n)
    b = load('tmp/branch/p%s.raw' % n)
    out = Image.new('RGB', (W, H * 2 + 2), (255, 0, 0))
    out.paste(a, (0, 0))
    out.paste(b, (0, H + 2))
    name = sys.argv[3] if len(sys.argv) > 3 else 'tmp/branch/pair%s.png' % n
    out.save(name)
else:
    name = sys.argv[2] if len(sys.argv) > 2 else sys.argv[1][:-4] + '.png'
    load(sys.argv[1]).save(name)
print(name)
