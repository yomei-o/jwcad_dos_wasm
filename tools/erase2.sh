#!/bin/sh
# 消去（25 番）の**左**ボタンの枝 —— 追加･除外 —— を本物と移植の両方に通して
# 640x480 まるごと比べる。
#
#   sh tools/erase2.sh 150 130 245 170 197 157
#       範囲を (150,130)-(245,170) で囲み（2 回目も左）、(197,157) の線を
#       選択から外し、①範囲 確定 → ①実行 まで。
#
# 2 回目を右で押す枝は tools/erase.sh のほう。上の行の桁は測ってあります:
# 追加･除外 の `|①範囲 確定|` は 69〜78 桁（x=580 あたり）、
# 復活出来ません の `|① 実行(L)|` は 24〜33 桁（x=220 あたり）。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/er
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
WAIT="${WAIT:-40000000}"
ax="${1:-150}"; ay="${2:-130}"; bx="${3:-245}"; by="${4:-170}"
tx="${5:-197}"; ty="${6:-157}"
ok="${OK:-580}"                 # 上の行の ①範囲 確定
go="${GO:-220}"                 # 上の行の ①実行

P='mouse %d %d\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 24000000\n'
{
    printf 'wait %s\nmouse 30 216\nwait 2000000\nclick left\nwait 24000000\n' "$WAIT"
    printf "$P" "$ax" "$ay" left left
    printf "$P" "$bx" "$by" left left
    printf "$P" "$tx" "$ty" left left
    printf "$P" "$ok" 8 left left
    printf "$P" "$go" 8 left left
    printf 'shot ../jwcad_dos_wasm/tmp/er/orig.raw\n'
} > tmp/er/check.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/er/check.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe -u -c 25 -p "$ax" "$ay" -p "$bx" "$by" -p "$tx" "$ty" \
    -t "$ok" -t "$go" -m "$go" 8 "orig/$DRAWING.JWC" tmp/er/port.raw > /dev/null
printf '消去 追加･除外 (%s,%s)-(%s,%s) 外す(%s,%s)  ' "$ax" "$ay" "$bx" "$by" "$tx" "$ty"
python tools/fulldiff.py tmp/er/orig.raw tmp/er/port.raw
