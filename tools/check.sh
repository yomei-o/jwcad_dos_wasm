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

# The screen around the drawing, against the original's own picture of it.
# Needs the emulator; skipped where it is not built.
if [ -x ../dosv_emu_cpp/dosemu.exe ]; then
    echo "=== the screen around the drawing"
    sh tools/ui.sh
    echo "=== every drawing, the whole screen"
    sh tools/full.sh
    if [ -f tmp/menus/c01.raw ]; then
        echo "=== the screen after each menu item is picked"
        sh tools/menucheck.sh | tail -3
    else
        echo "=== menu items -- skipped, run sh tools/menus.sh first"
    fi
else
    echo "=== the screen around the drawing -- skipped, no ../dosv_emu_cpp"
fi

# Zoomed in, the browser front end asks the drawing routines to work at the
# edge of the screen. Nothing may land outside the view's window: a glyph that
# ran off the right used to reappear on the left of the next scan line.
echo "=== nothing drawn outside the window, zoomed in"
for f in orig/SAMPLE1.JWC orig/SAMPLE2.JWC orig/SAMPLE3.JWC orig/SAMPLE6.JWC          orig/TEST6.JWC orig/TEST7.JWC; do
    for z in 2 8 32; do
        ./tests/zoom.exe "$f" "$z" || exit 1
    done
done

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
    ./tests/drawing.exe -u "$f" tmp/n.raw > /dev/null
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
