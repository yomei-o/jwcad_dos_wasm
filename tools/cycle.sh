#!/bin/sh
# Press one cell of the top row again and again, and watch what it goes round.
#
#     sh tools/cycle.sh 30 136 84 left 4
#
# Picks the menu item at (x,y), then presses (bx,8) with <button> <n> times,
# taking a shot after each.  The words go to tmp/cycle/str.txt with a marker
# before each press, so a setting that walks round a ring -- 面取's
# 【角面】【丸面】【Ｌ面】, 連線's 45度毎/90度毎/free -- can be read off rather
# than guessed at.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/cycle
EMU=../dosv_emu_cpp/dosemu.exe
[ $# -ge 5 ] || { echo "usage: sh tools/cycle.sh <x> <y> <bx> <left|right> <n>" >&2; exit 2; }

X="$1"; Y="$2"; BX="$3"; BTN="$4"; N="$5"
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-22000000}"
DRAWING="${DRAWING:-SAMPLE0}"

rm -rf tmp/cycle/root
cp -rp orig tmp/cycle/root
rm -f tmp/cycle/root/AUTO.JWC tmp/cycle/root/QPICK.JWC

{
    printf 'wait %s\n' "$BOOT"
    printf 'mouse %s %s\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
        "$X" "$Y" "$WAIT"
    printf 'shot ../jwcad_dos_wasm/tmp/cycle/p0.raw\n'
    i=1
    while [ "$i" -le "$N" ]; do
        printf 'mouse %s 8\nwait 2000000\ndown %s\nwait 2000000\nup %s\nwait %s\n' \
            "$BX" "$BTN" "$BTN" "$WAIT"
        printf 'shot ../jwcad_dos_wasm/tmp/cycle/p%s.raw\n' "$i"
        i=$((i + 1))
    done
} > tmp/cycle/ss.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" \
DOSEMU_BP='+0DEF:23C5' DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
    "$EMU" --root tmp/cycle/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/cycle/ss.txt \
    tmp/cycle/root/JW_CADV.EXE "$DRAWING.JWC" \
    > tmp/cycle/raw.txt 2> tmp/cycle/err.txt || true

python - <<'PY'
import io
import re
import sys

sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='latin-1', newline='')
for line in open('tmp/cycle/raw.txt', encoding='latin-1'):
    m = re.search(r'\[shot\] .*?/p(\d+)\.raw', line)
    if m:
        print('== after press %s' % m.group(1))
        continue
    if '[bp]' not in line or line.count('"') < 2:
        continue
    f = line.split()
    if len(f) < 15:
        continue
    try:
        col, row = int(f[8], 16), int(f[9], 16)
    except ValueError:
        continue
    print('  col=%-3d row=%-3d %s' % (col, row, line[line.index('"'):].rstrip('\n')))
PY
