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
    int dirty = 0;

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
    d->lines[d->n_lines - 1].rest[3] |= 0x40;
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
            if (w < 0) {
                pt_winding(x0f, y0f, x1f, y1f);
            }
            if (w > 0) {
                if (PH[Aprev] > 0.01 || PH[Bcur] > 0.01) {
                    if (emit_line(w, &conn, (double)x0f, (double)y0f, (double)x1f, (double)y1f) == 0) {
                        conn = 0;
                    }
                } else {
                    conn = 0;
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
        label_no = hour > 12.0f ? 3 : 2;
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
