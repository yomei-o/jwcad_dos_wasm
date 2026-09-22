#!/bin/sh
# When does the original write AUTO.JWC?
#
#     sh tools/autoprobe.sh
#
# Boots with SAMPLE0 on the command line, then opens SAMPLE1 through 入出力
# (①ﾌｧｲﾙ → ②読込 → the row → the row again) and stops.  The root is a real
# directory, so AUTO.JWC can be looked at afterwards -- its size says which
# drawing went into it and when.
set -e
cd "$(dirname "$0")/.."
EMU=../dosv_emu_cpp/dosemu.exe
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-22000000}"

rm -rf tmp/auto
mkdir -p tmp/auto
cp -rp orig tmp/auto/root
rm -f tmp/auto/root/AUTO.JWC tmp/auto/root/QPICK.JWC

{
    printf 'wait %s\n' "$BOOT"
    printf 'shot ../jwcad_dos_wasm/tmp/auto/boot.raw\n'
    # 入出力, then ①ﾌｧｲﾙ, then ②読込
    printf 'mouse 30 296\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' "$WAIT"
    printf 'mouse 110 8\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' "$WAIT"
    printf 'mouse 180 8\nwait 2000000\ndown left\nwait 2000000\nup left\nwait %s\n' "$WAIT"
    printf 'shot ../jwcad_dos_wasm/tmp/auto/list.raw\n'
} > tmp/auto/ss.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" DOSEMU_FILE_TRACE=1 \
    "$EMU" --root tmp/auto/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/auto/ss.txt \
    tmp/auto/root/JW_CADV.EXE SAMPLE0.JWC \
    > tmp/auto/out.txt 2> tmp/auto/err.txt || true

echo "-- files the original opened or made:"
grep -i "file" tmp/auto/out.txt tmp/auto/err.txt | head -40
echo "-- AUTO.JWC:"
ls -la tmp/auto/root/AUTO.JWC 2>/dev/null || echo "  not made"
ls -la orig/SAMPLE0.JWC
