/* src/opthikage.c -- ｵﾌﾟｼｮﾝ ⑤日影図 の画面と ① 建物高さ･真北 設定。
 *
 * 仕様：notes/spec-opt5-ui.md（ovl33 の読み）。字面は実機の行 1・2 から採った
 * （src/opthikage_str.h、tools/hkstr.py）。「測定のみ・decomp 未確認」と書いた所は実機で採った値。 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "opthikage.h"
#include "opthikage_str.h"
#include "cmd.h"
#include "draw.h"
#include "read.h"
#include "ui.h"
#include "opthikage_calc.h"

#pragma STDC FP_CONTRACT OFF

/* ----------------------------------------------------------------- 状態 */
/* 条件（図面 4 行目の欄は未接続：既定値のまま。spec-opt5-ui.md 1）。 */
static double hk_lat = 36.0, hk_decl = -23.45, hk_height = 0.0;
static int hk_time = 0;

static float hk_prev1 = 9.0e9f, hk_prev2 = 0.0f;    /* DS:0x73e6・0x73ea（前回の高さ。9e9 は未入力） */
static int hk_mode = 1;                 /* 1 入力、2 変更（段 74） */
static int hk_added;                    /* 入力で足した直後（ESC が効く） */
static char hk_buf[40];                 /* 数値欄 */
static int hk_n;
static int hk_esc;                      /* ②の頁：足した線がある（[ESC] が効き、桁 1 に札） */
static long hk_run_l, hk_run_t;         /* 実行の直前の線・文字の数（ESC で戻す） */
static const char *hk_topmsg;           /* 入口の帯に出す失敗の言葉（行 3 桁 20） */
static int hk_remnant;                  /* 実行の直後だけ：行 3 に線の跡が残る（測定：run1・run2） */
static double hk_tm_def = 12.0;         /* ②指定時間の既定（入れた値が次回の既定） */
static int hk_nonote;                   /* 押しでない鍵（ESC・数字）のあと、行 3 の注意書きが消える（測定） */
static struct { int col, row; const char *text; } hk_msg[4];
static int hk_nmsg;
/* 欄を開いた線の端と向き（座標系の原点＝押した点に近い端、軸＝もう一端へ）。 */
static float hk_ox, hk_oy, hk_ux, hk_uy;
/* 測定条件ダイアログ：小段（0 項目の帯、2 高さの欄、3 緯度の欄、4 測定時間の選び、5 書込位置）。 */
static int hk_sub, hk_ret = JW_OPT_HK_P2;
static int hk_wflag;                    /* 測定条件図面書込のあと ESC が効く */
static long hk_wsaved;                  /* そのときの文字の数 */
static char hk_pagecond[200];           /* 頁を描いたときの行 2（ダイアログの間は古いまま残る） */
static int hk_pagecol = 7;

void jw_hk_cond_store(Jwc *d)
{
    d->cond_lat = (float)hk_lat;
    d->cond_decl = (float)hk_decl;
    d->cond_height = (float)hk_height;
    d->cond_time = hk_time;
}

void jw_hk_entry(Jwc *d)
{
    long k;

    hk_lat = d->cond_lat;
    hk_decl = d->cond_decl;
    hk_height = d->cond_height;
    hk_time = d->cond_time;

    for (k = 0; k < d->n_lines; k++) {
        d->lines[k].rest[2] &= (unsigned char)~0x02u;
    }
    for (k = 0; k < d->n_arcs; k++) {
        d->arcs[k].rest[2] &= (unsigned char)~0x02u;
    }
    for (k = 0; k < d->n_points; k++) {
        d->points[k].rest[2] &= (unsigned char)~0x02u;
    }
    for (k = 0; k < d->n_texts; k++) {
        d->texts[k].rest[2] &= (unsigned char)~0x02u;
    }
}

static int hk_base;                     /* [0x11e]：④の指定点の通し番号の基点 */
static int hk_iso_err = 1;              /* [0x7638]：ラベルに「時間 誤差…」を付ける */
static int hk_iso_hide;                 /* 行 2 の誤差・書込の文字を出さない（BS・取り消すものの無い ESC のあと） */
static int hk_iso_esc;                  /* 直前の描きを取り消せる（行 1 に [ESC]） */
static long hk_iso_l0, hk_iso_t0;       /* 直前に等時間線を引く前の線・文字の数（ESC で戻す） */
static int pt_n;                        /* 足した指定点の数 */
static float pt_x[64], pt_y[64];

void jw_hk_reset(void)
{
    pt_n = 0;
    hk_added = 0;
    hk_n = 0;
    hk_nmsg = 0;
}

