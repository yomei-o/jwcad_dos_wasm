/* src/opthikage_calc.c -- ｵﾌﾟｼｮﾝ ⑤日影図 ②日影図の計算。
 *
 * データの集め方は ovl33 0x2bf7f（notes/spec-opt5-data.md）、影の外周のたどりと線の足しは
 * ovl34 3ab8:3ee7 とその下（notes/spec-opt5-calc-a.md）。本物は浮動小数点を実行時ライブラリで
 * 計算し、演算ごとに float／double に丸める。ここも式の丸めをそのまま写した
 * （lift の `(f32)` は右辺全体を double で計算してから 1 回だけ丸める）。
 * 「測定のみ」は実機の保存結果（tools/functest.sh）から採った値。 */
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "opthikage_calc.h"
#include "opthikage_str.h"

#pragma STDC FP_CONTRACT OFF

#define NP_MAX 700
#define NE_MAX 1100

static float PX[NP_MAX], PY[NP_MAX], PH[NP_MAX], PH2[NP_MAX];
static int16_t SIDEF[NP_MAX];           /* c28c：2 段フラグ */
static int16_t GRP[NP_MAX];             /* bece：建物の番号（収集の途中は文字の番号） */
static unsigned char LAY[NP_MAX];
static int16_t EA[NE_MAX], EB[NE_MAX];
static int32_t SX[NP_MAX], SY[NP_MAX];  /* c130・c13a：影の先 */
static int32_t SIDE[NP_MAX];            /* bef6：いまの線の左右 */
static unsigned char VIS[NE_MAX];       /* bc7a */
static int16_t START[128], ORDER[128];  /* c278・b77c */
static char errbuf[200];

/* ------------------------------------------------------------------ 座標系 */
/* root 1bb4:27ea・2981・2a18（optbatch.c の frame_* と同じ丸め）。 */
static float fr_ox, fr_oy, fr_ux, fr_uy;
static float fr_len;                    /* [0xc122]：座標系の軸の長さ（壁面線の長さ） */

/* ⑤壁面日影：選んだ壁面線（記録の写し）。無ければ wl_on＝0。 */
static int wl_on;
static JwcLine wl_rec;
static char wl_out[160];                /* 壁面自身の日影の文字（空なら無し） */
static int wl_flag_11d5;                /* byte [0x11d5]：建物が壁面線の端に接している */

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
    fr_len = (float)len;
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

static float fr_X(double u, double v)
{
    return (float)(((double)fr_ux * u - (double)fr_uy * v) + fr_ox);
}

static float fr_Y(double u, double v)
{
    return (float)(((double)fr_ux * v + (double)fr_uy * u) + fr_oy);
}

static int readable(const Jwc *d, unsigned layer)
{
    return (d->layer_edit[layer & 255] & 1) && (d->group_edit[(layer >> 4) & 15] & 1);
}

static float paper_b4a2(const Jwc *d)
{
    static const float PAPER[5] = { 1189.0f, 841.0f, 594.0f, 420.0f, 297.0f };

    return (float)((double)PAPER[d->paper >= 0 && d->paper < 5 ? d->paper : 4] / 518.0);
}

/* -------------------------------------------------------------- 太陽の部品 */
typedef struct {
    float cd, cdcl, tanl, sdcl, sdsl;
} Sun;

/* 2bcd3：緯度・日赤緯から 5 つの係数（calc-a 4.1）。 */
static void sun_coeffs(double lat, double decl, Sun *s)
{
    const double L = lat * 0.0174533, D = decl * 0.0174533;
    const float cosL = (float)cos(L);
    const double cosD = cos(D);
    const float cosDf = (float)cosD;
    const float cdcl = (float)(cosD * (double)cosL);
    const float sinL = (float)sin(L);
    const double sinD = sin(D);
    const float sinDf = (float)sinD;
    const float sdsl = (float)(sinD * (double)sinL);
    const float tanL = (float)((double)sinL / (double)cosL);
    const float sdcl = (float)((double)sinDf / (double)cosL);

    s->cd = cosDf;
    s->cdcl = cdcl;
    s->tanl = tanL;
    s->sdcl = sdcl;
    s->sdsl = sdsl;
}

/* 2be59：時刻 t（正午からの秒）の影のずれ（高さ 1 あたり）。 */
static void sun_shadow(int16_t t, const Sun *s, float *ox, float *oy)
{
    const double w = (double)t * 7.272205e-05;
    const double S = cos(w) * (double)s->cdcl + (double)s->sdsl;
    const float inv = (float)(1.0 / S);

    *ox = (float)(((double)sin(w) * (double)inv) * (double)s->cd);
    *oy = (float)((double)s->tanl - (double)inv * (double)s->sdcl);
}

/* --------------------------------------------------------------- 収集 */
typedef struct {
    int np, ne, nblk;
    float scale;
    float zl[256];
} Gather;

static float group_base(const char *name)
{
    float v = 0.0f;

    if (name[0] == '#' && name[1] == 'l' && name[2] == 'v') {
        sscanf(name + 3, "%f", &v);
    }
    return v;
}

static int fail(const char *msg)
{
    strncpy(errbuf, msg, sizeof errbuf - 1);
    errbuf[sizeof errbuf - 1] = 0;
    return -1;
}

/* root 1bb4:3cd1（optbatch.c と同じ。演算は 1 つずつ float に丸める）。A は基準側、B は点を測る側。 */
static int isect(const JwcLine *A, const JwcLine *B, float *X, float *Y)
{
    const float dyA = A->y1 - A->y0;
    const float dxA = A->x1 - A->x0;
    const float dxB = B->x1 - B->x0;
    const float dyB = B->y1 - B->y0;
    const float p1 = (A->x1 - A->x0) * (B->y0 - A->y0);
    const float p2 = (B->x0 - A->x0) * dyA;
    const float c18 = p1 - p2;
    const float q1 = (B->y1 - A->y0) * dxA;
    const float q2 = (B->x1 - A->x0) * dyA;
    const float c1c = q1 - q2;
    float t, tx, ty;

    if (c18 == 0.0f && c1c == 0.0f) {
        *X = 0.0f;
        *Y = 0.0f;
        return 0;
    }
    if (c18 == c1c) {
        *X = 10.0f;
        *Y = 10.0f;
        return 0;
    }
    {
        const float d = fabsf(c18 - c1c);

        if (d < 1.0f && fabsf(c18) > d * 1e10f) {
            *X = 10.0f;
            *Y = 10.0f;
            return 0;
        }
    }
    t = c18 / (c18 - c1c);
    tx = t * dxB;
    ty = t * dyB;
    *X = tx + B->x0;
    *Y = ty + B->y0;
    if (A->x0 == A->x1) {
        *X = A->x0;
    }
    if (A->y1 == A->y0) {
        *Y = A->y0;
    }
    if (B->x0 == B->x1) {
        *X = B->x0;
    }
    if (B->y1 == B->y0) {
        *Y = B->y0;
    }
    return 1;
}

/* ⑤壁面日影：0x2b82b（data §6）。壁面線で建物の辺 a-b を切る。戻り：0＝通常の辺（*pa・*pb は書き換わりうる）、
 * 1＝足さない、10＝壁面線が建物を通る。np は切った点を数える別のカウンタ。 */
static int wall_clip(int *pa, int *pb, int *pnp)
{
    const int a = *pa, b = *pb;
    int np = *pnp, old;
    float va, vb, Xi, Yi, dx, dy, den, num;
    JwcLine seg;

    if (!frame_set(wl_rec.x0, wl_rec.y0, wl_rec.x1, wl_rec.y1)) {
        return 1;
    }
    va = fr_v((double)PX[a], (double)PY[a]);
    vb = fr_v((double)PX[b], (double)PY[b]);
    if (va >= -0.01 && vb >= -0.01) {
        GRP[a] = -2;
        GRP[b] = -2;
        return 1;
    }
    if (va < -0.01 && vb < -0.01) {
        return 0;
    }
    np++;
    *pnp = np;
    old = (va >= -0.01) ? a : b;
    if (va >= -0.01) {
        *pa = np;
    } else {
        *pb = np;
    }
    GRP[np] = -1;
    GRP[old] = -2;
    LAY[np] = LAY[old];
    SIDEF[np] = SIDEF[old];
    memset(&seg, 0, sizeof seg);
    seg.x0 = PX[a];
    seg.y0 = PY[a];
    seg.x1 = PX[b];
    seg.y1 = PY[b];
    {
        JwcLine W;

        memset(&W, 0, sizeof W);
        W.x0 = wl_rec.x0;
        W.y0 = wl_rec.y0;
        W.x1 = wl_rec.x1;
        W.y1 = wl_rec.y1;
        if (isect(&W, &seg, &Xi, &Yi)) {
            const float xlo = PX[a] < PX[b] ? PX[a] : PX[b], xhi = PX[a] < PX[b] ? PX[b] : PX[a];
            const float ylo = PY[a] < PY[b] ? PY[a] : PY[b], yhi = PY[a] < PY[b] ? PY[b] : PY[a];

            if (Xi >= xlo && Xi <= xhi && Yi >= ylo && Yi <= yhi) {
                if (va > 0.01 || vb > 0.01) {
                    const float u = fr_u((double)Xi, (double)Yi);

                    if (u > 0.01 && (double)u < (double)fr_len - 0.01) {
                        return 10;
                    }
                }
                PX[np] = Xi;
                PY[np] = Yi;
                dx = (float)(PX[b] - PX[a]);
                dy = (float)(PY[b] - PY[a]);
                if (!(1.0f <= (float)(fabsf(dx) + fabsf(dy)))) {
                    PH[np] = PH[old];
                    PH2[np] = PH2[old];
                    return 0;
                }
                if (fabsf(dx) <= fabsf(dy)) {
                    den = dy;
                    num = (float)(Yi - PY[a]);
                } else {
                    den = dx;
                    num = (float)(Xi - PX[a]);
                }
                {
                    const float za = PH[a];
                    float zn = (float)((float)((float)((double)(float)(PH[b] - za) / (double)den) * num) + za);

                    if (zn < 0.0f) {
                        zn = 0.0f;
                    }
                    PH[np] = zn;
                }
                {
                    const float za = PH2[a];
                    float zn = (float)((float)((float)((double)(float)(PH2[b] - za) / (double)den) * num) + za);

                    if (zn < 0.0f) {
                        zn = 0.0f;
                    }
                    PH2[np] = zn;
                }
                return 0;
            }
        }
    }
    PX[np] = PX[old];
    PY[np] = PY[old];
    PH[np] = PH[old];
    PH2[np] = PH2[old];
    return 0;
}

