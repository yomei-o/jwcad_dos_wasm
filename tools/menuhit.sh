#!/bin/sh
# Where does a menu row stop reacting to the resting pointer?
#
#     sh tools/menuhit.sh
#
# The highlight's rectangle was measured (x 8..55 on the left, 72..111 on
# the right), and the port used that same rectangle to decide **whether** to
# highlight.  That was a guess: tools/hovercheck.sh on a 60-pixel grid put
# the pointer at x=68 -- between the two rectangles -- and the original
# highlighted the left column there.  This walks x across one row.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/mh
rm -f tmp/mh/*.raw
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
ROW="${ROW:-68}"

: > tmp/mh/points.txt
for x in 8 55 56 63 64 68 69 70 71 72 111 112 120 121 122; do
    echo "$x $ROW" >> tmp/mh/points.txt
done
# and down the left column's first row, to find where a row starts and ends
for y in 62 63 64 65 79 80 300 301 302 303 304 305; do
    echo "20 $y" >> tmp/mh/points.txt
done

printf 'wait %s\n' "$BOOT" > tmp/mh/script.txt
while read -r x y; do
    printf 'mouse %s %s\nwait 4000000\nshot ../jwcad_dos_wasm/tmp/mh/%s_%s.raw\n' \
        "$x" "$y" "$x" "$y" >> tmp/mh/script.txt
done < tmp/mh/points.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/mh/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       > /dev/null 2>&1

bad=0
n=0
while read -r x y; do
    [ -f "tmp/mh/${x}_${y}.raw" ] || { echo "  ($x,$y) no shot"; continue; }
    ./tests/drawing.exe -u -m "$x" "$y" "orig/$DRAWING.JWC" tmp/mh/port.raw \
        > /dev/null < /dev/null
    got=$(python tools/fulldiff.py "tmp/mh/${x}_${y}.raw" tmp/mh/port.raw \
          | sed 's/ different.*//')
    n=$((n + 1))
    if [ "$got" != 0 ]; then
        echo "  ($x,$y) $got different"
        bad=$((bad + 1))
    else
        echo "  ($x,$y) same"
    fi
done < tmp/mh/points.txt
echo "$DRAWING: $n points, $bad of them differ"
[ "$bad" = 0 ]