static void msg(int col, int row, const char *s)
{
    if (hk_nmsg < 4) {
        hk_msg[hk_nmsg].col = col;
        hk_msg[hk_nmsg].row = row;
        hk_msg[hk_nmsg].text = s;
        hk_nmsg++;
    }
}

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
    char buf[200];
    int i;

    switch (stage) {
    case JW_OPT_HK_BLD:
        jw_ui_text(v, 8, 1, 7, 0, HK_BLD);
        break;
    case JW_OPT_HK_P2:
        if (hk_esc) {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
        }
        jw_ui_text(v, 8, 1, 7, 0, HK_P2);
        break;
    case JW_OPT_HK_P3:
        jw_ui_text(v, 8, 1, 7, 0, HK_P3);
        break;
    case JW_OPT_HK_P4:
        sprintf(buf, "%s%d%s50) ", HK_PTA, hk_base + 1, HK_PTB);
        strcat(buf, HK_P4);
        jw_ui_text(v, 8, 1, 7, 0, buf);
        break;
    case JW_OPT_HK_IN:
        if (hk_mode == 1 && hk_added) {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
        }
        sprintf(buf, "%s%s%s(L) ", hk_mode == 1 ? HK_IN1 : HK_IN2, HK_DIA, HK_MOUSE);
        strcat(buf, "  ");
        if (fabsf(hk_prev1) <= 400.0f) {
            char one[40];

            sprintf(one, "%s%7.3f", HK_PREV, (double)hk_prev1);
            strcat(buf, one);
            if (hk_prev1 > 0.0f && hk_prev2 > 0.0f) {
                sprintf(one, ",%7.3f", (double)hk_prev2);
                strcat(buf, one);
            }
            strcat(buf, "m]");
        }
        jw_ui_text(v, 8, 1, 7, 0, buf);
        if (!hk_nonote) {
            jw_ui_text(v, 20, 3, 7, 0, HK_NOTE);
        }
        break;
    case JW_OPT_HK_FLD:
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
        jw_ui_text(v, 8, 1, 7, 0, HK_FLD1);
        jw_ui_text(v, 12, 1, 7, 0, HK_FLD2);
        jw_ui_text(v, 18, 1, 7, 0, hk_buf);
        for (i = 7; i <= 15; i++) {
            const int x0 = 8 * (17 + hk_n);

            jw_line(v, x0, i, x0 + 7, i, 4, ROP_REPLACE, JW_STYLE_SOLID);
        }
        return;
    case JW_OPT_HK_DEL:
        jw_ui_text(v, 8, 1, 7, 0, HK_DELP);
        break;
    case JW_OPT_HK_NTH:
        jw_ui_text(v, 8, 1, 7, 0, HK_NTHP);
        break;
    case JW_OPT_HK_PT:
        if (pt_n > 0) {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
        }
        sprintf(buf, "%s%d%s%d%s", HK_PTA, hk_base + pt_n + 1, HK_PTB, 50 - pt_n, HK_PTC);
        jw_ui_text(v, 8, 1, 7, 0, buf);
        return;
    case JW_OPT_HK_RES:
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
        jw_ui_text(v, 8, 1, 7, 0, HK_RESP);
        return;
    case JW_OPT_HK_IS:
        if (hk_iso_esc) {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
        }
        jw_ui_text(v, 8, 1, 7, 0, HK_ISA);
        if (hk_iso_hide) {
            return;
        }
        jw_ui_text(v, 48, 2, 7, 0, jw_hk_iso_errtxt());
        if (!hk_iso_err) {
            jw_ui_text(v, 67, 2, 7, 0xffffu, HK_ISN);
        }
        jw_ui_text(v, 69, 2, 7, 0xffffu, HK_ISW);
        return;
    case JW_OPT_HK_IC:
        jw_ui_text(v, 8, 1, 7, 0, HK_ICA);
        return;
    case JW_OPT_HK_ISF:
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
        jw_ui_text(v, 8, 1, 7, 0, HK_ISF);
        jw_ui_text(v, 23, 1, 7, 0, hk_buf);
        for (i = 7; i <= 15; i++) {
            const int x0 = 8 * (22 + hk_n);

            jw_line(v, x0, i, x0 + 7, i, 4, ROP_REPLACE, JW_STYLE_SOLID);
        }
        return;
    case JW_OPT_HK_TM:
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
        jw_ui_text(v, 8, 1, 7, 0, HK_TMF);
        jw_ui_text(v, 20, 1, 7, 0, hk_buf);
        for (i = 7; i <= 15; i++) {
            const int x0 = 8 * (19 + hk_n);

            jw_line(v, x0, i, x0 + 7, i, 4, ROP_REPLACE, JW_STYLE_SOLID);
        }
        return;
    case JW_OPT_HK_DLG:
        if (hk_sub == 0) {
            const int col = cond_string(buf);

            if (hk_wflag) {
                jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
            }
            jw_ui_text(v, 8, 1, 7, 0, HK_DLG);
            if (!hk_nonote) {
                jw_ui_text(v, 18, 3, (unsigned)col, 0xffffu, buf);
            }
        } else if (hk_sub == 2 || hk_sub == 3) {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
            jw_ui_text(v, 8, 1, 7, 0, hk_sub == 2 ? HK_H : HK_LAT);
            jw_ui_text(v, hk_sub == 2 ? 20 : 13, 1, 7, 0, hk_sub == 2 ? HK_HM : HK_LATM);
            jw_ui_text(v, hk_sub == 2 ? 26 : 20, 1, 7, 0, hk_buf);
            for (i = 7; i <= 15; i++) {
                const int x0 = 8 * ((hk_sub == 2 ? 25 : 19) + hk_n);

                jw_line(v, x0, i, x0 + 7, i, 4, ROP_REPLACE, JW_STYLE_SOLID);
            }
        } else if (hk_sub == 4) {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
            jw_ui_text(v, 8, 1, 7, 0, HK_TCH);
        } else if (hk_sub == 5) {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
            jw_ui_text(v, 8, 1, 7, 0, HK_WPOS);
        }
        return;
    default:
        return;
    }
    jw_ui_text(v, 73, 1, 7, 0, HK_BS);
    if (stage >= JW_OPT_HK_P2 && stage <= JW_OPT_HK_P4) {
        const int col = cond_string(buf);

        if (!hk_nonote) {
            jw_ui_text(v, 18, 2, (unsigned)col, 0, buf);
        }
        strcpy(hk_pagecond, buf);
        hk_pagecol = col;
    }
    for (i = 0; i < hk_nmsg; i++) {
        jw_ui_text(v, hk_msg[i].col, hk_msg[i].row, 7, 0, hk_msg[i].text);
    }
}

int jw_hk_page_esc(Jwc *d)
{
    if (!hk_esc || !d) {
        return 0;
    }
    jwc_ink_hold(d, 1);
    while (d->n_texts > hk_run_t) {
        jwc_remove_text(d, d->n_texts - 1);
    }
    while (d->n_lines > hk_run_l) {
        jwc_remove_line(d, d->n_lines - 1);
    }
    jwc_ink_hold(d, 0);
    jwc_ink_clear(d);                    /* 全面を描き直す（足した形も消し跡も残さない） */
    hk_esc = 0;
    return 1;
}

