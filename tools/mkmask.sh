#!/bin/sh
# Make tmp/mask_none.raw -- the pixels inside the drawing area that belong to
# the original and not to the drawing.
#
#   sh tools/mkmask.sh
#
# Two things go in it.
#
#   * What the original puts on an empty screen: one line of guidance and the
#     mouse cursor.  Both are in fixed places, so one capture serves every
#     drawing -- run JW_CAD with no file and take the picture.
#
#   * **The whole band the guidance line sits in.**  The original paints that
#     band's background as well as its letters, so a grid dot or a line that
#     falls between two letters is *erased* on its screen and drawn on the
#     port's.  Nothing in the band can be compared until the port draws the UI
#     too, and masking only the lit letters leaves the gaps behind -- 24 of
#     SAMPLE1's grid dots and six pixels of TEST7.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }

printf 'wait 60000000\nshot ../jwcad_dos_wasm/tmp/mask_none.raw\n' > tmp/mask.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/mask.txt orig/JW_CADV.EXE > /dev/null 2>&1
python - <<'PY'
W = 640
# The guidance line's own box, measured off the capture: its letters span
# x 129..627 and y 32..47, and the original clears that rectangle.
X0, X1, Y0, Y1 = 129, 627, 32, 47
d = bytearray(open('tmp/mask_none.raw', 'rb').read())
n = 0
for y in range(Y0, Y1 + 1):
    for x in range(X0, X1 + 1):
        o = (y * W + x) * 4
        if not (d[o] or d[o + 1] or d[o + 2]):
            d[o] = d[o + 1] = d[o + 2] = d[o + 3] = 255
            n += 1
open('tmp/mask_none.raw', 'wb').write(bytes(d))
lit = sum(1 for i in range(0, len(d), 4) if d[i] or d[i + 1] or d[i + 2])
print('tmp/mask_none.raw: %d pixels (%d of them the guidance band filled in)' % (lit, n))
PY
