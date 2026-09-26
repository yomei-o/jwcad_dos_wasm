#!/bin/sh
# Does typing into ③ 新規 保存's field replace the name that is in it?
#
#     sh tools/namefield.sh          # types X
#     TYPE=ABC sh tools/namefield.sh
#
# The field comes up with the drawing in hand already in it (`SAMPLE0`), and
# what the next keystroke does -- replace it or add to it -- decides whether
# a visitor typing a new name gets `MYWORK` or `SAMPLE1M`.  tools/seqcheck.sh
# cannot answer this: its steps are presses, not keys.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/nf
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }

TYPE="${TYPE:-X}"
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-60000000}"

rm -rf tmp/nf/root
cp -rp orig tmp/nf/root
rm -f tmp/nf/root/AUTO.JWC tmp/nf/root/QPICK.JWC tmp/nf/root/QBYTES.JWC \
      tmp/nf/root/ONE2.JWC

{
    printf 'wait %s\n' "$BOOT"
    for step in "30 296" "110 8" "100 8" "470 8"; do
        set -- $step
        printf 'mouse %s %s\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' \
            "$1" "$2" "$WAIT"
    done
    printf 'shot ../jwcad_dos_wasm/tmp/nf/before.raw\n'
    printf 'type %s\nwait %s\n' "$TYPE" "$WAIT"
    printf 'shot ../jwcad_dos_wasm/tmp/nf/after.raw\n'
} > tmp/nf/s.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" \
DOSEMU_BP='+0DEF:23C5' DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
    "$EMU" --root tmp/nf/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/nf/s.txt \
    tmp/nf/root/JW_CADV.EXE SAMPLE0.JWC > tmp/nf/str.txt 2>&1 || true

echo "--- the field before typing (row 5) ---"
python tools/readrow.py tmp/nf/before.raw 5 | head -1
echo "--- and after typing '$TYPE' ---"
python tools/readrow.py tmp/nf/after.raw 5 | head -1
echo "--- what it wrote on row 5 at the end ---"
grep '\[bp\]' tmp/nf/str.txt \
  | sed 's/.*args [0-9A-F]* [0-9A-F]* [0-9A-F]* \([0-9A-F]*\) \([0-9A-F]*\) \([0-9A-F]*\) \([0-9A-F]*\).*\("[^"]*"\)$/col=\1 row=\2 fg=\3 bg=\4 \5/' \
  | grep "row=0005" | tail -6 | iconv -f CP932 -t UTF-8 2>/dev/null || true
