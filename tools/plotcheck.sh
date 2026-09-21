#!/bin/sh
# The plotter's two files, through the same entry point the page's buttons
# use (tools/plotcheck.mjs).
#
#     sh tools/plotcheck.sh
#
# There is nothing to compare a PDF against -- the original plots to a
# plotter, not to a file -- so this checks that both come out well formed on
# every drawing that ships.
set -e
cd "$(dirname "$0")/.."
NODE="${NODE:-}"
[ -n "$NODE" ] || { command -v node > /dev/null 2>&1 && NODE=node; }
[ -n "$NODE" ] || NODE=$(ls /c/prog/emsdk/emsdk/node/*/bin/node.exe 2>/dev/null | head -1)
[ -n "$NODE" ] || { echo "no node (set NODE)" >&2; exit 2; }
bad=0
for f in orig/*.JWC; do
    n=$(basename "$f" .JWC)
    out=$("$NODE" tools/plotcheck.mjs "$f" | tr '\n' ' ') || bad=$((bad + 1))
    printf '  %-10s %s\n' "$n" "$out"
done
echo "plot: $bad drawings failed"
[ "$bad" = 0 ]
