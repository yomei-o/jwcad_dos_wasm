#!/bin/sh
# What [ESC] does to a command, one press at a time.
#
#     sh tools/escroad.sh 30 168        # the menu cell to pick first
#
# Boots the original on SAMPLE0, picks the menu item at (x,y), then takes a
# shot after each of: the pick, [ESC], [ESC] again, and picking the same item
# a second time.  The words written between the shots go to tmp/esc/str.txt.
#
# tools/branchport.mjs walks the branches the way tools/branchorig.sh does --
# one run, two [ESC]s between branches -- so what those two [ESC]s leave
# behind is part of every branch after the first, and it has to be the
# original's.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/esc
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first" >&2; exit 2; }
[ $# -ge 2 ] || { echo "usage: sh tools/escroad.sh <x> <y>" >&2; exit 2; }

X="$1"
Y="$2"
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-22000000}"
DRAWING="${DRAWING:-SAMPLE0}"

rm -rf tmp/esc/root
cp -rp orig tmp/esc/root
rm -f tmp/esc/root/AUTO.JWC tmp/esc/root/QPICK.JWC

{
    printf 'wait %s\n' "$BOOT"
    printf 'mouse %s %s\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
        "$X" "$Y" "$WAIT"
    printf 'shot ../jwcad_dos_wasm/tmp/esc/a.raw\n'
    printf 'key esc\nwait %s\n' "$WAIT"
    printf 'shot ../jwcad_dos_wasm/tmp/esc/b.raw\n'
    printf 'key esc\nwait %s\n' "$WAIT"
    printf 'shot ../jwcad_dos_wasm/tmp/esc/c.raw\n'
    printf 'mouse %s %s\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
        "$X" "$Y" "$WAIT"
    printf 'shot ../jwcad_dos_wasm/tmp/esc/d.raw\n'
} > tmp/esc/ss.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" \
DOSEMU_BP='+0DEF:23C5' DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
    "$EMU" --root tmp/esc/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/esc/ss.txt \
    tmp/esc/root/JW_CADV.EXE "$DRAWING.JWC" \
    > tmp/esc/raw.txt 2> tmp/esc/err.txt || true

python - <<'PY'
import io
import re
import sys

sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='latin-1', newline='')
for line in open('tmp/esc/raw.txt', encoding='latin-1'):
    m = re.search(r'\[shot\] .*?/([a-d])\.raw', line)
    if m:
        print('== after %s' % {'a': 'the pick', 'b': '[ESC]',
                               'c': '[ESC] again',
                               'd': 'picking it again'}[m.group(1)])
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
    text = line[line.index('"'):].rstrip('\n')
    print('  col=%-3d row=%-3d %s' % (col, row, text))
PY
echo "shots in tmp/esc/{a,b,c,d}.raw"
