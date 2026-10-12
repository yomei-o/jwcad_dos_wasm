/* src/opt25v.c -- ｵﾌﾟｼｮﾝ ⑧2.5D の視点画面（①透視図・②鳥瞰図・③ｱｲｿﾒ）。
 *
 * 仕様は notes/spec-opt8-view.md（ovl35 3ab8:5c55・54a5・57ea・5bbd。番地は ovl35 の dis 番地）。
 * 演算は 1 つずつ float／double に丸める（本物は 22b2 のソフト浮動小数。float 同士だけ float 演算）。
 * 「測定のみ・decomp 未確認」と書いたものは実機で採った値。
 *
 * 範囲：高さデータ（端部の文字・立面・円データ）の読み取り（ovl35 1e64）は未実装で、
 * 3 次元の線は平面の線（高さ 0）として作る。 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "opt25.h"
#include "cmd.h"
#include "draw.h"
#include "ui.h"

#pragma STDC FP_CONTRACT OFF

#define O25_DOT 0x1111          /* 線種 9：4 画素に 1 つ（測定：v3） */

/* ----------------------------------------------------------- 視点の大域 */
/* DS の大域（プログラムの間ずっと持つ）。初期値は EXE のもの。 */
static float g_dir = -30.0f;            /* [0x7854] 視線方向（度） */
static float g_rot = 5.0f;              /* [0x7858] 回転の刻み（度） */
static float g_mov = 10.0f;             /* [0x785c] 移動の刻み */
static float g_ed = -400.0f;            /* [0x7860] 視点の奥行位置 */
static float g_phi = 30.0f;             /* [0x7864] アイソメの仰角（度） */

/* 5c55 の局所 */
static int v_mode;                      /* 1 透視・2 鳥瞰・3 アイソメ */
static int v_face = 1;                  /* [bp-0x40] 面：1＝移動、0＝固定 */
static float v_ex = 250.0f;             /* [bp-0x5aa] */
static float v_exm;                     /* [bp-0x5e0] */
static float v_ez, v_ez0, v_yoff;       /* [bp-0x5b8]・[bp-0x5f2]・[bp-0x5ee] */
static float v_vmin, v_vmax;
static float v_F, v_uF;
static float v_unit;                    /* [bp-0x12c]：1.0（mm）／1000.0（ｍ） */
static float v_step;                    /* [bp-0xee] 移動の刻み（図面の単位） */
static float v_halfW, v_halfH;

typedef struct {
    float x0, y0, x1, y1;               /* A：平面の線 */
    float z0, z1;                       /* B：端点の高さ */
    float cx0, cy0, cx1, cy1;           /* C：(横, 奥行) */
    unsigned char type, pen;
} Seg;

static Seg *v_seg;
static long v_nseg;
static JwcLine *v_out;                  /* 投影した線（描く） */
static long v_nout;

/* ------------------------------------------------------------ 座標系 */
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

static float fr_u(double x, double y)
{
    return (float)((y - fr_oy) * fr_uy + (x - fr_ox) * fr_ux);
}

static float fr_v(double x, double y)
{
    return (float)((y - fr_oy) * fr_ux - (x - fr_ox) * fr_uy);
}

/* ------------------------------------------------------------ データ */
static int layer_shown(const Jwc *d, unsigned layer)
{
    return (d->layer_edit[layer & 255] & 1) && (d->group_edit[(layer >> 4) & 15] & 1);
}

/* ovl35 1e64 の代わり（高さ 0 の平面の線だけ）。レイヤ 0..255 の順に、表示中のレイヤの線
 * （ペン<0x5a、線種 9＝補助線でない）を集める。 */
