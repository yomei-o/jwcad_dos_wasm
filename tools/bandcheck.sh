#!/bin/sh
# The line a half-finished command drags, against the original's.
#
#   sh tools/bandcheck.sh 3 300 200 450 320      # ／ with one point taken
#
# Picks the item, presses the first point, moves the pointer, and compares the
# whole screen.  What is left over is the circled digits ①②③ the command's
# line is full of -- see tools/menucheck.sh for why neither side draws them.
set -e
cd "$(dirname "$0")/.."
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
mkdir -p tmp/band
n=$1; x0=$2; y0=$3; x1=$4; y1=$5
DRAWING="${DRAWING:-SAMPLE0}"
if [ "$n" -le 15 ]; then mx=90; row=$((n - 1)); else mx=30; row=$((n - 16)); fi
my=$((64 + 16 * row + 8))
printf 'wait 40000000\nmouse %d %d\nwait 2000000\nclick left\nwait 24000000\nmouse %d %d\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 12000000\nmouse %d %d\nwait 12000000\nshot ../jwcad_dos_wasm/tmp/band/orig.raw\n' \
    "$mx" "$my" "$x0" "$y0" "$x1" "$y1" > tmp/band/script.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/band/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe -c "$n" -p "$x0" "$y0" -m "$x1" "$y1" \
    "orig/$DRAWING.JWC" tmp/band/port.raw > /dev/null
printf 'command %s dragging  ' "$n"
python tools/fulldiff.py tmp/band/orig.raw tmp/band/port.raw
