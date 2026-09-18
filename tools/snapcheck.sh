#!/bin/sh
# The modified reads, the port against the original, case by case.
#
#   sh tools/snapcheck.sh
#
# Every case here was measured on the running original first (RESUME.md 4.19);
# this runs it again and puts the port's answer beside it, so the agreement
# keeps being true rather than having been true once.
#
# One run of the original per case, which is a few seconds each.  The original
# never says outright where a point is: it writes the length and the angle from
# the point it took to wherever the pointer is, so each case ends by moving the
# pointer somewhere known and the point is worked back out from the pair.  The
# comparison is to a thousandth of a millimetre of paper, which is the width of
# the original's own field -- about five thousandths of a screen dot.
set -e
cd "$(dirname "$0")/.."
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
[ -x tests/snap.exe ] || { echo "sh tools/build_tests.sh first" >&2; exit 2; }

bad=0
# drawing | modifier | first press | second press and button | where to leave
# the pointer.  A second press of `-` means there is none: [GRPH] on a line or
# a circle answers with one press.
run() {
    drawing=$1; mod=$2; x=$3; y=$4; bx=$5; by=$6; btn=$7; ex=$8; ey=$9
    if [ "$btn" = - ]; then
        orig=$(DRAWING="$drawing" sh tools/readmod.sh "$mod" "$x" "$y" "$ex" "$ey")
        port=$(./tests/snap.exe "orig/$drawing.JWC" "$mod" "$x" "$y")
    else
        orig=$(DRAWING="$drawing" sh tools/readmod.sh "$mod" "$x" "$y" \
                                   "$bx" "$by" "$btn" "$ex" "$ey")
        port=$(./tests/snap.exe "orig/$drawing.JWC" "$mod" "$x" "$y" \
                                "$bx" "$by" "$btn")
    fi
    if [ "$(ORIG="$orig" PORT="$port" AT="$ex $ey" python tools/snapcheck.py)" = same ]
    then
        printf '  %-8s %-5s (%s,%s) -> %s\n' "$drawing" "$mod" "$x" "$y" "$port"
    else
        printf '  %-8s %-5s (%s,%s) DIFFERS\n' "$drawing" "$mod" "$x" "$y"
        ORIG="$orig" PORT="$port" AT="$ex $ey" python tools/snapcheck.py \
            | sed 's/^/    /'
        bad=$((bad + 1))
    fi
}

echo "[SHIFT] 線･円上点スナップ"
run SAMPLE0 shift 300 402 400 398 L 450 300
run SAMPLE0 shift 300 402 250 419 L 300 300
run SAMPLE0 shift 200 157 300 157 L 350 250
run SAMPLE0 shift 200 157 162 140 R 300 250
run SAMPLE0 shift 300 300 -   -   -  300 300
run SAMPLE6 shift 415 158 430 165 L 500 300
run SAMPLE6 shift 415 158 460 190 L 550 320
echo "[GRPH] 中心点・２点間中心"
run SAMPLE0 alt   300 398 -   -   -  300 398
run SAMPLE0 alt   232 157 400 157 L 500 300
run SAMPLE0 alt   170 150 300 150 L 400 250
run SAMPLE6 alt   415 158 -   -   -  415 158

[ "$bad" = 0 ] && echo "all snaps agree" || { echo "$bad differ"; exit 1; }