static long build(const Jwc *d)
{
    int k;
    long n, cnt = 0;

    free(v_seg);
    v_seg = NULL;
    v_nseg = 0;
    for (n = 0; n < d->n_lines; n++) {
        const JwcLine *l = &d->lines[n];

        if (l->pen < 0x5a && l->type != 9 && layer_shown(d, l->layer)) {
            cnt++;
        }
    }
    if (!cnt) {
        return 0;
    }
    v_seg = (Seg *)calloc((size_t)cnt, sizeof(Seg));
    if (!v_seg) {
        return 0;
    }
    for (k = 0; k < 256; k++) {
        if (!layer_shown(d, (unsigned)k)) {
            continue;
        }
        for (n = 0; n < d->n_lines; n++) {
            const JwcLine *l = &d->lines[n];
            Seg *s;

            if (l->pen >= 0x5a || l->type == 9 || l->layer != k) {
                continue;
            }
            s = &v_seg[v_nseg++];
            s->x0 = l->x0;
            s->y0 = l->y0;
            s->x1 = l->x1;
            s->y1 = l->y1;
            s->type = l->type;
            s->pen = l->pen;
        }
    }
    return v_nseg;
}

/* ------------------------------------------------------------ 初期化 */
static float paper_k(const Jwc *d)
{
    static const float PAPER[5] = { 1189.0f, 841.0f, 594.0f, 420.0f, 297.0f };
    const int pp = d->paper >= 0 && d->paper < 5 ? d->paper : 4;

    return (float)((double)PAPER[pp] / 518.0);
}

static void set_iso(void)
{
    const float phi = (float)((double)g_phi * 0.017453292519943295);

    v_ez = (float)((sin((double)phi) / cos((double)phi)) * (double)(-g_ed));
}

/* 0x30b85〜0x30d66：メニューの項目 1〜3 を押したあとの初期値。 */
static void mode_init(const Jwc *d, int m, int unit)
{
    v_mode = m;
    v_unit = unit ? 1000.0f : 1.0f;
    if (m == 1) {
        v_exm = v_ex;
        v_ez0 = v_ez = (float)((v_unit * 2.0f) / (d->denom * paper_k(d)));
        v_yoff = 100.0f;
    } else {
        v_exm = v_ex;
        v_ez0 = 0.0f;
        v_ez = 200.0f;
        v_yoff = 150.0f;
    }
    if (m == 3) {
        if (!(-10.0f >= g_ed)) {
            g_ed = -10.0f;
        }
        if (fabsf(g_phi) > 80.0f) {
            g_phi = 30.0f;
        }
        set_iso();
        v_ez0 = 0.0f;
    }
}

/* 0x30d8e：全再計算（枠 1 を作り直し、v の最小最大を取り直す）。 */
static void recompute(void)
{
    const double theta = (double)g_dir * 0.017453292519943295;
    long i;

    v_vmin = 99999.0f;
    v_vmax = -99999.0f;
    /* 枠 1 の原点 [bp-0x5fe]・[bp-0x632] は本物では未初期化の局所。(250,150) と仮定（測定のみ：v3 の絵の端から逆算した値。[0xaa78]・[0xaa7c] と同じ）。 */
    frame_set(250.0, 150.0, cos(theta) * 100.0 + 250.0, sin(theta) * 100.0 + 150.0);
    for (i = 0; i < v_nseg; i++) {
        Seg *s = &v_seg[i];

        s->cx0 = fr_u(s->x0, s->y0) + 250.0f;
        s->cy0 = fr_v(s->x0, s->y0);
        s->cx1 = fr_u(s->x1, s->y1) + 250.0f;
        s->cy1 = fr_v(s->x1, s->y1);
        if (v_vmin > s->cy0) v_vmin = s->cy0;
        if (v_vmax < s->cy0) v_vmax = s->cy0;
        if (v_vmin > s->cy1) v_vmin = s->cy1;
        if (v_vmax < s->cy1) v_vmax = s->cy1;
    }
}

