#!/bin/sh
# Everything, without opening a window.
#
#   sh tools/check.sh
#
# Builds both halves, runs the unit checks, reads every drawing the
# distribution ships, and compares the native and WASM screens byte for byte.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp

echo "=== building"
sh tools/build_tests.sh
sh tools/build_wasm.sh

echo
echo "=== the graphics controller"
./tests/vga_test.exe
echo "=== the line routine"
./tests/draw_test.exe
echo "=== the drawing reader"
./tests/jwc_test.exe

# node runs the WASM half. It is not on PATH on either machine this has been
# built on; emscripten ships one, so fall back to that rather than asking for
# an install. Set NODE to override.
NODE="${NODE:-}"
if [ -z "$NODE" ]; then
    command -v node >/dev/null 2>&1 && NODE=node
fi
if [ -z "$NODE" ]; then
    for n in "${EMSDK:-/c/prog/emsdk/emsdk}"/node/*/bin/node.exe; do
        [ -f "$n" ] && NODE="$n" && break
    done
fi
[ -n "$NODE" ] || { echo "no node: set NODE, or put one on PATH" >&2; exit 1; }

echo
echo "=== native against WASM, pixel for pixel"
fail=0
for f in orig/SAMPLE1.JWC orig/SAMPLE2.JWC orig/SAMPLE3.JWC orig/SAMPLE5.JWC \
         orig/SAMPLE6.JWC orig/TEST6.JWC orig/TEST7.JWC; do
    ./tests/drawing.exe "$f" tmp/n.raw > /dev/null
    "$NODE" tests/wasm_check.js "$f" tmp/w.raw > /dev/null
    if cmp -s tmp/n.raw tmp/w.raw; then
        echo "  same   $f"
    else
        echo "  DIFFER $f"
        fail=1
    fi
done
[ "$fail" = 0 ] || { echo "native and WASM disagree" >&2; exit 1; }

echo
echo "all checks passed"
