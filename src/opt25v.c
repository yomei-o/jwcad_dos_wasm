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

/* ------------------------------------------------------------ 初期化 */
static float paper_k(const Jwc *d)
{
    static const float PAPER[5] = { 1189.0f, 841.0f, 594.0f, 420.0f, 297.0f };
    const int pp = d->paper >= 0 && d->paper < 5 ? d->paper : 4;

    return (float)((double)PAPER[pp] / 518.0);
}

/* ------------------------------------------------------------ 高さデータの読み取り（ovl35 1e64・14ad・0e2e）
 *
 * 本物は 1e64 が図面の線を 3 本組（A＝平面の線、B＝端の高さ、C＝(横,奥行)）に作り直して線の配列の上に隠す。
 * ここでは A と B だけを Seg に持つ（C は recompute が作る）。番地は ovl35 の dis 番地（`3ab8:XXXX`＝dis−0x2ab80）。
 * float／double は x87 ランタイム（22b2）の型どおり（float 同士だけ float、一方でも double なら double、
 * 「keep」の store は丸めずに続ける）。 */

static float v_f5fe = 250.0f, v_f632 = 150.0f;   /* 枠 1 の原点 [bp-0x5fe]・[bp-0x632]（1e64 が決める） */
static float h_f;                       /* [bp-0x228]：1.0/(縮尺×紙の倍率)（ｍなら ×1000） */
static float g_div = 30.0f;             /* [0x11e6]：円の分割角（14ad が円データの第 3 値で替える） */
static char h_buf[256];                 /* [0xbf48]：14ad が最後に読んだ高さ文字（古いまま残る） */

/* 22b2:28ae の sscanf(" %lf,%lf,...")。戻り：読めた個数、最初の変換の前に文字列が尽きたら -1。 */
static int scan_list(const char *s, double *v, int max)
{
    int n = 0;

    while (n < max) {
        char tmp[64];
        int k = 0;
        char *e;
        const char *p;

        while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' || *s == '\v' || *s == '\f') {
            s++;
        }
        if (!*s) {
            return n == 0 ? -1 : n;
        }
        p = s;
        if (*p == '+' || *p == '-') tmp[k++] = *p++;
        {
            int nd = 0;

            while (*p >= '0' && *p <= '9' && k < 40) { tmp[k++] = *p++; nd++; }
            if (*p == '.') {
                tmp[k++] = *p++;
                while (*p >= '0' && *p <= '9' && k < 40) { tmp[k++] = *p++; nd++; }
            }
            if (!nd) return n;
            if (*p == 'e' || *p == 'E') {
                const char *q = p + 1;
                int k2 = k;

                tmp[k2++] = 'e';
                if (*q == '+' || *q == '-') tmp[k2++] = *q++;
                if (*q >= '0' && *q <= '9') {
                    while (*q >= '0' && *q <= '9' && k2 < 60) tmp[k2++] = *q++;
                    k = k2;
                    p = q;
                }
            }
        }
        tmp[k] = 0;
        v[n++] = strtod(tmp, &e);
        s = p;
        if (n == max || *s != ',') {
            return n;
        }
        s++;
    }
    return n;
}

/* 浮動小数点の並びをそのまま整数に読んだ鍵（負は符号を落として負にする。14ad の粗い検査）。 */
static long fkey(float f)
{
    unsigned long b;

    memcpy(&b, &f, 4);
    return (b & 0x80000000ul) ? -(long)(b & 0x7ffffffful) : (long)b;
}

/* 14ad：(layer,x,y) に高さの文字があれば（最後の 1 件）その値を読む。戻り＝見つけた文字の番号（無ければ 0）。
 * *n＝個数（3 個以上なら 1 引く）。v[1..11] は読めた値（v[3] は円の分割角の読み取りに使った値）。 */
