#!/bin/sh
# 文編集（28 番の【変更】）—— 文字を選んで打ち直すところを、本物と移植で
# 比べます。
#
#   sh tools/editcheck.sh 190 152 ABC
#   ENTER=1 sh tools/editcheck.sh 190 152 ABC      # [Enter] まで
#   BS=1 sh tools/editcheck.sh 190 152 AB          # 最後に [BS] を 1 回
#   ENTER=1 sh tools/editcheck.sh 190 152 ''       # 何も打たずに [Enter]
#
# 最初の押しは本物に届かないので、(600,450) を 1 回空押ししてから始めます
# （tools/probe.sh の `d` と同じ）。打ち込みは 文字 と同じで、Shift-JIS の
# バイトをそのまま、1 文字ぶんは続けて送ります。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/ed
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
px="${1:-190}"; py="${2:-152}"; str="${3:-}"

STR="$str" python tools/jptext.py > tmp/ed/keys.txt
{
    printf 'wait %s\nmouse 30 264\nwait 2000000\nclick left\nwait 40000000\n' "$BOOT"
    printf 'mouse 600 450\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 20000000\n'
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 26000000\n' "$px" "$py"
    cat tmp/ed/keys.txt
    [ -n "$BS" ] && printf 'key bs\nwait 10000000\n'
    [ -n "$ENTER" ] && printf 'key enter\nwait 40000000\n'
    printf 'shot ../jwcad_dos_wasm/tmp/ed/orig.raw\n'
} > tmp/ed/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/ed/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1

hex=$(STR="$str" python tools/jptext.py --hex)
set -- -u -c 28 -p 600 450 -p "$px" "$py"
if [ -n "$BS" ]; then
    [ -n "$hex" ] && set -- "$@" -H "$hex"
    set -- "$@" -H 08
elif [ -n "$ENTER" ]; then
    if [ -n "$hex" ]; then set -- "$@" -h "$hex"; else set -- "$@" -H 0d; fi
else
    [ -n "$hex" ] && set -- "$@" -H "$hex"
fi
./tests/drawing.exe "$@" -m "$px" "$py" "orig/$DRAWING.JWC" tmp/ed/port.raw > /dev/null
printf '文編集 %s "%s" at (%s,%s)%s%s  ' "$DRAWING" "$str" "$px" "$py" \
    "${BS:+ +[BS]}" "${ENTER:+ +[Enter]}"
python tools/fulldiff.py tmp/ed/orig.raw tmp/ed/port.raw
