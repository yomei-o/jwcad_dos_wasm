#!/bin/sh
# Put a figure into a drawing with the original and **save the drawing**, so
# that what a placed figure looks like as records can be read off the file.
#
#     sh tools/zukeiplace.sh                 # place at (400,300)
#     AT="400 300" sh tools/zukeiplace.sh
#
# The road: register BOX (tools/zukei.sh's defaults), then 図形 ②読込, pick
# the figure, press where it goes -- and then 入出力 ①ファイル ①保存 … ①実行,
# which is tools/save.sh's road.  save.sh takes the first half as PRE.
#
# What comes out: tmp/sroot/SAMPLE0.JWC with the figure in it, and
# tmp/zukei/place.raw as the screen.  `python tools/jwkplaced.py` reads the
# new records out of it.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/zukei tmp/save

AT="${AT:-400 300}"
WAIT="${WAIT:-22000000}"

press() {   # x y [right]
    printf 'mouse %s %s\nwait 2000000\ndown %s\nwait 2000000\nup %s\nwait %s\n' \
        "$1" "$2" "${3:-left}" "${3:-left}" "$WAIT"
}

{
    press 30 248                      # 図形
    press 84 8                        # ①登録
    press 170 130                     # the range, corner one
    press 330 260 right               # and the other
    press 560 8                       # ①範囲 確定
    press 170 130                     # the base point
    press 296 8                       # ①選択確定
    printf 'type BOX\nwait %s\nkey enter\nwait %s\n' "$WAIT" "$WAIT"
    press 210 8                       # ① 実 行
    press 140 8                       # ②読込
    press 190 72                      # the figure's own cell in the list
    press $AT                         # where it goes
} > tmp/zukei/place_pre.txt

PRE=tmp/zukei/place_pre.txt OUT=tmp/zukei/place.raw sh tools/save.sh
cp tmp/sroot/SAMPLE0.JWC tmp/zukei/placed.JWC
echo "-- tmp/zukei/placed.JWC"
