#!/bin/sh
# Grow src/item.h until it stops helping.
#
#     sh tools/itemloop.sh [rounds]
#
# A round is: measure every branch, add the ones that still differ to the set
# src/item.h is generated from, rebuild, measure again.  The set only grows --
# a branch the table already answers measures nought and would otherwise drop
# out of the list and come straight back.
#
# tmp/branch/keep.txt is that set.  Delete it to start over.
set -e
cd "$(dirname "$0")/.."
PATH="$PATH:/c/prog/emsdk/emsdk/node/22.16.0_64bit/bin"
rounds="${1:-3}"
touch tmp/branch/keep.txt

i=0
while [ "$i" -lt "$rounds" ]; do
    i=$((i + 1))
    awk 'NF>5 && $NF+0>0 {print $1}' tmp/branch/table.txt > tmp/branch/bad2.txt
    cat tmp/branch/keep.txt tmp/branch/bad2.txt | tr ' ' '\n' | grep -E '^[0-9]+$' \
        | sort -n -u | tr '\n' ' ' > tmp/branch/keep2.txt
    mv tmp/branch/keep2.txt tmp/branch/keep.txt
    python tools/item_table.py $(cat tmp/branch/keep.txt) > src/item.h
    sh tools/build_wasm.sh 2>&1 | grep -E '^built|error:'
    node tools/branchport.mjs 1 284 > /dev/null
    python tools/branchdiff.py > tmp/branch/table.txt
    echo "round $i: $(tail -1 tmp/branch/table.txt)  (table $(wc -w < tmp/branch/keep.txt) branches)"
done
