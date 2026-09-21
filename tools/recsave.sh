#!/bin/sh
# Drive the **original** through a sequence, have it save, and compare the
# records it wrote with the port's.
#
#   sh tools/recsave.sh -c 1 -r 150 130 -p 245 170 -t 580 -t 520 \
#                       -p 200 300 -k 30 -p 400 300
#   DRAWING=TEST1 BOOT=60000000 sh tools/recsave.sh -c 1 -r 235 218 ...
#
# **The arguments are tests/drawing.exe's**, and both sides get the same list:
# the port runs them as they are, and this turns them into an emulator script.
# One list, two programs, so there is no second place to get the sequence
# wrong -- which is the whole reason this exists rather than a script per
# command (tools/mirrorsave.sh and tools/rotatesave.sh came first and each
# spells its own sequence out).
#
#   -c N      pick menu item N from the left panel
#   -p x y    press there with the left button
#   -r x y    ... with the right button
#   -t x      press the top line at (x, 8)
#   -k TEXT   type it, then [Enter]
#   -K TEXT   ... without the [Enter]
#   -x        [ESC]
#
# Anything else is passed to the port untouched and ignored here, so a flag
# that only means something to the port (-u, -w, -m) can be left in.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/rec
DRAWING="${DRAWING:-SAMPLE0}"
LABEL="${LABEL:-記録}"

press() {
    printf 'mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 26000000\n' \
        "$1" "$2" "$3" "$3"
}

# The port gets the list as it stands; the emulator gets it turned into
# steps.  A subshell, so that the shifts below do not eat "$@" -- the
# same list has to survive for the port's own run further down.
(
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
            # One character per line: the emulator's `type` takes the whole
            # rest of the line, so a space in it would end the field.
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
) > tmp/rec/pre.txt

PRE=tmp/rec/pre.txt OUT=tmp/rec/orig.raw DRAWING="$DRAWING" \
    BOOT="${BOOT:-40000000}" sh tools/save.sh > /dev/null

./tests/drawing.exe -u "$@" -w tmp/rec/port.JWC \
    "orig/$DRAWING.JWC" tmp/rec/port.raw > /dev/null

python tools/whatsnew.py "orig/$DRAWING.JWC" "tmp/sroot/$DRAWING.JWC" \
    > tmp/rec/orig.txt
python tools/whatsnew.py "orig/$DRAWING.JWC" tmp/rec/port.JWC > tmp/rec/port.txt
printf '%s %s  ' "$LABEL" "$DRAWING"
if diff -q tmp/rec/orig.txt tmp/rec/port.txt > /dev/null; then
    echo "same ($(wc -l < tmp/rec/orig.txt | tr -d ' ') records)"
else
    echo "DIFFERENT"
    diff tmp/rec/orig.txt tmp/rec/port.txt || true
fi
