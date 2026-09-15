#!/bin/sh
# Taking a line away with 線消, against the original.
#
#   sh tools/delcheck.sh 380 140        # SAMPLE0's top edge
#
# The right button is the one that takes the whole line; the left starts cutting
# a piece out of it, which is not done yet.
set -e
cd "$(dirname "$0")/.."
DRAWING="${DRAWING:-SAMPLE0}"
x=$1; y=$2
sh tools/press.sh 10 r "$x" "$y" > /dev/null
./tests/drawing.exe -c 10 -r "$x" "$y" -m "$x" "$y" \
    "orig/$DRAWING.JWC" tmp/press/port.raw > /dev/null
printf '線消 at (%s,%s)  ' "$x" "$y"
python tools/fulldiff.py tmp/press/after.raw tmp/press/port.raw
