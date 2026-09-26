#!/bin/sh
# 文字（13 番）—— 点を押して字を打つところを、本物と移植で比べます。
#
#   sh tools/textcheck.sh 250 200 ABC
#   ENTER=1 sh tools/textcheck.sh 250 200 ABC     # [Enter] まで打って書かせる
#   VERT=1 ENTER=1 sh tools/textcheck.sh 250 200 ABC   # ②垂直（縦書き）
#   DRAWING=SAMPLE3 sh tools/textcheck.sh 300 250 XY
#
# **文字はオーバーレイの読み込みが長い**（6000 万命令ほど）ので、命令を
# 選んだあとの待ちを長く取ってあります。短いと押しが捨てられ、続けて送った
# 字が**メニューの一文字キーとして効いて**別の命令に飛びます（RESUME 4.17）。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/tc
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
px="${1:-250}"; py="${2:-200}"; str="${3:-ABC}"

{
    printf 'wait %s\nmouse 90 264\nwait 2000000\nclick left\nwait 60000000\n' "$BOOT"
    if [ -n "$VERT" ]; then
        printf 'mouse 290 8\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 30000000\n'
    fi
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 30000000\n' "$px" "$py"
    echo "$str" | fold -w1 | while read -r c; do
        printf 'type %s\nwait 10000000\n' "$c"
    done
    [ -n "$ENTER" ] && printf 'key enter\nwait 40000000\n'
    printf 'shot ../jwcad_dos_wasm/tmp/tc/orig.raw\n'
} > tmp/tc/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/tc/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1

if [ -n "$ENTER" ]; then keys="-k $str"; else keys="-K $str"; fi
./tests/drawing.exe -u -c 13 ${VERT:+-t 290} -p "$px" "$py" $keys -m "$px" "$py" \
    "orig/$DRAWING.JWC" tmp/tc/port.raw > /dev/null
printf '文字%s %s "%s" at (%s,%s)%s  ' "${VERT:+縦}" "$DRAWING" "$str" "$px" "$py" \
    "${ENTER:+ +[Enter]}"
python tools/fulldiff.py tmp/tc/orig.raw tmp/tc/port.raw
