#!/bin/sh
# Build the checks that run without opening a window.
#
#   sh tools/build_tests.sh
#   ./tests/vga_test.exe && ./tests/draw_test.exe
#   ./tests/screen.exe tmp/lines.png
#   ./tests/drawing.exe orig/SAMPLE2.JWC tmp/sample2.png
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -o tests/vga_test.exe  tests/vga_test.c  src/vga.c
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -o tests/draw_test.exe tests/draw_test.c src/vga.c src/draw.c -lm
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -Itests -o tests/screen.exe tests/screen.c tests/png.c src/vga.c src/draw.c -lm
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -o tests/jwc_test.exe tests/jwc_test.c src/jwc.c
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -o tests/layers.exe tests/layers.c src/jwc.c
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -Itests -o tests/drawing.exe tests/drawing.c tests/png.c src/vga.c src/draw.c src/jwc.c src/view.c src/fontx.c src/ui.c src/cmd.c src/read.c -lm
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -Itests -o tests/compare.exe tests/compare.c tests/png.c
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -Itests -o tests/zoom.exe tests/zoom.c tests/png.c src/vga.c src/draw.c src/jwc.c src/view.c src/fontx.c -lm
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -Itests -o tests/ui.exe tests/ui.c src/vga.c src/draw.c src/jwc.c src/view.c src/fontx.c src/ui.c -lm
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -Itests -o tests/readpt.exe tests/readpt.c src/vga.c src/draw.c src/jwc.c src/view.c src/fontx.c src/read.c -lm
echo "built tests/vga_test.exe tests/draw_test.exe tests/jwc_test.exe tests/screen.exe tests/drawing.exe tests/compare.exe tests/zoom.exe tests/ui.exe tests/readpt.exe"