static int read_h(const Jwc *d, int layer, double x, double y, int *n, double v[12])
{
    const float xlo = (float)(x - (double)0.1f), ylo = (float)(y - (double)0.1f);
    const float xhi = (float)((double)0.1f + x), yhi = (float)((double)0.1f + y);
    int i, hit = 0, nn;
    const JwcText *t = NULL;

    for (i = 0; i < d->n_texts; i++) {
        const JwcText *c = &d->texts[i];

        if (c->rest[0] >= 0x5a || c->layer != layer) continue;
        if (!((c->rest[2] & 0x80) || (c->rest[3] & 0x80))) continue;
        if (fkey(xlo) > fkey(c->x0) || fkey(ylo) > fkey(c->y0)) continue;
        if (fkey(xhi) < fkey(c->x0) || fkey(yhi) < fkey(c->y0)) continue;
        if (!(fabs((double)c->y0 - y) + fabs((double)c->x0 - x) < 0.01)) continue;
        hit = i + 1;
        t = c;
    }
    for (i = 0; i < 12; i++) v[i] = 0.0;
    nn = 0;
    if (hit) {
        const char *s = t->text ? t->text : "";

        strncpy(h_buf, s, sizeof h_buf - 1);
        h_buf[sizeof h_buf - 1] = 0;
        nn = scan_list(h_buf, v + 1, 11);
        if (nn > 0) {
            /* v+1 から読んだので v[1] が第 1 値 */
        }
        if (nn == 1 && (t->rest[2] & 0x80)) {
            if (0.0 < v[1]) nn = 2;
            v[1] = fabs(v[1]);
            v[2] = 0.0;
        }
        if (nn == 0) {
            for (i = 0; i < 12; i++) v[i] = 0.0;
        }
    }
    g_div = 30.0f;
    if (nn >= 3) {
        const double a = fabs(v[3]);

        nn--;
        if (a >= 1.0 && a <= 90.0) g_div = (float)v[3];
    }
    *n = nn;
    return hit;
}

/* 2981(0,u,v)・2a18(0,u,v)：枠の座標から図面の座標へ。 */
static float fr_X(double u, double v)
{
    return (float)(((double)fr_ux * u - (double)fr_uy * v) + (double)fr_ox);
}

static float fr_Y(double u, double v)
{
    return (float)(((double)fr_ux * v + (double)fr_uy * u) + (double)fr_oy);
}

typedef struct {
    float x0, y0, x1, y1;
    float z0, z1;
    unsigned char type, pen;
} H3;

/* 立面の状態（1 つのレイヤの間ずっと）。 */
typedef struct {
    int elev;                           /* [bp-0x2c2]：Pen5 の補助線がある */
    double pt6x, pt6y;                  /* [bp-0x160]・[bp-0x188]：立面原点 */
    double sx, sy, ex, ey;              /* [bp-0x22c]・[bp-0x276]・[bp-0xac]・[bp-0x2b6]：斜の線 */
    double zbase;                       /* [bp-0x198] */
} Elev;

static Seg *h_out;
static long h_n, h_cap;
static int h_vflag;

static void h_add(const H3 *s)
{
    Seg *g;

    if (h_n >= h_cap) {
        h_cap = h_cap ? h_cap * 2 : 256;
        h_out = (Seg *)realloc(h_out, (size_t)h_cap * sizeof(Seg));
    }
    g = &h_out[h_n++];
    memset(g, 0, sizeof *g);
    g->x0 = s->x0;
    g->y0 = s->y0;
    g->x1 = s->x1;
    g->y1 = s->y1;
    g->z0 = s->z0;
    g->z1 = s->z1;
    g->type = s->type;
    g->pen = s->pen;
}

/* 0e2e：1 本の 3 次元の線を足す。za・zb は端の高さ（立面なら奥行）。戻り 0＝足した／足さなかった。 */
static void emit_line(const JwcLine *rec, const Elev *E, double za, double zb)
{
    H3 o;

    o.type = rec->type;
    o.pen = rec->pen;
    if (!E->elev) {
        o.x0 = rec->x0;
        o.y0 = rec->y0;
        o.x1 = rec->x1;
        o.y1 = rec->y1;
        o.z0 = (float)(za + E->zbase);
        o.z1 = (float)(E->zbase + zb);
    } else {
        const float eps = 0.002f;
        const float u0 = (float)((double)rec->x0 - E->pt6x), u1 = (float)((double)rec->x1 - E->pt6x);
        const double t0 = (double)rec->y0 - E->pt6y, t1 = (double)rec->y1 - E->pt6y;
        float w0 = (float)t0, w1 = (float)t1;
        const float s0 = (float)(t0 - E->sy), s1 = (float)(t1 - E->sy);
        float v0, v1;
        int slant0, slant1;
        const int both = ((float)(s0 + eps) > 0.0f) && ((float)(s1 + eps) > 0.0f);

        slant0 = (s0 > eps) || both;
        slant1 = (s1 > eps) || both;
        if (slant0) {
            if (h_vflag) {
                w0 = (float)(((double)s0 * E->ey + za * E->ex) + E->sy);
                v0 = (float)((double)s0 * E->ex - za * E->ey);
            } else {
                if (!(fabs(E->ey) >= 0.01)) return;
                v0 = (float)(((double)s0 / E->ey) * E->ex - za);
            }
            v0 = (float)((double)v0 + E->sx);
        } else {
            v0 = (float)(-za);
        }
        if (slant1) {
            if (h_vflag) {
                w1 = (float)(((double)s1 * E->ey + E->ex * zb) + E->sy);
                v1 = (float)((double)s1 * E->ex - E->ey * zb);
            } else {
                if (!(fabs(E->ey) >= 0.01)) return;
                v1 = (float)(((double)s1 / E->ey) * E->ex - zb);
            }
            v1 = (float)((double)v1 + E->sx);
        } else {
            v1 = (float)(-zb);
        }
        o.x0 = fr_X((double)u0, (double)v0);
        o.y0 = fr_Y((double)u0, (double)v0);
        o.x1 = fr_X((double)u1, (double)v1);
        o.y1 = fr_Y((double)u1, (double)v1);
        o.z0 = (float)((double)w0 + E->zbase);
        o.z1 = (float)((double)w1 + E->zbase);
    }
    h_add(&o);
}