/* 0x333c3 以降の頭（§4.2）：投影の前の準備。 */
static void project_head(void)
{
    v_ex = v_exm;
    if (v_mode == 1) {
        v_ez = v_ez0;
        if (g_ed > v_vmax) g_ed = v_vmax;
        v_F = v_face ? 100.0f + v_vmax : -g_ed;
        if (!((v_vmax - v_F) <= -100.0f)) v_F = 100.0f + v_vmax;
    } else {
        float x2;

        if (g_ed > v_vmax) g_ed = v_vmax;
        if (v_ez0 < g_ed || g_ed > 0.0f) v_ez0 = g_ed;
        x2 = -g_ed;
        if (fabs((double)(v_ez0 - x2)) < 0.1 && fabs((double)v_ez) < 0.1) {
            x2 = x2 + 1.0f;
        }
        frame_set((double)v_ez0, 0.0, (double)x2, (double)(-v_ez));
        v_uF = fr_u((double)g_ed, (double)v_ez);
        v_F = v_face ? 100.0f + v_vmax : -v_uF;
        if (!((v_vmax - v_F) <= -100.0f)) v_F = 100.0f + v_vmax;
    }
}

/* ------------------------------------------------------------ 投影 */
static int proj1(const Seg *s, float *X0, float *Y0, float *X1, float *Y1)
{
    const float ep = 1.0f;
    const double ex = (double)v_ex, ed = (double)g_ed, ez = (double)v_ez, F = (double)v_F;
    const double H0 = s->cx0, D0 = s->cy0, Z0 = s->z0, H1 = s->cx1, D1 = s->cy1, Z1 = s->z1;
    float d1 = (float)(D1 - ed);
    float d0 = (float)(D0 - ed);
    float h0, z0, h1, z1, k0, k1;
    double k0d, k1d;

    if (!(d0 >= ep) && !(d1 >= ep)) return 0;
    h0 = (float)H0; z0 = (float)Z0; h1 = (float)H1; z1 = (float)Z1;
    if (d0 < ep) {
        const double ddd = D1 - D0;
        const float dd = (float)ddd;
        double t_d;
        float t;

        if (!(fabs(ddd) >= (double)ep)) return 0;
        t_d = ((ed - D0) + 1.0) / (double)dd;
        t = (float)t_d;
        h0 = (float)(t_d * (H1 - H0) + H0);
        z0 = (float)((Z1 - Z0) * (double)t + Z0);
        d0 = ep;
    }
    if (d1 < ep) {
        const double ddd = D0 - D1;
        const float dd = (float)ddd;
        double t_d;
        float t;

        if (!(fabs(ddd) >= (double)ep)) return 0;
        t_d = ((ed - D1) + 1.0) / (double)dd;
        t = (float)t_d;
        h1 = (float)(t_d * (H0 - H1) + H1);
        z1 = (float)((Z0 - Z1) * (double)t + Z1);
        d1 = ep;
    }
    k0d = F / (double)d0;
    k0 = (float)k0d;
    *X0 = (float)(k0d * ((double)h0 - ex) + ex);
    *Y0 = (float)(((double)z0 - ez) * (double)k0 + ez);
    k1d = F / (double)d1;
    k1 = (float)k1d;
    *X1 = (float)(k1d * ((double)h1 - ex) + ex);
    *Y1 = (float)(((double)z1 - ez) * (double)k1 + ez);
    return 1;
}

static int proj2(const Seg *s, float *X0, float *Y0, float *X1, float *Y1)
{
    const float ep = 1.0f;
    const double ex = (double)v_ex, F = (double)v_F, uF = (double)v_uF;
    const double H0 = s->cx0, D0 = s->cy0, Z0 = s->z0, H1 = s->cx1, D1 = s->cy1, Z1 = s->z1;
    const float U0 = fr_u(D0, Z0), V0i = fr_v(D0, Z0), U1 = fr_u(D1, Z1), V1i = fr_v(D1, Z1);
    float V0 = V0i, V1 = V1i;
    float d0 = (float)((double)U0 - uF);
    float d1 = (float)((double)U1 - uF);
    float h0, h1, k0, k1;
    double k0d, k1d;

    if (!(d0 >= ep) && !(d1 >= ep)) return 0;
    h0 = (float)H0;
    h1 = (float)H1;
    if (d0 < ep) {
        const float dd = U1 - U0;
        double t_d;
        float t;

        if (!(fabsf(dd) >= ep)) return 0;
        t_d = ((uF - (double)U0) + 1.0) / (double)dd;
        t = (float)t_d;
        h0 = (float)(t_d * ((double)h1 - H0) + (double)h0);
        V0 = (V1 - V0) * t + V0;
        d0 = ep;
    }
    if (d1 < ep) {
        const float dd = U0 - U1;
        double t_d;
        float t;

        if (!(fabsf(dd) >= ep)) return 0;
        t_d = ((uF - (double)U1) + 1.0) / (double)dd;
        t = (float)t_d;
        h1 = (float)(t_d * (double)(h0 - h1) + (double)h1);
        V1 = (V0 - V1) * t + V1;
        d1 = ep;
    }
    k0d = F / (double)d0;
    k0 = (float)k0d;
    *X0 = (float)(k0d * ((double)h0 - ex) + ex);
    *Y0 = k0 * V0;
    k1d = F / (double)d1;
    k1 = (float)k1d;
    *X1 = (float)(k1d * ((double)h1 - ex) + ex);
    *Y1 = k1 * V1;
    return 1;
}