/* 0x2aea1：太陽が壁面の裏側にあるかの符号（data §3）。 */
static int wall_sun(int16_t t, const HkCond *c)
{
    const double phi = (double)(float)c->lat * 0.017453292519943295;
    const double delta = (double)(float)c->decl * 0.017453292519943295;
    const double sp = sin(phi), cp = cos(phi), sd = sin(delta), cd = cos(delta);
    const double w = (double)t * 7.272205e-05;
    const double S = ((cos(w) * cd) * cp) + (sd * sp);
    const double C = sqrt(1.0 - S * S);
    const double sinAz = (sin(w) / C) * cd;
    const double cosAz = ((S * sp) - sd) / (C * cp);
    const float sx = (float)(sinAz * 100.0), cx = (float)(cosAz * 100.0);
    const float v = (float)((float)(PX[607] * cx) - (float)(PY[607] * sx));

    if ((double)v < 0.0) {
        return -1;
    }
    if ((double)v <= 0.001) {
        return 0;
    }
    return 1;
}

/* data §7：図面（線・文字）から点・辺・建物の表を作る。戻り：建物の数、失敗は -1。 */
static int gather(Jwc *d, const HkCond *c, Gather *g)
{
    const float b4a2 = paper_b4a2(d);
    const double H0 = (double)(float)c->height;
    float base[16];
    long ln, li;
    int np = 0, ne = 0, i, j, k, cnt;
    float zmax = 0.0f, umax = 0.0f, umin = 0.0f, vmax = 0.0f, vmin = 0.0f;
    int16_t lab[NP_MAX];
    int dirty = 0, np0 = 0;

    /* 7.2 レイヤの基準高さ（メモ欄の `#lv`）。 */
    for (j = 0; j < 16; j++) {
        base[j] = group_base(d->group_name[j]);
    }
    for (j = 0; j < 255; j++) {
        g->zl[j] = base[(j >= 0 ? j : -j) >> 4] + group_base(d->layer_name[j]);
    }
    g->zl[255] = 0.0f;

    /* 7.3 高さの文字 → 点 */
    for (ln = 0; ln < d->n_texts;) {
        const JwcText *t = &d->texts[ln];
        double h1 = 0.0, h2 = -9.0, z1;
        float zf;
        int n, ly;

        if (t->size >= 0x5a || !(t->rest[2] & 0x80) || !readable(d, t->layer)) {
            ln++;
            continue;
        }
        ly = t->layer;
        n = sscanf(t->text, " %lf,%lf ", &h1, &h2);
        if (n <= 0) {
            jwc_remove_text(d, ln);
            continue;
        }
        z1 = (((double)g->zl[ly] + fabs(h1)) - H0)
             / (double)(float)(d->denom * b4a2) * 1000.0;
        zf = (float)z1;
        if (zf < 0.0f) {
            zf = 0.0f;
        }
        np++;
        PX[np] = t->x0;
        PY[np] = t->y0;
        PH[np] = zf;
        LAY[np] = (unsigned char)ly;
        PH2[np] = 0.0f;
        if (n == 2) {
            const double w = ((double)g->zl[ly] - H0) + h2;

            if (w > 0.0) {
                PH2[np] = (float)((w / (double)(float)(d->denom * b4a2)) * 1000.0);
            }
        }
        GRP[np] = (int16_t)(ln + 1);
        if (h1 > 0.0) {
            SIDEF[np] = 1;
        } else {
            PH2[np] = zf;
            SIDEF[np] = (int16_t)(h1 >= 0.0 ? 0 : -1);
        }
        ln++;
    }

    /* 7.4 線 → 辺 */
    ne = 0;
    cnt = 0;
    np0 = np;
    if (wl_on) {
        frame_set(wl_rec.x0, wl_rec.y0, wl_rec.x1, wl_rec.y1);
    }
    for (li = 0; li < d->n_lines; li++) {
        const JwcLine *L = &d->lines[li];
        int a = 0, b = 0;

        if (L->pen >= 0x5a || (L->rest[2] & 0xC0)) {
            continue;
        }
        for (k = 1; k <= np; k++) {
            if (LAY[k] != L->layer) {
                continue;
            }
            if (fabs((double)(L->y0 - PY[k])) + fabs((double)(L->x0 - PX[k])) < 0.01) {
                a = k;
                if (GRP[k] > 0) {
                    GRP[k] = 0;
                }
            }
            if (fabs((double)(L->y1 - PY[k])) + fabs((double)(L->x1 - PX[k])) < 0.01) {
                b = k;
                if (GRP[k] > 0) {
                    GRP[k] = 0;
                }
            }
        }
        if (a == 0 && b == 0) {
            continue;
        }
        if (wl_on && a > 0 && b > 0) {
            int ia = a, ib = b;
            const int rr = wall_clip(&ia, &ib, &np0);

            a = ia;
            b = ib;
            if (rr >= 10) {
                return fail(HK_E_THRU);
            }
            if (rr > 0) {
                continue;
            }
        }
        if (a > 0 && b > 0 && a != b) {
            ne++;
            EA[ne] = (int16_t)a;
            EB[ne] = (int16_t)b;
            continue;
        }
        cnt++;
        sprintf(errbuf, HK_E_UNSET, cnt);
        {
            float dx = a == 0 ? L->x0 : L->x1, dy = a == 0 ? L->y0 : L->y1;
            int found = 0;

            for (j = 0; j < d->n_texts; j++) {
                const JwcText *T = &d->texts[j];

                if (T->size >= 0x5a || !(T->rest[2] & 0x80) || T->layer != L->layer) {
                    continue;
                }
                if (fabs((double)(T->y0 - dy)) + fabs((double)(T->x0 - dx)) < 0.01) {
                    found = 1;
                    break;
                }
            }
            if (found) {
                continue;
            }
            /* 目印の文字を図面に書き込む（size 9、高さの文字扱い）。本物は 失敗したあとの次回 7.3 で消える。 */
            if (a == 0) {
                frame_set(L->x0, L->y0, L->x1, L->y1);
            } else {
                frame_set(L->x1, L->y1, L->x0, L->y0);
            }
            {
                const double w = jwc_ed_text_length(d, HK_T_UNSET, 9, 0);

                if (jwc_add_text(d, fr_ox, fr_oy, fr_X(w, 0.0), fr_Y(w, 0.0), HK_T_UNSET, 9,
                                 (unsigned char)d->write_layer)) {
                    d->texts[d->n_texts - 1].rest[2] |= 0x80;
                    d->texts[d->n_texts - 1].layer = L->layer;
                    d->texts[d->n_texts - 1].rest[1] = L->layer;
                }
            }
            dirty = 1;
        }
    }
    if (cnt > 0) {
        return -1;
    }
    (void)lab;

    /* 7.5 壁面で切った点の後始末 */
    wl_flag_11d5 = 0;
    if (wl_on && np < np0) {
        int ncomp = 0, found = 0, changed = 0, first = 1, e, c1;

        for (i = 1; i <= np0; i++) {
            lab[i] = 0;
        }
        for (;;) {
            for (e = first; e <= ne; e++) {
                const int a = EA[e], b = EB[e];

                if (!found && lab[a] == 0) {
                    found = 1;
                    ncomp++;
                    lab[a] = (int16_t)ncomp;
                    first = e;
                }
                if ((lab[a] != 0 && lab[b] == 0) || (lab[a] == 0 && lab[b] != 0)) {
                    changed = 1;
                    lab[a] = lab[b] = (int16_t)ncomp;
                }
            }
            if (changed) {
                changed = 0;
                continue;
            }
            if (found) {
                found = 0;
                continue;
            }
            break;
        }
        for (c1 = 1; c1 <= ncomp; c1++) {
            float lo = 9999.0f, hi = -9999.0f;
            int pa = 0, pb = 0;

            for (;;) {
                float best = 9999.0f;

                pb = 0;
                for (j = np + 1; j <= np0; j++) {
                    if (lab[j] == c1 && GRP[j] == -1) {
                        const float u = fr_u((double)PX[j], (double)PY[j]);

                        if (u < best) {
                            best = u;
                            pb = j;
                        }
                    }
                }
                if (pb > 0) {
                    if (best < lo) {
                        lo = best;
                    }
                    if (best > hi) {
                        hi = best;
                    }
                    GRP[pb] = 0;
                    if (pa > 0 && (PX[pa] != PX[pb] || PY[pa] != PY[pb])) {
                        ne++;
                        EA[ne] = (int16_t)pa;
                        EB[ne] = (int16_t)pb;
                    }
                    pa = pb;
                    continue;
                }
                if (lo < -0.01f && (double)hi > (double)fr_len + 0.01) {
                    return fail(HK_E_DIV);
                }
                if (fabs((double)lo) < 0.1 || fabs((double)lo - (double)fr_len) < 0.1
                    || fabs((double)hi) < 0.1 || fabs((double)hi - (double)fr_len) < 0.1) {
                    wl_flag_11d5 = 1;
                }
                break;
            }
        }
        np = np0;
    }
    /* 7.6 使われなかった高さの文字を消す */
    cnt = 0;
    for (i = np; i >= 1; i--) {
        if (GRP[i] > 0) {
            dirty = 1;
            jwc_remove_text(d, GRP[i] - 1);
            cnt++;
        }
    }
    if (cnt > 0) {
        char tmp[100];

        sprintf(tmp, HK_E_DEL1, cnt);
        sprintf(errbuf, "%s", tmp);
        return -1;
    }
    if (dirty) {
        return -1;
    }

    /* 7.7 点の複製・北向きの座標・外形 */
    if (2 * ne + np > 1000 || 2 * np > 600) {
        return fail(HK_E_MANY);
    }
    {
        const int np1 = np, ne1 = ne;

        for (i = 1; i <= np1; i++) {
            np++;
            PX[np] = PX[i];
            PY[np] = PY[i];
            LAY[np] = LAY[i];
            if (SIDEF[i] <= 0) {
                PH[np] = PH[i];
                SIDEF[np] = -1;
                continue;
            }
            PH[np] = PH2[i];
            SIDEF[np] = 1;
            if (wl_on && GRP[i] == -2) {
                continue;
            }
            ne++;
            EA[ne] = (int16_t)i;
            EB[ne] = (int16_t)np;
        }
        for (i = 1; i <= ne1; i++) {
            const int a2 = EA[i] + np1, b2 = EB[i] + np1;

            if (SIDEF[a2] < 0) {
                continue;
            }
            if (SIDEF[b2] >= 0) {
                ne++;
                EA[ne] = (int16_t)a2;
                EB[ne] = (int16_t)b2;
            }
        }
    }
    frame_set(0.0, 0.0, 100.0, 0.0);
    for (i = 0; i < d->n_texts; i++) {
        const JwcText *T = &d->texts[i];
        double ang = 0.0;

        if (T->size >= 0x5a || !(T->rest[2] & 0x40)) {
            continue;
        }
        sscanf(T->text, " %lf ", &ang);
        ang *= 0.017453292519943295;
        {
            const float c100 = (float)(cos(ang) * 100.0);
            const double s100 = sin(ang) * 100.0;   /* 測定：sin 側は float に丸めず double のまま渡る */

            frame_set(0.0, 0.0, (double)c100, s100);
        }
        break;
    }
    /* 原点を、北向きの座標系で v が最小の点（いちばん南）に置く（ovl33 0x2d206〜0x2d2dd。
     * [0xb30c]・[0xb37e] へ直に書く。spec-opt5-data.md 7.7 (C) に抜けていた）。 */
    {
        float vmin0 = 9.0e10f;
        int idx = 1;

        for (i = 1; i <= np; i++) {
            const float v = fr_v(PX[i], PY[i]);

            if (v < vmin0) {
                vmin0 = v;
                idx = i;
            }
        }
        fr_ox = PX[idx];
        fr_oy = PY[idx];
    }
    for (i = 1; i <= np; i++) {
        const float u = fr_u(PX[i], PY[i]), v = fr_v(PX[i], PY[i]);

        PX[i] = u;
        PY[i] = v;
        if (u > umax) {
            umax = u;
        }
        if (u < umin) {
            umin = u;
        }
        if (v > vmax) {
            vmax = v;
        }
        if (v < vmin) {
            vmin = v;
        }
        if (PH[i] > zmax) {
            zmax = PH[i];
        }
    }
    /* (D) 壁面線のスロット（604〜609）と、壁面自身の日影の時間帯の文字 */
    wl_out[0] = 0;
    if (wl_on) {
        float len;
        const int16_t T = c->time915 ? 10800 : 14400;
        int rA, rB, m1 = 20000, m2 = 20000;
        int16_t t;
        char buf[80], head[40];

        PX[604] = fr_u((double)wl_rec.x0, (double)wl_rec.y0);
        PY[604] = fr_v((double)wl_rec.x0, (double)wl_rec.y0);
        PX[605] = fr_u((double)wl_rec.x1, (double)wl_rec.y1);
        PY[605] = fr_v((double)wl_rec.x1, (double)wl_rec.y1);
        PX[606] = (float)(PX[605] - PX[604]);
        PY[606] = (float)(PY[605] - PY[604]);
        len = (float)sqrt((double)(float)((float)(PY[606] * PY[606]) + (float)(PX[606] * PX[606])));
        PX[607] = (float)(PX[606] / len);
        PY[607] = (float)(PY[606] / len);
        PX[608] = (float)((float)(PY[607] * -100.0f) + PX[604]);
        PY[608] = (float)((float)(PX[607] * 100.0f) + PY[604]);
        PX[609] = (float)((float)((float)(PX[607] * len) - (float)(PY[607] * 100.0f)) + PX[604]);
        PY[609] = (float)((float)((float)(PX[607] * 100.0f) + (float)(PY[607] * len)) + PY[604]);
        rA = wall_sun((int16_t)-T, c);
        rB = wall_sun(T, c);
        if (rA > 0) {
            m1 = 20000;
        } else {
            for (t = (int16_t)-T; t <= T; t = (int16_t)(t + 60)) {
                if (wall_sun(t, c) > 0) {
                    break;
                }
                m1 = t / 60;
            }
            if (T / 60 <= m1) {
                rB = 20000;
            }
        }
        if (rB > 0) {
            m2 = 20000;
        } else {
            for (t = T; t >= -T; t = (int16_t)(t - 60)) {
                if (wall_sun(t, c) > 0) {
                    break;
                }
                m2 = t / 60;
            }
        }
        strcpy(head, HK_WLB);
        strcat(head, HK_WJIS);
        strcat(head, HK_WNICH);
        wl_out[0] = 0;
        if (m1 < 20000) {
            const int hh = (m1 + 720) / 60, mm = (m1 + 720) % 60;

            strcpy(wl_out, head);
            sprintf(buf, "(%2d:%2d)\x81\x60(%2d:%2d)", c->time915 ? 9 : 8, 0, hh, mm);
            strcat(wl_out, buf);
        }
        if (m2 < 20000) {
            const int hh = (m2 + 720) / 60, mm = (m2 + 720) % 60;

            if (wl_out[0] == 0) {
                strcpy(wl_out, head);
            }
            sprintf(buf, "(%2d:%2d)\x81\x60(%2d:%2d)", hh, mm, c->time915 ? 15 : 16, 0);
            strcat(wl_out, " ");
            strcat(wl_out, buf);
        }
        if (wl_out[0]) {
            strcat(wl_out, HK_WX1);
        }
    }
    /* (E) 倍率 */
    {
        const float dv = (float)(vmax - vmin), du = (float)(umax - umin);
        const double d2 = (double)(dv * dv + du * du);
        const int16_t T2 = c->time915 ? 10800 : 14400;
        Sun sc;
        float sx, sy;
        double Lend, r, A;
        float s = 100.0f;
        double S, Cc;
        const double w = (double)T2 * 7.272205e-05;
        const double Ls = (double)c->lat * 0.0174533;

        (void)sx;
        (void)sy;
        (void)sc;
        (void)Ls;
        /* sun(T2) の L＝cos(h)/sin(h)（calc-a/data §3：影の長さ比） */
        {
            const double phi = c->lat * 0.017453292519943295;
            const double delta = c->decl * 0.017453292519943295;
            const double sp = sin(phi), cp = cos(phi), sd = sin(delta), cd = cos(delta);
            const double ww = (double)T2 * 7.272205e-05;

            (void)w;
            S = ((cos(ww) * cd) * cp) + (sd * sp);
            Cc = sqrt(1.0 - S * S);
            Lend = 1.0 / (S / Cc);
        }
        if (d2 < 0.01 || !(Lend >= 0.01)) {
            return fail(HK_E_BAD);
        }
        r = sqrt(d2) * 1.4;
        A = ((double)zmax * Lend + r) * 1.4;
        while ((s * A) * (s * r) > 2.0e9) {
            s = s - 5.0f;
            if (s < 5.0f) {
                break;
            }
        }
        if (s < 5.0f) {
            return fail(HK_E_RANGE);
        }
        g->scale = s;
    }
    /* (F) 建物の番号 */
    {
        int nblk = 0, found = 0, changed = 0, first = 1, e;

        for (i = 1; i <= np; i++) {
            GRP[i] = 0;
        }
        for (;;) {
            for (e = first; e <= ne; e++) {
                const int a = EA[e], b = EB[e];

                if (!found && GRP[a] == 0) {
                    found = 1;
                    nblk++;
                    GRP[a] = (int16_t)nblk;
                    first = e;
                }
                if ((GRP[a] != 0 && GRP[b] == 0) || (GRP[a] == 0 && GRP[b] != 0)) {
                    changed = 1;
                    GRP[a] = GRP[b] = (int16_t)nblk;
                }
            }
            if (changed) {
                changed = 0;
                continue;
            }
            if (found) {
                found = 0;
                continue;
            }
            break;
        }
        if (nblk <= 0) {
            return fail(HK_E_NODATA);
        }
        g->nblk = nblk;
    }
    for (i = 1; i <= np; i++) {
        PX[i] = g->scale * PX[i];
        PY[i] = g->scale * PY[i];
        PH[i] = g->scale * PH[i];
    }
    g->np = np;
    g->ne = ne;
    return g->nblk;
}

