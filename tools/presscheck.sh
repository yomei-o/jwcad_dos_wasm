#!/bin/sh
# What a drawing command does, against what the original does.
#
#   sh tools/presscheck.sh 3 300 200 400 300     # ／ -- a line
#   sh tools/presscheck.sh 11 300 200 400 200    # ○ -- a circle
#
# Drives the original with tools/press.sh, does the same with src/cmd.c, and
# counts the pixels that differ inside the drawing area.
#
# The frame is left out, and so are the two rows under it (y 16..47): a command
# writes its own line there -- the length it read, what it wants next -- and
# none of that is done yet, so it would drown the answer.
set -e
cd "$(dirname "$0")/.."
n=$1; shift
DRAWING="${DRAWING:-SAMPLE0}"
args=""
last_x=200; last_y=200
for v in "$@"; do :; done
set -- "$@"
while [ $# -ge 2 ]; do
    args="$args -p $1 $2"
    last_x=$1; last_y=$2
    shift 2
done
sh tools/press.sh "$n" $(echo "$args" | sed 's/-p //g') > /dev/null
./tests/drawing.exe -c "$n" $args -m "$last_x" "$last_y" \
    "orig/$DRAWING.JWC" tmp/press/port.raw > /dev/null
python - "$n" <<'PY'
import sys
W = 640
a = open('tmp/press/after.raw', 'rb').read()
b = open('tmp/press/port.raw', 'rb').read()
n = sum(1 for y in range(48, 463) for x in range(122, 639)
        if a[((y * W) + x) * 4:((y * W) + x) * 4 + 3]
        != b[((y * W) + x) * 4:((y * W) + x) * 4 + 3])
print('command %s: %d pixels differ in the drawing area' % (sys.argv[1], n))
PY
