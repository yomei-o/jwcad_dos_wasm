#!/bin/sh
# Move the pointer all over the screen and compare every resting place with
# the original's.
#
#     sh tools/hovercheck.sh              # a 60-pixel grid, one boot
#     STEP=40 sh tools/hovercheck.sh      # finer
#     DRAWING=SAMPLE6 sh tools/hovercheck.sh
#
# Nothing is pressed: this is only "where is the pointer".  That sounds like
# it could not go wrong, and it is exactly where a whole feature was found
# missing -- the original turns the counts box into a 目盛/軸角 panel when the
# pointer is over it, and the port did not, which nothing else noticed
# because every other check presses something first.
#
# One boot, many shots: the emulator's script can take a screenshot per
# position, so the whole sweep costs one start-up.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/hov
rm -f tmp/hov/*.raw
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
STEP="${STEP:-60}"

: > tmp/hov/points.txt
printf 'wait %s\n' "$BOOT" > tmp/hov/script.txt
y=8
while [ "$y" -lt 480 ]; do
    x=8
    while [ "$x" -lt 640 ]; do
        printf '%s %s\n' "$x" "$y" >> tmp/hov/points.txt
        printf 'mouse %s %s\nwait 4000000\nshot ../jwcad_dos_wasm/tmp/hov/%s_%s.raw\n' \
            "$x" "$y" "$x" "$y" >> tmp/hov/script.txt
        x=$((x + STEP))
    done
    y=$((y + STEP))
done

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/hov/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       > /dev/null 2>&1

bad=0
n=0
while read -r x y; do
    [ -f "tmp/hov/${x}_${y}.raw" ] || continue
    # `< /dev/null`: without it the child inherits the loop's stdin -- the
    # point list -- and eats the rest of it, so the sweep stops after a few
    # and never reaches its own summary.
    ./tests/drawing.exe -u -m "$x" "$y" "orig/$DRAWING.JWC" tmp/hov/port.raw \
        > /dev/null < /dev/null
    got=$(python tools/fulldiff.py "tmp/hov/${x}_${y}.raw" tmp/hov/port.raw \
          | sed 's/ different.*//')
    n=$((n + 1))
    if [ "$got" != 0 ]; then
        echo "  (%s,%s) $got different" | sed "s/%s,%s/$x,$y/"
        bad=$((bad + 1))
    fi
done < tmp/hov/points.txt
echo "$DRAWING: $n resting places, $bad of them differ"
[ "$bad" = 0 ]
