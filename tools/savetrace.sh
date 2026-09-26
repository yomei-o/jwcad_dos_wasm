#!/bin/sh
# Run a script under the emulator and print every string the original wrote,
# decoded, with the instruction count, the column and the row.
set -e
cd "$(dirname "$0")/.."
EMU=tools/emu.sh
ROOT="${ROOT:-tmp/sroot}"
DRAWING="${DRAWING:-SAMPLE0}"
DOSEMU_BP=+0DEF:23C5 DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
"$EMU" --root "$ROOT" --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script "$1" "$ROOT/JW_CADV.EXE" "$DRAWING.JWC" 2>/dev/null \
  | grep -a '^\[bp\]' \
  | awk '{s=""; for(i=71;i<=NF;i++) s=s $i " ";
          printf "t=%-10s col=%-3d row=%-3d %s\n", $4, strtonum("0x" $9), strtonum("0x" $10), s}' \
  | iconv -f cp932 -t utf-8 -c
