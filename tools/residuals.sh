#!/bin/sh
# **検査が出した数を読むための道具。**
#
#   sh tools/check.sh > /tmp/check.log 2>&1
#   sh tools/residuals.sh /tmp/check.log
#
# `tools/check.sh` の行には `|| true` が付いているので、**差があっても
# 落ちません**。合格の字だけ見て進むと、12,227 画素の穴が何日も残ります
# （2026-09-26 に実際にそうなりました。`notes/ui.md` は「0 画素差」と
# 書いてあり、検査は 7 回とも 12227 を出していました）。
#
# これは、そのログから **0 でない数だけ**を、どの節のものかを付けて
# 並べ直します。RESUME.md の「いま残っている差」と見比べてください。
set -e
cd "$(dirname "$0")/.."
log="${1:-/tmp/check.log}"
[ -f "$log" ] || { echo "no such log: $log" >&2; exit 2; }

awk '
/^=== / { sect = $0; sub(/^=== /, "", sect); next }
/^    [^ ]/ && sect != "" && cont == 0 { next }
{
    line = $0
    # `... 336 different ...` か `SAMPLE0: 10 different` の形
    if (match(line, /[0-9]+ different/)) {
        n = substr(line, RSTART, RLENGTH)
        sub(/ different/, "", n)
        if (n + 0 != 0) {
            if (sect != shown) { printf "\n[%s]\n", sect; shown = sect }
            printf "  %6d  %s\n", n + 0, line
        } else {
            zero++
        }
    }
}
END { printf "\n0 だったもの: %d 件\n", zero }
' "$log"
