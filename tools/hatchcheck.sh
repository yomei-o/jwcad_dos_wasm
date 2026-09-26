#!/bin/sh
# ハッチ（18 番）—— 枠を指して中を斜線で埋めるところを、本物と移植で比べます。
#
#   sh tools/hatchcheck.sh 300 402 380 410 300 419 197 410
#   CLOSE=1 sh tools/hatchcheck.sh 300 402 380 410 300 419 197 410   # 開始線で閉じるまで
#   RUN=1 sh tools/hatchcheck.sh 300 402 380 410 300 419 197 410     # ①指示終了 → ①実行 まで
#
# 引数は枠にする線の上の点を、続く順に。最後にもう一度 1 本目を押すと
# 枠が閉じます（本物の `[開始線で終了]`）。上の行の押しどころは
# ①【指示終了】が桁 9〜22（x 64〜183）、① 実 行 が桁 9〜19（x 64〜159）。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/hc
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"

first_x=$1
first_y=$2
args="-u -c 18"
printf 'wait %s\nmouse 30 104\nwait 2000000\nclick left\nwait 40000000\n' \
    "$BOOT" > tmp/hc/script.txt
lx=$1
ly=$2
while [ $# -ge 2 ]; do
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 26000000\n' \
        "$1" "$2" >> tmp/hc/script.txt
    args="$args -p $1 $2"
    lx=$1
    ly=$2
    shift 2
done
if [ -n "$CLOSE" ] || [ -n "$RUN" ]; then
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 26000000\n' \
        "$first_x" "$first_y" >> tmp/hc/script.txt
    args="$args -p $first_x $first_y"
    lx=$first_x
    ly=$first_y
fi
if [ -n "$RUN" ]; then
    printf 'mouse 120 8\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 26000000\n' \
        >> tmp/hc/script.txt
    printf 'mouse 100 8\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 60000000\n' \
        >> tmp/hc/script.txt
    args="$args -t 120 -t 100"
fi
printf 'mouse %s %s\nwait 14000000\nshot ../jwcad_dos_wasm/tmp/hc/orig.raw\n' \
    "$lx" "$ly" >> tmp/hc/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/hc/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe $args -m "$lx" "$ly" "orig/$DRAWING.JWC" tmp/hc/port.raw > /dev/null
printf 'ハッチ %s%s%s  ' "$DRAWING" "${CLOSE:+ +閉じる}" "${RUN:+ +実行}"
python tools/fulldiff.py tmp/hc/orig.raw tmp/hc/port.raw
