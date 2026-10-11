/* src/optbatch.c -- ｵﾌﾟｼｮﾝ ④一括処理 ①直線伸縮・②直線部分消。
 *
 * 仕様と番地は notes/spec-opt4-ab.md（ovl17 3ab8:5be3、decomp から起こしたもの）。
 * 番地は ovl17 の file-linear（3ab8:xxxx は +0x2ab80）。
 * 「測定」と書いたものは実機（tools/probe.sh・steps_table.py・functest.sh）で採った値。 */
#include <math.h>
#include <string.h>

#include "optbatch.h"
#include "cmd.h"
#include "draw.h"
#include "ui.h"

/* ------------------------------------------------------------------ 状態 */

static int ob_m = 1;                    /* 1 ＝①直線伸縮、2 ＝②直線部分消 */
static JwcLine ob_A;                    /* ①の基準線（押した瞬間の写し）／②の B（消し始め） */
static JwcLine ob_B;                    /* ②の消し始め基準線 */
static JwcLine ob_C;                    /* ②の消し終り基準線 */
static float ob_p1x, ob_p1y;            /* 始線の足元（始線に落とした垂線の足） */
static float ob_dx, ob_dy;              /* トレース線 P1→P2 の向き（float に丸めた） */
static float ob_x1, ob_y1, ob_x2, ob_y2;/* トレース線の両端 */
static int ob_same;                     /* 始線を右で押した（同種線選択） */
static unsigned char ob_pen1, ob_type1, ob_layer1;
static int ob_ex, ob_ey;                /* 終線の段に入った押しの画面位置（ゴム線は動くまで出ない） */
static int ob_msg;                      /* 行 2 の言葉：0 無し、1 データが不適当(桁20)、2 曲線不可(桁24) */

/* ------------------------------------------------------------ 計算の精度 */
/* **本物は浮動小数点をソフトウェアの実行時ライブラリ（セグメント 22b2）で計算し、演算は
 * 型ごとに float 用・double 用に分かれる。** isect（root 1bb4:3cd1）は引数も途中の変数も
 * float なので、演算を 1 つずつ float に丸める。測定：isect の引数を実機の DOSEMU_BP
 * （root 1bb4:3cd1 のスタック）で採り、保存した記録の座標と突き合わせると、倍精度で解く
 * 式（spec 5.1）は斜めの基準線で 3 ulp ずれ、float の演算だと TEST4 の 9 点・SAMPLE6 の
 * 61 点・SAMPLE3 の 1 点が全部ビット一致した（rest ... tmp の fit2/fit3.py）。
 * 一括選択の交差判定（5.3）は double のまま（float にすると始線の端が選択線に
 * ほぼ乗る場合に本物が選ぶ線を落とす：obf_SAMPLE3_11_0）。座標系は spec どおり double。 */
#pragma STDC FP_CONTRACT OFF

/* ----------------------------------------------------------------- 座標系 */
/* root 1bb4:27ea・2981・2a18（spec 5.2）。float の大域に置く。 */
static float fr_ox, fr_oy, fr_ux, fr_uy;

/* 27ea(x1,y1,x2,y2)（引数は float を double にしたもの）：成功 1／失敗 0。
 * **原点は先に置く**（失敗しても置かれる）。失敗のとき本物は BEL と `データが不適当`
 * （桁 20）を出して [0xc22]=1。 */
static int frame_set(double x1, double y1, double x2, double y2)
{
    double dx, dy, len;

    fr_ox = (float)x1;
    fr_oy = (float)y1;
    dx = x2 - x1;
    dy = y2 - y1;
    if (!(fabs(dy) + fabs(dx) >= 0.001)) {      /* DS:[0x93b8] */
        ob_msg = 1;
        fr_ux = 1.0f;
        fr_uy = 0.0f;
        return 0;
    }
    len = sqrt(dy * dy + dx * dx);
    fr_ux = (float)(dx / len);
    fr_uy = (float)(dy / len);
    return 1;
}

/* 2981(1,x,y)＝u、2a18(1,x,y)＝v：世界→線の座標。 */
static float fr_u(double x, double y)
{
    return (float)((y - fr_oy) * fr_uy + (x - fr_ox) * fr_ux);
}