/* 実行の直後の絵：本物は線を描くとき行 3（y 32〜47）まで描き、そのあと頁の文字で行 2 だけ塗り直す。
 * 行 3 には線の跡が残る。次の鍵・押しで頁が描き直されると消える。 */
void jw_hk_overlay(VGA *v, const Jwc *d, const JwView *w)
{
    long k;
    const int cx0 = v->clip_x0, cy0 = v->clip_y0, cx1 = v->clip_x1, cy1 = v->clip_y1;

    if (!hk_remnant || !d) {
        return;
    }
    {
        char buf[200];
        int y;
        const int col = cond_string(buf);

        for (k = hk_run_l; k < d->n_lines; k++) {
            jw_view_line(v, d, &d->lines[k], w, jw_view_pen_colour(d->lines[k].pen));
        }
        /* 行 2 は頁の描き直しで塗り直される（線の跡は残らない）：塗って文字を書き直す。 */
        for (y = 17; y <= 31; y++) {
            jw_line(v, 122, y, 638, y, 0, ROP_REPLACE, JW_STYLE_SOLID);
        }
        jw_ui_text(v, 18, 2, (unsigned)col, 0, buf);
        if (hk_esc) {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
        }
    }
    v->clip_x0 = cx0;
    v->clip_y0 = cy0;
    v->clip_x1 = cx1;
    v->clip_y1 = cy1;
}

/* ③の描いた直後の絵：本物は線とラベルを描いたあとで行 2 の文字を書くので、行 2・行 3 にはみ出した跡が残る。 */
void jw_hk_iso_overlay(VGA *v, const Jwc *d, const JwView *w)
{
    long k;

    if (!hk_remnant || !hk_iso_esc || !d) {
        return;
    }
    for (k = hk_iso_l0; k < d->n_lines; k++) {
        jw_view_line(v, d, &d->lines[k], w, jw_view_pen_colour(d->lines[k].pen));
    }
    for (k = hk_iso_t0; k < d->n_texts; k++) {
        jw_view_text(v, d, &d->texts[k], w, jw_view_text_colour(d, d->texts[k].size));
    }
    if (!hk_iso_hide) {
        jw_ui_text(v, 48, 2, 7, 0, jw_hk_iso_errtxt());
        if (!hk_iso_err) {
            jw_ui_text(v, 67, 2, 7, 0xffffu, HK_ISN);
        }
        jw_ui_text(v, 69, 2, 7, 0xffffu, HK_ISW);
    }
}

void jw_hk_top_text(VGA *v)
{
    if (hk_topmsg) {
        jw_ui_text(v, 20, 3, 7, 0, hk_topmsg);
    }
}

int jw_hk_enter(int n)
{
    hk_topmsg = NULL;
    hk_esc = 0;
    return n >= 1 && n <= 4 ? JW_OPT_HK_BLD + n - 1 : 0;
}

void jw_hk_page_key(int key, int stage)
{
    hk_remnant = 0;
    const int items = stage == JW_OPT_HK_P4 ? 1 : 4;

    if (key == 27 || (key >= '1' && key <= '9' && key - '0' > items)) {
        hk_nonote = 1;                  /* 測定：効かない鍵で行 2 の条件が消える */
    }
}

static int run_shadow(Jwc *d, double p, int *stage)
{
    HkCond c;
    const char *err = NULL;
    int rc;

    c.lat = hk_lat;
    c.decl = hk_decl;
    c.height = hk_height;
    c.time915 = hk_time;
    hk_run_l = d->n_lines;
    hk_run_t = d->n_texts;
    rc = jw_hk_run_shadow(d, &c, p, &err);
    if (rc < 0 && err) {
        hk_topmsg = err;               /* 失敗：入口の帯へ戻って行 3 に言葉を出す */
        *stage = 0;
        return JW_HK_CHANGED;
    }
    hk_esc = d->n_lines > hk_run_l;
    hk_remnant = 1;
    return JW_HK_CHANGED;
}

static int iso_draw(Jwc *d, double level)
{
    hk_iso_l0 = d->n_lines;
    hk_iso_t0 = d->n_texts;
    jw_hk_iso_draw(d, level, hk_iso_err);
    hk_iso_esc = d->n_lines > hk_iso_l0;
    hk_iso_hide = 0;
    hk_remnant = 1;
    return JW_HK_CHANGED;
}

/* ③等時間図：格子を作って日影時間の帯へ。 */
static int iso_start(Jwc *d, int m, int *stage)
{
    HkCond c;
    const char *err = NULL;
    int rc;

    memset(&c, 0, sizeof c);
    c.lat = hk_lat;
    c.decl = hk_decl;
    c.height = hk_height;
    c.time915 = hk_time;
    rc = jw_hk_iso_calc(d, &c, m, 1, NULL, NULL, &err);
    if (rc < 0) {
        if (err) {
            hk_topmsg = err;
        }
        *stage = 0;
        return JW_HK_CHANGED;
    }
    hk_iso_l0 = d->n_lines;
    hk_iso_t0 = d->n_texts;
    hk_iso_esc = 0;
    hk_iso_hide = 0;
    *stage = JW_OPT_HK_IS;
    return JW_HK_CHANGED;
}

int jw_hk_page_run(Jwc *d, int n, int *stage)
{
    hk_topmsg = NULL;
    hk_remnant = 0;
    if (*stage == JW_OPT_HK_P2 && d && (n == 1 || n == 2)) {
        return run_shadow(d, n == 1 ? -1.0 : 1.0, stage);
    }
    if (*stage == JW_OPT_HK_P3 && d && (n == 1 || n == 2)) {
        return iso_start(d, n, stage);
    }
    if (*stage == JW_OPT_HK_P2 && d && n == 3) {
        hk_buf[0] = 0;
        hk_n = 0;
        hk_run_l = d->n_lines;
        hk_run_t = d->n_texts;
        hk_esc = 0;                     /* 取り消しの基準が今に替わる（測定：spec 5.6） */
        *stage = JW_OPT_HK_TM;
        return JW_HK_CHANGED;
    }
    return JW_HK_NONE;
}

