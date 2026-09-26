#!/bin/sh
# Which instruction draws the slider beside the file list?
#
#     sh tools/sliderwho.sh
#
# The two sliders are the last thing on that screen the port does not draw,
# and their length per file came out at 4.81, 4.82 and 4.86 pixels in three
# measurements -- close to a constant and not equal to one.  Rather than fit
# a line through three points and call it the rule, this asks the original
# which routine puts the pixels there, the way every other piece of this
# screen was found (RESUME, 「当てはめを探さない。本物の呼び出しを読む」).
#
# The thumb is at x 233..245, y 135..206.  In mode 12h the byte holding
# (239,150) is A0000 + 150*80 + 239/8 = A2EFD.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/sw
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }

WATCH="${WATCH:-A2EFD-A2EFD}"
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-40000000}"

rm -rf tmp/sw/root
# -p keeps the dates: the guest shows them, and the distribution carries
# them (tools/restamp.py).
cp -rp orig tmp/sw/root
rm -f tmp/sw/root/AUTO.JWC tmp/sw/root/QPICK.JWC tmp/sw/root/QBYTES.JWC \
      tmp/sw/root/ONE2.JWC

{
    printf 'wait %s\n' "$BOOT"
    for step in "30 296" "110 8" "180 8"; do
        set -- $step
        printf 'mouse %s %s\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
            "$1" "$2" "$WAIT"
    done
    printf 'wait 60000000\nshot ../jwcad_dos_wasm/tmp/sw/list.raw\n'
} > tmp/sw/s.txt

# The hits go to **standard output**, not stderr (RESUME 1549).
DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" DOSEMU_WATCH="$WATCH" \
    "$EMU" --root tmp/sw/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/sw/s.txt \
    tmp/sw/root/JW_CADV.EXE SAMPLE0.JWC 2> /dev/null > tmp/sw/hits.txt || true

echo "--- who wrote $WATCH ---"
grep -i "watch\|wrote" tmp/sw/hits.txt | head -20
