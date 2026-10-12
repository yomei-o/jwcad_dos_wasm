/* src/opthikage.h -- ｵﾌﾟｼｮﾝ ⑤日影図。仕様は notes/spec-opt5-hikage.md（と spec-opt5-*.md）。
 *
 * 段の番号は 70 番台（ui.opt_stage）。いまの範囲は「帯と頁の画面と行き来」まで：
 *   70 建物設定の帯   71 ②日影図の頁   72 ③等時間図の頁   73 ④指定点の頁
 * 計算（②③④）・①の中身・⑤壁面は未実装（notes/nokori.md）。 */
#ifndef JW_OPTHIKAGE_H
#define JW_OPTHIKAGE_H

#include "vga.h"

#define JW_OPT_HK_BLD 70
#define JW_OPT_HK_P2  71
#define JW_OPT_HK_P3  72
#define JW_OPT_HK_P4  73
#define JW_OPT_HK(s)  ((s) >= JW_OPT_HK_BLD && (s) <= JW_OPT_HK_P4)

/* 上の行（行 1）と条件の行（行 2）の字。呼び元が行 1 を黒で塗って top_clear したあとに呼ぶ。 */
void jw_hk_text(VGA *v, int stage);

/* 日影図の入口の帯（opt_stage==0 で top_item==5）の項目 n（1〜4）を選んだときの行き先。0 なら扱わない。 */
int jw_hk_enter(int n);

#endif