void jw_hk_clear_msg(void)
{
    hk_topmsg = NULL;
}

const char *jw_hk_top_msg(void)
{
    return hk_topmsg;
}

int jw_hk_page_item(int n, int *stage)
{
    if (n != (*stage == JW_OPT_HK_P4 ? 1 : 4)) {
        return 0;
    }
    hk_nonote = 0;
    hk_ret = *stage;
    hk_sub = 0;
    hk_wflag = 0;
    hk_nmsg = 0;
    *stage = JW_OPT_HK_DLG;
    return 1;
}

int jw_hk_bld_item(int n, int *stage)
{
    hk_nmsg = 0;
    if (n == 1 || n == 2) {
        hk_mode = n;
        hk_added = 0;
        hk_nonote = 0;
        *stage = JW_OPT_HK_IN;
        return 1;
    }
    if (n == 3) {
        *stage = JW_OPT_HK_DEL;
        return 1;
    }
    if (n == 4) {
        *stage = JW_OPT_HK_NTH;
        return 1;
    }
    return 0;
}

/* ---------------------------------------------------------------- 座標系 */
/* root 1bb4:27ea・2981・2a18（src/optbatch.c の frame_* と同じ丸め）。 */
static float fr_ox, fr_oy, fr_ux, fr_uy;

static int frame_set(double x1, double y1, double x2, double y2)
{
    double dx, dy, len;

    fr_ox = (float)x1;
    fr_oy = (float)y1;
    dx = x2 - x1;
    dy = y2 - y1;
    if (!(fabs(dy) + fabs(dx) >= 0.001)) {
        fr_ux = 1.0f;
        fr_uy = 0.0f;
        return 0;
    }
    len = sqrt(dy * dy + dx * dx);
    fr_ux = (float)(dx / len);
    fr_uy = (float)(dy / len);
    return 1;
}

static float fr_X(double u, double v)
{
    return (float)(((double)fr_ux * u - (double)fr_uy * v) + fr_ox);
}

static float fr_Y(double u, double v)
{
    return (float)(((double)fr_ux * v + (double)fr_uy * u) + fr_oy);
}

/* ---------------------------------------------------------------- 文字を足す */
/* add_text（0x2e36f）：座標系の原点から軸の向きへ文字列の長さぶんの基線。rest[2] は印だけ。 */
static void add_text(Jwc *d, const char *s, int size, unsigned char flag)
{
    const double w = jwc_ed_text_length(d, s, (unsigned char)size, 0);
    const float x0 = fr_ox, y0 = fr_oy;
    const float x1 = fr_X(w, 0.0), y1 = fr_Y(w, 0.0);

    if (!*s) {
        return;
    }
    if (jwc_add_text(d, x0, y0, x1, y1, s, (unsigned char)size, (unsigned char)d->write_layer)) {
        d->texts[d->n_texts - 1].rest[2] |= flag;
    }
}

/* put_height（0x2e282）：mode 桁の数。実機の保存で `10.000`（末尾の 0 は落ちない：測定）。 */
static void put_height(Jwc *d, double v1, double v2, int digits, unsigned char flag)
{
    char b[64], c[32];

    sprintf(b, "%.*f", digits, v1);
    if (v2 > 0.0) {
        sprintf(c, ",%.*f", digits, v2);
        strcat(b, c);
    }
    add_text(d, b, 2, flag);
}

static int shown(const Jwc *d, unsigned layer)
{
    return (d->layer_edit[layer & 255] & 1) && (d->group_edit[(layer >> 4) & 15] & 1);
}

/* 18b3:26d4：押した点に近い文字（基線の隔たりが reach/scale 未満で、いちばん近いもの）。
 * decomp：root 0x1b204〜0x1b6ec。窓 (px±r, py±r) と基線の外れを先にはじき、あとは軸の隔たり。
 * 戻り：文字の添字、無ければ -1。 */
static long pick_text(const Jwc *d, const JwView *w, int sx, int sy)
{
    double ppx, ppy;
    float px, py, r, best = 1.0e9f;
    long k, found = -1;

    jw_cmd_at(w, sx, sy, &ppx, &ppy);
    px = (float)ppx;
    py = (float)ppy;
    r = (float)(JW_READ_REACH / w->scale);
    for (k = 0; k < d->n_texts; k++) {
        const JwcText *t = &d->texts[k];
        const float xl = fabsf(px - r), xh = fabsf(px + r), yl = fabsf(py - r), yh = fabsf(py + r);
        const float ax0 = fabsf(t->x0), ax1 = fabsf(t->x1), ay0 = fabsf(t->y0), ay1 = fabsf(t->y1);
        float dx, dy, c;

        if (t->size >= 0x5a || !shown(d, t->layer)) {
            continue;
        }
        if (xl > ax0 && xl > ax1) {
            continue;
        }
        if (!(xh > ax0 || xh > ax1)) {
            continue;
        }
        if (yl > ay0 && yl > ay1) {
            continue;
        }
        if (!(yh > ay0 || yh > ay1)) {
            continue;
        }
        dy = t->y1 - t->y0;
        dx = t->x1 - t->x0;
        if (dx == 0.0f && dy == 0.0f) {
            continue;
        }
        if (fabsf(dx) >= fabsf(dy)) {
            c = (float)(py - (((px - t->x0) / dx) * dy + t->y0));
        } else {
            c = (float)(px - (((py - t->y0) / dy) * dx + t->x0));
        }
        c = fabsf(c);
        if (c >= r || !(c < best)) {
            continue;
        }
        best = c;
        found = k;
    }
    return found;
}

