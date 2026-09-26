#!/bin/sh
# A run of presses, the original against the port.
#
#     sh tools/seqcheck.sh "20 312 left" "20 344 left"
#     DRAWING=SAMPLE3 sh tools/seqcheck.sh "30 344 left"
#     STR=1 sh tools/seqcheck.sh ...        # also print what the original wrote
#
# tools/clickcheck.sh does one press per boot, which cannot reach anything a
# press puts up -- ペン's board, ｸﾞﾙｰﾌﾟ's sixteen boxes, 入出力's menus.
set -e
cd "$(dirname "$0")/.."
# **SEQID があれば自分だけの場所で走ります。** 同時に何件も測るとき、
# tmp/seq を共有すると互いの絵を読んでしまいます（tools/runcases.sh）。
D=tmp/seq
[ -z "$SEQID" ] || D="tmp/seq/$SEQID"
mkdir -p "$D"
# **The guest runs in a copy, not in orig/.**  It drops an AUTO.JWC wherever
# it runs, and orig/ is also where the drawings made while analysing land --
# either one turns up in 入出力's file list and puts every row below it out
# of step with the port.  -p keeps the dates, which that list shows.
# **KEEPROOT=1 なら写し直しません。** 3.4MB を毎回写すと 1 件あたり
# 0.7 秒かかり、6 本並べるとそこが詰まります。客が書くのは AUTO.JWC
# だけなので（走らせたあと diff -rq で確かめました）、それを戻して、
# 増えた物を消すだけにします。
if [ -n "$KEEPROOT" ] && [ -d "$D/root" ]; then
    # basename を呼ばないこと——Git Bash の子プロセスは 1 つ 50ms 近く
    # かかり、62 個 x 台数ぶんで測りより高くつきます。
    for f in "$D"/root/*; do
        b=${f##*/}
        [ -e "orig/$b" ] || rm -f "$f"
    done
    cp -p orig/AUTO.JWC "$D/root/AUTO.JWC"
else
    rm -rf $D/root
    cp -rp orig $D/root
fi
rm -f $D/root/QPICK.JWC $D/root/QBYTES.JWC $D/root/ONE2.JWC
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
NODE="${NODE:-}"
[ -n "$NODE" ] || { command -v node > /dev/null 2>&1 && NODE=node; }
[ -n "$NODE" ] || NODE=$(ls /c/prog/emsdk/emsdk/node/*/bin/node.exe 2>/dev/null | head -1)
[ -n "$NODE" ] || { echo "no node (set NODE)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-26000000}"

# **本物の絵は取っておきます。** 同じ EXE に同じ手順なら必ず同じ絵なので、
# 2 度目からは 6 秒の起動を丸ごと省けます（移植だけ測り直すときが速い）。
# NOCACHE=1 で毎回撮り直し、STR=1 のときは素通りします。
hit=""
if [ -z "$NOCACHE" ] && [ -z "$STR" ]; then
    CACHE="${ORIGCACHE:-tmp/origcache}"
    mkdir -p "$CACHE"
    # EMU が変わったら全部捨てます——**古い絵と比べるのがいちばん危ない**。
    stamp=$(ls -l "$EMU" font/JWANK16.FNT font/JWKAN16.FNT orig | md5sum)
    if [ ! -f "$CACHE/stamp" ] || [ "$(cat "$CACHE/stamp")" != "$stamp" ]; then
        rm -f "$CACHE"/*.raw
        printf '%s\n' "$stamp" > "$CACHE/stamp"
    fi
    key=$(printf '%s|%s|%s|%s' "$DRAWING" "$BOOT" "$WAIT" "$*" | md5sum \
          | cut -d' ' -f1)
    hit="$CACHE/$key.raw"
fi

printf 'wait %s\n' "$BOOT" > $D/s.txt
# `set -- $step` inside the loop would eat "$@" -- which is the list itself,
# so the port would then be handed the last step as its arguments and would
# quietly compare the boot screen instead.  Read the words out another way.
for step in "$@"; do
    case "$step" in
    type\ *)
        # **One character at a time.**  The emulator's `type` pushes every
        # character of its argument into the keyboard with nothing in
        # between, and the original keeps only the first: `type 30` set
        # 寸法 ③任意方向 to 3 degrees, not 30, and the port was then
        # compared against a different drawing.
        echo "${step#type }" | fold -w1 | while read -r ch; do
            [ -n "$ch" ] || continue
            printf 'type %s\nwait 8000000\n' "$ch" >> $D/s.txt
        done
        printf 'wait %s\n' "$WAIT" >> $D/s.txt
        continue
        ;;
    move\ *)
        # 押さずに矢だけ動かします（帯の仮の絵を比べるため）。
        printf 'mouse %s\nwait %s\n' "${step#move }" "$WAIT" >> $D/s.txt
        continue
        ;;
    key\ *)
        printf 'key %s\nwait %s\n' "${step#key }" "$WAIT" >> $D/s.txt
        continue
        ;;
    esac
    # awk を 3 回呼ばないこと（同じ理由）。ただし **`set --` も駄目**
    # です——"$@" はこの手順の一覧そのもので、下で移植に渡します。
    # 文字列のまま削って割ります。
    sx=${step%% *}
    rest=${step#* }
    sy=${rest%% *}
    case "$rest" in
    *\ *) sb=${rest#* } ;;
    *)    sb=left ;;
    esac
    printf 'mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait %s\n' \
        "$sx" "$sy" "$sb" "$sb" "$WAIT" >> $D/s.txt
done
printf 'shot ../jwcad_dos_wasm/%s/orig.raw\n' "$D" >> $D/s.txt

if [ -n "$STR" ]; then
    DOSEMU_BP='+0DEF:23C5' DOSEMU_BPSTR=2 DOSEMU_BPN=20000 \
        "$EMU" --root $D/root --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
        --script $D/s.txt $D/root/JW_CADV.EXE "$DRAWING.JWC" \
        > $D/str.txt 2>/dev/null || true
    grep '\[bp\]' $D/str.txt \
        | sed 's/.*after \([0-9]*\) *args [0-9A-F]* [0-9A-F]* [0-9A-F]* \([0-9A-F]*\) \([0-9A-F]*\) \([0-9A-F]*\) \([0-9A-F]*\).*\("[^"]*"\)$/ \1 col=\2 row=\3 fg=\4 bg=\5 \6/' \
        | tail -40 | iconv -f CP932 -t UTF-8 2>/dev/null || true
elif [ -n "$hit" ] && [ -f "$hit" ]; then
    cp "$hit" $D/orig.raw
else
    "$EMU" --root $D/root --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
        --script $D/s.txt $D/root/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
    [ -z "$hit" ] || cp $D/orig.raw "$hit"
fi

"$NODE" tools/seqshot.mjs "orig/$DRAWING.JWC" $D/port.raw "$@"
got=$(python tools/fulldiff.py $D/orig.raw $D/port.raw | sed 's/ different.*//')
echo "$DRAWING: $got different"
[ "$got" = 0 ]
