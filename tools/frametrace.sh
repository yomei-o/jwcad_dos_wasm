#!/bin/sh
# **本物が用紙枠をどこに引くか**を、線を引くルーチン（10a9:07dc）で
# 見ます。手順の書き方は tools/seqcheck.sh と同じ。
#
#   sh tools/frametrace.sh "490 471 left" "300 250 left" "type 0.5" "key enter"
#   COL=2 STYLE=9 sh tools/frametrace.sh ...      # 絞り込み（既定はこの 2 つ）
#   ALL=1 sh tools/frametrace.sh ...              # 全部の線
#
# 出る形: `t=<時刻> (x0,y0)-(x1,y1) col=<色> style=<線種> rop=<>`。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/frame
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-26000000}"

printf 'wait %s\n' "$BOOT" > tmp/frame/s.txt
for step in "$@"; do
    case "$step" in
    type\ *)
        echo "${step#type }" | fold -w1 | while read -r ch; do
            [ -n "$ch" ] || continue
            printf 'type %s\nwait 8000000\n' "$ch" >> tmp/frame/s.txt
        done
        printf 'wait %s\n' "$WAIT" >> tmp/frame/s.txt
        continue ;;
    move\ *) printf 'mouse %s\nwait %s\n' "${step#move }" "$WAIT" >> tmp/frame/s.txt; continue ;;
    key\ *)  printf 'key %s\nwait %s\n' "${step#key }" "$WAIT" >> tmp/frame/s.txt; continue ;;
    esac
    sx=${step%% *}
    rest=${step#* }
    sy=${rest%% *}
    case "$rest" in
    *\ *) sb=${rest#* } ;;
    *)    sb=left ;;
    esac
    printf 'mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait %s\n' \
        "$sx" "$sy" "$sb" "$sb" "$WAIT" >> tmp/frame/s.txt
done

DOSEMU_BP=+10a9:07dc DOSEMU_BPN=400000 \
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/frame/s.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       2>/dev/null > tmp/frame/lines.txt

COL="${COL:-2}" STYLE="${STYLE:-9}" ALL="${ALL:-}" awk '
    $1 != "[bp]" { next }
    {
        x0 = strtonum("0x" $8); y0 = strtonum("0x" $9);
        x1 = strtonum("0x" $10); y1 = strtonum("0x" $11);
        col = strtonum("0x" $12); rop = strtonum("0x" $13);
        if (ENVIRON["ALL"] == "" &&
            (col != ENVIRON["COL"] + 0 || $14 != ENVIRON["STYLE"])) next;
        printf "t=%-11s (%d,%d)-(%d,%d) col=%d style=%s rop=%d\n",
               $4, x0, y0, x1, y1, col, $14, rop;
    }' tmp/frame/lines.txt