/* ① 真北設定（spec-opt5-ui.md 3.9、ovl33 0x2ea77〜0x2efb0）。 */
static int north(Jwc *d, const JwView *w, int x, int y, int *missed, int *stage)
{
    static const float PAPER[5] = { 1189.0f, 841.0f, 594.0f, 420.0f, 297.0f };
    const long n = jw_cmd_pick_line(d, w, x, y);
    const JwcLine *L;
    double px, py, d0, d1, th;
    float dx, dy, thf, b4a2, u, v;
    int g, sv;
    long k;
    float ux, uy;

    if (n < 0) {
        *missed = 1;
        return JW_HK_TAKEN;
    }
    L = &d->lines[n];
    jw_cmd_at(w, x, y, &px, &py);
    d0 = fabs((double)((float)L->y0 - (float)py)) + fabs((double)((float)L->x0 - (float)px));
    d1 = fabs((double)((float)L->y1 - (float)py)) + fabs((double)((float)L->x1 - (float)px));
    if (d1 <= d0) {
        dx = L->x1 - L->x0;
        dy = L->y1 - L->y0;
        frame_set(L->x1, L->y1, L->x0, L->y0);
    } else {
        dx = L->x0 - L->x1;
        dy = L->y0 - L->y1;
        frame_set(L->x0, L->y0, L->x1, L->y1);
    }
    /* 既にある真北の文字を全部消す。 */
    for (k = 0; k < d->n_texts;) {
        if (d->texts[k].size < 0x5a && (d->texts[k].rest[2] & 0x40)) {
            jwc_remove_text(d, k);
        } else {
            k++;
        }
    }
    th = atan2((double)dy, (double)dx) * 57.29577951308232 - 90.0;
    thf = (float)th;
    if (!(thf > -180.0f)) {
        thf = (float)((double)thf + 360.0f);
    }
    if (fabs((double)thf) < 1e-4) {
        thf = 0.0f;
    }
    put_height(d, (double)thf, 0.0, 5, 0x40);
    /* 「真北」の札：旧座標系で (u,v) の点に、軸を +90 度回して書く。 */
    b4a2 = (float)((double)PAPER[d->paper >= 0 && d->paper < 5 ? d->paper : 4] / 518.0);
    g = d->text_gap[2];
    sv = ((g - (g < 0 ? -1 : 0)) >> 1) + d->text_w[2];
    u = (float)((double)(-2.0f) / (double)b4a2);
    v = (float)(((double)(short)(-sv) / (double)b4a2) * 0.1);
    ux = fr_ux;
    uy = fr_uy;
    {
        const float nx = fr_X((double)u, (double)v), ny = fr_Y((double)u, (double)v);

        fr_ox = nx;
        fr_oy = ny;
    }
    fr_ux = -uy;
    fr_uy = ux;
    add_text(d, HK_NORTH, 2, 0x40);
    *stage = JW_OPT_HK_BLD;             /* 測定：1 件置くと建物設定の帯へ戻る（次の押しは受けない） */
    return JW_HK_CHANGED;
}

/* ---------------------------------------------------------------- ① の押し */
/* pick（0x2de89）：線を拾って、近い端を原点・もう一端へ軸を取る。戻り 1＝続ける、0＝メッセージ／何も無し。 */
static int pick(Jwc *d, const JwView *w, int x, int y, int *missed)
{
    long n = jw_cmd_pick_line(d, w, x, y);
    JwcLine *L;
    double px, py, d0, d1;
    long k;

    if (n < 0) {
        *missed = 1;
        return 0;
    }
    L = &d->lines[n];
    if (L->layer != (unsigned char)d->write_layer) {
        msg(22, 2, HK_M_LAYER);
        return 0;
    }
    if (L->rest[2] & 0xC0) {
        msg(22, 2, HK_M_CURVE);
        return 0;
    }
    jw_cmd_at(w, x, y, &px, &py);
    d0 = fabs((double)((float)L->y0 - (float)py)) + fabs((double)((float)L->x0 - (float)px));
    d1 = fabs((double)((float)L->y1 - (float)py)) + fabs((double)((float)L->x1 - (float)px));
    if (d1 <= d0) {
        frame_set(L->x1, L->y1, L->x0, L->y0);
    } else {
        frame_set(L->x0, L->y0, L->x1, L->y1);
    }
    hk_ox = fr_ox;
    hk_oy = fr_oy;
    hk_ux = fr_ux;
    hk_uy = fr_uy;
    for (k = 0; k < d->n_texts; k++) {
        const JwcText *t = &d->texts[k];
        double v;

        if (t->size >= 0x5a || !(t->rest[2] & 0x80) || t->layer != (unsigned char)d->write_layer) {
            continue;
        }
        if (fabs((double)(t->y0 - fr_oy)) + fabs((double)(t->x0 - fr_ox)) >= 0.01) {
            continue;
        }
        if (sscanf(t->text, " %lf ", &v) != 1) {
            v = 999999.0;
        }
        if (hk_mode == 1 && v < 10000.0) {
            msg(20, 2, HK_M_DUP1);
            msg(20, 4, HK_M_DUP2 HK_M_DUP3);
            return 0;
        }
        jwc_remove_text(d, k);
        return 2;
    }
    return 1;
}

static void to_field(int *stage)
{
    hk_buf[0] = 0;
    hk_n = 0;
    *stage = JW_OPT_HK_FLD;
}