static int proj3(const Seg *s, float *X0, float *Y0, float *X1, float *Y1)
{
    *X0 = (float)s->cx0;
    *Y0 = fr_v((double)s->cy0, (double)s->z0);
    *X1 = (float)s->cx1;
    *Y1 = fr_v((double)s->cy1, (double)s->z1);
    return 1;
}

/* 0x3158e〜：全線を投影して v_out に積む。 */
static void project_all(const Jwc *d)
{
    long i;

    free(v_out);
    v_out = (JwcLine *)calloc((size_t)(v_nseg ? v_nseg : 1), sizeof(JwcLine));
    v_nout = 0;
    project_head();
    for (i = 0; i < v_nseg; i++) {
        float X0, Y0, X1, Y1;
        int r;
        JwcLine *o;

        if (v_mode == 1) r = proj1(&v_seg[i], &X0, &Y0, &X1, &Y1);
        else if (v_mode == 2) r = proj2(&v_seg[i], &X0, &Y0, &X1, &Y1);
        else r = proj3(&v_seg[i], &X0, &Y0, &X1, &Y1);
        if (!r) continue;
        Y0 = v_yoff + Y0;
        Y1 = v_yoff + Y1;
        o = &v_out[v_nout++];
        o->x0 = X0; o->y0 = Y0; o->x1 = X1; o->y1 = Y1;
        o->type = v_seg[i].type;
        o->pen = v_seg[i].pen;
        o->layer = (unsigned char)d->write_layer;
    }
}

/* ------------------------------------------------------------ 公開 */
int jw_o25v_enter(const Jwc *d, int m, int unit)
{
    v_halfW = 0.0f;
    v_halfH = 0.0f;
    if (build(d) <= 0) {
        return 0;
    }
    mode_init(d, m, unit);
    recompute();
    project_all(d);
    return 1;
}

void jw_o25v_free(void)
{
    free(v_seg);
    free(v_out);
    v_seg = NULL;
    v_out = NULL;
    v_nseg = v_nout = 0;
}

void jw_o25v_draw(VGA *v, const Jwc *d, const JwView *w, int cross)
{
    long i;

    v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
    v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
    v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
    v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
    for (i = 0; i < v_nout; i++) {
        jw_view_line(v, d, &v_out[i], w, 0);
    }
    /* 視点のしるし（§2.3 (a)）：線種 9・色 2・排他的論理和の十字線（測定：v3 で 4 画素おきの赤、
     * 白と重なると水色）。縦線は x=視点、横線は y=Yoff+ez0。 */
    if (cross) {
        const float hw = 259.0f, hh = 223.0f;
        const float xr = (float)(v_exm - hw);
        const float yr = (float)((v_yoff - hh) + v_ez0);
        const float vx = xr + hw, vy0 = (float)(-500.0f - hh) + hh, vy1 = (float)(1000.0f - hh) + hh;
        const float hy = yr + hh, hx0 = (float)(-500.0f - hw) + hw, hx1 = (float)(1000.0f - hw) + hw;
        const int sx = (int)((vx - w->ox) * w->scale + w->ax);
        const int sy = (int)(w->ay - (hy - w->oy) * w->scale);

        v->clip_y0 = 32;                /* 行 1・2 は触らない（測定：v3 の十字線は y>=35） */
        jw_line_clipped(v, (double)sx, w->ay - (vy0 - w->oy) * w->scale, (double)sx,
                        w->ay - (vy1 - w->oy) * w->scale, 2, ROP_XOR, O25_DOT);
        jw_line_clipped(v, (hx0 - w->ox) * w->scale + w->ax, (double)sy,
                        (hx1 - w->ox) * w->scale + w->ax, (double)sy, 2, ROP_XOR, O25_DOT << 1);   /* 横は 1 つずれる（測定） */
    }
}

