#!/bin/sh
# Register a figure with the original, and keep what it wrote.
#
#     sh tools/zukei.sh
#     RANGE="200 150 300 250" BASE="200 150" NAME=BOX sh tools/zukei.sh
#
# `orig/JW_CADV.HLP` says the road (図 形 その1/4):
#
#     登録したい図形の対角２点をクリックし範囲を選択します … 確定を
#     クリックすると登録図形が指定されます。さらに、選択図形の基準点を
#     定めクリックします … 次に、新規登録を 1)選択確定 で選択します …
#     次に、ファイル名を決め入力確定し|1)実行|で、作成した図形をファイル
#     に登録できます。
#
# So: 図形 → ①登録 → two corners → ①範囲確定 → the base point →
# ①選択確定 → a name → [Enter] → ①実行.  Shoots after each press and keeps
# every string, and the root is a real directory, so whatever lands in
# `ZUKEI_1_` can be read afterwards.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/zukei
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first" >&2; exit 2; }

BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-22000000}"
DRAWING="${DRAWING:-SAMPLE0}"
RANGE="${RANGE:-170 130 330 260}"
BASE="${BASE:-170 130}"
NAME="${NAME:-BOX}"
# **The first corner's button decides what the range takes.**  JW_CADV.HLP,
# 図 形 その1/4: 「始点を左クリックすると線と円弧と曲線が、右クリックする
# と線と円弧と曲線と文字が選択されます」.
FIRST="${FIRST:-}"
# The base point is taken freely with the left button and **read** with the
# right one, which is the only way to put it exactly on something.
BASEBTN="${BASEBTN:-}"

rm -rf tmp/zukei/root
cp -rp orig tmp/zukei/root
rm -f tmp/zukei/root/AUTO.JWC tmp/zukei/root/QPICK.JWC

set -- $RANGE
ax=$1; ay=$2; bx=$3; by=$4
set -- $BASE
px=$1; py=$2

press() {   # x y [right]
    printf 'mouse %s %s\nwait 2000000\ndown %s\nwait 2000000\nup %s\nwait %s\n' \
        "$1" "$2" "${3:-left}" "${3:-left}" "$WAIT"
}

{
    printf 'wait %s\n' "$BOOT"
    press 30 248                      # 図形
    printf 'shot ../jwcad_dos_wasm/tmp/zukei/s0.raw\n'
    press 84 8                        # ①登録
    printf 'shot ../jwcad_dos_wasm/tmp/zukei/s1.raw\n'
    press "$ax" "$ay" $FIRST          # the range, corner one
    printf 'shot ../jwcad_dos_wasm/tmp/zukei/s2.raw\n'
    press "$bx" "$by" right           # and the other, which fixes it
    printf 'shot ../jwcad_dos_wasm/tmp/zukei/s3.raw\n'
    press 560 8                       # ①範囲 確定
    printf 'shot ../jwcad_dos_wasm/tmp/zukei/s4.raw\n'
    press "$px" "$py" $BASEBTN        # the base point
    printf 'shot ../jwcad_dos_wasm/tmp/zukei/s5.raw\n'
    press 296 8                       # ①選択確定 (cols 32..42 of that line)
    printf 'shot ../jwcad_dos_wasm/tmp/zukei/s6.raw\n'
    printf 'type %s\nwait %s\n' "$NAME" "$WAIT"
    printf 'key enter\nwait %s\n' "$WAIT"
    printf 'shot ../jwcad_dos_wasm/tmp/zukei/s7.raw\n'
    press 210 8                       # ① 実 行(L)
    printf 'shot ../jwcad_dos_wasm/tmp/zukei/s8.raw\n'
    # And whatever else is wanted afterwards, which is how to see how long
    # what the registration leaves on the screen stays there:
    #     EXTRA="30 248;84 8" sh tools/zukei.sh
    #
    # A step that starts with `m` **moves the pointer and does not press**,
    # which is the only way to see what follows the pointer:
    #     EXTRA="140 8;190 72;m 190 120" sh tools/zukei.sh
    #
    # `r X Y` presses the right button and `t NAME` types a name and
    # presses [Enter], so a whole second registration fits in EXTRA:
    #     EXTRA="84 8;200 150;r 300 250;560 8;200 150;296 8;t AAA;210 8"
    n=9
    IFS=';'
    for step in $EXTRA; do
        unset IFS
        case "$step" in
        m*)
            set -- $step
            printf 'mouse %s %s\nwait %s\n' "$2" "$3" "$WAIT"
            ;;
        r*)
            # `r X Y` presses the **right** button there.
            set -- $step
            press "$2" "$3" right
            ;;
        t*)
            # `t NAME` types it and presses [Enter], which is what
            # ◆図形名入力 wants.
            set -- $step
            printf 'type %s\nwait %s\nkey enter\nwait %s\n' \
                "$2" "$WAIT" "$WAIT"
            ;;
        *)
            press $step
            ;;
        esac
        printf 'shot ../jwcad_dos_wasm/tmp/zukei/s%s.raw\n' "$n"
        n=$((n + 1))
        IFS=';'
    done
    unset IFS
} > tmp/zukei/ss.txt

DOSEMU_CLOCK="${DOSEMU_CLOCK:-20000}" DOSEMU_FILE_TRACE=1 \
DOSEMU_BP='+0DEF:23C5' DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
    "$EMU" --root tmp/zukei/root --font-ank font/JWANK16.FNT \
    --font-kanji font/JWKAN16.FNT --script tmp/zukei/ss.txt \
    tmp/zukei/root/JW_CADV.EXE "$DRAWING.JWC" \
    > tmp/zukei/raw.txt 2> tmp/zukei/err.txt || true

python - <<'PY' > tmp/zukei/str.txt
import io
import re
import sys

sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='latin-1', newline='')
for line in open('tmp/zukei/raw.txt', encoding='latin-1'):
    m = re.search(r'\[shot\] .*?s(\d+)\.raw', line)
    if m:
        print('== after press %s' % m.group(1))
        continue
    if '[bp]' not in line or line.count('"') < 2:
        continue
    f = line.split()
    if len(f) < 15:
        continue
    try:
        col, row = int(f[8], 16), int(f[9], 16)
    except ValueError:
        continue
    print('  col=%-3d row=%-3d %s' % (col, row, line[line.index('"'):].rstrip('\n')))
PY
echo "-- files it touched:"
grep -i "file" tmp/zukei/err.txt | tail -20
echo "-- what is on the disk now:"
find tmp/zukei/root -newer tmp/zukei/ss.txt -type f | head -20
