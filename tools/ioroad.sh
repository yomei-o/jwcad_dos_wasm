#!/bin/sh
# What the rest of ①ﾌｧｲﾙ's bar puts up.
#
#     sh tools/ioroad.sh 3     # ③合成
#     sh tools/ioroad.sh 4     # ④削除
#     sh tools/ioroad.sh 5     # ⑤ﾄﾞﾗｲﾌﾞ変更
#     sh tools/ioroad.sh 6     # ⑥ＤＸＦ
#     sh tools/ioroad.sh 7     # ⑦INDEX
#
# The bar is `|①保存(L)|②読込(R)|③合成|④削除|⑤ﾄﾞﾗｲﾌﾞ変更|⑥ＤＸＦ|⑦INDEX|`
# and each label is its own cell.  Counting columns from the line the
# original writes (it starts at column 8):
#
#   ①保存(L)   9..17      x  64..143
#   ②読込(R)  19..27      x 144..223
#   ③合成     29..34      x 224..279
#   ④削除     36..41      x 280..335
#   ⑤ﾄﾞﾗｲﾌﾞ変更 43..53     x 336..431
#   ⑥ＤＸＦ    55..60      x 432..487
#   ⑦INDEX    62..67      x 488..543
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/io
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }

ITEM="${1:-3}"
case "$ITEM" in
    3) X=250 ;;
    4) X=305 ;;
    5) X=380 ;;
    6) X=460 ;;
    7) X=515 ;;
    *) echo "item 3..7" >&2; exit 2 ;;
esac
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-60000000}"

rm -rf tmp/io/root
cp -rp orig tmp/io/root
rm -f tmp/io/root/AUTO.JWC tmp/io/root/QPICK.JWC tmp/io/root/QBYTES.JWC \
      tmp/io/root/ONE2.JWC

{
    printf 'wait %s\n' "$BOOT"
    printf 'mouse 30 296\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' "$WAIT"
    printf 'mouse 110 8\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' "$WAIT"
    printf 'mouse %s 8\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' "$X" "$WAIT"
    printf 'wait %s\nshot ../jwcad_dos_wasm/tmp/io/item%s.raw\n' "${TAIL:-120000000}" "$ITEM"
} > tmp/io/s.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" \
DOSEMU_BP='+0DEF:23C5' DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
    "$EMU" --root tmp/io/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/io/s.txt \
    tmp/io/root/JW_CADV.EXE "$DRAWING.JWC" > "tmp/io/str$ITEM.txt" 2>&1 || true

echo "--- the top line after pressing item $ITEM (x=$X) ---"
python tools/readrow.py "tmp/io/item$ITEM.raw" 1 | head -1
echo "--- the last lines it wrote ---"
grep '\[bp\]' "tmp/io/str$ITEM.txt" \
  | sed 's/.*args [0-9A-F]* [0-9A-F]* [0-9A-F]* \([0-9A-F]*\) \([0-9A-F]*\) \([0-9A-F]*\) \([0-9A-F]*\).*\("[^"]*"\)$/col=\1 row=\2 fg=\3 bg=\4 \5/' \
  | tail -12 | iconv -f CP932 -t UTF-8 2>/dev/null || true
