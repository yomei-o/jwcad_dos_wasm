#!/bin/sh
# ズームバーの ■拡大■ —— 押している途中の画面を、本物と移植で比べます。
#
#   sh tools/barcheck.sh                 # バーを押しただけ（始点待ち）
#   sh tools/barcheck.sh 200 100         # ...1 隅を押したところ（終点待ち）
#
# バーは桁 29〜55（x 224〜438）。項目は選びません——帯は項目と関係なく効きます。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/bc
EMU=../dosv_emu_cpp/dosemu.exe
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
    press 330 471
    [ $# -ge 2 ] && press "$1" "$2"
    printf 'mouse %s %s\nwait 20000000\nshot ../jwcad_dos_wasm/tmp/bc/orig.raw\n' "$MX" "$MY"
} > tmp/bc/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/bc/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
if [ $# -ge 2 ]; then
    ./tests/drawing.exe -u -S 2 "$1" "$2" -m "$MX" "$MY" \
        "orig/$DRAWING.JWC" tmp/bc/port.raw > /dev/null
else
    ./tests/drawing.exe -u -S 1 0 0 -m "$MX" "$MY" \
        "orig/$DRAWING.JWC" tmp/bc/port.raw > /dev/null
fi
printf '■拡大■ %s%s  ' "$DRAWING" "$(test $# -ge 2 && printf ' 始点(%s,%s)' "$1" "$2")"
python tools/fulldiff.py tmp/bc/orig.raw tmp/bc/port.raw
