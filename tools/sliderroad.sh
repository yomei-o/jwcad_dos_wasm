#!/bin/sh
# What the two sliders beside the file list mean.
#
#     sh tools/sliderroad.sh            # the fourteen that ship
#     EXTRA=20 sh tools/sliderroad.sh   # with twenty more files on the disk
#
# 入出力 → ①ﾌｧｲﾙ → ②読込 draws a slider at x 231..247 and another at
# x 623..639, each with a triangle top and bottom and a coloured thumb.  What
# the thumb's length and place mean is not something to guess at, so this
# puts different numbers of files on the disk and measures it.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/sb
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }

DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-40000000}"
EXTRA="${EXTRA:-0}"

rm -rf tmp/sb/root
# -p keeps the dates: the guest shows them, and the distribution carries
# them (tools/restamp.py).
cp -rp orig tmp/sb/root
# Only the distribution.  orig/ is also where the drawings written while
# analysing land, and one of those in the list puts every row below it out
# of step with the port, which has only the fourteen.
rm -f tmp/sb/root/AUTO.JWC tmp/sb/root/QPICK.JWC tmp/sb/root/QBYTES.JWC tmp/sb/root/ONE2.JWC
i=0
while [ "$i" -lt "$EXTRA" ]; do
    cp orig/SAMPLE0.JWC "$(printf 'tmp/sb/root/Z%03d.JWC' "$i")"
    i=$((i + 1))
done
echo "files on the disk: $(ls tmp/sb/root/*.JWC | wc -l | tr -d ' ') (plus the AUTO.JWC the guest makes)"

{
    printf 'wait %s\n' "$BOOT"
    for step in "30 296" "110 8" "180 8"; do
        set -- $step
        printf 'mouse %s %s\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
            "$1" "$2" "$WAIT"
    done
    printf 'wait %s\nshot ../jwcad_dos_wasm/tmp/sb/list.raw\n' "${TAIL:-100000000}"
} > tmp/sb/s.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" \
    "$EMU" --root tmp/sb/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/sb/s.txt \
    tmp/sb/root/JW_CADV.EXE "$DRAWING.JWC" > tmp/sb/run.txt 2>&1 || true

python tools/slider.py tmp/sb/list.raw
