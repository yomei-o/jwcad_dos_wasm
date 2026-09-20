#!/bin/sh
# Ask the original what a command does, in one run.
#
#     sh tools/probe.sh 7 220 157 596 300          # pick item 7, press twice
#     sh tools/probe.sh 6 r 220 157                # a right press
#     sh tools/probe.sh 21 d 250 200 450 200 t 4 e # dummy press, two, type 4, [Enter]
#     MOVE="600 450" sh tools/probe.sh 6 r 220 157 # ...and move the pointer after
#     SAVE=1 sh tools/probe.sh 8 220 157 163 300   # ...and have it save, then
#                                                  #    print what changed in the records
#     DRAWING=SAMPLE6 BOOT=150000000 sh tools/probe.sh ...
#
# This is the tool to reach for when adding a command.  It prints every string
# the original wrote after the item was picked -- column, row and text -- which
# is what the top line is made of, and with SAVE=1 it also prints which records
# changed, which is what the command actually did.  Both in one run of the
# emulator, because each run costs tens of seconds.
#
# The words between the coordinates are:
#
#     l  the presses after this are the left button (the default)
#     r  ...the right one
#     d  a throwaway press at (600,450): **the first press after some items is
#        never delivered** (分割 and 追加･除外 both), so a run that needs one
#        starts with this
#     t  the next word is typed, one character at a time
#     e  [Enter]
#     b  [BS]
#
# Everything lands in tmp/probe.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/probe
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
PICK="${PICK:-40000000}"

n=$1; shift
if [ "$n" -le 15 ]; then mx=90; row=$((n - 1)); else mx=30; row=$((n - 16)); fi
my=$((64 + 16 * row + 8))

{
    printf 'wait %s\nmouse %s %s\nwait 2000000\nclick left\nwait %s\n' \
        "$BOOT" "$mx" "$my" "$PICK"
    btn=left
    while [ $# -ge 1 ]; do
        case "$1" in
        r) btn=right; shift; continue;;
        l) btn=left; shift; continue;;
        d)  printf 'mouse 600 450\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 20000000\n'
            shift; continue;;
        t)  shift
            echo "$1" | fold -w1 | while read -r ch; do
                [ -n "$ch" ] || continue
                printf 'type %s\nwait 8000000\n' "$ch"
            done
            shift; continue;;
        e)  printf 'key enter\nwait 30000000\n'; shift; continue;;
        b)  printf 'key backspace\nwait 8000000\n'; shift; continue;;
        esac
        [ $# -ge 2 ] || break
        printf 'mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 20000000\n' \
            "$1" "$2" "$btn" "$btn"
        shift 2
    done
    [ -n "$MOVE" ] && printf 'mouse %s\nwait 20000000\n' "$MOVE"
    printf 'wait 8000000\nshot ../jwcad_dos_wasm/tmp/probe/after.raw\n'
} > tmp/probe/script.txt

if [ -n "$SAVE" ]; then
    # tools/save.sh drives the original's own 入出力 → ①保存 afterwards, so the
    # steps above go in as its PRE and the screenshot is dropped.
    grep -v '^shot ' tmp/probe/script.txt > tmp/probe/pre.txt
    PRE=tmp/probe/pre.txt sh tools/save.sh > /dev/null 2>&1
fi

DOSEMU_BP=+0DEF:23C5 DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/probe/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       2>/dev/null > tmp/probe/str.txt

echo "--- what it wrote (column, row, text; the last write to each cell)"
DRAW="$DRAWING" python tools/probe.py
if [ -n "$SAVE" ]; then
    echo "--- what changed in the records"
    DRAW="$DRAWING" python tools/probediff.py
fi
