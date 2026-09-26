#!/bin/sh
# 分割（21 番）—— 2 点の間に仮点を撒くところを、本物と移植で比べる。
#
#   sh tools/divcheck.sh 250 200 450 200 4
#
#   DRAWING=SAMPLE6 BOOT=150000000 sh tools/divcheck.sh 250 200 450 200 5
#
# 項目を選んだあとの最初の押しは届かないので、捨て駒を 1 回入れています。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/div
EMU=tools/emu.sh
DRAWING="${DRAWING:-SAMPLE0}"
ax=$1; ay=$2; bx=$3; by=$4; n=${5:-4}
{
    printf 'wait %s
mouse 30 152
wait 2000000
click left
wait 40000000
' "${BOOT:-40000000}"
    # the first press after the item is picked never reaches the command
    printf 'mouse 600 450\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 20000000\n'
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 20000000\n' "$ax" "$ay"
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 20000000\n' "$bx" "$by"
    echo "$n" | fold -w1 | while read -r ch; do
        [ -n "$ch" ] || continue
        printf 'type %s\nwait 8000000\n' "$ch"
    done
    printf 'key enter\nwait 30000000\n'
    printf 'mouse 600 450\nwait 14000000\n'
    printf 'shot ../jwcad_dos_wasm/tmp/div/orig.raw\n'
} > tmp/div/div.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/div/div.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe -u -c 21 -p "$ax" "$ay" -p "$bx" "$by" -k "$n" -m 600 450 \
    "orig/$DRAWING.JWC" tmp/div/port.raw > /dev/null
printf '分割 %s (%s,%s)-(%s,%s) %s分割  ' "$DRAWING" "$ax" "$ay" "$bx" "$by" "$n"
python tools/fulldiff.py tmp/div/orig.raw tmp/div/port.raw
