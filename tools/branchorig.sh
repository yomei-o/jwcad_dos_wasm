#!/bin/sh
# Drive the original through the branches in tmp/branch/list.txt.
#
#     sh tools/branchorig.sh 1 40        # lines 1..40 of the list
#     WAIT=20000000 sh tools/branchorig.sh 1 40
#
# One boot, then every branch in turn: [ESC] twice to get back to a known
# screen, pick the menu item, press the top line, shoot.  Leaves
# tmp/branch/o<line>.raw.
#
# Doing them in one run is what makes this affordable: a boot is forty
# million instructions and there are nearly three hundred branches.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/branch
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
[ -s tmp/branch/list.txt ] || { echo "run tools/branchlist.mjs first" >&2; exit 2; }

FROM="${1:-1}"
TO="${2:-40}"
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-22000000}"
DRAWING="${DRAWING:-SAMPLE0}"

rm -rf tmp/branch/root
cp -rp orig tmp/branch/root
rm -f tmp/branch/root/AUTO.JWC tmp/branch/root/QPICK.JWC \
      tmp/branch/root/QBYTES.JWC tmp/branch/root/ONE2.JWC

{
    printf 'wait %s\n' "$BOOT"
    n=0
    while read -r menu item button mx my bx; do
        n=$((n + 1))
        [ "$n" -ge "$FROM" ] || continue
        [ "$n" -le "$TO" ] || break
        # Back to a known screen.  Two, because one only gets out of the
        # innermost thing a branch may have opened.
        printf 'key esc\nwait 4000000\nkey esc\nwait 8000000\n'
        printf 'mouse %s %s\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
            "$mx" "$my" "$WAIT"
        if [ "$item" != "0" ]; then
            printf 'mouse %s 8\nwait 2000000\ndown %s\nwait 2000000\nup %s\nwait %s\n' \
                "$bx" "$button" "$button" "$WAIT"
        fi
        printf 'shot ../jwcad_dos_wasm/tmp/branch/o%s.raw\n' "$n"
    done < tmp/branch/list.txt
} > tmp/branch/s.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" \
    "$EMU" --root tmp/branch/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/branch/s.txt \
    tmp/branch/root/JW_CADV.EXE "$DRAWING.JWC" > tmp/branch/run.txt 2>&1 || true

echo "shot $(ls tmp/branch/o*.raw 2>/dev/null | wc -l | tr -d ' ') screens"
