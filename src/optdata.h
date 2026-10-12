/* src/optdata.h -- ｵﾌﾟｼｮﾝ ④一括処理 ③データ整理（本物は ovl17 3ab8:566c、ソートは 5015、重複線整理は
 * 400a・37d3・3557、同一文字整理は ovl24 3ab8:0000）。仕様は notes/spec-opt4-cde.md の ③ の節、
 * 実機で測った直しは notes/opt4-data-measured.md。
 *
 * 道は 3 つの持ち主に分かれる：
 *   G0（項目の帯 4 つ）  ui.opt_stage == JW_OPT_DATA_G0   main_wasm.c の opt_data_*
 *   範囲・確定            ui.opt_stage == JW_OPT_DATA_R    cmd.dr（JW_RANGE の共通の範囲の道）
 *   実行                  jw_optdata_run（cmd.dr_go を main_wasm.c が拾って呼ぶ）
 */
#ifndef JW_OPTDATA_H
#define JW_OPTDATA_H

#include "jwc.h"
#include "vga.h"
#include "ui.h"

/* G0 の上の行。 */
void jw_optdata_g0(VGA *v);

/* 範囲・確定の上の行（cmd.dr が 1〜4、s->stage が範囲の段）。 */
void jw_optdata_range(VGA *v, const JwUi *s);

/* 実行：mode は cmd.dr（1 重複線整理、2 連結･重複線整理、3 ソート、4 同一文字整理）。
 * 範囲の印（rest[2] の bit1）が付いたものだけが対象。図面が変わったら 1。 */
int jw_optdata_run(Jwc *d, int mode);

#endif
