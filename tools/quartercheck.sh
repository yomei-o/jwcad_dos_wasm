#!/bin/sh
# 円周1/4点 -- what [CTRL] takes in a command that is neither ＋ nor ／.
#
#   sh tools/quartercheck.sh 309 202          # near the circle's 90 degree point
#   ARC="291 201 251 241" sh tools/quartercheck.sh 275 207
#
# A circle has to be drawn first.  [CTRL] is the one key whose search is
# filtered by the pen and the line type being written, and no drawing that
# ships has a circle drawn with its own writing pen -- so one is made with ○
# (or with 「（」, for an arc, by setting ARC) and the item that reads it is
# picked afterwards.  Both sides do the same thing and the whole screen is
# compared.
set -e
cd "$(dirname "$0")/.."
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
mkdir -p tmp/mod
x=$1; y=$2
DRAWING="${DRAWING:-SAMPLE0}"
CMDN="${CMDN:-4}"               # which item reads it; □ by default
AT="${AT:-450 400}"             # where the pointer is left
if [ -n "$ARC" ]; then          # 「（」: centre, start, end
    draw="90 248"; pts="300 250 $ARC"
else                            # ○: centre and a point on the rim
    draw="90 232"; pts="300 250 350 250"
fi
if [ "$CMDN" -le 15 ]; then mx=90; row=$((CMDN - 1)); else mx=30; row=$((CMDN - 16)); fi
my=$((64 + 16 * row + 8))
{
    echo "wait 40000000"
    echo "mouse $draw"; echo "wait 2000000"; echo "click left"; echo "wait 24000000"
    set -- $pts
    while [ $# -ge 2 ]; do
        echo "mouse $1 $2"; echo "wait 3000000"
        echo "down left"; echo "wait 3000000"; echo "up left"; echo "wait 14000000"
        shift 2
    done
    echo "mouse $mx $my"; echo "wait 2000000"; echo "click left"; echo "wait 24000000"
    echo "mods ctrl"
    echo "mouse $x $y"; echo "wait 3000000"
    echo "down right"; echo "wait 3000000"; echo "up right"; echo "wait 16000000"
    echo "mods none"
    echo "mouse $AT"; echo "wait 16000000"
    echo "shot ../jwcad_dos_wasm/tmp/mod/orig.raw"
} > tmp/mod/script.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/mod/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
if [ -n "$ARC" ]; then
    set -- 12 300 250 $ARC
else
    set -- 11 300 250 350 250
fi
n=$1; shift
pre=""
while [ $# -ge 2 ]; do pre="$pre -p $1 $2"; shift 2; done
# The key is let go before the pointer is moved away, so the words in the band
# are not there at the end and the port is run without -M.
./tests/drawing.exe -u -c "$n" $pre -C "$CMDN" -M ctrl -r "$x" "$y" \
    -M none -m $AT "orig/$DRAWING.JWC" tmp/mod/port.raw > /dev/null
printf 'item %-2s 円周1/4点 at (%s,%s)  ' "$CMDN" "$x" "$y"
python tools/fulldiff.py tmp/mod/orig.raw tmp/mod/port.raw
