#!/bin/sh
# Pick a menu item in the original and press points in the drawing area.
#
#   sh tools/press.sh 11 300 200 400 200        # ○ with two presses
#   sh tools/press.sh 10 r 380 140              # 線消 with the right button
#   DRAWING=SAMPLE2 sh tools/press.sh 4 200 150 400 300
#
# Leaves tmp/press/before.raw (just after the item was picked) and
# tmp/press/after.raw, and prints what changed in the drawing area.
#
# The press has to be held -- see tools/line.sh.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/press
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
n=$1; shift
DRAWING="${DRAWING:-SAMPLE0}"
if [ "$n" -le 15 ]; then mx=90; row=$((n - 1)); else mx=30; row=$((n - 16)); fi
my=$((64 + 16 * row + 8))

{
    echo "wait 40000000"
    echo "mouse $mx $my"
    echo "wait 2000000"
    echo "click left"
    echo "wait 24000000"
    echo "shot ../jwcad_dos_wasm/tmp/press/before.raw"
    btn=left
    while [ $# -ge 1 ]; do
        # an `r` in the list means the presses after it are the other button
        if [ "$1" = r ]; then btn=right; shift; continue; fi
        if [ "$1" = l ]; then btn=left; shift; continue; fi
        [ $# -ge 2 ] || break
        echo "mouse $1 $2"
        echo "wait 3000000"
        echo "down $btn"
        echo "wait 3000000"
        echo "up $btn"
        echo "wait 14000000"
        shift 2
    done
    echo "wait 8000000"
    echo "shot ../jwcad_dos_wasm/tmp/press/after.raw"
} > tmp/press/script.txt

DOSEMU_BP=+0DEF:23C5 DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/press/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       2>/dev/null > tmp/press/str.txt
python - <<'PY'
W = 640
a = open('tmp/press/before.raw', 'rb').read()
b = open('tmp/press/after.raw', 'rb').read()
pts = [(x, y) for y in range(48, 463) for x in range(122, 639)
       if a[((y * W) + x) * 4:((y * W) + x) * 4 + 3] != b[((y * W) + x) * 4:((y * W) + x) * 4 + 3]]
if pts:
    xs = [p[0] for p in pts]
    ys = [p[1] for p in pts]
    print('%d pixels changed, x %d..%d y %d..%d' % (len(pts), min(xs), max(xs), min(ys), max(ys)))
else:
    print('nothing changed in the drawing area')
PY
python - <<'PY'
import sys
sys.stdout.reconfigure(encoding='utf-8', errors='replace')
seen = []
for line in open('tmp/press/str.txt', encoding='latin-1'):
    f = line.split()
    if len(f) < 15 or f[0] != '[bp]' or line.count('"') < 2:
        continue
    if int(f[3]) < 66_000_000:
        continue
    s = line[line.index('"') + 1:line.rindex('"')]
    key = (int(f[8], 16), int(f[9], 16), s)
    if key in seen or not s.strip():
        continue
    seen.append(key)
    print('   col=%-3d row=%-3d %s'
          % (key[0], key[1], s.encode('latin-1', 'replace').decode('cp932', 'replace')))
PY