/* 数値欄の確定。ok なら足して 74 へ、範囲外は欄を出し直す。 */
static int field_commit(Jwc *d, int *stage)
{
    double v1 = hk_prev1, v2 = 0.0, t;
    char *comma = strchr(hk_buf, ',');

    if (hk_n > 0) {
        v1 = atof(hk_buf);
    }
    if (comma) {
        v2 = atof(comma + 1);
    }
    if (comma && v1 < v2) {            /* 測定：`-3` は swap されず `-3.000`（v2 の既定は比べない） */
        t = v1;
        v1 = v2;
        v2 = t;
    }
    if (v1 == v2) {
        v2 = 0.0;
    }
    if (v1 <= 0.0) {
        v2 = 0.0;
    }
    if (fabs(v1) > 400.0 || v2 < 0.0 || v2 > 400.0) {
        hk_buf[0] = 0;
        hk_n = 0;
        return JW_HK_TAKEN;
    }
    hk_prev1 = (float)v1;
    hk_prev2 = (float)v2;
    /* 足す文字の座標系は欄を開いたときのもの。 */
    fr_ox = hk_ox;
    fr_oy = hk_oy;
    fr_ux = hk_ux;
    fr_uy = hk_uy;
    put_height(d, v1, v2, 3, 0x80);
    hk_added = 1;
    *stage = JW_OPT_HK_IN;
    return JW_HK_CHANGED;
}

/* ダイアログの項目 n（確定・高さ・緯度・季節・書込）。 */
static int dlg_item(int n, int *stage)
{
    if (hk_sub != 0) {
        return JW_HK_TAKEN;
    }
    hk_nonote = 0;
    if (n == 1) {
        *stage = hk_ret;
        hk_sub = 0;
        return JW_HK_TAKEN;
    }
    if (n == 2 || n == 3) {
        hk_sub = n;
        hk_buf[0] = 0;
        hk_n = 0;
        return JW_HK_TAKEN;
    }
    if (n == 4) {
        if (fabs(hk_decl) < 10.0) {
            hk_decl = 23.45;
        } else if (hk_decl < 0) {
            hk_decl = 0.0;
        } else {
            hk_decl = -23.45;
        }
        return JW_HK_TAKEN;
    }
    if (n == 5) {
        hk_sub = 5;
        return JW_HK_TAKEN;
    }
    return JW_HK_TAKEN;
}

int jw_hk_dlg_item(int n, int *stage)
{
    return dlg_item(n, stage);
}

/* 欄の確定（高さ・緯度）。範囲外は欄を出し直す。 */
static void dlg_commit(void)
{
    const double v = hk_n > 0 ? atof(hk_buf) : (hk_sub == 2 ? hk_height : hk_lat);

    hk_buf[0] = 0;
    hk_n = 0;
    if (hk_sub == 2) {
        if (v >= -50.0 && v <= 400.0) {
            hk_height = (float)v;
            hk_sub = 0;
        }
    } else if (hk_sub == 3) {
        if (v >= 25.0 && v <= 46.0) {
            hk_lat = (float)v;
            hk_time = v > 41.5999 ? 1 : 0;
            hk_sub = (v >= 41.3001 && v <= 41.5999) ? 4 : 0;
        }
    }
}

/* ④指定点の入力（ovl33 0x3075d〜0x30d40、spec-opt5-ui.md 7.2）。 */
static int pt_cancel_last(Jwc *d)
{
    long k;

    if (pt_n < 1) {
        return 0;
    }
    if (d->n_points > 0) {
        jwc_remove_point(d, d->n_points - 1);
    }
    for (k = d->n_texts - 1; k >= 0; k--) {
        if (!(d->texts[k].rest[2] & 0x80)) {
            jwc_remove_text(d, k);
            break;
        }
    }
    pt_n--;
    return 1;
}

static int pt_add(Jwc *d, const JwView *w, int x, int y, int right, int *stage)
{
    double px, py;
    JwcPoint p;
    char b[24];

    if (right) {
        if (!jw_read(d, w, x, y, &px, &py)) {
            return JW_HK_TAKEN;
        }
    } else {
        jw_cmd_at(w, x, y, &px, &py);
    }
    memset(&p, 0, sizeof p);
    p.x = (float)px;
    p.y = (float)py;
    p.layer = (unsigned char)d->write_layer;
    p.rest[0] = (unsigned char)d->write_layer;
    p.rest[1] = (unsigned char)(d->dim_pen_point ? d->dim_pen_point : 1);   /* 測定：寸法設定の点のペン */
    p.rest[3] = 0x1d;
    jwc_put_point(d, &p);
    pt_n++;
    pt_x[pt_n] = (float)px;
    pt_y[pt_n] = (float)py;
    sprintf(b, "No%d", hk_base + pt_n);
    frame_set(px, py, px + 10.0, py);
    add_text(d, b, 2, 0);
    *stage = pt_n >= 50 ? JW_OPT_HK_RES : JW_OPT_HK_PT;
    return JW_HK_CHANGED;
}

static int pt_result(Jwc *d, const JwView *w, int x, int y, int right, int *stage)
{
    double px, py;
    HkCond c;
    const char *err = NULL;
    int rc;

    if (right) {
        if (!jw_read(d, w, x, y, &px, &py)) {
            return JW_HK_TAKEN;
        }
    } else {
        jw_cmd_at(w, x, y, &px, &py);
    }
    memset(&c, 0, sizeof c);
    c.lat = hk_lat;
    c.decl = hk_decl;
    c.height = hk_height;
    c.time915 = hk_time;
    rc = jw_hk_run_points(d, &c, hk_base, pt_n, pt_x, pt_y, (float)px, (float)py, &err);
    if (rc >= 0) {
        hk_base += pt_n;
        pt_n = 0;
        *stage = JW_OPT_HK_P4;
        return JW_HK_CHANGED;
    }
    while (pt_n > 0) {
        pt_cancel_last(d);
    }
    msg(20, 3, HK_M_CALCNG);
    *stage = JW_OPT_HK_P4;
    return JW_HK_CHANGED;
}

int jw_hk_pt_item(int n, int *stage)
{
    if (*stage == JW_OPT_HK_PT && n == 1) {
        *stage = JW_OPT_HK_RES;
        return 1;
    }
    return 0;
}

