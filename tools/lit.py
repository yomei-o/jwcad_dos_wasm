# -*- coding: utf-8 -*-
"""One line out of any of the emulator logs, as a C literal.

    python tools/lit.py tmp/esc/raw.txt 22 2

Takes the log, a column and a row, and prints the last write that went there
-- the bytes the original wrote, ready to paste into src/ui.c.  The same rule
as tools/strpick.py --c, for the logs that are not the branch run's.
"""
import io
import re
import sys

sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='latin-1', newline='')


def literal(raw, indent='    ', width=58):
    chunks, cur, cur_hex = [], '', False
    for ch in raw:
        hexed = not (0x20 <= ch < 0x7f) or ch in (0x22, 0x5c)
        if cur and hexed != cur_hex:
            chunks.append('"%s"' % cur)
            cur = ''
        cur += '\\x%02x' % ch if hexed else chr(ch)
        cur_hex = hexed
    if cur:
        chunks.append('"%s"' % cur)
    lines, line = [], ''
    for c in chunks:
        if line and len(line) + 1 + len(c) > width:
            lines.append(line)
            line = c
        else:
            line = line + ' ' + c if line else c
    if line:
        lines.append(line)
    return (' \\\n' + indent).join(lines)


log = sys.argv[1]
want_col = int(sys.argv[2]) if len(sys.argv) > 2 else None
want_row = int(sys.argv[3]) if len(sys.argv) > 3 else None

for line in open(log, encoding='latin-1'):
    if '[bp]' not in line or line.count('"') < 2:
        continue
    f = line.split()
    if len(f) < 15:
        continue
    try:
        col, row = int(f[8], 16), int(f[9], 16)
        fg, bg = int(f[10], 16), int(f[11], 16)
    except ValueError:
        continue
    if (want_col is not None and col != want_col) \
            or (want_row is not None and row != want_row):
        continue
    text = line[line.index('"'):].rstrip('\n')
    raw = text[text.index('"') + 1:text.rindex('"')].encode('latin-1')
    print('col=%-3d row=%-3d fg=%d bg=%04X %s' % (col, row, fg, bg, text))
    print('    ' + literal(raw))
