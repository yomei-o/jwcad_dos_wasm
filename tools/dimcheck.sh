#!/bin/sh
# 寸法（14 番の ①横方向 / ②縦方向）—— 引出し線・寸法線・寸法値を、
# 本物と移植で比べます。
#
#   sh tools/dimcheck.sh 162 140 300 110 162 140 598 140
#   VERT=1 sh tools/dimcheck.sh 162 140 130 250 162 140 162 419
#
# 引数は 引出し線の始点、寸法線の位置、寸法値の始点、寸法値の終点。
# 最後の 2 つは**読取**（右ボタン）なので、線の端や交点を指すこと。
# ①横方向 は項目のあと図面を 1 回押して選び（この道具が (600,450) で
# 勝手に入れます）、②縦方向 は上の行の桁 18〜25（x 136〜199）を押します。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/dc
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"

press() {
    printf 'mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 26000000\n' \
        "$1" "$2" "${3:-left}" "${3:-left}"
}

printf 'wait %s\nmouse 90 280\nwait 2000000\nclick left\nwait 40000000\n' \
    "$BOOT" > tmp/dc/script.txt
if [ -n "$VERT" ]; then
    press 170 8 >> tmp/dc/script.txt
    args="-u -c 14 -t 170"
    lx=170
    ly=8
else
    press 600 450 >> tmp/dc/script.txt
    args="-u -c 14 -p 600 450"
    lx=600
    ly=450
fi
n=0
while [ $# -ge 2 ]; do
    n=$((n + 1))
    if [ "$n" -ge 3 ]; then b=right; o="-r"; else b=left; o="-p"; fi
    press "$1" "$2" "$b" >> tmp/dc/script.txt
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
printf '寸法 %s%s  ' "$DRAWING" "${VERT:+ 縦}"
python tools/fulldiff.py tmp/dc/orig.raw tmp/dc/port.raw
