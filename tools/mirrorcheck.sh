#!/bin/sh
# 複写 ⑤反転 —— 範囲を選んで、指した線で折り返して写すところを比べます。
#
#   sh tools/mirrorcheck.sh 150 130 245 170 162 279
#   TEXT=1 sh tools/mirrorcheck.sh 160 140 230 165 162 279   # 文字も入れる
#
# 引数は 範囲の 2 隅、つぎに 反転基準線 の上の点。TEXT=1 は範囲の 1 点目を
# 右ボタンにして、文字も範囲に入れます（行の `(R)線･円･文字`）。
# 上の行の押しどころ: ①範囲 確定 は桁 69〜78（x 544〜623）、
# ⑤反転 は桁 56〜61（x 440〜495）。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/mc
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"

press() {
    printf 'mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 26000000\n' \
        "$1" "$2" "${3:-left}" "${3:-left}"
}

{
    printf 'wait %s\nmouse 90 72\nwait 2000000\nclick left\nwait 40000000\n' "$BOOT"
    press "$1" "$2" "$(test -n "$TEXT" && printf right || printf left)"
    press "$3" "$4"
    press 580 8
    press 460 8
    press "$5" "$6"
    printf 'mouse %s %s\nwait 14000000\nshot ../jwcad_dos_wasm/tmp/mc/orig.raw\n' "$5" "$6"
} > tmp/mc/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/mc/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe -u -c 1 "$(test -n "$TEXT" && printf -- -r || printf -- -p)" "$1" "$2" \
    -p "$3" "$4" -t 580 -t 460 -p "$5" "$6" -m "$5" "$6" \
    "orig/$DRAWING.JWC" tmp/mc/port.raw > /dev/null
printf '反転%s %s (%s,%s)-(%s,%s) 軸(%s,%s)  ' "${TEXT:+文字も}" "$DRAWING" \
    "$1" "$2" "$3" "$4" "$5" "$6"
python tools/fulldiff.py tmp/mc/orig.raw tmp/mc/port.raw
