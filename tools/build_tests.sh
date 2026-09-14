#!/bin/sh
# Build the checks that run without opening a window.
#
#   sh tools/build_tests.sh
#   ./tests/vga_test.exe && ./tests/draw_test.exe
#   ./tests/screen.exe tmp/lines.png
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -o tests/vga_test.exe  tests/vga_test.c  src/vga.c
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -o tests/draw_test.exe tests/draw_test.c src/vga.c src/draw.c -lm
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -Itests -o tests/screen.exe tests/screen.c tests/png.c src/vga.c src/draw.c -lm
echo "built tests/vga_test.exe tests/draw_test.exe tests/screen.exe"
