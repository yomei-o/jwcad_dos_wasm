"""Pair what the original's entity search was asked with what it answered.

    sh tools/pickat.sh 197 157 200 140

reads with two breakpoints and leaves the reports in tmp/pick/raw.txt; this
turns them into one line per search.  Both are needed because **a press does
not always reach the search** -- so pairing answers with presses by counting
them is wrong, and the point the search was handed has to come out of the
search's own arguments.

    11f2:573f   the search itself.  Two doubles on the stack: the point, in
                drawing units (x = screen x - 121, y = 463 - screen y).
    11f2:56a2   `mov [bp-1ah],ax`, just after the call.  DX:AX is the answer,
                and AX is the entity counting from one; 0 is 読取可能データ無.
"""
import re
import sys

ARGS = re.compile(r'd\[2\]=(\S+)  d\[6\]=(\S+)')
ANSWER = re.compile(r'ax=([0-9A-F]+)->[0-9A-F]*  dx=([0-9A-F]+)')


def main():
    name = sys.argv[1] if len(sys.argv) > 1 else ''
    path = sys.argv[2] if len(sys.argv) > 2 else 'tmp/pick/raw.txt'
    at = None
    for line in open(path, encoding='latin-1'):
        if ':573F' in line:
            m = ARGS.search(line)
            at = m.groups() if m else None
        elif ':56A2' in line and at:
            m = ANSWER.search(line)
            ax, dx = m.groups() if m else ('0', '0')
            n = int(ax, 16) | (int(dx, 16) << 16)
            print('%-8s drawing (%s,%s) -> %s'
                  % (name, at[0], at[1], n if n else 'nothing'))
            at = None


if __name__ == '__main__':
    main()
