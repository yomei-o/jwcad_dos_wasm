#!/bin/sh
# 円線接（26 番の ①接線 ③指定点）—— 点から円に接線を引くところを、
# 本物と移植で比べます。
#
#   DRAWING=TEST1 sh tools/tancheck.sh 500 350 255 239
#   DRAWING=TEST1 POINT=1 sh tools/tancheck.sh 500 350      # 点を押したところまで
#
# 引数は 指定点、つぎに円の上の点。項目を選んだあと図面を 1 回押すのが
# ①接 線 を選ぶ押しで（行の `(L)`）、そのあと上の行の ③指定点
# （桁 36〜44、x 280〜351）を押します。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/tc
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-TEST1}"
BOOT="${BOOT:-40000000}"

press() {
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 26000000\n' \
        "$1" "$2"
}

{
    printf 'wait %s\nmouse 30 232\nwait 2000000\nclick left\nwait 40000000\n' "$BOOT"
    press 600 450
    press 320 8
} > tmp/tc/script.txt
args="-u -c 26 -p 600 450 -t 320"
lx=600
ly=450
while [ $# -ge 2 ]; do
    press "$1" "$2" >> tmp/tc/script.txt
    args="$args -p $1 $2"
    lx=$1
    ly=$2
    shift 2
done
printf 'mouse %s %s\nwait 14000000\nshot ../jwcad_dos_wasm/tmp/tc/orig.raw\n' \
    "$lx" "$ly" >> tmp/tc/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/tc/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe $args -m "$lx" "$ly" "orig/$DRAWING.JWC" tmp/tc/port.raw > /dev/null
printf '接線 %s  ' "$DRAWING"
python tools/fulldiff.py tmp/tc/orig.raw tmp/tc/port.raw
