#!/bin/sh
# Register the same figure from a grid of base points, and print the header
# each one wrote.
#
#     sh tools/zukeigrid.sh "140 120" "140 130" "170 120"
#     RANGE="140 120 620 420" sh tools/zukeigrid.sh "140 120" "170 130"
#
# Three of the nine numbers in a `.JWK`'s header are not understood; this is
# how they are being pinned down.  Each run starts from a fresh copy of
# `orig`, so the file has to be taken out before the next one.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/zukei/grid
for base in "$@"; do
    name="P$(echo "$base" | tr -d ' ')"
    BASE="$base" NAME="$name" sh tools/zukei.sh > /dev/null 2>&1
    cp "tmp/zukei/root/ZUKEI_1_/$name.JWK" "tmp/zukei/grid/$name.JWK"
    printf '%-12s %s\n' "$base" "$(python -c "
import sys
d = open('tmp/zukei/grid/$name.JWK', 'rb').read()
i = d.find(b'\\n')
print(d[i + 1:d.find(b'\\x00', i)].decode('latin-1'))
")"
done
