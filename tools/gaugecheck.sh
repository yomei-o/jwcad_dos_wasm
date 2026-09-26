#!/bin/sh
# Where exactly does the counts box turn into the 目盛/軸角 panel?
#
#     sh tools/gaugecheck.sh
#
# tools/hovercheck.sh sweeps on a 60-pixel grid, which says the panel is
# there but not where its edges are.  This walks the box's four sides one
# pixel at a time instead, so a rectangle that is one pixel out shows up.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/gau
rm -f tmp/gau/*.raw
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"

: > tmp/gau/points.txt
for y in 14 15 16 17 18 46 47 48 49 50; do
    echo "60 $y" >> tmp/gau/points.txt
done
for x in 0 1 2 119 120 121 122 123; do
    echo "$x 30" >> tmp/gau/points.txt
done

printf 'wait %s\n' "$BOOT" > tmp/gau/script.txt
while read -r x y; do
    printf 'mouse %s %s\nwait 4000000\nshot ../jwcad_dos_wasm/tmp/gau/%s_%s.raw\n' \
        "$x" "$y" "$x" "$y" >> tmp/gau/script.txt
done < tmp/gau/points.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/gau/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       > /dev/null 2>&1

bad=0
n=0
while read -r x y; do
    [ -f "tmp/gau/${x}_${y}.raw" ] || { echo "  ($x,$y) no shot"; continue; }
    ./tests/drawing.exe -u -m "$x" "$y" "orig/$DRAWING.JWC" tmp/gau/port.raw \
        > /dev/null < /dev/null
    got=$(python tools/fulldiff.py "tmp/gau/${x}_${y}.raw" tmp/gau/port.raw \
          | sed 's/ different.*//')
    n=$((n + 1))
    if [ "$got" != 0 ]; then
        echo "  ($x,$y) $got different"
        bad=$((bad + 1))
    else
        echo "  ($x,$y) same"
    fi
done < tmp/gau/points.txt
echo "$DRAWING: $n edge points, $bad of them differ"
[ "$bad" = 0 ]
