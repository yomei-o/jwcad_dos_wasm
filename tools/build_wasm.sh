#!/bin/sh
# Build the browser front end with emscripten, at low priority (tools/lowpri.sh).
#
# Output lands in the repository root because GitHub Pages serves main:/ .
# The sample drawings are baked in with --embed-file so src/jwc.c keeps using
# fopen() exactly as the native build does.  FS is exported for the same
# reason: a drawing the visitor uploads is written into the module's own
# filesystem and then opened by name, so it is read by jwc_load like any
# other, rather than by a second entry point that parses from memory.
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
EXPORTS=$EXPORTS,_jw_plot,_jw_plot_wanted,_jw_plot_name
EXPORTS=$EXPORTS,_jw_file_count,_jw_file_sel,_jw_file_name,_jw_file_title
EXPORTS=$EXPORTS,_jw_count
EXPORTS=$EXPORTS,_jw_top_item,_jw_io_stage
EXPORTS=$EXPORTS,_malloc,_free

SRC="src/main_wasm.c src/tategu.c src/view.c src/draw.c src/vga.c src/jwc.c src/fontx.c src/ui.c src/cmd.c src/read.c src/plot.c src/png.c"

EMBED=""
# JW_SAMPL.BAT is on the disk because ｵﾌﾟｼｮﾝ ⑦外部処理 lists `*.bat` and the
# original's screen shows that one file, its date, its size and its first
# line.  The JW_OPT*.DAT are the 建具 and 2.5D libraries ｵﾌﾟｼｮﾝ reads.
for f in orig/SAMPLE*.JWC orig/TEST*.JWC orig/JW_PAL.DAT orig/JW_SAMPL.BAT          orig/JW_OPT*.DAT orig/JW_FILE0.000 font/JWANK16.FNT font/JWKAN16.FNT; do
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
   -s EXPORTED_RUNTIME_METHODS=HEAPU8,UTF8ToString,lengthBytesUTF8,stringToUTF8,FS \
   -s ALLOW_MEMORY_GROWTH=1 -s ENVIRONMENT=web,node \
   -s EXPORTED_FUNCTIONS="$EXPORTS"

if [ ! -f jwcad.wasm ] || [ ! jwcad.wasm -nt "$STAMP" ]; then
    echo "emcc did not rewrite jwcad.wasm - the build failed" >&2
    exit 1
fi
# **The stamp the page puts on the two file names.**  Without it a browser
# that has read jwcad.js and jwcad.wasm once keeps using them, and a push
# changes nothing for anyone who has been to the page before.
BUILD=$(date +%Y%m%d%H%M%S)
sed -i "s/const JW_BUILD = '[^']*'/const JW_BUILD = '$BUILD'/" index.html
sed -i "s|src=\"jwcad.js?v=[^\"]*\"|src=\"jwcad.js?v=$BUILD\"|" index.html
grep -q "JW_BUILD = '$BUILD'" index.html || {
    echo "the build stamp did not go into index.html" >&2; exit 1; }

echo "built jwcad.js + jwcad.wasm"
