#!/bin/sh
# Compare the port's screen against the original's, drawing by drawing.
#
#   sh tools/screens.sh                 # every drawing the distribution ships
#   sh tools/screens.sh SAMPLE2 TEST7   # just these
#
# The original runs in dosv_emu_cpp with the same fonts and the same palette
# file, and both sides write the same RGBA format, so the comparison is a plain
# byte-for-byte one over the drawing area (122,17)-(638,462).  tmp/mask_none.raw
# masks out what the original puts inside that area whatever the drawing is --
# the cursor and its one line of guidance.
#
# tools/kinds.sh answers the next question, which is *what* is wrong: it runs
# the same comparison four times with only one kind of entity on the paper.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/screens

EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
[ -f tmp/mask_none.raw ] || { echo "tmp/mask_none.raw is missing" >&2; exit 2; }

if [ $# -gt 0 ]; then
    names="$*"
else
    names=""
    for f in orig/SAMPLE*.JWC orig/TEST*.JWC; do
        names="$names $(basename "$f" .JWC)"
    done
fi

total=0
for name in $names; do
    [ -f "orig/$name.JWC" ] || { echo "no orig/$name.JWC" >&2; exit 2; }
    printf 'wait 60000000\nshot ../jwcad_dos_wasm/tmp/screens/e_%s.raw\n' "$name" \
        > tmp/screens/script.txt
    "$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
           --script tmp/screens/script.txt orig/JW_CADV.EXE "$name.JWC" \
           > /dev/null 2>&1
    ./tests/drawing.exe -o "orig/$name.JWC" "tmp/screens/p_$name.raw" > /dev/null
    n=$(./tests/compare.exe -m tmp/mask_none.raw "tmp/screens/e_$name.raw" \
        "tmp/screens/p_$name.raw" "tmp/screens/d_$name.png" 122 17 638 462 \
        | sed -n '3p' | sed 's/.*the same (\([0-9]*\) of them drawn), \([0-9]*\) different.*/\1 \2/')
    set -- $n
    printf '%-10s %6s drawn, %5s different\n' "$name" "$1" "$2"
    total=$((total + $2))
done
echo "-----------------------------------"
printf '%-10s %20d different\n' 'total' "$total"
