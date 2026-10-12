/* src/optdata_run.c -- ｵﾌﾟｼｮﾝ ④一括処理 ③データ整理 の実行（重複線整理・連結･重複線整理・ソート・同一文字整理）。
 *
 * 仕様と番地は notes/spec-opt4-cde.md の ③ の節（ovl17 3ab8:566c）。ソートは spec の読みが粗かったので、
 * 命令列（tools/disasm.py --ovl 17 0x5015 0x660、dis 0x2fb95〜0x301ec）から書き直した。
 * 対象は範囲の印（rest[2] の bit1）が付いたものだけ（src/cmd.c の範囲が付ける）。 */
#include <math.h>
#include <stdint.h>
#include <string.h>

#include "optdata.h"

#pragma STDC FP_CONTRACT OFF

#define TOL       1.0e-4          /* DS:[0x9d28]（double） */
#define LEN_TOL   1.0e-4f         /* DS:[0x9d34]（＋）・DS:[0x9d30]（−）（float） */
#define DEL_PEN   0x64            /* 削除印は線色に 0x64（dis 0x2f804・0x2f0aa） */
#define SORT_PENS 6

static int line_sel(const JwcLine *l)
{
    return l->pen < 0x5a && (l->rest[2] & 2) && !(l->rest[2] & 0xc0);
}

/* ----- 座標系（root 1bb4:27ea・2981・2a18。src/optbatch.c の frame_* と同じ丸め） */
static float fr_ox, fr_oy, fr_ux, fr_uy, fr_len;