/* ------------------------------------------------------------ 整数の部品 */
static int32_t lmul(int32_t a, int32_t b)
{
    return (int32_t)((uint32_t)a * (uint32_t)b);
}

static int32_t sub32(int32_t a, int32_t b)
{
    return (int32_t)((uint32_t)a - (uint32_t)b);
}

static int32_t add32(int32_t a, int32_t b)
{
    return (int32_t)((uint32_t)a + (uint32_t)b);
}

/* 2abc6：k は i→j の左なら正。 */
static int32_t orient(int i, int j, int k)
{
    const int32_t r1 = lmul(sub32(SX[j], SX[i]), sub32(SY[k], SY[i]));
    const int32_t r2 = lmul(sub32(SY[j], SY[i]), sub32(SX[k], SX[i]));

    return sub32(r1, r2);
}

static void sort_groups(int D, int n)
{
    int32_t tmp[128];
    int j, k, a;

    for (j = 1; j <= D; j++) {
        tmp[j] = 2000000000;
    }
    for (k = 1; k <= n; k++) {
        j = GRP[k];
        if (j <= 0) {
            continue;
        }
        if (SY[k] < tmp[j]) {
            tmp[j] = SY[k];
            START[j] = (int16_t)k;
        }
    }
    for (a = 1; a <= D; a++) {
        int32_t best = 1000000000;
        int idx = 1;

        for (j = 1; j <= D; j++) {
            if (tmp[j] < best) {
                best = tmp[j];
                idx = j;
            }
        }
        ORDER[a] = (int16_t)idx;
        tmp[idx] = 2000000000;
    }
}

static int better(int Acur, int Bcur, int p1)
{
    return orient(Acur, Bcur, p1) > 0;
}

/* 2c069：開始点 K に重なる辺のうち、番兵方向に対して最も左のもの。 */
static void first_edge(int s, int K, int *pA, int *pB, int *pE, int *pst, int n, int m)
{
    static unsigned char coin[NP_MAX];
    int e, i;
    const int32_t xK = SX[K], yK = SY[K];

    *pA = K;
    *pB = s;
    *pE = m + 1;
    *pst = -1;
    for (i = 1; i <= n; i++) {
        coin[i] = (SX[i] == xK && SY[i] == yK);
    }
    for (e = 1; e <= m; e++) {
        int p0 = EA[e], p1 = EB[e];
        int32_t cr;
        int take = 0;

        if (!coin[p0] && !coin[p1]) {
            continue;
        }
        if (coin[p0] && coin[p1]) {
            continue;
        }
        if (coin[p1]) {
            p0 = EB[e];
            p1 = EA[e];
        }
        cr = orient(s, K, p1);
        if (*pst < 0) {
            if (cr < 0) {
                take = better(*pA, *pB, p1);
            } else if (cr > 0) {
                *pst = 1;
                take = 1;
            } else {
                *pst = 0;
                take = 1;
            }
        } else if (*pst == 0) {
            if (cr > 0) {
                *pst = 1;
                take = 1;
            }
        } else {
            if (cr > 0) {
                take = better(*pA, *pB, p1);
            }
        }
        if (take) {
            *pA = p0;
            *pB = p1;
            *pE = e;
        }
    }
    *pst = -1;
}

static int32_t labs32(int32_t v)
{
    return v < 0 ? (int32_t)(0u - (uint32_t)v) : v;
}

