/* src/opthikage.h -- ｵﾌﾟｼｮﾝ ⑤日影図。仕様は notes/spec-opt5-hikage.md（と spec-opt5-*.md）。
 *
 * 段の番号は 70 番台（ui.opt_stage）：
 *   70 建物設定の帯   71 ②日影図の頁   72 ③等時間図の頁   73 ④指定点の頁
 *   74 ①入力／変更の指示   75 高さの数値欄   76 ①消去   77 ①真北設定
 * 計算（②③④）・条件ダイアログ・⑤壁面は未実装（nokori.md）。 */
#ifndef JW_OPTHIKAGE_H
#define JW_OPTHIKAGE_H

#include "jwc.h"
#include "view.h"
#include "vga.h"

#define JW_OPT_HK_BLD 70
#define JW_OPT_HK_P2  71
#define JW_OPT_HK_P3  72
#define JW_OPT_HK_P4  73
#define JW_OPT_HK_IN  74
#define JW_OPT_HK_FLD 75
#define JW_OPT_HK_DEL 76
#define JW_OPT_HK_NTH 77
#define JW_OPT_HK_DLG 78        /* 測定条件ダイアログ（小段は opthikage.c の hk_sub） */
#define JW_OPT_HK_TM  79        /* ②③指定時間の数値欄 */
#define JW_OPT_HK_PT  80        /* ④指定点の入力 */
#define JW_OPT_HK_RES 81        /* ④結果表示位置 */
#define JW_OPT_HK_IS  82        /* ③日影時間の帯（1.5〜5.0・任意・誤差・終了） */
#define JW_OPT_HK_ISF 83        /* ③任意の時間の数値欄 */
#define JW_OPT_HK(s)  ((s) >= JW_OPT_HK_BLD && (s) <= JW_OPT_HK_ISF)

#define JW_HK_NONE    0         /* この道のものではない */
#define JW_HK_TAKEN   1         /* 受けた（画面は描き直す） */
#define JW_HK_CHANGED 2         /* 受けた、図面が変わった（数え箱も描き直す） */

/* 上の行（行 1）・条件の行（行 2）・メッセージの字。呼び元が行 1 を黒で塗って top_clear したあとに呼ぶ。 */
void jw_hk_text(VGA *v, int stage);

/* 入口の帯の項目 n（1〜4）を選んだときの行き先の段。0 なら扱わない。 */
int jw_hk_enter(int n);

/* 建物設定の帯の項目 n（1〜5）。段を替えたら 1。 */
int jw_hk_bld_item(int n, int *stage);

/* ②③④の頁の項目 n（4＝測定高･緯度）。段を替えたら 1。 */
int jw_hk_page_item(int n, int *stage);

/* ②の頁の項目 1・2 を実行する。JW_HK_CHANGED／JW_HK_NONE。失敗は *stage を 0 にして jw_hk_top_msg に言葉。 */
int jw_hk_page_run(Jwc *d, int n, int *stage);
const char *jw_hk_top_msg(void);
void jw_hk_clear_msg(void);   /* 失敗の言葉は次の鍵・押しで消える */
void jw_hk_top_text(VGA *v);
/* ②の実行の直後の絵（行 3 の線の跡）。present の最後のほうで。 */
void jw_hk_overlay(VGA *v, const Jwc *d, const JwView *w);
/* ②の頁の [ESC]：直前の実行を取り消す。取り消したら 1。 */
int jw_hk_page_esc(Jwc *d);

/* ④指定点の入力の帯の項目 n（1＝入力終了）。 */
int jw_hk_pt_item(int n, int *stage);

/* 頁（71〜73）で効かない鍵を受けたとき。 */
void jw_hk_page_key(int key, int stage);

/* ダイアログの帯の項目 n（押し）。 */
int jw_hk_dlg_item(int n, int *stage);

/* 押し（図面の押し・上の行の押し）。leave は BS で建物設定の帯へ戻るときに 1。 */
int jw_hk_click(Jwc *d, const JwView *w, int x, int y, int right,
                int area_x0, int area_y0, int area_x1, int area_y1,
                int *stage, int *missed);

/* 鍵：ESC(27)・BS(8)・Enter(13/10)・数字など。 */
int jw_hk_key(Jwc *d, int key, int *stage);

/* ⑤に入ったとき：全記録の範囲の印（rest[2] bit1）を落とす。 */
void jw_hk_entry(Jwc *d);

/* 測定条件を図面へ戻す（保存のとき 4 行目に出る）。 */
void jw_hk_cond_store(Jwc *d);

/* 命令を離れたときなどに状態を捨てる。 */
void jw_hk_reset(void);

#endif
