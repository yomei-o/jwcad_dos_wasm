#!/bin/sh
# Put a figure into a drawing with the original and **save the drawing**, so
# that what a placed figure looks like as records can be read off the file.
#
#     sh tools/zukeiplace.sh
#     AT="400 300;450 200" sh tools/zukeiplace.sh          # two copies
#     DRAWING=TEST1 RANGE="140 120 620 420" BASE="140 120" \
#         FIRST=right AT="300 300" sh tools/zukeiplace.sh
#
# The road: register the figure (tools/zukei.sh's road, with the same
# defaults), then 図形 ②読込, pick it out of the group, press where it goes --
# and then 入出力 ①ファイル ①保存 … ①実行, which is tools/save.sh's road.
# save.sh takes the first half as PRE.
#
# **The 560,8 press is a no-op and is here because tools/zukei.sh has it.**
# The second corner taken with the right button fixes the range *and* goes
# on to the base point, so `①範囲 確定` is never reached; the press lands on
# a line with no cell there and nothing happens.  Keeping it means this walks
# exactly the road the port is compared against.
#
# What comes out: tmp/zukei/placed.JWC -- the drawing with the figure in it --
# and tmp/zukei/place.raw as the screen.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/zukei tmp/save

DRAWING="${DRAWING:-SAMPLE0}"
RANGE="${RANGE:-170 130 330 260}"
BASE="${BASE:-170 130}"
NAME="${NAME:-BOX}"
FIRST="${FIRST:-}"
AT="${AT:-400 300}"
WAIT="${WAIT:-22000000}"

set -- $RANGE
ax=$1; ay=$2; bx=$3; by=$4
set -- $BASE
px=$1; py=$2

press() {   # x y [right]
    printf 'mouse %s %s\nwait 2000000\ndown %s\nwait 2000000\nup %s\nwait %s\n' \
        "$1" "$2" "${3:-left}" "${3:-left}" "$WAIT"
}

{
    press 30 248                      # 図形
    press 84 8                        # ①登録
    press "$ax" "$ay" $FIRST          # the range, corner one
    press "$bx" "$by" right           # and the other
    press 560 8                       # (nothing: see above)
    press "$px" "$py"                 # the base point
    press 296 8                       # ①選択確定
    printf 'type %s\nwait %s\nkey enter\nwait %s\n' "$NAME" "$WAIT" "$WAIT"
    press 210 8                       # ① 実 行
    press 140 8                       # ②読込
    press 190 72                      # the figure's own cell in the list
    IFS=';'
    for at in $AT; do
        unset IFS
        press $at                     # where it goes
        IFS=';'
    done
    unset IFS
} > tmp/zukei/place_pre.txt

PRE=tmp/zukei/place_pre.txt OUT=tmp/zukei/place.raw DRAWING="$DRAWING" \
    sh tools/save.sh
cp "tmp/sroot/$DRAWING.JWC" tmp/zukei/placed.JWC
echo "-- tmp/zukei/placed.JWC"
