#!/bin/sh
# 複写 ⑥回転 —— 範囲を選び、基準点を取り、角度を打って、置くところを比べます。
#
#   sh tools/rotatecheck.sh 150 130 245 170 200 300 30 400 300
#   STOP=angle sh tools/rotatecheck.sh 150 130 245 170 200 300
#   TEXT=1 sh tools/rotatecheck.sh 160 140 230 165 200 300 30 400 300
#
# 引数は 範囲の 2 隅、基準点、角度（度）、置く点。TEXT=1 は範囲の 1 点目を
# 右ボタンにして、文字も範囲に入れます（行の `(R)線･円･文字`）。
# STOP=angle は角度を訊いているところで止めます（打つ前の画面）。
#
# 上の行の押しどころ: ①範囲 確定 は桁 69〜78（x 544〜623）、
# ⑥回転 は桁 63〜68（x 496〜551）。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/rc
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
# Which item on the top line.  520 is x of the sixth, 回転 (columns 63-68);
# 300 is the third, 数値倍率 (columns 35-44), which asks for its number in the
# same three steps -- base point, a field, then where it goes -- so the same
# script drives it.
ITEM="${ITEM:-520}"
WHAT=$(test "$ITEM" = 520 && printf 回転 || printf 倍率)
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
    press "$ITEM" 8
    press "$5" "$6"
    if [ -z "$STOP" ]; then
        # One character per line.  The emulator's `type` takes the whole rest
        # of the line, spaces and all, so `type 3 0` sends a space between the
        # digits and the field ends there -- the first run of this meant to
        # type `30` and the original turned the copy by 3 degrees.
        echo "$7" | sed 's/./type &\nwait 8000000\n/g'
        printf 'key enter\nwait 30000000\n'
        press "$8" "$9"
        printf 'mouse %s %s\nwait 14000000\n' "$8" "$9"
    else
        printf 'mouse %s %s\nwait 14000000\n' "$5" "$6"
    fi
    printf 'shot ../jwcad_dos_wasm/tmp/rc/orig.raw\n'
} > tmp/rc/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/rc/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1

if [ -z "$STOP" ]; then
    ./tests/drawing.exe -u -c 1 "$(test -n "$TEXT" && printf -- -r || printf -- -p)" "$1" "$2" \
        -p "$3" "$4" -t 580 -t "$ITEM" -p "$5" "$6" -k "$7" -p "$8" "$9" -m "$8" "$9" \
        "orig/$DRAWING.JWC" tmp/rc/port.raw > /dev/null
    printf "$WHAT"'%s %s (%s,%s)-(%s,%s) 基準(%s,%s) [%s] → (%s,%s)  ' \
        "${TEXT:+文字も}" "$DRAWING" "$1" "$2" "$3" "$4" "$5" "$6" "$7" "$8" "$9"
else
    ./tests/drawing.exe -u -c 1 "$(test -n "$TEXT" && printf -- -r || printf -- -p)" "$1" "$2" \
        -p "$3" "$4" -t 580 -t "$ITEM" -p "$5" "$6" -m "$5" "$6" \
        "orig/$DRAWING.JWC" tmp/rc/port.raw > /dev/null
    printf "$WHAT"'%s %s (%s,%s)-(%s,%s) 基準(%s,%s) 数字待ち  ' \
        "${TEXT:+文字も}" "$DRAWING" "$1" "$2" "$3" "$4" "$5" "$6"
fi
python tools/fulldiff.py tmp/rc/orig.raw tmp/rc/port.raw
