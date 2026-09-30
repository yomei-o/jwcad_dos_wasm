#!/bin/sh
# **働きの検査**：同じ操作を本物と移植の両方にさせて、それぞれに保存させ、
# 線・円弧・文字の記録を突き合わせます。
#
#   sh tools/functest.sh "90 104 left" "250 200 left" "400 280 left"
#   DRAWING=SAMPLE1 BOOT=60000000 sh tools/functest.sh ...
#
# 手順の書き方は tools/seqcheck.sh と同じ（"x y [left|right]"、"type 文字"、
# "key enter"、"move x y"）。
#
# **画面の一致は働きの証明になりません**（2026-09-28、画面は 0 画素なのに
# □ に寸法が入らない・書込グループが記録に入らない、とわかった）。
# だからこの検査は画面を見ず、**保存されたファイルの中身**だけを比べます。
# 結果は `same` か、違う行の一覧です。0 で終われば同じ。
set -e
cd "$(dirname "$0")/.."
D=tmp/func
[ -z "$FUNCID" ] || D="tmp/func/$FUNCID"
mkdir -p "$D"
DRAWING="${DRAWING:-SAMPLE0}"
BOOT="${BOOT:-40000000}"
WAIT="${WAIT:-26000000}"
NODE="${NODE:-}"
[ -n "$NODE" ] || { command -v node > /dev/null 2>&1 && NODE=node; }
[ -n "$NODE" ] || NODE=$(ls /c/prog/emsdk/emsdk/node/*/bin/node.exe 2>/dev/null | head -1)

: > "$D/pre.txt"
for step in "$@"; do
    case "$step" in
    type\ *)
        # 一字ずつ（tools/seqcheck.sh と同じ理由：まとめて打つと最初の
        # 一字しか残りません）。
        echo "${step#type }" | fold -w1 | while read -r ch; do
            [ -n "$ch" ] || continue
            printf 'type %s\nwait 8000000\n' "$ch" >> "$D/pre.txt"
        done
        printf 'wait %s\n' "$WAIT" >> "$D/pre.txt"
        continue
        ;;
    move\ *)
        printf 'mouse %s\nwait %s\n' "${step#move }" "$WAIT" >> "$D/pre.txt"
        continue
        ;;
    key\ *)
        printf 'key %s\nwait %s\n' "${step#key }" "$WAIT" >> "$D/pre.txt"
        continue
        ;;
    esac
    sx=${step%% *}
    rest=${step#* }
    sy=${rest%% *}
    case "$rest" in
    *\ *) sb=${rest#* } ;;
    *)    sb=left ;;
    esac
    printf 'mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait %s\n' \
        "$sx" "$sy" "$sb" "$sb" "$WAIT" >> "$D/pre.txt"
done
# 保存の道に入る前に矢を作図範囲の中へ（グループ・レイヤの切替は矢が
# 作図範囲に入ったところで終わります）。
printf 'mouse 400 250\nwait %s\n' "$WAIT" >> "$D/pre.txt"

# 本物の保存は 1 件 20 秒ほどかかるので取っておきます。同じ EXE・同じ
# 図面・同じ手順なら同じファイルです。NOCACHE=1 で撮り直し。
CACHE=tmp/funccache
mkdir -p "$CACHE"
stamp=$(ls -l ../dosv_emu_cpp/dosemu.exe orig/JW_CADV.EXE | md5sum)
if [ ! -f "$CACHE/stamp" ] || [ "$(cat "$CACHE/stamp")" != "$stamp" ]; then
    rm -f "$CACHE"/*.JWC
    printf '%s\n' "$stamp" > "$CACHE/stamp"
fi
key=$(printf '%s|%s|%s|' "$DRAWING" "$BOOT" "$WAIT" | cat - "$D/pre.txt" | md5sum | cut -d' ' -f1)
if [ -z "$NOCACHE" ] && [ -f "$CACHE/$key.JWC" ]; then
    cp "$CACHE/$key.JWC" "$D/orig.JWC"
else
    PRE="$D/pre.txt" DRAWING="$DRAWING" BOOT="$BOOT" OUT="$D/orig.raw" \
        sh tools/save.sh > /dev/null
    cp "tmp/sroot/$DRAWING.JWC" "$D/orig.JWC"
    cp "$D/orig.JWC" "$CACHE/$key.JWC"
fi
# PORTREC で別の写し（tmp/snap など）の移植を使えます——比べている最中に
# 作り直しても、途中から別の版と比べることになりません。
OUT="$D/port.JWC" "$NODE" "${PORTREC:-tools/portrec.mjs}" "orig/$DRAWING.JWC" "$@" "move 400 250" > /dev/null

for f in orig port; do
    {
        echo "== lines"
        python tools/linedump.py "$D/$f.JWC"
        echo "== arcs"
        python tools/arcdump.py "$D/$f.JWC" 2> /dev/null || true
        echo "== texts"
        python tools/textdump.py "$D/$f.JWC" 2> /dev/null || true
        # 生のバイトも（linedump の小数 3 桁・arcdump の 4 桁では、float の
        # 最後の 1 ビットの違いが見えないため。2026-09-29 に ○ の半径で）。
        echo "== raw"
        python tools/recdump.py "$D/$f.JWC" 2> /dev/null || true
    } > "$D/$f.txt"
done
# **何も起きなかった検査を「同じ」と言わない**ように、元の図面から
# 増えた記録の数も出します（2026-09-28、線が一本も引かれていないのに
# same と出て、試したつもりになりかけた）。
for f in orig port; do
    [ -f "$D/base.txt" ] || {
        {
            echo "== lines"; python tools/linedump.py "orig/$DRAWING.JWC"
            echo "== arcs"; python tools/arcdump.py "orig/$DRAWING.JWC" 2> /dev/null || true
            echo "== texts"; python tools/textdump.py "orig/$DRAWING.JWC" 2> /dev/null || true
            echo "== raw"; python tools/recdump.py "orig/$DRAWING.JWC" 2> /dev/null || true
        } > "$D/base.txt"
    }
done
added=$(diff "$D/base.txt" "$D/orig.txt" | grep -c '^[<>]' || true)
rm -f "$D/base.txt"
if cmp -s "$D/orig.txt" "$D/port.txt"; then
    if [ "$added" = 0 ]; then
        echo "$DRAWING: NOTHING HAPPENED (本物も記録が変わっていません——手順を見直すこと)"
        exit 2
    fi
    echo "$DRAWING: same ($added rows changed from the drawing)"
    exit 0
fi
echo "$DRAWING: DIFFERENT"
diff "$D/orig.txt" "$D/port.txt" | head -${SHOW:-20}
exit 1