/* 2d1a9：次の辺と交点（点 603 に置く）。calc-a 7.2 の写し。 */
static void next_edge(int P2, int Q2, int st2, int A, int B, int E, int st,
                      int *pA, int *pB, int *pE, int *pst, int S, int M1)
{
    double tmin = 0.0;
    int e, a, b, k;
    int32_t dxe, dye, K0;

    (void)st2;
    *pA = B;
    *pB = A;
    *pE = E;
    *pst = -1;
    if (st < 0) {
        for (e = 1; e <= M1; e++) {
            VIS[e] = 0;
        }
    }
    dxe = sub32(SX[B], SX[A]);
    dye = sub32(SY[B], SY[A]);
    K0 = sub32(lmul(dye, SX[A]), lmul(dxe, SY[A]));
    for (k = 1; k <= S; k++) {
        SIDE[k] = add32(sub32(lmul(SY[k], dxe), lmul(SX[k], dye)), K0);
    }
    for (e = 1; e <= M1; e++) {
        int32_t fa, fb, c1, c2;

        a = EA[e];
        b = EB[e];
        fa = SIDE[a];
        fb = SIDE[b];
        if (fa < 0) {
            if (fb < 0) {
                continue;
            }
            if (fb > 0) {
                goto L3da;
            }
            goto L30e;
        }
        if (fa == 0) {
            goto L30e;
        }
        if (fb > 0) {
            continue;
        }
        if (fb < 0) {
            goto L3da;
        }
        goto L30e;

    L3da:
        c1 = orient(a, b, A);
        if (c1 < 0) {
            c2 = orient(a, b, B);
            if (c2 < 0) {
                continue;
            }
            if (c2 > 0) {
                goto L430;
            }
            goto L483;
        }
        if (c1 > 0) {
            c2 = orient(a, b, B);
            if (c2 > 0) {
                continue;
            }
            if (c2 < 0) {
                goto L430;
            }
            goto L483;
        }
        goto L483;
    L483:
        if (orient(a, b, A) != 0) {
            goto L430;
        }
        continue;
    L30e:
        c1 = orient(a, b, A);
        if (c1 < 0) {
            c2 = orient(a, b, B);
            if (c2 < 0) {
                continue;
            }
            if (c2 > 0) {
                goto L4d8;
            }
            goto L51c;
        }
        if (c1 > 0) {
            c2 = orient(a, b, B);
            if (c2 > 0) {
                continue;
            }
            if (c2 < 0) {
                goto L4d8;
            }
            goto L51c;
        }
        goto L51c;
    L4d8:
        if (VIS[e]) {
            continue;
        }
        if (SIDE[b] == 0) {
            int t = a;

            a = b;
            b = t;
        }
        if (SIDE[b] < 0) {
            continue;
        }
        goto L46c;
    L430:
        if (VIS[e]) {
            continue;
        }
        if (SIDE[a] > 0) {
            int t = a;

            a = b;
            b = t;
        }
        goto L46c;
    L51c:
        if (SIDE[a] != 0 || SIDE[b] != 0) {
            if (VIS[e]) {
                continue;
            }
            if (orient(a, b, A) == 0) {
                continue;
            }
            if (SIDE[b] == 0) {
                int t = a;

                a = b;
                b = t;
            }
            if (SIDE[b] > 0) {
                goto L46c;
            }
            if (*pst >= 0) {
                continue;
            }
            if (orient(*pA, *pB, b) > 0) {
                goto L9b3;
            }
            continue;
        }
        /* 辺 ab 全体が線 AB の上 */
        if (E == e) {
            continue;
        }
        if (e != M1) {
            VIS[e] = 1;
        }
        if (*pst >= 0) {
            continue;
        }
        {
            const int32_t absdx = labs32(dxe), absdy = labs32(dye);
            int32_t u, v;
            int neg;

            if (absdy < absdx) {
                u = sub32(SX[a], SX[B]);
                v = sub32(SX[b], SX[B]);
                neg = dxe < 0;
            } else {
                u = sub32(SY[a], SY[B]);
                v = sub32(SY[b], SY[B]);
                neg = dye < 0;
            }
            if (neg) {
                u = (int32_t)(0u - (uint32_t)u);
                v = (int32_t)(0u - (uint32_t)v);
            }
            if (u <= 0 && v <= 0) {
                continue;
            }
            if (u > 0 && v > 0) {
                continue;
            }
            if (u > 0) {
                int t = a;

                a = b;
                b = t;
            }
            *pst = 0;
            a = B;
            goto L9b3;
        }

    L46c:
        if (st > 0) {
            goto L7ac;
        }
    L475:
        if (*pst > 0) {
            goto L84b;
        }
        goto L948;

    L7ac:
        if (orient(P2, Q2, b) <= 0) {
            goto L803;
        }
        if (orient(a, b, P2) > 0) {
            goto L475;
        }
        {
            const int32_t cc = orient(a, b, Q2);

            if (cc > 0) {
                goto L475;
            }
        }
    L803:
        if (orient(a, b, P2) <= 0) {
            goto L83d;
        }
        {
            const int32_t cc = orient(a, b, Q2);

            if (cc > 0) {
                goto L475;
            }
        }
    L83d:
        VIS[e] = 1;
        continue;

    L84b:
        {
            const int Ao = *pA, Bo = *pB;
            const int32_t cx = orient(a, b, Ao);
            const int32_t cy = orient(a, b, Bo);
            const double cd = (double)cx, c2d = (double)cy;
            const int32_t diff = sub32(cy, cx);
            const double tau = cd / (cd - c2d);

            if (diff < 0) {
                if (tau <= tmin) {
                    goto L948;
                }
                continue;
            } else if (diff == 0) {
                if (0.0 > cd) {
                    goto L948;
                }
                continue;
            } else {
                if (tau > tmin) {
                    goto L948;
                }
                continue;
            }
        }
    L948:
        {
            const double sa = (double)SIDE[a], sb = (double)SIDE[b];

            tmin = sa / (sa - sb);
            *pst = 1;
        }
    L9b3:
        *pA = a;
        *pB = b;
        *pE = e;
        continue;
    }
    VIS[*pE] = 1;
    {
        const int32_t dx = sub32(SX[*pB], SX[*pA]);
        const int32_t dy = sub32(SY[*pB], SY[*pA]);

        SX[603] = (int32_t)(double)trunc((double)SX[*pA] + (double)dx * tmin);
        SY[603] = (int32_t)(double)trunc((double)SY[*pA] + (double)dy * tmin);
    }
}

/* ----------------------------------------------------------- 線と文字の足し */
static Jwc *cur_d;
static const HkCond *cur_c;
static float cur_hour;
static int label_no;                    /* [0xbe9e]：何本目の線に時刻の文字を付けるか */
static unsigned char cur_layer;

static void put_label(double hour, float lx1, float ly1, float lx2, float ly2)
{
    Jwc *d = cur_d;
    char buf[40];
    float width, dx, dy, ux, uy, a, b, x0, y0, w2, x1, y1;
    double len;
    const float b4a2 = paper_b4a2(d);

    sprintf(buf, "%.1f", floor(hour * 10.0 + 0.5) / 10.0);   /* 測定：四捨五入（10.25 が 10.3） */
    width = (float)jwc_ed_text_length(d, buf, 3, 0);
    dx = lx2 - lx1;
    dy = ly2 - ly1;
    len = sqrt((double)(float)((float)(dy * dy) + (float)(dx * dx)));   /* 測定：float どうしの積・和は 1 つずつ float に丸まる */
    ux = (float)((double)dx / len);
    uy = (float)((double)dy / len);
    a = (float)((len - (double)width) * 0.5);
    b = (float)(0.5 / (double)b4a2);
    w2 = (float)jwc_ed_text_length(d, buf, 3, 0);
    {
        const float wa = (float)(w2 + a);

        /* 測定：float どうしの演算は 1 つずつ float に丸まる（lab.py で 104 値が全部一致） */
        x0 = (float)((float)((float)(a * ux) - (float)(b * uy)) + lx1);
        y0 = (float)((float)((float)(a * uy) + (float)(b * ux)) + ly1);
        x1 = (float)((float)((float)(wa * ux) - (float)(b * uy)) + lx1);
        y1 = (float)((float)((float)(wa * uy) + (float)(b * ux)) + ly1);
    }
    jwc_add_text(d, x0, y0, x1, y1, buf, 3, cur_layer);
}

/* 0x2c248：影の点を壁面の面（壁面線の左）へ折り返す。点 (x,y)、影のずれ (Xs,Ys)。戻りは 0（1 は範囲外など）。
 * *dist は壁面線とのへだたり（線の長さを掛けた符号つきの値）。dist > 1.0 のときだけ (*xo,*yo) を作り直す。 */
static float clip_dx = 0.5f, clip_dy = 0.5f;    /* [0x7582]・[0x7586]：②では 0.5、③では格子の幅 */

static int wall_proj(float x, float y, float Xs, float Ys, float *xo, float *yo, float *dist)
{
    JwcLine W, seg;
    float xi, yi, t, u, x1, y1;
    double dd;

    *xo = x;
    *yo = y;
    dd = (double)(float)((float)((float)(y - PY[604]) * PX[606]) - (float)((float)(x - PX[604]) * PY[606]));
    *dist = (float)dd;
    if (!(dd > 1.0)) {
        return 0;
    }
    x1 = (float)((float)(Xs * -100.0f) + x);
    y1 = (float)((float)(Ys * -100.0f) + y);
    memset(&W, 0, sizeof W);
    W.x0 = PX[604];
    W.y0 = PY[604];
    W.x1 = PX[605];
    W.y1 = PY[605];
    memset(&seg, 0, sizeof seg);
    seg.x0 = x;
    seg.y0 = y;
    seg.x1 = x1;
    seg.y1 = y1;
    if (!isect(&W, &seg, &xi, &yi)) {
        return 1;
    }
    if (2000.0f < xi || -2000.0f > xi || 2000.0f < yi || !(-1000.0f <= yi)) {
        return 1;
    }
    if (fabsf(Ys) >= fabsf(Xs)) {
        t = (float)(fabsf((float)(y - yi)) / fabsf(Ys));
    } else {
        t = (float)((float)fabsf((float)(x - xi)) / fabsf(Xs));
    }
    u = (float)((float)((float)(yi - PY[604]) * PY[607]) + (float)((float)(xi - PX[604]) * PX[607]));
    *xo = (float)((float)((float)(u * PX[607]) - (float)(PY[607] * t)) + PX[604]);
    *yo = (float)((float)((float)(PY[607] * u) + (float)(PX[607] * t)) + PY[604]);
    return 0;
}

/* 0x2daab：線 (x0,y0)-(x1,y1) を、(ax,ay)→(bx,by) の線で切る。戻り 1＝描く、0＝捨てる。 */
static int wall_clip_line(int mode, float ax, float ay, float bx, float by, double *x0, double *y0, double *x1, double *y1)
{
    float thr = 100.0f;
    const double dxl = (double)(float)(bx - ax), dyl = (double)(float)(by - ay);
    float c0, c1, t, xc, yc;

    if (wl_flag_11d5 && mode > 0) {
        thr = (float)(200.0f * (clip_dy >= clip_dx ? clip_dy : clip_dx));
    }
    c0 = (float)((*y0 - (double)ay) * dxl - (*x0 - (double)ax) * dyl);
    c1 = (float)((*y1 - (double)ay) * dxl - (*x1 - (double)ax) * dyl);
    if (!(thr < c0) && !(thr < c1)) {
        return 0;
    }
    if (thr < c0 && thr < c1) {
        return 1;
    }
    t = (float)((double)c0 / (double)(float)(c0 - c1));
    if ((double)t < 0.0 || (double)t > 1.0) {
        return 1;
    }
    xc = (float)((*x1 - *x0) * (double)t + *x0);
    yc = (float)((*y1 - *y0) * (double)t + *y0);
    if (thr < c0) {
        *x1 = (double)xc;
        *y1 = (double)yc;
    } else {
        *x0 = (double)xc;
        *y0 = (double)yc;
    }
    if (*x0 == *x1 && *y0 == *y1) {
        return 0;
    }
    return 1;
}

