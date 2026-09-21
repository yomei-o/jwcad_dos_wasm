#!/bin/sh
# The lines the original draws for ｵﾌﾟｼｮﾝ → ①建具平面's sixteen shapes.
#
#     sh tools/tateguroad.sh
#
# The shapes come out of JW_OPT1.DAT, whose format is written out in the file
# itself from line 240: a count, then `999`, then for each 建具 a block count
# and a name, then one line per member as `block1 block2 x1 y1 x2 y2` with an
# optional colour, line type and layer.  How those turn into pixels -- where
# each cell sits, what the preview is scaled by -- is what this measures.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/tg
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }

BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-60000000}"

rm -rf tmp/tg/root
cp -rp orig tmp/tg/root
rm -f tmp/tg/root/AUTO.JWC tmp/tg/root/QPICK.JWC tmp/tg/root/QBYTES.JWC \
      tmp/tg/root/ONE2.JWC

{
    printf 'wait %s\n' "$BOOT"
    printf 'mouse 30 280\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' "$WAIT"
    printf 'mouse 100 8\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' "$WAIT"
    printf 'wait %s\nshot ../jwcad_dos_wasm/tmp/tg/list.raw\n' "${TAIL:-120000000}"
} > tmp/tg/s.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" \
DOSEMU_BP=+10a9:07dc DOSEMU_BPN=400000 \
    "$EMU" --root tmp/tg/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/tg/s.txt \
    tmp/tg/root/JW_CADV.EXE SAMPLE0.JWC 2>/dev/null > tmp/tg/lines.txt || true

echo "--- the lines in the first cell (x 128..380, y 16..63) ---"
awk '{x0=strtonum("0x"$8); y0=strtonum("0x"$9);
      x1=strtonum("0x"$10); y1=strtonum("0x"$11);
      if (x0 >= 122 && x0 <= 380 && y0 >= 16 && y0 <= 63 && y1 >= 16 && y1 <= 63)
          printf "  (%d,%d)-(%d,%d) col=%d type=%s\n", x0, y0, x1, y1,
                 strtonum("0x"$12), $14}' tmp/tg/lines.txt | tail -30
echo "--- how many line calls in each cell row ---"
awk '{y0=strtonum("0x"$9); x0=strtonum("0x"$8);
      if (x0 >= 122 && y0 >= 16 && y0 < 464) print int(y0/48)}' tmp/tg/lines.txt \
    | sort -n | uniq -c
