"""src/esc.h -- what [ESC] writes when a command has a point in hand.

[ESC] throws the point away and asks for it again.  It does **not** clear the
top line: it writes three pieces over the line that was there -- a `・` at
column 6, the command's own "ask again" text at column 8, and `[BS]前項` at
column 73 -- so what the stage before left further along stays on the screen.
Measured with ／: after one press the line is

    [ESC]・◆終点指示 (L)free (R)Read |①  ＋  |②寸 法 |③角 度 |④平 行 |⑤垂 直 |

and after [ESC] it is the same but for columns 6 to 31.

With no point in hand [ESC] writes nothing at all, and a second [ESC] after the
first writes nothing either -- both measured.

    python tools/esc_table.py            # writes src/esc.h
"""
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import span_table as st

NL = chr(10)

# the commands whose first press this was measured for: the ones that take a
# point and draw something.  Each is (command, where its menu row is).
COMMANDS = [2, 3, 4, 11, 12]


def menu(n):
    if n <= 15:
        return 90, 64 + 16 * (n - 1) + 8
    return 30, 64 + 16 * (n - 16) + 8


def main():
    os.makedirs('tmp/esc', exist_ok=True)
    rows = []
    for n in COMMANDS:
        mx, my = menu(n)
        s = ('wait 40000000' + NL + 'mouse %d %d' % (mx, my) + NL
             + 'wait 2000000' + NL + 'click left' + NL + 'wait 24000000' + NL
             + (st.PRESS % (300, 200, 'left', 'left'))
             + 'key esc' + NL + 'wait 30000000' + NL)
        out = 'tmp/esc/c%d' % n
        st.run(s, out)
        # 40M to start, 26M for the menu, 36M for the press: [ESC] is after
        items = st.strings(out + '.log', 100_000_000, 1 << 62)
        rows += list(st.rows(items, 1, n))
    text = ['/* ' + __doc__.rstrip() + '\n */',
            '#ifndef JW_ESC_H', '#define JW_ESC_H', '',
            '#include "stage.h"', '',
            'static const JwStage JW_ESC[] = {']
    text += rows
    text += ['    { 0, 0, 0, 0, 0, 0, 0, 0, { 0, 0 }, 0, 0 },', '};', '',
             '#endif', '']
    open('src/esc.h', 'w', encoding='utf-8', newline='').write('\n'.join(text))
    print('wrote src/esc.h')


if __name__ == '__main__':
    main()
