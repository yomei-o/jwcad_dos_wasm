"""作図の命令 1〜28 を、上の行の升ごと・段ごとに総当たりする一覧を作ります
（2026-09-30。利用者：「夜までに作図コマンドが全部正しく実装できるといいね」）。

    python tools/allmatrix.py > tools/cases/func_all.txt
    python tools/rbatch.py tools/cases/func_all.txt       # 本物はビルド機で
    python tools/stepcheck.py tools/cases/func_all.txt    # 段ごとの画面
    sh tools/funccases.sh tools/cases/func_all.txt        # 保存した記録

升は数字の鍵で押します（`1` は ① を左で押したのと同じ）。1 件は

  * s0_cN   ：命令を選んで升 N、そのあと図面を押して回る
  * s0_cN_v ：升 N のあと `30` [Enter]（欄の出る升のため。出ない升では
               `3` `0` がまた升を押すが、本物と移植に同じことをさせるだけ）
  * s1_cN   ：図面を 1 回押してから升 N

図面の押しは SAMPLE0 の線の上・何も無い所・右（読取）を混ぜ、最後に
[ESC] を 2 回（取り消しの道）。ｵﾌﾟｼｮﾝ（29）と入出力（30）は範囲外。
"""
NAMES = {1: 'copy', 2: 'plus', 3: 'slash', 4: 'box', 5: 'offset', 6: 'tee',
         7: 'lt', 8: 'chamfer', 9: 'double', 10: 'linedel', 11: 'circle',
         12: 'arc', 13: 'text', 14: 'dim', 15: 'measure', 16: 'move',
         17: 'henkei', 18: 'hatch', 19: 'polygon', 20: 'center', 21: 'divide',
         22: 'point', 23: 'curve', 24: 'linechg', 25: 'erase', 26: 'tangent',
         27: 'zukei', 28: 'textedit'}


def menu(c):
    return '%d %d left' % ((90, 72 + 16 * (c - 1)) if c <= 15
                           else (30, 72 + 16 * (c - 16)))


# SAMPLE0：上の辺は y=140（x 162〜598）、左の辺は x=162、右は x=598
FIRST = '400 140 left'
REST = ['move 300 250', '300 250 left', 'move 450 330', '450 330 left',
        '162 250 left', '598 300 right', 'move 350 350', '350 350 left',
        'key esc', 'move 340 340', 'key esc', 'move 330 330']


def main():
    print('# 作図の命令の総当たり（tools/allmatrix.py が作る。手で直さない）')
    for c in range(1, 29):
        m = menu(c)
        n = NAMES[c]
        print('%s_plain|SAMPLE0|%s|%s|%s' % (n, m, FIRST, '|'.join(REST)))
        for cell in range(1, 10):
            print('%s_s0_c%d|SAMPLE0|%s|type %d|%s|%s' % (
                n, cell, m, cell, FIRST, '|'.join(REST)))
            print('%s_s0_c%d_v|SAMPLE0|%s|type %d|type 30|key enter|%s|%s' % (
                n, cell, m, cell, FIRST, '|'.join(REST)))
            print('%s_s1_c%d|SAMPLE0|%s|%s|type %d|%s' % (
                n, cell, m, FIRST, cell, '|'.join(REST)))


if __name__ == '__main__':
    main()
