"""The line each menu item puts up, out of src/prompt.h, as readable text.

    python tools/prompts.py          # the ones not implemented yet
    python tools/prompts.py 9 21     # those two, implemented or not
"""
import re
import sys

sys.stdout.reconfigure(encoding='utf-8', errors='replace')
DONE = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 16, 20, 22, 24, 25}
src = open('src/prompt.h', encoding='latin-1').read()
start = src.index('JW_PROMPT[30][8] = {')
body = src[start:]
blocks = re.split(r'\{\s*/\*\s*(\d+)\s*\*/', body)
out = {}
for i in range(1, len(blocks), 2):
    n = int(blocks[i])
    rows = []
    for m in re.finditer(r'\{\s*(\d+),\s*(\d+),\s*\d+,\s*0x[0-9a-fA-F]+,\s*(".*?")\s*\}',
                         blocks[i + 1], re.S):
        col, row, lit = int(m.group(1)), int(m.group(2)), m.group(3)
        if row != 1:
            continue
        b = bytearray()
        j = 0
        while j < len(lit):
            c = lit[j]
            if c == '"':
                j += 1
            elif c == chr(92) and lit[j + 1] == 'x':
                b.append(int(lit[j + 2:j + 4], 16))
                j += 4
            elif c == chr(92):
                b.append(ord(lit[j + 1]))
                j += 2
            elif c in ' \n' and lit[j:].lstrip()[:1] == '"':
                j += 1
            else:
                b.append(ord(c))
                j += 1
        rows.append((col, bytes(b)))
    out[n] = rows

only = [int(a) for a in sys.argv[1:]]
for n in range(1, 31):
    if only and n not in only:
        continue
    if not only and n in DONE:
        continue
    line = [' '] * 90
    for col, b in out.get(n, []):
        t = b.decode('cp932', 'replace')
        for k, ch in enumerate(t):
            if col - 1 + k < 90:
                line[col - 1 + k] = ch
    print('%2d  %s' % (n, ''.join(line).rstrip()))
