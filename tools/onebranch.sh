#!/bin/sh
# One branch, on whatever drawing is asked for.
#
#     sh tools/onebranch.sh 30 296 110 left tmp/probe/a.raw
#     DRAWING=SAMPLE2 sh tools/onebranch.sh 30 232 160 left tmp/probe/b.raw
#
# Boots the original, picks the menu item at (x,y), presses the top row at
# (bx,8) with <button>, and saves the screen.  A second shot of the screen
# **before** the top-row press goes beside it as <out>.pre.raw, so what the
# press changed can be read off the pair.
#
# tools/branchorig.sh does the same for the whole list on SAMPLE0; this is for
# the questions that need another drawing -- a panel painted over an empty
# part of SAMPLE0 cannot be told from nothing being painted at all.
#
# The words go to <out>.txt.
set -e
cd "$(dirname "$0")/.."
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first" >&2; exit 2; }
[ $# -ge 5 ] || { echo "usage: sh tools/onebranch.sh <x> <y> <bx> <left|right> <out.raw>" >&2; exit 2; }

X="$1"; Y="$2"; BX="$3"; BTN="$4"; OUT="$5"
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-22000000}"
DRAWING="${DRAWING:-SAMPLE0}"
DIR="$(dirname "$OUT")"
mkdir -p "$DIR" tmp/probe

rm -rf tmp/probe/root
cp -rp orig tmp/probe/root
rm -f tmp/probe/root/AUTO.JWC tmp/probe/root/QPICK.JWC

{
    printf 'wait %s\n' "$BOOT"
    printf 'mouse %s %s\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
        "$X" "$Y" "$WAIT"
    printf 'shot ../jwcad_dos_wasm/%s.pre.raw\n' "$OUT"
    if [ "$BX" != "0" ]; then
        printf 'mouse %s 8\nwait 2000000\ndown %s\nwait 2000000\nup %s\nwait %s\n' \
            "$BX" "$BTN" "$BTN" "$WAIT"
    fi
    printf 'shot ../jwcad_dos_wasm/%s\n' "$OUT"
} > tmp/probe/ss.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" \
DOSEMU_BP='+0DEF:23C5' DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
    "$EMU" --root tmp/probe/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/probe/ss.txt \
    tmp/probe/root/JW_CADV.EXE "$DRAWING.JWC" \
    > "$OUT.txt" 2> tmp/probe/err.txt || true
echo "$OUT and $OUT.pre.raw"
