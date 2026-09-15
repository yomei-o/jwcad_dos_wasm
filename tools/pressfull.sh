#!/bin/sh
# The whole screen after a drawing command, against the original's.
#
#   sh tools/pressfull.sh 3 300 200 400 200
#
# tools/presscheck.sh compares the drawing alone; this compares all 307,200
# pixels, so it takes in what the command wrote along the top and in the band.
set -e
cd "$(dirname "$0")/.."
n=$1; shift
DRAWING="${DRAWING:-SAMPLE0}"
args=""
last_x=200; last_y=200
while [ $# -ge 2 ]; do
    args="$args -p $1 $2"
    last_x=$1; last_y=$2
    shift 2
done
sh tools/press.sh "$n" $(echo "$args" | sed 's/-p //g') > /dev/null
./tests/drawing.exe -c "$n" $args -m "$last_x" "$last_y" \
    "orig/$DRAWING.JWC" tmp/press/port.raw > /dev/null
printf 'command %s  ' "$n"
python tools/fulldiff.py tmp/press/after.raw tmp/press/port.raw
