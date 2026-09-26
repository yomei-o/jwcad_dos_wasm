#!/bin/sh
# 本物（dosv_emu_cpp）を呼ぶところ。**撮った絵を取っておきます。**
#
# 道具は EMU=../dosv_emu_cpp/dosemu.exe のかわりに EMU=tools/emu.sh を
# 使います。引数はそのまま素通しで、変わるのは三つ:
#
# 1. **`--root orig` は写しに差し替えます**（tmp/emuroot）。原作は走る
#    たびに `JW_FILE0.000` と `AUTO.JWC` を書くので、orig/ で走らせると
#    配布物が汚れ、**同じ検査が二度と同じ入口から始まりません**。写しなら
#    毎回同じところから始まり、取っておいた絵と比べられます。
# 2. **同じ EXE・同じ台本・同じ部屋なら、2 度目は走らせません。**
#    取っておいた `shot` の絵を戻すだけです（1 件 10 秒 → 0.2 秒）。
# 3. **客が部屋に何か書いたら、その実行は取っておきません。** 保存の道
#    （tools/save.sh など）は絵のほかにファイルを作るので、取っておくと
#    次から作られなくなります。走らせたあとに部屋の中を見て、新しいものや
#    書き変わったものが 1 つでもあれば捨てます（`JW_FILE0.000` と
#    `AUTO.JWC` は原作が必ず書くので数えません）。道具の側で何か覚えて
#    おく必要はありません。
#
# NOCACHE=1 で毎回走らせます。EXE とフォントの ls -l は「印」に入れて
# あり、変わればキャッシュを全部捨てます——**古い絵と比べるのが
# いちばん危ない**ので。部屋の中身は鍵のほうで見ます（下）。
set -e
cd "$(dirname "$0")/.."
REAL=../dosv_emu_cpp/dosemu.exe
[ -x "$REAL" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }

MYROOT=tmp/emuroot
root=""
script=""
prev=""
for a in "$@"; do
    case "$prev" in
    --root)   root="$a" ;;
    --script) script="$a" ;;
    esac
    prev="$a"
done

# orig を部屋にしているものは写しに差し替えます。
swap=0
[ "$root" = orig ] && swap=1
if [ -n "$NOCACHE" ] || [ -z "$script" ] || [ ! -f "$script" ]; then
    if [ "$swap" = 1 ]; then
        rm -rf "$MYROOT"; cp -rp orig "$MYROOT"
        set -- $(printf '%s\n' "$@" | sed "s|^orig$|$MYROOT|")
    fi
    exec "$REAL" "$@"
fi

CACHE="${EMUCACHE:-tmp/emucache}"
mkdir -p "$CACHE"
# **`orig` は印に入れません。** 検査の中には図面を 1 枚 orig/ に
# 書く節があり、入れていると そのたびに取ってあった絵を全部
# 捨てていました。部屋の中身は下の roomkey が見ています。
stamp=$(ls -l "$REAL" font/JWANK16.FNT font/JWKAN16.FNT | md5sum)
if [ ! -f "$CACHE/stamp" ] || [ "$(cat "$CACHE/stamp")" != "$stamp" ]; then
    rm -rf "$CACHE"
    mkdir -p "$CACHE"
    printf '%s\n' "$stamp" > "$CACHE/stamp"
fi

# **部屋の中身も鍵に入れます。** 日付ではなく中身です——`savecheck.sh`
# は移植が書いた図面を客に開かせるので、台本と引数が同じまま中身だけ
# 違うことがあります。そこを見ないと前の絵を返してしまいます（実際に
# 126 画素の食い違いとして出ました）。
roomkey=""
if [ -n "$root" ] && [ -d "$root" ]; then
    roomkey=$(find "$root" -type f -print0 2>/dev/null | sort -z \
              | xargs -0 md5sum 2>/dev/null | md5sum)
fi
key=$( { cat "$script"
         printf '%s\n' "$@"
         printf '%s\n' "$roomkey"
         env | grep '^DOSEMU_' | sort || true
       } | md5sum | cut -d' ' -f1)
dir="$CACHE/$key"
shots=$(sed -n 's/^shot  *//p' "$script")

host() {                        # 台本の中の道を、こちらから見た道に
    case "$1" in
    ../jwcad_dos_wasm/*) printf '%s' "${1#../jwcad_dos_wasm/}" ;;
    *)                   printf '%s' "$1" ;;
    esac
}

if [ -d "$dir" ]; then
    ok=1
    n=0
    for s in $shots; do
        n=$((n + 1))
        [ -f "$dir/$n.raw" ] || ok=0
    done
    if [ "$ok" = 1 ]; then
        n=0
        for s in $shots; do
            n=$((n + 1))
            t=$(host "$s")
            mkdir -p "$(dirname "$t")"
            cp "$dir/$n.raw" "$t"
        done
        [ ! -f "$dir/out" ] || cat "$dir/out"
        exit 0
    fi
    rm -rf "$dir"
fi

if [ "$swap" = 1 ]; then
    rm -rf "$MYROOT"
    cp -rp orig "$MYROOT"
    set -- $(for a in "$@"; do if [ "$a" = orig ]; then printf '%s\n' "$MYROOT"; else printf '%s\n' "$a"; fi; done)
    root=$MYROOT
fi

mark=""
if [ -n "$root" ] && [ -d "$root" ]; then
    mark="$CACHE/.mark"
    : > "$mark"
fi
status=0
"$REAL" "$@" > "$CACHE/.out" 2>&1 || status=$?
cat "$CACHE/.out"
[ "$status" = 0 ] || exit "$status"

wrote=0
if [ -n "$mark" ]; then
    stray=$(find "$root" -type f -newer "$mark" ! -name 'AUTO.JWC' \
            ! -name 'AUTO.bak' ! -name 'JW_FILE0.000' -print -quit 2>/dev/null)
    [ -z "$stray" ] || wrote=1
fi
[ "$wrote" = 0 ] || exit 0

mkdir -p "$dir"
n=0
for s in $shots; do
    n=$((n + 1))
    t=$(host "$s")
    [ -f "$t" ] || { rm -rf "$dir"; exit 0; }
    cp "$t" "$dir/$n.raw"
done
cp "$CACHE/.out" "$dir/out"