/* 2dddf：線を 1 本足す。戻り 1＝足した、0＝足さない。座標は真北の座標系 (u,v)。 */
static int emit_line(int w, int *conn, double x0, double y0, double x1, double y1)
{
    Jwc *d = cur_d;
    JwcLine rec;
    float xa, ya, xb, yb;

    if (w == 0) {
        return 0;
    }
    if (x0 == x1 && y0 == y1) {
        return 0;
    }
    if (wl_on) {
        if (!wall_clip_line(0, PX[604], PY[604], PX[605], PY[605], &x0, &y0, &x1, &y1)) {
            return 0;
        }
        if (!wall_clip_line(1, PX[608], PY[608], PX[604], PY[604], &x0, &y0, &x1, &y1)) {
            return 0;
        }
        if (!wall_clip_line(1, PX[605], PY[605], PX[609], PY[609], &x0, &y0, &x1, &y1)) {
            return 0;
        }
    }
    xa = fr_X(x0, y0);
    ya = fr_Y(x0, y0);
    xb = fr_X(x1, y1);
    yb = fr_Y(x1, y1);
    memset(&rec, 0, sizeof rec);
    rec.x0 = xa;
    rec.y0 = ya;
    rec.x1 = xb;
    rec.y1 = yb;
    rec.type = (unsigned char)w;
    rec.pen = (unsigned char)d->pen;
    rec.layer = cur_layer;
    rec.rest[1] = 0x32;                 /* 測定のみ：本物は初期化しない 3 バイト。保存で 0x32 */
    jwc_put_line(d, &rec);
    d->lines[d->n_lines - 1].rest[2] |= 0x80;
    if (wl_on) {
        d->lines[d->n_lines - 1].rest[3] &= (unsigned char)~0x40u;
    } else {
        d->lines[d->n_lines - 1].rest[3] |= 0x40;
    }
    (*conn)++;
    if (*conn == label_no) {
        put_label((double)cur_hour, xa, ya, xb, yb);
    }
    return 1;
}

/* 2cafe〜：他の建物の開始点に印を付ける。 */
static void mark_other_groups(int r, int D, int Aprev, int Bcur, int ip, int ic)
{
    int j;
    const int g0 = GRP[Aprev];

    START[g0] = 0;
    for (j = r + 1; j <= D; j++) {
        const int gj = ORDER[j];
        int p;

        if (START[gj] == 0) {
            continue;
        }
        p = START[gj] < 0 ? -START[gj] : START[gj];
        if (SIDE[p] == 0) {
            const int32_t dxB = sub32(SX[Bcur], SX[Aprev]);
            const int32_t dyB = sub32(SY[Bcur], SY[Aprev]);
            const int32_t ax = labs32(dxB), ay = labs32(dyB);
            const int32_t *V;
            int32_t dd, vpv, vA, vB;
            int in;

            if (dxB == 0 && dyB == 0) {
                continue;
            }
            if (ay < ax) {
                V = SX;
                dd = dxB;
            } else {
                V = SY;
                dd = dyB;
            }
            vpv = V[p];
            vA = V[Aprev];
            vB = V[Bcur];
            if (dd <= 0) {
                in = (vB <= vpv && vpv <= vA);
            } else {
                in = (vA <= vpv && vpv <= vB);
            }
            if (in) {
                START[gj] = 0;
            }
        } else {
            const int32_t yp = SY[p], y602 = SY[ip], y603 = SY[ic];

            if (!(y602 < yp || y603 < yp)) {
                continue;
            }
            if (!(y602 >= yp || y603 >= yp)) {
                continue;
            }
            if (!(y603 > y602)) {
                if (SIDE[p] > 0) {
                    START[gj] = (int16_t)-START[gj];
                }
            } else {
                if (SIDE[p] <= 0) {
                    START[gj] = (int16_t)-START[gj];
                }
            }
        }
    }
}

static int raster_add(float x1, float y1, float x2, float y2);
static void IG_inc(int i);

/* ④指定点：影の外周の辺ごとに、各点の巻き数を足す（2e4d4、calc-b 4.2）。 */
static float WPU[64], WPV[64];
static int WCNT[64], w_n;

static void pt_winding(float x1, float y1, float x2, float y2)
{
    int k;

    if (y2 == y1) {
        return;
    }
    for (k = 1; k <= w_n; k++) {
        const float px = WPU[k], py = WPV[k];
        float cr;

        if (y2 < y1) {
            if (!(py >= y2 && py < y1)) {
                continue;
            }
        } else {
            if (!(py >= y1 && py < y2)) {
                continue;
            }
        }
        cr = (float)(((double)py - y1) * ((double)x2 - x1) - ((double)px - x1) * ((double)y2 - y1));
        if (y2 < y1) {
            if (cr > 0.0f) {
                WCNT[k]++;
            }
        } else {
            if (cr < 0.0f) {
                WCNT[k]--;
            }
        }
    }
}

/* 2c53d：影の外周を作って線にする（②：w>0、壁面なし）。1＝完了、−2＝線が多すぎる。 */
static int shadow_main(int w, double X, double Y, int m, int n, int D, double C)
{
    const float sc = (float)(1.0 / C);
    const int ip = 602, ic = 603;
    int i, r, s, seg = 0, conn = 0;
    const float sxf = (float)X, syf = (float)Y;
    float wdist = 0.0f, wxs = 0.0f, wys = 0.0f;

    if (wl_on) {
        /* 壁面：影が壁面に当たらない向きなら、何も描かずに戻る（02c581〜）。 */
        if (!(X == 0.0 && Y == 0.0)) {
            const float ys = (float)(Y * 100.0);
            const float d1 = (float)((double)(float)(PX[607] * ys) - (double)(float)((X * 100.0) * (double)PY[607]));

            if (!((double)d1 > 0.001)) {
                if (w < 0) {
                    for (i = 1; i <= w_n; i++) {
                        WCNT[i] = 0x2af8;
                    }
                }
                if (w == 0) {
                    for (i = 1; i <= 0x7918; i++) {
                        IG_inc(i);
                    }
                }
                return 1;
            }
        }
    }

    for (i = 1; i <= n; i++) {
        int32_t L = 0;
        const float h = PH[i];

        if (h > 0.0) {
            L = (int32_t)trunc((double)h);
        }
        SX[i] = (int32_t)trunc((double)PX[i] + (double)L * X);
        SY[i] = (int32_t)trunc((double)PY[i] + (double)L * Y);
    }
    sort_groups(D, n);
    {
        const int k0 = START[ORDER[1]];

        s = n + 1;
        SX[s] = SX[k0];
        SY[s] = SY[k0] - 100;
        EA[m + 1] = (int16_t)s;
    }
    for (r = 1; r <= D; r++) {
        const int g = ORDER[r];
        int K, Bcur, st_, Aprev, A, B, E, stv;
        float x0f, y0f, x1f, y1f;

        if (START[g] <= 0) {
            continue;
        }
        K = START[g];
        EB[m + 1] = (int16_t)K;
        Bcur = K;
        st_ = 1;
        Aprev = s;
        first_edge(s, K, &A, &B, &E, &stv, n, m);
        if (Aprev == B) {
            continue;
        }
        SX[ic] = SX[K];
        SY[ic] = SY[K];
        x1f = (float)((double)SX[ic] * (double)sc);
        y1f = (float)((double)SY[ic] * (double)sc);
        wxs = x1f;
        wys = y1f;
        if (wl_on) {
            wall_proj(x1f, y1f, sxf, syf, &wxs, &wys, &wdist);
        }
        for (;;) {
            int P2, Q2, st2;

            if (seg >= 400) {
                return -2;
            }
            seg++;
            SX[ip] = SX[ic];
            SY[ip] = SY[ic];
            x0f = x1f;
            y0f = y1f;
            P2 = Aprev;
            Q2 = Bcur;
            st2 = st_;
            Aprev = A;
            Bcur = B;
            st_ = stv;
            next_edge(P2, Q2, st2, A, B, E, stv, &A, &B, &E, &stv, s, m + 1);
            x1f = (float)((double)SX[ic] * (double)sc);
            y1f = (float)((double)SY[ic] * (double)sc);
            {
                float sx0 = x0f, sy0 = y0f, sx1 = x1f, sy1 = y1f, nx = x1f, ny = y1f;
                int clipped = 0;

                if (wl_on) {
                    const float pd = wdist;

                    sx0 = wxs;
                    sy0 = wys;
                    wall_proj(x1f, y1f, sxf, syf, &nx, &ny, &wdist);
                    sx1 = nx;
                    sy1 = ny;
                    if ((pd > 1.0f && wdist < -1.0f) || (pd < -1.0f && wdist > 1.0f)) {
                        JwcLine W, sg;
                        float xi, yi;

                        memset(&W, 0, sizeof W);
                        W.x0 = PX[604];
                        W.y0 = PY[604];
                        W.x1 = PX[605];
                        W.y1 = PY[605];
                        memset(&sg, 0, sizeof sg);
                        sg.x0 = x0f;
                        sg.y0 = y0f;
                        sg.x1 = x1f;
                        sg.y1 = y1f;
                        if (isect(&W, &sg, &xi, &yi)) {
                            clipped = 1;
                            sx1 = xi;
                            sy1 = yi;
                        }
                    }
                    wxs = nx;
                    wys = ny;
                }
                for (;;) {
                    if (w < 0) {
                        pt_winding(sx0, sy0, sx1, sy1);
                    }
                    if (w == 0) {
                        raster_add(sx0, sy0, sx1, sy1);
                    }
                    if (w > 0) {
                        if (PH[Aprev] > 0.01 || PH[Bcur] > 0.01) {
                            if (emit_line(w, &conn, (double)sx0, (double)sy0, (double)sx1, (double)sy1) == 0) {
                                conn = 0;
                            }
                        } else {
                            conn = 0;
                        }
                    }
                    if (wl_on && clipped) {
                        clipped = 0;
                        sx0 = sx1;
                        sy0 = sy1;
                        sx1 = nx;
                        sy1 = ny;
                        continue;
                    }
                    break;
                }
            }
            if (r < D) {
                mark_other_groups(r, D, Aprev, Bcur, ip, ic);
            }
            if (s > B) {
                continue;
            }
            break;
        }
        if (r < D) {
            int j;

            for (j = r + 1; j <= D; j++) {
                const int gj = ORDER[j];

                if (START[gj] <= 0) {
                    START[gj] = 0;
                }
            }
        }
    }
    return 1;
}

/* ⑤壁面日影：選んだ壁面線を渡す（n＜0 で解除）。 */
void jw_hk_wall_set(const Jwc *d, long n)
{
    if (d && n >= 0 && n < d->n_lines) {
        wl_on = 1;
        wl_rec = d->lines[n];
    } else {
        wl_on = 0;
    }
}

const char *jw_hk_wall_out(void)
{
    return wl_on ? wl_out : "";
}

