#!/bin/sh
# 寸法（14 番の ①横方向）—— 引出し線・寸法線・寸法値を、本物と移植で比べます。
#
#   sh tools/dimcheck.sh 162 140 300 110 162 140 598 140
#
# 引数は 引出し線の始点、寸法線の位置、寸法値の始点、寸法値の終点。
# 最後の 2 つは**読取**（右ボタン）なので、線の端や交点を指すこと。
# 項目を選んだあとの 1 回目の押しは ①横方向 を選ぶためのもので、
# この道具が (600,450) で勝手に入れます。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/dc
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"

{
    printf 'wait %s\nmouse 90 280\nwait 2000000\nclick left\nwait 40000000\n' "$BOOT"
    printf 'mouse 600 450\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 26000000\n'
} > tmp/dc/script.txt
args="-u -c 14 -p 600 450"
n=0
lx=600
ly=450
while [ $# -ge 2 ]; do
    n=$((n + 1))
    if [ "$n" -ge 3 ]; then b=right; o="-r"; else b=left; o="-p"; fi
    printf 'mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 26000000\n' \
        "$1" "$2" "$b" "$b" >> tmp/dc/script.txt
    args="$args $o $1 $2"
    lx=$1
    ly=$2
    shift 2
done
printf 'mouse %s %s\nwait 14000000\nshot ../jwcad_dos_wasm/tmp/dc/orig.raw\n' \
    "$lx" "$ly" >> tmp/dc/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/dc/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe $args -m "$lx" "$ly" "orig/$DRAWING.JWC" tmp/dc/port.raw > /dev/null
printf '寸法 %s  ' "$DRAWING"
python tools/fulldiff.py tmp/dc/orig.raw tmp/dc/port.raw
