#!/bin/sh
# What the panel around the drawing says, drawing by drawing.
#
#   sh tools/panel.sh              # every drawing the distribution ships
#   sh tools/panel.sh SAMPLE1
#
# Runs the original on each and prints the strings it writes into the panel --
# the two counts, the paper and the scale, the pen, the layer group and the
# magnification.  That is where src/ui.c's numbers have to come from, so this
# is the list they are checked against.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }

if [ $# -gt 0 ]; then
    names="$*"
else
    names=""
    for f in orig/SAMPLE*.JWC orig/TEST*.JWC; do
        names="$names $(basename "$f" .JWC)"
    done
fi

printf 'wait 60000000\n' > tmp/panel.txt
for name in $names; do
    DOSEMU_BP=0EFF:23C5 DOSEMU_BPSTR=2 DOSEMU_BPN=4000 \
    "$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
           --script tmp/panel.txt orig/JW_CADV.EXE "$name.JWC" 2>&1 \
        | grep -a '^\[bp\]' > "tmp/panel_$name.txt"
    echo "== $name"
    python tools/panel.py "$name"
done
