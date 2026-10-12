/* src/opthikage_calc.h -- ｵﾌﾟｼｮﾝ ⑤日影図 の計算（②日影図）。
 * 仕様：notes/spec-opt5-data.md（データの集め方 ovl33 0x2bf7f）、notes/spec-opt5-calc-a.md（ovl34 3ee7）。 */
#ifndef JW_OPTHIKAGE_CALC_H
#define JW_OPTHIKAGE_CALC_H

#include "jwc.h"

/* 測定条件。 */
typedef struct {
    double lat, decl, height;           /* 緯度・日赤緯（度）、測定面の高さ（m） */
    int time915;                        /* 0＝8〜16 時、1＝9〜15 時 */
} HkCond;

/* ②日影図を実行する。p は −1＝30分毎、+1＝1時間毎、7 以上＝その時刻（時）の影。
 * 戻り：1＝描いた、−1＝データの不備（*err にメッセージ、SJIS）、−2＝線が多すぎる。
 * 図面に線と文字を足す（足した数は d->n_lines・n_texts の増分）。 */
int jw_hk_run_shadow(Jwc *d, const HkCond *c, double p, const char **err);

/* ④指定点日影時間。xs・ys は 1 始まりの配列。 */
int jw_hk_run_points(Jwc *d, const HkCond *c, int base, int n, const float *xs, const float *ys,
                     float rx, float ry, const char **err);

/* ③等時間図の計算（格子に影の回数を足す）。m＝1 高速・2 標準・3 指定範囲。 */
int jw_hk_iso_calc(Jwc *d, const HkCond *c, int m, int interval, const float *cx, const float *cy, const char **err);
/* 計算済みの格子から、時間 level の等時間線とラベルを図面へ描く。 */
int jw_hk_iso_draw(Jwc *d, double level, int show_err);
const char *jw_hk_iso_errtxt(void);

/* ③の頭のデータ集め（m＝3 の範囲指定の前）・範囲の長方形の隅・計算した格子の外枠。 */
int jw_hk_iso_prepare(Jwc *d, const HkCond *c, const char **err);
void jw_hk_iso_corners(float p1x, float p1y, float p2x, float p2y, float *X, float *Y);
int jw_hk_iso_frame(float *X, float *Y);

/* ⑤壁面日影：壁面線の記録番号（0 始まり。無ければ −1）を渡す。計算の前に。 */
void jw_hk_wall_set(const Jwc *d, long n);
/* 直前の計算で作った「壁面自身の日影」の時間帯の文字（SJIS。無ければ空）。 */
const char *jw_hk_wall_out(void);
void jw_hk_wall_msg_clear(void);        /* wallmsg[0]=0 */

#endif
