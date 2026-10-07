/* The command state machine.  See cmd.h. */
#include "cmd.h"

#include "read.h"

#include "draw.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void jw_cmd_pick(JwCmd *c, int command)
{
    /* ＋・／ の長さと角度は**命令を選び直しても残ります**。本物は DGROUP の
     * 0x0fe0・0x0fe4 に持っている（命令の中の変数ではない）ので、
     * `前回と同じ ﾏｳｽ(R)` は前に打った数です。初めは 1000 と 45。 */
    const int had = c->ask_len > 0.0;   /* まだ一度も作っていなければ 0 */
    const int keep_lc_off = c->lc_off;
    const double keep_len = c->ask_len, keep_ang = c->ask_ang;
    const double keep_bw = c->box_w, keep_bh = c->box_h;
    const double keep_cr = c->circ_r;
    const double keep_ba = c->box_ang;
    const double keep_aa = c->arc_ang;
    const double keep_ar = c->arc_r;
    const double keep_ea = c->ell_a, keep_eb = c->ell_b, keep_ee = c->ell_ang;
    const double keep_rg0 = c->rep_gap[0], keep_rg1 = c->rep_gap[1];
    double keep_gh[5];

    memcpy(keep_gh, c->gap_hist, sizeof keep_gh);
    free(c->hen_end);
    free(c->sel_line);
    free(c->sel_arc);
    free(c->sel_text);
    memset(c, 0, sizeof(*c));
    c->command = command;
    /* 複線 remembers the interval between runs, and its line says so before
     * anything has been typed: `(R)同じ寸法[    1000.000]`.  A thousand is
     * what the original had when src/prompt.h was captured -- the program's
     * state, like the five numbers [F1] to [F5] stand for. */
    c->gap = 1000.0;
    c->gap_hist[0] = 1000.0;
    c->gap_hist[1] = 100.0;
    c->gap_hist[2] = 200.0;
    c->gap_hist[3] = 300.0;
    c->gap_hist[4] = 500.0;
    if (keep_gh[0] != 0.0) {
        memcpy(c->gap_hist, keep_gh, sizeof keep_gh);   /* 命令を替えても残る */
    }
    /* コーナー連結 has no line in hand yet. */
    c->pick_a = -1;
    c->pick_b = -1;
    /* 複線's 前線と連続(R)：まだ一本も複写していないので前の基準線は無い。 */
    c->off_prev_pick = -1;
    c->off_prev_copy = -1;
    /* 面取's `③寸法= 30.000`, which is where the original starts. */
    c->gap_chamfer = 30.0;
    /* ２線's `①基準線からの間隔＝ 75.000 , 75.000 (mm)`, likewise. */
    c->gap_two[0] = c->gap_two[1] = 75.0;
    /* 分割's `[2]`, the count it offers as 前回と同じ. */
    /* **寸法設定の既定。** 本物は最初からこの値を持っています。
     * ページ側（src/main_wasm.c）にしか無かったので、`JwCmd` を
     * 直に作る検査では小数桁が 0 になり、`29.8` が `30` に
     * なっていました（273 画素）。 */
    c->dim_pen = 1;
    c->dim_pen_point = 1;
    c->dim_gap_mm = 0.5;
    c->dim_arrow_mm = 3.0;
    c->dim_angle_deg = 15.0;
    c->dim_dec = 1;
    /* 線記号変形の倍率は 1 倍から始まります（本物の表示が
     * `①倍率 横,縦(  1.00,  1.00)`）。 */
    c->kigou_mag_x = 1.0;
    c->kigou_mag_y = 1.0;
    c->dim_comma_on = 1;
    c->divisions = 2;
    /* 正多角形's `[5]`, likewise. */
    c->sides = 5;
    /* 文編集 has no text in hand. */
    c->edit_text = -1;
    c->te_pick = -1;
    /* 連線's `③丸 面   辺寸法 ` as the original comes up with it. */
    c->edge_mm = 3.0;
    /* 寸法 ④円･角 ③書込角度 の `[  90.000\xdf]`、その欄の前回と同じ。 */
    c->dim_ck_prev = 90.0;
    /* 変形 ③複線化 の `③間隔  100.00(mm)` と `④留線【有】`。 */
    c->hand_step = 4;           /* 作図ｽﾃｯﾌﾟ の既定（測定） */
    c->hen_dbl_gap = 100.0;
    c->hen_dbl_cap = 1;
    /* ハッチ's `[  45.00]` and `[  10.0]`, likewise. */
    c->hatch_angle = 45.0;
    c->hatch_pitch = 10.0;
    c->ch_r = 1000.0;           /* 曲線 ⑥連続弧 の ③半径 の欄 */
    c->spl_div = 5;             /* 曲線 ③ｽﾌﾟﾗｲﾝ の区間分割数 */
    /* 曲線 ①ｻｲﾝ曲線 の三つの欄（紙のミリ）。 */
    c->sine_cycle = 2000.0;
    c->sine_amp = 1000.0;
    c->sine_div = 100.0;
    /* 円線接 ②接円 の `①接円半径= 1000.00`。 */
    c->tan_r = 1000.0;
    /* 円線接 ①接線 ④角度指定 の `[  45.000\xdf]`、その欄の前回と同じ。 */
    c->tan_prev = 45.0;
    /* ＋ and ／'s `[  1000.000mm]` and `[  45.000\xdf]`, likewise. */
    c->ask_len = had ? keep_len : 1000.0;
    c->ask_ang = had ? keep_ang : 45.0;
    c->box_w = had ? keep_bw : 1000.0;
    c->box_h = had ? keep_bh : 1000.0;
    c->circ_r = had ? keep_cr : 1000.0;
    c->box_ang = had ? keep_ba : 45.0;
    c->arc_ang = had ? keep_aa : 90.0;
    c->arc_r = had ? keep_ar : 1000.0;
    /* ○ ②楕円 の `[1000.000, 500.000mm]` と `[  90.000ﾟ]`（本物の初め）。 */
    c->ell_a = keep_ea > 0.0 ? keep_ea : 1000.0;
    c->rep_gap[0] = keep_rg0 > 0.0 ? keep_rg0 : 5.0;
    c->rep_gap[1] = keep_rg1 > 0.0 ? keep_rg1 : 20.0;
    c->ell_b = keep_eb > 0.0 ? keep_eb : 500.0;
    c->ell_ang = keep_ee != 0.0 || keep_ea > 0.0 ? keep_ee : 90.0;
    /* 線変更 ②レイヤ変更【有】⇔【無】 (c->lc_off) も DGROUP 側の記憶
     * （decomp：ovl26 FUN_4000_0cb6 が読む DS:[0x5e40]）で、命令の中の
     * 変数ではない。選び直しても、他の命令を挟んでも【無】のままになる
     * （測定：tools/functest.sh、SAMPLE6、`30 200 left|type 2|30 216
     * left|key esc|30 200 left|499 271 left` で本物は layer=00 の
     * まま——消去を挟んでから線変更を選び直しても戻らない）。 */
    c->lc_off = keep_lc_off;
}

void jw_cmd_at(const JwView *w, int sx, int sy, double *x, double *y)
{
    *x = (sx - w->ax) / w->scale + w->ox;
    *y = (w->ay - sy) / w->scale + w->oy;
}

/* Where the drawing point (x,y) lands on the screen -- the same sum
 * src/view.c does, and truncated the same way. */
static void at_screen(const JwView *w, double x, double y, int *sx, int *sy)
{
    *sx = (int)((x - w->ox) * w->scale + w->ax);
    *sy = (int)(w->ay - (y - w->oy) * w->scale);
}

/* 数の欄の字。本物は数字・`.`・`,`・`+`・`-`・`*`・`/` を欄に入れます
 * （測定：□ ②角度 で 1 字ずつ打って上の行に出るもの。`(` は無視、英字は
 * 欄を閉じる——閉じるほうはまだ移していません）。 */
#define FIELD_CHAR(k) (((k) >= '0' && (k) <= '9') || (k) == '.' || (k) == '-'                        || (k) == ',' || (k) == '+' || (k) == '*' || (k) == '/')
/* 入力欄の長さの上限（decomp numin 3ab8 root 0x27a3：欄の開始桁 + 入力済み文字数 > 78 で
 * 受け付けない）。ui が描いたカーソルの桁（0 起点の x/8。1 起点では +1 = 開始桁 + 文字数）が
 * 78 以下のあいだ入る。
 * カーソルがまだ描かれていないときは従来の 10 文字。 */
#define FIELD_ROOM(c) (((c)->field_cursor >= 0 ? (c)->field_cursor + 1 <= 78 : (c)->typed_n < 10) \
                       && (c)->typed_n < (int)sizeof (c)->typed - 1)

/* 欄の値。`,` の手前までを式として読みます（測定：`30+10` で 40 度、
 * `100/4/5` で 5 度、`40,30` で 40 度）。**掛け算・割り算を先に**しますが、
 * 本物は `2+3*4` と `10-2-3` で四角を描かなかった——そこはまだ分かって
 * いません。 */
static double field_term(const char **p)
{
    double v = strtod(*p, (char **)p);

    for (;;) {
        if (**p == '*') {
            (*p)++;
            v *= strtod(*p, (char **)p);
        } else if (**p == '/') {
            double d;

            (*p)++;
            d = strtod(*p, (char **)p);
            v = d != 0.0 ? v / d : 0.0;
        } else {
            return v;
        }
    }
}

/* 複線 の 間隔 の履歴（decomp：ovl7 0x2ca6f〜0x2cc43）：現在の間隔が
 * 99999.5 未満なら、履歴に差 0.001 未満の同じ値があればその位置（無ければ
 * 末尾の 5）から前へ一つずつずらして F1 に入れる。同じ値は重複させず先頭へ
 * 移す。 */
static void gap_remember(JwCmd *c)
{
    int i, k = 4;

    if (!(c->gap < 99999.5)) {
        return;
    }
    for (i = 0; i < 5; i++) {
        const double df = c->gap_hist[i] - c->gap;

        if ((df < 0 ? -df : df) < 0.001) {
            k = i;
            break;
        }
    }
    for (i = k; i > 0; i--) {
        c->gap_hist[i] = c->gap_hist[i - 1];
    }
    c->gap_hist[0] = c->gap;
}

static double field_eval(const char *s)
{
    const char *p = s;
    double v = field_term(&p);

    while (*p == '+' || *p == '-') {
        const int minus = *p == '-';

        p++;
        v += minus ? -field_term(&p) : field_term(&p);
    }
    return v;
}

/* ＋ draws a line along one axis: whichever of the two the pointer is further
 * along.  Measured -- (300,200) to (450,250) comes out 150 pixels at 0 degrees
 * and (300,200) to (350,350) 150 pixels at -90, and the two equal at 100 each
 * go down, so it is "sideways only when sideways is the longer". */
static void axis(const JwCmd *c, double *x, double *y)
{
    const double dx = *x - c->x0, dy = *y - c->y0;

    if ((dx < 0 ? -dx : dx) > (dy < 0 ? -dy : dy)) {
        *y = c->y0;
    } else {
        *x = c->x0;
    }
}

/* ＋・／ の ②寸法：長さを固定したときの終点。本物はオーバーレイ 23 の
 * 0x2db8c〜0x2dcc3 で、
 *
 *   d = 1bb4:2aaf(始点, 矢)            -- 紙の mm での距離（float）
 *   d < 0.001 なら終点は始点
 *   k = (double)長さ / d
 *   x = (float)(k * (float)(矢x - 始点x) + 始点x)
 *   y = (float)((float)(矢y - 始点y) * k + 始点y)
 *
 * 2aaf の中身は s * sqrt(dx*(float)dx + (float)(dyf*dyf))、dx は double、
 * dyf は float、s は (float)(紙/518) と縮尺の float の積
 * （jwc_zukei_scale）。測定：SAMPLE0 で 50 を打ち (250,200) → (400,280) で
 * (129,263)-(205.945938,221.962173)。 */
static void fix_end(const JwCmd *c, const Jwc *d, double *x, double *y)
{
    const float x0 = (float)c->x0, y0 = (float)c->y0;
    const float cx = (float)*x, cy = (float)*y;
    const float s = jwc_zukei_scale(d);
    const double dy = (double)cy - (double)y0;
    const float dyf = (float)dy;
    const double dx = (double)cx - (double)x0;
    const float dxf = (float)dx;
    const float dist = (float)((double)s
                               * sqrt(dx * (double)dxf
                                      + (double)(float)(dyf * dyf)));
    double k;

    if ((double)dist < 0.001) {
        *x = x0;
        *y = y0;
        return;
    }
    k = (double)(float)c->ask_len / (double)dist;
    *x = (float)(k * (double)(float)(cx - x0) + (double)x0);
    *y = (float)((double)(float)(cy - y0) * k + (double)y0);
}

/* ＋・／ の ③角度：向きを固定したときの終点。本物はオーバーレイ 23 の
 * 0x2d002〜0x2d081 と 0x2d4ea〜0x2d5b7 で、
 *
 *   a  = (float)(角度 + 軸角)                  -- 軸角は [0xa158]、ふだん 0
 *   cs = (float)cos((double)a * π/180)，sn = (float)sin(同じ)
 *   原点は始点（始点を押したときに [0xb30c]/[0xb37e] に入る）
 *   u  = 1bb4:2981(向き 1, 矢)                 -- 矢をその向きへ映した長さ
 *   終点 = 1bb4:2981/2a18(向き 0, u, 0)
 *
 * 測定：30 を打って (250,200) → (400,280) で (129,263)-(206.858978,307.951904)。
 * ②寸法 も決まっていれば、このあとで長さを合わせます（本物も 0x2db82 で
 * 続けて見ている）。 */
static void fix_dir(const JwCmd *c, double *x, double *y)
{
    const float a = (float)((float)c->ask_ang + 0.0f);
    const double r = (double)a * 0.017453292519943295;
    const float cs = (float)cos(r), sn = (float)sin(r);
    const float ox = (float)c->x0, oy = (float)c->y0;
    const float px = (float)*x, py = (float)*y;
    const float u = (float)(((double)py - oy) * sn + ((double)px - ox) * cs);

    *x = (float)((double)cs * u - (double)sn * 0.0 + ox);
    *y = (float)((double)cs * 0.0 + (double)sn * u + oy);
}

/* ＋ で ③角度 を決めたとき：水平・垂直の軸のほかに、その角度の軸が一本増える。いちばん長く
 * 落ちる軸を取る（測定：plus_s0_c3_v は 30 度で、(-100,-110) では 30 度の軸（-150 度）、
 * (-288,80) では水平。c5_v の 0 度は元の水平垂直と同じ）。decomp 未照合。 */
static void axis_rot(const JwCmd *c, double *x, double *y)
{
    const double a = (double)(float)c->ask_ang * 0.017453292519943295;
    const double dx = *x - c->x0, dy = *y - c->y0;
    const double u1 = dy * sin(a) + dx * cos(a);
    const double adx = dx < 0 ? -dx : dx, ady = dy < 0 ? -dy : dy;

    if ((u1 < 0 ? -u1 : u1) > (adx > ady ? adx : ady)) {
        fix_dir(c, x, y);
    } else {
        axis(c, x, y);
    }
}

/* □ の ①寸法：大きさが決まっているときの四隅。本物はオーバーレイ 23 の
 * 0x2f8e5〜0x3008e で、
 *
 *   s  = (float)縮尺 * (float)(紙/518)          -- 1 単位が紙の何 mm か
 *   W  = (float)(横 / s)、H = (float)(縦 / s)
 *   u0 = (float)((double)(基点i+1) * W * -0.5)、v0 も同じ
 *   u1 = (float)(u0 + W)、v1 = (float)(v0 + H)
 *   座標系の原点は矢の点、cos=1・sin=0（軸角が無いとき）
 *   隅 = ((float)(u + 矢x), (float)(v + 矢y))
 *
 * の (u0,v0) → (u0,v1) → (u1,v1) → (u1,v0) → (u0,v0) の 4 本（縦が先）。
 * 測定：100,50 を打って (300,250) で (91.7946091,169.397308) から
 * (266.205383,256.602692)。 */
static void box_corners(const JwCmd *c, const Jwc *d, double px, double py,
                        float X[5], float Y[5])
{
    const float s = jwc_zukei_scale(d);
    const float W = (float)c->box_w / s, H = (float)c->box_h / s;
    const float u0 = (float)((double)(c->box_bi + 1) * (double)W * -0.5);
    const float v0 = (float)((double)(c->box_bj + 1) * (double)H * -0.5);
    const float u1 = u0 + W, v1 = v0 + H;
    const float ox = (float)px, oy = (float)py;
    const float U[5] = { u0, u0, u1, u1, u0 };
    const float V[5] = { v0, v1, v1, v0, v0 };
    int k;

    for (k = 0; k < 5; k++) {
        X[k] = (float)((double)U[k] + (double)ox);
        Y[k] = (float)((double)V[k] + (double)oy);
    }
}

/* □ の ②角度：傾いた四角の四隅。本物はオーバーレイ 23 の 0x2f7b3〜0x2f861
 * と 0x2fd05〜0x3008e で、
 *
 *   cs/sn = (float)cos/sin((float)角度 * π/180)、原点は始点
 *   u = 矢を u へ映したもの、v = v へ映したもの（1bb4:2981/2a18 の向き 1）
 *   u0 = -(基点 * u)、v0 = -(v * 基点)、u1 = (基点+1)*u + u0、v1 = v*(基点+1) + v0
 *   隅 = (u0,v0) → (u0,v1) → (u1,v1) → (u1,v0) を図面へ戻したもの
 *
 * （基点 は始点の角なら 0）。測定：30 度で (250,200) → (400,300) が
 * (129,263)-(209.80127,123.048096)-(279,163)-(198.19873,302.951904)。 */
static void tilt_corners(const JwCmd *c, double px, double py,
                         float X[5], float Y[5])
{
    const float a = (float)c->box_ang;
    const double r = (double)a * 0.017453292519943295;
    /* ③平行 なら基準線の向き（1bb4:27ea：(float)(dx/L), (float)(dy/L)）。 */
    const float cs = c->box_ref ? c->par_cs : (float)cos(r);
    const float sn = c->box_ref ? c->par_sn : (float)sin(r);
    const float ox = (float)c->x0, oy = (float)c->y0;
    const float mx = (float)px, my = (float)py;
    const float u = (float)(((double)my - oy) * sn + ((double)mx - ox) * cs);
    const float v = (float)(((double)my - oy) * cs - ((double)mx - ox) * sn);
    const int b = 0;
    const float u0 = -((float)b * u), v0 = -(v * (float)b);
    const float u1 = (float)(b + 1) * u + u0, v1 = v * (float)(b + 1) + v0;
    const float U[5] = { u0, u0, u1, u1, u0 };
    const float V[5] = { v0, v1, v1, v0, v0 };
    int k;

    for (k = 0; k < 5; k++) {
        X[k] = (float)((double)cs * U[k] - (double)sn * V[k] + ox);
        Y[k] = (float)((double)cs * V[k] + (double)sn * U[k] + oy);
    }
}

/* ／ の ④平行・⑤垂直：基準線の向きへ映した終点。座標系は基準線から
 * 1bb4:27ea と同じく cos=(float)(dx/L)、sin=(float)(dy/L)（⑤ は 90 度
 * 回す）、原点は始点。**斜めの基準線ではまだ測っていない**（SAMPLE0 の
 * 縦の枠で測定：(250,200) → (400,280) が長さ 45.869、角度 -90）。 */
static void par_dir(const JwCmd *c, double *x, double *y)
{
    const float cs = c->par_cs, sn = c->par_sn;
    const float ox = (float)c->x0, oy = (float)c->y0;
    const float px = (float)*x, py = (float)*y;
    const float u = (float)(((double)py - oy) * sn + ((double)px - ox) * cs);

    *x = (float)((double)cs * u - (double)sn * 0.0 + ox);
    *y = (float)((double)cs * 0.0 + (double)sn * u + oy);
}

static long ang16(double x1, double y1, double x2, double y2);
static int ellipse_put(JwCmd *c, Jwc *d, double deg);
static void place_undo(JwCmd *c, Jwc *d);
static void chamfer_bulk(JwCmd *c, Jwc *d);

/* （ ②半円の形：始点・終点（a3x/a3y）と向きの点 (mx,my) から、中心・半径と
 * 記録の二つの角度（始点側 a と a+180、向きの点を左回りに含む順）。 */
static void semi_of(const JwCmd *c, double mx, double my, double *ux,
                    double *uy, double *r, long *s0, long *e0)
{
    const long half = 180L << 16, full = 360L << 16;
    const double ax = c->a3x[0], ay = c->a3y[0];
    const double bx = c->a3x[1], by = c->a3y[1];
    long a, b, m;

    *ux = (ax + bx) / 2.0;
    *uy = (ay + by) / 2.0;
    *r = sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay)) / 2.0;
    a = ang16(*ux, *uy, ax, ay);
    b = (a + half) % full;
    m = ang16(*ux, *uy, mx, my);
    if (((m - a) % full + full) % full < half) {
        *s0 = a;
        *e0 = b;
    } else {
        *s0 = b;
        *e0 = a;
    }
}

/* ＋ の ④平行・垂直：基準線の座標系で、矢の長いほうの軸だけを残します
 * （本物は ovl23 の 0x2d097〜0x2d20e。1bb4:2981/2a18 の向き 1 で (u,v) に
 * 写し、|v| >= |u| なら (0,v)、そうでなければ (u,0) を向き 0 で戻す）。
 * 水平の座標系なら axis() と同じ。 */
static void plus_par(const JwCmd *c, double *x, double *y)
{
    const float cs = c->par_cs, sn = c->par_sn;
    const float ox = (float)c->x0, oy = (float)c->y0;
    const float px = (float)*x, py = (float)*y;
    float u = (float)(((double)py - oy) * sn + ((double)px - ox) * cs);
    float v = (float)(((double)py - oy) * cs - ((double)px - ox) * sn);

    if (fabs(v) >= fabs(u)) {
        u = 0.0f;
    } else {
        v = 0.0f;
    }
    *x = (float)((double)cs * u - (double)sn * v + ox);
    *y = (float)((double)cs * v + (double)sn * u + oy);
}

/* What the panel shows for a command in hand: a length and an angle for a line,
 * the two sides for a box, the radius and the diameter for a circle.  A length
 * is millimetres of the real thing -- drawing units over `unit_mm`, times the
 * scale -- and (300,200) to (400,200) is a hundred pixels, which the original
 * calls 57.336 mm on SAMPLE0: 100 / (518/297) / 1. */
static double shown_angle(double x1, double y1, double x2, double y2);

static void measure(JwCmd *c, const Jwc *d, double x, double y)
{
    const double mm = d->unit_mm > 0.0f ? d->denom / d->unit_mm : 1.0;
    const double dx = x - c->x0, dy = y - c->y0;

    c->dec[0] = c->dec[1] = d->decimals;
    if (c->command == 4) {
        /* 中心から押したなら幅は倍（測定：横= 114.672）。 */
        const double k = c->box_ctr ? 2.0 : 1.0;

        double mx = dx, my = dy;

        /* 傾けた □ の 横・縦 は傾けた枠の向きの成分（測定：box_s0_c2_v、30 度で 81.139 / 25.952）。 */
        if (c->box_rot || c->box_ref) {
            const double r = (double)(float)c->box_ang * 0.017453292519943295;
            const double cs = c->box_ref ? c->par_cs : (double)(float)cos(r);
            const double sn = c->box_ref ? c->par_sn : (double)(float)sin(r);

            mx = dy * sn + dx * cs;
            my = dy * cs - dx * sn;
        }
        c->num[0] = (mx < 0 ? -mx : mx) * mm * k;
        c->num[1] = (my < 0 ? -my : my) * mm * k;
    } else if (c->command == 11) {
        /* ②基点変 で ○ なら二点が直径（測定：半径= 42.618 直径= 85.236）。 */
        c->num[0] = sqrt(dx * dx + dy * dy) * mm / (c->circ_dia ? 2.0 : 1.0);
        c->num[1] = c->num[0] * 2.0;
    } else {
        c->num[0] = sqrt(dx * dx + dy * dy) * mm;
        /* An angle is degrees, so the drawing's scale has nothing to say about
         * it: always three decimals. */
        /* 本物の角度の道具（0def:2828）を float にしたもの。atan2 の
         * ちょうどの値とは 3 桁目がずれることがある（(150,-80) で -28.073）。 */
        c->num[1] = shown_angle((float)c->x0, (float)c->y0, (float)x, (float)y);
        (void)dx;
        (void)dy;
        c->dec[1] = 3;
        /* 「（」holds the radius still once the start point is in: the panel
         * kept saying 57.336 while the pointer went round to the end point and
         * only the angle followed it (RESUME 4.13). */
        if (c->command == 12 && c->pressed == 2) {
            const double rx = c->x1 - c->x0, ry = c->y1 - c->y0;
            /* 角度は**始点からの振れ**：中心から見た矢の角度と始点の角度
             * （どちらも 0〜360 度）の差の絶対値（測定：始点 90 度で矢が
             * 20.56 度なら 69.444、120.1 度なら 30.101、299.7 度なら
             * 209.745）。始点が 0 度なら矢の角度そのもの。 */
            const long a = ang16(c->x0, c->y0, x, y);
            const long s0 = ang16(c->x0, c->y0, c->x1, c->y1);

            c->num[0] = sqrt(rx * rx + ry * ry) * mm;
            c->num[1] = (float)((double)labs(a - s0) * 1.52587890625e-05);
            /* ②角度指定 で決めたあとは打った角度（測定：144 [Enter] で
             * 矢がどこでも `角度= 144.000ﾟ`）。 */
            if (c->arc_fix) {
                c->num[1] = c->arc_ang;
            }
        }
    }
}

/* The angle of a vector in degrees, brought into [0,360) the way the record
 * keeps it -- SAMPLE0's own arcs run from 0 up, and the one the original drew
 * for RESUME 4.13 came out 0 and 54.4623. */
static double angle_at(double dx, double dy)
{
    double a = atan2(dy, dx) * 180.0 / 3.14159265358979323846;

    while (a < 0.0) {
        a += 360.0;
    }
    while (a >= 360.0) {
        a -= 360.0;
    }
    return a;
}

static double hypot_of(double dx, double dy)
{
    return sqrt(dx * dx + dy * dy);
}

/* Degrees to the record's 16.16 fixed point (src/jwc.h). */
static long fixed16(double deg)
{
    return (long)(deg * 65536.0 + 0.5);
}

/* 本物の角度の道具 0def:2828 をそのまま（ルート 0x10718）。二点の向きを
 * 16.16 の度で、0 以上 360 未満。dx・dy は double、どちらかが 0 なら軸の
 * 角度そのもの、ほかは trunc(atan2(dy,dx) * 3754936.206 + 23592960.5) で
 * 360 以上なら 360 を引く（DGROUP 0x9254・0x925c の定数。3754936.206 は
 * 180/π×65536 の丸めで、ちょうどの値とは末尾が違う）。 */
static long ang16(double x1, double y1, double x2, double y2)
{
    const double dx = x2 - x1, dy = y2 - y1;
    long v;

    if (dy == 0.0) {
        return dx < 0.0 ? 180L << 16 : 0L;
    }
    if (dx == 0.0) {
        return dy < 0.0 ? 270L << 16 : 90L << 16;
    }
    v = (long)(atan2(dy, dx) * 3754936.206 + 23592960.5);
    if ((unsigned long)v >> 16 >= 360UL) {
        v -= 360L << 16;
    }
    return v;
}

/* 上の行に出す角度（度）。本物は ang16 を float にして ±180 に寄せる
 * （オーバーレイ 23 の 0x2e0b1〜0x2e154。測定：(150,-80) の向きが
 * `-28.073`——atan2 のちょうどの値だと -28.072）。 */
static double shown_angle(double x1, double y1, double x2, double y2)
{
    float a = (float)((double)ang16(x1, y1, x2, y2) * 1.52587890625e-05);

    while (a > 180.0f) {
        a = a - 360.0f;
    }
    while (a < -180.0f) {
        a = 360.0f + a;
    }
    return a;
}

static void two_lines(JwCmd *c, Jwc *d);
static int pt2_make(JwCmd *c, Jwc *d);
static int cross_at(const JwcLine *a, const JwcLine *b, double *x, double *y);
static int take(JwCmd *c, const Jwc *d, const JwView *w, int sx, int sy,
                int right, double *x, double *y);

/* 連線's direction rounding; the command itself is further down. */
static void poly_dir(const JwCmd *c, double dx, double dy,
                     double *ux, double *uy);
static void poly_mark(const JwCmd *c, VGA *v, const JwView *w);
static long poly_angle(double cx, double cy, double x, double y);
static void hatch_run(JwCmd *c, Jwc *d);
static int hatch_meet(const JwcLine *a, const JwcLine *b,
                      double *x, double *y);
static void hatch_free(const JwcLine *l, double cx, double cy, int have,
                       double *x, double *y);

void jw_cmd_track(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy)
{
    double x, y;

    /* 文編集 の位置指示の箱は矢に付く（矢の所が箱の左下）。 */
    if (c->command == 28 && c->te_pick >= 0) {
        c->te_mx = sx;
        c->te_my = sy;
        c->moved = 1;
        return;
    }

    /* **曲線 ⑤手書線 は矢が動くたびに引きます。** 始点を取ったあと、
     * 最後に置いた点から **作図ｽﾃｯﾌﾟ（ﾄﾞｯﾄ）以上離れたら**そこまで
     * 一本。離れ方は縦横の大きいほう（測定：ｽﾃｯﾌﾟ 4 で斜めに 3 ずつ
     * 動かすと引かれず、6 ずつなら引かれました）。 */
    if (c->command == 23 && c->hand && c->stage == 61 && d) {
        const int dx = sx > c->hand_sx ? sx - c->hand_sx : c->hand_sx - sx;
        const int dy = sy > c->hand_sy ? sy - c->hand_sy : c->hand_sy - sy;
        const int far = dx > dy ? dx : dy;

        if (far >= c->hand_step) {
            double nx, ny;

            jw_cmd_at(w, sx, sy, &nx, &ny);
            if (jwc_add_line(d, (float)c->hand_x, (float)c->hand_y,
                             (float)nx, (float)ny,
                             (unsigned char)d->line_type,
                             (unsigned char)d->pen,
                             (unsigned char)d->write_layer)) {
                /* 手書線の線は rest[1] 0xf5・rest[2] 0xc0（測定：
                 * curve_s0_c5）。 */
                d->lines[d->n_lines - 1].rest[1] = 0xf5;
                d->lines[d->n_lines - 1].rest[2] = 0xc0;
                c->hand_did = 1;
                if (c->hand_n < 256) {
                    c->hand_px[c->hand_n] = c->hand_x;
                    c->hand_py[c->hand_n] = c->hand_y;
                    c->hand_psx[c->hand_n] = c->hand_sx;
                    c->hand_psy[c->hand_n] = c->hand_sy;
                    c->hand_n++;
                }
            }
            c->hand_x = nx;
            c->hand_y = ny;
            c->hand_sx = sx;
            c->hand_sy = sy;
        }
    }

    if (sx != c->press_x || sy != c->press_y) {
        c->moved = 1;           /* one pixel is enough -- see JwCmd.moved */
        /* 線切断 waits for exactly this.  The cut is **at the press**, not
         * where the pointer went -- pressing at drawing x=99 and moving to
         * x=179 leaves 40.973..99 and 99..110.737 -- but it is not made until
         * the pointer leaves, and until then the counts box still says 30.
         * That is what the line above means by `□ 線切断はマウス移動`. */
        if (c->cutting) {
            c->cutting = 0;
            if (d && c->pick_a >= 0 && c->pick_a < d->n_lines) {
                jwc_split_line(d, c->pick_a, (float)c->cut_x, (float)c->cut_y);
            }
            c->pick_a = -1;
        }
        /* ２線 puts its pair down here for the same reason: `□ 終点 指示は
         * マウス移動`.  The base line stays chosen and it asks for another
         * start. */
        if (c->pending) {
            c->pending = 0;
            two_lines(c, d);
        }
        /* ２線 の読みは、押した位置から矢が離れたときに行う（点入力 3ab8:309e の 0x2e088。
         * 失敗は -1 で、帯を出し直して `読取可能データ無`、段は動かない）。 */
        if (c->dl_wait && c->command == 9 && d) {
            const int btn = c->dl_wait;
            double px, py;

            c->dl_wait = 0;
            if (!take(c, d, w, c->dl_sx, c->dl_sy, btn == 2, &px, &py)) {
                c->stage = c->dl_phase ? 2 : 1;
                c->dl_nopre = 1;
                c->missed = 1;
                c->moved = 1;
                return;
            }
            c->missed = 0;
            c->dl_nopre = 0;
            if (!c->dl_phase) {
                c->x0 = px;
                c->y0 = py;
                c->stage = 2;
            } else {
                c->x1 = px;
                c->y1 = py;
                c->stage = 3;
                two_lines(c, d);
            }
            c->moved = 1;
        }
    }
    if (d && c->command == 11 && c->circ_fix) {
        /* 数え箱の `半径=    30.000  ` `直径=    60.000  `。 */
        c->num[0] = (float)c->circ_r;
        c->num[1] = (float)c->circ_r * 2.0;
        c->dec[0] = c->dec[1] = d->decimals;
    }
    if (d && c->command == 4 && c->box_fix) {
        /* 数え箱の ` 横=   100.000 ` ` 縦=    50.000 `——決めた大きさ。 */
        c->num[0] = (float)c->box_w;
        c->num[1] = (float)c->box_h;
        c->dec[0] = c->dec[1] = d->decimals;
    }
    if (!d || !c->pressed) {
        return;
    }
    jw_cmd_at(w, sx, sy, &x, &y);
    if (c->command == 2 && c->par_on) {
        plus_par(c, &x, &y);
    } else if (c->command == 2 && c->fix_angle) {
        axis_rot(c, &x, &y);   /* ③角度 を決めたら水平垂直ではなくその角度（測定：plus_s0_c3_v） */
    } else if (c->command == 2) {
        axis(c, &x, &y);
    }
    if (c->command == 3 && c->par_on) {
        par_dir(c, &x, &y);
    } else if (c->command == 3 && c->fix_angle) {
        fix_dir(c, &x, &y);
    }
    if ((c->command == 2 || c->command == 3) && c->fix_len) {
        fix_end(c, d, &x, &y);
    }
    measure(c, d, x, y);
    if (c->command == 12 && c->pressed == 2 && c->arc_fix) {
        c->num[1] = (float)c->arc_ang;      /* `角度=  120.000ﾟ` */
    }
    if (c->command == 12 && c->pressed == 2 && c->arc_rfix) {
        c->num[0] = (float)c->arc_r;        /* `半径=    50.000` */
    }
}

static int offset_ends(const JwCmd *c, const JwView *w, int sx, int sy,
                       double *ax, double *ay, double *bx, double *by,
                       double *side);
static int offset_can_continue(const JwCmd *c, const Jwc *d, const JwView *w);

/* 図形 ②読込's ⑤仮表示: the figure follows the pointer until a press puts
 * it down.
 *
 * Colour 2 and exclusive-or, like every other band.  Measured -- with the
 * pointer at (190,72) SAMPLE0's BOX shows as a red column at x=251 from y=81
 * to 99, which is its base point at the pointer, and moved so that it crosses
 * the drawing's white frame the pixel where they meet comes out 00ffff, which
 * is 7 xor 2 and not 2. */
/* A point of the figure, turned by the angle in hand about the base point.
 *
 * The four quarter turns are done by swapping the two coordinates rather than
 * through a sine and a cosine, which for a quarter turn are 6.1e-17 and 1 and
 * would leave the answer a hair off.  ③90ﾟ毎 only ever makes those four. */
static void zukei_turn(const JwCmd *c, double x0, double y0,
                       double *ox, double *oy)
{
    /* ①倍率指定X,Y first, in the figure's own frame, and the turn after it.
     * **The screen is what was measured**, not this: the field and what it
     * says were read off the original, and a figure has not yet been placed
     * with a scale other than 1 to see which way round the two go. */
    const double x = x0 * c->zukei_mx;
    const double y = y0 * c->zukei_my;

    if (c->zukei_ang == 90.0f) {
        *ox = -y;
        *oy = x;
    } else if (c->zukei_ang == 180.0f) {
        *ox = -x;
        *oy = -y;
    } else if (c->zukei_ang == 270.0f) {
        *ox = y;
        *oy = -x;
    } else if (c->zukei_ang == 0.0f) {
        *ox = x;
        *oy = y;
    } else {
        const double t = c->zukei_ang * (3.14159265358979323846 / 180.0);
        const double cs = cos(t), sn = sin(t);

        *ox = x * cs - y * sn;
        *oy = x * sn + y * cs;
    }
}

static void zukei_ghost(const JwCmd *c, const Jwc *d, VGA *v,
                        const JwView *w, int sx, int sy)
{
    const JwcZukei *z = c->zukei_in;
    const float mmk = c->zukei_scale;
    double px, py;
    long k;

    if (!z || mmk == 0.0f) {
        return;
    }
    /* **Only while the pointer is over the drawing.**  Measured: ①選択確定
     * takes the figure with the pointer still on the top line, and nothing
     * is drawn until it comes back down -- where a press on the list's own
     * cell, which is inside the drawing, shows it at once. */
    if (sx < w->x0 || sx > w->x1 || sy < w->y0 || sy > w->y1) {
        return;
    }
    /* The chrome leaves the clip wide open and jw_line does not clip. */
    v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
    v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
    v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
    v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
    jw_cmd_at(w, sx, sy, &px, &py);
    for (k = 0; k < z->n_lines; k++) {
        const JwcLine *l = &z->lines[k];
        int x0, y0, x1, y1;

        double ax, ay, bx, by;

        zukei_turn(c, (double)(l->x0 / mmk), (double)(l->y0 / mmk), &ax, &ay);
        zukei_turn(c, (double)(l->x1 / mmk), (double)(l->y1 / mmk), &bx, &by);
        at_screen(w, px + ax, py + ay, &x0, &y0);
        at_screen(w, px + bx, py + by, &x1, &y1);
        jw_line(v, x0, y0, x1, y1, 2, 0x18, jw_view_line_style(l->type));
    }
    for (k = 0; k < z->n_arcs; k++) {
        const JwcArc *a = &z->arcs[k];
        double ux, uy;
        double cx, cy;

        zukei_turn(c, (double)(a->cx / mmk), (double)(a->cy / mmk), &ux, &uy);
        cx = (px + ux - w->ox) * w->scale + w->ax;
        cy = w->ay - (py + uy - w->oy) * w->scale;
        /* A turn goes into the tilt, which turns the whole shape rigidly --
         * the sweep is in the shape's own frame and stays where it is. */
        jw_arc_poly(v, cx, cy, (double)(a->r / mmk) * w->scale, a->flatten,
                    a->start, a->end,
                    a->tilt + (long)(c->zukei_ang * 65536.0f), 2, 0x18,
                    jw_view_line_style(a->type));
    }
    for (k = 0; k < z->n_points; k++) {
        int x, y;

        double ux, uy;

        zukei_turn(c, (double)(z->points[k].x / mmk),
                   (double)(z->points[k].y / mmk), &ux, &uy);
        at_screen(w, px + ux, py + uy, &x, &y);
        jw_point(v, x, y, 2, 0x18);
    }
    /* The strings show as **boxes, in colour 1**, not as letters.  Measured
     * on a figure cut out of the whole of TEST1: where a box falls on black
     * the pixel comes out 0000ff, over the drawing's magenta text f30000 and
     * over a white line ffff00 -- which is 1 exclusive-or'd with 0, 3 and 7.
     * Colour 2, which the lines and the arcs use, would have given 2, 1 and
     * 5.  And they are boxes where the drawing itself has readable letters,
     * so it is not the ordinary text routine deciding it is too small. */
    for (k = 0; d && k < z->n_texts; k++) {
        JwcText t = z->texts[k];
        /* **The strings are turned into units the other way round**: times
         * one over the factor, where the lines and the arcs above divide by
         * it.  Two routines in the original and they do not agree to the
         * last bit -- and it shows: the whole of TEST1 previewed at (190,72)
         * comes out 39 pixels from the original's with the lines divided and
         * 750 with them multiplied, and the strings' boxes 0 pixels out
         * multiplied against 522 divided. */
        const float inv = 1.0f / mmk;

        double ax, ay, bx, by;

        zukei_turn(c, (double)(z->texts[k].x0 * inv),
                   (double)(z->texts[k].y0 * inv), &ax, &ay);
        zukei_turn(c, (double)(z->texts[k].x1 * inv),
                   (double)(z->texts[k].y1 * inv), &bx, &by);
        t.x0 = (float)(px + ax);
        t.y0 = (float)(py + ay);
        t.x1 = (float)(px + bx);
        t.y1 = (float)(py + by);
        jw_view_text_ghost(v, d, &t, w, 1, 0x18);
    }
}

static int in_reach_layer(const Jwc *d, unsigned char layer);
static int flipped(const JwCmd *c, int kind, long at);

void jw_cmd_band(const JwCmd *c, const Jwc *d, VGA *v, const JwView *w,
                 int sx, int sy)
{
    int px, py;

    /* 測定 ③面積：点を結んだ輪郭が赤で残る。n>=3 で P1-P2…P[n-1]-P[n] が実線、n>=2 で P[n]→P1 が
     * 点線（4 画素点・4 画素休み。測定：measure_s0_c3。矢には付いてこない）。 */
    if (c->command == 15 && c->meas3 && c->ms3_n >= 2) {
        int k, ax, ay, bx, by;

        v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
        v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
        v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
        v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
        if (c->ms3_n >= 3) {
            for (k = 1; k < c->ms3_n; k++) {
                at_screen(w, c->ms3_x[k], c->ms3_y[k], &ax, &ay);
                at_screen(w, c->ms3_x[k + 1], c->ms3_y[k + 1], &bx, &by);
                jw_line_clipped(v, ax, ay, bx, by, 2, 0x18, JW_STYLE_SOLID);
            }
        }
        at_screen(w, c->ms3_x[1], c->ms3_y[1], &ax, &ay);
        at_screen(w, c->ms3_x[c->ms3_n], c->ms3_y[c->ms3_n], &bx, &by);
        /* 点線は P1 から Pn へ（丸めが合う）。位相は点の数で変わる（測定のみ・規則は未解明：4 画素点灯の
         * 始まりが 点 2 で idx2、3 点以上で idx6（5 点まで確認）。decomp の線種レジスタの引き継ぎらしいが未読）。 */
        {
            static const int PH[8] = { 2, 2, 2, 6, 6, 6, 6, 6 };
            const int ph = PH[c->ms3_n < 8 ? c->ms3_n : 7];
            const int pat = (((0xf0 << (8 - ph)) | (0xf0 >> ph)) & 0xff);

            jw_line_clipped(v, ax, ay, bx, by, 2, 0x18, (pat << 8) | pat);
        }
        return;
    }

    /* **寸法 ⑤一括 の緑の点線は出していません。** 始線を取ったところから
     * 矢の先へ色 4 の点が 4 画素おきに並びます（測定：始線 を (400,140) で
     * 取って矢を (324,250) に置くと (399,140) から (325,248) まで）。
     * 模様は始まりで揃っていて、`jw_line` に 0x2222 を渡すと合いますが、
     * **始まりが押した点より 1 画素左で、しかもそれだけでは並びが合いません**
     * ——(399,140)-(324,250) を引いても 8 画素ずれます。矢の先が何なのかが
     * 分からないので、当てずっぽうを置くより出さないでおきます（外した
     * 押しのあとだけ 28 画素の差）。 */
    /* ⑥連続弧: 次に引かれる弧（か線）が **色 2 で仮に**出ます。
     * 決め方は chain_arc と同じで、矢の先を終わりの点にします。 */
    /* ⑥連続弧 の三点目を待つあいだ、**始点・中間点・矢の先を通る弧**が
     * 色 2 で仮に出ます（測定：(200,200) と (300,150) を取って矢を
     * (400,250) に置くと 224 画素の赤い弧）。 */
    if (c->command == 23 && c->chain && c->stage == 52 && d) {
        double qx, qy, cx, cy, rr;
        const double d2r = 3.14159265358979323846 / 180.0;

        if (sx < w->x0 || sx > w->x1 || sy < w->y0 || sy > w->y1) {
            return;
        }
        jw_cmd_at(w, sx, sy, &qx, &qy);
        {
            const double d1x = c->ch_mx - c->ch_ax, d1y = c->ch_my - c->ch_ay;
            const double d2x = qx - c->ch_ax, d2y = qy - c->ch_ay;
            const double det = 2.0 * (d1x * d2y - d1y * d2x);
            const double l1 = d1x * d1x + d1y * d1y;
            const double l2 = d2x * d2x + d2y * d2y;
            double sa, ea;

            if (det > -1e-9 && det < 1e-9) {
                return;
            }
            cx = c->ch_ax + (d2y * l1 - d1y * l2) / det;
            cy = c->ch_ay + (d1x * l2 - d2x * l1) / det;
            rr = sqrt((cx - c->ch_ax) * (cx - c->ch_ax)
                      + (cy - c->ch_ay) * (cy - c->ch_ay));
            sa = atan2(c->ch_ay - cy, c->ch_ax - cx) / d2r;
            ea = atan2(qy - cy, qx - cx) / d2r;
            while (sa < 0.0) { sa += 360.0; }
            while (ea < 0.0) { ea += 360.0; }
            if (det <= 0.0) {
                const double sw = sa; sa = ea; ea = sw;
            }
            v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
            v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
            v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
            v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
            jw_arc_poly(v, (cx - w->ox) * w->scale + w->ax,
                        w->ay - (cy - w->oy) * w->scale,
                        rr * w->scale, 10000,
                        (long)(sa * 65536.0 + 0.5),
                        (long)(ea * 65536.0 + 0.5), 0L, 2u, 0x18,
                        jw_view_line_style(d->line_type));
        }
        return;
    }
    if (c->command == 23 && c->chain && c->stage == 53 && d) {
        double qx, qy, dx, dy, t, cx, cy, rr, nn;

        /* **矢が作図領域の外にいるあいだは出ません**（測定：
         * ②弧反転 を押したあと矢は行の上にいて、原作は何も
         * 引かず、移植だけが 221 画素の弧を出していました）。 */
        if (sx < w->x0 || sx > w->x1 || sy < w->y0 || sy > w->y1) {
            return;
        }
        jw_cmd_at(w, sx, sy, &qx, &qy);
        dx = c->ch_px - c->ch_cx;
        dy = c->ch_py - c->ch_cy;
        nn = sqrt(dx * dx + dy * dy);
        if (nn <= 0.0) {
            return;
        }
        dx /= nn;
        dy /= nn;
        v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
        v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
        v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
        v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
        if (c->ch_line) {
            const double fx = -c->ch_tx, fy = -c->ch_ty;
            const double pr = (qx - c->ch_px) * fx
                            + (qy - c->ch_py) * fy;
            int ax, ay, bx2, by2;

            at_screen(w, c->ch_px, c->ch_py, &ax, &ay);
            at_screen(w, c->ch_px + pr * fx, c->ch_py + pr * fy,
                      &bx2, &by2);
            jw_line(v, ax, ay, bx2, by2, 2u, 0x18, JW_STYLE_SOLID);
            return;
        }
        if (c->ch_r_on && c->ch_r > 0.0) {
            const double scl = jwc_zukei_scale(d) > 0.0
                             ? jwc_zukei_scale(d) : 1.0;

            t = c->ch_r / scl;
        } else {
            const double ex = qx - c->ch_px, ey = qy - c->ch_py;
            const double dot = dx * -ex + dy * -ey;

            if (dot > -1e-9 && dot < 1e-9) {
                return;
            }
            t = -(ex * ex + ey * ey) / (2.0 * dot);
        }
        cx = c->ch_px + t * dx;
        cy = c->ch_py + t * dy;
        rr = t < 0.0 ? -t : t;
        {
            const double d2r = 3.14159265358979323846 / 180.0;
            const double ux = (cx - w->ox) * w->scale + w->ax;
            const double uy = w->ay - (cy - w->oy) * w->scale;
            double sa = atan2(c->ch_py - cy, c->ch_px - cx) / d2r;
            double ea = atan2(qy - cy, qx - cx) / d2r;
            const double vx2 = -(c->ch_py - cy);
            const double vy2 = c->ch_px - cx;
            const int ccw = vx2 * c->ch_tx + vy2 * c->ch_ty > 0.0;

            while (sa < 0.0) { sa += 360.0; }
            while (ea < 0.0) { ea += 360.0; }
            if (!ccw) {
                const double sw = sa; sa = ea; ea = sw;
            }
            jw_arc_poly(v, ux, uy, rr * w->scale, 10000,
                        (long)(sa * 65536.0 + 0.5),
                        (long)(ea * 65536.0 + 0.5), 0L, 2u, 0x18,
                        jw_view_line_style(d->line_type));
        }
        return;
    }
    /* ③ｽﾌﾟﾗｲﾝ: 最後に取った点から矢の先へ、緑（色 4）の排他的論理和で
     * ゴムひもが伸びます。**作図領域では切りません**——測定では帯の
     * 上端 y=17 まで出ていました（その上は行の描き直しで消えます）。 */
    if (c->command == 23 && c->spl && c->spl_n > 0 && c->spl_n < 50
        && c->stage >= 30 && c->stage <= 33 && d) {
        int ax, ay;

        at_screen(w, c->spl_x[c->spl_n - 1], c->spl_y[c->spl_n - 1],
                  &ax, &ay);
        /* **jw_line は切り取りを見ません**（画素を直に書きます）ので、
         * 端をこちらで切ってから渡します。箱は帯の上端から下——
         * 測定では y=17 より上には出ませんでした。 */
        v->clip_x0 = 0;
        v->clip_y0 = 17;
        v->clip_x1 = v->width - 1;
        v->clip_y1 = v->height - 1;
        if (ax != sx || ay != sy) {
            double t0 = 0.0, t1 = 1.0;
            const double dx = sx - ax, dy = sy - ay;
            int j, ok = 1;

            for (j = 0; j < 4 && ok; j++) {
                const double pp = j == 0 ? -dx : j == 1 ? dx
                                : j == 2 ? -dy : dy;
                const double qq = j == 0 ? ax - v->clip_x0
                                : j == 1 ? v->clip_x1 - ax
                                : j == 2 ? ay - v->clip_y0
                                         : v->clip_y1 - ay;
                double r;

                if (pp == 0.0) {
                    if (qq < 0.0) {
                        ok = 0;
                    }
                    continue;
                }
                r = qq / pp;
                if (pp < 0.0) {
                    if (r > t1) { ok = 0; } else if (r > t0) { t0 = r; }
                } else {
                    if (r < t0) { ok = 0; } else if (r < t1) { t1 = r; }
                }
            }
            if (ok) {
                /* 切り落とした端は **外側へ丸めます**（測定：
                 * 390.625 は 391、168.87 は 168 ——どちらも線の
                 * 進む向きの外側）。 */
                {
                    const double x0d = ax + t0 * dx;
                    const double y0d = ay + t0 * dy;
                    const double x1d = ax + t1 * dx;
                    const double y1d = ay + t1 * dy;

                    jw_line(v,
                            (int)(dx > 0.0 ? floor(x0d) : ceil(x0d)),
                            (int)(dy > 0.0 ? floor(y0d) : ceil(y0d)),
                            (int)(dx > 0.0 ? ceil(x1d) : floor(x1d)),
                            (int)(dy > 0.0 ? ceil(y1d) : floor(y1d)),
                            4u, 0x18, JW_STYLE_SOLID);
                }
            }
        }
        return;
    }
    /* 円線接 ②接円 の選びかけ: 候補のうち **円周が矢の先にいちばん近い
     * もの** を色 2 で描きます（測定：選ぶところで赤が 526 画素）。 */
    if (c->command == 26
        && (c->stage == 22 || c->stage == 29 || c->stage == 34
            || c->stage == 38 || c->stage == 42)
        && c->tan_cn > 0 && d) {
        JwcArc a;
        double px, py, away = 0.0;
        int best = 0, i;

        jw_cmd_at(w, sx, sy, &px, &py);
        for (i = 0; i < c->tan_cn; i++) {
            const double dx = px - c->tan_ccx[i];
            const double dy = py - c->tan_ccy[i];
            const double how = sqrt(dx * dx + dy * dy) - c->tan_cr;
            const double far = how < 0.0 ? -how : how;

            if (!i || far < away) {
                away = far;
                best = i;
            }
        }
        memset(&a, 0, sizeof a);
        a.cx = (float)c->tan_ccx[best];
        a.cy = (float)c->tan_ccy[best];
        a.r = (float)c->tan_cr;
        a.flatten = 10000;
        a.type = (unsigned char)d->line_type;
        a.pen = (unsigned char)d->pen;
        a.layer = (unsigned char)(d->write_layer);
        v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
        v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
        v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
        v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
        {
            const double cx = (a.cx - w->ox) * w->scale + w->ax;
            const double cy = w->ay - (a.cy - w->oy) * w->scale;
            const double rr = a.r * w->scale;
            /* **jw_view_arc と同じ分かれ道**。十画素より小さくて
             * 作図領域に丸ごと収まる真円は画素ルーチンで描かれます
             * ——折れ線で描くと ①１線１円 を既定の半径（8.72 単位）
             * で選ぶところが 52 画素ずれました。jw_view_arc 自身は
             * 置き換えで描くので、ここは呼ばずに書き写しています。 */
            const int rx = (int)rr;

            if (rx < 10
                && cx - rr >= v->clip_x0 && cx + rr <= v->clip_x1
                && cy - rr >= v->clip_y0 && cy + rr <= v->clip_y1) {
                jw_arc(v, cx, cy, rr, 0.0, 360.0, 2u, 0x18,
                       jw_view_line_style(a.type));
            } else {
                jw_arc_poly(v, cx, cy, rr, 10000, 0L, 0L, 0L, 2u, 0x18,
                            jw_view_line_style(a.type));
            }
        }
        return;
    }
    /* 図形 ②読込, with a figure in hand: it is at the pointer from the
     * moment it is picked, before anything has moved. */
    if (c->command == 27
        && (c->zukei == JW_ZUKEI_PUT || c->zukei == JW_ZUKEI_PUT2)) {
        /* **Only until the first copy is down.**  Freshly picked it is at
         * the pointer at once, before anything has moved, and it follows:
         * (251,81), (361,209), (461,309) for the pointer at (190,72),
         * (300,200) and (400,300).  Once a copy has been placed there is
         * none at all -- not on the press, not after the pointer moves
         * twice, not after a second copy goes down.  ⑤仮表示 is presumably
         * what turns it back on, and that cell is not done. */
        if (c->zukei == JW_ZUKEI_PUT && !c->zukei_noghost) {
            zukei_ghost(c, d, v, w, sx, sy);
        }
        return;
    }
    /* Nothing is dragged until the pointer has moved off the point just taken.
     * Measured: ／ pressed at (300,200) and left there leaves that pixel black
     * in the original, where a band of no length would have put colour 2 on
     * it -- the pointer is the only thing drawn, and its exclusive-or comes
     * out ffff00 over black rather than 00ff00 over red.
     *
     * 文字 is the exception: its box does not follow the pointer at all -- it
     * sits at the point that was pressed and grows with the string -- and it
     * is there from the moment the point is taken. */
    /* 消去's fixed range is **not** one of the things that wait for the
     * pointer to move: the second press puts the four green lines up there and
     * then, and they are on the screen with the pointer still on the point
     * that was pressed.  Measured with ③指定範囲 on SAMPLE0 --
     * `STOP=1 sh tools/span.sh 150 130 245 170` leaves the pointer where the
     * second press landed and the original has 264 green pixels there. */
    /* Not 図形 ①登録: its range is fixed by the right button and it goes
     * straight on to the base point, with no box left on the screen. */
    /* 変形 shows what it is about to do while the pointer moves: the lines
     * it has taken, stretched to where the pointer is, in **colour 4 and
     * exclusive-or** -- the same way the range box is drawn.  Measured with
     * the pointer left on the base point, where the preview lands exactly on
     * the dotted red lines and turns them 00ff00 and 00ffff (0 xor 4 and
     * 1 xor 4). */
    if (c->command == 17 && (c->stage == 6 || c->stage == 19) && d
        && sx >= w->x0 && sx <= w->x1 && sy >= w->y0 && sy <= w->y1) {
        double px, py, dx, dy;
        long k;

        jw_cmd_at(w, sx, sy, &px, &py);
        dx = px - c->base_x;
        dy = py - c->base_y;
        for (k = 0; k < c->n0_lines; k++) {
            const JwcLine *l = &d->lines[k];
            int a, b;

            if (!in_reach_layer(d, l->layer) || flipped(c, JW_FLIP_LINE, k)) {
                continue;
            }
            a = jw_cmd_in_range(c, l->x0, l->y0, l->x0, l->y0);
            b = jw_cmd_in_range(c, l->x1, l->y1, l->x1, l->y1);
            if (!a && !b) {
                continue;
            }
            if (c->stage == 19) {
                /* ③数値倍率 previews the scaled shape, S(p-基準点)+ポインタ. */
                jw_view_mark(v, w,
                             a ? c->scale_x * (l->x0 - c->base_x) + px : l->x0,
                             a ? c->scale_y * (l->y0 - c->base_y) + py : l->y0,
                             b ? c->scale_x * (l->x1 - c->base_x) + px : l->x1,
                             b ? c->scale_y * (l->y1 - c->base_y) + py : l->y1,
                             4, jw_view_line_style(l->type), 0x18);
                continue;
            }
            jw_view_mark(v, w, l->x0 + (a ? dx : 0.0), l->y0 + (a ? dy : 0.0),
                         l->x1 + (b ? dx : 0.0), l->y1 + (b ? dy : 0.0),
                         4, jw_view_line_style(l->type), 0x18);
        }
        return;
    }
    if (JW_RANGE(c) && (!c->zukei || (c->command == 27 && c->zukei == JW_ZUKEI_RANGE))
        && c->pressed == 2
        && c->stage == 3) {
        int qx, qy;

        /* Exclusive-or, and each side drawn corner to corner, is what the
         * screen says: the **four corners come out black**, because each of
         * them is drawn twice and the second turns it back, and where the box
         * crosses a white pixel it goes magenta (7 xor 4 = 3) instead of
         * green.  Both would be impossible if it were painted flat. */
        at_screen(w, c->x0, c->y0, &px, &py);
        at_screen(w, c->x1, c->y1, &qx, &qy);
        jw_line(v, px, py, qx, py, 4, 0x18, JW_STYLE_SOLID);
        jw_line(v, qx, py, qx, qy, 4, 0x18, JW_STYLE_SOLID);
        jw_line(v, qx, qy, px, qy, 4, 0x18, JW_STYLE_SOLID);
        jw_line(v, px, qy, px, py, 4, 0x18, JW_STYLE_SOLID);
        return;
    }
    /* 測定 ⑨式 ①ヘロン：範囲の終点まで取ったら、範囲の枠が緑で残る（測定：measure_s0_c9）。 */
    if (c->command == 15 && c->meas9q && c->pressed == 2) {
        int qx, qy;

        at_screen(w, c->x0, c->y0, &px, &py);
        at_screen(w, c->x1, c->y1, &qx, &qy);
        jw_line(v, px, py, qx, py, 4, 0x18, JW_STYLE_SOLID);
        jw_line(v, qx, py, qx, qy, 4, 0x18, JW_STYLE_SOLID);
        jw_line(v, qx, qy, px, qy, 4, 0x18, JW_STYLE_SOLID);
        jw_line(v, px, qy, px, py, 4, 0x18, JW_STYLE_SOLID);
        return;
    }
    /* ○ の ①径寸法 で半径が決まっていれば、円が矢に付いてきます。 */
    if (c->command == 11 && c->circ_fix && !c->circ_ask && d) {
        double mx, my;
        int cx, cy;

        if (sx < w->x0 || sx > w->x1 || sy < w->y0 || sy > w->y1) {
            return;
        }
        v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
        v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
        v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
        v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
        jw_cmd_at(w, sx, sy, &mx, &my);
        {
            static const int DX[9] = { 0, 1, 1, 1, 0, -1, -1, -1, 0 };
            static const int DY[9] = { 0, -1, 0, 1, 1, 1, 0, -1, -1 };
            const float r = (float)c->circ_r / jwc_zukei_scale(d);

            mx = (float)mx + (float)DX[c->circ_base] * r;
            my = (float)my + (float)DY[c->circ_base] * r;
        }
        at_screen(w, mx, my, &cx, &cy);
        jw_arc_poly(v, (double)cx, (double)cy,
                    (double)((float)c->circ_r / jwc_zukei_scale(d)) * w->scale,
                    10000, 0, 0, 0, 2, 0x18, JW_STYLE_SOLID);
        return;
    }
    /* □ の ①寸法 で大きさが決まっていれば、四角が矢に付いてきます
     * （赤、排他的論理和。測定：box2 の絵）。 */
    if (c->command == 4 && c->box_fix && !c->box_ask && d) {
        float X[5], Y[5];
        double mx, my;
        int k;

        /* 矢が上の行の上にあっても描きます（作図範囲で切れる。測定：
         * 20,30 [Enter] のあと (400,8) で x 382〜417・y 17〜34 の赤）。 */
        v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
        v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
        v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
        v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
        jw_cmd_at(w, sx, sy, &mx, &my);
        box_corners(c, d, mx, my, X, Y);
        for (k = 0; k < 4; k++) {
            int ax, ay, bx, by;

            at_screen(w, X[k], Y[k], &ax, &ay);
            at_screen(w, X[k + 1], Y[k + 1], &bx, &by);
            if (ax < v->clip_x0 || ax > v->clip_x1 || bx < v->clip_x0
                || bx > v->clip_x1 || ay < v->clip_y0 || ay > v->clip_y1
                || by < v->clip_y0 || by > v->clip_y1) {
                jw_line_clipped(v, ax, ay, bx, by, 2, 0x18, JW_STYLE_SOLID);
            } else {
                jw_line(v, ax, ay, bx, by, 2, 0x18, JW_STYLE_SOLID);
            }
        }
        return;
    }
    if (!c->moved && !(c->command == 13 && c->typing_text)
        && !(c->command == 9 && c->dl_wait && c->dl_phase)   /* 押しても仮の二本は残る */
        && !(c->command == 23 && c->poly && c->poly_n >= 1)) {
        return;
    }

    /* 複線 drags a whole line, not a rubber band from a point: once the
     * interval is in, the copy follows the pointer from one side of the
     * chosen line to the other.  Colour 2, exclusive-or, solid, like every
     * other band -- and at the same pixels the copy lands on, so the press
     * that fixes it changes nothing but the colour. */
    if (c->command == 5 && c->stage == 2) {
        double ax, ay, bx, by;

        if (offset_ends(c, w, sx, sy, &ax, &ay, &bx, &by, 0)) {
            int qx, qy;

            at_screen(w, ax, ay, &px, &py);
            at_screen(w, bx, by, &qx, &qy);
            jw_line(v, px, py, qx, qy, 2, 0x18, JW_STYLE_SOLID);
        }
        return;
    }
    /* ＋・／ の ②寸法・③角度 の欄が開いているあいだは仮の線を出さない
     * （測定：func_all plus_s1_c2）。 */
    if ((c->command == 2 || c->command == 3) && c->typing && c->ask_kind) {
        return;
    }
    /* ④平行・⑤垂直 の基準線を聞いているあいだは、始点は保ったまま（decomp
     * ovl23 0c0d の 0x2c9c7〜0x2ca9a：始点の変数に触らず基準線の読みへ入る）、
     * ゴム線は出ない（その間は別の読みのループで、終点待ちの描画が動かない）。 */
    if ((c->command == 2 || c->command == 3)
        && (c->ask_kind == 3 || c->ask_kind == 4)) {
        return;
    }
    if (!c->pressed && !(c->command == 12 && c->arc3 == 3)
        && !(c->command == 9 && (c->stage == 2 || (c->stage == 3 && c->dl_wait)))) {
        return;
    }
    if (JW_RANGE(c) && c->pressed == 2) {
        /* 追加･除外 keeps the range on the screen; the right button's
         * 範囲確定 does not -- its screen has no green at all, and that one
         * has 264 pixels of it (SAMPLE0, (150,130)-(245,170)).  The drawing of
         * it is above, before the test for the pointer having moved. */
        return;
    }
    if (c->command == 23 && c->poly && c->poly_n == 1) {
        /* Only the 始点 is down: the cross is on it and the line follows the
         * pointer, rounded the same way.  The direction the next press will
         * fix is the one from the 始点, so that is what is shown. */
        double qx, qy, vx, vy, along;
        int ex, ey;

        jw_cmd_at(w, sx, sy, &qx, &qy);
        poly_dir(c, qx - c->poly_sx, qy - c->poly_sy, &vx, &vy);
        along = (qx - c->poly_sx) * vx + (qy - c->poly_sy) * vy;
        at_screen(w, c->poly_sx, c->poly_sy, &px, &py);
        at_screen(w, c->poly_sx + along * vx, c->poly_sy + along * vy, &ex, &ey);
        jw_line(v, px, py, ex, ey, 2, 0x18, JW_STYLE_SOLID);
        poly_mark(c, v, w);
        return;
    }
    if (c->command == 23 && c->poly && c->poly_n >= 2) {
        /* 連線 shows **what the next press would make**: the segment it has in
         * hand, run on to where it would meet the line through the pointer,
         * and then that line as far as the pointer.  Both in colour 2, solid,
         * and the corner is not rounded until the press.
         *
         * Measured on SAMPLE0 after (200,200)(400,200)(400,350): with the
         * pointer left on the last press a single red line runs (400,206) to
         * (400,350); with it at (520,260) the red goes on down to (400,380)
         * and a second one comes back up at 45 degrees to the pointer, which
         * is where the 45度毎 line through (520,260) crosses x=400. */
        double qx, qy, vx, vy, cross, along;
        int ex, ey, vsx, vsy;

        jw_cmd_at(w, sx, sy, &qx, &qy);
        at_screen(w, c->poly_sx, c->poly_sy, &px, &py);
        if (fabs(qx - c->poly_px) < 1e-9 && fabs(qy - c->poly_py) < 1e-9) {
            /* The pointer has not left the press: there is no next line yet,
             * so the segment in hand runs the whole way to it and the corner
             * is not rounded off.  Measured -- the red reaches (400,350),
             * which is the press. */
            at_screen(w, c->poly_ax, c->poly_ay, &ex, &ey);
            jw_line(v, px, py, ex, ey, 2, 0x18, JW_STYLE_SOLID);
            poly_mark(c, v, w);
            return;
        }
        poly_dir(c, qx - c->poly_px, qy - c->poly_py, &vx, &vy);
        cross = c->poly_dx * vy - c->poly_dy * vx;
        if (fabs(cross) < 1e-9) {
            /* The two are parallel: there is no vertex, so the line in hand
             * just reaches as far along as the pointer does. */
            along = (qx - c->poly_sx) * c->poly_dx
                    + (qy - c->poly_sy) * c->poly_dy;
            at_screen(w, c->poly_sx + along * c->poly_dx,
                      c->poly_sy + along * c->poly_dy, &ex, &ey);
            jw_line(v, px, py, ex, ey, 2, 0x18, JW_STYLE_SOLID);
            poly_mark(c, v, w);
            return;
        }
        along = ((qx - c->poly_ax) * vy - (qy - c->poly_ay) * vx) / cross;
        {
            /* The corner is already rounded in the preview: the two lines
             * stop 辺寸法 short of the vertex, which is where the arc will
             * touch them.  Measured with the pointer at (520,260), where the
             * vertex is (400,380) and the red stops at (400,374). */
            const double t = c->poly_t;
            const double vex = c->poly_ax + along * c->poly_dx;
            const double vey = c->poly_ay + along * c->poly_dy;

            at_screen(w, vex - t * c->poly_dx, vey - t * c->poly_dy,
                      &vsx, &vsy);
            at_screen(w, vex + t * vx, vey + t * vy, &ex, &ey);
            jw_line(v, px, py, vsx, vsy, 2, 0x18, JW_STYLE_SOLID);
            at_screen(w, qx, qy, &vsx, &vsy);
            jw_line(v, ex, ey, vsx, vsy, 2, 0x18, JW_STYLE_SOLID);
            /* **...and the arc between them is in the preview too**: the
             * one poly_corner will put down, in colour 2 exclusive-or
             * through the small-circle routine.  Measured at (520,260): the
             * original hands 1def:0228 the centre (402.167,374.768), radius
             * 2.167 and 180..315 degrees. */
            {
                const double ux0 = c->poly_dx, uy0 = c->poly_dy;
                const double crs = ux0 * vy - uy0 * vx;
                double cosa = -(ux0 * vx + uy0 * vy), r, wx, wy, wl;

                if (cosa > 1.0) cosa = 1.0;
                if (cosa < -1.0) cosa = -1.0;
                r = t * tan(acos(cosa) / 2.0);
                wx = vx - ux0;
                wy = vy - uy0;
                wl = sqrt(wx * wx + wy * wy);
                if (wl > 1e-9) {
                    const double ccx = vex + wx / wl * sqrt(t * t + r * r);
                    const double ccy = vey + wy / wl * sqrt(t * t + r * r);
                    const double ax0 = vex - t * ux0, ay0 = vey - t * uy0;
                    const double tx0 = vex + t * vx, ty0 = vey + t * vy;
                    const long a0 = crs > 0.0 ? poly_angle(ccx, ccy, ax0, ay0)
                                              : poly_angle(ccx, ccy, tx0, ty0);
                    const long a1 = crs > 0.0 ? poly_angle(ccx, ccy, tx0, ty0)
                                              : poly_angle(ccx, ccy, ax0, ay0);

                    jw_arc(v, (ccx - w->ox) * w->scale + w->ax,
                           w->ay - (ccy - w->oy) * w->scale, r * w->scale,
                           a0 / 65536.0, a1 / 65536.0, 2, 0x18,
                           JW_STYLE_SOLID);
                }
            }
            poly_mark(c, v, w);
            return;
        }
        at_screen(w, c->poly_ax + along * c->poly_dx,
                  c->poly_ay + along * c->poly_dy, &vsx, &vsy);
        at_screen(w, qx, qy, &ex, &ey);
        jw_line(v, px, py, vsx, vsy, 2, 0x18, JW_STYLE_SOLID);
        if (ex != vsx || ey != vsy) {
            /* Not when the pointer is still on the press: the two lines share
             * that pixel and a second exclusive-or would rub it out, where
             * the original leaves it red. */
            jw_line(v, vsx, vsy, ex, ey, 2, 0x18, JW_STYLE_SOLID);
        }
        poly_mark(c, v, w);
        return;
    }
    if (c->command == 13 && c->typing_text) {
        /* 文字 shows where the string will land while it is being typed: a
         * box round it, and two little marks just past its end.
         *
         * The box runs from the point that was pressed -- the bottom left,
         * the base point -- to `x0 + the string's length` and up by the
         * character height, both out of the drawing's own character table.
         * Colour 2, exclusive-or, four lines, so the corners cancel and come
         * out black, exactly like 消去's range box.  Measured: over a white
         * line the edges read 00ffff, which is 7 exclusive-or 2.
         *
         * The two marks are at one and three pixels past the right edge, two
         * pixels at the top and two at the bottom, in colour 4 -- over white
         * they read ff00ff, which is 7 exclusive-or 4.  Measured with `A` and
         * with `ABC`, and at two places on the screen. */
        int x1, y1;

        at_screen(w, c->x0, c->y0, &px, &py);
        if (c->text_ang != 0.0 && !c->text_vert) {
            /* ③角度指定 の角度では、L 字も箱も同じ角度に回す（測定：
             * text_c3_v の 30 度で、L 字は (300,250) から左上へ字の高さ、
             * 足は右上へ (301,249)(302,248)）。 */
            const double ar = c->text_ang * 3.14159265358979323846 / 180.0;
            const double co = cos(ar), si = sin(ar);
            int ax, ay, bx, by, qx, qy, k;

            at_screen(w, c->x0 - c->text_tall * si, c->y0 + c->text_tall * co,
                      &qx, &qy);
            if (c->typed_n == 0) {
                jw_line(v, qx, qy, px, py, 4, 0x18, JW_STYLE_SOLID);
                jw_line(v, px, py, px, py, 4, 0x18, JW_STYLE_SOLID);
                for (k = 1; k <= 2; k++) {
                    const int fx = px + (int)floor(k * co + 0.5);
                    const int fy = py - (int)floor(k * si + 0.5);

                    jw_line(v, fx, fy, fx, fy, 4, 0x18, JW_STYLE_SOLID);
                }
                return;
            }
            at_screen(w, c->x0 + c->text_wide * co, c->y0 + c->text_wide * si,
                      &ax, &ay);
            at_screen(w, c->x0 + c->text_wide * co - c->text_tall * si,
                      c->y0 + c->text_wide * si + c->text_tall * co, &bx, &by);
            jw_line(v, px, py, ax, ay, 2, 0x18, JW_STYLE_SOLID);
            jw_line(v, ax, ay, bx, by, 2, 0x18, JW_STYLE_SOLID);
            jw_line(v, bx, by, qx, qy, 2, 0x18, JW_STYLE_SOLID);
            jw_line(v, qx, qy, px, py, 2, 0x18, JW_STYLE_SOLID);
            return;
        }
        at_screen(w,
                  c->x0 + (c->text_vert ? -c->text_tall : c->text_wide),
                  c->y0 + (c->text_vert ? c->text_wide : c->text_tall),
                  &x1, &y1);
        /* まだ何も打っていないときは L 字：字の高さの縦線と、足もとの
         * 右へ 2 画素（色 4 の排他的論理和。測定：text_abc で (300,250) を
         * 押した直後、x 300 の y 244..249 と y 250 の x 301..302 が緑。角の
         * (300,250) は矢印の下で見えず、描くかどうかは未測定）。 */
        if (c->typed_n == 0 && !c->text_vert) {
            int fx, fy;

            /* 足の先は半角一字の幅の所（測定：x 179 で 2 画素、213.882 で
             * 3 画素。どちらも 2.118〜3 の間で、半角幅 2.616 が入る）。 */
            at_screen(w, c->x0 + c->text_half, c->y0, &fx, &fy);
            jw_line(v, px, py - 1, px, y1, 4, 0x18, JW_STYLE_SOLID);
            if (fx > px) {
                jw_line(v, px + 1, py, fx, py, 4, 0x18, JW_STYLE_SOLID);
            }
            return;
        }
        /* ②垂直 は横倒し：足もとから左へ字の高さ、上へ 3 画素（測定：
         * text_c2 で y 250 の x 294..299 と x 300 の y 247..249）。 */
        if (c->typed_n == 0) {
            jw_line(v, x1, py, px - 1, py, 4, 0x18, JW_STYLE_SOLID);
            jw_line(v, px, py - 3, px, py - 1, 4, 0x18, JW_STYLE_SOLID);
            return;
        }
        jw_line(v, px, py, px, y1, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, px, y1, x1, y1, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, x1, y1, x1, py, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, x1, py, px, py, 2, 0x18, JW_STYLE_SOLID);
        if (c->text_vert) {
            /* ②垂直 turns the whole thing a quarter: the box goes up and to
             * the left of the point, and the two marks sit **above** its far
             * end rather than past its right.  Measured on SAMPLE0 with
             * `ABC` at (250,200): the box is x 244..250 by y 191..200 and the
             * marks are at rows 188 and 190, columns 244-245 and 249-250. */
            jw_line(v, x1, y1 - 1, x1 + 1, y1 - 1, 4, 0x18, JW_STYLE_SOLID);
            jw_line(v, x1, y1 - 3, x1 + 1, y1 - 3, 4, 0x18, JW_STYLE_SOLID);
            jw_line(v, px - 1, y1 - 1, px, y1 - 1, 4, 0x18, JW_STYLE_SOLID);
            jw_line(v, px - 1, y1 - 3, px, y1 - 3, 4, 0x18, JW_STYLE_SOLID);
            return;
        }
        jw_line(v, x1 + 1, y1, x1 + 1, y1 + 1, 4, 0x18, JW_STYLE_SOLID);
        jw_line(v, x1 + 3, y1, x1 + 3, y1 + 1, 4, 0x18, JW_STYLE_SOLID);
        jw_line(v, x1 + 1, py - 1, x1 + 1, py, 4, 0x18, JW_STYLE_SOLID);
        jw_line(v, x1 + 3, py - 1, x1 + 3, py, 4, 0x18, JW_STYLE_SOLID);
        return;
    }
    if (JW_RANGE(c) && c->pressed != 1) {
        return;                 /* the box is only dragged while it is open */
    }
    /* The chrome leaves the clip open to the whole screen; what is dragged is
     * part of the drawing, so it goes back to the drawing window.  ○ is the
     * one that shows it: its rubber circle is as wide as the pointer is far
     * from the centre, and a centre at (300,200) with the pointer at (450,400)
     * reaches x=50, well inside the menu.  The original cuts it at the
     * window's edge and the port was painting over the panel -- 385 pixels of
     * it, which `sh tools/bandcheck.sh 11 300 200 450 400` counts. */
    v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
    v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
    v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
    v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
    at_screen(w, c->x0, c->y0, &px, &py);
    if (c->command == 4 && c->box_rot && d) {
        /* ②角度 の傾いた四角の帯。 */
        float X[5], Y[5];
        double mx, my;
        int k;

        jw_cmd_at(w, sx, sy, &mx, &my);
        tilt_corners(c, mx, my, X, Y);
        for (k = 0; k < 4; k++) {
            int qx0, qy0, qx1, qy1;

            at_screen(w, X[k], Y[k], &qx0, &qy0);
            at_screen(w, X[k + 1], Y[k + 1], &qx1, &qy1);
            jw_line(v, qx0, qy0, qx1, qy1, 2, 0x18, JW_STYLE_SOLID);
        }
    } else if (c->command == 4 || JW_RANGE(c) || (c->command == 15 && c->meas9p && c->pressed == 1)) {
        /* 窓で切って引く（始点が窓のずっと外にあるとき：拡大のあとなど）。
         * 矢の角は、矢の点を図面へ出して画面へ戻したもの（測定：7.45 倍で
         * 矢が (300,300) のとき、本物の帯の角は (300,299)）。 */
        if (c->command == 4) {
            double mx, my;

            jw_cmd_at(w, sx, sy, &mx, &my);
            at_screen(w, mx, my, &sx, &sy);
            /* ④基点変 で中心からなら、帯の反対の角は始点の向こう側。 */
            if (c->box_ctr) {
                at_screen(w, 2.0 * c->x0 - mx, 2.0 * c->y0 - my, &px, &py);
            }
        }
        jw_line_clipped(v, px, py, px, sy, 2, 0x18, JW_STYLE_SOLID);
        jw_line_clipped(v, px, sy, sx, sy, 2, 0x18, JW_STYLE_SOLID);
        jw_line_clipped(v, sx, py, sx, sy, 2, 0x18, JW_STYLE_SOLID);
        jw_line_clipped(v, px, py, sx, py, 2, 0x18, JW_STYLE_SOLID);
    } else if (c->command == 9 && c->pick_a >= 0 && d && !c->pending
               && ((c->stage == 2 && !c->dl_wait)
                   || (c->stage == 3 && c->dl_wait && c->dl_phase && !c->dl_nopre))) {
        /* ２線 の終点を探しているあいだも、仮の二本が矢に付いてくる（色 2。
         * 測定：func_all double_plain で y 270 の x 300..450 が赤）。 */
        JwCmd t = *c;
        int i;

        jw_cmd_at(w, sx, sy, &t.x1, &t.y1);
        for (i = 0; i < 2; i++) {
            double e[4];
            int x0, y0, x1, y1;

            if (!jw_cmd_two_line(&t, d, i, e)) {
                break;
            }
            at_screen(w, e[0], e[1], &x0, &y0);
            at_screen(w, e[2], e[3], &x1, &y1);
            jw_line_clipped(v, x0, y0, x1, y1, 2, 0x18, JW_STYLE_SOLID);
        }
    } else if (c->command == 11) {
        /* The centre **unrounded**.  A point taken by a read is rarely on a
         * whole pixel, and the circle is as wide as the pointer is far from
         * it, so half a pixel at the centre moves the rim by half a pixel all
         * the way round.  Measured: 「（」 draws an arc about (300,250) whose
         * radius is 49.82, so its 90 degree quarter point is (300,200.18); a
         * [CTRL] press takes it, and with the pointer at (450,400) the
         * original's rubber circle passes through (549,200) where a centre
         * rounded to (300,200) puts it at (550,200).  The whole rim is a
         * pixel out -- 1264 of them. */
        const double fx = (c->x0 - w->ox) * w->scale + w->ax;
        const double fy = w->ay - (c->y0 - w->oy) * w->scale;
        const double dx = sx - fx, dy = sy - fy;
        const int n = c->circ_multi > 1 ? c->circ_multi : 1;
        int k;

        /* ②基点変 で ○ なら、仮の円は二点の中点を中心に半分の半径
         * （測定：circle_s1_c2 が全段 0 画素）。 */
        if (c->circ_dia) {
            const double hx = (fx + sx) / 2.0, hy = (fy + sy) / 2.0;

            for (k = n; k >= 1; k--) {
                jw_arc_poly(v, hx, hy, sqrt(dx * dx + dy * dy) / 2.0 * k / n,
                            10000, 0, 0, 0, 2, 0x18, JW_STYLE_SOLID);
            }
            return;
        }
        /* ③重円 なら仮の円も数だけ（外側から r x k/n）。 */
        for (k = n; k >= 1; k--) {
            jw_arc_poly(v, fx, fy, sqrt(dx * dx + dy * dy) * k / n, 10000,
                        0, 0, 0, 2, 0x18, JW_STYLE_SOLID);
        }
    } else if (c->command == 12 && c->arc3 == 3 && c->arc3_kind == 2) {
        /* ②半円の向きを探しているあいだ、本物は仮の半円を**出しません**
         * （測定：(450,330) へ動かしても何も描かれない）。 */
    } else if (c->command == 12 && c->arc3 == 3 && c->arc3_kind == 1) {
        /* ①三点指示の中間点を探しているあいだ：始点・終点・矢の三点を通る
         * 弧が付いてきます（色 2、排他的論理和。記録と同じ求め方）。 */
        const double ax = c->a3x[0], ay = c->a3y[0];
        const double bx = c->a3x[1], by = c->a3y[1];
        double mx, my, den, ux, uy, r;

        jw_cmd_at(w, sx, sy, &mx, &my);
        den = 2.0 * (ax * (by - my) + bx * (my - ay) + mx * (ay - by));
        if (den != 0.0) {
            long sa, sb, sm;
            const long full = 360L << 16;

            ux = ((ax * ax + ay * ay) * (by - my) + (bx * bx + by * by) * (my - ay)
                  + (mx * mx + my * my) * (ay - by)) / den;
            uy = ((ax * ax + ay * ay) * (mx - bx) + (bx * bx + by * by) * (ax - mx)
                  + (mx * mx + my * my) * (bx - ax)) / den;
            r = hypot_of(ax - ux, ay - uy);
            sa = ang16(ux, uy, ax, ay);
            sb = ang16(ux, uy, bx, by);
            sm = ang16(ux, uy, mx, my);
            {
                const long ab = ((sb - sa) % full + full) % full;
                const long am = ((sm - sa) % full + full) % full;

                jw_arc_poly(v, (ux - w->ox) * w->scale + w->ax,
                            w->ay - (uy - w->oy) * w->scale, r * w->scale,
                            10000, am < ab ? sa : sb, am < ab ? sb : sa, 0,
                            2, 0x18, JW_STYLE_SOLID);
            }
        }
    } else if (c->command == 12 && c->pressed == 2 && !c->arc_ask) {
        /* 「（」の始点を取ったあと：始点から矢の向きまでの弧が付いてきます
         * （前は何も出していなかった：本物との差 118 画素）。記録と同じく
         * 短い回りの方。②角度指定 のあとは、打った角度の弧が矢の側に。 */
        const double fx = (c->x0 - w->ox) * w->scale + w->ax;
        const double fy = w->ay - (c->y0 - w->oy) * w->scale;
        const double r = (c->arc_rfix && d
                          ? (double)((float)c->arc_r / jwc_zukei_scale(d))
                          : hypot_of(c->x1 - c->x0, c->y1 - c->y0))
                         * w->scale;
        double mx, my, a0, a1;

        jw_cmd_at(w, sx, sy, &mx, &my);
        a0 = angle_at(c->x1 - c->x0, c->y1 - c->y0);
        a1 = angle_at(mx - c->x0, my - c->y0);
        if (c->arc_fix) {
            const double sweep = a1 - a0 < 0.0 ? a1 - a0 + 360.0 : a1 - a0;
            const double A = (float)c->arc_ang;

            if (sweep <= 180.0) {
                a1 = a0 + A;
            } else {
                a1 = a0;
                a0 = a0 - A;
            }
            while (a0 < 0.0) {
                a0 += 360.0;
            }
            while (a1 >= 360.0) {
                a1 -= 360.0;
            }
        } else if (a1 - a0 < 0.0 ? a1 - a0 + 360.0 > 180.0 : a1 - a0 > 180.0) {
            const double t = a0;

            a0 = a1;
            a1 = t;
        }
        jw_arc_poly(v, fx, fy, r, 10000, fixed16(a0), fixed16(a1), 0,
                    2, 0x18, JW_STYLE_SOLID);
    } else if (c->command == 2 || c->command == 3) {
        int qx = sx, qy = sy;

        if (c->command == 2 || c->fix_len || c->fix_angle || c->par_on) {
            double x, y;

            /* the axis is chosen in drawing units, so go there and back */
            jw_cmd_at(w, sx, sy, &x, &y);
            if (c->command == 2 && c->par_on) {
                plus_par(c, &x, &y);
            } else if (c->command == 2 && c->fix_angle) {
                axis_rot(c, &x, &y);   /* ③角度 を決めたら水平垂直ではなくその角度（測定：plus_s0_c3_v） */
            } else if (c->command == 2) {
                axis(c, &x, &y);
            }
            if (c->command == 3 && c->par_on) {
                par_dir(c, &x, &y);
            } else if (c->command == 3 && c->fix_angle) {
                fix_dir(c, &x, &y);
            }
            /* ②寸法 で長さが決まっていれば、帯もその長さ（本物の赤い線は
             * 矢の向きに 50mm で止まっていた）。 */
            if (c->fix_len && d) {
                fix_end(c, d, &x, &y);
            }
            at_screen(w, x, y, &qx, &qy);
        }
        jw_line(v, px, py, qx, qy, 2, 0x18, JW_STYLE_SOLID);
    }
}

/* The reach of a pick, in drawing units.  Measured: pointing seven above
 * SAMPLE0's top edge takes it and eight does not. */
#define REACH 8.0

/* Does this entity pass the writing pen and line type?
 *
 * **This is what [CTRL] does, not what a plain press does.**  With a modifier
 * key held the search takes only entities drawn with the pen and the line type
 * that are selected for writing; with nothing held it takes anything.  Read
 * out of the original rather than guessed: tools/mkpick.py's `bytes` drawing
 * puts twelve lines ten pixels apart that differ only in the bytes behind the
 * coordinates, and tools/pickat.sh presses on each and reads the number the
 * original's search answers.  All twelve are taken; with `mods ctrl` in the
 * script the two refused are the one with line type 2 and the one with pen 5,
 * SAMPLE0 writing with type 1 and pen 2.  The trailing four bytes make no
 * difference either way, nor does the layer once every layer table is on.
 *
 * It read the other way round until 2026-09-18, when dosv_emu_cpp learnt to
 * answer INT 16h AH=12h: before that JW_CAD was handed a shift state with the
 * Ctrl bit set on every press, so every measurement was a Ctrl measurement.
 * SAMPLE6's walls (pen 1, 2 and 5) can be taken out of a range after all --
 * it was the phantom Ctrl that refused them, not the pen.
 *
 * The test is in the original at 11f2:5993 -- `pen != DGROUP 0xa6a ||
 * type != DGROUP 0xa6c` skips the record -- guarded by the modifier state that
 * 11f2:5967 reads through 1885:5307.  jwc.h has those two addresses as the
 * panel's pen and line type.  Nothing in the port sets `only_writing` yet,
 * because the port takes no modifier keys. */
static int writing_kind(const Jwc *d, int type, int pen)
{
    return type == d->line_type && pen == d->pen;
}

long jw_cmd_line_at_kind(const Jwc *d, const JwView *w, int sx, int sy,
                         int only_writing)
{
    double x, y, best = REACH;
    long k, found = -1;

    if (!d) {
        return -1;
    }
    jw_cmd_at(w, sx, sy, &x, &y);
    for (k = 0; k < d->n_lines; k++) {
        const JwcLine *l = &d->lines[k];
        const double ax = l->x0, ay = l->y0, bx = l->x1, by = l->y1;
        const double dx = bx - ax, dy = by - ay;
        const double len = sqrt(dx * dx + dy * dy);
        double away;

        if (!jwc_visible(d, l->layer)
            || (only_writing && !writing_kind(d, l->type, l->pen))) {
            continue;
        }
        /* Within the ends' box, opened out by the reach ... */
        if (x < (ax < bx ? ax : bx) - REACH || x > (ax > bx ? ax : bx) + REACH
            || y < (ay < by ? ay : by) - REACH || y > (ay > by ? ay : by) + REACH) {
            continue;
        }
        /* ... and within the reach of the line itself.  A line with no length
         * is just its own point. */
        away = len > 0.0
            ? ((x - ax) * dy - (y - ay) * dx) / len
            : sqrt((x - ax) * (x - ax) + (y - ay) * (y - ay));
        if (away < 0.0) {
            away = -away;
        }
        /* Strictly nearer, so that a tie keeps the **earlier** record.  That
         * is the original's own answer: tools/mkpick.py puts two lines on the
         * same row with overlapping ends and two more ten pixels apart, and
         * pressing between them gives 6 where the later record would be 7, and
         * 1 where it would be 2 (tools/pickat.sh reads the number the
         * original's search returns).  `best` starts at the reach, so a line
         * exactly REACH away is out -- seven is taken and eight is not. */
        if (away < best) {
            best = away;
            found = k;
        }
    }
    return found;
}

long jw_cmd_line_at(const Jwc *d, const JwView *w, int sx, int sy)
{
    return jw_cmd_line_at_kind(d, w, sx, sy, 0);
}

/* Which arc is under a point, or -1.  Same reach as a line, and measured the
 * way the shape says: how far the point is from the circle, and then whether it
 * is on the part of it the arc actually draws.
 *
 * Both halves were read off the original with 線消 on SAMPLE6, whose arcs 19 to
 * 24 are quarter circles of radius 27.9 far enough from everything else to be
 * tested on their own (tools/press.sh 10 r X Y, watching 円･文数 fall):
 *
 *     (245,141)  7.8  from arc 19's curve   77 -> 76
 *     (244,140)  8.53 from it               unchanged
 *
 * so the reach is the same REACH as a line's.  And on the three quarters of
 * arc 19's circle that it does not draw, (254,120) and (255,118) sit 0.28 and
 * 0.31 from the circle and nothing at all happens, so the sweep is tested too.
 *
 * Only a round one is handled: `flatten` other than 10000 is an ellipse and its
 * distance is not this difference.  None of the fourteen drawings has one far
 * enough from its neighbours to measure, so it is left alone rather than
 * guessed at. */
long jw_cmd_arc_at_kind(const Jwc *d, const JwView *w, int sx, int sy,
                        int only_writing)
{
    double x, y, best = REACH;
    long k, found = -1;

    if (!d) {
        return -1;
    }
    jw_cmd_at(w, sx, sy, &x, &y);
    for (k = 0; k < d->n_arcs; k++) {
        const JwcArc *a = &d->arcs[k];
        const double dx = x - a->cx, dy = y - a->cy;
        /* The record's angles are anticlockwise from the x axis in the shape's
         * own frame, which the tilt turns; jw_arc_poly draws from `start` to
         * `end`, taking `end` a whole turn further when it is not past it.
         * Undo the tilt on the point and ask the same question. */
        const double s = a->start / 65536.0;
        const double e0 = a->end / 65536.0;
        const double e = e0 > s ? e0 : e0 + 360.0;
        double away = sqrt(dx * dx + dy * dy) - a->r;
        double ang;

        if (!jwc_visible(d, a->layer) || a->flatten != 10000
            || (only_writing && !writing_kind(d, a->type, a->pen))) {
            continue;
        }
        if (away < 0.0) {
            away = -away;
        }
        if (away >= best) {     /* strictly nearer, as for a line */
            continue;
        }
        ang = atan2(dy, dx) * (180.0 / 3.14159265358979323846)
              - a->tilt / 65536.0;
        while (ang < s) {
            ang += 360.0;
        }
        while (ang - 360.0 >= s) {
            ang -= 360.0;
        }
        if (ang > e) {
            continue;
        }
        best = away;
        found = k;
    }
    return found;
}

long jw_cmd_arc_at(const Jwc *d, const JwView *w, int sx, int sy)
{
    return jw_cmd_arc_at_kind(d, w, sx, sy, 0);
}

/* Which text a press takes, or -1.
 *
 * 消去's 追加･除外 asks for a text with the **right** button (its line says
 * `線・円(L) 文字(R)`), and what it takes is not "the nearest" but "the one
 * whose baseline this point is inside the box of", the box being the baseline
 * opened out by ten in x and in y.  A box and not a distance -- that is the
 * measurement that separates the two:
 *
 *     SAMPLE0's text 0 runs (51.17,310.96) to (93.03,310.96)
 *     press at drawing (42,320)   9.17 out in x, 9.04 in y, 12.88 away   taken
 *     press at drawing (103,302)  9.97 out in x, 8.96 in y, 14.09 away   taken
 *     press at drawing (69,300)   inside in x, 10.96 in y, 10.96 away    not
 *     press at drawing (104,311)  10.97 out in x, inside in y, 10.97     not
 *
 * so a point twelve and fourteen away is taken and one eleven away is not.
 * The edge is between 9.97 and 10.04 each way, and ten is the round number in
 * that gap.  It is a bigger reach than a line's eight (REACH).
 *
 * All of it was read off the original with the right button in 追加･除外 and
 * the 132 pixels of that text turning from red to white and back.
 *
 * What is **not** measured: a text that is not horizontal (SAMPLE0's are, and
 * the tilted ones in the drawings that ship are all on layers 消去 does not
 * reach), which of two overlapping texts wins, and whether the character type
 * is filtered the way a line's pen and type are.  The earliest record is taken
 * where several would do, which is what a line does when two are the same
 * distance away. */
#define TEXT_REACH 10.0

long jw_cmd_text_at(const Jwc *d, const JwView *w, int sx, int sy)
{
    double x, y;
    long k;

    if (!d) {
        return -1;
    }
    jw_cmd_at(w, sx, sy, &x, &y);
    for (k = 0; k < d->n_texts; k++) {
        const JwcText *t = &d->texts[k];
        const double lo_x = (t->x0 < t->x1 ? t->x0 : t->x1) - TEXT_REACH;
        const double hi_x = (t->x0 > t->x1 ? t->x0 : t->x1) + TEXT_REACH;
        const double lo_y = (t->y0 < t->y1 ? t->y0 : t->y1) - TEXT_REACH;
        const double hi_y = (t->y0 > t->y1 ? t->y0 : t->y1) + TEXT_REACH;

        if (!jwc_visible(d, t->layer)) {
            continue;
        }
        if (x >= lo_x && x <= hi_x && y >= lo_y && y <= hi_y) {
            return k;
        }
    }
    return -1;
}

/* **読取の探索が近い線に付ける印**（rest[2] の bit 0）。本物は 11f2:573f
 * （ルート 0x1765f）で矢の周りの四角 [矢 ± 範囲]（範囲 = [0x92e0] /
 * [0xc3c]、紙の上の 8 ドット）に外枠がかかる線を回り、線の長いほうの
 * 軸で矢までの隔たり——|dx| >= |dy| なら矢の x での線の y と矢の y の差、
 * そうでなければ矢の y での x の差、長さ 0 なら |dx|+|dy|——が範囲より
 * 小さい線に、**選ぶかどうかの前に** `or es:[bx+14h],1` します（0x17c66）。
 * 読んだ点に端がある線だけではありません。ペン 0x5a 以上の線と読めない
 * レイヤの線は飛ばします（0x1792c・0x17916）。 */
static void near_mark(Jwc *m, const JwView *w, int sx, int sy)
{
    double cx, cy;
    float r, fx, fy;
    long k;

    jw_cmd_at(w, sx, sy, &cx, &cy);
    fx = (float)cx;
    fy = (float)cy;
    r = (float)(JW_READ_REACH / w->scale);
    for (k = 0; k < m->n_lines; k++) {
        JwcLine *l = &m->lines[k];
        const float lx0 = l->x0 < l->x1 ? l->x0 : l->x1;
        const float lx1 = l->x0 < l->x1 ? l->x1 : l->x0;
        const float ly0 = l->y0 < l->y1 ? l->y0 : l->y1;
        const float ly1 = l->y0 < l->y1 ? l->y1 : l->y0;
        const float dx = l->x1 - l->x0, dy = l->y1 - l->y0;
        float dist;

        if (l->pen >= 0x5a || !in_reach_layer(m, l->layer)
            || lx1 < fx - r || lx0 > fx + r || ly1 < fy - r || ly0 > fy + r) {
            continue;
        }
        if (dx == 0.0f && dy == 0.0f) {
            dist = (float)(fabs((double)fy - l->y0) + fabs((double)fx - l->x0));
        } else if (fabs(dx) >= fabs(dy)) {
            dist = (float)fabs((double)fy
                               - ((double)(dy / dx) * ((double)fx - l->x0)
                                  + l->y0));
        } else {
            dist = (float)fabs((double)fx
                               - ((double)((fy - l->y0) / dy) * dx + l->x0));
        }
        if (dist <= r) {
            l->rest[2] |= 1u;
        }
    }
    /* 円弧も同じ探索の中で（0x17d15〜0x181e7）：外枠 [中心 ± 半径] が矢の
     * 四角にかかり、|中心までの距離 - 半径| が範囲より小さく、弧なら矢の
     * 角度が [始角 - 許し, 終角 + 許し] に入るもの（許しは
     * 0def:2828(範囲, 半径)）。円（始角 = 終角）は角度を見ません。
     * **楕円（flatten ≠ 10000）と傾いた弧はまだ**：印を付けません。 */
    for (k = 0; k < m->n_arcs; k++) {
        JwcArc *a = &m->arcs[k];
        double dx, dy, dist;

        if (a->pen >= 0x5a || !in_reach_layer(m, a->layer)
            || a->flatten != 10000 || a->tilt != 0) {
            continue;
        }
        if (fx - r > a->cx + a->r || fy - r > a->cy + a->r
            || a->cx - a->r > fx + r || a->cy - a->r > fy + r) {
            continue;
        }
        dx = (double)a->cx - fx;
        dy = (double)a->cy - fy;
        dist = fabs(sqrt(dx * dx + dy * dy) - a->r);
        if (!((double)r > dist)) {
            continue;
        }
        if (a->start != a->end) {
            const long tol = ang16(0.0, 0.0, (double)r, (double)a->r);
            const long th = ang16(a->cx, a->cy, fx, fy);
            const long full = 360L << 16;
            long s0 = a->start - tol, e0 = a->end + tol;
            long t = th;

            /* 始角から左回りに測った位置で比べます。 */
            s0 = ((s0 % full) + full) % full;
            e0 = ((e0 - s0) % full + full) % full;
            t = ((t - s0) % full + full) % full;
            if (t > e0) {
                continue;
            }
        }
        a->rest[2] |= 1u;
    }
}

/* 押しで線を探す：本物の 11f2:5670 は探索 573f を呼ぶので、**全部の線・円弧の
 * rest[2] の bit 0 を落として、矢の範囲内のものに付け直して**から、いちばん
 * 近い線を返します（測定：＋ ④ で基準線を押すと、その線に印が付き、隠れた
 * 線 11 の印が落ちる）。 */
static long pick_line(Jwc *m, const JwView *w, int sx, int sy)
{
    long k;

    for (k = 0; k < m->n_lines; k++) {
        m->lines[k].rest[2] &= (unsigned char)~1u;
    }
    for (k = 0; k < m->n_arcs; k++) {
        m->arcs[k].rest[2] &= (unsigned char)~1u;
    }
    near_mark(m, w, sx, sy);
    return jw_cmd_line_at(m, w, sx, sy);
}

/* Where a press says its point is, before any snap: the left button takes the
 * pointer and the right one reads what is already drawn.  Returns 0 when the
 * right button found nothing, which is when the original says 読取可能データ無
 * and does nothing else -- no point is taken, so the command stays put. */
static int indicate(JwCmd *c, const Jwc *d, const JwView *w, int sx, int sy,
                    int right, double *x, double *y)
{
    if (!right) {
        jw_cmd_at(w, sx, sy, x, y);
        return 1;
    }
    /* **読み取りは、通りがけに線と円弧の rest[2] の bit 0 を落とします。**
     * 本物の探索 11f2:573f は全部の線を回り、層を見る前に
     * `and byte es:[bx+14h],0FEh`（円弧は +1Eh）をしている（ルートの
     * 0x1790a と 0x17d15）。bit 0 は 線変更 が立てる「変えた」印です。
     * 測定：SAMPLE0 の線 11（レイヤ 1、隠れている）の 0x03 が、何も無い所を
     * 右で押しただけで 0x02 になった（tools/functest.sh）。 */
    if (d) {
        Jwc *m = (Jwc *)d;
        long k;

        for (k = 0; k < m->n_lines; k++) {
            m->lines[k].rest[2] &= (unsigned char)~1u;
        }
        for (k = 0; k < m->n_arcs; k++) {
            m->arcs[k].rest[2] &= (unsigned char)~1u;
        }
    }
    if (d) {
        near_mark((Jwc *)d, w, sx, sy);
    }
    if (!jw_read(d, w, sx, sy, x, y)) {
        c->missed = 1;
        return 0;
    }
    c->missed = 0;
    return 1;
}

/* Which line or arc a modified read works from.  The same search a command's
 * own press does -- lines first, and an arc only when no line is within reach,
 * which is the order tests/pick.c already answers the original in. */
static int search(JwCmd *c, const Jwc *d, const JwView *w, int sx, int sy)
{
    long k = jw_cmd_line_at(d, w, sx, sy);

    if (k >= 0) {
        c->snap_kind = JW_ON_LINE;
        c->snap_at = k;
        return 1;
    }
    k = jw_cmd_arc_at(d, w, sx, sy);
    if (k >= 0) {
        c->snap_kind = JW_ON_ARC;
        c->snap_at = k;
        return 1;
    }
    return 0;
}

/* The first press of a modified read.  Returns 1 only when a point comes out
 * of it there and then, which is [GRPH] on a line or a circle; the other ways
 * through put the command into a snap mode and wait, or find nothing. */
static int modified(JwCmd *c, const Jwc *d, const JwView *w, int sx, int sy,
                    double *x, double *y)
{
    if (c->mods & JW_MOD_CTRL) {
        /* 円周1/4点.  [CTRL] is the one key whose search is **filtered**: it
         * takes only what is drawn with the pen and the line type selected for
         * writing (writing_kind above, measured with tools/pickat.sh).
         * [SHIFT] and [GRPH] are not -- both take SAMPLE6's arc 23, which is
         * pen 1 where the drawing writes with pen 4.
         *
         * ＋ and ／ do something else again with [CTRL]: they take the point
         * **and** hold the direction, 鉛直 to the line or radial to the
         * circle, so what the command draws is constrained and not merely
         * started somewhere.  That is not done yet, so the press is left
         * alone rather than being answered with the wrong thing.
         *
         * A line is not taken here at all: measured, a [CTRL] press on
         * SAMPLE0's line 4 inside □ says 読取可能データ無 even though the line
         * is drawn with the writing pen and line type. */
        double px, py;
        long k;

        if (c->command == 2 || c->command == 3) {
            return 0;
        }
        k = jw_cmd_arc_at_kind(d, w, sx, sy, 1);
        if (k < 0) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        jw_cmd_at(w, sx, sy, &px, &py);
        jw_read_quarter(&d->arcs[k], px, py, x, y);
        return 1;
    }
    if (c->mods & JW_MOD_GRPH) {
        /* 中心点・Ａ点: a read point first.  It wins over the line it is an
         * end of -- SAMPLE0's (232,157) is 0.26 from line 5's right end and
         * 0.65 from line 5 itself, and the original goes to 《２点間中心》 */
        if (jw_read(d, w, sx, sy, x, y)) {
            c->missed = 0;
            c->snap = JW_SNAP_MID;
            c->snap_x = *x;
            c->snap_y = *y;
            return 0;
        }
    }
    if (!search(c, d, w, sx, sy)) {
        c->missed = 1;
        return 0;
    }
    c->missed = 0;
    if (c->mods & JW_MOD_GRPH) {
        if (c->snap_kind == JW_ON_ARC) {
            jw_read_mid_arc(&d->arcs[c->snap_at], x, y);
        } else {
            jw_read_mid_line(&d->lines[c->snap_at], x, y);
        }
        return 1;
    }
    c->snap = JW_SNAP_ON;       /* [SHIFT]: wait for the point to put on it */
    return 0;
}

/* Where a press puts its point, snap and all. */
static int take_point(JwCmd *c, const Jwc *d, const JwView *w,
                      int sx, int sy, int right, double *x, double *y)
{
    double px, py;

    if (c->snap) {
        /* The second press of a modified read.  It indicates its point the
         * ordinary way and the snap turns that into the answer, so a right
         * press reads first and is then put on the line all the same. */
        if (!indicate(c, d, w, sx, sy, right, &px, &py)) {
            return 0;           /* read nothing; the mode is still up */
        }
        if (c->snap == JW_SNAP_MID) {
            *x = (c->snap_x + px) / 2.0;
            *y = (c->snap_y + py) / 2.0;
        } else if (c->snap_kind == JW_ON_ARC) {
            jw_read_on_arc(&d->arcs[c->snap_at], px, py, x, y);
        } else {
            jw_read_on_line(&d->lines[c->snap_at], px, py, x, y);
        }
        c->snap = 0;
        return 1;
    }
    if (right && (c->mods & (JW_MOD_SHIFT | JW_MOD_CTRL | JW_MOD_GRPH))) {
        return modified(c, d, w, sx, sy, x, y);
    }
    return indicate(c, d, w, sx, sy, right, x, y);
}

/* And where that point **is on the screen**, which is what says whether the
 * pointer has moved off it.
 *
 * Not the pixel that was pressed: a read snaps to something already drawn, and
 * then the reading is up straight away.  Measured with a plain right press at
 * SAMPLE0 (383,401), which takes the end at (379.99,401.56) three dots away --
 * with the pointer never moving, the original puts up 長= 1.757 and
 * 角度= 10.507, which is exactly that distance and direction.  A press with the
 * left button takes the pointer itself, so the two are the same pixel and the
 * counts stay, which is what RESUME.md 4.14 measured. */
static int take(JwCmd *c, const Jwc *d, const JwView *w, int sx, int sy,
                int right, double *x, double *y)
{
    if (!take_point(c, d, w, sx, sy, right, x, y)) {
        return 0;
    }
    at_screen(w, *x, *y, &c->press_x, &c->press_y);
    return 1;
}

int jw_cmd_in_range(const JwCmd *c, double ax, double ay, double bx, double by)
{
    const double lo_x = c->x0 < c->x1 ? c->x0 : c->x1;
    const double hi_x = c->x0 < c->x1 ? c->x1 : c->x0;
    const double lo_y = c->y0 < c->y1 ? c->y0 : c->y1;
    const double hi_y = c->y0 < c->y1 ? c->y1 : c->y0;

    int in;

    if (c->cleared) {           /* [F2] threw the range's own answer away */
        return 0;
    }
    in = ax >= lo_x && ax <= hi_x && bx >= lo_x && bx <= hi_x
         && ay >= lo_y && ay <= hi_y && by >= lo_y && by <= hi_y;
    /* ②範囲外消去 turns the question round: what the box does not hold. */
    return c->outside ? !in : in;
}

/* ②範囲外消去 is a **cut**, not a plain erase.
 *
 * `JW_VER.DOC`: 「消去コマンドのうち、範囲内／範囲外消去を、切り取り消去と
 * した」.  Measured on SAMPLE0 with the range (150,130)-(245,170):
 *
 *   * a line wholly outside the box is selected and goes -- seven of the
 *     eleven lines on the layer 消去 reaches (2,3,4,7,8,9,10);
 *   * a line wholly inside is not selected and stays (5 and 6);
 *   * a line that **crosses** the edge is cut at it, and what was inside the
 *     box stays.  Line 1 runs x 40.97 to 477 at y 323.06 and comes back
 *     running x 40.97 to 124, which is the box's right edge; the counts go
 *     30|13 to 23|10, so it is one record still, shortened.
 *
 * The screen says the same thing before ①実行 is pressed: a line wholly
 * outside is painted solid red, and a line that crosses is painted **dotted**
 * -- every other pixel, the 0x5555 of jw_view_line_style(0) -- which is how
 * the original shows what it is about to cut rather than take away.
 *
 * What is not measured: what a crossing arc or a crossing text does (SAMPLE0
 * has no arcs, and its texts are either wholly in or wholly out), and what
 * 追加･除外 does to a line that crosses.  Those are left alone here rather
 * than guessed at.
 */

/* Clip a segment to the range, Liang-Barsky.  Returns 0 if none of it is
 * inside, and otherwise writes the part that is. */
static int clip_to_range(const JwCmd *c, double *ax, double *ay,
                         double *bx, double *by)
{
    const double lo_x = c->x0 < c->x1 ? c->x0 : c->x1;
    const double hi_x = c->x0 < c->x1 ? c->x1 : c->x0;
    const double lo_y = c->y0 < c->y1 ? c->y0 : c->y1;
    const double hi_y = c->y0 < c->y1 ? c->y1 : c->y0;
    const double dx = *bx - *ax, dy = *by - *ay;
    double t0 = 0.0, t1 = 1.0;
    int i;

    for (i = 0; i < 4; i++) {
        const double p = i == 0 ? -dx : i == 1 ? dx : i == 2 ? -dy : dy;
        const double q = i == 0 ? *ax - lo_x : i == 1 ? hi_x - *ax
                       : i == 2 ? *ay - lo_y : hi_y - *ay;
        double r;

        if (p == 0.0) {
            if (q < 0.0) {
                return 0;               /* parallel to this edge and outside */
            }
            continue;
        }
        r = q / p;
        if (p < 0.0) {
            if (r > t1) {
                return 0;
            }
            if (r > t0) {
                t0 = r;
            }
        } else {
            if (r < t0) {
                return 0;
            }
            if (r < t1) {
                t1 = r;
            }
        }
    }
    *bx = *ax + t1 * dx;
    *by = *ay + t1 * dy;
    *ax = *ax + t0 * dx;
    *ay = *ay + t0 * dy;
    return 1;
}

/* Where a line stands against the range in ②範囲外消去: 0 wholly inside,
 * 1 crossing (and the part inside comes back in the four), 2 wholly outside. */
#define JW_OUT_IN    0
#define JW_OUT_CROSS 1
#define JW_OUT_OUT   2

static int outside_kind(const JwCmd *c, double *ax, double *ay,
                        double *bx, double *by)
{
    const double ax0 = *ax, ay0 = *ay, bx0 = *bx, by0 = *by;

    if (!clip_to_range(c, ax, ay, bx, by)) {
        return JW_OUT_OUT;
    }
    if (*ax == ax0 && *ay == ay0 && *bx == bx0 && *by == by0) {
        return JW_OUT_IN;
    }
    return JW_OUT_CROSS;
}

/* The same question the read asks of a layer: shown *and* ringed.  消去 takes
 * only those -- SAMPLE6's layer 0 goes red although the write layer is 2, and
 * TEST7's layers 0c, 0d and 0e, which are shown but not ringed, do not put a
 * single red pixel on the screen. */
static int in_reach_layer(const Jwc *d, unsigned char layer)
{
    return jwc_visible(d, layer) && d->layer_edit[layer]
           && d->group_edit[layer >> 4];
}

/* In ②範囲外消去, is this thing wholly outside the range?
 *
 * Only those are taken.  A line that crosses is cut instead (see
 * outside_kind), and what the original does with an **arc** or a **text** that
 * crosses is not measured -- SAMPLE0's visible texts are each wholly in or
 * wholly out and it has no arcs -- so they are left alone rather than guessed
 * at.  `ax..by` is the thing's own box. */
static int wholly_outside(const JwCmd *c, double ax, double ay,
                          double bx, double by)
{
    const double lo_x = c->x0 < c->x1 ? c->x0 : c->x1;
    const double hi_x = c->x0 < c->x1 ? c->x1 : c->x0;
    const double lo_y = c->y0 < c->y1 ? c->y0 : c->y1;
    const double hi_y = c->y0 < c->y1 ? c->y1 : c->y0;
    const double x0 = ax < bx ? ax : bx, x1 = ax > bx ? ax : bx;
    const double y0 = ay < by ? ay : by, y1 = ay > by ? ay : by;

    return x1 < lo_x || x0 > hi_x || y1 < lo_y || y0 > hi_y;
}

/* Is this entity in 消去's selection?  Everything wholly inside the range is,
 * and 追加･除外 turns single ones the other way. */
/* Does the range take texts in?  ①範囲内消去 and ②範囲外消去 always do;
 * ③指定範囲 asks, and the answer is which button took the first point --
 * `(L)線･円` against `(R)線･円･文字`, as its own line says.  Measured on
 * SAMPLE0 with (150,130)-(245,170): the right button reddens 224 pixels and
 * the left one 89, which is the two lines without text 0. */
static int takes_text(const JwCmd *c)
{
    /* ①範囲内消去 and ②範囲外消去 never ask; ③指定範囲, 複写 and 図形 ①登録
     * do, and the answer is which button took the first point.  図形's own
     * line says so -- `(L)線･円  (R)線･円･文字` -- and HELP 図 形 その1/4
     * spells it out: 始点を左クリックすると線と円弧と曲線が、右クリックする
     * と…文字が選択されます. */
    return !(c->span || JW_MOVE_CMD(c->command) || c->command == 27
             || c->command == 17)
           || c->with_text;
}

static int flipped(const JwCmd *c, int kind, long at)
{
    int i;

    for (i = 0; i < c->n_flip; i++) {
        if (c->flip[i].kind == kind && c->flip[i].at == at) {
            return 1;
        }
    }
    return 0;
}

static void flip(JwCmd *c, int kind, long at)
{
    int i;

    for (i = 0; i < c->n_flip; i++) {
        if (c->flip[i].kind == kind && c->flip[i].at == at) {
            c->flip[i] = c->flip[--c->n_flip];
            return;
        }
    }
    if (c->n_flip < JW_FLIP_MAX) {
        c->flip[c->n_flip].kind = (unsigned char)kind;
        c->flip[c->n_flip].at = at;
        c->n_flip++;
    }
}

/* An arc counts as inside when the box its centre and radius make is.  A line
 * and a text are settled by their two ends, which is what SAMPLE0's erase
 * showed; for an arc there is nothing in the fourteen drawings that separates
 * "the box" from "the two ends", so the box is what this uses. */
static int arc_in_range(const JwCmd *c, const JwcArc *a)
{
    const double rx = a->r;
    const double ry = a->r * (a->flatten > 0 ? a->flatten / 10000.0 : 1.0);
    const double m = rx > ry ? rx : ry;

    return jw_cmd_in_range(c, a->cx - m, a->cy - m, a->cx + m, a->cy + m);
}

/* Copy everything the range picked, moved by (dx,dy) drawing units.  Walks the
 * arrays backwards from the count it started with, so that the copies it makes
 * are not themselves copied.  Returns how many entities it made. */
/* Is entity `k` of this kind picked?  The frozen set once there is one, and
 * the box test until then. */
static int picked_line(const JwCmd *c, const Jwc *d, long k)
{
    if (c->command == 28 || c->command == 13) {
        return 0;               /* 文編集 ⑤位置整理 は文字だけ */
    }
    if (c->sel_line) {
        return k < c->n0_lines && c->sel_line[k];
    }
    /* 面取 の一括処理は端が一つでも範囲にあれば取る（測定：probe_chamfer の
     * chb_a で枠の左辺・上辺に印）。 */
    if (c->command == 8 && c->chb) {
        const JwcLine *l = &d->lines[k];

        return in_reach_layer(d, l->layer)
               && (jw_cmd_in_range(c, l->x0, l->y0, l->x0, l->y0)
                   || jw_cmd_in_range(c, l->x1, l->y1, l->x1, l->y1))
                  != flipped(c, JW_FLIP_LINE, k);
    }
    return in_reach_layer(d, d->lines[k].layer)
           && jw_cmd_in_range(c, d->lines[k].x0, d->lines[k].y0,
                              d->lines[k].x1, d->lines[k].y1)
              != flipped(c, JW_FLIP_LINE, k);
}

/* 変形 takes more than 複写 does.  複写 wants the whole entity inside the
 * box; パラメトリック変形 also takes anything with **one** endpoint in it,
 * because those are the ones it stretches.  Measured on SAMPLE0 with the
 * range (200,150)-(450,350): lines 5 and 6, which stick out of the box,
 * come out **red and dotted** (every other pixel, style 0), and with the
 * bigger box that holds them whole they are solid red -- the same colour 2
 * 複写 uses.
 *
 * Returns 0 (not taken), 1 (wholly inside) or 2 (one end inside). */
static int henkei_kind(const JwCmd *c, double ax, double ay,
                       double bx, double by)
{
    const int a = jw_cmd_in_range(c, ax, ay, ax, ay);
    const int b = jw_cmd_in_range(c, bx, by, bx, by);

    return (a && b) ? 1 : (a || b) ? 2 : 0;
}

static int picked_arc(const JwCmd *c, const Jwc *d, long k)
{
    if (c->command == 28 || c->command == 13) {
        return 0;
    }
    if (c->sel_arc) {
        return k < c->n0_arcs && c->sel_arc[k];
    }
    return in_reach_layer(d, d->arcs[k].layer)
           && arc_in_range(c, &d->arcs[k]) != flipped(c, JW_FLIP_ARC, k);
}

static int picked_text(const JwCmd *c, const Jwc *d, long k)
{
    if (c->sel_text) {
        return k < c->n0_texts && c->sel_text[k];
    }
    return takes_text(c) && in_reach_layer(d, d->texts[k].layer)
           && jw_cmd_in_range(c, d->texts[k].x0, d->texts[k].y0,
                              d->texts[k].x1, d->texts[k].y1)
              != flipped(c, JW_FLIP_TEXT, k);
}

/* 図形 ①登録 -- the bytes of the figure for what the range picked.
 *
 * The same tests the range draws its selection with, so what goes in the file
 * is exactly what is marked on the screen.  A point has no test of its own:
 * it is in when its layer is within reach and it is inside the box, with no
 * per-entity adding and removing -- that is what jw_cmd_marks does, and what
 * the original does (図形's own line offers 線･円 and 線･円･文字 and says
 * nothing about points, and a range over TEST1 that has two of its four
 * points in it writes two into the file).
 */
unsigned char *jw_cmd_zukei_bytes(const JwCmd *c, const Jwc *d,
                                  long *out_len, const char **why)
{
    unsigned char *take_line = NULL, *take_arc = NULL;
    unsigned char *take_point = NULL, *take_text = NULL;
    unsigned char *out = NULL;
    long k;

    *why = NULL;
    *out_len = 0;
    if (d->n_lines) {
        take_line = (unsigned char *)malloc((size_t)d->n_lines);
    }
    if (d->n_arcs) {
        take_arc = (unsigned char *)malloc((size_t)d->n_arcs);
    }
    if (d->n_points) {
        take_point = (unsigned char *)malloc((size_t)d->n_points);
    }
    if (d->n_texts) {
        take_text = (unsigned char *)malloc((size_t)d->n_texts);
    }
    if ((d->n_lines && !take_line) || (d->n_arcs && !take_arc)
        || (d->n_points && !take_point) || (d->n_texts && !take_text)) {
        *why = "out of memory";
    } else {
        for (k = 0; k < d->n_lines; k++) {
            take_line[k] = (unsigned char)(picked_line(c, d, k) != 0);
        }
        for (k = 0; k < d->n_arcs; k++) {
            take_arc[k] = (unsigned char)(picked_arc(c, d, k) != 0);
        }
        for (k = 0; k < d->n_points; k++) {
            take_point[k] = (unsigned char)
                (in_reach_layer(d, d->points[k].layer)
                 && jw_cmd_in_range(c, d->points[k].x, d->points[k].y,
                                    d->points[k].x, d->points[k].y));
        }
        for (k = 0; k < d->n_texts; k++) {
            take_text[k] = (unsigned char)(picked_text(c, d, k) != 0);
        }
        out = jwc_zukei_bytes(d, take_line, take_arc, take_point, take_text,
                              c->zukei_bx, c->zukei_by, out_len, why);
    }
    free(take_line);
    free(take_arc);
    free(take_point);
    free(take_text);
    return out;
}

static void freeze(JwCmd *c, const Jwc *d);

/* 複写 ⑤反転: the range again, turned over in the line that was pressed.
 *
 * Measured on SAMPLE0.  With the range (150,130)-(245,170) -- lines 5 and 6 --
 * and line 0 (the vertical at x=40.973) as the 反転基準線:
 *
 *     (40.973,305.616)-(110.737,305.616) -> (40.973,305.616)-(-28.791,…)
 *     (110.737,305.616)-(110.737,323.057) -> (-28.791,305.616)-(-28.791,…)
 *
 * so a line keeps the order of its ends.  A **text** does not: taking text 0
 * in with a right press on the first corner turns
 * (51.172,310.957)-(93.030,310.957) into (-11.084,310.957)-(30.774,310.957),
 * which is the reflection of the *second* end first -- the baseline still
 * runs left to right, so the string still reads the right way round.
 *
 * Arcs are **not measured**: neither SAMPLE0 nor the ranges tried on TEST1
 * had one inside.  They are turned over the way the geometry says (the centre
 * reflected, the two angles reflected and swapped), which is a guess.
 */
/* **移動 paints what it takes out before it puts it down again.**  The
 * original draws each picked entity in colour 0 where it was and then draws
 * it where it goes, and redraws nothing else -- so a pixel a moved line
 * shared with one that stayed is left black.  Measured on SAMPLE0's
 * (150,130)-(245,170) with ⑥回転 30 degrees: lines 5 and 6 go, and (161,157)
 * and (231,139), where they met lines 0 and 1, are black in the original.
 * The ink (JwcInk) replays that; `erase` 1 notes the entities as they are
 * before the move, 0 as they are after it. */
static void move_ink(const JwCmd *c, Jwc *d, int erase)
{
    long k;

    /* Each step is a press of its own.  The page settles the ink between
     * presses as it draws, but tests/drawing.exe takes them all before it
     * draws once, and settling two moves as one batch would put both erases
     * first and leave the entities standing where the first step put them
     * (移動 ﾏｳｽ位置 再: 224 pixels). */
    if (erase) {
        jwc_ink_settle(d);
    }
    for (k = 0; k < c->n0_lines; k++) {
        if (picked_line(c, d, k)) {
            jwc_ink_note(d, erase, JW_INK_LINE, &d->lines[k]);
        }
    }
    for (k = 0; k < c->n0_arcs; k++) {
        if (picked_arc(c, d, k)) {
            jwc_ink_note(d, erase, JW_INK_ARC, &d->arcs[k]);
        }
    }
    for (k = 0; k < c->n0_texts && takes_text(c); k++) {
        if (picked_text(c, d, k)) {
            jwc_ink_note(d, erase, JW_INK_TEXT, &d->texts[k]);
        }
    }
}

static void mirror_at(double ax, double ay, double ux, double uy,
                      double x, double y, double *rx, double *ry)
{
    /* 軸の始点からの差は float に丸める（測定：copy_t_mirror で縦の軸
     * （始点 y 323.057）に写した線 33 の y1 が 0x4275c3a8——元は aa。
     * F(F(y - ay) + ay) と同じ）。 */
    const double vx = (float)(x - ax), vy = (float)(y - ay);
    const double t = 2.0 * (vx * ux + vy * uy);

    *rx = ax + t * ux - vx;
    *ry = ay + t * uy - vy;
}

static int mirror_range(JwCmd *c, Jwc *d, long m)
{
    const JwcLine *l;
    double ax, ay, ux, uy, len, axis;
    long k;
    int n = 0;

    if (m < 0 || m >= d->n_lines) {
        return 0;
    }
    l = &d->lines[m];
    ax = l->x0;
    ay = l->y0;
    ux = l->x1 - l->x0;
    uy = l->y1 - l->y0;
    len = sqrt(ux * ux + uy * uy);
    if (len < 1e-9) {
        return 0;
    }
    ux /= len;
    uy /= len;
    axis = atan2(uy, ux) * 180.0 / 3.14159265358979323846;
    if (!c->sel_line) {
        freeze(c, d);
    }
    if (JW_MOVING(c)) {
        move_ink(c, d, 1);
    }
    for (k = 0; k < c->n0_lines; k++) {
        double x0, y0, x1, y1;

        if (!picked_line(c, d, k)) {
            continue;
        }
        mirror_at(ax, ay, ux, uy, d->lines[k].x0, d->lines[k].y0, &x0, &y0);
        mirror_at(ax, ay, ux, uy, d->lines[k].x1, d->lines[k].y1, &x1, &y1);
        /* 移動は元の線をその場で裏返す（測定：move_s_mirror は数が増えず、
         * 線 5 が複写の写しと同じ座標になる）。 */
        if (JW_MOVING(c)) {
            JwcLine *q = &d->lines[k];

            q->x0 = (float)x0;
            q->y0 = (float)y0;
            q->x1 = (float)x1;
            q->y1 = (float)y1;
            n++;
        } else if (jwc_dup_line(d, k, 0.0f, 0.0f)) {
            JwcLine *q = &d->lines[d->n_lines - 1];

            q->x0 = (float)x0;
            q->y0 = (float)y0;
            q->x1 = (float)x1;
            q->y1 = (float)y1;
            n++;
        }
    }
    for (k = 0; k < c->n0_arcs; k++) {
        double cx, cy;

        if (!picked_arc(c, d, k)) {
            continue;
        }
        mirror_at(ax, ay, ux, uy, d->arcs[k].cx, d->arcs[k].cy, &cx, &cy);
        if (JW_MOVING(c)) {
            JwcArc *q = &d->arcs[k];
            const long twice = (long)(2.0 * axis * 65536.0);
            const long s0 = q->start;

            q->cx = (float)cx;
            q->cy = (float)cy;
            q->start = twice - q->end;
            q->end = twice - s0;
            n++;
        } else if (jwc_dup_arc(d, k, 0.0f, 0.0f)) {
            JwcArc *q = &d->arcs[d->n_arcs - 1];
            const long twice = (long)(2.0 * axis * 65536.0);

            q->cx = (float)cx;
            q->cy = (float)cy;
            q->start = twice - d->arcs[k].end;
            q->end = twice - d->arcs[k].start;
            n++;
        }
    }
    for (k = 0; k < c->n0_texts && takes_text(c); k++) {
        double x0, y0, x1, y1, th;

        if (!picked_text(c, d, k)) {
            continue;
        }
        mirror_at(ax, ay, ux, uy, d->texts[k].x0, d->texts[k].y0, &x0, &y0);
        mirror_at(ax, ay, ux, uy, d->texts[k].x1, d->texts[k].y1, &x1, &y1);
        /* The two ends come back in the other order when the reflection would
         * leave the string reading backwards.  JW_CADV.HLP says exactly when,
         * under 複写 5)反転:
         *
         *     文字方向を、横字は-90<θ<=90、縦字は-90<=θ<90 の方向に修正
         *     します。
         *
         * -- so the baseline's angle is brought back into that half-turn, and
         * the only way to move it by 180 degrees is to swap its ends.
         *
         * Three measurements, all agreeing with **the 横字 range alone**
         * (`sh tools/mirrorsave.sh` drives the original and prints what it
         * appended):
         *
         *   SAMPLE0  text 0 (51.172,310.957)-(93.030,310.957), axis the
         *            vertical x=40.973 -- 0 degrees becomes 180, out of
         *            range, and the original writes
         *            (-11.084,310.957)-(30.774,310.957): the ends swapped
         *   TEST1    text 10 at 0 degrees, axis line 39 at -38.05 -- becomes
         *            -76.1, in range, and the ends do **not** swap
         *   TEST1    text 7 `５ｍライン`, whose baseline runs straight up at
         *            +90, axis the vertical line 13 -- stays +90, and the
         *            ends do **not** swap
         *
         * The last one is the interesting one: +90 is in the 横字 range and
         * out of the 縦字 one, so a baseline standing on end is still 横字 as
         * far as this is concerned -- 縦字 must be JW_CAD's vertical-writing
         * character type rather than any baseline pointing upward, and the
         * port does not make those. */
        th = atan2(y1 - y0, x1 - x0) * 180.0 / 3.14159265358979323846;
        if (th > 90.0 + 1e-9 || th < -90.0 + 1e-9) {
            double t = x0; x0 = x1; x1 = t;
            t = y0; y0 = y1; y1 = t;
        } else {
            /* ...and when it does **not** swap, the baseline moves sideways
             * by one character height.
             *
             * A record holds the baseline, and the glyphs always sit on one
             * side of it -- the +90-degrees side, above a string running left
             * to right.  A reflection turns that side over, so the picture it
             * makes has the glyphs on the *other* side; putting the ends back
             * in the other order turns it over again and nothing has to move,
             * but leaving them alone means the baseline has to cross the
             * string to keep the glyphs where the reflection put them.
             *
             * Height, not width: text_h / 10 x unit_mm, the same number
             * text_height draws with.  Measured twice and then predicted once
             * before measuring, which is what settled it:
             *
             *   TEST1    text 10 (size 2, unit_mm 0.872054, so 2.180),
             *            axis line 39 at -38.05 degrees -- the whole string
             *            moves (-2.106,-0.527), which is 2.180 along
             *            (dy,-dx)/len
             *   TEST1    text 7 standing at +90 (size 10, so 8.721), axis a
             *            vertical line -- x moves +8.721 and y does not
             *   SAMPLE0  text 0 (size 3, unit_mm 1.744108, so 5.232), axis
             *            line 4, horizontal.  Predicted -188.075 - 5.232 =
             *            **-193.307** before running it; the original wrote
             *            -193.307
             */
            const double run = sqrt((x1 - x0) * (x1 - x0)
                                    + (y1 - y0) * (y1 - y0));

            if (run > 1e-9) {
                const int sz = d->texts[k].size <= 10 ? d->texts[k].size : 0;
                const double tall = d->text_h[sz] / 10.0 * d->unit_mm;
                const double sx = tall * (y1 - y0) / run;
                const double sy = tall * -(x1 - x0) / run;

                x0 += sx;
                y0 += sy;
                x1 += sx;
                y1 += sy;
            }
        }
        if (JW_MOVING(c)) {
            JwcText *q = &d->texts[k];

            q->x0 = (float)x0;
            q->y0 = (float)y0;
            q->x1 = (float)x1;
            q->y1 = (float)y1;
            n++;
        } else if (jwc_dup_text(d, k, 0.0f, 0.0f)) {
            JwcText *q = &d->texts[d->n_texts - 1];

            q->x0 = (float)x0;
            q->y0 = (float)y0;
            q->x1 = (float)x1;
            q->y1 = (float)y1;
            n++;
        }
    }
    if (JW_MOVING(c)) {
        move_ink(c, d, 0);
    }
    return n;
}

/* 複写/移動 ⑥回転: the range again, turned about a point.
 *
 * The line after ⑥回転 is `複写  原図形の基準点位置 マウス指示` -- the same
 * one ①ﾏｳｽ位置 puts up -- and then `角度 =` with a field, and then `複写 位置`
 * again.  So there are three points in it: the 基準点 the figure turns about,
 * the angle, and where the 基準点 ends up.
 *
 *     p' = R(theta) (p - base) + place
 *
 * and nothing else -- no correction of any kind, not even for a string that
 * ends up reading backwards.  Measured on SAMPLE0 with the range
 * (150,130)-(245,170), the base at screen (200,300) = record (79,163) and the
 * place at (400,300) = (279,163):
 *
 *   3 degrees   line 5 (40.973,305.616)-(110.737,305.616)
 *                 -> (233.561,303.431)-(303.230,307.082)   R gives .5605/.4302
 *               text 0 (51.172,310.957)-(93.030,310.957)
 *                 -> (243.466,309.298)-(285.268,311.489)
 *
 * The text is the interesting one: its two ends stay in order and its
 * baseline does not move sideways, which is what ⑤反転 has to do (4.28).  A
 * reflection turns the glyphs over and a rotation does not, so there is
 * nothing to put right.
 */
static void turn_at(double ax, double ay, double co, double si,
                    double dx, double dy, double x, double y,
                    double *rx, double *ry)
{
    /* 基点からの差も、回した差も float に丸めてから置く点を足す（測定：
     * copy_s_rot・copy_t_rot の 16 の端点が全部合う。丸めないと線 5 の
     * x0 が 0x427ca0cf、本物は d0）。 */
    const double vx = (float)(x - ax), vy = (float)(y - ay);

    *rx = (float)(vx * co - vy * si) + dx;
    *ry = (float)(vx * si + vy * co) + dy;
}

static int turn_range(JwCmd *c, Jwc *d, double px, double py)
{
    const double rad = c->rot_deg * 3.14159265358979323846 / 180.0;
    const double co = cos(rad), si = sin(rad);
    /* 16.16 degrees, the way the record keeps every angle (src/jwc.h). */
    const long twist = (long)(c->rot_deg * 65536.0);
    long k;
    int n = 0;

    if (!c->sel_line) {
        freeze(c, d);
    }
    if (JW_MOVING(c)) {
        move_ink(c, d, 1);
    }
    for (k = 0; k < c->n0_lines; k++) {
        double x0, y0, x1, y1;

        if (!picked_line(c, d, k)) {
            continue;
        }
        turn_at(c->base_x, c->base_y, co, si, px, py,
                d->lines[k].x0, d->lines[k].y0, &x0, &y0);
        turn_at(c->base_x, c->base_y, co, si, px, py,
                d->lines[k].x1, d->lines[k].y1, &x1, &y1);
        /* 移動 takes the originals with it instead of leaving them.
         * Measured: 移動 ⑥回転 on SAMPLE0's (150,130)-(245,170) with the
         * base at (79,163), 30 degrees and the place at (279,163) puts lines
         * 5 and 6 and text 0 at exactly the coordinates 複写 gives its
         * copies, and the counts stay at 30|13. */
        if (JW_MOVING(c)) {
            d->lines[k].x0 = (float)x0;
            d->lines[k].y0 = (float)y0;
            d->lines[k].x1 = (float)x1;
            d->lines[k].y1 = (float)y1;
            n++;
        } else if (jwc_dup_line(d, k, 0.0f, 0.0f)) {
            JwcLine *q = &d->lines[d->n_lines - 1];

            q->x0 = (float)x0;
            q->y0 = (float)y0;
            q->x1 = (float)x1;
            q->y1 = (float)y1;
            n++;
        }
    }
    for (k = 0; k < c->n0_arcs; k++) {
        double cx, cy;

        if (!picked_arc(c, d, k)) {
            continue;
        }
        turn_at(c->base_x, c->base_y, co, si, px, py,
                d->arcs[k].cx, d->arcs[k].cy, &cx, &cy);
        if (JW_MOVING(c)) {
            d->arcs[k].cx = (float)cx;
            d->arcs[k].cy = (float)cy;
            d->arcs[k].tilt += twist;
            n++;
            continue;
        }
        if (jwc_dup_arc(d, k, 0.0f, 0.0f)) {
            JwcArc *q = &d->arcs[d->n_arcs - 1];

            q->cx = (float)cx;
            q->cy = (float)cy;
            /* **The tilt takes the turn, not the two angles.**  Measured on
             * TEST1 with the range (235,218)-(340,320), the base at screen
             * (300,350) and 30 degrees: arc 0 keeps 90..180 and its tilt goes
             * from 0 to 30 (`sh tools/rotatesave.sh`).  Adding the turn to
             * start and end would draw the same circle -- the difference only
             * shows on an ellipse, where the tilt turns the axes too, and on
             * the record, which has to match. */
            q->tilt = d->arcs[k].tilt + twist;
            n++;
        }
    }
    for (k = 0; k < c->n0_texts && takes_text(c); k++) {
        double x0, y0, x1, y1;

        if (!picked_text(c, d, k)) {
            continue;
        }
        /* The start is turned like everything else; **the far end is worked
         * out again from the string**, not turned with it.
         *
         * Measured with ③連続, which turns by twice the angle and so shows
         * the difference: SAMPLE0's text 0 at 60 degrees comes back from the
         * original as (336.951,212.879)-(357.881,249.129).  Turning the
         * stored far end -- or the stored baseline vector, which is the same
         * arithmetic -- gives 357.880 however the rounding is arranged;
         * laying jwc_text_length along the new direction gives 357.881.
         *
         * It fits what the record is: a text's extent follows from its string
         * and its character size, so once the direction changes the far end
         * has to be re-derived.  ③数値倍率 does **not** do this -- there the
         * angle does not change and both ends simply move (scale_range). */
        turn_at(c->base_x, c->base_y, co, si, px, py,
                d->texts[k].x0, d->texts[k].y0, &x0, &y0);
        {
            const double was = atan2(d->texts[k].y1 - d->texts[k].y0,
                                     d->texts[k].x1 - d->texts[k].x0);
            const double dir = was + rad;
            const double len = jwc_text_length(d, d->texts[k].text,
                                               d->texts[k].size);

            x1 = x0 + len * cos(dir);
            y1 = y0 + len * sin(dir);
        }
        if (JW_MOVING(c)) {
            d->texts[k].x0 = (float)x0;
            d->texts[k].y0 = (float)y0;
            d->texts[k].x1 = (float)x1;
            d->texts[k].y1 = (float)y1;
            n++;
        } else if (jwc_dup_text(d, k, 0.0f, 0.0f)) {
            JwcText *q = &d->texts[d->n_texts - 1];

            q->x0 = (float)x0;
            q->y0 = (float)y0;
            q->x1 = (float)x1;
            q->y1 = (float)y1;
            n++;
        }
    }
    if (JW_MOVING(c)) {
        move_ink(c, d, 0);
    }
    return n;
}

/* 複写/移動 ③数値倍率: the range again, scaled about a point.
 *
 * The same three points ⑥回転 takes -- 基準点, a number, where it goes --
 * with `.倍率 X,Y =` in place of the angle.  For a line and an arc it is what
 * it sounds like:
 *
 *     p' = S (p - base) + place
 *
 * **A text is different: only its start point moves.**  JW_CADV.HLP says so
 * under 複写:
 *
 *     ※　数値倍率・マウス倍率の場合、文字は指定されている文字の基準
 *     　点を倍率複写した位置になります。ただし、角度は変りません。
 *
 * -- the character size is an index into the drawing's own table, so a string
 * cannot be made bigger by a scale, and its baseline's length follows from
 * the string and that size (jwc_text_length).  So the baseline keeps its
 * length and its direction and is simply carried to where its start landed.
 *
 * Measured on SAMPLE0, range (150,130)-(245,170), base (79,163), place
 * (279,163), scale 2:
 *
 *     line 5 (40.973,305.616)-(110.737,305.616)
 *              -> (202.946,448.232)-(342.475,448.232)      both ends doubled
 *     text 0 (51.172,310.957)-(93.030,310.957)
 *              -> (223.344,458.914)-(265.202,458.914)      41.858 long still
 */
static int scale_range(JwCmd *c, Jwc *d, double px, double py)
{
    /* 倍率は float で持つ（測定：copy_t_mscale の y 倍率 70/50 は float の
     * 1.4 で掛けないと線 0 の y0 が 1 ビットずれる）。 */
    const double sx = (float)c->scale_x, sy = (float)c->scale_y;
    long k;
    int n = 0;

    if (!c->sel_line) {
        freeze(c, d);
    }
    if (JW_MOVING(c)) {
        move_ink(c, d, 1);
    }
    for (k = 0; k < c->n0_lines; k++) {
        if (!picked_line(c, d, k)) {
            continue;
        }
        {
            /* 差を float に、倍にした差も float に丸めてから置く点を足す（回転と
             * 同じ。測定：copy_s_mscale の線 30 の x0 が 0x4268a098、丸めないと 9a）。 */
            const double ax = (float)((float)(d->lines[k].x0 - c->base_x) * sx) + px;
            const double ay = (float)((float)(d->lines[k].y0 - c->base_y) * sy) + py;
            const double bx = (float)((float)(d->lines[k].x1 - c->base_x) * sx) + px;
            const double by = (float)((float)(d->lines[k].y1 - c->base_y) * sy) + py;
            JwcLine *q = NULL;

            if (JW_MOVING(c)) {
                q = &d->lines[k];
            } else if (jwc_dup_line(d, k, 0.0f, 0.0f)) {
                q = &d->lines[d->n_lines - 1];
            }
            if (q) {
                q->x0 = (float)ax;
                q->y0 = (float)ay;
                q->x1 = (float)bx;
                q->y1 = (float)by;
                n++;
            }
        }
    }
    for (k = 0; k < c->n0_arcs; k++) {
        if (!picked_arc(c, d, k)) {
            continue;
        }
        {
            const double ax = (float)((float)(d->arcs[k].cx - c->base_x) * sx) + px;
            const double ay = (float)((float)(d->arcs[k].cy - c->base_y) * sy) + py;
            const double r = d->arcs[k].r * sx;
            JwcArc *q = NULL;

            if (JW_MOVING(c)) {
                q = &d->arcs[k];
            } else if (jwc_dup_arc(d, k, 0.0f, 0.0f)) {
                q = &d->arcs[d->n_arcs - 1];
            }
            if (q) {
                q->cx = (float)ax;
                q->cy = (float)ay;
                q->r = (float)r;
                n++;
            }
        }
    }
    for (k = 0; k < c->n0_texts && takes_text(c); k++) {
        if (!picked_text(c, d, k)) {
            continue;
        }
        {
            const double x0 = (float)((float)(d->texts[k].x0 - c->base_x) * sx) + px;
            const double y0 = (float)((float)(d->texts[k].y0 - c->base_y) * sy) + py;
            const double dx = d->texts[k].x1 - d->texts[k].x0;
            const double dy = d->texts[k].y1 - d->texts[k].y0;
            JwcText *q = NULL;

            if (JW_MOVING(c)) {
                q = &d->texts[k];
            } else if (jwc_dup_text(d, k, 0.0f, 0.0f)) {
                q = &d->texts[d->n_texts - 1];
            }
            if (q) {
                q->x0 = (float)x0;
                q->y0 = (float)y0;
                q->x1 = (float)(x0 + dx);
                q->y1 = (float)(y0 + dy);
                n++;
            }
        }
    }
    if (JW_MOVING(c)) {
        move_ink(c, d, 0);
    }
    return n;
}

static int copy_range(const JwCmd *c, Jwc *d, double dx, double dy)
{
    const long lines = c->n0_lines, arcs = c->n0_arcs, texts = c->n0_texts;
    int n = 0;
    long k;

    for (k = 0; k < lines; k++) {
        if (picked_line(c, d, k)) {
            n += jwc_dup_line(d, k, (float)dx, (float)dy);
        }
    }
    for (k = 0; k < arcs; k++) {
        if (picked_arc(c, d, k)) {
            n += jwc_dup_arc(d, k, (float)dx, (float)dy);
        }
    }
    for (k = 0; k < texts && takes_text(c); k++) {
        if (picked_text(c, d, k)) {
            n += jwc_dup_text(d, k, (float)dx, (float)dy);
        }
    }
    return n;
}

/* 移動 shifts what the range picked instead of copying it.  The records keep
 * every byte but the coordinates, and the counts do not change -- SAMPLE0
 * stays at 30|13 through a move. */
static void move_range(const JwCmd *c, Jwc *d, double dx, double dy)
{
    long k;

    move_ink(c, d, 1);

    for (k = 0; k < c->n0_lines; k++) {
        JwcLine *l = &d->lines[k];

        if (picked_line(c, d, k)) {
            l->x0 += (float)dx;
            l->y0 += (float)dy;
            l->x1 += (float)dx;
            l->y1 += (float)dy;
        }
    }
    for (k = 0; k < c->n0_arcs; k++) {
        JwcArc *a = &d->arcs[k];

        if (picked_arc(c, d, k)) {
            a->cx += (float)dx;
            a->cy += (float)dy;
        }
    }
    for (k = 0; k < c->n0_texts && takes_text(c); k++) {
        JwcText *t = &d->texts[k];

        if (picked_text(c, d, k)) {
            t->x0 += (float)dx;
            t->y0 += (float)dy;
            t->x1 += (float)dx;
            t->y1 += (float)dy;
        }
    }
    move_ink(c, d, 0);
}

/* 複写's ②数値位置 asks for the distance in millimetres of paper; the drawing
 * keeps them the same way 複線 keeps its interval -- `mm * unit_mm / denom`.
 * Measured on SAMPLE0 (S=1/1, unit_mm 1.744108): 20,30 moves the copy 35
 * pixels across and 52 up, which is 20*1.744 and 30*1.744 truncated. */
/* Write down what the range holds, so that it stays picked after the entities
 * have been moved.  One byte an entity, up to the counts the range was fixed
 * at; a `1` means the original showed it in colour 2. */
static void freeze(JwCmd *c, const Jwc *d)
{
    long k;

    free(c->hen_end);
    c->hen_end = 0;
    free(c->sel_line);
    free(c->sel_arc);
    free(c->sel_text);
    c->sel_line = (unsigned char *)calloc((size_t)(c->n0_lines + 1), 1);
    c->sel_arc = (unsigned char *)calloc((size_t)(c->n0_arcs + 1), 1);
    c->sel_text = (unsigned char *)calloc((size_t)(c->n0_texts + 1), 1);
    if (!c->sel_line || !c->sel_arc || !c->sel_text) {
        return;
    }
    for (k = 0; k < c->n0_lines; k++) {
        const JwcLine *l = &d->lines[k];

        c->sel_line[k] = (unsigned char)
            (in_reach_layer(d, l->layer)
             && jw_cmd_in_range(c, l->x0, l->y0, l->x1, l->y1)
                != flipped(c, JW_FLIP_LINE, k));
    }
    for (k = 0; k < c->n0_arcs; k++) {
        const JwcArc *a = &d->arcs[k];

        c->sel_arc[k] = (unsigned char)
            (in_reach_layer(d, a->layer)
             && arc_in_range(c, a) != flipped(c, JW_FLIP_ARC, k));
    }
    for (k = 0; k < c->n0_texts; k++) {
        const JwcText *t = &d->texts[k];

        c->sel_text[k] = (unsigned char)
            (takes_text(c) && in_reach_layer(d, t->layer)
             && jw_cmd_in_range(c, t->x0, t->y0, t->x1, t->y1)
                != flipped(c, JW_FLIP_TEXT, k));
    }
}

/* Put the selection down one step away: 複写 leaves a copy of what the range
 * picked and 移動 shifts it.  The step is remembered so ③連続 can repeat it. */
/* ①ﾏｳｽ位置 で置くときの座標：基点からの差を float に丸めてから置く点を
 * 足す（回転・倍率と同じ形。測定：copy_t_posr で線 7 の y1 61.44085 が
 * 0xc2c53b7c——量を足す形では 7b）。文字も同じにしてあるが未測定。 */
#define REL_AT(v, b, p) ((float)((float)((v) - (b)) + (p)))

static void rel_range(JwCmd *c, Jwc *d, double px, double py)
{
    const double bx = c->base_x, by = c->base_y;
    long k;

    if (JW_MOVING(c)) {
        move_ink(c, d, 1);
    }
    for (k = 0; k < c->n0_lines; k++) {
        JwcLine *q = NULL;

        if (!picked_line(c, d, k)) {
            continue;
        }
        if (JW_MOVING(c)) {
            q = &d->lines[k];
        } else if (jwc_dup_line(d, k, 0.0f, 0.0f)) {
            q = &d->lines[d->n_lines - 1];
        }
        if (q) {
            q->x0 = REL_AT(q->x0, bx, px);
            q->y0 = REL_AT(q->y0, by, py);
            q->x1 = REL_AT(q->x1, bx, px);
            q->y1 = REL_AT(q->y1, by, py);
        }
    }
    for (k = 0; k < c->n0_arcs; k++) {
        JwcArc *q = NULL;

        if (!picked_arc(c, d, k)) {
            continue;
        }
        if (JW_MOVING(c)) {
            q = &d->arcs[k];
        } else if (jwc_dup_arc(d, k, 0.0f, 0.0f)) {
            q = &d->arcs[d->n_arcs - 1];
        }
        if (q) {
            q->cx = REL_AT(q->cx, bx, px);
            q->cy = REL_AT(q->cy, by, py);
        }
    }
    for (k = 0; k < c->n0_texts && takes_text(c); k++) {
        JwcText *q = NULL;

        if (!picked_text(c, d, k)) {
            continue;
        }
        if (JW_MOVING(c)) {
            q = &d->texts[k];
        } else if (jwc_dup_text(d, k, 0.0f, 0.0f)) {
            q = &d->texts[d->n_texts - 1];
        }
        if (q) {
            q->x0 = REL_AT(q->x0, bx, px);
            q->y0 = REL_AT(q->y0, by, py);
            q->x1 = REL_AT(q->x1, bx, px);
            q->y1 = REL_AT(q->y1, by, py);
        }
    }
    if (JW_MOVING(c)) {
        move_ink(c, d, 0);
    }
}

static void place_by(JwCmd *c, Jwc *d, double dx, double dy)
{
    /* Work out what the range holds only the first time.  移動 takes the
     * entities with it, so asking the box again after the first press finds
     * nothing left inside it and the next press would move nothing. */
    if (!c->sel_line) {
        long k;
        int any = 0;

        freeze(c, d);
        for (k = 0; k < c->n0_lines && c->sel_line; k++) {
            any |= c->sel_line[k];
        }
        for (k = 0; k < c->n0_arcs && c->sel_arc; k++) {
            any |= c->sel_arc[k];
        }
        for (k = 0; k < c->n0_texts && c->sel_text; k++) {
            any |= c->sel_text[k];
        }
        c->mv_none = !any;
    }
    /* 取り消し（[ESC]）のための控え：複写は足した数、移動は量。 */
    c->mv_undo = 1;
    c->mv_nl = d->n_lines;
    c->mv_na = d->n_arcs;
    c->mv_nt = d->n_texts;
    c->mv_np = d->n_points;
    c->mv_dx = dx;
    c->mv_dy = dy;
    if (c->rel_place) {
        rel_range(c, d, c->rel_px, c->rel_py);
    } else if (c->command == 16) {
        move_range(c, d, dx, dy);
    } else {
        copy_range(c, d, dx, dy);
    }
    c->step_x = dx;
    c->step_y = dy;
    c->copies = 1;
}

/* 複写・移動 の取り消し：複写は足したものを抜き、移動は同じ量だけ float で
 * 戻す（本物も float で戻すので、最後の 1 ビットが残ることがある——
 * 測定：61.441078 が 61.441071 に）。 */
static void place_undo(JwCmd *c, Jwc *d)
{
    long k;

    if (!c->mv_undo) {
        return;
    }
    if (c->command == 16) {
        move_range(c, d, -c->mv_dx, -c->mv_dy);
    } else {
        while (d->n_lines > c->mv_nl) {
            jwc_remove_line(d, d->n_lines - 1);
        }
        while (d->n_arcs > c->mv_na) {
            jwc_remove_arc(d, d->n_arcs - 1);
        }
        while (d->n_texts > c->mv_nt) {
            jwc_remove_text(d, d->n_texts - 1);
        }
        while (d->n_points > c->mv_np) {
            d->n_points--;
        }
    }
    (void)k;
    jwc_ink_clear(d);
    c->mv_undo = 0;
}

static void copy_by_mm(JwCmd *c, Jwc *d)
{
    /* 1 mm の長さは 518/用紙幅 を **double** のまま使い、距離は float に
     * 丸めて持つ（測定：[1000,1000] で線 5 の x 40.973 が 0x44df2296、
     * 10,5 の ③連続 三つ目が 0x42ba97af——float の unit_mm や丸めない
     * 距離では最後の 1 ビットがずれる）。 */
    static const double PAPER[5] = { 1189.0, 841.0, 594.0, 420.0, 297.0 };
    const double per = d->paper >= 0 && d->paper < 5
                     ? 518.0 / PAPER[d->paper] / d->denom
                     : d->unit_mm > 0.0f ? d->unit_mm / d->denom : 1.0;

    place_by(c, d, (float)(d->copy_x_mm * per), (float)(d->copy_y_mm * per));
}

/* ①ﾏｳｽ位置's second press: the base point goes where the press is.
 *
 * 複写 copies the originals, so the offset is measured from the base point
 * every time and the base stays where it was -- press again and another copy
 * lands at the new distance.  移動 has already taken the originals with it, so
 * the base travels along: the next press moves them on from where they are.
 *
 * The distance the original remembers for ②数値位置 is **not** touched:
 * measured on SAMPLE0 -- copy with the mouse, then ①同形別処理 and ②数値位置,
 * and the line still offers `[  1000.000,  1000.000 mm]`. */
/* 変形 ①パラメトリック変形: **every endpoint inside the range moves and the
 * rest stay**.  A line with one end in the box is stretched; one wholly
 * inside moves whole.  Measured on SAMPLE0 with the range (200,150)-(450,350)
 * and the base and place at screen (300,250) and (350,300) -- a step of
 * (+50,-50) in the drawing:
 *
 *     line 5 (40.973,305.616)-(110.737,305.616)
 *         -> (40.973,305.616)-(160.737,255.616)  01 02 00 41 02 02
 *     line 6 (110.737,305.616)-(110.737,323.057)
 *         -> (160.737,255.616)-(110.737,323.057) 01 02 00 41 02 01
 *
 * -- only the end that was inside has moved.  With a box that holds them
 * whole both ends move and the last byte is **00**, so that byte says which
 * single end was dragged: 1 the start, 2 the end, 0 neither or both.  Bit 1
 * of the byte before it is set on everything the command touched.
 *
 * Arcs and texts are taken the way 複写 takes them (wholly inside), because
 * neither can be stretched; what the original does with an arc that crosses
 * the edge is not measured. */
static void henkei_by(JwCmd *c, Jwc *d, double dx, double dy)
{
    long k;

    /* **Which ends are dragged is settled once.**  再変形 presses again and
     * again, and an end that has been pulled out of the box goes on being
     * pulled: measured with the base at (300,250) and two places, (350,300)
     * then (400,350), where line 5's end lands at 210.737 -- the whole
     * distance from the base, not the first step twice over. */
    if (!c->hen_end) {
        c->hen_end = (unsigned char *)calloc((size_t)(c->n0_lines + 1), 1);
        if (!c->hen_end) {
            return;
        }
        for (k = 0; k < c->n0_lines; k++) {
            const JwcLine *l = &d->lines[k];

            unsigned char e;

            if (!in_reach_layer(d, l->layer)) {
                continue;
            }
            e = (unsigned char)
                ((jw_cmd_in_range(c, l->x0, l->y0, l->x0, l->y0) ? 1 : 0)
                 | (jw_cmd_in_range(c, l->x1, l->y1, l->x1, l->y1) ? 2 : 0));
            if (flipped(c, JW_FLIP_LINE, k)) {
                e = e ? 0 : 3;          /* 追加は丸ごと（測定のみ） */
            }
            c->hen_end[k] = e;
        }
    }
    for (k = 0; k < c->n0_lines; k++) {
        JwcLine *l = &d->lines[k];
        const int a = c->hen_end[k] & 1, b = c->hen_end[k] & 2;

        if (!a && !b) {
            continue;
        }
        if (a) {
            l->x0 = (float)(l->x0 + dx);
            l->y0 = (float)(l->y0 + dy);
        }
        if (b) {
            l->x1 = (float)(l->x1 + dx);
            l->y1 = (float)(l->y1 + dy);
        }
        l->rest[2] = (unsigned char)(l->rest[2] | 0x02);
        l->rest[3] = (unsigned char)((a && b) ? 0x00 : a ? 0x01 : 0x02);
    }
    for (k = 0; k < c->n0_arcs; k++) {
        if (picked_arc(c, d, k)) {
            d->arcs[k].cx = (float)(d->arcs[k].cx + dx);
            d->arcs[k].cy = (float)(d->arcs[k].cy + dy);
            d->arcs[k].rest[2] = (unsigned char)(d->arcs[k].rest[2] | 0x02);
        }
    }
    for (k = 0; k < c->n0_texts; k++) {
        if (picked_text(c, d, k)) {
            d->texts[k].x0 = (float)(d->texts[k].x0 + dx);
            d->texts[k].y0 = (float)(d->texts[k].y0 + dy);
            d->texts[k].x1 = (float)(d->texts[k].x1 + dx);
            d->texts[k].y1 = (float)(d->texts[k].y1 + dy);
            d->texts[k].rest[2] = (unsigned char)(d->texts[k].rest[2] | 0x02);
        }
    }
}

static void henkei_at(JwCmd *c, Jwc *d, double px, double py)
{
    henkei_by(c, d, px - c->base_x, py - c->base_y);
}

/* ③数値倍率: the ends it has taken are scaled about the base point and put
 * down at the pressed one -- S(p - 基準点) + 置く点, the same formula
 * 複写's ③数値倍率 uses.  Measured on SAMPLE0 with the range
 * (200,150)-(450,350), the base at screen (300,250), a scale of 2 and the
 * place at (350,300): line 5's end goes (110.737,305.616) ->
 * (92.475,348.232), which is 2 x (110.737-179, 305.616-213) + (229,163).
 *
 * What it does to an arc or a text is not measured; they are carried the
 * same way their anchor points are. */
static void henkei_scale(JwCmd *c, Jwc *d, double px, double py)
{
    long k;

    if (!c->hen_end) {
        henkei_by(c, d, 0.0, 0.0);      /* settles which ends are taken */
    }
    if (!c->hen_end) {
        return;
    }
    for (k = 0; k < c->n0_lines; k++) {
        JwcLine *l = &d->lines[k];
        const int a = c->hen_end[k] & 1, b = c->hen_end[k] & 2;

        if (a) {
            l->x0 = (float)(c->scale_x * (l->x0 - c->base_x) + px);
            l->y0 = (float)(c->scale_y * (l->y0 - c->base_y) + py);
        }
        if (b) {
            l->x1 = (float)(c->scale_x * (l->x1 - c->base_x) + px);
            l->y1 = (float)(c->scale_y * (l->y1 - c->base_y) + py);
        }
        if (a || b) {
            l->rest[2] = (unsigned char)(l->rest[2] | 0x02);
            l->rest[3] = (unsigned char)((a && b) ? 0x00 : a ? 0x01 : 0x02);
        }
    }
    for (k = 0; k < c->n0_arcs; k++) {
        if (picked_arc(c, d, k)) {
            JwcArc *a = &d->arcs[k];

            a->cx = (float)(c->scale_x * (a->cx - c->base_x) + px);
            a->cy = (float)(c->scale_y * (a->cy - c->base_y) + py);
            a->rest[2] = (unsigned char)(a->rest[2] | 0x02);
        }
    }
    for (k = 0; k < c->n0_texts; k++) {
        if (picked_text(c, d, k)) {
            JwcText *t = &d->texts[k];

            t->x0 = (float)(c->scale_x * (t->x0 - c->base_x) + px);
            t->y0 = (float)(c->scale_y * (t->y0 - c->base_y) + py);
            t->x1 = (float)(c->scale_x * (t->x1 - c->base_x) + px);
            t->y1 = (float)(c->scale_y * (t->y1 - c->base_y) + py);
            t->rest[2] = (unsigned char)(t->rest[2] | 0x02);
        }
    }
}

/* ②数値位置: the same, by a distance in millimetres of paper. */
static void henkei_by_mm(JwCmd *c, Jwc *d)
{
    const double per = d->unit_mm > 0.0f ? d->unit_mm / d->denom : 1.0;

    henkei_by(c, d, d->copy_x_mm * per, d->copy_y_mm * per);
}

static void place_at(JwCmd *c, Jwc *d, double px, double py)
{
    /* 移動量は二点を float にしてから float で引く（測定：前は double で
     * 引いていて、動かした線が float の最後の 1〜2 ビットずれた）。 */
    c->rel_place = 1;
    c->rel_px = px;
    c->rel_py = py;
    if (c->command == 16) {
        place_by(c, d, (float)((float)px - (float)c->base_x),
                 (float)((float)py - (float)c->base_y));
    } else {
        place_by(c, d, px - c->base_x, py - c->base_y);
    }
    c->rel_place = 0;
    if (c->command == 16) {
        c->base_x = px;
        c->base_y = py;
    }
}

/* ③連続: another step.  複写 makes another copy, one step further on than the
 * last; 移動 shifts what it picked by the distance again -- the counts stay
 * where they are and the entities end up at twice the distance.  Measured on
 * SAMPLE0 with 20,30: 複写 leaves copies at 35/52 and 70/104 and 移動 puts the
 * one set at 70/104. */
static void copy_again(JwCmd *c, Jwc *d)
{
    const double n = c->copies + 1.0;

    /* After ⑥回転 and the two 倍率 ways the step is not a plain distance, and
     * the two do **not** repeat the same way.  Measured on SAMPLE0 with the
     * range (150,130)-(245,170), the base at (79,163) and the place at
     * (279,163), pressing ③連続 once:
     *
     *   ⑥回転 30 度   the second copy is at R(**60**)(p - base) + base + 2 x
     *                  offset -- line 5 comes out
     *                  (336.477,201.376)-(371.359,261.793), which is what
     *                  twice the angle gives and not what the first copy's
     *                  transform applied twice gives ((452.205,263) for that
     *                  end).  **The angle adds up.**
     *   ③数値倍率 2   the second copy is the first one moved by the offset:
     *                  (402.946,448.232) = (202.946,448.232) + (200,0).
     *                  **The scale does not.**
     *
     * Both are `base + n x offset` for the translation, which is what
     * ①ﾏｳｽ位置 does as well. */
    if (JW_MOVING(c) && (c->rotate || c->scaling || c->mscale)) {
        /* 移動 has already taken the originals with it, so another step would
         * have to turn or scale what is now in place -- and what the original
         * does there is **not measured**.  Doing nothing is nearer to "not
         * done" than doing the wrong thing. */
        return;
    }
    if (c->rotate) {
        const double was = c->rot_deg;

        c->rot_deg = was * n;
        turn_range(c, d, c->base_x + c->step_x * n, c->base_y + c->step_y * n);
        c->rot_deg = was;
        c->copies++;
        return;
    }
    if (c->scaling || c->mscale) {
        scale_range(c, d, c->base_x + c->step_x * n, c->base_y + c->step_y * n);
        c->copies++;
        return;
    }
    if (c->command == 16) {
        /* 移動の ③連続 は、前の合計を float で戻してから n 歩の合計を足す
         * （測定：②数値位置 10,5 のあと ③ 二回で線 5 が x0 0x42ba97af・
         * x1 0x43230f82・y0 0x43a5e38f。一歩ずつ足すのでも、元の位置から
         * 足し直すのでも、どれか一つがずれる）。 */
        move_range(c, d, -(float)(c->step_x * c->copies),
                   -(float)(c->step_y * c->copies));
        move_range(c, d, (float)(c->step_x * n), (float)(c->step_y * n));
    } else {
        copy_range(c, d, c->step_x * n, c->step_y * n);
    }
    c->copies++;
}

/* What 図形 ①登録 leaves on the screen: the figure it wrote, drawn again on
 * top of everything, **in its own colours**.
 *
 * The original does not repaint after ① 実 行 -- it draws the entities it has
 * just written over the red they were marked in, each in its own pen, and
 * they stay there: pressing 図形 and ①登録 again leaves the screen exactly as
 * it is.  That shows up as a difference only where a picked entity crosses an
 * unpicked one, because the picked one is now on top: registering the whole
 * of TEST1 leaves 113 pixels of cyan and 14 of magenta showing white, where
 * the first painting had the cyan lines and the magenta texts on top.  It is
 * **not** white paint -- the three pen-1 lines of the 5m dimension come back
 * cyan, all 99 pixels of them.
 *
 * The points are left out: a point drawn again lands on the pixels it already
 * has, so there is nothing to see either way, and nothing measured to say the
 * original draws them.
 */
void jw_cmd_zukei_left(const JwCmd *c, VGA *v, const Jwc *d, const JwView *w)
{
    long k;

    if (!d) {
        return;
    }
    v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
    v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
    v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
    v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
    for (k = 0; k < d->n_lines; k++) {
        if (picked_line(c, d, k)) {
            jw_view_line(v, d, &d->lines[k], w,
                         jw_view_pen_colour(d->lines[k].pen));
        }
    }
    for (k = 0; k < d->n_arcs; k++) {
        if (picked_arc(c, d, k)) {
            jw_view_arc(v, d, &d->arcs[k], w,
                        jw_view_pen_colour(d->arcs[k].pen));
        }
    }
    for (k = 0; k < d->n_texts; k++) {
        if (picked_text(c, d, k)) {
            jw_view_text(v, d, &d->texts[k], w,
                         jw_view_text_colour(d, d->texts[k].size));
        }
    }
}

void jw_cmd_marked(const JwCmd *c, VGA *v, const Jwc *d, const JwView *w)
{
    long k;
    /* Colour 2 throughout.  It looks like colour 6 on some shots of 複写's
     * last stage, but that is the preview: the original draws the copy over
     * the top in exclusive-or while the pointer moves, and 2 xor 4 is 6.  With
     * the texts in the range the same shot has red, magenta, blue, green and
     * cyan all at once, which only an exclusive-or half way through can be. */
    const unsigned mark = 2u;

    if (!d) {
        return;
    }
    /* The chrome leaves the clip open to the whole screen; the marking is part
     * of the drawing, so it goes back to the drawing window. */
    v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
    v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
    v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
    v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
    /* コーナー連結 and 面取 paint the line they have taken as Ａ in colour 2
     * while they wait for Ｂ.  線伸縮 does **not** -- its first press leaves
     * the line white and only changes the line above (measured: one press on
     * SAMPLE0's line 5 leaves all 71 of its pixels as they were). */
    /* 寸法 ⑤一括 が選んだ線（測定：二本選んだところで赤が 551 画素）。
     * **一括処理実行 のあと（段 24）は赤が消えます**——そのときの枠の縦線
     * は本物でも白のままでした。
     *
     * `jw_view_line` は色の引数を見ない（線のペンで描く）ので、ここは
     * `jw_line` に画面の座標を渡します。 */
    /* コーナー連結 の 線切断 の印：切った所に半径 2 の白い輪（上書き。
     * 測定：(598,300) のまわり）。 */
    if (c->command == 7) {
        static const int RX[12] = { -1, 0, 1, -2, 2, -2, 2, -2, 2, -1, 0, 1 };
        static const int RY[12] = { -2, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 2 };
        int i, j;

        for (i = 0; i < c->cut_n; i++) {
            int px, py;

            at_screen(w, c->cut_px[i], c->cut_py[i], &px, &py);
            for (j = 0; j < 12; j++) {
                jw_line(v, px + RX[j], py + RY[j], px + RX[j], py + RY[j], 7,
                        ROP_REPLACE, JW_STYLE_SOLID);
            }
        }
    }
    /* 線消 の部分消去：押した線は切り終えるまで赤（色 2。測定）。 */
    /* ①線切断寸法 の欄のあいだは赤くしない（測定：linedel_s1_c1）。 */
    if (c->command == 10 && (c->stage == 2 || c->stage == 3) && !c->ld_ask
        && c->ld_line >= 0 && c->ld_line < d->n_lines) {
        const JwcLine *l = &d->lines[c->ld_line];
        int x0, y0, x1, y1;

        at_screen(w, l->x0, l->y0, &x0, &y0);
        at_screen(w, l->x1, l->y1, &x1, &y1);
        jw_line(v, x0, y0, x1, y1, mark, ROP_REPLACE, JW_STYLE_SOLID);
    }
    if (c->command == 14 && c->dim_lot && c->stage < 24) {
        int i;

        for (i = 0; i < c->dim_lot_n; i++) {
            const JwcLine *l;
            int x0, y0, x1, y1;

            if (c->dim_lot_k[i] < 0 || c->dim_lot_k[i] >= d->n_lines) {
                continue;
            }
            l = &d->lines[c->dim_lot_k[i]];
            at_screen(w, l->x0, l->y0, &x0, &y0);
            at_screen(w, l->x1, l->y1, &x1, &y1);
            jw_line(v, x0, y0, x1, y1, mark, ROP_REPLACE, JW_STYLE_SOLID);
        }
    }
    /* 測定 draws each leg as it is measured, in the same colour 2 (measured:
     * the 201 pixels between (250,200) and (450,300) come out f30000). */
    if (c->command == 15) {
        int k;

        /* ①表示 の小数点位置を待つあいだは経路を出さない。置けばまた出る
         * （測定：mes_a、置いたあと枠の上辺が 7 xor 2 の 00ffff）。 */
        if (c->meas_put) {
            return;
        }
        for (k = 1; k < c->meas_n; k++) {
            int x0, y0, x1, y1;

            at_screen(w, c->meas_px[k - 1], c->meas_py[k - 1], &x0, &y0);
            at_screen(w, c->meas_px[k], c->meas_py[k], &x1, &y1);
            /* **Exclusive-or**, not a plain draw: the point two legs share
             * comes out black because it is drawn twice, and where a leg
             * crosses something already on the screen the colours mix.  Both
             * measured -- a plain colour-2 line left the shared point red and
             * 51 pixels wrong where SAMPLE6's walls cross it. */
            jw_line(v, x0, y0, x1, y1, mark, ROP_XOR, JW_STYLE_SOLID);
        }
        return;
    }
    /* ２線 shows the pair it is about to put down in the same colour 2, while
     * the pointer is still on the end point (measured: 402 pixels of it). */
    if (c->command == 9) {
        int i;

        /* 作図範囲で切る（測定：外の一本は上の行に出ない）。 */
        v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
        v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
        v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
        v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
        for (i = 0; c->pending && i < 2; i++) {
            double e[4];
            int x0, y0, x1, y1;

            if (!jw_cmd_two_line(c, d, i, e)) {
                break;
            }
            at_screen(w, e[0], e[1], &x0, &y0);
            at_screen(w, e[2], e[3], &x1, &y1);
            jw_line_clipped(v, x0, y0, x1, y1, mark, ROP_REPLACE,
                            jw_view_line_style(d->line_type));
        }
        v->clip_x0 = 0;
        v->clip_y0 = 0;
        v->clip_x1 = v->width - 1;
        v->clip_y1 = v->height - 1;
        return;
    }
    if (c->command == 7 || (c->command == 8 && !c->chb)) {
        if (c->pick_a >= 0 && c->pick_a < d->n_lines) {
            const JwcLine *l = &d->lines[c->pick_a];
            int x0, y0, x1, y1;

            at_screen(w, l->x0, l->y0, &x0, &y0);
            at_screen(w, l->x1, l->y1, &x1, &y1);
            jw_line(v, x0, y0, x1, y1, mark, ROP_REPLACE,
                    jw_view_line_style(l->type));
        }
        return;
    }
    if (!JW_RANGE(c) || c->pressed != 2) {
        return;
    }

    for (k = 0; k < c->n0_lines; k++) {
        const JwcLine *l = &d->lines[k];
        int style = jw_view_line_style(l->type);

        if (!in_reach_layer(d, l->layer)) {
            continue;
        }
        if (c->outside) {
            /* ②範囲外消去 paints a line that crosses the edge dotted, because
             * it is going to be cut and not taken away.  See outside_kind. */
            double ax = l->x0, ay = l->y0, bx = l->x1, by = l->y1;
            const int kind = outside_kind(c, &ax, &ay, &bx, &by);

            if (kind == JW_OUT_CROSS) {
                /* Pressing one takes it out of the cut: the original stops
                 * showing it dotted and leaves it white (measured -- all 437
                 * pixels of SAMPLE0's line 1 go back). */
                if (flipped(c, JW_FLIP_LINE, k)) {
                    continue;
                }
                style = jw_view_line_style(0);          /* 0x5555 */
            } else if ((kind == JW_OUT_OUT) == flipped(c, JW_FLIP_LINE, k)) {
                /* 追加･除外 turns a single one round here too: a line wholly
                 * inside goes red when it is pressed (measured -- 69 pixels
                 * of SAMPLE0's line 5). */
                continue;
            }
        } else if (c->command == 17) {
            /* 変形: the ones it will stretch are dotted, the ones it will
             * move whole are solid.  See henkei_kind.
             *
             * **Once it has moved them the mask is what says so**, not the
             * box: ②数値位置 with 20,30 carries line 5's end clean out of
             * the range and the original still shows it red. */
            const int ends = c->hen_end ? c->hen_end[k] : 0;
            int kind = c->hen_end
                       ? (ends == 3 ? 1 : ends ? 2 : 0)
                       : henkei_kind(c, l->x0, l->y0, l->x1, l->y1);

            /* 追加（測定のみ・decomp 未確認：henkei_plain の `162 250 left` で、範囲の外の
             * 左辺の線が丸ごと赤の実線になる）。除外は今までどおり。 */
            if (!c->hen_end && flipped(c, JW_FLIP_LINE, k)) {
                kind = kind ? 0 : 1;
            }
            if (!kind) {
                continue;
            }
            /* ③複線化 は伸ばしません。丸ごと入っている線だけが
             * 赤くなります（測定：半分だけ入っている線 6 は白のまま）。 */
            if (c->hen_dbl && kind == 2) {
                continue;
            }
            if (kind == 2) {
                style = jw_view_line_style(0);          /* 0x5555 */
            }
        } else if (!picked_line(c, d, k)) {
            continue;
        }
        if (style != jw_view_line_style(l->type)) {
            /* The dotted one is not painted *over* the line: the original
             * blacks the whole of it first, so the gaps come out background
             * and not the white that was there.  Measured -- the gaps are
             * 000000 in the original's screen, not ffffff. */
            jw_view_mark(v, w, l->x0, l->y0, l->x1, l->y1, 0,
                         JW_STYLE_SOLID, ROP_REPLACE);
        }
        jw_view_mark(v, w, l->x0, l->y0, l->x1, l->y1, mark, style,
                     ROP_REPLACE);
    }
    for (k = 0; k < c->n0_arcs; k++) {
        const JwcArc *a = &d->arcs[k];
        const double m = a->r;

        if (c->outside
            ? (in_reach_layer(d, a->layer)
               && wholly_outside(c, a->cx - m, a->cy - m, a->cx + m, a->cy + m)
                  != flipped(c, JW_FLIP_ARC, k))
            : picked_arc(c, d, k)) {
            jw_view_arc(v, d, a, w, mark);
        }
    }
    for (k = 0; k < c->n0_texts; k++) {
        const JwcText *t = &d->texts[k];

        if (!takes_text(c)) {
            break;
        }
        if (c->outside
            ? (in_reach_layer(d, t->layer)
               && wholly_outside(c, t->x0, t->y0, t->x1, t->y1)
                  != flipped(c, JW_FLIP_TEXT, k))
            : picked_text(c, d, k)) {
            jw_view_text(v, d, t, w, mark);
        }
    }
    for (k = 0; k < d->n_points; k++) {
        const JwcPoint *p = &d->points[k];
        int px, py;

        if (!in_reach_layer(d, p->layer)
            || !jw_cmd_in_range(c, p->x, p->y, p->x, p->y)) {
            continue;
        }
        at_screen(w, p->x, p->y, &px, &py);
        jw_point(v, px, py, 2, ROP_REPLACE);
    }
    /* **A press of 追加･除外 draws that one entity again, over the marks.**
     * Taking SAMPLE0's line 5 out of (150,130)-(245,170) redraws it white,
     * and the corner it shares with line 6 -- still red -- comes out white
     * in the original, (231,157).  The loops above paint every mark in
     * record order, which is the order of the press that fixed the range;
     * the presses after it come after that, in the order they were made.
     * Only the plain range here: ②範囲外消去 and 変形 draw theirs their own
     * ways and are not measured for this. */
    if (!c->outside && c->command != 17) {
        int i;

        for (i = 0; i < c->n_flip; i++) {
            const long at = c->flip[i].at;

            if (c->flip[i].kind == JW_FLIP_LINE && at < c->n0_lines) {
                const JwcLine *l = &d->lines[at];

                if (!in_reach_layer(d, l->layer)) {
                    continue;
                }
                if (picked_line(c, d, at)) {
                    jw_view_mark(v, w, l->x0, l->y0, l->x1, l->y1, mark,
                                 jw_view_line_style(l->type), ROP_REPLACE);
                } else {
                    jw_view_line(v, d, l, w, jw_view_pen_colour(l->pen));
                }
            } else if (c->flip[i].kind == JW_FLIP_ARC && at < c->n0_arcs) {
                const JwcArc *q = &d->arcs[at];

                if (!in_reach_layer(d, q->layer)) {
                    continue;
                }
                jw_view_arc(v, d, q, w, picked_arc(c, d, at)
                            ? mark : jw_view_pen_colour(q->pen));
            } else if (c->flip[i].kind == JW_FLIP_TEXT && at < c->n0_texts
                       && takes_text(c)) {
                const JwcText *t = &d->texts[at];

                if (!in_reach_layer(d, t->layer)) {
                    continue;
                }
                jw_view_text(v, d, t, w, picked_text(c, d, at)
                             ? mark : jw_view_text_colour(d, t->size));
            }
        }
    }
}

/* 寸法 leaves two guides right across the drawing: a red one every four
 * pixels at the 引出し線の始点's height and a white one every two at the
 * 寸法線's.  Measured on SAMPLE0 -- row 140 is red at x = 124, 128, 132 …
 * and row 110 white at the odd columns, both from the window's left edge to
 * its right, and the white one is **over** the dimension line, which shows
 * through cyan in between (exclusive-or: SAMPLE2 draws its dimension line
 * with pen 2 and the crossing pixel is 00ffff = 7 xor 2).
 *
 * This only says **where** they go.  The chrome draws them, because the order
 * is 図面 → 帯の黒塗り → 案内線 → 寸法値の白い升: the drawing area starts at
 * y=17, so ②縦方向 sends one straight through the counts box, and the
 * original's box covers it.  See jw_ui_draw. */
/* Cut a line to the drawing window, Liang-Barsky, in screen pixels.  A
 * horizontal one comes back as (122,y)-(638,y), which is what the two square
 * directions drew before this took slanted ones too. */
static int guide_cut(const JwView *w, double dpx, double dpy,
                     double ddx, double ddy, int seg[4])
{
    /* **One row higher than the drawing area.**  ③任意方向's slanted
     * guide reaches y=17 at x=374.9, and the original's topmost dot is
     * at (376,17): it cuts the line at the white rule on row 16 --
     * x=376.8 -- and then keeps that x while the drawing itself starts
     * at 17.  Cut at 17 the whole line comes out a row shallow and 238
     * pixels of dots move.  The two square directions are the same
     * either way: a horizontal guide is not cut in y at all and a
     * vertical one only has its endpoint moved back to 17. */
    /* 本物は float で計算する：y が .5 のきわで丸めが一画素動く（測定：dim_s0_c3_v、案内線の左端 300.503 が 300） */
    const float px = (float)dpx, py = (float)dpy, dx = (float)ddx, dy = (float)ddy;
    const float x0 = (float)w->x0, y0 = (float)w->y0 - 1.0f, x1 = (float)w->x1, y1 = (float)w->y1;
    float t0 = -1e9f, t1 = 1e9f;
    const float p[4] = { -dx, dx, -dy, dy };
    const float q[4] = { px - x0, x1 - px, py - y0, y1 - py };
    int i;

    for (i = 0; i < 4; i++) {
        if (p[i] == 0.0) {
            if (q[i] < 0.0) {
                return 0;
            }
        } else {
            const float r = q[i] / p[i];

            if (p[i] < 0.0) {
                if (r > t1) {
                    return 0;
                }
                if (r > t0) {
                    t0 = r;
                }
            } else {
                if (r < t0) {
                    return 0;
                }
                if (r < t1) {
                    t1 = r;
                }
            }
        }
    }
    /* **x truncated, y rounded.**  Both slanted guides come out on the
     * original's dots that way and no other: the first one's left end is
     * 163.1 and its far end 376.8 (17 and 376 -- rounding x gives 377), the
     * second's left end is 212.8 and the original's dot there is on row 213.
     * The two square directions take their guides off free presses, so
     * their numbers are whole and either rule gives the same pixel. */
    seg[0] = (int)(px + t0 * dx);
    seg[1] = (int)(py + t0 * dy + 0.49f);
    seg[2] = (int)(px + t1 * dx);
    seg[3] = (int)(py + t1 * dy);   /* 右の端は切り捨て、左の端は四捨五入（測定：dim_s0_c3_v、54.856→54、352.768→353） */
    if (dx != 0.0f && dy != 0.0f) {
        /* 斜めの案内線で上の窓の縁に当たった端は、**整数にした反対の端から**傾きで延ばして 17 の行まで（測定：dim_s0_c3_v、左端 (122,300) から上端 (612,17)。窓の縁で切った 613.04 ではない）。 */
        const float ey0 = py + t0 * dy, ey1 = py + t1 * dy;
        const int ti = ey0 < ey1 ? 0 : 1;
        const float ety = ti ? ey1 : ey0;

        if (ety <= y0 + 1e-3f) {
            const int bx = seg[2 * (1 - ti)], by = seg[2 * (1 - ti) + 1];

            seg[2 * ti] = bx + (int)(((float)(int)w->y0 - (float)by) * dx / dy);
            seg[2 * ti + 1] = (int)w->y0;
        }
    }
    /* **Left to right, top to bottom.**  The dashes start at the line's
     * first end, and ②縦方向's direction points up the screen: drawn from
     * the bottom the gaps land on the other rows and 366 pixels move. */
    {
        /* 斜めの案内線は上の端が 16 のまま（描くのは 17 から。測定：dim_s0_c3_v）。垂直は 17 に戻す。 */
        const int ylo = (dx != 0.0f && dy != 0.0f) ? (int)w->y0 - 1 : (int)w->y0;

        if (seg[1] < ylo) {
            seg[1] = ylo;
        }
        if (seg[3] < ylo) {
            seg[3] = ylo;
        }
    }
    if (seg[0] > seg[2] || (seg[0] == seg[2] && seg[1] > seg[3])) {
        const int tx = seg[0], ty = seg[1];

        seg[0] = seg[2];
        seg[1] = seg[3];
        seg[2] = tx;
        seg[3] = ty;
    }
    return 1;
}

int jw_cmd_guide_pos(const JwCmd *c, const JwView *w, int seg[2][4])
{
    const double ux = c->dim_ux, uy = c->dim_uy;
    const double vx = -uy, vy = ux;
    double sx, sy;
    int n = 0;

    /* ④円･角 ①円径 に案内線はありません（寸法線の位置を
     * 問わない道だから）。 */
    if (c->command != 14 || c->stage < 2 || c->top_item || c->dim_only
        || c->dim_ck || c->dim_arc
        || (c->dim_lot && c->stage < 24)) {
        return 0;
    }
    /* The screen direction of the dimension's own axis: x grows with the
     * drawing's x and y the other way.
     *
     * **In doubles, not through at_screen.**  That one truncates to whole
     * pixels, and a guide drawn through a point a fraction out comes back
     * with a slope of 13/24 where the original has 14/24 -- the dots then
     * sit a row out along half the line. */
    sx = ux * w->scale;
    sy = -uy * w->scale;
    if (!guide_cut(w, (c->dim_by * vx - w->ox) * w->scale + w->ax,
                   w->ay - (c->dim_by * vy - w->oy) * w->scale,
                   sx, sy, seg[0])) {
        return 0;
    }
    n = 1;
    if (c->stage >= 3
        && guide_cut(w, (c->dim_y * vx - w->ox) * w->scale + w->ax,
                     w->ay - (c->dim_y * vy - w->oy) * w->scale,
                     sx, sy, seg[1])) {
        n = 2;
    }
    return n;
}

/* 寸法 ⑤一括 が入れた寸法は **図面の上・案内線の下** です。測定：
 * 引出し線の下端 2 画素は枠の白より上に出ていて、寸法線のほうは案内線の
 * 白に消されています。だから jw_cmd_after ではなく、枠を描く前のここで
 * 描き直します。 */
void jw_cmd_before(const JwCmd *c, VGA *v, const Jwc *d, const JwView *w)
{
    long k, from;

    if (!d) {
        return;
    }
    /* ③ｽﾌﾟﾗｲﾝ: 点を入れているあいだ、取った点を結ぶ折れ線が
     * **緑（色 4）で仮に**出ます（測定：二点入れると 100 画素）。 */
    if (c->command == 23 && c->spl && c->spl_n >= 2) {
        int i;

        v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
        v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
        v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
        v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
        for (i = c->spl_vis < c->spl_n ? c->spl_vis : 0; i + 1 < c->spl_n; i++) {
            int ax, ay, bx2, by2;

            at_screen(w, c->spl_x[i], c->spl_y[i], &ax, &ay);
            at_screen(w, c->spl_x[i + 1], c->spl_y[i + 1],
                      &bx2, &by2);
            /* **排他的論理和**です。節点が二度打たれて黒に戻るのが
             * 目印で、三点入れると真ん中の一画素が消えます。 */
            jw_line(v, ax, ay, bx2, by2, 4u, 0x18,
                    JW_STYLE_SOLID);
        }
    }
    if (c->command == 14 && c->dim_lot) {
        from = c->n0_lines;
    } else {
        return;
    }
    v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
    v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
    v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
    v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
    for (k = from; k < d->n_lines; k++) {
        if (jwc_visible(d, d->lines[k].layer)) {
            jw_view_line(v, d, &d->lines[k], w,
                         jw_view_pen_colour(d->lines[k].pen));
        }
    }
    if (c->command == 14) {
        for (k = c->n0_texts; k < d->n_texts; k++) {
            if (jwc_visible(d, d->texts[k].layer)) {
                jw_view_text(v, d, &d->texts[k], w,
                             jw_view_text_colour(d, d->texts[k].size));
            }
        }
    }
}

void jw_cmd_after(const JwCmd *c, VGA *v, const Jwc *d, const JwView *w)
{
    long k;

    /* ○・□ で作ったものは、帯の上（数え箱の右、y 17〜47）にも描かれる。
     * 本物は図形を帯のあとに描き、あとで 2 行目（y 17〜31）に言葉を書くと
     * そこだけ塗り直す（測定：func_all circle_plain、右押しの外れで円の
     * y 17〜31 が消え、32〜47 は残る）。帯の四角の中だけを描き直す。 */
    if (d && (c->command == 4 || c->command == 11)
        && (c->n0_lines < d->n_lines || c->n0_arcs < d->n_arcs)) {
        /* 窓で切って別の画面に丸ごと描き、帯の四角だけを写す（四角で切ると
         * 線の引き方が途中から変わって 1 画素ずれる）。 */
        static VGA band_scr;
        static int band_ready;
        const int ytop = c->band_row2 ? 17 : 32;
        int p, y, x;

        if (!band_ready) {
            vga_reset(&band_scr, 0x12);
            band_ready = 1;
        }
        memcpy(band_scr.gc, v->gc, sizeof band_scr.gc);
        band_scr.stride = v->stride;
        band_scr.width = v->width;
        band_scr.height = v->height;
        band_scr.clip_x0 = w->x0 > 0 ? w->x0 : 0;
        band_scr.clip_y0 = w->y0 > 0 ? w->y0 : 0;
        band_scr.clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
        band_scr.clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
        for (p = 0; p < VGA_PLANES; p++) {
            memset(band_scr.plane[p] + 17L * band_scr.stride, 0,
                   (size_t)(31 * band_scr.stride));
        }
        for (k = c->n0_lines; k < d->n_lines; k++) {
            if (jwc_visible(d, d->lines[k].layer)) {
                jw_view_line(&band_scr, d, &d->lines[k], w,
                             jw_view_pen_colour(d->lines[k].pen));
            }
        }
        for (k = c->n0_arcs; k < d->n_arcs; k++) {
            if (jwc_visible(d, d->arcs[k].layer)) {
                jw_view_arc(&band_scr, d, &d->arcs[k], w,
                            jw_view_pen_colour(d->arcs[k].pen));
            }
        }
        for (y = ytop; y <= 47; y++) {
            for (x = 122; x <= 638; x++) {
                const long off = (long)y * v->stride + (x >> 3);
                const unsigned char bit = VGA_PIXEL_BIT(x);
                int any = 0;

                for (p = 0; p < VGA_PLANES; p++) {
                    any |= band_scr.plane[p][off] & bit;
                }
                if (!any) {
                    continue;
                }
                for (p = 0; p < VGA_PLANES; p++) {
                    if (band_scr.plane[p][off] & bit) {
                        v->plane[p][off] |= bit;
                    } else {
                        v->plane[p][off] &= (unsigned char)~bit;
                    }
                }
            }
        }
        return;
    }


    /* **寸法 は枠の上に描き直しません。** 案内線は寸法線の上（白い点）で、
     * カウント箱は案内線の上です。つまり 線 → 案内線 → 枠 の順で、ここで
     * 線を描き直すと案内線が消えます（y=110 の 219 画素）。 */
    /* ④円･角 ①円径 は別です。案内線がない代わりに、引いた寸法線が
     * 円の上に乗ります（測定：r=100 の円の右端 (400,200) が原作では
     * 寸法線の水色、ここでは円の白でした）。 */
    if (c->command == 14 && !c->dim_ck && !c->dim_arc) {
        /* **...but the newest dimension does lie over the band.**  The
         * original wipes rows 17..31 at the press that writes it, then draws
         * it (its line calls are clipped to the window, from y 17), and only
         * then puts the next dimension's red guide over the top in
         * exclusive-or.  ③任意方向 at 30 degrees sends the dimension line up
         * through (461,17)..(411,46), and there it is cyan -- and white where
         * the parallel red guide crosses it (5 xor 2).  The chrome here has
         * already wiped that band black and drawn the guide, so exclusive-or
         * the new lines into the band's rectangle alone gives the same
         * pixels: line where there was black, line xor red where the guide
         * was.  They are drawn whole into a scratch screen and only the
         * rectangle is taken, so each is the same Bresenham run as the
         * original's. */
        static VGA scratch;
        static int ready;

        if (!d || c->n0_lines >= d->n_lines) {
            return;
        }
        if (!ready) {
            vga_reset(&scratch, 0x12);
            ready = 1;
        }
        memcpy(scratch.gc, v->gc, sizeof scratch.gc);
        scratch.stride = v->stride;
        scratch.width = v->width;
        scratch.height = v->height;
        scratch.clip_x0 = w->x0 > 0 ? w->x0 : 0;
        scratch.clip_y0 = w->y0 > 0 ? w->y0 : 0;
        scratch.clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
        scratch.clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
        for (k = c->n0_lines; k < d->n_lines; k++) {
            int p, y, x;

            if (!jwc_visible(d, d->lines[k].layer)) {
                continue;
            }
            for (p = 0; p < VGA_PLANES; p++) {
                memset(scratch.plane[p] + 17L * scratch.stride, 0,
                       (size_t)(31 * scratch.stride));
            }
            jw_view_line(&scratch, d, &d->lines[k], w,
                         jw_view_pen_colour(d->lines[k].pen));
            for (y = 17; y <= 47; y++) {
                for (x = 122; x <= 638; x++) {
                    const long off = (long)y * v->stride + (x >> 3);
                    const unsigned char bit = VGA_PIXEL_BIT(x);

                    for (p = 0; p < VGA_PLANES; p++) {
                        if (scratch.plane[p][off] & bit) {
                            v->plane[p][off] ^= bit;
                        }
                    }
                }
            }
        }
        return;
    }

    /* ハッチ marks the lines it has taken in colour 2, each one **cut to the
     * ones beside it** -- the frame is a 連続線, so a side that runs the whole
     * width of the paper shows red only between its two corners.  The line
     * the frame started on is dotted (style 0x5555) and the rest are solid,
     * and the ends of the chain keep their own second endpoint until the
     * frame closes.
     *
     * Measured on SAMPLE0 with (300,402)(432,410)(300,419)(380,410): the
     * first line is red and dotted from x=162 to x=432, the second solid down
     * the whole of x=432, the third solid from 379 to 432 and the fourth
     * solid down the whole of x=379. */
    if (d && c->command == 18 && c->hatch_n > 0) {
        int i;

        v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
        v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
        v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
        v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
        for (i = 0; i < c->hatch_n; i++) {
            const JwcLine *l = &d->lines[c->hatch_line[i]];
            double ax = 0.0, ay = 0.0, bx = 0.0, by = 0.0;
            int px, py, qx, qy, cut_a = 0, cut_b = 0;

            if (i > 0) {
                cut_a = hatch_meet(&d->lines[c->hatch_line[i - 1]], l,
                                   &ax, &ay);
            } else if (c->hatch_closed && c->hatch_n > 1) {
                cut_a = hatch_meet(&d->lines[c->hatch_line[c->hatch_n - 1]], l,
                                   &ax, &ay);
            }
            if (i + 1 < c->hatch_n) {
                cut_b = hatch_meet(l, &d->lines[c->hatch_line[i + 1]],
                                   &bx, &by);
            } else if (c->hatch_closed && c->hatch_n > 1) {
                cut_b = hatch_meet(l, &d->lines[c->hatch_line[0]], &bx, &by);
            }
            /* A free end is the line's own end **farther from the corner**:
             * the fourth line of the frame above is cut at its own bottom, so
             * what shows is all of it up to the top. */
            if (!cut_a) {
                hatch_free(l, bx, by, cut_b, &ax, &ay);
            }
            if (!cut_b) {
                hatch_free(l, ax, ay, cut_a, &bx, &by);
            }
            at_screen(w, ax, ay, &px, &py);
            at_screen(w, bx, by, &qx, &qy);
            if (i > 0 || c->hatch_closed) {
                /* Solid.  The 開始線 is dotted only while the frame is
                 * open -- it is the one to press to close it -- and goes
                 * solid like the rest once it has been. */
                jw_line(v, px, py, qx, qy, 0, ROP_REPLACE, JW_STYLE_SOLID);
                jw_line(v, px, py, qx, qy, 2, ROP_REPLACE, JW_STYLE_SOLID);
                continue;
            }
            /* The 開始線 is dotted, and **the dots sit where they would on
             * the whole line**: closing the frame moves its near end from
             * x=162 to x=197 and the dots stay on the even columns.  So the
             * whole line is marked and the parts outside the corners are put
             * back as they were. */
            {
                int e0x, e0y, e1x, e1y;
                double ta, tb, lo, hi;
                const double dx = l->x1 - l->x0, dy = l->y1 - l->y0;
                const double len = dx * dx + dy * dy;

                at_screen(w, l->x0, l->y0, &e0x, &e0y);
                at_screen(w, l->x1, l->y1, &e1x, &e1y);
                jw_line(v, e0x, e0y, e1x, e1y, 0, ROP_REPLACE, JW_STYLE_SOLID);
                jw_line(v, e0x, e0y, e1x, e1y, 2, ROP_REPLACE,
                        jw_view_line_style(0));
                if (len < 1e-12 || (!cut_a && !cut_b)) {      /* 隣が無い（最初の押し）は全体が赤の点線 */
                    continue;
                }
                ta = ((ax - l->x0) * dx + (ay - l->y0) * dy) / len;
                tb = ((bx - l->x0) * dx + (by - l->y0) * dy) / len;
                lo = ta < tb ? ta : tb;
                hi = ta < tb ? tb : ta;
                if (lo > 0.0) {
                    int cx, cy;

                    at_screen(w, l->x0 + lo * dx, l->y0 + lo * dy, &cx, &cy);
                    jw_line(v, e0x, e0y, cx, cy,
                            jw_view_pen_colour(l->pen), ROP_REPLACE,
                            jw_view_line_style(l->type));
                }
                if (hi < 1.0) {
                    int cx, cy;

                    at_screen(w, l->x0 + hi * dx, l->y0 + hi * dy, &cx, &cy);
                    jw_line(v, cx, cy, e1x, e1y,
                            jw_view_pen_colour(l->pen), ROP_REPLACE,
                            jw_view_line_style(l->type));
                }
            }
        }
        /* The hatch itself goes **over** the marked frame: where a hatch line
         * ends on one of the sides the original reads white, not red. */
        for (i = 0; c->stage >= 6 && i < d->n_lines - c->hatch_first; i++) {
            const long m = c->hatch_first + i;

            if (m >= 0 && m < d->n_lines && jwc_visible(d, d->lines[m].layer)) {
                jw_view_line(v, d, &d->lines[m], w,
                             jw_view_pen_colour(d->lines[m].pen));
            }
        }
        return;
    }
    /* 文編集 while its field is open: the text it was pointed at **goes off
     * the screen** and a box is drawn where it was.  Measured on a
     * texts-only SAMPLE0 -- selecting text 0 blacks all 42x6 pixels the
     * string was drawn in and leaves a box from the base point up by the
     * character height and along by the string's length, in colour 2
     * exclusive-or, the same one 文字 draws round the string it is taking.
     * The box follows the typing: with `ABC` in front the right edge moves
     * from x=214 to x=223, which is jwc_text_length of the longer string.
     *
     * What is **not** done: the original also puts about eighteen pixels of
     * colour 4 round the base point and the box's top left corner, and the
     * shape of them is not settled -- it is not the same on two texts of the
     * same character type (RESUME 4.22). */
    /* 〈移動〉《複写》で選んだ文字も、書き換えと同じに画面から消えて、
     * その場に色 2 の箱が出る（測定：tmp/te3.txt te2a の段 2）。矢を
     * 動かしたときに箱が付いてくるかは測っていない。 */
    if (d && c->command == 28 && c->te_pick >= 0 && c->te_pick < d->n_texts) {
        const JwcText *pt = &d->texts[c->te_pick];
        const int sz = pt->size <= 10 ? pt->size : 0;
        const double wide = pt->text ? jwc_text_length(d, pt->text, pt->size)
                                     : 0.0;
        const double tall = d->text_h[sz] / 10.0 * d->unit_mm;
        int px, py, qx, qy;

        v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
        v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
        v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
        v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
        /* 移動は文字を消し、複写は文字を色 2 で描き直す（測定：te3a）。 */
        jw_view_text(v, d, pt, w, c->top_item == 3 ? 2 : 0);
        /* 箱は矢の所から、長さと高さを足して画素に切り捨てた所まで（右の辺が
         * 文字の終点より 1 画素左、上の辺は 6 画素上。測定：te2a の段 2）。 */
        px = c->te_mx;
        py = c->te_my;
        qx = (int)(px + wide * w->scale);
        qy = (int)(py - tall * w->scale);
        jw_line(v, px, py, px, qy, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, px, qy, qx, qy, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, qx, qy, qx, py, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, qx, py, px, py, 2, 0x18, JW_STYLE_SOLID);
        return;
    }
    if (d && c->command == 28 && c->typing_text
        && c->edit_text >= 0 && c->edit_text < d->n_texts) {
        int px, py, qx, qy;
        /* 箱は文字基準点を動かさずに伸びる：右なら右の辺が、中なら真ん中が
         * そのまま（測定：probe_textedit te_h の `A`）。 */
        const JwcText *e0 = &d->texts[c->edit_text];
        const double bx0 = c->x0 - c->te_bh * 0.5
                           * (c->text_wide - (e0->text ? jwc_text_length(
                                  d, e0->text, e0->size) : 0.0));

        v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
        v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
        v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
        v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
        jw_view_text(v, d, &d->texts[c->edit_text], w, 0);
        at_screen(w, bx0, c->y0, &px, &py);
        at_screen(w, bx0 + c->text_wide, c->y0 + c->text_tall, &qx, &qy);
        jw_line(v, px, py, px, qy, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, px, qy, qx, qy, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, qx, qy, qx, py, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, qx, py, px, py, 2, 0x18, JW_STYLE_SOLID);
        /* **カーソルの所にある 1 文字の枠に、対角線を 2 本**（色 4 の
         * 排他的論理和）。まだ何も打っていなければ基点に丸も出ます。
         *
         * 4 枚で画素をそのまま測りました（`tools/editcheck.sh` と
         * `JW_NOMARK=1` で印の無い絵を作って引き算。notes/draw.md 4.22）。
         * 見た目は `><` にも砂時計にもなりますが、どれも**枠の対角線
         * 2 本**で説明が付きます——幅 5 × 高さ 6 なら真ん中で消し合って
         * `><`、幅 2 × 高さ 5 なら縦 2 本に見えます。
         *
         * 枠は、**打った字の分だけ右へ寄った所**から、そこにある字
         * 1 文字分の幅まで。上下は文字の箱と同じです。打った分の幅は
         * 欄ぜんたいの幅からもとの字の幅を引いて出します——文字の幅は
         * 最後のすき間を数えないので、「ABC」だけを測ると、その後ろに
         * 字が続くときのすき間が 1 画素足りません。 */
        {
            const JwcText *et = &d->texts[c->edit_text];
            const double was = et->text ? jwc_text_length(d, et->text,
                                                          et->size) : 0.0;
            const double tw = c->text_wide > was ? c->text_wide - was : 0.0;
            const unsigned char *t = (const unsigned char *)et->text;
            char one[3];
            double cw;
            int cx, cy, ex, ey;

            one[0] = t ? (char)t[0] : 0;
            one[1] = 0;
            one[2] = 0;
            if (t && ((t[0] >= 0x81 && t[0] <= 0x9f)
                      || (t[0] >= 0xe0 && t[0] <= 0xfc)) && t[1]) {
                one[1] = (char)t[1];
            }
            cw = one[0] ? jwc_text_length(d, one, et->size) : 0.0;
            at_screen(w, bx0 + tw, c->y0, &cx, &cy);
            at_screen(w, bx0 + tw + cw, c->y0, &ex, &ey);
            jw_line(v, cx, qy, ex, py, 4, 0x18, JW_STYLE_SOLID);
            jw_line(v, cx, py, ex, qy, 4, 0x18, JW_STYLE_SOLID);
            if (tw <= 0.0) {
                /* 基点のまわりの半径 2 の丸——測った 8 点をそのまま。
                 * 丸は文字基準点の所（中なら箱の真ん中、上なら上の辺。
                 * 測定：probe_textedit te_i の 中上）。 */
                static const int RING[8][2] = {
                    { -1, -2 }, { 1, -2 }, { -2, -1 }, { 2, -1 },
                    { -2, 1 }, { 2, 1 }, { -1, 2 }, { 1, 2 }
                };
                int i;

                at_screen(w, bx0 + c->te_bh * 0.5 * c->text_wide,
                          c->y0 + c->te_bv * 0.5 * c->text_tall, &px, &py);

                for (i = 0; i < 8; i++) {
                    jw_line(v, px + RING[i][0], py + RING[i][1],
                            px + RING[i][0], py + RING[i][1], 4, 0x18,
                            JW_STYLE_SOLID);
                }
            }
        }
        return;
    }

    /* The commands that make an entity **while a menu item is still running**
     * all need this: the chrome blacks (122,17)-(638,47) when the item is
     * picked, and anything drawn up there would go with it.  The original
     * draws a new entity over the finished screen instead of redrawing, so
     * this puts them back afterwards.  ２線's pair reaches y=26 on SAMPLE0
     * and lost 201 pixels to that fill. */
    /* 図形 ②読込 needs it too, and its road has no range in hand -- what it
     * has is a figure.  The same difference shows: a placed line crossing one
     * of the drawing's strings is on top in the original and was under it
     * here (18 pixels of TEST1's figure placed at (300,300)). */
    if (!d || !(JW_RANGE(c) || c->command == 8
                || c->command == 9 || c->command == 19 || c->command == 20
                || c->command == 23 || c->command == 26
                || c->command == 14)
        || (JW_RANGE(c) && c->pressed != 2
            && !(c->command == 27 && c->zukei == JW_ZUKEI_PUT2)
            && !(c->command == 17 && c->hen_dbl
                 && c->hen_dbl_from > 0)
            /* **④線記号変形 も範囲を取りません。** 置いた記号の線が
             * 帯の下の 2 行に届くと、黒く塗られたまま残っていました
             * （「ため桝 (450)」で 62 画素）。
             *
             * **記号を選んだあとだけ**です——一覧が出ているあいだに
             * 戻すと、図面が一覧の上に描かれます（2416 画素）。 */
            && !(c->command == 17 && c->hen_kigou && c->kigou_sym > 0))) {
        return;
    }
    /* **③複線化 が入れた線は範囲を放したあとも枠の上です。** 測定：
     * x=406 の縦の留線が帯の下の 2 行（枠が黒くするところ）にも出て
     * いました。 */
    /* The drawing window again: the chrome leaves the clip open to the
     * whole screen. */
    v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
    v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
    v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
    v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
    /* 寸法 ④円･角 は二段構えです。帯の下の 2 行 (y17..31) は押すたびに
     * 黒くなり、その下 (y32..47) は項目を選んだときだけ。だから一つ前に
     * 入れた寸法は 32 行目から下にしか残りません——二本目を入れると
     * 一本目の弧が上の 2 行から消えます（測定：44 画素）。 */
    if (c->command == 14) {
        const int cx0 = v->clip_x0, cx1 = v->clip_x1;
        const int cy0 = v->clip_y0, cy1 = v->clip_y1;
        int pass, row;

        for (pass = 0; pass < 2; pass++) {
            const long l0 = pass ? c->dim_seen_lines : c->n0_lines;
            const long l1 = pass ? d->n_lines : c->dim_seen_lines;
            const long a0 = pass ? c->dim_seen_arcs : c->n0_arcs;
            const long a1 = pass ? d->n_arcs : c->dim_seen_arcs;
            const long t0 = pass ? c->dim_seen_texts : c->n0_texts;
            const long t1 = pass ? d->n_texts : c->dim_seen_texts;

            for (k = l0; k < l1; k++) {
                if (jwc_visible(d, d->lines[k].layer)) {
                    jw_view_line(v, d, &d->lines[k], w,
                                 jw_view_pen_colour(d->lines[k].pen));
                }
            }
            for (k = a0; k < a1; k++) {
                if (jwc_visible(d, d->arcs[k].layer)) {
                    jw_view_arc(v, d, &d->arcs[k], w,
                                jw_view_pen_colour(d->arcs[k].pen));
                }
            }
            for (k = t0; k < t1; k++) {
                if (jwc_visible(d, d->texts[k].layer)) {
                    jw_view_text(v, d, &d->texts[k], w,
                                 jw_view_text_colour(d, d->texts[k].size));
                }
            }
            if (pass) {
                break;
            }
            /* **描いてから消します。** 切り取って描くと弧の折れ線の端が
             * 動いて、境目の 5 画素がずれました。原作は前の寸法をその場で
             * 描き、次の押しで (122,17)-(638,31) を黒くするだけです。 */
            v->clip_x0 = 122;
            v->clip_x1 = 638;
            v->clip_y0 = 17;
            v->clip_y1 = 31;
            for (row = 17; row <= 31; row++) {
                jw_line(v, 122, row, 638, row, 0, ROP_REPLACE,
                        JW_STYLE_SOLID);
            }
            v->clip_x0 = cx0;
            v->clip_x1 = cx1;
            v->clip_y0 = cy0;
            v->clip_y1 = cy1;
        }
        return;
    }
    if (jw_line_trace > 0) {
        printf("after: cmd=%d n0=%ld now=%ld%c", c->command,
               (long)c->n0_lines, (long)d->n_lines, 10);
    }
    /* **線記号変形 puts its pieces back in the order it made them**, not
     * lines first and arcs after: the original draws each part as it reads
     * it from the DAT.  F の 4 番 has an arc listed before two short lines
     * that cross it, and the original's line calls are the arc's chain and
     * then the lines (colour 5 on top at (160,162) and (161,162)); the loops
     * below put the arc last.  The ink holds the pieces in that order, so
     * this replays what was added since the symbol went down -- when it can:
     * a view change throws the ink away, and then the loops below are all
     * there is. */
    if (c->command == 17 && c->hen_kigou && c->n0_ink > 0
        && !d->ink_over && c->n0_ink - 1 <= d->n_ink) {
        for (k = c->n0_ink - 1; k < d->n_ink; k++) {
            if (!d->ink[k].erase) {
                jw_view_ink(v, d, &d->ink[k], w);
            }
        }
        return;
    }
    /* 多角形：この命令が足した線・消した線の跡を、枠の上にも順に再生する（本物は線を枠の上に
     * 直に描き、消すときも黒で塗るので、枠との交点に穴が残る。polygon_plain の [ESC]）。 */
    if (c->command == 19 && c->n0_ink > 0 && !d->ink_over
        && c->n0_ink - 1 <= d->n_ink) {
        for (k = c->n0_ink - 1; k < d->n_ink; k++) {
            jw_view_ink(v, d, &d->ink[k], w);
        }
        return;
    }
    /* Anything made since the range was fixed -- 複写's copies -- goes back on
     * top.  The original draws a new entity over the finished screen rather
     * than redrawing everything, so where a copy crosses one of the reddened
     * originals it is the copy that shows.  Measured with a five-millimetre
     * distance, where 44 pixels of the overlap are white in the original and
     * were red here. */
    /* ２線 の組は作ったときに一度描くだけ（足しは墨の記録が順に再生する）。描き直すと、あとで消した組の穴が埋まる（double_plain 13 手目）。 */
    if (c->command == 9) {
        return;
    }
    for (k = c->n0_lines; k < d->n_lines; k++) {
        if (jwc_visible(d, d->lines[k].layer)) {
            jw_view_line(v, d, &d->lines[k], w,
                         jw_view_pen_colour(d->lines[k].pen));
        }
    }
    for (k = c->n0_arcs; k < d->n_arcs; k++) {
        if (jwc_visible(d, d->arcs[k].layer)) {
            jw_view_arc(v, d, &d->arcs[k], w, jw_view_pen_colour(d->arcs[k].pen));
        }
    }
    for (k = c->n0_texts; k < d->n_texts; k++) {
        if (jwc_visible(d, d->texts[k].layer)) {
            jw_view_text(v, d, &d->texts[k], w, jw_view_text_colour(d, d->texts[k].size));
        }
    }
}


/* ③任意方向 の角度が決まったところ。あとは ①横方向 と同じ道です。 */
void jw_cmd_dim_angle(JwCmd *c, double deg)
{
    const double rad = deg * 3.14159265358979323846 / 180.0;

    c->dim_vert = 0;
    c->dim_ux = (float)cos(rad);
    c->dim_uy = (float)sin(rad);
    c->typing = 0;
    c->typed[0] = 0;
    c->typed_n = 0;
    c->top_item = 0;
    c->top_right = 0;
    c->pressed = 1;
    c->stage = 1;
}

static int cmd_top_dim3(JwCmd *c)
{
    /* ③任意方向 asks for an angle first: `[ESC]  角度 =` with an eight
     * cell field at column 15 and `｜0 度 ﾏｳｽ(L)｜前回と同じ ﾏｳｽ(R)
     * ｜[F1] ﾏｳｽ角度｜` after it.  Typed digits go in the field and
     * [Enter] takes them; the 0 度 cell is a press.  前回と同じ and
     * [F1] ﾏｳｽ角度 are not done. */
    c->typing = 1;
    c->typed[0] = 0;
    c->typed_n = 0;
    return 0;                   /* the line is the item's own recording */
}

/* 寸法 ⑤一括 の本体は下のほうです。 */
static void dimension_lot(JwCmd *c, Jwc *d);
/* 円線接 ①円～円間 の本体は下のほうです。 */
static void tangent_pair(JwCmd *c, Jwc *d, long kb, double px, double py);
/* 変形 ③複線化 の本体も下のほうです。 */
/* 円線接 の道に入ったところも下のほうです。 */
static void tan_start(JwCmd *c, const Jwc *d);
static void sine_draw(JwCmd *c, Jwc *d);
static void spline_draw(JwCmd *c, Jwc *d);
static void bezier_draw(JwCmd *c, Jwc *d);
static void henkei_double(JwCmd *c, Jwc *d);
static void linechg_range_apply(JwCmd *c, Jwc *d, int content);

static int cmd_top(JwCmd *c, Jwc *d, int item)
{
    long k;
    int changed = 0;

    if (!d) {
        return 0;
    }
    /* **＋ and ／ are a pair, and ① swaps them.**  Their lines say so:
     *
     *   ＋  ◇始点指示 (L)free (R)Read |①  ／  |②寸 法 |③角 度 |④ 平 行・垂 直  |
     *   ／  ◇始点指示 (L)free (R)Read |①  ＋  |②寸 法 |③角 度 |④平 行 |⑤垂 直 |
     *
     * -- the first cell of each holds the other one's sign, and the two
     * lines are not even the same length (／ keeps 平行 and 垂直 apart).
     * The port left ① alone, so pressing it did nothing while the original
     * changed command, menu row and line all three. */
    /* `基準線　マウス指示 |①指定解除|` の ①：固定をやめて元の行へ
     * （本物は [bp-0x15e] = 0 で 0x2ba89 に戻る。ovl23 0x2bc36）。 */
    if ((c->command == 2 || c->command == 3) && item == 1
        && (c->ask_kind == 3 || c->ask_kind == 4)) {
        c->ask_kind = 0;
        c->par_on = 0;
        c->fix_mode = 0;
        c->fix_done = 0;
        c->missed = 0;
        return 1;
    }
    if ((c->command == 2 || c->command == 3) && item == 1 && c->stage == 0) {
        jw_cmd_pick(c, c->command == 2 ? 3 : 2);
        return 1;
    }
    /* 始点を取ったあと（`◆終点指示`）でも同じで、**始点は持ったまま**
     * 相手の命令の `◆終点指示 … |①  ＋  |…` に移ります（測定：＋ で
     * (250,200) を押してから ① → メニューの黄色も ／ に移る）。 */
    if ((c->command == 2 || c->command == 3) && item == 1 && c->stage == 1
        && c->pressed == 1) {
        const double x0 = c->x0, y0 = c->y0, x1 = c->x1, y1 = c->y1;
        const int moved = c->moved;

        jw_cmd_pick(c, c->command == 2 ? 3 : 2);
        c->x0 = x0;
        c->y0 = y0;
        c->x1 = x1;
        c->y1 = y1;
        c->pressed = 1;
        c->stage = 1;
        c->moved = moved;
        return 1;
    }
    /* ○ の ②基点変（半径を決めて置いているとき）。押すたびに基点が 9 か所を
     * 回ります（測定：円の中心が押した点から r×(+1,-1) (+1,0) (+1,+1) (0,+1)
     * (-1,+1) (-1,0) (-1,-1) (0,-1) (0,0) の順）。 */
    /* 中心を押したあと（半径は決めていない）の ②基点変：基点が ⦿（中心）と
     * ○（円周）で替わる。○ だと二つの押しを直径の両端とする円（測定：
     * func_all circle_s1_c2、(400,140)→(300,250) が 中心 (229,268)
     * 半径 74.3303、次の円も同じ）。 */
    if (c->command == 11 && c->pressed == 1 && !c->circ_fix && !c->ell
        && item == 2) {
        c->circ_dia = !c->circ_dia;
        return 1;
    }
    if (c->command == 11 && c->circ_fix && item == 2) {
        c->circ_base = (c->circ_base + 1) % 9;
        return 1;
    }
    /* （ の ②角度指定（始点を取って `） 終点指示` のとき）。 */
    /* （ ①三点指示（段 0 の ①）。`◇ 始点指示 … [BS]前項` へ（測定）。 */
    if (c->command == 12 && item >= 1 && item <= 3 && !c->pressed
        && !c->arc3 && c->stage == 0) {
        /* ②半円 も同じ段の仕組み：始点・終点のあと `半円を書く方向マウス指示`。 */
        c->arc3 = 1;
        c->arc3_kind = item;
        c->arc3_done = 0;
        return 1;
    }
    if (c->command == 12 && c->pressed == 2 && item == 1) {
        c->arc_ask = 2;
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        return 1;
    }
    if (c->command == 12 && c->pressed == 2 && item == 2) {
        c->arc_ask = 1;
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        return 1;
    }
    /* □ の ②角度：`角度 =` の欄（＋ と同じ形の欄）。 */
    /* 多角形 ①２点からの距離：A 点から（decomp ovl22 0x2cbe4）。 */
    if (c->command == 19 && item == 1 && !c->pg1 && c->stage == 0
        && !c->pressed) {
        c->pg1 = 1;
        c->pg1_n = 0;
        if (d && !c->n0_ink) {
            c->n0_ink = d->n_ink + 1;      /* この命令の跡の始まり（jw_cmd_after が枠の上に再生） */
        }
        if (c->pg1_pd[0] <= 0.0) {
            c->pg1_pd[0] = c->pg1_pd[1] = 1000.0;
        }
        return 1;
    }
    /* 多角形 ③座標値による多角形（測定：STR）。 */
    if (c->command == 19 && item == 3 && !c->pg3 && c->stage == 0
        && !c->pressed) {
        c->pg3 = 1;
        c->pg3_n = 0;
        if (d && !c->n0_ink) {
            c->n0_ink = d->n_ink + 1;      /* この命令の跡の始まり（jw_cmd_after が枠の上に再生） */
        }
        return 1;
    }
    /* □ ③平行：`基準線　マウス指示 |①指定解除|`（測定：STR）。その中の ①
     * は解除。 */
    if (c->command == 4 && c->box_refask && item == 1) {
        c->box_refask = 0;
        return 1;
    }
    if (c->command == 4 && item == 3 && !c->box_fix) {
        c->ref_hold = c->pressed == 1 && c->stage == 1;     /* 始点は持ったまま（測定：box_s1_c3） */
        c->pressed = 0;
        c->stage = 0;
        c->box_refask = 1;
        return 1;
    }
    /* □ の大きさを決めて置いているあいだの ②角度 も `角度 =` の欄を開く（測定のみ・decomp 未確認：
     * escfz_B_62）。 */
    if (c->command == 4 && item == 2 && c->box_fix && !c->box_ask) {
        c->circ_hold = 0;
        c->box_ask = 2;
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        return 1;
    }
    if (c->command == 4 && item == 2 && !c->box_fix) {
        c->circ_hold = c->pressed == 1 && c->stage == 1;
        c->circ_hx = c->x0;
        c->circ_hy = c->y0;
        c->pressed = 0;
        c->stage = 0;
        c->box_ask = 2;
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        return 1;
    }
    /* □ の ④基点変（大きさを決めて置いているとき）。○ の ②基点変 と同じ
     * 順に 9 か所を回ります（測定：押した点が四角の 左上→左→左下→下→右下→
     * 右→右上→上→真ん中）。 */
    /* 始点を押したあと（大きさは決めていない）の ④基点変：始点が四角の
     * 中心になる（印の枠の中に白い点。測定：func_all box_s1_c4、(400,140)
     * → (300,250) が (500,30)-(300,250) の四角）。もう一度で角に戻る。 */
    /* 行の `④基点変 □` の □ も升で、⑤ として押しても同じ（測定：
     * box_s1_c5 も中心からの四角）。 */
    if (c->command == 4 && c->pressed == 1 && !c->box_fix && !c->box_rot
        && (item == 4 || item == 5)) {
        c->box_ctr = !c->box_ctr;
        return 1;
    }
    if (c->command == 4 && c->box_fix && item == 4) {
        static const int DX[9] = { 0, 1, 1, 1, 0, -1, -1, -1, 0 };
        static const int DY[9] = { 0, -1, 0, 1, 1, 1, 0, -1, -1 };

        c->box_base = (c->box_base + 1) % 9;
        c->box_bi = -DX[c->box_base];
        c->box_bj = -DY[c->box_base];
        return 1;
    }
    /* ○ ②楕円（測定：STR）。`○ 楕円中心点 マウス指示 … [BS]前項` へ。 */
    if (c->command == 11 && item == 2 && !c->circ_fix && !c->ell
        && c->stage == 0 && !c->pressed) {
        c->ell = 1;
        c->ell_mouse = 0;
        c->ell_done = 0;
        return 1;
    }
    /* 楕円の `長軸の平行線をマウス指示 |①角度指定|` の ①。 */
    if (c->command == 11 && c->ell == 3 && item == 1) {
        c->ell = 4;
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        return 1;
    }
    /* ○ の ①径寸法：`半 径 =` の欄を開きます（前は src/item.h の画面だけ）。 */
    if (c->command == 11 && item == 1 && !c->ell) {
        /* 中心を押したあとの `① 径指定` も同じ欄で、押した中心は捨てて
         * 半径を決めて置く状態になります（測定：中心のあと 1 → 25 [Enter]
         * → ` ● 円位置指示` で `半径=    25.000`、次の押しで置く）。 */
        c->circ_hold = c->pressed == 1 && c->stage == 1;
        c->circ_hx = c->x0;
        c->circ_hy = c->y0;
        c->pressed = 0;
        c->stage = 0;
        c->circ_ask = 1;
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        return 1;
    }
    /* ○ ③(n)重円：押すたびに数が一つ増え、置くと同心円をその数だけ
     * （測定：中心のあと ③ で `③(2)重円` と `|④単円|`、次の押しで
     * 半径 148.66 と 74.33 の二つ）。④単円 で 1 に戻す。 */
    if (c->command == 11 && item == 3 && !c->ell
        && ((c->pressed == 1 && c->stage == 1) || c->circ_fix)) {
        if (c->circ_multi < 1) {
            c->circ_multi = 1;
        }
        c->circ_multi++;
        return 1;
    }
    if (c->command == 11 && item == 4 && c->circ_multi > 1 && !c->ell) {
        c->circ_multi = 1;
        return 1;
    }
    /* □ の ①寸法：`寸法 = ` の欄を開きます（前は src/item.h の画面だけ）。 */
    if (c->command == 4 && item == 1) {
        /* **始点を押したあとでも**①寸法 は効き、始点は捨てます（測定：
         * 始点のあと 40,30 [Enter] → `■ 終点指示` で ` 横=40` ` 縦=30`、
         * 次の押しの所に置く）。欄の L で戻るときのために控えます。 */
        c->circ_hold = c->pressed == 1 && c->stage == 1;
        c->circ_hx = c->x0;
        c->circ_hy = c->y0;
        c->pressed = 0;
        c->stage = 0;
        c->box_ask = 1;
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        return 1;
    }
    /* ②寸 法 and ③角 度 take the length and the angle of the next line off
     * the top row instead of the second press.  **Either button opens
     * them** -- the (L) and (R) in what they put up are the answer to the
     * question, not the way in -- and the item is the whole cell.  What is
     * done with the number is the next thing; this is the screen, which is
     * what a branch of the table is. */
    /* **始点を取ったあとでも** ②寸法・③角度 は効き、始点は持ったまま
     * （測定：始点のあと 2 → 40 [Enter] で `◆終点指示` に戻り、次の押しで
     * 40mm の線、そのあと `確定長さ … [BS]前項`）。 */
    if ((c->command == 2 || c->command == 3) && (item == 2 || item == 3)
        && (c->stage == 0 || c->pressed == 1 || c->fix_mode)) {
        c->ask_kind = item - 1;
        /* ②寸法・③角度 は欄を開いてキーを受けます（前は画面だけで、
         * 打った数は捨てていました）。 */
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        return 1;
    }
    /* ④平行 and ⑤垂直 ask for a 基準線 to be parallel or square to.  **＋
     * has the two in one item and ／ keeps them apart** -- `④ 平 行・垂 直`
     * against `④平 行 |⑤垂 直` -- and ＋'s item puts up the same screen as
     * ／'s ④, the one that offers 平行線(L) / 同一線上の線(R). */
    /* ＋ の `④ 平行・垂直` の 垂直 の所は字の無い ⑤ で、同じ行が出る
     * （測定：plus_s1_c5）。 */
    if (c->command == 2 && (item == 4 || item == 5)
        && (c->stage == 0 || c->pressed == 1)) {
        c->ask_kind = 3;
        return 1;
    }
    if (c->command == 3 && (item == 4 || item == 5)
        && (c->stage == 0 || c->pressed == 1)) {
        c->ask_kind = item - 1;
        return 1;
    }
    /* 複線's 「②連続」: one more copy, the same distance again and on the same
     * side.  Measured on SAMPLE0 -- the line at y=157 with 20 puts the first
     * copy at y=122 and 連続 puts the next at y=87, and the count goes up each
     * time.  (「①間隔取得」 beside it asks for a 基準線 to take the interval
     * off, which is not done.) */
    /* 複線's 「①間隔取得」: take the interval off the drawing instead of
     * typing it.  It asks for a line and then for a point, and the interval
     * becomes how far the point is from the line -- in millimetres of paper,
     * like a typed one.  Measured on SAMPLE0 with the line at y=157 and four
     * points: (197,419) gives 150.000, (197,300) 81.770, (400,250) 53.102 and
     * (250,60) 55.836, all of them `距離 / unit_mm * 分母` to the last digit.
     *
     * It is on the command's line from the start, and again after a copy has
     * been drawn, so it is taken here whatever stage the command is at. */
    /* 面取's ① goes round its four shapes, whichever button presses it.
     * tools/cycle.sh walked it: 角面 → 丸面 → Ｌ面 → 楕円面 → 角面. */
    /* 面取 ③寸法=：`[ESC].寸法 =  前回と同じ ﾏｳｽ(R) [    30.000mm]`、打つ字は
     * 桁 14（測定：STR）。欄のあいだの左押しは効かない。 */
    /* 面取 ④一括処理（丸面 の行では ③）。`[ESC]  面取範囲  始点マウス指示
     * (L)線･円` へ（測定：probe_chamfer）。 */
    if (c->command == 8 && !c->chb && c->pick_a < 0 && !c->ch_ask
        && ((c->chamfer == 0 && item == 4) || (c->chamfer == 1 && item == 3))) {
        c->chb = 1;
        c->chb_inner = 0;
        c->pressed = 0;
        c->stage = 0;
        c->n_flip = 0;
        c->cleared = 0;
        return 1;
    }
    if (c->command == 8 && c->chb) {
        /* 範囲の段では ①レイヤ ②線種色（未移植）。確定の段は下で。 */
        if (!(c->pressed == 2 && c->stage == 2)) {
            goto range_items;
        }
        if (item == 1) {
            chamfer_bulk(c, d);
            c->pressed = 0;
            c->stage = 0;
            c->chb = 0;
            return 1;
        }
        if (item == 2) {
            c->pressed = 0;
            c->stage = 0;
            return 1;
        }
        if (item == 3) {
            c->chb_inner = !c->chb_inner;
            return 1;
        }
        return 0;
    }
range_items:
    if (c->command == 8 && !c->chb && c->pick_a < 0 && !c->ch_ask
        && ((item == 3 && c->chamfer == 0) || (item == 2 && (c->chamfer == 1 || c->chamfer == 3)))) {
        /* 丸面・楕円面 では ② が 半径= の欄（測定のみ・decomp 未確認：escfz_R_85。ui は
         * chamfer で `半径 =` に変える）。 */
        c->ch_ask = 1;
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        return 1;
    }
    /* 面取【角面】の ②：【面寸法】⇔【辺寸法】（測定：func_all chamfer_s0_c2
     * の行）。辺寸法なら寸法は角から切る所までの長さ。 */
    if (c->command == 8 && item == 2 && c->chamfer == 0 && !c->chb
        && c->pick_a < 0 && !c->ch_ask) {
        c->ch_side = !c->ch_side;
        return 1;
    }
    if (c->command == 8 && item == 1 && !c->chb) {
        c->chamfer = (c->chamfer + 1) & 3;
        return 1;
    }
    if (c->command == 5 && item == 1
        && (c->stage == 0 || c->stage == 3 || c->stage == 6)) {
        c->stage = 4;
        c->pick = -1;
        return 0;
    }
    if (c->command == 5 && c->stage == 3) {
        const double units = c->gap * c->per_mm;
        double ax, ay, bx, by;

        if (item != 2) {
            return 0;
        }
        ax = c->lx0 + c->nx * units;
        ay = c->ly0 + c->ny * units;
        bx = c->lx1 + c->nx * units;
        by = c->ly1 + c->ny * units;
        if (!jwc_add_line(d, (float)ax, (float)ay, (float)bx, (float)by,
                          (unsigned char)d->line_type, (unsigned char)d->pen,
                          (unsigned char)d->write_layer)) {
            return 0;
        }
        c->lx0 = ax; c->ly0 = ay; c->lx1 = bx; c->ly1 = by;
        c->off_cont = 1;
        return 1;
    }
    /* 消去's own line, before any point is pressed:
     * `●消去範囲 始点指示 |①範囲内消去|②範囲外消去|③指定範囲|`.
     *
     * ②範囲外消去 keeps the same three presses and the same 追加･除外 after
     * them; what changes is which entities the range picks -- everything the
     * range does *not* hold.  Measured on SAMPLE0 with (150,130)-(245,170):
     * 1,865 pixels go red, spread from x 161 to 598 and y 139 to 419, where
     * ①範囲内消去 reddens 224 in the box.
     *
     * ③指定範囲 is the data selection 複写 and 移動 use; it is not done. */
    /* 文字 ⑥：縦字に切り替える。行は src/item.h のまま（`⑥(縦)`）。縦字
     * で書いた文字は記録の rest[2] に 0x20 が立つ（測定：text_c6、座標は
     * 横字と同じ）。もう一度押して横に戻るかは未測定。 */
    /* 文字 ③角度指定：`[ESC] 角度 = … [ -90.000ﾟ]` の欄（行は src/item.h、
     * 打つ字は桁 15。測定：text_c3_v）。[Enter] で角度が決まり、行は
     * ①水平 を押したときと同じ `・文字種類[F3] 基点指示…` になる。 */
    /* 文字を書いたあとの行（段 2：`|①基点変|②行連続|③列連続|`）の ②③ は
     * 連続書（測定：text_rep2・text_rep3）。 */
    /* 測定 ①距離 を測っているあいだの ①表示：結果を文字で書く。行は
     * `%s[F%d]  ◇結果表示   小数点位置%s%s`（ovl29 0x2b2e0）、左の盤は
     * ` ﾍﾟﾝ%d 残文%5d `（0x2b23e）。測定：tools/cases/probe_measure.txt。 */
    /* 測定 ①距離 の ◆ の行の升は 1)表示 2)ｸﾘｱｰ 3)円周：② は始点（◇）からやり直し（測定：measure_s1_c2）。 */
    if (c->command == 15 && c->stage == 1 && !c->meas_put && (item == 2 || item == 3)) {
        if (item == 2) {
            c->stage = 0;
            c->meas_n = 0;
            c->meas_total = 0.0;
            c->meas_last = 0.0;
            c->top_item = 1;
            c->top_right = 0;
        } else {
            c->meas_arc = 1;                /* ③円周：円をマウス指示 */
        }
        return 1;
    }
    if (c->command == 15 && c->stage == 1 && item == 1 && !c->meas_put) {
        c->meas_put = 1;
        return 1;
    }
    /* 線消 部分消去 の ①線切断寸法：`[ESC]  線切断寸法 =` の欄（測定：
     * func_all linedel_s1_c1。欄での左押しは欄を閉じるだけで始点にならない）。 */
    if (c->command == 10 && c->stage == 2 && item == 1 && !c->ld_ask) {
        c->ld_ask = 1;
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        return 1;
    }
    /* ２線 ①基準線からの間隔：`間隔 =` の欄（行は src/item.h のまま）。欄での
     * 左押しは 間隔反転、右押しは 前回と同じ で、どちらも基準線は取らない
     * （測定：func_all double_s0_c1）。 */
    if (c->command == 9 && item == 1 && c->pick_a < 0 && !c->dl_ask) {
        c->dl_ask = 1;
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        return 0;
    }
    /* 測定 ⑨式 ③三斜面積：単位の行（測定：measure_s0_c9_v の `type 30`。取った先は未実装）。 */
    if (c->command == 15 && c->meas9t) {
        return 1;
    }
    /* 測定 ⑤表計算（decomp ovl29 0x2f6ab〜）：入口の帯だけ。 */
    if (c->command == 15 && c->stage == 0 && !c->meas2 && !c->meas3 && !c->meas4 && !c->meas5 && item == 5) {
        c->meas5 = 1;
        return 1;
    }
    if (c->command == 15 && c->meas5) {
        if (c->meas5s) {
            if (item == 1) {
                c->meas5r = 1;      /* ①前範囲（測定：measure_s0_c5_v の Enter） */
            }
            return 1;
        }
        if (item >= 1 && item <= 4) {
            c->meas5s = item;
        }
        return 1;
    }
    /* 測定 ④座標：◇原点から（decomp 0x2efbb）。 */
    if (c->command == 15 && c->stage == 0 && !c->meas2 && !c->meas3 && !c->meas4 && item == 4) {
        c->meas4 = 1;
        c->ms4 = 0;
        return 1;
    }
    if (c->command == 15 && c->meas4) {
        return 1;
    }
    /* 測定 ③面積：◇始点指示から（decomp 0x2d978）。◆の升：① 表示（未実装）、② ｸﾘｱｰ、③ 弧（未実装）。 */
    if (c->command == 15 && c->stage == 0 && !c->meas2 && !c->meas3 && item == 3) {
        c->meas3 = 1;
        c->ms3_n = 0;
        return 1;
    }
    if (c->command == 15 && c->meas3) {
        if (item == 2 && c->ms3_n > 0) {
            c->ms3_n = 0;               /* ｸﾘｱｰ：◇へ */
        }
        return 1;
    }
    /* 測定 ②角度の最初の行（decomp ovl29 0x3278a）：◇原点指示。 */
    if (c->command == 15 && c->stage == 0 && !c->meas2 && item == 2) {
        c->meas2 = 1;
        c->ms2 = 0;
        c->ms2_mode = 0;
        c->ms2_res = 0;
        return 1;
    }
    if (c->command == 15 && c->meas2 && c->ms2 == 0) {
        if (item == 1) {
            c->ms2_mode = !c->ms2_mode;     /* Ｘ軸基準⇔２点間（結果は消さない） */
            return 1;
        }
        return 1;
    }
    /* 分割 ④２線間の等分割線（段 7）。 */
    if (c->command == 21 && c->stage == 0 && item == 4) {
        c->div4 = 1;
        c->div4_made = 0;
        c->div4_n = 0;
        c->stage = 7;
        return 1;
    }
    /* 分割 ②円分割点・③楕円分割点（decomp ovl20 3ab8:14a1、段 6 が始点＝円弧を拾う行）。項目の行
     * の ②③ を選ぶと帯が変わる。ここでは円弧を拾う行の外れまで（SAMPLE0 には円弧が無い）。 */
    if (c->command == 21 && c->stage == 0 && (item == 2 || item == 3)) {
        c->div2 = item;
        c->stage = 6;
        return 1;
    }
    if (c->command == 21 && c->stage == 6 && item == 1) {
        c->div_real = !c->div_real;
        return 1;
    }
    /* 分割：最初の行の ① は２点間分割点、その行の ① は【仮点】⇔【実点】。 */
    if (c->command == 21 && item == 1 && c->stage == 0) {
        c->stage = 5;
        return 1;
    }
    if (c->command == 21 && item == 1 && (c->stage == 4 || c->stage == 5)) {
        c->div_real = !c->div_real;
        return 1;
    }
    /* 点 ⑤仮点削除 の ①全仮点削除：`全仮点削除 復活出来ません |①実行(L)|②中止(R)|` の確認。
     * ①・左押しで全部消して最初の行（①②…の行）へ、②・右押し・[ESC] は仮点削除の行へ戻り、
     * ほかの升・[Enter] は何もしない（測定：tmp/vq.txt vd1〜vd8）。 */
    if (c->command == 22 && c->pt_delall) {
        if (item == 1) {
            if (d) {
                d->n_temp = 0;
            }
            c->pt_delall = 0;
            c->pt_mode = 0;
            c->pt_undo = 0;
            c->stage = 0;
            c->top_item = 0;
        } else {
            if (item == 2) {
                c->pt_delall = 0;
                c->top_item = 5;
            }
        }
        return 1;
    }
    if (c->command == 22 && c->pt_mode == 5 && item == 1) {
        c->pt_delall = 1;
        c->top_item = 0;
        return 1;
    }
    /* 点 ②距離の始点の行：① は 直進⇔円周、② は連続（点を作ったあとだけ。decomp 0x2f730・0x2f754）。 */
    if (c->command == 22 && c->pt_mode == 2 && c->pt2 == 0 && item == 1) {
        c->pt2_circ = !c->pt2_circ;
        c->pt_undo = 0;
        return 1;
    }
    if (c->command == 22 && c->pt_mode == 2 && c->pt2 == 0 && item == 2 && c->pt_undo != 0 && d) {
        c->pt2_total = (float)(c->pt2_total + c->pt2_step);
        pt2_make(c, d);
        return 1;
    }
    /* 点 ①：【仮点】⇔【実点】（行は src/item.h。測定：point_s0_c1）。 */
    if (c->command == 22 && item == 1) {
        c->pt_real = !c->pt_real;
        c->pt_undo = 0;                 /* 02f3f4 */
        c->pt_plain = 0;
        c->pt_mode = 0;
        c->pt3 = 0;
        return 0;
    }
    /* ②距離 ③交点 ④円中心 ⑤仮点削除 は**未移植**。切り替えたあとの押しで
     * 本物は自由な位置に点を作らない（測定：point_s0_c1_v、③ のあと何も
     * 足さない）ので、押しは何もしないでおく。 */
    if (c->command == 22 && item >= 2 && item <= 5) {
        c->pt_mode = item;
        c->pt3 = 0;
        c->pt2 = 0;
        c->pt2_circ = 0;
        c->pt2_total = c->pt2_step = 0.0;
        c->pt_undo = 0;                 /* 項目を替えると [ESC] の数は 0（測定：point_s1_c3） */
        return item == 2 ? 1 : 0;
    }
    if (c->command == 13 && c->stage == 2 && !c->typing_text && !c->text_ang_ask
        && (item == 2 || item == 3)) {
        c->text_rep = item;
        c->stage = 40;
        return 1;
    }
    /* 連続書 の `|①間隔( 5.0)変更|`：` 行間 (1～100) =` の欄（測定：
     * text_rep3_gapk、打つ字は桁 38）。 */
    if (c->command == 13 && c->stage == 40 && item == 1) {
        c->stage = 41;
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        return 1;
    }
    if (c->command == 13 && item == 3 && c->stage != 2 && !c->typing_text
        && !c->text_ang_ask) {
        c->text_ang_ask = 1;
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        return 0;
    }
    /* 文字 ⑤文[書/読]：`◇ 文書 |①ﾌｧｲﾙに書出(L)|②読込(R)|…`（行は
     * src/item.h）。押しは下の 文字 の押しのところ（tx_doc）。 */
    if (c->command == 13 && item == 5 && !c->typing_text) {
        c->text_file = 1;
        return 0;
    }
    if (c->command == 13 && item == 6 && !c->typing_text) {
        c->text_tate = !c->text_tate;
        return 0;
    }
    if (c->command == 13 && (item == 1 || item == 2)) {
        /* `文字種類[F4] |①水平(L,R)|②垂直|③角度指定|④設定|…` -- ①水平 is
         * what a press in the drawing takes, and ②垂直 turns the baseline
         * upright.  ③角度指定 and ④設定 are not done.  Either way the line
         * becomes the one the command shows once it has a point, which is
         * stage 2. */
        c->text_vert = item == 2;
        c->text_ang = 0.0;
        c->stage = 2;
        /* **Nought, not one.**  The state is set; the words the press wrote
         * are the original's own and are in src/item.h, and they are not
         * the ones src/stage.h holds for the same stage -- that one was
         * captured by pressing a point in the drawing, and it starts with
         * `[ESC]` where this does not. */
        return 0;
    }
    if (c->command == 14 && c->stage == 0 && item == 8) {
        /* ⑧値変: it asks for a dimension value to rewrite.
         * 段 7 waits for one, 段 8 puts it in a field, [Enter] writes it
         * back in place (jwc_set_text). */
        c->dim_val = 1;
        c->dim_val_size = 0;
        c->stage = 7;
        return 1;
    }
    if (c->command == 14 && c->dim_lot && c->stage == 23) {
        /* `|①一括処理実行 |② 中止 |` */
        if (item == 1) {
            c->dim_seen_lines = d->n_lines;
            c->dim_seen_arcs = d->n_arcs;
            c->dim_seen_texts = d->n_texts;
                c->dim_seen_points = d->n_points;
            dimension_lot(c, d);
            c->dim_texts = d->n_texts;
            c->stage = 24;
            return 1;
        }
        if (item == 2) {
            c->dim_lot = 0;
            c->dim_lot_n = 0;
            c->stage = 3;
            return 1;
        }
        return 0;
    }
    if (c->command == 14 && c->dim_arc && c->stage == 11) {
        /* ②円周 の線の `|①端部|`: 【点】 と 【矢印】 が入れ替わります。
         * `|②連続始点指示 (R) |` は右押しで、jw_cmd_top が先に
         * 受けます（画面を描き直すだけ）。 */
        if (item == 1) {
            c->dim_arc_end = !c->dim_arc_end;
            return 1;
        }
        if (item == 3 && c->dim_arc == 2) {
            /* ③【２点間】と【２線間】。【２線間】は 始線・終線・寸法線の
             * 位置の三押しで、引出し線の段がありません（測定）。 */
            c->dim_arc_two = !c->dim_arc_two;
            return 1;
        }
        if (item == 2 && c->dim_arc == 2) {
            /* ②単位: 度 と 度分秒 が入れ替わり、桁 53 の `度` は
             * 度分秒 のときは出ません（測定）。 */
            c->dim_arc_unit = !c->dim_arc_unit;
            return 1;
        }
        return 0;
    }
    if (c->command == 14 && c->dim_ck && c->stage == 9) {
        /* ④円･角 ①円径's own line, `|①矢印【内】|②値【内】|③書込角度|`:
         * the first two change over where they stand and the third opens
         * an angle field (段 10). */
        if (item == 1) {
            c->dim_ck_out = !c->dim_ck_out;
            return 1;
        }
        if (item == 2) {
            c->dim_ck_vout = !c->dim_ck_vout;
            return 1;
        }
        if (item == 3) {
            c->typing = 1;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 10;
            return 1;
        }
        return 0;
    }
    if (c->command == 14 && c->stage == 0 && item == 3) {
        return cmd_top_dim3(c);
    }
    if (c->command == 14 && c->stage == 0 && (item == 1 || item == 2)) {
        /* `|①横方向|②縦方向|③任意方向|④円･角|…` -- ① is also what a
         * press in the drawing picks, and ② turns the whole thing on its
         * side.  ③ and the rest are not done. */
        c->dim_vert = item == 2;
        c->dim_ux = item == 2 ? 0.0 : 1.0;
        c->dim_uy = item == 2 ? 1.0 : 0.0;
        c->pressed = 1;
        c->stage = 1;
        return 1;
    }
    if (c->command == 26) {
        /* `接線 |①円～円間 |②円周点 |③指定点 |④角度指定 |` -- only ③. */
        /* ①接 線 は上の行からも選べます（測定：行が
         * `接線 |①円～円間 |②円周点 |③指定点 |④角度指定 |` になります）。 */
        if (!c->tan_on && !c->tan_tri && item == 4) {
            /* ④接楕円。小項目の行が出ます。 */
            c->tan_tri = 20;
            tan_start(c, d);
            c->stage = 57;
            return 1;
        }
        if (c->tan_tri == 20 && c->stage == 57 && item == 3) {
            /* ③平行四辺形内接: 四本の辺で決まる平行四辺形の内接楕円。 */
            c->tan_tri = 23;
            c->stage = 64;
            return 1;
        }
        if (c->tan_tri == 20 && c->stage == 57 && item == 2) {
            /* ②菱形内接: 三本の辺で決まる菱形の内接楕円。 */
            c->tan_tri = 22;
            c->stage = 61;
            return 1;
        }
        if (c->tan_tri == 20 && c->stage == 57 && item == 1) {
            /* ①３点: 軸の両端と、通る点。 */
            c->tan_tri = 21;
            c->stage = 58;
            return 1;
        }
        if (!c->tan_on && !c->tan_tri && item == 3) {
            /* ③接円（３条件）。小項目の行が出ます。 */
            c->tan_tri = 10;
            tan_start(c, d);
            c->stage = 50;
            return 1;
        }
        if (c->tan_tri == 10 && c->stage == 50 && item == 3) {
            /* ③１点と２線･円: 点を通り、二本の線（か円）に接する円。 */
            c->tan_tri = 13;
            c->stage = 51;
            return 1;
        }
        if (c->tan_tri == 10 && c->stage == 50 && item == 4) {
            /* ④３線･円: 三本の線（か円）に接する円。 */
            c->tan_tri = 14;
            c->stage = 54;
            return 1;
        }
        if (c->tan_tri == 10 && c->stage == 50 && item == 2) {
            /* ②２点と１線･円: 二点を通り、線か円に接する円。 */
            c->tan_tri = 12;
            c->stage = 47;
            return 1;
        }
        if (c->tan_tri == 10 && c->stage == 50 && item == 1) {
            /* ①３点: 三つの点を通る円、つまり外接円。 */
            c->tan_tri = 11;
            c->stage = 44;
            return 1;
        }
        if (!c->tan_on && item == 2) {
            /* ②接円（半径と２条件）。小項目の行が出ます。 */
            c->tan_on = 1;
            c->tan_circ = -1;
            tan_start(c, d);
            c->stage = 30;
            return 1;
        }
        if (c->tan_on && c->stage == 30 && item == 1) {
            /* ①１線１円: 線と円に接する、決めた半径の円。 */
            c->tan_circ = 1;
            c->stage = 40;
            return 1;
        }
        if (c->tan_on && c->stage == 30 && item == 3) {
            /* ③１円１点: 円に接し、点を通る、決めた半径の円。 */
            c->tan_circ = 3;
            c->stage = 36;
            return 1;
        }
        if (c->tan_on && c->stage == 30 && item == 2) {
            /* ②１点１線: 点を通り、線に接する、決めた半径の円。 */
            c->tan_circ = 2;
            c->stage = 32;
            return 1;
        }
        if (c->tan_on && c->stage == 30 && item == 5) {
            /* ⑤２円: 二つの円に接する、決めた半径の円。 */
            c->tan_circ = 5;
            c->stage = 27;
            return 1;
        }
        if (c->tan_on && c->stage == 30 && item == 4) {
            /* ④２線: 二本の線に接する、決めた半径の円。 */
            c->tan_circ = 4;
            c->stage = 24;
            return 1;
        }
        if (c->tan_on && c->stage == 30 && item == 6) {
            /* ⑥２点: 二点を通る、決めた半径の円。 */
            c->tan_circ = 6;
            c->stage = 20;
            return 1;
        }
        if (c->tan_on && c->tan_circ == 3
            && (c->stage == 36 || c->stage == 37) && item == 1) {
            c->typing = 1;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 39;
            return 1;
        }
        if (c->tan_on && c->tan_circ == 1
            && (c->stage == 40 || c->stage == 41) && item == 1) {
            c->typing = 1;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 43;
            return 1;
        }
        if (c->tan_on && c->tan_circ == 2
            && (c->stage == 32 || c->stage == 33) && item == 1) {
            c->typing = 1;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 35;
            return 1;
        }
        if (c->tan_on && c->tan_circ == 5
            && (c->stage == 27 || c->stage == 28) && item == 1) {
            c->typing = 1;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 31;
            return 1;
        }
        if (c->tan_on && c->tan_circ == 4
            && (c->stage == 24 || c->stage == 25) && item == 1) {
            c->typing = 1;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 26;
            return 1;
        }
        if (c->tan_on && c->tan_circ > 0
            && (c->stage == 20 || c->stage == 21) && item == 1) {
            /* ①接円半径 の欄。 */
            c->typing = 1;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 23;
            return 1;
        }
        if (!c->tan_on && item == 1) {
            c->tan_on = 1;
            tan_start(c, d);
            c->pressed = 1;
            c->stage = 1;
            return 1;
        }
        if (c->tan_on && c->stage == 1 && item == 1) {
            /* ①円～円間: 円を二つ指示すると、押した側どうしを結ぶ接線。 */
            c->tan_kind = 1;
            tan_start(c, d);
            c->stage = 18;
            return 1;
        }
        if (c->tan_on && c->stage == 1 && item == 2) {
            /* ②円周点: 円を指示してから、その円周の上の点。 */
            c->tan_kind = 2;
            tan_start(c, d);
            c->stage = 16;
            return 1;
        }
        if (c->tan_on && c->stage == 1 && item == 4) {
            /* ④角度指定: まず角度、それから円、始点、終点。 */
            c->tan_kind = 4;
            tan_start(c, d);
            c->typing = 1;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 12;
            return 1;
        }
        if (c->tan_on && c->stage == 1 && item == 3) {
            c->stage = 2;
            return 1;
        }
        return 0;
    }
    if (c->command == 18) {
        /* ①【指示終了】 once the frame is closed, and then ① 実 行.  The
         * line the second one comes up with is
         * `|① 実 行(L)|②基点変更|③ 角 度 |④ﾋﾟｯﾁ|⑤ (1)本線 |` with
         * `[  45.00]` and `[  10.0]` in the band; ② to ⑤ are not done. */
        if (c->stage == 4 && item == 1) {
            c->stage = 5;
            return 1;
        }
        if (c->stage == 5 && item == 1) {
            /* The frame stays marked afterwards -- the line offers
             * `① 同図形ハッチ追加` and `② 他図形ハッチ`, so it still has it. */
            hatch_run(c, d);
            c->stage = 6;
            return 1;
        }
        return 0;
    }
    if (c->command == 23) {
        /* 曲線's own line, `|①ｻｲﾝ曲線|②２次曲線|③ｽﾌﾟﾗｲﾝ|④ﾍﾞｼﾞｪ|⑤手書線|
         * ⑥連続弧|⑦連線|⑧解除|`.  Only ⑦連線 is done. */
        if (!c->poly && !c->sine && !c->spl && !c->chain && !c->hand
            && item == 5) {
            /* ⑤手書線。押し二つで一本引きます（押しっぱなしで引く
             * ほうはまだ）。 */
            c->hand = 1;
            c->stage = 60;
            return 1;
        }
        if (!c->poly && !c->sine && !c->spl && !c->chain && item == 4) {
            /* ④ﾍﾞｼﾞｪ。③ｽﾌﾟﾗｲﾝ と同じ道で、曲線だけ違います。 */
            c->spl = 2;
            c->spl_n = 0;
            c->stage = 30;
            return 1;
        }
        if (!c->poly && !c->sine && !c->spl && !c->chain && item == 3) {
            /* ③ｽﾌﾟﾗｲﾝ。点を並べます。 */
            c->spl = 1;
            c->spl_n = 0;
            c->stage = 30;
            return 1;
        }
        if (c->spl && c->stage == 33 && item == 1) {
            c->stage = 34;      /* ①点指示終了 */
            return 1;
        }
        if (c->spl && c->stage == 34 && item == 1) {
            /* ①作図開始 */
            if (c->spl == 2) {
                bezier_draw(c, d);
            } else {
                spline_draw(c, d);
            }
            c->sine_did = 1;    /* 描いたあとは桁 1 に [ESC] */
            c->spl_n = 0;
            c->stage = 30;
            return 1;
        }
        if (c->spl && c->stage == 34 && item == 2) {
            c->typing = 1;      /* ②区間分割数 */
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 35;
            return 1;
        }
        if (!c->poly && !c->sine && !c->spl && !c->chain && item == 6) {
            /* ⑥連続弧。 */
            c->chain = 1;
            c->stage = 50;
            return 1;
        }
        if (c->chain && c->stage == 53 && item == 2) {
            /* ②弧反転 は**いまの進む向きをひっくり返す**だけ
             * です。そのあとの弧は向きを引き継ぐので、弧ごとに
             * 裏返すと二度返して元に戻ってしまいます（測定：
             * 反転してから三本目が原作と逆になりました）。 */
            c->ch_tx = -c->ch_tx;
            c->ch_ty = -c->ch_ty;
            c->ch_rev = !c->ch_rev;
            return 1;
        }
        if (c->chain && c->stage == 53 && item == 3) {
            c->typing = 1;              /* ③半径 */
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 54;
            return 1;
        }
        if (c->chain && c->stage == 53 && item == 4) {
            c->ch_line = !c->ch_line;   /* ④直線 */
            return 1;
        }
        if (c->chain && c->stage == 50 && item == 1) {
            /* ①接する弧･線 指定。すでに引いてある線か弧を押すと、その
             * **近いほうの端から、その向きに接して**連続弧が始まります
             * （測定：SAMPLE0 の枠の上辺を x=300 で押すと端点
             * (40.973,323.057) に接する弧、x=550 で押すと反対の端点
             * (477,323.057) に接する弧）。 */
            c->stage = 55;
            return 1;
        }
        if (c->chain && c->stage == 53 && item == 1) {
            c->stage = 50;      /* ①終了 */
            return 1;
        }
        if (!c->poly && !c->sine && !c->spl && !c->chain && item == 2) {
            /* ②２次曲線: 基準線 → 座標原点 → 通過点 → 始点 → 終点 →
             * 分割 長さ。ｻｲﾝ曲線 と同じ骨組みです。 */
            c->sine = 3;
            c->stage = 40;
            return 1;
        }
        if (!c->poly && !c->sine && !c->spl && !c->chain && item == 8) {
            /* ⑧解除: 曲線のつながりをほどきます。 */
            c->sine = 2;
            c->stage = 20;
            return 1;
        }
        if (!c->poly && !c->sine && !c->spl && !c->chain && item == 1) {
            /* ①ｻｲﾝ曲線: 基準線 → 座標原点 → 1ｻｲｸﾙ → 振幅 → 始点 →
             * 終点 → 分割 長さ。 */
            c->sine = 1;
            c->stage = 10;
            return 1;
        }
        if (!c->poly && !c->sine && !c->spl && !c->chain && item == 7) {
            c->poly = 1;
            c->poly_esc = 0;
            c->poly_deg = 45;   /* the band comes up saying `45度毎` */
            c->poly_n = 0;
            c->stage = 1;
            return 1;
        }
        if (c->poly && item == 1) {
            /* ①角 度 goes round: 45度毎, 90度毎, free.  Measured by
             * pressing it once and twice and reading the band. */
            c->poly_deg = c->poly_deg == 45 ? 90 : c->poly_deg == 90 ? 0 : 45;
            c->poly_esc = 0;
            return 1;
        }
        if (c->poly && item == 4 && c->poly_n >= 2) {
            /* ④ 終了: the last segment goes down, from where the corner
             * before it left off to the last press.  Measured -- the fourth
             * press of (200,200)(400,200)(400,350)(250,350) leaves
             * (273.768,113)-(129,113), which is the press itself at the far
             * end. */
            if (d && jwc_add_line(d, (float)c->poly_sx, (float)c->poly_sy,
                                  (float)c->poly_px, (float)c->poly_py,
                                  (unsigned char)d->line_type,
                                  (unsigned char)d->pen,
                                  (unsigned char)d->write_layer)) {
                d->lines[d->n_lines - 1].rest[1] = 0xf0;
            }
            c->poly_n = 0;
            c->pressed = 0;
            c->stage = 4;
            return 1;
        }
        return 0;
    }
    if (c->command == 19) {
        /* 多角形's two menus: `②正多角形` on the item's own line, then
         * `①任意寸法の正多角形`, and then it asks for the number of sides. */
        if (c->stage == 0 && item == 2) {
            c->stage = 1;
            return 1;
        }
        if (c->stage == 1 && item == 1) {
            c->stage = 2;
            c->typing = 1;
            c->typed_n = 0;
            c->typed[0] = 0;
            return 1;
        }
        return 0;
    }
    if (c->command == 27 && c->prev_top_item == 4 && !c->zukei && !c->pressed && c->stage == 0 && item == 3) {
        c->zukei_drive = 1;         /* 枠の画面の ③ドライブ(A:)変更（測定：zukei_s0_c4_v） */
        c->top_item = 4;
        return 1;
    }
    if (c->command == 27 && !c->zukei && c->pressed == 0 && c->stage == 0) {
        if (item == 5 || item == 2) {
            c->zukei_blank = c->zukei_n == 0;       /* 登録図形なしで ④⑤ を選ぶと図面の領域が空（測定：zukei_s0_c5） */
        } else if (item == 1 || item == 2) {
            c->zukei_blank = 0;
        }
    }
    /* 図形 ①登録 -- the same range 複写 takes, and then a base point and a
     * name.  src/zukei.h holds the line at each step. */
    if (c->command == 27 && c->pressed == 0 && c->stage == 0 && item == 1
        && !c->zukei) {
        c->zukei = JW_ZUKEI_RANGE;
        return 1;
    }
    /* 図形 ②読込 -- the same list, to read one back into the drawing.
     *
     * **Only when the group has something in it.**  An empty group answers
     * `登録図形がありません（グループ変更）` instead, and that is still the
     * line src/item.h holds, because the distribution ships no figures at
     * all: `orig/` has no ZUKEI_1_ until something is registered. */
    if (c->command == 27 && c->pressed == 0 && c->stage == 0 && item == 2
        && c->zukei_n > 0 && !c->zukei) {
        c->zukei = JW_ZUKEI_LIST;
        return 1;
    }
    /* 図形 ②読込's ①倍率指定X,Y and ②角  度 open a field along the top.
     * The road stays where it is; what changes is what the line says. */
    if (c->command == 27 && (item == 1 || item == 2)
        && (c->zukei == JW_ZUKEI_PUT || c->zukei == JW_ZUKEI_PUT2)) {
        c->zukei_ask = item == 2 ? JW_ZUKEI_ANG : JW_ZUKEI_MAG;
        c->zukei_typed[0] = 0;
        c->zukei_typed_n = 0;
        return 1;
    }
    /* 図形 ②読込's ④ﾏｳｽ角 and ⑤仮表示.  Both only change what the band
     * says and whether the preview is drawn; the road stays where it is. */
    if (c->command == 27 && item == 4
        && (c->zukei == JW_ZUKEI_PUT || c->zukei == JW_ZUKEI_PUT2)) {
        c->zukei_mouse = (c->zukei_mouse + 1) % 3;
        return 1;
    }
    if (c->command == 27 && item == 5
        && (c->zukei == JW_ZUKEI_PUT || c->zukei == JW_ZUKEI_PUT2)) {
        c->zukei_noghost = !c->zukei_noghost;
        return 1;
    }
    /* 図形 ②読込's ③90ﾟ毎: another quarter turn each press, and the band
     * beside the counts says which -- 0.000, 90.000, 180.000, 270.000 and
     * back to 0.000, with the 位置指示 line written again each time. */
    if (c->command == 27 && item == 3
        && (c->zukei == JW_ZUKEI_PUT || c->zukei == JW_ZUKEI_PUT2)) {
        c->zukei_ang += 90.0f;
        if (c->zukei_ang >= 360.0f) {
            c->zukei_ang -= 360.0f;
        }
        return 1;
    }
    /* 図形 の帯、升を一つも選んでいない idle の状態（①登録 の範囲も ②読込
     * の一覧もまだ開いていない）での ③表示・⑥レイヤ：ovl31 メイン
     * ディスパッチャ（dis 032a6c〜、local_cc==3/6）はどちらも関数を呼ばず、
     * DS の 1 バイトを直接いじるだけ。式はそのまま:
     *   local_cc==3: `*(char*)0x1174 += 1; if (1 < v) v = 0;`
     *     → 0 のとき 1 になり、1 のときは (1<2) なので 0 に戻る。つまり
     *       0/1 の単純トグル（2 以上には絶対にならない）。
     *   local_cc==6: `*(char*)0x1175 += 1; if (2 < v) v = 0;`
     *     → 0→1→2→0 の 3 値サイクル。
     * どちらも帯の文字列選択（dis 02b94〜02c04、DS:0x712e/0x7146 系）に
     * 使われていそうだが、tools/probe.sh で 図形→③表示 の升を押しても
     * row1〜3 の文字列には変化が見えなかった（c->command==27 の idle 中は
     * 別の描画ゲート `*(int*)0xc22==0` が成立していない可能性がある）ため、
     * 実際の見た目は測定のみ・decomp未確認のまま——状態そのものは decomp
     * の式どおりに持つ。 */
    /* 線変更 ①指定範囲内変更（実機で確認、tools/emu.sh 2026-10-06）：
     * 升①を押すと範囲取り（OVL5 共有の箱取り、JW_RANGE 経由）に入り、
     * 範囲を閉じて①範囲確定を押すと「絞り込み」（stage 2）、そこで
     * ③全線変更 を選ぶと「変更内容」（stage 4）になる。帯の文字は実機の
     * スクリーンショットから読み取った（文字列表のオフセットは未特定）：
     *   絞り込み    `範囲内の変更線|①指定 線種 変更|②指定 線色(ﾍﾟﾝNo.)変更|③全線変更|`
     *   変更内容    `変更内容|①書込用線種に変更|②書込用線色に変更|③書込用レイヤに変更|`
     * ①指定線種・②指定線色 は実機の画面までは確認したが、その先の
     * フィルタ入力（線種の一覧・ペン番号の入力）は未実装のまま
     * （RESUME.md 4 参照）。 */
    if (c->command == 24 && c->pressed == 0 && c->stage <= 1 && !c->lc_range
        && item == 1) {
        c->lc_range = 1;
        c->lc_narrow = 0;
        c->stage = 0;           /* 線を拾ったあとでも範囲の始点の行へ（測定：linechg_s1_c1） */
        return 1;
    }
    if (c->command == 24 && c->lc_range && c->stage == 2) {
        if (item == 3) {
            c->lc_narrow = 3;
            c->stage = 4;
            return 1;
        }
        return 0;       /* ①指定線種・②指定線色 のフィルタは未実装 */
    }
    if (c->command == 24 && c->lc_range && c->lc_narrow == 3
        && c->stage == 4) {
        if (item >= 1 && item <= 3) {
            linechg_range_apply(c, d, item);
            c->lc_range = 0;
            c->lc_narrow = 0;
            c->pressed = 0;
            c->stage = 0;
            return 1;
        }
        return 0;
    }
    if (c->command == 27 && c->pressed == 0 && c->stage == 0 && !c->zukei) {
        if (item == 3) {
            c->zukei_disp = !c->zukei_disp;
            c->zukei_plain = 0;
            return 1;
        }
        if (item == 6) {
            c->zukei_layer = (c->zukei_layer + 1) % 3;
            c->zukei_plain = 0;
            return 1;
        }
    }
    /* And on ②読込's list, ①選択確定 takes the figure that is picked.  The
     * host has already read it -- that is what zukei_in is -- so if there is
     * nothing in hand the press does nothing. */
    if (c->command == 27 && c->zukei == JW_ZUKEI_LIST && item == 1
        && c->zukei_in) {
        jw_cmd_zukei_put(c, d);
        return 1;
    }
    /* On the list of figures, ①選択確定 takes the cell that is picked --
     * `新規登録` to start with -- and asks for a name. */
    if (c->command == 27 && c->zukei == JW_ZUKEI_PICK && item == 1) {
        c->zukei = JW_ZUKEI_NAME;
        c->zukei_name[0] = 0;
        c->zukei_name_n = 0;
        return 1;
    }
    /* `書き込みます |① 実 行(L)|② 再選択(R)|`.  Either way the road ends and
     * 図形's own line comes back.
     *
     * The file itself goes out beside this, from src/main_wasm.c, which is
     * where the port's disk is; jw_cmd_zukei_bytes above makes the bytes and
     * jwc_zukei_bytes lays them out.  ② 再選択 goes back to the list of
     * figures with the selection still in hand. */
    if (c->command == 27 && c->zukei == JW_ZUKEI_WRITE
        && (item == 1 || item == 2)) {
        c->zukei = item == 2 ? JW_ZUKEI_PICK : 0;
        if (!c->zukei) {
            c->pressed = 0;
            c->stage = 0;
        }
        return 1;
    }
    if (c->command == 25 && c->pressed == 0 && c->stage == 0) {
        if (item == 1 || item == 2) {
            c->outside = item == 2;
            c->span = 0;
            return 0;
        }
        if (item == 3) {        /* ③指定範囲 */
            c->span = 1;
            c->outside = 0;
            return 1;           /* its own line goes up at once */
        }
        return 0;
    }
    if (!JW_RANGE(c) || c->pressed != 2) {
        return 0;
    }
    if (c->stage == 3) {        /* 追加･除外's 「①範囲 確定」 */
        if (item == 1) {
            /* 消去 goes on to `復活出来ません |①実行|②中止|`; 複写 asks how
             * to copy -- `|①ﾏｳｽ位置(L,R)|②数値位置|…|⑦属性変更|`, with
             * 変更無し in the band (src/copy.h stage 4). */
            c->stage = (JW_MOVE_CMD(c->command) || c->command == 17)
                     ? 4 : 2;
            /* 処理したら 1：0 を返すと画面側が src/item.h の「段 0 で ① を
             * 押したときの字」を上から描いてしまう（消去の段 2 の行が
             * `消 去 始点マウス指示…` になり、①実行 が押せなかった）。 */
            return 1;
        }
        return 0;
    }
    if (c->command == 17 && c->hen_dbl && c->stage == 4) {
        /* `複線化 |① 実行(L)|② 中止(R)|③間隔  100.00(mm)|④留線【有】|` */
        if (item == 1) {
            henkei_double(c, d);
            c->pressed = 0;
            c->stage = 0;
            return 1;
        }
        if (item == 2) {
            c->pressed = 0;
            c->stage = 0;
            return 1;
        }
        if (item == 3) {
            c->typing = 1;
            c->typed[0] = 0;
            c->typed_n = 0;
            return 1;
        }
        if (item == 4) {
            c->hen_dbl_cap = !c->hen_dbl_cap;
            return 1;
        }
        return 0;
    }
    if (c->command == 17 && c->stage == 4 && item == 1) {
        /* ①ﾏｳｽ位置 from the cell: it asks for the base point first. */
        c->stage = 5;
        return 1;
    }
    if (c->command == 17 && c->stage == 4 && item == 3) {
        /* ③数値倍率: the base point first, then `.倍率 X,Y =`, then
         * where it goes. */
        c->scaling = 1;
        c->stage = 5;
        return 1;
    }
    if (c->command == 17 && c->stage == 4 && item == 2) {
        /* ②数値位置: `.距離 X,Y =` in millimetres of paper, the same
         * field 複写 has.  Measured: `20,30` moves the ends that are in
         * the box by (34.883,52.323) = (20,30) x unit_mm. */
        c->stage = 7;
        c->typing = 1;
        c->typed_n = 0;
        c->typed[0] = 0;
        return 1;
    }
    if (JW_MOVE_CMD(c->command)) {
        /* 複写 and 移動, once the range is fixed.  Nothing in the line is picked yet --
         * none of the seven has 【】 round it -- so ①ﾏｳｽ位置 has to be chosen
         * before the presses mean anything.  Measured: click it and the line
         * becomes `複写  原図形の基準点位置 マウス指示 (L)free (R)Read`. */
        if (c->stage == 4 && item == 1) {
            c->stage = 5;
            return 1;
        }
        if (JW_REDO_STAGE(c->stage) && item == 1) {
            /* ①同形別処理 -- the same selection again, by another method: the
             * line goes back to `|①ﾏｳｽ位置(L,R)|②数値位置|…|` with 変更無し
             * in the band -- so whichever of the seven was running is put
             * away and another one can be picked. */
            c->rotate = 0;
            c->scaling = 0;
            c->mscale = 0;
            c->stage = 4;
            return 1;
        }
        if (JW_REDO_STAGE(c->stage) && item == 2) {
            /* ②他図形処理 -- another figure: back to the line the item came
             * up with, and nothing picked. */
            c->pressed = 0;
            c->stage = 0;
            c->n_flip = 0;
            c->cleared = 0;
            c->copies = 0;
            c->rotate = 0;
            c->scaling = 0;
            c->mscale = 0;
            free(c->sel_line);
            free(c->sel_arc);
            free(c->sel_text);
            c->sel_line = c->sel_arc = c->sel_text = 0;
            return 1;
        }
        if (JW_REDO_STAGE(c->stage) && item == 3) {
            /* ③連続 -- another copy, one step further on.  The line stays as
             * it is and the counts go up again (32|14 to 34|15 on SAMPLE0).
             * ①ﾏｳｽ位置's own line (段 9) offers the same three items and its
             * ③連続 behaves the same way -- measured, 32|14 to 34|15. */
            copy_again(c, d);
            return 1;
        }
        if (c->stage == 4 && item == 4) {
            /* ④ﾏｳｽ倍率: four presses and no typing.  Stages 21 to 25. */
            c->mscale = 1;
            c->stage = 21;
            return 1;
        }
        if (c->stage == 4 && item == 3) {
            /* ③数値倍率: the 基準点 first, on the same line ⑥回転 and
             * ①ﾏｳｽ位置 put up.  Stages 17 to 20 are free in src/copy.h. */
            c->scaling = 1;
            c->stage = 17;
            return 1;
        }
        if (c->stage == 4 && item == 6) {
            /* ⑥回転: the 基準点 first, on the same line ①ﾏｳｽ位置 puts up.
             * Stages 13 to 16 are free in src/copy.h. */
            c->rotate = 1;
            c->stage = 13;
            return 1;
        }
        if (c->stage == 4 && item == 5) {
            /* ⑤反転: `反転基準線　マウス指示 ` and then a line to turn the
             * range over in.  Stage 10 and 12 are free in src/copy.h. */
            c->mirror = 1;
            c->stage = 10;
            return 1;
        }
        if (c->stage == 4 && item == 2) {
            /* ②数値位置: `.距離 X,Y =` and a field at column 18.  The right
             * button takes 前回と同じ, the keys a new distance. */
            c->stage = 7;
            c->typing = 1;
            c->typed_n = 0;
            c->typed[0] = 0;
            return 1;
        }
        return 0;
    }
    if (item == 2) {            /* ②中止 -- the picked entities go back */
        c->pressed = 0;
        c->stage = 0;
        /* 消去：`消去 再度(L)` まで進んでいたら、ここでもその積みを捨てる
         * （[ESC] と同じ理由。上の [ESC] 節のコメント参照）。 */
        if (c->command == 25) {
            c->erase_again = 0;
        }
        return 1;
    }
    if (item != 1) {            /* the bar between them does nothing */
        return 0;
    }
    for (k = d->n_lines - 1; k >= 0; k--) {
        JwcLine *l = &d->lines[k];

        if (!in_reach_layer(d, l->layer)) {
            continue;
        }
        if (c->outside) {
            double ax = l->x0, ay = l->y0, bx = l->x1, by = l->y1;
            const int kind = outside_kind(c, &ax, &ay, &bx, &by);

            if (kind == JW_OUT_CROSS) {          /* cut, not taken away */
                if (flipped(c, JW_FLIP_LINE, k)) {
                    continue;                        /* pressed: left alone */
                }
                /* **The cut is painted out and drawn again**, in this
                 * same walk from the last record down: on SAMPLE0 with
                 * line 5 pressed in, the original's calls are line 5 in
                 * colour 0, line 0 whole in colour 0, and then line 0's
                 * kept piece (161,170)-(161,139) white -- so the corner
                 * the two shared, (161,157), is white.  Cutting in place
                 * with no ink left it under line 5's erase. */
                /* 残す部分は**元の線を抜いて末尾に足す**（後ろの線から順に
                 * なので、末尾には後ろの線の残りが先に並ぶ）。範囲の印は
                 * 落ちる（測定：erase_range_out で枠の上辺・左辺の残りが
                 * 線 21・22、rest[2] は 0x00）。 */
                {
                    JwcLine keep = *l;

                    jwc_ink_note(d, 1, JW_INK_LINE, l);
                    jwc_remove_line(d, k);
                    keep.x0 = (float)ax;
                    keep.y0 = (float)ay;
                    keep.x1 = (float)bx;
                    keep.y1 = (float)by;
                    keep.rest[2] &= (unsigned char)~3u;
                    if (jwc_add_line(d, keep.x0, keep.y0, keep.x1, keep.y1,
                                     keep.type, keep.pen, keep.layer)) {
                        JwcLine *q = &d->lines[d->n_lines - 1];

                        *q = keep;
                        jwc_ink_note(d, 0, JW_INK_LINE, q);
                    }
                }
                changed = 1;
            } else if ((kind == JW_OUT_OUT) != flipped(c, JW_FLIP_LINE, k)) {
                jwc_remove_line(d, k);
                changed = 1;
            }
            continue;
        }
        if (jw_cmd_in_range(c, l->x0, l->y0, l->x1, l->y1)
            != flipped(c, JW_FLIP_LINE, k)) {
            jwc_remove_line(d, k);
            changed = 1;
        }
    }
    for (k = d->n_arcs - 1; k >= 0; k--) {
        const JwcArc *a = &d->arcs[k];
        const double m = a->r;

        if (in_reach_layer(d, a->layer)
            && (c->outside
                ? wholly_outside(c, a->cx - m, a->cy - m, a->cx + m, a->cy + m)
                : arc_in_range(c, a)) != flipped(c, JW_FLIP_ARC, k)) {
            jwc_remove_arc(d, k);
            changed = 1;
        }
    }
    for (k = d->n_texts - 1; k >= 0 && takes_text(c); k--) {
        const JwcText *t = &d->texts[k];

        if (in_reach_layer(d, t->layer)
            && (c->outside ? wholly_outside(c, t->x0, t->y0, t->x1, t->y1)
                           : jw_cmd_in_range(c, t->x0, t->y0, t->x1, t->y1))
               != flipped(c, JW_FLIP_TEXT, k)) {
            jwc_remove_text(d, k);
            changed = 1;
        }
    }
    c->pressed = 0;
    c->stage = 0;
    /* The hand-picked list goes with the range it belonged to.  Not measured
     * -- it cannot be: after the erase the entities it names are gone and the
     * ones behind them have moved down, so keeping it would point at the wrong
     * things.  It is the one line here that is reasoning rather than reading. */
    c->n_flip = 0;
    /* ③指定範囲 is not a setting that sticks: once ①実行 has run the original
     * writes its ordinary line back -- `◇消去範囲 始点指示 |①範囲内消去|…` --
     * so the next range is an ①範囲内消去 again.  Measured on SAMPLE0 with
     * `sh tools/span.sh 150 130 245 170`: the last thing the original puts on
     * the top line is that line and not 指定範囲's. */
    c->span = 0;
    c->with_text = 0;
    /* `読取可能データ無` goes when ①実行 runs: the original writes
     * `消去 再度(L)` over it.  Measured -- press somewhere with nothing there
     * and then ①実行, and the band beside the counts says 消去 再度(L), not
     * the complaint. */
    c->missed = 0;
    return changed;
}

/* 図形 ②読込: a figure is in hand and the road moves to 位置指示.
 *
 * Everything the placing is steered by starts again here -- the angle at
 * nought, ④ﾏｳｽ角 and ⑤仮表示 off, the two fields shut and what 前回と同じ
 * would use back at 90 degrees and 1,1 -- and the counts are remembered so
 * that jw_cmd_after can put the copies back on top. */
void jw_cmd_zukei_put(JwCmd *c, const Jwc *d)
{
    c->zukei = JW_ZUKEI_PUT;
    c->zukei_ang = 0.0f;
    c->zukei_mouse = 0;
    c->zukei_noghost = 0;
    c->zukei_ask = 0;
    c->zukei_typed[0] = 0;
    c->zukei_typed_n = 0;
    c->zukei_prev_ang = 90.0f;
    c->zukei_mx = 1.0f;
    c->zukei_my = 1.0f;
    c->n0_lines = d ? d->n_lines : 0;
    c->n0_arcs = d ? d->n_arcs : 0;
    c->n0_texts = d ? d->n_texts : 0;
}

/* 文編集【変更】の行（と書き換えた後の段 2）での数字。①基点 は
 * `文字基準点|① 確 定 |②横【左】|③横位置  0.0 |④縦【下】|⑤縦位置  0.0 |`
 * の盤で、② は 左→中→右、④ は 下→中→上 と回り、① で【変更】の行に戻る
 * （行の 基点（左下） が 基点（右中） などに変わる。測定：steps_table
 * `28 400 140 t 1 t 2 t 2 t 4 t 1`）。③・⑤ の欄はまだ。 */
int jw_cmd_te_digit(JwCmd *c, int n)
{
    /* ⑤位置整理：追加･除外 の段の ① は 範囲確定 で 始点指示 の段へ
     * （測定：steps_table）。範囲の段の ①前範囲・①レイヤ・②文字種、始点の段の
     * ①基点・②行間 はまだ（何もしない）。 */
    if (c->te5 && !c->te_sub) {
        if (n == 1 && c->pressed == 2 && c->stage == 3) {
            c->stage = 2;
        } else if (n == 1 && c->pressed == 2 && c->stage == 2) {
            c->te_sub = 1;      /* ①基点：同じ 文字基準点 の盤（kp8） */
        } else if (n == 2 && c->pressed == 2 && c->stage == 2) {
            c->te5_ask = 1;     /* ②行間：`変更 行間(0:現行間  1～100) =` */
            c->typing = 1;
            c->typed_n = 0;
            c->typed[0] = 0;
        }
        return 1;
    }
    /* ⑥文字種類変更：② で 変更無⇔有、③ で 無→横→縦→無（測定：steps_table
     * `28 t 6 t 3 t 3 t 3 t 2 t 2`）。升の無い数字は行を描き直して左の盤と
     * 升を下ろす（func_all textedit_s0_c6_v の `30`）。①範囲内変更 はまだ。 */
    if (c->top_item == 6 && c->te_pick < 0) {
        if (n == 2) {
            c->te6_layer ^= 1;
            c->te_plain = 0;        /* 盤と升も出し直す（tmp/te6c.txt） */
        } else if (n == 3) {
            c->te6_hv = (c->te6_hv + 1) % 3;
            c->te_plain = 0;
        } else if (n != 1) {
            c->te_plain = 1;
        }
        return 1;
    }
    if (n == 0) {
        return 0;
    }
    if (c->te_sub == 1) {
        if (n == 1) {
            c->te_sub = 0;
            c->te_panel = 0;
            if (c->te_ret) {
                c->top_item = c->te_ret;
                c->te_ret = 0;
            }
        } else if (n == 2) {
            c->te_bh = (c->te_bh + 1) % 3;
            c->te_panel = 1;
        } else if (n == 4) {
            c->te_bv = (c->te_bv + 1) % 3;
            c->te_panel = 1;
        }
        return 1;
    }
    if (c->te_sub) {
        return 0;
    }
    if (c->top_item == 1 || (c->stage == 2 && c->top_item == 0)) {
        if (n >= 1 && n <= 3) {
            c->te_sub = n;
            c->missed = 0;
            return 1;
        }
    }
    return 0;
}

/* 複写・移動 の ①前範囲：最後に閉じた範囲（本物も覚えている。無ければ空の範囲）。 */
static double prev_range[4];
static int prev_range_ok;

int jw_cmd_top(JwCmd *c, Jwc *d, int item, int right)
{
    int changed;

    c->meas_noind = 0;
    /* 寸法 ⑤寸法値 ③円周：円をマウス指示（測定：dim_s0_c5_v の `type 30`。円が取れた先は未実装）。 */
    if (c->command == 14 && c->stage == 0 && c->top_item == 5 && item == 3 && !c->dim5c) {
        c->dim5c = 1;
        c->dim5m = 0;
        c->top_item = 0;
        return 1;
    }
    /* 測定 ⑧文字列集計 ③指定文字：文字を打つ欄（測定：measure_s0_c8_v の `type 30`。打った先は未実装）。 */
    if (c->command == 15 && c->stage == 0 && c->top_item == 8 && item == 3 && !c->meas8) {
        c->meas8 = 1;
        c->meas8d = 0;
        c->ms8_n = 0;
        c->ms8_typed[0] = 0;
        c->top_item = 0;
        return 1;
    }
    /* 測定 ⑨式 ③三斜面積：単位の行（測定：measure_s0_c9_v の `type 30`。取った先は未実装）。 */
    if (c->command == 15 && c->stage == 0 && c->top_item == 9 && item == 3 && !c->meas9t) {
        c->meas9t = 1;
        c->top_item = 0;
        return 1;
    }

    /* 範囲の始点を持ったあとの (1)レイヤ・(2)線種色・(3)文字種 は `書込 … のみ選択` の札を出し入れする
     * （測定：move_s1_c1／erase_s1_c1・c2 の `type N`。帯はそのまま。文字種は消去だけの項目）。 */
    if ((JW_MOVE_CMD(c->command) || c->command == 25 || c->command == 17) && c->pressed == 1
        && !right && item >= 1 && item <= (c->command == 25 ? 3 : 2)) {
        c->range_opt = c->range_opt == item ? 0 : item;
        c->top_item = 0;
        c->top_right = 0;
        return 1;
    }
    /* 複写・移動 の始点の行の ①前範囲（測定：move_s0_c1 の `type 1`）：前の範囲を取って
     * 追加･除外 の段へ。前の範囲が無ければ空の範囲で、そのまま押しで線を足せる。 */
    if ((JW_MOVE_CMD(c->command) || (c->command == 24 && (c->lc_range || c->top_item == 3))
         || (c->command == 25 && c->span) || (c->command == 17 && c->hen_dbl)
         || (c->command == 27 && c->zukei == JW_ZUKEI_RANGE))
        && item == 1 && !right && !c->pressed && d && c->stage == 0) {
        if (c->command == 24) {
            c->lc_attr = c->lc_attr || c->top_item == 3;
            c->lc_range = 1;
        }
        c->top_item = 0;
        c->top_right = 0;
        if (prev_range_ok) {
            c->x0 = prev_range[0];
            c->y0 = prev_range[1];
            c->x1 = prev_range[2];
            c->y1 = prev_range[3];
        } else {
            c->x0 = c->x1 = -1e30;
            c->y0 = c->y1 = -1e30;
        }
        c->pressed = 2;
        c->stage = 3;
        c->n_flip = 0;
        c->n0_lines = d->n_lines;
        c->n0_arcs = d->n_arcs;
        c->n0_texts = d->n_texts;
        return 1;
    }

    /* The press belongs to whatever claims it.  A command that has been built
     * this far answers in cmd_top above and the table never sees the press;
     * one that has not leaves the screen as it was, and then src/item.h --
     * what the original wrote when the same cell was pressed there -- is put
     * over the line the menu item came up with.  See src/ui.c. */
    /* 文編集 移動・複写 の `文字を選んで下さい |①基点(左下)|②【任意】方向|`：① は 文字基準点 の盤、
     * ② は 任意⇔X軸（測定のみ・decomp 未確認：probe_item_walk wk_a2_1・a2_2）。 */
    if (c->command == 28 && (c->top_item == 2 || c->top_item == 3) && c->te_pick < 0 && !c->te_sub
        && c->stage == 0 && (item == 1 || item == 2)) {
        if (item == 1) {
            c->te_ret = c->top_item;
            c->te_sub = 1;
            c->te_panel = 0;
            c->top_item = 1;
        } else {
            c->te_dir = !c->te_dir;
        }
        return 1;
    }
    c->prev_top_item = c->top_item;
    c->top_item = 0;
    c->top_right = 0;
    c->te_pick = -1;    /* 文編集：項目を選び直すと選んだ文字も [ESC] も無くなる */
    c->te_esc = 0;
    c->te_plain = 0;
    c->tx_plain = 0;    /* 文字：升を選ぶと左の盤も描き直す（text_s0_c7_v） */
    c->dim8_plain = 0;
    /* ④円･角 の桁は別で、押しても [ESC] も帯の値も残ります（測定：①矢印
     * を押したあとも桁 1 の [ESC]、桁 18 の値、桁 62 の 書込角度 がそのまま
     * 書き直されます）。②円周 の ①端部 も同じ扱いにしてあります。 */
    /* ②円周 の `|②連続始点指示 (R) |`。**原作は画面を描き直すだけ**
     * です——`＊お待ち下さい＊` を出して全部描き直し、数え箱が
     * 引出し線の 2 本を数えた本当の数に追いつきます。行はそのまま、
     * 記録も増えず、そのあとの押しの答えも（円を選ぶ→始点→終点→
     * 引出し線→寸法線）押した順のまま変わりませんでした（測定：
     * 押した場合と押さない場合で画面 0 画素差、保存した .JWC も同じ
     * バイト数・同じ記録）。 */
    if (c->command == 14 && c->dim_arc == 1 && c->stage == 11
        && item == 2 && right) {
        c->dim_lines0 = d ? d->n_lines : 0;
        return 1;
    }
    if (c->command == 14 && ((c->dim_ck && c->stage == 9)
                             || (c->dim_arc && c->stage == 11))) {
        /* **数え箱は次の押しで追いつきます**——①端部 を押しただけ
         * でも、原作の 線数 は引出し線の 2 本を数えた数になります
         * （測定）。 */
        if (c->dim_arc && c->stage == 11) {
            c->dim_lines0 = d ? d->n_lines : 0;
        }
        changed = cmd_top(c, d, item);
        if (!changed && jw_ui_item_has(c->command, item, right)) {
            c->top_item = item;
            c->top_right = right;
            return 1;
        }
        return changed;
    }
    if (c->command == 24 && item == 2) {
        c->lc_off = !c->lc_off;     /* ②レイヤ変更 【有】⇔【無】（linechg_s0_c2） */
    }
    if (c->command == 19 && c->stage == 0) {
        c->pg_item = item;
    }
    c->dim_did = 0;      /* 項目を選び直すと [ESC] は消えます */
    c->dim_lines0 = d ? d->n_lines : 0;
    c->dim_only = 0;
    changed = cmd_top(c, d, item);
    if (!changed && jw_ui_item_has(c->command, item, right)) {
        c->top_item = item;
        c->top_right = right;
        /* 文編集 ⑤位置整理：`整理範囲  始点マウス指示 （文字）` から範囲。 */
        if (c->command == 28) {
            c->te5 = item == 5 && !right;
            c->pressed = 0;
            c->stage = 0;
            c->n_flip = 0;
        }
        return 1;
    }
    return changed;
}

/* Where 複線's copy goes: the line it was pointed at, moved `gap` millimetres
 * of paper towards the side the pointer is on.  Both ends move the same way,
 * so the copy is parallel and the same length.
 *
 * The interval is millimetres of paper, so it comes back to drawing units the
 * way the panel's lengths go the other way: `gap * unit_mm / denom`.  SAMPLE0's
 * line at y=157 with 10, 20 and 40 lands on 139, 122 and 87, which is that,
 * truncated (RESUME.md 4.12).
 *
 * A pointer exactly on the line goes to the +normal side, which for a line
 * drawn left to right is up the screen -- measured with the pointer put back
 * on the line at (400,157), which draws the copy at y=122, the same side as
 * a pointer above it. */
static int offset_ends(const JwCmd *c, const JwView *w, int sx, int sy,
                       double *ax, double *ay, double *bx, double *by,
                       double *side)
{
    double dx, dy, len, nx, ny, px, py, at, units;

    if (c->pick < 0) {
        return 0;
    }
    dx = c->lx1 - c->lx0;
    dy = c->ly1 - c->ly0;
    len = sqrt(dx * dx + dy * dy);
    if (len <= 0.0) {
        return 0;
    }
    nx = -dy / len;             /* the unit normal, either way along it */
    ny = dx / len;
    jw_cmd_at(w, sx, sy, &px, &py);
    at = (px - c->lx0) * nx + (py - c->ly0) * ny;
    if (at < 0.0) {
        nx = -nx;
        ny = -ny;
    }
    if (side) {
        side[0] = nx;
        side[1] = ny;
    }
    units = c->gap * c->per_mm;
    *ax = c->lx0 + nx * units;
    *ay = c->ly0 + ny * units;
    *bx = c->lx1 + nx * units;
    *by = c->ly1 + ny * units;
    return 1;
}

/* Where two lines, extended as whole lines, cross -- the baseline-to-baseline
 * check decomp calls out to (ovl7 0x2cd90, far 1bb4:3cd1) and, with the actual
 * copy lines instead of the baselines, the corner the R press joins.  Parallel
 * (or coincident) lines have no answer, same as the original leaves them. */
static int lines_cross(double p0x, double p0y, double p1x, double p1y,
                       double q0x, double q0y, double q1x, double q1y,
                       double *ix, double *iy)
{
    const double d0x = p1x - p0x, d0y = p1y - p0y;
    const double d1x = q1x - q0x, d1y = q1y - q0y;
    const double det = d0x * d1y - d0y * d1x;
    double t;

    if (det > -1e-9 && det < 1e-9) {
        return 0;
    }
    t = ((q0x - p0x) * d1y - (q0y - p0y) * d1x) / det;
    *ix = p0x + d0x * t;
    *iy = p0y + d0y * t;
    return 1;
}

/* 複線 の `● 前線と連続(R)`（RESUME 6 番、decomp ovl7 0x2cc46〜0x2ce00）：
 * 前の基準線 id が非 0・今の基準線 id が正・前の線の属性(rest[1])が 0xc0 を
 * 含まない・基準線同士の交点（1bb4:3cd1）が得られ画面内、の四つがすべて
 * 要る。まだ一本も複写していなければ off_prev_pick が -1 で常に出ない。 */
static int offset_can_continue(const JwCmd *c, const Jwc *d, const JwView *w)
{
    double ix, iy;
    int px, py;
    const JwcLine *prev, *now;

    if (c->off_prev_pick < 0 || c->off_prev_pick >= d->n_lines) {
        return 0;                           /* 前の基準線 id が非 0 */
    }
    if (c->pick < 0 || c->pick >= d->n_lines) {
        return 0;                           /* 今の基準線 id が正 */
    }
    prev = &d->lines[c->off_prev_pick];
    now = &d->lines[c->pick];
    if (prev->rest[2] & 0xc0) {   /* レコードのバイト +0x14 は rest[2]（r[20]）。rest[1] は +0x13 */
        return 0;                           /* 前の線の属性が 0xc0 を含む */
    }
    if (!lines_cross(prev->x0, prev->y0, prev->x1, prev->y1,
                     now->x0, now->y0, now->x1, now->y1, &ix, &iy)) {
        return 0;                           /* 平行で交点が無い */
    }
    at_screen(w, ix, iy, &px, &py);
    if (px < 0 || px > 639 || py < 0 || py > 479) {
        return 0;                           /* 交点が画面外 */
    }
    return 1;
}

/* R のトリム：線の端のうち交点に近いほうをそこへ動かす（③複線化 の角つなぎ
 * と同じ考え方。src/cmd.c の meet_at は原の線から角を計算し直すが、ここは
 * 複写後の線どうしをそのまま突き合わせる）。 */
static void trim_to(JwcLine *l, double ix, double iy)
{
    const double d0 = (l->x0 - ix) * (l->x0 - ix) + (l->y0 - iy) * (l->y0 - iy);
    const double d1 = (l->x1 - ix) * (l->x1 - ix) + (l->y1 - iy) * (l->y1 - iy);

    if (d0 <= d1) {
        l->x0 = (float)ix;
        l->y0 = (float)iy;
    } else {
        l->x1 = (float)ix;
        l->y1 = (float)iy;
    }
}

/* And the press that fixes it.  `r_continue` is R pressed while
 * offset_can_continue() said yes: besides placing the copy as usual, it
 * corner-joins (trims) this copy against the previous one
 * （RESUME 6 番：「R を押すと前の複写線との角つなぎ」）。 */
static int offset_line(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy,
                       int r_continue)
{
    double ax, ay, bx, by, side[2];
    long new_idx;

    if (!offset_ends(c, w, sx, sy, &ax, &ay, &bx, &by, side)) {
        return 0;
    }
    /* The copy is made with the pen and line type the drawing is *writing*
     * with, not the ones the line it was taken from has.  Measured: the copy
     * comes out colour 7 on SAMPLE0, whose writing pen is 2, and colour 5 on
     * SAMPLE1, whose writing pen is 1 -- and SAMPLE1's source line is white,
     * so it is not inheriting anything.  (The layer goes the same way for
     * want of a drawing that separates it: none of the fourteen has a line
     * worth copying off the layer it writes to.) */
    if (!jwc_add_line(d, (float)ax, (float)ay, (float)bx, (float)by,
                      (unsigned char)d->line_type, (unsigned char)d->pen,
                      (unsigned char)d->write_layer)) {
        return 0;
    }
    new_idx = d->n_lines - 1;
    /* rest[1] は元の線のもの（測定：SAMPLE0 の上の辺 0x41 の複線は 0x41）。 */
    if (c->pick >= 0 && c->pick < new_idx) {
        d->lines[new_idx].rest[1] = d->lines[c->pick].rest[1];
    }
    if (r_continue && c->off_prev_copy >= 0 && c->off_prev_copy < new_idx) {
        JwcLine *prevc = &d->lines[c->off_prev_copy];
        JwcLine *newc = &d->lines[new_idx];
        double ix, iy;

        if (lines_cross(prevc->x0, prevc->y0, prevc->x1, prevc->y1,
                        newc->x0, newc->y0, newc->x1, newc->y1, &ix, &iy)) {
            trim_to(prevc, ix, iy);
            trim_to(newc, ix, iy);
        }
    }
    /* この複写が次の「前の基準線」「前の複写線」になる。 */
    c->off_prev_pick = c->pick;
    c->off_prev_copy = new_idx;
    /* 「②連続」 puts another copy the same distance beyond this one, so what
     * it works from is the copy, not the line that was pointed at. */
    c->lx0 = ax; c->ly0 = ay; c->lx1 = bx; c->ly1 = by;
    c->nx = side[0]; c->ny = side[1];
    c->stage = 3;
    return 1;
}

/* A key while a command is asking for a number.  See cmd.h. */
/* How big the box 文字 draws round the string it is taking comes out. */
static void text_box(JwCmd *c, const Jwc *d)
{
    /* 文字 writes with the drawing's own character type; 文編集 keeps the
     * one the text it is changing already has -- that is the `3` its line
     * shows as `|種 3|Paste`. */
    int t = c->command == 28 && d && c->edit_text >= 0
            && c->edit_text < d->n_texts
            ? d->texts[c->edit_text].size
            : (d ? d->char_type : 1);

    if (t < 0 || t > 10) {
        t = 0;
    }

    c->text_wide = d ? jwc_text_length(d, c->typed, (unsigned char)t) : 0.0;
    c->text_tall = d ? d->text_h[t] / 10.0 * d->unit_mm : 0.0;
    /* 半角一字の幅（L 字の足の長さ）。 */
    c->text_half = d ? d->text_w[t] / 20.0 * d->unit_mm : 0.0;
}

/* How many bytes the last character of a Shift-JIS string takes.  Shift-JIS
 * cannot be walked backwards -- a trail byte can look like a lead byte -- so
 * this walks forward from the start, which is what the original's own field
 * must do too: [BS] after 「あい」 leaves 「あ」, not a lone 0x82. */
static int last_char_bytes(const char *s, int n)
{
    int i = 0, last = 0;

    while (i < n) {
        const unsigned char b = (unsigned char)s[i];
        const int two = ((b >= 0x81 && b <= 0x9f) || (b >= 0xe0 && b <= 0xfc))
                        && i + 1 < n;

        last = i;
        i += two ? 2 : 1;
    }
    return n - last;
}

static void divide_points(JwCmd *c, Jwc *d);

/* 点 ②距離の前回の距離（本物は DS:0x4e24 のグローバル、初期 1000）。 */
static double pt2_last_d = 1000.0;
double jw_cmd_pt2_last(void)
{
    return pt2_last_d;
}

/* 分割 ④の前回の分割数（本物の記憶は①②③と別で、初期値 10）。 */
static int div4_prev_n = 10;
int jw_cmd_div4_prev(void)
{
    return div4_prev_n;
}

/* 分割 ④：N-1 本の線を作る。A・B の線の端を、二線の交点から遠い端どうし・近い端どうしに
 * 組み、i/N ずつ内分した線を引く（測定：probe_divide の 5 例で一致、組み方は推測。B が点なら
 * 両端がその点で、A に平行な線になる）。 */
static void div4_make(JwCmd *c, Jwc *d, int n)
{
    const JwcLine A = d->lines[c->div4_a];
    double ix = 0.0, iy = 0.0, a0x, a0y, a1x, a1y, b0x, b0y, b1x, b1y;
    int i;

    c->div4_n = 0;
    if (c->div4_bpt) {
        b0x = b1x = c->div4_px;
        b0y = b1y = c->div4_py;
        if (!cross_at(&A, &A, &ix, &iy)) {
            ix = A.x0;
            iy = A.y0;
        }
        ix = A.x0;
        iy = A.y0;
        /* 点が相手のとき：A の両端を並べ替えない（0→1）。 */
        a0x = A.x0; a0y = A.y0; a1x = A.x1; a1y = A.y1;
    } else {
        const JwcLine B = d->lines[c->div4_b];
        double da0, da1, db0, db1;

        if (!cross_at(&A, &B, &ix, &iy)) {
            ix = (A.x0 + A.x1) / 2.0;
            iy = (A.y0 + A.y1) / 2.0;
        }
        da0 = hypot(A.x0 - ix, A.y0 - iy);
        da1 = hypot(A.x1 - ix, A.y1 - iy);
        db0 = hypot(B.x0 - ix, B.y0 - iy);
        db1 = hypot(B.x1 - ix, B.y1 - iy);
        if (da0 >= da1) { a0x = A.x0; a0y = A.y0; a1x = A.x1; a1y = A.y1; }
        else            { a0x = A.x1; a0y = A.y1; a1x = A.x0; a1y = A.y0; }
        if (db0 >= db1) { b0x = B.x0; b0y = B.y0; b1x = B.x1; b1y = B.y1; }
        else            { b0x = B.x1; b0y = B.y1; b1x = B.x0; b1y = B.y0; }
    }
    for (i = 1; i < n; i++) {
        const double t = (double)i / (double)n;

        if (jwc_add_line(d, (float)(a0x + (b0x - a0x) * t), (float)(a0y + (b0y - a0y) * t),
                         (float)(a1x + (b1x - a1x) * t), (float)(a1y + (b1y - a1y) * t),
                         (unsigned char)d->line_type, (unsigned char)d->pen,
                         (unsigned char)d->write_layer)) {
            d->lines[d->n_lines - 1].rest[1] = 0xf4;
            c->div4_n++;
        }
    }
    c->div4_made = c->div4_n > 0;
}

static int div4_accept(JwCmd *c, Jwc *d)
{
    int n = div4_prev_n;

    if (c->typed_n > 0) {
        n = (int)field_eval(c->typed);
    }
    c->typed_n = 0;
    c->typed[0] = 0;
    if (n < 2 || n > 10000) {
        return 1;
    }
    div4_prev_n = n;
    c->typing = 0;
    div4_make(c, d, n);
    c->div4 = 1;
    return 1;
}

/* 点を一つ足す：仮点は範囲 x∈[-500,1000] y∈[-300,800]、同じ位置の重複・100 個目以降は黙って足さない、
 * 実点は記録の点（decomp 0x30353／1bb4:35b8、測定：probe_pdist）。足せたら 1。 */
static int pt_drop(JwCmd *c, Jwc *d, double x, double y)
{
    if (c->pt_real) {
        JwcPoint p;

        memset(&p, 0, sizeof p);
        p.x = (float)x;
        p.y = (float)y;
        p.layer = (unsigned char)d->write_layer;
        p.rest[0] = (unsigned char)d->write_layer;
        p.rest[1] = 1;
        p.rest[3] = 0x1d;
        if (jwc_put_point(d, &p)) {
            c->pt_added++;
            c->pt_undo--;
            return 1;
        }
        return 0;
    } else {
        long k;
        const float fx = (float)x, fy = (float)y;

        if (fx < -500.0f || fx > 1000.0f || fy < -300.0f || fy > 800.0f) {
            return 0;
        }
        for (k = 0; k < d->n_temp; k++) {
            if (d->temp_x[k] == fx && d->temp_y[k] == fy) {
                return 0;
            }
        }
        if (d->n_temp >= JWC_TEMP_MAX || d->n_temp >= 100) {
            return 0;
        }
        d->temp_x[d->n_temp] = fx;
        d->temp_y[d->n_temp] = fy;
        d->n_temp++;
        c->pt_undo++;
        return 1;
    }
}

/* 点 ②：いまの合計距離の位置に点を作る（直進は P1→P2 の向き、円周は円弧の上）。 */
static int pt2_make(JwCmd *c, Jwc *d)
{
    const float tot = (float)c->pt2_total;

    c->pt2_bad = 0;
    if (!c->pt2_circ) {
        const double dx = (double)(float)c->pt2_x2 - (double)(float)c->pt2_x1;
        const double dy = (double)(float)c->pt2_y2 - (double)(float)c->pt2_y1;
        double len;
        float cs, sn;

        if (fabs(dx) + fabs(dy) < 0.001) {
            c->pt2_bad = 1;
            c->missed = 1;
            return 0;
        }
        len = sqrt(dx * dx + dy * dy);
        cs = (float)(dx / len);
        sn = (float)(dy / len);
        return pt_drop(c, d, (float)((double)cs * tot + (float)c->pt2_x1),
                       (float)((double)sn * tot + (float)c->pt2_y1));
    }
    if (c->pt2_arc >= 0 && c->pt2_arc < d->n_arcs) {
        const JwcArc *a = &d->arcs[c->pt2_arc];
        const double dx = (double)(float)c->pt2_x1 - a->cx;
        const double dy = (double)(float)c->pt2_y1 - a->cy;
        double th;

        if (dx == 0.0 && dy == 0.0 || a->r <= 0.0f) {
            return 0;
        }
        th = atan2(dy, dx) + (double)tot / a->r;
        return pt_drop(c, d, (float)(cos(th) * a->r + a->cx),
                       (float)(sin(th) * a->r + a->cy));
    }
    return 0;
}

/* 距離の欄の確定（Enter か、左右どちらの押しでも。空なら前回値）。|値| が 9.0072e7 以上は黙って欄に戻る。 */
static int pt2_accept(JwCmd *c, Jwc *d)
{
    double v = pt2_last_d;
    double zs;
    static const double PAPER[5] = { 1189.0, 841.0, 594.0, 420.0, 297.0 };

    if (c->typed_n > 0) {
        v = field_eval(c->typed);
    }
    c->typed_n = 0;
    c->typed[0] = 0;
    if (fabs(v) >= 9.0072e7) {
        return 1;
    }
    pt2_last_d = v;
    zs = PAPER[d->paper >= 0 && d->paper <= 4 ? d->paper : 4] / 518.0 * d->denom;
    c->pt2_step = (float)(v / (zs > 0.0 ? zs : 1.0));
    c->pt2_total = c->pt2_step;
    c->typing = 0;
    if (!c->pt2_circ) {
        c->pt2 = 2;
        return 1;
    }
    pt2_make(c, d);
    c->pt2 = 0;
    return 1;
}

/* 多角形 ①：A・B から d1・d2 だけ離れた点 C を出して、A→C と B→C を引く（decomp ovl22
 * 0x2d182 以降。a=d1/s、b=d2/s、p=((a*a-b*b)+L*L)/L*0.5、h=sqrt(a*a-p*p)、矢が AB の左なら +h。
 * s は紙 mm あたりの図面量の逆数）。 */
static void pg1_make(JwCmd *c, Jwc *d, double mx, double my);

/* 寸法の欄の確定：`d1` か `d1,d2`（一つなら d2=d1）、空なら前回値。0<d<=999999 で
 * d1+d2 が AB の紙 mm より大きいときだけ受ける（decomp 0x2cebe〜0x2d182）。 */
static int pg1_accept(JwCmd *c, const Jwc *d, int use_prev)
{
    double d1 = c->pg1_pd[0], d2 = c->pg1_pd[1];
    const double per = d->unit_mm > 0.0f ? d->unit_mm / d->denom : 1.0;
    const double dx = c->pg1_bx - c->pg1_ax, dy = c->pg1_by - c->pg1_ay;
    const double ab = sqrt(dx * dx + dy * dy) / per;

    if (!use_prev && c->typed_n > 0) {
        const char *t = c->typed;
        char *e;

        d1 = strtod(t, &e);
        if (*e == ',' || *e == ';') {
            d2 = strtod(e + 1, 0);
        } else {
            d2 = d1;
        }
    }
    c->typed_n = 0;
    c->typed[0] = 0;
    if (!(d1 > 0.0 && d1 <= 999999.0 && d2 > 0.0 && d2 <= 999999.0
          && d1 + d2 > ab)) {
        return 1;
    }
    c->pg1_pd[0] = d1;
    c->pg1_pd[1] = d2;
    c->typing = 0;
    c->pg1 = 4;
    return 1;
}

static void box_unhold(JwCmd *c);
int jw_cmd_key(JwCmd *c, Jwc *d, int key)
{
    static const double F[5] = { 1000.0, 100.0, 200.0, 300.0, 500.0 };

    /* 円線接 の ③接円(3条件) の行（段 50）の [BS]`前項` は [ESC] と同じ（測定のみ：tmp の ee6）。 */
    if (c->command == 26 && key == 8 && !c->typing && (c->stage == 50 || c->stage == 1)) {
        c->stage = 0;               /* 円線接 の ③接円(3条件) の行の [BS]`前項` は最初の行へ（[ESC] は何もしない。測定：tmp の ee6・ee7） */
        c->tan_tri = 0;
        c->top_item = 0;
        return 1;
    }
    if (c->command == 26 && key == 8 && !c->typing && c->stage == 16) {
        c->stage = 1;
        c->tan_kind = 0;               /* ①接線 の ②円周点 の [BS]`前項` は ①接線 の行へ（測定のみ：escfz_e_31） */
        return 1;
    }
    /* 線変更 で一本変えたあとの [ESC] は最初の行（段 0）へ（測定のみ・decomp 未確認：escfz_w_24）。 */
    if (key == 27 && c->command == 24 && !c->typing && c->stage == 1 && !c->pressed && !c->lc_range && c->top_item != 3 && c->top_item != 1
        && c->hit_kind) {
        c->stage = 0;
        c->hit_kind = 0;
        return 1;
    }
    /* ③接円(3条件) の ①３点 の第 2・第 3 の点（段 45・46）の [ESC] は一つ前の点へ（測定のみ：escfz_e_47）。 */
    if (c->command == 26 && key == 27 && !c->typing && (c->stage == 45 || c->stage == 46)) {
        c->stage--;
        c->missed = 0;
        return 1;
    }
    /* ④接楕円 の第 2 の辺（段 62）の [ESC] は第 1 の辺（段 61）へ（測定のみ：escfz_e_41）。 */
    if (c->command == 26 && key == 27 && !c->typing && c->stage == 62) {
        c->stage = 61;
        c->missed = 0;
        return 1;
    }
    /* 円線接 の ②１点１線・③１円１点・①１線１円 の二つ目の指示の段（33・37・41）の [ESC] は一つ目の段へ
     * （測定のみ・decomp 未確認：escfz_e_40）。 */
    if (c->command == 26 && key == 27 && !c->typing && c->tan_on
        && (c->stage == 33 || c->stage == 37 || c->stage == 41)) {
        c->stage--;
        c->missed = 0;
        return 1;
    }
    /* ④角度指定 の角度の欄（段 12）の [ESC] は ①接線 の行（段 1）へ（測定のみ：escfz_e_49）。 */
    if (c->command == 26 && key == 27 && c->typing && c->tan_on && c->stage == 12) {
        c->typing = 0;
        c->typed[0] = 0;
        c->typed_n = 0;
        c->stage = 1;
        c->tan_kind = 0;
        return 1;
    }
    /* 円線接 の ①接円半径 の欄の [ESC] は打ちかけを捨てて一つ前の段へ（測定のみ：escfz_e_35）。 */
    if (c->command == 26 && key == 27 && c->typing && c->tan_on
        && (c->stage == 26 || c->stage == 35 || c->stage == 39 || c->stage == 43)) {
        c->typing = 0;
        c->typed[0] = 0;
        c->typed_n = 0;
        c->stage = c->stage == 26 ? 24 : c->stage == 35 ? 32 : c->stage == 39 ? 36 : 40;
        return 1;
    }
    /* 円線接：行の下の段の [BS]`前項` は、その行へ一段戻る（測定のみ・decomp 未確認：escfz_e_31・e_36）。
     * 30 の行（②接円）は 31〜49、50 の行（③接円）は 51〜69、1 の行（①接線）は 10〜29 の子。 */
    if (c->command == 26 && key == 8 && !c->typing) {
        const int st = c->stage;

        if (st == 30) {
            c->stage = 0;
            c->tan_tri = 0;
            c->tan_on = 0;
            c->tan_circ = 0;
            c->top_item = 0;
            return 1;
        }
        if (st > 30 && st < 50) {
            c->stage = 30;
            c->missed = 0;
            return 1;
        }
        if (st == 57) {
            c->stage = 0;
            c->tan_tri = 0;
            c->tan_on = 0;
            c->top_item = 0;
            return 1;
        }
        if (st > 57 && st < 70) {
            c->stage = 57;
            c->missed = 0;
            return 1;
        }
        if (st > 50 && st < 70) {
            c->stage = 50;
            c->missed = 0;
            return 1;
        }
        if (st >= 10 && st < 30 && st != 30) {
            c->stage = 1;
            c->tan_kind = 0;
            c->missed = 0;
            return 1;
        }
    }
    /* 円線接 の途中の段の [BS]`前項` は [ESC] と同じ一段戻り（測定のみ：fuzz_esc2 の escfz_e）。 */
    if (c->command == 26 && key == 8 && !c->typing && c->stage >= 2) {
        key = 27;
    }
    /* 寸法 ⑤③円周の行：ESC で ⑤ の項目の行へ。ほかの鍵は何もしない。 */
    if (c->command == 14 && c->dim5c) {
        c->dim5m = 0;               /* [ESC] は札を消すだけで行はそのまま（測定：dim_s0_c5_v） */
        return 1;
    }
    /* 寸法 ④③角度：原点を聞く行での [ESC] は行そのままで `点`・`度` の札だけが消える（測定：dim_s0_c4_v）。 */
    if (key == 27 && c->command == 14 && c->dim_arc == 2 && c->stage == 11 && !c->dim_did
        && !c->typing) {
        c->dim_arc_quiet = 1;
        return 1;
    }
    /* 寸法 ④①円径 の [ESC]：行はそのままで 書込角度の札だけが消える（測定：dim_s0_c4）。 */
    if (key == 27 && c->command == 14 && c->dim_ck && c->stage == 9) {
        c->dim_ck_gone = 1;
        return 1;
    }
    /* 曲線 ③ｽﾌﾟﾗｲﾝ の [ESC]：最後の点を一つ取り消す（点残数が戻り、折れ線は残った点で描き直す。測定：curve_s0_c3）。 */
    if (key == 27 && c->command == 23 && c->spl && c->stage >= 31 && c->stage <= 33 && c->spl_n > 0) {
        c->spl_n--;
        c->spl_vis = 0;
        c->spl_miss = 0;
        c->stage = 30 + (c->spl_n > 3 ? 3 : c->spl_n);
        return 1;
    }
    /* 寸法 ⑧値変で [Enter] を打つと行と左の盤が描き直される（測定：dim_s0_c8_v）。 */
    if (c->command == 14 && c->stage == 7 && (key == 13 || key == 10)) {
        c->dim8_plain = 0;
    }
    /* 測定の最初の行の ESC：単位・桁の帯が消える（測定のみ・decomp 未確認）。 */
    if (key == 27 && c->command == 15 && c->stage == 0 && !c->top_item && !c->meas2 && !c->meas3
        && !c->meas4 && !c->meas5 && !c->meas9 && !c->meas9t && !c->meas8 && !c->meas_arc) {
        c->meas_noind = 1;
        return 1;
    }
    /* 測定 ①距離 の [ESC]：最後の点を一つ取り消し、累計と最後の脚を残った
     * 点列から数え直す。一点だけになったら `始点指示` の段に戻り、それが
     * 最初の点なら更に [ESC] で測定の最初の行へ（測定：tmp/m2.txt）。 */
    if (key == 27 && c->command == 15 && c->stage == 1 && c->meas_n > 0
        && d && !c->meas_put && !c->meas_arc) {
        const double mm = d->unit_mm > 0.0f ? d->denom / d->unit_mm : 1.0;
        int k;

        c->meas_n--;
        if (c->meas_n == 0) {
            c->stage = 0;
            c->meas_total = 0.0;
            c->meas_last = 0.0;
            c->top_item = 1;        /* `[ESC]・距離 ◇ 始点指示 … [BS]前項` */
            c->top_right = 0;
            return 1;
        }
        c->meas_total = 0.0;
        c->meas_last = 0.0;
        for (k = 1; k < c->meas_n; k++) {
            const double dx = c->meas_px[k] - c->meas_px[k - 1];
            const double dy = c->meas_py[k] - c->meas_py[k - 1];

            c->meas_last = sqrt(dx * dx + dy * dy) * mm / 1000.0;
            c->meas_total += c->meas_last;
        }
        c->meas_x = c->meas_px[c->meas_n - 1];
        c->meas_y = c->meas_py[c->meas_n - 1];
        return 1;
    }

    /* 変形 の最初の行（5 項目）で ① を選ぶ。本物のメイン（decomp ovl11 3ab8:305f、
     * 02dcbd の読み）は項目を [bp-0x70]、押したボタンを [bp-0xa] で受け、どちらかが 1 なら
     * ①パラメトリック変形（02dd58）。押した点は使わず、範囲の始点は次の押し。 */
    if (c->command == 17 && key == '1' && !c->pressed && !c->again
        && !c->hen_env && !c->hen_dbl && !c->hen_kigou) {
        c->again = 1;
        return 1;
    }
    /* 図形 ①登録 の範囲の始点の行での [ESC] は 図形 の最初の行へ戻す
     * （測定：func_all zukei_plain の最後の [ESC]）。 */
    if (key == 27 && c->command == 27 && c->zukei == JW_ZUKEI_RANGE
        && !c->pressed) {
        c->zukei = 0;
        c->stage = 0;
        c->top_item = 0;
        c->top_right = 0;
        if (c->zukei_blank) {
            c->zukei_blank = 2;     /* 戻ったあとは枠の左の辺だけ残る（測定のみ：zukei_s0_c2・c5 の ESC） */
        }
        return 1;
    }

    /* ハッチ枠の [ESC]：取った線を一本ずつ戻す（残数は戻らない）。最後の
     * 一本を戻すと残数も 100 に戻って最初の行（測定：tmp/h6.txt h_e1〜e4）。 */
    if (key == 27 && c->command == 18 && c->hatch_n > 0 && !c->hatch_closed) {
        c->hatch_n--;
        if (c->hatch_n == 0) {
            c->hatch_used = 0;
            c->pressed = 0;
            c->stage = 0;
        } else {
            c->stage = c->hatch_n < 3 ? c->hatch_n : 3;
        }
        c->missed = 0;
        return 1;
    }
    /* 点【実点】：升の無い数字（0・6〜9）は行を描き直して `F1～F6 Pen No1` の札を消す
     * （測定のみ・decomp 未確認：escfz_v_10、tmp の vq2）。 */
    if (c->command == 22 && c->pt_delall && key == 27) {
        c->pt_delall = 0;
        c->top_item = 5;
        return 1;
    }
    /* 点【実点】の [BS]・[Enter] も札を消す（測定のみ：escfz_v_8・v_10）。 */
    if (c->command == 22 && c->pt_real && !c->typing && (key == 8 || key == 13 || key == 10)
        && c->pt_mode == 0 && (c->top_item == 1 || c->stage == 1)) {
        c->pt_plain = 1;
        return 1;
    }
    /* 点【実点】の [ESC] も行を描き直して札を消す（測定のみ・decomp 未確認：escfz_v_15）。 */
    if (c->command == 22 && c->pt_real && !c->typing && key == 27 && c->stage == 1 && c->top_item == 1) {
        c->pt_plain = 1;
        c->stage = 0;
        return 1;
    }
    if (c->command == 22 && c->pt_real && !c->typing && key >= '0' && key <= '9'
        && (key == '0' || key >= '6') && c->stage <= 1) {
        c->pt_plain = 1;
        return 1;
    }
    if (c->command == 18 && !c->hatch_closed
        && ((key == 27 && c->hatch_n == 0)
            || (key >= '0' && key <= '9' && (c->hatch_n < 2 || key != '1'))
            || key == 13 || key == 10)) {
        /* 升の無い数字・取るものが無い [ESC] は 残数 を消して行を描き直す
         * だけ。[Enter] はそれを戻す（測定：h_n1・h_n2・h_e4、
         * hatch_s0_c1_v）。 */
        c->hatch_plain = (key != 13 && key != 10);
        return 1;
    }

    /* 文編集 ⑥文字種類変更 の [ESC]：左の盤（ﾍﾟﾝ2 基点）と 変更無・無 の升が
     * 下りて数え箱に戻る。行はそのまま（測定：func_all textedit_s0_c6）。 */
    if (key == 27 && c->command == 28 && c->top_item == 6 && !c->te_plain) {
        c->te_plain = 1;
        c->missed = 0;
        return 1;
    }
    /* ⑤位置整理 の範囲の始めの [Enter] は、何も選ばずに 追加･除外 の段へ
     * （測定：func_all textedit_s0_c5_v。前の範囲が無いときの ①前範囲 と
     * 同じものかは未確認）。 */
    if ((key == 13 || key == 10) && c->command == 28 && c->te5
        && !c->pressed && !c->typing && d) {
        c->x0 = c->x1 = -1e30;
        c->y0 = c->y1 = -1e30;
        c->pressed = 2;
        c->stage = 3;
        c->n0_lines = d->n_lines;
        c->n0_arcs = d->n_arcs;
        c->n0_texts = d->n_texts;
        return 1;
    }
    /* ⑥ の [Enter] は行を描き直して盤と升を出し直す（c6_v）。 */
    if ((key == 13 || key == 10) && c->command == 28 && c->top_item == 6
        && !c->typing && !c->typing_text) {
        c->te_plain = 0;
        return 1;
    }

    /* ＋・／ も同じ：始点を捨てて `確定長さ` の行に戻ったところでもう一度
     * [ESC] なら、最後の線を黒で消してその始点を持った `◆終点指示` へ
     * （測定：func_all plus_plain）。 */
    if (key == 27 && (c->command == 2 || c->command == 3) && c->line_esc_back
        && !c->pressed && !c->typing) {
        long k;

        for (k = 0; k < c->undo_lines && d && d->n_lines > 0; k++) {
            jwc_remove_line(d, d->n_lines - 1);
        }
        c->undo_lines = 0;
        c->line_esc_back = 0;
        c->line_done = 0;
        c->fix_mode = 0;
        c->fix_done = 0;
        c->pressed = 1;
        c->stage = 1;
        return 1;
    }
    if (c->command == 2 || c->command == 3) {
        c->line_esc_back = 0;
    }
    /* □：始点を捨てて描いたあとの行に戻ったところで、もう一度 [ESC] なら
     * 最後の四角を取り消して、その始点を持った `終点指示` へ戻る（測定：
     * func_all box_plain）。 */
    if (key == 27 && c->command == 4 && c->box_esc_back && !c->pressed
        && !c->typing) {
        long k;

        /* 最後に描いた四角を取り消す（四角は消え、始点はそのまま）。 */
        for (k = 0; k < c->undo_lines && d && d->n_lines > 0; k++) {
            jwc_remove_line(d, d->n_lines - 1);
        }
        /* 描き直さない：重なっていた前の四角の辺にも穴が残る（測定）。 */
        c->undo_lines = 0;
        c->box_drawn = 0;
        c->box_esc_back = 0;
        c->pressed = 1;
        c->stage = 1;
        return 1;
    }
    if (c->command == 4) {
        c->box_esc_back = 0;
    }

    /* 手書線の [ESC]：一筆の途中なら始点を捨てて `始点指示`（[ESC] の無い
     * 行）へ。矢が動いても引かない（測定：curve_s0_c5）。 */
    /* ⑦連線 の [ESC]：押し一回ぶんずつ戻る（その押しで足した線と角の弧も
     * 消える。測定：func_all curve_s0_c7 で 33|16 → 32|15 → 31|14）。 */
    if (c->command == 23 && c->poly && key == 27 && c->pu_n > 0 && d
        && c->poly_n >= 2) {
        c->pu_n--;
        while (d->n_arcs > c->pu[c->pu_n].na) {
            jwc_remove_arc(d, d->n_arcs - 1);
        }
        while (d->n_lines > c->pu[c->pu_n].nl) {
            jwc_remove_line(d, d->n_lines - 1);
        }
        jwc_ink_clear(d);
        c->poly_n = c->pu[c->pu_n].n;
        c->poly_px = c->pu[c->pu_n].px;
        c->poly_py = c->pu[c->pu_n].py;
        c->poly_ax = c->pu[c->pu_n].ax;
        c->poly_ay = c->pu[c->pu_n].ay;
        c->poly_dx = c->pu[c->pu_n].dx;
        c->poly_dy = c->pu[c->pu_n].dy;
        c->poly_sx = c->pu[c->pu_n].sx;
        c->poly_sy = c->pu[c->pu_n].sy;
        return 1;
    }
    /* 連続弧の [ESC]：最後に足した一本を取り消して、その前の端と向きへ
     * （測定：func_all curve_s0_c6 で 16 → 15 → 14、一本目は残る——これは
     * 「2 回目の [ESC] まで」しか押していなかったときの話だった）。
     * ch_n が 0 まで減ったら、それは一本目を足す前（stage 52 のところで
     * ch_undo[0] に nl/na だけ控えてある）まで戻ったということ。resume
     * する向き・端は無い（一本目より前には何も無い）ので、連続弧そのもの
     * から抜ける（測定：func_all curve_s1_c6 の末尾、1 回目の [ESC] で
     * 二本目が消え、2 回目の [ESC] で一本目も消えて、連続弧の外へ出る。
     * decomp 未確認・測定のみ）。 */
    /* ⑥連続弧 の始めの段の [ESC] は一つ前の段へ（測定のみ・decomp 未確認：escfz_r_25・r_27）。 */
    if (c->command == 23 && c->chain && key == 27 && !c->typing
        && (c->stage == 51 || c->stage == 52 || c->stage == 55)) {
        c->stage = c->stage == 52 ? 51 : 50;
        return 1;
    }
    if (c->command == 23 && c->chain && key == 27 && c->stage == 53
        && c->ch_n > 0 && d) {
        c->ch_n--;
        while (d->n_arcs > c->ch_undo[c->ch_n].na) {
            jwc_remove_arc(d, d->n_arcs - 1);
        }
        while (d->n_lines > c->ch_undo[c->ch_n].nl) {
            jwc_remove_line(d, d->n_lines - 1);
        }
        jwc_ink_clear(d);
        if (c->ch_n == 0) {
            c->chain = 0;
            c->stage = 0;
            return 1;
        }
        c->ch_px = c->ch_undo[c->ch_n].px;
        c->ch_py = c->ch_undo[c->ch_n].py;
        c->ch_cx = c->ch_undo[c->ch_n].cx;
        c->ch_cy = c->ch_undo[c->ch_n].cy;
        c->ch_tx = c->ch_undo[c->ch_n].tx;
        c->ch_ty = c->ch_undo[c->ch_n].ty;
        return 1;
    }
    /* ①②③④⑥ の最初の行（段 10・40・30・50）の [BS]`前項` も曲線の最初の行へ
     * （測定のみ・decomp 未確認：escfz_r_24）。 */
    if (c->command == 23 && key == 8 && !c->typing && !c->poly && !c->hand
        && ((c->sine == 1 && c->stage == 10) || (c->sine == 3 && c->stage == 40)
            || (c->stage == 30 && (c->spl || c->chain)) || c->stage == 50)) {
        c->sine = 0;
        c->spl = 0;
        c->chain = 0;
        c->stage = 0;
        c->top_item = 0;
        return 1;
    }
    /* ⑤手書線 の始点の行の [BS]`前項` は曲線の最初の行へ（測定のみ・decomp 未確認：escfz_r_22）。 */
    if (c->command == 23 && c->hand && key == 8 && c->stage == 60 && c->hand_n == 0 && !c->typing) {
        c->hand = 0;
        c->hand_did = 0;
        c->stage = 0;
        c->top_item = 0;
        return 1;
    }
    if (c->command == 23 && c->hand && key == 27
        && (c->stage == 60 || c->stage == 61)) {
        /* 区間があれば最後の一本を取り消し、その始点から一筆を続ける
         * （一筆を終えたあとでも。測定：curve_s1_c5 で 33 → 32、行は
         * `終点指示`、矢を動かすとまたそこから引く）。 */
        if (c->hand_n > 0 && d && d->n_lines > 0) {
            c->hand_n--;
            jwc_remove_line(d, d->n_lines - 1);
            c->hand_x = c->hand_px[c->hand_n];
            c->hand_y = c->hand_py[c->hand_n];
            c->hand_sx = c->hand_psx[c->hand_n];
            c->hand_sy = c->hand_psy[c->hand_n];
            c->stage = 61;
            return 1;
        }
        c->stage = 60;
        c->hand_did = 0;
        return 1;
    }

    /* [F2] while 消去 is asking 追加･除外: **the selection goes**.  Measured:
     * on SAMPLE0 with (150,130)-(245,170) the 224 red pixels go back to their
     * own colours and ①範囲 確定 → ①実行 then deletes nothing at all (the
     * counts stay at 30|13); on SAMPLE6 the same, 182 pixels.  Pressing it a
     * second time brings nothing back, and [F1] and [F3] to [F10] do nothing
     * at any time -- they are the attribute keys JW_VER.DOC describes, and
     * those only work with the `-L6` option, which is not on here.
     *
     * A press afterwards *adds*: on SAMPLE0, pressing (197,157) after [F2]
     * turns 70 white pixels red.  So the range's answer is thrown away and
     * the presses build a new set up from nothing, which is exactly
     * `cleared` plus the flip list this already keeps. */
    /* 文字's field takes a string, not a number.  [Enter] writes the text and
     * the command starts again -- the original puts the counts back and
     * rewrites its own line, which is stage 0. */
    if (c->typing_text) {
        if ((key == 13 || key == 10) && c->command == 28) {
            /* 文編集: the text it was pointed at is rewritten, which moves
             * it to the back whether or not anything was typed.  The line
             * goes back to the one the item came up with, `[ESC]` in front --
             * src/typed.h, stage 2. */
            if (d && c->edit_text >= 0 && c->edit_text < d->n_texts) {
                jwc_edit_text_at(d, c->edit_text, c->typed,
                                 c->te_bh, c->te_bv);
            }
            c->typing_text = 0;
            c->pressed = 0;
            c->edit_text = -1;
            c->stage = 2;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->typed_at = 0;
            return 1;
        }
        /* 文字 の欄の [ESC] は、打った字があれば [Enter] と同じに書き込んで
         * 次の基点の行へ（測定：text_esc、`AB` を打って [ESC] で AB が
         * 書かれ、行は `[ESC]・文字種類[F3] 基点指示…`）。 */
        if (key == 27 && c->command == 13 && c->typed_n > 0) {
            key = 13;
        }
        /* 空の欄の [ESC] は欄を閉じて `基点指示` の行へ（押しで閉じたのと
         * 同じ。測定：func_all text_plain の 12 段目）。 */
        if (key == 27 && c->command == 13 && c->typed_n == 0
            && !c->text_rep) {
            c->typing_text = 0;
            c->pressed = 0;
            c->stage = 2;
            c->top_item = c->tx_count > 0 ? 0 : 1;
            c->top_right = 0;
            return 1;
        }
        /* 連続書 は空の欄の [Enter] か [ESC] で抜けて、ふつうの段 2 へ
         * （測定：text_rep2_empty、text_rep2_keep）。 */
        if (c->command == 13 && c->text_rep && c->typed_n == 0
            && (key == 13 || key == 10 || key == 27)) {
            c->typing_text = 0;
            c->pressed = 0;
            c->text_rep = 0;
            c->stage = 2;
            return 1;
        }
        if (key == 13 || key == 10) {
            const unsigned char size = (unsigned char)(d ? d->char_type : 1);
            const unsigned char layer =
                (unsigned char)(d ? (d->write_layer) : 0);

            c->typing_text = 0;
            c->pressed = 0;
            /* The line it leaves is not the one it started with: `[ESC]` goes
             * in front and the right-hand half becomes
             * `基点指示(L)free(R)Read|①基点変|②行連続|③列連続|` -- it is
             * asking where the next string goes.  src/typed.h, stage 2. */
            c->stage = 2;
            if (c->typed_n > 0 && d) {
                /* The far end follows from the string and the character type
                 * -- see jwc_text_length.  ①水平 lays the baseline along +x
                 * and ②垂直 along **+y**, so a vertical string runs *up* from
                 * the point that was pressed and jw_view draws it with the
                 * turned routine.  ③角度指定 is not done. */
                const double len = jwc_text_length(d, c->typed, size);
                /* ③角度指定 の角度で基線を回す（測定：30 度で `AB` の終わりが
                 * (+4.909,+2.834)）。 */
                const double ar = c->text_ang * 3.14159265358979323846 / 180.0;
                const double ex = c->text_vert ? 0.0
                                : c->text_ang != 0.0 ? len * cos(ar) : len;
                const double ey = c->text_vert ? len
                                : c->text_ang != 0.0 ? len * sin(ar) : 0.0;

                if (jwc_add_text(d, (float)c->x0, (float)c->y0,
                                 (float)(c->x0 + ex),
                                 (float)(c->y0 + ey),
                                 c->typed, size, layer)) {
                    if (c->text_tate) {
                        d->texts[d->n_texts - 1].rest[2] |= 0x20;
                    }
                    c->tx_undo = 1;
                    c->tx_count++;
                }
            }
            if (c->text_rep && c->typed_n > 0 && d) {
                /* 連続書：次の基点は 間隔 mm だけ下（行）か右（列）。欄は
                 * 開いたまま（測定：5.0 で 8.721 下、20.0 で 34.882 右）。 */
                static const double PAPER[5] = { 1189.0, 841.0, 594.0, 420.0,
                                                 297.0 };
                const double per = d->paper >= 0 && d->paper < 5
                                 ? 518.0 / PAPER[d->paper] / d->denom
                                 : d->unit_mm / d->denom;

                if (c->text_rep == 2) {
                    c->y0 -= c->rep_gap[0] * per;
                } else {
                    c->x0 += c->rep_gap[1] * per;
                }
                c->typing_text = 1;
                c->pressed = 1;
                c->stage = 1;
                c->typed[0] = 0;
                c->typed_n = 0;
                c->typed_at = 0;
                text_box(c, d);
                return 1;
            }
            c->typed[0] = 0;
            c->typed_n = 0;
            c->typed_at = 0;
            return 1;
        }
        if (key == 8) {
            /* [BS] takes a whole character, not a byte: 「あいA」 goes to
             * 「あい」 then 「あ」 then empty.  Measured by sending the
             * Shift-JIS bytes straight at the original and reading the echo
             * it puts at column 1 of row 2. */
            if (c->typed_at > 0) {
                const int w = last_char_bytes(c->typed, c->typed_at);

                memmove(c->typed + c->typed_at - w, c->typed + c->typed_at,
                        (size_t)(c->typed_n - c->typed_at + 1));
                c->typed_at -= w;
                c->typed_n -= w;
            }
            text_box(c, d);
            return 1;
        }
        /* Anything a keyboard or a Japanese front-end can send.  The original
         * takes the two bytes of a double-byte character as two ordinary keys
         * -- that is all a DOS/V FEP does, and the port's browser front end
         * sends the same bytes out of the OS's own input method.  **The two
         * have to arrive together**: with six million instructions between
         * them the original throws the second away and keeps a lone lead byte
         * (that is how 「あ」 first came out as one byte 0x82). */
        if (key >= 0x20 && key != 0x7f && key <= 0xff
            && c->typed_n < (int)sizeof c->typed - 1) {
            /* At the cursor, not at the end: 文字 starts with an empty field
             * so the two are the same there, and 文編集 starts with the text
             * it was pointed at and the cursor in front of it. */
            memmove(c->typed + c->typed_at + 1, c->typed + c->typed_at,
                    (size_t)(c->typed_n - c->typed_at + 1));
            c->typed[c->typed_at++] = (char)key;
            c->typed_n++;
            text_box(c, d);
            return 1;
        }
        return 1;               /* the field has the keyboard until [Enter] */
    }
    /* **欄の中の [ESC]** は欄を閉じて元の行に戻るだけ（測定：／ の ②寸法
     * で 50 を打って [ESC] → `・◇始点指示 … |⑤垂 直 |`、何も固定しない）。 */
    /* 文字 の取り消し：書いたあとの [ESC] は最後の文字を消します（測定：
     * `ABC` と `12` を書いて [ESC] で `12` だけ消える）。一回だけ。 */
    /* 文字 ⑤文書 の書出範囲の [ESC]：範囲の途中なら始点の行へ、始点の行
     * なら 文書 の行へ（測定：text_s0_c5 の二つの [ESC]）。 */
    if (key == 27 && c->command == 13 && c->tx_doc) {
        if (c->pressed) {
            c->pressed = 0;
            c->stage = 0;
            c->n_flip = 0;
        } else {
            c->tx_doc = 0;
        }
        c->missed = 0;
        return 1;
    }
    /* 文字：欄の無いときの [Enter] は行と左の盤を描き直す（盤が下りて
     * いれば戻る。測定：func_all text_s0_c7_v）。 */
    if (c->command == 13 && (key == 13 || key == 10) && !c->typing_text
        && !c->typing && c->tx_plain) {
        c->tx_plain = 0;
        return 1;
    }
    /* 文字：取り消すものが無いときの [ESC] は左の盤を下ろして数え箱に
     * （測定：func_all text_plain の最後の [ESC]）。 */
    if (c->command == 13 && key == 27 && !c->typing_text && !c->typing
        && !(c->tx_undo && d && d->n_texts > 0) && !c->text_ang_ask
        && c->stage != 40 && c->stage != 41) {
        c->tx_plain = 1;
        return 1;
    }
    if (c->command == 13 && key == 27 && !c->typing_text && c->tx_undo && d
        && d->n_texts > 0) {
        /* 黒で消すだけで描き直さない（枠に穴が残る。測定：func_all
         * text_s1_c1 の最後の [ESC] で (400..402,139)）。 */
        jwc_remove_text(d, d->n_texts - 1);
        c->tx_undo = 0;
        /* 行は段 2。この命令で書いた文字がまだ残っていれば `[ESC]` の付いた
         * 行、残っていなければ付かない `・文字種類[F3] 基点指示…`（①水平 の
         * 升の行と同じ。測定：text_rep2 は AB が残って [ESC] あり、
         * text_rep2_empty・text_c1_v は残らず [ESC] なし）。 */
        c->tx_count--;
        c->stage = 2;
        c->top_item = c->tx_count > 0 ? 0 : 1;
        return 1;
    }
    /* 中心線 の [ESC]：一段ずつ戻る（終点 → 始点 → 対象直線（Ｂ）→ …。
     * 測定：center_plain の 11・13 段目）。 */
    if (c->command == 20 && key == 27 && !c->typing && c->stage >= 1) {
        c->stage--;
        if (c->stage == 0) {
            c->pressed = 0;
        }
        /* 2 点指示でも一段ずつ（未測定。線のときと同じ段の戻り方にした）。 */
        if (c->cl_pts && c->stage <= 1) {
            c->cl_pts = c->stage;
            c->pick_a = c->pick_b = -1;
        }
        c->moved = 0;
        return 1;
    }
    /* 測定 ①距離 ③円周の行：ESC は ◆ へ戻る。 */
    if (c->command == 15 && c->meas_arc) {
        if (key == 27) {
            c->meas_arc = 0;
            c->missed = 0;
            return 1;
        }
        return 1;
    }
    /* 測定 ⑧文字列集計 ③指定文字の欄：打った文字が欄に入り、ESC で ⑧ の項目の行へ。 */
    if (c->command == 15 && c->meas8) {
        if (key == 27) {
            c->meas8 = 0;
            c->top_item = 8;
            return 1;
        }
        if (key == 13 || key == 10) {
            c->meas8 = 0;                   /* 文字が無いので `データ無`（取れた先は未実装） */
            c->meas8d = 1;
            c->top_item = 8;
            return 1;
        }
        if (key == 8) {
            if (c->ms8_n > 0) {
                c->ms8_typed[--c->ms8_n] = 0;
            }
            return 1;
        }
        if (key >= 32 && key < 127 && c->ms8_n < 20) {
            c->ms8_typed[c->ms8_n++] = (char)key;
            c->ms8_typed[c->ms8_n] = 0;
        }
        return 1;
    }
    /* 測定 ⑨式 ③三斜面積の行：ESC で ⑨ の項目の行へ。 */
    if (c->command == 15 && c->meas9t) {
        if (key == 27) {
            c->meas9t = 0;
            c->meas9k = 0;
            c->top_item = 9;
            return 1;
        }
        return (key >= '1' && key <= '9') ? 0 : 1;
    }
    /* 測定 ⑨式 ①ヘロンの範囲の行：ESC で測定の最初の行へ。 */
    if (c->command == 15 && c->meas9) {
        c->missed = 0;
        if (key == 27) {
            if (c->meas9q) {
                c->meas9q = 0;
                c->meas9p = 0;
                c->pressed = 0;
                return 1;
            }
            if (c->meas9p) {
                c->meas9p = 0;
                c->pressed = 0;
                return 1;
            }
            return 1;               /* 始点の行の ESC は何も起こらない（測定：measure_s0_c9） */
        }
        return (key >= '1' && key <= '9') ? 0 : 1;
    }
    /* 測定 ⑤表計算の キー：ESC で測定の最初の行へ。 */
    if (c->command == 15 && c->meas5) {
        if ((key == 13 || key == 10) && c->meas5s) {
            c->meas5r = 1;
            return 1;
        }
        c->missed = 0;
        if (key == 27) {
            if (c->meas5r) {
                c->meas5r = 0;
                return 1;
            }
            if (c->meas5s) {
                c->meas5s = 0;
                return 1;
            }
            c->meas5 = 0;
            c->top_item = 0;
            return 1;
        }
        return (key >= '1' && key <= '9') ? 0 : 1;
    }
    /* 測定 ④座標の キー：ESC は ◇（原点から取り直し）、◇ の ESC は何もしない、BS は ◇ だけで最初の行へ。 */
    if (c->command == 15 && c->meas4) {
        if (key == 27) {
            if (c->ms4 > 0) {
                c->ms4 = 0;
                return 1;
            }
            return 0;
        }
        if (key == 8 && c->ms4 == 0) {
            c->meas4 = 0;
            c->top_item = 0;
            return 1;
        }
        return 1;
    }
    /* 測定 ③面積の キー：ESC は点を一つ戻す（n==1 は ◇ へ、◇ は何もしない）、BS は ◇ だけで最初の行へ。 */
    if (c->command == 15 && c->meas3) {
        if (key == 27) {
            if (c->ms3_n > 0) {
                c->ms3_n--;
                return 1;
            }
            return 0;
        }
        if (key == 8 && c->ms3_n == 0) {
            c->meas3 = 0;
            c->top_item = 0;
            return 1;
        }
        return 1;
    }
    /* 測定 ②角度の キー：◆で ESC は ◇ へ、◇で BS は測定の最初の行へ（ESC は何もしない）。 */
    if (c->command == 15 && c->meas2) {
        if (key == 27) {
            if (c->ms2 == 1) {
                c->ms2 = 0;
                return 1;
            }
            return 0;
        }
        if (key == 8 && c->ms2 == 0) {
            c->meas2 = 0;
            c->ms2_res = 0;
            c->top_item = 0;
            return 1;
        }
    }
    /* 分割 ④（段 7）：ESC は 欄→B→A、A は作った線を戻す。BS は A だけで最初の行へ。欄は数。 */
    if (c->command == 21 && c->stage == 7 && d) {
        if (key == 27) {
            if (c->div4 == 3) {
                c->typing = 0;
                c->typed_n = 0;
                c->typed[0] = 0;
                c->div4 = 2;
                return 1;
            }
            if (c->div4 == 2) {
                c->div4 = 1;
                return 1;
            }
            if (c->div4_made && c->div4_n > 0) {
                jwc_ink_settle(d);
                while (c->div4_n > 0 && d->n_lines > 0) {
                    jwc_remove_line(d, d->n_lines - 1);
                    c->div4_n--;
                }
                c->div4_made = 0;
                return 1;
            }
            return 0;
        }
        if (key == 8 && c->div4 == 1) {
            c->stage = 0;
            c->div4 = 0;
            c->missed = 0;
            return 1;
        }
        if (c->div4 == 3) {
            if (key == 13 || key == 10) {
                return div4_accept(c, d);
            }
            if (key == 8) {
                if (c->typed_n > 0) {
                    c->typed[--c->typed_n] = 0;
                }
                return 1;
            }
            if (FIELD_CHAR(key) && FIELD_ROOM(c)) {
                c->typed[c->typed_n++] = (char)key;
                c->typed[c->typed_n] = 0;
            }
            return 1;
        }
    }
    /* 分割 ②③の始点の行：BS は分割の最初の行へ、[ESC] は何も起こさない（decomp 14a1：BS は S0 だけ有効）。 */
    if (c->command == 21 && c->stage == 6) {
        if (key == 8) {
            c->stage = 0;
            c->div2 = 0;
            c->missed = 0;
            return 1;
        }
        if (key == 27) {
            return 0;
        }
    }
    /* 多角形 ①２点からの距離 の キー。ESC：D→B、C→D、B→A、A は直前の組を消す（n==0 は何も
     * しない）。BS：A 段なら多角形の最初の行へ（線は残す）。decomp 0x2cbe4〜0x2d384。 */
    if (c->command == 19 && c->pg1 && d) {
        if (key == 27) {
            if (c->pg1 == 1) {
                if (c->pg1_n > 0) {
                    jwc_ink_settle(d);
                    while (c->pg1_n > 0 && d->n_lines > 0) {
                        jwc_remove_line(d, d->n_lines - 1);
                        c->pg1_n--;
                    }
                    return 1;
                }
                return 0;
            }
            if (c->pg1 == 3) {
                c->typing = 0;
                c->typed_n = 0;
                c->typed[0] = 0;
                c->pg1 = 2;
            } else if (c->pg1 == 4) {
                c->pg1 = 3;
                c->typing = 1;
                c->typed_n = 0;
                c->typed[0] = 0;
            } else {
                c->pg1 = 1;
            }
            return 1;
        }
        if (c->pg1 == 1 && key == 8) {
            c->pg1 = 0;
            c->pg_item = 0;
            return 1;
        }
        if (c->pg1 == 3) {
            if (key == 13 || key == 10) {
                return pg1_accept(c, d, 0);
            }
            if (key == 8) {
                if (c->typed_n > 0) {
                    c->typed[--c->typed_n] = 0;
                }
                return 1;
            }
            if ((FIELD_CHAR(key) || key == ';') && FIELD_ROOM(c)) {
                c->typed[c->typed_n++] = (char)key;
                c->typed[c->typed_n] = 0;
            }
            return 1;
        }
    }
    /* 多角形 ③ の [ESC]：辺があれば最後の一本を消してその始点へ（何度でも。
     * 測定：三本引いて [ESC] 二回で一本に）。辺が無ければ一つ前の段へ。 */
    if (c->command == 19 && c->pg3 && key == 27 && !c->typing) {
        if (c->pg3 == 3 && c->pg3_n > 0 && d && d->n_lines > 0) {
            const JwcLine l = d->lines[d->n_lines - 1];

            jwc_ink_settle(d);
            jwc_remove_line(d, d->n_lines - 1);    /* 全面は描き直さない：枠との交点に穴が残る */
            c->pg3_x = l.x0;
            c->pg3_y = l.y0;
            c->pg3_n--;
        } else if (c->pg3 > 1) {
            c->pg3--;
        } else {
            c->pg3 = 0;
        }
        return 1;
    }
    if (c->command == 19 && c->pg3 == 1 && key == 8 && !c->typing) {
        c->pg3 = 0;             /* [BS]前項 */
        return 1;
    }
    /* 多角形 ②正多角形：中心点を持って頂点を聞いている段（stage 5）の
     * [ESC] は中心点を捨てて `中心点 マウス指示` へ戻るだけ（測定：
     * tools/steps_table.py 19 t 2 t 1 t 5 e 300 250 esc -- stage 6 の行は
     * stage 4 と同じ文字列に戻り、`[ESC]` の札も消える）。まだ何も足して
     * いないので pg2_undo は触らない。 */
    if (c->command == 19 && !c->pg1 && !c->pg3 && c->stage == 5
        && !c->typing && key == 27) {
        c->stage = 4;
        return 1;
    }
    /* 多角形 ②正多角形：確定した直後（stage 6）の [ESC] は、いま置いた
     * 多角形の線だけを取り消す（測定：同じ道具の 19 t 2 t 1 t 5 e 300 250
     * 450 250 esc -- 五角形の縁の画素だけ消え、行は `中心点 マウス指示` の
     * まま。二度目の [ESC] は `[ESC]` の札が無いので何もしない）。本物は
     * 線を枠の上に直描きし、消すときも黒で塗る（線伸縮・コーナー連結と
     * 同じ流儀、jwc_ink_settle）。 */
    if (c->command == 19 && !c->pg1 && !c->pg3 && c->stage == 6
        && !c->typing && key == 27 && c->pg2_undo_on && d) {
        jwc_ink_settle(d);
        while (d->n_lines > c->pg2_undo_from) {
            jwc_remove_line(d, d->n_lines - 1);
        }
        c->pg2_undo_on = 0;
        return 1;
    }
    /* 多角形 ②正多角形：頂点/辺中（中心点の基準）の切り替え。file-linear
     * 0x2da19（`mov ax,1; sub ax,[0x53f4]; mov [0x53f4],ax`）は key '1'
     * で呼ばれる（decomp・実測とも確認、RESUME.md 10-e 参照）。本物は
     * 帯の文字そのものをクリックしても同じトグルに落ちるが、そちらは
     * 未配線（測定のみ・decomp未確認）。 */
    if (c->command == 19 && !c->pg3 && c->stage == 5 && !c->typing
        && key == '1') {
        c->pg_edge = !c->pg_edge;
        return 1;
    }
    /* 円線接 ③接円（３条件）③１点と２線･円・④３線･円 の [ESC]：取りかけなら
     * 最初の段へ、円を作った直後ならその円を取り消して [ESC] の無い行へ
     * （測定：func_all tangent_s0_c3_v で 14 → 13）。 */
    if (c->command == 26 && key == 27 && !c->typing
        && (c->tan_tri == 13 || c->tan_tri == 14)) {
        const int top = c->tan_tri == 13 ? 51 : 54;

        if (c->stage > top && c->stage <= top + 2) {
            c->stage = top;
            c->missed = 0;
            return 1;
        }
        if (c->stage == top && c->tan_did && d
            && d->n_arcs == c->tan_na_mark) {
            /* 黒で上から消すだけで描き直さない（枠の線に穴が残る。測定）。 */
            jwc_remove_arc(d, d->n_arcs - 1);
            c->tan_did = 0;
            return 1;
        }
    }
    /* 円線接 ①接線 の最初の行（`[ESC] 接線 |1)円〜円間|…`）の [ESC] は円線接の最初の行へ戻る
     * （測定：tangent_plain の 11 手目。decomp 未照合）。 */
    /* ②２次曲線 の [ESC]：分割 長さ の欄（段 45）→ 終点指示（段 44）→ 始点指示（段 41）
     * （測定：curve_s0_c2 の 12・14 手目）。 */
    if (c->command == 23 && c->sine == 3 && key == 27 && (c->stage == 45 || c->stage == 44)) {
        c->typing = 0;
        c->typed[0] = 0;
        c->typed_n = 0;
        c->stage = c->stage == 45 ? 44 : 43;
        return 1;
    }
    /* ②２次曲線 の通過点の指示（段 42）の [ESC] は座標原点の指示（段 41）へ（測定：curve_s1_c2）。 */
    if (c->command == 23 && c->sine == 3 && key == 27 && (c->stage == 42 || c->stage == 41) && !c->typing) {
        c->stage = c->stage == 42 ? 41 : 40;
        c->missed = 0;
        return 1;
    }
    /* ｻｲﾝ曲線 の欄の [ESC] は一つ前の欄へ：振幅 → 1サイクルの長さ → 座標原点の指示
     * （測定：curve_s0_c1 の 12・13 手目。分割の欄は未測定）。 */
    if (c->command == 23 && c->sine && key == 27 && (c->stage == 12 || c->stage == 13)) {
        c->typed[0] = 0;
        c->typed_n = 0;
        if (c->stage == 13) {
            c->stage = 12;
        } else {
            c->typing = 0;
            c->stage = 11;
        }
        return 1;
    }
    /* ｻｲﾝ曲線 の座標原点の指示（段 11）の [ESC] は基準線の指示（段 10）へ（測定：curve_s1_c1）。 */
    if (c->command == 23 && c->sine == 1 && key == 27 && c->stage == 11 && !c->typing) {
        c->stage = 10;
        c->missed = 0;
        return 1;
    }
    /* 円線接 ②接円 ①１線１円（段 40 線・41 円・42 選ぶ）の [ESC] は一つ前の段へ（測定：tangent_s0_c2）。 */
    if (c->command == 26 && key == 27 && !c->typing && c->tan_circ == 1
        && (c->stage == 41 || c->stage == 42)) {
        c->stage--;
        c->missed = 0;
        return 1;
    }
    /* 円線接 ④角度指定 の円を訊く行（段 13）の [ESC] は角度の欄（段 12）へ（測定：tangent_s1_c4）。 */
    if (c->command == 26 && key == 27 && !c->typing && c->tan_on && c->stage == 13) {
        c->stage = 12;
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        c->missed = 0;
        return 1;
    }
    /* 円線接 ④接楕円 の平行四辺形内接（段 64〜67：第１〜第４の辺）の [ESC] は一つ前の辺へ
     * （測定：tangent_s0_c4_v の第４の辺での [ESC]）。 */
    if (c->command == 26 && key == 27 && !c->typing && c->stage >= 65 && c->stage <= 67) {
        c->stage--;
        c->missed = 0;
        return 1;
    }
    /* 円線接 ③指定点 の円を訊く行（段 3）の [ESC] は指定点の行（段 2）へ（測定：tangent_s0_c1_v）。 */
    if (c->command == 26 && key == 27 && !c->typing && c->stage == 3 && c->tan_on) {
        c->stage = 2;
        c->missed = 0;
        return 1;
    }
    if (c->command == 26 && key == 27 && !c->typing && c->stage == 1 && c->pressed == 1
        && !c->tan_kind && c->tan_tri == 0) {
        c->pressed = 0;
        c->stage = 0;
        c->missed = 0;
        return 1;
    }
    /* 線消 の線切断寸法の欄の鍵。値は 0 以上を取る（使い道の線切断は未移植）。 */
    if (c->command == 10 && c->ld_ask) {
        if (key == 27 || key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if ((key == 13 || key == 10) && c->typed_n) {
                const double v = field_eval(c->typed);

                if (v >= 0.0) {
                    c->ld_cut = v;
                }
            }
            c->ld_ask = 0;
            c->typing = 0;
            c->typed_n = 0;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key) && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    /* ２線 の間隔の欄の鍵：`a,b`（一つなら両方）。 */
    if (c->command == 9 && c->dl_ask) {
        if (key == 27) {
            c->dl_ask = 0;
            c->typing = 0;
            c->typed_n = 0;
            c->top_item = 0;
            return 1;
        }
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                const char *comma = strchr(c->typed, ',');
                const double a = field_eval(c->typed);
                const double b = comma ? field_eval(comma + 1) : a;

                if (a > 0.0 && b > 0.0) {
                    c->gap_two[0] = a;
                    c->gap_two[1] = b;
                }
            }
            c->dl_ask = 0;
            c->typing = 0;
            c->typed_n = 0;
            c->top_item = 0;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key) && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    /* 分割 の [ESC]：始点を取ったあとなら `◇２点間分割点 始点指示`（[ESC] の
     * 無い行）へ（測定：divide_s1_c1）。 */
    if (c->command == 21 && key == 27 && !c->typing && c->stage == 1) {
        c->stage = 5;
        return 1;
    }
    /* 分割数の欄の [ESC] は終点の行（段 1）へ、点を作ったあと（段 4）の [ESC] は
     * その点を取り消して始点の行（段 5）へ（測定のみ・decomp 未確認：escfz_t_8・t_9）。 */
    if (c->command == 21 && key == 27 && c->typing && c->stage == 2) {
        c->typing = 0;
        c->typed_n = 0;
        c->typed[0] = 0;
        c->stage = 1;
        return 1;
    }
    if (c->command == 21 && key == 27 && !c->typing && c->stage == 4 && d && c->divisions >= 2) {
        int i;

        for (i = 1; i < c->divisions; i++) {
            if (c->div_real) {
                if (d->n_points > 0) {
                    jwc_remove_point(d, d->n_points - 1);
                }
            } else if (d->n_temp > 0) {
                d->n_temp--;
            }
        }
        c->stage = 5;
        return 1;
    }
    /* 連続書 の間隔の欄の鍵。 */
    /* 文編集 ⑤ の ②行間 の欄。0 で現位置に戻す（測定：tmp/te5e.txt te5g）。
     * 1～100 の外は未測定（取らない）。 */
    if (c->command == 28 && c->te5_ask) {
        if (key == 27 || key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (key != 27 && c->typed_n) {
                const double g = field_eval(c->typed);

                if (g == 0.0 || (g >= 1.0 && g <= 100.0)) {
                    c->te5_gap = g;
                }
            }
            c->te5_ask = 0;
            c->typing = 0;
            c->typed_n = 0;
            c->typed[0] = 0;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key) && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 13 && c->stage == 41) {
        if (key == 27) {
            c->typing = 0;
            c->typed_n = 0;
            c->stage = 40;
            return 1;
        }
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                const double g = field_eval(c->typed);

                if (g >= 1.0 && g <= 100.0) {
                    c->rep_gap[c->text_rep == 2 ? 0 : 1] = g;
                }
            }
            c->typing = 0;
            c->typed_n = 0;
            c->typed[0] = 0;
            c->stage = 40;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key) && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    /* 点 ②距離 の キー（decomp 0x2f596〜）。ESC：S0 は直前の点を消す（n==0 は何もしない）、S1 は
     * S0（円周は S3）、S2 は S1、S3 は S0。BS：S0 だけ点の最初の行へ。 */
    if (c->command == 22 && c->pt_mode == 2 && d) {
        if (key == 27) {
            if (c->pt2 == 0) {
                if (c->pt_undo > 0 && d->n_temp > 0) {
                    jwc_remove_temp(d);
                    c->pt_undo--;
                    c->pt2_total = (float)(c->pt2_total - c->pt2_step);
                    return 1;
                }
                if (c->pt_undo < 0 && d->n_points > 0) {
                    jwc_ink_settle(d);      /* 消した跡は黒の穴になる（測定：point_s0_c1_v） */
                    jwc_ink_note(d, 1, JW_INK_POINT, &d->points[d->n_points - 1]);
                    d->n_points--;
                    c->pt_added--;
                    c->pt_undo++;
                    c->pt2_total = (float)(c->pt2_total - c->pt2_step);
                    return 1;
                }
                return 0;
            }
            if (c->pt2 == 1) {
                c->typing = 0;
                c->typed_n = 0;
                c->typed[0] = 0;
                c->pt2 = c->pt2_circ ? 3 : 0;
            } else if (c->pt2 == 2) {
                c->pt2 = 1;
                c->typing = 1;
                c->typed_n = 0;
                c->typed[0] = 0;
            } else {
                c->pt2 = 0;
            }
            return 1;
        }
        if (key == 8 && c->pt2 == 0 && !c->typing) {
            c->pt_mode = 0;
            c->pt_undo = 0;
            c->top_item = c->pt_real ? 1 : 0;   /* 点の最初の行（① の行）に戻る（測定：probe_pdist2 pf_a は【実点】。【仮点】は escfz_v_14） */
            c->top_right = 0;
            return 1;
        }
        if (c->pt2 == 1) {
            if (key == 13 || key == 10) {
                return pt2_accept(c, d);
            }
            if (key == 8) {
                if (c->typed_n > 0) {
                    c->typed[--c->typed_n] = 0;
                }
                return 1;
            }
            if (FIELD_CHAR(key) && FIELD_ROOM(c)) {
                c->typed[c->typed_n++] = (char)key;
                c->typed[c->typed_n] = 0;
            }
            return 1;
        }
    }
    /* 文編集 で項目の行（top_item≠0）の [BS] は最初の行へ（測定のみ・decomp 未確認：escfz_a_61〜66）。 */
    if (c->command == 28 && key == 8 && c->top_item && !c->typing && !c->typing_text && !c->te_sub
        && c->stage == 0 && !c->te5) {
        c->top_item = 0;
        return 1;
    }
    if (key == 27 && c->command == 27 && c->zukei_drive) {
        c->zukei_drive = 0;         /* ドライブの行の [ESC] は枠の行へ（測定のみ） */
        return 1;
    }
    /* 図形 ④グループ変更 の枠の [ESC] は最初の行へ（測定のみ：zukei_s0_c4）。 */
    if (key == 27 && c->command == 27 && c->top_item == 4 && !c->zukei && !c->pressed) {
        c->top_item = 0;
        c->top_right = 0;
        return 1;
    }
    if (c->command == 27 && c->zukei_plain && (key == 13 || key == 10 || key == 27)) {
        c->zukei_plain = 0;         /* [Enter]・[ESC] で札が戻る（測定のみ：zukei_s0_c6_v・c1_v） */
        return 1;
    }
    /* 図形 の最初の行の [ESC]（何も選んでいない）も行 2 の札を消す（測定のみ：zukei_s0_c4・c5 の 2 度目の [ESC]）。 */
    if (key == 27 && c->command == 27 && !c->zukei && !c->top_item && !c->pressed && c->stage == 0
        && !c->typing && !c->zukei_plain) {
        c->zukei_plain = 1;
        return 1;
    }
    /* 図形 の最初の行の升の無い数字（0・9）は行 2 の札を消す（測定のみ：zukei_s0_c6_v）。 */
    if (c->command == 27 && c->stage == 0 && !c->typing && !c->top_item && !c->zukei
        && key == '0') {
        c->zukei_plain = 1;
        return 1;
    }
    /* ⑦連線 の始点の行の [ESC] は行 2 の `45度毎 マウス` の札を消すだけ（測定のみ・decomp 未確認：
     * escfz_r_20）。①角度 を押すと戻る。 */
    /* 升の無い数字も同じ（測定のみ：escfz_r_21）。 */
    if (c->command == 23 && c->poly && c->poly_n == 0 && !c->typing && key >= '0' && key <= '9'
        && key != '1') {
        c->poly_esc = 1;
        return 1;
    }
    if (key == 27 && c->command == 23 && c->poly && c->poly_n == 0 && !c->poly_esc) {
        c->poly_esc = 1;
        return 1;
    }
    /* 点 ③交点・④円中心・⑤仮点削除 の行の [BS]`前項` は最初の行へ戻る
     * （測定のみ・decomp 未確認：escfz_v_14・v_17）。 */
    if (c->command == 22 && key == 8 && !c->typing && !c->pt3 && !c->pt_delall
        && (c->pt_mode == 3 || c->pt_mode == 4 || c->pt_mode == 5)) {
        c->pt_mode = 0;
        c->pt_undo = 0;
        c->top_item = 0;
        c->stage = 0;
        return 1;
    }
    /* 点 の [ESC]（decomp ovl20 3ab8:45ea の 02f400〜02f44c）。取り消しの数
     * [bp-0x48] は符号つきで、仮点を打てると +1（02f507）、実点を打てると -1
     * （02f575）、①のトグルで 0 になる（02f3f4）。[ESC] は数が正なら仮点を一つ消し
     * （0x304c8）て -1、負なら実点を一つ消し（1bb4:3c1d）て +1。0 のときは
     * 読みの引数が 0x2710（[ESC] 無効）で、[ESC] は何も起こさない。 */
    if (c->command == 22 && key == 27 && !c->typing && d) {
        if (c->pt_mode == 3 && c->pt3) {
            c->pt3 = 0;                 /* 対象線【B】→（A）。A は捨てる */
            return 1;
        }
        if (c->pt_undo > 0 && d->n_temp > 0) {
            jwc_remove_temp(d);         /* 輪は黒で塗るだけ。線の穴が残る（point_plain） */
            c->pt_undo--;
            return 1;
        }
        if (c->pt_undo < 0 && d->n_points > 0) {
            jwc_ink_settle(d);
            jwc_ink_note(d, 1, JW_INK_POINT, &d->points[d->n_points - 1]);
            d->n_points--;
            c->pt_added--;
            c->pt_undo++;
            return 1;
        }
        return 0;
    }
    /* 文字 ③角度指定 の欄の鍵。 */
    if (c->command == 13 && c->text_ang_ask) {
        if (key == 27) {
            c->text_ang_ask = 0;
            c->typing = 0;
            c->typed_n = 0;
            c->top_item = 0;
            return 1;
        }
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            c->text_ang = c->typed_n ? field_eval(c->typed) : 0.0;
            c->text_vert = 0;
            c->text_ang_ask = 0;
            c->typing = 0;
            c->typed_n = 0;
            c->typed[0] = 0;
            c->stage = 2;
            c->top_item = 1;    /* ①水平 の行（src/item.h） */
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key) && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    /* 面取 ③寸法= の欄の鍵。 */
    if (c->command == 8 && c->ch_ask) {
        if (key == 27) {
            c->ch_ask = 0;
            c->typing = 0;
            c->typed_n = 0;
            return 1;
        }
        c->ch_bad = 0;
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                const double v = field_eval(c->typed);

                if (v > 0.0) {
                    c->gap_chamfer = v;
                } else {
                    /* 0 以下は `データが不適当` と出して、欄は空で開いたまま
                     * （測定：func_all chamfer_s0_c5_v で 0 [Enter]）。 */
                    c->ch_bad = 1;
                    c->typed_n = 0;
                    c->typed[0] = 0;
                    return 1;
                }
            }
            c->ch_ask = 0;
            c->typing = 0;
            c->typed_n = 0;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key) && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    /* （ ①三点指示 の [BS]前項・[ESC]（一つ前の点へ。未測定）。 */
    if (c->command == 12 && c->arc3 && !c->typing) {
        if (key == 8 && c->arc3 == 1) {
            c->arc3 = 0;
            c->arc3_done = 0;
            return 1;
        }
        if (key == 27 && c->arc3 == 1 && c->arc3_done && d && d->n_arcs > 0) {
            /* 弧を作った直後の [ESC] はその弧を取り消し、始点の行（`[ESC]`
             * も `半径=` も無い）に残る（測定：func_steps arc_s0_c1_esc）。 */
            jwc_ink_settle(d);          /* 消した跡は黒の穴になる（測定：arc_s0_c1_v の (161,250)） */
            jwc_remove_arc(d, d->n_arcs - 1);
            c->arc3_done = 0;
            return 1;
        }
        if (key == 27) {
            if (c->arc3 > 1) {
                c->arc3--;
                /* 始点の段に戻ると `[ESC]` も `半径=` も無い行（測定）。 */
                /* 始点だけ取った段から戻るときは、前に描いた弧の `[ESC]`・`半径=` はそのまま
                 * （測定：arc_s0_c2_v。弧を作った直後の [ESC] は上の取り消しで done が落ちる） */
            }
            /* 始点の段での [ESC] は何も起きない（測定：arc_s0_c1_v。項目の行へは [BS]） */
            return 1;
        }
    }
    /* ○ ②楕円 の欄と [BS]・[ESC]。 */
    if (c->command == 11 && c->ell) {
        if (c->ell == 1 && key == 8 && !c->typing) {
            c->ell = 0;         /* `[BS]前項`：○ の最初の行へ */
            c->ell_done = 0;
            return 1;
        }
        if (key == 27) {
            /* 一つ前へ（中心 → ○ の最初の行。未測定の段は中心へ）。 */
            c->typing = 0;
            c->typed_n = 0;
            c->typed[0] = 0;
            if (c->ell == 1) {
                /* 置いた直後（ell_done）の [ESC] は、その楕円を取り消して
                 * から ○ の最初の行へ抜ける（（ ①三点指示 の arc3_done と
                 * 同じ形、上のブロック参照）。測定：func_all circle_s0_c2
                 * の末尾 `…162 250 left|598 300 right|…esc|…esc|…` --
                 * 1 個目の [ESC] は２個目の楕円の中心指示だけを捨てて
                 * 楕円は 1 個のまま、２個目の [ESC]（ell は既に 1 に
                 * 戻っている）で 1 個目の楕円が消え、そのあとは項目②を
                 * 選び直すまで押しがすべて無反応になる（ell==0 まで
                 * 抜けている証拠）。decomp 未確認・測定のみ。 */
                if (c->ell_done && d && d->n_arcs > 0) {
                    jwc_ink_settle(d);
                    jwc_remove_arc(d, d->n_arcs - 1);
                }
                c->ell = 0;
                c->ell_done = 0;
            } else {
                c->ell = 1;
            }
            return 1;
        }
        if (c->typing && (c->ell == 2 || c->ell == 4)) {
            if (key == 13 || key == 10) {
                c->typed[c->typed_n] = 0;
                if (c->ell == 2) {
                    /* `長径,短径`。打たなかった側は前のまま。 */
                    const char *comma = strchr(c->typed, ',');
                    double a = c->ell_a, b = c->ell_b;

                    if (c->typed_n && c->typed[0] != ',') {
                        a = field_eval(c->typed);
                    }
                    if (comma && comma[1]) {
                        b = field_eval(comma + 1);
                    }
                    if (a <= 0.0 || b <= 0.0) {
                        c->typed[0] = 0;
                        c->typed_n = 0;
                        return 1;
                    }
                    c->ell_a = a;
                    c->ell_b = b;
                    c->typing = 0;
                    c->typed_n = 0;
                    c->ell = 3;
                    return 1;
                }
                {
                    const double deg = c->typed_n ? field_eval(c->typed)
                                                  : c->ell_ang;

                    c->typed_n = 0;
                    return ellipse_put(c, d, deg);
                }
            }
            if (key == 8) {
                if (c->typed_n > 0) {
                    c->typed[--c->typed_n] = 0;
                }
                return 1;
            }
            if (FIELD_CHAR(key) && FIELD_ROOM(c)) {
                c->typed[c->typed_n++] = (char)key;
                c->typed[c->typed_n] = 0;
            }
            return 1;
        }
    }
    /* 複線 の [ESC]：向きを聞いているとき（段 2）は `点指示 or 間隔=` の欄に
     * 戻り、欄からは段 0 の `線指示 …` へ（測定：offset_plain の 11・13 段目）。 */
    if (key == 27 && c->command == 5 && !c->typing && c->stage == 2) {
        c->off_label_gone = 0;      /* 欄を開き直す（構築し直す）ので札は戻る */
        c->typing = 1;
        c->typed_n = 0;
        c->typed[0] = 0;
        c->stage = 1;
        c->moved = 0;
        return 1;
    }
    /* ┣ 線伸縮：対象線を選んだあと（段 1）の [ESC] は最初の行（段 0）へ
     * （測定のみ・decomp 未確認：escfz_T_83）。 */
    if (key == 27 && c->command == 6 && !c->typing && c->stage == 1 && c->pick_a >= 0) {
        c->pick_a = -1;
        c->stage = 0;
        c->moved = 0;
        return 1;
    }
    /* ②連続 で足した線は [ESC] で一本戻り、行は段 0 の `線指示 …` へ
     * （測定のみ・decomp 未確認：escfz_F_80）。 */
    if (key == 27 && c->command == 5 && !c->typing && c->stage == 3 && c->off_cont && d
        && d->n_lines > 0) {
        jwc_remove_line(d, d->n_lines - 1);
        c->off_cont = 0;
        c->stage = 0;
        c->moved = 0;
        return 1;
    }
    /* ①間隔取得 の `◇点マウス指示`（段 5）の [ESC] は基準線の行（段 4）へ
     * （測定のみ・decomp 未確認：escfz_F_81）。 */
    if (key == 27 && c->command == 5 && !c->typing && c->stage == 5) {
        c->stage = 4;
        c->pick = -1;
        c->moved = 0;
        return 1;
    }
    /* ①間隔取得 の `基準線 マウス指示`（段 4）の [ESC] は段 0 の `線指示 …` へ
     * （測定のみ・decomp 未確認：escfz_F_79）。 */
    if (key == 27 && c->command == 5 && !c->typing && c->stage == 4 && !c->pressed) {
        c->stage = 0;
        c->pick = -1;
        c->moved = 0;
        return 1;
    }
    if (key == 27 && c->command == 5 && c->typing && c->stage == 1) {
        c->typing = 0;
        c->typed_n = 0;
        c->typed[0] = 0;
        c->stage = 0;
        c->moved = 0;
        return 1;
    }
    if (key == 27 && c->typing
        && (((c->command == 2 || c->command == 3) && c->ask_kind)
            || (c->command == 4 && c->box_ask)
            || (c->command == 11 && c->circ_ask)
            || (c->command == 12 && c->arc_ask))) {
        /* □・○ は 2 点で描く `始点指示 … [BS]前項` へ（測定：□ で 60,40
         * を打って [ESC] → 2 点の四角、そのあと `確定寸法=`。○ も同じ）。 */
        /* 何も打っていない欄の [ESC] は 2 点描きにならず、ただ欄を閉じる
         * （測定のみ・decomp 未確認：escfz_E_91。□ の escfz_B_77 は 0 を打った後で 2 点描き）。 */
        if (c->command == 4 && c->box_ask && (c->typed_n || c->circ_hold)) {
            c->box_mode = 1;
            c->box_fix = 0;
        }
        if (c->command == 11 && c->circ_ask && (c->typed_n || c->circ_hold)) {
            c->circ_mode = 1;
            c->circ_fix = 0;
        }
        c->typing = 0;
        c->typed[0] = 0;
        c->typed_n = 0;
        c->ask_kind = 0;
        c->box_ask = 0;
        c->circ_ask = 0;
        c->arc_ask = 0;
        box_unhold(c);   /* 始点を持って開いた欄なら、その始点の `終点指示` へ戻る（測定：escfz_B_77） */
        return 1;
    }
    /* 寸法 ⑧値変 の段 8（欄を打っている途中）の [ESC]：打ちかけを捨てて
     * 書き直さず、段 7（値を待つ行）へ戻ります。この節は下の汎用の
     * 「範囲ごと戻す」節（`if (!c->pressed || c->escaped) return 0;`）
     * より前に置くこと -- ⑧値変 はここに入るとき `c->pressed` を立てない
     * ので、後ろに書くと汎用節に先取りされて ESC が一切落ちてきません
     * （notes/traps.md 「src/cmd.c の『汎用取り消し』節が ESC を先取り
     * する」と同じ罠）。測定（escaudit6）：`90 280 left|...|type 8|
     * 380 108 left|type 99|key esc|key enter` で本物は文字 `250` の
     * まま変わらず、直す前の移植は `990` に書き換えていた。 */
    if (key == 27 && c->command == 14 && c->dim_val == 2 && c->stage == 8) {
        c->typing = 0;
        c->typed[0] = 0;
        c->typed_n = 0;
        c->dim_val = 1;
        c->stage = 7;
        c->dim_val_buf[0] = 0;
        c->dim_val_pos = 0;
        c->dim_val_dirty = 0;
        return 1;
    }
    /* 寸法 ⑧値変 の段 7（値を待つ行）の [BS]：桁 73 の `[BS]前項` のとおり、
     * 項目の行（段 0）へ戻ります（測定（escaudit6）：`type 8|key bs` の
     * あとに図面を押すと、本物は ①横方向 の寸法をもう一本ふつうに引き
     * 直せた——戻らずに値変の「値を待つ」ままだと図面の押しは寸法値の
     * 拾いにしかならず、新しい寸法は一本も増えないので差で分かる）。
     * 段 8（欄を打っている最中）はここに来ない（上の [ESC] の節と違い
     * `!c->typing` の節より前に置く必要はない -- [BS] は c->typing が
     * 立っていてもいなくても同じ場所で拾える）。 */
    if (key == 8 && c->command == 14 && c->dim_val == 1 && c->stage == 7
        && !c->pressed) {
        c->dim_val = 0;
        c->stage = 0;
        return 1;
    }
    /* `始点指示 … [BS]前項` の [BS]：前の行（①〜⑤ の升）へ戻り、長さ・
     * 角度の固定もやめます（測定）。 */
    if (key == 8 && !c->pressed && !c->typing
        && ((c->command == 4 && c->box_mode)
            || (c->command == 11 && c->circ_mode))) {
        c->box_mode = 0;
        c->circ_mode = 0;
        c->stage = 0;
        return 1;
    }
    if (key == 8 && (c->command == 2 || c->command == 3) && c->fix_mode
        && !c->pressed && !c->typing) {
        /* 線を引いたあと（`確定長さ = …` の行、stage 2）でも同じで、
         * `・◇始点指示 … |①  ＋  |②寸 法 |…` の行に戻ります（測定：
         * そのあと ③ に 18 を打つと 18 度、長さは矢まで）。 */
        c->fix_mode = 0;
        c->fix_len = 0;
        c->fix_angle = 0;
        c->par_on = 0;
        c->fix_done = 0;
        c->stage = 0;
        c->moved = 0;
        return 1;
    }
    /* 線伸縮 の取り消し：何も持っていないときの [ESC] は、最後に伸縮した線を
     * 抜いて元の線を**最後に足し直します**（測定：左の辺を伸縮して [ESC] で
     * 元の座標に戻り、記録は並びの最後へ。行は `[ESC]` の無い段 0）。一回だけ。 */
    if (key == 27 && d && c->command == 6 && !c->typing && c->pick_a < 0
        && c->st_undo_on && d->n_lines > 0) {
        JwcLine was = c->st_undo;

        jwc_remove_line(d, d->n_lines - 1);
        if (jwc_add_line(d, was.x0, was.y0, was.x1, was.y1, was.type, was.pen,
                         was.layer)) {
            memcpy(d->lines[d->n_lines - 1].rest, was.rest, 4);
            d->lines[d->n_lines - 1].rest[2] &= (unsigned char)~1u;
        }
        /* 描き直さない：伸ばした線を黒で消して元の線を描くだけ（測定：
         * func_all tee_* の [ESC] で角 (598,139) が黒く残る）。 */
        c->st_undo_on = 0;
        c->stage = 0;
        return 1;
    }
    /* コーナー連結・面取 の Ｂ を聞いているときの [ESC]：Ａ を放して Ａ の行へ
     * （取り消せる操作があれば行の頭に `[ESC]`。測定：面取）。 */
    if (key == 27 && d && (c->command == 7 || c->command == 8) && !c->typing
        && c->pick_a >= 0) {
        c->pick_a = -1;
        c->stage = c->co_undo_n > 0 ? 2 : 0;
        c->moved = 0;
        return 1;
    }
    /* コーナー連結・線切断 の取り消し：最後の操作で足した線を抜き、元の線を
     * 最後に足し直します（測定：右の辺を切ったあと [ESC] で元の 1 本が
     * 並びの最後に。`＊お待ち下さい＊` のあと行は `[ESC]` の無い段 0）。 */
    if (key == 27 && d && (c->command == 7 || c->command == 8) && !c->typing
        && c->pick_a < 0 && c->co_undo_n > 0 && d->n_lines >= c->co_undo_new) {
        int i;

        jwc_ink_settle(d);      /* 消した跡は黒の穴になる */
        if (c->co_undo_arc && d->n_arcs > 0) {
            jwc_remove_arc(d, d->n_arcs - 1);
        }
        c->co_undo_arc = 0;
        for (i = 0; i < c->co_undo_new; i++) {
            jwc_remove_line(d, d->n_lines - 1);
        }
        for (i = 0; i < c->co_undo_n; i++) {
            const JwcLine was = c->co_undo[i];

            if (jwc_add_line(d, was.x0, was.y0, was.x1, was.y1, was.type,
                             was.pen, was.layer)) {
                memcpy(d->lines[d->n_lines - 1].rest, was.rest, 4);
                /* 読取の印は付いていません（測定）。 */
                d->lines[d->n_lines - 1].rest[2] &= (unsigned char)~1u;
            }
        }
        /* 描き直さない（黒で消して描くだけ）。 */
        /* 線切断を戻したなら `残切断点` と輪の印も一つ戻る（測定）。 */
        if (c->command == 7 && c->co_undo_n == 1 && c->cut_n > 0) {
            c->cut_n--;
        }
        c->co_undo_n = 0;
        c->stage = 0;
        return 1;
    }
    /* ２線 の取り消し：始点を聞いているとき（何も持っていない）の [ESC] は、
     * 最後の組を抜いてその組の始点を持った終点の段へ（測定：2 組目を引いて
     * [ESC] で始点の段、もう一度 [ESC] で 2 組目が消え `○終点指示 … ●連続`）。 */
    /* 点入力の待ちでは [ESC] は効かない（0x2dc1e：キーの戻りは捨てる）。 */
    if (key == 27 && c->command == 9 && c->dl_wait) {
        return 1;
    }
    if (key == 27 && d && c->command == 9 && !c->typing && c->pick_a >= 0
        && c->stage == 3 && c->pending) {
        /* 終点を押して矢がまだ離れていないときの [ESC] は、その組を置いて
         * 始点の段へ（測定：`＊お待ち下さい＊` のあと `◇始点指示`）。 */
        c->pending = 0;
        two_lines(c, d);
        c->moved = 0;
        return 1;
    }
    /* ２線 の終点指示（段 2）の [ESC] は始点指示（段 1）へ戻り、始点を捨てる（測定：double_s0_c1）。 */
    if (key == 27 && c->command == 9 && !c->typing && c->stage == 2 && !c->dl_wait
        && !c->pending && c->pick_a >= 0) {
        c->stage = 1;
        c->pick_a = -1;
        c->missed = 0;
        c->moved = 0;
        return 1;
    }
    if (key == 27 && d && c->command == 9 && !c->typing && c->pick_a >= 0
        && c->stage == 3 && !c->pending && c->dl_undo_n > 0
        && d->n_lines >= c->dl_undo_n) {
        int i;

        jwc_ink_settle(d);      /* 前の組の足しを確定してから消す（消しは後ろに付く） */
        for (i = 0; i < c->dl_undo_n; i++) {
            jwc_remove_line(d, d->n_lines - 1);
        }
        /* 全面は描き直さない：消した線の跡は黒の穴になる（decomp 21f2:6859、画面 double_plain 13 手目） */
        c->dl_undo_n = 0;
        c->x0 = c->dl_undo_x;
        c->y0 = c->dl_undo_y;
        c->stage = 2;
        c->moved = 1;       /* 終点の行（T 段）を出し直す */
        return 1;
    }
    /* 線消 で部分消去したあとの [ESC]：抜いた元の線を rest を 0 にして末尾へ
     * 戻す（切った残りはそのまま。測定：func_all linedel_s1_c1、間に右押しの
     * 消去があっても上の辺が戻る）。一度だけ。 */
    if (key == 27 && d && c->command == 10 && !c->typing && c->stage == 1
        && c->ld_undo_on) {
        JwcLine q = c->ld_undo;

        memset(q.rest + 1, 0, 3);
        if (jwc_add_line(d, q.x0, q.y0, q.x1, q.y1, q.type, q.pen, q.layer)) {
            d->lines[d->n_lines - 1] = q;
        }
        c->ld_undo_on = 0;
        c->stage = 0;
        return 1;
    }
    if (key == 27 && d && c->command == 10 && !c->typing && c->stage == 1
        && !c->ld_undo_on && c->rd_undo_on) {
        JwcLine q = c->rd_undo;

        memset(q.rest + 1, 0, 3);
        if (jwc_add_line(d, q.x0, q.y0, q.x1, q.y1, q.type, q.pen, q.layer)) {
            d->lines[d->n_lines - 1] = q;
        }
        c->rd_undo_on = 0;
        c->stage = 0;
        return 1;
    }
    /* 線消 の部分消去の [ESC]：終点 → 始点（線は選んだまま）→ 最初の行
     * （`[ESC]` の無い段 0）。測定。 */
    if (key == 27 && c->command == 10 && !c->typing
        && (c->stage == 2 || c->stage == 3)) {
        if (c->stage == 3) {
            c->stage = 2;
        } else {
            c->stage = 0;
            c->pressed = 0;
        }
        c->moved = 0;
        return 1;
    }
    /* **寸法 の [ESC]。** 本物は段ごとに一つ前へ戻ります（ovl27 3ab8:206c、
     * 0x2e020〜0x2e16d、測定も同じ）：
     *   寸法を入れた直後 → その寸法（線・実点・文字）を消して 寸法値始点指示
     *   寸法値終点       → 寸法値始点指示
     *   寸法値始点・寸法線位置 → 引出し線の始点
     *   引出し線の始点   → 項目の行
     * 消せるのは最後の一つだけ（[bp-0x72] は消したら 0）。
     * ①横方向・②縦方向 の道だけで、ほかの項目はまだ測っていません。 */
    if (key == 27 && d && c->command == 14 && !c->typing && !c->top_item
        && !c->dim_val && !c->dim_lot && !c->dim_ck && !c->dim_arc
        && !c->dim_circle && !c->dim_only && !c->dim_prog
        && c->stage >= 1 && c->stage <= 5) {
        if (c->stage == 5 || (c->stage == 3 && c->dim_undo)) {
            if (c->dim_undo) {
                while (d->n_lines > c->dim_ul) {
                    jwc_remove_line(d, d->n_lines - 1);
                }
                while (d->n_points > c->dim_up) {
                    jwc_remove_point(d, d->n_points - 1);
                }
                while (d->n_texts > c->dim_ut) {
                    jwc_remove_text(d, d->n_texts - 1);
                }
                /* 本物は消したあと図面を全部描き直す（0x2e15e の 885:23aa）
                 * ので、重なっていた別の線は残ります。 */
                jwc_ink_clear(d);
                c->dim_undo = 0;
                c->dim_texts = d->n_texts;
            }
            c->stage = 3;
        } else if (c->stage == 4) {
            c->stage = 3;
        } else if (c->stage == 2 || c->stage == 3) {
            c->stage = 1;
        } else {
            c->stage = 0;
            c->pressed = 0;
        }
        c->moved = 0;
        return 1;
    }
    /* 寸法 ④円･角 の弧・角度の寸法を入れた直後の [ESC]：その寸法を消して
     * 原点を聞く行（[ESC] の無い）へ（測定：func_all dim_s0_c4_v、③角度）。
     * 線形の寸法と同じく消したら描き直す。 */
    if (key == 27 && d && c->command == 14 && c->dim_arc && c->stage == 11
        && c->dim_did && !c->typing) {
        while (d->n_lines > c->dim_seen_lines) {
            jwc_remove_line(d, d->n_lines - 1);
        }
        while (d->n_arcs > c->dim_seen_arcs) {
            jwc_remove_arc(d, d->n_arcs - 1);
        }
        while (d->n_texts > c->dim_seen_texts) {
            jwc_remove_text(d, d->n_texts - 1);
        }
        while (d->n_points > c->dim_seen_points) {
            jwc_remove_point(d, d->n_points - 1);
        }
        jwc_ink_clear(d);
        c->dim_did = 0;
        c->dim_texts = d->n_texts;
        c->dim_arc_val[0] = 0;  /* 帯の角度の値も消える（測定） */

        return 1;
    }
    /* 寸法 ⑦矢印のあとの [ESC]：矢印は残り、[ESC] の札だけが消えて数え箱が追いつく
     * （測定：dim_s0_c7 の最初の [ESC]。線数 32 → 34）。 */
    if (key == 27 && d && c->command == 14 && c->top_item == 7 && c->dim_did && !c->typing) {
        /* 最後の矢印（2 本）だけが消え、数え箱は消したあとの線数（測定：36 → 34）。 */
        int i;

        jwc_ink_settle(d);      /* 消した跡は黒の穴になる（本物は全面を描き直さない） */
        for (i = 0; i < 2 && d->n_lines > 0; i++) {
            jwc_remove_line(d, d->n_lines - 1);
        }
        c->dim_did = 0;
        c->dim_lines0 = d->n_lines;
        c->dim7_hold = 0;
        c->dim7_n = 0;
        c->undo_lines = c->undo_arcs = c->undo_texts = 0;
        return 1;
    }
    /* **取り消し。** 何も持っていないときの [ESC] は、直前の押しで足した
     * ものを消して、その押しの前の段へ戻ります（本物は `＊お待ち下さい＊`
     * のあと描き直す）。一度だけ：控えは使ったら捨てる。 */
    if (key == 27 && d && !c->pressed && !c->typing
        && (c->undo_lines || c->undo_arcs || c->undo_texts)) {
        long k;
        double ex = 0.0, ey = 0.0;
        const int had_line = d->n_lines > 0 && c->undo_lines > 0;

        /* 消す線の終点。＋・／ は取り消したあと、数え箱にその線の長さと
         * 角度を出し、帯もすぐ出す（測定：`長=    50.000` `角度= -28.072`）。 */
        if (had_line) {
            ex = d->lines[d->n_lines - 1].x1;
            ey = d->lines[d->n_lines - 1].y1;
        }
        for (k = 0; k < c->undo_lines && d->n_lines > 0; k++) {
            jwc_remove_line(d, d->n_lines - 1);
        }
        for (k = 0; k < c->undo_arcs && d->n_arcs > 0; k++) {
            jwc_remove_arc(d, d->n_arcs - 1);
        }
        for (k = 0; k < c->undo_texts && d->n_texts > 0; k++) {
            jwc_remove_text(d, d->n_texts - 1);
        }
        c->undo_lines = c->undo_arcs = c->undo_texts = 0;
        c->pressed = c->undo_to.pressed;
        c->stage = c->undo_to.stage;
        c->box_done = c->undo_to.box_done;
        c->circ_done = c->undo_to.circ_done;
        c->fix_done = c->undo_to.fix_done;
        /* ＋・／・□ の本体（ovl23 3ab8:0c0d）の始点は、点を読むたびに書き
         * 換わる一つのローカル変数で、[ESC] の取り消しは触らない（decomp
         * の読み：始点待ちの -1 で件数分を消して `goto 1395`＝始点はそのまま
         * 終点待ちへ）。だから取り消し後の始点は、最後に押した（捨てた）始点
         * のまま。それ以外の命令は従来どおり。 */
        if (c->command != 2 && c->command != 3 && c->command != 4) {
            c->x0 = c->undo_to.x0;
            c->y0 = c->undo_to.y0;
        }
        c->x1 = c->undo_to.x1;
        c->y1 = c->undo_to.y1;
        c->escaped = 0;
        c->moved = 1;
        if ((c->command == 2 || c->command == 3) && c->pressed && had_line) {
            measure(c, d, ex, ey);
        }
        /* 取り消したあとは `確定長さ` の線は無い：終点待ちから [ESC] すると
         * 素の `始点指示 … [BS]前項`（測定：func_all plus_s0_c2）。 */
        if (c->command == 2 || c->command == 3) {
            c->fix_done = 0;
            c->line_done = 0;
        }
        /* □ も：取り消したあとは「前に描いた」ではなくなる（測定：box_s0_c1 の 2 回目の [ESC]）。 */
        if (c->command == 4) {
            c->box_drawn = 0;
        }
        if ((c->command == 4 && c->box_fix) || (c->command == 11 && c->circ_fix)) {
            c->esc_gone = 1;
        }
        return 1;
    }
    /* `始点指示 … [BS]前項` の状態で始点を持っているときの [ESC] は、始点を
     * 捨てて**その前の行**（`[ESC]・始点指示 … 確定長さ = …`）に戻るだけ
     * （測定：40mm を引いたあと次の始点を押して [ESC]）。 */
    if (key == 27 && (c->command == 2 || c->command == 3) && c->fix_mode
        && c->pressed && !c->typing) {
        c->pressed = 0;
        c->stage = c->fix_done ? 2 : 0;
        c->moved = 0;
        return 1;
    }
    if (key == 27 && c->command == 8 && c->chb && !c->pressed) {
        c->chb = 0;             /* 面取範囲 の始点で [ESC]：面取 の行へ（測定） */
        c->stage = 0;
        return 1;
    }
    /* 多角形 ②正多角形：「正多角形の角数 = 」の欄を打っている途中（でも
     * 何も打たないままでも）の [ESC] は欄を閉じて `①任意寸法の正多角形|
     * ②寸法指定の正多角形` の行（stage 1）へ戻る（測定：
     * tools/steps_table.py 19 t 2 t 1 t 5 esc -- stage 4 の行が stage 1 と
     * 同じ文字列に戻る）。この下の汎用「取り消し」節（`!c->pressed` で
     * return 0 する）より先に置く：欄を打っている途中は c->pressed が 0 の
     * ままなので、そちらに先に捕まると二度と ESC が落ちてこない。 */
    if (key == 27 && c->command == 19 && c->typing) {
        c->typing = 0;
        c->typed[0] = 0;
        c->typed_n = 0;
        c->stage = 1;
        return 1;
    }
    /* 変形 ③複線化 の `[ESC].間隔 =` 欄：打ちかけを捨てて段 4 の一覧へ戻る
     * だけ（段はすでに 4 なので動かさない）。pressed==2（範囲確定済み）の
     * ままなので、下の汎用「範囲ごと戻す」節（JW_RANGE(c)）に先に捕まると
     * 範囲ごと丸ごと捨ててしまう——他のコマンド固有 ESC と同じ理由でこれより
     * 前に置く（notes/traps.md「汎用取り消し節の先取り」）。 */
    if (key == 27 && c->command == 17 && c->hen_dbl && c->typing) {
        c->typing = 0;
        c->typed[0] = 0;
        c->typed_n = 0;
        return 1;
    }
    if (key == 27) {
        /* [ESC]: the point in hand goes and the command asks for it again.
         * With nothing in hand it writes nothing at all, and a second one
         * after the first writes nothing either -- both measured, so both are
         * "return 0, nothing changed" here. */
        /* 消去：項目を選んだ始点の行（`消去 始点マウス指示 …`）の [ESC] は、消去の最初の行へ
         * （測定：erase_s0_c1 の 2 回目の [ESC]）。 */
        if (c->command == 24 && !c->pressed && c->top_item == 3) {
            c->top_item = 0;            /* 設定範囲 の始点の行の [ESC] は線変更の最初の行へ */
            c->top_right = 0;
            return 1;
        }
        if (c->command == 25 && !c->pressed && (c->top_item || c->span)) {
            c->span = 0;
            c->top_item = 0;
            c->top_right = 0;
            c->er_pt = 0;
            return 1;
        }
        /* 変形 の始点の行（①パラメトリック変形 の最初）での [ESC] は、5 項目の最初の行へ
         * （測定のみ・decomp 未確認：henkei_plain の 2 回目の [ESC]）。 */
        if (c->command == 17 && !c->pressed && (c->again || c->hen_dbl)) {
            c->again = 0;
            c->hen_dbl = 0;             /* ③複線化 の始点の行の [ESC] も 5 項目の最初の行へ（測定：henkei_s0_c3） */
            return 1;
        }
        /* 線変更 ①指定範囲内変更：始点の行での [ESC] は最初の行 `1本線・円変更 マウス指示` へ（測定：linechg_s0_c1）。 */
        if (c->command == 24 && c->lc_range && !c->lc_attr && !c->pressed) {
            c->lc_range = 0;
            return 1;
        }
        if (!c->pressed || c->escaped) {
            return 0;
        }
        if (JW_RANGE(c)) {
            /* A command that takes a range goes all the way back to the line
             * it came up with -- `◇消去範囲 始点指示 |①範囲内消去|…` with a
             * `・` at column 6 -- whether the range was half taken or fixed.
             * Measured on 消去 from both. */
            /* 何も選ばずに置いたあと（[ESC] の札が無い行）の [ESC] は何も起きない（測定：move_s0_c1_v）。 */
            if (JW_MOVE_CMD(c->command) && c->mv_none && c->mv_undo && c->stage == 9) {
                return 0;
            }
            /* 複写・移動 は段を一つずつ戻す（範囲ごとは捨てない）。段 9
             * （再配置待ち）はまず最後の一回を取り消してから段 6（置く場所を
             * 聞く行）へ、段 7（②数値位置 の欄）は打ちかけを捨てて段 4
             * （①〜⑦ の一覧）へ、段 6 は段 5（基準点を聞く行）へ、段 5 は
             * 段 4 へ、段 4 は段 3（追加・除外）へ（測定：150,130-245,170 の
             * 範囲で、複写・移動 の両方）。段 3 の [ESC] だけは下の「範囲ごと
             * 戻す」に落として始点指示まで戻す（測定：同じ範囲で左閉じ後の
             * [ESC]）。 */
            if (JW_MOVE_CMD(c->command) && c->stage == 9) {
                if (c->mv_undo && d) {
                    place_undo(c, d);
                }
                c->stage = 6;
                return 1;
            }
            if (JW_MOVE_CMD(c->command) && c->stage == 7) {
                c->typing = 0;
                c->typed[0] = 0;
                c->typed_n = 0;
                c->stage = 4;
                return 1;
            }
            /* ③数値倍率：段 18（倍率の欄）→ 17（基準点位置）→ 4（①〜⑦の一覧）
             * （測定のみ・decomp 未確認：escfz_C_72、tmp の cm 系）。 */
            /* ⑤反転(10)・⑥回転(13→14)・④マウス倍率(21→22→23) も一段ずつ戻って、最初の段は
             * ①〜⑦ の一覧へ（測定のみ・decomp 未確認：tmp の mm 系）。 */
            if (JW_MOVE_CMD(c->command)
                && (c->stage == 10 || c->stage == 13 || c->stage == 14 || c->stage == 21
                    || c->stage == 22 || c->stage == 23)) {
                c->typing = 0;
                c->typed[0] = 0;
                c->typed_n = 0;
                c->stage = (c->stage == 14 || c->stage == 22 || c->stage == 23) ? c->stage - 1
                         : 4;
                return 1;
            }
            if (JW_MOVE_CMD(c->command) && c->stage == 19) {
                c->typing = 1;
                c->typed[0] = 0;
                c->typed_n = 0;
                c->stage = 18;
                return 1;
            }
            if (JW_MOVE_CMD(c->command) && (c->stage == 17 || c->stage == 18)) {
                c->typing = 0;
                c->typed[0] = 0;
                c->typed_n = 0;
                c->stage = c->stage == 18 ? 17 : 4;
                return 1;
            }
            if (JW_MOVE_CMD(c->command) && c->stage == 6) {
                c->stage = 5;
                return 1;
            }
            if (JW_MOVE_CMD(c->command) && c->stage == 5) {
                c->stage = 4;
                return 1;
            }
            if (JW_MOVE_CMD(c->command) && c->stage == 4) {
                c->stage = 3;
                return 1;
            }
            /* 変形 ①パラメトリック変形：複写・移動と同じ「段を一つずつ戻す」
             * 規則。根拠は src/henkei.h（実機撮り）の段3〜9・18〜20 すべてに
             * src/copy.h と同じ文言・同じ段番号で `[ESC]` 札があること
             * （tools/henkei_table.py の docstring も「道は複写の cell ごと
             * に同じ」と明記）。段遷移そのものは tools/cmdstate.mjs で内部
             * 状態として意図どおり動くことを確認済みだが、今夜は
             * tmp/sroot.lock の競合で tools/functest.sh による実機との
             * 直接突き合わせが完了できなかった（測定のみ・decomp未確認の
             * 一段下——probe_henkei.txt にシナリオ済み、次回 functest.sh で
             * 確認すること）。②包絡処理変形・③複線化・④線記号変形 は
             * 自分の経路（hen_env・hen_dbl・hen_kigou）を持つので対象外。 */
            if (c->command == 17 && !c->hen_env && !c->hen_dbl
                && !c->hen_kigou && c->stage == 7) {
                c->typing = 0;
                c->typed[0] = 0;
                c->typed_n = 0;
                c->stage = 4;
                return 1;
            }
            if (c->command == 17 && !c->hen_env && !c->hen_dbl
                && !c->hen_kigou && c->stage == 6) {
                c->stage = 5;
                return 1;
            }
            if (c->command == 17 && !c->hen_env && !c->hen_dbl
                && !c->hen_kigou && c->stage == 5) {
                c->stage = 4;
                return 1;
            }
            if (c->command == 17 && !c->hen_env && !c->hen_dbl
                && !c->hen_kigou && c->stage == 4) {
                c->stage = 3;
                return 1;
            }
            /* 複写・移動を置いたあとなら、まず最後の一回を取り消します。
             * （段 9・7・6・5・4 は上で先に処理するので、ここまで来るのは
             * 段 3 の範囲ごと戻すときだけ。） */
            if (JW_MOVE_CMD(c->command) && c->mv_undo && d) {
                place_undo(c, d);
            }
            c->pressed = 0;
            c->stage = 0;
            c->n_flip = 0;
            c->cleared = 0;
            c->moved = 0;
            free(c->sel_line);
            free(c->sel_arc);
            free(c->sel_text);
            c->sel_line = c->sel_arc = c->sel_text = 0;
            /* 線変更 ③属性設定：[ESC] は 設定範囲 の始点の行（③を選んだ行）へ（測定：linechg_s0_c3）。 */
            if (c->command == 24 && c->lc_attr) {
                c->lc_range = 0;
                c->lc_attr = 0;
                c->top_item = 3;
                if (c->hit_kind) {
                    c->stage = 1;       /* 線を拾ったあとなら、次の [ESC] で出る最初の行は [ESC] 付き（測定：linechg_s1_c3） */
                }
            }
            /* 消去：項目を選んでから範囲を取っていたら、[ESC] はその項目の始点の行へ（測定：erase_s0_c1）。 */
            if (c->command == 25 && c->er_item) {
                c->top_item = c->er_item;
                c->er_pt = 0;
            }
            /* 消去：`復活出来ません |①実行|②中止|` で一度左を押して
             * `消去 再度(L)` まで進んだあとの [ESC] は、段 0 の始点の行へ
             * 戻るだけでなく「再度」の積みも捨てる。捨てないと、同じ
             * 消去を ESC で中断してから範囲を取り直したとき、次の左の
             * 一押し目が（本当は二押し目でなければ消さないのに）いきなり
             * 消してしまう（測定：tools/cases/probe_erase.txt
             * er_escbug_no_premature_delete。本物は 150,130-245,170 を
             * 閉じて 1 回左を押しただけでは 43 本のまま、[ESC] を挟んで
             * 同じ範囲を取り直し 1 回左を押しても依然 43 本。直す前の
             * 移植はここで 3 本消して 40 本になっていた）。 */
            if (c->command == 25) {
                c->erase_again = 0;
            }
            /* 変形 ①は 始点の行（`変形範囲 始点マウス指示 (L)線・円 (R)線・円・文字`）へ戻る
             * （測定のみ・decomp 未確認：henkei_plain の最初の [ESC]）。 */
            if (c->command == 17 && !c->hen_env && !c->hen_dbl && !c->hen_kigou) {
                c->again = 1;
            }
            return 1;
        }
        /* Only the commands whose "ask again" line has been read off the
         * original (src/esc.h).  What [ESC] does in the others -- 複線 in the
         * middle of a number, 線変更 after it has already changed something --
         * is not measured, so it is left alone rather than guessed at. */
        if (c->command != 2 && c->command != 3 && c->command != 4
            && c->command != 11 && c->command != 12) {
            return 0;
        }
        /* ＋・／ で 1 本でも引いたあとなら、`確定長さ` の行へ（最後に
         * 引いた線の長さと角度。測定：plus_plain の 11 段目）。 */
        if ((c->command == 2 || c->command == 3) && c->line_done
            && !c->fix_mode) {
            c->pressed = 0;
            c->fix_mode = 1;
            c->fix_done = 1;
            c->stage = 2;
            c->moved = 0;
            c->line_esc_back = 1;
            return 1;
        }
        /* （ は終点待ちなら始点待ちへ一段だけ戻る（測定：func_all arc_plain、
         * `（ 終点指示` → `[ESC] （ 始点指示`、次の [ESC] で中心へ）。 */
        if (c->command == 12 && c->pressed == 2 && !c->arc3) {
            c->pressed = 1;
            c->stage = 1;
            c->moved = 0;
            return 1;
        }
        /* 中心を持っているだけなら、弧を描いたあとの行（`[ESC]・○中心点指示
         * … 半径=`、段 3）へ。まだ一本も描いていなければいつもの道（測定）。 */
        /* □ も同じ：始点だけ持っていて、前に一つ描いていれば描いたあとの
         * 行（`[ESC]・始点指示 … 確定寸法= 前の寸法`、段 2）へ（測定：
         * func_all box_plain）。 */
        if (c->command == 4 && c->pressed == 1 && c->box_drawn && !c->box_fix) {
            c->pressed = 0;
            c->stage = 2;
            c->box_esc_back = 1;
            c->num[0] = c->box_last[0];
            c->num[1] = c->box_last[1];
            c->moved = 0;
            return 1;
        }
        if (c->command == 12 && c->pressed == 1 && !c->arc3 && c->arc_drawn) {
            c->pressed = 0;
            c->stage = 3;
            c->num[0] = c->arc_r_shown;     /* 半径= は描いた弧のもの */
            c->moved = 0;
            return 1;
        }
        c->pressed = 0;
        c->escaped = 1;
        c->moved = 0;
        if (c->command == 11) {
            c->circ_multi = 1;      /* 中心を捨てると ③重円 の数も戻る（測定：circle_s1_c3） */
        }
        return 1;
    }
    if (c->command == 14 && c->dim_val && key >= JW_KEY_F1
        && key <= JW_KEY_F10) {
        /* ⑧値変's 変更文字種類[Fn].  **Before the `typing` gate**: the mode
         * is not typing anything until a value has been pressed. */
        c->dim_val_size = key - JW_KEY_F1 + 1;
        return 1;
    }
    if (key == JW_KEY_F2 && JW_RANGE(c) && c->stage == 3) {
        c->cleared = 1;
        c->n_flip = 0;
        return 1;
    }
    if (c->command == 23 && c->hand && c->stage == 61
        && key >= JW_KEY_F1 && key <= JW_KEY_F10) {
        /* [F1]〜[F10] で 作図ｽﾃｯﾌﾟ が 1〜10 ﾄﾞｯﾄ（測定）。 */
        c->hand_step = key - JW_KEY_F1 + 1;
        return 1;
    }
    if (!c->typing) {
        return 0;
    }
    if (c->command == 12 && c->arc_ask) {
        /* （ の `角度 =` の欄。[Enter] で角度が決まり、`） 終点指示` に
         * 戻ります（測定：120 のあと下を押すと 240..0、上を押すと 0..120）。 */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n && c->arc_ask == 2) {
                c->arc_r = (float)field_eval(c->typed);
                c->arc_rfix = 1;
            } else if (c->typed_n) {
                c->arc_ang = (float)field_eval(c->typed);
                c->arc_fix = 1;
            }
            c->typing = 0;
            c->arc_ask = 0;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 11 && c->circ_ask) {
        /* ○ の `半 径 =` の欄。[Enter] で半径が決まり、矢の所に置く
         * `● 円位置指示` になります。 */
        if (key == 13 || key == 10) {
            /* 何も打たずに [Enter] は前の半径、0 以下は受けない（測定）。 */
            double r = c->circ_r;

            c->circ_bad = 0;
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                r = (float)field_eval(c->typed);
            }
            if (r <= 0.0) {
                c->typed[0] = 0;
                c->typed_n = 0;
                c->circ_bad = 1;
                return 1;
            }
            c->circ_r = r;
            c->circ_fix = 1;
            c->num[0] = r;
            c->num[1] = r * 2.0;
            c->dec[0] = c->dec[1] = 3;
            c->circ_done = 0;
            c->circ_mode = 0;
            c->typing = 0;
            c->circ_ask = 0;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 4 && c->box_ask == 2) {
        /* □ の `角度 =` の欄。[Enter] で角度が決まり、2 点の四角が傾く
         * `始点指示 … [BS]前項` へ（測定）。何も打たずに [Enter] は前の角度。 */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                c->box_ang = (float)field_eval(c->typed);
            }
            c->box_rot = 1;
            c->box_mode = 1;
            c->box_fix = 0;
            c->typing = 0;
            c->box_ask = 0;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 4 && c->box_ask) {
        /* □ の `寸法 = ` の欄。`横,縦` を打って [Enter] で大きさが決まり、
         * 矢の所に置く `■ 終点指示` になります。数が一つなら縦も同じ
         * （複写 の ③数値倍率 と同じ読み方。□ では未測定）。 */
        if (key == 13 || key == 10) {
            /* 打たなかった側は前の数のまま（測定：`60,` で 60×1000、
             * `,40` で 1000×40、何も打たずに [Enter] で 1000×1000）。
             * 0 以下はどちらでも受けずに欄を出し直す（`0,0`・`-60,40`）。 */
            const char *comma;
            double w = c->box_w, h = c->box_h;

            c->typed[c->typed_n] = 0;
            comma = strchr(c->typed, ',');
            if (c->typed_n && c->typed[0] != ',') {
                w = (float)field_eval(c->typed);
                if (!comma) {
                    h = w;
                }
            }
            if (comma && comma[1]) {
                h = (float)field_eval(comma + 1);
            }
            if (w <= 0.0 || h <= 0.0) {
                c->typed[0] = 0;
                c->typed_n = 0;
                return 1;
            }
            c->box_w = w;
            c->box_h = h;
            c->box_fix = 1;
            c->num[0] = w;
            c->num[1] = h;
            c->dec[0] = c->dec[1] = 3;
            /* box_done（行の頭の [ESC]）はそのまま：置いたあとに大きさを
             * 打ち直しても本物は [ESC] を残します（測定）。 */
            c->box_mode = 0;
            c->typing = 0;
            c->box_ask = 0;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key) && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if ((c->command == 2 || c->command == 3)
        && (c->ask_kind == 1 || c->ask_kind == 2)) {
        /* ＋・／ の `寸法 = ` の欄。[Enter] で長さが決まり、`始点指示` に
         * 戻って、**長さは固定のまま**になります（測定：50 [Enter] のあと
         * 線を引くと 50mm で、次の始点を待つ）。 */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            /* **0 以下の長さは受けません**：欄が空になってもう一度聞きます
             * （測定：0 と -50 で `[ESC]  寸法 = ` が出直す）。**何も打たずに
             * [Enter]** は欄の右に出ている数（前回の長さ・角度）で決まります
             * （測定：`[  1000.000mm]` のまま `始点指示 … [BS]前項` へ）。
             * 角度は 0 も負も受けます。 */
            if (c->ask_kind == 1) {
                const double v = c->typed_n ? (float)field_eval(c->typed) : c->ask_len;

                if (v <= 0.0) {
                    c->typed[0] = 0;
                    c->typed_n = 0;
                    return 1;
                }
                c->ask_len = v;
                c->fix_len = 1;
            } else {
                if (c->typed_n) {
                    c->ask_ang = (float)field_eval(c->typed);
                }
                c->fix_angle = 1;
            }
            c->fix_mode = 1;
            c->fix_done = 0;
            c->typing = 0;
            c->ask_kind = 0;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (key >= JW_KEY_F1 && key <= JW_KEY_F5) {
        /* The five the top line offers.  They belong to the program's state,
         * like the numbers in src/prompt.h, and are here as the original had
         * them when src/typed.h was captured. */
        sprintf(c->typed, "%g", F[key - JW_KEY_F1]);
        c->typed_n = (int)strlen(c->typed);
        key = 13;
    }
    if (c->command == 14 && c->dim_val == 2 && c->stage == 8) {
        /* ⑧値変's field: what is in it to start with is the value that
         * was pressed (now kept live in `dim_val_buf`), and [Enter] writes
         * it back **in place** with the 変更文字種類 -- measured, text 13
         * stays text 13.
         *
         * **The keys overwrite the old value a cell at a time and what
         * they do not reach stays.**  Measured: `99` typed into `250`
         * leaves `990` (cell 0/1 overwritten, cell 2's `0` untouched).
         *
         * **[[BS]] is not the mirror of typing -- it edits the live
         * string, not just the typed count.**  Measured (escaudit6):
         * `99` then one [BS] leaves `90` (not `950`), and a single `9`
         * then one [BS] leaves `50` (not `250`) -- in both cases the
         * character immediately *before* the cursor is deleted out of
         * the whole displayed value and the tail shifts left, same as
         * an ordinary text field's backspace.  Before this fix [BS] only
         * shrank the separately-tracked "typed so far" count and kept
         * appending the untouched tail of the ORIGINAL text, which
         * reproduced the wrong (longer) string. 測定のみ・decomp 未確認。 */
        if (key == 13 || key == 10) {
            if (c->dim_val_dirty) {
                char out[64];

                jwc_dim_text(out, (long)sizeof out, atof(c->dim_val_buf), 0,
                             c->dim_dec, c->dim_comma_on, c->dim_zero_on);
                jwc_set_text(d, c->dim_val_k, out,
                             (unsigned char)(c->dim_val_size
                                             ? c->dim_val_size
                                             : d->dim_size));
            }
            c->typing = 0;
            c->dim_val = 1;
            c->stage = 7;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->dim_val_buf[0] = 0;
            c->dim_val_pos = 0;
            c->dim_val_dirty = 0;
            return 1;
        }
        if (key == 8) {
            if (c->dim_val_pos > 0) {
                int i = c->dim_val_pos - 1;

                for (; c->dim_val_buf[i]; i++) {
                    c->dim_val_buf[i] = c->dim_val_buf[i + 1];
                }
                c->dim_val_pos--;
                c->dim_val_dirty = 1;
                /* `typed`/`typed_n` stay in step for src/ui.c's cursor
                 * cell -- the overlay chars it shows for the untouched
                 * tail can go stale after a [BS] shift (cosmetic only,
                 * screen not re-verified: notes/traps.md). */
                memcpy(c->typed, c->dim_val_buf, (size_t)c->dim_val_pos);
                c->typed[c->dim_val_pos] = 0;
                c->typed_n = c->dim_val_pos;
            }
            return 1;
        }
        if (key >= 0x20 && key <= 0xff
            && c->dim_val_pos < (int)sizeof c->dim_val_buf - 1) {
            const int len = (int)strlen(c->dim_val_buf);

            c->dim_val_buf[c->dim_val_pos] = (char)key;
            if (c->dim_val_pos == len) {
                c->dim_val_buf[c->dim_val_pos + 1] = 0;
            }
            c->dim_val_pos++;
            c->dim_val_dirty = 1;
            memcpy(c->typed, c->dim_val_buf, (size_t)c->dim_val_pos);
            c->typed[c->dim_val_pos] = 0;
            c->typed_n = c->dim_val_pos;
        }
        return 1;
    }
    if (c->command == 17 && c->hen_dbl && c->stage == 4 && c->typing) {
        /* ③間隔 の欄。[Enter] で紙のミリが決まって、行が戻ります。 */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                c->hen_dbl_gap = field_eval(c->typed);
            }
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 26 && c->tan_on
        && (c->stage == 39 || c->stage == 43)) {
        /* ③１円１点・①１線１円 の ①接円半径 の欄。 */
        const int back = c->stage == 39 ? 36 : 40;

        if (key == 27) {            /* 欄の [ESC] は打ちかけを捨てて 1 つ前の段へ（測定のみ：escfz_e_35） */
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = back;
            return 1;
        }
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                c->tan_r = field_eval(c->typed);
            }
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = back;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 26 && c->tan_on && c->stage == 35) {
        /* ②１点１線 の ①接円半径 の欄（戻る段だけ違います）。 */
        if (key == 27) {
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 32;
            return 1;
        }
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                c->tan_r = field_eval(c->typed);
            }
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 32;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 26 && c->tan_on && c->stage == 31) {
        /* ⑤２円 の ①接円半径 の欄（戻る段だけ違います）。 */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                c->tan_r = field_eval(c->typed);
            }
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 27;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 26 && c->tan_on && c->stage == 26) {
        /* ④２線 の ①接円半径 の欄（段 23 と同じ中身で、戻る段だけ違う）。 */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                c->tan_r = field_eval(c->typed);
            }
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 24;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 26 && c->tan_on && c->stage == 23) {
        /* ①接円半径 の欄。空のまま [Enter] なら前のまま。 */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                c->tan_r = field_eval(c->typed);
            }
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 20;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 23 && c->spl && c->stage == 35) {
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n && atoi(c->typed) > 0) {
                c->spl_div = atoi(c->typed);
            }
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 34;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (key >= '0' && key <= '9' && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 23 && c->chain && c->stage == 54) {
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                c->ch_r = field_eval(c->typed);
            }
            c->ch_r_on = 1;
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 53;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 23 && c->sine == 3 && c->stage == 45) {
        /* ②２次曲線 の 分割 長さ。 */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                c->sine_div = field_eval(c->typed);
            }
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            sine_draw(c, d);
            c->stage = 40;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 23 && c->sine
        && (c->stage == 12 || c->stage == 13 || c->stage == 16)) {
        /* ｻｲﾝ曲線 の三つの欄。空のまま [Enter] は前回と同じです。 */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                const double v = field_eval(c->typed);

                if (c->stage == 12) {
                    c->sine_cycle = v;
                } else if (c->stage == 13) {
                    c->sine_amp = v;
                } else {
                    c->sine_div = v;
                }
            }
            c->typed[0] = 0;
            c->typed_n = 0;
            if (c->stage == 12) {
                c->stage = 13;
            } else if (c->stage == 13) {
                c->typing = 0;
                c->stage = 14;
            } else {
                c->typing = 0;
                sine_draw(c, d);
                c->stage = 10;
            }
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 26 && c->tan_on && c->stage == 12) {
        /* ④角度指定 の角度。[Enter] で円を訊きにいきます。 */
        if (key == 13 || key == 10) {
            /* 空のまま [Enter] を押すと「前回と同じ」が使われます。 */
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                c->tan_deg = field_eval(c->typed);
                c->tan_prev = c->tan_deg;
            } else {
                c->tan_deg = c->tan_prev;
            }
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 13;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 14 && c->dim_ck && c->stage == 10) {
        /* ③書込角度's field.  [Enter] takes what is typed and the line
         * goes back to 円マウス指示.  The `[  90.000\xdf]` beside it is
         * that field's own 前回と同じ: it starts at 90, follows a typed
         * value (30 typed makes it `[  30.000\xdf]`) and the `0 度` cell
         * leaves it alone -- all three measured. */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            c->dim_ck_deg = c->typed_n ? field_eval(c->typed) : 0.0;
            if (c->typed_n) {
                c->dim_ck_prev = c->dim_ck_deg;
            }
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 9;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 14 && c->top_item == 3) {
        /* ③任意方向's angle.  The field takes digits, a point and a
         * minus, and [Enter] turns the road on. */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            jw_cmd_dim_angle(c, c->typed_n ? field_eval(c->typed) : 0.0);
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)
            && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 19) {
        /* 正多角形's number of sides.  Three or more; the original's own
         * `[5]` is what it offers.  (打っている途中の [ESC] は、この下の
         * 汎用「取り消し」より前、src/cmd.c の `if (key == 27) { ... }`
         * （`!c->pressed || c->escaped` で return 0 するところ）の手前に
         * 置いてある -- ここに置くと command==19 もその汎用節の
         * `return 0;` に先に捕まって、二度と ESC が落ちてこない。) */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n && atoi(c->typed) >= 3) {
                c->sides = atoi(c->typed);
            }
            c->typing = 0;
            c->stage = 4;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (key >= '0' && key <= '9' && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 21) {
        /* 分割's count.  N divisions leave N-1 仮点 between the two points --
         * measured on SAMPLE0, where typing 4 takes `残 100` down to `残 97`. */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                c->divisions = atoi(c->typed);
            }
            c->typing = 0;
            divide_points(c, d);
            /* Its own line again, with the count it used beside the counts
             * and `残` down by however many points it left -- src/typed.h's
             * stage 4. */
            c->stage = 4;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (key >= '0' && key <= '9') {
            if (FIELD_ROOM(c)) {
                c->typed[c->typed_n++] = (char)key;
                c->typed[c->typed_n] = 0;
            }
            return 1;
        }
        return 1;
    }
    if (JW_MOVE_CMD(c->command) && c->scaling == 2) {
        /* ③数値倍率's pair, `X,Y`.  One number on its own means both, the
         * way ②数値位置's distance does.  The line also offers
         * `前回と同じ ﾏｳｽ(R)`, which is not done. */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                const char *comma = strchr(c->typed, ',');

                c->scale_x = field_eval(c->typed);
                c->scale_y = comma ? field_eval(comma + 1) : c->scale_x;
            }
            c->typing = 0;
            c->scaling = 3;
            c->stage = 19;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (FIELD_CHAR(key)) {
            if (FIELD_ROOM(c)) {
                c->typed[c->typed_n++] = (char)key;
                c->typed[c->typed_n] = 0;
            }
            return 1;
        }
        return 1;
    }
    if (JW_MOVE_CMD(c->command) && c->rotate == 2) {
        /* ⑥回転's angle, in degrees, counter-clockwise.  The line offers
         * `│0 度 ﾏｳｽ(L)│前回と同じ ﾏｳｽ(R) │[F1] ﾏｳｽ角度│` as well; none of
         * those three is done. */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                c->rot_deg = field_eval(c->typed);
            }
            c->typing = 0;
            c->rotate = 3;
            c->stage = 15;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if FIELD_CHAR(key) {
            if (FIELD_ROOM(c)) {
                c->typed[c->typed_n++] = (char)key;
                c->typed[c->typed_n] = 0;
            }
            return 1;
        }
        return 1;
    }
    if (c->command == 17 && c->stage == 18) {
        /* ③数値倍率's `X,Y`, one number on its own meaning both. */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                const char *comma = strchr(c->typed, ',');

                c->scale_x = field_eval(c->typed);
                c->scale_y = comma ? field_eval(comma + 1) : c->scale_x;
            }
            c->typing = 0;
            c->scaling = 3;
            c->stage = 19;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (((key >= '0' && key <= '9') || key == '.' || key == ','
             || key == '-') && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 17 && c->stage == 7) {
        /* 変形's distance, the same field and the same rule. */
        if (key == 13 || key == 10) {
            const char *comma;

            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                d->copy_x_mm = field_eval(c->typed);
                comma = strchr(c->typed, ',');
                d->copy_y_mm = comma ? field_eval(comma + 1) : d->copy_x_mm;
            }
            c->typing = 0;
            c->n0_lines = d->n_lines;
            c->n0_arcs = d->n_arcs;
            c->n0_texts = d->n_texts;
            c->stage = 8;
            henkei_by_mm(c, d);
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (((key >= '0' && key <= '9') || key == '.' || key == ','
             || key == '-') && FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (JW_MOVE_CMD(c->command) && c->stage == 7) {
        /* 複写 and 移動's distance: `X,Y` in millimetres of paper, and one number on
         * its own means both.  Measured -- typing `2` alone moves the copy
         * two millimetres each way. */
        if (key == 13 || key == 10) {
            const char *comma;

            c->typed[c->typed_n] = 0;
            if (c->typed_n) {
                d->copy_x_mm = field_eval(c->typed);
                comma = strchr(c->typed, ',');
                d->copy_y_mm = comma ? field_eval(comma + 1) : d->copy_x_mm;
            }
            c->typing = 0;
            c->stage = 8;
            copy_by_mm(c, d);
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if ((key >= '0' && key <= '9') || key == '.' || key == ','
            || key == '-') {
            if (FIELD_ROOM(c)) {
                c->typed[c->typed_n++] = (char)key;
                c->typed[c->typed_n] = 0;
            }
            return 1;
        }
        return 1;
    }
    if (key == 13 || key == 10) {               /* [Enter] */
        c->typed[c->typed_n] = 0;
        c->gap = c->typed_n ? field_eval(c->typed) : c->gap_hist[0];   /* 何も打たずに [Enter] は前回の間隔（測定：escfz_F_64） */
        gap_remember(c);
        c->typing = 0;
        c->stage = 2;
        /* The interval is shown twice and to two different numbers of
         * decimals: two in the band while the side is being chosen, three on
         * the command's own line once the copy is drawn.  Both come out of
         * src/typed.h through the same %*.*f, so it is kept in both. */
        c->num[0] = c->num[1] = c->gap;
        /* The band's field is always two decimals; the command's own line
         * follows the drawing's scale, like every other length the panel
         * shows.  SAMPLE0 (S=1/1) writes `[      20.000]` and SAMPLE1
         * (S=1/100) `[      500.00]`, and both write `.00` in the band. */
        c->dec[0] = 2;
        c->dec[1] = d ? d->decimals : 3;
        return 1;
    }
    if (key == 8) {                             /* [BS] */
        if (c->typed_n > 0) {
            c->typed[--c->typed_n] = 0;
        }
        return 1;
    }
    if ((key >= '0' && key <= '9') || key == '.') {
        if (FIELD_ROOM(c)) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    return 1;                   /* while it is asking, the keys are its own */
}

/* Where two infinite lines cross.  Returns 0 when they are parallel -- the
 * cross product of the two directions is the denominator and it is zero. */
static int cross_at(const JwcLine *a, const JwcLine *b, double *x, double *y)
{
    const double ax = a->x1 - a->x0, ay = a->y1 - a->y0;
    const double bx = b->x1 - b->x0, by = b->y1 - b->y0;
    const double den = ax * by - ay * bx;
    double t;

    if (den == 0.0) {
        return 0;
    }
    t = ((b->x0 - a->x0) * by - (b->y0 - a->y0) * bx) / den;
    *x = a->x0 + t * ax;
    *y = a->y0 + t * ay;
    return 1;
}

/* One line of a corner join: the end that is **not** on the pressed point's
 * side of the corner moves to the corner.  Measured -- see the comment in
 * jw_cmd_press. */
static void corner_cut(const JwcLine *l, double cx, double cy,
                       double px, double py, float *kx, float *ky)
{
    const double dx = l->x1 - l->x0, dy = l->y1 - l->y0;
    const double n = dx * dx + dy * dy;
    /* Everything along the line as one parameter, so that "between" is a
     * comparison of two numbers whichever way the line runs. */
    const double t0 = 0.0, t1 = 1.0;
    const double tc = n > 0.0 ? ((cx - l->x0) * dx + (cy - l->y0) * dy) / n : 0.0;
    const double tp = n > 0.0 ? ((px - l->x0) * dx + (py - l->y0) * dy) / n : 0.0;
    /* Keep the end that leaves the pressed point inside what is left.  With
     * the corner beyond both ends neither piece holds it, and the far end is
     * the one that does not move. */
    const int keep0 = (tp <= tc) == (t0 <= tc);

    *kx = keep0 ? l->x0 : l->x1;
    *ky = keep0 ? l->y0 : l->y1;
    (void)t1;
}

/* 中心線's line: the bisector of two lines, as a point on it and a direction.
 *
 * Two lines that cross have two bisectors, and the one taken is the one
 * between the sides that were pressed -- walk from the crossing toward each
 * press and add the two directions.  Measured on SAMPLE0: line 5 (horizontal,
 * y=305.616) pressed at x=99 and line 0 (vertical, x=40.973) pressed at
 * y=163 give a line through (40.973,305.616) in the direction (1,-1), and the
 * two points given afterwards land on it at (131.295,215.295) and
 * (181.295,165.295) -- their perpendicular feet exactly.
 *
 * Parallel lines have no crossing, and then it is the line half way between
 * them: line 5 (y=305.616) with line 4 (y=61.441) gives y=183.529. */
static int bisector(const JwcLine *a, const JwcLine *b,
                    double pax, double pay, double pbx, double pby,
                    double *ox, double *oy, double *dx, double *dy)
{
    const double ax = a->x1 - a->x0, ay = a->y1 - a->y0;
    const double bx = b->x1 - b->x0, by = b->y1 - b->y0;
    const double la = sqrt(ax * ax + ay * ay), lb = sqrt(bx * bx + by * by);
    double cx, cy, ua, ub, sx, sy;
    JwcLine ta = *a, tb = *b;

    if (la <= 0.0 || lb <= 0.0) {
        return 0;
    }
    if (!cross_at(&ta, &tb, &cx, &cy)) {
        /* Parallel: half way between, running the way the first one does. */
        const double t = ((b->x0 - a->x0) * ax + (b->y0 - a->y0) * ay) / (la * la);
        const double fx = a->x0 + t * ax, fy = a->y0 + t * ay;

        *ox = (fx + b->x0) / 2.0;
        *oy = (fy + b->y0) / 2.0;
        *dx = ax / la;
        *dy = ay / la;
        return 1;
    }
    /* Which way along each line the press was. */
    ua = ((pax - cx) * ax + (pay - cy) * ay) < 0.0 ? -1.0 : 1.0;
    ub = ((pbx - cx) * bx + (pby - cy) * by) < 0.0 ? -1.0 : 1.0;
    sx = ua * ax / la + ub * bx / lb;
    sy = ua * ay / la + ub * by / lb;
    if (sx == 0.0 && sy == 0.0) {
        return 0;               /* the two presses face each other exactly */
    }
    *ox = cx;
    *oy = cy;
    *dx = sx;
    *dy = sy;
    return 1;
}

/* Point a unit direction along a line rather than at a press: the two are
 * within a few dots of each other, and the line is the one that counts. */
static void project_dir(const JwcLine *l, double *dx, double *dy)
{
    const double ax = l->x1 - l->x0, ay = l->y1 - l->y0;
    const double n = sqrt(ax * ax + ay * ay);

    if (n <= 0.0) {
        return;
    }
    if (*dx * ax + *dy * ay < 0.0) {
        *dx = -ax / n;
        *dy = -ay / n;
    } else {
        *dx = ax / n;
        *dy = ay / n;
    }
}

/* A line keeps the end furthest from the corner and stops at the point given.
 * **The new point goes first** whichever end it replaced: SAMPLE0's line 0
 * runs (40.973,44)-(40.973,323.057) and comes back as
 * (40.973,268.618)-(40.973,44), which is the far end second. */
static void keep_far(Jwc *d, long k, double cx, double cy, float px, float py)
{
    const JwcLine *l;
    double d0, d1;

    if (k < 0 || k >= d->n_lines) {
        return;
    }
    l = &d->lines[k];
    d0 = (l->x0 - cx) * (l->x0 - cx) + (l->y0 - cy) * (l->y0 - cy);
    d1 = (l->x1 - cx) * (l->x1 - cx) + (l->y1 - cy) * (l->y1 - cy);
    if (d0 > d1) {
        jwc_relink_line(d, k, px, py, l->x0, l->y0);
    } else {
        jwc_relink_line(d, k, px, py, l->x1, l->y1);
    }
}

/* 正多角形: n corners on a circle, starting at (or next to) the vertex given
 * and going counter-clockwise.
 *
 * **頂点 (c->pg_edge==0)**: the point given *is* a corner, so the circle's
 * radius is the distance to it and the first corner sits right on it
 * (a0 = atan2(dy,dx), no extra phase).
 *
 * **辺中 (c->pg_edge==1, DS:[0x53f4]==1 in the decomp)**: the point given is
 * the midpoint of an edge, not a corner.  Confirmed on file-linear
 * `0x2d8c1`-`0x2d916` (ovl22): the half-angle `pi/n` is computed once
 * (`DS:0xa128`=2*pi read as a double constant, halved, then `cos(pi/n)`
 * kept in `[bp-0x112]`) and the picked distance is divided by it
 * (`[bp-0x42] = [bp-0x42] / [bp-0x112]`, file-linear `0x2ddc9`) --
 * i.e. **R = r / cos(pi/n)**.  The vertex-angle phase (does the first
 * corner sit at a0+pi/n, a0+3*pi/n, ...?) was the one piece decomp
 * disassembly alone could not settle (RESUME.md 10-e 追補その3); it is
 * now settled by measurement (RESUME.md 10-e 追補その4): driving the
 * real binary with dosv_emu_cpp's `DOSEMU_BP=+22b2:75fe,+22b2:75ec,
 * +22b2:7658 DOSEMU_BPDBL=2` (cos/sin/atan2) through 多角形→②正多角形→
 * ①任意寸法, sides=6, centre (300,250), picked point (400,250) (so
 * a0=atan2(0,100)=0) and the 辺中 toggle, the cos/sin arguments logged
 * were exactly pi/6, pi/2, 5pi/6, 7pi/6, 3pi/2, 11pi/6 and (wrap) pi/6
 * again -- i.e. a0 + pi/n + i*(2*pi/n) for i=0..n.  So the phase is a
 * plain half-step, `a0 + pi/n`, nothing more exotic. */
static void polygon(JwCmd *c, Jwc *d, double px, double py)
{
    const double dx = px - c->x0, dy = py - c->y0;
    double r = sqrt(dx * dx + dy * dy);
    const double a0 = atan2(dy, dx);
    const double step = 2.0 * 3.14159265358979323846 / c->sides;
    double phase = a0;
    int i;

    if (!d || c->sides < 3 || r <= 0.0) {
        return;
    }
    if (c->pg_edge) {
        const double half = 3.14159265358979323846 / c->sides;

        r = r / cos(half);
        phase = a0 + half;
    }
    for (i = 0; i < c->sides; i++) {
        const double a = phase + step * i, b = phase + step * (i + 1);

        if (jwc_add_line(d, (float)(c->x0 + r * cos(a)),
                         (float)(c->y0 + r * sin(a)),
                         (float)(c->x0 + r * cos(b)),
                         (float)(c->y0 + r * sin(b)),
                         (unsigned char)d->line_type, (unsigned char)d->pen,
                         (unsigned char)(d->write_layer))) {
            d->lines[d->n_lines - 1].rest[1] = 6;
        }
    }
}

/* 分割【仮点】: N-1 仮点 spread evenly between the two points. */
static void divide_points(JwCmd *c, Jwc *d)
{
    int i;

    if (!d || c->divisions < 2) {
        return;
    }
    for (i = 1; i < c->divisions; i++) {
        const double t = (double)i / c->divisions;

        /* ①【実点】なら記録の点（点 の実点と同じ形。測定：func_all
         * divide_s1_c1 の (375,290) に 0x1d の点）。 */
        if (c->div_real) {
            JwcPoint p;

            memset(&p, 0, sizeof p);
            p.x = (float)(c->x0 + t * (c->x1 - c->x0));
            p.y = (float)(c->y0 + t * (c->y1 - c->y0));
            p.layer = (unsigned char)d->write_layer;
            p.rest[0] = (unsigned char)d->write_layer;
            p.rest[1] = 1;
            p.rest[3] = 0x1d;
            jwc_put_point(d, &p);
            continue;
        }

        if (d->n_temp >= JWC_TEMP_MAX) {
            return;
        }
        d->temp_x[d->n_temp] = (float)(c->x0 + t * (c->x1 - c->x0));
        d->temp_y[d->n_temp] = (float)(c->y0 + t * (c->y1 - c->y0));
        d->n_temp++;
    }
}

/* ２線: a pair of lines either side of the base, between the two points.
 *
 * **Which of the two comes first** is not the base line's own direction: a
 * vertical base gives +x first whichever way it is stored, a horizontal one
 * gives +y, and a diagonal gives the side whose normal points up.  So the
 * first is the one offset along the normal with the **positive y** (and, when
 * that is zero, the positive x) -- four cases measured, two of them the same
 * vertical line stored both ways round. */
/* Where the i-th of the pair runs.  Returns 0 when there is no pair to draw.
 * Both the preview (colour 2, while the pointer is still on the end) and the
 * lines themselves come out of this, so the two cannot drift apart. */
int jw_cmd_two_line(const JwCmd *c, const Jwc *d, int i, double *e)
{
    const JwcLine *l;
    double dx, dy, n, nx, ny, t0, t1, ox, oy, g;
    double per;

    if (!d || c->command != 9 || c->pick_a < 0 || c->pick_a >= d->n_lines) {
        return 0;
    }
    per = d->unit_mm > 0.0f ? d->unit_mm / d->denom : 1.0;
    l = &d->lines[c->pick_a];
    dx = l->x1 - l->x0;
    dy = l->y1 - l->y0;
    n = sqrt(dx * dx + dy * dy);
    if (n <= 0.0) {
        return 0;
    }
    dx /= n;
    dy /= n;
    nx = -dy;
    ny = dx;
    if (ny < 0.0 || (ny == 0.0 && nx < 0.0)) {
        nx = -nx;
        ny = -ny;
    }
    /* How far along the base each point is; both offsets use the same pair. */
    t0 = (c->x0 - l->x0) * dx + (c->y0 - l->y0) * dy;
    t1 = (c->x1 - l->x0) * dx + (c->y1 - l->y0) * dy;
    g = (i ? -1.0 : 1.0) * c->gap_two[i] * per;
    ox = l->x0 + g * nx;
    oy = l->y0 + g * ny;
    e[0] = ox + t0 * dx;
    e[1] = oy + t0 * dy;
    e[2] = ox + t1 * dx;
    e[3] = oy + t1 * dy;
    return 1;
}

static void two_lines(JwCmd *c, Jwc *d)
{
    int i;
    const long n0 = d->n_lines;

    for (i = 0; i < 2; i++) {
        double e[4];

        if (!jw_cmd_two_line(c, d, i, e)) {
            return;
        }
        if (jwc_add_line(d, (float)e[0], (float)e[1], (float)e[2], (float)e[3],
                         (unsigned char)d->line_type, (unsigned char)d->pen,
                         (unsigned char)(d->write_layer))) {
            /* 0 in the byte a drawn line carries 3 in, like 面取's. */
            d->lines[d->n_lines - 1].rest[1] = 0;
        }
    }
    /* 取り消し（何も持っていないときの [ESC]）：この組を抜いて、この組の
     * 始点を持った `○終点指示 … ●連続` に戻ります（測定）。 */
    c->dl_undo_n = (int)(d->n_lines - n0);
    c->dl_undo_x = c->x0;
    c->dl_undo_y = c->y0;
}

/* 面取【角面】: cut the corner off two lines and join the ends.
 *
 * Each line keeps the side it was pressed on and stops `back` short of the
 * corner, where `back` is half the chamfer over the sine of half the angle
 * between the two kept directions -- the cut is isoceles, so that is what
 * makes it the length the top line says. */
static void chamfer(JwCmd *c, Jwc *d, const JwView *w, long a, long b,
                    int sx, int sy)
{
    double cx, cy, pax, pay, pbx, pby;
    double adx, ady, bdx, bdy, la, lb, half, back, sn;
    float akx, aky, bkx, bky;
    long first, second;
    const double per = d->unit_mm > 0.0f ? d->unit_mm / d->denom : 1.0;
    const double want = c->gap_chamfer * per;

    if (!d || a < 0 || b < 0 || a >= d->n_lines || b >= d->n_lines) {
        return;
    }
    if (!cross_at(&d->lines[a], &d->lines[b], &cx, &cy)) {
        return;                 /* 「データが不適当」 -- they never meet */
    }
    jw_cmd_at(w, c->pick_x, c->pick_y, &pax, &pay);
    jw_cmd_at(w, sx, sy, &pbx, &pby);
    /* The direction from the corner toward each press: that is the side that
     * survives, and the angle between the two is the corner's. */
    adx = pax - cx; ady = pay - cy;
    bdx = pbx - cx; bdy = pby - cy;
    la = sqrt(adx * adx + ady * ady);
    lb = sqrt(bdx * bdx + bdy * bdy);
    if (la <= 0.0 || lb <= 0.0) {
        return;
    }
    adx /= la; ady /= la;
    bdx /= lb; bdy /= lb;
    /* Along the lines themselves, not toward the press, so that a press a
     * little off the line does not tilt the answer. */
    project_dir(&d->lines[a], &adx, &ady);
    project_dir(&d->lines[b], &bdx, &bdy);
    half = acos(adx * bdx + ady * bdy) / 2.0;
    sn = sin(half);
    if (sn <= 0.0) {
        return;
    }
    if (c->chamfer == 1) {
        back = want / tan(half);        /* 丸面：半径 = 寸法、接点は角から r / tan(半分)（測定：chamfer_s0_c1） */
    } else {
        back = c->ch_side ? want : want / 2.0 / sn;
    }
    akx = (float)(cx + back * adx);
    aky = (float)(cy + back * ady);
    bkx = (float)(cx + back * bdx);
    bky = (float)(cy + back * bdy);
    /* The two lines keep their far ends and stop at those points; the chamfer
     * goes on the end.  Ａ first, the way the original's records come out. */
    first = a;
    second = b > a ? b - 1 : b;
    /* 取り消し（[ESC]）のために元の二本を控えます。 */
    c->co_undo[0] = d->lines[a];
    c->co_undo[1] = d->lines[b];
    c->co_undo_n = 2;
    c->co_undo_new = 2;
    c->co_undo_arc = 0;
    keep_far(d, first, cx, cy, akx, aky);
    keep_far(d, second, cx, cy, bkx, bky);
    /* 作り直した二本に読取の印は残りません（測定）。 */
    d->lines[d->n_lines - 2].rest[2] &= (unsigned char)~1u;
    d->lines[d->n_lines - 1].rest[2] &= (unsigned char)~1u;
    /* 面取 **clears the last of the three bytes** on the two lines it re-cut.
     * Measured on SAMPLE6, whose lines carry 08 there: the two come back with
     * 00.  線伸縮 and コーナー連結 do not -- the same line through 線伸縮 keeps
     * its 08 -- so this belongs to 面取 and is not a property of rewriting a
     * record. */
    d->lines[d->n_lines - 2].rest[3] = 0;
    d->lines[d->n_lines - 1].rest[3] = 0;
    if (c->chamfer == 1) {
        /* 弧の中心は角から二等分線の向きに r / sin(半分)。小さいほうの弧。 */
        const double wx = adx + bdx, wy = ady + bdy;
        const double wl = sqrt(wx * wx + wy * wy);

        if (wl > 0.0) {
            const double dist = (float)(want / sn);
            const double ccx = (float)(cx + wx / wl * dist);
            const double ccy = (float)(cy + wy / wl * dist);
            long sa = poly_angle(ccx, ccy, akx, aky);
            long sb = poly_angle(ccx, ccy, bkx, bky);
            const long full = 360L << 16;

            if (((sb - sa) % full + full) % full > (180L << 16)) {
                const long t = sa;

                sa = sb;
                sb = t;
            }
            if (jwc_add_arc_at(d, (float)ccx, (float)ccy, (float)want, sa, sb,
                               (unsigned char)d->line_type, (unsigned char)d->pen,
                               (unsigned char)(d->write_layer), 0xfc)) {
                c->co_undo_arc = 1;
            }
        }
        return;
    }
    if (jwc_add_line(d, akx, aky, bkx, bky,
                     (unsigned char)d->line_type, (unsigned char)d->pen,
                     (unsigned char)(d->write_layer))) {
        /* A chamfer carries **0** in the byte a drawn line carries 3 in.
         * Measured, like 中心線's 2. */
        d->lines[d->n_lines - 1].rest[1] = 0;
        c->co_undo_new = 3;
    }
}

/* 面取 の一括処理の実行。範囲で取った線どうしで、範囲の中の端がちょうど
 * 重なる組を角として、角面なら一本ずつの面取と同じ寸法で切る。
 *
 * 測定（tools/cases/probe_chamfer.txt、SAMPLE0、寸法 30 = 52.32）：
 *   * 角を始点に持つ線を Ｂ、終点に持つ線を Ａ として、二本を抜き、
 *     **面の線（Ｂ側の点 → Ａ側の点）、Ｂ の残り、Ａ の残り** の順に末尾へ。
 *     残りはどちらも角から外へ向く（Ａ は向きが変わる）。chb_m・chb_o。
 *   * 短すぎて切れない角は、二本を抜いて **Ｂ を逆向き、Ａ を逆向き** で
 *     足し直すだけ（chb_n、長さ 17.44 の線）。
 *   * 丸面は 半径 = 寸法、接点は角から r / tan(角の半分)。線は Ｂ、Ａ の残り
 *     の順、弧は円弧の列の末尾（chb_p）。
 *   * 足し直した線の rest[2]・rest[3] は 0、面の線の rest[1] は 0x41（一本
 *     ずつの面取の 0 とは違う）。
 * 一本の線が二つの角にかかるとき、③内角面取、Ｌ面・楕円面は未測定。 */
static long poly_angle(double cx, double cy, double x, double y);

static void chamfer_bulk(JwCmd *c, Jwc *d)
{
    const double per = d->unit_mm > 0.0f ? d->unit_mm / d->denom : 1.0;
    const double want = c->gap_chamfer * per;
    const long n0 = c->n0_lines < d->n_lines ? c->n0_lines : d->n_lines;
    unsigned char *used, *pick;
    long *pa, *pb, np = 0, i, j, k, rest_n = 0;
    float *px, *py;
    JwcLine *la_s, *lb_s;

    if (n0 <= 0) {
        return;
    }
    used = (unsigned char *)calloc((size_t)n0, 1);
    pick = (unsigned char *)calloc((size_t)n0, 1);
    pa = (long *)calloc((size_t)n0, sizeof *pa);
    pb = (long *)calloc((size_t)n0, sizeof *pb);
    px = (float *)calloc((size_t)n0, sizeof *px);
    py = (float *)calloc((size_t)n0, sizeof *py);
    la_s = (JwcLine *)calloc((size_t)n0, sizeof *la_s);
    lb_s = (JwcLine *)calloc((size_t)n0, sizeof *lb_s);
    if (!used || !pick || !pa || !pb || !px || !py || !la_s || !lb_s) {
        goto done;
    }
    for (i = 0; i < n0; i++) {
        pick[i] = (unsigned char)picked_line(c, d, i);
    }
    /* 角の組を先に全部集める（線の順に、範囲の中の端どうし）。 */
    for (i = 0; i < n0; i++) {
        int ei;

        for (ei = 0; ei < 2 && pick[i] && !used[i]; ei++) {
            const float ex = ei ? d->lines[i].x1 : d->lines[i].x0;
            const float ey = ei ? d->lines[i].y1 : d->lines[i].y0;

            if (!jw_cmd_in_range(c, ex, ey, ex, ey)) {
                continue;
            }
            for (j = i + 1; j < n0; j++) {
                int ej;

                if (!pick[j] || used[j]) {
                    continue;
                }
                for (ej = 0; ej < 2; ej++) {
                    if ((ej ? d->lines[j].x1 : d->lines[j].x0) == ex
                        && (ej ? d->lines[j].y1 : d->lines[j].y0) == ey) {
                        break;
                    }
                }
                if (ej == 2) {
                    continue;
                }
                /* Ｂ = 角を始点に持つほう（どちらもなら先の線）。 */
                if (ei == 0 || ej != 0) {
                    pb[np] = i;
                    pa[np] = j;
                } else {
                    pb[np] = j;
                    pa[np] = i;
                }
                px[np] = ex;
                py[np] = ey;
                lb_s[np] = d->lines[pb[np]];
                la_s[np] = d->lines[pa[np]];
                np++;
                used[i] = used[j] = 1;
                break;
            }
        }
    }
    /* 範囲で取った線は角に関わらなくても全部抜き、角の分を組の順に足して
     * から、残りを元の順で末尾へ（測定：chb_h で枠の下の内の線 4・7〜10 が
     * 何も変わらずに最後へ）。 */
    {
        long nr = 0;

        for (k = 0; k < n0; k++) {
            if (pick[k] && !used[k]) {
                la_s[np + nr++] = d->lines[k];
            }
        }
        for (k = n0 - 1; k >= 0; k--) {
            if (pick[k]) {
                jwc_remove_line(d, k);
            }
        }
        rest_n = nr;
    }
    for (k = 0; k < np; k++) {
        const JwcLine lb = lb_s[k], la = la_s[k];
        const double ex = px[k], ey = py[k];
        const int b_at0 = lb.x0 == px[k] && lb.y0 == py[k];
        const int a_at0 = la.x0 == px[k] && la.y0 == py[k];
        const double bfx = b_at0 ? lb.x1 : lb.x0, bfy = b_at0 ? lb.y1 : lb.y0;
        const double afx = a_at0 ? la.x1 : la.x0, afy = a_at0 ? la.y1 : la.y0;
        double bdx = bfx - ex, bdy = bfy - ey;
        double adx = afx - ex, ady = afy - ey;
        const double lbn = sqrt(bdx * bdx + bdy * bdy);
        const double lan = sqrt(adx * adx + ady * ady);
        double half = 0.0, back = 0.0, r = 0.0;
        int ok = 0;

        if (lbn > 0.0 && lan > 0.0) {
            bdx /= lbn; bdy /= lbn;
            adx /= lan; ady /= lan;
            half = acos(adx * bdx + ady * bdy) / 2.0;
            if (sin(half) > 0.0) {
                if (c->chamfer == 1) {
                    r = want;
                    back = r / tan(half);
                } else {
                    back = c->ch_side ? want : want / 2.0 / sin(half);
                }
                ok = back < lbn && back < lan;
                /* 戻る長さは float に丸めてから（測定：chb_m の 77.971 が
                 * 0x429bf138、丸めないと 39）。 */
                back = (float)back;
            }
        }
        if (!ok) {
            JwcLine q = lb;

            q.x0 = lb.x1; q.y0 = lb.y1; q.x1 = lb.x0; q.y1 = lb.y0;
            q.rest[2] = 0;
            q.rest[3] = 0;
            if (jwc_add_line(d, q.x0, q.y0, q.x1, q.y1, q.type, q.pen,
                             q.layer)) {
                d->lines[d->n_lines - 1] = q;
            }
            q = la;
            q.x0 = la.x1; q.y0 = la.y1; q.x1 = la.x0; q.y1 = la.y0;
            q.rest[2] = 0;
            q.rest[3] = 0;
            if (jwc_add_line(d, q.x0, q.y0, q.x1, q.y1, q.type, q.pen,
                             q.layer)) {
                d->lines[d->n_lines - 1] = q;
            }
            continue;
        }
        {
            const float bkx = (float)(ex + back * bdx);
            const float bky = (float)(ey + back * bdy);
            const float akx = (float)(ex + back * adx);
            const float aky = (float)(ey + back * ady);
            JwcLine q;

            if (c->chamfer != 1) {
                q = lb;
                q.x0 = bkx; q.y0 = bky; q.x1 = akx; q.y1 = aky;
                q.rest[2] = 0;
                q.rest[3] = 0;
                if (jwc_add_line(d, q.x0, q.y0, q.x1, q.y1, q.type, q.pen,
                                 q.layer)) {
                    d->lines[d->n_lines - 1] = q;
                }
            }
            q = lb;
            q.x0 = bkx; q.y0 = bky; q.x1 = (float)bfx; q.y1 = (float)bfy;
            q.rest[2] = 0;
            q.rest[3] = 0;
            if (jwc_add_line(d, q.x0, q.y0, q.x1, q.y1, q.type, q.pen,
                             q.layer)) {
                d->lines[d->n_lines - 1] = q;
            }
            q = la;
            q.x0 = akx; q.y0 = aky; q.x1 = (float)afx; q.y1 = (float)afy;
            q.rest[2] = 0;
            q.rest[3] = 0;
            if (jwc_add_line(d, q.x0, q.y0, q.x1, q.y1, q.type, q.pen,
                             q.layer)) {
                d->lines[d->n_lines - 1] = q;
            }
            if (c->chamfer == 1) {
                /* 弧の中心は角から二等分線の向きに r / sin(半分)。 */
                const double wx = adx + bdx, wy = ady + bdy;
                const double wl = sqrt(wx * wx + wy * wy);

                if (wl > 0.0) {
                    /* 中心までの長さも float（測定：chb_p の中心 x が
                     * 0x42ba97af、角度が 90°+1/65536 と 180°）。 */
                    const double dist = (float)(r / sin(half));
                    const double cx = (float)(ex + wx / wl * dist);
                    const double cy = (float)(ey + wy / wl * dist);
                    long sa = poly_angle(cx, cy, akx, aky);
                    long sb = poly_angle(cx, cy, bkx, bky);
                    const long full = 360L << 16;

                    /* 小さいほうの弧（左回りで 180 度未満）。 */
                    if (((sb - sa) % full + full) % full > (180L << 16)) {
                        const long t = sa;

                        sa = sb;
                        sb = t;
                    }
                    /* 一括処理の丸面の弧は最後のバイトが 0xfc（測定）。 */
                    jwc_add_arc_at(d, (float)cx, (float)cy, (float)r, sa, sb,
                                   lb.type, lb.pen, lb.layer, 0xfc);
                }
            }
        }
    }
    for (k = 0; k < rest_n; k++) {
        const JwcLine q = la_s[np + k];

        if (jwc_add_line(d, q.x0, q.y0, q.x1, q.y1, q.type, q.pen, q.layer)) {
            d->lines[d->n_lines - 1] = q;
            d->lines[d->n_lines - 1].rest[2] &= (unsigned char)~2u;
        }
    }
done:
    free(used);
    free(pick);
    free(pa);
    free(pb);
    free(px);
    free(py);
    free(la_s);
    free(lb_s);
}

/* 中心線's last press: put the line down between the start already taken
 * and the point just given, both dropped onto the bisector. */
static void centre_line(JwCmd *c, Jwc *d, const JwView *w, double px, double py)
{
    double ox, oy, dx, dy, pax, pay, pbx, pby, n, t0, t1;

    if (d && c->cl_pts == 2) {
        /* 2 点の中心線：二点の垂直二等分線（測定：center_pts、角を二つ
         * 右で読むと (370.125,294.880)-(391.010,262.247)、57.38 度）。 */
        ox = (c->cl_x1 + c->cl_x2) * 0.5;
        oy = (c->cl_y1 + c->cl_y2) * 0.5;
        dx = -(c->cl_y2 - c->cl_y1);
        dy = c->cl_x2 - c->cl_x1;
        goto have_axis;
    }
    if (!d || c->pick_a < 0 || c->pick_b < 0
        || c->pick_a >= d->n_lines || c->pick_b >= d->n_lines) {
        return;
    }
    jw_cmd_at(w, c->pick_x, c->pick_y, &pax, &pay);
    jw_cmd_at(w, c->pick_bx, c->pick_by, &pbx, &pby);
    if (!bisector(&d->lines[c->pick_a], &d->lines[c->pick_b],
                  pax, pay, pbx, pby, &ox, &oy, &dx, &dy)) {
        return;
    }
have_axis:
    n = dx * dx + dy * dy;
    if (n <= 0.0) {
        return;
    }
    t0 = ((c->x0 - ox) * dx + (c->y0 - oy) * dy) / n;
    t1 = ((px - ox) * dx + (py - oy) * dy) / n;
    if (!jwc_add_line(d, (float)(ox + t0 * dx), (float)(oy + t0 * dy),
                      (float)(ox + t1 * dx), (float)(oy + t1 * dy),
                      (unsigned char)d->line_type, (unsigned char)d->pen,
                      (unsigned char)(d->write_layer))) {
        return;
    }
    /* 中心線 writes **2** in the byte behind the layer where ／ and the other
     * drawing commands write 3.  Measured: the same drawing, the same pen and
     * the same layer, and the original saves `01 02 00 02 00 00` for a centre
     * line against `01 02 00 03 00 00` for a line.  What the byte means is
     * still not known, so it is copied and not reasoned about. */
    d->lines[d->n_lines - 1].rest[1] = 2;
}

/* 線伸縮's second press: the end of the line nearer the first press moves to
 * the foot of the perpendicular from the point given. */
static int stretch_to(JwCmd *c, Jwc *d, const JwView *w, long k,
                      int sx, int sy, int right)
{
    double px, py, ax, ay, t, fx, fy, dx, dy, n;
    const JwcLine *l;
    int near0;

    if (!d || k < 0 || k >= d->n_lines) {
        return 1;
    }
    if (!take(c, d, w, sx, sy, right, &px, &py)) {
        return 0;               /* 読取可能データ無: nothing taken, nothing moves */
    }
    l = &d->lines[k];
    dx = l->x1 - l->x0;
    dy = l->y1 - l->y0;
    n = dx * dx + dy * dy;
    if (n <= 0.0) {
        return 1;
    }
    /* 取り消し（[ESC]）のために元の線を控えます。 */
    c->st_undo = *l;
    c->st_undo_on = 1;
    t = ((px - l->x0) * dx + (py - l->y0) * dy) / n;
    fx = l->x0 + t * dx;
    fy = l->y0 + t * dy;
    jw_cmd_at(w, c->pick_x, c->pick_y, &ax, &ay);
    /* Which end the press was nearer, measured along the line so that a press
     * off to one side still answers the same way. */
    near0 = ((ax - l->x0) * dx + (ay - l->y0) * dy) / n < 0.5;
    if (near0) {
        jwc_relink_line(d, k, (float)fx, (float)fy, l->x1, l->y1);
    } else {
        jwc_relink_line(d, k, l->x0, l->y0, (float)fx, (float)fy);
    }
    return 1;
}

/* コーナー連結's second press: cut both lines back to their crossing and move
 * the two records to the end of the list, Ａ first. */
static void corner_join(JwCmd *c, Jwc *d, const JwView *w, long a, long b,
                        int sx, int sy)
{
    double cx, cy, pax, pay, pbx, pby;
    float ax, ay, bx, by;
    long first, second;

    if (!d || a < 0 || b < 0 || a >= d->n_lines || b >= d->n_lines) {
        return;
    }
    if (!cross_at(&d->lines[a], &d->lines[b], &cx, &cy)) {
        return;                 /* parallel: nothing to meet at */
    }
    jw_cmd_at(w, c->pick_x, c->pick_y, &pax, &pay);
    jw_cmd_at(w, sx, sy, &pbx, &pby);
    corner_cut(&d->lines[a], cx, cy, pax, pay, &ax, &ay);
    corner_cut(&d->lines[b], cx, cy, pbx, pby, &bx, &by);
    /* Ａ goes to the back first, which shifts Ｂ down by one if it was after
     * it.  Both then sit at the end in the order they were pressed. */
    first = a;
    second = b > a ? b - 1 : b;
    /* **切り捨てる側の端点だけを交点に置き換え、始点・終点の並びは保ちます**
     * （測定：上の辺 (161.973..598) を x=400 で、左の辺を押すと
     * (161.973,139.943)-(598,139.943) のまま。前は 残す端→交点 の順に
     * 書いていて、上の辺が逆向きになっていた）。 */
    c->co_undo[0] = d->lines[a];
    c->co_undo[1] = d->lines[b];
    c->co_undo_n = 2;
    c->co_undo_new = 2;
    {
        const JwcLine la = d->lines[first];
        const int ka = (ax == la.x0 && ay == la.y0);

        jwc_relink_line(d, first, ka ? la.x0 : (float)cx, ka ? la.y0 : (float)cy,
                        ka ? (float)cx : la.x1, ka ? (float)cy : la.y1);
    }
    {
        const JwcLine lb = d->lines[second];
        const int kb = (bx == lb.x0 && by == lb.y0);

        jwc_relink_line(d, second, kb ? lb.x0 : (float)cx,
                        kb ? lb.y0 : (float)cy,
                        kb ? (float)cx : lb.x1, kb ? (float)cy : lb.y1);
    }
}

/* 寸法の線は本物の線の入口 11f2:67fa を通るので、**長さ 0 の線は入りません**
 * （ペン < 0x5a のとき。測定：同じ角を二度読んだ寸法は文字 `0` だけ）。 */
/* 寸法値を置きます。本物の 3ab8:5ff8（ovl27、リンク時 0x30f2b〜0x310df）の
 * とおり、寸法線の小さいほうの端 (ox,oy) を原点にした線の座標で
 *   u = (float)((寸法線の長さ - 文字の長さ) * 0.5)、v = (float)間隔
 * を置き、1bb4:2981/2a18 の向き 0 で図面へ戻します：
 *   x = (float)(cs*u - sn*v + ox)、y = (float)(cs*v + sn*u + oy)。
 * 終点は始点を原点にして (文字の長さ, 0) を同じく戻したもの。double で
 * (始+終)/2 - 長さ/2 とすると float の最後の 1 ビットがずれます（測定：
 * □ の上辺の `57.3` の x が 0x432ea3c5、本物は 0x432ea3c6）。 */
static int dim_put_text(Jwc *d, double ux, double uy, float ox, float oy,
                        double span, double len, double off,
                        const char *buf, unsigned char layer)
{
    const float cs = (float)ux, sn = (float)uy;
    const float fl = (float)len;
    const float u = (float)((span - (double)fl) * 0.5);
    const float v = (float)off;
    const float tx = (float)((double)cs * u - (double)sn * v + ox);
    const float ty = (float)((double)cs * v + (double)sn * u + oy);
    const float ex = (float)((double)cs * fl - (double)sn * 0.0 + tx);
    const float ey = (float)((double)cs * 0.0 + (double)sn * fl + ty);

    return jwc_add_text(d, tx, ty, ex, ey, buf,
                        (unsigned char)d->dim_size, layer);
}

static int dim_point(const JwCmd *c, Jwc *d, float x, float y,
                     unsigned char layer);

static int dim_add_line(Jwc *d, float x0, float y0, float x1, float y1,
                        int type, int pen, int layer)
{
    if (x0 == x1 && y0 == y1 && pen < 0x5a) {
        return 0;
    }
    return jwc_add_line(d, x0, y0, x1, y1, type, pen, layer);
}


/* ------------------------------------------------------------- 寸法 ①横方向 */

/* ①横方向: the dimension line, its two extension lines and the value.
 *
 * Measured on SAMPLE0 with the 引出し線の始点 free at (162,140), the 寸法線
 * at (300,110) and the two ends read off the top edge's corners:
 *
 *     line (40.973,353.000)-(477.000,353.000)  01 01 00 80 00 20
 *     line (40.973,323.000)-( 40.973,353.000)  01 01 00 59 00 20
 *     line (477.000,323.000)-(477.000,353.000) 01 01 00 59 00 20
 *     text (255.716,353.872)-(262.257,353.872) 02 00 10 40  `250`
 *
 * So the extension lines run from the 引出し線の始点's **y** (323 -- the free
 * press, not the read) up to the dimension line, at the two read x's; the
 * value is the distance in millimetres of paper; and the text is centred on
 * the dimension line, half a millimetre above it, in character type 2 with
 * pen 1 -- the 寸法設定 the band shows as `ﾍﾟﾝ1` and `横 2.5 縦 2.5`.
 */
/* 連続入力: the right button at the end of one dimension carries on from
 * where it stopped.  Measured on SAMPLE0 after the 250 above, reading the
 * corner at (232,157):
 *
 *     line (477.000,353.000)-(110.737,353.000) 01 01 00 6e 00 20
 *     line (110.737,323.000)-(110.737,353.000) 01 01 00 59 00 20
 *     text (290.598,353.872)-(297.139,353.872) 02 00 10 40  `210`
 *
 * -- the dimension line from the last end to the new one (A byte 0x6e,
 * not 0x80), **one** extension line because the other end already has
 * one, and the value between them.  What 【矢印】 adds here is not
 * measured. */
static void dimension_more(JwCmd *c, Jwc *d, double x1)
{
    const unsigned char layer =
        (unsigned char)(d->write_layer);
    const unsigned char type = (unsigned char)d->line_type;
    const unsigned char pen =
        (unsigned char)(c->dim_pen ? c->dim_pen : JW_DIM_PEN);
    const double ux = c->dim_ux, uy = c->dim_uy;
    const double vx = -uy, vy = ux;
    const double x0 = c->dim_x1, y = c->dim_y, b = c->dim_by;
    const double mid = (x0 + x1) / 2.0;
    const double off = (c->dim_gap_mm > 0.0 ? c->dim_gap_mm : 0.5)
                      * d->unit_mm;
    const double ye = y + (y > b ? 1.0 : -1.0) * c->dim_ext_mm * d->unit_mm;
    char buf[32];
    double len;

#define DIM_X(a, bb) ((float)((a) * ux + (bb) * vx))
#define DIM_Y(a, bb) ((float)((a) * uy + (bb) * vy))
    if (dim_add_line(d, DIM_X(x0, y), DIM_Y(x0, y),
                     DIM_X(x1, y), DIM_Y(x1, y), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = 0x6e;
        d->lines[d->n_lines - 1].rest[3] = 0x20;
    }
    /* 【点】なら両端で実点を試し、足せた端にだけ引出し線（dimension() と
     * 同じ 0dba の道）。始めの端には前の寸法の点があるので、引出し線は
     * 新しい端の 1 本だけになります。【矢印】は新しい端の 1 本（測定）。 */
    if (!c->dim_end) {
        if (dim_point(c, d, DIM_X(x0, y), DIM_Y(x0, y), layer)
            && dim_add_line(d, DIM_X(x0, b), DIM_Y(x0, b),
                            DIM_X(x0, ye), DIM_Y(x0, ye), type, pen, layer)) {
            d->lines[d->n_lines - 1].rest[1] = 0x59;
            d->lines[d->n_lines - 1].rest[3] = 0x20;
        }
    }
    if ((c->dim_end || dim_point(c, d, DIM_X(x1, y), DIM_Y(x1, y), layer))
        && dim_add_line(d, DIM_X(x1, b), DIM_Y(x1, b),
                        DIM_X(x1, ye), DIM_Y(x1, ye), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = 0x59;
        d->lines[d->n_lines - 1].rest[3] = 0x20;
    }
    /* 【矢印】 puts the same four on this piece too, and the same way
     * round: +矢印長さ at the end it started from, - at the new one.
     * Measured on the 210 above, where the start is the **bigger** a:
     * (477,353)-(482.054,354.354) and (110.737,353)-(105.683,354.354). */
    if (c->dim_end) {
        const double alen = (c->dim_arrow_mm > 0.0 ? c->dim_arrow_mm : 3.0)
                          * d->unit_mm;
        const double rad = c->dim_angle_deg * 3.14159265358979323846
                         / 180.0;
        const double ax = alen * cos(rad), ay = alen * sin(rad);
        int i;

        for (i = 0; i < 4; i++) {
            const double on = (i < 2 ? x0 : x1);
            const double at = (i < 2 ? x0 + ax : x1 - ax);
            const double per = (i & 1) ? y - ay : y + ay;

            if (dim_add_line(d, DIM_X(on, y), DIM_Y(on, y),
                             DIM_X(at, per), DIM_Y(at, per),
                             type, pen, layer)) {
                d->lines[d->n_lines - 1].rest[1] = 0xf2;
                d->lines[d->n_lines - 1].rest[3] = 0x20;
            }
        }
    }
    c->dim_value = (x1 > x0 ? x1 - x0 : x0 - x1) * jwc_zukei_scale(d);
    jwc_dim_text(buf, sizeof buf, c->dim_value, c->dim_unit, c->dim_dec,
                 c->dim_comma_on, c->dim_zero_on);
    len = jwc_text_length(d, buf, d->dim_size);
    (void)mid;
    if (dim_put_text(d, ux, uy, DIM_X(x0 < x1 ? x0 : x1, y),
                     DIM_Y(x0 < x1 ? x0 : x1, y), fabs(x1 - x0), len, off,
                     buf, layer)) {
        d->texts[d->n_texts - 1].rest[2] = 0x10;
        d->texts[d->n_texts - 1].rest[3] = 0x40;
    }
    c->dim_x1 = x1;
#undef DIM_X
#undef DIM_Y
}

/* ④累寸（累進寸法）: one 始点 and a dimension from it to every point read
 * after that.  Measured on SAMPLE0 with the 始点 at the top edge's left
 * corner and (598,140), (232,157), (380,401) read after it:
 *
 *     line (40.973,353.000)-(477.000,353.000)  01 01 00 80 00 20
 *     line (477.000,323.000)-(477.000,353.000) 01 01 00 59 00 20
 *     line (40.973,323.000)-(40.973,353.000)   01 01 00 59 00 20
 *     line (477.000,353.000)-(471.946,351.646) 01 01 00 f5 00 20
 *     line (477.000,353.000)-(471.946,354.354) 01 01 00 f5 00 20
 *     text (479.180,353.872)-(479.180,360.412) 02 00 10 50  `250`
 *
 * and then, for each of the others, the dimension line, **one** extension
 * line at the new end and two arrow legs -- with 0xf2 where the first had
 * 0xf5.  The arrows are there whether or not 寸法線端部 is 【矢印】.
 *
 * The value is **turned**: its baseline runs across the dimension line
 * (rest[3] is 0x50, not 0x40), starting half a character height past the
 * end (2.181 = 2.5mm / 2 x unit_mm) and 寸法線と値の離れ above it. */
static void dimension_prog(JwCmd *c, Jwc *d, double a)
{
    const unsigned char layer =
        (unsigned char)(d->write_layer);
    const unsigned char type = (unsigned char)d->line_type;
    const unsigned char pen =
        (unsigned char)(c->dim_pen ? c->dim_pen : JW_DIM_PEN);
    const double ux = c->dim_ux, uy = c->dim_uy;
    const double vx = -uy, vy = ux;
    const double a0 = c->dim_a0, y = c->dim_y, b = c->dim_by;
    const double off = (c->dim_gap_mm > 0.0 ? c->dim_gap_mm : 0.5)
                      * d->unit_mm;
    const double ye = y + (y > b ? 1.0 : -1.0) * c->dim_ext_mm * d->unit_mm;
    const double alen = (c->dim_arrow_mm > 0.0 ? c->dim_arrow_mm : 3.0)
                      * d->unit_mm;
    const double rad = c->dim_angle_deg * 3.14159265358979323846 / 180.0;
    const double ax = alen * cos(rad), ay = alen * sin(rad);
    const double half = d->text_h[d->dim_size] / 20.0 * d->unit_mm;
    char buf[32];
    double len;
    int i;

#define DIM_X(aa, bb) ((float)((aa) * ux + (bb) * vx))
#define DIM_Y(aa, bb) ((float)((aa) * uy + (bb) * vy))
    if (dim_add_line(d, DIM_X(a0, y), DIM_Y(a0, y),
                     DIM_X(a, y), DIM_Y(a, y), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = 0x80;
        d->lines[d->n_lines - 1].rest[3] = 0x20;
    }
    if (dim_add_line(d, DIM_X(a, b), DIM_Y(a, b),
                     DIM_X(a, ye), DIM_Y(a, ye), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = 0x59;
        d->lines[d->n_lines - 1].rest[3] = 0x20;
    }
    if (!c->dim_prog_n
        && dim_add_line(d, DIM_X(a0, b), DIM_Y(a0, b),
                        DIM_X(a0, ye), DIM_Y(a0, ye), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = 0x59;
        d->lines[d->n_lines - 1].rest[3] = 0x20;
    }
    for (i = 0; i < 2; i++) {
        const double per = i ? y + ay : y - ay;

        if (dim_add_line(d, DIM_X(a, y), DIM_Y(a, y),
                         DIM_X(a - ax, per), DIM_Y(a - ax, per),
                         type, pen, layer)) {
            d->lines[d->n_lines - 1].rest[1] =
                (unsigned char)(c->dim_prog_n ? 0xf2 : 0xf5);
            d->lines[d->n_lines - 1].rest[3] = 0x20;
        }
    }
    c->dim_value = (a > a0 ? a - a0 : a0 - a) * jwc_zukei_scale(d);
    jwc_dim_text(buf, sizeof buf, c->dim_value, c->dim_unit, c->dim_dec,
                 c->dim_comma_on, c->dim_zero_on);
    len = jwc_text_length(d, buf, d->dim_size);
    if (jwc_add_text(d,
                     DIM_X(a + half, y + off), DIM_Y(a + half, y + off),
                     DIM_X(a + half, y + off + len),
                     DIM_Y(a + half, y + off + len),
                     buf, (unsigned char)d->dim_size, layer)) {
        d->texts[d->n_texts - 1].rest[2] = 0x10;
        d->texts[d->n_texts - 1].rest[3] = 0x50;
    }
    c->dim_prog_n++;
#undef DIM_X
#undef DIM_Y
}

/* 寸法 ④円･角 ①円径: the circle is pointed at and the whole dimension goes
 * in on that one press -- there is no 寸法線の位置 and no 引出し線.
 *
 * Measured on SAMPLE0 (unit_mm 1.744108) with a circle of r=100 at
 * (179,263), 書込角度 0, 矢印長さ 3mm・角度 15 度:
 *
 *     半径 (L)  line (179.000,263.000)-(279.000,263.000) 01 01 00 8f 00 20
 *               line (279.000,263.000)-(273.946,264.354) 01 01 00 8f 00 20
 *               line (279.000,263.000)-(273.946,261.646) 01 01 00 8f 00 20
 *               text (223.550,263.872)-(234.450,263.872) 02 00 10 41 `R57.3`
 *     直径 (R)  line  (79.000,263.000)-(279.000,263.000) and a pair of
 *               arrows at each end, `φ114.7` with 42
 *
 * -- every record 0x8f, the arrows included, where ②半径 uses 0xa2 for the
 * line and 0xf2 for the arrows.  The dimension line runs from the centre
 * (半径) or right across the circle (直径) in the 書込角度's direction: the
 * same circle with 30 度 gives (179,263)-(265.603,313.000) and the value is
 * turned with it, so the whole thing is one drawing in the angle's frame.
 *
 * ①矢印【外】 turns the arrows round and runs the line 2 x 矢印長さ past
 * the circle at every end that has one (measured: 289.465 = 279 + 2 x 5.232
 * and 68.535 = 79 - 2 x 5.232), and it writes the far end's pair **first**
 * where 【内】 writes the near one's.
 *
 * ②値【外】 takes the value off the middle and puts it after the end,
 * 矢印長さ/2 past the arrow, and runs the dimension line out to where the
 * value ends: with 3mm arrows the value starts at 279 + 2.616 and with 5mm
 * at 279 + 4.360, which is 矢印長さ/2 both times, and 【外】 arrows push it
 * a whole 矢印長さ further (286.848 = 279 + 5.232 + 2.616).
 */
/* 寸法 ④円･角 ②円周: the circle is pointed at, then the 始点 and 終点 on it
 * (anticlockwise, which is what 「左廻り」 says), then the 引出し線の始点 and
 * the 寸法線の位置.  What goes in is an **arc**, not a line.
 *
 * Measured on SAMPLE0 (unit_mm 1.744108) with the circle r=100 at (179,263),
 * 始点 at 0 度 and 終点 at 270 度, the 引出し線の始点 170 units from the
 * centre and the 寸法線の位置 215.407:
 *
 *     line (349.000,263.000)-(394.407,263.000) 01 01 00 59 00 20
 *     line (179.000, 93.000)-(179.000, 47.593) 01 01 00 59 00 20
 *     arc  c=(179,263) r=215.407 start=0 end=270 flat=10000  01 01 00 00 40 03
 *     text ( 22.214,412.078)-( 29.922,419.786) 02 00 10 40 `270.2`
 *     point (394.407,263.000) 00 01 40 1d
 *     point (179.000, 47.593) 00 01 40 1d
 *
 * -- the two 引出し線 run from the 引出し線の始点's radius out to the
 * 寸法線の位置's, one along each of the two angles; the dimension line is an
 * arc of that second radius; the value is the **circle's** arc length
 * (2πr x 270/360 = 471.239 units = 270.2mm), written along the tangent at the
 * middle angle, half a millimetre of paper outside the arc.  A second reading
 * with 始点 90 度, 終点 180 度 and other radii gives the same rule to a
 * thousandth.
 *
 * ①端部 changes the two ends over.  【点】 is a pair of 点 records at the
 * arc's ends; 【矢印】 is four lines with 0xf0, written **before** the two
 * 引出し線, each pair turned ±矢印角度 off the circle's own direction and
 * pointing into the arc.
 */
/* 線の向きを、押した側に向けて度で返します（④円･角 ③角度【２線間】）。 */
static double line_side(double dx, double dy, double px, double py)
{
    double deg = atan2(dy, dx) * 180.0 / 3.14159265358979323846;

    if (dx * px + dy * py < 0.0) {
        deg += 180.0;
    }
    while (deg < 0.0) {
        deg += 360.0;
    }
    while (deg >= 360.0) {
        deg -= 360.0;
    }
    return deg;
}

static void dimension_arc(JwCmd *c, Jwc *d, double r1)
{
    const unsigned char layer =
        (unsigned char)(d->write_layer);
    const unsigned char type = (unsigned char)d->line_type;
    const unsigned char pen =
        (unsigned char)(c->dim_pen ? c->dim_pen : JW_DIM_PEN);
    const double pi = 3.14159265358979323846;
    const double cx = c->dim_arc_cx;
    const double cy = c->dim_arc_cy;
    const double r = c->dim_arc_r;
    /* **角度は 16.16 の度で持たれます。値もその丸めた角度から出ます。**
     * 測定：③【２線間】で 153.4349488 度の線を取ると、記録は 153.4350 に
     * なり、値は 45 - 153.4350 + 360 = `251.565` でした。丸めずに出すと
     * `251.5651` になります。 */
    const double q = 1.0 / 65536.0;
    const double deg0 = floor(c->dim_arc_a0 / q + 0.5) * q;
    const double deg1 = floor(c->dim_arc_a1 / q + 0.5) * q;
    const double a0 = deg0 * pi / 180.0;
    const double a1 = deg1 * pi / 180.0;
    const double off = (c->dim_gap_mm > 0.0 ? c->dim_gap_mm : 0.5)
                      * d->unit_mm;
    const double alen = (c->dim_arrow_mm > 0.0 ? c->dim_arrow_mm : 3.0)
                      * d->unit_mm;
    const double arad = c->dim_angle_deg * pi / 180.0;
    double span = deg1 - deg0;
    double am, len;
    char buf[40];
    int i;

    while (span < 0.0) {
        span += 360.0;
    }
    if (c->dim_arc_end) {
        for (i = 0; i < 4; i++) {
            /* 始点では円周を行く向き、終点では戻る向き */
            const double a = i < 2 ? a0 : a1;
            const double tx = i < 2 ? -sin(a) : sin(a);
            const double ty = i < 2 ? cos(a) : -cos(a);
            const double t = (i & 1) ? -arad : arad;
            const double dx = tx * cos(t) - ty * sin(t);
            const double dy = tx * sin(t) + ty * cos(t);

            if (jwc_add_line(d, (float)(cx + r1 * cos(a)),
                             (float)(cy + r1 * sin(a)),
                             (float)(cx + r1 * cos(a) + alen * dx),
                             (float)(cy + r1 * sin(a) + alen * dy),
                             type, pen, layer)) {
                d->lines[d->n_lines - 1].rest[1] = 0xf0;
                d->lines[d->n_lines - 1].rest[3] = 0x20;
            }
        }
    }
    if (jwc_add_arc_at(d, (float)cx, (float)cy, (float)r1,
                       (long)(deg0 * 65536.0 + 0.5),
                       (long)(deg1 * 65536.0 + 0.5),
                       type, pen, layer, 0x03)) {
        d->arcs[d->n_arcs - 1].rest[2] = 0x40;
    }
    if (c->dim_arc == 2) {
        /* ③角度 の値は角度そのものです。②単位 が 度 のときは小数四桁を
         * 詰めて `\xdf` を付けます（測定：270 度は `270\xdf`、
         * atan2(50,80)=32.00538 度は `32.0054\xdf`）。もう一方は度分秒で、
         * 同じ 270 度が `270\xdf0'0"` でした。 */
        if (c->dim_arc_unit) {
            const long all = (long)(span * 3600.0 + 0.5);

            sprintf(buf, "%ld\xdf%ld'%ld" "\x22",
                    all / 3600L, all / 60L % 60L, all % 60L);
        } else {
            char *q;

            sprintf(buf, "%.4f", span);
            q = buf + strlen(buf) - 1;
            while (q > buf && *q == '0') {
                *q-- = 0;
            }
            if (q > buf && *q == '.') {
                *q = 0;
            }
            strcat(buf, "\xdf");
        }
    } else {
        jwc_dim_text(buf, (long)sizeof buf,
                     2.0 * pi * r * span / 360.0 * jwc_zukei_scale(d),
                     c->dim_unit, c->dim_dec, c->dim_comma_on,
                     c->dim_zero_on);
    }
    len = jwc_text_length(d, buf, d->dim_size);
    am = (deg0 + span / 2.0) * pi / 180.0;
    {
        const double tr = r1 + off;
        const double mx = cx + tr * cos(am), my = cy + tr * sin(am);
        const double dx = cos(am - pi / 2.0), dy = sin(am - pi / 2.0);

        if (jwc_add_text(d, (float)(mx - len / 2.0 * dx),
                         (float)(my - len / 2.0 * dy),
                         (float)(mx + len / 2.0 * dx),
                         (float)(my + len / 2.0 * dy),
                         buf, (unsigned char)d->dim_size, layer)) {
            d->texts[d->n_texts - 1].rest[2] = 0x10;
            d->texts[d->n_texts - 1].rest[3] =
                (unsigned char)(c->dim_arc == 2 ? 0x44 : 0x40);
        }
    }
    if (!c->dim_arc_end) {
        for (i = 0; i < 2; i++) {
            const double a = i ? a1 : a0;
            JwcPoint p;

            memset(&p, 0, sizeof p);
            p.x = (float)(cx + r1 * cos(a));
            p.y = (float)(cy + r1 * sin(a));
            p.layer = layer;
            p.rest[0] = layer;
            p.rest[1] = 0x01;
            p.rest[2] = 0x40;
            p.rest[3] = 0x1d;
            jwc_put_point(d, &p);
        }
    }
    /* **引出し線は最後です。** カウント箱はその手前で書き直されるので、
     * 箱の 線数 には入りません: 端部【点】 の一本は箱が 30 のまま（記録は
     * 32 行）、端部【矢印】 は 34（記録は 36 行）——どちらも測りました。 */
    c->dim_lines0 = d->n_lines;
    for (i = 0; i < 2 && !c->dim_arc_two; i++) {
        const double a = i ? a1 : a0;

        if (jwc_add_line(d, (float)(cx + c->dim_arc_r0 * cos(a)),
                         (float)(cy + c->dim_arc_r0 * sin(a)),
                         (float)(cx + r1 * cos(a)),
                         (float)(cy + r1 * sin(a)), type, pen, layer)) {
            d->lines[d->n_lines - 1].rest[1] = 0x59;
            d->lines[d->n_lines - 1].rest[3] = 0x20;
        }
    }
    strncpy(c->dim_arc_val, buf, sizeof c->dim_arc_val - 1);
    c->dim_arc_val[sizeof c->dim_arc_val - 1] = 0;
}

static void dimension_circle(JwCmd *c, Jwc *d, long k, int right)
{
    const unsigned char layer =
        (unsigned char)(d->write_layer);
    const unsigned char type = (unsigned char)d->line_type;
    const unsigned char pen =
        (unsigned char)(c->dim_pen ? c->dim_pen : JW_DIM_PEN);
    const double rad = c->dim_ck_deg * 3.14159265358979323846 / 180.0;
    const double ux = cos(rad), uy = sin(rad);
    const double vx = -uy, vy = ux;
    const double r = d->arcs[k].r;
    /* the centre in the 書込角度's own frame */
    const double mid = d->arcs[k].cx * ux + d->arcs[k].cy * uy;
    const double y = d->arcs[k].cx * vx + d->arcs[k].cy * vy;
    const double x1 = mid + r;
    const double x0 = right ? mid - r : mid;
    const double off = (c->dim_gap_mm > 0.0 ? c->dim_gap_mm : 0.5)
                      * d->unit_mm;
    const double alen = (c->dim_arrow_mm > 0.0 ? c->dim_arrow_mm : 3.0)
                      * d->unit_mm;
    const double arad = c->dim_angle_deg * 3.14159265358979323846 / 180.0;
    const double ax = alen * cos(arad), ay = alen * sin(arad);
    const double past = c->dim_ck_out ? 2.0 * alen : 0.0;
    char buf[40];
    double len, at, from, to;
    int i;

#define DIM_X(a, bb) ((float)((a) * ux + (bb) * vx))
#define DIM_Y(a, bb) ((float)((a) * uy + (bb) * vy))
    /* the value first: 値【外】 puts it where the dimension line has to
     * reach, so its length is part of the line */
    strcpy(buf, right ? "\x83\xd3" : "R");
    jwc_dim_text(buf + strlen(buf), (long)(sizeof buf - strlen(buf)),
                 (right ? 2.0 * r : r) * jwc_zukei_scale(d),
                 c->dim_unit, c->dim_dec, c->dim_comma_on, c->dim_zero_on);
    len = jwc_text_length(d, buf, d->dim_size);
    at = x1 + alen / 2.0 + (c->dim_ck_out ? alen : 0.0);
    from = right ? x0 - past : x0;
    to = c->dim_ck_vout ? at + len : x1 + past;
    if (dim_add_line(d, DIM_X(from, y), DIM_Y(from, y),
                     DIM_X(to, y), DIM_Y(to, y), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = 0x8f;
        d->lines[d->n_lines - 1].rest[3] = 0x20;
    }
    /* The arrows: a pair at the far end, and a second at the near one when
     * the whole diameter is being written.  Each pair is +a then -a across
     * the line, the way every other dimension writes its four. */
    for (i = 0; i < 4; i++) {
        const int far = c->dim_ck_out ? i < 2 : i >= 2;
        const double on = far ? x1 : x0;
        const double dir = (far ? -1.0 : 1.0) * (c->dim_ck_out ? -1.0 : 1.0);
        const double per = (i & 1) ? y - ay : y + ay;

        if (!right && !far) {
            continue;           /* 半径 has the one pair */
        }
        if (dim_add_line(d, DIM_X(on, y), DIM_Y(on, y),
                         DIM_X(on + dir * ax, per),
                         DIM_Y(on + dir * ax, per), type, pen, layer)) {
            d->lines[d->n_lines - 1].rest[1] = 0x8f;
            d->lines[d->n_lines - 1].rest[3] = 0x20;
        }
    }
    if (c->dim_ck_vout) {
        from = at;
    } else {
        from = (x0 + x1) / 2.0 - len / 2.0;
    }
    to = from + len;
    if (jwc_add_text(d, DIM_X(from, y + off), DIM_Y(from, y + off),
                     DIM_X(to, y + off), DIM_Y(to, y + off),
                     buf, (unsigned char)d->dim_size, layer)) {
        d->texts[d->n_texts - 1].rest[2] = 0x10;
        d->texts[d->n_texts - 1].rest[3] =
            (unsigned char)(right ? 0x42 : 0x41);
    }
    /* and the band keeps it: 桁 18 の白地に、描いた値がそのまま出ます */
    strncpy(c->dim_ck_val, buf, sizeof c->dim_ck_val - 1);
    c->dim_ck_val[sizeof c->dim_ck_val - 1] = 0;
#undef DIM_X
#undef DIM_Y
}

/* 寸法線の端の実点（1bb4:35b8 → 1efe0）。同じ所・同じレイヤに
 * rest[1] <= 6 の点があれば足しません。 */
static int dim_point(const JwCmd *c, Jwc *d, float x, float y,
                     unsigned char layer)
{
    JwcPoint p;
    long k;

    for (k = 0; k < d->n_points; k++) {
        const JwcPoint *q = &d->points[k];

        if (q->rest[1] <= 6 && q->x == x && q->y == y
            && q->rest[0] == layer) {
            return 0;
        }
    }
    memset(&p, 0, sizeof p);
    p.x = x;
    p.y = y;
    p.layer = layer;
    p.rest[0] = layer;
    p.rest[1] = (unsigned char)(c->dim_pen_point ? c->dim_pen_point
                                                 : JW_DIM_PEN);
    p.rest[2] = 0x40;
    p.rest[3] = 0x1d;
    return jwc_put_point(d, &p);
}

static void dimension(JwCmd *c, Jwc *d, double x1)
{
    const unsigned char layer =
        (unsigned char)(d->write_layer);
    const unsigned char type = (unsigned char)d->line_type;
    const unsigned char pen =
        (unsigned char)(c->dim_pen ? c->dim_pen : JW_DIM_PEN);
    /* **Everything is in the dimension's own frame.**  `u` runs along the
     * dimension line and `v` across it, a quarter turn anticlockwise; the
     * four presses are kept as coordinates in that frame, so ①横方向,
     * ②縦方向 and ③任意方向 are one piece of drawing.
     *
     * ①横方向 measured on SAMPLE0 with the 引出し線の始点 free at (162,140),
     * the 寸法線 at (300,110) and the two ends read off the top edge:
     *
     *     line (40.973,353.000)-(477.000,353.000)  01 01 00 80 00 20
     *     line (40.973,323.000)-( 40.973,353.000)  01 01 00 59 00 20
     *     line (477.000,323.000)-(477.000,353.000) 01 01 00 59 00 20
     *     text (255.716,353.872)-(262.257,353.872) 02 00 10 40  `250`
     *
     * ②縦方向 on the left edge -- u is (0,1), so v is (-1,0) and the value
     * is written going up, half a millimetre to the left:
     *
     *     line (9.000,323.057)-(9.000,44.000)   01 01 00 00 00 20
     *     line (41.000,323.057)-(9.000,323.057) 01 01 00 59 00 20
     *     line (41.000,44.000)-(9.000,44.000)   01 01 00 59 00 20
     *     text (8.128,180.258)-(8.128,186.799)  02 00 10 40  `160`
     *
     * and ③任意方向 at 30 degrees, the same four presses:
     *
     *     line (62.483,285.729)-(389.534,474.552)  01 01 00 15 00 20
     *     line (40.973,322.984)-(62.483,285.729)   01 01 00 59 00 20
     *     line (368.025,511.808)-(389.534,474.552) 01 01 00 59 00 20
     *     text (220.852,378.170)-(230.293,383.621) 02 00 10 40  `216.5`
     *
     * -- the same drawing turned, to a thousandth.
     *
     * The dimension line's A byte is 0x80 when u is (1,0) and 0x00 for ②縦
     * and for 45, 50, 60 degrees.  **20 and 30 degrees are not 0x00** (0xba
     * and 0x15, the same in every run) and no rule has been found for them;
     * nothing on the screen depends on the byte. */
    const double ux = c->dim_ux, uy = c->dim_uy;
    const double vx = -uy, vy = ux;
    const double x0 = c->dim_x0, y = c->dim_y, b = c->dim_by;
    const double mid = (x0 + x1) / 2.0;
    const double off = (c->dim_gap_mm > 0.0 ? c->dim_gap_mm : 0.5)
                      * d->unit_mm;
    /* 引出し線の突出: the two extension lines run **past** the dimension
     * line by that many millimetres of paper.  Measured on SAMPLE0 with 5mm:
     * the line that stopped at 353.000 now ends at 361.721, and
     * 361.721 - 353.000 = 8.721 = 5 x unit_mm. */
    const double ye = y + (y > b ? 1.0 : -1.0) * c->dim_ext_mm * d->unit_mm;
    char buf[40];
    double len;

#define DIM_X(a, bb) ((float)((a) * ux + (bb) * vx))
#define DIM_Y(a, bb) ((float)((a) * uy + (bb) * vy))
    if (dim_add_line(d, DIM_X(x0, y), DIM_Y(x0, y),
                     DIM_X(x1, y), DIM_Y(x1, y), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = (unsigned char)
            (c->dim_lot_run ? 0x00
             : c->dim_circle ? 0xa2 : uy == 0.0 && ux > 0.0 ? 0x80 : 0x00);
        d->lines[d->n_lines - 1].rest[3] = 0x20;
        /* 寸法設定 ②寸法線端部 が【点】（[0x1126] == 0）なら、寸法線の
         * **両端に実点**。本物は 3ab8:0dba（ovl27、リンク時 0x2bd67〜
         * 0x2be7c）で寸法線レコードの始点・終点をそのまま 1bb4:35b8 に
         * 渡します。点は 書込レイヤ・[0x1d0]（点のペン）・0x40・0x1d。
         * 1bb4:1efe0 は寸法コマンド中（[0xa62] == 14）だけ、座標と
         * レイヤが同じで rest[1] <= 6 の点がもうあれば足しません。
         * ⑤一括・④円･角 の道はまだ測っていないので入れていません。 */
    }
    /* 【点】の道では、**実点を新しく足せた端にだけ引出し線**を引きます
     * （0x2bdad・0x2be62：35b8 が 0 を返したら 304ff を飛ばす）。同じ
     * 所に点がもうあれば引出し線も重ならない。寸法線が長さ 0 で入らな
     * くても点は寸法線の両端で試します（測定：同じ角を二度読んだ寸法は
     * 文字 `0` だけ）。 */
    {
        const int pts = !c->dim_end && !c->dim_lot_run && !c->dim_circle;
        int e0 = 1, e1 = 1;

        if (pts) {
            e0 = dim_point(c, d, DIM_X(x0, y), DIM_Y(x0, y), layer);
        }
        if (e0 && c->dim_lot_run != 2
            && dim_add_line(d, DIM_X(x0, b), DIM_Y(x0, b),
                            DIM_X(x0, ye), DIM_Y(x0, ye), type, pen, layer)) {
            d->lines[d->n_lines - 1].rest[1] = 0x59;
            d->lines[d->n_lines - 1].rest[3] = 0x20;
        }
        if (pts) {
            e1 = dim_point(c, d, DIM_X(x1, y), DIM_Y(x1, y), layer);
        }
        if (!e1) {
            goto no_ext1;
        }
    }
    if (dim_add_line(d, DIM_X(x1, b), DIM_Y(x1, b),
                     DIM_X(x1, ye), DIM_Y(x1, ye), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = 0x59;
        d->lines[d->n_lines - 1].rest[3] = 0x20;
    }
no_ext1:
    /* 寸法設定 ②寸法線端部 が【矢印】なら、両端に 4 本。SAMPLE0 を
     * 矢印長さ 3mm・角度 15 度のまま 250mm の寸法で測ると、
     *
     *     line (40.973,353.000)-(46.027,354.354)   01 01 00 f2 00 20
     *     line (40.973,353.000)-(46.027,351.646)   01 01 00 f2 00 20
     *     line (477.000,353.000)-(471.946,354.354) 01 01 00 f2 00 20
     *     line (477.000,353.000)-(471.946,351.646) 01 01 00 f2 00 20
     *
     * 長さ 5.232 は 3mm x unit_mm、傾きは 15 度。この枠の中では四本とも
     * **始点側が a+、終点側が a-** で、垂直のずれは (+, -) の順です
     * ——②縦方向 の (9,323.057)-(7.646,328.111) も同じになります。 */
    if (c->dim_end) {
        const double alen = (c->dim_arrow_mm > 0.0 ? c->dim_arrow_mm : 3.0)
                          * d->unit_mm;
        const double rad = c->dim_angle_deg * 3.14159265358979323846 / 180.0;
        const double ax = alen * cos(rad), ay = alen * sin(rad);
        int i;

        for (i = 0; i < 4; i++) {
            const double on = (i < 2 ? x0 : x1);
            const double at = (i < 2 ? x0 + ax : x1 - ax);
            const double per = (i & 1) ? y - ay : y + ay;

            if (dim_add_line(d, DIM_X(on, y), DIM_Y(on, y),
                             DIM_X(at, per), DIM_Y(at, per),
                             type, pen, layer)) {
                d->lines[d->n_lines - 1].rest[1] = 0xf2;
                d->lines[d->n_lines - 1].rest[3] = 0x20;
            }
        }
    }
    /* The value is the **real** size: units x (紙 / 518) x 縮尺の分母.
     * SAMPLE0 is 1/1 so the two are the same there; SAMPLE2 is 1/100 and its
     * 188mm of paper is written `18,800`. */
    c->dim_x1 = x1;
    c->dim_value = (x1 > x0 ? x1 - x0 : x0 - x1) * jwc_zukei_scale(d);
    /* ②半径 and ③直径 put `R` or `φ` in front of the same number
     * (measured: a circle of 100 units on SAMPLE0 gives `R57.3` and
     * `φ114.7`）。φ は SJIS の 83 d3 です。 */
    buf[0] = 0;
    if (c->dim_circle == 1) {
        strcpy(buf, "R");
    } else if (c->dim_circle == 2) {
        strcpy(buf, "\x83\xd3");
    }
    jwc_dim_text(buf + strlen(buf), (long)(sizeof buf - strlen(buf)),
                 c->dim_value, c->dim_unit, c->dim_dec,
                 c->dim_comma_on, c->dim_zero_on);
    len = jwc_text_length(d, buf, d->dim_size);
    (void)mid;
    if (dim_put_text(d, ux, uy, DIM_X(x0 < x1 ? x0 : x1, y),
                     DIM_Y(x0 < x1 ? x0 : x1, y), fabs(x1 - x0), len, off,
                     buf, layer)) {
        d->texts[d->n_texts - 1].rest[2] = 0x10;
        d->texts[d->n_texts - 1].rest[3] =
            (unsigned char)(0x40 + c->dim_circle);
    }
#undef DIM_X
#undef DIM_Y
}

/* ⑤一括 が並べる一本ぶん。`dimension()` をそのまま使いますが、境目の
 * 引出し線は一本なので二本目からは左側を書かず、寸法線の A バイトも
 * 0x80 ではなく 0x00 です（測定）。 */
static void dimension_lot(JwCmd *c, Jwc *d)
{
    const double ux = c->dim_ux, uy = c->dim_uy;
    const double vx = -uy, vy = ux;
    double at[64];
    int n = 0, i, j;

    for (i = 0; i < c->dim_lot_n; i++) {
        const JwcLine *l = &d->lines[c->dim_lot_k[i]];
        const double p0 = l->x0 * vx + l->y0 * vy;
        const double p1 = l->x1 * vx + l->y1 * vy;
        double t;

        /* 寸法線と平行な線は交わりません。本物がそれをどう扱うかは
         * 測っていないので、ここでは飛ばします。 */
        if (p1 - p0 > -1e-9 && p1 - p0 < 1e-9) {
            continue;
        }
        /* **寸法線との交わりで測っています。** 引出し線の始点の側で
         * 測るのとは、斜めの線でしか違いません（SAMPLE0 の線はどれも
         * 縦か横なので、どちらか決められませんでした）。 */
        t = (c->dim_y - p0) / (p1 - p0);
        at[n] = (l->x0 + (l->x1 - l->x0) * t) * ux
              + (l->y0 + (l->y1 - l->y0) * t) * uy;
        n++;
    }
    for (i = 1; i < n; i++) {           /* 小さい順に */
        const double v = at[i];

        for (j = i; j > 0 && at[j - 1] > v; j--) {
            at[j] = at[j - 1];
        }
        at[j] = v;
    }
    for (i = 0; i + 1 < n; i++) {
        c->dim_x0 = at[i];
        c->dim_lot_run = i ? 2 : 1;
        dimension(c, d, at[i + 1]);
    }
    c->dim_lot_run = 0;
}

/* 二つの点が同じところか（③複線化 のつなぎ目さがし）。 */
static int near_enough(double ax, double ay, double bx, double by)
{
    const double dx = ax - bx, dy = ay - by;

    return dx * dx + dy * dy < 1e-6;
}

/* 元の線と同じ 線種・ペン・レイヤ・A バイトで一本足します（③複線化）。 */
static void add_like(Jwc *d, const JwcLine *l, double x0, double y0,
                     double x1, double y1)
{
    const unsigned char type = l->type, pen = l->pen, layer = l->layer;
    const unsigned char a = l->rest[1], b = l->rest[3];

    if (jwc_add_line(d, (float)x0, (float)y0, (float)x1, (float)y1,
                     type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = a;
        d->lines[d->n_lines - 1].rest[3] = b;
    }
}

/* 二本の離した線が交わるところ（③複線化 の角）。平行なら動かしません。 */
static void meet_at(double p0x, double p0y, double p1x, double p1y,
                    double q0x, double q0y, double q1x, double q1y,
                    double gap, double *ax, double *ay,
                    double *bx, double *by)
{
    int side;

    for (side = 0; side < 2; side++) {
        const double s = side ? -gap : gap;
        const double d0x = p1x - p0x, d0y = p1y - p0y;
        const double d1x = q1x - q0x, d1y = q1y - q0y;
        const double l0 = sqrt(d0x * d0x + d0y * d0y);
        const double l1 = sqrt(d1x * d1x + d1y * d1y);
        double e0x, e0y, e1x, e1y, det, t;

        if (l0 <= 0.0 || l1 <= 0.0) {
            return;
        }
        e0x = p0x - d0y / l0 * s;
        e0y = p0y + d0x / l0 * s;
        e1x = q0x - d1y / l1 * s;
        e1y = q0y + d1x / l1 * s;
        det = d0x * d1y - d0y * d1x;
        if (det > -1e-9 && det < 1e-9) {
            continue;           /* まっすぐ続いている */
        }
        t = ((e1x - e0x) * d1y - (e1y - e0y) * d1x) / det;
        if (side) {
            *bx = e0x + d0x * t;
            *by = e0y + d0y * t;
        } else {
            *ax = e0x + d0x * t;
            *ay = e0y + d0y * t;
        }
    }
}

/* 変形 ②包絡処理変形 の **包絡**（終点を左ボタンで押したとき）。
 *
 * **本物の手続きをそのまま写したものです**（オーバーレイ 11 の
 * 3ab8:325e、枠の中の処理は 0x3bde〜0x6217。読み方は RESUME の
 * 「包絡の読み」）。前は測った結果から規則を組んでいましたが、
 * SAMPLE3 で屋根の形がまるで違い（1,365 px）、規則では追いつけません
 * でした。
 *
 * 流れ:
 *
 *   1. 全部の線の印（rest[2] の 0x02、rest[3] の 0x01/0x02/0x04）を
 *      落とし、触れる線で枠の箱に掛かるものに印を立てます。両端が枠の
 *      中なら 0x02 と 0x100、片端でも縁か中なら 0x02、両端とも外なら
 *      枠の対角線をまたぐときだけ 0x02。
 *   2. 印の付いた線（【実線のみ】なら実線だけ）を 50 本まで集め、
 *      消します（rest[3] の 0x80 を持つものは消さず、相手としてだけ
 *      使います）。
 *   3. レイヤ・線色・線種の同じものを一組ずつ処理し、組の中で
 *      一直線に並ぶものを一本にまとめ、端が枠の外か中かで三通りに
 *      分けて、互いの交点で伸ばし・切って、後ろに足し直します。
 *
 * 浮動小数は本物のソフトウェア浮動小数と同じ精度でやります。記録と
 * 同じ float どうしの計算は float（1 段ごとに丸める）、double の引数が
 * 入るところ（線の座標系への出し入れ）は double で計算して float に
 * 丸めます。 */
#define JW_ENV_MAX 50

/* 線の座標系（1bb4:27ea）。原点は線の始点、u は線に沿って、v は左へ。 */
typedef struct {
    float ox, oy, cs, sn, len;
} EnvFrame;

static void envf_set(EnvFrame *f, const JwcLine *l)
{
    const double dx = (double)l->x1 - (double)l->x0;
    const double dy = (double)l->y1 - (double)l->y0;
    double len;

    f->ox = l->x0;
    f->oy = l->y0;
    if (fabs(dy) + fabs(dx) < 0.001) {
        /* 短すぎる線。本物は行に知らせを出し、向きを (1,0) にします */
        f->cs = 1.0f;
        f->sn = 0.0f;
        f->len = 1.0f;
        return;
    }
    len = sqrt(dy * dy + dx * dx);
    f->cs = (float)(dx / len);
    f->sn = (float)(dy / len);
    f->len = (float)len;
}

/* 1bb4:2981 / 2a18 の向き 1（図面 → 線の座標）。 */
static float envf_u(const EnvFrame *f, float x, float y)
{
    return (float)(((double)y - f->oy) * f->sn + ((double)x - f->ox) * f->cs);
}

static float envf_v(const EnvFrame *f, float x, float y)
{
    return (float)(((double)y - f->oy) * f->cs - ((double)x - f->ox) * f->sn);
}

/* 向き 0（線の上の位置 u → 図面）。v はいつも 0 で呼ばれます。 */
static float envf_x(const EnvFrame *f, float u)
{
    return (float)((double)f->cs * u - (double)f->sn * 0.0 + f->ox);
}

static float envf_y(const EnvFrame *f, float u)
{
    return (float)((double)f->cs * 0.0 + (double)f->sn * u + f->oy);
}

/* 多角形 ① の C 点（decomp 0x2d182 以降）。EnvFrame を使うのでここに置く。 */
static void pg1_make(JwCmd *c, Jwc *d, double mx, double my)
{
    /* 浮動小数の丸めは decomp（0x2d182 以降）のとおり：a・b・L・p・h は float、積は double。
     * 座標系は ②包絡処理変形 と同じ 1bb4:27ea（原点 A、u は A→B、v は左）。 */
    const float sc = jwc_zukei_scale(d);
    const float a = (float)((float)c->pg1_pd[0] / sc);
    const float b = (float)((float)c->pg1_pd[1] / sc);
    JwcLine ab;
    EnvFrame f;
    float len, p, a2, h, v, cx, cy;
    int i;

    memset(&ab, 0, sizeof ab);
    ab.x0 = (float)c->pg1_ax;
    ab.y0 = (float)c->pg1_ay;
    ab.x1 = (float)c->pg1_bx;
    ab.y1 = (float)c->pg1_by;
    envf_set(&f, &ab);
    len = envf_u(&f, ab.x1, ab.y1);
    if (len == 0.0f) {
        return;
    }
    a2 = (float)((double)a * (double)a);
    p = (float)((((double)a * a - (double)b * b) + (double)len * len) / len * 0.5);
    {
        const double hh = (double)a2 - (double)p * (double)p;

        h = (float)sqrt(hh > 0.0 ? hh : 0.0);
    }
    v = envf_v(&f, (float)mx, (float)my);
    if (v < 0.0f) {
        h = -h;
    }
    cx = (float)((double)f.cs * p - (double)f.sn * h + f.ox);
    cy = (float)((double)f.cs * h + (double)f.sn * p + f.oy);
    c->pg1_n = 0;
    for (i = 0; i < 2; i++) {
        const float sx = i ? ab.x1 : ab.x0;
        const float sy = i ? ab.y1 : ab.y0;

        if (jwc_add_line(d, sx, sy, cx, cy,
                         (unsigned char)d->line_type, (unsigned char)d->pen,
                         (unsigned char)d->write_layer)) {
            d->lines[d->n_lines - 1].rest[1] = 6;
            c->pg1_n++;
        }
    }
}

/* 1bb4:3cd1。**線 a（無限に伸ばしたもの）と線分 b** の交点。全部 float。
 * 返り値: 0 = 平行か重なっている（*x,*y は 0 か 10）、1 = 交わる、
 * -1 = b の外で交わる、-2 = b の端が a の上で、b が a の右にある。 */
static int env_isect(const JwcLine *a, const JwcLine *b, float *x, float *y)
{
    const float ay = a->y1 - a->y0;
    const float bx = b->x1 - b->x0;
    const float by = b->y1 - b->y0;
    const float ax = a->x1 - a->x0;
    const float p = ax * (b->y0 - a->y0) - (b->x0 - a->x0) * ay;
    const float q = (b->y1 - a->y0) * ax - (b->x1 - a->x0) * ay;
    float t, pq;
    double gap;

    if (p == 0.0f && q == 0.0f) {
        *x = *y = 0.0f;
        return 0;
    }
    if (p == q) {
        *x = *y = 10.0f;
        return 0;
    }
    pq = p - q;
    gap = fabs((double)pq);
    if (gap < 1.0 && fabs((double)p) > gap * 1e10) {
        *x = *y = 10.0f;
        return 0;
    }
    t = p / pq;
    *x = t * bx + b->x0;
    *y = t * by + b->y0;
    if (a->x0 == a->x1) {
        *x = a->x0;
    }
    if (a->y1 == a->y0) {
        *y = a->y0;
    }
    if (b->x0 == b->x1) {
        *x = b->x0;
    }
    if (b->y1 == b->y0) {
        *y = b->y0;
    }
    if (t < 0.0f || t > 1.0f) {
        return -1;
    }
    if (p > 0.0f || q > 0.0f) {
        return 1;
    }
    return -2;
}

/* 7a6:0a8b。線分 b が線 a を**はっきりまたぎ**（b の両端が a の両側）、
 * a が b の片側に寄っていなければ 1。全部 float。 */
static int env_straddle(const JwcLine *a, const JwcLine *b)
{
    float ay = a->y1 - a->y0, ax = a->x1 - a->x0;
    float c1 = ax * (b->y0 - a->y0) - (b->x0 - a->x0) * ay;
    float c2 = (b->y1 - a->y0) * ax - (b->x1 - a->x0) * ay;
    float by, bx, c3, c4;

    if (!(c1 < 0.0f || c2 < 0.0f)) {
        return 0;
    }
    if (!(c1 > 0.0f || c2 > 0.0f)) {
        return 0;
    }
    by = b->y1 - b->y0;
    bx = b->x1 - b->x0;
    c3 = bx * (a->y0 - b->y0) - (a->x0 - b->x0) * by;
    c4 = bx * (a->y1 - b->y0) - (a->x1 - b->x0) * by;
    if (c3 > 0.0f && c4 > 0.0f) {
        return -1;
    }
    if (c3 < 0.0f && c4 < 0.0f) {
        return -1;
    }
    return 1;
}

/* 枠の四隅（7a6:07b1 が左回りにそろえたもの）。 */
typedef struct {
    float x[4], y[4];
    float lo_x, lo_y, hi_x, hi_y;
} EnvBox;

static void env_box(const JwCmd *c, EnvBox *b)
{
    const float x1 = (float)c->x0, y1 = (float)c->y0;
    const float x2 = (float)c->x1, y2 = (float)c->y1;
    int k;

    b->x[0] = x1; b->y[0] = y1;
    b->x[1] = x2; b->y[1] = y1;
    b->x[2] = x2; b->y[2] = y2;
    b->x[3] = x1; b->y[3] = y2;
    if ((y2 - y1) * (b->x[1] - x1) - (x2 - x1) * (b->y[1] - y1) < 0.0f) {
        b->x[1] = x1; b->y[1] = y2;
        b->x[3] = x2; b->y[3] = y1;
    }
    b->lo_x = b->hi_x = b->x[0];
    b->lo_y = b->hi_y = b->y[0];
    for (k = 1; k < 4; k++) {
        if (b->x[k] < b->lo_x) b->lo_x = b->x[k];
        if (b->x[k] > b->hi_x) b->hi_x = b->x[k];
        if (b->y[k] < b->lo_y) b->lo_y = b->y[k];
        if (b->y[k] > b->hi_y) b->hi_y = b->y[k];
    }
}

/* 7a6:0ce5。枠の中なら 1、縁の上なら 0、外なら -1。 */
static int env_inside(const EnvBox *b, float x, float y)
{
    int k;

    for (k = 0; k < 4; k++) {
        const int n = k < 3 ? k + 1 : 0;
        const double c = (double)(float)(b->x[n] - b->x[k])
                             * ((double)y - b->y[k])
                         - (double)(float)(b->y[n] - b->y[k])
                             * ((double)x - b->x[k]);

        if (c == 0.0) {
            return 0;
        }
        if (c < 0.0) {
            return -1;
        }
    }
    return 1;
}

#define ENV_EPS 0.001

/* 線を足します（11f2:67fa）。長さの無い線は足しません。 */
static void env_add(Jwc *d, const JwcLine *w)
{
    if (w->pen < 0x5a && w->x0 == w->x1 && w->y0 == w->y1) {
        return;
    }
    jwc_put_line(d, w);
}

/* 30da0。枠の辺 e と線 l の交わる位置で、*hi を大きいほうへ、*lo を
 * 小さいほうへ。 */
static void env_edge(const EnvFrame *f, const JwcLine *l, const JwcLine *e,
                     float *hi, float *lo)
{
    float x, y, u;

    if (envf_v(f, e->x0, e->y0) * envf_v(f, e->x1, e->y1) > 0.0f) {
        return;
    }
    if (!env_isect(l, e, &x, &y)) {
        return;
    }
    u = envf_u(f, x, y);
    if (*hi < u) {
        *hi = u;
    }
    if (u < *lo) {
        *lo = u;
    }
}

static int env_group(Jwc *d, const EnvBox *box, JwcLine *g, int ng, int nall)
{
    const float BIG = -1.9999999556392617e+22f;
    int i, j, k, added = 0;

    /* 一直線に並ぶものを一本に（2f47a）。離れていてもつながります。 */
    for (i = 1; i <= ng; i++) {
        EnvFrame f;
        float lo, hi;

    again:
        envf_set(&f, &g[i]);
        lo = 0.0f;
        hi = envf_u(&f, g[i].x1, g[i].y1);
        for (j = i + 1; j <= ng; j++) {
            float u1, u2;

            if (fabs(envf_v(&f, g[j].x0, g[j].y0)) > ENV_EPS
                || fabs(envf_v(&f, g[j].x1, g[j].y1)) > ENV_EPS) {
                continue;
            }
            u1 = envf_u(&f, g[j].x0, g[j].y0);
            u2 = envf_u(&f, g[j].x1, g[j].y1);
            if (u1 > u2) {
                const float s = u1;

                u1 = u2;
                u2 = s;
            }
            if (u1 < lo) {
                g[i].x0 = envf_x(&f, u1);
                g[i].y0 = envf_y(&f, u1);
            }
            if (hi < u2) {
                g[i].x1 = envf_x(&f, u2);
                g[i].y1 = envf_y(&f, u2);
            }
            for (k = j; k < nall; k++) {
                g[k] = g[k + 1];
            }
            ng--;
            nall--;
            goto again;
        }
    }
    /* 端の内外（2f682）。外の端を始点に。0x200 = 片端だけ外、
     * 0x400 = 両端とも外。 */
    for (i = 1; i <= ng; i++) {
        JwcLine *l = &g[i];
        const int in0 = env_inside(box, l->x0, l->y0) > 0;
        const int in1 = env_inside(box, l->x1, l->y1) > 0;

        l->rest[3] &= (unsigned char)~6u;
        if (in0 && !in1) {
            float s = l->x0;

            l->x0 = l->x1;
            l->x1 = s;
            s = l->y0;
            l->y0 = l->y1;
            l->y1 = s;
            l->rest[3] |= 2u;
        }
        if (!in0 && in1) {
            l->rest[3] |= 2u;
        }
        if (!in0 && !in1) {
            l->rest[3] |= 4u;
        }
    }
    /* 伸ばす・縮める（2fa97）。仲間の線（を伸ばしたもの）との交点のうち、
     * 枠を出るところより手前でいちばん遠いもの・枠に入るところより
     * 先でいちばん近いもの。 */
    for (i = 1; i <= ng; i++) {
        JwcLine *l = &g[i];
        EnvFrame f;
        JwcLine e;
        float hi_in = BIG, far_u = BIG, lo_in = -BIG, near_u = -BIG;

        if (l->rest[3] & 4u) {
            continue;
        }
        envf_set(&f, l);
        e = *l;
        e.x0 = box->lo_x; e.y0 = box->lo_y; e.x1 = box->lo_x; e.y1 = box->hi_y;
        env_edge(&f, l, &e, &hi_in, &lo_in);
        e.x0 = box->hi_x; e.y0 = box->hi_y;
        env_edge(&f, l, &e, &hi_in, &lo_in);
        e.x1 = box->hi_x; e.y1 = box->lo_y;
        env_edge(&f, l, &e, &hi_in, &lo_in);
        e.x0 = box->lo_x; e.y0 = box->lo_y;
        env_edge(&f, l, &e, &hi_in, &lo_in);
        for (j = 1; j <= ng; j++) {
            float x, y, u;

            if (j == i || !env_isect(l, &g[j], &x, &y)) {
                continue;
            }
            u = envf_u(&f, x, y);
            if (u > far_u && u < hi_in) {
                far_u = u;
            }
            if (u < near_u && u > lo_in && !(l->rest[3] & 2u)) {
                near_u = u;
            }
        }
        if (l->rest[3] & 2u) {
            if (far_u > ENV_EPS) {
                l->x1 = envf_x(&f, far_u);
                l->y1 = envf_y(&f, far_u);
            }
        } else if ((double)far_u - ENV_EPS > near_u) {
            l->x0 = envf_x(&f, near_u);
            l->y0 = envf_y(&f, near_u);
            l->x1 = envf_x(&f, far_u);
            l->y1 = envf_y(&f, far_u);
        }
    }
    /* 片端だけ外の線（30100）。外の端から最初の交点まで、最後の交点から
     * 中の端まで（中の端が交点の上なら後ろは出しません）。 */
    for (i = 1; i <= ng; i++) {
        const JwcLine *l = &g[i];
        EnvFrame f;
        JwcLine w = *l;
        float first, last = 0.0f, end;
        int tail = 1;

        if (!(l->rest[3] & 2u)) {
            continue;
        }
        envf_set(&f, l);
        end = first = envf_u(&f, l->x1, l->y1);
        for (j = 1; j <= nall; j++) {
            float v0, v1, x, y, u;

            if (j == i) {
                continue;
            }
            v0 = envf_v(&f, g[j].x0, g[j].y0);
            v1 = envf_v(&f, g[j].x1, g[j].y1);
            if (!(v0 <= -ENV_EPS || v1 <= -ENV_EPS)) {
                continue;
            }
            if (!(v0 >= ENV_EPS || v1 >= ENV_EPS)) {
                continue;
            }
            if (!env_isect(l, &g[j], &x, &y)) {
                continue;
            }
            u = envf_u(&f, x, y);
            if (!((double)end - ENV_EPS > u) && !((double)end + ENV_EPS < u)) {
                tail = 0;
            }
            if (u < first && !((double)0.0f + ENV_EPS >= u)) {
                first = u;
            }
            if (u > last && (double)end - ENV_EPS > u) {
                last = u;
            }
        }
        if ((double)end - ENV_EPS > first) {
            w.x1 = envf_x(&f, first);
            w.y1 = envf_y(&f, first);
            env_add(d, &w);
            added++;
            w = *l;
            w.x0 = envf_x(&f, last);
            w.y0 = envf_y(&f, last);
            if (tail) {
                env_add(d, &w);
                added++;
            }
        } else {
            env_add(d, &w);
            added++;
        }
    }
    /* 両端とも外の線（30696）。交点のうちいちばん手前といちばん先の
     * あいだを抜きます。 */
    for (i = 1; i <= ng; i++) {
        const JwcLine *l = &g[i];
        EnvFrame f;
        JwcLine w = *l;
        float lo, hi = 0.0f;

        if (!(l->rest[3] & 4u)) {
            continue;
        }
        envf_set(&f, l);
        lo = envf_u(&f, l->x1, l->y1);
        for (j = 1; j <= nall; j++) {
            float v0, v1, x, y, u;
            int cut;

            if (j == i) {
                continue;
            }
            v0 = envf_v(&f, g[j].x0, g[j].y0);
            v1 = envf_v(&f, g[j].x1, g[j].y1);
            if (nall > 3) {
                cut = !(v0 > -ENV_EPS && v1 > -ENV_EPS)
                      && (v0 >= ENV_EPS || v1 >= ENV_EPS);
            } else {
                cut = !(v0 > ENV_EPS && v1 > ENV_EPS)
                      && (v0 >= -ENV_EPS || v1 >= -ENV_EPS);
            }
            /* 同じ側にあるものは、押し方の印（[bp-0x952]、ふだん 0）が
             * 立っているときだけ見ます。 */
            if (!cut || !env_isect(l, &g[j], &x, &y)) {
                continue;
            }
            u = envf_u(&f, x, y);
            if (u < lo) {
                lo = u;
            }
            if (u > hi) {
                hi = u;
            }
        }
        if ((double)hi - ENV_EPS >= lo) {
            w.x1 = envf_x(&f, lo);
            w.y1 = envf_y(&f, lo);
            env_add(d, &w);
            w = *l;
            w.x0 = envf_x(&f, hi);
            w.y0 = envf_y(&f, hi);
        }
        env_add(d, &w);
        added++;
    }
    /* 両端とも中の線（307b1）。端から最初の交点まで・最後の交点から
     * 端まで（端が交点の上ならそちらは出しません）。交点が無ければ
     * そのまま。 */
    for (i = 1; i <= ng; i++) {
        const JwcLine *l = &g[i];
        EnvFrame f;
        JwcLine w = *l;
        float first, last = 0.0f, end;
        int head = 1, tail = 1;

        if (l->rest[3] & 6u) {
            continue;
        }
        envf_set(&f, l);
        end = first = envf_u(&f, l->x1, l->y1);
        for (j = 1; j <= nall; j++) {
            float v0, v1, x, y, u;

            if (j == i) {
                continue;
            }
            v0 = envf_v(&f, g[j].x0, g[j].y0);
            v1 = envf_v(&f, g[j].x1, g[j].y1);
            if (!(v0 <= -ENV_EPS || v1 <= -ENV_EPS)) {
                continue;
            }
            if (!(v0 >= ENV_EPS || v1 >= ENV_EPS)) {
                continue;
            }
            if (!env_isect(l, &g[j], &x, &y)) {
                continue;
            }
            u = envf_u(&f, x, y);
            if (!((double)0.0f - ENV_EPS > u) && !((double)0.0f + ENV_EPS < u)) {
                head = 0;
            }
            if (!((double)end - ENV_EPS > u) && !((double)end + ENV_EPS < u)) {
                tail = 0;
            }
            if (u < first && !((double)0.0f + ENV_EPS >= u)) {
                first = u;
            }
            if (u > last && (double)end - ENV_EPS > u) {
                last = u;
            }
        }
        if ((double)last + ENV_EPS >= first) {
            w.x1 = envf_x(&f, first);
            w.y1 = envf_y(&f, first);
            if (head) {
                env_add(d, &w);
                added++;
            }
            w = *l;
            w.x0 = envf_x(&f, last);
            w.y0 = envf_y(&f, last);
            if (tail) {
                env_add(d, &w);
                added++;
            }
        } else {
            env_add(d, &w);
            added++;
        }
    }
    return added;
}

static int env_wrap(JwCmd *c, Jwc *d)
{
    EnvBox box;
    JwcLine diag0, diag1;
    JwcLine got[JW_ENV_MAX + 1];
    JwcLine g[JW_ENV_MAX + 1];
    int taken[JW_ENV_MAX + 1];
    int n = 0, i;
    long k;

    env_box(c, &box);
    memset(&diag0, 0, sizeof diag0);
    diag0.x0 = box.x[0]; diag0.y0 = box.y[0];
    diag0.x1 = box.x[2]; diag0.y1 = box.y[2];
    diag1 = diag0;
    diag1.x0 = box.x[1]; diag1.y0 = box.y[1];
    diag1.x1 = box.x[3]; diag1.y1 = box.y[3];

    /* 1. 印（2e9dc） */
    for (k = 0; k < d->n_lines; k++) {
        JwcLine *l = &d->lines[k];
        int a, b;

        l->rest[2] &= (unsigned char)~2u;
        l->rest[3] &= (unsigned char)~7u;
        if (!in_reach_layer(d, l->layer) || (l->rest[2] & 0xe0u)) {
            continue;
        }
        if ((l->x0 <= box.lo_x && l->x1 <= box.lo_x)
            || (l->x0 >= box.hi_x && l->x1 >= box.hi_x)
            || (l->y0 <= box.lo_y && l->y1 <= box.lo_y)
            || (l->y0 >= box.hi_y && l->y1 >= box.hi_y)) {
            continue;
        }
        a = env_inside(&box, l->x0, l->y0);
        b = env_inside(&box, l->x1, l->y1);
        if (a > 0 && b > 0) {
            l->rest[2] |= 2u;
            l->rest[3] |= 1u;
        } else if (a >= 0 || b >= 0
                   || env_straddle(&diag0, l) > 0
                   || env_straddle(&diag1, l) > 0) {
            l->rest[2] |= 2u;
        }
    }
    /* 2. 集めて（2ecaf）、消す（2ed8f） */
    for (k = 0; k < d->n_lines; k++) {
        const JwcLine *l = &d->lines[k];

        if (!(l->rest[2] & 2u) || (!c->hen_env_all && l->type != 1)) {
            continue;
        }
        if (++n > JW_ENV_MAX) {
            return -1;          /* `.線数は５０までです` */
        }
        got[n] = *l;
    }
    if (n == 0) {
        return 0;
    }
    for (k = 0; k < d->n_lines;) {
        const JwcLine *l = &d->lines[k];

        if ((l->rest[2] & 2u) && !(l->rest[3] & 0x80u)
            && (c->hen_env_all || l->type == 1)) {
            jwc_remove_line(d, k);
        } else {
            k++;
        }
    }
    /* 3. レイヤ・線色・線種の同じ組ごとに（2f0c7） */
    for (i = 1; i <= n; i++) {
        taken[i] = 0;
    }
    for (;;) {
        int ng = 0, nall, j;

        for (i = 1; i <= n; i++) {
            if (taken[i] || (got[i].rest[3] & 0x80u)) {
                continue;
            }
            if (ng > 0 && (got[i].layer != g[1].layer
                           || got[i].pen != g[1].pen
                           || got[i].type != g[1].type)) {
                continue;
            }
            taken[i] = 1;
            g[++ng] = got[i];
            g[ng].rest[2] &= (unsigned char)~2u;
        }
        if (ng == 0) {
            break;
        }
        nall = ng;
        for (j = 1; j <= n; j++) {
            if (got[j].rest[3] & 0x80u) {
                g[++nall] = got[j];
            }
        }
        env_group(d, &box, g, ng, nall);
    }
    return 1;
}

/* 変形 ②包絡処理変形 の **範囲内消去**（終点を右ボタンで押したとき）。
 *
 * 枠の中を切り取ります。丸ごと入っている線は消え、またいでいる線は
 * 枠の線ちょうどで切られ、**外に出ているぶんだけ**が新しい記録として
 * 後ろに並びます。測定：TEST8 の壁四本
 * （y=240・y=260 が x 150..550、x=340・x=360 が y 120..380）を
 * (300,200)-(400,300) で切ると、線ごとに手前側・向こう側の順に八本。
 * 線種・ペン・レイヤと残りのバイトは元のものをそのまま継ぎます。 */
static int env_cut(JwCmd *c, Jwc *d)
{
    const long n0 = d->n_lines;
    long k, picked = 0;
    int changed = 0;

    /* **枠にかかる線は五十本まで**です。越えると原作は行 2 の桁 20 に
     * `.線数は５０までです` と出して、何もしません（測定：五十本ちょうどは
     * 切れて百本になり、五十一本はそのまま残りました）。数えるのは
     * ①【実線のみ】で触らない線種も込みです。 */
    for (k = 0; k < n0; k++) {
        const JwcLine *l = &d->lines[k];
        double ax = l->x0, ay = l->y0, bx = l->x1, by = l->y1;

        if (!in_reach_layer(d, l->layer)) {
            continue;
        }
        if (!clip_to_range(c, &ax, &ay, &bx, &by)) {
            continue;
        }
        if (ax == bx && ay == by) {
            continue;
        }
        picked++;
    }
    if (picked > 50) {
        return -1;
    }
    /* 触ったものの印（rest[2] の bit 1）。まず全部落としてから、
     * 枠にかかったものに立てます（測定：SAMPLE0 では枠の外の線の
     * 0x03 が 0x01 に、0x02 が 0x00 に落ちていました）。 */
    for (k = 0; k < n0; k++) {
        d->lines[k].rest[2] &= (unsigned char)~2u;
    }
    for (k = 0; k < n0; k++) {
        JwcLine *l = &d->lines[k];
        double ax = l->x0, ay = l->y0, bx = l->x1, by = l->y1;

        if (!in_reach_layer(d, l->layer)) {
            continue;
        }
        if (!clip_to_range(c, &ax, &ay, &bx, &by)) {
            continue;
        }
        if (ax == bx && ay == by) {
            continue;
        }
        l->rest[2] |= 2u;
    }
    for (k = 0; k < n0; k++) {
        const JwcLine *l = &d->lines[k];
        double ax = l->x0, ay = l->y0, bx = l->x1, by = l->y1;
        const double ox = ax, oy = ay, px = bx, py = by;
        const unsigned char ty = l->type, pn = l->pen, la = l->layer;
        const unsigned char r1 = l->rest[1], r2 = l->rest[2], r3 = l->rest[3];

        if (!in_reach_layer(d, l->layer)) {
            continue;
        }
        if (!c->hen_env_all && l->type != 1) {
            continue;       /* ①【実線のみ】——実線しか触りません */
        }
        if (!clip_to_range(c, &ax, &ay, &bx, &by)) {
            continue;
        }
        if (ax == bx && ay == by) {
            continue;           /* 角を掠めただけ */
        }
        if (ox != ax || oy != ay) {
            if (jwc_add_line(d, (float)ox, (float)oy, (float)ax, (float)ay,
                             ty, pn, la)) {
                d->lines[d->n_lines - 1].rest[1] = r1;
                d->lines[d->n_lines - 1].rest[2] = r2;
                d->lines[d->n_lines - 1].rest[3] = r3;
            }
        }
        if (px != bx || py != by) {
            if (jwc_add_line(d, (float)bx, (float)by, (float)px, (float)py,
                             ty, pn, la)) {
                d->lines[d->n_lines - 1].rest[1] = r1;
                d->lines[d->n_lines - 1].rest[2] = r2;
                d->lines[d->n_lines - 1].rest[3] = r3;
            }
        }
    }
    /* 同じ問いをもう一度立てて、元の記録を後ろから外します（足したぶんは
     * n0 より後ろなので番号は動いていません）。 */
    for (k = n0 - 1; k >= 0; k--) {
        const JwcLine *l = &d->lines[k];
        double ax = l->x0, ay = l->y0, bx = l->x1, by = l->y1;

        if (!in_reach_layer(d, l->layer)) {
            continue;
        }
        if (!c->hen_env_all && l->type != 1) {
            continue;       /* ①【実線のみ】——実線しか触りません */
        }
        if (!clip_to_range(c, &ax, &ay, &bx, &by)) {
            continue;
        }
        if (ax == bx && ay == by) {
            continue;
        }
        jwc_remove_line(d, k);
        changed = 1;
    }
    return changed;
}

/* 変形 ③複線化 —— 範囲に丸ごと入っている線を一本の折れ線につなぎ、その
 * 両側に 間隔 ぶん離した輪郭を入れます。
 *
 * 測定（SAMPLE0、間隔 100mm = 174.411 単位）:
 *
 *   線 5 だけ（(40.973,305.616)-(110.737,305.616)）を範囲に入れると
 *     line (-133.438,480.027)-(285.148,480.027)   左側
 *     line (-133.438,131.205)-(285.148,131.205)   右側
 *     line (-133.438,480.027)-(-133.438,131.205)  始めの留線
 *     line ( 285.148,480.027)-( 285.148,131.205)  終わりの留線
 *   —— 元の線を四方に 174.411 ふくらませた長方形です。
 *
 *   線 5 と線 6（L 字）だと六本になり、角では両側とも **交わるところ** で
 *   折れます（左側は (-63.674,480.027)、右側は (285.148,131.205)）。
 *
 *   ④留線【無】 にすると留線が消え、**両端の伸ばしもなくなります**
 *   （線 5 だけなら (40.973,480.027)-(110.737,480.027) と
 *   (40.973,131.205)-(110.737,131.205) の二本だけ）。
 *
 * 記録は元の線の 線種・ペン・レイヤ・A バイトをそのまま継ぎます。
 * 並びは「一本目の左・右・始めの留線、二本目の左・右、…、終わりの留線」。
 */
static void henkei_double(JwCmd *c, Jwc *d)
{
    long idx[64];
    int flip[64];
    int n = 0, i, j;
    double px[65], py[65];
    double gap;
    long k;

    if (!c->sel_line) {
        freeze(c, d);
    }
    if (!c->sel_line) {
        return;
    }
    c->hen_dbl_from = d->n_lines;
    for (k = 0; k < c->n0_lines && n < 64; k++) {
        if (c->sel_line[k]) {
            idx[n] = k;
            flip[n] = 0;
            n++;
        }
    }
    if (n < 1) {
        return;
    }
    /* 端点でつなぎ直します。いちばん小さい番号の線から前へ後ろへ歩いて、
     * つながる線を並べます。つながらないものが混じったときに本物が何を
     * するかは測っていません。 */
    for (i = 1; i < n; i++) {
        const double ex = flip[i - 1] ? d->lines[idx[i - 1]].x0
                                      : d->lines[idx[i - 1]].x1;
        const double ey = flip[i - 1] ? d->lines[idx[i - 1]].y0
                                      : d->lines[idx[i - 1]].y1;
        int best = -1, bflip = 0;

        for (j = i; j < n; j++) {
            const JwcLine *l = &d->lines[idx[j]];

            if (near_enough(l->x0, l->y0, ex, ey)) {
                best = j;
                bflip = 0;
                break;
            }
            if (near_enough(l->x1, l->y1, ex, ey)) {
                best = j;
                bflip = 1;
                break;
            }
        }
        if (best < 0) {
            n = i;              /* そこで切ります */
            break;
        }
        if (best != i) {
            const long t = idx[i];
            const int f = flip[i];

            idx[i] = idx[best];
            flip[i] = bflip;
            idx[best] = t;
            flip[best] = f;
        } else {
            flip[i] = bflip;
        }
    }
    for (i = 0; i < n; i++) {
        const JwcLine *l = &d->lines[idx[i]];

        px[i] = flip[i] ? l->x1 : l->x0;
        py[i] = flip[i] ? l->y1 : l->y0;
    }
    px[n] = flip[n - 1] ? d->lines[idx[n - 1]].x0 : d->lines[idx[n - 1]].x1;
    py[n] = flip[n - 1] ? d->lines[idx[n - 1]].y0 : d->lines[idx[n - 1]].y1;
    /* 間隔は紙のミリ。複線と同じで `gap * unit_mm / denom`。 */
    gap = c->hen_dbl_gap * (d->unit_mm > 0.0f ? d->unit_mm : 1.0f)
        / (d->denom > 0.0 ? d->denom : 1.0);
    {
        double ax[65], ay[65], bx[65], by[65];

        for (i = 0; i <= n; i++) {
            ax[i] = ay[i] = bx[i] = by[i] = 0.0;
        }
        for (i = 0; i < n; i++) {
            const double dx = px[i + 1] - px[i], dy = py[i + 1] - py[i];
            const double len = sqrt(dx * dx + dy * dy);
            const double ux = len > 0.0 ? dx / len : 1.0;
            const double uy = len > 0.0 ? dy / len : 0.0;
            const double nx = -uy, ny = ux;      /* 左の法線 */
            double s0 = 0.0, s1 = 0.0;

            if (c->hen_dbl_cap) {
                if (i == 0) {
                    s0 = -gap;
                }
                if (i == n - 1) {
                    s1 = gap;
                }
            }
            ax[i] = px[i] + nx * gap + ux * s0;
            ay[i] = py[i] + ny * gap + uy * s0;
            bx[i] = px[i] - nx * gap + ux * s0;
            by[i] = py[i] - ny * gap + uy * s0;
            ax[i + 1] = px[i + 1] + nx * gap + ux * s1;
            ay[i + 1] = py[i + 1] + ny * gap + uy * s1;
            bx[i + 1] = px[i + 1] - nx * gap + ux * s1;
            by[i + 1] = py[i + 1] - ny * gap + uy * s1;
            if (i > 0) {
                /* 角は前の一本との **交わるところ** で折れます。 */
                meet_at(px[i - 1], py[i - 1], px[i], py[i],
                        px[i], py[i], px[i + 1], py[i + 1], gap,
                        &ax[i], &ay[i], &bx[i], &by[i]);
            }
        }
        for (i = 0; i < n; i++) {
            const JwcLine *l = &d->lines[idx[i]];

            add_like(d, l, ax[i], ay[i], ax[i + 1], ay[i + 1]);
            add_like(d, l, bx[i], by[i], bx[i + 1], by[i + 1]);
            if (i == 0 && c->hen_dbl_cap) {
                add_like(d, l, ax[0], ay[0], bx[0], by[0]);
            }
            if (i == n - 1 && c->hen_dbl_cap) {
                add_like(d, l, ax[n], ay[n], bx[n], by[n]);
            }
        }
    }
}

/* 線変更 ①指定範囲内変更→絞り込み③全線変更→変更内容.  実機で確認
 * （tools/emu.sh、2026-10-06）：範囲を閉じて①範囲確定、③全線変更、
 * そして①〜③のどれかを押すと、その場で範囲内の線・円弧全部に書込用の
 * 線種／線色／レイヤのどれか一つを書いて、押した升のまま道が終わる
 * （確認のダイアログなどは出ない）。線種変更は本物の線変更（直接指し）
 * と同じ書込設定（d->line_type・d->pen・d->write_layer）を使う――
 * ①②③の絞り込みで線種・ペン番号を指定するフィルタ（実機の画面までは
 * 確認したが入力の中身は未実装）がない分、全線変更は範囲の中の全部に
 * かかる。 */
static void linechg_range_apply(JwCmd *c, Jwc *d, int content)
{
    long k;

    if (!d) {
        return;
    }
    for (k = 0; k < d->n_lines && k < c->n0_lines; k++) {
        if (!picked_line(c, d, k)) {
            continue;
        }
        if (content == 1) {
            d->lines[k].type = (unsigned char)d->line_type;
        } else if (content == 2) {
            d->lines[k].pen = (unsigned char)d->pen;
        } else {
            d->lines[k].layer = (unsigned char)d->write_layer;
        }
    }
    for (k = 0; k < d->n_arcs && k < c->n0_arcs; k++) {
        if (!picked_arc(c, d, k)) {
            continue;
        }
        if (content == 1) {
            d->arcs[k].type = (unsigned char)d->line_type;
        } else if (content == 2) {
            d->arcs[k].pen = (unsigned char)d->pen;
        } else {
            d->arcs[k].layer = (unsigned char)d->write_layer;
        }
    }
}

/* ------------------------------------------------------- 円線接 ①接線 */

/* ③指定点: the tangent from the point in hand to the circle that was
 * pressed.  There are two of them and the one nearer the press wins.
 *
 * Measured on TEST1: with the point at (379,113) and the quarter arc
 * c=(165,193.397) r=43.603 pressed at its middle, the original draws
 * (379,113)-(187.838,230.540).  That end is on the circle to a thousandth and
 * the radius there is square to the line, and it is the nearer of the two
 * tangent points to the press.  The record's A byte is 0x05.
 */
/* 円線接 の道に入ったところ。ここから先に作ったものは、みな枠の上に
 * 描き直されます（jw_cmd_after）。 */
/* **三つの条件に接する円**（③接円（３条件）の ③ と ④ で、線と円が
 * 混ざったとき）。条件ひとつは「線」「円」「点」のどれかで、点は
 * 半径 0 の円として扱います。
 *
 * **どれを取るかは「接点が押したところに近いもの」**です。候補ごとに
 * 三つの相手それぞれの接点を出し、押したところまでの距離を足して、
 * 合計がいちばん小さいものを入れます（点は必ず通るので 0 です）。
 * 中心や円周までの距離で測ると外れます——④ 線+円+円 で、円周が
 * 押したところをかすめる半径 18372 の円が勝ってしまいました。
 *
 * 中心 C と半径 R について:
 *
 *   線:  n·C − s·R = c0                （s = ±1、どちら側か）
 *   円:  |C−O|² = (R + s·r)²            （s = ±1、外接か内接か）
 *
 * 円の式どうしを引くと |C|² と R² が消えて一次式になるので、円がひとつ
 * でもあれば「一次式二本＋二次式一本」に落ちます。一次二本から
 * `C = a·R + b` を出し、二次式に入れると R の二次方程式です。
 * 符号の組み合わせを全部試し、R > 0 のものから **最後に押したところに
 * 円周がいちばん近いもの** を選びます——線だけのときと同じ決め方です。 */
typedef struct {
    int is_line;                /* 1 = 線、0 = 円（点は半径 0） */
    double a, b, c;             /* 線: 単位法線と切片。円: 中心と半径 */
} JwTanObj;

static int tan_solve3(const JwTanObj *o, const double *pxs,
                      const double *pys,
                      double *gx, double *gy, double *gr)
{
    int sg[3], base = -1, i, got = 0;
    double best = 0.0;

    for (i = 0; i < 3; i++) {
        if (!o[i].is_line && base < 0) {
            base = i;
        }
    }
    if (base < 0) {
        return 0;               /* 線ばかりは呼び手が別に解きます */
    }
    for (sg[0] = -1; sg[0] <= 1; sg[0] += 2) {
        for (sg[1] = -1; sg[1] <= 1; sg[1] += 2) {
            for (sg[2] = -1; sg[2] <= 1; sg[2] += 2) {
                /* 一次式二本: m[i][0]·cx + m[i][1]·cy + m[i][2]·R = rhs[i] */
                double m[2][3], rhs[2];
                double aa[3], bb[3], qa, qb, qc, disc, det = 0.0;
                int n = 0, j, f = -1, pp = 0, qq = 1;

                for (j = 0; j < 3 && n < 2; j++) {
                    if (o[j].is_line) {
                        m[n][0] = o[j].a;
                        m[n][1] = o[j].b;
                        m[n][2] = -(double)sg[j];
                        rhs[n] = o[j].c;
                        n++;
                    } else if (j != base) {
                        const double ox = o[j].a, oy = o[j].b, r = o[j].c;
                        const double bx = o[base].a, by = o[base].b;
                        const double br = o[base].c;

                        m[n][0] = -2.0 * (ox - bx);
                        m[n][1] = -2.0 * (oy - by);
                        m[n][2] = -2.0 * (sg[j] * r - sg[base] * br);
                        rhs[n] = -((ox * ox + oy * oy) - (bx * bx + by * by))
                               + (r * r - br * br);
                        n++;
                    }
                }
                if (n < 2) {
                    continue;
                }
                /* **どの二つを解くかは行列式で選びます。** 平行な線が
                 * 二本あると (cx,cy) では解けません（行列式が 0）が、
                 * (cx,R) か (cy,R) なら解けます——平行な二本の接円は
                 * 半径が先に決まる、というだけのことです。 */
                for (j = 0; j < 3; j++) {
                    const int p2 = (j + 1) % 3, q2 = (j + 2) % 3;
                    const double dt = m[0][p2] * m[1][q2]
                                    - m[1][p2] * m[0][q2];
                    const double ad = dt < 0.0 ? -dt : dt;

                    if (ad > (det < 0.0 ? -det : det)) {
                        det = dt;
                        f = j;
                        pp = p2;
                        qq = q2;
                    }
                }
                if (f < 0 || (det > -1e-9 && det < 1e-9)) {
                    continue;
                }
                /* 自由変数を t として `X = aa·t + bb`。 */
                aa[f] = 1.0;
                bb[f] = 0.0;
                bb[pp] = (rhs[0] * m[1][qq] - rhs[1] * m[0][qq]) / det;
                aa[pp] = (-m[0][f] * m[1][qq] + m[1][f] * m[0][qq]) / det;
                bb[qq] = (m[0][pp] * rhs[1] - m[1][pp] * rhs[0]) / det;
                aa[qq] = (-m[0][pp] * m[1][f] + m[1][pp] * m[0][f]) / det;
                {
                    const double ox = o[base].a, oy = o[base].b;
                    const double rr0 = sg[base] * o[base].c;

                    qa = aa[0] * aa[0] + aa[1] * aa[1] - aa[2] * aa[2];
                    qb = 2.0 * (aa[0] * (bb[0] - ox) + aa[1] * (bb[1] - oy)
                                - aa[2] * (bb[2] + rr0));
                    qc = (bb[0] - ox) * (bb[0] - ox)
                       + (bb[1] - oy) * (bb[1] - oy)
                       - (bb[2] + rr0) * (bb[2] + rr0);
                }
                disc = qb * qb - 4.0 * qa * qc;
                for (j = 0; j < 2; j++) {
                    double t, cx, cy, rr, how, far;

                    if (qa > -1e-12 && qa < 1e-12) {
                        if (qb > -1e-12 && qb < 1e-12) {
                            break;
                        }
                        if (j) {
                            break;
                        }
                        t = -qc / qb;
                    } else {
                        if (disc < 0.0) {
                            break;
                        }
                        t = (-qb + (j ? -sqrt(disc) : sqrt(disc)))
                          / (2.0 * qa);
                    }
                    cx = aa[0] * t + bb[0];
                    cy = aa[1] * t + bb[1];
                    rr = aa[2] * t + bb[2];
                    if (rr <= 1e-9) {
                        continue;
                    }
                    far = 0.0;
                    for (how = 0.0; how < 3.0; how += 1.0) {
                        const int u = (int)how;
                        double tx, ty;

                        if (o[u].is_line) {
                            /* 中心から線へ下ろした足。 */
                            const double dd = o[u].a * cx
                                            + o[u].b * cy - o[u].c;

                            tx = cx - dd * o[u].a;
                            ty = cy - dd * o[u].b;
                        } else {
                            const double ex = cx - o[u].a;
                            const double ey = cy - o[u].b;
                            const double en = sqrt(ex * ex
                                                   + ey * ey);

                            if (en < 1e-9) {
                                tx = o[u].a;
                                ty = o[u].b;
                            } else {
                                /* 外接なら中心側、内接なら
                                 * 反対側で触ります。 */
                                tx = o[u].a + sg[u] * o[u].c
                                              * ex / en;
                                ty = o[u].b + sg[u] * o[u].c
                                              * ey / en;
                            }
                        }
                        far += sqrt((tx - pxs[u]) * (tx - pxs[u])
                                    + (ty - pys[u])
                                      * (ty - pys[u]));
                    }
                    if (!got || far < best) {
                        best = far;
                        *gx = cx;
                        *gy = cy;
                        *gr = rr;
                        got = 1;
                    }
                }
            }
        }
    }
    return got;
}

/* **ｻｲﾝ曲線を線の連なりにします**（曲線 ①ｻｲﾝ曲線）。
 *
 * 基準線の向きを u、その法線を p、座標原点を O とすると、道筋は
 *
 *     P(s) = O + s·u + 振幅·sin(2π s / 1ｻｲｸﾙ)·p
 *
 * で、振幅も 1ｻｲｸﾙも**紙のミリ × unit_mm** です。基準線は向きだけを
 * 決めていて、その位置は使いません（測定：基準線が y=305.6 の線でも
 * 曲線は座標原点の y=263 を中心に揺れました）。
 *
 * **本数の決め方**（測った十通りに合います）:
 *
 *     n後 = max(2, ceil(原点→終点の紙ミリ / 分割))
 *     刻み = 原点→終点 / n後
 *     n前 = ceil(原点→始点 / 刻み)
 *
 * 前半は後半の刻みに合わせて割るので、**同じ前半でも後半の長さで
 * 本数が変わります**（前半 50 単位が、分割 100mm のとき後半 50 なら
 * 2 本、100 以上なら 1 本）。
 *
 * **帯から出た切れ端は丸ごと落ちます**（切り取られません）。帯は
 * `-100 ≦ y ≦ 600`（図面の単位、測定）。作図領域は y 1〜415 なので、
 * 画面に収まる曲線なら当たりません。
 *
 * 記録は線で、残ったもののうち **最初が rest[1]=0x40、最後が 0xc0、
 * あいだが 0x80**（飛びがあっても通し）です。 */
/* 自然三次スプラインの係数（端の二階微分が 0）。`ts` は助変数、`ys` は
 * 値、`b`/`c`/`d` に区間ごとの一次・二次・三次の係数を返します。 */
static void jw_natural_spline(const double *ts, const double *ys, int n,
                              double *b, double *c, double *d)
{
    double h[50], al[50], l[50], mu[50], z[50];
    int i, j;

    for (i = 0; i + 1 < n; i++) {
        h[i] = ts[i + 1] - ts[i];
    }
    for (i = 1; i + 1 < n; i++) {
        al[i] = 3.0 * ((ys[i + 1] - ys[i]) / h[i]
                       - (ys[i] - ys[i - 1]) / h[i - 1]);
    }
    l[0] = 1.0;
    mu[0] = 0.0;
    z[0] = 0.0;
    for (i = 1; i + 1 < n; i++) {
        l[i] = 2.0 * (ts[i + 1] - ts[i - 1]) - h[i - 1] * mu[i - 1];
        mu[i] = h[i] / l[i];
        z[i] = (al[i] - h[i - 1] * z[i - 1]) / l[i];
    }
    c[n - 1] = 0.0;
    for (j = n - 2; j >= 0; j--) {
        c[j] = z[j] - mu[j] * c[j + 1];
        b[j] = (ys[j + 1] - ys[j]) / h[j] - h[j] * (c[j + 1] + 2.0 * c[j]) / 3.0;
        d[j] = (c[j + 1] - c[j]) / (3.0 * h[j]);
    }
}

/* **ﾍﾞｼﾞｪ曲線を線の連なりにします**（曲線 ④ﾍﾞｼﾞｪ）。
 *
 * 取った点は**通過点ではなく制御点**で、曲線は点の数 k に対する
 * **次数 k-1 のﾍﾞｼﾞｪ**です（測定：三点で二次、四点で三次。真ん中の
 * 制御点は通りません）。標本は
 *
 *     点の数 = (k - 1) * 区間分割数        （両端を含む）
 *     t = i / (点の数 - 1)
 *
 * ——三点・分割 20 で 40 点 39 本、四点・分割 5 で 15 点 14 本でした。
 * ド・カステリョで評価しています（次数が上がっても崩れないので）。
 *
 * 記録の印は ③ｽﾌﾟﾗｲﾝ と同じ `rest[1] = 0x12` と 0x40/0x80/0xc0。 */
static void bezier_draw(JwCmd *c, Jwc *d)
{
    const int k = c->spl_n;
    int total, i, first = -1, last = -1;
    double px = 0.0, py = 0.0;

    if (k < 2 || c->spl_div < 1) {
        return;
    }
    total = (k - 1) * c->spl_div;
    if (total < 2) {
        return;
    }
    for (i = 0; i < total; i++) {
        const double t = (double)i / (total - 1);
        double bx[50], by[50];
        int j, m;

        for (j = 0; j < k; j++) {
            bx[j] = c->spl_x[j];
            by[j] = c->spl_y[j];
        }
        for (m = k - 1; m > 0; m--) {
            for (j = 0; j < m; j++) {
                bx[j] += (bx[j + 1] - bx[j]) * t;
                by[j] += (by[j + 1] - by[j]) * t;
            }
        }
        if (i > 0) {
            if (!jwc_add_line(d, (float)px, (float)py,
                              (float)bx[0], (float)by[0],
                              (unsigned char)d->line_type,
                              (unsigned char)d->pen,
                              (unsigned char)d->write_layer)) {
                break;
            }
            d->lines[d->n_lines - 1].rest[1] = 0x12;
            d->lines[d->n_lines - 1].rest[2] = 0x80;
            if (first < 0) {
                first = (int)(d->n_lines - 1);
            }
            last = (int)(d->n_lines - 1);
        }
        px = bx[0];
        py = by[0];
    }
    if (first >= 0) {
        d->lines[first].rest[2] = 0x40;
        d->lines[last].rest[2] = 0xc0;
    }
}

/* **連続弧の一本**（曲線 ⑥連続弧）。
 *
 * 一本目は三点の外接円弧、二本目からは **前の弧に接しながら新しい点を
 * 通る弧** です。前の端を P、前の中心を C0 とすると、新しい中心は
 * `P` から `d = (P - C0)/r0` の向きに伸びた線の上にあり、
 * `|C - Q| = |C - P|` から
 *
 *     t = -|P-Q|^2 / (2 d·(P-Q))
 *     C = P + t d、半径 = |t|
 *
 * 回る向きは前の端の進む向きで決まります。記録は弧で、始角・終角は
 * **反時計回りに始角から終角へ**という向きに合わせて入れます。
 * 最後のバイトは一本目が 0x00、続きが **0x8e**（測定）。 */
static void chain_arc(JwCmd *c, Jwc *d, double qx, double qy)
{
    const double ex = qx - c->ch_px, ey = qy - c->ch_py;
    double dx, dy, t, cx, cy, rr, sa, ea, vx, vy;
    const double d2r = 3.14159265358979323846 / 180.0;
    int ccw;

    dx = c->ch_px - c->ch_cx;
    dy = c->ch_py - c->ch_cy;
    {
        const double n = sqrt(dx * dx + dy * dy);

        if (n <= 0.0) {
            return;
        }
        dx /= n;
        dy /= n;
    }
    if (c->ch_line) {
        /* ④直線: 端から**接線の上に押したところを落とした足**まで、
         * まっすぐ引きます（測定：押しが (379,283) で足が
         * (274.2353,274.9412)、記録の `rest[1]` は 0x27）。 */
        const double fx = -c->ch_tx, fy = -c->ch_ty;
        const double pr = ex * fx + ey * fy;
        const double nx2 = c->ch_px + pr * fx, ny2 = c->ch_py + pr * fy;

        if (jwc_add_line(d, (float)c->ch_px, (float)c->ch_py,
                         (float)nx2, (float)ny2,
                         (unsigned char)d->line_type,
                         (unsigned char)d->pen,
                         (unsigned char)d->write_layer)) {
            d->lines[d->n_lines - 1].rest[1] = 0x27;
            d->lines[d->n_lines - 1].rest[2] = 0x00;
            c->sine_did = 1;
        }
        /* **進む向きは引いた線の向き**です（押したところが後ろに
         * あれば逆を向きます）。中心は無限遠なので、次の弧のために
         * 向きだけ残します。 */
        {
            const double lx = nx2 - c->ch_px, ly = ny2 - c->ch_py;
            const double ln = sqrt(lx * lx + ly * ly);

            if (ln > 0.0) {
                c->ch_tx = lx / ln;
                c->ch_ty = ly / ln;
            }
        }
        c->ch_px = nx2;
        c->ch_py = ny2;
        c->ch_cx = c->ch_px - c->ch_ty * 1e6;
        c->ch_cy = c->ch_py + c->ch_tx * 1e6;
        c->ch_line = 0;     /* 一本だけ。行も ④直線 に戻ります */
        return;
    }
    if (c->ch_r_on && c->ch_r > 0.0) {
        /* ③半径: 中心は `P + r·d`、終わりは**押したところを円の上に
         * 落としたところ**（測定：半径 50mm で中心 (365.9485,219.6883)、
         * 終わりが (383.6,305.1)）。 */
        const double sc = jwc_zukei_scale(d) > 0.0 ? jwc_zukei_scale(d) : 1.0;

        t = c->ch_r / sc;
    } else {
        const double dot = dx * -ex + dy * -ey;   /* d·(P-Q) */

        if (dot > -1e-9 && dot < 1e-9) {
            return;             /* まっすぐ——いまは入れていません */
        }
        t = -(ex * ex + ey * ey) / (2.0 * dot);
    }
    cx = c->ch_px + t * dx;
    cy = c->ch_py + t * dy;
    rr = t < 0.0 ? -t : t;
    /* 反時計回りの速度は `z x (P - C)`。進む向きと同じなら反時計。 */
    vx = -(c->ch_py - cy);
    vy = c->ch_px - cx;
    ccw = vx * c->ch_tx + vy * c->ch_ty > 0.0;
    sa = atan2(c->ch_py - cy, c->ch_px - cx) / d2r;
    ea = atan2(qy - cy, qx - cx) / d2r;
    if (c->ch_r_on && c->ch_r > 0.0) {
        /* 終わりの点は円の上へ落とします。 */
        qx = cx + rr * cos(ea * d2r);
        qy = cy + rr * sin(ea * d2r);
    }
    while (sa < 0.0) {
        sa += 360.0;
    }
    while (ea < 0.0) {
        ea += 360.0;
    }
    if (!ccw) {
        const double sw = sa;

        sa = ea;
        ea = sw;
    }
    if (jwc_add_arc_at(d, (float)cx, (float)cy, (float)rr,
                       (long)(sa * 65536.0 + 0.5),
                       (long)(ea * 65536.0 + 0.5),
                       (unsigned char)d->line_type, (unsigned char)d->pen,
                       (unsigned char)(d->write_layer),
                       0x8e)) {
        c->sine_did = 1;
    }
    /* **半径は一度きり**です（測定：半径 50mm のあと続けて押すと
     * 次の弧は 87.205mm ではなく 85.606mm——接線から決まる方
     * でした）。④直線 と同じで、一本引くと解けます。 */
    c->ch_r_on = 0;
    /* 端と向きを進めます。 */
    c->ch_cx = cx;
    c->ch_cy = cy;
    c->ch_px = qx;
    c->ch_py = qy;
    vx = -(qy - cy);
    vy = qx - cx;
    c->ch_tx = ccw ? vx : -vx;
    c->ch_ty = ccw ? vy : -vy;
    {
        const double n = sqrt(c->ch_tx * c->ch_tx + c->ch_ty * c->ch_ty);

        if (n > 0.0) {
            c->ch_tx /= n;
            c->ch_ty /= n;
        }
    }
}

/* 三点の外接円弧（連続弧の一本目）。中間点を通る向きに合わせます。 */
static void chain_first(JwCmd *c, Jwc *d, double bx, double by)
{
    const double ax = c->ch_ax, ay = c->ch_ay;
    const double mx = c->ch_mx, my = c->ch_my;
    const double d1x = mx - ax, d1y = my - ay;
    const double d2x = bx - ax, d2y = by - ay;
    const double det = 2.0 * (d1x * d2y - d1y * d2x);
    const double l1 = d1x * d1x + d1y * d1y;
    const double l2 = d2x * d2x + d2y * d2y;
    const double d2r = 3.14159265358979323846 / 180.0;
    double cx, cy, rr, sa, ea;
    int ccw;

    if (det > -1e-9 && det < 1e-9) {
        return;
    }
    cx = ax + (d2y * l1 - d1y * l2) / det;
    cy = ay + (d1x * l2 - d2x * l1) / det;
    rr = sqrt((cx - ax) * (cx - ax) + (cy - ay) * (cy - ay));
    /* A から M を通って B へ回る向き。 */
    ccw = det > 0.0;
    sa = atan2(ay - cy, ax - cx) / d2r;
    ea = atan2(by - cy, bx - cx) / d2r;
    while (sa < 0.0) {
        sa += 360.0;
    }
    while (ea < 0.0) {
        ea += 360.0;
    }
    if (!ccw) {
        const double sw = sa;

        sa = ea;
        ea = sw;
    }
    if (jwc_add_arc_at(d, (float)cx, (float)cy, (float)rr,
                       (long)(sa * 65536.0 + 0.5),
                       (long)(ea * 65536.0 + 0.5),
                       (unsigned char)d->line_type, (unsigned char)d->pen,
                       (unsigned char)(d->write_layer),
                       0x00)) {
        c->sine_did = 1;
    }
    c->ch_cx = cx;
    c->ch_cy = cy;
    c->ch_px = bx;
    c->ch_py = by;
    /* B での進む向き。 */
    c->ch_tx = -(by - cy);
    c->ch_ty = bx - cx;
    if (!ccw) {
        c->ch_tx = -c->ch_tx;
        c->ch_ty = -c->ch_ty;
    }
    {
        const double n = sqrt(c->ch_tx * c->ch_tx + c->ch_ty * c->ch_ty);

        if (n > 0.0) {
            c->ch_tx /= n;
            c->ch_ty /= n;
        }
    }
}

/* **ｽﾌﾟﾗｲﾝ曲線を線の連なりにします**（曲線 ③ｽﾌﾟﾗｲﾝ）。
 *
 * 本物は **弦長で助変数を取った自然三次スプライン**でした。測定
 * （SAMPLE0 で (79,263)(179,313)(279,213) を通し、区間分割数 20）:
 *
 *   * 区間の**内側の点は等間隔の三次標本**です（四次差が 1e-4 まで 0）。
 *   * 節点での接線が、区間 1 と区間 2 で弦長の比 `111.803/141.421` だけ
 *     違う——つまり弦長助変数で C1。値は自然スプライン（端の二階微分 0）
 *     と小数 5 桁まで一致しました。
 *
 * **区間の刻み**は端だけ狭くなります。区間分割数を n とすると
 *
 *     h = L / (n - 0.84)
 *     標本は 0、0.58h、1.58h、…、(n-2+0.58)h、L
 *
 * （端の切れ端が内側の 0.58 倍）。n = 5 と n = 20 のどちらでも 0.58 で、
 * 二つの区間とも同じでした。計算し直すと測定と小数 4 桁まで合います。
 *
 * 記録は線で、`rest[1] = 0x12`、`rest[2]` が 最初 0x40・あいだ 0x80・
 * 最後 0xc0（ｻｲﾝ曲線と同じ連なりの印）。 */
static void spline_draw(JwCmd *c, Jwc *d)
{
    double ts[50], bx[50], cx2[50], dx2[50], by[50], cy2[50], dy2[50];
    int n = c->spl_n, i, first = -1, last = -1;

    if (n < 2 || c->spl_div < 1) {
        return;
    }
    ts[0] = 0.0;
    for (i = 0; i + 1 < n; i++) {
        const double ex = c->spl_x[i + 1] - c->spl_x[i];
        const double ey = c->spl_y[i + 1] - c->spl_y[i];

        ts[i + 1] = ts[i] + sqrt(ex * ex + ey * ey);
        if (ts[i + 1] <= ts[i]) {
            return;             /* 同じ点が二つ続いたら何もしません */
        }
    }
    jw_natural_spline(ts, c->spl_x, n, bx, cx2, dx2);
    jw_natural_spline(ts, c->spl_y, n, by, cy2, dy2);
    for (i = 0; i + 1 < n; i++) {
        const double len = ts[i + 1] - ts[i];
        const double h = len / ((double)c->spl_div - 0.84);
        int k;

        for (k = 0; k < c->spl_div; k++) {
            const double ta = k == 0 ? 0.0 : 0.58 * h + (k - 1) * h;
            const double tb = k + 1 == c->spl_div ? len
                                                  : 0.58 * h + k * h;
            const double ax = c->spl_x[i] + bx[i] * ta + cx2[i] * ta * ta
                            + dx2[i] * ta * ta * ta;
            const double ay = c->spl_y[i] + by[i] * ta + cy2[i] * ta * ta
                            + dy2[i] * ta * ta * ta;
            const double ex = c->spl_x[i] + bx[i] * tb + cx2[i] * tb * tb
                            + dx2[i] * tb * tb * tb;
            const double ey = c->spl_y[i] + by[i] * tb + cy2[i] * tb * tb
                            + dy2[i] * tb * tb * tb;

            if (!jwc_add_line(d, (float)ax, (float)ay, (float)ex, (float)ey,
                              (unsigned char)d->line_type,
                              (unsigned char)d->pen,
                              (unsigned char)d->write_layer)) {
                break;
            }
            d->lines[d->n_lines - 1].rest[1] = 0x12;
            d->lines[d->n_lines - 1].rest[2] = 0x80;
            if (first < 0) {
                first = (int)(d->n_lines - 1);
            }
            last = (int)(d->n_lines - 1);
        }
    }
    if (first >= 0) {
        d->lines[first].rest[2] = 0x40;
        d->lines[last].rest[2] = 0xc0;
    }
}

static void sine_draw(JwCmd *c, Jwc *d)
{
    /* **三つの欄は実寸のミリ**です（縮尺 1/1 の SAMPLE0 では紙の
     * ミリと同じに見えますが、TEST1 で振幅 10000 を入れると 87.2
     * 単位＝10000/114.673 になりました）。接円の半径と同じ換算です。 */
    const double sc = jwc_zukei_scale(d) > 0.0 ? jwc_zukei_scale(d) : 1.0;
    const double amp = c->sine_amp / sc;
    const double cyc = c->sine_cycle / sc;
    const double ux = c->sine_ux, uy = c->sine_uy;
    const double nx = -uy, ny = ux;
    const double s1 = (c->sine_ax - c->sine_ox) * ux
                    + (c->sine_ay - c->sine_oy) * uy;
    const double s2 = (c->sine_bx - c->sine_ox) * ux
                    + (c->sine_by - c->sine_oy) * uy;
    const double tau = 6.28318530717958647692;
    double step, len1 = s1 < 0.0 ? -s1 : s1;
    double len2 = s2 < 0.0 ? -s2 : s2;
    int n1, n2, i, first = -1, last = -1;

    if (c->sine_div <= 0.0 || (c->sine != 3 && cyc <= 0.0)) {
        return;
    }
    if (s1 * s2 < 0.0) {
        /* **座標原点が始点と終点のあいだにある**ふつうの形。刻みは
         * **長いほうの腕**から決まり、短いほうはその刻みに合わせて
         * 割ります——だから同じ腕でも相手の長さで本数が変わります。
         * （②２次曲線 で始点の側が長い例を測って分かりました。ｻｲﾝ曲線で
         * 測った十通りは、たまたま終点の側が長いものばかりでした。） */
        const double big = len1 > len2 ? len1 : len2;
        const double small = len1 > len2 ? len2 : len1;
        int nb, ns;

        nb = (int)(big * sc / c->sine_div);
        if ((double)nb * c->sine_div / sc < big - 1e-9) {
            nb++;
        }
        if (nb < 2) {
            nb = 2;
        }
        step = big / nb;
        ns = (int)(small / step);
        if ((double)ns * step < small - 1e-9) {
            ns++;
        }
        if (ns < 1) {
            ns = 1;
        }
        n1 = len1 > len2 ? nb : ns;
        n2 = len1 > len2 ? ns : nb;
    } else {
        /* **原点が範囲の外**（始点と終点が同じ側、または片方が原点）。
         * こちらは始点から終点まで一様に割り、本数は
         * `max(3, ceil(範囲の紙ミリ / 分割))` です（測定：100 単位を
         * 分割 20/50/100 で 3・3・3、200 単位を 20/50 で 6・3）。 */
        const double len = s2 - s1 < 0.0 ? s1 - s2 : s2 - s1;
        int n = (int)(len * sc / c->sine_div);

        if ((double)n * c->sine_div / sc < len - 1e-9) {
            n++;
        }
        if (n < 3) {
            n = 3;
        }
        n1 = 0;
        n2 = n;
        step = len / n;
    }
    /* **並べるのは s の小さいほうから**です（始点→終点ではありません
     * ——TEST1 で基準線の向きが逆のとき、原作は終点の側から並べて
     * いました）。原点が内にあるときは負の腕が先、外にあるときは
     * 小さいほうから。 */
    {
        const double neg = s1 < 0.0 ? s1 : s2;
        const double pos = s1 < 0.0 ? s2 : s1;
        const int nneg = s1 < 0.0 ? n1 : n2;
        const int npos = s1 < 0.0 ? n2 : n1;
        const double lo = s1 < s2 ? s1 : s2;
        const double hi = s1 < s2 ? s2 : s1;

    for (i = 0; i < n1 + n2; i++) {
        double sa, sb, ax, ay, bx, by;

        if (n1 > 0) {
            sa = i < nneg ? neg * (double)(nneg - i) / nneg
                          : pos * (double)(i - nneg) / npos;
            sb = i + 1 <= nneg ? neg * (double)(nneg - i - 1) / nneg
                               : pos * (double)(i + 1 - nneg) / npos;
        } else {
            sa = lo + (hi - lo) * (double)i / n2;
            sb = lo + (hi - lo) * (double)(i + 1) / n2;
        }
        {
            /* ②２次曲線 は `y = a x^2`、①ｻｲﾝ曲線 は正弦。道も刻みも
             * 同じなので、ここだけ分けています。 */
            const double fa = c->sine == 3 ? c->sine_qa * sa * sa
                                           : amp * sin(tau * sa / cyc);
            const double fb = c->sine == 3 ? c->sine_qa * sb * sb
                                           : amp * sin(tau * sb / cyc);

            ax = c->sine_ox + sa * ux + fa * nx;
            ay = c->sine_oy + sa * uy + fa * ny;
            bx = c->sine_ox + sb * ux + fb * nx;
            by = c->sine_oy + sb * uy + fb * ny;
        }
        if (ay < -100.0 || ay > 600.0 || by < -100.0 || by > 600.0) {
            continue;
        }
        if (!jwc_add_line(d, (float)ax, (float)ay, (float)bx, (float)by,
                          (unsigned char)d->line_type, (unsigned char)d->pen,
                          (unsigned char)d->write_layer)) {
            break;
        }
        /* 印は rest[2]、rest[1] は 0（jwc_add_line の既定は 3）。 */
        d->lines[d->n_lines - 1].rest[1] = 0x00;
        d->lines[d->n_lines - 1].rest[2] = 0x80;
        if (first < 0) {
            first = (int)(d->n_lines - 1);
        }
        last = (int)(d->n_lines - 1);
    }
    }
    if (first >= 0) {
        d->lines[first].rest[2] = 0x40;
        d->lines[last].rest[2] = 0xc0;
        c->sine_did = 1;
    }
    (void)step;
}

static void tan_start(JwCmd *c, const Jwc *d)
{
    c->n0_lines = d ? d->n_lines : 0;
    c->n0_arcs = d ? d->n_arcs : 0;
    c->n0_texts = d ? d->n_texts : 0;
}

static int tangent_to(JwCmd *c, Jwc *d, const JwView *w, long k,
                      int sx, int sy)
{
    const JwcArc *a = &d->arcs[k];
    const double dx = c->tan_x - a->cx, dy = c->tan_y - a->cy;
    const double far = sqrt(dx * dx + dy * dy);
    double base, half, bx, by, best = 0.0, px, py;
    int i, got = 0;

    if (far <= (double)a->r) {
        return 0;               /* inside it: there is no tangent */
    }
    base = atan2(dy, dx);
    half = acos((double)a->r / far);
    jw_cmd_at(w, sx, sy, &px, &py);
    for (i = 0; i < 2; i++) {
        const double t = base + (i ? -half : half);
        const double tx = a->cx + a->r * cos(t);
        const double ty = a->cy + a->r * sin(t);
        const double away = (tx - px) * (tx - px) + (ty - py) * (ty - py);

        if (!got || away < best) {
            best = away;
            bx = tx;
            by = ty;
            got = 1;
        }
    }
    if (!got) {
        return 0;
    }
    if (!jwc_add_line(d, (float)c->tan_x, (float)c->tan_y, (float)bx, (float)by,
                      (unsigned char)d->line_type, (unsigned char)d->pen,
                      (unsigned char)(d->write_layer))) {
        return 0;
    }
    d->lines[d->n_lines - 1].rest[1] = 0x05;
    return 1;
}

/* 円線接 ①接線 ①円～円間: 二つの円の接線のうち、接点が押したところに
 * いちばん近いものを一本。
 *
 * 線は単位法線 `n` と `n·x = p` で表せて、中心からの符号つきの離れが
 * それぞれ σ1r1・σ2r2 になります。引き算すると `n·(c2−c1) = σ2r2 − σ1r1`
 * なので、`k = (σ2r2 − σ1r1)/D` として
 * `n = (d/D)k ± ⊥(d/D)√(1−k²)`。接点は `c − σrn` です。
 * σ1 を −1 に決めても四本そろいます（σ2 の二通り × 根の二通り）。 */
static void tangent_pair(JwCmd *c, Jwc *d, long kb, double px, double py)
{
    const JwcArc *a = &d->arcs[c->tan_kb];
    const JwcArc *b = &d->arcs[kb];
    const double dx = b->cx - a->cx, dy = b->cy - a->cy;
    const double far = sqrt(dx * dx + dy * dy);
    double bx0 = 0.0, by0 = 0.0, bx1 = 0.0, by1 = 0.0, best = 0.0;
    int got = 0, i, j;

    if (far <= 0.0) {
        return;
    }
    for (i = 0; i < 2; i++) {
        const double s2 = i ? -1.0 : 1.0;
        const double kk = (s2 * b->r + a->r) / far;
        double root;

        if (kk > 1.0 || kk < -1.0) {
            continue;
        }
        root = sqrt(1.0 - kk * kk);
        for (j = 0; j < 2; j++) {
            const double sgn = j ? -1.0 : 1.0;
            const double nx = dx / far * kk - sgn * dy / far * root;
            const double ny = dy / far * kk + sgn * dx / far * root;
            const double t0x = a->cx + a->r * nx;
            const double t0y = a->cy + a->r * ny;
            const double t1x = b->cx - s2 * b->r * nx;
            const double t1y = b->cy - s2 * b->r * ny;
            const double away = (t0x - c->tan_apx) * (t0x - c->tan_apx)
                              + (t0y - c->tan_apy) * (t0y - c->tan_apy)
                              + (t1x - px) * (t1x - px)
                              + (t1y - py) * (t1y - py);

            if (!got || away < best) {
                best = away;
                bx0 = t0x;
                by0 = t0y;
                bx1 = t1x;
                by1 = t1y;
                got = 1;
            }
        }
    }
    if (!got) {
        return;
    }
    if (jwc_add_line(d, (float)bx0, (float)by0, (float)bx1, (float)by1,
                     (unsigned char)d->line_type, (unsigned char)d->pen,
                     (unsigned char)(d->write_layer))) {
        d->lines[d->n_lines - 1].rest[1] = 0x05;
    }
}

/* ----------------------------------------------------------- ハッチ */

/* Where a hatch line crosses one side of the frame.
 *
 * A hatch line is inside the frame between the first crossing and the second,
 * the third and the fourth, and so on -- the even-odd rule, which needs no
 * winding order.  A crossing on a corner comes out twice, once for each side
 * that meets there, so they are thinned out afterwards. */
static int hatch_cross(const double *a, const double *b,
                       double nx, double ny, double d,
                       double ux, double uy, double *at)
{
    const double da = nx * a[0] + ny * a[1] - d;
    const double db = nx * b[0] + ny * b[1] - d;
    double t;

    if ((da > 0.0 && db > 0.0) || (da < 0.0 && db < 0.0)) {
        return 0;               /* both ends the same side */
    }
    if (da == db) {
        return 0;               /* along the hatch line: no single crossing */
    }
    t = da / (da - db);
    *at = ux * (a[0] + t * (b[0] - a[0])) + uy * (a[1] + t * (b[1] - a[1]));
    return 1;
}

/* The end of a line that is farther from the corner it was cut at.  With
 * nothing to measure against, or with the two ends the same distance away, it
 * is the second one -- which is what SAMPLE0's symmetric cell shows. */
static void hatch_free(const JwcLine *l, double cx, double cy, int have,
                       double *x, double *y)
{
    const double d0 = (l->x0 - cx) * (l->x0 - cx) + (l->y0 - cy) * (l->y0 - cy);
    const double d1 = (l->x1 - cx) * (l->x1 - cx) + (l->y1 - cy) * (l->y1 - cy);

    if (have && d0 > d1) {
        *x = l->x0;
        *y = l->y0;
        return;
    }
    *x = l->x1;
    *y = l->y1;
}

static int hatch_cmp(const void *a, const void *b)
{
    const double x = *(const double *)a, y = *(const double *)b;

    return x < y ? -1 : x > y ? 1 : 0;
}

/* Where two of the frame's lines cross.  The frame is a 連続線 -- the lines are
 * cut to one another, the way 連線's corners are -- so the cell whose sides
 * run the whole width of the paper still hatches only the cell.  Measured:
 * SAMPLE0's (197,402)-(380,419) cell is bounded by two lines that run from
 * x=162 to x=598, and the original fills only the cell. */
static int hatch_meet(const JwcLine *a, const JwcLine *b, double *x, double *y)
{
    const double ax = a->x1 - a->x0, ay = a->y1 - a->y0;
    const double bx = b->x1 - b->x0, by = b->y1 - b->y0;
    const double cross = ax * by - ay * bx;
    double t;

    if (fabs(cross) < 1e-9) {
        return 0;
    }
    t = ((b->x0 - a->x0) * by - (b->y0 - a->y0) * bx) / cross;
    *x = a->x0 + t * ax;
    *y = a->y0 + t * ay;
    return 1;
}

/* ① 実 行: fill the frame in.
 *
 * The family is every line whose distance from the **origin** along the
 * normal is a whole number of pitches -- measured on SAMPLE0, where a 45
 * degree hatch at 10.0mm in the cell (75.855,44)-(258.764,61.441) comes out
 * as eight lines whose (y - x) are exactly -8 to -1 times 24.665, and 24.665
 * is 10.0 x unit_mm / sin 45.  They are written from the far side back, which
 * is the order the original's records come out in.
 *
 * The record's A byte is 0x42 and its B byte 0x20; the line type, pen and
 * layer are the ones being written.
 */
static void hatch_run(JwCmd *c, Jwc *d)
{
    const double rad = c->hatch_angle * 3.14159265358979323846 / 180.0;
    const double ux = cos(rad), uy = sin(rad);
    const double nx = -uy, ny = ux;
    const double pitch = c->hatch_pitch * d->unit_mm;
    double corner[JW_HATCH_MAX][2];
    double lo = 0.0, hi = 0.0;
    long k, first, last;
    int i, n = 0;

    if (pitch <= 0.0 || c->hatch_n < 3) {
        return;
    }
    c->hatch_first = d->n_lines;
    for (i = 0; i < c->hatch_n; i++) {
        const long a = c->hatch_line[i];
        const long b = c->hatch_line[(i + 1) % c->hatch_n];

        if (!hatch_meet(&d->lines[a], &d->lines[b],
                        &corner[n][0], &corner[n][1])) {
            return;             /* two of them are parallel: not a frame */
        }
        n++;
    }
    for (i = 0; i < n; i++) {
        const double e = nx * corner[i][0] + ny * corner[i][1];

        if (i == 0 || e < lo) {
            lo = e;
        }
        if (i == 0 || e > hi) {
            hi = e;
        }
    }
    first = (long)ceil(lo / pitch - 1e-9);
    last = (long)floor(hi / pitch + 1e-9);
    for (k = first; k <= last; k++) {
        double at[JW_HATCH_MAX];
        int got = 0, m = 0;

        for (i = 0; i < n && got < JW_HATCH_MAX; i++) {
            if (hatch_cross(corner[i], corner[(i + 1) % n], nx, ny,
                            (double)k * pitch, ux, uy, &at[got])) {
                got++;
            }
        }
        if (got < 2) {
            continue;
        }
        qsort(at, (size_t)got, sizeof at[0], hatch_cmp);
        for (i = 1; i < got; i++) {  /* a corner gives the same crossing twice */
            if (at[i] - at[m] > 1e-6) {
                at[++m] = at[i];
            }
        }
        got = m + 1;
        for (i = 0; i + 1 < got; i += 2) {
            const double d0 = (double)k * pitch;

            if (!jwc_add_line(d,
                              (float)(at[i] * ux + d0 * nx),
                              (float)(at[i] * uy + d0 * ny),
                              (float)(at[i + 1] * ux + d0 * nx),
                              (float)(at[i + 1] * uy + d0 * ny),
                              (unsigned char)d->line_type,
                              (unsigned char)d->pen,
                              (unsigned char)d->write_layer)) {
                return;
            }
            d->lines[d->n_lines - 1].rest[1] = 0x42;
            d->lines[d->n_lines - 1].rest[2] = 0x20;
        }
    }
}

/* ---------------------------------------------------- 曲線 ⑦連線 */

/* The direction of a segment, rounded the way `①角 度` says: every 45
 * degrees to start with, every 90 after one press of it, and free after a
 * second (the band says `45度毎`, `90度毎`, `free`). */
static void poly_dir(const JwCmd *c, double dx, double dy,
                     double *ux, double *uy)
{
    const double len = sqrt(dx * dx + dy * dy);

    if (c->poly_deg) {
        const double step = c->poly_deg * 3.14159265358979323846 / 180.0;
        const double a = floor(atan2(dy, dx) / step + 0.5) * step;

        *ux = cos(a);
        *uy = sin(a);
        return;
    }
    if (len < 1e-9) {
        *ux = 1.0;
        *uy = 0.0;
        return;
    }
    *ux = dx / len;
    *uy = dy / len;
}

/* The cross 連線 leaves on the point it has just taken: five pixels in each
 * quarter and one in the middle, colour 4, exclusive-or.  It is there only
 * while the pointer is still on the press -- moving off redraws without it,
 * which is what `moved` means everywhere else.
 *
 * Measured on SAMPLE0 after (200,200)(400,200)(400,350) with the pointer left
 * where it was: twenty pixels of 00ff00 round (400,350), and none at all once
 * the pointer is moved to (520,260).  **The middle is not one of them** -- the
 * pixel the point itself is on is the preview line's, and what makes it read
 * 00ff00 is the pointer, which is drawn over everything as colour 6
 * exclusive-or (2 xor 6 = 4). */
static void poly_mark(const JwCmd *c, VGA *v, const JwView *w)
{
    static const int ARM[5][2] = { { 1, 2 }, { 1, 3 }, { 2, 1 }, { 2, 2 },
                                   { 3, 1 } };
    int px, py, i, sx, sy;

    at_screen(w, c->poly_px, c->poly_py, &px, &py);
    /* **Once the pointer moves the cross goes and a red ring comes.**  The
     * original rubs the cross out -- its two circles, radius 2 and 3, drawn
     * again in colour 4 exclusive-or through the small-circle routine -- and
     * then draws a radius-2 one in colour 2 the same way (DOSEMU_BP=
     * +10a9:075c after the move to (520,260)).  That routine plots each of
     * the four points on the axes twice, so they cancel and the ring is the
     * eight between them. */
    if (c->moved) {
        static const int RING[8][2] = { { 1, 2 }, { -1, 2 }, { 1, -2 },
                                        { -1, -2 }, { 2, 1 }, { -2, 1 },
                                        { 2, -1 }, { -2, -1 } };

        for (i = 0; i < 8; i++) {
            jw_point(v, px + RING[i][0], py + RING[i][1], 2, 0x18);
        }
        return;
    }
    for (i = 0; i < 5; i++) {
        for (sx = -1; sx <= 1; sx += 2) {
            for (sy = -1; sy <= 1; sy += 2) {
                jw_point(v, px + sx * ARM[i][0], py + sy * ARM[i][1], 4,
                         0x18);
            }
        }
    }
}

/* An angle about a centre, in the 16.16 degrees an arc record keeps. */
static long poly_angle(double cx, double cy, double x, double y)
{
    double deg = atan2(y - cy, x - cx) * 180.0 / 3.14159265358979323846;

    while (deg < 0.0) {
        deg += 360.0;
    }
    while (deg >= 360.0) {
        deg -= 360.0;
    }
    return (long)(deg * 65536.0 + 0.5);
}

/* The corner where the line in hand meets the new one: the segment before it
 * goes down, rounded off, and the new line becomes the one in hand.
 *
 * `③丸 面   辺寸法 ` is **not** a radius: 3.00 is how far the tangent
 * points sit from the vertex (t = 3.0mm x unit_mm = 5.232 on SAMPLE0), and the
 * radius follows from the corner, r = t tan(a/2).  Measured -- a right angle
 * gives r = 5.232, an inside angle of 135 degrees gives 12.632 and one of
 * 149.0 degrees gives 18.890.  The arc is the way round that sweeps 180 - a;
 * a left turn starts at the incoming tangent point, a right turn at the
 * outgoing one.  RESUME 4.20b. */
static void poly_corner(JwCmd *c, Jwc *d, double bx, double by,
                        double vx, double vy)
{
    const double ux = c->poly_dx, uy = c->poly_dy;
    const double cross = ux * vy - uy * vx;
    const double t = c->poly_t;
    double px, py, ax, ay, tx, ty, r, wx, wy, wl, cx, cy, cosa;
    long start, end;

    if (!d) {
        return;
    }
    if (fabs(cross) < 1e-9) {
        /* Straight on, or back the way it came: no vertex to round.  Not
         * measured -- the original is not known to make a corner here -- so
         * the line in hand simply keeps going. */
        c->poly_ax = bx;
        c->poly_ay = by;
        c->poly_dx = vx;
        c->poly_dy = vy;
        return;
    }
    px = ((bx - c->poly_ax) * vy - (by - c->poly_ay) * vx) / cross;
    py = c->poly_ay + px * uy;
    px = c->poly_ax + px * ux;
    ax = px - t * ux;                   /* the incoming tangent point */
    ay = py - t * uy;
    tx = px + t * vx;                   /* and the outgoing one */
    ty = py + t * vy;
    cosa = -(ux * vx + uy * vy);
    if (cosa > 1.0) {
        cosa = 1.0;
    }
    if (cosa < -1.0) {
        cosa = -1.0;
    }
    r = t * tan(acos(cosa) / 2.0);
    wx = vx - ux;                       /* the bisector from the vertex */
    wy = vy - uy;
    wl = sqrt(wx * wx + wy * wy);
    if (wl < 1e-9) {
        return;
    }
    cx = px + wx / wl * sqrt(t * t + r * r);
    cy = py + wy / wl * sqrt(t * t + r * r);
    if (jwc_add_line(d, (float)c->poly_sx, (float)c->poly_sy,
                     (float)ax, (float)ay, (unsigned char)d->line_type,
                     (unsigned char)d->pen, (unsigned char)d->write_layer)) {
        d->lines[d->n_lines - 1].rest[1] = 0xf0;
    }
    if (cross > 0.0) {                  /* a left turn */
        start = poly_angle(cx, cy, ax, ay);
        end = poly_angle(cx, cy, tx, ty);
    } else {
        start = poly_angle(cx, cy, tx, ty);
        end = poly_angle(cx, cy, ax, ay);
    }
    jwc_add_arc_at(d, (float)cx, (float)cy, (float)r, start, end,
                   (unsigned char)d->line_type, (unsigned char)d->pen,
                   (unsigned char)d->write_layer, 0);
    c->poly_sx = tx;
    c->poly_sy = ty;
    c->poly_ax = bx;
    c->poly_ay = by;
    c->poly_dx = vx;
    c->poly_dy = vy;
}

/* 図形 ②読込 -- put the figure down with its base point at (px,py).
 *
 * Everything about this was measured by having the original place a figure
 * and then save the drawing (tools/zukeiplace.sh), and reading the records
 * it wrote:
 *
 *   * the coordinates are the file's millimetres **times the reciprocal** of
 *     what jwc_zukei_bytes multiplied by, as a float.  Not divided by it:
 *     TEST3's arc of 5000mm comes back 21.8013458 one way and 21.8013477 the
 *     other, and the original's own file says 21.8013458.  The round trip is
 *     not exact -- that arc started at 21.8013477 -- and the original's is
 *     not either.
 *   * every entity goes on the **drawing's write layer**, whatever layer it
 *     had in the figure: SAMPLE0's 0, TEST1's 4 and TEST3's 1, against
 *     figures whose own layers were 0, 1, 2 and 4.
 *   * the spare bytes: a line and a text keep only bit 7 of the third one
 *     (02, 03, 0a and 4a all come out 00; 82 comes out 80, which is what
 *     makes a text vertical) and get 0x08 in the fourth.  An arc and a point
 *     get 0x10 in the third and keep the fourth (an arc's 5f and 01, a
 *     point's 26).
 */
static void zukei_place(JwCmd *c, Jwc *d, double px, double py)
{
    const JwcZukei *z = c->zukei_in;
    const float inv = 1.0f / jwc_zukei_scale(d);
    const unsigned char layer = (unsigned char)d->write_layer;
    long k;

    if (!z) {
        return;
    }
    for (k = 0; k < z->n_lines; k++) {
        JwcLine l = z->lines[k];

        double ax, ay, bx, by;

        zukei_turn(c, (double)(z->lines[k].x0 * inv),
                   (double)(z->lines[k].y0 * inv), &ax, &ay);
        zukei_turn(c, (double)(z->lines[k].x1 * inv),
                   (double)(z->lines[k].y1 * inv), &bx, &by);
        l.x0 = (float)(px + ax);
        l.y0 = (float)(py + ay);
        l.x1 = (float)(px + bx);
        l.y1 = (float)(py + by);
        l.layer = layer;
        l.rest[0] = layer;
        l.rest[2] = (unsigned char)(z->lines[k].rest[2] & 0x80);
        l.rest[3] = 0x08;
        if (!jwc_put_line(d, &l)) {
            return;
        }
    }
    for (k = 0; k < z->n_arcs; k++) {
        JwcArc a = z->arcs[k];

        double ux, uy;

        zukei_turn(c, (double)(z->arcs[k].cx * inv),
                   (double)(z->arcs[k].cy * inv), &ux, &uy);
        a.cx = (float)(px + ux);
        a.cy = (float)(py + uy);
        a.r = z->arcs[k].r * inv;
        a.tilt = z->arcs[k].tilt + (long)(c->zukei_ang * 65536.0f);
        a.layer = layer;
        a.rest[0] = layer;
        a.rest[2] = 0x10;
        if (!jwc_put_arc(d, &a)) {
            return;
        }
    }
    for (k = 0; k < z->n_points; k++) {
        JwcPoint q = z->points[k];

        double ux, uy;

        zukei_turn(c, (double)(z->points[k].x * inv),
                   (double)(z->points[k].y * inv), &ux, &uy);
        q.x = (float)(px + ux);
        q.y = (float)(py + uy);
        q.layer = layer;
        q.rest[0] = layer;
        q.rest[2] = 0x10;
        if (!jwc_put_point(d, &q)) {
            return;
        }
    }
    for (k = 0; k < z->n_texts; k++) {
        JwcText t = z->texts[k];

        double ax, ay, bx, by;

        zukei_turn(c, (double)(z->texts[k].x0 * inv),
                   (double)(z->texts[k].y0 * inv), &ax, &ay);
        zukei_turn(c, (double)(z->texts[k].x1 * inv),
                   (double)(z->texts[k].y1 * inv), &bx, &by);
        t.x0 = (float)(px + ax);
        t.y0 = (float)(py + ay);
        t.x1 = (float)(px + bx);
        t.y1 = (float)(py + by);
        t.layer = layer;
        t.rest[1] = layer;
        t.rest[2] = (unsigned char)(z->texts[k].rest[2] & 0x80);
        t.rest[3] = 0x08;
        if (!jwc_put_text(d, &t)) {
            return;
        }
    }
}

static int press_body(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy,
                      int right);

/* 押しの前後で、作図の命令が足した実体の数を数え、取り消しに備えます。
 * 足さなかった押し（始点を取っただけなど）は取り消しの控えを捨てます。 */
int jw_cmd_press(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy, int right)
{
    const long nl = d ? d->n_lines : 0, na = d ? d->n_arcs : 0;
    const long nt = d ? d->n_texts : 0;
    const int pressed = c->pressed, stage = c->stage;
    const int box_done = c->box_done, circ_done = c->circ_done;
    const int fix_done = c->fix_done;
    const double x0 = c->x0, y0 = c->y0, x1 = c->x1, y1 = c->y1;
    const int was_moved = c->moved || sx != c->press_x || sy != c->press_y;
    const int r = press_body(c, d, w, sx, sy, right);

    /* 始点を持ったまま読取が外れた押しでは、仮の線と 長= は消えない（測定：
     * func_all plus_s0_c2 の右押し）。 */
    if (c->missed && c->pressed == 1 && was_moved
        && (c->command == 2 || c->command == 3 || c->command == 4
            || c->command == 11)) {
        c->moved = 1;
    }

    /* 帯の 2 行目は、作った押しから、言葉（読取可能データ無 など）を書く
     * 押しまで重なっている（測定：circle_plain）。 */
    if (d) {
        if (d->n_lines > nl || d->n_arcs > na) {
            c->band_row2 = 1;
        } else if (c->missed) {
            c->band_row2 = 0;
        }
    }

    /* 円線接 ③ の接円を作った押しなら、取り消しの印に円弧の数を控える。 */
    if (d && c->command == 26 && (c->tan_tri == 13 || c->tan_tri == 14)
        && d->n_arcs > na) {
        c->tan_na_mark = d->n_arcs;
    }

    if (d && (c->command == 2 || c->command == 3 || c->command == 4
              || c->command == 11 || c->command == 12)) {
        if (d->n_lines > nl || d->n_arcs > na || d->n_texts > nt) {
            c->undo_lines = d->n_lines - nl;
            c->undo_arcs = d->n_arcs - na;
            c->undo_texts = d->n_texts - nt;
            c->undo_to.pressed = pressed;
            c->undo_to.stage = stage;
            c->undo_to.box_done = box_done;
            c->undo_to.circ_done = circ_done;
            c->undo_to.fix_done = fix_done;
            c->undo_to.x0 = x0;
            c->undo_to.y0 = y0;
            c->undo_to.x1 = x1;
            c->undo_to.y1 = y1;
        }
        /* 何も足さない押し（次の始点など）では、＋・／・□ は控えを捨てません：
         * 本物は次に何かを足すまで最後の一つを取り消せます（測定：＋ で線を
         * 引き、次の始点を押してから [ESC] 二回で、その線が消える）。○・（ は
         * 捨てます（測定：次の中心を押したあとの [ESC] 二回で円は残る）。 */
        else if (c->command == 11 || c->command == 12) {
            c->undo_lines = c->undo_arcs = c->undo_texts = 0;
        }
    }
    /* **範囲の印は記録に残ります**（rest の bit1。線・円弧は +14h、点は
     * +0Ah）。本物は範囲を取り始めるとき全部から落とし（ルート 0x7ac6）、
     * 選んだものに立てる——保存した図面にそのまま入っています（測定：
     * 複写 で範囲を取って線 0 を加えると、SAMPLE0 のレイヤ 1 の 0x02 が
     * 全部落ち、線 0 だけ 0x02）。 */
    if (d && JW_RANGE(c)) {
        long k;

        /* 落とすのは範囲を閉じたとき：始点の押しだけでは記録の印は残る
         * （測定：消去で一回押しただけで保存すると SAMPLE0 の 0x02 はそのまま）。 */
        if (pressed < 2 && c->pressed == 2) {
            for (k = 0; k < d->n_lines; k++) {
                d->lines[k].rest[2] &= (unsigned char)~2u;
            }
            for (k = 0; k < d->n_arcs; k++) {
                d->arcs[k].rest[2] &= (unsigned char)~2u;
            }
            for (k = 0; k < d->n_points; k++) {
                d->points[k].rest[2] &= (unsigned char)~2u;
            }
            for (k = 0; k < d->n_texts; k++) {
                d->texts[k].rest[2] &= (unsigned char)~2u;
            }
            c->range_marked = 1;
        }
        if (c->range_marked && c->stage >= 1) {
            for (k = 0; k < d->n_lines && k < c->n0_lines; k++) {
                if (picked_line(c, d, k)) {
                    /* 面取 の一括処理は、最後のバイトに範囲に入っている端：
                     * 1 始点だけ、2 終点だけ、0 両方（測定：chb_a の枠の
                     * 左辺 02・上辺 01・内の線 00。変形 と同じ書き方）。 */
                    if (c->command == 8 && pressed < 2) {
                        const JwcLine *l = &d->lines[k];
                        const int a = jw_cmd_in_range(c, l->x0, l->y0,
                                                      l->x0, l->y0);
                        const int b = jw_cmd_in_range(c, l->x1, l->y1,
                                                      l->x1, l->y1);

                        d->lines[k].rest[3] = (unsigned char)
                            (a && b ? 0 : a ? 1 : 2);
                    }
                    d->lines[k].rest[2] |= 2u;
                } else {
                    d->lines[k].rest[2] &= (unsigned char)~2u;
                }
            }
            for (k = 0; k < d->n_arcs && k < c->n0_arcs; k++) {
                if (picked_arc(c, d, k)) {
                    d->arcs[k].rest[2] |= 2u;
                } else {
                    d->arcs[k].rest[2] &= (unsigned char)~2u;
                }
            }
            for (k = 0; k < d->n_texts && k < c->n0_texts; k++) {
                if (takes_text(c) && picked_text(c, d, k)) {
                    d->texts[k].rest[2] |= 2u;
                } else {
                    d->texts[k].rest[2] &= (unsigned char)~2u;
                }
            }
        }
    }
    return r;
}

/* ＋・／ の ④平行・⑤垂直：`基準線　マウス指示` で押した線から座標系を作る
 * （本物は ovl23 の 3ab8:018f、リンク時 0x2ad0f。見つかれば 1bb4:27ea で
 * cos=(float)(dx/L)、sin=(float)(dy/L)、見つからなければ `読取可能データ無`
 * で聞き直す）。**始点を持っていても同じ**（押しの先頭で見るので、終点の
 * 押しには取られない）。 */
static int ref_pick(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy)
{
    /* ④平行・⑤垂直：`基準線　マウス指示`。押した線の向きに固定して
     * `始点指示 … [BS]前項` へ（測定：縦の枠を左で押すと `サーチ` の
     * あとその行）。**右（同一線上の線）はまだ**——左と同じに扱う。 */
    const long k = pick_line(d, w, sx, sy);
    double dx, dy, len;

    if (k < 0) {
        c->missed = 1;
        return 0;
    }
    c->missed = 0;
    dx = (double)d->lines[k].x1 - (double)d->lines[k].x0;
    dy = (double)d->lines[k].y1 - (double)d->lines[k].y0;
    len = sqrt(dy * dy + dx * dx);
    if (len <= 0.0) {
        return 0;
    }
    c->par_cs = (float)(dx / len);
    c->par_sn = (float)(dy / len);
    if (c->ask_kind == 4) {
        const float t = c->par_cs;

        c->par_cs = -c->par_sn;
        c->par_sn = t;
    }
    c->par_on = 1;
    c->fix_angle = 0;
    c->fix_mode = 1;
    c->fix_done = 0;
    c->ask_kind = 0;
    /* 始点を持っていれば、その場で仮の線と 長=・角度= が出ます（測定：
     * ＋ の始点 (250,200) のあと上の辺を取ると、(400,200) までの赤と
     * `長= 86.004`）。 */
    if (c->pressed) {
        jw_cmd_track(c, d, w, sx, sy);
        c->moved = 1;
    }
    return 1;
}

/* 楕円を置きます。測定（SAMPLE0、100,50 と 30 度）：
 *   c=(179,213)（押した中心）、r=174.4108（100mm）、flatten 5000、tilt 30 度、
 *   始角・終角 0（一周）、最後のバイト 0x52（○ と同じ）。
 * 長径は**半径**として入ります（r = 長径 / 縮尺）、flatten = 短径/長径 x 10000。
 * 置いたら `○ 楕円中心点 …` に戻り、数え箱は `長径=` `短径=`。 */
static int ellipse_put(JwCmd *c, Jwc *d, double deg)
{
    const float r = (float)c->ell_a / jwc_zukei_scale(d);
    const double t = deg - 360.0 * floor(deg / 360.0);

    if (!jwc_add_ellipse(d, (float)c->ell_cx, (float)c->ell_cy, r,
                         /* 切り捨て（測定：70,30 で 4285） */
                         (short)(c->ell_b / c->ell_a * 10000.0),
                         fixed16(t), (unsigned char)d->line_type,
                         (unsigned char)d->pen,
                         (unsigned char)d->write_layer)) {
        return 0;
    }
    c->ell_ang = deg;
    c->num[0] = (float)c->ell_a;
    c->num[1] = (float)c->ell_b;
    c->dec[0] = c->dec[1] = d->decimals;
    c->ell = 1;
    c->ell_done = 1;
    c->typing = 0;
    return 1;
}

/* □ ①寸法・②角度 の欄を始点を持って開いていたら、その始点に戻します。 */
static void box_unhold(JwCmd *c)
{
    if (c->circ_hold) {
        c->pressed = 1;
        c->stage = 1;
        c->x0 = c->circ_hx;
        c->y0 = c->circ_hy;
        c->circ_hold = 0;
    }
}

static int press_body(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy,
                      int right)
{
    double x, y;

    if (!d) {
        return 0;
    }
    /* A press somewhere else means the pointer went there first, and 線切断
     * and ２線 both put their work down when it leaves.  So the move happens
     * before the press, not after it. */
    if (sx != c->press_x || sy != c->press_y) {
        jw_cmd_track(c, d, w, sx, sy);
    }
    /* Any press puts the two counts back in the box beside them; the length
     * and the angle come back when the pointer moves off (JwCmd.moved). */
    c->press_x = sx;
    c->press_y = sy;
    c->moved = 0;
    c->escaped = 0;
    c->dim_ck_gone = 0;
    c->esc_gone = 0;
    /* 寸法 ③任意方向 の角度の欄：図面の押しも `0 度 ﾏｳｽ(L)`／`前回と同じ ﾏｳｽ(R)` と同じ（左 = 0 度、
     * 右 = 前回の角度。測定：dim_s0_c3 の 400 140 left。前回は 45 度のまま）。 */
    if (c->command == 14 && c->top_item == 3 && !c->pressed && c->typing) {
        jw_cmd_dim_angle(c, right ? 45.0 : 0.0);
        return 1;
    }
    c->lc_msg = c->command == 24;
    /* 線変更 ③属性設定 を選んだあとの押しは、範囲の始点（測定：linechg_s0_c3 の 400 140 left。
     * `<線・円> 終点指示 マウス(L) 範囲確定 マウス(R) |1)レイヤ|2)線種色|`）。 */
    if (c->command == 24 && !c->lc_range && c->top_item == 3 && !c->pressed && !c->typing) {
        c->lc_range = 1;
        c->lc_attr = 1;
        c->top_item = 0;
        c->top_right = 0;
    }
    /* 測定 ⑧文字列集計：図面の押しは指定文字の指示（文字が無ければ `読取可能データ無`。取れた先は未実装）。
     * ⑨式：図面の押しは ① と同じ（左）で三辺の文字の範囲を取る行へ（測定：measure_s0_c8・c9）。 */
    if (c->command == 15 && c->stage == 0 && c->top_item == 8) {
        c->meas8d = 0;
        c->missed = 1;
        return 0;
    }
    if (c->command == 15 && c->stage == 0 && c->top_item == 9) {
        c->meas9 = 1;
        c->meas9k = 0;
        c->top_item = 0;
        c->missed = 0;
        return 0;
    }
    if (c->command == 15 && c->meas9t) {
        c->meas9t = 0;                      /* ③三斜：押しは ① と同じ（左）で範囲へ */
        c->meas9 = 1;
        c->meas9k = 3;
        c->missed = 0;
        return 0;
    }
    if (c->command == 15 && c->meas9) {
        if (!c->meas9p) {
            c->meas9p = 1;
            c->meas9z = 1;
            c->pressed = 1;
            jw_cmd_at(w, sx, sy, &c->x0, &c->y0);
        } else if (!c->meas9q) {
            c->meas9q = 1;                  /* 終点：範囲を緑で残し、追加･除外の行へ */
            c->pressed = 2;
            jw_cmd_at(w, sx, sy, &c->x1, &c->y1);
        } else {
            c->missed = 1;                  /* 追加･除外：文字が無ければ `読取可能データ無`（取れた先は未実装） */
        }
        return 0;
    }
    /* 測定 ⑤表計算：帯の項目を選ぶまで図面の押しは何も起こさない（測定：measure_s0_c5）。 */
    if (c->command == 15 && c->meas5) {
        /* A群の追加・除外：文字が無ければ `読取可能データ無`（測定：measure_s0_c5_v。文字が取れた先は未実装） */
        c->missed = c->meas5r;
        return 0;
    }
    /* 測定 ①距離 ③円周：円を拾う（外れは `読取可能データ無`。円が取れた先は未実装）。 */
    if (c->command == 15 && c->meas_arc) {
        if (jw_cmd_arc_at(d, w, sx, sy) < 0) {
            c->pt_line = jw_cmd_line_at(d, w, sx, sy) >= 0;
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        return 1;
    }
    /* 測定 ④座標：◇で原点、◆で座標点（原点からの相対 X,Y。(0,0) は beep）。 */
    if (c->command == 15 && c->meas4) {
        double qx, qy;

        if (!take_point(c, d, w, sx, sy, right, &qx, &qy)) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        if (c->ms4 == 0) {
            c->ms4_ox = (float)qx;
            c->ms4_oy = (float)qy;
            c->ms4 = 1;
            return 1;
        }
        if ((float)qx == (float)c->ms4_ox && (float)qy == (float)c->ms4_oy) {
            return 1;
        }
        c->ms4_px = (float)qx;
        c->ms4_py = (float)qy;
        c->ms4 = 2;
        return 1;
    }
    /* 測定 ③面積：点を足す。同じ点か 31 点目は足さない（beep）。n>=3 で三角形 (P1,P[n-1],P[n]) を足す
     * （cross=(x[n-1]-x1)(y[n]-y1)-(x[n]-x1)(y[n-1]-y1)、面積=cross*s²*0.5。測定：measure_s0_c3）。 */
    if (c->command == 15 && c->meas3) {
        double qx, qy;

        if (!take_point(c, d, w, sx, sy, right, &qx, &qy)) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        if (c->ms3_n > 0 && (float)qx == (float)c->ms3_x[c->ms3_n]
            && (float)qy == (float)c->ms3_y[c->ms3_n]) {
            return 1;
        }
        if (c->ms3_n >= 30) {
            return 1;
        }
        c->ms3_n++;
        c->ms3_x[c->ms3_n] = (float)qx;
        c->ms3_y[c->ms3_n] = (float)qy;
        if (c->ms3_n >= 3) {
            const int n = c->ms3_n;
            const double sc = (double)jwc_zukei_scale(d);
            const double cross = (c->ms3_x[n - 1] - c->ms3_x[1]) * (c->ms3_y[n] - c->ms3_y[1])
                               - (c->ms3_x[n] - c->ms3_x[1]) * (c->ms3_y[n - 1] - c->ms3_y[1]);

            c->ms3_tri[n] = cross * sc * sc * 0.5;
        }
        return 1;
    }
    /* 測定 ②角度：◇で原点（結果は消える）、◆で角度点（原点と同じ点は無視）。Ｘ軸基準だけ
     * （２点間は未実装）。θ=atan2(dy,dx) で (-180,180]（測定：measure_s0_c2）。 */
    if (c->command == 15 && c->meas2 && !c->ms2_mode) {
        double qx, qy;

        if (!take_point(c, d, w, sx, sy, right, &qx, &qy)) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        if (c->ms2 == 0) {
            c->ms2_ox = qx;
            c->ms2_oy = qy;
            c->ms2_res = 0;
            c->ms2 = 1;
            return 1;
        }
        if ((float)qx == (float)c->ms2_ox && (float)qy == (float)c->ms2_oy) {
            return 1;
        }
        c->ms2_deg = atan2((double)(float)qy - (float)c->ms2_oy, (double)(float)qx - (float)c->ms2_ox)
                     * 180.0 / 3.14159265358979323846;
        c->ms2_res = 1;
        c->ms2 = 0;
        return 1;
    }
    /* 変形 ③複線化 の追加・除外の行は `線・円(L)` だけ：右の押しは何も起こさない（測定：henkei_s0_c3）。 */
    if (c->command == 17 && c->hen_dbl && c->pressed == 2 && c->stage == 3 && right) {
        return 0;
    }
    /* 円線接 ②接円 の小項目の行（①１線１円(L)|②１点１線(R)|…）：図面の押しは項目行の読みが返す
     * ボタンで、左 = ①、右 = ②（測定：tangent_s0_c2。1bb4:2cb4 と同形）。 */
    if (c->command == 26 && c->tan_on && c->stage == 30) {
        jw_cmd_top(c, d, right ? 2 : 1, 0);
        return 1;
    }
    /* 多角形 の項目の行（①２点からの距離 … と ①任意寸法 …）：図面の押しは
     * 項目行の読み（1bb4:2cb4）が返すボタンで、左 = ①、右 = ②。押した点は
     * 使わない（測定：probe_firstclick pg_R／polygon_plain。decomp は寸法の
     * 同じ読みと同形で、多角形メインの ovl22 3ab8:4794 の読みは未照合）。 */
    if (c->command == 19 && !c->pressed && !c->typing && !c->top_item
        && !c->pg_item && c->stage == 0) {
        jw_cmd_top(c, d, right ? 2 : 1, 0);
        return 1;
    }

    /* **押せば `読取可能データ無` は消えます**（外れた読取のあとの押しで。
     * 矢を動かすだけでは残る——測定）。外れればまた立てます。 */
    c->missed = 0;
    if ((c->command == 2 || c->command == 3)
        && (c->ask_kind == 3 || c->ask_kind == 4) && !c->typing) {
        return ref_pick(c, d, w, sx, sy);
    }
    if (c->command == 4 && c->box_refask) {
        /* □ ③平行：押した線の向きに傾けた四角を 2 点で（②角度 と同じ道、
         * 行は `始点指示 … [BS]前項`。測定）。 */
        const long k = pick_line(d, w, sx, sy);
        double dx, dy, len;

        if (k < 0) {
            c->missed = 1;
            c->ref_miss++;
            return 0;
        }
        dx = (double)d->lines[k].x1 - (double)d->lines[k].x0;
        dy = (double)d->lines[k].y1 - (double)d->lines[k].y0;
        len = sqrt(dy * dy + dx * dx);
        if (len <= 0.0) {
            return 0;
        }
        c->par_cs = (float)(dx / len);
        c->par_sn = (float)(dy / len);
        c->box_ref = 1;
        c->box_refask = 0;
        c->box_rot = 1;
        c->box_mode = 1;
        c->box_fix = 0;
        if (c->ref_hold) {
            c->ref_hold = 0;
            double qx, qy;

            c->pressed = 1;     /* 持っていた始点から終点指示へ。仮の枠は押した所の矢まで出る */
            c->stage = 1;
            jw_cmd_at(w, sx, sy, &qx, &qy);
            measure(c, d, qx, qy);
            c->moved = 1;
        }
        return 1;
    }
    /* 図形 ①登録, once the range is fixed: the press is the figure's own
     * base point -- `◇原図形の基準点位置 マウス指示 (L)free (R)Read` -- and
     * the figure is written out measured from it.  The screen then goes to
     * the list of figures in the group. */
    /* 図形 ②読込, once a figure is in hand: every press puts a copy down
     * with its base point there, and the line turns into ◆ 位置指示 with
     * ①同図形別処理 and ②他図形読込 on it. */
    if (c->command == 27
        && (c->zukei == JW_ZUKEI_PUT || c->zukei == JW_ZUKEI_PUT2)) {
        jw_cmd_at(w, sx, sy, &x, &y);
        zukei_place(c, d, x, y);
        c->zukei = JW_ZUKEI_PUT2;
        return 1;
    }
    if (c->command == 27 && c->zukei == JW_ZUKEI_RANGE && c->pressed == 2
        && c->stage != 3) {
        jw_cmd_at(w, sx, sy, &x, &y);
        c->zukei_bx = x;
        c->zukei_by = y;
        c->zukei = JW_ZUKEI_PICK;
        return 1;
    }
    if (c->command == 5) {
        /* 複線: point at a line, type how far away the copy goes, and press
         * the side it goes to.  RESUME.md 4.12 has the whole sequence as the
         * original writes it.
         *
         * The interval is millimetres of paper, so it comes back to drawing
         * units the same way the panel's lengths go the other way:
         * `gap * unit_mm / denom`.  SAMPLE0's line at y=157 with 10, 20 and 40
         * lands on 139, 122 and 87, which is that, truncated. */
        if (c->typing && c->stage == 1) {
            /* `点指示 or 間隔=` の欄で**図面を押すと点指示**：押した点までの
             * 隔たりが間隔になります（測定：上の辺を選んで (300,250) を押すと
             * `[ 63.10]`、次に下側を押すと y=250 の線）。 */
            const double dx = c->lx1 - c->lx0, dy = c->ly1 - c->ly0;
            const double len = sqrt(dx * dx + dy * dy);
            double px, py, away;

            if (len <= 0.0) {
                return 0;
            }
            /* 欄に打ってあれば、その数が間隔（測定：`2` を打って図面を押すと
             * 2mm の複線）。 */
            if (c->typed_n > 0) {
                c->typed[c->typed_n] = 0;
                c->gap = field_eval(c->typed);
                gap_remember(c);
                c->off_typed = 1;
                c->num[0] = c->num[1] = c->gap;
                c->dec[0] = 2;
                c->dec[1] = d->decimals;
                c->typing = 0;
                c->typed_n = 0;
                c->typed[0] = 0;
                c->stage = 2;
                return 1;
            }
            /* 右は読取（外れれば欄のまま待つ。測定：`サーチ` `.読取可能データ無`
             * のあとも `点指示 or 間隔=`）。 */
            if (!take_point(c, d, w, sx, sy, right, &px, &py)) {
                c->missed = 1;
                c->off_label_gone = 1;      /* 札は外れで消え、欄を開き直すまで戻らない（decomp 0x2c71c：[0xc22] が立っていると札を書かない） */
                return 0;
            }
            away = ((px - c->lx0) * dy - (py - c->ly0) * dx) / len;
            c->gap = (away < 0.0 ? -away : away) / c->per_mm;
            gap_remember(c);
            c->off_pt = 1;              /* 点押しで決めた */
            c->off_typed = 0;
            c->num[0] = c->num[1] = c->gap;
            c->dec[0] = 2;
            c->dec[1] = d->decimals;
            c->typing = 0;
            c->typed_n = 0;
            c->typed[0] = 0;
            /* 線はまだ作りません：`○ 複写方向マウス指示(L)` の段で、次の押し
             * の側に入ります（測定：点指示のあとも線数 30）。仮の線は押した
             * その場で出ます（測定：y=250 に赤）。 */
            c->stage = 2;
            jw_cmd_track(c, d, w, sx, sy);
            c->moved = 1;
            return 1;
        }
        if (c->typing) {
            return 0;           /* the number has to be finished first */
        }
        if (c->stage == 4) {    /* 間隔取得: the line to measure from */
            const long k = pick_line(d, w, sx, sy);

            if (k < 0) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->pick = k;
            c->lx0 = d->lines[k].x0;
            c->ly0 = d->lines[k].y0;
            c->lx1 = d->lines[k].x1;
            c->ly1 = d->lines[k].y1;
            c->per_mm = (d->unit_mm > 0.0f ? d->unit_mm : 1.0f)
                      / (d->denom > 0.0 ? d->denom : 1.0);
            c->stage = 5;
            return 0;
        }
        if (c->stage == 5) {    /* 間隔取得: the point to measure to */
            const double dx = c->lx1 - c->lx0, dy = c->ly1 - c->ly0;
            const double len = sqrt(dx * dx + dy * dy);
            double px, py, away;

            if (len <= 0.0) {
                return 0;
            }
            jw_cmd_at(w, sx, sy, &px, &py);
            away = ((px - c->lx0) * dy - (py - c->ly0) * dx) / len;
            c->gap = (away < 0.0 ? -away : away) / c->per_mm;
            /* ①間隔取得 の道は履歴に入れない（測定：offset_s0_c1） */
            c->num[0] = c->num[1] = c->gap;
            c->dec[0] = 2;
            c->dec[1] = d->decimals;
            c->stage = 6;
            return 0;
        }
        if (c->stage != 2) {    /* not waiting for a side: pick a line */
            const long k = pick_line(d, w, sx, sy);

            if (k < 0) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->pick = k;
            c->lx0 = d->lines[k].x0;
            c->ly0 = d->lines[k].y0;
            c->lx1 = d->lines[k].x1;
            c->ly1 = d->lines[k].y1;
            c->per_mm = (d->unit_mm > 0.0f ? d->unit_mm : 1.0f)
                      / (d->denom > 0.0 ? d->denom : 1.0);
            /* 前線と連続(R) が出せるかは、今の一本を選んだこの時点で決まる
             * （decomp ovl7 0x2cc46〜0x2ce00：四条件）。 */
            c->off_done = offset_can_continue(c, d, w);
            c->off_cont = 0;
            /* The right button takes the interval last used and goes straight
             * to choosing the side -- `(R)同じ寸法`, as the command's own line
             * says.  No field, no `点指示 or 間隔=`: measured by running 複線
             * once with 20 and then pointing at another line with the right
             * button, which writes `[       20.00]` in the band and nothing
             * else. */
            c->off_pt = 0;
            if (right) {
                gap_remember(c);        /* (R) 同じ寸法 も 0x2ca6f の push を通る（decomp 0x2c689） */
                c->num[0] = c->num[1] = c->gap;
                c->dec[0] = 2;
                c->dec[1] = d->decimals;
                c->stage = 2;
                return 0;
            }
            c->off_pt = 0;
            c->off_label_gone = 0;
            c->typing = 1;
            c->typed_n = 0;
            c->typed[0] = 0;
            c->stage = 1;
            return 0;
        }
        return offset_line(c, d, w, sx, sy, right && c->off_done);
    }
    if (c->command == 19 && c->pg1) {
        /* 多角形 ①：A・B は L=free／R=Read（34e9）、寸法の欄の右押しは前回値、C は押した
         * 位置が方向（decomp ovl22 0x2cbe4〜0x2d384）。 */
        if (c->pg1 == 3) {
            return right ? pg1_accept(c, d, 1) : 1;
        }
        if (c->pg1 == 4) {
            jw_cmd_at(w, sx, sy, &x, &y);
            pg1_make(c, d, x, y);
            c->pg1 = 1;
            return 1;
        }
        if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
            c->missed = 1;
            return 0;
        }
        if (c->pg1 == 1) {
            c->pg1_ax = x;
            c->pg1_ay = y;
            c->pg1_n = 0;
            c->pg1 = 2;
            return 1;
        }
        if ((float)x == (float)c->pg1_ax && (float)y == (float)c->pg1_ay) {
            return 1;
        }
        c->pg1_bx = x;
        c->pg1_by = y;
        c->pg1 = 3;
        c->typing = 1;
        c->typed_n = 0;
        c->typed[0] = 0;
        return 1;
    }
    if (c->command == 19 && c->pg3) {
        /* ③座標値による多角形：原点 → 始点 → 押すたびに前の点から辺を一本
         * （rest[1] = 6。測定：(300,250) → (450,330) → (162,250) →
         * (350,350) で三本）。座標を打つ欄はまだ。 */
        if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
            c->missed = 1;
            return 0;
        }
        if (c->pg3 == 1) {
            c->pg3 = 2;
            return 1;
        }
        if (c->pg3 == 3 && jwc_add_line(d, (float)c->pg3_x, (float)c->pg3_y,
                                        (float)x, (float)y,
                                        (unsigned char)d->line_type,
                                        (unsigned char)d->pen,
                                        (unsigned char)d->write_layer)) {
            d->lines[d->n_lines - 1].rest[1] = 6;
            c->pg3_n++;
        }
        c->pg3_x = x;
        c->pg3_y = y;
        c->pg3 = 3;
        return 1;
    }
    if (c->command == 11 && c->ell) {
        /* ○ ②楕円 の押し。 */
        if (c->ell == 1) {
            if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->ell_cx = x;
            c->ell_cy = y;
            c->ell = 2;
            c->typing = 1;
            c->typed[0] = 0;
            c->typed_n = 0;
            return 1;
        }
        if (c->ell == 2) {
            /* `前回と同じ ﾏｳｽ(R)`。`任意寸法ﾏｳｽ(L)` は 1 点目の指示へ（測定：circle_s0_c2。
             * 1 点目の先は未実装）。 */
            if (!right) {
                c->typing = 0;
                c->typed[0] = 0;
                c->typed_n = 0;
                c->ell = 5;
                return 1;
            }
            c->ell = 3;
            c->typing = 0;
            c->ell = 3;
            return 1;
        }
        if (c->ell == 5 || c->ell == 6) {
            /* 任意寸法：１点目・２点目の指示（測定：circle_s0_c2。２点目の先は未実装）。 */
            if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->ell_px[c->ell - 5] = x;
            c->ell_py[c->ell - 5] = y;
            c->ell++;
            if (c->ell == 7) {
                c->ell = 3;         /* ２点目のあとは 軸の平行線 の指示へ */
                c->ell_mouse = 1;
            }
            return 1;
        }
        if (c->ell == 3 && c->ell_mouse) {
            /* 任意寸法：押した線の向きを一つの軸とし、中心から二点を通る楕円（測定：circle_s0_c2。
             * 軸の長さは二点を (u,v) に写して x^2/A^2 + y^2/B^2 = 1 を解く。長いほうが長径）。 */
            const long k = pick_line(d, w, sx, sy);
            double th, ux, uy, x1, y1, x2, y2, p, q, r2, s2, den, wA, wB, A, B, long_a, short_b, tilt;

            if (k < 0) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            th = (double)ang16(d->lines[k].x0, d->lines[k].y0, d->lines[k].x1, d->lines[k].y1)
                 * 1.52587890625e-05 * 3.14159265358979323846 / 180.0;
            {
                /* 本物の正弦・余弦は 16.16 固定小数で、90 度の正弦は 65535（draw.c の注）。 */
                long ct = (long)(cos(th) * 65536.0), st = (long)(sin(th) * 65536.0);

                if (st == 65536L) {
                    st = 65535L;
                }
                ux = (double)ct / 65536.0;
                uy = (double)st / 65536.0;
            }
            x1 = (c->ell_px[0] - c->ell_cx) * ux + (c->ell_py[0] - c->ell_cy) * uy;
            y1 = -(c->ell_px[0] - c->ell_cx) * uy + (c->ell_py[0] - c->ell_cy) * ux;
            x2 = (c->ell_px[1] - c->ell_cx) * ux + (c->ell_py[1] - c->ell_cy) * uy;
            y2 = -(c->ell_px[1] - c->ell_cx) * uy + (c->ell_py[1] - c->ell_cy) * ux;
            p = x1 * x1;
            q = y1 * y1;
            r2 = x2 * x2;
            s2 = y2 * y2;
            /* p*wA + q*wB = 1、r2*wA + s2*wB = 1（wA = 1/A^2、wB = 1/B^2） */
            den = p * s2 - q * r2;
            if (den == 0.0) {
                c->missed = 1;
                return 0;
            }
            wA = (s2 - q) / den;
            wB = (p - r2) / den;
            if (wA <= 0.0 || wB <= 0.0) {
                c->missed = 1;
                return 0;
            }
            A = 1.0 / sqrt(wA);
            B = 1.0 / sqrt(wB);
            long_a = A >= B ? A : B;
            short_b = A >= B ? B : A;
            tilt = A >= B ? th * 180.0 / 3.14159265358979323846 : th * 180.0 / 3.14159265358979323846 + 90.0;
            c->ell_a = long_a * jwc_zukei_scale(d);
            c->ell_b = short_b * jwc_zukei_scale(d);
            c->ell_mouse = 0;
            return ellipse_put(c, d, tilt);
        }
        if (c->ell == 3) {
            /* 長軸を押した線と平行に：傾きはその線の向き（0def:2828）。 */
            const long k = pick_line(d, w, sx, sy);

            if (k < 0) {
                c->missed = 1;
                return 0;
            }
            return ellipse_put(c, d, (double)ang16(d->lines[k].x0,
                                                   d->lines[k].y0,
                                                   d->lines[k].x1,
                                                   d->lines[k].y1)
                                     * 1.52587890625e-05);
        }
        if (c->ell == 4) {
            /* `0 度 ﾏｳｽ(L)`・`前回と同じ ﾏｳｽ(R)`。 */
            c->typing = 0;
            return ellipse_put(c, d, right ? c->ell_ang : 0.0);
        }
        return 0;
    }
    if (c->command == 10 && c->ld_ask) {
        c->ld_ask = 0;          /* 欄での押しは閉じるだけ（測定） */
        c->typing = 0;
        c->typed_n = 0;
        return 1;
    }
    if (c->command == 10 && (c->stage == 2 || c->stage == 3)) {
        /* 部分消去の始点・終点。点は線に下ろします：座標系は 1bb4:27ea と
         * 同じく cos=(float)(dx/L)・sin=(float)(dy/L)、原点は線の始点、
         * u = (float)((y-oy)*sin + (x-ox)*cos)、戻しは (float)(cos*u+ox)。
         * 二点の間を消し、元の線を抜いて**始点側・終点側の順に最後へ**
         * 足します。種類・ペン・レイヤはそのまま、rest[1]・rest[3] は 0
         * （測定：上の辺を (300,250) と (450,330) で切ると 161.973〜300 と
         * 450〜598 の 2 本、線 29・30、rest 00 00 00）。rest[2] は zero に
         * 揃えず **dot_mark の判定をそのまま残す**こと：切った残りが点扱い
         * になるほど短ければ（21f2:2750、src/jwc.c の dot_mark）bit 0x10 が
         * 立ち、jwc_add_line が内部で呼ぶ dot_mark がすでに正しく付けている
         * （測定：上の辺を (300,250) と (598,300) で切った残り、線 28 の
         * (161.973,139.943)-(162.000,139.943) は dx=0.027 で本物は rest[2]
         * に 0x10 が立つ。以前の実装は rest[1..3] を丸ごと 0 にしていて
         * ここを消していた）。**線切断（同じ所を再び押す）はまだ**。 */
        const long k = c->ld_line;
        float cs, sn, ox, oy, u, ue;
        double dx, dy, len;
        JwcLine l;

        if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
            c->missed = 1;
            return 0;
        }
        if (k < 0 || k >= d->n_lines) {
            c->stage = 0;
            c->pressed = 0;
            return 0;
        }
        l = d->lines[k];
        dx = (double)l.x1 - l.x0;
        dy = (double)l.y1 - l.y0;
        len = sqrt(dy * dy + dx * dx);
        if (len <= 0.0) {
            return 0;
        }
        cs = (float)(dx / len);
        sn = (float)(dy / len);
        ox = l.x0;
        oy = l.y0;
        u = (float)(((double)(float)y - oy) * sn + ((double)(float)x - ox) * cs);
        if (c->stage == 2) {
            c->ld_u0 = u;
            c->stage = 3;
            return 1;
        }
        ue = (float)(((double)l.y1 - oy) * sn + ((double)l.x1 - ox) * cs);
        {
            const float a = c->ld_u0 < u ? c->ld_u0 : u;
            const float b = c->ld_u0 < u ? u : c->ld_u0;

            if (a == b) {
                return 0;       /* 線切断：まだ */
            }
            c->ld_undo = l;
            c->ld_undo_on = 1;
            jwc_remove_line(d, k);
            if (a > 0.0f) {
                const float ax = (float)((double)cs * a + ox);
                const float ay = (float)((double)sn * a + oy);

                if (jwc_add_line(d, l.x0, l.y0, ax, ay, l.type, l.pen,
                                 l.layer)) {
                    d->lines[d->n_lines - 1].rest[1] = 0;
                    d->lines[d->n_lines - 1].rest[3] = 0;
                }
            }
            if (b < ue) {
                const float bx = (float)((double)cs * b + ox);
                const float by = (float)((double)sn * b + oy);

                if (jwc_add_line(d, bx, by, l.x1, l.y1, l.type, l.pen,
                                 l.layer)) {
                    d->lines[d->n_lines - 1].rest[1] = 0;
                    d->lines[d->n_lines - 1].rest[3] = 0;
                }
            }
        }
        c->pressed = 0;
        c->stage = 1;
        return 1;
    }
    if (c->command == 10) {
        /* 線消: the right button takes the whole line away.  (The left one
         * starts cutting a piece out of it, which is not done yet.) */
        /* The search runs for either button -- 線消 at (244,140) on SAMPLE6
         * writes the same "found nothing" line whichever one is pressed -- and
         * a line comes first whatever the distances say: on SAMPLE6 (283,236)
         * is right on arc 21 and 2.19 from a line, and (351,179) right on
         * arc 20 and 0.06 from one, and both times it is 線数 that falls. */
        long k = pick_line(d, w, sx, sy);
        long j = k < 0 ? jw_cmd_arc_at(d, w, sx, sy) : -1;

        if (k < 0 && j < 0) {
            c->missed = 1;      /* nothing within reach; the drawing stands */
            return 0;
        }
        c->missed = 0;
        if (!right) {
            /* 部分消去：線を左で押すと `線 部分消去の始点指示 … |①線切断寸法
             * (図寸 0.0 )|`（段 2）、始点のあと `部分消去 終点指示 …`（段 3）。
             * 円弧の部分消去はまだです。 */
            if (k < 0) {
                return 0;
            }
            c->ld_line = k;
            c->pressed = 1;
            c->stage = 2;
            return 1;
        }
        if (k >= 0) {
            c->rd_undo = d->lines[k];
            c->rd_undo_on = 1;      /* 右の消去も [ESC] で一本戻る（測定のみ：tmp の ld 系） */
            jwc_remove_line(d, k);
        } else {
            c->rd_undo_on = 0;
            jwc_remove_arc(d, j);
        }
        c->stage = 1;
        return 1;
    }
    if (c->command == 13 && c->text_ang_ask) {
        /* ③角度指定 の欄での押し：左は `0 度`、右は `前回と同じ`。どちらも
         * 基点にはならず、行は ①水平 のものへ（測定：text_c3 で押したあと
         * `AB` [Enter] は何も書かない）。 */
        if (!right) {
            c->text_ang = 0.0;
        }
        c->text_vert = 0;
        c->text_ang_ask = 0;
        c->typing = 0;
        c->typed_n = 0;
        c->typed[0] = 0;
        c->stage = 2;
        c->top_item = 1;
        return 1;
    }
    /* 文字 ⑤文書：左は ①ﾌｧｲﾙに書出 で `書出範囲 始点マウス指示 （文字）` の
     * 範囲へ（位置整理 と同じ道具）。右の ②読込 はまだ（読むファイルの画面
     * を移していない）。測定：func_all text_s0_c5。 */
    if (c->command == 13 && c->top_item == 5 && !c->tx_doc
        && !c->typing_text) {
        if (!right) {
            c->tx_doc = 1;
            c->pressed = 0;
            c->stage = 0;
            c->n_flip = 0;
        }
        return 1;
    }
    if (c->command == 13 && !c->tx_doc) {
        c->tx_plain = 0;
        /* 文字: one press takes the place the string starts at -- the base
         * point is 左下, the bottom left, so it is the near end of the
         * baseline -- and the top line turns into a field to type it in.
         * [Enter] writes the text.  RESUME.md 4.17.
         *
         * Measured: pressing (250,200) on SAMPLE0 and typing `ABC` leaves
         * a record whose baseline runs (129.000,263.000)-(137.721,263.000),
         * the string at the end of the pool, character type 3 and layer 0. */
        /* 欄が空のあいだの押しは欄を閉じるだけ：`基点指示(L)free(R)Read|
         * ①基点変|②行連続|③列連続|` の行（この命令で書いた字があれば
         * [ESC] 付き）へ戻り、次の押しでまた欄（測定：func_all text_plain
         * の (300,250)、text_s0_c4_v の (300,250)・(162,250)）。 */
        if (c->typing_text && c->typed_n == 0) {
            c->typing_text = 0;
            c->pressed = 0;
            c->text_rep = 0;    /* 連続書 もここで抜ける（text_s0_c1_v） */
            c->stage = 2;
            c->top_item = c->tx_count > 0 ? 0 : 1;
            c->top_right = 0;
            return 1;
        }
        /* 字を打ってある欄での押しは [Enter] と同じに書くだけ（次の欄は
         * 開かない。測定：func_all text_s1_c1 で `1` を打って (300,250)）。 */
        if (c->typing_text && c->typed_n > 0) {
            jw_cmd_key(c, d, 13);
            return 1;
        }
        /* (L)free (R)Read：右は点を読み、無ければ `読取可能データ無` で欄は
         * 開かない（測定：text_plain の (598,300) 右）。 */
        if (!take(c, d, w, sx, sy, right, &x, &y)) {
            c->missed = 1;
            return 1;
        }
        c->missed = 0;
        c->x0 = x;
        c->y0 = y;
        c->pressed = 1;
        c->stage = 1;
        c->typing_text = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        c->typed_at = 0;
        /* ①水平・②垂直 の升で出た行（src/item.h）はここで欄に替わる
         * （測定：text_c1 で押すと `文字列入力──10──…` の行）。 */
        c->top_item = 0;
        c->top_right = 0;
        text_box(c, d);
        return 1;
    }
    if (c->command == 14 && c->top_item == 6) {
        /* ⑥点: a press **reads** a point out of the drawing and leaves a
         * real point record there.  Measured on SAMPLE0 -- the two top
         * corners read and saved give
         *
         *     point (40.973,323.057) 00 01 40 1d
         *     point (477.000,323.057) 00 01 40 1d
         *
         * -- the write layer, the 寸法設定's 点のペン No. (the line says
         * 点(No.1), and SAMPLE3, whose panel says 2, says 点(No.2)), and two
         * bytes that were the same in every run.  A press on empty paper
         * leaves サーチ and 読取可能データ無, so it is a read even on the
         * left button.  点種変更 (the right button) is not measured. */
        JwcPoint p;

        /* 右の 点種変更 で点の無い所を押しても何も言わない（測定：dim_s0_c6 の 598 300 right）。 */
        if (right) {
            c->missed = 0;
            return 0;
        }
        if (!take_point(c, d, w, sx, sy, 1, &x, &y)) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        memset(&p, 0, sizeof p);
        p.x = (float)x;
        p.y = (float)y;
        p.layer = (unsigned char)(d->write_layer);
        p.rest[0] = p.layer;
        p.rest[1] = (unsigned char)(c->dim_pen_point ? c->dim_pen_point
                                                     : JW_DIM_PEN);
        p.rest[2] = 0x40;
        p.rest[3] = 0x1d;
        if (jwc_put_point(d, &p)) {
            c->dim_did = 1;
        }
        return 1;
    }
    if (c->command == 14 && c->top_item == 5) {
        /* ⑤寸法値: two reads and **the value alone** -- no lines.
         * Measured on SAMPLE0: the top edge's two corners give
         *
         *     text (255.716,323.929)-(262.257,323.929) 02 00 10 40 `250`
         *
         * and the left edge's, read top to bottom,
         *
         *     text (41.845,186.799)-(41.845,180.258)  02 00 10 40 `160`
         *
         * -- the baseline runs **along the two points, in the order they
         * were read**, centred between them and pushed 寸法線と値の離れ
         * to the left of that direction (the horizontal pair goes up,
         * the downward pair goes right: both are the direction turned a
         * quarter turn anticlockwise). */
        if (!take_point(c, d, w, sx, sy, 1, &x, &y)) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        c->dim_vx = x;
        c->dim_vy = y;
        c->dim_only = 1;
        c->dim_texts = d->n_texts;
        c->top_item = 0;    /* from here the road is 寸法値終点指示 */
        c->stage = 4;
        return 1;
    }
    /* 寸法 ⑤③円周：押した所に円が無ければ、線なら `線データです`、何も無ければ `読取可能データ無`。 */
    if (c->command == 14 && c->dim5c) {
        if (jw_cmd_arc_at(d, w, sx, sy) >= 0) {
            c->dim5m = 0;
        } else if (jw_cmd_line_at(d, w, sx, sy) >= 0) {
            c->dim5m = 1;
        } else {
            c->dim5m = 2;
        }
        return 0;
    }
    /* ⑨設定の盤が出ているあいだ、盤の外の押しは何も言わない（測定：dim_s0_c9 の 598 300 right）。 */
    if (c->command == 14 && c->top_item == 9) {
        c->missed = 0;
        return 0;
    }
    if (c->command == 14 && c->top_item == 7) {
        /* ⑦矢印: point at a line and the original puts an arrowhead on
         * **the end nearer the press**, two lines of `01 01 00 f5 00 20`.
         * Measured on SAMPLE0's top edge (40.973,323.057)-(477,323.057):
         *
         *     press (300,140)  ->  (40.973,323.057)-(46.027,324.411)
         *                          (40.973,323.057)-(46.027,321.703)
         *     press (550,140)  ->  (477,323.057)-(471.946,321.703)
         *                          (477,323.057)-(471.946,324.411)
         *
         * -- so the first leg is the direction towards the other end
         * turned **+矢印角度** and the second turned -矢印角度, both
         * 矢印長さ long (6mm gives 10.108 and 2.709 instead of 5.054 and
         * 1.354, so the panel's two numbers are the ones).  What a press
         * on an **arc** does is not measured. */
        /* 右押しでは付けない（`読取可能データ無`。測定：func_all dim_s0_c7
         * で右の枠を右で押しても線は増えない）。→ 右でも付く（右の枠の下端に矢印が出る）。 */
        const long k = pick_line(d, w, sx, sy);
        const double alen = (c->dim_arrow_mm > 0.0 ? c->dim_arrow_mm : 3.0)
                          * d->unit_mm;
        const double rad = c->dim_angle_deg * 3.14159265358979323846
                         / 180.0;
        double ex, ey, ox, oy, dx, dy, far;
        int i;

        if (k < 0) {
            c->missed = 1;
            if (c->dim7_hold == 1) {
                c->dim7_hold = 2;
            } else if (c->dim7_hold == 2) {
                c->dim7_hold = 0;
                c->dim7_n = 0;
                c->dim_lines0 = d->n_lines; /* 数え箱が追いつく */
                return 1;
            }
            return 0;
        }
        c->missed = 0;
        jw_cmd_at(w, sx, sy, &x, &y);
        {
            const JwcLine *l = &d->lines[k];
            const double d0 = (l->x0 - x) * (l->x0 - x)
                            + (l->y0 - y) * (l->y0 - y);
            const double d1 = (l->x1 - x) * (l->x1 - x)
                            + (l->y1 - y) * (l->y1 - y);

            ex = d0 <= d1 ? l->x0 : l->x1;
            ey = d0 <= d1 ? l->y0 : l->y1;
            ox = d0 <= d1 ? l->x1 : l->x0;
            oy = d0 <= d1 ? l->y1 : l->y0;
        }
        dx = ox - ex;
        dy = oy - ey;
        far = sqrt(dx * dx + dy * dy);
        if (far <= 0.0) {
            return 0;
        }
        dx /= far;
        dy /= far;
        for (i = 0; i < 2; i++) {
            const double t = i ? -rad : rad;
            const double tx = dx * cos(t) - dy * sin(t);
            const double ty = dx * sin(t) + dy * cos(t);

            if (jwc_add_line(d, (float)ex, (float)ey,
                             (float)(ex + alen * tx),
                             (float)(ey + alen * ty),
                             (unsigned char)d->line_type,
                             (unsigned char)(c->dim_pen ? c->dim_pen
                                                        : JW_DIM_PEN),
                             (unsigned char)(d->write_layer))) {
                d->lines[d->n_lines - 1].rest[1] = 0xf5;
                d->lines[d->n_lines - 1].rest[3] = 0x20;
                c->dim_did = 1;
                c->dim7_n++;
                c->dim7_hold = 1;
            }
        }
        return 1;
    }
    /* 寸法's guides are up from the 寸法線's press until the dimension is
     * written (see jw_read_guides). */
    if (c->command == 14 && (c->stage == 3 || c->stage == 4 || c->stage == 5)
        && !c->dim_val) {
        jw_read_guides(2, c->dim_by, c->dim_y, c->dim_ux, c->dim_uy);
    } else {
        jw_read_guides(0, 0.0, 0.0, 1.0, 0.0);
    }
    if (c->command == 14) {
        /* 寸法: the item's own line is the three directions and the first
         * press in the drawing picks ①横方向, the left button's one.  Then
         * 引出し線の始点, 寸法線の位置, 寸法値の始点, 寸法値の終点.
         *
         * **The last two are reads**: the line has no `(L)free` on it and a
         * press on empty paper leaves the original saying サーチ and
         * 読取可能データ無.  JW_MNU.DOC has the whole tree. */
        if (c->stage == 0) {
            /* 左は ①横方向、**右は ②縦方向**。本物は項目行の 1bb4:2cb4 が
             * 返したボタン [bp-0xa0] が 1 なら項目 1、2 なら項目 2 にします
             * （ovl27 3ab8:206c、リンク時 0x2cdcb〜0x2cde5）。 */
            c->dim_vert = right != 0;
            c->dim_ux = right ? 0.0 : 1.0;
            c->dim_uy = right ? 1.0 : 0.0;
            c->pressed = 1;
            c->stage = 1;
            return 1;
        }
        if (c->stage == 1) {
            if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->dim_bx = x;
            c->dim_by = -x * c->dim_uy + y * c->dim_ux;
            c->stage = 2;
            return 1;
        }
        if (c->stage == 2) {
            if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->dim_y = -x * c->dim_uy + y * c->dim_ux;
            c->dim_ya = x * c->dim_ux + y * c->dim_uy;
            c->dim_texts = d->n_texts;
            c->stage = 3;
            return 1;
        }
        if (c->dim_val == 1 && c->stage == 7) {
            /* ⑧値変: the press takes a **dimension value** -- a text the
             * 寸法 command wrote, which is what the 0x40 in its last byte
             * says.  SAMPLE0's own dimension texts have 0x00 there and
             * the original will not pick them up. */
            const long k = jw_cmd_text_at(d, w, sx, sy);

            if (k < 0 || !(d->texts[k].rest[3] & 0x40)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->dim_val = 2;
            c->dim_val_k = k;
            c->stage = 8;
            /* **The field starts empty.**  What it shows is the value
             * that was pressed, the way 複線 shows `[  1000.000mm]`, and
             * the green cursor sits on the *first* cell -- so the first
             * key typed takes its place rather than going after it.
             * [Enter] with nothing typed leaves the value alone. */
            c->typing = 1;
            c->typed[0] = 0;
            c->typed_n = 0;
            /* `dim_val_buf` is the live copy [BS] and digits edit in place
             * (measured: escaudit6, see cmd.h). */
            c->dim_val_buf[0] = 0;
            if (d->texts[k].text) {
                strncpy(c->dim_val_buf, d->texts[k].text,
                        sizeof c->dim_val_buf - 1);
                c->dim_val_buf[sizeof c->dim_val_buf - 1] = 0;
            }
            c->dim_val_pos = 0;
            c->dim_val_dirty = 0;
            return 1;
        }
        if (c->dim_lot && c->stage >= 21 && c->stage <= 24) {
            /* ⑤一括: 始線・終線、そのあとは 追加線･除外線。押した線は
             * 赤（色 2）になります。 */
            const long k = pick_line(d, w, sx, sy);

            if (c->stage == 24) {
                /* 一本入れたあと、図面を押すと 始線 から始め直します
                 * （測定したのは空押しだけです）。 */
                c->dim_lot_n = 0;
                c->stage = 21;
                return 1;
            }
            if (k < 0) {
                c->missed = 1;
                return 1;
            }
            c->missed = 0;
            if (c->stage == 21 || c->stage == 22) {
                if (c->stage == 21) {
                    c->dim_lot_sx = sx;
                    c->dim_lot_sy = sy;
                }
                if (c->dim_lot_n < (int)(sizeof c->dim_lot_k
                                         / sizeof c->dim_lot_k[0])) {
                    c->dim_lot_k[c->dim_lot_n++] = k;
                }
                c->stage++;
                return 1;
            }
            /* 追加線･除外線: もう入っていれば外し、なければ足します。 */
            {
                int i;

                for (i = 0; i < c->dim_lot_n; i++) {
                    if (c->dim_lot_k[i] == k) {
                        for (; i + 1 < c->dim_lot_n; i++) {
                            c->dim_lot_k[i] = c->dim_lot_k[i + 1];
                        }
                        c->dim_lot_n--;
                        return 1;
                    }
                }
                if (c->dim_lot_n < (int)(sizeof c->dim_lot_k
                                         / sizeof c->dim_lot_k[0])) {
                    c->dim_lot_k[c->dim_lot_n++] = k;
                }
            }
            return 1;
        }
        if (c->dim_arc && c->stage >= 11 && c->stage <= 15) {
            /* ②円周 の五つの押し。段 11 は円、12 と 13 は円周の上の
             * 始点と終点（角度だけ使います）、14 は引出し線の始点、
             * 15 は寸法線の位置——そこで一本入ります。 */
            double x, y;

            if (c->dim_arc == 2 && c->dim_arc_two
                && (c->stage == 11 || c->stage == 12)) {
                /* ③【２線間】: 線を二本。角度は **その線の向き** で、
                 * 押した側に向けます（測定：45 度でない線を線から 6 画素
                 * 外して押しても、弧の始まりは線の向き 153.4350 度の
                 * ままで、押した点への向き 156.83 度ではありません）。
                 * 弧の中心は二本の交わるところ。 */
                const long k = pick_line(d, w, sx, sy);

                if (k < 0) {
                    c->missed = 1;
                    return 0;
                }
                jw_cmd_at(w, sx, sy, &x, &y);
                c->missed = 0;
                if (c->stage == 11) {
                    c->dim_arc_l0 = k;
                    c->dim_arc_px = x;
                    c->dim_arc_py = y;
                    c->dim_arc_val[0] = 0;
                    c->dim_did = 0;
                    c->stage = 12;
                    return 1;
                }
                {
                    const JwcLine *a = &d->lines[c->dim_arc_l0];
                    const JwcLine *b = &d->lines[k];
                    const double ax = a->x1 - a->x0, ay = a->y1 - a->y0;
                    const double bx = b->x1 - b->x0, by = b->y1 - b->y0;
                    const double det = ax * by - ay * bx;
                    double t, cx, cy;

                    if (det > -1e-9 && det < 1e-9) {
                        return 0;       /* 平行。測っていません */
                    }
                    t = ((b->x0 - a->x0) * by - (b->y0 - a->y0) * bx) / det;
                    cx = a->x0 + ax * t;
                    cy = a->y0 + ay * t;
                    c->dim_arc_cx = cx;
                    c->dim_arc_cy = cy;
                    c->dim_arc_r = 0.0;
                    c->dim_arc_a0 = line_side(ax, ay, c->dim_arc_px - cx,
                                              c->dim_arc_py - cy);
                    c->dim_arc_a1 = line_side(bx, by, x - cx, y - cy);
                    c->stage = 15;
                    return 1;
                }
            }
            if (c->stage == 11 && c->dim_arc == 2) {
                /* ③角度 の 角度原点マウス指示: 円ではなく点です。 */
                if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                c->dim_arc_miss = 0;
                c->dim_arc_cx = x;
                c->dim_arc_cy = y;
                c->dim_arc_r = 0.0;
                c->dim_arc_val[0] = 0;
                c->dim_did = 0;
                c->stage = 12;
                return 1;
            }
            if (c->stage == 11) {
                /* **線が先です。** 円の上でも、そこに線があれば
                 * 線を拾って撥ねます（測定：一本入れたあと、引出し線
                 * が乗っている 0 度 (400,200) と 90 度 (300,100) では
                 * 原作は動かず、引出し線のない 180 度 (200,200) と
                 * 270 度 (300,300) では円を選びました）。これは線消
                 * などと同じ拾い方です。 */
                const long kl = pick_line(d, w, sx, sy);
                const long k = kl >= 0 ? -1
                             : jw_cmd_arc_at(d, w, sx, sy);

                if (k < 0) {
                    /* **円でないものを拾うと言葉が変わります。** 原作は
                     * SAMPLE0 の枠の上 (560,420) で `線データです` を桁 20
                     * に書きました——①円径 が同じ押しで `読取可能データ無`
                     * と言うのとは別です（どちらも測定）。 */
                    c->dim_arc_miss = kl >= 0;
                    /* 外した押しでも**数え箱は追いつきます**（測定：
                     * 一本入れたあと引出し線の上を押すと、原作の
                     * 線数 が引出し線の 2 本を数えた数に）。 */
                    c->dim_lines0 = d ? d->n_lines : 0;
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                c->dim_arc_miss = 0;
                c->dim_arc_cx = d->arcs[k].cx;
                c->dim_arc_cy = d->arcs[k].cy;
                c->dim_arc_r = d->arcs[k].r;
                c->dim_arc_val[0] = 0;
                c->dim_did = 0;
                c->stage = 12;
                return 1;
            }
            if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            if (c->stage == 12 || c->stage == 13) {
                const double dx = x - c->dim_arc_cx;
                const double dy = y - c->dim_arc_cy;
                double deg = atan2(dy, dx) * 180.0
                           / 3.14159265358979323846;

                while (deg < 0.0) {
                    deg += 360.0;
                }
                if (c->stage == 12) {
                    c->dim_arc_a0 = deg;
                } else {
                    c->dim_arc_a1 = deg;
                }
                c->stage++;
                return 1;
            }
            {
                const double dx = x - c->dim_arc_cx;
                const double dy = y - c->dim_arc_cy;
                const double away = sqrt(dx * dx + dy * dy);

                if (c->stage == 14) {
                    c->dim_arc_r0 = away;
                    c->stage = 15;
                    return 1;
                }
                c->dim_seen_lines = d->n_lines;
                c->dim_seen_arcs = d->n_arcs;
                c->dim_seen_texts = d->n_texts;
                c->dim_seen_points = d->n_points;
                dimension_arc(c, d, away);
                c->dim_did = 1;
                c->dim_texts = d->n_texts;
                c->stage = 11;
                return 1;
            }
        }
        if (c->dim_ck && c->stage == 9) {
            /* ④円･角 ①円径: the press takes a circle and the dimension is
             * in at once -- the left button the radius, the right the
             * diameter.  The line stays up, so the next circle gets one
             * too (measured: it writes the same line again). */
            const long k = jw_cmd_arc_at(d, w, sx, sy);

            if (k < 0) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->dim_seen_lines = d->n_lines;
            c->dim_seen_arcs = d->n_arcs;
            c->dim_seen_texts = d->n_texts;
                c->dim_seen_points = d->n_points;
            dimension_circle(c, d, k, right);
            c->dim_did = 1;
            c->dim_texts = d->n_texts;
            return 1;
        }
        if (c->dim_circle && c->stage == 6) {
            /* ②半径・③直径: the press takes a circle, and the dimension
             * is a plain horizontal one whose length is the radius (or
             * the diameter) starting at -- or centred on -- the point the
             * 寸法線 was pressed at.  Measured on SAMPLE0 with a circle of
             * 100 units and the 寸法線 at (300,110) = 179:
             *
             *     ②半径 (179,353)-(279,353) 01 01 00 a2 00 20  `R57.3`
             *     ③直径  (79,353)-(279,353) 01 01 00 a2 00 20  `φ114.7`
             */
            const long k = jw_cmd_arc_at(d, w, sx, sy);

            if (k < 0) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->n0_lines = d->n_lines;
            c->n0_arcs = d->n_arcs;
            c->n0_texts = d->n_texts;
            c->dim_x0 = c->dim_circle == 1 ? c->dim_ya
                                           : c->dim_ya - d->arcs[k].r;
            dimension(c, d, c->dim_ya + d->arcs[k].r);
            c->dim_circle = 0;
            c->dim_texts = d->n_texts;
            /* and the line goes back to the one it came from (段 3), not
             * to 段 5's 連続入力 -- measured */
            c->stage = 3;
            return 1;
        }
        if (c->dim_prog && (c->stage == 3 || c->stage == 5)) {
            /* the one 始点 every later reading is measured from */
            if (!take_point(c, d, w, sx, sy, 1, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->dim_a0 = x * c->dim_ux + y * c->dim_uy;
            c->dim_prog_n = 0;
            c->dim_texts = d->n_texts;
            c->stage = 4;
            return 1;
        }
        if (c->dim_prog && c->stage == 4) {
            if (!take_point(c, d, w, sx, sy, 1, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->n0_lines = d->n_lines;
            c->n0_arcs = d->n_arcs;
            c->n0_texts = d->n_texts;
            dimension_prog(c, d, x * c->dim_ux + y * c->dim_uy);
            c->dim_texts = d->n_texts;
            return 1;
        }
        if (c->stage == 5 && right && !c->dim_only) {
            /* 連続入力の終点 ﾏｳｽ(R): carry on from the last end. */
            if (!take_point(c, d, w, sx, sy, 1, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->n0_lines = d->n_lines;
            c->n0_arcs = d->n_arcs;
            c->n0_texts = d->n_texts;
            c->dim_undo = 1;
            c->dim_ul = d->n_lines;
            c->dim_up = d->n_points;
            c->dim_ut = d->n_texts;
            dimension_more(c, d, x * c->dim_ux + y * c->dim_uy);
            c->dim_texts = d->n_texts;
            c->stage = 5;
            return 1;
        }
        if (c->stage == 3 || c->stage == 5) {
            if (!take_point(c, d, w, sx, sy, 1, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->dim_x0 = x * c->dim_ux + y * c->dim_uy;
            c->stage = 4;
            return 1;
        }
        if (c->stage == 4 && c->dim_only) {
            char buf[32];
            double dx, dy, far, len, ux, uy, mx, my, gap;

            if (!take_point(c, d, w, sx, sy, 1, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            dx = x - c->dim_vx;
            dy = y - c->dim_vy;
            far = sqrt(dx * dx + dy * dy);
            if (far <= 0.0) {
                return 0;
            }
            ux = dx / far;
            uy = dy / far;
            mx = (c->dim_vx + x) / 2.0;
            my = (c->dim_vy + y) / 2.0;
            gap = (c->dim_gap_mm > 0.0 ? c->dim_gap_mm : 0.5) * d->unit_mm;
            mx += -uy * gap;
            my += ux * gap;
            c->dim_value = far * jwc_zukei_scale(d);
            jwc_dim_text(buf, sizeof buf, c->dim_value, c->dim_unit,
                         c->dim_dec, c->dim_comma_on, c->dim_zero_on);
            len = jwc_text_length(d, buf, d->dim_size);
            c->n0_lines = d->n_lines;
            c->n0_arcs = d->n_arcs;
            c->n0_texts = d->n_texts;
            if (jwc_add_text(d,
                             (float)(mx - ux * len / 2.0),
                             (float)(my - uy * len / 2.0),
                             (float)(mx + ux * len / 2.0),
                             (float)(my + uy * len / 2.0),
                             buf, (unsigned char)d->dim_size,
                             (unsigned char)(d->write_layer))) {
                d->texts[d->n_texts - 1].rest[2] = 0x10;
                d->texts[d->n_texts - 1].rest[3] = 0x40;
            }
            c->dim_texts = d->n_texts;
            c->stage = 5;
            return 1;
        }
        if (c->stage == 5 && c->dim_only) {
            /* and round again for the next value */
            if (!take_point(c, d, w, sx, sy, 1, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->dim_vx = x;
            c->dim_vy = y;
            c->stage = 4;
            return 1;
        }
        if (c->stage == 4) {
            if (!take_point(c, d, w, sx, sy, 1, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->n0_lines = d->n_lines;
            c->n0_arcs = d->n_arcs;
            c->n0_texts = d->n_texts;
            c->dim_undo = 1;
            c->dim_ul = d->n_lines;
            c->dim_up = d->n_points;
            c->dim_ut = d->n_texts;
            dimension(c, d, x * c->dim_ux + y * c->dim_uy);
            c->dim_texts = d->n_texts;      /* the band counts the new one */
            c->stage = 5;
            return 1;
        }
        return 0;
    }
    if (JW_MOVE_CMD(c->command) && c->mirror == 1) {
        /* ⑤反転 is waiting for the line to turn the range over in.  A press
         * that finds none leaves everything as it is. */
        const long m = pick_line(d, w, sx, sy);

        if (m < 0) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        mirror_range(c, d, m);
        c->mirror = 2;
        c->stage = 12;
        return 1;
    }
    if (c->command == 23 && c->spl && c->stage >= 30 && c->stage <= 33) {
        if (c->spl_n >= 50) {
            return 0;
        }
        if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
            c->missed = 1;
            c->spl_miss = 1;
            return 0;
        }
        c->missed = 0;
        if (c->spl_miss) {
            c->spl_vis = c->spl_n > 0 ? c->spl_n - 1 : 0;   /* 外れのあとの次の押しで、それまでの折れ線は消える */
            c->spl_miss = 0;
        }
        c->spl_x[c->spl_n] = x;
        c->spl_y[c->spl_n] = y;
        c->spl_n++;
        c->stage = 30 + (c->spl_n > 3 ? 3 : c->spl_n);
        return 1;
    }
    if (c->command == 23 && c->chain && c->stage == 54) {
        /* `解除 ﾏｳｽ(L) 前回と同じ ﾏｳｽ(R)`。 */
        if (!right) {
            c->ch_r_on = 0;     /* 解除 */
        } else {
            c->ch_r_on = 1;     /* 前回と同じ */
        }
        c->typing = 0;
        c->typed[0] = 0;
        c->typed_n = 0;
        c->stage = 53;
        return 1;
    }
    if (c->command == 23 && c->hand
        && (c->stage == 60 || c->stage == 61)) {
        /* ⑤手書線。始点のあとは矢が動くたびに引かれ、左の押しで
         * 一筆が終わります。
         *
         * **右の読取は、その一筆で引いた線を見ません。** 測定：始点を
         * (200,200) に取って (300,260) へ動かすと一本引かれますが、
         * そこを右で押すと原作は `読取可能データ無` と出し、行は
         * 終点指示 のままでした——引いたばかりの端点が足元にあるのに
         * 読めていません。 */
        {
            const long all = d ? d->n_lines : 0;
            int got;

            if (d && right && c->stage == 61) {
                d->n_lines = c->hand_from;
            }
            got = take_point(c, d, w, sx, sy, right, &x, &y);
            if (d) {
                d->n_lines = all;
            }
            if (!got) {
                c->missed = 1;
                return 0;
            }
        }
        c->missed = 0;
        if (c->stage == 60) {
            c->hand_x = x;
            c->hand_y = y;
            c->hand_sx = sx;
            c->hand_sy = sy;
            c->hand_from = d ? d->n_lines : 0;
            c->hand_n = 0;
            c->stage = 61;
            return 1;
        }
        if (x == c->hand_x && y == c->hand_y) {
            c->stage = 60;      /* 矢が動いたときに引き終えています */
            return 1;
        }
        if (jwc_add_line(d, (float)c->hand_x, (float)c->hand_y,
                         (float)x, (float)y,
                         (unsigned char)d->line_type,
                         (unsigned char)d->pen,
                         (unsigned char)d->write_layer)) {
            d->lines[d->n_lines - 1].rest[1] = 0xf5;
            d->lines[d->n_lines - 1].rest[2] = 0xc0;
            c->hand_did = 1;
            if (c->hand_n < 256) {
                c->hand_px[c->hand_n] = c->hand_x;
                c->hand_py[c->hand_n] = c->hand_y;
                c->hand_psx[c->hand_n] = c->hand_sx;
                c->hand_psy[c->hand_n] = c->hand_sy;
                c->hand_n++;
            }
        }
        c->hand_x = x;
        c->hand_y = y;
        c->hand_sx = sx;
        c->hand_sy = sy;
        c->stage = 60;
        return 1;
    }
    if (c->command == 23 && c->chain && c->stage == 55) {
        /* 【接する弧･線 指定】——押したところの線か弧を探します。 */
        double px, py, ux, uy, nn;

        if (!search(c, d, w, sx, sy)) {
            c->missed = 1;
            return 1;
        }
        c->missed = 0;
        jw_cmd_at(w, sx, sy, &x, &y);
        if (c->snap_kind == JW_ON_LINE) {
            const JwcLine *l = &d->lines[c->snap_at];
            const double d0 = (x - l->x0) * (x - l->x0)
                            + (y - l->y0) * (y - l->y0);
            const double d1 = (x - l->x1) * (x - l->x1)
                            + (y - l->y1) * (y - l->y1);

            /* **進む向きは線の外へ**です（測定：端点 (40.973,…) を
             * 選ぶと記録が 90..40.37、反対の端点だと 148.13..90 で、
             * どちらも線の外を向いたときの向きでした）。 */
            if (d0 <= d1) {
                px = l->x0;
                py = l->y0;
                ux = l->x0 - l->x1;
                uy = l->y0 - l->y1;
            } else {
                px = l->x1;
                py = l->y1;
                ux = l->x1 - l->x0;
                uy = l->y1 - l->y0;
            }
            nn = sqrt(ux * ux + uy * uy);
            if (nn <= 0.0) {
                return 1;
            }
            ux /= nn;
            uy /= nn;
            c->ch_px = px;
            c->ch_py = py;
            c->ch_tx = ux;
            c->ch_ty = uy;
            /* まっすぐなので中心は遠くに置きます（④直線 と同じ）。 */
            c->ch_cx = px - uy * 1e6;
            c->ch_cy = py + ux * 1e6;
        } else {
            const JwcArc *a = &d->arcs[c->snap_at];
            const double d2r = 3.14159265358979323846 / 180.0;
            const double sa = a->start / 65536.0 * d2r;
            const double ea = a->end / 65536.0 * d2r;
            const double ax = a->cx + a->r * cos(sa);
            const double ay = a->cy + a->r * sin(sa);
            const double bx = a->cx + a->r * cos(ea);
            const double by = a->cy + a->r * sin(ea);
            const double d0 = (x - ax) * (x - ax) + (y - ay) * (y - ay);
            const double d1 = (x - bx) * (x - bx) + (y - by) * (y - by);
            double vx, vy;

            if (d0 <= d1) {
                px = ax;
                py = ay;
            } else {
                px = bx;
                py = by;
            }
            c->ch_px = px;
            c->ch_py = py;
            c->ch_cx = a->cx;
            c->ch_cy = a->cy;
            /* 端での進む向きは、弧の内側へ（反時計回りは z x (P-C)）。 */
            vx = -(py - a->cy);
            vy = px - a->cx;
            if (d0 <= d1) {
                vx = -vx;      /* 弧の外へ */
                vy = -vy;
            }
            nn = sqrt(vx * vx + vy * vy);
            if (nn <= 0.0) {
                return 1;
            }
            c->ch_tx = vx / nn;
            c->ch_ty = vy / nn;
        }
        c->stage = 53;
        return 1;
    }
    if (c->command == 23 && c->chain && c->stage >= 50 && c->stage <= 53) {
        if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        if (c->stage == 50) {
            c->ch_ax = x;
            c->ch_ay = y;
            c->stage = 51;
            return 1;
        }
        if (c->stage == 51) {
            c->ch_mx = x;
            c->ch_my = y;
            c->stage = 52;
            return 1;
        }
        if (c->stage == 52) {
            /* 一本目を足す前の状態（線・弧の数）も控える。[ESC] がここまで
             * 戻ってきたとき（下の ESC 節、ch_n が 0 まで減ったとき）に
             * 一本目も取り消せるようにするため（測定：func_all
             * curve_s1_c6 の末尾、2 回目の [ESC] で一本目の弧も消える）。
             * px/py/cx/cy/tx/ty は使わない（戻った先は「何も持っていない」
             * で、resume する値が無いので ESC 節側で c->chain ごと抜ける）。 */
            if (c->ch_n < 128) {
                c->ch_undo[c->ch_n].nl = d->n_lines;
                c->ch_undo[c->ch_n].na = d->n_arcs;
                c->ch_n++;
            }
            chain_first(c, d, x, y);
            c->stage = 53;
            return 1;
        }
        if (c->ch_n < 128) {
            c->ch_undo[c->ch_n].px = c->ch_px;
            c->ch_undo[c->ch_n].py = c->ch_py;
            c->ch_undo[c->ch_n].cx = c->ch_cx;
            c->ch_undo[c->ch_n].cy = c->ch_cy;
            c->ch_undo[c->ch_n].tx = c->ch_tx;
            c->ch_undo[c->ch_n].ty = c->ch_ty;
            c->ch_undo[c->ch_n].nl = d->n_lines;
            c->ch_undo[c->ch_n].na = d->n_arcs;
            c->ch_n++;
        }
        chain_arc(c, d, x, y);
        return 1;
    }
    if (c->command == 23 && c->sine == 3 && c->stage >= 40
        && c->stage <= 45) {
        if (c->stage == 40) {
            const long k = pick_line(d, w, sx, sy);
            const JwcLine *l;
            double ex, ey, ll;

            if (k < 0) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            l = &d->lines[k];
            ex = l->x1 - l->x0;
            ey = l->y1 - l->y0;
            ll = sqrt(ex * ex + ey * ey);
            if (ll <= 0.0) {
                return 0;
            }
            c->sine_ux = ex / ll;
            c->sine_uy = ey / ll;
            c->stage = 41;
            return 1;
        }
        if (c->stage == 45) {
            if (!right) {
                return 0;
            }
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            sine_draw(c, d);
            c->stage = 40;
            return 1;
        }
        if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        if (c->stage == 41) {
            c->sine_ox = x;
            c->sine_oy = y;
            c->stage = 42;
            return 1;
        }
        if (c->stage == 42) {
            /* 通過点。基準線の枠で `(px, py)` に直して `a = py / px^2`。
             * **軸の上（py が 0）だと決まらないので訊き直します**
             * （測定：行がもう一度 通過点 に戻りました）。 */
            const double px2 = (x - c->sine_ox) * c->sine_ux
                             + (y - c->sine_oy) * c->sine_uy;
            const double py2 = (x - c->sine_ox) * -c->sine_uy
                             + (y - c->sine_oy) * c->sine_ux;

            if (px2 > -1e-9 && px2 < 1e-9) {
                return 1;
            }
            if (py2 > -1e-9 && py2 < 1e-9) {
                return 1;
            }
            c->sine_qa = py2 / (px2 * px2);
            c->stage = 43;
            return 1;
        }
        if (c->stage == 43) {
            c->sine_ax = x;
            c->sine_ay = y;
            c->stage = 44;
            return 1;
        }
        c->sine_bx = x;
        c->sine_by = y;
        c->typing = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        c->stage = 45;
        return 1;
    }
    if (c->command == 23 && c->sine == 2 && c->stage == 20) {
        /* ⑧解除: 押した線の属する連なりの印（`rest[2]` の 0x40/0x80/0xc0）を
         * 全部 0 にして、**押した一本だけ 0x01** にします（測定：ｻｲﾝ曲線を
         * 引いてから一本目を押すと `01 00 00 00`、三本目を押すと
         * `00 00 00 01` の並びになりました）。連なりはファイルの中で
         * 0x40 から 0xc0 までひと続きです。 */
        const long k = pick_line(d, w, sx, sy);
        long i;

        if (k < 0) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        {
            const unsigned char m = d->lines[k].rest[2];

            if (m != 0x40 && m != 0x80 && m != 0xc0) {
                return 0;
            }
        }
        for (i = k; i >= 0; i--) {
            const unsigned char m = d->lines[i].rest[2];

            if (m != 0x40 && m != 0x80 && m != 0xc0) {
                break;
            }
            d->lines[i].rest[2] = 0x00;
            if (m == 0x40) {
                break;
            }
        }
        for (i = k + 1; i < d->n_lines; i++) {
            const unsigned char m = d->lines[i].rest[2];

            if (m != 0x40 && m != 0x80 && m != 0xc0) {
                break;
            }
            d->lines[i].rest[2] = 0x00;
            if (m == 0xc0) {
                break;
            }
        }
        d->lines[k].rest[2] = 0x01;
        c->sine_did = 1;        /* ほどいたあとは桁 1 に [ESC] */
        return 1;
    }
    if (c->command == 23 && c->sine) {
        if (c->stage == 10) {
            const long k = pick_line(d, w, sx, sy);
            const JwcLine *l;
            double ex, ey, ll;

            if (k < 0) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            l = &d->lines[k];
            ex = l->x1 - l->x0;
            ey = l->y1 - l->y0;
            ll = sqrt(ex * ex + ey * ey);
            if (ll <= 0.0) {
                return 0;
            }
            c->sine_ux = ex / ll;
            c->sine_uy = ey / ll;
            c->stage = 11;
            return 1;
        }
        if (c->stage == 11 || c->stage == 14 || c->stage == 15) {
            if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            if (c->stage == 11) {
                c->sine_ox = x;
                c->sine_oy = y;
                c->typing = 1;
                c->typed[0] = 0;
                c->typed_n = 0;
                c->stage = 12;
            } else if (c->stage == 14) {
                c->sine_ax = x;
                c->sine_ay = y;
                c->stage = 15;
            } else {
                c->sine_bx = x;
                c->sine_by = y;
                c->typing = 1;
                c->typed[0] = 0;
                c->typed_n = 0;
                c->stage = 16;
            }
            return 1;
        }
        if (c->stage == 12 || c->stage == 13 || c->stage == 16) {
            /* 前回と同じ ﾏｳｽ(R)。 */
            if (!right) {
                return 0;
            }
            c->typed[0] = 0;
            c->typed_n = 0;
            if (c->stage == 12) {
                c->stage = 13;
            } else if (c->stage == 13) {
                c->typing = 0;
                c->stage = 14;
            } else {
                c->typing = 0;
                sine_draw(c, d);
                c->stage = 10;
            }
            return 1;
        }
        return 0;
    }
    if (c->command == 26) {
        c->tan_noarc = d && d->n_arcs == 0;
        /* 円線接: the item's own line offers ①接 線 with the left button and
         * ②接円 with the right, and the first press in the drawing is what
         * chooses -- it is taken for that and nothing else.  Then ③指定点 off
         * the top line, a point, and a circle. */
        /* **③接円（３条件）は tan_on を立てません。** ここを
         * 素通りさせないと、その道の押しが ①接線 の一押し目に
         * 化けます（測定：第２の点 を押したら行が 接線 のものに
         * なって 1886 画素ずれました）。 */
        if (!c->tan_on && !c->tan_tri) {
            if (right) {
                /* 最初の行の右押しは ②接円(半径と2条件) の行へ（測定のみ・decomp 未確認：tmp の ec2） */
                if (c->stage == 0 && !c->pressed) {
                    jw_cmd_top(c, d, 2, 0);
                    return 1;
                }
                return 0;       /* ②接円 is not done */
            }
            c->tan_on = 1;
            tan_start(c, d);
            c->pressed = 1;
            c->stage = 1;
            return 1;
        }
        /* ④角度指定 の角度の欄：図面の押しは 左 = `0 度`、右 = `前回と同じ`（測定：tangent_s1_c4）。 */
        if (c->tan_on && c->stage == 12) {
            c->tan_deg = right ? c->tan_prev : 0.0;
            if (!right) {
                c->tan_prev = 0.0;
            }
            c->typing = 0;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 13;
            return 1;
        }
        if ((c->tan_circ == 3 && c->stage >= 36 && c->stage <= 38)
            || (c->tan_circ == 1 && c->stage >= 40 && c->stage <= 42)) {
            /* ③１円１点 は 円 → 点、①１線１円 は 線 → 円。どちらも
             * `接円選択` で選びます。
             *
             * 測定（TEST1 から作った TEST8、円は (129,343) r=30 と
             * (329,343) r=50、半径 20000mm ＝ 174.411 単位）:
             *
             * * ③１円１点: １円 を画面 (280,120)、１点 を (500,120)
             *   ＝ 図の (379,343)、選ぶ矢の先 (350,300) で
             *   `arc c=(234.871,244.787) r=174.411 … 01 02 04 00 00 15`。
             *   |C−A| = 174.411−30、|C−P| = 174.411 で `（接円数4）`。
             *   **記録の最後のバイトは 0x15**。
             * * ①１線１円: １線 を (286,300)（図の x=165 の縦線）、
             *   １円 を (280,120)、選ぶ矢の先 (350,300) で
             *   `arc c=(-9.411,192.580) r=174.411 … 01 02 04 00 00 70`。
             *   線から半径ぶん離れた側 x=−9.411 の上で、|C−A| = 174.411+30。
             *   もう一方の側 x=339.411 は円から遠すぎて交わらないので
             *   `（接円数4）`。**記録の最後のバイトは 0x70**。 */
            const int sel = c->tan_circ == 3 ? 38 : 42;
            const int top = c->tan_circ == 3 ? 36 : 40;
            double px, py;

            if (c->stage == sel) {
                jw_cmd_at(w, sx, sy, &px, &py);
                if (c->tan_cn > 0) {
                    int best = 0, i;
                    double away = 0.0;

                    for (i = 0; i < c->tan_cn; i++) {
                        const double dx = px - c->tan_ccx[i];
                        const double dy = py - c->tan_ccy[i];
                        const double how = sqrt(dx * dx + dy * dy)
                                         - c->tan_cr;
                        const double far = how < 0.0 ? -how : how;

                        if (!i || far < away) {
                            away = far;
                            best = i;
                        }
                    }
                    if (jwc_add_arc_at(d, (float)c->tan_ccx[best],
                                       (float)c->tan_ccy[best],
                                       (float)c->tan_cr, 0L, 0L,
                                       (unsigned char)d->line_type,
                                       (unsigned char)d->pen,
                                       (unsigned char)(d->write_layer),
                                       (unsigned char)(c->tan_circ == 3
                                                       ? 0x15 : 0x70))) {
                        c->tan_did = 1;
                    }
                }
                c->tan_cn = 0;
                c->stage = top;
                return 1;
            }
            if (c->stage == top) {
                /* ③ は円、① は線。 */
                const long k = c->tan_circ == 3
                             ? jw_cmd_arc_at(d, w, sx, sy)
                             : pick_line(d, w, sx, sy);

                if (k < 0) {
                    c->tan_miss = c->tan_circ == 3
                                && pick_line(d, w, sx, sy) >= 0 ? 1 : 0;
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                c->tan_la = k;
                c->stage = top + 1;
                return 1;
            }
            {
                const double r = c->tan_r / (jwc_zukei_scale(d) > 0.0
                                             ? jwc_zukei_scale(d) : 1.0);

                c->tan_cn = 0;
                c->tan_cr = r;
                if (c->tan_circ == 3) {
                    /* 二つめは点（(L)free / (R)Read）。 */
                    const JwcArc *a = &d->arcs[c->tan_la];
                    double span, ux, uy;
                    int s1;

                    if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                        c->missed = 1;
                        return 0;
                    }
                    c->missed = 0;
                    ux = x - a->cx;
                    uy = y - a->cy;
                    span = sqrt(ux * ux + uy * uy);
                    if (span > 1e-9) {
                        ux /= span;
                        uy /= span;
                        for (s1 = -1; s1 <= 1; s1 += 2) {
                            const double d1 = r + s1 * (double)a->r;
                            const double mid = (d1 * d1 - r * r
                                                + span * span) / (2.0 * span);
                            const double h2 = d1 * d1 - mid * mid;
                            double hh, fx, fy;

                            if (d1 < 0.0 || h2 < 0.0) {
                                continue;
                            }
                            hh = sqrt(h2);
                            fx = a->cx + mid * ux;
                            fy = a->cy + mid * uy;
                            /* 矢の先が二つから同じだけ離れていると
                             * 先のほうが取られるので、順が見えます
                             * （測定：点を円の中心と同じ高さで押すと
                             * 二つが同距離になりました）。 */
                            c->tan_ccx[c->tan_cn] = fx - hh * uy;
                            c->tan_ccy[c->tan_cn] = fy + hh * ux;
                            c->tan_cn++;
                            c->tan_ccx[c->tan_cn] = fx + hh * uy;
                            c->tan_ccy[c->tan_cn] = fy - hh * ux;
                            c->tan_cn++;
                        }
                    }
                } else {
                    /* 二つめは円。一つめの線から半径ぶん離れた両側の
                     * 平行線の上で、円の中心からの距離が `r ± 円の半径`。 */
                    const JwcLine *l = &d->lines[c->tan_la];
                    const long k = jw_cmd_arc_at(d, w, sx, sy);
                    const double adx = l->x1 - l->x0, ady = l->y1 - l->y0;
                    const double alen = sqrt(adx * adx + ady * ady);
                    double nx, ny, ux, uy, c0;
                    int s1, s2;

                    if (k < 0) {
                        c->tan_miss = pick_line(d, w, sx, sy) >= 0
                                    ? 1 : 0;
                        c->missed = 1;
                        return 0;
                    }
                    c->missed = 0;
                    if (alen <= 0.0) {
                        c->tan_miss = 2;
                        c->missed = 1;
                        c->stage = top;
                        return 1;
                    }
                    nx = -ady / alen;
                    ny = adx / alen;
                    ux = adx / alen;
                    uy = ady / alen;
                    c0 = nx * l->x0 + ny * l->y0;
                    for (s1 = -1; s1 <= 1; s1 += 2) {
                        const JwcArc *a = &d->arcs[k];
                        const double off = c0 + s1 * r
                                         - (nx * a->cx + ny * a->cy);

                        for (s2 = -1; s2 <= 1; s2 += 2) {
                            const double d1 = r + s2 * (double)a->r;
                            const double t2 = d1 * d1 - off * off;
                            double tt, fx, fy;

                            if (d1 < 0.0 || t2 < 0.0) {
                                continue;
                            }
                            tt = sqrt(t2);
                            fx = a->cx + off * nx;
                            fy = a->cy + off * ny;
                            /* 同距離のときは **線の向きの正の側**が
                             * 先（測定：①１線１円 を既定の半径で
                             * 選ぶところ、原作は (156.28,315.52) を
                             * 出しました）。 */
                            c->tan_ccx[c->tan_cn] = fx + tt * ux;
                            c->tan_ccy[c->tan_cn] = fy + tt * uy;
                            c->tan_cn++;
                            c->tan_ccx[c->tan_cn] = fx - tt * ux;
                            c->tan_ccy[c->tan_cn] = fy - tt * uy;
                            c->tan_cn++;
                        }
                    }
                }
                if (c->tan_cn <= 0) {
                    c->tan_miss = 2;            /* `データが不適当` */
                    c->missed = 1;
                    c->stage = top;
                    return 1;
                }
                c->stage = sel;
                return 1;
            }
        }
        if ((c->tan_tri == 13 && c->stage >= 51 && c->stage <= 53)
            || (c->tan_tri == 14 && c->stage >= 54 && c->stage <= 56)) {
            /* ③１点と２線･円 と ④３線･円。**いまは線だけ**で、円を
             * 押したときは入れていません（下の「まだのもの」）。
             *
             * どちらも中心は「二本の線から等しい距離」＝角の二等分線の
             * 上にあります。候補を全部作って、**最後に押したところに
             * 円周がいちばん近いもの**を入れます——ほかの小項目と同じ
             * 決め方です。選ぶ段はありません。
             *
             * 測定（SAMPLE0、枠は 上 y=323.057、左 x=40.973、
             * 下の横線 y=61.441）:
             *
             * * ③: 点 (200,200)＝図の (79,263)、上の枠線 (400,140)、
             *   左の枠線 (162,250) で
             *   `c=(206.641205,157.389069) r=165.668182`。
             * * ④: 上 (400,140)、左 (162,250)、下 (400,400) で
             *   `c=(171.781113,192.249176) r=130.808075`——内接円です。
             *
             * **記録の最後のバイトは 0x00**。 */
            const int top = c->tan_tri == 13 ? 51 : 54;
            const int last = top + 2;


            if (c->tan_tri == 13 && c->stage == 51) {
                if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                c->tan_p1x = x;
                c->tan_p1y = y;
                c->tan_lx[0] = x;
                c->tan_ly[0] = y;
                c->stage = 52;
                return 1;
            }
            {
                const long kl = pick_line(d, w, sx, sy);
                const long ka = kl >= 0 ? -1 : jw_cmd_arc_at(d, w, sx, sy);
                const long k = kl >= 0 ? kl : ka;
                const int at = c->stage - top;

                if (k < 0) {
                    c->tan_miss = 0;
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                c->tan_ln[at] = k;
                c->tan_lk[at] = kl >= 0 ? 0 : 1;
                jw_cmd_at(w, sx, sy, &c->tan_lx[at], &c->tan_ly[at]);
                if (c->stage < last) {
                    c->stage++;
                    return 1;
                }
                /* **円が混ざったら一般の解き方**（tan_solve3）。線ばかりの
                 * ときは下の二等分線・三元一次のほうを通ります——そちらは
                 * 原作とビット単位で合わせてあるので、触っていません。 */
                if (c->tan_lk[1] || c->tan_lk[2]
                    || (c->tan_tri == 14 && c->tan_lk[0])) {
                    JwTanObj o[3];
                    double gx = 0.0, gy = 0.0, gr = 0.0;
                    int i;

                    for (i = 0; i < 3; i++) {
                        if (c->tan_tri == 13 && i == 0) {
                            o[0].is_line = 0;
                            o[0].a = c->tan_p1x;
                            o[0].b = c->tan_p1y;
                            o[0].c = 0.0;
                        } else if (c->tan_lk[i]) {
                            const JwcArc *aa = &d->arcs[c->tan_ln[i]];

                            o[i].is_line = 0;
                            o[i].a = aa->cx;
                            o[i].b = aa->cy;
                            o[i].c = aa->r;
                        } else {
                            const JwcLine *l = &d->lines[c->tan_ln[i]];
                            const double lx = l->x1 - l->x0;
                            const double ly = l->y1 - l->y0;
                            const double ll = sqrt(lx * lx + ly * ly);

                            if (ll <= 0.0) {
                                c->tan_miss = 2;
                                c->missed = 1;
                                c->stage = top;
                                return 1;
                            }
                            o[i].is_line = 1;
                            o[i].a = -ly / ll;
                            o[i].b = lx / ll;
                            o[i].c = o[i].a * l->x0 + o[i].b * l->y0;
                        }
                    }
                    /* **選ぶ目安は三つの押しの真ん中**です。
                     * 最後の押しだけで測ると外れます（測定：
                     * ④ 線+線+円 で円の上を押しても下を押しても
                     * 原作は同じ円を出しました。③ 点+円+円 でも
                     * 最後の押しに近いほうは原作と違いました）。 */
                    if (!tan_solve3(o, c->tan_lx, c->tan_ly,
                                    &gx, &gy, &gr)) {
                        c->tan_miss = 2;        /* `データが不適当` */
                        c->missed = 1;
                        c->stage = top;
                        return 1;
                    }
                    if (jwc_add_arc_at(d, (float)gx, (float)gy, (float)gr,
                                       0L, 0L,
                                       (unsigned char)d->line_type,
                                       (unsigned char)d->pen,
                                       (unsigned char)(d->write_layer), 0x00)) {
                        c->tan_did = 1;
                    }
                    c->stage = top;
                    return 1;
                }
                {
                    /* 線の法線と切片を三本ぶん。 */
                    const long kk[3] = { c->tan_ln[0], c->tan_ln[1],
                                         c->tan_ln[2] };
                    double nx[3], ny[3], c0[3];
                    double px, py, gx = 0.0, gy = 0.0, gr = 0.0, best = 0.0;
                    int got = 0, i, n = c->tan_tri == 14 ? 3 : 2;

                    for (i = 0; i < n; i++) {
                        const JwcLine *l = &d->lines[kk[i + 3 - n]];
                        const double lx = l->x1 - l->x0, ly = l->y1 - l->y0;
                        const double ll = sqrt(lx * lx + ly * ly);

                        if (ll <= 0.0) {
                            c->tan_miss = 2;
                            c->missed = 1;
                            c->stage = top;
                            return 1;
                        }
                        nx[i] = -ly / ll;
                        ny[i] = lx / ll;
                        c0[i] = nx[i] * l->x0 + ny[i] * l->y0;
                    }
                    jw_cmd_at(w, sx, sy, &px, &py);
                    if (c->tan_tri == 14) {
                        int s1, s2, s3;

                        /* 八通り。符号を全部ひっくり返すと R の符号だけが
                         * 変わるので、R > 0 だけ取れば内接円と傍接円の
                         * 四つになります。 */
                        for (s1 = -1; s1 <= 1; s1 += 2) {
                        for (s2 = -1; s2 <= 1; s2 += 2) {
                            for (s3 = -1; s3 <= 1; s3 += 2) {
                                /* n1·C − R = c1, s2 n2·C − R = s2 c2,
                                 * s3 n3·C − R = s3 c3 */
                                const double a1 = s1 * nx[0];
                                const double b1 = s1 * ny[0];
                                const double a2 = s2 * nx[1];
                                const double b2 = s2 * ny[1];
                                const double a3 = s3 * nx[2];
                                const double b3 = s3 * ny[2];
                                const double r1 = s1 * c0[0];
                                const double r2 = s2 * c0[1];
                                const double r3 = s3 * c0[2];
                                const double det =
                                    a1 * (b2 * -1.0 - -1.0 * b3)
                                    - b1 * (a2 * -1.0 - -1.0 * a3)
                                    + -1.0 * (a2 * b3 - b2 * a3);
                                double cx, cy, rr, how, far;

                                if (det > -1e-9 && det < 1e-9) {
                                    continue;
                                }
                                cx = (r1 * (b2 * -1.0 - -1.0 * b3)
                                      - b1 * (r2 * -1.0 - -1.0 * r3)
                                      + -1.0 * (r2 * b3 - b2 * r3)) / det;
                                cy = (a1 * (r2 * -1.0 - -1.0 * r3)
                                      - r1 * (a2 * -1.0 - -1.0 * a3)
                                      + -1.0 * (a2 * r3 - r2 * a3)) / det;
                                rr = (a1 * (b2 * r3 - r2 * b3)
                                      - b1 * (a2 * r3 - r2 * a3)
                                      + r1 * (a2 * b3 - b2 * a3)) / det;
                                if (rr <= 0.0) {
                                    continue;
                                }
                                how = sqrt((px - cx) * (px - cx)
                                           + (py - cy) * (py - cy)) - rr;
                                far = how < 0.0 ? -how : how;
                                if (!got || far < best) {
                                    best = far;
                                    gx = cx; gy = cy; gr = rr;
                                    got = 1;
                                }
                            }
                        }
                        }
                    } else {
                        int s2, j;

                        for (s2 = -1; s2 <= 1; s2 += 2) {
                            /* 二等分線 (n1 − s2 n2)·X = c1 − s2 c2 */
                            const double ax = nx[0] - s2 * nx[1];
                            const double ay = ny[0] - s2 * ny[1];
                            const double bb = c0[0] - s2 * c0[1];
                            const double alen = sqrt(ax * ax + ay * ay);
                            double vx, vy, bx, by, p0, w0, ex, ey;
                            double qa, qb, qc, disc;

                            if (alen < 1e-9) {
                                continue;
                            }
                            vx = -ay / alen;
                            vy = ax / alen;
                            bx = ax * bb / (alen * alen);
                            by = ay * bb / (alen * alen);
                            p0 = nx[0] * bx + ny[0] * by - c0[0];
                            w0 = nx[0] * vx + ny[0] * vy;
                            ex = bx - c->tan_p1x;
                            ey = by - c->tan_p1y;
                            qa = 1.0 - w0 * w0;
                            qb = 2.0 * (vx * ex + vy * ey - p0 * w0);
                            qc = ex * ex + ey * ey - p0 * p0;
                            disc = qb * qb - 4.0 * qa * qc;
                            for (j = 0; j < 2; j++) {
                                double t, cx, cy, rr, how, far;

                                if (qa > -1e-12 && qa < 1e-12) {
                                    if (qb > -1e-12 && qb < 1e-12) {
                                        break;
                                    }
                                    if (j) {
                                        break;
                                    }
                                    t = -qc / qb;
                                } else {
                                    if (disc < 0.0) {
                                        break;
                                    }
                                    t = (-qb + (j ? -sqrt(disc) : sqrt(disc)))
                                      / (2.0 * qa);
                                }
                                cx = bx + t * vx;
                                cy = by + t * vy;
                                rr = p0 + t * w0;
                                if (rr < 0.0) {
                                    rr = -rr;
                                }
                                how = sqrt((px - cx) * (px - cx)
                                           + (py - cy) * (py - cy)) - rr;
                                far = how < 0.0 ? -how : how;
                                if (!got || far < best) {
                                    best = far;
                                    gx = cx; gy = cy; gr = rr;
                                    got = 1;
                                }
                            }
                        }
                    }
                    if (!got) {
                        c->tan_miss = 2;
                        c->missed = 1;
                        c->stage = top;
                        return 1;
                    }
                    if (jwc_add_arc_at(d, (float)gx, (float)gy, (float)gr,
                                       0L, 0L,
                                       (unsigned char)d->line_type,
                                       (unsigned char)d->pen,
                                       (unsigned char)(d->write_layer), 0x00)) {
                        c->tan_did = 1;
                    }
                    c->stage = top;
                    return 1;
                }
            }
        }
        if (c->tan_tri == 12 && c->stage >= 47 && c->stage <= 49) {
            /* ③接円（３条件）②２点と１線･円: 二点を通り、線（か円）に
             * 接する円。**選ぶ段はありません**——中心は二点の垂直二等分線の
             * 上なので解は多くて二つで、**三つめに押したところに円周が
             * いちばん近いほう**が入ります。
             *
             * 測定（SAMPLE0）。二点を画面 (400,200)(350,300) ＝ 図の
             * (279,263)(229,163) にして、上の枠線（図の y=323.057）を
             * 押す位置を変えると:
             *
             * * (320,140) → `c=(199.412,240.294) r= 82.763`
             * * (540,140) → `c=(418.645,130.678) r=192.380`
             *
             * どちらも接点が押したところの近くです。
             * **記録の最後のバイトは 0x00**（①３点 と同じ）。 */
            if (c->stage != 49) {
                if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                if (c->stage == 47) {
                    c->tan_p1x = x;
                    c->tan_p1y = y;
                    c->stage = 48;
                } else {
                    c->tan_ccx[0] = x;
                    c->tan_ccy[0] = y;
                    c->stage = 49;
                }
                return 1;
            }
            {
                const double ax = c->tan_p1x, ay = c->tan_p1y;
                const double bx = c->tan_ccx[0], by = c->tan_ccy[0];
                const double ex = bx - ax, ey = by - ay;
                const double len = sqrt(ex * ex + ey * ey);
                const long kl = pick_line(d, w, sx, sy);
                const long ka = kl >= 0 ? -1 : jw_cmd_arc_at(d, w, sx, sy);
                const double mx = (ax + bx) / 2.0, my = (ay + by) / 2.0;
                double dx, dy, q, aa, bb, cc, disc, best = 0.0;
                double px, py, gx = 0.0, gy = 0.0, gr = 0.0;
                int got = 0, i;

                if (kl < 0 && ka < 0) {
                    c->tan_miss = 0;
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                if (len <= 0.0) {
                    c->tan_miss = 2;
                    c->missed = 1;
                    c->stage = 47;
                    return 1;
                }
                /* 中心は垂直二等分線 `M + u·d` の上。 */
                dx = -ey / len;
                dy = ex / len;
                q = len * len / 4.0;
                if (kl >= 0) {
                    /* 線: 中心からの距離が半径。 */
                    const JwcLine *l = &d->lines[kl];
                    const double lx = l->x1 - l->x0, ly = l->y1 - l->y0;
                    const double ll = sqrt(lx * lx + ly * ly);
                    double nx, ny, p0, w0;

                    if (ll <= 0.0) {
                        c->tan_miss = 2;
                        c->missed = 1;
                        c->stage = 47;
                        return 1;
                    }
                    nx = -ly / ll;
                    ny = lx / ll;
                    p0 = nx * (mx - l->x0) + ny * (my - l->y0);
                    w0 = nx * dx + ny * dy;
                    aa = w0 * w0 - 1.0;
                    bb = 2.0 * p0 * w0;
                    cc = p0 * p0 - q;
                } else {
                    /* 円: 中心からの距離が `半径 ± 円の半径`。二乗を二度
                     * 取ると u の二次式になります。 */
                    const JwcArc *o = &d->arcs[ka];
                    const double ox = mx - o->cx, oy = my - o->cy;
                    const double k0 = ox * ox + oy * oy - q
                                    - (double)o->r * (double)o->r;
                    const double m0 = ox * dx + oy * dy;

                    aa = 4.0 * (m0 * m0 - (double)o->r * (double)o->r);
                    bb = 4.0 * k0 * m0;
                    cc = k0 * k0 - 4.0 * (double)o->r * (double)o->r * q;
                }
                jw_cmd_at(w, sx, sy, &px, &py);
                disc = bb * bb - 4.0 * aa * cc;
                for (i = 0; i < 2; i++) {
                    double u, cx, cy, rr, how, far;

                    if (aa > -1e-12 && aa < 1e-12) {
                        if (bb > -1e-12 && bb < 1e-12) {
                            break;
                        }
                        if (i) {
                            break;
                        }
                        u = -cc / bb;
                    } else {
                        if (disc < 0.0) {
                            break;
                        }
                        u = (-bb + (i ? -sqrt(disc) : sqrt(disc)))
                          / (2.0 * aa);
                    }
                    cx = mx + u * dx;
                    cy = my + u * dy;
                    rr = sqrt(q + u * u);
                    how = sqrt((px - cx) * (px - cx) + (py - cy) * (py - cy))
                        - rr;
                    far = how < 0.0 ? -how : how;
                    if (!got || far < best) {
                        best = far;
                        gx = cx;
                        gy = cy;
                        gr = rr;
                        got = 1;
                    }
                }
                if (!got) {
                    c->tan_miss = 2;        /* `データが不適当` */
                    c->missed = 1;
                    c->stage = 47;
                    return 1;
                }
                if (jwc_add_arc_at(d, (float)gx, (float)gy, (float)gr, 0L, 0L,
                                   (unsigned char)d->line_type,
                                   (unsigned char)d->pen,
                                   (unsigned char)(d->write_layer), 0x00)) {
                    c->tan_did = 1;
                }
                c->stage = 47;
                return 1;
            }
        }
        if (c->tan_tri == 23 && c->stage >= 64 && c->stage <= 67) {
            /* ④接楕円 ③平行四辺形内接: 四本の辺の平行四辺形に内接する
             * 楕円（四辺の中点で接するもの）。選ぶ段はありません。
             *
             * 半辺ベクトル `u`,`v` による単位円の像なので、主軸は
             * 行列 `[u v]` の**特異値**です。平行な二組の間隔を hA・hB、
             * 二つの向きのなす角を α とすると 辺の長さは
             * `Lp = hB / |sin α|`、`Lq = hA / |sin α|` で、
             * `u = (Lp/2)·p`、`v = (Lq/2)·q`。中心は二本の中線の交点。
             * `tilt` は長いほうの向きで、**x が負なら 180 度足し**、
             * 0 のときは 360 と書きます（測定：長方形で 360）。
             *
             * 測定（`tools/mkpara.py` の平行四辺形と SAMPLE0 の枠）:
             *
             * | 図形 | 記録 |
             * |---|---|
             * | 直交 120·(2,1)/√5 と 80·(-1,2)/√5 | `r=119.993988 flat=6666 tilt=333.441818` |
             * | 斜め 80·(1,2)/√5 | `r=138.054108 flat=3021 tilt=323.044174` |
             * | 斜め 80·(0,1) | `r=127.54332 flat=5277 tilt=320.497971` |
             * | 45 度 120·(1,0) と 80·(1,1)/√2 | `r=135.199066 flat=3713 tilt=348.017273` |
             * | SAMPLE0 の枠 | `c=(258.986511,192.249161) r=218.013489 flat=5999 tilt=360` |
             *
             * **記録の最後のバイトが読めていません。** 同じ押し順でも
             * 図形によって 0x87・0x97・0x12・0x46 と変わり（同じ図形なら
             * 何度やっても同じ）、長方形は二つとも 0x87 でした。ほかの
             * 小項目は命令ごとに一定（①３点 0x02、②菱形内接 0x07）なので、
             * ここだけ初期化されていない一バイトが漏れているように見えます。
             * **当てずっぽうを置かず 0 を書いています。** */
            const long k = pick_line(d, w, sx, sy);
            const int at = c->stage - 64;
            double px, py;

            if (k < 0) {
                c->tan_miss = 0;
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            jw_cmd_at(w, sx, sy, &px, &py);
            c->tan_ln[at] = k;
            c->tan_lx[at] = px;
            c->tan_ly[at] = py;
            if (c->stage < 67) {
                c->stage++;
                return 1;
            }
            {
                double ux[4], uy[4], off[4];
                int i, j, pa = -1, pb = -1, qa = -1, qb = -1;

                for (i = 0; i < 4; i++) {
                    const JwcLine *l = &d->lines[c->tan_ln[i]];
                    const double ex = l->x1 - l->x0, ey = l->y1 - l->y0;
                    const double ll = sqrt(ex * ex + ey * ey);

                    if (ll <= 0.0) {
                        c->tan_miss = 2;
                        c->missed = 1;
                        c->stage = 64;
                        return 1;
                    }
                    ux[i] = ex / ll;
                    uy[i] = ey / ll;
                }
                for (i = 0; i < 4; i++) {
                    /* 法線への射影（向きは i 番の線のもの）。 */
                    const JwcLine *l = &d->lines[c->tan_ln[i]];

                    off[i] = -uy[i] * l->x0 + ux[i] * l->y0;
                }
                for (i = 0; i < 4 && pa < 0; i++) {
                    for (j = i + 1; j < 4; j++) {
                        const double cr = ux[i] * uy[j] - uy[i] * ux[j];

                        if (cr > -1e-6 && cr < 1e-6) {
                            pa = i;
                            pb = j;
                            break;
                        }
                    }
                }
                if (pa < 0) {
                    c->tan_miss = 2;
                    c->missed = 1;
                    c->stage = 64;
                    return 1;
                }
                for (i = 0; i < 4; i++) {
                    if (i != pa && i != pb) {
                        if (qa < 0) {
                            qa = i;
                        } else {
                            qb = i;
                        }
                    }
                }
                {
                    const double cr = ux[pa] * uy[qa] - uy[pa] * ux[qa];
                    const double npx = -uy[pa], npy = ux[pa];
                    const double nqx = -uy[qa], nqy = ux[qa];
                    double hA, hB, lp, lq, cx, cy, det;
                    double mp, mq, aa, bb, cc, disc, l1, l2;
                    double vx1, vy1, dxx, dyy, deg, s1, s2;
                    long tilt;

                    if (cr > -1e-6 && cr < 1e-6) {
                        c->tan_miss = 2;
                        c->missed = 1;
                        c->stage = 64;
                        return 1;
                    }
                    {
                        const JwcLine *l2p = &d->lines[c->tan_ln[pb]];
                        const JwcLine *l2q = &d->lines[c->tan_ln[qb]];
                        const double o2p = npx * l2p->x0 + npy * l2p->y0;
                        const double o2q = nqx * l2q->x0 + nqy * l2q->y0;
                        const JwcLine *l1p = &d->lines[c->tan_ln[pa]];
                        const JwcLine *l1q = &d->lines[c->tan_ln[qa]];
                        const double o1p = npx * l1p->x0 + npy * l1p->y0;
                        const double o1q = nqx * l1q->x0 + nqy * l1q->y0;

                        hA = o2p - o1p;
                        hB = o2q - o1q;
                        mp = (o1p + o2p) / 2.0;
                        mq = (o1q + o2q) / 2.0;
                    }
                    if (hA < 0.0) {
                        hA = -hA;
                    }
                    if (hB < 0.0) {
                        hB = -hB;
                    }
                    det = npx * nqy - npy * nqx;
                    cx = (mp * nqy - mq * npy) / det;
                    cy = (npx * mq - nqx * mp) / det;
                    lq = hA / (cr < 0.0 ? -cr : cr);   /* q 向きの辺 */
                    lp = hB / (cr < 0.0 ? -cr : cr);   /* p 向きの辺 */
                    {
                        /* M = [u v]、u = (lp/2)p、v = (lq/2)q。 */
                        const double u1 = lp / 2.0 * ux[pa];
                        const double u2 = lp / 2.0 * uy[pa];
                        const double v1 = lq / 2.0 * ux[qa];
                        const double v2 = lq / 2.0 * uy[qa];

                        aa = u1 * u1 + u2 * u2;
                        bb = u1 * v1 + u2 * v2;
                        cc = v1 * v1 + v2 * v2;
                        disc = sqrt((aa - cc) * (aa - cc) + 4.0 * bb * bb);
                        l1 = (aa + cc + disc) / 2.0;
                        l2 = (aa + cc - disc) / 2.0;
                        if (l2 < 0.0) {
                            l2 = 0.0;
                        }
                        s1 = sqrt(l1);
                        s2 = sqrt(l2);
                        if (bb > 1e-9 || bb < -1e-9) {
                            const double ex2 = bb, ey2 = l1 - aa;
                            const double en = sqrt(ex2 * ex2 + ey2 * ey2);

                            vx1 = ex2 / en;
                            vy1 = ey2 / en;
                        } else if (aa >= cc) {
                            vx1 = 1.0;
                            vy1 = 0.0;
                        } else {
                            vx1 = 0.0;
                            vy1 = 1.0;
                        }
                        dxx = u1 * vx1 + v1 * vy1;
                        dyy = u2 * vx1 + v2 * vy1;
                    }
                    if (dxx < 0.0) {
                        dxx = -dxx;
                        dyy = -dyy;
                    }
                    deg = atan2(dyy, dxx)
                        / (3.14159265358979323846 / 180.0);
                    while (deg <= 0.0) {
                        deg += 360.0;
                    }
                    while (deg > 360.0) {
                        deg -= 360.0;
                    }
                    tilt = (long)(deg * 65536.0 + 0.5);
                    if (jwc_add_arc_at(d, (float)cx, (float)cy, (float)s1,
                                       0L, 0L,
                                       (unsigned char)d->line_type,
                                       (unsigned char)d->pen,
                                       (unsigned char)(d->write_layer), 0x00)) {
                        JwcArc *w2 = &d->arcs[d->n_arcs - 1];

                        w2->flatten = (short)(int)(10000.0 * s2 / s1);
                        w2->tilt = tilt;
                        c->tan_did = 1;
                    }
                    c->stage = 64;
                    return 1;
                }
            }
        }
        if (c->tan_tri == 22 && c->stage >= 61 && c->stage <= 63) {
            /* ④接楕円 ②菱形内接: 三本の辺（点ではなく線）で菱形が決まり、
             * その内接楕円が入ります。選ぶ段はありません。
             *
             * 三本のうち**平行な二本**が菱形の一組の辺で、その間隔 h から
             * 一辺の長さが出ます（`L = h / sin α`、α は残りの一本との角）。
             * 頂点 V は「平行な二本のうち先に押したほう」と残りの一本の
             * 交点。押したところが V から見てどちら側かで各辺の向き
             * `u_p`・`u_q` が決まり、中心は `V + (L/2)(u_p + u_q)` です
             * ——④２線 と同じ「押した側で決まる」形です。
             *
             * 対角線は `L(u_p ± u_q)`。楕円の半径はその**半分を √2 で
             * 割ったもの**（菱形の内接楕円は、半辺ベクトルによる単位円の
             * 像だからです）。長いほうが `r`、`flatten` は
             * `(int)(10000 * 短 / 長)`。`tilt` は長い対角線の向きで、
             * **x が正なら 180 度足します**（測った三つとも x が負の側に
             * なりました：135・225・157.5）。
             *
             * 測定:
             *
             * * SAMPLE0 の 上・左・下 →
             *   `c=(171.781113,192.249161) r=130.80809 flat=10000 tilt=225`
             * * `tools/mkpara.py` の斜めの平行四辺形（辺 0・1・2）→
             *   `c=(296.888519,177.222916) r=160.996887 flat=3333 tilt=135`
             *   ——押す順を 2・1・0 にしても同じ記録でした
             * * 同じく 1,0 と 45 度の組 →
             *   `c=(307.284271,184.715729) r=156.787567 flat=4142
             *   tilt=157.5`
             *
             * **記録の最後のバイトは 0x07**（三つとも）。 */
            const long k = pick_line(d, w, sx, sy);
            const int at = c->stage - 61;
            double px, py;

            if (k < 0) {
                c->tan_miss = 0;
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            jw_cmd_at(w, sx, sy, &px, &py);
            c->tan_ln[at] = k;
            c->tan_lx[at] = px;
            c->tan_ly[at] = py;
            if (c->stage < 63) {
                c->stage++;
                return 1;
            }
            {
                double ux[3], uy[3];
                int i, pi = -1, qi = -1, ri = -1;

                for (i = 0; i < 3; i++) {
                    const JwcLine *l = &d->lines[c->tan_ln[i]];
                    const double ex = l->x1 - l->x0, ey = l->y1 - l->y0;
                    const double ll = sqrt(ex * ex + ey * ey);

                    if (ll <= 0.0) {
                        c->tan_miss = 2;
                        c->missed = 1;
                        c->stage = 61;
                        return 1;
                    }
                    ux[i] = ex / ll;
                    uy[i] = ey / ll;
                }
                /* 平行な二本を探します。**先に押したほうが P**
                 * ——頂点 V をどちらの線で取るかで tilt の向きが
                 * 変わります（測定：SAMPLE0 の 上・左・下 で、
                 * 下を P にすると 135 度、上なら 225 度で、原作は
                 * 225 度でした）。 */
                for (i = 0; i < 3 && pi < 0; i++) {
                    int j2;

                    for (j2 = i + 1; j2 < 3; j2++) {
                        const double cr = ux[i] * uy[j2]
                                        - uy[i] * ux[j2];

                        if (cr > -1e-6 && cr < 1e-6) {
                            pi = i;
                            ri = j2;
                            qi = 3 - i - j2;
                            break;
                        }
                    }
                }
                if (pi < 0) {
                    c->tan_miss = 2;    /* `データが不適当` */
                    c->missed = 1;
                    c->stage = 61;
                    return 1;
                }
                {
                    const JwcLine *lp = &d->lines[c->tan_ln[pi]];
                    const JwcLine *lr = &d->lines[c->tan_ln[ri]];
                    const JwcLine *lq = &d->lines[c->tan_ln[qi]];
                    const double nx = -uy[pi], ny = ux[pi];
                    const double h = (lr->x0 - lp->x0) * nx
                                   + (lr->y0 - lp->y0) * ny;
                    const double cr = ux[pi] * uy[qi] - uy[pi] * ux[qi];
                    const double nqx = -uy[qi], nqy = ux[qi];
                    double vx, vy, upx, upy, uqx, uqy, ll, t;
                    double sx2, sy2, dx2, dy2, ls, ld, s1, s2, dxx, dyy, deg;
                    long tilt;

                    if (cr > -1e-6 && cr < 1e-6) {
                        c->tan_miss = 2;
                        c->missed = 1;
                        c->stage = 61;
                        return 1;
                    }
                    /* P と Q の交点。 */
                    t = ((lq->x0 - lp->x0) * nqx + (lq->y0 - lp->y0) * nqy)
                      / (ux[pi] * nqx + uy[pi] * nqy);
                    vx = lp->x0 + t * ux[pi];
                    vy = lp->y0 + t * uy[pi];
                    /* 押したところ側の向き。 */
                    upx = ux[pi];
                    upy = uy[pi];
                    if ((c->tan_lx[pi] - vx) * upx
                        + (c->tan_ly[pi] - vy) * upy < 0.0) {
                        upx = -upx;
                        upy = -upy;
                    }
                    uqx = ux[qi];
                    uqy = uy[qi];
                    if ((c->tan_lx[qi] - vx) * uqx
                        + (c->tan_ly[qi] - vy) * uqy < 0.0) {
                        uqx = -uqx;
                        uqy = -uqy;
                    }
                    ll = (h < 0.0 ? -h : h)
                       / (cr < 0.0 ? -cr : cr);      /* 一辺の長さ */
                    sx2 = upx + uqx;
                    sy2 = upy + uqy;
                    dx2 = upx - uqx;
                    dy2 = upy - uqy;
                    /* 対角線の長さは**内積から**出します。
                     * `|u±v|^2 = 2 ± 2(u·v)` なので、直角のときに
                     * 二つがきっちり同じ値になります——座標から
                     * 直に足し引きすると単精度の端数で 1e-7 ほど
                     * 食い違い、`flatten` が 10000 ではなく 9999 に
                     * なりました（原作は 10000）。線が平行かどうかを
                     * 見るのと同じ 1e-6 で直角も丸めます。 */
                    {
                        double dt = upx * uqx + upy * uqy;

                        if (dt > -1e-6 && dt < 1e-6) {
                            dt = 0.0;
                        }
                        ls = sqrt(2.0 + 2.0 * dt);
                        ld = sqrt(2.0 - 2.0 * dt);
                    }
                    /* **同じ長さのときは差のほう**（正方形の
                     * ときに見えます：和なら 198.43 度、原作は
                     * 108.434952 度でした）。 */
                    if (ls > ld + 1e-9) {
                        s1 = ll * ls / 2.0;
                        s2 = ll * ld / 2.0;
                        dxx = sx2;
                        dyy = sy2;
                    } else {
                        s1 = ll * ld / 2.0;
                        s2 = ll * ls / 2.0;
                        dxx = dx2;
                        dyy = dy2;
                    }
                    s1 /= 1.41421356237309504880;
                    s2 /= 1.41421356237309504880;
                    if (dxx > 0.0 || (dxx == 0.0 && dyy > 0.0)) {
                        dxx = -dxx;
                        dyy = -dyy;
                    }
                    deg = atan2(dyy, dxx)
                        / (3.14159265358979323846 / 180.0);
                    while (deg < 0.0) {
                        deg += 360.0;
                    }
                    while (deg >= 360.0) {
                        deg -= 360.0;
                    }
                    tilt = (long)(deg * 65536.0 + 0.5);
                    if (jwc_add_arc_at(d, (float)(vx + ll / 2.0 * sx2),
                                       (float)(vy + ll / 2.0 * sy2),
                                       (float)s1, 0L, 0L,
                                       (unsigned char)d->line_type,
                                       (unsigned char)d->pen,
                                       (unsigned char)(d->write_layer), 0x07)) {
                        JwcArc *w2 = &d->arcs[d->n_arcs - 1];

                        /* 正方形のとき二つの対角線は数学的に同じ
                         * 長さですが、倍精度だと 1e-17 ほど食い違って
                         * 切り捨てが 9999 に落ちます。原作は単精度で
                         * ちょうど 10000 を書くので、ごく小さい下駄を
                         * 履かせています（本当の比が 0.9999999 でも
                         * 単精度なら 10000 になります）。 */
                        w2->flatten =
                            (short)(int)(10000.0 * s2 / s1 + 1e-9);
                        w2->tilt = tilt;
                        c->tan_did = 1;
                    }
                    c->stage = 61;
                    return 1;
                }
            }
        }
        if (c->tan_tri == 21 && c->stage >= 58 && c->stage <= 60) {
            /* ④接楕円 ①３点: 軸の両端を押してから、通る点をひとつ。
             * 選ぶ段はなく、三つめで楕円が入ります。
             *
             * 中心は軸の中点、a は軸の半分。三つめの点を軸の枠で
             * (x', y') に直すと、もう一方の半径は
             * `b = |y'| / sqrt(1 - (x'/a)^2)` ——本当に通る楕円です。
             * **記録は長いほうを `r` に入れます**: `flatten` は
             * `(int)(10000 * 短い/長い)`（切り捨て）、`tilt` は長いほうの
             * 向きの図面での角度（度、16.16、`round(度 * 65536)`）。
             * 長いほうが軸なら向きは始点→終点、垂線のほうが長ければ
             * 三つめの点の側です。
             *
             * 測定（SAMPLE0）:
             *
             * * 軸 (200,200)-(400,200)、点 (300,350) →
             *   `c=(179,263) r=150 flat=6666 tilt=270`
             * * 軸 (200,200)-(500,200)、点 (350,300) →
             *   `c=(229,263) r=150 flat=6666 tilt=0`
             * * 軸 (200,200)-(400,300)、点 (300,150) →
             *   `c=(179,213) r=111.803398 flat=8728 tilt=333.434952`
             *
             * **記録の最後のバイトは 0x02**。 */
            if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            if (c->stage == 58) {
                c->tan_p1x = x;
                c->tan_p1y = y;
                c->stage = 59;
                return 1;
            }
            if (c->stage == 59) {
                c->tan_ccx[0] = x;
                c->tan_ccy[0] = y;
                c->stage = 60;
                return 1;
            }
            {
                const double ax = c->tan_p1x, ay = c->tan_p1y;
                const double bx = c->tan_ccx[0], by = c->tan_ccy[0];
                const double mx = (ax + bx) / 2.0, my = (ay + by) / 2.0;
                const double ex = bx - ax, ey = by - ay;
                const double len = sqrt(ex * ex + ey * ey);
                const double d2r = 3.14159265358979323846 / 180.0;
                double ux, uy, pxx, pyy, aa, xx, yy, bb, dxx, dyy, deg;
                long tilt;
                int flat;

                if (len <= 0.0) {
                    c->tan_miss = 2;
                    c->missed = 1;
                    c->stage = 58;
                    return 1;
                }
                ux = ex / len;
                uy = ey / len;
                pxx = -uy;
                pyy = ux;
                aa = len / 2.0;
                xx = (x - mx) * ux + (y - my) * uy;
                yy = (x - mx) * pxx + (y - my) * pyy;
                {
                    const double k = 1.0 - (xx / aa) * (xx / aa);

                    if (k <= 1e-12) {
                        c->tan_miss = 2;
                        c->missed = 1;
                        c->stage = 58;
                        return 1;
                    }
                    bb = (yy < 0.0 ? -yy : yy) / sqrt(k);
                }
                if (aa >= bb) {
                    dxx = ux;
                    dyy = uy;
                } else {
                    const double sg = yy < 0.0 ? -1.0 : 1.0;

                    dxx = pxx * sg;
                    dyy = pyy * sg;
                }
                deg = atan2(dyy, dxx) / d2r;
                while (deg < 0.0) {
                    deg += 360.0;
                }
                while (deg >= 360.0) {
                    deg -= 360.0;
                }
                tilt = (long)(deg * 65536.0 + 0.5);
                flat = (int)(10000.0 * (aa >= bb ? bb / aa : aa / bb));
                if (jwc_add_arc_at(d, (float)mx, (float)my,
                                   (float)(aa >= bb ? aa : bb), 0L, 0L,
                                   (unsigned char)d->line_type,
                                   (unsigned char)d->pen,
                                   (unsigned char)(d->write_layer), 0x02)) {
                    JwcArc *w2 = &d->arcs[d->n_arcs - 1];

                    w2->flatten = (short)flat;
                    w2->tilt = tilt;
                    c->tan_did = 1;
                }
                c->stage = 58;
                return 1;
            }
        }
        if (c->tan_tri == 11 && c->stage >= 44 && c->stage <= 46) {
            /* ③接円（３条件）①３点: 三つの点を通る円（外接円）。選ぶ段は
             * なく、三つめを押したところで入ります。
             *
             * 測定（SAMPLE0、画面 (200,200)(400,200)(300,350) ＝ 図の
             * (79,263)(279,263)(179,113)）:
             * `arc c=(179.000,221.333) r=108.333 … 01 02 00 00 00 00`
             * ——三点から等距離です。**記録の最後のバイトは 0x00**。 */
            if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            if (c->stage == 44) {
                c->tan_p1x = x;
                c->tan_p1y = y;
                c->stage = 45;
                return 1;
            }
            if (c->stage == 45) {
                c->tan_ccx[0] = x;
                c->tan_ccy[0] = y;
                c->stage = 46;
                return 1;
            }
            {
                const double ax = c->tan_p1x, ay = c->tan_p1y;
                const double bx = c->tan_ccx[0], by = c->tan_ccy[0];
                const double d1x = bx - ax, d1y = by - ay;
                const double d2x = x - ax, d2y = y - ay;
                const double det = 2.0 * (d1x * d2y - d1y * d2x);
                const double l1 = d1x * d1x + d1y * d1y;
                const double l2 = d2x * d2x + d2y * d2y;
                double cx, cy, rr;

                if (det > -1e-9 && det < 1e-9) {
                    /* 三点が一直線。 */
                    c->tan_miss = 2;
                    c->missed = 1;
                    c->stage = 44;
                    return 1;
                }
                cx = ax + (d2y * l1 - d1y * l2) / det;
                cy = ay + (d1x * l2 - d2x * l1) / det;
                rr = sqrt((cx - ax) * (cx - ax) + (cy - ay) * (cy - ay));
                if (jwc_add_arc_at(d, (float)cx, (float)cy, (float)rr, 0L, 0L,
                                   (unsigned char)d->line_type,
                                   (unsigned char)d->pen,
                                   (unsigned char)(d->write_layer), 0x00)) {
                    c->tan_did = 1;
                }
                c->stage = 44;
                return 1;
            }
        }
        if (c->tan_circ == 2
            && (c->stage == 32 || c->stage == 33 || c->stage == 34)) {
            /* ②１点１線: 点を通り、線に接する、決めた半径の円。
             * 中心は線から半径ぶん離れた**両側の**平行線の上にあり、
             * それぞれを点を中心とする半径の円と交えます。成り立つ交点
             * だけが候補です。
             *
             * 測定（SAMPLE0、半径 1000mm ＝ 1744.108 単位。１点 を画面
             * (600,450) ＝ 図の (479,13)、１線 は上の枠線 y=323.057）:
             * `arc c=(-513.679,-1421.051) r=1744.108 … 01 02 00 00 00 00`
             * ——`（接円数2）`。上側の平行線 y=2067.165 は点から遠すぎて
             * 交わらないので、下側の二つだけです。
             * **記録の最後のバイトは 0x00**（⑥２点 0x24、④２線 0x2c、
             * ⑤２円 0x22）。 */
            double px, py;

            if (c->stage == 34) {
                jw_cmd_at(w, sx, sy, &px, &py);
                if (c->tan_cn > 0) {
                    int best = 0, i;
                    double away = 0.0;

                    for (i = 0; i < c->tan_cn; i++) {
                        const double dx = px - c->tan_ccx[i];
                        const double dy = py - c->tan_ccy[i];
                        const double how = sqrt(dx * dx + dy * dy)
                                         - c->tan_cr;
                        const double far = how < 0.0 ? -how : how;

                        if (!i || far < away) {
                            away = far;
                            best = i;
                        }
                    }
                    if (jwc_add_arc_at(d, (float)c->tan_ccx[best],
                                       (float)c->tan_ccy[best],
                                       (float)c->tan_cr, 0L, 0L,
                                       (unsigned char)d->line_type,
                                       (unsigned char)d->pen,
                                       (unsigned char)(d->write_layer),
                                       0x00)) {
                        c->tan_did = 1;
                    }
                }
                c->tan_cn = 0;
                c->stage = 32;
                return 1;
            }
            if (c->stage == 32) {
                if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                c->tan_p1x = x;
                c->tan_p1y = y;
                c->stage = 33;
                return 1;
            }
            {
                const long k = pick_line(d, w, sx, sy);

                if (k < 0) {
                    c->tan_miss = 0;
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                {
                    const JwcLine *a = &d->lines[k];
                    const double adx = a->x1 - a->x0, ady = a->y1 - a->y0;
                    const double alen = sqrt(adx * adx + ady * ady);
                    const double r = c->tan_r / (jwc_zukei_scale(d) > 0.0
                                                 ? jwc_zukei_scale(d) : 1.0);
                    double nx, ny, c0, ux, uy;
                    int s1;

                    c->tan_cn = 0;
                    c->tan_cr = r;
                    if (alen <= 0.0) {
                        c->tan_miss = 2;
                        c->missed = 1;
                        c->stage = 32;
                        return 1;
                    }
                    nx = -ady / alen;
                    ny = adx / alen;
                    ux = adx / alen;
                    uy = ady / alen;
                    c0 = nx * a->x0 + ny * a->y0;
                    for (s1 = -1; s1 <= 1; s1 += 2) {
                        /* 点からその平行線までの符号つき距離。 */
                        const double off = c0 + s1 * r
                                         - (nx * c->tan_p1x
                                            + ny * c->tan_p1y);
                        const double t2 = r * r - off * off;
                        double tt, fx, fy;

                        if (t2 < 0.0) {
                            continue;
                        }
                        tt = sqrt(t2);
                        fx = c->tan_p1x + off * nx;
                        fy = c->tan_p1y + off * ny;
                        c->tan_ccx[c->tan_cn] = fx + tt * ux;
                        c->tan_ccy[c->tan_cn] = fy + tt * uy;
                        c->tan_cn++;
                        c->tan_ccx[c->tan_cn] = fx - tt * ux;
                        c->tan_ccy[c->tan_cn] = fy - tt * uy;
                        c->tan_cn++;
                    }
                    if (c->tan_cn <= 0) {
                        c->tan_miss = 2;        /* `データが不適当` */
                        c->missed = 1;
                        c->stage = 32;
                        return 1;
                    }
                    c->stage = 34;
                    return 1;
                }
            }
        }
        if (c->tan_circ == 5
            && (c->stage == 27 || c->stage == 28 || c->stage == 29)) {
            /* ⑤２円: 二つの円に接する、決めた半径の円。候補は最大八つで、
             * ⑥２点 と同じ `接円選択＝マウス移動　確定＝クリック` で
             * 選びます——**円周が矢の先にいちばん近いもの**です。
             *
             * 測定（TEST1 から円二つだけの図面を作り、半径 20000mm ＝
             * 174.411 単位、円は (129,213) r=30 と (329,213) r=50。
             * 円（Ａ）を画面 (280,250)、円（Ｂ）を (500,250)、
             * 選ぶ矢の先を (350,350)）:
             * `arc c=(242.441,302.362) r=174.411 … 01 02 04 00 00 22`
             * ——|C−C1| = 174.411−30、|C−C2| = 174.411−50 で、二つとも
             * 内に抱えた組み合わせです。`（接円数8）` と出ました。
             * **記録の最後のバイトは 0x22**（⑥２点 0x24、④２線 0x2c）。 */
            double px, py;

            if (c->stage == 29) {
                jw_cmd_at(w, sx, sy, &px, &py);
                if (c->tan_cn > 0) {
                    int best = 0, i;
                    double away = 0.0;

                    for (i = 0; i < c->tan_cn; i++) {
                        const double dx = px - c->tan_ccx[i];
                        const double dy = py - c->tan_ccy[i];
                        const double how = sqrt(dx * dx + dy * dy)
                                         - c->tan_cr;
                        const double far = how < 0.0 ? -how : how;

                        if (!i || far < away) {
                            away = far;
                            best = i;
                        }
                    }
                    if (jwc_add_arc_at(d, (float)c->tan_ccx[best],
                                       (float)c->tan_ccy[best],
                                       (float)c->tan_cr, 0L, 0L,
                                       (unsigned char)d->line_type,
                                       (unsigned char)d->pen,
                                       (unsigned char)(d->write_layer),
                                       0x22)) {
                        c->tan_did = 1;
                    }
                }
                c->tan_cn = 0;
                c->stage = 27;
                return 1;
            }
            {
                const long k = jw_cmd_arc_at(d, w, sx, sy);

                if (k < 0) {
                    /* 線を掴んだら `線データです`、何も無ければ
                     * ほかの命令と同じ `読取可能データ無`（測定）。 */
                    c->tan_miss = pick_line(d, w, sx, sy) >= 0 ? 1 : 0;
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                if (c->stage == 27) {
                    c->tan_la = k;
                    c->stage = 28;
                    return 1;
                }
                {
                    const JwcArc *a = &d->arcs[c->tan_la];
                    const JwcArc *b = &d->arcs[k];
                    const double r = c->tan_r / (jwc_zukei_scale(d) > 0.0
                                                 ? jwc_zukei_scale(d) : 1.0);
                    const double ux = b->cx - a->cx, uy = b->cy - a->cy;
                    const double span = sqrt(ux * ux + uy * uy);
                    int s1, s2;

                    c->tan_cn = 0;
                    c->tan_cr = r;
                    if (span > 1e-9) {
                        for (s1 = -1; s1 <= 1; s1 += 2) {
                            for (s2 = -1; s2 <= 1; s2 += 2) {
                                const double d1 = r + s1 * (double)a->r;
                                const double d2 = r + s2 * (double)b->r;
                                const double mid = (d1 * d1 - d2 * d2
                                                    + span * span)
                                                 / (2.0 * span);
                                const double h2 = d1 * d1 - mid * mid;
                                double hh, bx, by;

                                if (d1 < 0.0 || d2 < 0.0 || h2 < 0.0) {
                                    continue;
                                }
                                hh = sqrt(h2);
                                bx = a->cx + mid * ux / span;
                                by = a->cy + mid * uy / span;
                                /* 二つの交点は **この順**。矢の先が
                                 * 二つから同じだけ離れていると先の
                                 * ほうが取られるので、順が見えます
                                 * （測定：円の右端を押すと二つが
                                 * 同距離になり、原作は法線の負の側を
                                 * 選びました）。 */
                                c->tan_ccx[c->tan_cn] = bx + hh * uy / span;
                                c->tan_ccy[c->tan_cn] = by - hh * ux / span;
                                c->tan_cn++;
                                c->tan_ccx[c->tan_cn] = bx - hh * uy / span;
                                c->tan_ccy[c->tan_cn] = by + hh * ux / span;
                                c->tan_cn++;
                            }
                        }
                    }
                    if (c->tan_cn <= 0) {
                        c->tan_miss = 2;        /* `データが不適当` */
                        c->missed = 1;
                        c->stage = 27;
                        return 1;
                    }
                    c->stage = 29;
                    return 1;
                }
            }
        }
        if (c->tan_circ == 4 && (c->stage == 24 || c->stage == 25)) {
            /* ④２線: 二本の線に接する、決めた半径の円。**選ぶ段はなく**、
             * 二本目を押したところで入ります。
             *
             * どの四隅に入るかは押したところで決まります: 中心は
             * **（Ａ）を押した側の（Ｂ）の側**と、**（Ｂ）を押した側の
             * （Ａ）の側** に来ます。測定（SAMPLE0、半径 1000mm =
             * 1744.108 単位、枠の横線を画面 (400,140)、縦線を (162,250)）:
             * `arc c=(1785.081,-1421.051) r=1744.108 … 01 02 00 00 00 2c`
             * ——交わるところ (40.973,323.057) から右下へ半径ぶんです。
             * 記録の最後のバイトは **0x2c**（⑥２点 の 0x24 とは別）。 */
            const long k = pick_line(d, w, sx, sy);
            double px, py;

            if (k < 0) {
                c->tan_miss = 0;
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            jw_cmd_at(w, sx, sy, &px, &py);
            if (c->stage == 24) {
                c->tan_la = k;
                c->tan_lax = px;
                c->tan_lay = py;
                c->stage = 25;
                return 1;
            }
            {
                const JwcLine *a = &d->lines[c->tan_la];
                const JwcLine *b = &d->lines[k];
                const double adx = a->x1 - a->x0, ady = a->y1 - a->y0;
                const double bdx = b->x1 - b->x0, bdy = b->y1 - b->y0;
                const double alen = sqrt(adx * adx + ady * ady);
                const double blen = sqrt(bdx * bdx + bdy * bdy);
                const double r = c->tan_r / (jwc_zukei_scale(d) > 0.0
                                             ? jwc_zukei_scale(d) : 1.0);
                double anx, any, bnx, bny, ca, cb, det, cx, cy, side;

                if (alen <= 0.0 || blen <= 0.0) {
                    return 0;
                }
                anx = -ady / alen;
                any = adx / alen;
                bnx = -bdy / blen;
                bny = bdx / blen;
                det = anx * bny - any * bnx;
                if (det > -1e-9 && det < 1e-9) {
                    c->tan_miss = 2;    /* 平行。`データが不適当` */
                    c->missed = 1;
                    c->stage = 24;
                    return 1;
                }
                /* （Ａ）から見た側は（Ｂ）を押したところ、その逆も同じ。 */
                side = (px - a->x0) * anx + (py - a->y0) * any;
                ca = anx * a->x0 + any * a->y0 + (side < 0.0 ? -r : r);
                side = (c->tan_lax - b->x0) * bnx
                     + (c->tan_lay - b->y0) * bny;
                cb = bnx * b->x0 + bny * b->y0 + (side < 0.0 ? -r : r);
                cx = (ca * bny - cb * any) / det;
                cy = (anx * cb - bnx * ca) / det;
                if (jwc_add_arc_at(d, (float)cx, (float)cy, (float)r, 0L, 0L,
                                   (unsigned char)d->line_type,
                                   (unsigned char)d->pen,
                                   (unsigned char)(d->write_layer), 0x2c)) {
                    c->tan_did = 1;
                }
                c->stage = 24;
                return 1;
            }
        }
        if (c->tan_circ == 6
            && (c->stage == 20 || c->stage == 21 || c->stage == 22)) {
            /* ⑥２点: 二点を通る、決めた半径の円。候補は二つあり、
             * `接円選択＝マウス移動　確定＝クリック` で選びます。
             *
             * 測定（TEST1、半径 20000mm、縮尺 1/200 なので 174.411 単位。
             * 第１点 (129,213)、第２点 (229,213)、矢の先 (179,263)）:
             * `arc c=(179.000,45.910) r=174.411 … 01 02 04 00 00 24`
             * ——中心は弦の中点から ±√(r²−(d/2)²) で、**円周が矢の先に
             * 近いほう**が選ばれます。 */
            double px, py;

            if (c->stage == 22) {
                jw_cmd_at(w, sx, sy, &px, &py);
                if (c->tan_cn > 0) {
                    int best = 0, i;
                    double away = 0.0;

                    for (i = 0; i < c->tan_cn; i++) {
                        const double dx = px - c->tan_ccx[i];
                        const double dy = py - c->tan_ccy[i];
                        const double how = sqrt(dx * dx + dy * dy)
                                         - c->tan_cr;
                        const double far = how < 0.0 ? -how : how;

                        if (!i || far < away) {
                            away = far;
                            best = i;
                        }
                    }
                    if (jwc_add_arc_at(d, (float)c->tan_ccx[best],
                                       (float)c->tan_ccy[best],
                                       (float)c->tan_cr, 0L, 0L,
                                       (unsigned char)d->line_type,
                                       (unsigned char)d->pen,
                                       (unsigned char)(d->write_layer),
                                       0x24)) {
                        c->tan_did = 1;
                    }
                }
                c->tan_cn = 0;
                c->stage = 20;
                return 1;
            }
            if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            if (c->stage == 20) {
                c->tan_p1x = x;
                c->tan_p1y = y;
                c->stage = 21;
                return 1;
            }
            {
                const double dx = x - c->tan_p1x, dy = y - c->tan_p1y;
                const double span = sqrt(dx * dx + dy * dy);
                const double r = c->tan_r / (jwc_zukei_scale(d) > 0.0
                                             ? jwc_zukei_scale(d) : 1.0);
                double half;

                if (span <= 0.0 || span > 2.0 * r) {
                    /* `データが不適当`。道は第１点へ戻ります（測定）。 */
                    c->tan_miss = 2;
                    c->missed = 1;
                    c->stage = 20;
                    return 1;
                }
                half = sqrt(r * r - span * span / 4.0);
                c->tan_cr = r;
                c->tan_ccx[0] = (c->tan_p1x + x) / 2.0 - dy / span * half;
                c->tan_ccy[0] = (c->tan_p1y + y) / 2.0 + dx / span * half;
                c->tan_ccx[1] = (c->tan_p1x + x) / 2.0 + dy / span * half;
                c->tan_ccy[1] = (c->tan_p1y + y) / 2.0 - dx / span * half;
                c->tan_cn = 2;
                c->stage = 22;
                return 1;
            }
        }
        if (c->stage == 18 || c->stage == 19) {
            /* ①円～円間: 四本ある接線（外二本・内二本）のうち、接点が
             * 押したところにいちばん近いものを引きます。
             *
             * 測定（TEST1）: 同じ半径の二つ（r=43.603、中心 y が同じ）を
             * どちらも上四半分で押すと `(165,237)-(326,237)`——上の外接線。
             * 半径の違う二つ（43.603 と 87.205）だと
             * `(153.191,235.371)-(302.383,277.344)` で、中心からの離れは
             * 43.60 と 87.20 ——どちらも半径ちょうどです。 */
            const long k = jw_cmd_arc_at(d, w, sx, sy);
            double px, py;

            if (k < 0) {
                /* 円を探して線が出ると言葉が変わります（測定：桁 17 から
                 * `.線データです`、何もなければ `.読取可能データ無`）。 */
                c->tan_miss = pick_line(d, w, sx, sy) >= 0;
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            jw_cmd_at(w, sx, sy, &px, &py);
            if (c->stage == 18) {
                c->tan_kb = k;
                c->tan_apx = px;
                c->tan_apy = py;
                c->stage = 19;
                return 1;
            }
            tangent_pair(c, d, k, px, py);
            c->tan_did = 1;
            c->stage = 18;
            return 1;
        }
        if (c->stage == 16) {
            /* ②円周点: まず円。 */
            const long k = jw_cmd_arc_at(d, w, sx, sy);

            if (k < 0) {
                /* 円を探して線が出ると言葉が変わります（測定：桁 17 から
                 * `.線データです`、何もなければ `.読取可能データ無`）。 */
                c->tan_miss = pick_line(d, w, sx, sy) >= 0;
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->tan_k = k;
            c->stage = 17;
            return 1;
        }
        if (c->stage == 17) {
            /* 円周点: 押した点にいちばん近い円周の点が接点になり、そこの
             * 半径と直角な線が接線です。測定（TEST1、円
             * c=(165,193.397) r=43.603、円周点 (200,300)）: 接点は
             * (123.888,178.870)、線は (134.047,150.130)-(93.418,265.078)
             * で中心からの離れが 43.60 ——半径ちょうど。 */
            const JwcArc *a = &d->arcs[c->tan_k];
            double dx, dy, far;

            if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            dx = x - a->cx;
            dy = y - a->cy;
            far = sqrt(dx * dx + dy * dy);
            if (far <= 0.0) {
                return 0;
            }
            c->tan_bx = a->cx + a->r * dx / far;
            c->tan_by = a->cy + a->r * dy / far;
            c->tan_deg = atan2(dy, dx) * 180.0 / 3.14159265358979323846
                       - 90.0;
            c->stage = 14;
            return 1;
        }
        if (c->stage == 13) {
            /* ④角度指定: 円を指示すると、打った角度の接線のうち **押した
             * 側** のものが決まります。測定（TEST1、30 度、円
             * c=(165,193.397) r=43.603 を (255,239) で押す）: できた線は
             * (65.536,186.320)-(280.488,310.422) で、向きは 30 度ちょうど、
             * 中心からの離れは 43.60 ——半径です。 */
            const long k = jw_cmd_arc_at(d, w, sx, sy);
            const double rad = c->tan_deg * 3.14159265358979323846 / 180.0;
            const double nx = -sin(rad), ny = cos(rad);
            double px, py, side;

            if (k < 0) {
                c->tan_miss = pick_line(d, w, sx, sy) >= 0;
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            jw_cmd_at(w, sx, sy, &px, &py);
            side = (px - d->arcs[k].cx) * nx + (py - d->arcs[k].cy) * ny;
            c->tan_bx = d->arcs[k].cx + (side < 0.0 ? -1.0 : 1.0)
                      * d->arcs[k].r * nx;
            c->tan_by = d->arcs[k].cy + (side < 0.0 ? -1.0 : 1.0)
                      * d->arcs[k].r * ny;
            c->stage = 14;
            return 1;
        }
        if (c->stage == 14 || c->stage == 15) {
            /* 始点と終点は、その接線の上に **落として** 使います（測定：
             * 押した点からの垂線の足が、そのまま線の端になります）。 */
            const double rad = c->tan_deg * 3.14159265358979323846 / 180.0;
            const double ux = cos(rad), uy = sin(rad);
            double t;

            if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            t = (x - c->tan_bx) * ux + (y - c->tan_by) * uy;
            if (c->stage == 14) {
                c->tan_ax = c->tan_bx + ux * t;
                c->tan_ay = c->tan_by + uy * t;
                c->stage = 15;
                return 1;
            }
            if (jwc_add_line(d, (float)c->tan_ax, (float)c->tan_ay,
                             (float)(c->tan_bx + ux * t),
                             (float)(c->tan_by + uy * t),
                             (unsigned char)d->line_type,
                             (unsigned char)d->pen,
                             (unsigned char)(d->write_layer))) {
                d->lines[d->n_lines - 1].rest[1] = 0x05;
            }
            /* 一本入ると、④角度指定 は角度の欄へ、②円周点 は
             * 円の問いへ戻ります（どちらも測定）。 */
            c->tan_did = 1;
            if (c->tan_kind == 2) {
                c->stage = 16;
                return 1;
            }
            c->typing = 1;
            c->typed[0] = 0;
            c->typed_n = 0;
            c->stage = 12;
            return 1;
        }
        if (c->stage == 2 || c->stage == 4) {
            if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->tan_x = x;
            c->tan_y = y;
            c->pressed = 1;
            c->stage = 3;
            return 1;
        }
        if (c->stage == 3) {
            const long k = jw_cmd_arc_at(d, w, sx, sy);

            if (k < 0) {
                c->tan_miss = pick_line(d, w, sx, sy) >= 0;
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            /* The new line goes **over** the finished screen, which is what
             * the original does -- a text drawn after it in the file would
             * otherwise cover it (TEST1 has one right across the tangent).
             * jw_cmd_after draws everything past tan_start's three, so a
             * second tangent does not drop the first one under the text
             * (measured: 11 pixels of the first one went magenta). */
            if (!tangent_to(c, d, w, k, sx, sy)) {
                return 0;
            }
            c->stage = 4;
            return 1;
        }
        return 0;
    }
    if (c->command == 18) {
        /* ハッチ: the frame is built out of lines that are pressed one after
         * another, and pressing the first one again closes it.
         *
         * Measured on SAMPLE0's cell (197,402)-(380,419): pressing its four
         * sides and then the first one again leaves 残数 at 96 -- one off for
         * each of the four, and nothing for the closing press -- and the line
         * goes `◇ ハッチ枠 図形の連続線(弧)マウス指示 [中間線]`, then the same
         * with `[開始線で終了]` after it, then
         * `|①【指示終了】|別図形をマウス指示 (L)開始線 (R)単独円`. */
        long k;

        /* 右押し：最初は (R)単独円（円を読む。円を足すのはまだ。無ければ
         * `単独円ではありません`。測定：tmp/h3.txt h_r3）、枠を取り始めてから
         * は左と同じ（h_r4・h_r5）。 */
        if (right && c->hatch_n == 0) {
            c->missed = 2;      /* 単独円ではありません */
            return 1;
        }
        k = pick_line(d, w, sx, sy);
        c->hatch_plain = 0;     /* 押しで 残数 が戻る（測定：hatch_s1_c1） */
        if (k < 0) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        c->pressed = 1;
        if (c->hatch_closed) {
            return 0;           /* 別図形 is not done */
        }
        /* 閉じる（decomp ovl9 3ab8:0081 の 02ba94〜02c606）：最初の線をもう一度
         * 押し、最後が直線で最初の線と最後の線が平行でなく（1bb4:3cd1 が交点を
         * 返す）、枠が 3 本以上のとき。通らなければ通常の追加に落ちる。 */
        if (c->hatch_n >= 3 && k == c->hatch_line[0]) {
            double ix, iy;

            if (hatch_meet(&d->lines[c->hatch_line[0]],
                           &d->lines[c->hatch_line[c->hatch_n - 1]], &ix, &iy)) {
                c->hatch_closed = 1;
                c->stage = 4;
                return 1;
            }
        }
        if (c->hatch_n >= JW_HATCH_MAX) {
            return 0;
        }
        /* 線を足す条件（decomp 02bc17〜02c127）：新しい線と最後の線が平行
         * （1bb4:3cd1 が 0）なら黙って無視、そうでなければ足す。端点の一致や
         * 同じ線の再押下を弾く処理は原作に無い。 */
        if (c->hatch_n >= 1) {
            double ix, iy;

            if (!hatch_meet(&d->lines[c->hatch_line[c->hatch_n - 1]],
                            &d->lines[k], &ix, &iy)) {
                return 0;
            }
        }
        c->hatch = 1;
        c->hatch_plain = 0;
        c->hatch_line[c->hatch_n++] = k;
        /* 残数（decomp 02acf2：ax=[bp-2](=100,02ac0eで設定) - [bp-0xba4]、
         * 文字列 0x367a は `残数 %d`）は hatch_n から毎回作り直されるだけで、
         * 足すたびにこの場で引き直されます。[ESC] の方は別（下の 残数は
         * 戻らない を見る）ので、足す側は常にそのまま付け直す――
         * [ESC] で減らしたあとより少ない本数まで足し戻しても、古い方の
         * 最大値に張り付かず、足した今の本数に揃います。 */
        c->hatch_used = c->hatch_n;
        c->stage = c->hatch_n < 3 ? c->hatch_n : 3;
        return 1;
    }
    if (c->command == 23 && c->poly) {
        /* 曲線 ⑦連線: press after press and the line follows, with every
         * corner rounded off.  **The drawing comes one press late** -- the
         * third press puts down the first segment and the first corner, and
         * ④ 終了 puts down the last one.
         *
         * The line a segment lies on goes through the **newest** press with
         * the direction from the press before it (rounded -- see poly_dir);
         * only the first is anchored at the 始点.  Measured on SAMPLE0 with
         * 45度毎: pressing (200,300)(400,300)(500,150) and (200,300)
         * (400,250)(500,150) leave **the same** first segment
         * (79,163)-(223.768,163) and the same corner, because both times the
         * second line is the 45 degree one through (379,313). */
        double vx, vy;

        if (!take_point(c, d, w, sx, sy, right, &x, &y)) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        if (c->pu_n < 128) {
            c->pu[c->pu_n].n = c->poly_n;
            c->pu[c->pu_n].px = c->poly_px;
            c->pu[c->pu_n].py = c->poly_py;
            c->pu[c->pu_n].ax = c->poly_ax;
            c->pu[c->pu_n].ay = c->poly_ay;
            c->pu[c->pu_n].dx = c->poly_dx;
            c->pu[c->pu_n].dy = c->poly_dy;
            c->pu[c->pu_n].sx = c->poly_sx;
            c->pu[c->pu_n].sy = c->poly_sy;
            c->pu[c->pu_n].nl = d->n_lines;
            c->pu[c->pu_n].na = d->n_arcs;
            c->pu_n++;
        }
        c->pressed = 1;
        c->poly_t = c->edge_mm * d->unit_mm;
        if (c->poly_n == 0) {
            c->poly_sx = c->poly_ax = c->poly_px = x;
            c->poly_sy = c->poly_ay = c->poly_py = y;
            c->poly_n = 1;
            c->stage = 2;
            return 1;
        }
        poly_dir(c, x - c->poly_px, y - c->poly_py, &vx, &vy);
        if (c->poly_n == 1) {
            c->poly_dx = vx;        /* the 始点 keeps the anchor */
            c->poly_dy = vy;
        } else {
            poly_corner(c, d, x, y, vx, vy);
        }
        c->poly_px = x;
        c->poly_py = y;
        c->poly_n++;
        c->stage = 3;
        return 1;
    }
    if (c->command == 28 && !c->te5) {
        /* 文編集【変更】: press a text and its string comes up in a field on
         * the second row, with a ruler above it (`10----+----20...40`) and
         * `左下 |種 3|Paste` where the menu's ` Get type[tab]` was.  Typing
         * changes it and [Enter] puts it back -- see jwc_edit_text.
         *
         * The cursor starts at the **front**: on SAMPLE0, pressing (190,152)
         * and typing `ABC` echoes 「ABCＨ７－Ａ００１」, and [BS] after `AB`
         * leaves `A` -- so [BS] takes a character off in front of the cursor
         * the way 文字's field does.
         *
         * A press that finds no text does nothing at all: (170,150) on
         * SAMPLE0, which is inside the drawing but off every string, left the
         * top line exactly as the item came up with. */
        long k;
        const char *str;

        /* **項目の行のままの押しは項目を選ぶだけ**：左で ①文字変更（【変更】
         * 文字選択 の行）、右で ②移動（〈移動〉文字を選んで下さい の行）。
         * 文字の上を押しても文字は拾わない（測定：tmp/tep.txt te_b・te_c、
         * SAMPLE0 の (190,152) を左で押しても【変更】の行になるだけ）。 */
        /* 〈移動〉《複写》の位置指示：(L)free (R)Read で始点（基点 左下）を
         * 置き、選ぶ行に `[ESC]` を付けて戻る。R で点が無ければ何もしない
         * （測定：tmp/te3.txt te2a・te2c・te3a）。 */
        if (c->te_pick >= 0) {
            double px, py;

            if (!take(c, d, w, sx, sy, right, &px, &py)) {
                c->missed = 1;  /* `[F3]` の代わりに 読取可能データ無（te2c） */
                return 1;
            }
            jwc_move_text(d, c->te_pick, px, py, c->top_item == 3,
                          c->te_bh, c->te_bv);
            c->te_pick = -1;
            c->te_esc = 1;
            return 1;
        }
        /* ①基点 の盤のあいだの押しは ① 確定 と同じで、文字は拾わない
         * （測定：textedit_s1_c1 の (300,250)）。 */
        if (c->te_sub == 1) {
            c->te_sub = 0;
            c->te_panel = 0;
            return 1;
        }
        if (c->te_sub) {
            /* ②文連結･切断・③疑似線文字：拾ったあとはまだ。外れは同じ。 */
            if (jw_cmd_text_at(d, w, sx, sy) < 0) {
                c->missed = 1;
            }
            return 1;
        }
        if (c->top_item == 0 && c->stage != 2) {
            c->top_item = right ? 2 : 1;
            c->top_right = 0;
            return 1;
        }
        /* ①文字変更 の段（書き換えた後の段 2 も）以外の拾い方はまだ
         * 移植していない。外れの言葉だけは同じ（`読取可能データ無`、
         * 測定：textedit_s0_c2・c3・c7）。 */
        if (c->top_item == 4 || c->top_item == 5) {
            return 1;           /* ④設定・⑤位置整理（範囲）はまだ */
        }
        k = jw_cmd_text_at(d, w, sx, sy);
        if (k < 0) {
            c->missed = 1;
            return 1;
        }
        /* ⑦文字消去：左でも右でも押した文字を消し、行に `[ESC]`（測定：
         * te7a・te7b）。 */
        if (c->top_item == 7) {
            jwc_remove_text(d, k);
            c->te_esc = 1;
            return 1;
        }
        if (c->top_item == 6) {
            jwc_retype_text(d, k, d->char_type,
                            c->te6_layer ? d->write_layer : -1, c->te6_hv);
            return 1;
        }
        if (c->top_item == 2 || c->top_item == 3) {
            c->te_pick = k;     /* 左でも右でも拾う（測定：te2a・te2b） */
            /* 移動では矢は文字の始点へ跳ぶ（測定：te2a の段 2、矢が
             * (172,152)）。複写では跳ばず、箱は押した所から（te3a）。 */
            if (c->top_item == 2) {
                at_screen(w, d->texts[k].x0, d->texts[k].y0, &c->te_mx,
                          &c->te_my);
            } else {
                c->te_mx = sx;
                c->te_my = sy;
            }
            return 1;
        }
        if (c->top_item != 1 && c->stage != 2) {
            return 1;
        }
        /* A press that finds nothing **visible** does nothing: SAMPLE6's
         * `40` is on group 1, which that drawing has turned off, and pressing
         * it leaves the original saying 読取可能データ無 with the item's own
         * line still up.  Whether a text that is visible but not *editable*
         * can be picked is not measured -- none of the fourteen drawings has
         * a layer where the two flags differ. */
        str = d->texts[k].text ? d->texts[k].text : "";
        c->top_item = 0;
        c->edit_text = k;
        c->typed_n = (int)strlen(str);
        if (c->typed_n > (int)sizeof c->typed - 1) {
            c->typed_n = (int)sizeof c->typed - 1;
        }
        memcpy(c->typed, str, (size_t)c->typed_n);
        c->typed[c->typed_n] = 0;
        c->typed_at = 0;
        c->typing_text = 1;
        c->pressed = 1;
        c->stage = 1;
        c->x0 = d->texts[k].x0;
        c->y0 = d->texts[k].y0;
        text_box(c, d);
        return 1;
    }
    if (c->command == 15) {
        /* 測定【①距離】 —— press point after point and it adds them up.
         *
         * Nothing is drawn and nothing is added to the drawing: the two
         * lengths go in the band beside the counts, in **metres**.  The first
         * press starts the run at zero; every one after it adds the leg from
         * the press before.  Measured on SAMPLE0 (unit_mm 1.744108): from
         * (129,263) to (329,163) is 0.128 m, and a third press at (379,263)
         * makes the total 0.192 with the leg 0.064. */
        double px, py;

        if (!take(c, d, w, sx, sy, right, &px, &py)) {
            if (c->meas_put) {
                c->missed = 1;      /* 測定：mes_d の `読取可能データ無` */
            }
            if (c->meas_hold == 2) {
                c->meas_hold = 0;   /* 外れの次の押しで数え箱が追いつく（measure_s1_c1） */
            } else if (c->meas_hold) {
                c->meas_hold = 2;
            }
            return 1;
        }
        if (c->meas_put) {
            /* 小数点位置の押し：累計を m で、小数 3 桁から末尾の 0（と点）を
             * 落として ` ｍ` を付け、**小数点の真ん中が押した所**に来るよう
             * 置く（小数点が無いときは文字列全体の後ろに点があるとして同じ
             * 式）。文字種類は図面の、レイヤは書込レイヤ。測定：0.25・0.41・
             * 0.086 が x 295.640 から、累計 0 の `0 ｍ` が 286.483 から。 */
            char num[48], pre[56];
            const unsigned char size = (unsigned char)d->char_type;
            double half, start, len;
            char *dot;
            int n;

            sprintf(num, "%.3f", c->meas_total);
            n = (int)strlen(num);
            while (n > 0 && num[n - 1] == '0') {
                num[--n] = 0;
            }
            if (n > 0 && num[n - 1] == '.') {
                num[--n] = 0;
            }
            strcat(num, " \x82\x8d");
            dot = strchr(num, '.');
            n = dot ? (int)(dot - num) : (int)strlen(num);
            memcpy(pre, num, (size_t)n);
            pre[n] = '.';
            pre[n + 1] = 0;
            half = d->text_w[size <= 10 ? size : 0] / 20.0 * d->unit_mm / 2.0;
            start = px - (jwc_text_length(d, pre, size) - half);
            len = jwc_text_length(d, num, size);
            jwc_add_text(d, (float)start, (float)py, (float)(start + len),
                         (float)py, num, size,
                         (unsigned char)d->write_layer);
            c->meas_put = 0;
            c->meas_hold = 1;           /* 置いた文は次の成功した点押しまで数え箱に数えない（measure_s1_c1・tmp/m5.txt） */
            /* 数え箱はこの押しでは書き直さない（測定：mes_a で 13 のまま、
             * 次の押しで 14）。 */
            return 0;
        }
        c->top_item = 0;                /* 押しで項目の行から 次点指示 へ */
        c->top_right = 0;
        if (c->stage != 1) {
            c->meas_total = 0.0;
            c->meas_last = 0.0;
            c->meas_n = 0;
        } else {
            const double dx = px - c->meas_x, dy = py - c->meas_y;
            const double mm = d->unit_mm > 0.0f ? d->denom / d->unit_mm : 1.0;

            c->meas_last = sqrt(dx * dx + dy * dy) * mm / 1000.0;
            c->meas_total += c->meas_last;
        }
        if (c->meas_hold == 2) {
            c->meas_hold = 0;
        }
        c->meas_x = px;
        c->meas_y = py;
        if (c->meas_n < JW_MEAS_MAX) {
            c->meas_px[c->meas_n] = px;
            c->meas_py[c->meas_n] = py;
            c->meas_n++;
        }
        c->stage = 1;
        return 1;
    }
    if (c->command == 19) {
        /* 正多角形 —— the centre, then a vertex.
         *
         * The vertex given **is** one of the corners, and the rest are at
         * 360/n round the centre from it, counter-clockwise.  Measured on
         * SAMPLE0: centre (179,213) and vertex (279,213) with six sides gives
         * (279,213), (229,299.603), (129,299.603), (79,213), (129,126.397),
         * (229,126.397) -- a circumradius of 100 all the way round.  With four
         * sides and a vertex at 45 degrees it comes out square on the axes,
         * which is the same rule.
         *
         * The lines carry **6** in the byte a drawn line carries 3 in,
         * whatever the number of sides. */
        double px, py;

        if (c->stage < 4) {
            return 0;           /* the sides have not been settled yet */
        }
        if (!take(c, d, w, sx, sy, right, &px, &py)) {
            return 1;
        }
        if (c->stage != 5) {
            c->x0 = px;
            c->y0 = py;
            c->n0_lines = d->n_lines;
            c->n0_arcs = d->n_arcs;
            c->n0_texts = d->n_texts;
            c->stage = 5;
            return 1;
        }
        /* 確定直後の [ESC] で戻せるように、この一つ分の線の範囲を覚えておく
         * （測定：tools/steps_table.py 19 t 2 t 1 t 5 e 300 250 450 250 esc。
         * src/cmd.h の pg2_undo_on 参照）。 */
        c->pg2_undo_from = d->n_lines;
        polygon(c, d, px, py);
        c->pg2_undo_on = 1;
        c->stage = 6;
        return 1;
    }
    if (c->command == 21) {
        /* 分割【仮点】 —— 仮点 spread evenly between two points.
         *
         * Two presses take the ends, and then the line asks `分割 数 = ` with
         * the last count offered as 前回と同じ ﾏｳｽ(R).  **N divisions leave
         * N-1 points**: typing 4 on SAMPLE0 takes the count of 仮点 still
         * available from 100 down to 97, and the band beside the counts says
         * `4 分割`.
         *
         * Nothing is added to the drawing itself -- 仮点 are the same
         * temporary points 点 drops, and they are not saved. */
        double px, py;

        /* 最初の行 `|①２点間分割点(L)|②円分割点(R)|…` では、図面の左押しは
         * ① を選ぶだけで点は取らない（測定：func_all divide_s1_c1、押したあと
         * `◇２点間分割点 始点指示 …|①【仮点】| 残 100`）。② は未移植。 */
        if (c->stage == 7) {
            /* ④：A は左で線を拾う（右は外れ扱い）、B は左で線（A と同じは 同一線）、右で点を読む、
             * 分割数の欄の右押しは前回値（測定：divide_s0_c4。decomp 01f5）。 */
            c->div4_same = 0;
            if (c->div4 == 3) {
                if (!right) {
                    return 1;
                }
                c->typed_n = 0;
                c->typed[0] = 0;
                return div4_accept(c, d);
            }
            if (c->div4 == 1) {
                const long k = right ? -1 : pick_line(d, w, sx, sy);

                if (k < 0) {
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                c->div4_a = k;
                c->div4 = 2;
                return 1;
            }
            if (right) {
                if (!take(c, d, w, sx, sy, 1, &px, &py)) {
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                c->div4_bpt = 1;
                c->div4_px = px;
                c->div4_py = py;
            } else {
                const long k = pick_line(d, w, sx, sy);

                if (k < 0) {
                    c->missed = 1;
                    return 0;
                }
                if (k == c->div4_a) {
                    c->div4_same = 1;
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                c->div4_bpt = 0;
                c->div4_b = k;
            }
            c->div4 = 3;
            c->typing = 1;
            c->typed[0] = 0;
            c->typed_n = 0;
            return 1;
        }
        if (c->stage == 6) {
            /* ②③の始点：円弧を拾う（L/R どちらも）。外れは `読取可能データ無`、近くに線があれば桁が
             * 一つ左で BEL なし（測定：divide_s0_c2・c3）。円弧が取れた先は未実装。 */
            const long k = jw_cmd_arc_at(d, w, sx, sy);

            if (k < 0) {
                c->pt_line = jw_cmd_line_at(d, w, sx, sy) >= 0;
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            return 1;
        }
        if (c->stage == 0) {
            if (right) {
                /* 最初の行の右押しは `②円分割点(R)` を選ぶ（測定のみ・decomp 未確認：escfz_t_5・t_7）。 */
                c->div2 = 2;
                c->stage = 6;
                return 1;
            }
            c->stage = 5;
            return 1;
        }
        /* `分割 数 =` の欄：左は効かず、右は 前回と同じ（測定）。 */
        if (c->stage == 2) {
            if (!right) {
                return 0;
            }
            c->typing = 0;
            c->typed_n = 0;
            c->typed[0] = 0;
            divide_points(c, d);
            c->stage = 4;
            return 1;
        }
        if (!take(c, d, w, sx, sy, right, &px, &py)) {
            return 1;
        }
        if (c->stage != 1) {
            /* Stage 4 is where [Enter] leaves it, asking for another start. */
            c->x0 = px;
            c->y0 = py;
            c->stage = 1;
            return 1;
        }
        c->x1 = px;
        c->y1 = py;
        c->stage = 2;
        c->typing = 1;
        c->typed_n = 0;
        c->typed[0] = 0;
        return 1;
    }
    if (c->command == 9) {
        /* ２線 —— a pair of lines either side of one already there.
         *
         * Three presses: the base line, then the start and the end.  The pair
         * is put down when the pointer **leaves the second point**, the way
         * 線切断 makes its cut, and the command then asks for another start
         * with the same base line still chosen.
         *
         * The two are parallel to the base at the two gaps the line offers
         * (75mm each side to begin with), and they run between the two points
         * **projected onto the base** -- so the points only say how far along
         * the pair goes.  Measured on SAMPLE0 (unit_mm 1.744108): base line 5
         * at y=305.616 with the points at drawing x=129 and x=329 gives
         * (129,436.424)-(329,436.424) and (129,174.808)-(329,174.808), which
         * is 130.808 either side = 75mm. */
        if (c->dl_ask) {
            if (!right) {
                const double t = c->gap_two[0];

                c->gap_two[0] = c->gap_two[1];
                c->gap_two[1] = t;
            }
            c->dl_ask = 0;
            c->typing = 0;
            c->typed_n = 0;
            c->top_item = 0;
            return 1;
        }
        if (c->pick_a < 0) {
            const long k = pick_line(d, w, sx, sy);

            if (k < 0) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->pick_a = k;
            /* What was there before this run: jw_cmd_after puts anything past
             * it back over the chrome. */
            c->n0_lines = d->n_lines;
            c->n0_arcs = d->n_arcs;
            c->n0_texts = d->n_texts;
            c->stage = 1;
            return 1;
        }
        /* 押しは位置を置くだけ。読みは矢が離れたとき（jw_cmd_track）。 */
        if (c->dl_wait) {
            return 1;               /* 同位置の再押しは 基準線変更(LL)／包絡(RR)：未実装 */
        }
        c->dl_wait = right ? 2 : 1;
        c->dl_sx = sx;
        c->dl_sy = sy;
        c->missed = 0;
        if (c->stage != 2) {
            c->dl_phase = 0;
            c->stage = 2;
            return 1;
        }
        c->dl_phase = 1;
        c->stage = 3;
        return 1;
    }
    if (c->command == 8 && c->ch_ask) {
        /* ③寸法= の欄：左は効かず（本物は行を出し直すだけ）、右は前回と同じ。
         * どちらでも `データが不適当` は消える（測定）。 */
        c->ch_bad = 0;
        if (!right) {
            return 0;
        }
        c->ch_ask = 0;
        c->typing = 0;
        return 1;
    }
    if (c->command == 8 && !c->chb) {
        /* 面取【角面】 —— the corner between two lines is cut off and the cut
         * is joined by a third.
         *
         * Two presses, Ａ then Ｂ.  Each line keeps **the side that was
         * pressed**, ending a little short of the corner, and the chamfer runs
         * between the two new ends.  The `寸法` on the top line is the length
         * of that chamfer in paper millimetres (30 to start with), so the two
         * ends are the same distance back from the corner and the cut is
         * isoceles.
         *
         * Measured on SAMPLE0 (unit_mm 1.744108) with line 5 (horizontal,
         * y=305.616) pressed at x=99 and line 0 (vertical, x=40.973) pressed
         * at y=163, which meet at (40.973,305.616):
         *
         *   line 5  ->  (77.971,305.616)-(110.737,305.616)
         *   line 0  ->  (40.973,268.618)-(40.973,44.000)
         *   new     ->  (77.971,305.616)-(40.973,268.618)
         *
         * 36.998 back along each, and the new line is 52.32 long -- which is
         * 30mm at that scale.  Two lines that do not meet answer
         * `データが不適当` and nothing happens. */
        const long k = pick_line(d, w, sx, sy);

        if (k < 0) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        c->ch_same = 0;
        /* The line above carries the chamfer length, so it has to be in the
         * numbers the chrome fills in (src/stage.h's `③寸法=%*.*f`). */
        c->num[0] = c->gap_chamfer;
        c->dec[0] = d->decimals;
        if (c->pick_a < 0) {
            /* What was there before this run -- jw_cmd_after puts anything
             * past it back over the chrome, and anything *before* it must be
             * left alone or the red mark goes under a fresh white line. */
            c->n0_lines = d->n_lines;
            c->n0_arcs = d->n_arcs;
            c->n0_texts = d->n_texts;
            c->pick_a = k;
            c->pick_x = sx;
            c->pick_y = sy;
            c->stage = 1;
            return 1;
        }
        if (k == c->pick_a) {
            /* 同じ線をもう一度：`データが不適当` で、最初の線を持ったまま（測定のみ・
             * decomp 未確認：escfz_R_86）。 */
            c->ch_same = 1;
            return 1;
        }
        chamfer(c, d, w, c->pick_a, k, sx, sy);
        c->pick_a = -1;
        c->stage = 2;
        return 1;
    }
    if (c->command == 20) {
        /* 中心線 —— the line half way between two others.
         *
         * Four presses: the two lines (Ａ then Ｂ), then the start and the end
         * of the piece to draw.  The two points are **projected onto the
         * bisector**, so they only say how far along it the new line runs.
         * Measured on SAMPLE0 -- see bisector() above.
         *
         * The new line is drawn with the writing pen and line type, and the
         * command goes straight back to its own first line (no `[ESC]` and no
         * `・` in front of it). */
        if (c->cl_pts == 1 || (c->stage == 0 && right && c->pick_a < 0)) {
            /* 最初を右で押すと点を読む：二点の中心線（測定：center_pts）。
             * 二つ目は (L)free (R)Read。 */
            double qx, qy;

            if (!take(c, d, w, sx, sy, right, &qx, &qy)) {
                return 1;
            }
            if (c->cl_pts == 0) {
                c->cl_x1 = qx;
                c->cl_y1 = qy;
                c->cl_pts = 1;
                c->stage = 1;
                return 1;
            }
            c->cl_x2 = qx;
            c->cl_y2 = qy;
            c->cl_pts = 2;
            c->pick_a = c->pick_b = 0;  /* 以下の点の段へ */
            c->stage = 2;
            return 1;
        }
        if (c->pick_a < 0 || c->pick_b < 0) {
            const long k = pick_line(d, w, sx, sy);

            if (k < 0) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            if (c->pick_a < 0) {
                c->n0_lines = d->n_lines;
                c->n0_arcs = d->n_arcs;
                c->n0_texts = d->n_texts;
                c->pick_a = k;
                c->pick_x = sx;
                c->pick_y = sy;
                c->stage = 1;
            } else {
                c->pick_b = k;
                c->pick_bx = sx;
                c->pick_by = sy;
                c->stage = 2;
            }
            return 1;
        }
        {
            double px, py;

            if (!take(c, d, w, sx, sy, right, &px, &py)) {
                return 1;
            }
            if (c->stage == 2) {
                c->x0 = px;
                c->y0 = py;
                c->stage = 3;
                return 1;
            }
            centre_line(c, d, w, px, py);
            c->pick_a = -1;
            c->pick_b = -1;
            c->cl_pts = 0;
            /* Back to its own line, with an `[ESC]` in front -- src/stage.h
             * keeps that as stage 4. */
            c->stage = 4;
            return 1;
        }
    }
    if (c->command == 6) {
        /* 線伸縮 —— a line is stretched (or shortened) to a point.
         *
         * The first press takes the line, and the line above changes to
         * `○ 線伸縮の 指定点 をマウス指示 (L)free (R)Read`; the second gives
         * the point.  **The end that moves is the one nearer the press on the
         * line**, and it goes to the foot of the perpendicular from the point
         * -- the line keeps its direction.  Measured on SAMPLE0's line 5
         * (y=305.616, x 40.973..110.737):
         *
         *   pressed at x=99, point (179,263)  ->  40.973..179.000
         *   pressed at x=49, point (179,306)  ->  179.000..110.737
         *   pressed at x=99, point (19,213)   ->  40.973..19.000
         *
         * The third one crosses the other end and the record simply keeps the
         * new pair, back to front.  The record moves to the end of the list,
         * like コーナー連結's, and the counts do not change. */
        if (c->pick_a < 0) {
            const long k = pick_line(d, w, sx, sy);

            if (k < 0) {
                /* 外れると行は `[ESC]` の無い段 0 に戻ります（測定）。 */
                c->missed = 1;
                c->stage = 0;
                return 0;
            }
            c->missed = 0;
            if (right) {
                /* 線切断: the line is cut where it was pressed, but only once
                 * the pointer moves away -- see jw_cmd_track. */
                double px, py, t, dx, dy, n;
                const JwcLine *l = &d->lines[k];

                jw_cmd_at(w, sx, sy, &px, &py);
                dx = l->x1 - l->x0;
                dy = l->y1 - l->y0;
                n = dx * dx + dy * dy;
                if (n <= 0.0) {
                    return 0;
                }
                t = ((px - l->x0) * dx + (py - l->y0) * dy) / n;
                c->pick_a = k;
                c->cut_x = l->x0 + t * dx;
                c->cut_y = l->y0 + t * dy;
                c->stage = 2;
                c->cutting = 1;
                return 1;
            }
            c->pick_a = k;
            c->pick_x = sx;
            c->pick_y = sy;
            c->stage = 1;
            return 1;
        }
        /* 読取が外れたら同じ段のまま待ちます（測定：`サーチ`
         * `.読取可能データ無` のあとも `○ 線伸縮の 指定点 をマウス指示`）。 */
        if (!stretch_to(c, d, w, c->pick_a, sx, sy, right)) {
            c->missed = 1;
            return 0;
        }
        c->pick_a = -1;
        c->stage = 2;
        return 1;
    }
    if (c->command == 7) {
        /* コーナー連結 —— two lines are made to meet at a corner.
         *
         * The first press takes 「Ａ」 and the line asks for 「Ｂ」; the second
         * takes Ｂ and both lines are re-cut so that they end at the crossing
         * of the two **infinite** lines.  Measured on SAMPLE0 with line 5
         * (a short horizontal at y=305.616, x 40.973..110.737) and line 2
         * (a vertical at x=477): they come back as (40.973,305.616)-(477,305.616)
         * and (477,323.057)-(477,305.616) -- one extended well past its old
         * end, the other shortened.
         *
         * **The side that is kept is the side that was pressed.**  Pressing
         * line 2 low down (drawing y=163) keeps 44..305.616; pressing it above
         * the corner (y=315) keeps 323.057..305.616.  So the piece that
         * survives is the one the pressed point lies on -- which is the rule
         * whether the corner is inside the segment or beyond its end.
         *
         * Both records go to the **back of the list**, in the order they were
         * pressed, and the counts do not change: 30|13 before and after. */
        const long k = pick_line(d, w, sx, sy);

        if (k < 0) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        if (c->pick_a < 0 && right) {
            /* **線切断 ﾏｳｽ(R)**：押した点を線に下ろした所で二本に分けます。
             * 元の線を抜き、始点側・終点側の順に最後へ（測定：右の辺を
             * (598,300) で切ると 139.943〜300 と 300〜419 の 2 本）。
             * 座標系は 1bb4:27ea と同じ float の cos/sin、原点は始点。 */
            const JwcLine l = d->lines[k];
            const double dx = (double)l.x1 - l.x0, dy = (double)l.y1 - l.y0;
            const double len = sqrt(dy * dy + dx * dx);
            float cs, sn, u, qx, qy;
            double px, py;

            if (len <= 0.0) {
                return 0;
            }
            cs = (float)(dx / len);
            sn = (float)(dy / len);
            jw_cmd_at(w, sx, sy, &px, &py);
            u = (float)(((double)(float)py - l.y0) * sn
                        + ((double)(float)px - l.x0) * cs);
            qx = (float)((double)cs * u + l.x0);
            qy = (float)((double)sn * u + l.y0);
            jwc_remove_line(d, k);
            if (jwc_add_line(d, l.x0, l.y0, qx, qy, l.type, l.pen, l.layer)) {
                memcpy(d->lines[d->n_lines - 1].rest, l.rest, 4);
            }
            if (jwc_add_line(d, qx, qy, l.x1, l.y1, l.type, l.pen, l.layer)) {
                memcpy(d->lines[d->n_lines - 1].rest, l.rest, 4);
            }
            c->co_undo[0] = l;
            c->co_undo_n = 1;
            c->co_undo_new = 2;
            if (c->cut_n < 20) {
                c->cut_px[c->cut_n] = qx;
                c->cut_py[c->cut_n] = qy;
                c->cut_n++;
            }
            c->stage = 2;
            return 1;
        }
        if (c->pick_a < 0) {
            c->pick_a = k;
            c->pick_x = sx;
            c->pick_y = sy;
            c->stage = 1;
            return 1;
        }
        {
            double qx, qy;

            if (k == c->pick_a || !cross_at(&d->lines[c->pick_a], &d->lines[k], &qx, &qy)) {
                /* 同じ線・平行な線：`計算不可` で、最初の線を持ったまま（測定のみ・
                 * decomp 未確認：escfz_V_84）。 */
                c->ch_same = 2;
                return 1;
            }
        }
        corner_join(c, d, w, c->pick_a, k, sx, sy);
        c->pick_a = -1;
        c->stage = 2;
        return 1;
    }
    if (c->command == 24 && !c->lc_range) {
        /* 線変更: one press, and the line or the arc under the pointer takes
         * the pen, the line type and the layer being written to.
         *
         * Measured by having the original do it and save the file
         * (`PRE=` with tools/save.sh).  SAMPLE6 writes with pen 4, line type 1
         * and layer 2; pressing its line 38, which is pen 1 on layer 0, gives
         *
         *     before  type=1 pen=1 rest=00 f6 00 08
         *     after   type=1 pen=4 rest=02 f6 01 08
         *
         * -- the pen, the layer, and **bit 0 of the third of the four bytes**,
         * which is the mark the entity search leaves on whatever it found
         * (RESUME 4.9b: the walk clears it on every record and sets it on the
         * one it answers with).  Nothing else in the file moves: one record of
         * 1,189 differs, and it is the only one with that bit set.
         *
         * The layer moves because the line offers `②レイヤ変更【有】`; what
         * 【無】 does is not measured, and neither is `①指定範囲内変更` nor
         * `③属性設定`.
         *
         * Which entity it takes is the plain pick -- no filtering by the
         * writing pen, which would make the command useless -- so it is
         * jw_cmd_line_at, the same as 線消's. */
        const long k = pick_line(d, w, sx, sy);
        const long j = k < 0 ? jw_cmd_arc_at(d, w, sx, sy) : -1;
        const unsigned char layer =
            (unsigned char)(d->write_layer);

        if (k < 0 && j < 0) {
            /* Nothing there: the original writes `.読取可能データ無` and puts
             * its own line back -- no `[ESC]`, which is the stage-1 line -- so
             * the command stays where it was. */
            c->missed = 1;
            c->stage = 0;       /* `[ESC]` と 線変更 の札は消える（linechg_plain） */
            c->hit_kind = 0;
            return 1;
        }
        c->missed = 0;
        c->top_item = 0;        /* ②レイヤ変更 の升の行から押しで抜ける（linechg_s0_c2） */
        c->top_right = 0;
        /* The word beside the counts is `線` for a line and `円` for an arc
         * (measured: pressing SAMPLE6's arc at (446,189) says 円 変更). */
        c->hit_kind = k >= 0 ? 1 : 2;
        c->lc_keyed = 0;
        /* **The original paints the old one out and draws the new one over
         * it**, without redrawing anything else: on SAMPLE6's (499,271) its
         * line calls are `(499,302)-(499,240)` in colour 0 and then the same
         * in colour 6 (DOSEMU_BP=+10a9:07dc).  So the ends, which the lines
         * meeting there share, are the new colour -- two pixels the port
         * missed by redrawing from the records.  The ink replays that. */
        if (k >= 0) {
            jwc_ink_note(d, 1, JW_INK_LINE, &d->lines[k]);
        } else {
            jwc_ink_note(d, 1, JW_INK_ARC, &d->arcs[j]);
        }
        /* **The layer only moves when ②レイヤ変更 is 【有】** (c->lc_off
         * clear).  Driven against the original with it switched to 【無】
         * (SAMPLE6, the same (499,271) press as above): the saved file's
         * pen byte still goes 1 -> 4 and the touched bit (rest[2]) still
         * sets, but the layer byte (rest[0], right after pen) stays 00 --
         * it does not become 02.  decomp/ovl26 reads DS:[0x5e40] (the same
         * 【有】/【無】 flag c->lc_off mirrors) several times further into
         * FUN_4000_0cb6; this is what it gates. */
        if (k >= 0) {
            d->lines[k].type = (unsigned char)d->line_type;
            d->lines[k].pen = (unsigned char)d->pen;
            if (!c->lc_off) {
                d->lines[k].layer = layer;
                d->lines[k].rest[0] = layer;
            }
            d->lines[k].rest[2] |= 1;
        } else {
            d->arcs[j].type = (unsigned char)d->line_type;
            d->arcs[j].pen = (unsigned char)d->pen;
            if (!c->lc_off) {
                d->arcs[j].layer = layer;
                d->arcs[j].rest[0] = layer;
            }
            d->arcs[j].rest[2] |= 1;
        }
        if (k >= 0) {
            jwc_ink_note(d, 0, JW_INK_LINE, &d->lines[k]);
        } else {
            jwc_ink_note(d, 0, JW_INK_ARC, &d->arcs[j]);
        }
        c->stage = 1;
        return 1;
    }
    /* 線変更 ①指定範囲内変更 の追加・除外の行で右を押しても何も起こらず、札も消える（測定：linechg_s0_c1）。 */
    if (((c->command == 24 && c->lc_range && !c->lc_attr) || (c->command == 8 && c->chb))
        && c->pressed == 2 && c->stage == 3 && right) {
        c->missed = 0;
        return 0;
    }
    if (JW_RANGE(c)) {
        /* 消去: the first press takes a corner of the range and the second,
         * with the right button, fixes it -- 範囲確定, as the line it puts up
         * says.  What the box holds whole is then painted in colour 2 and the
         * top line asks for ①実行.  See RESUME.md 4.9.
         *
         * 複写 takes its range exactly the same way, and its lines are spelt
         * the same but for the word in front (src/copy.h).  Where it differs
         * is after 範囲確定: 消去 asks ①実行, 複写 asks **how** to copy. */
        jw_cmd_at(w, sx, sy, &x, &y);
        /* 変形 ②包絡処理変形 の二押し。始点はどちらのボタンでも取れ、
         * 終点は左で包絡、**右で範囲内消去** です。取るのは free で、
         * 行にも (L)free (R)Read とは出ません。 */
        if (c->command == 17 && c->hen_env) {
            c->hen_env_msg = 0;
            if (!c->pressed) {
                c->x0 = x;
                c->y0 = y;
                c->pressed = 1;
                c->stage = 1;
                return 0;
            }
            c->x1 = x;
            c->y1 = y;
            {
                const int got = right ? env_cut(c, d) : env_wrap(c, d);

                if (got < 0) {
                    c->hen_env_msg = 1;
                } else if (got) {
                    c->hen_env_did = 1;
                }
            }
            c->pressed = 0;
            c->stage = 0;
            return 1;
        }
        if (JW_MOVE_CMD(c->command) && c->stage == 7) {
            /* 前回と同じ ﾏｳｽ(R): copy at the distance it remembers. */
            if (!right) {
                return 0;
            }
            c->typing = 0;
            c->stage = 8;
            copy_by_mm(c, d);
            return 1;
        }
        if (JW_MOVE_CMD(c->command) && c->stage >= 4) {
            /* ①ﾏｳｽ位置: the first press takes the base point of the original
             * (段 5) and the second says where it goes (段 6).  It does not
             * end there -- the line becomes `再複写 位置指示` (段 9) and every
             * press after that puts another one down.  Both presses are
             * (L)free (R)Read, like every other point. */
            double px, py;

            if (c->mscale) {
                /* ④ﾏｳｽ倍率.  The box round the original and the box the copy
                 * has to fill; the scale is one against the other, and the
                 * rest is ③数値倍率 (scale_range).
                 *
                 * Measured on SAMPLE0, range (150,130)-(245,170), the four
                 * presses at screen (200,300) (300,380) (350,200) (550,360)
                 * -- records (79,163) (179,83) (229,263) (429,103), so the
                 * boxes are 100 x -80 and 200 x -160 and the scale is 2 by 2.
                 * Line 5 comes out (152.946,548.232)-(292.475,548.232) and
                 * text 0 (173.344,558.914)-(215.202,558.914), which is
                 * S(p - 基準点) + 置く点 with the text keeping its length. */
                if (!take(c, d, w, sx, sy, right, &px, &py)) {
                    return 1;
                }
                if (c->mscale == 1) {
                    c->base_x = px;
                    c->base_y = py;
                    c->mscale = 2;
                    c->stage = 22;
                    return 1;
                }
                if (c->mscale == 2) {
                    c->msc_bx = px;
                    c->msc_by = py;
                    c->mscale = 3;
                    c->stage = 23;
                    return 1;
                }
                if (c->mscale == 3) {
                    c->msc_px = px;
                    c->msc_py = py;
                    c->mscale = 4;
                    c->stage = 24;
                    return 1;
                }
                {
                    const double ax = c->msc_bx - c->base_x;
                    const double ay = c->msc_by - c->base_y;

                    /* A box with no width or no height says nothing about
                     * that axis, so it is left alone rather than divided by
                     * zero.  Not measured -- the original may well refuse the
                     * press instead. */
                    c->scale_x = ax != 0.0 ? (px - c->msc_px) / ax : 1.0;
                    c->scale_y = ay != 0.0 ? (py - c->msc_py) / ay : 1.0;
                }
                scale_range(c, d, c->msc_px, c->msc_py);
                c->step_x = c->msc_px - c->base_x;
                c->step_y = c->msc_py - c->base_y;
                c->copies = 1;
                c->mscale = 5;
                c->stage = 25;
                return 1;
            }
            if (c->rotate || c->scaling) {
                /* ⑥回転 and ③数値倍率 run ①ﾏｳｽ位置's two presses with a
                 * number between them: 基準点 (段 13 / 17), the field
                 * (14 / 18), 位置 (15 / 19), and then 再複写 (16 / 20),
                 * where every further press puts another one down. */
                int *state = c->rotate ? &c->rotate : &c->scaling;
                const int field = c->rotate ? 14 : 18;
                const int done = c->rotate ? 16 : 20;

                if (*state == 2) {
                    return 0;           /* the field has it */
                }
                if (!take(c, d, w, sx, sy, right, &px, &py)) {
                    return 1;
                }
                if (*state == 1) {
                    c->base_x = px;
                    c->base_y = py;
                    *state = 2;
                    c->stage = field;
                    c->typing = 1;
                    c->typed_n = 0;
                    c->typed[0] = 0;
                    return 1;
                }
                if (c->rotate) {
                    turn_range(c, d, px, py);
                } else {
                    scale_range(c, d, px, py);
                }
                c->step_x = px - c->base_x;
                c->step_y = py - c->base_y;
                c->copies = 1;
                *state = 4;
                c->stage = done;
                return 1;
            }
            /* 段 4（`|①ﾏｳｽ位置(L,R)|…`）で図面を押すと、①ﾏｳｽ位置 を選ぶと
             * 同時にそれが基点（変形 と同じ。測定：範囲を右で閉じて二点で移動）。 */
            if (c->stage != 4 && c->stage != 5 && c->stage != 6
                && c->stage != 9) {
                return 0;
            }
            if (!take(c, d, w, sx, sy, right, &px, &py)) {
                return 1;
            }
            if (c->stage == 5 || c->stage == 4) {
                c->base_x = px;
                c->base_y = py;
                c->stage = 6;
                return 1;
            }
            place_at(c, d, px, py);
            c->stage = 9;
            return 1;
        }
        if (c->command == 17 && c->stage >= 4) {
            /* ①ﾏｳｽ位置: the base point (段 5) and then where it goes (段 6).
             * **A press in the drawing at 段 4 does both** -- it picks
             * ①ﾏｳｽ位置 and is the base -- which is what the line's `(L,R)`
             * means.  Measured: pressing the cell at the top stops at 段 5,
             * a press in the drawing goes straight to 段 6. */
            double px, py;

            if (c->stage != 4 && c->stage != 5 && c->stage != 6
                && c->stage != 9 && c->stage != 19) {
                return 0;
            }
            if (!take(c, d, w, sx, sy, right, &px, &py)) {
                return 1;
            }
            if (c->stage == 4 || c->stage == 5) {
                c->base_x = px;
                c->base_y = py;
                if (c->scaling == 1) {
                    c->scaling = 2;
                    c->stage = 18;
                    c->typing = 1;
                    c->typed_n = 0;
                    c->typed[0] = 0;
                    return 1;
                }
                c->stage = 6;
                return 1;
            }
            if (c->scaling == 3) {
                c->n0_lines = d->n_lines;
                c->n0_arcs = d->n_arcs;
                c->n0_texts = d->n_texts;
                henkei_scale(c, d, px, py);
                c->scaling = 4;
                c->stage = 20;
                return 1;
            }
            c->n0_lines = d->n_lines;
            c->n0_arcs = d->n_arcs;
            c->n0_texts = d->n_texts;
            henkei_at(c, d, px, py);
            /* and the base follows, so 再変形 carries on from where it is */
            c->base_x = px;
            c->base_y = py;
            c->stage = 9;
            return 1;
        }
        /* 図形：升を押さずに図面を**左**で押すと、範囲は始めずに 図形範囲 の
         * 行（[ESC] 付き）になるだけ。次の押しから始点（測定：func_all
         * zukei_plain）。
         *
         * **右**で図面を直接押すと ①登録 の範囲にはならない（測定のみ・
         * decomp 未確認：tools/emu.sh で SAMPLE0 を開いて 図形→図面を右で
         * 一回押すと、帯は ①~⑧ の一覧のままで `ファイル`/`書込` の見出しが
         * 消え、代わりに `登録図形がありません（グループ変更）` が出て、
         * 升も範囲もどちらも始まらない――これは JwUi.again が出す画面と
         * 1 ピクセル違わず同じ。登録図形がある場合にその場で拾う分岐は
         * 未実装（zukei_n==0 の配布図面でしか確かめていない）。 */
        /* 変形 の最初の行：左の押し（[bp-0xa]==1）は ①パラメトリック変形、右の押し
         * （==2）は ②包絡処理変形 を選ぶだけで、押した点は始点にならない（decomp
         * ovl11 3ab8:305f の 02dd58／02dd6e。画面は henkei_plain の 400 140 left）。 */
        if (c->command == 17 && !c->pressed && !c->again && !c->hen_env
            && !c->hen_dbl && !c->hen_kigou) {
            if (right) {
                c->hen_env = 1;
            } else {
                c->again = 1;
            }
            return 1;
        }
        if (c->command == 27 && !c->zukei && !c->pressed && c->top_item == 4) {
            /* ④グループ変更：枠の升を押すとその升が選ばれる（測定：zukei_s0_c4）。 */
            if (!c->zukei_drive && sx >= 144 && sx < 624 && sy >= 56 && sy < 376) {
                c->zukei_cell = (sy - 56) / 32 * 5 + (sx - 144) / 96;
            }
            return 1;
        }
        if (c->command == 27 && !c->zukei && !c->pressed) {
            if (c->top_item == 2 && c->zukei_n == 0) {
                c->zukei_blank = 1;     /* 登録図形なしの ②読込 から範囲へ（測定のみ：zukei_s0_c2） */
            }
            if (c->zukei_blank && (c->top_item == 2 || c->top_item == 4 || c->top_item == 5)) {
                c->top_item = 0;
                c->top_right = 0;
            }
            if (right) {
                if (c->zukei_n == 0) {
                    c->again = 1;
                }
                return 1;
            }
            c->again = 0;       /* leaving the idle screen for 範囲 */
            c->zukei = JW_ZUKEI_RANGE;
            return 1;
        }
        if (!c->pressed) {
            c->again = 0;           /* 変形：始点の行を出し終えた */
            c->x0 = x;
            c->y0 = y;
            c->pressed = 1;
            c->stage = 1;
            /* 消去 ①②の升で出た行（src/item.h）は始点の押しで範囲の行に
             * 替わる（測定：erase_range_out の始点の押しで `終点指示` の行）。 */
            c->er_pt = c->command == 25 && c->top_item != 0;
            c->er_item = c->er_pt ? c->top_item : 0;
            if (c->command == 25 || c->command == 8) {
                c->top_item = 0;
                c->top_right = 0;
            }
            /* ③指定範囲 asks with which button, and says so along the top. */
            c->with_text = right;
            return 0;
        }
        if (c->pressed == 1) {
            c->x1 = x;
            c->y1 = y;
            c->pressed = 2;
            if (JW_MOVE_CMD(c->command) || c->command == 24 || c->command == 27) {
                prev_range[0] = c->x0;
                prev_range[1] = c->y0;
                prev_range[2] = c->x1;
                prev_range[3] = c->y1;
                prev_range_ok = 1;
            }
            /* The selection is the entities that exist now; 複写's copies go
             * on the end and are not part of it. */
            c->n0_lines = d->n_lines;
            c->n0_arcs = d->n_arcs;
            c->n0_texts = d->n_texts;
            /* The right button fixes the range and asks for ①実行; the left
             * one fixes the same range but stays, so that entities can be
             * taken out of it and put back one at a time.  Measured: both
             * leave the same 224 red pixels on SAMPLE0's (150,130)-(245,170),
             * and only the top line differs. */
            /* 複写 has no ①実行, so the right button fixes the range into
             * the same 追加･除外 stage the left one does. */
            /* 複写・移動も右で閉じると範囲確定して ①ﾏｳｽ位置 へ（測定：移動を
             * 右で閉じて二点で動かし [ESC] で戻すと、y に float の丸めが残る）。 */
            c->stage = (right && (c->command == 25 || c->command == 8
                                  || c->command == 28
                                  || c->command == 13)) ? 2
                     : (right && JW_MOVE_CMD(c->command)) ? 4 : 3;
            return 1;
        }
        /* 文編集 ⑤位置整理 の `始点指示 (L)free (R)Read`：選んだ文字の始点 x を
         * その点に揃え、y はそのまま（②行間(現位置)）。記録の場所は
         * 動かない。範囲の始めの行へ戻る（測定：tmp/te5.txt
         * te5a・te5b）。 */
        if (c->command == 28 && c->pressed == 2 && c->stage == 2) {
            double px, py;
            long k;

            if (!take(c, d, w, sx, sy, right, &px, &py)) {
                c->missed = 1;
                return 1;
            }
            /* 行間を決めてあるときは、上の字から順に始点を押した所から
             * 行間（図寸 mm × 倍率）ずつ下へ並べ、記録はその順に末尾へ
             * （測定：te5e、`Ｈ７－Ａ００１` と `H7.8.31` を 10mm で）。
             * cursor は呼ぶたびに掛け直すのではなく `-= 行間/B4A2` を
             * float で積み上げる（RESUME 文編集⑤の記述。gap・unit_mm の
             * 大きさ自体は te5e で合っている掛け算の形をそのまま使い、
             * 積み方だけ毎回の i 掛けから累積に直した＝測定のみ・decomp
             * 未確認）。27ea（＝ed_length、長さ 0 の判定だけ jwc_ed_text_length
             * で呼ぶ）が長さ 0 を返す字は並べにも書き直しにも入れない
             * （decomp 同域の「長さ 0 は飛ばす」）。**終点を常に y1=y0 で
             * 水平に「引き直す」のは未確認のまま外した**――SAMPLE0 で
             * 試せる押し方は水平な字しか選べず（90°の字は範囲に入れると
             * te5a・te5b のどちらも実機と合わなくなる別件を踏んだため
             * このセッションでは試せていない）、引き直すと長さの丸めが
             * 1 ulp 増えて te5b が実機と違ってしまった。終点は元のとおり
             * 始点と同じだけずらす式に戻してある（水平な字では結果的に
             * y1=y0 のまま）＝測定のみ・decomp未確認。 */
            if (c->te5_gap > 0.0) {
                long order[512], n = 0, i, j;
                float cursor = (float)py;
                const float step = (float)(c->te5_gap * d->unit_mm);

                for (k = 0; k < c->n0_texts && k < d->n_texts && n < 512;
                     k++) {
                    if (picked_text(c, d, k)
                        && jwc_ed_text_length(d, d->texts[k].text
                                              ? d->texts[k].text : "",
                                              d->texts[k].size,
                                              (d->texts[k].rest[2] & 0x20)
                                              != 0) != 0.0) {
                        order[n++] = k;
                    }
                }
                for (i = 1; i < n; i++) {       /* 上（y の大きい）から */
                    const long v = order[i];

                    for (j = i; j > 0 && d->texts[order[j - 1]].y0
                                         < d->texts[v].y0; j--) {
                        order[j] = order[j - 1];
                    }
                    order[j] = v;
                }
                for (i = 0; i < n; i++) {
                    const JwcText t = d->texts[order[i]];
                    const float nx = (float)px;
                    const float ny = cursor;
                    long m;

                    jwc_requeue_text(d, order[i], nx, ny,
                                     (float)(nx + ((double)t.x1 - t.x0)),
                                     (float)(ny + ((double)t.y1 - t.y0)));
                    for (m = i + 1; m < n; m++) {
                        if (order[m] > order[i]) {
                            order[m]--;
                        }
                    }
                    cursor -= step;
                }
                c->pressed = 0;
                c->stage = 0;
                c->n_flip = 0;
                return 1;
            }
            /* 現位置：いちばん上の字の y はそのまま、ほかの字は上の字から
             * の差を float に丸めてから足し直す（測定：te5f で `H7.8.31` の
             * y が 2 ulp 動く）。**記録の場所は動かない**（測定：te5a・
             * te5b・te5f・te5g、押した字がそのまま同じ場所に残り末尾には
             * 来ない——末尾へ積み直すのは②行間を決めた側の枝だけだった。
             * jwc_requeue_text を一度ここでも使ってみたが 192.168.11.37 の
             * 実機と比べて記録順がずれたので外した）。長さ 0 の字は飛ばす
             * （decomp 同域の記述）。終点を常に水平に引き直すのは上の枝と
             * 同じ理由（te5b で 1 ulp 違う）で外したまま、元の「始点と
             * 同じだけずらす」式に戻してある。 */
            {
                long sel[512], n = 0, i;
                float top = 0.0f;

                for (k = 0; k < c->n0_texts && k < d->n_texts && n < 512;
                     k++) {
                    if (picked_text(c, d, k)
                        && jwc_ed_text_length(d, d->texts[k].text
                                              ? d->texts[k].text : "",
                                              d->texts[k].size,
                                              (d->texts[k].rest[2] & 0x20)
                                              != 0) != 0.0) {
                        if (!n || d->texts[k].y0 > top) {
                            top = d->texts[k].y0;
                        }
                        sel[n++] = k;
                    }
                }
                for (i = 0; i < n; i++) {
                    /* 終点は始点と同じだけずらす（長さを引き直すと te5b の
                     * `jw_software club` が 1 ulp 違う。ずらすほうは
                     * te5a・te5b・te5f・te5g の 4 件とも一致）。 */
                    JwcText *t = &d->texts[sel[i]];
                    const float nx = (float)px;
                    const float dy = t->y0 - top;
                    const float ny = dy + top;

                    t->x1 = (float)(nx + ((double)t->x1 - t->x0));
                    t->y1 = (float)(ny + ((double)t->y1 - t->y0));
                    t->x0 = nx;
                    t->y0 = ny;
                }
            }
            c->pressed = 0;
            c->stage = 0;
            c->n_flip = 0;
            return 1;
        }
        if (c->command == 8 && c->pressed == 2 && c->stage == 2) {
            /* `①実行(L)|②中止(R)`：図面の左で実行、右で中止（行のとおり。
             * 押しで確かめたのは ① の升だけ）。 */
            return jw_cmd_top(c, d, right ? 2 : 1, 0);
        }
        if (c->command == 25 && c->stage == 2 && !right) {
            /* `復活出来ません |①実行(L)|②中止(R)|` で図面を左で押すと、まず
             * `消去 再度(L)`、もう一度左で消す（測定：STR と記録）。 */
            if (!c->erase_again) {
                c->erase_again = 1;
                return 1;
            }
            c->erase_again = 0;
            return jw_cmd_top(c, d, 1, 0);
        }
        if (c->stage == 3) {
            /* 追加･除外: 線・円 with the left button, 文字 with the right. */
            long k, j;

            /* 文編集 ⑤ は文字だけなので左も文字（行が `（文字）`）。 */
            if (right || c->command == 28 || c->command == 13) { /* 文字(R) */
                k = jw_cmd_text_at(d, w, sx, sy);
                if (k < 0) {
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                flip(c, JW_FLIP_TEXT, k);
                return 1;
            }
            /* 線の探索は読み取りの印を付け直す（pick_line と同じ。測定：
             * copy_s_add で (598,300) を押すと線 2 に 0x01、線 11 の 0x01 は
             * 落ちる）。文字(R) の押しは印に触らない。 */
            for (k = 0; k < d->n_lines; k++) {
                d->lines[k].rest[2] &= (unsigned char)~1u;
            }
            for (k = 0; k < d->n_arcs; k++) {
                d->arcs[k].rest[2] &= (unsigned char)~1u;
            }
            near_mark(d, w, sx, sy);
            /* 0, not 1: the pen and line type only narrow the search while
             * a modifier key is held -- see writing_kind above. */
            k = jw_cmd_line_at_kind(d, w, sx, sy, 0);
            j = k < 0 ? jw_cmd_arc_at_kind(d, w, sx, sy, 0) : -1;
            if (k < 0 && j < 0) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            flip(c, k >= 0 ? JW_FLIP_LINE : JW_FLIP_ARC, k >= 0 ? k : j);
            return 1;
        }
        return 0;
    }
    if (c->command == 22 && c->pt_delall) {
        if (!right) {
            if (d) {
                d->n_temp = 0;
            }
            c->pt_mode = 0;
            c->pt_undo = 0;
            c->stage = 0;
        } else {
            c->top_item = 5;
        }
        c->pt_delall = 0;
        return 1;
    }
    if (c->command == 22) {
        c->pt_plain = 0;            /* 押すと札は戻る（測定のみ：escfz_v_8） */
        /* 点: a press drops a 仮点.  The original changes neither count
         * (SAMPLE0 stays at 30|13), writes nothing on the top line, and
         * repaints the panel -- read off a press at (300,250) with 点 picked,
         * which leaves the twelve white pixels of a circle of radius two there
         * and nothing else.  Two presses leave two. */
        if (c->pt_mode == 2) {
            /* ②距離（decomp 0x2f596〜0x2fe47）。S0 始点、S3 円弧（円周のみ）、S1 距離の欄、S2 方向点。 */
            c->pt2_bad = 0;
            if (c->pt2 == 1) {
                /* 欄に打ってあれば左右どちらの押しも確定（位置は使わない。測定：pj_a/b）。空なら
                 * 右（前回と同じ）だけ（測定：point_s0_c2 の左押しは何も起きない）。 */
                if (!c->typed_n && !right) {
                    return 1;
                }
                return pt2_accept(c, d);
            }
            if (c->pt2 == 3) {
                const long k = jw_cmd_arc_at(d, w, sx, sy);

                if (k < 0) {
                    c->pt_line = jw_cmd_line_at(d, w, sx, sy) >= 0;
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                if ((float)d->arcs[k].cx == (float)c->pt2_x1 && (float)d->arcs[k].cy == (float)c->pt2_y1) {
                    c->pt2_bad = 1;
                    c->missed = 1;
                    return 0;
                }
                c->pt2_arc = k;
                c->pt2 = 1;
                c->typing = 1;
                c->typed[0] = 0;
                c->typed_n = 0;
                return 1;
            }
            if (!take(c, d, w, sx, sy, right, &x, &y)) {
                c->pt_line = 0;
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            if (c->pt2 == 2) {
                c->pt2_x2 = x;
                c->pt2_y2 = y;
                pt2_make(c, d);
                c->pt2 = 0;
                return 1;
            }
            c->pt_undo = 0;
            c->pt2_x1 = x;
            c->pt2_y1 = y;
            if (c->pt2_circ) {
                c->pt2 = 3;
            } else {
                c->pt2 = 1;
                c->typing = 1;
                c->typed[0] = 0;
                c->typed_n = 0;
            }
            return 1;
        }
        if (c->pt_mode == 3) {
            /* ③交点：対象線 A を拾い、対象線 B を拾うと二本の延長の交点に点を足して A に戻る
             * （測定：point_s0_c3 の 162 250 で枠の左上の角）。外れは `読取可能データ無`。 */
            const long k = pick_line(d, w, sx, sy);
            double ix, iy;

            if (k < 0) {
                c->pt_par = 0;
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            if (!c->pt3) {
                c->pt3_a = k;
                c->pt3 = 1;
                return 1;
            }
            if (!cross_at(&d->lines[c->pt3_a], &d->lines[k], &ix, &iy)) {
                /* 平行：`計算不可` を出して A に戻る（測定：point_s1_c3 の 598 300 right） */
                c->pt_par = 1;
                c->pt3 = 0;
                c->missed = 1;
                return 0;
            }
            c->pt_par = 0;
            c->pt3 = 0;
            x = ix;
            y = iy;
            if (c->pt_real) {
                JwcPoint p;

                memset(&p, 0, sizeof p);
                p.x = (float)x;
                p.y = (float)y;
                p.layer = (unsigned char)d->write_layer;
                p.rest[0] = (unsigned char)d->write_layer;
                p.rest[1] = 1;
                p.rest[3] = 0x1d;
                if (jwc_put_point(d, &p)) {
                    c->pt_added++;
                    c->pt_undo--;
                }
            } else if (d->n_temp < JWC_TEMP_MAX) {
                d->temp_x[d->n_temp] = (float)x;
                d->temp_y[d->n_temp] = (float)y;
                d->n_temp++;
                c->pt_undo++;
            }
            return 1;
        }
        if (c->pt_mode == 4) {
            /* ④円中心：円弧を拾って、その中心に点を足す。外れは `読取可能データ無`（SAMPLE0 は
             * 円弧が無いので外れだけ測定：point_s0_c4）。近くに線があると言葉の桁が一つ左。 */
            const long k = jw_cmd_arc_at(d, w, sx, sy);

            if (k < 0) {
                c->pt_line = jw_cmd_line_at(d, w, sx, sy) >= 0;
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            x = d->arcs[k].cx;
            y = d->arcs[k].cy;
            if (c->pt_real) {
                JwcPoint p;

                memset(&p, 0, sizeof p);
                p.x = (float)x;
                p.y = (float)y;
                p.layer = (unsigned char)d->write_layer;
                p.rest[0] = (unsigned char)d->write_layer;
                p.rest[1] = 1;
                p.rest[3] = 0x1d;
                if (jwc_put_point(d, &p)) {
                    c->pt_added++;
                    c->pt_undo--;
                }
            } else if (d->n_temp < JWC_TEMP_MAX) {
                d->temp_x[d->n_temp] = (float)x;
                d->temp_y[d->n_temp] = (float)y;
                d->n_temp++;
                c->pt_undo++;
            }
            return 1;
        }
        if (c->pt_mode == 5) {
            /* ⑤仮点削除：押した所の仮点を消す。無ければ `読取可能データ無`（測定：point_s0_c5。
             * 仮点がある場合の拾い幅は未測定：輪の中心から 4 画素以内にしてある）。 */
            long k, best = -1;
            int bd = 5;

            for (k = 0; k < d->n_temp; k++) {
                int tx, ty;
                int dd;

                at_screen(w, d->temp_x[k], d->temp_y[k], &tx, &ty);
                dd = (tx > sx ? tx - sx : sx - tx) + (ty > sy ? ty - sy : sy - ty);
                if (dd < bd) {
                    bd = dd;
                    best = k;
                }
            }
            if (best < 0) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            {
                JwcPoint p;

                memset(&p, 0, sizeof p);
                p.x = d->temp_x[best];
                p.y = d->temp_y[best];
                jwc_ink_note(d, 1, JW_INK_TEMP, &p);
                for (k = best; k + 1 < d->n_temp; k++) {
                    d->temp_x[k] = d->temp_x[k + 1];
                    d->temp_y[k] = d->temp_y[k + 1];
                }
                d->n_temp--;
            }
            return 1;
        }
        if (c->pt_mode) {
            return 0;               /* ② は未移植 */
        }
        /* 押すと 02f1e4 へ戻って帯を組み直す（decomp）。升①の行は残らない。 */
        c->top_item = 0;
        c->top_right = 0;
        if (c->pt_real) {
            /* ①【実点】：押した所に記録の点（x, y, レイヤ, ペン 1, 0x00,
             * 0x1d。測定：func_all point_s0_c1 の点 16〜18）。 */
            JwcPoint p;

            if (!take(c, d, w, sx, sy, right, &x, &y)) {
                return 0;
            }
            memset(&p, 0, sizeof p);
            p.x = (float)x;
            p.y = (float)y;
            p.layer = (unsigned char)d->write_layer;
            p.rest[0] = (unsigned char)d->write_layer;
            p.rest[1] = 1;
            p.rest[3] = 0x1d;
            if (jwc_put_point(d, &p)) {
                c->pt_added++;
                c->pt_undo--;               /* 02f575 */
            }
            c->stage = c->pt_undo ? 1 : 0;   /* [ESC] は数が 0 でないときだけ */
            return 1;
        }
        if (!take(c, d, w, sx, sy, right, &x, &y)
            || d->n_temp >= JWC_TEMP_MAX) {
            return 0;
        }
        d->temp_x[d->n_temp] = (float)x;
        d->temp_y[d->n_temp] = (float)y;
        d->n_temp++;
        c->pt_undo++;                   /* 02f507 */
        /* It writes its line again afterwards -- [ESC], the dot at column 6 and
         * the whole prompt -- which is stage 1 in src/stage.h.  Picking the
         * item alone does not put [ESC] up; the first press does. */
        c->stage = c->pt_undo ? 1 : 0;
        return 1;
    }
    if (c->command == 12) {
        /* 「（」任意の弧: three presses -- the centre, a point the arc starts
         * at (which fixes the radius) and a point it ends at.  Measured by
         * having the original draw one and save it: (300,250) → (400,250) →
         * (350,180) on SAMPLE0 writes centre (179,213), radius 100, start 0,
         * end 54.4623, tilt 0, with the writing pen and line type.  The two
         * angles are the ones from the centre to the second and third press;
         * the radius is the distance to the second.  RESUME 4.13. */
        double a0, a1;

        if (c->arc3) {
            /* ①三点指示：始点・終点・中間点。弧は三点を通る円の、始点から
             * 終点へ中間点を通る側（記録はいつも左回りなので、中間点が
             * 左回りの内に入らなければ始点と終点を入れ替える）。最後の
             * バイトは 0x12（（ の弧と同じ）。測定：SAMPLE0 で (400,140)
             * → (300,250) → (450,330) が 中心 (279.959,221.673)、
             * 半径 101.3311、184.9103..90.5424。 */
            /* ②半円の向きの押しは右でも読まない（測定：arc_s0_c2_v の 598 300 right で弧が入る）。 */
            if (c->arc3 == 3 && c->arc3_kind == 2) {
                jw_cmd_at(w, sx, sy, &x, &y);
            } else if (!take(c, d, w, sx, sy, right, &x, &y)) {
                c->missed = 1;
                c->arc3_done = 0;       /* 読みが外れると前の弧の `半径=` の札は消える（測定：arc_s0_c2） */
                return 0;
            }
            if (c->arc3 < 3) {
                c->a3x[c->arc3 - 1] = x;
                c->a3y[c->arc3 - 1] = y;
                c->arc3++;
                return 1;
            }
            if (c->arc3_kind == 3) {
                /* ③半楕円：中心は二点の中点、短半径はその半分（向きは二点の
                 * 方向）、長軸はそれに直交して中間点を通る。tilt は 始点の角度
                 * -90 度（中間点が長軸の正の側になる向き。逆なら +90）、弧は
                 * 楕円の中の 270..90 度。測定：(400,140) → (300,250) →
                 * (450,330) が 中心 (229,268)、r 183.4411、flatten 4052、
                 * tilt 317.7263、270..90。 */
                const long full = 360L << 16, quarter = 90L << 16;
                const double ax = c->a3x[0], ay = c->a3y[0];
                const double bx = c->a3x[1], by = c->a3y[1];
                const double ux = (ax + bx) / 2.0, uy = (ay + by) / 2.0;
                const double b = sqrt((bx - ax) * (bx - ax)
                                      + (by - ay) * (by - ay)) / 2.0;
                long t = ((ang16(ux, uy, ax, ay) - quarter) % full + full) % full;
                double tr, u, v, q, a;

                tr = (double)t * 1.52587890625e-05 * 3.14159265358979323846 / 180.0;
                u = (x - ux) * cos(tr) + (y - uy) * sin(tr);
                v = -(x - ux) * sin(tr) + (y - uy) * cos(tr);
                /* 中間点が反対の側なら受け付けない（測定：func_all
                 * arc_s0_c3_v、始点 (90,248)・終点 (400,140) に (450,330) と
                 * (350,350) を押しても `半楕円の中間点マウス指示` のまま。前は
                 * 向きを裏返して作っていた——推測だった）。 */
                if (u < 0.0) {
                    return 0;
                }
                q = 1.0 - (v * v) / (b * b);
                if (b <= 0.0 || q <= 0.0) {
                    return 0;       /* 中間点が短軸の外：未測定 */
                }
                a = u / sqrt(q);
                /* 長半径が短半径より短くなる中間点（二点を直径とする円の内側）
                 * は受け付けない（測定：func_all arc_s0_c3_v で、本物は
                 * `半楕円の中間点マウス指示` のまま）。0 や無限大も。 */
                if (!(a >= b) || a > 1e7) {
                    return 0;
                }
                /* **flatten を先に整数に切り捨て、長半径はそこから逆算**
                 * （b / 0.4052 = 183.4411。中間点を通る長さ 183.4162 では
                 * ない——測定）。 */
                {
                    const short fl = (short)(b / a * 10000.0);

                    a = b / ((double)fl / 10000.0);
                }
                if (!jwc_add_ellarc(d, (float)ux, (float)uy, (float)a,
                                    (short)(b / a * 10000.0 + 0.5),
                                    270L << 16, 90L << 16, t,
                                    (unsigned char)d->line_type,
                                    (unsigned char)d->pen,
                                    (unsigned char)(d->write_layer), 0x12)) {
                    return 0;
                }
                c->arc3_rmm = (float)a * jwc_zukei_scale(d);
                c->arc3 = 1;
                c->arc3_done = 1;
                return 1;
            }
            if (c->arc3_kind == 2) {
                /* ②半円：中心は二点の中点、半径はその半分。角度は 始点側 a と
                 * a+180 の組で、向きの押しを左回りに含む方（測定：(400,140)
                 * → (300,250) → (450,330) が 中心 (229,268)、半径 74.3303、
                 * 227.7263..47.7263）。 */
                double ux, uy, r;
                long a, b, t;

                semi_of(c, x, y, &ux, &uy, &r, &a, &b);
                t = a;
                (void)t;
                if (!jwc_add_arc_at(d, (float)ux, (float)uy, (float)r, a, b,
                                    (unsigned char)d->line_type,
                                    (unsigned char)d->pen,
                                    (unsigned char)(d->write_layer), 0x12)) {
                    return 0;
                }
                c->arc3_rmm = (float)r * jwc_zukei_scale(d);
                c->arc3 = 1;
                c->arc3_done = 1;
                return 1;
            }
            {
                const double ax = c->a3x[0], ay = c->a3y[0];
                const double bx = c->a3x[1], by = c->a3y[1];
                const double den = 2.0 * (ax * (by - y) + bx * (y - ay)
                                          + x * (ay - by));
                double ux, uy, r;
                long sa, sb, sm, s0, e0;

                if (den == 0.0) {
                    return 0;       /* 一直線：弧にならない（未測定） */
                }
                /* 中心は二本の垂直二等分線（終点–中間点、始点–終点）の交点を、
                 * 交点ルーチン 1bb4:3cd1 と同じく全部 float で（測定：
                 * func_all arc_s0_c1 の中心 x が 0x438bfac6。double の公式
                 * では c7）。 */
                {
                    JwcLine la, lb;
                    float fx, fy;
                    const float mx1 = ((float)bx + (float)x) / 2.0f;
                    const float my1 = ((float)by + (float)y) / 2.0f;
                    const float mx2 = ((float)ax + (float)bx) / 2.0f;
                    const float my2 = ((float)ay + (float)by) / 2.0f;

                    memset(&la, 0, sizeof la);
                    memset(&lb, 0, sizeof lb);
                    la.x0 = mx1;
                    la.y0 = my1;
                    la.x1 = mx1 - ((float)y - (float)by);
                    la.y1 = my1 + ((float)x - (float)bx);
                    lb.x0 = mx2;
                    lb.y0 = my2;
                    lb.x1 = mx2 - ((float)by - (float)ay);
                    lb.y1 = my2 + ((float)bx - (float)ax);
                    if (env_isect(&la, &lb, &fx, &fy) == 0) {
                        return 0;
                    }
                    ux = fx;
                    uy = fy;
                }
                /* 半径は中心から中間点まで（測定：始点までだと 1 ビット大きい）。 */
                r = hypot_of(x - ux, y - uy);
                sa = ang16(ux, uy, ax, ay);
                sb = ang16(ux, uy, bx, by);
                sm = ang16(ux, uy, x, y);
                {
                    const long full = 360L << 16;
                    const long ab = ((sb - sa) % full + full) % full;
                    const long am = ((sm - sa) % full + full) % full;

                    s0 = am < ab ? sa : sb;
                    e0 = am < ab ? sb : sa;
                }
                if (!jwc_add_arc_at(d, (float)ux, (float)uy, (float)r, s0, e0,
                                    (unsigned char)d->line_type,
                                    (unsigned char)d->pen,
                                    (unsigned char)(d->write_layer), 0x12)) {
                    return 0;
                }
                c->arc3_rmm = (float)r * jwc_zukei_scale(d);
                c->arc3 = 1;
                c->arc3_done = 1;
                return 1;
            }
        }
        if (c->arc_ask && c->typing) {
            /* 欄の `任意角度 ﾏｳｽ(L)`／`任意寸法 ﾏｳｽ(L)`・`前回と同じ ﾏｳｽ(R)`。 */
            if (c->arc_ask == 2) {
                c->arc_rfix = right ? 1 : 0;
            } else {
                c->arc_fix = right ? 1 : 0;
            }
            c->typing = 0;
            c->arc_ask = 0;
            return 1;
        }
        if (!take(c, d, w, sx, sy, right, &x, &y)) {
            return 0;
        }
        if (!c->pressed) {
            c->arc_fix = 0;
            c->arc_rfix = 0;
            c->x0 = x;
            c->y0 = y;
            c->pressed = 1;
            c->stage = 1;
            c->num[0] = c->num[1] = 0.0;
            c->dec[0] = c->dec[1] = d->decimals;
            return 0;
        }
        if (c->pressed == 1) {
            c->x1 = x;
            c->y1 = y;
            c->pressed = 2;
            c->stage = 2;
            measure(c, d, x, y);
            return 0;
        }
        a0 = angle_at(c->x1 - c->x0, c->y1 - c->y0);
        a1 = angle_at(x - c->x0, y - c->y0);
        /* Measured while `pressed` still says 2, so the radius stays the one
         * the second press fixed: the line the original leaves says
         * `半径=57.3359`, the radius it drew with, not the distance to the
         * third press. */
        measure(c, d, x, y);
        c->pressed = 0;
        c->stage = 3;
        c->arc_drawn = 1;
        c->arc_r_shown = c->num[0];
        /* **The record always holds the shorter way round.**  The two angles
         * are not kept in the order they were pressed: the original writes
         * whichever pair makes the anticlockwise sweep the smaller one.
         * Measured with four arcs on SAMPLE0 --
         *
         *     pressed 0.0000 then 54.4623   -> start 0.0000   end 54.4623
         *     pressed 54.4623 then 0.0000   -> start 0.0000   end 54.4623
         *     pressed 9.8411 then 299.8865  -> start 299.8865 end 9.8411
         *     pressed 9.8411 then 199.8852  -> start 199.8852 end 9.8411
         *
         * -- the last two being 69.96 and 169.96 of sweep, where the other
         * order would have been 290 and 190.  What it does at exactly 180 is
         * not measured. */
        if (c->arc_fix) {
            /* ②角度指定：始点から打った角度だけ。終点の押しは向きだけで、
             * 始点から左回りに 180 までの側なら 始点..始点+角度、反対なら
             * 始点-角度..始点（測定：始点 0 で 120、下を押すと 240..0、
             * 上を押すと 0..120）。**ちょうど 180 の側は未測定。**
             *
             * 角度の足し算は本物のとおり float で：オーバーレイ 4 の
             * 0x31e0f〜0x32412 は 始点(i32, 0def:2828 の答え) と
             * (float)(65536f × 角度) を **float で**足して切り捨てる。
             * 2^24 を越えると偶数に丸まる（測定：始点 41.1859 に 270 で、
             * 終点が 1 小さい 0x01372f98）。 */
            const double sweep = a1 - a0 < 0.0 ? a1 - a0 + 360.0 : a1 - a0;
            const float add = 65536.0f * (float)c->arc_ang;
            const long s0 = ang16((float)c->x0, (float)c->y0,
                                  (float)c->x1, (float)c->y1);
            long e;

            if (sweep <= 180.0) {
                e = (long)(float)((float)s0 + add);
                while (e >= 360L << 16) {
                    e -= 360L << 16;
                }
                while (e < 0) {
                    e += 360L << 16;
                }
                return jwc_add_arc_at(d, (float)c->x0, (float)c->y0,
                                      c->arc_rfix
                                      ? (float)c->arc_r / jwc_zukei_scale(d)
                                      : (float)hypot_of(c->x1 - c->x0,
                                                        c->y1 - c->y0),
                                      s0, e,
                                      (unsigned char)d->line_type,
                                      (unsigned char)d->pen,
                                      (unsigned char)(d->write_layer), 0x12);
            }
            e = (long)(float)((float)s0 - add);
            while (e < 0) {
                e += 360L << 16;
            }
            while (e >= 360L << 16) {
                e -= 360L << 16;
            }
            return jwc_add_arc_at(d, (float)c->x0, (float)c->y0,
                                  c->arc_rfix
                                  ? (float)c->arc_r / jwc_zukei_scale(d)
                                  : (float)hypot_of(c->x1 - c->x0,
                                                    c->y1 - c->y0),
                                  e, s0,
                                  (unsigned char)d->line_type,
                                  (unsigned char)d->pen,
                                  (unsigned char)(d->write_layer), 0x12);
        } else if (a1 - a0 < 0.0 ? a1 - a0 + 360.0 > 180.0 : a1 - a0 > 180.0) {
            const double t = a0;

            a0 = a1;
            a1 = t;
        }
        return jwc_add_arc_at(d, (float)c->x0, (float)c->y0,
                              c->arc_rfix
                              ? (float)c->arc_r / jwc_zukei_scale(d)
                              : (float)hypot_of(c->x1 - c->x0, c->y1 - c->y0),
                              fixed16(a0), fixed16(a1),
                              (unsigned char)d->line_type,
                              (unsigned char)d->pen,
                              (unsigned char)(d->write_layer),
                              0x12);
    }
    if (c->command != 2 && c->command != 3 && c->command != 4
        && c->command != 11) {
        return 0;               /* ＋ line on an axis, ／ line, □ box, ○ circle */
    }
    if (c->command == 11 && c->circ_ask && c->typing && c->typed_n) {
        /* 打ちかけの数があれば押しは [Enter] と同じ（測定のみ・decomp 未確認：escfz_E_91）。 */
        jw_cmd_key(c, d, 13);
        if (!c->circ_ask) {
            box_unhold(c);
        }
        return 1;
    }
    if (c->command == 11 && c->circ_ask && c->typing) {
        c->circ_bad = 0;
        /* 欄の `任意寸法ﾏｳｽ(L)`・`前回と同じ ﾏｳｽ(R)`。L は 2 点で描く
         * `○ 円中心点 マウス指示 … [BS]前項` になる（測定）。 */
        c->circ_fix = right ? 1 : 0;
        c->circ_mode = !right;
        c->circ_done = 0;
        c->typing = 0;
        c->circ_ask = 0;
        /* 中心を持っていたなら、L はその中心のまま半径の押しを待つ
         * （測定：中心のあと ① → L → 次の押しがその中心の円の半径）。 */
        if (!right && c->circ_hold) {
            c->circ_mode = 0;
            c->pressed = 1;
            c->stage = 1;
            c->x0 = c->circ_hx;
            c->y0 = c->circ_hy;
            c->circ_hold = 0;
            {
                double qx, qy;

                jw_cmd_at(w, sx, sy, &qx, &qy);     /* 仮の円は押した所の矢まで出る（測定：circle_s1_c1） */
                measure(c, d, qx, qy);
                c->moved = 1;
            }
        }
        return 1;
    }
    if (c->command == 11 && c->circ_fix) {
        /* 半径の決まった ○ を、押した所（読み取りなら読んだ点）を中心に。
         * 半径は (float)半径mm / s、s は 1 単位が紙の何 mm か（測定：30 で
         * r=52.3232307、中心 (179,213)）。置いたあとも次を待つ。 */
        if (!take(c, d, w, sx, sy, right, &x, &y)) {
            return 0;
        }
        {
            static const int DX[9] = { 0, 1, 1, 1, 0, -1, -1, -1, 0 };
            static const int DY[9] = { 0, -1, 0, 1, 1, 1, 0, -1, -1 };
            const float r = (float)c->circ_r / jwc_zukei_scale(d);
            const int b = c->circ_base;

            const int n = c->circ_multi > 1 ? c->circ_multi : 1;
            int k;

            for (k = n; k >= 1; k--) {
                const float rk = k == n ? r : (float)((double)r * k / n);

                if (!jwc_add_arc(d, (float)x + (float)DX[b] * r,
                                 (float)y + (float)DY[b] * r, rk,
                                 (unsigned char)d->line_type,
                                 (unsigned char)d->pen,
                                 (unsigned char)d->write_layer)) {
                    return 0;
                }
            }
        }
        c->circ_done = 1;
        return 1;
    }
    if (c->command == 4 && c->box_ask == 2 && c->typing) {
        /* `｜0 度 ﾏｳｽ(L)｜前回と同じ ﾏｳｽ(R)｜`（＋ と同じ欄）。 */
        if (!right) {
            c->box_ang = 0.0;
        }
        c->box_rot = 1;
        c->box_mode = 1;
        c->typing = 0;
        c->box_ask = 0;
        box_unhold(c);
        return 1;
    }
    if (c->command == 4 && c->box_ask == 1 && c->typing && c->typed_n) {
        /* 数を打ちかけの欄での押しは [Enter] と同じ（測定のみ・decomp 未確認：escfz_B_77 は
         * 0 を断られて欄が空に、escfz_X_76 は 1 が長さになる）。 */
        jw_cmd_key(c, d, 13);
        if (c->box_ask) {
            c->box_keep_off = 1;
        } else {
            box_unhold(c);
        }
        return 1;
    }
    if (c->command == 4 && c->box_ask && c->typing) {
        /* 欄の `任意寸法 ﾏｳｽ(L)`・`前回と同じ ﾏｳｽ(R)`。L は 2 点で描く
         * `始点指示 … [BS]前項` になる（測定：0,0 を断られたあと L）。 */
        c->box_fix = right ? 1 : 0;
        c->box_mode = !right;
        c->box_done = 0;
        c->typing = 0;
        c->box_ask = 0;
        /* 始点を持っていたなら L はその始点のまま `■ 終点指示` へ（測定）。 */
        if (!right) {
            box_unhold(c);
        }
        return 1;
    }
    if (c->command == 4 && c->box_fix) {
        /* 大きさの決まった □ を、押した所（読み取りなら読んだ点）に置きます。
         * 置いたあとも同じ大きさで次を待つ（測定：`[ESC]` が付くだけで
         * 行は `■ 終点指示` のまま）。 */
        float X[5], Y[5];
        int k;

        if (!take(c, d, w, sx, sy, right, &x, &y)) {
            return 0;
        }
        box_corners(c, d, x, y, X, Y);
        for (k = 0; k < 4; k++) {
            if (!jwc_add_line(d, X[k], Y[k], X[k + 1], Y[k + 1],
                              (unsigned char)d->line_type,
                              (unsigned char)d->pen,
                              (unsigned char)d->write_layer)) {
                return 0;
            }
            d->lines[d->n_lines - 1].rest[1] = 0x41;
        }
        c->box_done = 1;
        return 1;
    }
    if ((c->command == 2 || c->command == 3) && c->ask_kind == 2
        && c->typing) {
        /* `角度 =` の欄では、／ の `任意角度(L)` は向きの固定をやめ、
         * `前回と同じ ﾏｳｽ(R)` は前の角度で固定します。＋ の (L) は
         * `0 度` です（どちらも本物の上の行の字。0 度 の働きは未測定）。 */
        if (right) {
            c->fix_angle = 1;
        } else if (c->command == 2) {
            c->ask_ang = 0.0;
            c->fix_angle = 1;
        } else {
            c->fix_angle = 0;
        }
        c->fix_mode = 1;
        c->fix_done = 0;
        c->typing = 0;
        c->ask_kind = 0;
        return 1;
    }
    if ((c->command == 2 || c->command == 3) && (c->ask_kind == 1 || c->ask_kind == 2)
        && c->typing && c->typed_n) {
        /* 打ちかけの数があれば押しは [Enter] と同じで、始点を持っていたらその始点に戻る
         * （測定のみ・decomp 未確認：escfz_X_76）。 */
        jw_cmd_key(c, d, 13);
        if (!c->ask_kind) {
            box_unhold(c);
        }
        return 1;
    }
    if ((c->command == 2 || c->command == 3) && c->ask_kind == 1
        && c->typing) {
        /* `寸法 = ` の欄が開いているときの押しは点ではなく答えです：
         * `任意寸法 ﾏｳｽ(L)` は長さの固定をやめ、`前回と同じ ﾏｳｽ(R)` は
         * 前に決めた長さ（`[  1000.000mm]` の数）で固定します。 */
        /* `任意寸法 ﾏｳｽ(L)` でも行は `始点指示 … [BS]前項` になります
         * （測定：-50 を断られたあと L を押すと、その行で始点を待つ）。 */
        c->fix_len = right ? 1 : 0;
        c->fix_mode = 1;
        c->fix_done = 0;
        c->typing = 0;
        c->ask_kind = 0;
        return 1;
    }
    if (!take(c, d, w, sx, sy, right, &x, &y)) {
        if (c->command == 2 || c->command == 3) {
            c->missed = 1;      /* 読取可能データ無（func_all slash_s0_c1_v・plus_s0_c1_v） */
            return 1;
        }
        return 0;
    }
    if (!c->pressed) {
        c->x0 = x;
        c->y0 = y;
        c->pressed = 1;
        c->stage = 1;
        c->num[0] = c->num[1] = 0.0;
        c->dec[0] = c->dec[1] = d->decimals;
        return 0;
    }
    c->pressed = 0;
    c->stage = 2;
    if (c->command == 2 && c->par_on) {
        plus_par(c, &x, &y);
    } else if (c->command == 2 && c->fix_angle) {
        axis_rot(c, &x, &y);   /* ③角度 を決めたら水平垂直ではなくその角度（測定：plus_s0_c3_v） */
    } else if (c->command == 2) {
        axis(c, &x, &y);
    }
    if (c->command == 3 && c->par_on) {
        par_dir(c, &x, &y);
    } else if (c->command == 3 && c->fix_angle) {
        fix_dir(c, &x, &y);
    }
    if ((c->command == 2 || c->command == 3) && c->fix_len) {
        fix_end(c, d, &x, &y);
    }
    measure(c, d, x, y);
    /* **長さの無い線は引きません**（本物の 11f2:67fa が断る）。上の行も
     * `確定長さ` にはならず `始点指示 … [BS]前項` に戻る（測定：終点を始点と
     * 同じ所で押すと `＊お待ち下さい＊` のあと線数 30 のまま）。 */
    if ((c->command == 2 || c->command == 3)
        && (float)x == (float)c->x0 && (float)y == (float)c->y0
        && d->pen < 0x5a) {
        c->fix_done = 0;
        c->fix_mode = 1;        /* 行は `始点指示 … [BS]前項`（桁 6 の ・、[ESC] 無し。測定：escfz_H_74） */
        c->stage = 2;
        return 1;
    }
    if (c->command == 2 || c->command == 3) {
        /* 固定していなくても、引いた線の長さと角度は覚えておきます：
         * 次の始点を [ESC] で捨てると、上の行が `始点指示 … 確定長さ =
         * 165.127(mm)角度= 180.000ﾟ [BS]前項` になる（測定）。 */
        c->line_done = 1;
        c->fix_shown = c->num[0];
        c->fix_ang = shown_angle((float)c->x0, (float)c->y0, (float)x, (float)y);
    }
    if ((c->command == 2 || c->command == 3) && c->fix_mode) {
        /* 上の行の `確定長さ = … 角度= …ﾟ` は**引いた線の**長さと角度
         * （測定：／ 30 度で `51.547(mm)角度=  30.000ﾟ`、＋ に 30 を打つと
         * `86.004(mm)角度=   0.000ﾟ`——＋ は打った角度では向きが変わらない。
         * 本物の ＋ は 0x2cf7d で軸角だけから座標系を作る）。 */
        c->fix_done = 1;
        c->fix_shown = c->num[0];
        c->fix_ang = shown_angle((float)c->x0, (float)c->y0, (float)x, (float)y);
    }
    /* Both take the pen and the line type the panel shows and go on the layer
     * being written to -- SAMPLE0 writes with pen 2, and what the original
     * draws there comes out white, which is what pen 2 is. */
    if (c->command == 4) {
        /* □: two opposite corners, and four lines come out -- SAMPLE0's count
         * goes from 30 to 34 when the original draws one. */
        const unsigned char t = (unsigned char)d->line_type;
        const unsigned char p = (unsigned char)d->pen;
        const unsigned char g = (unsigned char)(d->write_layer);

        /* **縦の辺が先**です。どちら向きに押しても、始点 → 始点の真上か
         * 真下 → 対角 → 残りの角 → 始点、の順に 4 本（働きの検査で 3 通り
         * 測った。tools/functest.sh）。前は横が先で、画面は同じでも記録の
         * 順と向きが違っていました。そして □ の線は **rest[1] が 0x41**
         * （／ の線は 0x03）。 */
        const float ax = c->box_ctr ? (float)(2.0 * c->x0 - x) : (float)c->x0;
        const float ay = c->box_ctr ? (float)(2.0 * c->y0 - y) : (float)c->y0;
        const float bx = (float)x, by = (float)y;
        float cx[5] = { ax, ax, bx, bx, ax };
        float cy[5] = { ay, by, by, ay, ay };
        int k;

        if (c->box_rot) {
            tilt_corners(c, x, y, cx, cy);
        }

        for (k = 0; k < 4; k++) {
            if (!jwc_add_line(d, cx[k], cy[k], cx[k + 1], cy[k + 1], t, p, g)) {
                return 0;
            }
            d->lines[d->n_lines - 1].rest[1] = 0x41;
        }
        c->box_drawn = 1;
        c->box_last[0] = c->num[0];
        c->box_last[1] = c->num[1];
        return 1;
    }
    if (c->command == 11) {
        /* ○: the first press is the centre, the second a point on it. */
        const double dx = x - c->x0, dy = y - c->y0;
        const float r = c->circ_dia ? (float)(sqrt(dx * dx + dy * dy) / 2.0)
                                    : (float)sqrt(dx * dx + dy * dy);
        const int n = c->circ_multi > 1 ? c->circ_multi : 1;
        int k, ok = 1;

        if (c->circ_dia) {
            c->x0 = (c->x0 + x) / 2.0;
            c->y0 = (c->y0 + y) / 2.0;
        }

        /* ③重円：外側から r、r x (n-1)/n、…（測定：2 で 148.66 と 74.33）。 */
        for (k = n; k >= 1 && ok; k--) {
            ok = jwc_add_arc(d, (float)c->x0, (float)c->y0,
                             k == n ? r : (float)((double)r * k / n),
                             (unsigned char)d->line_type, (unsigned char)d->pen,
                             (unsigned char)(d->write_layer));
        }
        return ok;
    }
    return jwc_add_line(d, (float)c->x0, (float)c->y0, (float)x, (float)y,
                        (unsigned char)d->line_type, (unsigned char)d->pen,
                        (unsigned char)(d->write_layer));
}
