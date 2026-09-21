#!/bin/sh
# Everything, without opening a window.
#
#   sh tools/check.sh          # the short one: nine minutes
#   FULL=1 sh tools/check.sh   # every case there is: fifty
#
# While a command is being worked on, neither: run that command's own checker
# (`sh tools/pressfull.sh 9 …`, `sh tools/savecheck.sh -c 9 …`), which is one
# run of the original and a few seconds.  This is the one to run before a
# commit, not between edits.
#
# Builds both halves, runs the unit checks, reads every drawing the
# distribution ships, and compares the native and WASM screens byte for byte.
#
# **Most of the time is the emulator.** Each comparison starts the original
# from cold and runs tens of millions of instructions, so a hundred and fifty
# of them is most of an hour.  The short run keeps one or two cases per
# command -- enough to catch a change that breaks something -- and the full one
# keeps the rest, which are the cases that only break when that command is
# being worked on.  `full` below is what marks them.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp

# A case that is only worth running when everything is being checked.
#
# `env` rather than a bare "$@": half the cases below are written
# `full VERT=1 sh tools/textcheck.sh ...`, and a shell function cannot take a
# `NAME=value` prefix that way -- it looks for a command called `VERT=1` and
# `set -e` stops the whole run there.  (That is what FULL=1 did until
# 2026-09-21: it died at the third 文字 case and everything after it was
# never run.)
full() {
    [ -n "$FULL" ] || return 0
    env "$@"
}

echo "=== building"
sh tools/build_tests.sh
sh tools/build_wasm.sh