/* ------------------------------------------------------------ ②の入口 */
int jw_hk_run_shadow(Jwc *d, const HkCond *c, double p, const char **err)
{
    Gather g;
    int rc, nb;
    int16_t t, t_first, t_last, step = 3600;
    Sun sun;

    cur_d = d;
    cur_c = c;
    cur_layer = (unsigned char)d->write_layer;
    *err = NULL;
    memset(&g, 0, sizeof g);
    nb = gather(d, c, &g);
    if (nb <= 0) {
        *err = errbuf;
        return -1;
    }
    if (p < 7.0) {
        if (c->time915) {
            t_first = -10800;
            t_last = 10800;
        } else {
            t_first = -14400;
            t_last = 14400;
        }
        if (p < 0.0) {
            step = 1800;
        }
    } else {
        t_first = t_last = (int16_t)((int32_t)((p - 8.0) * 3600.0 + 0.5) - 14400);
    }
    for (t = t_first; t <= t_last; t = (int16_t)(t + step)) {
        const long n0 = d->n_lines;
        float sx, sy, hour;
        int w;

        if (p >= 7.0) {
            hour = (float)p;
        } else {
            hour = (float)((double)t * 0.000277777777777778 + 12.0);
        }
        cur_hour = hour;
        sun_coeffs(c->lat, c->decl, &sun);
        sun_shadow(t, &sun, &sx, &sy);
        w = (t % 3600 == 0) ? 1 : 2;
        label_no = wl_on ? 1 : (hour > 12.0f ? 3 : 2);
        rc = shadow_main(w, (double)sx, (double)sy, g.ne, g.np, g.nblk, (double)g.scale);
        if (d->n_lines > n0 + 1) {
            d->lines[n0].rest[2] = (unsigned char)((d->lines[n0].rest[2] | 0x40) & 0x7f);
            d->lines[d->n_lines - 1].rest[2] |= 0x40;
        }
        if (rc < 0) {
            if (rc == -2) {
                strcpy(errbuf, HK_E_BAD);
                *err = errbuf;
            }
            return -1;
        }
        if (t == t_last) {
            break;
        }
    }
    (void)cur_c;
    return 1;
}

/* ④指定点日影時間（ovl34 3ab8:5df6、calc-b 6）。base は No の起点、n は点の数（1〜50）、
 * (rx,ry) は結果の文字を書く位置。戻り：1＝書いた、−1＝不備（*err）、−2＝帯が多すぎる。 */
int jw_hk_run_points(Jwc *d, const HkCond *c, int base, int n, const float *xs, const float *ys,
                     float rx, float ry, const char **err)
{
    Gather g;
    int nb, i, k, t_n, col;
    static unsigned char table[64][500];
    Sun sun;
    const float b4a2 = paper_b4a2(d);

    cur_d = d;
    cur_layer = (unsigned char)d->write_layer;
    *err = NULL;
    memset(&g, 0, sizeof g);
    nb = gather(d, c, &g);
    if (nb <= 0) {
        *err = errbuf;
        return -1;
    }
    w_n = n;
    for (i = 1; i <= n; i++) {
        WPU[i] = fr_u(xs[i], ys[i]);
        WPV[i] = fr_v(xs[i], ys[i]);
    }
    t_n = c->time915 ? 360 : 480;
    sun_coeffs(c->lat, c->decl, &sun);
    for (col = 0; col <= t_n; col++) {
        const int16_t t = (int16_t)(-(c->time915 ? 10800 : 14400) + 60 * col);
        float sx, sy;
        int rc;

        for (i = 1; i <= n; i++) {
            WCNT[i] = 0;
        }
        sun_shadow(t, &sun, &sx, &sy);
        rc = shadow_main(-1, (double)sx, (double)sy, g.ne, g.np, g.nblk, (double)g.scale);
        if (rc < 0) {
            if (rc == -2) {
                strcpy(errbuf, HK_E_BAD);
                *err = errbuf;
            }
            return -1;
        }
        for (i = 1; i <= n; i++) {
            table[i][col] = (unsigned char)(WCNT[i] != 0);
        }
    }
    {
        const int h0 = c->time915 ? 9 : 8;
        const float chf = (float)((double)(int16_t)(d->text_gap[3] + d->text_w[3]) / b4a2 * 0.1);

        for (i = 1; i <= n; i++) {
            int start[24], end[24], nseg = 0, total = 0, in = 0, err_n, j;
            char head[80], tmp[80], band[80];
            float x, y;

            unsigned char A[512], B[512];

            memset(A, 0, sizeof A);
            memset(B, 0, sizeof B);
            for (k = 0; k <= t_n; k++) {
                if (table[i][k]) {
                    A[k] = 1;
                    B[k + 1] = 1;
                    if (k > 0) {
                        A[k - 1] = 1;
                    }
                }
            }
            B[t_n + 1] = 0;
            for (k = 0; k <= t_n; k++) {
                if (!A[k]) {
                    if (in) {
                        in = 0;
                        end[nseg - 1] = k;
                    }
                    continue;
                }
                if (!in) {
                    in = 1;
                    if (nseg >= 20) {
                        strcpy(errbuf, HK_E_MANY);
                        *err = errbuf;
                        return -2;
                    }
                    start[nseg] = k;
                    end[nseg] = -1;
                    nseg++;
                }
            }
            if (nseg > 0 && end[nseg - 1] < 0) {
                end[nseg - 1] = t_n;
            }
            for (j = 0; j < nseg; j++) {
                total += end[j] - start[j];     /* 測定：合計は帯の長さの和（開いた帯の終わりは N） */
            }
            err_n = 2 * nseg;
            if (nseg > 0 && start[0] == 0) {
                err_n--;
            }
            if (nseg > 0 && end[nseg - 1] == t_n) {
                err_n--;
            }
            if (err_n <= 0) {
                err_n = 1;
            }
            sprintf(head, "No%d", base + i);
            if (base + i < 10) {
                strcat(head, " ");
            }
            sprintf(tmp, " [%2d:%2d \x81\x7d%d]", total / 60, total % 60, err_n);
            strcat(head, tmp);
            y = (float)((double)(float)((double)(int16_t)((i - 1) * d->text_h[3]) / b4a2) * -0.15 + ry);   /* 測定：商だけ float */
            x = rx;
            {
                const double w1 = jwc_ed_text_length(d, head, 3, 0);

                jwc_add_text(d, x, y, (float)((double)w1 + x), y, head, 3, cur_layer);
            }
            x = (float)(10.0f * chf + rx);
            for (j = 0; j < nseg; j++) {
                const int s0 = start[j], e0 = end[j];
                double w1;

                sprintf(band, "(%2d:%2d)\x81\x60(%2d:%2d)", s0 / 60 + h0, s0 % 60, e0 / 60 + h0, e0 % 60);
                w1 = jwc_ed_text_length(d, band, 3, 0);
                jwc_add_text(d, x, y, (float)((double)w1 + x), y, band, 3, cur_layer);
                x = (float)((double)chf * 8.5 + x);
            }
        }
    }
    return 1;
}

/* ================================================================== ③等時間図 */
/* ovl34 3ab8:4451（file-linear 0x2efd1）と 2ae02（等時間線の追跡）。写し元は
 * notes/spec-opt5-calc-b.md §4・§5 と lift（tmp/lift/trace_raw.txt・m4451.txt）。
 * 浮動小数点：f32 のメモリ演算は 1 つずつ float に丸め、スタック演算（717d 等）と f64 メモリ演算は double のまま。
 * compare A:B のあとの jcc は「B cc A」と読む。 */
#define ISO_GRID_N 31300
static int16_t IG[ISO_GRID_N];          /* [0xb48c]：格子の値 */
static int16_t IBEF[600];               /* [0xbef2]：行の頭の添字 */
static int16_t IPEND[600];              /* [0xb37a]：行ごとの保留の交点 */
static float I_xmin, I_xmax, I_ymin, I_ymax;   /* [0xb494]・[0xb5a6]・[0xb49e]・[0xb5ae] */
static float I_dx, I_dy;                /* [0x7582]・[0x7586] */
static int I_nx, I_ny;                  /* [0xc396]・[0xc3b8] */
static int I_dt;                        /* [0xc11c] */
static int I_valid;
static float I_err;                     /* 誤差（m）：行 1 に出す */
static char I_errtxt[64];

static int16_t tr16(double v)
{
    return (int16_t)(long)v;
}

static void IG_inc(int i)
{
    IG[i]++;
}

/* 2e1fb：影の外周の辺を格子に足す（mode 0）。 */
static int raster_add(float x1, float y1, float x2, float y2)
{
    int down;
    int16_t r_lo, r_hi, r;
    float s, c0, step, col;
    double s_d;

    if (y2 <= y1) {
        down = -1;
        r_lo = tr16((float)((float)((float)(y2 - I_ymin) / I_dy) + 1.0f));
        if (r_lo < 1) {
            r_lo = 1;
        }
        r_hi = tr16((float)((float)(y1 - I_ymin) / I_dy));
    } else {
        down = 0;
        r_lo = tr16((float)((float)((float)(y1 - I_ymin) / I_dy) + 1.0f));
        if (r_lo < 1) {
            r_lo = 1;
        }
        r_hi = tr16((float)((float)(y2 - I_ymin) / I_dy));
    }
    if (r_hi > I_ny) {
        r_hi = (int16_t)I_ny;
    }
    if (r_hi < r_lo) {
        return 0;
    }
    s_d = (double)(float)(x2 - x1) / (double)(float)(y2 - y1);
    s = (float)s_d;
    {
        const float t1 = (float)(I_ymin - y1);
        const float t2 = (float)(s_d * (double)t1 - (double)I_xmin);

        c0 = (float)((float)((float)(t2 + x1)) / I_dx);
    }
    step = (float)((float)(s / I_dx) * I_dy);
    col = (float)((float)((float)(int16_t)(r_lo - 1) * step) + c0);
    for (r = r_lo; r <= r_hi; r++) {
        int16_t c, p;

        col = (float)(step + col);
        c = tr16(col);
        if (c < 0) {
            c = 0;
        }
        if (c > I_nx) {
            c = (int16_t)I_nx;
        }
        p = IPEND[r];
        if (p < 0) {
            IPEND[r] = c;
            continue;
        }
        if (p == c) {
            IPEND[r] = -9;
            continue;
        }
        if (p < c) {
            int16_t j;

            for (j = (int16_t)(IBEF[r] + p + 1); j <= (int16_t)(IBEF[r] + c); j++) {
                IG[j]++;
            }
        } else if (down != 0) {
            int16_t j;

            for (j = (int16_t)(IBEF[r] + c); j <= (int16_t)(IBEF[r] + p); j++) {
                IG[j]--;
            }
        } else {
            int16_t j;

            for (j = (int16_t)(IBEF[r] + c); j <= (int16_t)(IBEF[r] + p); j++) {
                IG[j]++;
            }
        }
        IPEND[r] = -9;
    }
    return 1;
}

