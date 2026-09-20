#!/bin/sh
# Build the browser front end with emscripten, at low priority (tools/lowpri.sh).
#
# Output lands in the repository root because GitHub Pages serves main:/ .
# The sample drawings are baked in with --embed-file so src/jwc.c keeps using
# fopen() exactly as the native build does.
set -e
cd "$(dirname "$0")/.."
EMSDK="${EMSDK:-/c/prog/emsdk/emsdk}"
EMCC="$EMSDK/upstream/emscripten/emcc.exe"
[ -f "$EMCC" ] || { echo "emcc not found at $EMCC" >&2; exit 1; }

EXPORTS=_main,_jw_init,_jw_open,_jw_zoom,_jw_pan,_jw_fit,_jw_home
EXPORTS=$EXPORTS,_jw_mouse,_jw_click,_jw_key,_jw_menu_at,_jw_menu_label,_jw_mods
EXPORTS=$EXPORTS,_jw_typing
EXPORTS=$EXPORTS,_jw_width,_jw_height,_jw_framebuffer,_jw_status
EXPORTS=$EXPORTS,_jw_save,_jw_saved,_jw_saved_size
EXPORTS=$EXPORTS,_malloc,_free

SRC="src/main_wasm.c src/view.c src/draw.c src/vga.c src/jwc.c src/fontx.c src/ui.c src/cmd.c src/read.c"

EMBED=""
for f in orig/SAMPLE*.JWC orig/TEST*.JWC orig/JW_PAL.DAT font/JWANK16.FNT font/JWKAN16.FNT; do
    EMBED="$EMBED --embed-file $f@/$f"
done

# `cmd /c start /WAIT` does not hand emcc's exit status back, so without the
# check at the end a compile error is announced as a successful build and the
# stale .wasm stays in place.
mkdir -p tmp
STAMP=tmp/.wasm-stamp
: > "$STAMP"

sh tools/lowpri.sh "$EMCC" -O2 -Wall -Wextra -Isrc \
   -o jwcad.js \
   $SRC $EMBED \
   -s MODULARIZE=1 -s EXPORT_NAME=createJwcad \
   -s EXPORTED_RUNTIME_METHODS=HEAPU8,UTF8ToString,lengthBytesUTF8,stringToUTF8 \
   -s ALLOW_MEMORY_GROWTH=1 -s ENVIRONMENT=web,node \
   -s EXPORTED_FUNCTIONS="$EXPORTS"

if [ ! -f jwcad.wasm ] || [ ! jwcad.wasm -nt "$STAMP" ]; then
    echo "emcc did not rewrite jwcad.wasm - the build failed" >&2
    exit 1
fi
echo "built jwcad.js + jwcad.wasm"
