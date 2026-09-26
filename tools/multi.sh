#!/bin/sh
# 複線（5 番）を本物に最後まで通させて、書いた文字と引いた線を出す。
#
#   sh tools/multi.sh 20              # 線を左で指示 → 間隔 20 → 上側へ
#   sh tools/multi.sh 40 197 300      # 逃がす向きを下側に
#   DRAWING=SAMPLE1 sh tools/multi.sh 1000
#
# 数値入力のある命令はこれが最初なので、測りかたをここに残しておきます。
# 押しは 3 回 + 打鍵:
#
#   1  線を**左**で指示   上の行が `点指示 or 間隔=` ＋ [F1]〜[F5] になり、
#                         22 桁目から 8 桁ぶんが入力欄として空白で消される
#   2  数字を打つ         1 文字ごとに 22+n 桁目へ `"<字>  "` と書かれる
#                         （字のうしろの 2 桁も消しているので、桁は戻せる）
#   3  [Enter]            帯の 64 桁目に `[      20.000]`、上の行が
#                         `○ 複写方向マウス指示(L)   連続入力[<┛]` に変わる
#   4  逃がす側を押す     複線が 1 本引かれ、線数が 1 増える
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/multi
EMU=tools/emu.sh
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
gap="${1:-20}"
px="${2:-197}"
py="${3:-120}"
# 線を指示する点。SAMPLE0 では (197,157) が y=157 の線の上。
lx="${LX:-197}"
ly="${LY:-157}"

{
    printf 'wait 40000000\nmouse 90 136\nwait 2000000\nclick left\nwait 24000000\n'
    printf 'mouse %d %d\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 16000000\n' "$lx" "$ly"
    printf 'shot ../jwcad_dos_wasm/tmp/multi/ask.raw\n'
    # 一文字ずつ。まとめて送ると本物は最初の 1 文字しか拾いません
    echo "$gap" | fold -w1 | while read -r c; do
        printf 'type %s\nwait 8000000\n' "$c"
    done
    printf 'shot ../jwcad_dos_wasm/tmp/multi/typed.raw\n'
    printf 'key enter\nwait 24000000\nshot ../jwcad_dos_wasm/tmp/multi/ready.raw\n'
    printf 'mouse %d %d\nwait 3000000\ndown left\nwait 3000000\nup left\nwait 24000000\n' "$px" "$py"
    printf 'shot ../jwcad_dos_wasm/tmp/multi/done.raw\n'
} > tmp/multi/script.txt

DOSEMU_BP=+0DEF:23C5 DOSEMU_BPSTR=2 DOSEMU_BPN=40000 \
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/multi/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       2>/dev/null > tmp/multi/str.txt
DOSEMU_BP=+10a9:07dc DOSEMU_BPN=400000 \
"$EMU" --root orig --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/multi/script.txt orig/JW_CADV.EXE "$DRAWING.JWC" \
       2>/dev/null > tmp/multi/lines.txt

echo "== 本物が上の行と帯に書いたもの"
python - <<'PY'
import sys
sys.stdout.reconfigure(encoding='utf-8', errors='replace')
for line in open('tmp/multi/str.txt', encoding='latin-1'):
    f = line.split()
    if len(f) < 15 or f[0] != '[bp]' or line.count('"') < 2:
        continue
    col, row = int(f[8], 16), int(f[9], 16)
    if row > 3 or int(f[3]) < 66_000_000:
        continue
    s = line[line.index('"') + 1:line.rindex('"')]
    if not s.strip() and col in (17, 18):
        continue
    print('  t=%-11s col=%-3d row=%-3d %s'
          % (f[3], col, row, s.encode('latin-1', 'replace').decode('cp932', 'replace')))
PY

echo "== 引かれた線（作図領域、ポインタの排他的論理和をのぞく）"
awk '{y0=strtonum("0x"$9); y1=strtonum("0x"$11); rop=strtonum("0x"$13);
      if ($4+0 > 120000000 && y0 > 48 && y1 > 48 && rop != 24)
          printf "  t=%-11s (%d,%d)-(%d,%d) col=%d style=%s\n",
                 $4, strtonum("0x"$8), y0, strtonum("0x"$10), y1,
                 strtonum("0x"$12), $14}' tmp/multi/lines.txt
