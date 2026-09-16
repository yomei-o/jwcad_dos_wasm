#!/bin/sh
# Does the port pick the same entity as the original?
#
#   sh tools/pickcheck.sh                           # the question drawing
#   DRAWING=SAMPLE0 sh tools/pickcheck.sh 197 157 200 140 324 250
#
# The original's entity search answers the entity counting from one, and
# tools/pickat.sh reads that number out of the running program; tests/pick.exe
# prints the same number for the port.  This puts the two side by side.
#
# With no points it builds orig/QPICK.JWC (tools/mkpick.py) and asks the
# questions that drawing was laid out for: which of two at the same distance,
# how far the search reaches, and whether the trailing bytes matter.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/pick

if [ $# -eq 0 ]; then
    python tools/mkpick.py orig/QPICK.JWC > /dev/null
    DRAWING=QPICK
    AX=500; AY=60; BX=560; BY=80
    export AX AY BX BY
    set -- 300 100 300 104 300 105 300 106 300 113 275 250 300 301 275 400 \
           300 351 300 356 300 357 300 360 500 200
fi
DRAWING="${DRAWING:-SAMPLE0}"
export DRAWING

sh tools/pickat.sh "$@" > tmp/pick/orig.txt
./tests/pick.exe "orig/$DRAWING.JWC" "$@" > tmp/pick/port.txt
python tools/pickcheck.py tmp/pick/orig.txt tmp/pick/port.txt
