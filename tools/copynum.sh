#!/bin/sh
# 複写（1 番）の ②数値位置 —— 距離を打ち込んで複製する —— を本物と移植の
# 両方に通して 640x480 まるごと比べる。
#
#   sh tools/copynum.sh 20,30                 # 距離を打って [Enter]
#   STOP=1 sh tools/copynum.sh 20,30          # 打ったところで止める
#   SAME=1 sh tools/copynum.sh                # 前回と同じ ﾏｳｽ(R)
#
# 打ち込みは 1 文字ずつ送ります。まとめて送ると本物が読みきれず、最初の
# 1 文字しか届きません。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/cn
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
# CMD=16 で 移動 に（メニューは左の列の 1 行目）
CMD="${CMD:-1}"
if [ "$CMD" = 16 ]; then MX=30; else MX=90; fi
WAIT="${WAIT:-40000000}"
num="${1:-20,30}"
P='mouse %d %d\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 30000000\n'
{
    printf 'wait %s\nmouse %s 72\nwait 2000000\nclick left\nwait 24000000\n' "$WAIT" "$MX"
    printf "$P" 150 130 right right
    printf "$P" 245 170 left left
    printf "$P" 580 8 left left          # ①範囲 確定
    printf "$P" 220 8 left left          # ②数値位置
    if [ -n "$SAME" ]; then
        printf "$P" 400 300 right right  # 前回と同じ
    else
        echo "$num" | sed 's/./type &\nwait 6000000\n/g'
        [ -z "$STOP" ] && printf 'key enter\nwait 40000000\n'
    fi
    # THEN=x で、できあがったあとに上の行のその桁を押す
    #   120 = ①同形別処理、220 = ②他図形処理
    [ -n "$THEN" ] && printf "$P" "$THEN" 8 left left
    # AGAIN=n で ③連続（桁 35〜40、x 272〜327）を n 回
    i=0
    while [ -n "$AGAIN" ] && [ "$i" -lt "$AGAIN" ]; do
        printf "$P" 300 8 left left
        i=$((i + 1))
    done
    printf 'mouse 600 450\nwait 14000000\n'
    printf 'shot ../jwcad_dos_wasm/tmp/cn/orig.raw\n'
} > tmp/cn/check.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/cn/check.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
set -- -c "$CMD" -r 150 130 -p 245 170 -t 580 -t 220
if [ -n "$SAME" ]; then
    set -- "$@" -r 400 300
else
    if [ -n "$STOP" ]; then set -- "$@" -K "$num"; else set -- "$@" -k "$num"; fi
    if [ -n "$THEN" ]; then set -- "$@" -t "$THEN"; fi
    i=0
    while [ -n "$AGAIN" ] && [ "$i" -lt "$AGAIN" ]; do
        set -- "$@" -t 300
        i=$((i + 1))
    done
fi
./tests/drawing.exe -u "$@" -m 600 450 "orig/$DRAWING.JWC" tmp/cn/port.raw > /dev/null
[ "$CMD" = 16 ] && NAME=移動 || NAME=複写
printf '%s 数値位置%s%s%s %s  ' "$NAME" "${THEN:+ 続き$THEN}" "${AGAIN:+ 連続$AGAIN}" "${SAME:+（前回と同じ）}${STOP:+（打っただけ）}" "${SAME:+-}${SAME:--$num}"
python tools/fulldiff.py tmp/cn/orig.raw tmp/cn/port.raw
