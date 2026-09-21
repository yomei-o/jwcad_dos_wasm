#!/bin/sh
# 複写 ⑤反転 in the **original**, then have it save, and compare the records
# it wrote with the port's.
#
#   DRAWING=TEST1 BOOT=60000000 sh tools/mirrorsave.sh 350 415 380 435 180 350
#   sh tools/mirrorsave.sh 230 130 290 175 162 279
#
# The arguments are mirrorcheck.sh's: the range's two corners and then a point
# on the 反転基準線.  The first corner is pressed with the **right** button so
# that texts come into the range too, which is the point of this --
# tools/mirrorcheck.sh says whether the picture matches, and this says what
# went into the records, which is the only place the **order of a text's two
# ends** shows (RESUME 4.28).
#
# Prints whether the two lists of new records are the same.  A text whose two
# ends are the other way round, or whose baseline sits one character height
# off, is what this is for; tmp/ms/orig.txt and tmp/ms/port.txt are left behind
# to read when they differ.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/ms
DRAWING="${DRAWING:-SAMPLE0}"

press() {
    printf 'mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 26000000\n' \
        "$1" "$2" "${3:-left}" "${3:-left}"
}

{
    printf 'mouse 90 72\nwait 2000000\nclick left\nwait 40000000\n'
    press "$1" "$2" right
    press "$3" "$4"
    press 580 8
    press 460 8
    press "$5" "$6"
} > tmp/ms/pre.txt

PRE=tmp/ms/pre.txt OUT=tmp/ms/orig.raw DRAWING="$DRAWING" \
    BOOT="${BOOT:-40000000}" sh tools/save.sh > /dev/null

./tests/drawing.exe -u -c 1 -r "$1" "$2" -p "$3" "$4" -t 580 -t 460 \
    -p "$5" "$6" -m "$5" "$6" -w tmp/ms/port.JWC \
    "orig/$DRAWING.JWC" tmp/ms/port.raw > /dev/null

python tools/whatsnew.py "orig/$DRAWING.JWC" "tmp/sroot/$DRAWING.JWC" \
    > tmp/ms/orig.txt
python tools/whatsnew.py "orig/$DRAWING.JWC" tmp/ms/port.JWC > tmp/ms/port.txt
printf '反転の記録 %s (%s,%s)-(%s,%s) 軸(%s,%s)  ' \
    "$DRAWING" "$1" "$2" "$3" "$4" "$5" "$6"
if diff -q tmp/ms/orig.txt tmp/ms/port.txt > /dev/null; then
    echo "same ($(wc -l < tmp/ms/orig.txt | tr -d ' ') records)"
else
    echo "DIFFERENT"
    diff tmp/ms/orig.txt tmp/ms/port.txt || true
fi
