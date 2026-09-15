#!/bin/sh
# The whole screen against the original's, drawing by drawing -- nothing masked.
#
#   sh tools/full.sh                 # every drawing the distribution ships
#   sh tools/full.sh SAMPLE2 TEST7
#
# tools/screens.sh compares the drawing area alone and masks out what the
# original puts there whatever the drawing is.  This one compares all 307,200
# pixels: the frame, the panel, the strip along the bottom and the pointer too.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/screens
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }

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
    ./tests/drawing.exe -u "orig/$name.JWC" "tmp/screens/u_$name.raw" > /dev/null
    n=$(python tools/fulldiff.py "tmp/screens/e_$name.raw" "tmp/screens/u_$name.raw")
    printf '%-10s %s\n' "$name" "$n"
    total=$((total + ${n%% *}))
done
echo "-----------------------------------"
printf '%-10s %d different\n' 'total' "$total"
