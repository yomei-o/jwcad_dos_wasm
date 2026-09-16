#!/bin/sh
# 複線（5 番）を本物と移植の両方に通して、640x480 まるごと比べる。
#
#   sh tools/multicheck.sh 20 197 120        # 間隔 20、上側へ逃がす
#   DRAWING=SAMPLE6 LX=300 LY=240 sh tools/multicheck.sh 50 320 200
#
# 数値入力のある命令はこれが最初なので、打鍵も台本に入ります。本物には
# 1 字ずつ送ること——まとめて送ると最初の 1 字しか拾いません（RESUME 4.12）。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/multi
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
gap="${1:-20}"; px="${2:-197}"; py="${3:-120}"
lx="${LX:-197}"; ly="${LY:-157}"

{
    printf 'wait 40000000\nmouse 90 136\nwait 2000000\nclick left\nwait 24000000\n'
    printf 'mouse %d %d\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 16000000\n' "$lx" "$ly"
    echo "$gap" | fold -w1 | while read -r c; do printf 'type %s\nwait 8000000\n' "$c"; done
    printf 'key enter\nwait 24000000\n'
    printf 'mouse %d %d\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 24000000\n' "$px" "$py"
    printf 'shot ../jwcad_dos_wasm/tmp/multi/orig.raw\n'
} > tmp/multi/check.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/multi/check.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe -u -c 5 -p "$lx" "$ly" -k "$gap" -p "$px" "$py" -m "$px" "$py" \
    "orig/$DRAWING.JWC" tmp/multi/port.raw > /dev/null
printf '複線 %s at (%s,%s) -> (%s,%s)  ' "$gap" "$lx" "$ly" "$px" "$py"
python tools/fulldiff.py tmp/multi/orig.raw tmp/multi/port.raw
