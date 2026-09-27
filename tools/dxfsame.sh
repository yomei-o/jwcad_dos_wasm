#!/bin/sh
# 本物が書いた DXF と、移植が書いた DXF を**バイトで**比べます。
#
#     sh tools/dxfsame.sh              # SAMPLE0
#     sh tools/dxfsame.sh SAMPLE1
#
# 本物のほうは毎回エミュレータで作り直します——`tmp/` は git に入って
# いないので、置いてある写しを手本にすると、clone し直した所では何も
# 比べずに通ってしまいます。
#
# 道は tools/dxfout.mjs と同じ:
#   入出力 → ①ﾌｧｲﾙ → ⑥ＤＸＦ → ① 保存 → ③ 新規 保存 → [Enter] → ① 実 行
set -e
cd "$(dirname "$0")/.."
D="${1:-SAMPLE0}"
mkdir -p tmp/dxf

# 本物。seqcheck が客の根を tmp/seq/dxfsame/root に作り、客はそこに書きます。
# **NOCACHE=1 が要ります。** seqcheck は本物の絵を取っておくので、2 度目は
# エミュレータを走らせません——走らせないと客が DXF を書きません。
# **WAIT を長めに。** 既定の 2,600 万命令では、大きい図面の書き出しが
# 途中で切れます（SAMPLE1 は 13,948 行のうち 8,711 行で終わっていました）。
# seqcheck は**押すたびに**この数だけ待つので、大きくしすぎると遅くなります。
NOCACHE=1 WAIT="${WAIT:-60000000}" DRAWING="$D" SEQID=dxfsame sh tools/seqcheck.sh \
    "30 296 left" "110 8 left" "460 8 left" \
    "100 8 left" "460 8 left" "key enter" "220 8 left" > /dev/null 2>&1 || true
[ -f "tmp/seq/dxfsame/root/$D.dxf" ] || {
    echo "  FAIL 本物が $D.dxf を書きませんでした" >&2
    exit 1
}

NODE="${NODE:-}"
[ -n "$NODE" ] || { command -v node > /dev/null 2>&1 && NODE=node; }
[ -n "$NODE" ] || NODE=$(ls /c/prog/emsdk/emsdk/node/*/bin/node.exe 2>/dev/null | head -1)
"$NODE" tools/dxfout.mjs "orig/$D.JWC" "tmp/dxf/$D.port.dxf" > /dev/null

if cmp -s "tmp/seq/dxfsame/root/$D.dxf" "tmp/dxf/$D.port.dxf"; then
    echo "  ok   $D の DXF は本物とバイトまで同じ ($(wc -c < "tmp/dxf/$D.port.dxf") bytes)"
else
    n=$(diff "tmp/seq/dxfsame/root/$D.dxf" "tmp/dxf/$D.port.dxf" | grep -c '^<' || true)
    echo "  FAIL $D の DXF が $n 行違います"
    exit 1
fi
