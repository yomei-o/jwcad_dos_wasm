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

#endif
