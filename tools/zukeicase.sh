#!/bin/sh
# One 図形 ①登録 case, walked by the original and by the port with the same
# numbers, and the two files held against each other.
#
#     sh tools/zukeicase.sh
#     DRAWING=TEST1 RANGE="140 120 620 420" BASE="140 120" NAME=BOTH \
#         FIRST=right sh tools/zukeicase.sh
#
# The screen and the drawing line up one to one when a drawing is opened:
# screen x = unit + 121 and screen y = 463 - unit, measured off two figures
# whose base points are known (tools/zukei.sh with TEST1).  So a thing at
# drawing (28,80) is pressed at (149,383).
set -e
cd "$(dirname "$0")/.."
sh tools/zukei.sh > /dev/null 2>&1
NODE=/c/prog/emsdk/emsdk/node/22.16.0_64bit/bin/node
[ -x "$NODE" ] || NODE=node
"$NODE" tools/zukeiport.mjs
