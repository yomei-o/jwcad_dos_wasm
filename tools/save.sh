#!/bin/sh
# Have the **original** save a drawing, so there is something to compare a
# saved file against.
#
#   sh tools/save.sh                       # SAMPLE0, saved back over itself
#   DRAWING=SAMPLE6 BOOT=120000000 sh tools/save.sh
#   PRE=tmp/edit.txt sh tools/save.sh      # ... after the steps in that file
#
# It copies orig/ to tmp/sroot first, so the drawings that ship are never
# written to, and leaves the result at tmp/sroot/$DRAWING.JWC (the file it
# replaced is kept beside it as .bak -- JW_CAD's own doing, ③ﾊﾞｯｸｱｯﾌﾟ作成).
#
# The way through, read off the original's own top line (tools/savetrace.sh
# prints every string it writes):
#
#   入出力          left menu, command 30
#   ①ﾌｧｲﾙ(L)       |①ファイル(L)|②プロッタ(R)|...         columns 9-19
#   ①保存(L)       |①保存(L)|②読込(R)|③複写|...           columns 9-17
#   ①選択確定      [ESC] ファイル終了 |①選択確定 |...      columns 21-30
#                   -- the name it is on is the one that was opened
#   [Enter]         ◆ｍｅｍｏ 入力 -- the drawing's name and the memo lines
#                   under it, one [Enter] each; a press anywhere ends them too
#   ①上書きする(L) 同名ﾌｧｲﾙが存在します |①上書きする(L)|... columns 31-45
#   ①実行(L)       書き込みます |①実行(L)|②再選択(R)|...   columns 22-32
#
# The waits are what the run needs, not guesses: the overwrite question only
# goes up about seven million instructions after the press before it, and a
# press that lands before the question is there is thrown away.  BOOT is how
# long to leave the drawing to come up -- 40 million is enough for SAMPLE0 and
# nothing like enough for TEST7, and when it is short the presses walk down the
# wrong menu and the original says 読込失敗.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/save
EMU=../dosv_emu_cpp/dosemu.exe
[ -x "$EMU" ] || { echo "build dosv_emu_cpp first (sh build.sh there)" >&2; exit 2; }
DRAWING="${DRAWING:-SAMPLE0}"
OUT="${OUT:-tmp/save/orig.raw}"
BOOT="${BOOT:-40000000}"

rm -rf tmp/sroot
cp -r orig tmp/sroot

P='mouse %d %d\nwait 3000000\ndown left\nwait 3000000\nup left\nwait %s\n'
{
    printf 'wait %s\n' "$BOOT"
    [ -n "$PRE" ] && cat "$PRE"
    printf 'mouse 30 296\nwait 2000000\nclick left\nwait 24000000\n'   # 入出力
    printf "$P" 110 8 40000000                                         # ①ファイル
    printf "$P" 100 8 90000000                                         # ①保存
    printf "$P" 200 8 90000000                                         # ①選択確定
    i=0
    while [ $i -lt 8 ]; do printf 'key enter\nwait 30000000\n'; i=$((i + 1)); done
    printf 'wait 60000000\n'
    printf "$P" 280 8 90000000                                         # ①上書きする
    printf "$P" 210 8 400000000                                        # ①実行
    printf 'shot ../jwcad_dos_wasm/%s\n' "$OUT"
} > tmp/save/script.txt

"$EMU" --root tmp/sroot --font-ank font/JWANK16.FNT --font-kanji font/JWKAN16.FNT \
       --script tmp/save/script.txt tmp/sroot/JW_CADV.EXE "$DRAWING.JWC" > /dev/null 2>&1
[ -f "tmp/sroot/$DRAWING.bak" ] || { echo "$DRAWING: the save did not happen" >&2; exit 1; }
ls -l "tmp/sroot/$DRAWING.JWC"