/* 行 2 の数（§2.3 (b)）。 */
void jw_o25v_row2(VGA *v, const Jwc *d, int unit)
{
    char t[64], u[32];
    const float kk = (d->denom * paper_k(d)) / v_unit;

    if (v_mode != 3) {
        sprintf(t, "%4.1f\xdf", (double)g_rot);
        sprintf(u, ",%5.1f", (double)g_mov);
        strcat(t, u);
        strcat(t, unit ? "\x82\x8d" : "mm");
        jw_ui_text(v, 17, 2, 7, 0xffffu, t);
    } else {
        sprintf(t, "%4.1f\xdf", (double)g_rot);
        jw_ui_text(v, 20, 2, 7, 0xffffu, t);
    }
    sprintf(t, "%8.1f\xdf  ", (double)g_dir);
    jw_ui_text(v, 33, 2, 7, 0xffffu, t);
    if (v_mode != 3) {
        sprintf(t, "%8.1f", (double)(kk * v_ez));
        strcat(t, unit ? "\x82\x8d " : "mm ");
        jw_ui_text(v, 48, 2, 7, 0xffffu, t);
        sprintf(t, "%8.1f", (double)(-(kk * g_ed)));
        strcat(t, unit ? "\x82\x8d " : "mm ");
        jw_ui_text(v, 62, 2, 7, 0xffffu, t);
        jw_ui_text(v, 76, 2, 7, 0xffffu, v_face ? "\x88\xda\x93\xae" : "\x8c\xc5\x92\xe8");
    } else {
        sprintf(t, "%10.4f\xdf ", (double)g_phi);
        jw_ui_text(v, 48, 2, 7, 0xffffu, t);
    }
}

int jw_o25v_mode(void)
{
    return v_mode;
}

/* ------------------------------------------------------------ 鍵・押し */
static void step_make(const Jwc *d)
{
    v_step = (v_unit / (d->denom * paper_k(d))) * g_mov;
}

static void clamp_ed(void)
{
    if (!(-10.0f >= g_ed)) {
        g_ed = -10.0f;
    }
}

/* 項目 n（3〜9）。1・2 は呼び元。戻り 1＝受けた。 */
int jw_o25v_item(const Jwc *d, int n)
{
    step_make(d);
    switch (n) {
    case 3:
        g_dir = g_dir - g_rot;
        if (g_dir < -360.0f) g_dir = g_dir + 360.0f;
        recompute();
        break;
    case 4:
        g_dir = g_rot + g_dir;
        if (g_dir > 360.0f) g_dir = g_dir - 360.0f;
        recompute();
        break;
    case 5:
    case 6:
        if (v_mode == 3) {
            g_phi = n == 5 ? g_rot + g_phi : g_phi - g_rot;
            clamp_ed();
            if (n == 5 && g_phi > 85.0f) g_phi = 85.0f;
            if (n == 6 && g_phi < -85.0f) g_phi = -85.0f;
            set_iso();
            v_ez0 = 0.0f;
        } else {
            v_ez = n == 5 ? v_step + v_ez : v_ez - v_step;
            if (v_mode == 1) v_ez0 = v_ez;
        }
        break;
    case 7:
        if (v_mode == 3) {
            clamp_ed();
            g_dir = 0.0f;
            v_ez = 0.0f;
            g_phi = 0.0f;
            v_ez0 = 0.0f;
            recompute();
        } else {
            g_ed = v_step + g_ed;
        }
        break;
    case 8:
        if (v_mode == 3) {
            clamp_ed();
            g_dir = 45.0f;
            g_phi = 35.26438904f;
            {
                const float phi = (float)(0.017453292519943295 * 35.26439);

                v_ez = (float)((sin((double)phi) / cos((double)phi)) * (double)(-g_ed));
            }
            v_ez0 = 0.0f;
            recompute();
        } else {
            g_ed = g_ed - v_step;
        }
        break;
    case 9:
        v_face = 1 - v_face;
        break;
    default:
        return 0;
    }
    project_all(d);
    return 1;
}

