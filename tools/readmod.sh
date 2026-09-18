#!/bin/sh
# A read with a modifier held, watched all the way through.
#
#   sh tools/readmod.sh shift 300 402              # press once, print every string
#   sh tools/readmod.sh shift 300 402 320 380      # then move the pointer there
#   sh tools/readmod.sh shift 300 402 320 380 R    # ...and press right again there
#   sh tools/readmod.sh shift 300 402 400 398 L 450 300   # ...then move there again
#   DRAWING=SAMPLE6 sh tools/readmod.sh alt 300 200
#
# tools/read.sh answers "where did it read", which assumes the press takes a
# point.  The modified reads do not always: [SHIFT] puts the original into
# 【線･円上点スナップ】 and waits for a second indication.  This one prints the
# band and the top line as they happen, so what the original is asking for is
# visible before anything is concluded about it.
#
# `mods` goes down before the press and up after it, which is what a hand does.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/read
EMU=../dosv_emu_cpp/dosemu.exe
DRAWING="${DRAWING:-SAMPLE0}"
CMD="${CMD:-90 104}"            # which command to be in; the default is ／
mod=$1; x=$2; y=$3; mx=$4; my=$5; second=$6; ex=$7; ey=$8
{
    echo "wait 40000000"
    echo "mouse $CMD"
    echo "wait 2000000"
    echo "click left"
    echo "wait 24000000"
    echo "mouse $x $y"
    echo "wait 3000000"
    [ "$mod" = none ] || echo "mods $mod"
    echo "down right"
    echo "wait 3000000"
    echo "up right"
    [ "$mod" = none ] || echo "mods none"
    echo "wait 14000000"
    if [ -n "$mx" ]; then
        echo "mouse $mx $my"
        echo "wait 14000000"
        if [ -n "$second" ]; then
            case "$second" in
            R|r) echo "down right"; echo "wait 3000000"; echo "up right" ;;
            *)   echo "down left";  echo "wait 3000000"; echo "up left"  ;;
            esac
            echo "wait 14000000"
            if [ -n "$ex" ]; then
                echo "mouse $ex $ey"
                echo "wait 14000000"
            fi
        fi
    fi
} > tmp/read/mod.txt
DOSEMU_BP=+0DEF:23C5 DOSEMU_BPSTR=2 DOSEMU_BPN=40000 \
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/read/mod.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       2>/dev/null > tmp/read/mod_str.txt
UNIT_MM=$(./tests/drawing.exe -o -u "orig/$DRAWING.JWC" tmp/read/x.raw | awk '/unit_mm/ { print $2 }')
DENOM=$(./tests/drawing.exe -o -u "orig/$DRAWING.JWC" tmp/read/x.raw | awk '/unit_mm/ { print $6 }')
export UNIT_MM DENOM
FROM="${FROM:-60000000}" python tools/readmod.py
