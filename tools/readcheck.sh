#!/bin/sh
# The port's 読取 against the original's, point by point.
#
#   sh tools/readcheck.sh 170 150 214 152
#   DRAWING=SAMPLE6 sh tools/readcheck.sh 470 305 468 183
#
# One run of the original per point: pressing the right button twice in a
# session is not reliable (see RESUME.md -- the original loses a read every so
# often, and which press it loses moves with the timing), while the first press
# of a fresh run always answers.
set -e
cd "$(dirname "$0")/.."
DRAWING="${DRAWING:-SAMPLE0}"
bad=0
while [ $# -ge 2 ]; do
    a=$(sh tools/read.sh "$1" "$2" | sed 's/  \[.*//; s/nothing read.*/nothing read/')
    b=$(./tests/readpt.exe "orig/$DRAWING.JWC" "$1" "$2")
    if [ "$(ORIG="$a" PORT="$b" python tools/readcheck.py)" = same ]; then
        echo "  $DRAWING $a"
    else
        echo "  $DRAWING DIFFERS"
        echo "    original: $a"
        echo "    port:     $b"
        bad=$((bad + 1))
    fi
    shift 2
done
[ "$bad" = 0 ] || exit 1
