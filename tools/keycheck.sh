#!/bin/sh
# Picking a command with its one-letter key, against the original.
#
#   sh tools/keycheck.sh C 1        # 複写
#   sh tools/keycheck.sh X 3        # ／
#   sh tools/keycheck.sh c 16       # 移動  (small letters are the left column)
#
# The pointer stays where the original leaves it, in the middle of the drawing,
# so the line saying what the right button would snap to is on both screens.
set -e
cd "$(dirname "$0")/.."
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
mkdir -p tmp/key
key=$1; n=$2
DRAWING="${DRAWING:-SAMPLE0}"
printf 'wait 40000000\ntype %s\nwait 44000000\nshot ../jwcad_dos_wasm/tmp/key/orig.raw\n' "$key" \
    > tmp/key/script.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/key/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe -c "$n" -m 200 200 "orig/$DRAWING.JWC" tmp/key/port.raw > /dev/null
printf "key %s -> command %-2s  " "$key" "$n"
python tools/fulldiff.py tmp/key/orig.raw tmp/key/port.raw
