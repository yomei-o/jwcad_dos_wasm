#!/bin/sh
# 消去（25 番）の ③指定範囲 —— 複写・移動と同じデータ選択 —— を本物と移植の
# 両方に通して 640x480 まるごと比べる。
#
#   sh tools/span.sh 150 130 245 170        # 1 点目は左（線･円 だけ）
#   R1=1 sh tools/span.sh 150 130 245 170   # 1 点目を右（線･円･文字）
#   STOP=1 ... は ①範囲 確定 の手前で止める
#
# 上の行の桁: ③指定範囲 は 55〜64（x 432〜519）、追加･除外 の `|①範囲 確定|`
# は 69〜78（x=580 あたり）、復活出来ません の `|① 実行(L)|` は 24〜33。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/sp
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
WAIT="${WAIT:-40000000}"
ax="${1:-150}"; ay="${2:-130}"; bx="${3:-245}"; by="${4:-170}"
tx="${5:-}"; ty="${6:-}"     # 追加･除外 で足し引きする点（あれば）
ok="${OK:-580}"                 # 上の行の ①範囲 確定
go="${GO:-220}"                 # 上の行の ①実行
if [ -n "$STOP" ]; then out=stop; else out=go; fi
if [ -n "$R1" ]; then b1=right; else b1=left; fi

P='mouse %d %d\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 30000000\n'
{
    printf 'wait %s\nmouse 30 216\nwait 2000000\nclick left\nwait 24000000\n' "$WAIT"
    printf "$P" 470 8 left left           # ③指定範囲
    printf "$P" "$ax" "$ay" "$b1" "$b1"
    printf "$P" "$bx" "$by" left left
    [ -n "$tx" ] && printf "$P" "$tx" "$ty" left left
    if [ -z "$STOP" ]; then
        printf "$P" "$ok" 8 left left
        printf "$P" "$go" 8 left left
    fi
    printf 'wait 40000000\n'
    printf 'shot ../jwcad_dos_wasm/tmp/sp/%s_orig.raw\n' "$out"
} > tmp/sp/check.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/sp/check.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
set -- -c 25 -t 470
if [ -n "$R1" ]; then set -- "$@" -r "$ax" "$ay"; else set -- "$@" -p "$ax" "$ay"; fi
set -- "$@" -p "$bx" "$by"
[ -n "$tx" ] && set -- "$@" -p "$tx" "$ty"
if [ -n "$STOP" ]; then
    set -- "$@" -m "${tx:-$bx}" "${ty:-$by}"
else
    set -- "$@" -t "$ok" -t "$go" -m "$go" 8
fi
./tests/drawing.exe -u "$@" "orig/$DRAWING.JWC" "tmp/sp/${out}_port.raw" > /dev/null
printf '指定範囲%s%s (%s,%s)-(%s,%s)%s  ' \
    "${R1:+ 線･円･文字}" "${STOP:+（確定前）}" "$ax" "$ay" "$bx" "$by"     "${tx:+ 指す($tx,$ty)}"
python tools/fulldiff.py "tmp/sp/${out}_orig.raw" "tmp/sp/${out}_port.raw"