static int layer_used(const Jwc *d, int k)
{
    long n;

    for (n = 0; n < d->n_lines; n++) if (d->lines[n].layer == k) return 1;
    for (n = 0; n < d->n_arcs; n++) if (d->arcs[n].layer == k) return 1;
    for (n = 0; n < d->n_texts; n++) if (d->texts[n].layer == k) return 1;
    for (n = 0; n < d->n_points; n++) if (d->points[n].layer == k) return 1;
    return 0;
}

/* 1e64：高さのデータを作る。戻り＝線の数（本物は円弧の数も返す）。 */
static long build(const Jwc *d, int unit)
{
    float gh[16];
    int gk[16];
    int k, g, n;
    long i;
    char *used;

    free(h_out);
    h_out = NULL;
    h_n = h_cap = 0;
    h_f = 1.0f / (d->denom * paper_k(d));
    if (unit) h_f = (float)((double)h_f * 1000.0);
    for (g = 0; g < 16; g++) { gh[g] = 0.0f; gk[g] = 0; }
    for (i = 0; i < d->n_texts; i++) {
        const JwcText *t = &d->texts[i];
        double v[2];

        if (t->rest[0] >= 0x5a || !(t->x0 == 0.0f && t->y0 == 0.0f) || !(t->rest[3] & 0x80)) continue;
        strncpy(h_buf, t->text ? t->text : "", sizeof h_buf - 1);
        h_buf[sizeof h_buf - 1] = 0;
        if (scan_list(h_buf, v, 1) == 1) {
            gh[t->layer >> 4] = (float)((double)h_f * v[0]);
        }
    }
    for (g = 0; g < 16; g++) {
        const char *nm = d->group_name[g];
        double v[1];

        if (nm[0] == '#') {
            if (nm[1] == 'l' && nm[2] == 'v') {
                if (scan_list(nm + 3, v, 1) == 1) gh[g] = (float)((float)v[0] * h_f);
            }
            if (nm[1] == 'k') gk[g] = 1;
        }
    }
    used = (char *)calloc(256, 1);
    for (k = 0; k < 256; k++) used[k] = (char)layer_used(d, k);
    for (k = 0; k < 256; k++) {
        const char *nm = d->layer_name[k];
        float lv = 0.0f, lh = 0.0f;
        int lhflag = 0, flag40;
        Elev E;
        long line5 = 0, line6 = 0, pt5 = 0, pt6 = 0;
        float p5x = 0.0f, p5y = 0.0f, p6x = 0.0f, p6y = 0.0f;
        unsigned char *consumed;

        if (!layer_shown(d, (unsigned)k) || !used[k]) continue;
        g = k >> 4;
        memset(&E, 0, sizeof E);
        E.zbase = (double)gh[g];
        flag40 = gk[g];
        if (nm[0] == '#') {
            double v[1];

            if (nm[1] == 'l' && nm[2] == 'v') {
                if (scan_list(nm + 3, v, 1) == 1) lv = (float)v[0];
            }
            if (nm[1] == 'l' && nm[2] == 'h') {
                if (scan_list(nm + 3, v, 1) == 1) lh = (float)v[0];
                if (fabs((double)lh) >= 0.001) lhflag = 1;
            }
        }
        E.zbase = (double)((float)(lv * h_f)) + E.zbase;
        /* 立面の補助線（Pen5・Pen6 の線種 9） */
        for (i = 0; i < d->n_lines; i++) {
            const JwcLine *l = &d->lines[i];

            if (l->pen >= 0x5a || l->layer != k) continue;
            if (l->type == 9 && l->pen == 5) line5 = i + 1;
            if (l->type == 9 && l->pen == 6) line6 = i + 1;
            if (flag40 && l->type == 9) line5 = i + 1;
        }
        if (!line5) flag40 = 0;
        E.elev = line5 != 0;
        E.sy = 999999.0;
        if (line5) {
            const JwcLine *b = &d->lines[line5 - 1];
            double ox = 0.0;

            (void)ox;
            for (i = 0; i < d->n_points; i++) {
                const JwcPoint *p = &d->points[i];

                if (p->rest[1] < 0x5a && p->layer == k) {
                    if (p->rest[1] == 5) { p5x = p->x; p5y = p->y; pt5 = i + 1; }
                    if (p->rest[1] == 6) { p6x = p->x; p6y = p->y; pt6 = i + 1; }
                }
            }
            /* 底辺の線の近い端を原点に、遠い端へ向かう枠（原点を指す点があればその点が原点） */
            if (((fabsf(b->y0 - p5y) - fabsf(b->y1 - p5y)) + fabsf(b->x0 - p5x)) > fabsf(b->x1 - p5x)) {
                frame_set((double)b->x1, (double)b->y1, (double)b->x0, (double)b->y0);
            } else {
                frame_set((double)b->x0, (double)b->y0, (double)b->x1, (double)b->y1);
            }
            if (pt5) { fr_ox = p5x; fr_oy = p5y; }
            if (!pt6 && flag40) {
                if (!pt5) frame_set((double)b->x0, (double)b->y0, (double)b->x1, (double)b->y1);
                pt6 = 1;
                p6x = fr_ox;
                p6y = fr_oy;
                if (pt5) { p6x = p5x; p6y = p5y; }
            }
            if (!pt6) {
                p6x = p6y = 99999.0f;
                for (i = 0; i < d->n_lines; i++) {
                    const JwcLine *l = &d->lines[i];

                    if (l->pen >= 0x5a || l->layer != k || l->type == 9) continue;
                    if (l->x0 < p6x) p6x = l->x0;
                    if (l->y0 < p6y) p6y = l->y0;
                    if (l->x1 < p6x) p6x = l->x1;
                    if (l->y1 < p6y) p6y = l->y1;
                }
                for (i = 0; i < d->n_arcs; i++) {
                    const JwcArc *a = &d->arcs[i];

                    if (a->pen >= 0x5a || a->layer != k || a->type == 9) continue;
                    if (a->cx < p6x) p6x = a->cx;
                    if (a->cy < p6y) p6y = a->cy;
                }
            }
            E.pt6x = p6x;
            E.pt6y = p6y;
            E.sy = (double)999999.0f;
            E.sx = 0.0;
            if (line6) {
                const JwcLine *s = &d->lines[line6 - 1];
                const double dy = (double)(float)((double)s->y1 - (double)s->y0);
                const double dx = (double)(float)((double)s->x1 - (double)s->x0);
                const double len2 = dx * dx + dy * dy;

                if (len2 >= 0.001) {
                    const double len = sqrt(len2);
                    double sign;

                    if (fabs(dy) > 0.01) sign = dy > 0.0 ? 1.0 : -1.0;
                    else sign = dx > 0.0 ? 1.0 : -1.0;
                    if (sign > 0.0) {
                        E.sx = (double)(float)((double)s->x0 - (double)p6x);
                        E.sy = (double)(float)((double)s->y0 - (double)p6y);
                        E.ex = (double)(float)(dx / len);
                        E.ey = (double)(float)(dy / len);
                    } else {
                        E.sx = (double)(float)((double)s->x1 - (double)p6x);
                        E.sy = (double)(float)((double)s->y1 - (double)p6y);
                        E.ex = (double)(float)(-(dx / len));
                        E.ey = (double)(float)(-(dy / len));
                    }
                }
            }
        }
        consumed = (unsigned char *)calloc((size_t)d->n_texts + 3, 1);
        for (i = 0; i < d->n_lines; i++) {
            JwcLine l = d->lines[i];
            double hv0[12], hv1[12];
            int n0, n1, i0, i1;
            double z0, z1;
            double dd0, dd1;

            if (l.pen >= 0x5a || l.layer != k) continue;
            if (l.type == 9) continue;              /* flag40 の立面の線は未実装 */
            i0 = read_h(d, k, (double)l.x0, (double)l.y0, &n0, hv0);
            i1 = read_h(d, k, (double)l.x1, (double)l.y1, &n1, hv1);
            z0 = (double)(float)((double)h_f * hv0[1]);
            z1 = (double)(float)((double)h_f * hv1[1]);
            if ((l.rest[3] & 0x40) && flag40) z0 = z1 = 0.0;
            /* v の印は最後に読んだ文字（古いまま残る h_buf） */
            h_vflag = strchr(h_buf, 'V') != NULL || strchr(h_buf, 'v') != NULL;
            emit_line(&l, &E, z0, z1);
            dd0 = hv0[2];
            dd1 = hv1[2];
            if (n0 == 0 && n1 == 0 && lhflag) {
                n0 = n1 = 2;
                dd0 = dd1 = (double)lh;
                i0 = d->n_texts + 1;
                i1 = d->n_texts + 2;
                consumed[d->n_texts] = consumed[d->n_texts + 1] = 0;
            }
            if (n0 >= 2 && n1 >= 2) {
                emit_line(&l, &E, (double)(float)((double)h_f * dd0), (double)(float)((double)h_f * dd1));
            }
            if (n0 >= 2) {
                float tx, ty;
                int ci = i0;

                if (ci <= d->n_texts) { tx = d->texts[ci - 1].x0; ty = d->texts[ci - 1].y0; }
                else { tx = l.x0; ty = l.y0; }
                if (!consumed[ci - 1]) {
                    JwcLine vl = l;

                    consumed[ci - 1] = 1;
                    vl.x0 = vl.x1 = tx;
                    vl.y0 = vl.y1 = ty;
                    emit_line(&vl, &E, (double)(float)((double)h_f * hv0[1]),
                              (double)(float)((double)h_f * dd0));
                }
            }
            if (n1 >= 2) {
                float tx, ty;
                int ci = i1;

                if (ci <= d->n_texts) { tx = d->texts[ci - 1].x0; ty = d->texts[ci - 1].y0; }
                else { tx = l.x1; ty = l.y1; }
                if (!consumed[ci - 1]) {
                    JwcLine vl = l;

                    consumed[ci - 1] = 1;
                    vl.x0 = vl.x1 = tx;
                    vl.y0 = vl.y1 = ty;
                    emit_line(&vl, &E, (double)(float)((double)h_f * hv1[1]),
                              (double)(float)((double)h_f * dd1));
                }
            }
        }
        free(consumed);
    }
    free(used);
    (void)n;
    v_seg = h_out;
    v_nseg = h_n;
    h_out = NULL;
    /* 1e64 の最後（0x2f81d〜0x2fb3f）：高さのある線（端の高さが 0.001 以上）の A の外接の中心＝枠 1 の原点
     * [bp-0x5fe]・[bp-0x632]。無ければ [0xaa78]・[0xaa7c] の 250.0・150.0。 */
    {
        float minx = 99999.0f, maxx = -99999.0f, miny = 99999.0f, maxy = -99999.0f;
        long cnt = 0;

        for (i = 0; i < v_nseg; i++) {
            const Seg *q = &v_seg[i];

            if (!((double)q->z0 >= 0.001 || (double)q->z1 >= 0.001)) continue;
            cnt++;
            if (q->x0 < minx) minx = q->x0;
            if (q->x0 > maxx) maxx = q->x0;
            if (q->x1 < minx) minx = q->x1;
            if (q->x1 > maxx) maxx = q->x1;
            if (q->y0 < miny) miny = q->y0;
            if (q->y0 > maxy) maxy = q->y0;
            if (q->y1 < miny) miny = q->y1;
            if (q->y1 > maxy) maxy = q->y1;
        }
        v_f5fe = 250.0f;
        v_f632 = 150.0f;
        if (cnt) {
            v_f5fe = (float)((float)(maxx + minx) * 0.5f);
            v_f632 = (float)((float)(maxy + miny) * 0.5f);
        }
    }
    return v_nseg;
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
    frame_set((double)v_f5fe, (double)v_f632, cos(theta) * 100.0 + (double)v_f5fe, sin(theta) * 100.0 + (double)v_f632);
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

#ifdef O25_TRACE
        printf("TR %.9g %.9g %.9g %.9g %.9g %.9g\n", (double)v_seg[i].cx0, (double)v_seg[i].cy0, (double)v_seg[i].z0, (double)v_seg[i].cx1, (double)v_seg[i].cy1, (double)v_seg[i].z1);
#endif
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
    if (build(d, unit) <= 0) {
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

/* ②変更間隔（ovl25 3ab8:4f52、spec-opt8-view §3.3）：検査して採用する。mode 3 は回転の刻みだけ採用。
 * 戻り 1＝採用、0＝範囲外（欄を空にして入れ直し）。 */
int jw_o25v_set_steps(double rot, double mov, int have_mov)
{
    (void)have_mov;
    if (!(rot >= 0.1 && rot <= 90.0 && mov >= 0.1 && mov <= 100.0)) {
        return 0;
    }
    g_rot = (float)rot;
    if (v_mode != 3) {
        g_mov = (float)mov;
    }
    return 1;
}
