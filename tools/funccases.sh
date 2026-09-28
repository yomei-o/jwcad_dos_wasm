#!/bin/sh
# 働きの検査の一覧を全部走らせます（tools/functest.sh を 1 行ずつ）。
#
#   sh tools/funccases.sh tools/cases/func_draw.txt          # ぜんぶ
#   sh tools/funccases.sh tools/cases/func_draw.txt pen      # 名前に pen が入るものだけ
#
# 一覧は 1 行 1 件、`名前|図面|手順|手順|...`。# で始まる行と空行は飛ばします。
# **先に sh tools/build_wasm.sh** を。ここは作り直しません。
cd "$(dirname "$0")/.."
list="$1"
only="$2"
[ -f "$list" ] || { echo "no such list: $list" >&2; exit 2; }
ok=0; bad=0; none=0
while IFS= read -r line; do
    case "$line" in ''|\#*) continue ;; esac
    name=${line%%|*}
    rest=${line#*|}
    drawing=${rest%%|*}
    steps=${rest#*|}
    [ -z "$only" ] || case "$name" in *"$only"*) ;; *) continue ;; esac
    # 手順を | で割って引数に
    old_ifs=$IFS; IFS='|'; set -- $steps; IFS=$old_ifs
    out=$(DRAWING="$drawing" SHOW=6 sh tools/functest.sh "$@" 2>&1)
    rc=$?
    case $rc in
    0) ok=$((ok + 1)); printf '  ok    %-28s %s\n' "$name" "${out#*: }" ;;
    2) none=$((none + 1)); printf '  EMPTY %-28s %s\n' "$name" "${out#*: }" ;;
    *) bad=$((bad + 1)); printf '  DIFF  %-28s\n%s\n' "$name" "$(printf '%s\n' "$out" | sed 's/^/        /')" ;;
    esac
done < "$list"
echo "same $ok / different $bad / nothing happened $none"