/* 2eec1：建物の内側と縁に印（10001）。 */
static void iso_classify(void)
{
    int r, c;

    for (r = 1; r <= I_ny; r++) {
        for (c = 1; c <= I_nx; c++) {
            const int i = IBEF[r] + c;

            if (IG[i] != 0) {
                continue;
            }
            if (I_nx > c && IG[i + 1] == 1) {
                IG[i] = 2;
            }
            if (c > 1 && IG[i - 1] == 1) {
                IG[i] = 2;
            }
            if (r > 1) {
                const int v = IG[i - I_nx];

                if (v == 1 || v == 2) {
                    IG[i] = 3;
                }
            }
        }
    }
    for (r = 1; r <= I_ny; r++) {
        for (c = 1; c <= I_nx; c++) {
            const int i = IBEF[r] + c;

            if (IG[i] != 0) {
                IG[i] = 0x2711;
            }
        }
    }
}

/* 2ac8c／2ad14：格子の 2 点のあいだの位置（u／v）。 */
static float iso_pos(double a, double b, double thr, int16_t icell, int16_t vA, float d, float vmin)
{
    const double frac = (thr - (double)vA) / (b - (double)vA);
    const double first = (frac * (double)d) * a;
    const float t = (float)((float)((double)icell * (double)d) + vmin);

    return (float)(first + (double)t);
}

static int16_t ig_get(int16_t col, int16_t row)
{
    return IG[(int16_t)(IBEF[row] + col)];
}

static int16_t iabs16(int16_t v)
{
    return v < 0 ? (int16_t)-v : v;
}

static int16_t ig_mark(int16_t col, int16_t row)
{
    const int16_t i = (int16_t)(IBEF[row] + col);
    const int16_t v = IG[i];

    IG[i] = (int16_t)-iabs16(v);
    return v;
}

/* 2e67a：等時間線のラベル（回した文字）。lx1,ly1〜lx2,ly2 は線の記録の端。 */
static void put_label_iso(double level, const char *suffix, float lx1, float ly1, float lx2, float ly2)
{
    Jwc *d = cur_d;
    char buf[160];
    float width, dx, dy, ux, uy, a, b, x0, y0, w2, x1, y1;
    double len;
    const float b4a2 = paper_b4a2(d);

    sprintf(buf, "%.1f", floor(level * 10.0 + 0.5) / 10.0);
    width = (float)jwc_ed_text_length(d, buf, 3, 0);
    strcat(buf, suffix);
    dx = lx2 - lx1;
    dy = ly2 - ly1;
    len = sqrt((double)(float)((float)(dy * dy) + (float)(dx * dx)));
    ux = (float)((double)dx / len);
    uy = (float)((double)dy / len);
    a = (float)((len - (double)width) * 0.5);
    b = (float)(0.5 / (double)b4a2);
    w2 = (float)jwc_ed_text_length(d, buf, 3, 0);
    {
        const float wa = (float)(w2 + a);

        x0 = (float)((float)((float)(a * ux) - (float)(b * uy)) + lx1);
        y0 = (float)((float)((float)(a * uy) + (float)(b * ux)) + ly1);
        x1 = (float)((float)((float)(wa * ux) - (float)(b * uy)) + lx1);
        y1 = (float)((float)((float)(wa * uy) + (float)(b * ux)) + ly1);
    }
    jwc_add_text(d, x0, y0, x1, y1, buf, 3, cur_layer);
}

static void iso_label_out(double level, const char *suffix, long idx)
{
    const Jwc *d = cur_d;

    if (idx < 0 || idx >= d->n_lines) {
        return;
    }
    put_label_iso(level, suffix, d->lines[idx].x0, d->lines[idx].y0, d->lines[idx].x1, d->lines[idx].y1);
}

/* 2ae02：しきい値 level（時間）の等時間線をたどる。 */
static int iso_trace(double level, const char *suffix)
{
    const int16_t nx = (int16_t)I_nx, ny = (int16_t)I_ny;
    const float thr = (float)((3600.0 / (double)(int16_t)I_dt) * level - 0.1);
    const int16_t v6c = 10000;
    int16_t rmax[5], rstart[5], roff[5], cmax[5], cstart[5], coff[5];
    int16_t b3a = 0, b54 = 0, b52 = 0, b60 = 0, b92 = 0, b9e = 0, b84 = 0, b90 = 0, bc4 = 0, ba8 = 0;
    int16_t b24 = 0, b2a = 0, b28 = 0, b3c = 0, b78, b26 = 0, v86 = -1000;
    float f2e = 0.0f, f82 = 0.0f, f8e = 0.0f, f9a = 0.0f, fa6 = 0.0f;
    long be9e = -1;
    int ret;

    rmax[1] = ny;     rmax[2] = ny;     rmax[3] = (int16_t)(ny - 1); rmax[4] = (int16_t)(ny - 1);
    rstart[1] = 2;    rstart[2] = ny;   rstart[3] = 1;               rstart[4] = 1;
    roff[1] = -1;     roff[2] = 0;      roff[3] = 1;                 roff[4] = 0;
    cmax[1] = 1;      cmax[2] = nx;     cmax[3] = nx;                cmax[4] = (int16_t)(nx - 1);
    cstart[1] = 1;    cstart[2] = 2;    cstart[3] = nx;              cstart[4] = 1;
    coff[1] = 0;      coff[2] = -1;     coff[3] = 0;                 coff[4] = 1;

#define TRACK(rowv) do { \
        const float ac = (float)(rowv); \
        if (!((double)v86 >= (double)ac)) { \
            v86 = tr16(ac); \
            be9e = cur_d->n_lines - 1; \
        } \
    } while (0)
#define EMIT_AND_TRACK() do { \
        ret = emit_line(b26, &conn9c, (double)f82, (double)f8e, (double)f9a, (double)fa6); \
        if (ret) { TRACK(b54); } \
        f82 = f9a; \
        f8e = fa6; \
    } while (0)
    int conn9c = 0;

    label_no = -1;
    b78 = 1;
L_2bc75:
    if (b78 > 4) {
        goto L_done;
    }
    b2a = rstart[b78];
    goto L_2bc34;
L_2bc31:
    b2a++;
L_2bc34:
    if (rmax[b78] < b2a) {
        goto L_2bc72;
    }
    b3c = (int16_t)(b2a + roff[b78]);
    b24 = cstart[b78];
    goto L_2b9d7;
L_2bc72:
    b78++;
    goto L_2bc75;
L_2b9d4:
    b24++;
L_2b9d7:
    if (cmax[b78] < b24) {
        goto L_2bc31;
    }
    b92 = ig_get(b24, b2a);
    b28 = (int16_t)(coff[b78] + b24);
    b9e = ig_get(b28, b3c);
    {
        const float c6 = (float)((double)iabs16(b9e) - (double)thr);
        const float c8 = (float)((double)iabs16(b92) - (double)thr);

        if (!((double)c6 * (double)c8 < 0.0)) {
            goto L_2b9d4;
        }
    }
    if (!(b92 > 0 || b9e > 0)) {
        goto L_2b9d4;
    }
    b54 = b2a;
    b52 = b28;
    b60 = b3c;
    b3a = b24;
    b92 = iabs16(ig_get(b3a, b54));
    b84 = (int16_t)(b28 - b3a);
    b90 = (int16_t)(b3c - b2a);
    b9e = iabs16(ig_get(b52, b60));
    f82 = iso_pos((double)b84, (double)b9e, (double)thr, b3a, b92, I_dx, I_xmin);
    f8e = iso_pos((double)(float)b90, (double)b9e, (double)thr, b54, b92, I_dy, I_ymin);
    goto L_2bbb7;

L_2af08:
    b26 = 0;
    if (conn9c > 20) {
        iso_label_out(level, suffix, be9e);
    }
    conn9c = 0;
    be9e = -1;
    v86 = -1000;
    goto L_2afbc;

L_2afbc:
    {
        const int16_t s1 = (int16_t)(bc4 + b9e), s2 = (int16_t)(ba8 + b92);
        const int16_t cc = s1 >= s2 ? s1 : s2;
        int16_t t;

        f2e = (float)((double)cc * 0.5);
        t = b3a; b3a = b52; b52 = t;
        t = b54; b54 = b60; b60 = t;
    }
    b92 = iabs16(ig_get(b3a, b54));
    b84 = (int16_t)(b52 - b3a);
    b90 = (int16_t)(b60 - b54);
    b9e = iabs16(ig_get(b52, b60));
    {
        const float c1 = (float)((double)b9e - (double)thr);
        const float c2 = (float)((double)f2e - (double)thr);

        if (!((double)c1 * (double)c2 < 0.0)) {
            goto L_2b608;
        }
    }
L_2b09f:
    b3a = b52;
    b54 = b60;
    b92 = iabs16(ig_get(b3a, b54));
    b60 = (int16_t)(b60 - b84);
    b52 = (int16_t)(b52 + b90);
    b9e = iabs16(ig_get(b52, b60));
    b84 = (int16_t)(b52 - b3a);
    b90 = (int16_t)(b60 - b54);
    {
        const int16_t si = b84, di = b90;
        const float f68 = (float)((double)(int16_t)(di - si) * 0.5);

        f9a = iso_pos((double)(int16_t)(di + si) * 0.5, (double)f2e, (double)thr, b3a, b92, I_dx, I_xmin);
        fa6 = iso_pos((double)f68, (double)f2e, (double)thr, b54, b92, I_dy, I_ymin);
    }
    EMIT_AND_TRACK();
    {
        const float c1 = (float)((double)b9e - (double)thr);
        const float c2 = (float)((double)b92 - (double)thr);

        if ((double)c1 * (double)c2 < 0.0) {
            goto L_2b390;
        }
    }
    goto L_2b09f;

L_2b390:
    ig_mark(b3a, b54);
    ig_mark(b52, b60);
    f9a = iso_pos((double)b84, (double)b9e, (double)thr, b3a, b92, I_dx, I_xmin);
    {
        const float f68 = (float)b90;

        fa6 = iso_pos((double)f68, (double)b9e, (double)thr, b54, b92, I_dy, I_ymin);
    }
    EMIT_AND_TRACK();
    {
        const int16_t col = (int16_t)(b3a - b90), row = (int16_t)(b84 + b54);

        if (col < 1 || col > nx || row < 1 || row > ny) {
            goto L_2b925;
        }
    }
    if (b3a == b24 && b54 == b2a && b52 == b28 && b60 == b3c) {
        goto L_2b925;
    }
    goto L_2bbb7;

L_2b608:
    {
        const float f68 = (float)((double)(int16_t)(b90 - b84) * 0.5);

        f9a = iso_pos((double)(int16_t)(b90 + b84) * 0.5, (double)f2e, (double)thr, b3a, b92, I_dx, I_xmin);
        fa6 = iso_pos((double)f68, (double)f2e, (double)thr, b54, b92, I_dy, I_ymin);
    }
    EMIT_AND_TRACK();
    b52 = b3a;
    b60 = b54;
    b54 = (int16_t)(b54 - b84);
    b3a = (int16_t)(b3a + b90);
    b92 = iabs16(ig_get(b3a, b54));
    b84 = (int16_t)(b52 - b3a);
    b90 = (int16_t)(b60 - b54);
    b9e = iabs16(ig_get(b52, b60));
    {
        const float c1 = (float)((double)b9e - (double)thr);
        const float c2 = (float)((double)b92 - (double)thr);

        if ((double)c1 * (double)c2 < 0.0) {
            goto L_2b390;
        }
    }
    goto L_2b608;

