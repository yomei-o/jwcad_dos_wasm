#!/bin/sh
# The lines the original draws for the two sliders beside the file list.
#
#     sh tools/sliderlines.sh              # the fourteen that ship
#     EXTRA=20 sh tools/sliderlines.sh     # with twenty more files
#
# DOSEMU_WATCH says the slider's pixels come from 12B5:094B, which is the
# line routine (20a9:07dc, RESUME 「線」) -- so the slider is ordinary lines
# and its geometry can be read off the calls rather than fitted through
# measured pixel runs.  This prints the ones inside the sliders' columns.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/sl
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }

BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-40000000}"
EXTRA="${EXTRA:-0}"

rm -rf tmp/sl/root
# -p keeps the dates: the guest shows them, and the distribution carries
# them (tools/restamp.py).
cp -rp orig tmp/sl/root
rm -f tmp/sl/root/AUTO.JWC tmp/sl/root/QPICK.JWC tmp/sl/root/QBYTES.JWC \
      tmp/sl/root/ONE2.JWC
i=0
while [ "$i" -lt "$EXTRA" ]; do
    cp orig/SAMPLE0.JWC "$(printf 'tmp/sl/root/Z%03d.JWC' "$i")"
    i=$((i + 1))
done
n=$(ls tmp/sl/root/*.JWC | wc -l | tr -d ' ')
echo "files on the disk: $n, and the guest adds AUTO.JWC -> $((n + 1))"

{
    printf 'wait %s\n' "$BOOT"
    for step in "30 296" "110 8" "180 8"; do
        set -- $step
        printf 'mouse %s %s\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
            "$1" "$2" "$WAIT"
    done
    printf 'wait 80000000\n'
} > tmp/sl/s.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" \
DOSEMU_BP=+10a9:07dc DOSEMU_BPN=400000 \
    "$EMU" --root tmp/sl/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/sl/s.txt \
    tmp/sl/root/JW_CADV.EXE SAMPLE0.JWC 2>/dev/null > tmp/sl/lines.txt || true

echo "--- the calls that touch the sliders (x 231..247 or 623..639) ---"
awk '{x0=strtonum("0x"$8); y0=strtonum("0x"$9);
      x1=strtonum("0x"$10); y1=strtonum("0x"$11);
      if ((x0 >= 231 && x0 <= 247) || (x0 >= 623 && x0 <= 639))
          printf "  t=%-11s (%d,%d)-(%d,%d) col=%d rop=%d style=%s\n",
                 $4, x0, y0, x1, y1, strtonum("0x"$12), strtonum("0x"$13), $14}' \
    tmp/sl/lines.txt | tail -60
