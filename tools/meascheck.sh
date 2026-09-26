#!/bin/sh
# 測定（15 番の ①距離）—— 点を押していくと帯に距離と累計が出るところを、
# 本物と移植で比べます。図面は変わりません。
#
#   sh tools/meascheck.sh 250 200 450 300
#   sh tools/meascheck.sh 250 200 450 300 500 200
#   DRAWING=SAMPLE6 BOOT=150000000 sh tools/meascheck.sh 250 200 450 300
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/meas
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"

# One pass over the points: the script for the original is appended to a file
# and the arguments for the port are built beside it, because a `while` over
# "$@" inside a redirect would leave nothing for a second pass.
printf 'wait %s\nmouse 90 296\nwait 2000000\nclick left\nwait 40000000\n' \
    "${BOOT:-40000000}" > tmp/meas/script.txt
args=""
lx=300
ly=300
while [ $# -ge 2 ]; do
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 20000000\n' \
        "$1" "$2" >> tmp/meas/script.txt
    args="$args -p $1 $2"
    lx=$1
    ly=$2
    shift 2
done
printf 'mouse %s %s\nwait 14000000\nshot ../jwcad_dos_wasm/tmp/meas/orig.raw\n' \
    "$lx" "$ly" >> tmp/meas/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/meas/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe -u -c 15 $args -m "$lx" "$ly" \
    "orig/$DRAWING.JWC" tmp/meas/port.raw > /dev/null
printf '測定 %s%s  ' "$DRAWING" "$args"
python tools/fulldiff.py tmp/meas/orig.raw tmp/meas/port.raw
