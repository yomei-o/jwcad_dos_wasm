"""Decode the original's line calls out of a DOSEMU_BP=0EFF:17BB log.

    python tools/lr.py tmp/lr_one.txt [x0 y0 x1 y1]

Each line of the log carries [2]..[5] as four little-endian floats: the two
ends of the segment in drawing coordinates.  Screen is x+121, 463-y, which is
what gets printed; with a box, only segments that touch it are shown.
"""
import re
import struct
import sys

PAT = re.compile(r'\[2\]->(\w{8}).*\[3\]->(\w{8}).*\[4\]->(\w{8}).*\[5\]->(\w{8})')


def f(h):
    return struct.unpack('<f', bytes.fromhex(h))[0]


def calls(path):
    out = []
    for ln in open(path):
        m = PAT.search(ln)
        if m:
            out.append(tuple(f(h) for h in m.groups()))
    return out


def main():
    want = tuple(float(x) for x in sys.argv[2:6]) if len(sys.argv) == 6 else None
    for i, (x0, y0, x1, y1) in enumerate(calls(sys.argv[1])):
        sx0, sy0, sx1, sy1 = x0 + 121, 463 - y0, x1 + 121, 463 - y1
        if want:
            if max(sx0, sx1) < want[0] or min(sx0, sx1) > want[2]:
                continue
            if max(sy0, sy1) < want[1] or min(sy0, sy1) > want[3]:
                continue
        print('%5d (%10.5f,%10.5f)-(%10.5f,%10.5f)  screen (%8.4f,%8.4f)-(%8.4f,%8.4f)'
              % (i, x0, y0, x1, y1, sx0, sy0, sx1, sy1))


if __name__ == '__main__':
    main()
