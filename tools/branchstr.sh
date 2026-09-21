#!/bin/sh
# What the original writes on the branches that differ.
#
#     sh tools/branchstr.sh 7 9 11 23        # those lines of the list
#     sh tools/branchstr.sh $(python tools/branchdiff.py --bad | awk '{print $1}')
#
# tools/branchorig.sh takes the screens; this takes the words.  One run for
# all of them, because a boot is forty million instructions -- and the string
# routine's log is what the literals in src/ui.c are copied from, so it has to
# be the original's bytes and not a reading of the pixels.
#
# Leaves tmp/branch/str.txt with a `== branch N` line before each one.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/branch
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
[ -s tmp/branch/list.txt ] || { echo "run tools/branchlist.mjs first" >&2; exit 2; }
[ $# -gt 0 ] || { echo "usage: sh tools/branchstr.sh <line> [<line> ...]" >&2; exit 2; }

BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-22000000}"
DRAWING="${DRAWING:-SAMPLE0}"

rm -rf tmp/branch/sroot
cp -rp orig tmp/branch/sroot
rm -f tmp/branch/sroot/AUTO.JWC tmp/branch/sroot/QPICK.JWC \
      tmp/branch/sroot/QBYTES.JWC tmp/branch/sroot/ONE2.JWC

want=" $* "
{
    printf 'wait %s\n' "$BOOT"
    n=0
    while read -r menu item button mx my bx; do
        n=$((n + 1))
        case "$want" in *" $n "*) ;; *) continue ;; esac
        printf 'key esc\nwait 4000000\nkey esc\nwait 8000000\n'
        printf 'mouse %s %s\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
            "$mx" "$my" "$WAIT"
        if [ "$item" != "0" ]; then
            printf 'mouse %s 8\nwait 2000000\ndown %s\nwait 2000000\nup %s\nwait %s\n' \
                "$bx" "$button" "$button" "$WAIT"
        fi
        # A shot is how the log is cut into branches: the emulator prints a
        # line of its own when it writes one.
        printf 'shot ../jwcad_dos_wasm/tmp/branch/mark%s.raw\n' "$n"
    done < tmp/branch/list.txt
} > tmp/branch/ss.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" \
DOSEMU_BP='+0DEF:23C5' DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
    "$EMU" --root tmp/branch/sroot --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/branch/ss.txt \
    tmp/branch/sroot/JW_CADV.EXE "$DRAWING.JWC" > tmp/branch/rawstr.txt 2>&1 || true

# The log is Shift-JIS bytes, which the console's own codec would refuse,
# so the parse lives in tools/strpick.py -- it writes them straight
# through, and it can be asked for a branch while the run is still going.
python tools/strpick.py "$@" > tmp/branch/str.txt
echo "wrote tmp/branch/str.txt"
