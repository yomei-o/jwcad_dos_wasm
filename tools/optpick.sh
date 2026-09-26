#!/bin/sh
# What happens when one of ｵﾌﾟｼｮﾝ's fittings is picked.
#
#     sh tools/optpick.sh 1 250 40        # ①建具平面, then the cell at (250,40)
#     sh tools/optpick.sh 1 250 40 300 200 400 200
#
# Picks ｵﾌﾟｼｮﾝ, then the item on its top row, then the point given, and then
# any further points in pairs.  Shoots after each and logs every string, so
# the road from `the table of sixteen` to `a fitting in the drawing` can be
# read off a press at a time.
#
# Leaves tmp/optpick/s<n>.raw and tmp/optpick/str.txt.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/optpick
EMU=tools/emu.sh
[ $# -ge 3 ] || { echo "usage: sh tools/optpick.sh <item> <x> <y> [<x> <y> ...]" >&2; exit 2; }

ITEM="$1"; shift
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-22000000}"
DRAWING="${DRAWING:-SAMPLE0}"
# ｵﾌﾟｼｮﾝ is menu 29: the left column, row 14.  Its top row's cells are at the
# columns tools/branchlist.mjs worked out.
MX="${MX:-30}"; MY="${MY:-280}"
# The columns tools/branchlist.mjs worked out for ｵﾌﾟｼｮﾝ's own row.
case "$ITEM" in
    1) BX=100 ;; 2) BX=172 ;; 3) BX=228 ;; 4) BX=300 ;;
    5) BX=356 ;; 6) BX=420 ;; 7) BX=492 ;; *) BX=556 ;;
esac

rm -rf tmp/optpick/root
cp -rp orig tmp/optpick/root
rm -f tmp/optpick/root/AUTO.JWC tmp/optpick/root/QPICK.JWC

{
    printf 'wait %s\n' "$BOOT"
    printf 'mouse %s %s\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
        "$MX" "$MY" "$WAIT"
    printf 'mouse %s 8\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
        "$BX" "$WAIT"
    printf 'shot ../jwcad_dos_wasm/tmp/optpick/s0.raw\n'
    n=1
    while [ $# -ge 2 ]; do
        printf 'mouse %s %s\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
            "$1" "$2" "$WAIT"
        printf 'shot ../jwcad_dos_wasm/tmp/optpick/s%s.raw\n' "$n"
        n=$((n + 1))
        shift 2
    done
} > tmp/optpick/ss.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" \
DOSEMU_BP='+0DEF:23C5' DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
    "$EMU" --root tmp/optpick/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/optpick/ss.txt \
    tmp/optpick/root/JW_CADV.EXE "$DRAWING.JWC" \
    > tmp/optpick/raw.txt 2> tmp/optpick/err.txt || true

python - <<'PY' > tmp/optpick/str.txt
import io
import re
import sys

sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='latin-1', newline='')
for line in open('tmp/optpick/raw.txt', encoding='latin-1'):
    m = re.search(r'\[shot\] .*?s(\d+)\.raw', line)
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
echo "wrote tmp/optpick/str.txt and s*.raw"
