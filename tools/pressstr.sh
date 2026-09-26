#!/bin/sh
# What the original writes along the top after one press on the chrome.
#
#     sh tools/pressstr.sh 18 328 left       # 紙
#     sh tools/pressstr.sh 16 360 right      # レイヤ0, right button
#
# The chrome's own targets -- the pen, the paper, the group, the layers --
# answer a press by writing a line, and that line is the first thing the port
# has to reproduce.  This is tools/probe.sh for a press that picks no menu
# item, so there is no command to name.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/ps
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
x=$1; y=$2; button="${3:-left}"

printf 'wait %s\nmouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 26000000\nshot ../jwcad_dos_wasm/tmp/ps/after.raw\n' \
    "$BOOT" "$x" "$y" "$button" "$button" > tmp/ps/s.txt

DOSEMU_BP='+0DEF:23C5' DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
    "$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
    --script tmp/ps/s.txt orig/JW_CADV.EXE "$DRAWING.JWC"     > tmp/ps/str.txt 2> tmp/ps/err.txt
# stderr goes to its own file: the emulator's own notes ("dosemu: wrote ...")
# land in the middle of a [bp] line otherwise and the string is lost.

echo "=== ($x,$y) $button -- what it wrote after the press"
DUMP=tmp/ps/str.txt FROM="$BOOT" python tools/dumpstr.py
