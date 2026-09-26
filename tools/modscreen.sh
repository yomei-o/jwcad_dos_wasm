#!/bin/sh
# The whole screen with a modifier key held, against the original's.
#
#   sh tools/modscreen.sh shift 3            # ／, [SHIFT] down, pointer inside
#   sh tools/modscreen.sh ctrl 11
#   DRAWING=SAMPLE6 AT="400 300" sh tools/modscreen.sh alt 2
#
# The two words in the band beside the counts are the hint for the modified
# read (src/snap.h), and the original puts them up only while a key is down and
# the pointer is over the drawing.  Nothing is pressed: the words follow the
# key and the mouse, not the stage, which is exactly what this checks.
set -e
cd "$(dirname "$0")/.."
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
mkdir -p tmp/mod
mod=$1; n=$2
DRAWING="${DRAWING:-SAMPLE0}"
AT="${AT:-300 200}"
if [ "$n" -le 15 ]; then mx=90; row=$((n - 1)); else mx=30; row=$((n - 16)); fi
my=$((64 + 16 * row + 8))
{
    echo "wait 40000000"
    echo "mouse $mx $my"
    echo "wait 2000000"
    echo "click left"
    echo "wait 24000000"
    # The key goes down after the item is picked and before the pointer moves
    # in, which is the order a hand does it in.
    echo "mods $mod"
    echo "mouse $AT"
    echo "wait 20000000"
    echo "shot ../jwcad_dos_wasm/tmp/mod/orig.raw"
} > tmp/mod/script.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/mod/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe -u -c "$n" -M "$mod" -m $AT \
    "orig/$DRAWING.JWC" tmp/mod/port.raw > /dev/null
printf 'command %-2s %-5s  ' "$n" "$mod"
python tools/fulldiff.py tmp/mod/orig.raw tmp/mod/port.raw
