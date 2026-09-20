"""The top line for a command that has **typing** in it, as src/stage.h rows.

    python tools/steps_table.py 21 d 250 200 450 200 t 4 e

tools/stage_table.py only presses the mouse, so a command that asks for a
number -- 分割's `分割 数 = `, 正多角形's `正多角形の角数 = ` -- has no stages
in src/stage.h at all.  This drives the original through the same steps
tools/probe.sh takes and prints the rows for the steps that *change the line*,
ready to paste into src/typed.h.

The step words are tools/probe.sh's:

    l / r   the button for the presses that follow
    d       a throwaway press at (600,450)
    t TEXT  typed, one character at a time
    e       [Enter]
    X Y     a press there

Each step gets a stage number in the order it happens, starting at 1.  What a
step "wrote" is every cell it was the last to touch inside its own window, the
way tools/stage_table.py does it -- so the rows come out in the same shape and
src/ui.c replays them with the same code.

The window per step is what the script gives it, which is printed alongside so
that a step that needs longer can be given it.
"""
import os
import re
import subprocess
import sys

B = chr(92)
EMU = '../dosv_emu_cpp/dosemu.exe'
BOOT = int(os.environ.get('BOOT', 40_000_000))
PICK = int(os.environ.get('PICK', 40_000_000))
PRESS = 26_000_000          # 3M to move, 3M held, 20M to settle
TYPE = 8_000_000
ENTER = 30_000_000
# How much of a step's window counts as "what the step wrote": the rest is the
# pointer moving on, which src/stage.h marks `moved`.
COLLECT = 22_000_000


def build(n, steps):
    """The script, and the instruction count each step lands at."""
    if n <= 15:
        mx, my = 90, 64 + 16 * (n - 1) + 8
    else:
        mx, my = 30, 64 + 16 * (n - 16) + 8
    out = ['wait %d' % BOOT, 'mouse %d %d' % (mx, my), 'wait 2000000',
           'click left', 'wait %d' % PICK]
    clock = BOOT + 2_000_000 + PICK
    at = []
    btn = 'left'
    i = 0
    while i < len(steps):
        s = steps[i]
        if s in ('l', 'r'):
            btn = 'left' if s == 'l' else 'right'
            i += 1
            continue
        if s == 'd':
            out += ['mouse 600 450', 'wait 3000000', 'down left', 'wait 3000000',
                    'up left', 'wait 20000000']
            clock += PRESS
            i += 1
            continue
        if s == 't':
            for ch in steps[i + 1]:
                out += ['type ' + ch, 'wait %d' % TYPE]
                clock += TYPE
                at.append((clock, 'type ' + ch, TYPE))
            i += 2
            continue
        if s == 'e':
            out += ['key enter', 'wait %d' % ENTER]
            clock += ENTER
            at.append((clock, '[Enter]', ENTER))
            i += 1
            continue
        out += ['mouse %s %s' % (steps[i], steps[i + 1]), 'wait 3000000',
                'down ' + btn, 'wait 3000000', 'up ' + btn, 'wait 20000000']
        clock += PRESS
        at.append((clock, 'press %s,%s %s' % (steps[i], steps[i + 1], btn), PRESS))
        i += 2
    out += ['wait 8000000']
    return '\n'.join(out) + '\n', at


def run(script, drawing):
    os.makedirs('tmp/steps', exist_ok=True)
    open('tmp/steps/script.txt', 'w').write(script)
    env = dict(os.environ, DOSEMU_BP='+0DEF:23C5', DOSEMU_BPSTR='2',
               DOSEMU_BPN='20000')
    with open('tmp/steps/str.txt', 'wb') as f:
        subprocess.run([EMU, '--root', 'orig', '--font-ank', 'font/JWANK16.FNT',
                        '--font-kanji', 'font/JWKAN16.FNT', '--script',
                        'tmp/steps/script.txt', 'orig/JW_CADV.EXE',
                        drawing + '.JWC'],
                       check=True, stdout=f, stderr=subprocess.DEVNULL, env=env)


def strings():
    for line in open('tmp/steps/str.txt', encoding='latin-1'):
        f = line.split()
        if len(f) < 15 or f[0] != '[bp]' or line.count('"') < 2:
            continue
        yield (int(f[3]), int(f[8], 16), int(f[9], 16), int(f[10], 16),
               int(f[11], 16), line[line.index('"') + 1:line.rindex('"')])


def escape(s):
    """src/stage.h's spelling: hex escapes for the bytes above 0x7e, ASCII as
    itself, and the two kept apart so that a digit after an escape is not read
    as part of it."""
    out = ['"']
    for c in s:
        if c == '"' or c == B:
            out.append(B + c)
        elif 0x20 <= ord(c) < 0x7f:
            out.append(c)
        else:
            out.append(B + 'x%02x' % ord(c))
            out.append('" "')
    out.append('"')
    return ''.join(out).replace('"" ', '').replace(' ""', '')


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    n = int(sys.argv[1])
    steps = sys.argv[2:]
    drawing = os.environ.get('DRAWING', 'SAMPLE0')
    script, at = build(n, steps)
    run(script, drawing)
    rows = list(strings())
    print('/* %s, driven with: %s */' % (drawing, ' '.join(steps)))
    for k, (clock, what, span) in enumerate(at, 1):
        lo, hi = clock - span, clock
        last, order = {}, []
        for t, col, row, fg, bg, s in rows:
            if not (lo <= t < hi):
                continue
            cell = (col, row)
            if cell not in order:
                order.append(cell)
            last[cell] = (fg, bg, s, t)
        print('    /* stage %d -- %s (%d..%d) */' % (k, what, lo, hi))
        for cell in order:
            fg, bg, s, t = last[cell]
            if not s.strip() and cell[1] != 1:
                continue
            # The two counts and their label belong to the panel, which
            # src/ui.c draws from the drawing.  Replaying them would put the
            # capture's own drawing's numbers on every other one -- SAMPLE6
            # came out saying 30|13.  Same rule as tools/stage_table.py's
            # PANEL.
            if cell[0] == 1 and cell[1] in (2, 3) and fg == 0:
                continue
            if cell[1] in (25, 30):
                continue
            # The "please wait" flash, which is gone by the time the screen
            # settles -- tools/stage_table.py's WAIT.
            if s == '¨Ò¿º³¢':
                continue
            moved = 1 if t - lo >= COLLECT else 0
            print('    { %d, %d, %2d, %d, %d, 0x%04x, 0, 0, { 0, 0 }, %d, %s },'
                  % (n, k, cell[0], cell[1], fg, bg, moved, escape(s)))


if __name__ == '__main__':
    main()
