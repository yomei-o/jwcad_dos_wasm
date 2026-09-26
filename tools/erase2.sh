#!/bin/sh
# 消去（25 番）の**左**ボタンの枝 —— 追加･除外 —— を本物と移植の両方に通して
# 640x480 まるごと比べる。
#
#   sh tools/erase2.sh 150 130 245 170 197 157
#       範囲を (150,130)-(245,170) で囲み（2 回目も左）、(197,157) の線を
#       選択から外し、①範囲 確定 → ①実行 まで。
#
# 2 回目を右で押す枝は tools/erase.sh のほう。上の行の桁は測ってあります:
# 追加･除外 の `|①範囲 確定|` は 69〜78 桁（x=580 あたり）、
# 復活出来ません の `|① 実行(L)|` は 24〜33 桁（x=220 あたり）。
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/er
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
WAIT="${WAIT:-40000000}"
ax="${1:-150}"; ay="${2:-130}"; bx="${3:-245}"; by="${4:-170}"
tx="${5:-197}"; ty="${6:-157}"
ok="${OK:-580}"                 # 上の行の ①範囲 確定
go="${GO:-220}"                 # 上の行の ①実行
# STOP=1 で ①範囲 確定 の手前で止めます。選ばれているもの（赤）と外した
# もの（白に戻る）をそのまま見たいときはこちら。撮影先も分けてあります
# ——台本を作り替えたら撮影先も変えること（「刺された罠」）。
if [ -n "$STOP" ]; then out=stop; else out=go; fi
if [ -n "$RIGHT" ]; then btn=right; else btn=left; fi

P='mouse %d %d\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait 24000000\n'
{
    printf 'wait %s\nmouse 30 216\nwait 2000000\nclick left\nwait 24000000\n' "$WAIT"
    # OUT=1 なら先に上の行の ②範囲外消去 を押します（桁 42〜53、x 328〜431）。
    [ -n "$OUT" ] && { printf "$P" 380 8 left left; printf 'wait 30000000
'; }
    printf "$P" "$ax" "$ay" left left
    printf "$P" "$bx" "$by" left left
    # FKEY=2 で [F2]——選択がまるごと消えます（4.9b）。そのあとの押しは
    # 外すのではなく足すほうになります。
    [ -n "$FKEY" ] && printf 'key f%s\nwait 40000000\n' "$FKEY"
    # DUMMY="x y" があれば、その点を先に左で押します。**追加･除外 の最初の
    # 押しは 11f2:573f まで届きません**（別の道を通っているらしい）ので、
    # 右ボタンの 文字(R) を試すときは捨て駒を 1 回挟む必要があります。
    [ -n "$DUMMY" ] && printf "$P" $DUMMY left left
    # RIGHT=1 なら 3 回目を右で——追加･除外 の 文字(R) のほう。
    printf "$P" "$tx" "$ty" "$btn" "$btn"
    if [ -z "$STOP" ]; then
        printf "$P" "$ok" 8 left left
        printf "$P" "$go" 8 left left
    fi
    # 撮る前にもうひと呼吸——「※お待ち下さい※」が出ている最中に撮ると、
    # その帯が写り込んで数百画素の差になります。
    printf 'wait 40000000\n'
    printf 'shot ../jwcad_dos_wasm/tmp/er/%s_orig.raw\n' "$out"
} > tmp/er/check.txt
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/er/check.txt orig/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
set -- -c 25
[ -n "$OUT" ] && set -- "$@" -t 380
set -- "$@" -p "$ax" "$ay" -p "$bx" "$by"
[ -n "$DUMMY" ] && set -- "$@" -p $DUMMY
[ -n "$FKEY" ] && set -- "$@" -f "$FKEY"
if [ -n "$RIGHT" ]; then set -- "$@" -r "$tx" "$ty"; else set -- "$@" -p "$tx" "$ty"; fi
if [ -n "$STOP" ]; then
    set -- "$@" -m "$tx" "$ty"
else
    set -- "$@" -t "$ok" -t "$go" -m "$go" 8
fi
./tests/drawing.exe -u "$@" "orig/$DRAWING.JWC" "tmp/er/${out}_port.raw" > /dev/null
printf '消去 追加･除外%s%s (%s,%s)-(%s,%s) 指す(%s,%s)  ' \
    "${OUT:+ 範囲外}${FKEY:+ [F$FKEY]}${RIGHT:+ 文字(R)}" "${STOP:+（確定前）}" "$ax" "$ay" "$bx" "$by" "$tx" "$ty"
python tools/fulldiff.py "tmp/er/${out}_orig.raw" "tmp/er/${out}_port.raw"
