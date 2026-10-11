/* src/optbatch.h -- ｵﾌﾟｼｮﾝ ④一括処理 の ①直線伸縮 と ②直線部分消。
 *
 * 本物は ovl17 `FUN_3ab8_5be3`（3ab8:5be3）。①②は同じ関数で、モード m（①＝1、②＝2）
 * で分かれる。仕様は notes/spec-opt4-ab.md（decomp から起こしたもの）。ここは
 * main_wasm.c・ui.c に差し込むのを最小にするため、状態・押し・鍵・字・図の上書きを
 * 全部この一組に持つ。ui.opt_stage が JW_OPT_BATCH 以上のあいだがこの道。 */
#ifndef JW_OPTBATCH_H
#define JW_OPTBATCH_H

#include "jwc.h"
#include "view.h"
#include "vga.h"

/* JwUi.opt_stage の値（1〜4 は src/optplan.h の ①建具平面 が使う）。 */
#define JW_OPT_BATCH        10  /* 基準線（①）／［消し始め］の基準線（②）  O4-1・O4-2a */
#define JW_OPT_BATCH_END    11  /* 【消し終り】の基準線（②）                O4-2b */
#define JW_OPT_BATCH_START  12  /* （始線）マウス指示                        O4-3 */
#define JW_OPT_BATCH_TRACE  13  /* 【終線】マウス指示                        O4-4 */
#define JW_OPT_BATCH_ADD    14  /* 追加線･除外線 マウス指示 |①一括処理実行|② 中止| O4-5 */

/* jw_optbatch_click / jw_optbatch_key が返す。 */
#define JW_OB_NONE   0          /* この道のものではない。呼び元がそのまま続ける */
#define JW_OB_TAKEN  1          /* 受けた（画面は描き直す） */
#define JW_OB_CHANGED 2         /* 受けた、図面の線が変わった（数え箱も描き直す） */

/* ④一括処理の小帯の ①②を押した。opt_stage を BASE へ。 */
void jw_optbatch_open(int item, int *opt_stage);

/* 上の行・図面の押し。top4 は ④の小帯（ui.top_item==4 かつ opt_stage==0）のとき 1。
 * leave_band は BS で ④の小帯へ戻るとき 1 にして返す（呼び元が top_item を 4 にする）。
 * `missed` へは `読取可能データ無` を出すかを返す。 */
int jw_optbatch_click(Jwc *d, const JwView *w, int x, int y, int right,
                      int top_item, int top_cell,
                      int area_x0, int area_y0, int area_x1, int area_y1,
                      int *opt_stage, int *leave_band, int *missed);

/* ESC(27)・BS(8)・Enter(13/10)。 */
int jw_optbatch_key(Jwc *d, int key, int *opt_stage, int *leave_band);

/* 上の行・行 2 の字。呼び元（ui.c）が上の行を黒で塗って top_clear したあとに呼ぶ。 */
void jw_optbatch_text(VGA *v, int opt_stage);

/* 図の上書き：基準線・選んだ線の強調、終線のゴム線。present の最後のほうで。 */
void jw_optbatch_overlay(VGA *v, const Jwc *d, const JwView *w, int opt_stage,
                         int mouse_x, int mouse_y);

/* 命令を離れたときなど、状態を捨てる。 */
void jw_optbatch_reset(void);

#endif
