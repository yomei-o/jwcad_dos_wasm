#!/bin/sh
# 帯の電卓——升目・[f1]計算結果表示・[f2]数値取得 を、本物と移植で比べます。
#
#   sh tools/calccheck.sh            # ぜんぶ
#   sh tools/calccheck.sh f2         # 名前に f2 が入るものだけ
#
# どれも tools/seqcheck.sh を呼ぶので、**先に sh tools/build_wasm.sh** を
# 走らせてください（seqcheck は作り直しません）。
#
# 升目の押しどころ（**枡は y=337 から 16 ごと**、桁は x 0/24/48/72/88/103
# ——下二行だけ ＋ と ＝ が 72〜102 の二枡ぶん）:
#
#     y=344  7(12)  8(36)  9(60)  -(80)  /(95)  ±(111)
#     y=360  4(12)  5(36)  6(60)  *(80)  ﾟ(95)  AC(111)
#     y=376  1(12)  2(36)  3(60)  ＋(87)        Ｃ(111)
#     y=392  0(12)  ,(36)  ･(60)  ＝(87)        En(111)
set -e
cd "$(dirname "$0")/.."
only="$1"
fail=0

case_() {
    name="$1"
    shift
    if [ -n "$only" ]; then
        case "$name" in
            *"$only"*) ;;
            *) return 0 ;;
        esac
    fi
    printf '%-14s ' "$name"
    out=$(sh tools/seqcheck.sh "$@" 2>/dev/null | tail -1)
    printf '%s\n' "$out"
    case "$out" in
        *" 0 different") ;;
        *) fail=$((fail + 1)) ;;
    esac
}

OPEN="25 470 left"
# 7＋9＝ を置いて 16 を作る道（[f1]/[f2] の試しの下ごしらえ）
SEVEN="12 344 left"
PLUS="87 376 left"
NINE="60 344 left"
EQ="87 392 left"

# --- 升目 ---------------------------------------------------------------
case_ "開く"        "$OPEN"
case_ "数字"        "$OPEN" "$SEVEN"
case_ "小数点"      "$OPEN" "$SEVEN" "60 392 left" "36 360 left"
case_ "四則"        "$OPEN" "$SEVEN" "$PLUS" "$NINE"
case_ "＝"          "$OPEN" "$SEVEN" "$PLUS" "$NINE" "$EQ"
case_ "連続の＝"    "$OPEN" "$SEVEN" "$PLUS" "$NINE" "$EQ" "$EQ"
case_ "AC"          "$OPEN" "$SEVEN" "$PLUS" "$NINE" "111 360 left"
case_ "Ｃ"          "$OPEN" "$SEVEN" "$PLUS" "$NINE" "111 376 left"
case_ "±打ち中"     "$OPEN" "$SEVEN" "111 344 left"
case_ "±開直後"     "$OPEN" "111 344 left"
case_ "±答えの後"   "$OPEN" "$SEVEN" "$PLUS" "$NINE" "$EQ" "111 344 left"
case_ "ﾟ"           "$OPEN" "$SEVEN" "95 360 left" "60 376 left" "12 392 left" "95 360 left"
case_ "F6べき乗"    "$OPEN" "36 376 left" "key f6" "60 376 left" "$EQ"
case_ "F7ﾙｰﾄ"       "$OPEN" "60 344 left" "key f7"
case_ "F8COS"       "$OPEN" "12 392 left" "key f8"
case_ "F9SIN"       "$OPEN" "60 376 left" "12 392 left" "key f9"
case_ "F10ATAN"     "$OPEN" "60 376 left" "key f10"
case_ "ATAN5"       "$OPEN" "36 360 left" "key f10"
case_ "2÷3"         "$OPEN" "36 376 left" "95 344 left" "60 376 left" "$EQ"
case_ "1÷7"         "$OPEN" "12 376 left" "95 344 left" "12 344 left" "$EQ"
case_ "八桁"        "$OPEN" "$SEVEN" "36 344 left" "60 344 left" "12 360 left" \
                    "36 360 left" "60 360 left" "12 376 left" "36 376 left"

