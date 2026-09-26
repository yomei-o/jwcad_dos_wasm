#!/bin/sh
# 測りを **同時に走らせます**。1 件 10 秒（うち 6 秒が DOS の起動）なので、
# 並べるだけで台数ぶん速くなります。
#
#   sh tools/runcases.sh cases.txt          # 既定 6 本
#   JOBS=8 sh tools/runcases.sh cases.txt
#   sh tools/runcases.sh cases.txt f2       # 名前に f2 が入るものだけ
#
# cases.txt は 1 行 1 件、**名前とあいだをタブ**で、手順は `|` で区切ります:
#
#   開く<TAB>25 470 left
#   ＝<TAB>25 470 left|12 344 left|87 376 left|60 344 left|87 392 left
#
# `#` で始まる行と空行は飛ばします。DRAWING= を頭につけると、その 1 件だけ
# 別の図面で測ります（例: `DRAWING=SAMPLE3 30 344 left`）。
#
# **先に sh tools/build_wasm.sh** を。seqcheck は作り直しません。
set -e
cd "$(dirname "$0")/.."
list="$1"
only="$2"
[ -f "$list" ] || { echo "no such list: $list" >&2; exit 2; }
jobs="${JOBS:-6}"
out="tmp/cases"
rm -rf "$out"
mkdir -p "$out"

# 1 件を走らせて、答えを自分の番号のファイルに置きます。
one() {
    idx="$1"
    name="$2"
    steps="$3"
    slot="$4"
    (
        IFS='|'
        # shellcheck disable=SC2086
        set -- $steps
        unset IFS
        SEQID="w$slot" KEEPROOT=1 sh tools/seqcheck.sh "$@" 2>/dev/null | tail -1
    ) > "$out/$idx.out" 2>&1 || true
    printf '%s\n' "$name" > "$out/$idx.name"
}

n=0
running=0
while IFS='	' read -r name steps; do
    case "$name" in ''|'#'*) continue ;; esac
    if [ -n "$only" ]; then
        case "$name" in *"$only"*) ;; *) continue ;; esac
    fi
    n=$((n + 1))
    one "$n" "$name" "$steps" "$(( (n - 1) % jobs + 1 ))" &
    running=$((running + 1))
    if [ "$running" -ge "$jobs" ]; then
        wait
        running=0
    fi
done < "$list"
wait

fail=0
i=1
while [ "$i" -le "$n" ]; do
    name=$(cat "$out/$i.name" 2>/dev/null || echo "?")
    got=$(cat "$out/$i.out" 2>/dev/null || echo "(no answer)")
    printf '%-16s %s\n' "$name" "$got"
    case "$name" in
    '~'*) ;;                     # 分かっている残り。出すだけで数えません
    *)
        case "$got" in
            *" 0 different") ;;
            *) fail=$((fail + 1)) ;;
        esac
        ;;
    esac
    i=$((i + 1))
done
if [ "$fail" -gt 0 ]; then
    printf '%s\n' "FAIL $fail / $n"
    exit 1
fi
printf '%s\n' "$n 通り ぜんぶ 0 画素差"