int jw_hk_click(Jwc *d, const JwView *w, int x, int y, int right,
                int area_x0, int area_y0, int area_x1, int area_y1,
                int *stage, int *missed)
{
    int st = *stage;

    *missed = 0;
    if (st == JW_OPT_HK_DLG && d) {
        if (hk_sub == 5 && y > 15 && x >= area_x0 && x <= area_x1 && y >= area_y0 && y <= area_y1) {
            double px, py;
            char b[200];

            jw_cmd_at(w, x, y, &px, &py);
            hk_wsaved = d->n_texts;
            cond_string(b);
            frame_set(px, py, px + 10.0, py);
            add_text(d, b, 3, 0);
            hk_wflag = 1;
            hk_sub = 0;
            return JW_HK_CHANGED;
        }
        return JW_HK_TAKEN;
    }
    if ((st == JW_OPT_HK_P4 || st == JW_OPT_HK_PT || st == JW_OPT_HK_RES) && d && y > 15
        && x >= area_x0 && x <= area_x1 && y >= area_y0 && y <= area_y1) {
        hk_nmsg = 0;
        hk_nonote = 0;
        hk_remnant = 0;
        return st == JW_OPT_HK_RES ? pt_result(d, w, x, y, right, stage) : pt_add(d, w, x, y, right, stage);
    }
    if (st == JW_OPT_HK_IC && d && y > 15 && x >= area_x0 && x <= area_x1 && y >= area_y0 && y <= area_y1) {
        return jw_hk_key(d, right ? '2' : '1', stage);
    }
    if (st < JW_OPT_HK_IN || !d) {
        return JW_HK_NONE;
    }
    hk_nmsg = 0;
    hk_nonote = 0;
    hk_remnant = 0;
    if (y >= 0 && y <= 15) {
        if (st != JW_OPT_HK_FLD && x > 580) {   /* [BS]前項 */
            *stage = JW_OPT_HK_BLD;
        }
        return JW_HK_TAKEN;
    }
    if (x < area_x0 || x > area_x1 || y < area_y0 || y > area_y1) {
        return JW_HK_NONE;
    }
    if (st == JW_OPT_HK_FLD) {
        return JW_HK_TAKEN;
    }
    if (st == JW_OPT_HK_DEL) {
        const long k = pick_text(d, w, x, y);

        if (k < 0) {
            *missed = 1;
            return JW_HK_TAKEN;
        }
        if (d->texts[k].layer != (unsigned char)d->write_layer) {
            msg(20, 3, HK_M_LAYER);
            return JW_HK_TAKEN;
        }
        if (!(d->texts[k].rest[2] & 0x80)) {
            msg(20, 3, HK_M_NOH HK_M_NOT);
            return JW_HK_TAKEN;
        }
        jwc_remove_text(d, k);
        return JW_HK_CHANGED;
    }
    if (st == JW_OPT_HK_NTH) {
        return north(d, w, x, y, missed, stage);
    }
    if (st == JW_OPT_HK_IN) {
        const int r = pick(d, w, x, y, missed);
        int ch = 0;

        if (r == 0) {
            return JW_HK_TAKEN;
        }
        if (r == 2) {
            ch = 1;
        }
        if (right && fabsf(hk_prev1) <= 400.0f) {
            fr_ox = hk_ox;
            fr_oy = hk_oy;
            fr_ux = hk_ux;
            fr_uy = hk_uy;
            put_height(d, hk_prev1, hk_prev2, 3, 0x80);
            hk_added = 1;
            return JW_HK_CHANGED;
        }
        if (right) {
            return ch ? JW_HK_CHANGED : JW_HK_TAKEN;
        }
        to_field(stage);
        return ch ? JW_HK_CHANGED : JW_HK_TAKEN;
    }
    return JW_HK_TAKEN;
}

