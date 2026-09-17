"""What the original writes along the top *while* a drawing command runs.

tools/menus_table.py catches the line a command puts up when it is picked.
This one catches the stages after that: what it says once the first point is
taken, and what it says when the thing is drawn.  It drives the original once
per command through tools/press.sh with all the presses, and splits what the
original wrote by *when* it wrote it -- tools/press.sh's script is a fixed
number of instructions per press, so the boundaries are known.

    python tools/stage_table.py        # writes src/stage.h

Each stage is what that press wrote, not the whole screen: the original clears
the top line as it moves on (a fill of (0,0)-(639,15) in black, seen among the
fills □ makes), so what an earlier stage left there is gone.

The numbers in those lines belong to the drawing being made (the length, the
angle, the two sides, the radius), so a run of digits is turned back into a
`%w.3f` of the same width and src/ui.c fills it in.  Nothing else is changed.
"""
import os
import re
import subprocess
import sys

B = chr(92)

# command, and the presses to make.  The points are the ones tools/presscheck.sh
# uses, so the same runs check out.
COMMANDS = [
    (2, (300, 200, 450, 250)),      # ＋  a line along an axis
    (3, (300, 200, 400, 200)),      # ／  a line
    (4, (250, 150, 450, 350)),      # □  a box
    (11, (300, 200, 400, 200)),     # ○  a circle
    (12, (300, 250, 400, 250, 350, 180)),   # （  任意の弧: centre, start, end
    (10, ('r', 380, 140)),          # 線消  the right button takes a line away
    (22, (300, 250)),               # 点  the left button drops a 仮点
    # 消去: the first press takes a corner of the range, the second (right)
    # fixes it -- and what it picked is then painted in colour 2 until the
    # top line's ①実行 is pressed.  See RESUME.md 4.9.
    (25, (150, 130, 'r', 245, 170)),
]

# tools/press.sh: 40M to start, 2M for the menu press, 24M to settle, then per
# press 3M to move, 3M held, 14M to settle.
SHOT = 66_000_000
PER_PRESS = 20_000_000
DOWN = 3_000_000

NUM = re.compile(r'( *-?\d+\.\d+)')

# The two counts and the label under them belong to the panel, not to the
# command, and src/ui.c already draws them from the drawing; what is kept from
# those two cells is only what carries a measurement.  The "please wait" flash
# is dropped too -- it is gone by the time the screen settles.
# Columns 17 and 22 of the same row say what the right button would take.  They
# follow the pointer rather than the stage -- pick an item with the pointer on
# the menu and neither is there -- so they live in src/snap.h and are left out.
#
# Column 18 is dropped too: 線消 writes サーチ there while it looks for the line
# under the pointer, and it is gone by the time the screen settles (the shot
# taken well after the press has nothing there).  What takes it away is not a
# string, so this capture cannot see it happen.
PANEL = {(1, 2), (1, 3)}
# These three never belong to a stage: 17 and 22 say what the right button
# would snap to and follow the *pointer* (src/snap.h), and 18 is 線消's
# transient サーチ.
ALWAYS = {(17, 2), (22, 2), (18, 2)}
WAIT = '\x81\x96\x82\xa8\x91\xd2\x82\xbf\x89\xba\x82\xb3\x82\xa2\x81\x96'


def keep(items):
    # A label in the counts box is kept when the same row carries a number
    # somewhere: 「（」writes `半径` at column 1 and `=    57.336` at column 5
    # as two separate calls, and dropping the label alone would leave the row
    # saying `=` with nothing in front of it.  ○ writes `半径=%f` in one go and
    # is unaffected either way.
    numbered = set(row for col, row, fg, bg, s in items
                   if col <= 16 and NUM.search(s))
    out = []
    for k in items:
        col, row, fg, bg, s = k
        if s == WAIT:
            continue
        if (col, row) in ALWAYS:
            continue
        if (col, row) in PANEL and not NUM.search(s) and row not in numbered:
            continue
        # Rows 25 and 30 are the panel and the strip along the bottom, which
        # src/ui.c draws from the program's state every time the screen is
        # built.  A command that repaints them writes the same thing back --
        # 消去 does it when the range is fixed, and the whole 640x480 changes
        # only along the top line and inside the drawing (measured).  Replaying
        # them would be copying the state at capture time, which for the zoom
        # ratio would be plain wrong.
        if row in (25, 30):
            continue
        out.append(k)
    return out


