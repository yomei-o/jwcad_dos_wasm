#!/bin/sh
# The screen after each menu item is picked, against the original's own.
#
#   sh tools/menucheck.sh            # all thirty
#   sh tools/menucheck.sh 1 16
#
# `sh tools/menus.sh` has to have run first: it drives the original with the
# emulator's mouse and leaves tmp/menus/cNN.raw.  This draws the same screen
# with src/ui.c and counts the pixels that differ.
#
# What is left is one pixel each on 複写 and 移動, at (0,16) -- see 4.11.
set -e
cd "$(dirname "$0")/.."
if [ $# -gt 0 ]; then cmds="$*"; else cmds=$(seq 1 30); fi
total=0
for n in $cmds; do
    f=$(printf 'tmp/menus/c%02d.raw' "$n")
    [ -f "$f" ] || { echo "$f missing -- run sh tools/menus.sh first" >&2; exit 2; }
    if [ "$n" -le 15 ]; then x=90; row=$((n - 1)); else x=30; row=$((n - 16)); fi
    y=$((64 + 16 * row + 8))
    ./tests/drawing.exe -c "$n" -m "$x" "$y" orig/SAMPLE2.JWC tmp/menus/p$$.raw > /dev/null
    d=$(python tools/fulldiff.py "$f" tmp/menus/p$$.raw | sed 's/ different.*//')
    printf 'command %2d  %5d different\n' "$n" "$d"
    rm -f tmp/menus/p$$.raw
    total=$((total + d))
done
echo "-------------------------------"
printf 'total       %5d different\n' "$total"
