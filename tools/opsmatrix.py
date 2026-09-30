"""作図の命令 1〜28 を、ふつうの使い方に近い手順で回す一覧を作ります
（2026-09-30）。tools/allmatrix.py の総当たりでは範囲を決めきらず、複写・移動・
消去・文字などは本物も何も変えない件ばかりだったので、その穴を埋めるもの。

    python tools/opsmatrix.py > tools/cases/func_ops.txt
    python tools/rbatch.py tools/cases/func_ops.txt
    MASK=1 python tools/funcfast.py tools/cases/func_ops.txt
    python tools/stepcheck.py tools/cases/func_ops.txt

SAMPLE0：上の辺 y=140（x 162〜598）、左 x=162、右 x=598、下 y=419。
"""
from allmatrix import NAMES, menu

SEQS = {
    # 線を押す・点を押す
    'lines': ['400 140 left', '162 300 left', 'move 300 250', '300 250 left',
              'move 450 350', '450 350 left', 'key esc', 'move 440 340', 'key esc'],
    # 角を読む
    'reads': ['162 140 right', '598 419 right', 'move 300 250', '300 250 left',
              'move 450 330', '450 330 left', 'key esc'],
    # 線を右で
    'rlines': ['400 140 right', 'move 300 250', '162 300 right', 'move 350 300',
               '300 250 right', 'key esc'],
    # 範囲（画面全体）
    'range': ['150 100 left', 'move 630 450', '630 450 left', 'move 300 250',
              '300 250 left', 'move 350 300', '350 300 left', 'move 400 350',
              '400 350 left', 'key esc', 'move 390 340', 'key esc'],
    # 範囲を右で閉じる
    'ranger': ['150 100 left', 'move 630 450', '630 450 right', 'move 300 250',
               '300 250 left', 'move 350 300', '350 300 left', 'key esc'],
    # 小さい範囲（左上の小さな四角だけ）
    'rsmall': ['150 120 left', 'move 250 200', '250 200 left', 'move 300 250',
               '300 250 left', 'move 350 280', '350 280 left', 'key esc'],
    # 文字を打つ
    'text': ['300 250 left', 'type ABC', 'key enter', 'move 350 300',
             '350 300 left', 'type 12', 'key enter', 'key esc'],
}


def main():
    print('# 作図の命令をふつうの手順で（tools/opsmatrix.py が作る。手で直さない）')
    for c in range(1, 29):
        m = menu(c)
        n = NAMES[c]
        for sname, seq in SEQS.items():
            print('%s_op_%s|SAMPLE0|%s|%s' % (n, sname, m, '|'.join(seq)))
        # 範囲を取ってから升 1〜6
        for cell in range(1, 7):
            print('%s_op_rc%d|SAMPLE0|%s|150 100 left|move 630 450|630 450 left|'
                  'type %d|move 300 250|300 250 left|move 350 300|350 300 left|'
                  'key esc' % (n, cell, m, cell))


if __name__ == '__main__':
    main()
