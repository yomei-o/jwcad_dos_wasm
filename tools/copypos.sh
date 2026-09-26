#!/bin/sh
# 複写（1 番）と 移動（16 番）の ①ﾏｳｽ位置 —— 基準点を押して、置く位置を
# 押す —— を本物と移植の両方に通して 640x480 まるごと比べる。
#
#   sh tools/copypos.sh                       # 基準 (200,150) → 置く (383,401)
#   sh tools/copypos.sh 200 150 383 401
#   CMD=16 sh tools/copypos.sh                # 移動 で
#   MORE="300 300" sh tools/copypos.sh        # そのあともう一度押す（再複写）
#   AGAIN=1 sh tools/copypos.sh               # そのあと ③連続（桁 66〜71）
#   THEN=350 sh tools/copypos.sh              # ①同形別処理（桁 40〜51）
#
# 押しは保持すること（tools/line.sh の注）。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/cp
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
CMD="${CMD:-1}"
if [ "$CMD" = 16 ]; then MX=30; else MX=90; fi
WAIT="${WAIT:-40000000}"
bx="${1:-200}"; by="${2:-150}"; px="${3:-383}"; py="${4:-401}"
P='mouse %d %d\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 30000000\n'
{
    printf 'wait %s\nmouse %s 72\nwait 2000000\nclick left\nwait 24000000\n' "$WAIT" "$MX"
    printf "$P" 150 130 right right
    printf "$P" 245 170 left left
    printf "$P" 580 8 left left          # ①範囲 確定
    printf "$P" 120 8 left left          # ①ﾏｳｽ位置
    printf "$P" "$bx" "$by" left left    # 原図形の基準点位置
    printf "$P" "$px" "$py" left left    # 位置
    # MORE="x y ..." で、できあがったあともう一度押す（再複写 位置指示）
    set -- $MORE
    while [ $# -ge 2 ]; do
        printf "$P" "$1" "$2" left left
        shift 2
    done
    # AGAIN=n で ③連続（桁 66〜71、x 520〜567）を n 回
    i=0
    while [ -n "$AGAIN" ] && [ "$i" -lt "$AGAIN" ]; do
        printf "$P" 540 8 left left
        i=$((i + 1))
    done
    # THEN=x で、そのあと上の行のその桁を押す（350 = ①同形別処理）
    [ -n "$THEN" ] && printf "$P" "$THEN" 8 left left
    printf 'mouse 600 450\nwait 14000000\n'
    printf 'shot ../jwcad_dos_wasm/tmp/cp/orig.raw\n'
} > tmp/cp/check.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/cp/check.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
set -- -c "$CMD" -r 150 130 -p 245 170 -t 580 -t 120 -p "$bx" "$by" -p "$px" "$py"
set -- "$@" $(for xy in $MORE; do echo "$xy"; done | sed 'N;s/^/-p /;s/\n/ /')
i=0
while [ -n "$AGAIN" ] && [ "$i" -lt "$AGAIN" ]; do
    set -- "$@" -t 540
    i=$((i + 1))
done
if [ -n "$THEN" ]; then set -- "$@" -t "$THEN"; fi
./tests/drawing.exe -u "$@" -m 600 450 "orig/$DRAWING.JWC" tmp/cp/port.raw > /dev/null
[ "$CMD" = 16 ] && NAME=移動 || NAME=複写
printf '%s ﾏｳｽ位置%s%s%s (%s,%s)→(%s,%s)  ' "$NAME" \
    "${MORE:+ 再}" "${AGAIN:+ 連続$AGAIN}" "${THEN:+ 続き$THEN}" "$bx" "$by" "$px" "$py"
python tools/fulldiff.py tmp/cp/orig.raw tmp/cp/port.raw