echo
echo "=== the graphics controller"
./tests/vga_test.exe
echo "=== the line routine"
./tests/draw_test.exe
echo "=== the drawing reader"
./tests/jwc_test.exe
echo "=== reading a drawing and writing it straight back"
./tests/roundtrip.exe orig/*.JWC

# The screen around the drawing, against the original's own picture of it.
# Needs the emulator; skipped where it is not built.
if [ -x ../dosv_emu_cpp/dosemu.exe ]; then
    echo "=== the screen around the drawing"
    sh tools/ui.sh
    echo "=== every drawing, the whole screen"
    if [ -n "$FULL" ]; then sh tools/full.sh; else sh tools/full.sh SAMPLE2 TEST7; fi
    echo "=== the whole screen after a drawing command, against the original's"
    sh tools/pressfull.sh 2 300 200 450 250       # ＋  a line on an axis
    sh tools/pressfull.sh 3 200 100 500 400       # ／  a line
    sh tools/pressfull.sh 4 250 150 450 350       # □  a box
    sh tools/pressfull.sh 11 300 200 400 200      # ○  a circle
    echo "=== and the moment after a point is taken, before the pointer moves:"
    echo "    the counts box keeps the two counts and nothing is dragged yet"
    echo "    (＋ and ／ leave the original's own (0,16) pixel -- 4.11)"
    full sh tools/pressfull.sh 2 300 200
    full sh tools/pressfull.sh 3 300 200
    full sh tools/pressfull.sh 4 250 150
    full sh tools/pressfull.sh 11 300 200
    full sh tools/pressfull.sh 12 300 250
    full sh tools/pressfull.sh 12 300 250 400 250
    sh tools/pressfull.sh 25 150 130
    echo "    ...and after a **read** press, where the point taken is not the"
    echo "    pixel pressed, so the reading is up straight away (4.14)"
    sh tools/pressfull.sh 3 r 383 401
    DRAWING=SAMPLE6 sh tools/pressfull.sh 3 r 470 305
    echo "=== 文字: a point, then the keys, then [Enter] writes the text"
    full sh tools/textcheck.sh 250 200 ABC
    VERT=1 sh tools/textcheck.sh 250 200 ABC
    full VERT=1 ENTER=1 sh tools/textcheck.sh 250 200 ABC
    full sh tools/textcheck.sh 250 200 A
    full sh tools/textcheck.sh 200 157 ABC
    ENTER=1 sh tools/textcheck.sh 250 200 ABC
    full ENTER=1 sh tools/textcheck.sh 300 300 Hello
    echo "=== 文字 in Japanese: the Shift-JIS bytes an input method gives"
    sh tools/jptext.sh 250 200 あいう
    full BS=1 sh tools/jptext.sh 250 200 あいう
    full ENTER=1 sh tools/jptext.sh 250 200 あいう
    full ENTER=1 sh tools/jptext.sh 200 150 日本語のテスト
    full ENTER=1 sh tools/jptext.sh 300 300 図面A1
    full sh tools/jptext.sh 250 200 ｱｲｳ
    echo "=== 線変更: one press gives a line or an arc the writing pen, line"
    echo "    type and layer; the word beside the counts says which it took"
    full sh tools/pressfull.sh 24 197 157
    DRAWING=SAMPLE6 sh tools/pressfull.sh 24 499 271
    DRAWING=SAMPLE6 sh tools/pressfull.sh 24 r 499 271
    DRAWING=SAMPLE6 sh tools/pressfull.sh 24 446 189
    DRAWING=SAMPLE6 sh tools/pressfull.sh 24 244 140
    DRAWING=SAMPLE6 BOOT=150000000 sh tools/savecheck.sh -c 24 -p 499 271
    echo "=== （ 任意の弧: centre, start, end -- the record keeps the shorter"
    echo "    way round, whichever order the two were pressed in (4.13)"
    full sh tools/pressfull.sh 12 300 250 400 250 350 180
    sh tools/pressfull.sh 12 300 250 350 180 400 250
    sh tools/pressfull.sh 12 300 250 200 250 300 350
    sh tools/pressfull.sh 12 300 250 398 233 350 337
    sh tools/pressfull.sh 12 300 250 398 233 206 284
    echo "=== the right button reading a point, against the original's answer"
    full sh tools/readcheck.sh 170 150 214 152 383 401 388 401 386 404 380 393         165 143 380 249 324 249 233 190
    full DRAWING=SAMPLE1 sh tools/readcheck.sh 500 57 503 60
    DRAWING=SAMPLE6 sh tools/readcheck.sh 470 305 468 183 448 191
    full DRAWING=TEST1 sh tools/readcheck.sh 245 341 201 341 450 290
    echo "=== the read with a modifier key held: [SHIFT] a point on a line"
    echo "    or a circle, [GRPH] a centre or the middle of two points (4.19)"
    if [ -n "$FULL" ]; then sh tools/snapcheck.sh; else sh tools/snapcheck.sh 3; fi
    echo "=== and the words it puts in the band while a key is held,"
    echo "    which are per key and per command (src/snap.h)"
    for n in 3 $([ -n "$FULL" ] && echo 2 4 10 11 12 13 15 20 22 25); do
        for m in shift ctrl alt; do sh tools/modscreen.sh $m $n; done
    done
    echo "=== and the line it writes while it waits for the second press"
    full sh tools/snapscreen.sh shift 300 402
    full sh tools/snapscreen.sh shift 300 300
    full sh tools/snapscreen.sh alt 232 157
    full sh tools/snapscreen.sh alt 300 398
    full CMDN=2 sh tools/snapscreen.sh shift 300 402
    full CMDN=22 sh tools/snapscreen.sh shift 300 402
    full DRAWING=SAMPLE6 sh tools/snapscreen.sh shift 415 158
    full DRAWING=SAMPLE6 sh tools/snapscreen.sh alt 415 158
    echo "=== [CTRL] in a command that is neither ＋ nor ／: 円周1/4点."
    echo "    Its search takes only the writing pen and line type, and no"
    echo "    drawing that ships has a circle of its own, so one is drawn first"
    sh tools/quartercheck.sh 309 202
    full sh tools/quartercheck.sh 349 257
    full sh tools/quartercheck.sh 251 243
    full sh tools/quartercheck.sh 293 299
    full sh tools/quartercheck.sh 600 100
    full CMDN=11 sh tools/quartercheck.sh 309 202
    full CMDN=12 sh tools/quartercheck.sh 309 202
    full CMDN=22 sh tools/quartercheck.sh 309 202
    full ARC="291 201 251 241" sh tools/quartercheck.sh 275 207
    full ARC="291 201 251 241" CMDN=11 sh tools/quartercheck.sh 275 207
    echo "=== a command started from a read point"
    full sh tools/pressfull.sh 3 r 170 150 l 400 300
    DRAWING=SAMPLE6 sh tools/pressfull.sh 3 r 470 305 l 400 300
    echo "=== [ESC], which throws the point in hand away and asks again"
    full sh tools/esccheck.sh 2 300 200
    sh tools/esccheck.sh 3 300 200
    full sh tools/esccheck.sh 4 300 200
    full sh tools/esccheck.sh 11 300 200
    full sh tools/esccheck.sh 12 300 200
    echo "    (the range commands go all the way back to the line they came"
    echo "     up with; 複写 and 移動 leave the original's own (0,16) pixel)"
    sh tools/esccheck.sh 25 150 130
    full TWO="245 170" sh tools/esccheck.sh 25 150 130
    full sh tools/esccheck.sh 1 150 130
    full sh tools/esccheck.sh 16 150 130
    echo "=== 消去 picking a range"
    sh tools/pressfull.sh 25 150 130 r 245 170
    echo "=== 消去 with the left button: 追加･除外, then 範囲確定 and 実行"
    echo "    (the 2 left over are the original's own erase clipping)"
    sh tools/erase2.sh 150 130 245 170 197 157
    echo "=== and [F2], which throws the whole selection away (4.9b)"
    full FKEY=2 STOP=1 sh tools/erase2.sh 150 130 245 170 197 157
    full FKEY=2 sh tools/erase2.sh 150 130 245 170 197 157
    echo "=== and 文字(R): a text is taken by a box ten wide round its baseline"
    echo "    (the dummy press is there because the first press after the range"
    echo "     never reaches the search -- RESUME 4.9b)"
    DUMMY="600 450" RIGHT=1 STOP=1 sh tools/erase2.sh 150 130 245 170 190 152
    full DUMMY="600 450" RIGHT=1 STOP=1 sh tools/erase2.sh 150 130 245 170 163 143
    full DUMMY="600 450" RIGHT=1 STOP=1 sh tools/erase2.sh 150 130 245 170 190 163
    full DUMMY="600 450" RIGHT=1 STOP=1 sh tools/erase2.sh 150 130 245 170 225 152
    full DUMMY="600 450" RIGHT=1 sh tools/erase2.sh 150 130 245 170 190 152
    echo "=== ②範囲外消去, which is a **cut**: what crosses the edge is shown"
    echo "    dotted and comes back shortened, not taken away"
    OUT=1 DUMMY="600 450" STOP=1 sh tools/erase2.sh 150 130 245 170 600 460
    full OUT=1 DUMMY="600 450" STOP=1 sh tools/erase2.sh 150 130 245 170 197 157
    full OUT=1 DUMMY="600 450" STOP=1 sh tools/erase2.sh 150 130 245 170 500 250
    full OUT=1 DUMMY="600 450" sh tools/erase2.sh 150 130 245 170 600 460
    full OUT=1 DUMMY="600 450" sh tools/erase2.sh 150 130 245 170 197 157
    echo "=== ③指定範囲, the data selection 複写 and 移動 use.  The first"
    echo "    button says whether the texts come in with the lines"
    full STOP=1 sh tools/span.sh 150 130 245 170
    full STOP=1 R1=1 sh tools/span.sh 150 130 245 170
    full STOP=1 sh tools/span.sh 150 130 245 170 197 157
    sh tools/span.sh 150 130 245 170
    full R1=1 sh tools/span.sh 150 130 245 170
    echo "=== 複写 (1) taking its range -- the same two presses as ③指定範囲,"
    echo "    then ①範囲 確定 and ①ﾏｳｽ位置 on the top line"
    full STEP=2 sh tools/copy.sh 150 130 245 170
    full STEP=2 R1=1 sh tools/copy.sh 150 130 245 170
    full STEP=3 sh tools/copy.sh 150 130 245 170
    full STEP=3 R1=1 sh tools/copy.sh 150 130 245 170
    full STEP=4 sh tools/copy.sh 150 130 245 170
    full STEP=4 R1=1 sh tools/copy.sh 150 130 245 170
    echo "=== 複写's ②数値位置: the distance typed in, and 前回と同じ"
    full STOP=1 sh tools/copynum.sh 20,30
    sh tools/copynum.sh 20,30
    full sh tools/copynum.sh 5
    full SAME=1 sh tools/copynum.sh
    full AGAIN=1 sh tools/copynum.sh 20,30
    full AGAIN=2 sh tools/copynum.sh 20,30
    full THEN=120 sh tools/copynum.sh 20,30
    full THEN=220 sh tools/copynum.sh 20,30
    echo "=== 複写's ①ﾏｳｽ位置: the base point, then where it goes -- and it"
    echo "    does not end there, every press after puts another one down"
    sh tools/copypos.sh
    full MORE="300 300" sh tools/copypos.sh
    full AGAIN=1 sh tools/copypos.sh
    full THEN=350 sh tools/copypos.sh
    echo "=== 移動 (16), which takes its range the same way and shifts what"
    echo "    it picked instead of copying it (the 2 left over are the"
    echo "    original's own erase clipping a neighbour)"
    full CMD=16 STEP=3 sh tools/copy.sh 150 130 245 170
    full CMD=16 STEP=4 sh tools/copy.sh 150 130 245 170
    full CMD=16 STOP=1 sh tools/copynum.sh 20,30
    full CMD=16 sh tools/copynum.sh 20,30
    full CMD=16 SAME=1 sh tools/copynum.sh
    full CMD=16 AGAIN=1 sh tools/copynum.sh 20,30
    echo "    (移動's are the original's own erase clipping a neighbour)"
    full CMD=16 sh tools/copypos.sh
    full CMD=16 MORE="300 300" sh tools/copypos.sh
    full CMD=16 AGAIN=1 sh tools/copypos.sh
    echo "=== 追加･除外 on SAMPLE6, a busy drawing (the 2 left over are the"
    echo "    original marking a neighbour one pixel shorter than it drew it)"
    full DRAWING=SAMPLE6 WAIT=150000000 STOP=1 sh tools/erase2.sh 170 235 215 260 209 242
    echo "=== 点 dropping a 仮点"
    sh tools/pressfull.sh 22 300 250
    full sh tools/pressfull.sh 22 300 250 400 300
    echo "=== 線伸縮 (6): a line is stretched to a point"
    sh tools/pressfull.sh 6 220 157
    full sh tools/pressfull.sh 6 220 157 300 157
    full sh tools/pressfull.sh 6 170 157 300 157
    full sh tools/pressfull.sh 6 220 157 300 200
    full sh tools/pressfull.sh 6 220 157 140 250
    full sh tools/savecheck.sh -c 6 -p 220 157 -p 300 157
    echo "=== 線切断 (6, the right button): the line is cut where it was"
    echo "    pressed, but only once the pointer leaves it"
    sh tools/pressfull.sh 6 r 220 157
    sh tools/savecheck.sh -c 6 -r 220 157 -m 400 300
    echo "=== ２線 (9): a pair of lines either side of one already there"
    sh tools/pressfull.sh 9 220 157
    full sh tools/pressfull.sh 9 220 157 250 200
    sh tools/pressfull.sh 9 220 157 250 200 450 200
    full sh tools/pressfull.sh 9 220 157 250 200 450 200 500 250
    sh tools/savecheck.sh -c 9 -p 220 157 -p 250 200 -p 450 200 -m 500 250
    full DRAWING=SAMPLE6 BOOT=150000000 sh tools/savecheck.sh -c 9 -p 500 193 -p 480 220 -p 520 190 -m 300 400
    echo "=== 測定 (15 ①距離): the legs add up, and each is drawn in"
    echo "    exclusive-or as it is measured"
    sh tools/meascheck.sh 250 200 450 300
    full sh tools/meascheck.sh 250 200 450 300 500 200
    full sh tools/meascheck.sh 300 250 300 400 450 400 450 250
    DRAWING=SAMPLE6 BOOT=150000000 sh tools/meascheck.sh 250 200 450 300
    echo "=== 正多角形 (19 ②): the sides typed, then the centre and a vertex"
    sh tools/polycheck.sh 300 250 400 250 6
    full sh tools/polycheck.sh 300 250 370 180 4
    full sh tools/polycheck.sh 250 300 450 300 3
    full sh tools/polycheck.sh 300 250 400 250 12
    echo "=== 分割 (21): 仮点 spread evenly between two points"
    sh tools/divcheck.sh 250 200 450 200 4
    full sh tools/divcheck.sh 250 200 450 350 6
    full sh tools/divcheck.sh 300 250 300 400 2
    DRAWING=SAMPLE6 BOOT=150000000 sh tools/divcheck.sh 250 200 450 200 5
    echo "=== 面取 (8): the corner between two lines is cut off"
    sh tools/pressfull.sh 8 220 157
    sh tools/pressfull.sh 8 220 157 163 300
    sh tools/savecheck.sh -c 8 -p 220 157 -p 163 300
    full DRAWING=SAMPLE6 BOOT=150000000 sh tools/savecheck.sh -c 8 -p 499 270 -p 490 240
    echo "=== 中心線 (20): the bisector of two lines, between two points"
    sh tools/pressfull.sh 20 220 157
    full sh tools/pressfull.sh 20 220 157 300 401
    full sh tools/pressfull.sh 20 220 157 300 401 200 279
    sh tools/pressfull.sh 20 220 157 300 401 200 279 500 279
    full sh tools/savecheck.sh -c 20 -p 220 157 -p 300 401 -p 200 279 -p 500 279
    echo "=== コーナー連結 (7): two lines cut back to meet at a corner"
    echo "    (the 1-2 left over are the original's own erase clipping a neighbour)"
    sh tools/pressfull.sh 7 220 157
    full sh tools/pressfull.sh 7 220 157 424 300
    sh tools/pressfull.sh 7 220 157 596 300
    full sh tools/pressfull.sh 7 598 148 220 157
    full sh tools/pressfull.sh 7 300 419 596 300
    full sh tools/savecheck.sh -c 7 -p 220 157 -p 596 300
    full sh tools/pressfull.sh 22 r 383 401
    echo "=== taking a line away with 線消 (the rest is the original's own"
    echo "    erase clipping its neighbours, which it never paints back)"
    sh tools/delcheck.sh 380 140
    full sh tools/delcheck.sh 197 157
    echo "=== and an arc: the original's 線消 says 線,円弧, and takes either"
    full DRAWING=SAMPLE6 sh tools/delcheck.sh 446 189
    full DRAWING=SAMPLE6 sh tools/delcheck.sh 260 152
    full DRAWING=SAMPLE6 sh tools/delcheck.sh 191 259
    echo "=== a press that finds nothing: 8.5 from an arc, and on the three"
    echo "    quarters of its circle it does not draw"
    full DRAWING=SAMPLE6 sh tools/delcheck.sh 244 140
    full DRAWING=SAMPLE6 sh tools/delcheck.sh 254 120
    echo "=== which entity a press picks, against the original's own answer"
    sh tools/pickcheck.sh
    full DRAWING=SAMPLE0 sh tools/pickcheck.sh 197 157 200 140 324 250 162 175 300 249
    full DRAWING=SAMPLE6 WAIT=150000000 AX=170 AY=235 BX=215 BY=260 sh tools/pickcheck.sh 209 243 210 243 214 245 499 271 560 210 210 249
    echo "=== saving: the port writes the file, the original opens it"
    sh tools/savecheck.sh
    sh tools/savecheck.sh -c 3 -p 200 100 -p 500 400
    full sh tools/savecheck.sh -c 11 -p 300 200 -p 400 200
    full sh tools/savecheck.sh -c 10 -r 380 140
    full DRAWING=SAMPLE6 BOOT=150000000 sh tools/savecheck.sh -c 5 -p 499 192 -k 300 -p 520 230
    echo "=== 文編集【変更】: a text picked, retyped and put back (RESUME 4.22)"
    sh tools/editcheck.sh 190 152 ''
    sh tools/editcheck.sh 190 152 ABC
    ENTER=1 sh tools/editcheck.sh 190 152 ABC
    full ENTER=1 sh tools/editcheck.sh 190 152 ''
    full BS=1 sh tools/editcheck.sh 190 152 AB
    full DRAWING=SAMPLE6 BOOT=150000000 sh tools/editcheck.sh 459 70 ''
    echo "=== 複写 ⑤反転: the range turned over in a line (RESUME 4.28)"
    sh tools/mirrorcheck.sh 150 130 245 170 162 279
    full TEXT=1 sh tools/mirrorcheck.sh 160 140 230 165 162 279
    full TEXT=1 sh tools/mirrorcheck.sh 160 140 230 165 300 402
    echo "=== 複写 ⑥回転: the range turned about a point (RESUME 4.30)"
    sh tools/rotatecheck.sh 150 130 245 170 200 300 30 400 300
    full STOP=angle sh tools/rotatecheck.sh 150 130 245 170 200 300
    full TEXT=1 sh tools/rotatecheck.sh 160 140 230 165 200 300 150 400 300
    full sh tools/rotatesave.sh 150 130 245 170 200 300 30 400 300
    full DRAWING=TEST1 BOOT=60000000 sh tools/rotatesave.sh 235 218 340 320 300 350 12.5 400 350
    echo "=== 複写 ③数値倍率: the range scaled about a point (RESUME 4.31)"
    ITEM=300 sh tools/rotatecheck.sh 150 130 245 170 200 300 2 400 300
    full ITEM=300 sh tools/rotatesave.sh 150 130 245 170 200 300 2 400 300
    full ITEM=300 DRAWING=TEST1 BOOT=60000000 sh tools/rotatesave.sh 235 218 340 320 300 350 2 400 350
    echo "    ...and ③連続, which adds the angle up but not the scale (4.30)"
    full LABEL=回転→③連続 sh tools/recsave.sh -c 1 -r 150 130 -p 245 170 -t 580 -t 520 -p 200 300 -k 30 -p 400 300 -t 540
    full LABEL=倍率→③連続 sh tools/recsave.sh -c 1 -r 150 130 -p 245 170 -t 580 -t 300 -p 200 300 -k 2 -p 400 300 -t 540
    echo "=== 移動 (16) の ⑥回転・③数値倍率・④ﾏｳｽ倍率 -- in place (4.33)"
    echo "    the 2 left over are the original's own erase taking a neighbour"
    LABEL=移動⑥回転 sh tools/reccheck.sh -c 16 -r 150 130 -p 245 170 -t 580 -t 520 -p 200 300 -k 30 -p 400 300
    full LABEL=移動③倍率 sh tools/reccheck.sh -c 16 -r 150 130 -p 245 170 -t 580 -t 300 -p 200 300 -k 2 -p 400 300
    full LABEL=移動⑥回転の記録 sh tools/recsave.sh -c 16 -r 150 130 -p 245 170 -t 580 -t 520 -p 200 300 -k 30 -p 400 300
    full LABEL=移動④ﾏｳｽ倍率の記録 sh tools/recsave.sh -c 16 -r 150 130 -p 245 170 -t 580 -t 390 -p 200 300 -p 300 380 -p 350 200 -p 550 360
    echo "=== 複写 ④ﾏｳｽ倍率: the scale off two boxes (RESUME 4.32)"
    LABEL=ﾏｳｽ倍率 sh tools/reccheck.sh -c 1 -r 150 130 -p 245 170 -t 580 -t 390 -p 200 300 -p 300 380 -p 350 200 -p 550 360
    full LABEL=ﾏｳｽ倍率の記録 sh tools/recsave.sh -c 1 -r 150 130 -p 245 170 -t 580 -t 390 -p 200 300 -p 300 380 -p 350 200 -p 550 360
    echo "    ...and the records, where the order of a text's ends shows"
    full sh tools/mirrorsave.sh 150 130 245 170 300 402
    full DRAWING=TEST1 BOOT=60000000 sh tools/mirrorsave.sh 460 255 600 380 199 350
    echo "=== ズームバーの ■拡大■ と 用紙枠 (RESUME 4.27)"
    sh tools/zoomcheck.sh 200 100 300 400
    sh tools/barcheck.sh
    sh tools/barcheck.sh 200 100
    full MX=300 MY=200 sh tools/barcheck.sh 450 380
    full XFER=1 sh tools/barcheck.sh
    full sh tools/zoomcheck.sh 150 200 600 260
    full sh tools/zoomcheck.sh 300 17 400 60
    full sh tools/zoomcheck.sh 620 200 638 220
    echo "=== 寸法 ①横方向: the dimension line, its extensions and the value (4.26)"
    sh tools/dimcheck.sh 162 140 300 110 162 140 598 140
    sh tools/dimcheck.sh 162 140 300 110 162 140 214 152
    full sh tools/dimcheck.sh 162 140 300 90 162 140 598 140
    full sh tools/dimcheck.sh 162 140 300 110
    full sh tools/dimcheck.sh 162 140
    VERT=1 sh tools/dimcheck.sh 162 140 300 250 162 140 162 419
    full VERT=1 sh tools/dimcheck.sh 162 140 130 250
    echo "    ...and 7 left over where the guide runs under the band's value (4.26)"
    full VERT=1 sh tools/dimcheck.sh 162 140 130 250 162 140 162 419
    echo "=== 円線接 ①接線 ③指定点: the tangent from a point (RESUME 4.25)"
    DRAWING=TEST1 sh tools/tancheck.sh 500 350 255 239
    full DRAWING=TEST1 sh tools/tancheck.sh 500 350
    full DRAWING=TEST1 sh tools/tancheck.sh 300 120 224 208
    echo "=== ハッチ: a frame of lines, filled in at 45 degrees (RESUME 4.24)"
    sh tools/hatchcheck.sh 300 402 380 410 300 419 197 410
    RUN=1 sh tools/hatchcheck.sh 300 402 380 410 300 419 197 410
    full sh tools/hatchcheck.sh 300 402 432 410 300 419 380 410
    full CLOSE=1 sh tools/hatchcheck.sh 300 402 380 410 300 419 197 410
    full RUN=1 sh tools/hatchcheck.sh 300 402 432 410 300 419 380 410
    echo "=== 曲線 ⑦連線: angles rounded, corners rounded off (RESUME 4.23)"
    sh tools/chaincheck.sh 200 200 400 200 400 350
    END=1 sh tools/chaincheck.sh 200 200 400 200 400 350 250 350
    full ANGLE=1 sh tools/chaincheck.sh 200 300 400 300 500 150
    full ANGLE=2 sh tools/chaincheck.sh 200 300 400 250 500 150
    echo "    ...and 12 left over with the pointer off the press (4.23)"
    full MOVE="520 260" sh tools/chaincheck.sh 200 200 400 200 400 350
    echo "=== 複線 with a number typed in (src/cmd.c, RESUME 4.12)"
    sh tools/multicheck.sh 20 197 120
    full sh tools/multicheck.sh 40 197 300
    full DRAWING=SAMPLE1 LX=300 LY=200 sh tools/multicheck.sh 500 300 160
    full DRAWING=SAMPLE1 LX=200 LY=400 sh tools/multicheck.sh 500 200 360
    echo "=== and on a slanted line: the 3 left over are the original drawing"
    echo "    the copy on top of a finished screen, where the port redraws"
    full DRAWING=SAMPLE6 LX=499 LY=192 sh tools/multicheck.sh 300 520 230
    full DRAWING=SAMPLE6 LX=499 LY=192 sh tools/multicheck.sh 300 470 160
    echo "=== 複線's other ways in: the function keys, (R)同じ寸法, ②連続"
    full FKEY=1 sh tools/multicheck.sh - 197 120
    full FKEY=5 sh tools/multicheck.sh - 197 300
    full RIGHT=1 sh tools/multicheck.sh 20 197 120
    full CONT=1 sh tools/multicheck.sh 20 197 120
    full GET=197,419 sh tools/multicheck.sh - 300 300
    echo "=== picking a command with its one-letter key"
    sh tools/keycheck.sh D 10
    full sh tools/keycheck.sh C 1
    echo "=== the line a half-finished command drags"
    sh tools/bandcheck.sh 3 300 200 450 320
    full sh tools/bandcheck.sh 4 250 150 450 350
    echo "    ...and a circle wider than the drawing area, which the original"
    echo "    cuts at its edge (4.19)"
    full sh tools/bandcheck.sh 11 300 200 450 400
    if [ -f tmp/menus/c01.raw ]; then
        echo "=== the screen after each menu item is picked"
        sh tools/menucheck.sh | tail -3
    else
        echo "=== menu items -- skipped, run sh tools/menus.sh first"
    fi
else
    echo "=== the screen around the drawing -- skipped, no ../dosv_emu_cpp"
fi

# Zoomed in, the browser front end asks the drawing routines to work at the
# edge of the screen. Nothing may land outside the view's window: a glyph that
# ran off the right used to reappear on the left of the next scan line.
echo "=== nothing drawn outside the window, zoomed in"
for f in orig/SAMPLE1.JWC orig/SAMPLE2.JWC orig/SAMPLE3.JWC orig/SAMPLE6.JWC          orig/TEST6.JWC orig/TEST7.JWC; do
    for z in 2 8 32; do
        ./tests/zoom.exe "$f" "$z" || exit 1
    done
done

# node runs the WASM half. It is not on PATH on either machine this has been
# built on; emscripten ships one, so fall back to that rather than asking for
# an install. Set NODE to override.
NODE="${NODE:-}"
if [ -z "$NODE" ]; then
    command -v node >/dev/null 2>&1 && NODE=node
fi
if [ -z "$NODE" ]; then
    for n in "${EMSDK:-/c/prog/emsdk/emsdk}"/node/*/bin/node.exe; do
        [ -f "$n" ] && NODE="$n" && break
    done
