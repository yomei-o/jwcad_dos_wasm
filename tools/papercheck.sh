#!/bin/sh
# 紙 (and the scale beside it): press, type a number, [Enter], and compare
# the **whole screen** with the original's.
#
#     sh tools/papercheck.sh            # 紙 = 2 on SAMPLE0
#     WHAT=scale N=2 sh tools/papercheck.sh
#
# tools/clickcheck.sh only checks the screen the press puts up -- the
# question along the top -- and that already matches.  What the number
# *does* is a different picture, and this is the one that catches it.
set -e
cd "$(dirname "$0")/.."
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
NODE="${NODE:-}"
if [ -z "$NODE" ]; then
    command -v node > /dev/null 2>&1 && NODE=node
fi
[ -n "$NODE" ] || NODE=$(ls /c/prog/emsdk/emsdk/node/*/bin/node.exe 2>/dev/null | head -1)
[ -n "$NODE" ] || { echo "no node (set NODE)" >&2; exit 2; }

DRAWING="${DRAWING:-SAMPLE0}"
WHAT="${WHAT:-paper}"
N="${N:-2}"
BOOT="${BOOT:-40000000}"
if [ "$WHAT" = scale ]; then X=70; else X=18; fi
Y=328
mkdir -p tmp/pap
rm -f tmp/pap/*.raw

{
    printf 'wait %s\n' "$BOOT"
    printf 'mouse %s %s\nwait 3000000\ndown L\nwait 3000000\nup L\nwait 20000000\n' "$X" "$Y"
    printf 'type %s\nwait 6000000\nkey enter\nwait 30000000\n' "$N"
    printf 'mouse %s %s\nwait 6000000\n' "$X" "$Y"
    printf 'shot ../jwcad_dos_wasm/tmp/pap/orig.raw\n'
} > tmp/pap/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/pap/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       > /dev/null 2>&1

"$NODE" tools/askshot.mjs "orig/$DRAWING.JWC" "$X" "$Y" "$N" tmp/pap/port.raw
got=$(python tools/fulldiff.py tmp/pap/orig.raw tmp/pap/port.raw | sed 's/ different.*//')
echo "$DRAWING $WHAT=$N: $got different"
python tools/inkbox.py tmp/pap/orig.raw tmp/pap/port.raw 2>/dev/null || true
[ "$got" = 0 ]
