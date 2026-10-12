"""図面の先頭 4 行（199 バイトずつの見出し）を、NUL までの文字として出す。

    python tools/hdrdump.py X.JWC

functest.sh が `== header` として比べる（ｵﾌﾟｼｮﾝ ⑥各設定 ④作図時間 が 1 行目の 18 番を変える）。
"""
import sys

b = open(sys.argv[1], 'rb').read()
for i in range(4):
    print(b[i * 199:(i + 1) * 199].split(b'\0')[0].decode('ascii', 'replace'))
