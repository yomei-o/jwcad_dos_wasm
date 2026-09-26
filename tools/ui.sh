#!/bin/sh
# The screen around the drawing, against the original's own.
#
#   sh tools/ui.sh
#
# Takes a picture of JW_CAD with no drawing loaded -- the title bar, the menu,
# the layer buttons, the strip along the bottom and the mouse pointer where it
# starts -- and compares the whole 640x480 with what src/ui.c draws.  It has to
# be all of it: the point of this check is the frame, not the drawing.
#
# Nothing in src/ui.c was invented.  Every call the original makes for this
# screen was read out of it while it ran:
#
#   DOSEMU_BP=+10A9:07DC                   the line routine, 20a9:07dc
#   DOSEMU_BP=+0DEF:23C5 DOSEMU_BPSTR=2    the string routine, 1def:23c5
#   DOSEMU_BP=+0DEF:1691                   the glyph-by-pixel routine
#   DOSEMU_BP=+10A9:0AC5                   the ellipse, for the layer buttons
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }

printf 'wait 60000000\nshot ../jwcad_dos_wasm/tmp/ui_orig.raw\n' > tmp/ui.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/ui.txt orig/JW_CADV.EXE > /dev/null 2>&1
./tests/ui.exe tmp/ui_port.raw tmp/ui_orig.raw
