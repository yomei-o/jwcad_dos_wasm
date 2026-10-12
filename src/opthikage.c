/* src/opthikage.c -- ｵﾌﾟｼｮﾝ ⑤日影図 の画面（帯・頁）。
 *
 * 字面は実機の行 1・2 から採った（src/opthikage_str.h、tools/hkstr.py）。条件の文字は
 * spec-opt5-ui.md 9.1 の cond_string（decomp ovl33 0x2efd0）。「測定のみ・decomp 未確認」は無い。 */
#include <stdio.h>
#include <string.h>

#include "opthikage.h"
#include "opthikage_str.h"
#include "ui.h"

/* 条件（図面 4 行目の欄は未接続：既定値のまま。spec-opt5-ui.md 1）。 */
static double hk_lat = 36.0, hk_decl = -23.45, hk_height = 0.0;
static int hk_time = 0;

/* cond_string（0x2efd0）：色を返す（8～16 時 7、9～15 時 6）。 */
static int cond_string(char *buf)
{
    char tmp[32];
    const char *s;

    sprintf(buf, "%s%7.3fm   %s%7.3f\xdf ", HK_H, hk_height, HK_LAT, hk_lat);
    if (hk_decl < 1e-4 && hk_decl > -1e-4) {
        s = HK_SP;
    } else if (hk_decl < -23.4499) {
        s = HK_WI;
    } else if (hk_decl > 23.4499) {
        s = HK_SU;
    } else {
        sprintf(tmp, "%6.2f", hk_decl);
        s = tmp;
    }
    strcat(buf, s);
    strcat(buf, "  ");
    strcat(buf, HK_TM);
    strcat(buf, hk_time ? HK_T915 : HK_T816);
    return hk_time ? 6 : 7;
}

void jw_hk_text(VGA *v, int stage)
{
    char buf[160];

    switch (stage) {
    case JW_OPT_HK_BLD:
        jw_ui_text(v, 8, 1, 7, 0, HK_BLD);
        break;
    case JW_OPT_HK_P2:
        jw_ui_text(v, 8, 1, 7, 0, HK_P2);
        break;
    case JW_OPT_HK_P3:
        jw_ui_text(v, 8, 1, 7, 0, HK_P3);
        break;
    case JW_OPT_HK_P4:
        /* 指定点(No1)マウス指示 (L)free (R)Read (残50) |①測定高･緯度|（No は [0x11e]+1） */
        jw_ui_text(v, 8, 1, 7, 0, HK_P4A HK_P4);
        break;
    default:
        return;
    }
    jw_ui_text(v, 73, 1, 7, 0, HK_BS);
    if (stage != JW_OPT_HK_BLD) {
        const int col = cond_string(buf);

        jw_ui_text(v, 18, 2, (unsigned)col, 0, buf);
    }
}

int jw_hk_enter(int n)
{
    return n >= 1 && n <= 4 ? JW_OPT_HK_BLD + n - 1 : 0;
}
