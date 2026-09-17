#!/bin/sh
# [ESC] —— 取った点を捨てて聞き直すところ —— を本物と移植の両方に通して
# 640x480 まるごと比べる。
#
#   sh tools/esccheck.sh 3 300 200        # ／ を選んで 1 点押してから [ESC]
#   sh tools/esccheck.sh 11 300 200
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/ec
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
n="$1"; x="${2:-300}"; y="${3:-200}"
# TWO="x y" があれば 2 点目も押してから [ESC]（範囲を取る命令用）
if [ "$n" -le 15 ]; then mx=90; row=$((n - 1)); else mx=30; row=$((n - 16)); fi
my=$((64 + 16 * row + 8))
{
    printf 'wait 40000000\nmouse %s %s\nwait 2000000\nclick left\nwait 24000000\n' "$mx" "$my"
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 30000000\n' "$x" "$y"
    printf 'key esc\nwait 30000000\n'
    printf 'shot ../jwcad_dos_wasm/tmp/ec/orig.raw\n'
} > tmp/ec/check.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/ec/check.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
set -- -c "$n" -p "$x" "$y"
[ -n "$TWO" ] && set -- "$@" -p $TWO
./tests/drawing.exe -u "$@" -x -m "$x" "$y" \
    "orig/$DRAWING.JWC" tmp/ec/port.raw > /dev/null
printf '[ESC] 命令 %s (%s,%s)  ' "$n" "$x" "$y"
python tools/fulldiff.py tmp/ec/orig.raw tmp/ec/port.raw
