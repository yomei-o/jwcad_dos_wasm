#!/bin/sh
# 下の帯（電卓・範囲記憶・前倍率・Zoom・倍率指定・ｵﾌｾｯﾄ・HELP）の押し。
#
#   sh tools/stripcheck.sh           # ぜんぶ（18 通り、1 秒）
#   sh tools/stripcheck.sh 記憶      # 名前に 記憶 が入るものだけ
#
# 手順は tools/cases/strip.txt、仕組みは tools/cases.sh にあります。
# 押しどころ: 電卓 (25,470)、範囲記憶 (90,470)、ｵﾌｾｯﾄ (570,470)。
exec sh "$(dirname "$0")/cases.sh" "$(dirname "$0")/cases/strip.txt" "$1"
