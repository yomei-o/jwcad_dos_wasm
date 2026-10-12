/* src/optenv.h -- ｵﾌﾟｼｮﾝ ⑥各設定 ⑤環境FILE（*.jwf）の読み込み。仕様は notes/spec-opt6.md。 */
#ifndef JW_OPTENV_H
#define JW_OPTENV_H

#include "jwc.h"

/* 環境ファイルが持つ、図面の外の状態（本物は DGROUP の表）。 */
typedef struct {
    unsigned char laytyp[256];          /* DS:0xc292+lb ：レイヤに切り替えたときの線種の既定（0＝切り替えない） */
    unsigned char laycol[256];          /* DS:0xb66a+lb ：同じく線色 */
    unsigned char group_write_layer[16];/* DS:0xb8e+g ：グループごとの書込レイヤ */
    int write_type;                     /* 読込のあとの書込線種（0＝変えない） */
    int write_pen;                      /* 読込のあとの書込線色（0＝変えない） */
} JwEnvState;

/* path を読む。成功 0、開けない・最後まで読めないとき -1。 */
int jw_optenv_load(Jwc *d, const char *path, JwEnvState *st);

#endif
