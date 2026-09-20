#!/bin/sh
# ズームバーの ■拡大■ と 用紙枠 —— 本物と移植で、**作図ウインドーの中**を
# 比べます。
#
#   sh tools/zoomcheck.sh 200 100 300 400
#
# 引数は拡大する矩形の 2 隅（画面座標）。本物は下の帯の Zoom を押してから
# その 2 点を押します。移植は `tests/drawing.exe -Z` で同じ見方にします。
#
# 比べるのは y 48〜462、つまり上の帯より下です。**帯と左の盤は入れていません**
# ——本物は拡大のあと上の行や倍率表示やメニューの反転を書き替えますが、移植の
# `-Z` は見方を変えるだけだからです（4.27）。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/zc
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"

press() {
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait %s\n' \
        "$1" "$2" "${3:-20000000}"
}

{
    printf 'wait %s\n' "$BOOT"
    press 330 471 30000000
    press "$1" "$2"
    press "$3" "$4" 60000000
    printf 'mouse 600 450\nwait 20000000\nshot ../jwcad_dos_wasm/tmp/zc/orig.raw\n'
} > tmp/zc/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/zc/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe -u -Z "$1" "$2" "$3" "$4" -m 600 450 \
    "orig/$DRAWING.JWC" tmp/zc/port.raw > /dev/null
printf '拡大 %s (%s,%s)-(%s,%s)  ' "$DRAWING" "$1" "$2" "$3" "$4"
python tools/windiff.py tmp/zc/orig.raw tmp/zc/port.raw