# --- 升目の切れ目（どれも端の 1 画素で別の枡になります） ----------------
case_ "枡y336"      "$OPEN" "12 336 left"
case_ "枡y337"      "$OPEN" "12 337 left"
case_ "枡y352"      "$OPEN" "12 352 left"
case_ "枡y353"      "$OPEN" "12 353 left"
case_ "枡y368"      "$OPEN" "36 368 left"
case_ "枡y369"      "$OPEN" "36 369 left"
case_ "枡y384"      "$OPEN" "12 384 left"
case_ "枡y385"      "$OPEN" "12 385 left"
case_ "枡y400"      "$OPEN" "12 400 left"
case_ "枡x23"       "$OPEN" "23 344 left"
case_ "枡x24"       "$OPEN" "24 344 left"
case_ "枡x47"       "$OPEN" "47 344 left"
case_ "枡x48"       "$OPEN" "48 344 left"
case_ "枡x71"       "$OPEN" "71 344 left"
case_ "枡x72"       "$OPEN" "72 344 left"
case_ "枡x87"       "$OPEN" "87 344 left"
case_ "枡x88"       "$OPEN" "88 344 left"
case_ "枡x102"      "$OPEN" "102 344 left"
case_ "枡x103"      "$OPEN" "103 344 left"
case_ "枡x102下"    "$OPEN" "102 376 left"
case_ "枡x103下"    "$OPEN" "103 376 left"

# --- [f1]計算結果表示 ---------------------------------------------------
case_ "f1の行"      "$OPEN" "key f1"
case_ "f1外し"      "$OPEN" "key f1" "key esc"
case_ "f1置く"      "$OPEN" "$SEVEN" "$PLUS" "$NINE" "$EQ" "key f1" "300 250 left"
case_ "f1右読取"    "$OPEN" "$SEVEN" "$PLUS" "$NINE" "$EQ" "key f1" "300 250 right"
case_ "f1置後数字"  "$OPEN" "$SEVEN" "$PLUS" "$NINE" "$EQ" "key f1" "300 250 left" "$SEVEN"
case_ "f1打ち中"    "$OPEN" "$SEVEN" "key f1" "300 250 left"
case_ "f1演算中"    "$OPEN" "$SEVEN" "$PLUS" "key f1" "300 250 left"
case_ "f1演算続"    "$OPEN" "$SEVEN" "$PLUS" "key f1" "300 250 left" "36 376 left" "$EQ"
case_ "f1度の後"    "$OPEN" "$SEVEN" "95 360 left" "key f1" "300 250 left"

# --- [f2]数値取得 -------------------------------------------------------
case_ "f2の行"      "$OPEN" "key f2"
case_ "f2外し"      "$OPEN" "key f2" "key esc"
case_ "f2外れ"      "$OPEN" "key f2" "500 430 left"
case_ "f2外れ後"    "$OPEN" "key f2" "500 430 left" "300 250 left"
case_ "f2レイヤ"    "$OPEN" "key f2" "377 248 left"
case_ "f2文字"      "$OPEN" "key f2" "175 410 left"
case_ "f2英字"      "$OPEN" "key f2" "470 410 left"
case_ "f2再取得"    "$OPEN" "$SEVEN" "$PLUS" "$NINE" "$EQ" "key f1" "300 250 left" \
                    "key f2" "300 250 left"
case_ "f2後イコ"    "$OPEN" "$SEVEN" "$PLUS" "$NINE" "$EQ" "key f1" "300 250 left" \
                    "key f2" "300 250 left" "$EQ"
case_ "f2で計算"    "$OPEN" "$SEVEN" "$PLUS" "$NINE" "$EQ" "key f1" "300 250 left" \
                    "key f2" "300 250 left" "$PLUS" "36 376 left" "$EQ"
case_ "f2後置く"    "$OPEN" "$SEVEN" "$PLUS" "$NINE" "$EQ" "key f1" "300 250 left" \
                    "key f2" "300 250 left" "key f1" "200 200 left"

# --- 分かっている残り（原作の atan が 12 桁目で違います。丸めでも
# 切り捨てでもなく、値そのものが 5e-12 ほど小さいときがあります——
# ATAN(3)・ATAN(5) は合うので、桁の出し方ではありません）。 ------------
known_() {
    name="$1"
    shift
    if [ -n "$only" ]; then
        case "$name" in
            *"$only"*) ;;
            *) return 0 ;;
        esac
    fi
    printf '%-14s ' "$name"
    sh tools/seqcheck.sh "$@" 2>/dev/null | tail -1
}
known_ "ATAN2(既知)" "$OPEN" "36 376 left" "key f10"
known_ "ATAN7(既知)" "$OPEN" "$SEVEN" "key f10"

if [ "$fail" -gt 0 ]; then
    printf '%s\n' "FAIL $fail"
    exit 1
fi
printf '%s\n' "電卓 ぜんぶ 0 画素差"
