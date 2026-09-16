#!/bin/sh
# 複線（5 番）を本物と移植の両方に通して、640x480 まるごと比べる。
#
#   sh tools/multicheck.sh 20 197 120            # 間隔 20、上側へ逃がす
#   FKEY=3 sh tools/multicheck.sh - 197 120      # 打つかわりに [F3]（＝200）
#   RIGHT=1 sh tools/multicheck.sh 20 197 120    # 2 本目を右ボタンで（同じ寸法）
#   CONT=1 sh tools/multicheck.sh 20 197 120     # そのあと上の行の ②連続
#   DRAWING=SAMPLE6 LX=499 LY=192 sh tools/multicheck.sh 300 520 230
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
# 右ボタンで 2 本目をとるとき、その線を指す点と逃がす側
rx="${RX:-300}"; ry="${RY:-419}"; rpx="${RPX:-300}"; rpy="${RPY:-380}"
top="${TOPX:-588}"              # 上の行の ②連続 の桁

press_orig='mouse %d %d\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 24000000\n'
{
    printf 'wait 40000000\nmouse 90 136\nwait 2000000\nclick left\nwait 24000000\n'
    printf 'mouse %d %d\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 16000000\n' "$lx" "$ly"
    if [ -n "$FKEY" ]; then
        printf 'key f%s\nwait 20000000\n' "$FKEY"
    else
        echo "$gap" | fold -w1 | while read -r c; do printf 'type %s\nwait 8000000\n' "$c"; done
        printf 'key enter\nwait 24000000\n'
    fi
    printf "$press_orig" "$px" "$py" left left
    [ -n "$RIGHT" ] && { printf "$press_orig" "$rx" "$ry" right right
                         printf "$press_orig" "$rpx" "$rpy" left left; }
    [ -n "$CONT" ] && printf "$press_orig" "$top" 8 left left
    printf 'shot ../jwcad_dos_wasm/tmp/multi/orig.raw\n'
} > tmp/multi/check.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/multi/check.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1

set -- -u -c 5 -p "$lx" "$ly"
if [ -n "$FKEY" ]; then set -- "$@" -f "$FKEY"; else set -- "$@" -k "$gap"; fi
set -- "$@" -p "$px" "$py"
mx="$px"; my="$py"
[ -n "$RIGHT" ] && { set -- "$@" -r "$rx" "$ry" -p "$rpx" "$rpy"; mx="$rpx"; my="$rpy"; }
[ -n "$CONT" ] && { set -- "$@" -t "$top"; mx="$top"; my=8; }
./tests/drawing.exe "$@" -m "$mx" "$my" "orig/$DRAWING.JWC" tmp/multi/port.raw > /dev/null
printf '複線 %s%s at (%s,%s) -> (%s,%s)  '     "${FKEY:+[F$FKEY]}${FKEY:-$gap}" "${RIGHT:+ +(R)}${CONT:+ +連続}"     "$lx" "$ly" "$px" "$py"
python tools/fulldiff.py tmp/multi/orig.raw tmp/multi/port.raw
