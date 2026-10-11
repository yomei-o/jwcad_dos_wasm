#!/bin/sh
# 本物の画面を 1 枚撮って png にする（probe.sh の薄い包み）。
#   sh tools/pshot.sh NAME probe.sh の引数...     -> tmp/shots/o_NAME.png
# 書いた文字列の一覧（レイヤ一覧の 0-n の札は除く）も出す。
cd "$(dirname "$0")/.."
name=$1
shift
mkdir -p tmp/shots
sh tools/probe.sh "$@" 2>&1 | grep -v "row=\(2\|9\|16\|23\) .*0-[0-9A-F] "
python tools/rawpng.py tmp/probe/after.raw "tmp/shots/o_$name.png"
