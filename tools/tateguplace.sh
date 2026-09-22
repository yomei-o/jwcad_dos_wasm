#!/bin/sh
# Put one of ｵﾌﾟｼｮﾝ ①建具平面's fittings into a drawing with the original and
# **save the drawing**, so that the records it adds can be read.
#
#     sh tools/tateguplace.sh                       # the first shape
#     CELL="250 88" AT="350 200" sh tools/tateguplace.sh
#
# The road, measured with tools/optpick.sh:
#
#     ｵﾌﾟｼｮﾝ → ①建具平面 → the sixteen shapes
#          → a shape's cell:  `・基準線(L) ２点(R) |①内法寸法|②基準線との間隔|`
#                             with 1800.00 and 0.00 in the band
#          → a line:          `[ESC] ◇位置 (L)free (R)Read|①間隔反転|②建具心変
#                              |③基準点変|④建具反転|⑤左右|`, and the line goes red
#          → a point:         the fitting goes in (the counts go 30 -> 33) and
#                             the line asks for another 基準線
#
# Then 入出力 ①ファイル ①保存 … ①実行, which is tools/save.sh's road; it takes
# the first half as PRE.  What comes out is tmp/optpick/placed.JWC.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/optpick tmp/save

DRAWING="${DRAWING:-SAMPLE0}"
CELL="${CELL:-250 40}"
LINE="${LINE:-300 139}"
AT="${AT:-350 200}"
WAIT="${WAIT:-22000000}"

# **One key at a time.**  `type 100` puts all three characters in the BIOS
# buffer at once and the original takes only the first: 見込 came out 1 and
# not 100.  So this presses them one by one, with a wait between, and then
# [Enter].
typeslow() {
    # `read` gives up on a last line with no newline, which dropped every
    # trailing digit -- 70 went in as 7 and 100 as 1.
    printf %s "$1" | fold -w1 | while read -r ch || [ -n "$ch" ]; do
        printf 'key %s\nwait 22000000\n' "$ch"
    done
    printf 'key enter\nwait %s\n' "$WAIT"
}

press() {   # x y [right]
    printf 'mouse %s %s\nwait 2000000\ndown %s\nwait 2000000\nup %s\nwait %s\n' \
        "$1" "$2" "${3:-left}" "${3:-left}" "$WAIT"
}

{
    press 30 280                      # ｵﾌﾟｼｮﾝ
    press 100 8                       # ①建具平面
    # ①見込 and ②枠幅, the two sizes on the 建具選択 bar, if asked for.
    if [ -n "$DEPTH" ]; then
        press 190 8
        typeslow "$DEPTH"
    fi
    if [ -n "$WIDTH" ]; then
        press 300 8
        typeslow "$WIDTH"
    fi
    press $CELL                       # the shape
    press $LINE                       # the 基準線
    press $AT                         # where it goes
} > tmp/optpick/place_pre.txt

PRE=tmp/optpick/place_pre.txt OUT=tmp/optpick/place.raw DRAWING="$DRAWING" \
    sh tools/save.sh
cp "tmp/sroot/$DRAWING.JWC" tmp/optpick/placed.JWC
echo "-- tmp/optpick/placed.JWC"
