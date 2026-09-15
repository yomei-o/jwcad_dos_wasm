#!/bin/sh
# tools/read.sh for a whole list of points, in one run of the original.
#
#   sh tools/readmany.sh 170 150 165 143 400 200
#   DRAWING=SAMPLE6 sh tools/readmany.sh 300 200 310 210
#
# Between points it picks ／ again, which throws the point just taken away, so
# every press starts from the same state.  The answers come back in order.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/read
EMU=../dosv_emu_cpp/dosemu.exe
DRAWING="${DRAWING:-SAMPLE0}"
# A big drawing takes longer to answer; SETTLE/AFTER let a probe
# give it more room without changing the windows below.
SETTLE="${SETTLE:-20000000}"
AFTER="${AFTER:-12000000}"
ALL="$*"
{
    echo "wait 40000000"
    while [ $# -ge 2 ]; do
        echo "mouse 90 104"
        echo "wait 2000000"
        echo "click left"
        echo "wait $SETTLE"
        echo "mouse $1 $2"
        echo "wait 3000000"
        echo "down right"
        echo "wait 3000000"
        echo "up right"
        echo "wait $AFTER"
        shift 2
    done
} > tmp/read/many.txt
DOSEMU_BP=+0DEF:23C5 DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/read/many.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       2>/dev/null > tmp/read/many_str.txt
UNIT_MM=$(./tests/drawing.exe -o -u "orig/$DRAWING.JWC" tmp/read/x.raw | awk '/unit_mm/ { print $2 }')
DENOM=$(./tests/drawing.exe -o -u "orig/$DRAWING.JWC" tmp/read/x.raw | awk '/unit_mm/ { print $6 }')
export UNIT_MM DENOM
PTS="$ALL" python tools/readmany.py
