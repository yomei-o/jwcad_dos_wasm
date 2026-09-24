"""src/henkei.h -- what 変形 ①パラメトリック変形 (17) writes along the top.

Captured the way src/copy.h was (tools/copy_table.py, whose helpers this uses):
drive the original, keep every string it wrote into the top line in the window
for each step, and print them in src/stage.h's shape.

    python tools/henkei_table.py

The road is 複写's, cell for cell:

     1  after the first point, taken with the **right** button (線･円･文字)
    11  the same with the left button (線･円)
     3  after the second point: 変形範囲 追加･除外データ指示
     4  after the top line's ①範囲 確定: `|①ﾏｳｽ位置(L,R)|②数値位置|③数値倍率|`
     5  after ①ﾏｳｽ位置: 変形 原図形の基準点位置
     6  after the base point: 変形 位置 マウス指示 ... |①【任意】方向|②仮表示|③回転角|
     9  after the second press: 再変形 位置指示 |①同形別処理|②他図形処理|③連続|

**A press in the drawing at stage 4 does two things**: it picks ①ﾏｳｽ位置 *and*
it is the base point, so the line goes straight from 4 to 6.  Pressing the
cell at the top instead stops at 5.  Measured both ways.

Stage 0 is the line the menu item puts up and is already in src/prompt.h.
"""
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import span_table as st                                          # noqa: E402

NL = chr(10)


def main():
    command, menu_x, menu_y, name = 17, 30, 88, 'henkei'
    head = ('wait 40000000' + NL + 'mouse %d %d' % (menu_x, menu_y) + NL
            + 'wait 2000000' + NL + 'click left' + NL + 'wait 24000000' + NL)
    # ①パラメトリック変形 is columns 9..31; a press in the drawing picks it too,
    # but the cell keeps the two apart.
    para = st.PRESS % (150, 8, 'left', 'left')
    first_r = st.PRESS % (150, 130, 'right', 'right')
    first_l = st.PRESS % (150, 130, 'left', 'left')
    second = st.PRESS % (245, 170, 'left', 'left')
    fix = st.PRESS % (580, 8, 'left', 'left')       # ①範囲 確定
    way = st.PRESS % (120, 8, 'left', 'left')       # ①ﾏｳｽ位置, columns 9..22
    base = st.PRESS % (200, 150, 'left', 'left')
    place = st.PRESS % (383, 401, 'left', 'left')
    d = 'tmp/' + name
    os.makedirs(d, exist_ok=True)
    st.run(head + para + first_r, d + '/right')
    st.run(head + para + first_l, d + '/left')
    st.run(head + para + first_r + second + fix + way + base + place,
           d + '/on')
    # 40M to start, 26M for the menu and 36M a press: the press that starts at
    # N leaves its line in the window N..N+36M.  ①パラメトリック変形 is one
    # press more than 複写's road, so everything is 36M later.
    right_items = st.strings(d + '/right.log', 102_000_000, 1 << 62)
    left_items = st.strings(d + '/left.log', 102_000_000, 1 << 62)
    on = d + '/on.log'
    add_items = st.strings(on, 138_000_000, 174_000_000)
    ways_items = st.strings(on, 174_000_000, 210_000_000)
    from_items = st.strings(on, 210_000_000, 246_000_000)
    to_items = st.strings(on, 246_000_000, 282_000_000)
    again_items = st.strings(on, 282_000_000, 1 << 62)
    text = ['/* ' + __doc__.rstrip() + '\n */',
            '#ifndef JW_HENKEI_H', '#define JW_HENKEI_H', '',
            '#include "stage.h"', '',
            'static const JwStage JW_HENKEI[] = {',
            '    /* stage 1: the first point taken with the right button */']
    text += list(st.rows(right_items, 1, command))
    text += ['    /* stage 11: the same with the left button */']
    text += list(st.rows(left_items, 11, command))
    text += ['    /* stage 3: 追加･除外 */']
    text += list(st.rows(add_items, 3, command))
    text += ['    /* stage 4: the three ways */']
    text += list(st.rows(ways_items, 4, command))
    text += ['    /* stage 5: 原図形の基準点位置 */']
    text += list(st.rows(from_items, 5, command))
    text += ['    /* stage 6: 変形 位置 */']
    text += list(st.rows(to_items, 6, command))
    text += ['    /* stage 9: 再変形 -- it does not end there */']
    text += list(st.rows(again_items, 9, command))
    text += ['    { 0, 0, 0, 0, 0, 0, 0, 0, { 0, 0 }, 0, 0 },', '};', '',
             '#endif', '']
    open('src/henkei.h', 'w', encoding='utf-8',
         newline='').write('\n'.join(text))
    print('wrote src/henkei.h')


if __name__ == '__main__':
    main()
