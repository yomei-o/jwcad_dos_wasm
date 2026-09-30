#!/bin/sh
# いまの移植（jwcad.js / jwcad.wasm）を tmp/snap に写します。長い比較はこの写しで：
#   sh tools/snap.sh
#   PORTREC=tmp/snap/tools/portrec.mjs sh tools/funccases.sh ...
#   STEPSHOTS=tmp/snap/tools/stepshots.mjs STEPOUT=tmp/stepsnap python tools/stepcheck.py ...
cd "$(dirname "$0")/.."
mkdir -p tmp/snap/tools
cp jwcad.js jwcad.wasm tmp/snap/
cp tools/portrec.mjs tools/stepshots.mjs tmp/snap/tools/
echo "snap: $(ls -l jwcad.wasm | awk '{print $6, $7, $8}')"