L_2bbb7:
    {
        const int16_t colx = (int16_t)(b3a - b90);

        ba8 = iabs16(ig_get((int16_t)(colx + b84), (int16_t)(b90 + b84 + b54)));
        bc4 = iabs16(ig_get(colx, (int16_t)(b84 + b54)));
    }
    if (v6c > b92 && v6c > b9e && v6c > ba8 && v6c > bc4) {
        b26 = 1;
        goto L_2afbc;
    }
    goto L_2af08;

L_2b925:
    if (conn9c > 10) {
        iso_label_out(level, suffix, be9e);
        conn9c = 0;
        be9e = -1;
        v86 = -1000;
    }
    goto L_2b9d4;

L_done:
    {
        int i;

        for (i = 1; i <= 0x7918; i++) {
            IG[i] = iabs16(IG[i]);
        }
    }
#undef TRACK
#undef EMIT_AND_TRACK
    return 1;
}

/* 4451 の前半：格子の大きさを決め、影の外周を時刻ごとに足す。m＝1 高速・2 標準・3 指定範囲（interval は 1〜4）。
 * cx・cy は m==3 のときの長方形の 4 隅（図面の座標）。戻り：1＝できた、−1＝不備（*err）、−2＝線が多すぎる。 */
static Gather iso_g;                    /* 4451 の前に ovl33 が集めたデータ（m＝3 の範囲指定のあいだ持つ） */
static int iso_g_ok;

/* ③の頭：データを集める（ovl33 の collect）。戻り：1＝できた、−1＝不備（*err）。 */
int jw_hk_iso_prepare(Jwc *d, const HkCond *c, const char **err)
{
    int nb;

    cur_d = d;
    cur_c = c;
    cur_layer = (unsigned char)d->write_layer;
    *err = NULL;
    iso_g_ok = 0;
    memset(&iso_g, 0, sizeof iso_g);
    nb = gather(d, c, &iso_g);
    if (nb <= 0) {
        *err = errbuf;
        return -1;
    }
    iso_g_ok = 1;
    return 1;
}

/* 範囲指定の長方形の 4 隅（4451 の 0x2f2f1〜0x2f4b0）：2 点を北向きの座標系の v だけずらして作る。 */
void jw_hk_iso_corners(float p1x, float p1y, float p2x, float p2y, float *X, float *Y)
{
    const float v1 = fr_v((double)p1x, (double)p1y);
    const float v2 = fr_v((double)p2x, (double)p2y);
    const float dv = (float)(v2 - v1);
    const float offx = (float)(fr_X(0.0, (double)dv) - fr_ox);
    const float offy = (float)(fr_Y(0.0, (double)dv) - fr_oy);

    X[0] = p1x;
    Y[0] = p1y;
    X[1] = (float)(p1x + offx);
    Y[1] = (float)(p1y + offy);
    X[2] = p2x;
    Y[2] = p2y;
    X[3] = (float)(p2x - offx);
    Y[3] = (float)(p2y - offy);
}

/* 計算した格子の外枠（0x2fb5f〜0x2fda1）。計算の前なら 0。 */
int jw_hk_iso_frame(float *X, float *Y)
{
    if (!I_valid) {
        return 0;
    }
    X[0] = fr_X((double)I_xmin, (double)I_ymin);
    Y[0] = fr_Y((double)I_xmin, (double)I_ymin);
    X[1] = fr_X((double)I_xmin, (double)I_ymax);
    Y[1] = fr_Y((double)I_xmin, (double)I_ymax);
    X[2] = fr_X((double)I_xmax, (double)I_ymax);
    Y[2] = fr_Y((double)I_xmax, (double)I_ymax);
    X[3] = fr_X((double)I_xmax, (double)I_ymin);
    Y[3] = fr_Y((double)I_xmax, (double)I_ymin);
    return 1;
}

int jw_hk_iso_calc(Jwc *d, const HkCond *c, int m, int interval, const float *cx, const float *cy, const char **err)
{
    Gather g;
    Sun sun;
    int nb, k, r;
    float X[4], Y[4], lim, ratio, uext, vext, maxd;
    int16_t T, t;
    const float b4a2 = paper_b4a2(d);

    cur_d = d;
    cur_c = c;
    cur_layer = (unsigned char)d->write_layer;
    *err = NULL;
    I_valid = 0;
    memset(&g, 0, sizeof g);
    if (m == 3 && iso_g_ok) {
        g = iso_g;
        nb = 1;
    } else {
        nb = gather(d, c, &g);
    }
    if (nb <= 0) {
        *err = errbuf;
        return -1;
    }
    if (m == 3 && cx && cy) {
        for (k = 0; k < 4; k++) {
            X[k] = cx[k];
            Y[k] = cy[k];
        }
    } else {
        const float W = (float)(479 - 32), H = (float)(639 - 121);

        X[0] = 0.0f; Y[0] = W;
        X[1] = H;    Y[1] = W;
        X[2] = 0.0f; Y[2] = 10.0f;
        X[3] = H;    Y[3] = 10.0f;
        if (c->decl > 10.0) {
            Y[2] = 0.0f;
            Y[3] = 0.0f;
        }
    }
    I_xmin = 8999999488.0f;
    I_xmax = -8999999488.0f;
    I_ymin = 8999999488.0f;
    I_ymax = -8999999488.0f;
    for (k = 0; k < 4; k++) {
        const float u = fr_u((double)X[k], (double)Y[k]);
        const float v = fr_v((double)X[k], (double)Y[k]);

        if (!(u >= I_xmin)) {
            I_xmin = u;
        }
        if (u > I_xmax) {
            I_xmax = u;
        }
        if (!(v >= I_ymin)) {
            I_ymin = v;
        }
        if (v > I_ymax) {
            I_ymax = v;
        }
    }
    if (m == 1 || m == 2) {
        I_ymin = c->decl > 5.0 ? -5.0f : 5.0f;
    }
    if (!((float)(I_xmax - I_xmin) >= 50.0f)) {
        I_xmax = (float)(50.0f + I_xmin);
    }
    if (!((float)(I_ymax - I_ymin) >= 50.0f)) {
        I_ymax = (float)(50.0f + I_ymin);
    }
    uext = (float)(I_xmax - I_xmin);
    vext = (float)(I_ymax - I_ymin);
    ratio = (float)((double)vext / (double)uext);
    if (!((double)ratio >= 0.5)) {
        ratio = 0.5f;
    }
    if (!(2.0f >= ratio)) {
        ratio = 2.0f;
    }
    I_nx = tr16(sqrt(30000.0 / (double)ratio));
    I_ny = tr16((float)((float)I_nx * ratio));
    while ((int16_t)((I_nx + 1) * I_ny) > 30000) {
        I_nx--;
        I_ny--;
    }
    I_dx = (float)((double)uext / (double)I_nx);
    I_dy = (float)((double)vext / (double)I_ny);
    lim = 10.0f;
    if (m == 1) {
        lim = 9.0f;
    }
    if (m == 2) {
        lim = 3.0f;
    }
    if (m == 3) {
        lim = 1.0f;
        if (interval == 2) {
            lim = 0.75f;
        }
        if (interval == 3) {
            lim = 0.5f;
        }
        if (interval == 4) {
            lim = 0.1f;
        }
    }
    if (!(lim <= I_dx)) {
        I_dx = lim;
        I_nx = tr16((double)uext / (double)lim);
    }
    if (!(lim <= I_dy)) {
        I_dy = lim;
        I_ny = tr16((double)vext / (double)lim);
    }
    I_xmax = (float)((float)((float)I_nx * I_dx) + I_xmin);
    I_ymax = (float)((float)((float)I_ny * I_dy) + I_ymin);
    if (I_nx < 1 || I_ny < 1 || I_nx > 500 || I_ny > 500 || (I_nx + 1) * I_ny > 0x7918) {
        *err = HK_E_RANGE;
        return -1;
    }
    /* 格子の準備 */
    for (r = 1; r <= I_ny; r++) {
        IPEND[r] = -9;
    }
    for (r = 1; r <= I_ny; r++) {
        IBEF[r] = (int16_t)((r - 1) * (I_nx + 1));
    }
    for (k = 1; k <= 0x7918; k++) {
        IG[k] = 0;
    }
    label_no = -1;
    r = shadow_main(0, 0.0, 0.0, g.ne, g.np, g.nblk, (double)g.scale);
    if (r < 0) {
        if (r == -2) {
            strcpy(errbuf, HK_E_BAD);
            *err = errbuf;
        }
        return r == -2 ? -2 : -1;
    }
    iso_classify();
    I_dt = 180;
    if (m == 2) {
        I_dt = 60;
    }
    if (m == 3) {
        I_dt = interval == 2 ? 10 : interval == 3 ? 4 : interval == 4 ? 2 : 20;
    }
    T = c->time915 ? 10800 : 14400;
    sun_coeffs(c->lat, c->decl, &sun);
    for (t = (int16_t)((I_dt >> 1) - T); t <= T; t = (int16_t)(t + I_dt)) {
        float sx, sy;
        int rr;

        for (r = 1; r <= I_ny; r++) {
            IPEND[r] = -9;
        }
        sun_shadow(t, &sun, &sx, &sy);
        rr = shadow_main(0, (double)sx, (double)sy, g.ne, g.np, g.nblk, (double)g.scale);
        if (rr < 0) {
            if (rr == -2) {
                strcpy(errbuf, HK_E_BAD);
                *err = errbuf;
            }
            return rr == -2 ? -2 : -1;
        }
    }
    maxd = I_dx >= I_dy ? I_dx : I_dy;
    I_err = (float)(((double)d->denom * (double)b4a2 * (double)maxd) * 0.001);
    sprintf(I_errtxt, " \x8c\xeb\x8d\xb7\x81\x7d%0.2fm", ((double)d->denom * (double)b4a2 * (double)maxd) * 0.001);
    I_valid = 1;
    return 1;
}

/* 等時間線を 1 本の時間について描く（2ae02 と、4451 のあとしまつ）。show_err は [0x7638]。 */
int jw_hk_iso_draw(Jwc *d, double level, int show_err)
{
    const long n0 = d->n_lines;
    char suffix[120];

    if (!I_valid) {
        return 0;
    }
    cur_d = d;
    cur_layer = (unsigned char)d->write_layer;
    suffix[0] = 0;
    if (show_err) {
        strcpy(suffix, "\x8e\x9e\x8a\xd4 ");
        strcat(suffix, I_errtxt);
    }
    iso_trace(level, suffix);
    if (d->n_lines > n0 + 1) {
        d->lines[n0].rest[2] = (unsigned char)((d->lines[n0].rest[2] | 0x40) & 0x7f);
        d->lines[d->n_lines - 1].rest[2] |= 0x40;
    }
    return 1;
}

const char *jw_hk_iso_errtxt(void)
{
    return I_errtxt;
}
