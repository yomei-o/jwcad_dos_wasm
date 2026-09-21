#!/bin/sh
# Does a double press on a row of 入出力 → ①ﾌｧｲﾙ → ②読込 open that drawing?
#
#     sh tools/dblcheck.sh              # the original, two presses close together
#     GAP=20000000 sh tools/dblcheck.sh # far apart, for the difference
#     PRESSES=1 sh tools/dblcheck.sh   # one press, to see what one does
#     ROW2=12 sh tools/dblcheck.sh    # the second press on another row
#
# A visitor said the list answers a double click and the port did not
# (2026-09-21).  Before writing any of that, this asks the original.
#
# **The clock has to run.**  A double click is two presses within a time, and
# with INT 21h/2Ch answering the same hundredth for ever the program cannot
# tell one from two -- every pair would look instantaneous.  So this runs the
# guest's clock the way the page does.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/dbl
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }

DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-26000000}"
GAP="${GAP:-300000}"            # between the two presses of the pair
ROW="${ROW:-10}"                # a row of the list; 8 is the first

# A copy, so the distribution directory is never written to: the guest drops
# an AUTO.JWC wherever it runs.
rm -rf tmp/dbl/root
cp -r orig tmp/dbl/root
# Only the distribution.  orig/ is also where the drawings written while
# analysing land, and one of those in the list puts every row below it out
# of step with the port, which has only the fourteen.
rm -f tmp/dbl/root/AUTO.JWC tmp/dbl/root/QPICK.JWC tmp/dbl/root/QBYTES.JWC tmp/dbl/root/ONE2.JWC

{
    printf 'wait %s\n' "$BOOT"
    for step in "30 296" "110 8" "180 8"; do
        set -- $step
        printf 'mouse %s %s\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
            "$1" "$2" "$WAIT"
    done
    printf 'shot ../jwcad_dos_wasm/tmp/dbl/list.raw\n'
    y=$((ROW * 16 - 8))
    printf 'mouse 300 %s\nwait 200000\ndown left\nwait 200000\nup left\nwait %s\n' \
        "$y" "$GAP"
    if [ "${PRESSES:-2}" -ge 2 ]; then
        # ROW2 makes the second press land on a different row, which is how
        # "the same row again" is told apart from "any second press".
        y2=$(( ${ROW2:-$ROW} * 16 - 8 ))
        printf 'mouse 300 %s\nwait 200000\ndown left\nwait 200000\nup left\nwait %s\n' \
            "$y2" "$WAIT"
    fi
    printf 'wait %s\n' "${TAIL:-100000000}"
    printf 'shot ../jwcad_dos_wasm/tmp/dbl/after.raw\n'
} > tmp/dbl/s.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" \
    "$EMU" --root tmp/dbl/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/dbl/s.txt \
    tmp/dbl/root/JW_CADV.EXE "$DRAWING.JWC" > tmp/dbl/run.txt 2>&1 || true

echo "--- the list was up:"
python tools/readrow.py tmp/dbl/list.raw 1 | head -1
echo "--- after two presses on row $ROW, $GAP instructions apart:"
python tools/readrow.py tmp/dbl/after.raw 1 | head -1
