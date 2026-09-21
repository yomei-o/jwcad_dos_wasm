#!/bin/sh
# A run of presses, the original against the port.
#
#     sh tools/seqcheck.sh "20 312 left" "20 344 left"
#     DRAWING=SAMPLE3 sh tools/seqcheck.sh "30 344 left"
#     STR=1 sh tools/seqcheck.sh ...        # also print what the original wrote
#
# tools/clickcheck.sh does one press per boot, which cannot reach anything a
# press puts up -- ペン's board, ｸﾞﾙｰﾌﾟ's sixteen boxes, 入出力's menus.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/seq
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
NODE="${NODE:-}"
[ -n "$NODE" ] || { command -v node > /dev/null 2>&1 && NODE=node; }
[ -n "$NODE" ] || NODE=$(ls /c/prog/emsdk/emsdk/node/*/bin/node.exe 2>/dev/null | head -1)
[ -n "$NODE" ] || { echo "no node (set NODE)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-26000000}"

printf 'wait %s\n' "$BOOT" > tmp/seq/s.txt
# `set -- $step` inside the loop would eat "$@" -- which is the list itself,
# so the port would then be handed the last step as its arguments and would
# quietly compare the boot screen instead.  Read the words out another way.
for step in "$@"; do
    sx=$(echo "$step" | awk '{print $1}')
    sy=$(echo "$step" | awk '{print $2}')
    sb=$(echo "$step" | awk '{print ($3 == "") ? "left" : $3}')
    printf 'mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait %s\n' \
        "$sx" "$sy" "$sb" "$sb" "$WAIT" >> tmp/seq/s.txt
done
printf 'shot ../jwcad_dos_wasm/tmp/seq/orig.raw\n' >> tmp/seq/s.txt

if [ -n "$STR" ]; then
    DOSEMU_BP='+0DEF:23C5' DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
        "$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
        --script tmp/seq/s.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
        > tmp/seq/str.txt 2>/dev/null || true
    grep '\[bp\]' tmp/seq/str.txt \
        | sed 's/.*after \([0-9]*\) *args [0-9A-F]* [0-9A-F]* [0-9A-F]* \([0-9A-F]*\) \([0-9A-F]*\) \([0-9A-F]*\) \([0-9A-F]*\).*\("[^"]*"\)$/ \1 col=\2 row=\3 fg=\4 bg=\5 \6/' \
        | tail -40 | iconv -f CP932 -t UTF-8 2>/dev/null || true
else
    "$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
        --script tmp/seq/s.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
fi

"$NODE" tools/seqshot.mjs "orig/$DRAWING.JWC" tmp/seq/port.raw "$@"
got=$(python tools/fulldiff.py tmp/seq/orig.raw tmp/seq/port.raw | sed 's/ different.*//')
echo "$DRAWING: $got different"
[ "$got" = 0 ]
