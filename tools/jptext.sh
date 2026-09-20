#!/bin/sh
# 文字（13 番）に**日本語**を打つところを、本物と移植で比べます。
#
#   sh tools/jptext.sh 250 200 あいう
#   ENTER=1 sh tools/jptext.sh 250 200 あいう      # [Enter] まで
#   BS=1 sh tools/jptext.sh 250 200 あいう         # 最後に [BS] を 1 回
#
# 打ち込みは Shift-JIS のバイトをそのまま送ります。DOS/V の FEP がやって
# いるのはこれだけで、本物は 2 バイトを普通のキー 2 つとして受けます。
# **1 文字ぶんのバイトは続けて送ること**——間に 600 万命令空けると本物は
# 2 バイト目を捨てて、先頭バイトだけの字が残ります（RESUME 4.17）。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/jt
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
px="${1:-250}"; py="${2:-200}"; str="${3:-あいう}"

STR="$str" python tools/jptext.py > tmp/jt/keys.txt
{
    printf 'wait %s\nmouse 90 264\nwait 2000000\nclick left\nwait 60000000\n' "$BOOT"
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 30000000\n' "$px" "$py"
    cat tmp/jt/keys.txt
    [ -n "$BS" ] && printf 'key bs\nwait 10000000\n'
    [ -n "$ENTER" ] && printf 'key enter\nwait 40000000\n'
    printf 'shot ../jwcad_dos_wasm/tmp/jt/orig.raw\n'
} > tmp/jt/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/jt/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1

# The port takes the same bytes, as hex: Shift-JIS is not valid UTF-8 and a
# Windows argv turns 82 A0 into a question mark.  -H stops at the string, -h
# adds the [Enter].
hex=$(STR="$str" python tools/jptext.py --hex)
set -- -u -c 13 -p "$px" "$py"
if [ -n "$BS" ]; then
    set -- "$@" -H "$hex" -H 08
elif [ -n "$ENTER" ]; then
    set -- "$@" -h "$hex"
else
    set -- "$@" -H "$hex"
fi
./tests/drawing.exe "$@" -m "$px" "$py" "orig/$DRAWING.JWC" tmp/jt/port.raw > /dev/null
printf '文字 %s "%s" at (%s,%s)%s%s  ' "$DRAWING" "$str" "$px" "$py" \
    "${BS:+ +[BS]}" "${ENTER:+ +[Enter]}"
python tools/fulldiff.py tmp/jt/orig.raw tmp/jt/port.raw
