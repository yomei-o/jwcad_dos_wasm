#!/bin/sh
# The original's way through 入出力 → ①ﾌｧｲﾙ → ①保存, one press at a time.
#
#     sh tools/saveroad.sh              # every step, with the lines it writes
#     STEPS=4 sh tools/saveroad.sh      # stop after four presses
#
# Each step leaves tmp/save/stepN.raw, and the string routine is logged, so
# the screens can be read back afterwards.  It runs in a copy of orig/,
# because this road ends with the guest writing a .JWC.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/save
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }

DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-40000000}"
STEPS="${STEPS:-99}"

rm -rf tmp/save/root
cp -r orig tmp/save/root
# Only the distribution.  orig/ is also where the drawings written while
# analysing land, and one of those in the list puts every row below it out
# of step with the port, which has only the fourteen.
rm -f tmp/save/root/AUTO.JWC tmp/save/root/QPICK.JWC tmp/save/root/QBYTES.JWC tmp/save/root/ONE2.JWC

# The way through, read off the original's own lines.  `key NAME` for a key.
#   30 296  入出力          110 8  ①ﾌｧｲﾙ         100 8  ①保存
#   180 8   ①選択確定       key enter x8         280 8  ①上書きする
#   210 8   ①実行
: > tmp/save/steps.txt
cat >> tmp/save/steps.txt <<STEPS
30 296
110 8
100 8
180 8
key enter
key enter
key enter
key enter
key enter
key enter
key enter
key enter
280 8
210 8
STEPS

{
    printf 'wait %s\n' "$BOOT"
    n=0
    while read -r a b; do
        n=$((n + 1))
        [ "$n" -le "$STEPS" ] || break
        if [ "$a" = key ]; then
            printf 'key %s\nwait %s\n' "$b" "$WAIT"
        else
            printf 'mouse %s %s\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
                "$a" "$b" "$WAIT"
        fi
        printf 'shot ../jwcad_dos_wasm/tmp/save/step%s.raw\n' "$n"
    done < tmp/save/steps.txt
    printf 'wait %s\nshot ../jwcad_dos_wasm/tmp/save/done.raw\n' "${TAIL:-200000000}"
} > tmp/save/s.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" \
DOSEMU_BP='+0DEF:23C5' DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
    "$EMU" --root tmp/save/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/save/s.txt \
    tmp/save/root/JW_CADV.EXE "$DRAWING.JWC" > tmp/save/str.txt 2>&1 || true

echo "--- the top line after each press ---"
for f in tmp/save/step*.raw tmp/save/done.raw; do
    [ -f "$f" ] || continue
    printf '%-24s ' "$(basename "$f" .raw)"
    python tools/readrow.py "$f" 1 2>/dev/null | head -1
done
echo "--- what is in tmp/save/root that was not in orig ---"
for f in tmp/save/root/*; do
    [ -f "orig/$(basename "$f")" ] || echo "  new: $(basename "$f")  $(wc -c < "$f") bytes"
done
