#!/bin/sh
# 一覧ぜんぶを測ります。**これを使ってください。**
#
#   sh tools/cases.sh tools/cases/calc.txt          # ぜんぶ
#   sh tools/cases.sh tools/cases/calc.txt f2       # 名前に f2 が入るものだけ
#
# 本物の絵は tmp/origcache に取ってあるので、2 回目からは移植を走らせて
# 読み比べるだけ——64 通りで **1 秒**です。取っていない件だけ本物を
# 動かして（1 件 6 秒、6 本並列）、そのあともう一度測ります。
#
# **先に sh tools/build_wasm.sh** を。ここは作り直しません。
set -e
cd "$(dirname "$0")/.."
list="$1"
only="$2"
[ -f "$list" ] || { echo "no such list: $list" >&2; exit 2; }
NODE="${NODE:-}"
[ -n "$NODE" ] || { command -v node > /dev/null 2>&1 && NODE=node; }
[ -n "$NODE" ] || NODE=$(ls /c/prog/emsdk/emsdk/node/*/bin/node.exe 2>/dev/null | head -1)
[ -n "$NODE" ] || { echo "no node (set NODE)" >&2; exit 2; }
mkdir -p tmp
miss=tmp/miss.txt
rm -f "$miss"
MISSLIST="$miss" "$NODE" tools/seqall.mjs "$list" "$only" > tmp/cases.out 2>&1 || true
if [ -s "$miss" ]; then
    n=$(grep -c . "$miss" || true)
    echo "本物を $n 件撮ります（1 件 6 秒、6 本並べて）..."
    sh tools/runcases.sh "$miss" > /dev/null 2>&1 || true
fi
"$NODE" tools/seqall.mjs "$list" "$only"
