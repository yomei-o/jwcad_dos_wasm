"""src/copy.h and src/move.h -- what 複写 (1) and 移動 (16) write along the top.

Captured the way src/span.h was (tools/span_table.py, whose helpers this uses):
drive the original, keep every string it wrote into the top line in the window
for each step, and print them in src/stage.h's shape.

    python tools/copy_table.py            # writes both

The stages, as src/ui.c replays them:

     1  after the first point, taken with the **right** button (線･円･文字)
    11  the same with the left button (<線･円>), kept apart so that both fit
        in the one table
     3  after the second point: 複写範囲 / 移動範囲 追加･除外データ指示
     4  after the top line's ①範囲 確定: the seven ways to do it
     5  after ①ﾏｳｽ位置: 原図形の基準点位置
     6  after the base point: 位置
     7  after ②数値位置: .距離 X,Y =
     8  after [Enter]: it is done
     9  after ①ﾏｳｽ位置's second press: 再複写 位置指示 -- it does not end
        there, every press after it puts another one down

Stage 0 is the line the menu item puts up and is already in src/prompt.h.
The two commands differ in only a word or two, but they are captured apart
rather than assumed the same.
"""
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import span_table as st

NL = chr(10)


def capture(command, menu_x, menu_y, out, name):
    head = ('wait 40000000' + NL + 'mouse %d %d' % (menu_x, menu_y) + NL
            + 'wait 2000000' + NL + 'click left' + NL + 'wait 24000000' + NL)
    first_r = st.PRESS % (150, 130, 'right', 'right')
    first_l = st.PRESS % (150, 130, 'left', 'left')
    second = st.PRESS % (245, 170, 'left', 'left')
    fix = st.PRESS % (580, 8, 'left', 'left')       # ①範囲 確定, columns 69..78
    way = st.PRESS % (120, 8, 'left', 'left')       # ①ﾏｳｽ位置, columns 9..22
    num = st.PRESS % (220, 8, 'left', 'left')       # ②数値位置, columns 24..33
    base = st.PRESS % (200, 150, 'left', 'left')
    d = 'tmp/' + name
    os.makedirs(d, exist_ok=True)
    st.run(head + first_r, d + '/right')
    st.run(head + first_l, d + '/left')
    place = st.PRESS % (383, 401, 'left', 'left')
    st.run(head + first_r + second + fix + way + base + place, d + '/on')
    # the numeric branch: ②数値位置, then a distance typed one key at a time
    # (the whole string at once outruns the program and only the first key
    # lands), then [Enter]
    typed = ''.join('type ' + ch + NL + 'wait 6000000' + NL for ch in '20,30')
    st.run(head + first_r + second + fix + num + typed
           + 'key enter' + NL + 'wait 40000000' + NL, d + '/num')
    # 40M to start and 26M for the menu, then 36M a press: the press that
    # starts at N leaves its line in the window N..N+36M.
    right_items = st.strings(d + '/right.log', 66_000_000, 1 << 62)
    left_items = st.strings(d + '/left.log', 66_000_000, 1 << 62)
    on = d + '/on.log'
    add_items = st.strings(on, 102_000_000, 138_000_000)
    ways_items = st.strings(on, 138_000_000, 174_000_000)
    from_items = st.strings(on, 174_000_000, 210_000_000)
    to_items = st.strings(on, 210_000_000, 246_000_000)
    again_items = st.strings(on, 246_000_000, 1 << 62)
    nm = d + '/num.log'
    dist_items = st.strings(nm, 174_000_000, 210_000_000)
    done_items = st.strings(nm, 240_000_000, 1 << 62)
    guard = 'JW_' + name.upper() + '_H'
    text = ['/* ' + __doc__.rstrip() + '\n */',
            '#ifndef ' + guard, '#define ' + guard, '',
            '#include "stage.h"', '',
            'static const JwStage JW_' + name.upper() + '[] = {',
            '    /* stage 1: the first point taken with the right button */']
    text += list(st.rows(right_items, 1, command))
    text += ['    /* stage 11: the same with the left button */']
    text += list(st.rows(left_items, 11, command))
    text += ['    /* stage 3: 追加･除外 */']
    text += list(st.rows(add_items, 3, command))
    text += ['    /* stage 4: the seven ways */']
    text += list(st.rows(ways_items, 4, command))
    text += ['    /* stage 5: 原図形の基準点位置 */']
    text += list(st.rows(from_items, 5, command))
    text += ['    /* stage 6: 位置 */']
    text += list(st.rows(to_items, 6, command))
    text += ['    /* stage 7: ②数値位置 -- the distance in millimetres */']
    text += list(st.rows(dist_items, 7, command))
    text += ['    /* stage 8: it is done */']
    text += list(st.rows(done_items, 8, command))
    text += ['    /* stage 9: 再複写 -- put another one down */']
    text += list(st.rows(again_items, 9, command))
    text += ['    { 0, 0, 0, 0, 0, 0, 0, 0, { 0, 0 }, 0, 0 },', '};', '',
             '#endif', '']
    open(out, 'w', encoding='utf-8', newline='').write('\n'.join(text))
    print('wrote ' + out)


def main():
    capture(1, 90, 72, 'src/copy.h', 'copy')
    capture(16, 30, 72, 'src/move.h', 'move')


if __name__ == '__main__':
    main()
