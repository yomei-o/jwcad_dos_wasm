#!/bin/sh
# Ask the original what it draws for one entity of one drawing.
#
#   sh tools/askone.sh TEST2 texts 18            # -> tmp/ask/lr.txt, tmp/ask/pt.txt
#
# Leaves two logs behind: every call to the line routine (0EFF:17BB) with its
# four float coordinates, and every call to the pixel routine (11B9:075C) with
# its x, y and colour.  An upright string comes out in the first and a turned
# one in the second; a line, an arc and a point are all in the first.
set -e
cd "$(dirname "$0")/.."
name="$1"; kind="$2"; which="$3"
[ -n "$which" ] || { echo "usage: sh tools/askone.sh TEST2 texts 18" >&2; exit 2; }
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first" >&2; exit 2; }
mkdir -p tmp/ask
python tools/onerec.py "orig/$name.JWC" "$kind" "$which" orig/ONE.JWC
printf 'wait 60000000\nshot ../jwcad_dos_wasm/tmp/ask/e.raw\n' > tmp/ask/script.txt

DOSEMU_BP=+0DEF:17BB DOSEMU_BPPTR=2,3,4,5 DOSEMU_BPN=3 \
    "$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
           --script tmp/ask/script.txt orig/JW_CADV.EXE ONE.JWC 2>/dev/null \
    | grep '\[bp\]' > tmp/ask/lr.txt || true
DOSEMU_BP=+10A9:075C DOSEMU_BPN=8 \
    "$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
           --script tmp/ask/script.txt orig/JW_CADV.EXE ONE.JWC 2>/dev/null \
    | grep '\[bp\]' > tmp/ask/pt.txt || true
rm -f orig/ONE.JWC
echo "tmp/ask/lr.txt  $(wc -l < tmp/ask/lr.txt) line calls"
echo "tmp/ask/pt.txt  $(wc -l < tmp/ask/pt.txt) pixel calls"
echo "tmp/ask/e.raw   the original's screen"
