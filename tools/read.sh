#!/bin/sh
# What the right button reads at a point -- the 読取 the original's own line
# calls "(R)Read".
#
#   sh tools/read.sh 170 150
#   DRAWING=SAMPLE6 sh tools/read.sh 300 200
#   MODS=shift sh tools/read.sh 170 150     # 読取を修飾キーつきで
#
# MODS= は押している間だけ立てて、離します（本物は押しごとに
# `INT 16h AH=12h` を読むので、押しの前に立っていれば足ります）。
# [SHIFT] は線上の点、[GRPH] は中心点、[CTRL] は鉛直・円周1/4点。
#
# It picks ／ (command 3), presses the right button at the point, and reads the
# answer back out of the band: with one point taken the original writes the
# length and the angle from that point to wherever the pointer is, and the
# pointer has not moved -- so the pair says exactly where the point it took is.
# Printed as drawing units and as a screen pixel.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/read
EMU=tools/emu.sh
DRAWING="${DRAWING:-SAMPLE0}"
x=$1; y=$2
{
    echo "wait 40000000"
    echo "mouse 90 104"
    echo "wait 2000000"
    echo "click left"
    echo "wait 24000000"
    echo "mouse $x $y"
    echo "wait 3000000"
    [ -n "$MODS" ] && echo "mods $MODS"
    echo "down right"
    echo "wait 3000000"
    echo "up right"
    [ -n "$MODS" ] && echo "mods none"
    echo "wait 14000000"
} > tmp/read/script.txt
DOSEMU_BP=+0DEF:23C5 DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/read/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       2>/dev/null > tmp/read/str.txt
UNIT_MM=$(./tests/drawing.exe -o -u "orig/$DRAWING.JWC" tmp/read/x.raw | awk '/unit_mm/ { print $2 }')
DENOM=$(./tests/drawing.exe -o -u "orig/$DRAWING.JWC" tmp/read/x.raw | awk '/unit_mm/ { print $6 }')
export UNIT_MM DENOM
X="$x" Y="$y" python tools/read.py
