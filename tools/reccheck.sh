#!/bin/sh
# Drive the **original** through a sequence and compare its whole screen with
# the port's.
#
#   sh tools/reccheck.sh -c 1 -r 150 130 -p 245 170 -t 580 -t 390 \
#                        -p 200 300 -p 300 380 -p 350 200 -p 550 360
#
# **The arguments are tests/drawing.exe's**, the same list tools/recsave.sh
# takes: the port runs them as they are and this turns them into an emulator
# script, so the two sides cannot drift apart.  recsave compares the records,
# this compares the 307,200 pixels.
#
#   -c N      pick menu item N from the left panel
#   -p x y    press there with the left button
#   -r x y    ... with the right button
#   -t x      press the top line at (x, 8)
#   -k TEXT   type it, then [Enter]
#   -K TEXT   ... without the [Enter]
#   -x        [ESC]
#
# The pointer is left where the last press in the drawing was, which is where
# the original leaves it; -m overrides that on the port's side alone and is
# ignored here.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/rk
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
LABEL="${LABEL:-画面}"

press() {
    printf 'mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 26000000\n' \
        "$1" "$2" "$3" "$3"
}

# Where the pointer ends up: the last press inside the drawing area.
last_x=200; last_y=200
for a in "$@"; do :; done
set -- "$@"
i=1
while [ $i -le $# ]; do
    eval "v=\${$i}"
    case "$v" in
    -p|-r)
        j=$((i + 1)); eval "x=\${$j}"
        j=$((i + 2)); eval "y=\${$j}"
        if [ "$y" -gt 16 ]; then last_x=$x; last_y=$y; fi
        i=$((i + 3)) ;;
    *)  i=$((i + 1)) ;;
    esac
done

# A subshell, so the shifts do not eat "$@" -- the port needs the same list.
(
    printf 'wait %s\n' "$BOOT"
    while [ $# -gt 0 ]; do
        case "$1" in
        -c) mx=90; my=$((64 + 16 * ($2 - 1) + 8))
            [ "$2" -le 15 ] || { mx=30; my=$((64 + 16 * ($2 - 16) + 8)); }
            printf 'mouse %d %d\nwait 2000000\nclick left\nwait 40000000\n' \
                "$mx" "$my"
            shift 2 ;;
        -p) press "$2" "$3" left; shift 3 ;;
        -r) press "$2" "$3" right; shift 3 ;;
        -t) press "$2" 8 left; shift 2 ;;
        -k|-K)
            echo "$2" | sed 's/./type &\nwait 8000000\n/g'
            [ "$1" = "-K" ] || printf 'key enter\nwait 30000000\n'
            shift 2 ;;
        -x) printf 'key esc\nwait 26000000\n'; shift ;;
        -m|-S|-A) shift 3 ;;
        -Z) shift 5 ;;
        -u) shift ;;
        -w) shift 2 ;;
        *)  shift ;;
        esac
    done
    printf 'mouse %s %s\nwait 14000000\n' "$last_x" "$last_y"
    printf 'shot ../jwcad_dos_wasm/tmp/rk/orig.raw\n'
) > tmp/rk/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/rk/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1

./tests/drawing.exe -u "$@" -m "$last_x" "$last_y" \
    "orig/$DRAWING.JWC" tmp/rk/port.raw > /dev/null

printf '%s %s  ' "$LABEL" "$DRAWING"
python tools/fulldiff.py tmp/rk/orig.raw tmp/rk/port.raw
