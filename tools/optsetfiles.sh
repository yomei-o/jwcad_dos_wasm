#!/bin/sh
# ｵﾌﾟｼｮﾝ ⑥各設定 が書くファイル（jw_key.000・jw_pal.dat）を、本物と移植で突き合わせる。
#
#   sh tools/optsetfiles.sh            # 全部
#   sh tools/optsetfiles.sh pal        # 名前に pal が入るものだけ
#
# 一覧 tools/cases/optset_files.txt の 1 行：名前|ファイル（本物の名>移植の名）|本物の手順（tools/probe.sh の言葉）|移植の手順（tools/portrec.mjs の言葉、| 区切り）
# 本物は tools/probe.sh で走らせ、書いたファイルを tmp/emuroot から取る。先に tools/build_wasm.sh を。
cd "$(dirname "$0")/.."
only="$1"
NODE="${NODE:-}"
[ -n "$NODE" ] || NODE=$(ls /c/prog/emsdk/emsdk/node/*/node.exe 2>/dev/null | head -1)
mkdir -p tmp/optsetfiles
ok=0
bad=0
while IFS= read -r line; do
    line=${line%"$(printf '\r')"}
    case "$line" in ''|\#*) continue ;; esac
    name=${line%%|*}
    rest=${line#*|}
    file=${rest%%|*}
    rest=${rest#*|}
    probe=${rest%%|*}
    steps=${rest#*|}
    [ -z "$only" ] || case "$name" in *"$only"*) ;; *) continue ;; esac
    out=tmp/optsetfiles/$name
    rm -f "$out.orig" "$out.port"
    sh tools/probe.sh $probe > /dev/null 2>&1
    efile=${file%%>*}
    pfile=${file#*>}
    [ -f "tmp/emuroot/$efile" ] && cp "tmp/emuroot/$efile" "$out.orig"
    old_ifs=$IFS
    IFS='|'
    set -- $steps
    IFS=$old_ifs
    DUMP_FILE="$pfile" DUMP_TO="$out.port" OUT="$out.jwc" "$NODE" tools/portrec.mjs orig/SAMPLE0.JWC "$@" > /dev/null 2>&1
    if [ -f "$out.orig" ] && cmp -s "$out.orig" "$out.port"; then
        ok=$((ok + 1))
        printf '  ok    %-20s %s bytes\n' "$name" "$(wc -c < "$out.port")"
    else
        bad=$((bad + 1))
        printf '  DIFF  %-20s orig=%s port=%s\n' "$name" "$(wc -c < "$out.orig" 2>/dev/null)" "$(wc -c < "$out.port" 2>/dev/null)"
    fi
done < tools/cases/optset_files.txt
echo "same $ok / different $bad"
