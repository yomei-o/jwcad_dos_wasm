# -*- coding: utf-8 -*-
"""One branch's words out of tools/branchstr.sh's log.

    python tools/strpick.py 7 9
    python tools/strpick.py --c 7 9      # and the C literals to paste

branchstr.sh only writes tmp/branch/str.txt when the whole run is over, and a
run over every differing branch is two hours.  The log it reads,
tmp/branch/rawstr.txt, is written as it goes, so this reads that instead and
can be asked for a branch the moment its shot has been taken.

`--c` turns each line into the literal src/ui.c needs.  sjisc.py does the same
job starting from readable text; this starts from the bytes the original
actually wrote, which is the thing the screens are compared against, so no
encoding step can go wrong in between.
"""
import io
import os
import re
import sys

# The words are Shift-JIS bytes carried as latin-1, so the console's own codec
# would refuse them.  Write the bytes straight through.
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='latin-1', newline='')

as_c = '--c' in sys.argv
want = set(int(a) for a in sys.argv[1:] if a.isdigit())


def literal(raw, indent='      ', width=64):
    """The bytes as C string literals.

    A hex escape in C is greedy -- "\\xdfAC" is one character, not three --
    so a run of escapes is closed before any ASCII that follows.
    """
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


# **The shot is taken after the presses, so a branch's lines come BEFORE its
# marker, not after.**  The emulator prints its own line when it writes the
# shot; everything logged since the last one is what that branch did.
held = []


def flush(n):
    for col, row, fg, bg, text in held:
        print('  col=%-3d row=%-3d fg=%d bg=%04X %s' % (col, row, fg, bg, text))
        if as_c:
            raw = text[text.index('"') + 1:text.rindex('"')].encode('latin-1')
            print('      ' + literal(raw))
    del held[:]


LOG = os.environ.get('BRANCHLOG', 'tmp/branch/rawstr.txt')
for line in open(LOG, encoding='latin-1'):
    # The emulator prints `[shot] <file> after <n>` on stdout, in the same
    # buffer as the tracing, so the marker sits where it belongs among the
    # writes.  (`dosemu: wrote ...` on stderr does not: stderr is
    # unbuffered and stdout is not, and a merged log has it too early.)
    m = re.search(r'\[shot\] .*?mark(\d+)\.raw', line)
    if m:
        n = int(m.group(1))
        if n in want:
            print('== branch %d' % n)
            flush(n)
        del held[:]
        continue
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
    held.append((col, row, fg, bg, line[line.index('"'):].rstrip('\n')))
