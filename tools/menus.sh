#!/bin/sh
# What the original does when a menu item is picked.
#
#   sh tools/menus.sh            # all thirty
#   sh tools/menus.sh 1 16 30    # just these command numbers
#
# Clicks the item with the emulator's own mouse, waits, and prints every string
# the original wrote afterwards -- the prompt along the top, the guidance line
# and the label it redrew in reverse -- plus the rectangle it filled to show
# which item is picked.  That is the list src/ui.c has to match.
#
# The numbering is the original's own (USER_MNU.DAT): 複写 to 測定 are 1 to 15
# down the right column, 移動 to 入出力 are 16 to 30 down the left.
#
# It waits a long time after the press, so the screen has certainly settled.
#
# The pointer is left on the menu item, which is where a press leaves it.  That
# matters: the line at columns 17 and 22 saying what the right button would snap
# to is only there when the pointer is over the drawing, so it is not part of
# what an item puts up -- it follows the mouse.
set -e
# The breakpoint report goes to stdout and the emulator's own messages to
# stderr, so stderr is dropped rather than merged: merging lets a 'wrote
# ....raw' land in the middle of a report line, and the piece of the screen
# that line described is then missing from the table.
cd "$(dirname "$0")/.."
mkdir -p tmp/menus
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE2}"

if [ $# -gt 0 ]; then cmds="$*"; else cmds=$(seq 1 30); fi

for n in $cmds; do
    if [ "$n" -le 15 ]; then x=90; row=$((n - 1)); else x=30; row=$((n - 16)); fi
    y=$((64 + 16 * row + 8))
    printf 'wait 40000000\nmouse %d %d\nwait 2000000\nclick left\nwait 24000000\nshot ../jwcad_dos_wasm/tmp/menus/c%02d.raw\n' \
        "$x" "$y" "$n" > tmp/menus/script.txt
    DOSEMU_BP=+0DEF:23C5 DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
    "$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
           --script tmp/menus/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" 2>/dev/null \
        | grep -a '^\[bp\]' > "tmp/menus/s$n.txt"
    echo "== $n  (clicked $x,$y)"
    python tools/menus.py "$n"
done
