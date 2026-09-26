#!/bin/sh
# ズームバー —— 押している途中の画面を、本物と移植で比べます。
#
#   sh tools/barcheck.sh                 # ■拡大■ のバーを押しただけ（始点待ち）
#   sh tools/barcheck.sh 200 100         # ...1 隅を押したところ（終点待ち）
#   XFER=1 sh tools/barcheck.sh          # 倍率指定[XFER] を押したところ
#
# Zoom バーは桁 29〜55（x 224〜438）、倍率指定 はその右（x 439〜549）。
# 項目は選びません——帯は項目と関係なく効きます。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/bc
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
MX="${MX:-600}"
MY="${MY:-450}"

press() {
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 30000000\n' \
        "$1" "$2"
}

{
    printf 'wait %s\n' "$BOOT"
    if [ -n "$XFER" ]; then press 490 471; else press 330 471; fi
    [ $# -ge 2 ] && press "$1" "$2"
    printf 'mouse %s %s\nwait 20000000\nshot ../jwcad_dos_wasm/tmp/bc/orig.raw\n' "$MX" "$MY"
} > tmp/bc/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/bc/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
if [ -n "$XFER" ]; then
    ./tests/drawing.exe -u -S 3 0 0 -m "$MX" "$MY" \
        "orig/$DRAWING.JWC" tmp/bc/port.raw > /dev/null
elif [ $# -ge 2 ]; then
    ./tests/drawing.exe -u -S 2 "$1" "$2" -m "$MX" "$MY" \
        "orig/$DRAWING.JWC" tmp/bc/port.raw > /dev/null
else
    ./tests/drawing.exe -u -S 1 0 0 -m "$MX" "$MY" \
        "orig/$DRAWING.JWC" tmp/bc/port.raw > /dev/null
fi
printf '%s %s%s  ' "$(test -n "$XFER" && printf '倍率指定' || printf '■拡大■')" \
    "$DRAWING" "$(test $# -ge 2 && printf ' 始点(%s,%s)' "$1" "$2")"
python tools/fulldiff.py tmp/bc/orig.raw tmp/bc/port.raw
