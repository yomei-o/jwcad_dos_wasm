"""Decode the original's line calls out of a DOSEMU_BP=0EFF:17BB log.

    python tools/lr.py tmp/lr_one.txt [x0 y0 x1 y1]

Each line of the log carries [2]..[5] as four little-endian floats: the two
ends of the segment, **already in screen pixels** -- `x+121` and `463-y` is
what turns a record into a screen position, and by the time the line routine
sees it that has been done.  With a box, only segments that touch it are shown.
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
    for i, (sx0, sy0, sx1, sy1) in enumerate(calls(sys.argv[1])):
        if want:
            if max(sx0, sx1) < want[0] or min(sx0, sx1) > want[2]:
                continue
            if max(sy0, sy1) < want[1] or min(sy0, sy1) > want[3]:
                continue
        print('%5d (%9.4f,%9.4f)-(%9.4f,%9.4f)' % (i, sx0, sy0, sx1, sy1))


if __name__ == '__main__':
    main()
