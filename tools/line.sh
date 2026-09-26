#!/bin/sh
# Draw a line in the original, with the emulator's mouse.
#
#   sh tools/line.sh                     # (300,200) to (400,300) on SAMPLE0
#   sh tools/line.sh 200 100 500 400
#
# Picks ／ out of the menu (command 3, right column, third row) and presses the
# two points.  Leaves tmp/line/before.raw and tmp/line/after.raw.
#
# tools/press.sh does the same for any command; this one stays because it is the
# smallest thing that shows the original drawing something.
#
# **The press has to be held.** `click left` works on the menu but not in the
# drawing area: JW_CAD reads the button state when it gets round to it, and a
# press that is over before then is never seen.  So `down left`, wait, `up left`.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/line
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
X0=${1:-300}; Y0=${2:-200}; X1=${3:-400}; Y1=${4:-300}
DRAWING="${DRAWING:-SAMPLE0}"

{
    echo "wait 40000000"
    echo "mouse 90 104"            # ／ -- command 3
    echo "wait 2000000"
    echo "click left"
    echo "wait 24000000"
    echo "shot ../jwcad_dos_wasm/tmp/line/before.raw"
    echo "mouse $X0 $Y0"
    echo "wait 3000000"
    echo "down left"
    echo "wait 3000000"
    echo "up left"
    echo "wait 12000000"
    echo "mouse $X1 $Y1"
    echo "wait 3000000"
    echo "down left"
    echo "wait 3000000"
    echo "up left"
    echo "wait 16000000"
    echo "shot ../jwcad_dos_wasm/tmp/line/after.raw"
} > tmp/line/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/line/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
python - "$X0" "$Y0" "$X1" "$Y1" <<'PY'
import sys
W = 640
x0, y0, x1, y1 = (int(v) for v in sys.argv[1:5])
a = open('tmp/line/before.raw', 'rb').read()
b = open('tmp/line/after.raw', 'rb').read()
pts = [(x, y) for y in range(60, 463) for x in range(122, 639)
       if a[((y * W) + x) * 4:((y * W) + x) * 4 + 3] != b[((y * W) + x) * 4:((y * W) + x) * 4 + 3]]
dx, dy = x1 - x0, y1 - y0
on = [p for p in pts if abs((p[1] - y0) * dx - (p[0] - x0) * dy) <= max(abs(dx), abs(dy))]
print('%d pixels changed in the drawing area, %d of them on the line '
      '(%d,%d)-(%d,%d)' % (len(pts), len(on), x0, y0, x1, y1))
PY
