#!/bin/sh
# Which entity does the original pick when 追加･除外 is pressed at a point?
#
#   sh tools/pickat.sh 197 157 200 140 324 250
#   sh tools/pickat.sh f5 300 330          # [F5] first, then the press
#   DRAWING=SAMPLE6 WAIT=150000000 sh tools/pickat.sh 209 242 214 245
#   AX=170 AY=235 BX=215 BY=260 sh tools/pickat.sh 209 242    # a different range
#
# 消去 → a range with two left presses → then one left press per pair of
# arguments, each of which is an 追加･除外 indication.  The stage stays up, so
# any number of points can be asked in one run.
#
# The search is `11f2:573f`; what it answers goes into DX:AX and the caller
# tests `or dx,ax` for nothing-found, so a breakpoint on the instruction that
# stores it (`11f2:56a2`, `mov [bp-1ah],ax`) reads the answer straight out of
# the original.  DOSEMU_BPPTR with a negative number prints a register rather
# than a stack word: -1 is ax and -3 is dx (dosv_emu_cpp src/cpu.cpp's kRegs).
#
# The answer is one long, and AX is **the entity counting from one**: pressing
# on SAMPLE0's line 5 gives 6, on its line 1 gives 2, on SAMPLE6's line 779
# gives 0x30C = 780.  0 is "読取可能データ無".
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/pick
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
WAIT="${WAIT:-40000000}"
ax="${AX:-150}"; ay="${AY:-130}"; bx="${BX:-245}"; by="${BY:-170}"
# **The first press after the range never reaches the search.**  Measured: give
# n presses and n-1 searches are reported, always missing the first.  So one is
# thrown away first, at a corner where there is nothing to pick; DUMMY moves it
# if a drawing has something there.
dummy="${DUMMY:-600 450}"
pts="$*"

# How long to leave the original after each press.  24 million is what a
# press needs to be sure of; asking many points at once is worth shortening
# it, and a press that is lost simply leaves no report -- tools/pickcheck.py
# pairs on the point, not on the order.
PWAIT="${PWAIT:-24000000}"
P="mouse %d %d\nwait 3000000\ndown left\nwait 3000000\nup left\nwait $PWAIT\n"
{
    printf 'wait %s\nmouse 30 216\nwait 2000000\nclick left\nwait 24000000\n' "$WAIT"
    printf "$P" "$ax" "$ay"
    printf "$P" "$bx" "$by"
    printf "$P" $dummy
    while [ $# -ge 1 ]; do
        case $1 in
            f*)             # a function key: [F1] to [F10], in its turn
                printf 'key %s\nwait %s\n' "$1" "$PWAIT"
                shift
                continue
                ;;
        esac
        [ $# -ge 2 ] || break
        printf "$P" "$1" "$2"
        shift 2
    done
} > tmp/pick/script.txt

# Two breakpoints: the search's own entry, where the point it was handed sits
# on the stack as two doubles, and the store just after the call, where the
# answer is in DX:AX.  Both are needed because **a press does not always reach
# the search**, so pairing answers with presses by counting them is wrong.
# tools/pickat.py puts the two together, one line per search.
DOSEMU_BP=+11F2:573F,+11F2:56A2 DOSEMU_BPN=400 DOSEMU_BPDBL=2,6 DOSEMU_BPPTR=-1,-3 \
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/pick/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" 2>/dev/null \
  | grep -a '^.bp.' > tmp/pick/raw.txt
python tools/pickat.py "$DRAWING" tmp/pick/raw.txt