static float fr_v(double x, double y)
{
    return (float)((y - fr_oy) * fr_ux - (x - fr_ox) * fr_uy);
}

/* 2981(0,u,v)＝X、2a18(0,u,v)＝Y：線の座標→世界。 */
static float fr_X(double u, double v)
{
    return (float)(((double)fr_ux * u - (double)fr_uy * v) + fr_ox);
}

static float fr_Y(double u, double v)
{
    return (float)(((double)fr_ux * v + (double)fr_uy * u) + fr_oy);
}

/* ------------------------------------------------------------------ 交点 */
/* root 1bb4:3cd1（decomp/lift/root_1bb4_3cd1_isect.txt、spec 5.1）。A は基準側、
 * B は求める側（点は B の上で測る）。0 は平行だけ。①②は 0 かどうかしか見ない。
 * 演算は上の注のとおり 1 つずつ float に丸める。 */
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
        *X = 10.0f;                             /* DS:[0x93e8] */
        *Y = 10.0f;
        return 0;
    }
    {
        const float d = fabsf(c18 - c1c);

        if (d < 1.0f && fabsf(c18) > d * 1e10f) {   /* ほぼ平行 */
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
    if (A->x0 == A->x1) *X = A->x0;
    if (A->y1 == A->y0) *Y = A->y0;
    if (B->x0 == B->x1) *X = B->x0;
    if (B->y1 == B->y0) *Y = B->y0;
    return 1;
}

/* ① の範囲定数（DS:[0x9d3c..]、どこからも書かれない初期値）：端を含む。 */
static int in_range(float x, float y)
{
    return !(x < -600.0f || x > 1400.0f || y < -400.0f || y > 1000.0f);
}

/* -------------------------------------------------------------- レイヤの検査 */
/* 885:0004：`layer_edit[layer]&6` か `group_edit[layer>>4]&6` が非 0 なら保護（spec §2）。 */
static int layer_block(const Jwc *d, unsigned layer)
{
    return (d->layer_edit[layer & 255] & 6) || (d->group_edit[(layer >> 4) & 15] & 6);
}

/* 11f2:06d1：レイヤが表示中か。`layer_edit[layer]&1 && group_edit[layer>>4]&1`（jwc.c が
 * 読む 2 組のうちの先の組。本物の再描画 21f2:0680 が見る後の組 layer_on とは TEST7 の
 * レイヤ C・D・E だけ違う）。`[0xc16]`・`[0xc17]` は既定 0 と推測（spec §2【推】）。 */
static int layer_shown(const Jwc *d, unsigned layer)
{
    return (d->layer_edit[layer & 255] & 1) && (d->group_edit[(layer >> 4) & 15] & 1);
}

/* 7a6:0066・7a6:0111：線・円弧・点・文字の rest[2] の bit1 を全部落とす。 */
static void marks_clear(Jwc *d)
{
    long k;

    for (k = 0; k < d->n_lines; k++) d->lines[k].rest[2] &= (unsigned char)~2u;
    for (k = 0; k < d->n_arcs; k++) d->arcs[k].rest[2] &= (unsigned char)~2u;
    for (k = 0; k < d->n_points; k++) d->points[k].rest[2] &= (unsigned char)~2u;
    for (k = 0; k < d->n_texts; k++) d->texts[k].rest[2] &= (unsigned char)~2u;
}

/* 11f2:67fa：線の記録を末尾に足す。ペン<0x5a で長さ 0 なら足さない（185d3）。 */
static void append_line(Jwc *d, const JwcLine *r)
{
    JwcLine t = *r;

    if (t.pen < 0x5a && t.x0 == t.x1 && t.y0 == t.y1) {
        return;
    }
    /* 足した記録には読み取りの印（bit0）も範囲の印（bit1）も無い（測定：functest
     * opt4ab_1 で、足した 2 本の rest[2] が 00。複写の dup_line と同じ。spec 6 の
     * 「印は付いたまま」は違った）。bit4 は jwc_put_line が付け直す。 */
    t.rest[2] &= (unsigned char)~3u;
    /* rest[3] の bit3（0x08）も落ちる（測定：SAMPLE6 の追加線 54 本が 08→00、0x20 の 3 本は
     * そのまま。0x80・0x40 は未測定）。 */
    t.rest[3] &= (unsigned char)~0x08u;
    jwc_put_line(d, &t);
}

/* ------------------------------------------------------------ 実行（5.4） */
static void run_stretch(Jwc *d)
{
    long n = d->n_lines, k = 0;
    JwcLine T;

    memset(&T, 0, sizeof T);
    T.x0 = ob_x1;
    T.y0 = ob_y1;
    T.x1 = ob_x2;
    T.y1 = ob_y2;
    while (k < n) {
        JwcLine R = d->lines[k];
        float X, Y, X2, Y2, uT, L, uA;

        if (!(R.rest[2] & 0x02)) { k++; continue; }
        if (!isect(&ob_A, &R, &X, &Y)) { k++; continue; }
        if (!in_range(X, Y)) { k++; continue; }
        if (!isect(&T, &R, &X2, &Y2)) { k++; continue; }
        if (!frame_set(R.x0, R.y0, R.x1, R.y1)) { k++; continue; }
        uT = fr_u(X2, Y2);
        L = fr_u(R.x1, R.y1);
        uA = fr_u(X, Y);
        if (uT < 0.0f) uT = 0.0f;
        if (uT > L) uT = L;
        jwc_remove_line(d, k);
        n--;
        if (uA > 0.0f && uA < L) {              /* 交点が線の内側：トレースが交わった側を残す */
            if (uT >= uA) { R.x0 = X; R.y0 = Y; }
            else          { R.x1 = X; R.y1 = Y; }
        } else if (uA > 0.0f) {                 /* uA >= L：終点を交点へ伸ばす */
            R.x1 = X; R.y1 = Y;
        } else {                                /* uA <= 0：始点を交点へ伸ばす */
            R.x0 = X; R.y0 = Y;
        }
        append_line(d, &R);
        /* k は進めない：次の線が k に来る。足した分は n の外なので再訪しない。 */
    }
}

/* ------------------------------------------------------------ 実行（5.5） */
static void run_erase(Jwc *d)
{
    long n = d->n_lines, k = 0;

    while (k < n) {
        const JwcLine R0 = d->lines[k];
        float XB, YB, XC, YC, L, uB, vB, uC, vC, lo, hi;
        int left, right;

        if (!(R0.rest[2] & 0x02)) { k++; continue; }
        if (!frame_set(R0.x0, R0.y0, R0.x1, R0.y1)) { k++; continue; }
        if (!isect(&ob_B, &R0, &XB, &YB)) { k++; continue; }
        if (!in_range(XB, YB)) { k++; continue; }
        if (!isect(&ob_C, &R0, &XC, &YC)) { k++; continue; }
        if (!in_range(XC, YC)) { k++; continue; }
        L = fr_u(R0.x1, R0.y1);
        uB = fr_u(XB, YB);
        vB = fr_v(XB, YB);
        uC = fr_u(XC, YC);
        vC = fr_v(XC, YC);
        if (uC < uB) {                          /* u だけ入れ替える（vB・vC はそのまま） */
            const float t = uB;

            uB = uC;
            uC = t;
        }
        lo = uB;
        hi = uC;
        if (!(hi > 0.0f && lo < L)) { k++; continue; }
        jwc_remove_line(d, k);
        n--;
        left = lo > 0.0f;
        right = hi < L;
        if (left) {                             /* 始点側の残りを先に足す */
            JwcLine P = R0;

            P.x1 = fr_X(lo, vB);
            P.y1 = fr_Y(lo, vB);
            append_line(d, &P);
        }
        if (right) {                            /* 終点側の残りをあとに */
            JwcLine Q = R0;

            Q.x0 = fr_X(hi, vC);
            Q.y0 = fr_Y(hi, vC);
            append_line(d, &Q);
        }
    }
}

/* ---------------------------------------------------------- 一括選択（5.3） */
/* O4-4 の押しで、トレース線 (X1,Y1)-(X2,Y2) に交わる線を全部選ぶ。 */
static void select_all(Jwc *d)
{
    long k, n = d->n_lines;
    int curve = 0;

    for (k = 0; k < n; k++) {
        JwcLine *R = &d->lines[k];
        double cA, cB, rdx, rdy, f1, f2;

        if (!layer_shown(d, R->layer)) continue;
        if (R->rest[2] & 0xC0) { curve = 1; continue; }
        /* 第一の検査：R の両端がトレース線の両側（または線上）。DX・DY は float に丸めた値。 */
        cA = ((double)R->y1 - ob_y1) * ob_dx - ((double)R->x1 - ob_x1) * ob_dy;
        cB = ((double)R->y0 - ob_y1) * ob_dx - ((double)R->x0 - ob_x1) * ob_dy;
        if (!(cA * cB <= 0.0)) continue;
        /* 第二の検査：トレース線の両端が R の直線の両側（または線上）。 */
        rdx = (double)R->x1 - R->x0;
        rdy = (double)R->y1 - R->y0;
        f1 = ((double)ob_y2 - R->y0) * rdx - ((double)ob_x2 - R->x0) * rdy;
        f2 = ((double)ob_y1 - R->y0) * (double)(float)rdx
           - ((double)ob_x1 - R->x0) * (double)(float)rdy;
        if (!(f1 * f2 <= 0.0)) continue;
        if (ob_same && !(R->pen == ob_pen1 && R->type == ob_type1
                         && R->layer == ob_layer1)) continue;
        if (layer_block(d, R->layer)) continue;
        R->rest[2] |= 0x02;
    }
    if (curve) {
        ob_msg = 2;
    }
}

/* ------------------------------------------------------------------ 入口 */
void jw_optbatch_reset(void)
{
    ob_msg = 0;
}

void jw_optbatch_open(int item, int *opt_stage)
{
    ob_m = item == 2 ? 2 : 1;
    ob_msg = 0;
    *opt_stage = JW_OPT_BATCH;
}

/* 押した点に近い線（11f2:5670）。n<0 は無し（円弧は BEL で同じ段）。 */
static long find_line(Jwc *d, const JwView *w, int x, int y)
{
    return jw_cmd_pick_line(d, w, x, y);
}

/* 実行・中止のあと、基準線の段へ戻る。 */
static void to_base(int *opt_stage)
{
    *opt_stage = JW_OPT_BATCH;
}

/* O4-3 の入口：印を全部落とす。 */
static void to_start(Jwc *d, int *opt_stage)
{
    marks_clear(d);
    ob_same = 0;
    *opt_stage = JW_OPT_BATCH_START;
}

/* O4-5 の ①（一括処理実行）。 */
static int do_run(Jwc *d, int *opt_stage)
{
    if (ob_m == 1) {
        run_stretch(d);
    } else {
        run_erase(d);
    }
    to_base(opt_stage);
    return JW_OB_CHANGED;
}

/* BS（0x14）：O4-1／O4-2a だけ。④の小帯へ。 */
static int do_back(int *opt_stage, int *leave_band)
{
    *opt_stage = 0;
    *leave_band = 1;
    return JW_OB_TAKEN;
}

int jw_optbatch_click(Jwc *d, const JwView *w, int x, int y, int right,
                      int top_item, int top_cell,
                      int area_x0, int area_y0, int area_x1, int area_y1,
                      int *opt_stage, int *leave_band, int *missed)
{
    int stage = *opt_stage;

    *leave_band = 0;
    *missed = 0;
    if (stage < JW_OPT_BATCH) {
        /* ④の小帯：①②だけここで受ける（③④⑤は別の担当）。 */
        if (stage == 0 && top_item == 4 && y >= 0 && y <= 15
            && (top_cell == 1 || top_cell == 2)) {
            jw_optbatch_open(top_cell, opt_stage);
            return JW_OB_TAKEN;
        }
        return JW_OB_NONE;
    }
    if (!d) {
        return JW_OB_NONE;
    }
    ob_msg = 0;                                 /* 行 2 の言葉は次の押しで消える（2a18） */
    /* 上の行 */
    if (y >= 0 && y <= 15) {
        if (stage == JW_OPT_BATCH_ADD) {
            if (top_cell == 1) {
                return do_run(d, opt_stage);
            }
            if (top_cell == 2) {
                to_base(opt_stage);
                return JW_OB_TAKEN;
            }
            return JW_OB_TAKEN;
        }
        /* [BS]前項 のある段（O4-1・O4-2a）では、行 1 の右（x>580）の押しが BS（2cb4）。 */
        if (stage == JW_OPT_BATCH && x > 580) {
            return do_back(opt_stage, leave_band);
        }
        return JW_OB_TAKEN;
    }
    if (x < area_x0 || x > area_x1 || y < area_y0 || y > area_y1) {
        return JW_OB_NONE;
    }
    /* 図面の押し */
    if (stage == JW_OPT_BATCH || stage == JW_OPT_BATCH_END) {
        /* O4-1 基準線（①）／O4-2a 消し始め／O4-2b 消し終り：5670 で線を取って写す。
         * 保護も長さ 0 の検査もここではしない（spec 4.1〜4.3）。 */
        const long n = find_line(d, w, x, y);

        if (n < 0) {
            *missed = 1;                        /* 読取可能データ無＋BEL */
            return JW_OB_TAKEN;
        }
        if (stage == JW_OPT_BATCH_END) {
            ob_C = d->lines[n];
            to_start(d, opt_stage);
        } else if (ob_m == 1) {
            ob_A = d->lines[n];
            to_start(d, opt_stage);
        } else {
            ob_B = d->lines[n];
            *opt_stage = JW_OPT_BATCH_END;
        }
        return JW_OB_TAKEN;
    }
    if (stage == JW_OPT_BATCH_START) {
        const long n = find_line(d, w, x, y);
        JwcLine *R1;
        double px, py;
        float u1;

        if (n < 0) {
            *missed = 1;
            return JW_OB_TAKEN;
        }
        R1 = &d->lines[n];
        if (layer_block(d, R1->layer)) {        /* 保護は無言で同じ段 */
            return JW_OB_TAKEN;
        }
        if (!frame_set(R1->x0, R1->y0, R1->x1, R1->y1)) {
            return JW_OB_TAKEN;                 /* 長さ<0.001：データが不適当 */
        }
        jw_cmd_at(w, x, y, &px, &py);
        u1 = fr_u((float)px, (float)py);
        ob_p1x = fr_X(u1, 0.0);
        ob_p1y = fr_Y(u1, 0.0);
        ob_same = right ? 1 : 0;
        ob_pen1 = R1->pen;
        ob_type1 = R1->type;
        ob_layer1 = R1->layer;
        R1->rest[2] |= 0x02;
        ob_ex = x;
        ob_ey = y;
        *opt_stage = JW_OPT_BATCH_TRACE;
        return JW_OB_TAKEN;
    }
    if (stage == JW_OPT_BATCH_TRACE) {
        const long n = find_line(d, w, x, y);
        JwcLine *R2;
        double px, py;

        if (n < 0) {
            *missed = 1;
            return JW_OB_TAKEN;
        }
        R2 = &d->lines[n];
        if (layer_block(d, R2->layer)) {
            return JW_OB_TAKEN;
        }
        jw_cmd_at(w, x, y, &px, &py);
        ob_x1 = ob_p1x;
        ob_y1 = ob_p1y;
        ob_x2 = (float)px;
        ob_y2 = (float)py;
        if (!(ob_same && (R2->pen != ob_pen1 || R2->type != ob_type1
                          || R2->layer != ob_layer1))) {
            R2->rest[2] |= 0x02;
        }
        ob_dx = (float)((double)ob_x2 - ob_x1);
        ob_dy = (float)((double)ob_y2 - ob_y1);
        select_all(d);
        *opt_stage = JW_OPT_BATCH_ADD;
        return JW_OB_TAKEN;
    }
    if (stage == JW_OPT_BATCH_ADD) {
        const long n = find_line(d, w, x, y);

        if (n < 0) {
            *missed = 1;
            return JW_OB_TAKEN;
        }
        if (layer_block(d, d->lines[n].layer)) {
            return JW_OB_TAKEN;
        }
        if (d->lines[n].rest[2] & 0xC0) {       /* 曲線の連なりは BEL だけで同じ段（字は出ない） */
            return JW_OB_TAKEN;
        }
        d->lines[n].rest[2] ^= 0x02;            /* 印のトグル（左右同じ） */
        return JW_OB_TAKEN;
    }
    return JW_OB_NONE;
}

int jw_optbatch_key(Jwc *d, int key, int *opt_stage, int *leave_band)
{
    const int stage = *opt_stage;

    *leave_band = 0;
    if (stage < JW_OPT_BATCH) {
        return JW_OB_NONE;
    }
    ob_msg = 0;
    if (key == 8) {                             /* BS は O4-1・O4-2a だけ。ほかは捨てる */
        return stage == JW_OPT_BATCH ? do_back(opt_stage, leave_band) : JW_OB_TAKEN;
    }
    if (key == 27) {
        switch (stage) {
        case JW_OPT_BATCH:
            break;                              /* ESC は捨てる（2cb4 の flag 0） */
        case JW_OPT_BATCH_END:
            *opt_stage = JW_OPT_BATCH;          /* O4-2b → O4-2a */
            break;
        case JW_OPT_BATCH_START:
            *opt_stage = JW_OPT_BATCH;          /* ①は O4-1、②は O4-2a（消し終りへは戻らない） */
            break;
        case JW_OPT_BATCH_TRACE:
        case JW_OPT_BATCH_ADD:
            if (d) to_start(d, opt_stage);      /* O4-3 の入口（印を全部落とす） */
            break;
        default:
            break;
        }
        return JW_OB_TAKEN;
    }
    if (key == 13 || key == 10) {
        if (stage == JW_OPT_BATCH_ADD && d) {
            return do_run(d, opt_stage);        /* Enter＝①実行 */
        }
        return JW_OB_TAKEN;
    }
    return JW_OB_NONE;
}

/* ------------------------------------------------------------------ 字 */
static const char S_BASE1[] =
    "\x81\x9e\x81i\x88\xea\x8a\x87 \x92\xbc\x90\xfc \x90L\x8fk\x81j   "
    "\x8a\xee\x8f\x80\x90\xfc\x81@\x83}\x83" "E\x83X\x8ew\x8e\xa6 ";
static const char S_BASE2A[] =
    "\x81\x9e\x81i\x88\xea\x8a\x87 \x92\xbc\x90\xfc \x95\x94\x95\xaa\x8f\xc1\x81j   "
    "\x81m\x8f\xc1\x82\xb5\x8en\x82\xdf\x81n\x82\xcc \x8a\xee\x8f\x80\x90\xfc\x81@"
    "\x83}\x83" "E\x83X\x8ew\x8e\xa6 ";
static const char S_BASE2B[] =
    "\x81\x9e\x81i\x88\xea\x8a\x87 \x92\xbc\x90\xfc \x95\x94\x95\xaa\x8f\xc1\x81j     "
    "\x81y\x8f\xc1\x82\xb5\x8fI\x82\xe8\x81z\x82\xcc \x8a\xee\x8f\x80\x90\xfc\x81@"
    "\x83}\x83" "E\x83X\x8ew\x8e\xa6 ";
static const char S_START[] =
    " \x81\x9e\x88\xea\x8a\x87\x8f\x88\x97\x9d\x82\xb7\x82\xe9\x90\xfc\x82\xcc "
    "\x81i\x8en\x90\xfc\x81j\x83}\x83" "E\x83X\x8ew\x8e\xa6  "
    "\x81m\xcf\xb3\xbd(R) \x93\xaf\x8e\xed\x90\xfc\x91I\x91\xf0\x81n";
static const char S_TRACE[] =
    " \x81\x9e\x88\xea\x8a\x87\x8f\x88\x97\x9d\x82\xb7\x82\xe9\x90\xfc\x82\xcc   "
    "\x81y\x8fI\x90\xfc\x81z\x83}\x83" "E\x83X\x8ew\x8e\xa6 ";
static const char S_ADD[] =
    "\x92\xc7\x89\xc1\x90\xfc\xa5\x8f\x9c\x8aO\x90\xfc \x83}\x83" "E\x83X\x8ew\x8e\xa6 "
    "|\x87@\x88\xea\x8a\x87\x8f\x88\x97\x9d\x8e\xc0\x8ds |\x87" "A \x92\x86\x8e~ | "
    "\x95\x9c\x8a\x88\x8fo\x97\x88\x82\xdc\x82\xb9\x82\xf1 ";
static const char S_BS[] = "[BS]\x91O\x8d\x80";
static const char S_BAD[] = "\x07\x83" "f\x81[\x83^\x82\xaa\x95s\x93K\x93\x96";
static const char S_CURVE[] = "\x8b\xc8\x90\xfc\x95s\x89\xc2";

void jw_optbatch_text(VGA *v, int opt_stage)
{
    switch (opt_stage) {
    case JW_OPT_BATCH:
        jw_ui_text(v, 8, 1, 7, 0, ob_m == 1 ? S_BASE1 : S_BASE2A);
        jw_ui_text(v, 73, 1, 7, 0, S_BS);
        break;
    case JW_OPT_BATCH_END:
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
        jw_ui_text(v, 8, 1, 7, 0, S_BASE2B);
        break;
    case JW_OPT_BATCH_START:
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
        jw_ui_text(v, 8, 1, 7, 0, S_START);
        break;
    case JW_OPT_BATCH_TRACE:
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
        jw_ui_text(v, 8, 1, 7, 0, S_TRACE);
        break;
    case JW_OPT_BATCH_ADD:
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
        jw_ui_text(v, 8, 1, 7, 0, S_ADD);
        break;
    default:
        break;
    }
    if (ob_msg == 1) {
        jw_ui_text(v, 20, 2, 7, 0, S_BAD);
    } else if (ob_msg == 2) {
        jw_ui_text(v, 24, 2, 7, 0, S_CURVE);
    }
}

/* ------------------------------------------------------------------ 図 */
/* 基準線の強調（3ab8:5ab6）：黒で消してから、ペン 7（色 2）・線種 0（点線 0x5555）。
 * 選んだ線の強調（7a6:033b）：消さずに、ペン 7（色 2）の**実線**で重ねる（測定：
 * probe_opt4_ab の opt4a_1 の 5 手め。始線は縦線 x=161 が y 139〜419 の全部赤）。
 * 本物は図面の線と同じ描き（0EFF:17BB）なので、移植も jw_view_line に記録のペン・線種だけ
 * 替えた写しを通す（jw_view_mark は端の丸めが違い、縦線の点線の位相が 1 つずれる）。 */
static void hilite(VGA *v, const Jwc *d, const JwView *w, const JwcLine *l, int base)
{
    JwcLine t = *l;

    if (base) {
        jw_view_mark(v, w, l->x0, l->y0, l->x1, l->y1, 0, JW_STYLE_SOLID, ROP_REPLACE);
    }
    t.pen = 7;
    t.type = base ? 0 : 1;
    jw_view_line(v, d, &t, w, 0);
}

void jw_optbatch_overlay(VGA *v, const Jwc *d, const JwView *w, int opt_stage,
                         int mouse_x, int mouse_y)
{
    long k;

    if (!d || opt_stage < JW_OPT_BATCH) {
        return;
    }
    v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
    v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
    v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
    v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
    if (opt_stage >= JW_OPT_BATCH_TRACE) {
        for (k = 0; k < d->n_lines; k++) {
            if ((d->lines[k].rest[2] & 0x02) && layer_shown(d, d->lines[k].layer)) {
                hilite(v, d, w, &d->lines[k], 0);
            }
        }
    }
    /* 基準線の強調（5ab6）：O4-1/2a は無し、O4-2b は B、O4-3 以降は ①A／②B と C。 */
    if (opt_stage == JW_OPT_BATCH_END) {
        hilite(v, d, w, &ob_B, 1);
    } else if (opt_stage >= JW_OPT_BATCH_START) {
        if (ob_m == 1) {
            hilite(v, d, w, &ob_A, 1);
        } else {
            hilite(v, d, w, &ob_B, 1);
            hilite(v, d, w, &ob_C, 1);
        }
    }
    if (opt_stage == JW_OPT_BATCH_TRACE && mouse_x >= w->x0 && mouse_y >= w->y0
        && (mouse_x != ob_ex || mouse_y != ob_ey)) {
        int sx0 = (int)((ob_p1x - w->ox) * w->scale + w->ax);
        int sy0 = (int)(w->ay - (ob_p1y - w->oy) * w->scale);

        /* ゴム線：色 4（緑）・排他的論理和・点線 0x2222（測定：probe_opt4_ab opt4a_move） */
        jw_line(v, sx0, sy0, mouse_x, mouse_y, 4, ROP_XOR, 0x2222);
    }
}
