#!/bin/sh
# 図形 ②読込 -- read a registered figure back into the drawing, with the
# original, and keep every screen and every string.
#
#     sh tools/zukeiread.sh
#     AT="400 300;500 350" sh tools/zukeiread.sh
#
# The distribution ships no figures at all (`orig/` has no ZUKEI_1_), so this
# registers one first -- the same road tools/zukei.sh walks, with the same
# defaults -- and then reads it back.  The shots are
#
#     tmp/zukei/s0..s8   the registration, as tools/zukei.sh leaves them
#     tmp/zukei/s9       ②読込: the list of figures in the group
#     tmp/zukei/s10      the figure picked: `位置指示(L)free (R)Read |①倍率
#                        指定X,Y|②角  度|③90ﾟ毎|④ﾏｳｽ角|⑤仮表示|`
#     tmp/zukei/s11...   one per point in AT, each of which puts a copy down
#                        and moves the line on to `◆ 位置指示(L)free (R)Read
#                        |①同図形別処理 |②他図形読込|`
#
# The figure's own cell in the list is the first one, at (190,72).
set -e
cd "$(dirname "$0")/.."

# **One point by default.**  tools/zukei_table.py turns every step of
# this run into a stage, and a second point would be stage 12, which is
# already the first corner's other button.
AT="${AT:-400 300}"
EXTRA="140 8;190 72;$AT" sh tools/zukei.sh
