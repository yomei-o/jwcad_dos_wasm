#!/bin/sh
# The line the original draws, against the one the port draws.
#
#   sh tools/linecheck.sh                 # (300,200) to (400,300) on SAMPLE0
#   sh tools/linecheck.sh 200 100 500 400
#
# Runs tools/line.sh to make the original's picture, draws the same two presses
# with src/cmd.c, and counts the pixels that differ inside the drawing area.
# The frame is left out of this one, and so are the two rows under it (y 16..47):
# a command writes its own line there -- the coordinates it read, and what it
# wants next -- and none of that is done yet, so it would drown the answer.
set -e
cd "$(dirname "$0")/.."
X0=${1:-300}; Y0=${2:-200}; X1=${3:-400}; Y1=${4:-300}
DRAWING="${DRAWING:-SAMPLE0}"
sh tools/line.sh "$X0" "$Y0" "$X1" "$Y1" > /dev/null
./tests/drawing.exe -c 3 -p "$X0" "$Y0" -p "$X1" "$Y1" -m "$X1" "$Y1" \
    "orig/$DRAWING.JWC" tmp/line/port.raw > /dev/null
python - "$X0" "$Y0" "$X1" "$Y1" <<'PY'
import sys
W = 640
a = open('tmp/line/after.raw', 'rb').read()
b = open('tmp/line/port.raw', 'rb').read()
n = sum(1 for y in range(48, 463) for x in range(122, 639)
        if a[((y * W) + x) * 4:((y * W) + x) * 4 + 3]
        != b[((y * W) + x) * 4:((y * W) + x) * 4 + 3])
print('%s: %d pixels differ in the drawing area' % (' '.join(sys.argv[1:5]), n))
PY
