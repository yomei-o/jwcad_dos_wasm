#!/bin/sh
# ｵﾌﾟｼｮﾝ ④一括処理 ③データ整理を測る図面（TEST9・TEST8・TEST6A）を orig/ に作る。
#   sh tools/mkdata.sh        # 作る（本物に一度保存させて、文字の終点を本物の計算に揃える）
#   sh tools/mkdata.sh rm     # 消す（tools/check.sh は orig/ に図面が十四枚あることを確かめている）
cd "$(dirname "$0")/.."
if [ "$1" = rm ]; then
    rm -f orig/TEST9.JWC orig/TEST8.JWC orig/TEST6A.JWC
    exit 0
fi
python tools/mkdata.py orig/TEST3.JWC orig/TEST9.JWC base
python tools/mkdata.py orig/TEST3.JWC orig/TEST8.JWC sort
python tools/mkdata.py orig/TEST3.JWC orig/TEST6A.JWC arcs
for n in TEST9 TEST8 TEST6A; do
    # 本物は保存のとき文字の終点を文字列の幅から引き直す。揃えておかないと働きの検査が文字だけ違って見える。
    DRAWING=$n OUT=tmp/save/n.raw sh tools/save.sh > /dev/null 2>&1 || exit 1
    cp "tmp/sroot/$n.JWC" "orig/$n.JWC"
done
ls -l orig/TEST9.JWC orig/TEST8.JWC orig/TEST6A.JWC
