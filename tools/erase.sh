#!/bin/sh
# Drive the original's 消去 (command 25) through its three presses and say what
# it did.  Used to work the command out; kept so the next person can repeat it.
#
#   sh tools/erase.sh 150 130 245 170          # SAMPLE0: a box round two lines
#   DRAWING=SAMPLE6 sh tools/erase.sh 430 230 540 310
#   DRAWING=TEST7 WAIT=70000000 sh tools/erase.sh 440 280 480 320
#
# The presses are: left at the first corner, **right** at the second (which is
# 範囲確定 and paints what it picked in colour 2), then left on the top line's
# ①実行 at (220,8) -- GO_X/GO_Y move that last press.
# Leaves tmp/erase/b.raw (before), s.raw (after the range is fixed) and
# a.raw (after it is carried out).
#
# A big drawing needs a longer wait before the menu is pressed -- TEST7 at the
# default 40M instructions is still loading and the click picks another item.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/erase
EMU=../dosv_emu_cpp/dosemu.exe
DRAWING="${DRAWING:-SAMPLE0}"
WAIT="${WAIT:-40000000}"
{
    echo "wait $WAIT"
    echo "mouse 30 216"
    echo "wait 2000000"
    echo "click left"
    echo "wait 24000000"
    echo "mouse 600 450"
    echo "wait 3000000"
    echo "shot ../jwcad_dos_wasm/tmp/erase/b.raw"
    echo "mouse $1 $2"
    echo "wait 3000000"
    echo "down left"
    echo "wait 3000000"
    echo "up left"
    echo "wait 16000000"
    echo "mouse $3 $4"
    echo "wait 3000000"
    echo "down right"
    echo "wait 3000000"
    echo "up right"
    echo "wait 30000000"
    echo "shot ../jwcad_dos_wasm/tmp/erase/s.raw"
    echo "mouse ${GO_X:-220} ${GO_Y:-8}"
    echo "wait 3000000"
    echo "down left"
    echo "wait 3000000"
    echo "up left"
    echo "wait 30000000"
    echo "mouse 600 450"
    echo "wait 10000000"
    echo "shot ../jwcad_dos_wasm/tmp/erase/a.raw"
} > tmp/erase/script.txt
DOSEMU_BP=+0DEF:23C5 DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/erase/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       2>/dev/null > tmp/erase/str.txt
python tools/erase.py
