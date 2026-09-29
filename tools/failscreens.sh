#!/bin/sh
# tools/cases/func_fail.txt（働きの検査の一覧）と同じ手順の**画面**を、
# tools/cases.sh で本物と比べます（最後の絵）。図面は SAMPLE0 だけ。
#
#   sh tools/failscreens.sh             # ぜんぶ
#   sh tools/failscreens.sh sl_len      # 名前に sl_len が入るものだけ
cd "$(dirname "$0")/.."
list="${LIST:-tools/cases/func_fail.txt}"
out=tmp/failscreens.txt
grep -v '^#' "$list" | grep . | awk -F'|' '{
    s = ""; for (i = 3; i <= NF; i++) s = s (i > 3 ? "|" : "") $i
    print $1 "\t" s }' > "$out"
sh tools/cases.sh "$out" "$1"
