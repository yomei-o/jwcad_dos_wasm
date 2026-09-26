#!/bin/sh
# Compare one kind of entity at a time, against the original.
#
#   sh tools/kinds.sh SAMPLE6 [wait]
#
# Everything on one screen at once hides which part is wrong: an arc that is a
# pixel out looks the same as a line that is, and a text drawn over a wall does
# not show at all. So this makes four copies of the drawing with only one kind
# of entity left on the paper -- the others are pushed far outside it, which
# both sides clip away -- and runs the original and the port on each.
#
# The copies go into orig/ because that is the directory the guest sees.
set -e
cd "$(dirname "$0")/.."
name="$1"
wait="${2:-60000000}"
[ -n "$name" ] || { echo "usage: sh tools/kinds.sh SAMPLE6 [instructions]" >&2; exit 2; }
[ -f "orig/$name.JWC" ] || { echo "no orig/$name.JWC" >&2; exit 2; }
mkdir -p tmp/only

EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }

short=$(echo "$name" | cut -c1-2)
for kind in lines arcs texts points; do
    tag=$(echo "$kind" | cut -c1-4 | tr 'a-z' 'A-Z')
    file="${short}${tag}.JWC"
    python tools/onlykind.py "orig/$name.JWC" "$kind" "orig/$file" > /dev/null
    printf 'wait %s\nshot ../jwcad_dos_wasm/tmp/only/e_%s.raw\n' "$wait" "$kind" \
        > tmp/only/script.txt
    "$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
           --script tmp/only/script.txt "orig/JW_CADV.EXE" "$file" > /dev/null 2>&1
    ./tests/drawing.exe -o "orig/$file" "tmp/only/p_$kind.raw" > /dev/null
    printf '%-7s ' "$kind"
    ./tests/compare.exe -m tmp/mask_none.raw "tmp/only/e_$kind.raw" \
        "tmp/only/p_$kind.raw" "tmp/only/d_$kind.png" 122 17 638 462 \
        | sed -n '3,4p' | tr '\n' ' ' | sed 's#tmp/only/[a-z_]*\.raw##g'
    echo
    rm -f "orig/$file"
done
