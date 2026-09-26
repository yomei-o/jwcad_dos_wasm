#!/bin/sh
# 複写（1 番）の範囲選びを本物と移植の両方に通して 640x480 まるごと比べる。
#
#   sh tools/copy.sh 150 130 245 170          # 1 点目は左（線･円 だけ）
#   R1=1 sh tools/copy.sh 150 130 245 170     # 1 点目を右（線･円･文字）
#   STEP=3 ... で止まる段を選ぶ:
#     2 範囲を囲んだところ（追加･除外）
#     3 ①範囲 確定 まで（複写のしかたを聞く行）
#     4 ①ﾏｳｽ位置 まで（原図形の基準点位置）
#     5 基準点まで（複写 位置）
#
# 上の行の桁: ①範囲 確定 は 69〜78（x=580 あたり）、①ﾏｳｽ位置 は 9〜22（x=120）。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/cpc
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
# CMD=16 で 移動 に（メニューは左の列の 1 行目）
CMD="${CMD:-1}"
if [ "$CMD" = 16 ]; then MX=30; else MX=90; fi
WAIT="${WAIT:-40000000}"
STEP="${STEP:-5}"
ax="${1:-150}"; ay="${2:-130}"; bx="${3:-245}"; by="${4:-170}"
px="${5:-200}"; py="${6:-150}"          # 基準点
if [ -n "$R1" ]; then b1=right; else b1=left; fi

P='mouse %d %d\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 30000000\n'
{
    printf 'wait %s\nmouse %s 72\nwait 2000000\nclick left\nwait 24000000\n' "$WAIT" "$MX"
    printf "$P" "$ax" "$ay" "$b1" "$b1"
    printf "$P" "$bx" "$by" left left
    [ "$STEP" -ge 3 ] && printf "$P" 580 8 left left
    [ "$STEP" -ge 4 ] && printf "$P" 120 8 left left
    [ "$STEP" -ge 5 ] && printf "$P" "$px" "$py" left left
    printf 'wait 30000000\n'
    printf 'shot ../jwcad_dos_wasm/tmp/cpc/orig.raw\n'
} > tmp/cpc/check.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/cpc/check.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
set -- -c "$CMD"
if [ -n "$R1" ]; then set -- "$@" -r "$ax" "$ay"; else set -- "$@" -p "$ax" "$ay"; fi
set -- "$@" -p "$bx" "$by"
mx="$bx"; my="$by"
if [ "$STEP" -ge 3 ]; then set -- "$@" -t 580; mx=580; my=8; fi
if [ "$STEP" -ge 4 ]; then set -- "$@" -t 120; mx=120; my=8; fi
if [ "$STEP" -ge 5 ]; then set -- "$@" -p "$px" "$py"; mx="$px"; my="$py"; fi
[ -n "$MOVE" ] && { mx=${MOVE% *}; my=${MOVE#* }; }
set -- "$@" -m "$mx" "$my"
./tests/drawing.exe -u "$@" "orig/$DRAWING.JWC" tmp/cpc/port.raw > /dev/null
[ "$CMD" = 16 ] && NAME=移動 || NAME=複写
printf '%s%s 段%s (%s,%s)-(%s,%s)  ' "$NAME" "${R1:+ 線･円･文字}" "$STEP" "$ax" "$ay" "$bx" "$by"
python tools/fulldiff.py tmp/cpc/orig.raw tmp/cpc/port.raw
