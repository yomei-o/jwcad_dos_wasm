#!/bin/sh
# 分割（21 番）—— 2 点の間に仮点を撒くところを、本物と移植で比べる。
#
#   sh tools/divcheck.sh 250 200 450 200 4
#
# **まだ通りません。** 仮点の位置は合っていますが（作図領域の差はリングでは
# なく、上の行の `残 97` が右端で作図領域に食い込んでいるぶん）、分割の
# 上の行を src/typed.h に入れていないので 1800 画素ほど違います。
# RESUME.md 4.19f に採ってある文字列があります。tools/check.sh には
# まだ入れていません。
#
# 項目を選んだあとの最初の押しは届かないので、捨て駒を 1 回入れています。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/div
EMU=../dosv_emu_cpp/dosemu.exe
DRAWING="${DRAWING:-SAMPLE0}"
ax=$1; ay=$2; bx=$3; by=$4; n=${5:-4}
{
    printf 'wait 40000000\nmouse 30 152\nwait 2000000\nclick left\nwait 40000000\n'
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
