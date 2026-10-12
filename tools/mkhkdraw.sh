#!/bin/sh
# ⑤日影図の保存結果の検査に使う図面（TEST3S・TEST7S）を orig/ に作る。
#   sh tools/mkhkdraw.sh        # 作る（本物に不動点まで保存させる）
#   sh tools/mkhkdraw.sh rm     # 消す（tools/check.sh は orig/ に図面が十四枚あることを確かめている）
# 本物は保存のたびに文字の終点 x1 を引き直す（notes/opt4-data-measured.md の「実機の癖」）。1 回では落ち着かない図面
# （TEST3 の文字 20・27、TEST7 の多くの文字）は、そのまま比べると文字だけ違って見える。2 回保存した図面は 3 回目で動かない。
# 作ったあとは tools/build_wasm.sh で作り直すこと（orig/*.JWC は焼き込まれる）。
cd "$(dirname "$0")/.."
if [ "$1" = rm ]; then
    rm -f orig/TEST3S.JWC orig/TEST7S.JWC
    exit 0
fi
export NODE="${NODE:-/c/prog/emsdk/emsdk/node/24.19.0_64bit/node.exe}"
for pair in "TEST3S TEST3 60000000" "TEST7S TEST7 300000000"; do
    set -- $pair
    n=$1; src=$2; boot=$3
    cp "orig/$src.JWC" "orig/$n.JWC"
    i=1
    while [ $i -le 5 ]; do
        BOOT=$boot DRAWING=$n OUT=tmp/save/n.raw sh tools/save.sh > /dev/null 2>&1
        if cmp -s "tmp/sroot/$n.JWC" "orig/$n.JWC"; then
            echo "$n: 保存 $i 回で落ち着いた"
            break
        fi
        cp "tmp/sroot/$n.JWC" "orig/$n.JWC"
        i=$((i + 1))
    done
done