int jw_hk_key(Jwc *d, int key, int *stage)
{
    int st = *stage;

    hk_remnant = 0;

    if (st == JW_OPT_HK_ISF) {
        if (key == 27) {
            *stage = JW_OPT_HK_IS;
            return JW_HK_TAKEN;
        }
        if (key == 13 || key == 10) {
            const double v = atof(hk_buf);

            hk_buf[0] = 0;
            hk_n = 0;
            if (v >= 1.0 && v <= 6.0 && d) {
                *stage = JW_OPT_HK_IS;
                return iso_draw(d, (double)(float)v);
            }
            return JW_HK_TAKEN;
        }
        if (key == 8 || key == 127) {
            if (hk_n > 0) {
                hk_buf[--hk_n] = 0;
            }
            return JW_HK_TAKEN;
        }
        if (((key >= '0' && key <= '9') || key == '.') && hk_n < 30) {
            hk_buf[hk_n++] = (char)key;
            hk_buf[hk_n] = 0;
        }
        return JW_HK_TAKEN;
    }
    if (st == JW_OPT_HK_IC) {
        if (key == '1') {
            *stage = JW_OPT_HK_P3;
            hk_iso_esc = 0;
            if (d) {
                jwc_ink_clear(d);                /* 抜けると全面を描き直す（文字が線の上に戻る） */
            }
            return JW_HK_TAKEN;
        }
        if (key == '2') {
            *stage = JW_OPT_HK_IS;
            return JW_HK_TAKEN;
        }
        return JW_HK_TAKEN;
    }
    if (st == JW_OPT_HK_IS) {
        hk_nmsg = 0;
        if (key == 8 || key == 127) {
            hk_iso_hide = 1;
            return JW_HK_TAKEN;
        }
        if (key >= '1' && key <= '6' && d) {
            const int k = key - '0';
            const float lv = k < 4 ? (float)((double)k * 0.5 + 1.0) : (float)(k - 1);

            return iso_draw(d, (double)lv);
        }
        if (key == '7') {
            hk_buf[0] = 0;
            hk_n = 0;
            *stage = JW_OPT_HK_ISF;
            return JW_HK_CHANGED;
        }
        if (key == '8') {
            hk_iso_err = !hk_iso_err;
            hk_iso_hide = 0;
            return JW_HK_TAKEN;
        }
        if (key == '9') {
            *stage = JW_OPT_HK_IC;
            return JW_HK_TAKEN;
        }
        if (key == 27 && d && !hk_iso_esc) {
            hk_iso_hide = 1;
            return JW_HK_TAKEN;
        }
        if (key == 27 && d) {
            hk_iso_hide = 0;
            jwc_ink_hold(d, 1);
            while (d->n_texts > hk_iso_t0) {
                jwc_remove_text(d, d->n_texts - 1);
            }
            while (d->n_lines > hk_iso_l0) {
                jwc_remove_line(d, d->n_lines - 1);
            }
            jwc_ink_hold(d, 0);
            jwc_ink_clear(d);
            hk_iso_esc = 0;
            return JW_HK_CHANGED;
        }
        return JW_HK_TAKEN;
    }
    if (st == JW_OPT_HK_PT || st == JW_OPT_HK_RES) {
        hk_nmsg = 0;
        if (key == 27 && d) {
            if (st == JW_OPT_HK_RES && pt_n < 50) {
                *stage = JW_OPT_HK_PT;
                return JW_HK_CHANGED;
            }
            pt_cancel_last(d);
            *stage = pt_n < 1 ? JW_OPT_HK_P4 : JW_OPT_HK_PT;
            return JW_HK_CHANGED;
        }
        if (key == '1' && st == JW_OPT_HK_PT) {
            *stage = JW_OPT_HK_RES;
        }
        return JW_HK_TAKEN;
    }
    if (st == JW_OPT_HK_TM) {
        if (key == 27) {
            *stage = JW_OPT_HK_P2;
            return JW_HK_TAKEN;
        }
        if (key == 13 || key == 10) {
            const double v = hk_n > 0 ? atof(hk_buf) : hk_tm_def;
            const double lo = hk_time ? 9.0 : 8.0, hi = hk_time ? 15.0 : 16.0;

            hk_buf[0] = 0;
            hk_n = 0;
            if (v >= lo && v <= hi && d) {
                hk_tm_def = v;
                *stage = JW_OPT_HK_P2;
                return run_shadow(d, v, stage);
            }
            return JW_HK_TAKEN;
        }
        if (key == 8 || key == 127) {
            if (hk_n > 0) {
                hk_buf[--hk_n] = 0;
            }
            return JW_HK_TAKEN;
        }
        if (((key >= '0' && key <= '9') || key == '.') && hk_n < 30) {
            hk_buf[hk_n++] = (char)key;
            hk_buf[hk_n] = 0;
        }
        return JW_HK_TAKEN;
    }
    if (st == JW_OPT_HK_DLG) {
        hk_nmsg = 0;
        if (hk_sub == 2 || hk_sub == 3) {
            if (key == 27) {
                hk_sub = 0;
            } else if (key == 13 || key == 10) {
                dlg_commit();
            } else if (key == 8 || key == 127) {
                if (hk_n > 0) {
                    hk_buf[--hk_n] = 0;
                }
            } else if (((key >= '0' && key <= '9') || key == '.' || key == '-') && hk_n < 30) {
                hk_buf[hk_n++] = (char)key;
                hk_buf[hk_n] = 0;
            }
            return JW_HK_TAKEN;
        }
        if (hk_sub == 4) {
            if (key == '1' || key == '2') {
                hk_time = key - '1';
                hk_sub = 0;
            } else if (key == 27) {
                hk_sub = 0;
            }
            return JW_HK_TAKEN;
        }
        if (hk_sub == 5) {
            if (key == 27) {
                hk_sub = 0;
            }
            return JW_HK_TAKEN;
        }
        if (key == 27 && !hk_wflag) {
            hk_nonote = 1;              /* 測定：効かない ESC・BS で行 3 の条件が消える */
        }
        if (key == 8) {
            hk_nonote = 1;
        }
        if (key == 27 && hk_wflag && d) {
            while (d->n_texts > hk_wsaved) {
                jwc_remove_text(d, d->n_texts - 1);
            }
            hk_wflag = 0;
            return JW_HK_CHANGED;
        }
        if (key >= '1' && key <= '5') {
            return dlg_item(key - '0', stage);
        }
        return JW_HK_TAKEN;
    }

    if (st < JW_OPT_HK_IN) {
        return JW_HK_NONE;
    }
    hk_nmsg = 0;
    if (st == JW_OPT_HK_FLD) {
        if (key == 27) {
            *stage = JW_OPT_HK_IN;
            return JW_HK_TAKEN;
        }
        if (key == 13 || key == 10) {
            return d ? field_commit(d, stage) : JW_HK_TAKEN;
        }
        if (key == 8 || key == 127) {
            if (hk_n > 0) {
                hk_buf[--hk_n] = 0;
            }
            return JW_HK_TAKEN;
        }
        if (((key >= '0' && key <= '9') || key == '.' || key == '-' || key == ',')
            && hk_n < 30) {
            hk_buf[hk_n++] = (char)key;
            hk_buf[hk_n] = 0;
        }
        return JW_HK_TAKEN;
    }
    if (key == 8) {
        *stage = JW_OPT_HK_BLD;
        return JW_HK_TAKEN;
    }
    if (key == 27) {
        if (st == JW_OPT_HK_IN && hk_mode == 1 && hk_added && d && d->n_texts > 0) {
            jwc_remove_text(d, d->n_texts - 1);
            hk_added = 0;
            return JW_HK_CHANGED;
        }
        if (st == JW_OPT_HK_IN) {
            hk_nonote = 1;              /* 測定：ESC が取り消しにならないとき、行 3 の注意書きが消える */
        }
        return JW_HK_TAKEN;
    }
    if (st == JW_OPT_HK_IN && key != 13 && key != 10) {
        hk_nonote = 1;                  /* 測定：数字などの鍵でも消える（Enter は残る） */
    }
    return JW_HK_NONE;
}
