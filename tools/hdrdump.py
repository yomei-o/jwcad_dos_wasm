"""図面の先頭の行（199 バイトの見出し 4 本のうち 2 本目）から、作業時間（18 番、秒）を出す。

    python tools/hdrdump.py X.JWC

functest.sh が `== header` として比べる（ｵﾌﾟｼｮﾝ ⑥各設定 ④作図時間 が変える値）。
見出しのほかの欄（保存のたびに本物が組み直すもの）は別の差なので、ここでは比べない。
"""
import sys

b = open(sys.argv[1], 'rb').read()
line = b[199:398].split(b'\0')[0].decode('ascii', 'replace')
f = line.split(',')
print('work_seconds=%s' % (f[18] if len(f) > 18 else '?'))
