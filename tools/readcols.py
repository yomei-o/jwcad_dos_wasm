# -*- coding: utf-8 -*-
"""A row of the screen as runs of text with the column each one starts at.

    python tools/readcols.py tmp/shot.raw 1

tools/readrow.py gives the line; this gives the columns, which is what a
`jw_ui_text(v, col, row, ...)` needs.  Runs of full-width blanks break it up,
because those are the gaps between one piece of the line and the next.
"""
import subprocess
import sys

raw, row = sys.argv[1], sys.argv[2] if len(sys.argv) > 2 else '1'
out = subprocess.run([sys.executable, 'tools/readrow.py', raw, row, row],
                     capture_output=True).stdout
line = out.split(b'\n')[0]
# readrow prints "%2d " then the row; cp932 from there on
text = line[3:].decode('cp932', 'replace')

col = 1
run = ''
start = 1
for ch in text:
    wide = 2 if ord(ch) > 0xff else 1
    if ch in ('　', ' '):
        if run.strip():
            print('col %2d  %r' % (start, run))
        run = ''
        col += wide
        start = col
        continue
    if not run:
        start = col
    run += ch
    col += wide
if run.strip():
    print('col %2d  %r' % (start, run))
print('--- bytes ---')
for piece in text.split('　'):
    if piece.strip():
        print(' '.join('\\x%02x' % b for b in piece.encode('cp932', 'replace')))