/* 図面の押し：視点の位置（px,py は図面の座標）。 */
void jw_o25v_press(const Jwc *d, double px, double py)
{
    const float hw = 259.0f, hh = 223.0f;
    float x = (float)(px - (double)hw), y = (float)(py - (double)hh);

    v_exm = (float)(hw + x);
    v_ez0 = (float)((hh - v_yoff) + y);
    if (v_mode == 3) {
        v_ez0 = 0.0f;
    }
    project_all(d);
}

/* ------------------------------------------------------------ 作図 */
/* 0x2fb3f：作図枠 [0,W]×[0,H]（W=518、H=447）への切り取り。float 演算。1＝見える。 */
static int clip4(float *x0, float *y0, float *x1, float *y1)
{
    const float W = 518.0f, H = 447.0f;
    static const float PX[4] = { 0.0f, 518.0f, 518.0f, 0.0f }, PY[4] = { 0.0f, 0.0f, 447.0f, 447.0f };
    static const float QX[4] = { 518.0f, 518.0f, 0.0f, 0.0f }, QY[4] = { 0.0f, 447.0f, 447.0f, 0.0f };
    int k;

    if (*x0 >= 0.0f && *x0 <= W && *y0 >= 0.0f && *y0 <= H
        && *x1 >= 0.0f && *x1 <= W && *y1 >= 0.0f && *y1 <= H) {
        return 1;
    }
    if ((*x0 < 0.0f && *x1 < 0.0f) || (*x0 > W && *x1 > W)
        || (*y0 < 0.0f && *y1 < 0.0f) || (*y0 > H && *y1 > H)) {
        return 0;
    }
    for (k = 0; k < 4; k++) {
        const float dx = QX[k] - PX[k], dy = QY[k] - PY[k];
        const float s0 = (*y0 - PY[k]) * dx - (*x0 - PX[k]) * dy;
        const float s1 = (*y1 - PY[k]) * dx - (*x1 - PX[k]) * dy;
        float t, ddx, ddy;

        if (s0 >= 0.0f && s1 >= 0.0f) continue;
        if (!(s0 > 0.0f) && !(s1 > 0.0f)) return 0;
        if (s0 == s1) return 0;
        t = s0 / (s0 - s1);
        ddx = *x1 - *x0;
        ddy = *y1 - *y0;
        if (s0 < 0.0f) {
            *x0 = t * ddx + *x0;
            *y0 = t * ddy + *y0;
        }
        if (s1 < 0.0f) {
            *x1 = t * ddx + *x0;
            *y1 = t * ddy + *y0;
        }
    }
    return 1;
}

/* ①作図の実行：投影した線を図面の線として足す（5c55 の記録パス、spec-opt8-view §5.1）。 */
long jw_o25v_commit(Jwc *d)
{
    long i, before = d->n_lines;

    for (i = 0; i < v_nout; i++) {
        JwcLine t = v_out[i];

        if (!clip4(&t.x0, &t.y0, &t.x1, &t.y1)) continue;
        t.rest[0] = t.rest[1] = t.rest[2] = t.rest[3] = 0;
        t.rest[1] = 0x0f;               /* +0x13 は本物では未初期化のスタック（測定：o8_v3_run の保存結果は常に 0x0f） */
        if (t.pen < 0x5a && t.x0 == t.x1 && t.y0 == t.y1) continue;   /* 66b3：長さ 0 は足さない */
        jwc_put_line(d, &t);
    }
    return d->n_lines - before;
}
