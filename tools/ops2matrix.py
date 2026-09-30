"""よく使う命令を、最後まで進む手順で回す一覧（2026-09-30）。
tools/opsmatrix.py の手順は範囲を確定しきらず、本物も何も変えない件が多かった。

    python tools/ops2matrix.py > tools/cases/func_ops2.txt

範囲は SAMPLE0 の左上の小さな部分 (150,120)-(250,200) か、左の辺を含む
(150,120)-(260,430)。上の行の升は数字の鍵で押す。
"""
from allmatrix import menu

R_SMALL = ['150 120 left', 'move 250 200', '250 200 left']
R_TALL = ['150 120 left', 'move 260 430', '260 430 left']
R_TALLR = ['150 120 left', 'move 260 430', '260 430 right']

CASES = []


def add(name, cmd, steps):
    CASES.append((name, menu(cmd), steps))


for cmd, nm in ((1, 'copy'), (16, 'move')):
    for rn, rng in (('s', R_SMALL), ('t', R_TALL)):
        # ①範囲確定 → 基点 → 置く所（→ もう一度）
        add('%s_%s_pos' % (nm, rn), cmd, rng + ['type 1', '300 250 left', 'move 350 300',
                                           '350 300 left', 'move 420 330', '420 330 left'])
        add('%s_%s_pos_esc' % (nm, rn), cmd, rng + ['type 1', '300 250 left', 'move 350 300',
                                               '350 300 left', 'key esc'])
        # 右で読む基点
        add('%s_%s_posr' % (nm, rn), cmd, rng + ['type 1', '162 140 right', 'move 350 300',
                                            '350 300 left'])
        # ②数値位置
        add('%s_%s_num' % (nm, rn), cmd, rng + ['type 1', 'type 2', 'type 20,30', 'key enter'])
        add('%s_%s_numR' % (nm, rn), cmd, rng + ['type 1', 'type 2', '300 300 right'])
        # ③連続（数値のあと）
        add('%s_%s_num_rep' % (nm, rn), cmd, rng + ['type 1', 'type 2', 'type 10,5', 'key enter',
                                               'type 3', 'type 3'])
        # ⑤反転（基準線：右の辺）
        add('%s_%s_mirror' % (nm, rn), cmd, rng + ['type 1', 'type 5', '598 300 left'])
        # ⑥回転
        add('%s_%s_rot' % (nm, rn), cmd, rng + ['type 1', 'type 6', '300 250 left', 'type 30',
                                           'key enter', 'move 350 300', '350 300 left'])
        # ④ﾏｳｽ倍率
        add('%s_%s_mscale' % (nm, rn), cmd, rng + ['type 1', 'type 4', '300 250 left',
                                              '350 300 left', '400 280 left', '480 350 left'])
    # 右で閉じた範囲から直接
    add('%s_tr_pos' % nm, cmd, R_TALLR + ['300 250 left', 'move 350 300', '350 300 left'])
    # 追加・除外（線を加える・文字を加える）
    add('%s_s_add' % nm, cmd, R_SMALL + ['400 140 left', '598 300 left', '300 330 right',
                                         'type 1', '300 250 left', '350 300 left'])

# 消去
add('erase_line_l', 25, ['400 140 left'])
add('erase_line_r', 25, ['400 140 right'])
add('erase_two', 25, ['400 140 left', '162 300 left', '598 300 right'])
add('erase_range_exec', 25, R_SMALL + ['type 1', 'type 1'])
add('erase_range_cancel', 25, R_SMALL + ['type 1', 'type 2'])
add('erase_range_out', 25, ['type 2'] + R_SMALL + ['type 1', 'type 1'])
add('erase_tall_exec', 25, R_TALL + ['type 1', 'type 1'])
add('erase_tallr_exec', 25, R_TALLR + ['type 1'])
add('erase_undo', 25, ['400 140 left', 'key esc'])

# 文字
add('text_abc', 13, ['300 250 left', 'type ABC', 'key enter'])
add('text_two', 13, ['300 250 left', 'type AB', 'key enter', '350 300 left', 'type 12',
                     'key enter'])
add('text_bs', 13, ['300 250 left', 'type ABCD', 'key bs', 'key bs', 'key enter'])
add('text_esc', 13, ['300 250 left', 'type AB', 'key esc', '350 300 left', 'type C',
                     'key enter'])
for cell in range(1, 7):
    add('text_c%d' % cell, 13, ['type %d' % cell, '300 250 left', 'type AB', 'key enter'])
    add('text_c%d_v' % cell, 13, ['type %d' % cell, 'type 30', 'key enter', '300 250 left',
                                   'type AB', 'key enter'])

# 線変更・測定・ハッチ・分割・中心線・点
add('linechg_one', 24, ['400 140 left'])
add('linechg_two', 24, ['400 140 left', '162 300 left'])
add('linechg_r', 24, ['400 140 right'])
add('measure_two', 15, ['162 140 right', '598 140 right'])
add('measure_three', 15, ['162 140 right', '598 140 right', '598 419 right'])
add('measure_free', 15, ['300 250 left', '400 300 left', '450 250 left'])
add('hatch_lines', 18, ['400 140 left', '598 300 left', '400 419 left', '162 300 left',
                        'type 1'])
add('hatch_lines_r', 18, ['400 140 left', '598 300 left', '400 419 left', '162 300 left',
                          '300 250 right'])
add('divide_line', 21, ['400 140 left', 'type 1'])
add('divide_two', 21, ['162 140 right', '598 140 right'])
add('center_lines', 20, ['400 140 left', '400 419 left', '300 250 left', '450 250 left'])
add('center_pts', 20, ['162 140 right', '598 419 right', '300 250 left', '450 300 left'])
add('point_free', 22, ['300 250 left', '350 300 left'])
add('point_read', 22, ['162 140 right', '598 419 right'])
add('tangent_c1', 26, ['type 1', '400 140 left', '162 300 left'])
add('curve_c1', 23, ['type 1', '300 250 left', '350 200 left', '400 300 left'])


def main():
    print('# よく使う命令を最後まで（tools/ops2matrix.py が作る。手で直さない）')
    for name, m, steps in CASES:
        print('%s|SAMPLE0|%s|%s' % (name, m, '|'.join(steps)))


if __name__ == '__main__':
    main()
