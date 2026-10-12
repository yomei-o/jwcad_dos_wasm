/* src/opt25.h -- ｵﾌﾟｼｮﾝ ⑧2.5D（透視図・鳥瞰図・アイソメ・高さ奥行・ﾚｲﾔｸﾞﾙｰﾌﾟ高さ・単位）。
 *
 * 本物は ovl35（オーバーレイ 35）：入口 3ab8:5c55（項目の行と視点画面）、3ab8:018e（④⑤）、
 * 3ab8:1e64（3 次元データの作成）。仕様は notes/spec-opt8.md。
 * main_wasm.c・ui.c に差し込むのを最小にするため、状態・押し・鍵・字・図の上書きを
 * 全部この一組に持つ。ui.opt_stage が JW_OPT25_MENU 以上のあいだがこの道（60 番台）。 */
#ifndef JW_OPT25_H
#define JW_OPT25_H

#include "jwc.h"
#include "view.h"
#include "vga.h"

/* JwUi.opt_stage の値（30〜34 は ④一括処理、40・41 は ③データ整理、50 番台は ⑥各設定）。 */
#define JW_OPT25_MENU   60  /* |①透視図|②鳥瞰図|③ｱｲｿﾒ|④高さ､奥行|⑤ﾚｲﾔｸﾞﾙｰﾌﾟ[N]高さ|⑥単位| */
#define JW_OPT25_GH     61  /* ⑤ ﾚｲﾔｸﾞﾙｰﾌﾟ[N]高さ = 入力欄                                  */
#define JW_OPT25_HT     62  /* ④ 線･円の高さ奥行 入力･変更(L) |①削除|                         */
#define JW_OPT25_HT_IN  63  /* ④ 高さ･奥行(m) の入力欄                                       */
#define JW_OPT25_WAIT   64  /* 視点画面の準備（お待ち下さい・データ処理中・作図中）           */
#define JW_OPT25_VIEW   65  /* 視点画面（①②③のどれか。o25_mode）                          */
#define JW_OPT25_ASK    66  /* ①作図 の確認 レイヤ(g-l)に作図します |①実行(L)|②中止(R)|        */
#define JW_OPT25_LAST   79
#define JW_OPT25(s) ((s)->command == 29 && (s)->opt_stage >= JW_OPT25_MENU \
                     && (s)->opt_stage <= JW_OPT25_LAST)

/* jw_opt25_click / jw_opt25_key が返す。 */
#define JW_O25_NONE    0        /* この道のものではない。呼び元がそのまま続ける */
#define JW_O25_TAKEN   1        /* 受けた（画面は描き直す） */
#define JW_O25_CHANGED 2        /* 受けた、図面の記録が変わった（数え箱も描き直す） */

/* ⑧を選んだ。opt_stage を JW_OPT25_MENU へ。 */
void jw_opt25_open(const Jwc *d, int *opt_stage);

/* 上の行・図面の押し。cell は jw_ui_top_item(x, y)。leave は BS でオプションの行へ戻るとき 1。 */
int jw_opt25_click(Jwc *d, const JwView *w, int x, int y, int right, int cell,
                   int *opt_stage, int *leave);

/* 鍵。ESC(27)・BS(8)・Enter(13/10)・数字・文字。 */
int jw_opt25_key(Jwc *d, int key, int *opt_stage, int *leave);

/* 上の行・行 2 の字。呼び元（ui.c）が上の行を黒で塗って top_clear したあとに呼ぶ。
 * group は書込グループ（0〜15）。 */
void jw_opt25_text(VGA *v, int opt_stage, int group);

/* 入力欄の緑のカーソルの桁（無ければ -1）。 */
int jw_opt25_cursor(void);
int jw_opt25_cursor_char(void);

/* 図の上書き：視点画面の線画。present の最後のほうで。 */
void jw_opt25_overlay(VGA *v, const Jwc *d, const JwView *w, int opt_stage);

/* 視点画面などが図面を覆っているか（panel_up と同じ働き）。 */
int jw_opt25_covers(int opt_stage);

/* 命令を離れたときなど、状態を捨てる。単位 [0x11ea] だけは本物もプログラム中ずっと持つ。 */
void jw_opt25_reset(void);

#endif
