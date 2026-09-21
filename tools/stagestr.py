"""One command's stage rows out of a JwStage table, as readable text.

    python tools/stagestr.py src/copy.h 1 4        # command 1, stage 4
    python tools/stagestr.py src/typed.h 1         # every stage of command 1

Prints `stage col row  text`, which is the shape the tables are written in.
The strings there are Shift-JIS written as C escapes, so this unescapes them
and decodes -- reading a table by eye otherwise means turning `\\x94\\xcd` into
`範` in your head.
"""
import re
import sys

sys.stdout.reconfigure(encoding='utf-8', errors='replace')
path = sys.argv[1]
want_cmd = int(sys.argv[2]) if len(sys.argv) > 2 else None
want_stage = int(sys.argv[3]) if len(sys.argv) > 3 else None
src = open(path, encoding='latin-1').read()

ROW = re.compile(r'\{\s*(\d+),\s*(\d+),\s*(\d+),\s*(\d+),.*?,\s*'
                 r'((?:"(?:[^"\\]|\\.)*"\s*)+)\}')


def unescape(text):
    out = bytearray()
    for piece in re.findall(r'"((?:[^"\\]|\\.)*)"', text):
        i = 0
        while i < len(piece):
            if piece[i] == '\\':
                if piece[i + 1] == 'x':
                    j = i + 2
                    while j < len(piece) and j < i + 4 and \
                            piece[j] in '0123456789abcdefABCDEF':
                        j += 1
                    out.append(int(piece[i + 2:j], 16))
                    i = j
                else:
                    out.append(ord(piece[i + 1]))
                    i += 2
            else:
                out.append(ord(piece[i]))
                i += 1
    return bytes(out)


for m in ROW.finditer(src):
    cmd, stage, col, row = (int(m.group(i)) for i in (1, 2, 3, 4))
    if want_cmd is not None and cmd != want_cmd:
        continue
    if want_stage is not None and stage != want_stage:
        continue
    print('%3d %3d %3d  %s' % (stage, col, row,
                               unescape(m.group(5)).decode('cp932', 'replace')))
