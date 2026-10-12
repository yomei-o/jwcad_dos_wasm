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
static int hk_nonote;                   /* 押しでない鍵（ESC・数字）のあと、行 3 の注意書きが消える（測定） */
static struct { int col, row; const char *text; } hk_msg[4];
static int hk_nmsg;
/* 欄を開いた線の端と向き（座標系の原点＝押した点に近い端、軸＝もう一端へ）。 */
static float hk_ox, hk_oy, hk_ux, hk_uy;

void jw_hk_entry(Jwc *d)
{
    long k;

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

void jw_hk_reset(void)
{
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
        jw_ui_text(v, 8, 1, 7, 0, HK_P2);
        break;
    case JW_OPT_HK_P3:
        jw_ui_text(v, 8, 1, 7, 0, HK_P3);
        break;
    case JW_OPT_HK_P4:
        jw_ui_text(v, 8, 1, 7, 0, HK_P4A HK_P4);
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
    default:
        return;
    }
    jw_ui_text(v, 73, 1, 7, 0, HK_BS);
    if (stage >= JW_OPT_HK_P2 && stage <= JW_OPT_HK_P4) {
        const int col = cond_string(buf);

        jw_ui_text(v, 18, 2, (unsigned)col, 0, buf);
    }
    for (i = 0; i < hk_nmsg; i++) {
        jw_ui_text(v, hk_msg[i].col, hk_msg[i].row, 7, 0, hk_msg[i].text);
    }
}

int jw_hk_enter(int n)
{
    return n >= 1 && n <= 4 ? JW_OPT_HK_BLD + n - 1 : 0;
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

int jw_hk_click(Jwc *d, const JwView *w, int x, int y, int right,
                int area_x0, int area_y0, int area_x1, int area_y1,
                int *stage, int *missed)
{
    int st = *stage;

    *missed = 0;
    if (st < JW_OPT_HK_IN || !d) {
        return JW_HK_NONE;
    }
    hk_nmsg = 0;
    hk_nonote = 0;
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
