#!/bin/sh
# Which of a list of points the original's 読取 takes, with 点 (22) picked so
# that every read drops a 仮点 on the screen and nothing else changes.
#
#   DRAWING=SAMPLE6 sh tools/readprobe.sh 470 305 470 274 470 243
#
# One shot per press; a press that read something leaves a twelve-pixel ring.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/probe
rm -f tmp/probe/*.raw
EMU=tools/emu.sh
DRAWING="${DRAWING:-SAMPLE0}"
# how long to hold the button and how long to let the answer settle
HOLD="${HOLD:-3000000}"
AFTER="${AFTER:-14000000}"
ALL="$*"
{
    echo "wait 40000000"
    echo "mouse 30 168"
    echo "wait 2000000"
    echo "click left"
    echo "wait 24000000"
    echo "mouse 600 450"
    echo "wait 3000000"
    echo "shot ../jwcad_dos_wasm/tmp/probe/b.raw"
    i=0
    while [ $# -ge 2 ]; do
        echo "mouse $1 $2"
        echo "wait 3000000"
        echo "down right"
        echo "wait $HOLD"
        echo "up right"
        echo "wait $AFTER"
        echo "mouse 600 450"
        echo "wait 6000000"
        echo "shot ../jwcad_dos_wasm/tmp/probe/s$i.raw"
        i=$((i + 1))
        shift 2
    done
} > tmp/probe/script.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/probe/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       >/dev/null 2>&1
PTS="$ALL" python tools/readprobe.py