static int frame_set(double x1, double y1, double x2, double y2)
{
    double dx, dy, len;

    fr_ox = (float)x1;
    fr_oy = (float)y1;
    dx = x2 - x1;
    dy = y2 - y1;
    if (!(fabs(dy) + fabs(dx) >= 0.001)) {      /* DS:[0x93b8] */
        fr_ux = 1.0f;
        fr_uy = 0.0f;
        fr_len = 0.0f;
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

/* ----- 線（ovl17 3ab8:400a、spec 3.4.2） */
static int run_lines(Jwc *d, int mode)
{
    const long n = d->n_lines;
    long i, j, del = 0;
    int changed_any = 0;

    for (i = 0; i < n; i++) {
        JwcLine *A = &d->lines[i];

        if (!line_sel(A)) {
            continue;
        }
        /* 極短線は不要線として消す（`不要線消去`）。 */
        if (!frame_set(A->x0, A->y0, A->x1, A->y1)) {
            A->pen = DEL_PEN;
            del++;
            changed_any = 1;
            continue;
        }
        for (j = n - 1; j > i;) {
            JwcLine *B = &d->lines[j];
            float bmin, bmax, ub0, ub1, L1, L2;
            int moved = 0;

            if (!line_sel(B) || B->layer != A->layer || B->pen != A->pen || B->type != A->type) {
                j--;
                continue;
            }
            /* 同一直線：B の両端が A の直線から tol 以内。 */
            if (fabs((double)fr_v(B->x0, B->y0)) > TOL || fabs((double)fr_v(B->x1, B->y1)) > TOL) {
                j--;
                continue;
            }
            ub0 = fr_u(B->x0, B->y0);
            ub1 = fr_u(B->x1, B->y1);
            bmin = ub0 < ub1 ? ub0 : ub1;
            bmax = ub0 < ub1 ? ub1 : ub0;
            if (mode == 1) {
                L1 = -LEN_TOL;
                L2 = (float)((double)fr_len + (double)LEN_TOL);
            } else {
                L1 = LEN_TOL;
                L2 = (float)((double)fr_len - (double)LEN_TOL);
            }
            if (bmax < L1 || bmin > L2) {
                j--;
                continue;
            }
            if (bmin < -LEN_TOL) {
                const float nx = fr_X(bmin, 0.0), ny = fr_Y(bmin, 0.0);

                A->x0 = nx;
                A->y0 = ny;
                moved = 1;
            }
            if ((double)bmax > (double)fr_len + (double)LEN_TOL) {
                const float nx = fr_X(bmax, 0.0), ny = fr_Y(bmax, 0.0);

                A->x1 = nx;
                A->y1 = ny;
                moved = 1;
            }
            B->pen = DEL_PEN;
            del++;
            changed_any = 1;
            if (moved) {
                /* A の座標系を作り直して、B をまた最後から。 */
                frame_set(A->x0, A->y0, A->x1, A->y1);
                j = n - 1;
            } else {
                j--;
            }
        }
    }
    if (del) {
        long k, m = 0;

        for (k = 0; k < n; k++) {
            if (d->lines[k].pen != DEL_PEN) {
                d->lines[m++] = d->lines[k];
            }
        }
        d->n_lines = m;
    }
    return changed_any;
}

/* ----- 円弧・円（ovl17 3ab8:37d3、spec 3.4.3） */
#define ANG_K 0x01680000L                  /* 360 度（16.16） */

static long ang_norm(long x)               /* root 1bb4:63ae：K ちょうどは K のまま（dis 0x21f05〜） */
{
    while (x > ANG_K) {
        x -= ANG_K;
    }
    while (x < 0) {
        x += ANG_K;
    }
    return x;
}

/* 消した跡を黒で塗らない：本物は B を詰めたあと A を描き直すだけで、重なっていた A の画素を黒で
 * 残さない（測定：optdata_run_screens の u_run1、同じ円を消しても円は残る）。移植は毎回記録から
 * 描き直すので、墨の記録（jwc_ink_note）を付けずに詰める。 */
static void drop_arc(Jwc *d, long k)
{
    memmove(d->arcs + k, d->arcs + k + 1, (size_t)(d->n_arcs - k - 1) * sizeof *d->arcs);
    d->n_arcs--;
}

static void drop_point(Jwc *d, long k)
{
    memmove(d->points + k, d->points + k + 1, (size_t)(d->n_points - k - 1) * sizeof *d->points);
    d->n_points--;
}

static void drop_text(Jwc *d, long k)
{
    memmove(d->texts + k, d->texts + k + 1, (size_t)(d->n_texts - k - 1) * sizeof *d->texts);
    d->n_texts--;
}

static int arc_sel(const JwcArc *a)
{
    return a->pen < 0x5a && (a->rest[2] & 2);
}

static int in_tol(float v, double c)
{
    return v >= (float)(c - TOL) && v <= (float)(c + TOL);
}

static int run_arcs(Jwc *d, int mode)
{
    long i, j;
    int changed_any = 0, any = 0;

    for (i = 0; i < d->n_arcs; i++) {
        if (arc_sel(&d->arcs[i])) {
            any = 1;
        }
    }
    if (!any) {
        return 0;
    }
    for (i = 0; i < d->n_arcs; i++) {
        JwcArc *A = &d->arcs[i];

        if (!arc_sel(A)) {
            continue;
        }
        if (A->flatten == 10000 && A->tilt != 0) {
            /* 円の傾きは角度に畳み込む（レコードに書き戻す）。 */
            A->start = ang_norm(A->start + A->tilt);
            A->end = ang_norm(A->end + A->tilt);
            A->tilt = 0;
            changed_any = 1;
        }
        for (j = d->n_arcs - 1; j > i;) {
            JwcArc B = d->arcs[j];
            long a0, a1, b0, b1;
            int changed = 0;

            if (!arc_sel(&B) || B.type != A->type || B.pen != A->pen || B.layer != A->layer
                || !in_tol(B.cx, A->cx) || !in_tol(B.cy, A->cy) || !in_tol(B.r, A->r)
                || B.flatten != A->flatten || (A->flatten != 10000 && B.tilt != A->tilt)) {
                j--;
                continue;
            }
            if (B.flatten == 10000 && B.tilt != 0) {
                B.start = ang_norm(B.start + B.tilt);
                B.end = ang_norm(B.end + B.tilt);
                B.tilt = 0;
            }
            if (A->start == A->end) {
                /* A が全周：B はそのまま消える。 */
            } else if (B.start == B.end) {
                A->start = 0;
                A->end = 0;
                changed = 1;
            } else if (A->start == B.start && A->end == B.end) {
                /* 同じ区間：B を消すだけ。 */
            } else {
                a0 = A->start;
                a1 = A->end;
                b0 = B.start;
                b1 = B.end;
                if (A->start < A->end && B.start > B.end) {
                    b1 += ANG_K;
                    if (mode == 1 ? B.start > A->end : B.start >= A->end) {
                        a0 += ANG_K;
                        a1 += ANG_K;
                    }
                } else if (A->start > A->end) {
                    if (B.start < B.end) {
                        a1 += ANG_K;
                        if (mode == 1 ? B.end < A->start : B.end <= A->start) {
                            b0 += ANG_K;
                            b1 += ANG_K;
                        }
                    } else if (B.start > B.end) {
                        a1 += ANG_K;
                        b1 += ANG_K;
                    }
                }
                if (mode == 1 ? !(b1 >= a0 && b0 <= a1) : !(b1 > a0 && b0 < a1)) {
                    j--;
                    continue;
                }
                if (b0 < a0) {
                    a0 = b0;
                    changed = 1;
                }
                if (b1 > a1) {
                    a1 = b1;
                    changed = 1;
                }
                if (a1 - a0 >= ANG_K) {
                    a0 = a1 = 0;
                    changed = 1;
                }
                A->start = ang_norm(a0);
                A->end = ang_norm(a1);
            }
            changed_any = 1;
            drop_arc(d, j);
            j = changed ? d->n_arcs - 1 : j - 1;
            A = &d->arcs[i];
        }
    }
    return changed_any;
}

/* ----- 点（ovl17 3ab8:3557、spec 3.4.4）：mode は見ない。 */
static int pt_sel(const JwcPoint *p)
{
    return p->rest[1] < 0x5a && (p->rest[2] & 2);
}

static int run_points(Jwc *d)
{
    long i, j;
    int changed_any = 0;

    for (i = 0; i + 1 < d->n_points; i++) {
        if (!pt_sel(&d->points[i])) {
            continue;
        }
        for (j = d->n_points - 1; j > i; j--) {
            const JwcPoint *A = &d->points[i], *B = &d->points[j];

            if (!pt_sel(B) || B->layer != A->layer || B->rest[1] != A->rest[1]) {
                continue;
            }
            if (in_tol(B->x, A->x) && in_tol(B->y, A->y)) {
                drop_point(d, j);
                changed_any = 1;
            }
        }
    }
    return changed_any;
}

/* ----- ソート（ovl17 3ab8:5015、dis 0x2fb95〜0x301ec） */
static void swap_line(Jwc *d, long a, long b)       /* 4f54：同じ位置なら何もしない */
{
    if (a != b) {
        const JwcLine t = d->lines[a];

        d->lines[a] = d->lines[b];
        d->lines[b] = t;
    }
}

/* 比べる鍵：float の大小と同じ順の整数（dis 0x2fbd1〜、0x2fd31〜）。 */
static int32_t fkey(float f)
{
    uint32_t b;

    memcpy(&b, &f, 4);
    return (int32_t)((b & 0x80000000u) ? (0u - (b & 0x7fffffffu)) : b);
}

static uint32_t uabs32(uint32_t a)
{
    return (a & 0x80000000u) ? 0u - a : a;
}

/* 4dd9：点 P（鍵 px・py）と線 B の距離。min(d0,d1) を符号つき 32 ビットのまま返し、`d1<=d0` なら flag=0。 */
static int32_t line_dist(int32_t px, int32_t py, const JwcLine *B, int *flag)
{
    const uint32_t d0 = uabs32((uint32_t)fkey(B->x0) - (uint32_t)px)
                      + uabs32((uint32_t)fkey(B->y0) - (uint32_t)py);
    const uint32_t d1 = uabs32((uint32_t)fkey(B->x1) - (uint32_t)px)
                      + uabs32((uint32_t)fkey(B->y1) - (uint32_t)py);

    if ((int32_t)d1 <= (int32_t)d0) {
        *flag = 0;
        return (int32_t)d1;
    }
    *flag = 1;
    return (int32_t)d0;
}

/* 呼び元の「前回の並べ終わりの位置」（1 始まり）。③に入るたびに 1（dis 0x301f7）。 */
static long sortpos = 1;

void jw_optdata_sort_reset(void)
{
    sortpos = 1;
}

static int run_sort(Jwc *d)
{
    const long n = d->n_lines;
    const int32_t inf = fkey(1.0e20f);                  /* DS:[0x9d38] */
    const int32_t origin = fkey(0.0f);                  /* DS:[0x9cf8] */
    long k0 = n, k, i, cnt = 0, s, pos, p;
    int moved = 0;

    /* 1. 曲線印のあるものを配列の後ろへ（i=n..1 で見つけたら swap(i,k)、k--）。 */
    for (i = n - 1; i >= 0; i--) {
        if (d->lines[i].rest[2] & 0xc0) {
            swap_line(d, i, k0 - 1);
            k0--;
            moved = 1;
        }
    }
    k = k0 - 1;                                         /* 残りの先頭側の最後（0 始まり） */
    /* 2. 範囲印のあるものをさらに後ろへ。 */
    {
        long kk = k;

        for (i = k; i >= 0; i--) {
            if (d->lines[i].rest[2] & 2) {
                swap_line(d, i, kk);
                kk--;
                cnt++;
            }
        }
        s = kk + 1;
    }
    if (cnt == 0) {
        return moved;
    }
    pos = s;
    for (p = 1; p <= SORT_PENS; p++) {
        long t = k, best = -1, a;
        int32_t bestd = inf, px = origin, py = origin;
        int bestflag = 0, flag = 0, dir;

        /* 線色 p のものを後ろへ集めながら、原点に最も近いものを探す（dis 0x2fd61〜0x2fdd6）。 */
        for (i = k; i >= pos; i--) {
            if (d->lines[i].pen == p) {
                const int32_t dd = line_dist(px, py, &d->lines[i], &flag);

                if (dd < bestd) {
                    bestd = dd;
                    best = t;
                    bestflag = flag;
                }
                swap_line(d, i, t);
                t--;
            }
        }
        if (t == k || best < 0) {
            continue;
        }
        t++;
        swap_line(d, best, t);
        /* 最近傍の鎖（dis 0x3003c〜0x30034）：a を並べ終えたものとして、遠い端から次を探す。 */
        dir = 1;
        for (a = t; a <= k - 1; a++) {
            const JwcLine *L = &d->lines[a];
            long j0, j, bestp = -1;

            if (bestflag == 0) {
                px = fkey(L->x0);
                py = fkey(L->y0);
            } else {
                px = fkey(L->x1);
                py = fkey(L->y1);
            }
            bestd = inf;
            j0 = dir > 0 ? a + 1 : k;
            for (j = j0; j > a && j <= k; j += dir) {
                const int32_t dd = line_dist(px, py, &d->lines[j], &flag);

                if (dd < bestd) {
                    bestd = dd;
                    bestp = j;
                    bestflag = flag;
                    if (dd == 0) {
                        break;
                    }
                }
            }
            if (bestp >= 0) {
                swap_line(d, a + 1, bestp);
                dir = (k - bestp) > (bestp - a) ? 1 : -1;
            }
        }
        if (p == SORT_PENS) {
            break;                      /* 線色 6 の塊は後ろのまま（dis 0x3011a） */
        }
        for (a = t; a <= k; a++) {
            swap_line(d, a, pos);
            pos++;
        }
    }
    /* 範囲内の線を、前回の並べ終わりの位置から詰める（dis 0x30126〜0x301e3）。 */
    if (sortpos - 1 < s) {
        long q = sortpos - 1;

        for (i = s; i <= k; i++) {
            swap_line(d, i, q);
            q++;
        }
        sortpos = q + 1;
    }
    return 1;
}

/* ----- 同一文字整理（ovl24 3ab8:0000、spec 3.6） */
static int run_texts(Jwc *d)
{
    long i, j;
    int changed_any = 0, any = 0;

    for (i = 0; i < d->n_texts; i++) {
        if (d->texts[i].rest[2] & 2) {
            any = 1;
        }
    }
    if (!any) {
        return 0;
    }
    for (i = 0; i < d->n_texts; i++) {
        if (!(d->texts[i].rest[2] & 2)) {
            continue;
        }
        for (j = d->n_texts - 1; j > i; j--) {
            const JwcText *A = &d->texts[i], *B = &d->texts[j];

            if (!(B->rest[2] & 2) || B->layer != A->layer || B->size != A->size) {
                continue;
            }
            if (strcmp(A->text ? A->text : "", B->text ? B->text : "") != 0) {
                continue;
            }
            if (fabsf(A->x0 - B->x0) < 0.01f && fabsf(A->y0 - B->y0) < 0.01f
                && fabsf(A->x1 - B->x1) < 0.01f && fabsf(A->y1 - B->y1) < 0.01f) {
                drop_text(d, j);
                changed_any = 1;
            }
        }
    }
    return changed_any;
}

int jw_optdata_run(Jwc *d, int mode)
{
    int changed = 0;

    if (!d) {
        return 0;
    }
    switch (mode) {
    case 1:
    case 2:
        /* 円弧・円 → 点 → 線（dis 0x2ef32〜0x2ef47）。 */
        changed |= run_arcs(d, mode - 1);
        changed |= run_points(d);
        changed |= run_lines(d, mode - 1);
        break;
    case 3:
        changed |= run_sort(d);
        break;
    case 4:
        changed |= run_texts(d);
        break;
    default:
        break;
    }
    return changed;
}
