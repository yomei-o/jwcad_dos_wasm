#!/bin/sh
# Every string the original writes during a 分割 run, with times, so the
# stages can be split by hand.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/div
EMU=tools/emu.sh
{
    printf 'wait 40000000\nmouse 30 152\nwait 2000000\nclick left\nwait 40000000\n'
    printf 'mouse 600 450\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 20000000\n'
    printf 'mouse 250 200\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 20000000\n'
    printf 'mouse 450 200\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 20000000\n'
    printf 'type 4\nwait 10000000\n'
    printf 'key enter\nwait 30000000\n'
    printf 'mouse 600 450\nwait 14000000\n'
} > tmp/div/divcap.txt
DOSEMU_BP=+0DEF:23C5 DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/div/divcap.txt orig/JW_CADV.EXE SAMPLE0.JWC \
       2>/dev/null > tmp/div/divcap.log
python - <<'PY'
import sys
sys.stdout.reconfigure(encoding='utf-8', errors='replace')
for line in open('tmp/div/divcap.log', encoding='latin-1'):
    f = line.split()
    if len(f) < 15 or f[0] != '[bp]' or line.count('"') < 2:
        continue
    t = int(f[3])
    if t < 100_000_000:
        continue
    s = line[line.index('"') + 1:line.rindex('"')].encode('latin-1')
    print(t, 'col=%-3d row=%-2d fg=%d bg=%d' % (int(f[8],16), int(f[9],16), int(f[10],16), int(f[11],16)),
          s.decode('cp932','replace'), '|', s.hex(' '))
PY
