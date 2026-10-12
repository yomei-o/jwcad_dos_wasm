"""src/opthikage_str.h を作る（⑤日影図の上の行の字面を SJIS の C 文字列に）。"""
BS = chr(92)


def c(s):
    cur = ''
    for x in s.encode('cp932'):
        if 0x20 <= x < 0x7f and chr(x) not in '"' + BS + '?':
            if cur.endswith(tuple('0123456789abcdefABCDEF')) and \
                    cur[-4:-2] == BS + 'x' or (cur[-3:-1] == BS + 'x' and False):
                pass
            cur += chr(x)
        else:
            cur += BS + 'x%02x' % x
    # 16 進エスケープの直後に 16 進の字が続くと食われるので文字列を切る
    out = ''
    i = 0
    while i < len(cur):
        out += cur[i]
        if cur[i:i + 2] == BS + 'x' or False:
            pass
        i += 1
    res = ''
    i = 0
    while i < len(cur):
        if cur[i] == BS:
            res += cur[i:i + 4]
            i += 4
            if i < len(cur) and cur[i] in '0123456789abcdefABCDEF':
                res += '" "'
        else:
            res += cur[i]
            i += 1
    return '"' + res + '"'


L = [
    ('BLD', '建物設定 |①高さ入力 |②高さ変更 |③高さ消去|④真北設定|⑤確認|'),
    ('P2', '日影図 |①30分毎|②１時間毎の影 |③指定時間の影 |④測定高･緯度|'),
    ('P3', '等時間図 |①高速モード|②標準モード|③指定範囲計算|④測定高･緯度|'),
    ('P4A', '指定点(No1)マウス指示 (L)free (R)Read (残50) '),
    ('P4', '|①測定高･緯度|'),
    ('BS', '[BS]前項'),
    ('IN1', '入力'), ('IN2', '変更'), ('DIA', ' ◇直線の端部'), ('MOUSE', 'マウス指示 '),
    ('PREV', '前回値ﾏｳｽ(R)['), ('NOTE', '(書込ﾚｲﾔの直線のみ選択)'),
    ('FLD1', '高さ'), ('FLD2', '(ｍ)= '),
    ('DELP', '消去する高さﾃﾞｰﾀをマウス指示 '), ('NTHP', '真北 設定  ◇ 真北線 マウス指示 '),
    ('M_LAYER', 'レイヤが違います'), ('M_CURVE', '曲線不可'), ('M_ARC', '円弧データです'),
    ('M_DUP1', '既に､このﾚｲﾔの同一点の高さは入力済'), ('M_DUP2', '違う高さは､別ﾚｲﾔに入力'),
    ('M_DUP3', 'してください'), ('M_NOH', '高さﾃﾞｰﾀ'), ('M_NOT', 'ではありません'),
    ('NORTH', '真北'),
    ('TMF', '指定 時間 ='),
    ('PTA', '指定点(No'),
    ('PTB', ')マウス指示 (L)free (R)Read (残'),
    ('PTC', ') |①入力終了|'),
    ('RESP', '【計算開始】結果表示位置 マウス指示 (L)free (R)Read '),
    ('E_RANGE', '範囲外'),
    ('ISA', '日影時間 |①1.5 |②2.0 |③2.5 |④3.0 |⑤4.0 |⑥5.0 |⑦任意|⑧誤差|⑨終了|'),
    ('ISF', '指定時間(1～6)='),
    ('ISW', '書込'),
    ('RG1', '範囲の始点指示 '),
    ('RG2', '終点指示 '),
    ('RGI', '計算実行   測定間隔|① 20秒 ﾏｳｽ(L) |② 10秒 ﾏｳｽ(R) |③ 4秒 |④ 2秒 |'),
    ('ICA', '中間ﾃﾞｰﾀは失われます｡よろしいですか?  |① 実行(L)|② 中止(R)|'),
    ('ISN', '非書込'),
    ('E_BAD', 'データが不適当'), ('E_NODATA', 'データがありません'), ('E_RANGE', '作図範囲が狭すぎます 縮尺変更'),
    ('E_MANY', 'データ数が多すぎます'), ('E_THRU', '壁面線が建物通過'), ('E_DEL1', '不必要な高さﾃﾞｰﾀを(%d)削除'),
    ('E_UNSET', '高さ未設定(端点不一致)の点が(%d)有'), ('E_DIV', '中庭等、建物を分割してください'),
    ('E_SCALE', '縮尺の違うデータがあります｡強行しますか'), ('M_BELOW', '測定面以下のﾃﾞｰﾀ有'), ('T_UNSET', '∠未設定'),
    ('M_CALCNG', '計算不可'),
    ('DLG', '|① 確 定 |② 測定面の高さ |③ 緯 度 |④ 季 節 |⑤測定条件図面書込|'),
    ('HM', '(m) = '), ('LATM', ' (ﾟ) ='),
    ('TCH', '測定時間 |① 8～16時 |② 9～15時 |'), ('WPOS', '測定条件図面書込位置 マウス指示 '),
    ('H', '測定面の高さ'), ('LAT', '緯 度'), ('SP', '春秋分'),
    ('WI', '冬  至'), ('SU', '夏  至'), ('TM', '測定時間 '),
    ('T816', '8～16時'), ('T915', '9～15時'),
]
with open('src/opthikage_str.h', 'w', encoding='utf-8') as f:
    f.write('/* src/opthikage_str.h -- ⑤日影図の上の行の字面（実機の行 1・2 から採った SJIS）。tools/hkstr.py が作る。 */\n')
    f.write('#ifndef JW_OPTHIKAGE_STR_H\n#define JW_OPTHIKAGE_STR_H\n')
    for n, s in L:
        f.write('#define HK_%s %s /* %s */\n' % (n, c(s), s))
    f.write('#endif\n')
