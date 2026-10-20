#!/bin/sh
# HELP: the port's screen against the original's, pixel for pixel.
#
#     sh tools/helpcheck.sh
#
# The original runs in ../dosv_emu_cpp on a copy of orig/ whose JW_CADV.EXE is
# dated 1999-01-01 (the banner on HELP's second row is that file's date, and the
# archive says 99/01/01).  Keys are pressed from 入出力: 1 next, 3 基本操作,
# 4 ｽﾞｰﾑ操作, 5 ﾚｲﾔ操作, Enter the first page.  The pointer stays on the HELP
# button.  Needs tests/help.exe (sh tools/build_tests.sh).
set -e
cd "$(dirname "$0")/.."
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
R=tmp/helproot
rm -rf $R tmp/hc; mkdir -p tmp/hc
cp -r orig $R
touch -d '1999-01-01 02:22:58' $R/JW_CADV.EXE

# page:key that gets there from the one before
STEPS="102: 103:1 104:1 105:1 106:3 107:1 118:4 119:1 122:5 123:1 124:1 125:1 1:enter 2:1 1:2"
{
    echo "wait 26000000"
    echo "mouse 620 470"; echo "wait 2000000"; echo "click L"; echo "wait 14000000"
    echo "shot tmp/hc/102.raw"
    n=0
    for st in $STEPS; do
        page=${st%%:*}; key=${st##*:}
        [ -n "$key" ] || continue
        echo "key $key"; echo "wait 14000000"; echo "shot tmp/hc/${page}_$n.raw"
        n=$((n+1))
    done
} > tmp/hc/s.txt
$EMU --root $R --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT --script tmp/hc/s.txt $R/JW_CADV.EXE >/dev/null 2>&1

bad=0
n=0
for st in $STEPS; do
    page=${st%%:*}; key=${st##*:}
    if [ -z "$key" ]; then f=tmp/hc/102.raw; else f=tmp/hc/${page}_$n.raw; n=$((n+1)); fi
    printf '%s ' "page $page"
    ./tests/help.exe $page tmp/hc/port_$page.raw $f || bad=1
done
exit $bad
