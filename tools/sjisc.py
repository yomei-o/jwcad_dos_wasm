# -*- coding: utf-8 -*-
"""A line the original wrote, as a C string literal.

    python tools/sjisc.py "[ESC] ファイル選択 |①選択確定 |"
    python tools/sjisc.py --file tmp/line.txt

The screens are compared byte for byte, so the bytes in src/ui.c have to be
the bytes the original wrote -- Shift-JIS, not UTF-8.  Typing them by hand
is how `範` went missing from one bar for a week.

Two things this gets right that hand-writing does not:

  * a hex escape in C is **greedy**.  "\\xdfAC" is one character, not three,
    because A and C are hex digits.  So a run of escapes is closed before
    any ASCII that follows: "\\xdf" "AC".
  * ASCII stays ASCII, so the literal is still readable.
"""
import sys

def literal(text, indent='    ', width=64):
    """The text as a sequence of C string literals, ready to paste."""
    chunks, cur, cur_hex = [], '', False
    for ch in text.encode('cp932'):
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

if __name__ == '__main__':
    if len(sys.argv) > 2 and sys.argv[1] == '--file':
        text = open(sys.argv[2], encoding='utf-8').read().rstrip('\n')
    else:
        text = sys.argv[1]
    print(literal(text))
