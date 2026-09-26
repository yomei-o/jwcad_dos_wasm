#!/bin/sh
# Have the **port** save a drawing and the **original** open what it wrote.
#
#   sh tools/savecheck.sh                          # SAMPLE0, saved untouched
#   sh tools/savecheck.sh -c 3 -p 200 100 -p 500 400   # ... after ／ draws a line
#   DRAWING=SAMPLE6 sh tools/savecheck.sh -c 5 -p 499 192 -k 300 -p 520 230
#
# The arguments are tests/drawing.exe's, so any command the port can run can be
# run before the save.  What comes out goes into a copy of orig/, the original
# is started on it, and its 640x480 is compared with the port's own picture of
# the same file.  Nothing is masked.
#
# This is the check that matters for saving: a file is right when the program
# that wrote the format reads it back and draws the same screen.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/sc
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-60000000}"

rm -rf tmp/wroot
cp -r orig tmp/wroot

./tests/drawing.exe -u "$@" -w "tmp/wroot/$DRAWING.JWC" \
    "orig/$DRAWING.JWC" tmp/sc/before.raw > /dev/null

printf 'wait %s\nshot ../jwcad_dos_wasm/tmp/sc/orig.raw\n' "$BOOT" > tmp/sc/script.txt
"$EMU" --root tmp/wroot --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/sc/script.txt tmp/wroot/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1

# The port's own picture of the file it wrote, with nothing picked and the
# pointer where the original leaves it when nothing has been pressed.
./tests/drawing.exe -u "tmp/wroot/$DRAWING.JWC" tmp/sc/port.raw > /dev/null

printf '%s saved by the port, opened by the original  ' "$DRAWING"
python tools/fulldiff.py tmp/sc/orig.raw tmp/sc/port.raw
