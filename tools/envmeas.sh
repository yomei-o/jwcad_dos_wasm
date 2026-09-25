#!/bin/sh
# 包絡処理（変形 ②）を**原作に**やらせて、残った線の記録を並べます。
#
#   sh tools/envmeas.sh walls 200 150 500 350
#   sh tools/envmeas.sh ladder 300 200 500 320 orig/SAMPLE1.JWC
#
# 図面は tools/mkhoraku.py が orig/TEST8.JWC に作ります。**終わったら
# 消します**——`tools/check.sh` は orig/ の図面を十四枚と数えていて、
# 置いたままだと落ちるからです。移植と画面を比べる
# （`DRAWING=TEST8 sh tools/seqcheck.sh …`）ときは自分で作って自分で
# 消すこと。
set -e
cd "$(dirname "$0")/.."
case=$1
x0=$2
y0=$3
x1=$4
y1=$5
src=${6:-orig/SAMPLE0.JWC}
[ -n "$y1" ] || { echo "usage: sh tools/envmeas.sh walls 200 150 500 350" >&2; exit 2; }
mkdir -p tmp/rec
python tools/mkhoraku.py "$src" orig/TEST8.JWC "$case" > /dev/null
trap 'rm -f orig/TEST8.JWC' EXIT INT TERM
{
    printf 'mouse 30 88\nwait 2000000\ndown left\nwait 3000000\nup left\nwait 40000000\n'
    printf 'mouse 320 8\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 26000000\n'
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 26000000\n' "$x0" "$y0"
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 26000000\n' "$x1" "$y1"
} > tmp/rec/pre.txt
PRE=tmp/rec/pre.txt OUT=tmp/rec/orig.raw DRAWING=TEST8 BOOT=40000000 \
    sh tools/save.sh > /dev/null 2>&1
echo "=== $case ($x0,$y0)-($x1,$y1)"
python tools/linedump.py tmp/sroot/TEST8.JWC 2>/dev/null \
    | grep -v "60121.000,-59537.000)-(60122.000,-59537.000" \
    | sed 's/ type=.*//'
