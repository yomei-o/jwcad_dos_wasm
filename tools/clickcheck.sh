#!/bin/sh
# Press on the chrome and compare the whole screen with the original's.
#
#     sh tools/clickcheck.sh tools/chrome_points.txt
#     sh tools/clickcheck.sh -            # points on stdin: "x y button name"
#
# One boot per point, because a press changes the program's state and cannot
# be undone reliably.  The port is driven through `jw_click` -- the entry
# point the page uses -- rather than through tests/drawing.exe, which reaches
# past it into jw_cmd_press and so never sees the chrome's own targets: the
# pen, the paper, the group, the sixteen layer buttons, the bottom strip.
#
# Prints one line per point and a count at the end.  A point that differs is
# either a target the port does not answer at all or one it answers wrongly;
# the shots are left in tmp/clk so the two can be compared.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/clk
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
[ -f jwcad.js ] || { echo "run sh tools/build_wasm.sh first" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"

NODE="${NODE:-}"
if [ -z "$NODE" ]; then
    command -v node > /dev/null 2>&1 && NODE=node
fi
if [ -z "$NODE" ]; then
    NODE=$(ls /c/prog/emsdk/emsdk/node/*/bin/node.exe 2>/dev/null | head -1)
fi
[ -n "$NODE" ] || { echo "no node (set NODE)" >&2; exit 2; }

src="${1:-tools/chrome_points.txt}"
[ "$src" = "-" ] && src=/dev/stdin

bad=0
n=0
while read -r x y button what; do
    case "$x" in ''|\#*) continue;; esac
    button="${button:-left}"
    tag="${x}_${y}_${button}"
    printf 'wait %s\nmouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 26000000\nshot ../jwcad_dos_wasm/tmp/clk/%s.raw\n' \
        "$BOOT" "$x" "$y" "$button" "$button" "$tag" > tmp/clk/s.txt
    "$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
           --script tmp/clk/s.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
           > /dev/null 2>&1
    "$NODE" tools/clickshot.mjs "orig/$DRAWING.JWC" "$x" "$y" "$button" \
        "tmp/clk/${tag}_port.raw"
    got=$(python tools/fulldiff.py "tmp/clk/$tag.raw" "tmp/clk/${tag}_port.raw" \
          | sed 's/ different.*//')
    n=$((n + 1))
    if [ "$got" = 0 ]; then
        printf '  same    (%s,%s) %-6s %s\n' "$x" "$y" "$button" "$what"
    else
        printf '  %6s  (%s,%s) %-6s %s\n' "$got" "$x" "$y" "$button" "$what"
        bad=$((bad + 1))
    fi
done < "$src"
echo "$DRAWING: $n presses, $bad of them differ"
[ "$bad" = 0 ]