def capture(n, pts):
    """Run the original and return, for each press, what it wrote afterwards --
    the last thing per cell, because that is what is left on the screen."""
    subprocess.run(['sh', 'tools/press.sh', str(n)] + [str(v) for v in pts],
                   check=True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    stages = [[] for _ in range(len([v for v in pts if isinstance(v, int)]) // 2)]
    lasts = [{} for _ in stages]
    for line in open('tmp/press/str.txt', encoding='latin-1'):
        f = line.split()
        if len(f) < 15 or f[0] != '[bp]' or line.count('"') < 2:
            continue
        t = int(f[3])
        if t < SHOT + DOWN:
            continue
        k = (t - SHOT - DOWN) // PER_PRESS
        if k >= len(stages):
            k = len(stages) - 1
        s = line[line.index('"') + 1:line.rindex('"')]
        cell = (int(f[8], 16), int(f[9], 16))
        if cell not in stages[k]:
            stages[k].append(cell)
        lasts[k][cell] = (cell[0], cell[1], int(f[10], 16), int(f[11], 16), s)
    return [keep([lasts[k][c] for c in stages[k]]) for k in range(len(stages))]


# The cells the original prints with `%g` and not with a fixed field.
#
# 「（」writes the radius it has just used at the end of its line, and that one
# is six significant digits with no padding: the same run drawn twice, once
# with a radius of 100 units and once with 200, says `半径=57.3359` and
# `半径=114.672`.  `%.4f` would have given 114.6718 and `%7.3f` an aligned
# 57.336, so it is `%g`.  Measured, not assumed -- two radii is what it takes
# to tell them apart.
LOOSE = {(12, 3, 8, 1)}


def with_formats(s):
    """Turn each run of digits into a `%*.*f`, keeping the width it occupied.

    The number of decimals is not fixed: it comes from the scale (see
    jwc.c), so it is passed in rather than baked in here."""
    widths = []

    def one(m):
        widths.append(len(m.group(1)))
        return '%*.*f'

    return NUM.sub(one, s), widths


def escape(s):
    out = ['"']
    for c in s:
        if c in ('"', B):
            out.append(B + c)
        elif c == '?':
            out.append(B + '?')
        elif 0x20 <= ord(c) < 0x7f:
            out.append(c)
        else:
            out.append(B + 'x%02x' % ord(c))
            out.append('" "')
    out.append('"')
    return ''.join(out).replace('"" ', '').replace(' ""', '')


def main():
    if not os.path.exists('tools/press.sh'):
        sys.exit('run this from the top of the repository')
    rows = {n: capture(n, pts) for n, pts in COMMANDS}
    f = open('src/stage.h', 'w', encoding='utf-8', newline='\n')
    f.write('''/* What a drawing command writes while it runs.
 *
 * Generated by tools/stage_table.py out of what tools/press.sh captured: the
 * emulator picks the item and presses the points, and what the original wrote
 * after each press is kept.  Do not edit by hand -- run the tool again.
 *
 * Each stage is what that press wrote.  The original clears the top line as it
 * moves on, so what the stage before left there is gone; src/ui.c does the same.
 *
 * The numbers are the drawing being made -- the length and the angle for a
 * line, the two sides for a box, the radius and the diameter for a circle -- so
 * they are here as `%%*.*f` and src/ui.c fills in the value, the width it had
 * and how many decimals the drawing's scale calls for.
 */
#ifndef JW_STAGE_H
#define JW_STAGE_H

typedef struct {
    int command;                /* the menu item, or 0 to end the table */
    int stage;                  /* 1 = a point taken, 2 = the thing is drawn */
    int col, row, fg, bg;
    int numbers;                /* how many %*.*f the text has -- and 3 for the
                                 * one cell that is a bare `%g` instead
                                 * (tools/stage_table.py's LOOSE) */
    int first;                  /* which of the command's numbers the first one
                                 * is: the row under the counts carries the
                                 * second (角度, 縦, 直径), every other row the
                                 * first */
    int width[2];               /* the field width each of them had */
    const char *text;
} JwStage;

static const JwStage JW_STAGE[] = {
''')
    for n in sorted(rows):
        for stage, items in enumerate(rows[n], 1):
            for col, row, fg, bg, s in items:
                if (n, stage, col, row) in LOOSE:
                    t, w, kind = NUM.sub('%g', s), [0, 0], 3
                else:
                    t, w = with_formats(s)
                    w = (w + [0, 0])[:2]
                    kind = len([x for x in w if x])
                f.write('    { %2d, %d, %2d, %d, %d, 0x%04x, %d, %d, { %d, %d }, %s },\n'
                        % (n, stage, col, row, fg, bg, kind,
                           1 if row == 3 else 0, w[0], w[1], escape(t)))
    f.write('    { 0, 0, 0, 0, 0, 0, 0, 0, { 0, 0 }, 0 },\n};\n\n#endif\n')
    f.close()
    print('wrote src/stage.h')


main()
