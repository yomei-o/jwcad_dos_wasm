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
echo "=== reading a drawing and writing it straight back"
./tests/roundtrip.exe orig/*.JWC

# The screen around the drawing, against the original's own picture of it.
# Needs the emulator; skipped where it is not built.
if [ -x ../dosv_emu_cpp/dosemu.exe ]; then
    echo "=== the screen around the drawing"
    sh tools/ui.sh
    echo "=== every drawing, the whole screen"
    sh tools/full.sh
    echo "=== the whole screen after a drawing command, against the original's"
    sh tools/pressfull.sh 2 300 200 450 250       # ＋  a line on an axis
    sh tools/pressfull.sh 3 200 100 500 400       # ／  a line
    sh tools/pressfull.sh 4 250 150 450 350       # □  a box
    sh tools/pressfull.sh 11 300 200 400 200      # ○  a circle
    echo "=== and the moment after a point is taken, before the pointer moves:"
    echo "    the counts box keeps the two counts and nothing is dragged yet"
    sh tools/pressfull.sh 2 300 200
    sh tools/pressfull.sh 3 300 200
    sh tools/pressfull.sh 4 250 150
    sh tools/pressfull.sh 11 300 200
    sh tools/pressfull.sh 12 300 250
    sh tools/pressfull.sh 12 300 250 400 250
    sh tools/pressfull.sh 25 150 130
    echo "=== （ 任意の弧: centre, start, end -- the record keeps the shorter"
    echo "    way round, whichever order the two were pressed in (4.13)"
    sh tools/pressfull.sh 12 300 250 400 250 350 180
    sh tools/pressfull.sh 12 300 250 350 180 400 250
    sh tools/pressfull.sh 12 300 250 200 250 300 350
    sh tools/pressfull.sh 12 300 250 398 233 350 337
    sh tools/pressfull.sh 12 300 250 398 233 206 284
    echo "=== the right button reading a point, against the original's answer"
    sh tools/readcheck.sh 170 150 214 152 383 401 388 401 386 404 380 393         165 143 380 249 324 249 233 190
    DRAWING=SAMPLE1 sh tools/readcheck.sh 500 57 503 60
    DRAWING=SAMPLE6 sh tools/readcheck.sh 470 305 468 183 448 191
    DRAWING=TEST1 sh tools/readcheck.sh 245 341 201 341 450 290
    echo "=== a command started from a read point"
    sh tools/pressfull.sh 3 r 170 150 l 400 300
    DRAWING=SAMPLE6 sh tools/pressfull.sh 3 r 470 305 l 400 300
    echo "=== 消去 picking a range"
    sh tools/pressfull.sh 25 150 130 r 245 170
    echo "=== 消去 with the left button: 追加･除外, then 範囲確定 and 実行"
    echo "    (the 2 left over are the original's own erase clipping)"
    sh tools/erase2.sh 150 130 245 170 197 157
    echo "=== and [F2], which throws the whole selection away (4.9b)"
    FKEY=2 STOP=1 sh tools/erase2.sh 150 130 245 170 197 157
    FKEY=2 sh tools/erase2.sh 150 130 245 170 197 157
    echo "=== and 文字(R): a text is taken by a box ten wide round its baseline"
    echo "    (the dummy press is there because the first press after the range"
    echo "     never reaches the search -- RESUME 4.9b)"
    DUMMY="600 450" RIGHT=1 STOP=1 sh tools/erase2.sh 150 130 245 170 190 152
    DUMMY="600 450" RIGHT=1 STOP=1 sh tools/erase2.sh 150 130 245 170 163 143
    DUMMY="600 450" RIGHT=1 STOP=1 sh tools/erase2.sh 150 130 245 170 190 163
    DUMMY="600 450" RIGHT=1 STOP=1 sh tools/erase2.sh 150 130 245 170 225 152
    DUMMY="600 450" RIGHT=1 sh tools/erase2.sh 150 130 245 170 190 152
    echo "=== ②範囲外消去, which is a **cut**: what crosses the edge is shown"
    echo "    dotted and comes back shortened, not taken away"
    OUT=1 DUMMY="600 450" STOP=1 sh tools/erase2.sh 150 130 245 170 600 460
    OUT=1 DUMMY="600 450" STOP=1 sh tools/erase2.sh 150 130 245 170 197 157
    OUT=1 DUMMY="600 450" STOP=1 sh tools/erase2.sh 150 130 245 170 500 250
    OUT=1 DUMMY="600 450" sh tools/erase2.sh 150 130 245 170 600 460
    OUT=1 DUMMY="600 450" sh tools/erase2.sh 150 130 245 170 197 157
    echo "=== 追加･除外 on SAMPLE6, which only its pen-4 entities answer"
    DRAWING=SAMPLE6 WAIT=150000000 STOP=1 sh tools/erase2.sh 170 235 215 260 209 242
    echo "=== 点 dropping a 仮点"
    sh tools/pressfull.sh 22 300 250
    sh tools/pressfull.sh 22 300 250 400 300
    sh tools/pressfull.sh 22 r 383 401
    echo "=== taking a line away with 線消 (the rest is the original's own"
    echo "    erase clipping its neighbours, which it never paints back)"
    sh tools/delcheck.sh 380 140
    sh tools/delcheck.sh 197 157
    echo "=== and an arc: the original's 線消 says 線,円弧, and takes either"
    DRAWING=SAMPLE6 sh tools/delcheck.sh 446 189
    DRAWING=SAMPLE6 sh tools/delcheck.sh 260 152
    DRAWING=SAMPLE6 sh tools/delcheck.sh 191 259
    echo "=== a press that finds nothing: 8.5 from an arc, and on the three"
    echo "    quarters of its circle it does not draw"
    DRAWING=SAMPLE6 sh tools/delcheck.sh 244 140
    DRAWING=SAMPLE6 sh tools/delcheck.sh 254 120
    echo "=== which entity a press picks, against the original's own answer"
    sh tools/pickcheck.sh
    DRAWING=SAMPLE0 sh tools/pickcheck.sh 197 157 200 140 324 250 162 175 300 249
    DRAWING=SAMPLE6 WAIT=150000000 AX=170 AY=235 BX=215 BY=260 sh tools/pickcheck.sh 209 243 210 243 214 245 499 271 560 210 210 249
    echo "=== saving: the port writes the file, the original opens it"
    sh tools/savecheck.sh
    sh tools/savecheck.sh -c 3 -p 200 100 -p 500 400
    sh tools/savecheck.sh -c 11 -p 300 200 -p 400 200
    sh tools/savecheck.sh -c 10 -r 380 140
    DRAWING=SAMPLE6 BOOT=150000000 sh tools/savecheck.sh -c 5 -p 499 192 -k 300 -p 520 230
    echo "=== 複線 with a number typed in (src/cmd.c, RESUME 4.12)"
    sh tools/multicheck.sh 20 197 120
    sh tools/multicheck.sh 40 197 300
    DRAWING=SAMPLE1 LX=300 LY=200 sh tools/multicheck.sh 500 300 160
    DRAWING=SAMPLE1 LX=200 LY=400 sh tools/multicheck.sh 500 200 360
    echo "=== and on a slanted line: the 3 left over are the original drawing"
    echo "    the copy on top of a finished screen, where the port redraws"
    DRAWING=SAMPLE6 LX=499 LY=192 sh tools/multicheck.sh 300 520 230
    DRAWING=SAMPLE6 LX=499 LY=192 sh tools/multicheck.sh 300 470 160
    echo "=== 複線's other ways in: the function keys, (R)同じ寸法, ②連続"
    FKEY=1 sh tools/multicheck.sh - 197 120
    FKEY=5 sh tools/multicheck.sh - 197 300
    RIGHT=1 sh tools/multicheck.sh 20 197 120
    CONT=1 sh tools/multicheck.sh 20 197 120
    GET=197,419 sh tools/multicheck.sh - 300 300
    echo "=== picking a command with its one-letter key"
    sh tools/keycheck.sh D 10
    sh tools/keycheck.sh C 1
    echo "=== the line a half-finished command drags"
    sh tools/bandcheck.sh 3 300 200 450 320
    sh tools/bandcheck.sh 4 250 150 450 350
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
    # and the file the browser's 保存 button would hand over, against the file
    # the native build writes -- the same src/jwc.c, so it has to be the same
    ./tests/drawing.exe -u -w tmp/n.JWC "$f" tmp/n.raw > /dev/null
    "$NODE" tests/wasm_check.js "$f" tmp/w.JWC > /dev/null
    if cmp -s tmp/n.raw tmp/w.raw && cmp -s tmp/n.JWC tmp/w.JWC; then
        echo "  same   $f"
    else
        echo "  DIFFER $f"
        fail=1
    fi
done
[ "$fail" = 0 ] || { echo "native and WASM disagree" >&2; exit 1; }

echo
echo "all checks passed"
