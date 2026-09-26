#!/bin/sh
# 下の帯（ズームバー）を押させて、本物が何を書くかを読みます。
#
#   sh tools/bar.sh 330 471                 # Zoom を押しただけ
#   sh tools/bar.sh 330 471 200 100         # ...そのあと 1 点
#   sh tools/bar.sh 330 471 200 100 300 400 # ...2 点
#
# tools/probe.sh はメニュー項目を選んでから押しますが、帯は項目と関係なく
# 効くのでこちらを使います。出るのは tools/probe.py と同じ「桁・行・文字」。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/bar
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"

{
    printf 'wait %s\n' "$BOOT"
    while [ $# -ge 2 ]; do
        printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 30000000\n' \
            "$1" "$2"
        shift 2
    done
    [ -n "$MOVE" ] && printf 'mouse %s\nwait 20000000\n' "$MOVE"
    printf 'wait 10000000\nshot ../jwcad_dos_wasm/tmp/bar/after.raw\n'
} > tmp/bar/script.txt

DOSEMU_BP=+0DEF:23C5 DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/bar/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       2>/dev/null > tmp/bar/str.txt
cp tmp/bar/str.txt tmp/probe/str.txt 2>/dev/null || { mkdir -p tmp/probe; cp tmp/bar/str.txt tmp/probe/str.txt; }
DRAW="$DRAWING" python tools/probe.py
