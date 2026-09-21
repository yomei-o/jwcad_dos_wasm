#!/bin/sh
# 複写 ⑥回転 in the **original**, then have it save, and compare the records
# it wrote with the port's.
#
#   sh tools/rotatesave.sh 150 130 245 170 200 300 30 400 300
#   DRAWING=TEST1 BOOT=60000000 sh tools/rotatesave.sh 460 255 600 380 500 300 30 300 300
#
# The arguments are rotatecheck.sh's: the range's two corners, the 基準点, the
# angle in degrees and where to put the copy.  The first corner is pressed with
# the **right** button so that texts come into the range too -- which is the
# point of this: tools/rotatecheck.sh says whether the picture matches, and
# this says what went into the records, where a text's two ends and its
# baseline show (the same question 複写 ⑤反転 turned on -- RESUME 4.28).
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/rs
DRAWING="${DRAWING:-SAMPLE0}"
# Which item on the top line.  520 is x of the sixth, 回転 (columns 63-68);
# 300 is the third, 数値倍率 (columns 35-44), which asks for its number in the
# same three steps -- base point, a field, then where it goes -- so the same
# script drives it.
ITEM="${ITEM:-520}"
WHAT=$(test "$ITEM" = 520 && printf 回転 || printf 倍率)

press() {
    printf 'mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 26000000\n' \
        "$1" "$2" "${3:-left}" "${3:-left}"
}

{
    printf 'mouse 90 72\nwait 2000000\nclick left\nwait 40000000\n'
    press "$1" "$2" right
    press "$3" "$4"
    press 580 8
    press "$ITEM" 8
    press "$5" "$6"
    # One character per line -- see tools/rotatecheck.sh.
    echo "$7" | sed 's/./type &\nwait 8000000\n/g'
    printf 'key enter\nwait 30000000\n'
    press "$8" "$9"
} > tmp/rs/pre.txt

PRE=tmp/rs/pre.txt OUT=tmp/rs/orig.raw DRAWING="$DRAWING" \
    BOOT="${BOOT:-40000000}" sh tools/save.sh > /dev/null

./tests/drawing.exe -u -c 1 -r "$1" "$2" -p "$3" "$4" -t 580 -t "$ITEM" \
    -p "$5" "$6" -k "$7" -p "$8" "$9" -w tmp/rs/port.JWC \
    "orig/$DRAWING.JWC" tmp/rs/port.raw > /dev/null

python tools/whatsnew.py "orig/$DRAWING.JWC" "tmp/sroot/$DRAWING.JWC" \
    > tmp/rs/orig.txt
python tools/whatsnew.py "orig/$DRAWING.JWC" tmp/rs/port.JWC > tmp/rs/port.txt
printf "$WHAT"'の記録 %s (%s,%s)-(%s,%s) 基準(%s,%s) [%s] → (%s,%s)  ' \
    "$DRAWING" "$1" "$2" "$3" "$4" "$5" "$6" "$7" "$8" "$9"
if diff -q tmp/rs/orig.txt tmp/rs/port.txt > /dev/null; then
    echo "same ($(wc -l < tmp/rs/orig.txt | tr -d ' ') records)"
else
    echo "DIFFERENT"
    diff tmp/rs/orig.txt tmp/rs/port.txt || true
fi
