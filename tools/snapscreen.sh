#!/bin/sh
# The whole screen once a modified read has been started, against the original's.
#
#   sh tools/snapscreen.sh shift 300 402       # ／, [SHIFT], right press on a line
#   sh tools/snapscreen.sh alt 232 157         # ／, [GRPH], right press on an end
#   CMDN=2 sh tools/snapscreen.sh shift 300 402
#   DRAWING=SAMPLE6 sh tools/snapscreen.sh shift 415 158
#
# tools/snapcheck.sh asks where the point went; this asks what the screen looks
# like while the original is waiting for the second press -- 【線･円上点
# スナップ】 or 《２点間中心》Ｂ点 along the top, and the band beside the
# counts.  The key stays down through the screenshot, which is what a hand
# does: it is still held while the second press is being aimed.
set -e
cd "$(dirname "$0")/.."
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
mkdir -p tmp/mod
mod=$1; x=$2; y=$3
DRAWING="${DRAWING:-SAMPLE0}"
n="${CMDN:-3}"
if [ "$n" -le 15 ]; then mx=90; row=$((n - 1)); else mx=30; row=$((n - 16)); fi
my=$((64 + 16 * row + 8))
{
    echo "wait 40000000"
    echo "mouse $mx $my"
    echo "wait 2000000"
    echo "click left"
    echo "wait 24000000"
    echo "mods $mod"
    echo "mouse $x $y"
    echo "wait 3000000"
    echo "down right"
    echo "wait 3000000"
    echo "up right"
    echo "wait 20000000"
    echo "shot ../jwcad_dos_wasm/tmp/mod/orig.raw"
} > tmp/mod/script.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/mod/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe -u -c "$n" -M "$mod" -r "$x" "$y" -m "$x" "$y" \
    "orig/$DRAWING.JWC" tmp/mod/port.raw > /dev/null
printf 'command %-2s %-5s right (%s,%s)  ' "$n" "$mod" "$x" "$y"
python tools/fulldiff.py tmp/mod/orig.raw tmp/mod/port.raw
