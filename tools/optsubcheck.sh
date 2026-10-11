#!/bin/sh
# ｵﾌﾟｼｮﾝ ④一括処理 の ④ﾚｲﾔ整理・⑤ｸﾞﾙｰﾌﾟ整理 の画面を、本物と移植で突き合わせる。
#
#   sh tools/optsubcheck.sh            # 全部
#   sh tools/optsubcheck.sh g1         # 名前に g1 が入るものだけ
#   DRAWING=TEST6 sh tools/optsubcheck.sh
#
# 1 行 = 名前|手順|手順…（tools/seqcheck.sh の書き方）。先に tools/build_wasm.sh を。
# 結果は tmp/seq/<名前>/ に orig.raw・port.raw が残る。
cd "$(dirname "$0")/.."
only="$1"
list="${LIST:-tools/cases/optsub_screens.txt}"
ok=0
bad=0
while IFS= read -r line; do
    line=${line%"$(printf '\r')"}
    case "$line" in ''|\#*) continue ;; esac
    name=${line%%|*}
    steps=${line#*|}
    [ -z "$only" ] || case "$name" in *"$only"*) ;; *) continue ;; esac
    old_ifs=$IFS
    IFS='|'
    set -- $steps
    IFS=$old_ifs
    out=$(SEQID="$name" sh tools/seqcheck.sh "$@" 2>&1)
    rc=$?
    if [ "$rc" = 0 ]; then
        ok=$((ok + 1))
        printf '  ok    %-24s %s\n' "$name" "$out"
    else
        bad=$((bad + 1))
        printf '  DIFF  %-24s %s\n' "$name" "$out"
    fi
done < "$list"
echo "same $ok / different $bad"
