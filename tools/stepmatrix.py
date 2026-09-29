"""作図の命令を**段ごとに**総当たりする一覧を作ります（2026-09-29、利用者：
「始点選んで終点選ぶとかステップがある。各ステップで寸法を入力できないと
いけない。ステップごとにテストしてないから問題が起こる」）。

    python tools/stepmatrix.py > tools/cases/func_steps.txt
    sh tools/funccases.sh tools/cases/func_steps.txt        # 記録
    LIST=tools/cases/func_steps.txt sh tools/failscreens.sh # 画面

段は「何も押していない」「始点を押した」（（ は「始点まで押した」も）。
各段で、上の行の升 1〜5 を**数字の鍵**で押し、欄が出る升なら数を打って
[Enter]、そのあと押しを続けて図形を仕上げ、最後に [ESC]（取り消し）まで
やります。升の中身がわからなくても、本物と移植に同じことをさせて突き合わせる
のが目的です。
"""

MENU = {'plus': (90, 88), 'slash': (90, 104), 'box': (90, 120),
        'circle': (90, 232), 'arc': (90, 248)}

# 各命令の段：その段まで進む押し
STAGES = {
    'plus':   [[], ['250 200 left']],
    'slash':  [[], ['250 200 left']],
    'box':    [[], ['250 200 left']],
    'circle': [[], ['300 250 left']],
    'arc':    [[], ['300 250 left'], ['300 250 left', '360 250 left']],
}
# 欄に打つ数（升ごとに同じものを打つ。欄の出ない升では数字の鍵がまた升を
# 押すことになるが、それも本物と同じことをさせるだけ）
VALUE = {'plus': '40', 'slash': '40', 'box': '40,30', 'circle': '25',
         'arc': '100'}
# 図形を仕上げる押し（段のあとに）
FINISH = ['move 400 300', '400 300 left', 'move 350 330', '350 330 left']


def main():
    print('# 作図の段ごとの総当たり（tools/stepmatrix.py が作る。手で直さない）')
    for name, (mx, my) in MENU.items():
        for si, pre in enumerate(STAGES[name]):
            for cell in range(1, 6):
                steps = ['%d %d left' % (mx, my)] + pre
                steps += ['type %d' % cell, 'type ' + VALUE[name], 'key enter']
                steps += FINISH
                print('%s_s%d_c%d|SAMPLE0|%s' % (name, si, cell, '|'.join(steps)))
                steps2 = steps + ['key esc']
                print('%s_s%d_c%d_esc|SAMPLE0|%s' % (name, si, cell,
                                                    '|'.join(steps2)))
            # 段で [ESC] と [BS] だけ
            for k in ('esc', 'bs'):
                steps = ['%d %d left' % (mx, my)] + pre + ['key ' + k] + FINISH
                print('%s_s%d_%s|SAMPLE0|%s' % (name, si, k, '|'.join(steps)))


if __name__ == '__main__':
    main()
