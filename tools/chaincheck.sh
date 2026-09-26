#!/bin/sh
# 曲線（23 番の ⑦連線）—— 角の丸い連続線を、本物と移植で比べます。
#
#   sh tools/chaincheck.sh 200 200 400 200 400 350
#   END=1 sh tools/chaincheck.sh 200 200 400 200 400 350 250 350   # ④終了 まで
#   ANGLE=1 sh tools/chaincheck.sh 200 300 400 300 500 150         # ①角 度 を 1 回（90度毎）
#   ANGLE=2 ... （free）
#
# 上の行の押しどころ: ⑦連線 は桁 63〜68（x 496〜551）、①角 度 は桁 36〜43
# （x 280〜343）、④ 終了 は桁 72〜79（x 568〜639）。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/ch
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
ANGLE="${ANGLE:-0}"

top() {
    printf 'mouse %s 8\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 20000000\n' "$1"
}

args="-u -c 23 -t 540"
{
    printf 'wait %s\nmouse 30 184\nwait 2000000\nclick left\nwait 40000000\n' "$BOOT"
    top 540
    i=0
    while [ "$i" -lt "$ANGLE" ]; do top 288; i=$((i + 1)); done
} > tmp/ch/script.txt
i=0
while [ "$i" -lt "$ANGLE" ]; do args="$args -t 288"; i=$((i + 1)); done

lx=300
ly=300
set -- $@
while [ $# -ge 2 ]; do
    printf 'mouse %s %s\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 26000000\n' \
        "$1" "$2" >> tmp/ch/script.txt
    args="$args -p $1 $2"
    lx=$1
    ly=$2
    shift 2
done
if [ -n "$END" ]; then
    top 600 >> tmp/ch/script.txt
    args="$args -t 600"
fi
if [ -n "$MOVE" ]; then
    set -- $MOVE
    lx=$1
    ly=$2
fi
printf 'mouse %s %s\nwait 14000000\nshot ../jwcad_dos_wasm/tmp/ch/orig.raw\n' \
    "$lx" "$ly" >> tmp/ch/script.txt

"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/ch/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
./tests/drawing.exe $args -m "$lx" "$ly" "orig/$DRAWING.JWC" tmp/ch/port.raw > /dev/null
printf '連線 %s%s%s  ' "$DRAWING" "$(test "$ANGLE" -gt 0 && printf " 角度x%s" "$ANGLE")" "${END:+ +終了}"
python tools/fulldiff.py tmp/ch/orig.raw tmp/ch/port.raw