fi
[ -n "$NODE" ] || { echo "no node: set NODE, or put one on PATH" >&2; exit 1; }

echo
echo "=== native against WASM, pixel for pixel"
fail=0
for f in orig/SAMPLE1.JWC orig/SAMPLE2.JWC orig/SAMPLE3.JWC orig/SAMPLE5.JWC \
         orig/SAMPLE6.JWC orig/TEST6.JWC orig/TEST7.JWC; do
    ./tests/drawing.exe -u "$f" tmp/n.raw > /dev/null
    "$NODE" tests/wasm_check.js "$f" tmp/w.raw > /dev/null
    # and the file the browser's 保存 button would hand over, against the file
    # the native build writes -- the same src/jwc.c, so it has to be the same
    ./tests/drawing.exe -u -w tmp/n.JWC "$f" tmp/n.raw > /dev/null
    "$NODE" tests/wasm_check.js "$f" tmp/w.JWC > /dev/null
    if cmp -s tmp/n.raw tmp/w.raw && cmp -s tmp/n.JWC tmp/w.JWC; then
        echo "  same   $f"
    else
        echo "  DIFFER $f"
        fail=1
    fi
done
[ "$fail" = 0 ] || { echo "native and WASM disagree" >&2; exit 1; }

# The page's アップロード: a drawing written into the module's own filesystem
# and opened by name has to draw what the baked-in copy draws (RESUME 4.29).
"$NODE" tests/upload_check.js orig/SAMPLE2.JWC
full "$NODE" tests/upload_check.js orig/TEST7.JWC

echo
if [ -n "$FULL" ]; then
    echo "all checks passed"
else
    echo "all checks passed (the short run -- FULL=1 for every case)"
fi
