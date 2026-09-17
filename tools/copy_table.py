"""src/copy.h -- what 複写 (command 1) writes along the top, stage by stage.

Captured the way src/span.h was (tools/span_table.py, whose helpers this uses):
drive the original, keep every string it wrote into the top line in the window
for each step, and print them in src/stage.h's shape.

    python tools/copy_table.py            # writes src/copy.h

The stages, as src/ui.c replays them:

     1  after the first point, taken with the **right** button (線･円･文字)
    11  the same with the left button (<線･円>), kept apart so that both fit
        in the one table
     3  after the second point: 複写範囲 追加･除外データ指示
     4  after the top line's ①範囲 確定: the seven ways to copy
     5  after ①ﾏｳｽ位置: 原図形の基準点位置
     6  after the base point: 複写 位置
     7  after ②数値位置: .距離 X,Y =
     8  after [Enter]: the copy is made

Stage 0 is the line the menu item puts up and is already in src/prompt.h.
"""
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import span_table as st

MENU = 'mouse 90 72\nwait 2000000\nclick left\nwait 24000000\n'


def main():
    os.makedirs('tmp/copy', exist_ok=True)
    head = 'wait 40000000\n' + MENU
    first_r = st.PRESS % (150, 130, 'right', 'right')
    first_l = st.PRESS % (150, 130, 'left', 'left')
    second = st.PRESS % (245, 170, 'left', 'left')
    fix = st.PRESS % (580, 8, 'left', 'left')       # ①範囲 確定, columns 69..78
    way = st.PRESS % (120, 8, 'left', 'left')       # ①ﾏｳｽ位置, columns 9..22
    num = st.PRESS % (220, 8, 'left', 'left')       # ②数値位置, columns 24..33
    base = st.PRESS % (200, 150, 'left', 'left')
    st.run(head + first_r, 'tmp/copy/right')
    st.run(head + first_l, 'tmp/copy/left')
    st.run(head + first_r + second + fix + way + base, 'tmp/copy/on')
    # the numeric branch: ②数値位置, then a distance typed one key at a time
    # (the whole string at once outruns the program and only the first key
    # lands), then [Enter], which makes the copy
    typed = ''.join('type %s\nwait 6000000\n' % ch for ch in '20,30')
    st.run(head + first_r + second + fix + num + typed
           + 'key enter\nwait 40000000\n', 'tmp/copy/num')
    # 40M to start and 26M for the menu, then 36M a press: the press that
    # starts at N leaves its line in the window N..N+36M.
    right_items = st.strings('tmp/copy/right.log', 66_000_000, 1 << 62)
    left_items = st.strings('tmp/copy/left.log', 66_000_000, 1 << 62)
    on = 'tmp/copy/on.log'
    add_items = st.strings(on, 102_000_000, 138_000_000)
    ways_items = st.strings(on, 138_000_000, 174_000_000)
    from_items = st.strings(on, 174_000_000, 210_000_000)
    to_items = st.strings(on, 210_000_000, 1 << 62)
    nm = 'tmp/copy/num.log'
    dist_items = st.strings(nm, 174_000_000, 210_000_000)
    done_items = st.strings(nm, 240_000_000, 1 << 62)
    text = ['/* ' + __doc__.rstrip() + '\n */',
            '#ifndef JW_COPY_H', '#define JW_COPY_H', '',
            '#include "stage.h"', '',
            'static const JwStage JW_COPY[] = {',
            '    /* stage 1: the first point taken with the right button */']
    text += list(st.rows(right_items, 1, 1))
    text += ['    /* stage 11: the same with the left button */']
    text += list(st.rows(left_items, 11, 1))
    text += ['    /* stage 3: 追加･除外 */']
    text += list(st.rows(add_items, 3, 1))
    text += ['    /* stage 4: the seven ways to copy */']
    text += list(st.rows(ways_items, 4, 1))
    text += ['    /* stage 5: 原図形の基準点位置 */']
    text += list(st.rows(from_items, 5, 1))
    text += ['    /* stage 6: 複写 位置 */']
    text += list(st.rows(to_items, 6, 1))
    text += ['    /* stage 7: ②数値位置 -- the distance in millimetres */']
    text += list(st.rows(dist_items, 7, 1))
    text += ['    /* stage 8: the copy is made */']
    text += list(st.rows(done_items, 8, 1))
    text += ['    { 0, 0, 0, 0, 0, 0, 0, 0, { 0, 0 }, 0, 0 },', '};', '',
             '#endif', '']
    open('src/copy.h', 'w', encoding='utf-8', newline='').write('\n'.join(text))
    print('wrote src/copy.h')


if __name__ == '__main__':
    main()
