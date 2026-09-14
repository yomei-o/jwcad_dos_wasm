"""Print one decompiled function out of decomp/*/all.c.

    python tools/func.py 1000:0446         # main, from the root
    python tools/func.py 3ab8:31df         # from whichever overlay has it
    python tools/func.py 20a9              # every function in that segment, listed
    python tools/func.py --list 20a9       # the same, as a table

Addresses here are **Ghidra's** -- what `all.c` and `index.csv` print, which is
0x1000 segments above the link addresses `tools/disasm.py` and
`tools/callsites.py` take.  main is `1000:0446` here and `0000:0446` there.

DecompileAll can write one file per function, but that is 618 files for the root
alone and the same text is already in all.c, so the per-function files are not
kept and this pulls them out on demand.
"""
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
DECOMP = os.path.join(ROOT, 'decomp')

HEAD = re.compile(r'\n/\* ([0-9a-f]{4}:[0-9a-f]{4})\s+(\S+)\s+(\d+) bytes, (\d+) callers \*/\n')


def sources():
    for name in sorted(os.listdir(DECOMP)):
        path = os.path.join(DECOMP, name, 'all.c')
        if os.path.exists(path):
            yield name, path


def functions(path):
    text = open(path, encoding='utf-8', errors='replace').read()
    parts = HEAD.split(text)
    for i in range(1, len(parts) - 4, 5):
        yield parts[i], parts[i + 1], int(parts[i + 2]), int(parts[i + 3]), parts[i + 4]


def main():
    args = [a for a in sys.argv[1:] if a != '--list']
    listing = '--list' in sys.argv or (args and ':' not in args[0])
    if not args:
        raise SystemExit(__doc__)
    want = args[0].lower()

    found = 0
    for image, path in sources():
        for addr, name, size, callers, body in functions(path):
            if not (addr == want or name.lower() == want
                    or (':' not in want and addr.startswith(want + ':'))):
                continue
            found += 1
            if listing:
                print('  %-8s %-12s %-22s %5d bytes  %2d callers'
                      % (image, addr, name, size, callers))
            else:
                print('/* %s  %s  %s  %d bytes, %d callers */'
                      % (image, addr, name, size, callers))
                print(body.rstrip())
                print()
    if not found:
        print('nothing matched %r in %s'
              % (want, ', '.join(n for n, _ in sources())))


if __name__ == '__main__':
    main()
