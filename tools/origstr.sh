#!/bin/sh
# What the original writes on the screen along a run of presses.
#
#     sh tools/origstr.sh "30 296 left" "110 8 left" "250 8 left"
#     AFTER=140000000 sh tools/origstr.sh ...      # only from there on
#     WAIT=600000000 sh tools/origstr.sh ...       # longer between presses
#     DRAWING=SAMPLE3 sh tools/origstr.sh ...
#
# tools/seqcheck.sh does this too (STR=1), but it also builds nothing and
# runs the port in tmp/seq; this one keeps to tmp/ostr so it can be used
# while tools/check.sh is running.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/ostr
rm -rf tmp/ostr/root
cp -rp orig tmp/ostr/root
rm -f tmp/ostr/root/QPICK.JWC tmp/ostr/root/QBYTES.JWC tmp/ostr/root/ONE2.JWC
DRAWING="${DRAWING:-SAMPLE0}"
printf 'wait 40000000\n' > tmp/ostr/s.txt
for step in "$@"; do
    [ -n "$step" ] || continue
    case "$step" in
    key\ *)
        printf 'key %s\nwait %s\n' "${step#key }" "${WAIT:-26000000}" \
            >> tmp/ostr/s.txt
        continue
        ;;
    esac
    sx=$(echo "$step" | awk '{print $1}')
    sy=$(echo "$step" | awk '{print $2}')
    sb=$(echo "$step" | awk '{print ($3 == "") ? "left" : $3}')
    printf 'mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait %s\n' \
        "$sx" "$sy" "$sb" "$sb" "${WAIT:-26000000}" >> tmp/ostr/s.txt
done
printf 'shot ../jwcad_dos_wasm/tmp/ostr/orig.raw\n' >> tmp/ostr/s.txt
DOSEMU_BP='+0DEF:23C5' DOSEMU_BPSTR=2 DOSEMU_BPN=200000 \
    ../dosv_emu_cpp/dosemu.exe --root tmp/ostr/root \
    --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
    --script tmp/ostr/s.txt tmp/ostr/root/JW_CADV.EXE "$DRAWING.JWC" \
    > tmp/ostr/str.txt 2>/dev/null || true
grep '\[bp\]' tmp/ostr/str.txt \
    | sed 's/.*after \([0-9]*\) *args [0-9A-F]* [0-9A-F]* [0-9A-F]* \([0-9A-F]*\) \([0-9A-F]*\) \([0-9A-F]*\) \([0-9A-F]*\).*\("[^"]*"\)$/ \1 col=\2 row=\3 fg=\4 bg=\5 \6/' \
    | iconv -f CP932 -t UTF-8 | awk -v a="${AFTER:-0}" '$1 + 0 > a + 0'
