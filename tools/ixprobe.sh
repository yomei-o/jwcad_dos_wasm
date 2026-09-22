#!/bin/sh
# 入出力 ⑦INDEX with a made-up JW_FILE0.000, to see what `Max:` counts, what
# the list does when it is longer or shorter than the twenty rows the screen
# holds, and where the drawing that is open goes.
#
#     sh tools/ixprobe.sh 5 "200 452 left"
#     LIST="F01 F02 SAMPLE0 F03" sh tools/ixprobe.sh 0
#
# The first argument is how many `A:\F<nn>` lines to write (LIST names them
# instead); the rest are presses, as tools/seqcheck.sh takes them.
set -e
cd "$(dirname "$0")/.."
N="$1"; shift
mkdir -p tmp/ix
rm -rf tmp/ix/root
cp -rp orig tmp/ix/root
rm -f tmp/ix/root/QPICK.JWC tmp/ix/root/QBYTES.JWC tmp/ix/root/ONE2.JWC
: > tmp/ix/root/JW_FILE0.000
if [ -n "$LIST" ]; then
    for nm in $LIST; do
        printf 'A:\\%s\r\n' "$nm" >> tmp/ix/root/JW_FILE0.000
    done
else
    i=1
    while [ "$i" -le "$N" ]; do
        printf 'A:\\F%02d\r\n' "$i" >> tmp/ix/root/JW_FILE0.000
        i=$((i + 1))
    done
fi
printf 'wait 40000000\n' > tmp/ix/s.txt
for step in "30 296 left" "110 8 left" "515 8 left" "$@"; do
    [ -n "$step" ] || continue
    case "$step" in
    key\ *)
        printf 'key %s
wait 26000000
' "${step#key }" >> tmp/ix/s.txt
        continue
        ;;
    esac
    sx=$(echo "$step" | awk '{print $1}')
    sy=$(echo "$step" | awk '{print $2}')
    sb=$(echo "$step" | awk '{print ($3 == "") ? "left" : $3}')
    printf 'mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 26000000\n' \
        "$sx" "$sy" "$sb" "$sb" >> tmp/ix/s.txt
done
printf 'shot ../jwcad_dos_wasm/tmp/ix/orig.raw\n' >> tmp/ix/s.txt
DOSEMU_BP='+0DEF:23C5' DOSEMU_BPSTR=2 DOSEMU_BPN=200000 \
    ../dosv_emu_cpp/dosemu.exe --root tmp/ix/root \
    --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
    --script tmp/ix/s.txt tmp/ix/root/JW_CADV.EXE SAMPLE0.JWC \
    > tmp/ix/str.txt 2>/dev/null || true
grep '\[bp\]' tmp/ix/str.txt \
    | sed 's/.*after \([0-9]*\) *args [0-9A-F]* [0-9A-F]* [0-9A-F]* \([0-9A-F]*\) \([0-9A-F]*\) \([0-9A-F]*\) \([0-9A-F]*\).*\("[^"]*"\)$/ \1 col=\2 row=\3 fg=\4 bg=\5 \6/' \
    | iconv -f CP932 -t UTF-8 | awk '$1 > 100000000' | grep -vE 'row=0001'
