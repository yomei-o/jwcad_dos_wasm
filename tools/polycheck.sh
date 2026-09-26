#!/bin/sh
# 正多角形（19 番の ②）—— 角数を打って中心と頂点を押すところを、本物と
# 移植で比べます。
#
#   sh tools/polycheck.sh 300 250 400 250 6
#   DRAWING=SAMPLE6 BOOT=150000000 sh tools/polycheck.sh 300 250 400 250 5
#
# 上の行を 2 回押します——②正多角形（桁 35〜44）と ①任意寸法（桁 8〜）。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/poly
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
cx=$1; cy=$2; vx=$3; vy=$4; n=${5:-6}
P='mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 20000000\n'
{
    printf 'wait %s\nmouse 30 120\nwait 2000000\nclick left\nwait 40000000\n' "${BOOT:-40000000}"
    printf "$P" 300 8          # ②正多角形
    printf "$P" 100 8          # ①任意寸法の正多角形
    echo "$n" | fold -w1 | while read -r ch; do
        [ -n "$ch" ] || continue
        printf 'type %s\nwait 8000000\n' "$ch"
    done
    printf 'key enter\nwait 30000000\n'
    printf "$P" "$cx" "$cy"
    printf "$P" "$vx" "$vy"
    printf 'mouse %s %s\nwait 14000000\n' "$vx" "$vy"
    printf 'shot ../jwcad_dos_wasm/tmp/poly/orig.raw\n'
} > tmp/poly/script.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/poly/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe -u -c 19 -t 300 -t 100 -k "$n" -p "$cx" "$cy" -p "$vx" "$vy" \
    -m "$vx" "$vy" "orig/$DRAWING.JWC" tmp/poly/port.raw > /dev/null
printf '正多角形 %s (%s,%s)-(%s,%s) %s角  ' "$DRAWING" "$cx" "$cy" "$vx" "$vy" "$n"
python tools/fulldiff.py tmp/poly/orig.raw tmp/poly/port.raw
