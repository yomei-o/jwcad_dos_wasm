/* src/optset.h -- ｵﾌﾟｼｮﾝ ⑥各設定（①ﾒﾓﾘｰ配分 ②画面ｻｲｽﾞ ③ｺﾏﾝﾄﾞｷｰ ④作図時間 ⑤環境FILE ⑥ﾄﾞﾗｯｸﾞ量 ⑦画色）。
 *
 * 本物は ovl28 の 3ab8:6032（file-linear 0x30bb2）。仕様と番地は notes/spec-opt6.md。
 * ui.opt_stage が JW_OPT_SET（50）〜JW_OPT_SET_END のあいだがこの道。
 * 状態はこの一組が持ち、main_wasm.c・ui.c には差し込みだけを置く。 */
#ifndef JW_OPTSET_H
#define JW_OPTSET_H

#include "jwc.h"
#include "vga.h"

/* JwUi.opt_stage の値（10〜23＝④⑤、30〜34＝①②、40・41＝③。ここは 50 番台）。 */
#define JW_OPT_SET      50      /* 各設定の帯 |①ﾒﾓﾘｰ配分|…|⑦画色| */
#define JW_OPT_SET_MEM  51      /* ①ﾒﾓﾘｰ配分 */
#define JW_OPT_SET_SIZE 52      /* ②画面ｻｲｽﾞ */
#define JW_OPT_SET_KEY  53      /* ③ｺﾏﾝﾄﾞｷｰ */
#define JW_OPT_SET_TIME 54      /* ④作図時間 */
#define JW_OPT_SET_ENV  55      /* ⑤環境FILE */
#define JW_OPT_SET_DRAG 56      /* ⑥ﾄﾞﾗｯｸﾞ量 */
#define JW_OPT_SET_COL  57      /* ⑦画色 */
#define JW_OPT_SET_END  59
#define JW_OPT_SETTING(s) ((s)->command == 29 && (s)->opt_stage >= JW_OPT_SET \
                           && (s)->opt_stage <= JW_OPT_SET_END)

/* jw_optset_key / jw_optset_click が返す。 */
#define JW_OS_NONE   0          /* この道のものではない。呼び元がそのまま続ける */
#define JW_OS_TAKEN  1          /* 受けた（画面は描き直す） */
#define JW_OS_LEAVE  2          /* 各設定を抜けて、オプションの 8 項目の帯へ戻る */

/* ⑥各設定を押した。opt_stage を JW_OPT_SET へ。 */
void jw_optset_open(int *opt_stage);

/* 鍵・押し。`d` は作図時間が持つ。`v` は ⑦が画色（DAC）を直に書き換える。
 * 戻り値が JW_OS_NONE のとき、呼び元は通常の道（命令の鍵・左の盤の命令の押し）へ進む。 */
int jw_optset_key(Jwc *d, VGA *v, int key, int *opt_stage);
int jw_optset_click(Jwc *d, VGA *v, int x, int y, int right, int *opt_stage);

/* 上の行・行 2 以降の字。ui.c が上の行を黒で塗って top_clear したあとに呼ぶ。
 * 作図範囲に重ねる絵（②の赤い線、⑦の見本）もここで描く。 */
void jw_optset_text(VGA *v, const Jwc *d, int opt_stage);

/* 命令を離れたときなど、状態を捨てる（設定した値は残す）。 */
void jw_optset_reset(void);

/* 設定した値（他の命令・画面が読む）。 */
float jw_optset_screen_mm(void);        /* ②：画面の幅（mm）。DS:[0xc34]、初期 170 */
long jw_optset_drag(void);              /* ⑥：DS:[0xc1c]、初期 1000 */

/* ①ﾒﾓﾘｰ配分の最大値の元になる空きバイト（移植では定数）。 */
#define JW_MEM_FREE 364058L

#endif
