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
    /* コーナー連結 has no line in hand yet. */
    c->pick_a = -1;
    c->pick_b = -1;
    /* 面取's `③寸法= 30.000`, which is where the original starts. */
    c->gap_chamfer = 30.0;
    /* ２線's `①基準線からの間隔＝ 75.000 , 75.000 (mm)`, likewise. */
    c->gap_two[0] = c->gap_two[1] = 75.0;
    /* 分割's `[2]`, the count it offers as 前回と同じ. */
    c->divisions = 2;
    /* 正多角形's `[5]`, likewise. */
    c->sides = 5;
    /* 文編集 has no text in hand. */
    c->edit_text = -1;
    /* 連線's `③丸 面   辺寸法 ` as the original comes up with it. */
    c->edge_mm = 3.0;
    /* ハッチ's `[  45.00]` and `[  10.0]`, likewise. */
    c->hatch_angle = 45.0;
    c->hatch_pitch = 10.0;
    /* ＋ and ／'s `[  1000.000mm]` and `[  45.000\xdf]`, likewise. */
    c->ask_len = 1000.0;
    c->ask_ang = 45.0;
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

/* What the panel shows for a command in hand: a length and an angle for a line,
 * the two sides for a box, the radius and the diameter for a circle.  A length
 * is millimetres of the real thing -- drawing units over `unit_mm`, times the
 * scale -- and (300,200) to (400,200) is a hundred pixels, which the original
 * calls 57.336 mm on SAMPLE0: 100 / (518/297) / 1. */
static void measure(JwCmd *c, const Jwc *d, double x, double y)
{
    const double mm = d->unit_mm > 0.0f ? d->denom / d->unit_mm : 1.0;
    const double dx = x - c->x0, dy = y - c->y0;

    c->dec[0] = c->dec[1] = d->decimals;
    if (c->command == 4) {
        c->num[0] = (dx < 0 ? -dx : dx) * mm;
        c->num[1] = (dy < 0 ? -dy : dy) * mm;
    } else if (c->command == 11) {
        c->num[0] = sqrt(dx * dx + dy * dy) * mm;
        c->num[1] = c->num[0] * 2.0;
    } else {
        c->num[0] = sqrt(dx * dx + dy * dy) * mm;
        /* An angle is degrees, so the drawing's scale has nothing to say about
         * it: always three decimals. */
        c->num[1] = atan2(dy, dx) * 180.0 / 3.14159265358979323846;
        c->dec[1] = 3;
        /* 「（」holds the radius still once the start point is in: the panel
         * kept saying 57.336 while the pointer went round to the end point and
         * only the angle followed it (RESUME 4.13). */
        if (c->command == 12 && c->pressed == 2) {
            const double rx = c->x1 - c->x0, ry = c->y1 - c->y0;

            c->num[0] = sqrt(rx * rx + ry * ry) * mm;
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

static void two_lines(JwCmd *c, Jwc *d);

/* 連線's direction rounding; the command itself is further down. */
static void poly_dir(const JwCmd *c, double dx, double dy,
                     double *ux, double *uy);
static void poly_mark(const JwCmd *c, VGA *v, const JwView *w);
static void hatch_run(JwCmd *c, Jwc *d);
static int hatch_meet(const JwcLine *a, const JwcLine *b,
                      double *x, double *y);
static void hatch_free(const JwcLine *l, double cx, double cy, int have,
                       double *x, double *y);

void jw_cmd_track(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy)
{
    double x, y;

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
    }
    if (!d || !c->pressed) {
        return;
    }
    jw_cmd_at(w, sx, sy, &x, &y);
    if (c->command == 2) {
        axis(c, &x, &y);
    }
    measure(c, d, x, y);
}

static int offset_ends(const JwCmd *c, const JwView *w, int sx, int sy,
                       double *ax, double *ay, double *bx, double *by,
                       double *side);

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
    if (JW_RANGE_CMD(c->command) && !c->zukei && c->pressed == 2
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
    if (!c->moved && !(c->command == 13 && c->typing_text)
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
    if (!c->pressed) {
        return;
    }
    if (JW_RANGE_CMD(c->command) && c->pressed == 2) {
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
        at_screen(w,
                  c->x0 + (c->text_vert ? -c->text_tall : c->text_wide),
                  c->y0 + (c->text_vert ? c->text_wide : c->text_tall),
                  &x1, &y1);
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
    if (JW_RANGE_CMD(c->command) && c->pressed != 1) {
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
    if (c->command == 4 || JW_RANGE_CMD(c->command)) {
        jw_line(v, px, py, px, sy, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, px, sy, sx, sy, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, sx, py, sx, sy, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, px, py, sx, py, 2, 0x18, JW_STYLE_SOLID);
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

        jw_arc_poly(v, fx, fy, sqrt(dx * dx + dy * dy), 10000, 0, 0, 0,
                    2, 0x18, JW_STYLE_SOLID);
    } else if (c->command == 2 || c->command == 3) {
        int qx = sx, qy = sy;

        if (c->command == 2) {
            double x, y;

            /* the axis is chosen in drawing units, so go there and back */
            jw_cmd_at(w, sx, sy, &x, &y);
            axis(c, &x, &y);
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
    if (c->sel_line) {
        return k < c->n0_lines && c->sel_line[k];
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
static void mirror_at(double ax, double ay, double ux, double uy,
                      double x, double y, double *rx, double *ry)
{
    const double vx = x - ax, vy = y - ay;
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
    for (k = 0; k < c->n0_lines; k++) {
        double x0, y0, x1, y1;

        if (!picked_line(c, d, k)) {
            continue;
        }
        mirror_at(ax, ay, ux, uy, d->lines[k].x0, d->lines[k].y0, &x0, &y0);
        mirror_at(ax, ay, ux, uy, d->lines[k].x1, d->lines[k].y1, &x1, &y1);
        if (jwc_dup_line(d, k, 0.0f, 0.0f)) {
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
        if (jwc_dup_arc(d, k, 0.0f, 0.0f)) {
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
        if (jwc_dup_text(d, k, 0.0f, 0.0f)) {
            JwcText *q = &d->texts[d->n_texts - 1];

            q->x0 = (float)x0;
            q->y0 = (float)y0;
            q->x1 = (float)x1;
            q->y1 = (float)y1;
            n++;
        }
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
    const double vx = x - ax, vy = y - ay;

    *rx = vx * co - vy * si + dx;
    *ry = vx * si + vy * co + dy;
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
    const double sx = c->scale_x, sy = c->scale_y;
    long k;
    int n = 0;

    if (!c->sel_line) {
        freeze(c, d);
    }
    for (k = 0; k < c->n0_lines; k++) {
        if (!picked_line(c, d, k)) {
            continue;
        }
        {
            const double ax = (d->lines[k].x0 - c->base_x) * sx + px;
            const double ay = (d->lines[k].y0 - c->base_y) * sy + py;
            const double bx = (d->lines[k].x1 - c->base_x) * sx + px;
            const double by = (d->lines[k].y1 - c->base_y) * sy + py;
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
            const double ax = (d->arcs[k].cx - c->base_x) * sx + px;
            const double ay = (d->arcs[k].cy - c->base_y) * sy + py;
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
            const double x0 = (d->texts[k].x0 - c->base_x) * sx + px;
            const double y0 = (d->texts[k].y0 - c->base_y) * sy + py;
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
static void place_by(JwCmd *c, Jwc *d, double dx, double dy)
{
    /* Work out what the range holds only the first time.  移動 takes the
     * entities with it, so asking the box again after the first press finds
     * nothing left inside it and the next press would move nothing. */
    if (!c->sel_line) {
        freeze(c, d);
    }
    if (c->command == 16) {
        move_range(c, d, dx, dy);
    } else {
        copy_range(c, d, dx, dy);
    }
    c->step_x = dx;
    c->step_y = dy;
    c->copies = 1;
}

static void copy_by_mm(JwCmd *c, Jwc *d)
{
    const double per = d->unit_mm > 0.0f ? d->unit_mm / d->denom : 1.0;

    place_by(c, d, d->copy_x_mm * per, d->copy_y_mm * per);
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

            if (!in_reach_layer(d, l->layer)
                || flipped(c, JW_FLIP_LINE, k)) {
                continue;
            }
            c->hen_end[k] = (unsigned char)
                ((jw_cmd_in_range(c, l->x0, l->y0, l->x0, l->y0) ? 1 : 0)
                 | (jw_cmd_in_range(c, l->x1, l->y1, l->x1, l->y1) ? 2 : 0));
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
    place_by(c, d, px - c->base_x, py - c->base_y);
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
        move_range(c, d, c->step_x, c->step_y);
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
    /* 測定 draws each leg as it is measured, in the same colour 2 (measured:
     * the 201 pixels between (250,200) and (450,300) come out f30000). */
    if (c->command == 15) {
        int k;

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

        for (i = 0; c->pending && i < 2; i++) {
            double e[4];
            int x0, y0, x1, y1;

            if (!jw_cmd_two_line(c, d, i, e)) {
                break;
            }
            at_screen(w, e[0], e[1], &x0, &y0);
            at_screen(w, e[2], e[3], &x1, &y1);
            jw_line(v, x0, y0, x1, y1, mark, ROP_REPLACE,
                    jw_view_line_style(d->line_type));
        }
        return;
    }
    if (c->command == 7 || c->command == 8) {
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
    if (!JW_RANGE_CMD(c->command) || c->pressed != 2) {
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
            const int kind = c->hen_end
                           ? (ends == 3 ? 1 : ends ? 2 : 0)
                           : henkei_kind(c, l->x0, l->y0, l->x1, l->y1);

            if (!kind || (!c->hen_end && flipped(c, JW_FLIP_LINE, k))) {
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
static int guide_cut(const JwView *w, double px, double py,
                     double dx, double dy, int seg[4])
{
    /* **One row higher than the drawing area.**  ③任意方向's slanted
     * guide reaches y=17 at x=374.9, and the original's topmost dot is
     * at (376,17): it cuts the line at the white rule on row 16 --
     * x=376.8 -- and then keeps that x while the drawing itself starts
     * at 17.  Cut at 17 the whole line comes out a row shallow and 238
     * pixels of dots move.  The two square directions are the same
     * either way: a horizontal guide is not cut in y at all and a
     * vertical one only has its endpoint moved back to 17. */
    const double x0 = w->x0, y0 = w->y0 - 1.0, x1 = w->x1, y1 = w->y1;
    double t0 = -1e9, t1 = 1e9;
    const double p[4] = { -dx, dx, -dy, dy };
    const double q[4] = { px - x0, x1 - px, py - y0, y1 - py };
    int i;

    for (i = 0; i < 4; i++) {
        if (p[i] == 0.0) {
            if (q[i] < 0.0) {
                return 0;
            }
        } else {
            const double r = q[i] / p[i];

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
    seg[1] = (int)(py + t0 * dy + 0.5);
    seg[2] = (int)(px + t1 * dx);
    seg[3] = (int)(py + t1 * dy + 0.5);
    /* **Left to right, top to bottom.**  The dashes start at the line's
     * first end, and ②縦方向's direction points up the screen: drawn from
     * the bottom the gaps land on the other rows and 366 pixels move. */
    if (seg[1] < w->y0) {
        seg[1] = w->y0;
    }
    if (seg[3] < w->y0) {
        seg[3] = w->y0;
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

    if (c->command != 14 || c->stage < 2 || c->top_item || c->dim_only) {
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

void jw_cmd_after(const JwCmd *c, VGA *v, const Jwc *d, const JwView *w)
{
    long k;

    /* **寸法 は枠の上に描き直しません。** 案内線は寸法線の上（白い点）で、
     * カウント箱は案内線の上です。つまり 線 → 案内線 → 枠 の順で、ここで
     * 線を描き直すと案内線が消えます（y=110 の 219 画素）。 */
    if (c->command == 14) {
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
                if (len < 1e-12) {
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
    if (d && c->command == 28 && c->typing_text
        && c->edit_text >= 0 && c->edit_text < d->n_texts) {
        int px, py, qx, qy;

        v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
        v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
        v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
        v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
        jw_view_text(v, d, &d->texts[c->edit_text], w, 0);
        at_screen(w, c->x0, c->y0, &px, &py);
        at_screen(w, c->x0 + c->text_wide, c->y0 + c->text_tall, &qx, &qy);
        jw_line(v, px, py, px, qy, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, px, qy, qx, qy, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, qx, qy, qx, py, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, qx, py, px, py, 2, 0x18, JW_STYLE_SOLID);
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
    if (!d || !(JW_RANGE_CMD(c->command) || c->command == 8
                || c->command == 9 || c->command == 19 || c->command == 20
                || c->command == 23 || c->command == 26
                || c->command == 14)
        || (JW_RANGE_CMD(c->command) && c->pressed != 2
            && !(c->command == 27 && c->zukei == JW_ZUKEI_PUT2))) {
        return;
    }
    /* The drawing window again: the chrome leaves the clip open to the
     * whole screen. */
    v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
    v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
    v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
    v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
    /* Anything made since the range was fixed -- 複写's copies -- goes back on
     * top.  The original draws a new entity over the finished screen rather
     * than redrawing everything, so where a copy crosses one of the reddened
     * originals it is the copy that shows.  Measured with a five-millimetre
     * distance, where 44 pixels of the overlap are white in the original and
     * were red here. */
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
    c->dim_ux = cos(rad);
    c->dim_uy = sin(rad);
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
    if ((c->command == 2 || c->command == 3) && item == 1 && c->stage == 0) {
        jw_cmd_pick(c, c->command == 2 ? 3 : 2);
        return 1;
    }
    /* ②寸 法 and ③角 度 take the length and the angle of the next line off
     * the top row instead of the second press.  **Either button opens
     * them** -- the (L) and (R) in what they put up are the answer to the
     * question, not the way in -- and the item is the whole cell.  What is
     * done with the number is the next thing; this is the screen, which is
     * what a branch of the table is. */
    if ((c->command == 2 || c->command == 3) && (item == 2 || item == 3)
        && c->stage == 0) {
        c->ask_kind = item - 1;
        return 1;
    }
    /* ④平行 and ⑤垂直 ask for a 基準線 to be parallel or square to.  **＋
     * has the two in one item and ／ keeps them apart** -- `④ 平 行・垂 直`
     * against `④平 行 |⑤垂 直` -- and ＋'s item puts up the same screen as
     * ／'s ④, the one that offers 平行線(L) / 同一線上の線(R). */
    if (c->command == 2 && item == 4 && c->stage == 0) {
        c->ask_kind = 3;
        return 1;
    }
    if (c->command == 3 && (item == 4 || item == 5) && c->stage == 0) {
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
    if (c->command == 8 && item == 1) {
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
    if (c->command == 13 && (item == 1 || item == 2)) {
        /* `文字種類[F4] |①水平(L,R)|②垂直|③角度指定|④設定|…` -- ①水平 is
         * what a press in the drawing takes, and ②垂直 turns the baseline
         * upright.  ③角度指定 and ④設定 are not done.  Either way the line
         * becomes the one the command shows once it has a point, which is
         * stage 2. */
        c->text_vert = item == 2;
        c->stage = 2;
        /* **Nought, not one.**  The state is set; the words the press wrote
         * are the original's own and are in src/item.h, and they are not
         * the ones src/stage.h holds for the same stage -- that one was
         * captured by pressing a point in the drawing, and it starts with
         * `[ESC]` where this does not. */
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
        if (!c->poly && item == 7) {
            c->poly = 1;
            c->poly_deg = 45;   /* the band comes up saying `45度毎` */
            c->poly_n = 0;
            c->stage = 1;
            return 1;
        }
        if (c->poly && item == 1) {
            /* ①角 度 goes round: 45度毎, 90度毎, free.  Measured by
             * pressing it once and twice and reading the band. */
            c->poly_deg = c->poly_deg == 45 ? 90 : c->poly_deg == 90 ? 0 : 45;
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
    if (!JW_RANGE_CMD(c->command) || c->pressed != 2) {
        return 0;
    }
    if (c->stage == 3) {        /* 追加･除外's 「①範囲 確定」 */
        if (item == 1) {
            /* 消去 goes on to `復活出来ません |①実行|②中止|`; 複写 asks how
             * to copy -- `|①ﾏｳｽ位置(L,R)|②数値位置|…|⑦属性変更|`, with
             * 変更無し in the band (src/copy.h stage 4). */
            c->stage = (JW_MOVE_CMD(c->command) || c->command == 17)
                     ? 4 : 2;
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
                l->x0 = (float)ax;
                l->y0 = (float)ay;
                l->x1 = (float)bx;
                l->y1 = (float)by;
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

int jw_cmd_top(JwCmd *c, Jwc *d, int item, int right)
{
    int changed;

    /* The press belongs to whatever claims it.  A command that has been built
     * this far answers in cmd_top above and the table never sees the press;
     * one that has not leaves the screen as it was, and then src/item.h --
     * what the original wrote when the same cell was pressed there -- is put
     * over the line the menu item came up with.  See src/ui.c. */
    c->top_item = 0;
    c->top_right = 0;
    c->dim_did = 0;      /* 項目を選び直すと [ESC] は消えます */
    c->dim_lines0 = d ? d->n_lines : 0;
    c->dim_only = 0;
    changed = cmd_top(c, d, item);
    if (!changed && jw_ui_item_has(c->command, item, right)) {
        c->top_item = item;
        c->top_right = right;
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

/* And the press that fixes it. */
static int offset_line(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy)
{
    double ax, ay, bx, by, side[2];

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

int jw_cmd_key(JwCmd *c, Jwc *d, int key)
{
    static const double F[5] = { 1000.0, 100.0, 200.0, 300.0, 500.0 };

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
                jwc_edit_text(d, c->edit_text, c->typed);
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
        if (key == 13 || key == 10) {
            const unsigned char size = (unsigned char)(d ? d->char_type : 1);
            const unsigned char layer =
                (unsigned char)(d ? ((0 << 4) | (d->write_layer & 15)) : 0);

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

                jwc_add_text(d, (float)c->x0, (float)c->y0,
                             (float)(c->x0 + (c->text_vert ? 0.0 : len)),
                             (float)(c->y0 + (c->text_vert ? len : 0.0)),
                             c->typed, size, layer);
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
    if (key == 27) {
        /* [ESC]: the point in hand goes and the command asks for it again.
         * With nothing in hand it writes nothing at all, and a second one
         * after the first writes nothing either -- both measured, so both are
         * "return 0, nothing changed" here. */
        if (!c->pressed || c->escaped) {
            return 0;
        }
        if (JW_RANGE_CMD(c->command)) {
            /* A command that takes a range goes all the way back to the line
             * it came up with -- `◇消去範囲 始点指示 |①範囲内消去|…` with a
             * `・` at column 6 -- whether the range was half taken or fixed.
             * Measured on 消去 from both. */
            c->pressed = 0;
            c->stage = 0;
            c->n_flip = 0;
            c->cleared = 0;
            c->moved = 0;
            free(c->sel_line);
            free(c->sel_arc);
            free(c->sel_text);
            c->sel_line = c->sel_arc = c->sel_text = 0;
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
        c->pressed = 0;
        c->escaped = 1;
        c->moved = 0;
        return 1;
    }
    if (key == JW_KEY_F2 && JW_RANGE_CMD(c->command) && c->stage == 3) {
        c->cleared = 1;
        c->n_flip = 0;
        return 1;
    }
    if (!c->typing) {
        return 0;
    }
    if (key >= JW_KEY_F1 && key <= JW_KEY_F5) {
        /* The five the top line offers.  They belong to the program's state,
         * like the numbers in src/prompt.h, and are here as the original had
         * them when src/typed.h was captured. */
        sprintf(c->typed, "%g", F[key - JW_KEY_F1]);
        c->typed_n = (int)strlen(c->typed);
        key = 13;
    }
    if (c->command == 14 && c->top_item == 3) {
        /* ③任意方向's angle.  The field takes digits, a point and a
         * minus, and [Enter] turns the road on. */
        if (key == 13 || key == 10) {
            c->typed[c->typed_n] = 0;
            jw_cmd_dim_angle(c, c->typed_n ? atof(c->typed) : 0.0);
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            return 1;
        }
        if (((key >= '0' && key <= '9') || key == '.' || key == '-')
            && c->typed_n < 8) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
        }
        return 1;
    }
    if (c->command == 19) {
        /* 正多角形's number of sides.  Three or more; the original's own
         * `[5]` is what it offers. */
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
        if (key >= '0' && key <= '9' && c->typed_n < 8) {
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
            if (c->typed_n < 8) {
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

                c->scale_x = atof(c->typed);
                c->scale_y = comma ? atof(comma + 1) : c->scale_x;
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
        if ((key >= '0' && key <= '9') || key == '.' || key == '-'
            || key == ',') {
            if (c->typed_n < 8) {
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
                c->rot_deg = atof(c->typed);
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
        if ((key >= '0' && key <= '9') || key == '.' || key == '-') {
            if (c->typed_n < 8) {
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

                c->scale_x = atof(c->typed);
                c->scale_y = comma ? atof(comma + 1) : c->scale_x;
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
             || key == '-') && c->typed_n < 8) {
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
                d->copy_x_mm = atof(c->typed);
                comma = strchr(c->typed, ',');
                d->copy_y_mm = comma ? atof(comma + 1) : d->copy_x_mm;
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
             || key == '-') && c->typed_n < 8) {
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
                d->copy_x_mm = atof(c->typed);
                comma = strchr(c->typed, ',');
                d->copy_y_mm = comma ? atof(comma + 1) : d->copy_x_mm;
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
            if (c->typed_n < 8) {
                c->typed[c->typed_n++] = (char)key;
                c->typed[c->typed_n] = 0;
            }
            return 1;
        }
        return 1;
    }
    if (key == 13 || key == 10) {               /* [Enter] */
        c->typed[c->typed_n] = 0;
        c->gap = atof(c->typed);
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
        if (c->typed_n < 8) {
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

/* 正多角形: n corners on the circle through the vertex given, starting at it
 * and going counter-clockwise. */
static void polygon(JwCmd *c, Jwc *d, double px, double py)
{
    const double dx = px - c->x0, dy = py - c->y0;
    const double r = sqrt(dx * dx + dy * dy);
    const double a0 = atan2(dy, dx);
    const double step = 2.0 * 3.14159265358979323846 / c->sides;
    int i;

    if (!d || c->sides < 3 || r <= 0.0) {
        return;
    }
    for (i = 0; i < c->sides; i++) {
        const double a = a0 + step * i, b = a0 + step * (i + 1);

        if (jwc_add_line(d, (float)(c->x0 + r * cos(a)),
                         (float)(c->y0 + r * sin(a)),
                         (float)(c->x0 + r * cos(b)),
                         (float)(c->y0 + r * sin(b)),
                         (unsigned char)d->line_type, (unsigned char)d->pen,
                         (unsigned char)((0 << 4) | (d->write_layer & 15)))) {
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

    for (i = 0; i < 2; i++) {
        double e[4];

        if (!jw_cmd_two_line(c, d, i, e)) {
            return;
        }
        if (jwc_add_line(d, (float)e[0], (float)e[1], (float)e[2], (float)e[3],
                         (unsigned char)d->line_type, (unsigned char)d->pen,
                         (unsigned char)((0 << 4) | (d->write_layer & 15)))) {
            /* 0 in the byte a drawn line carries 3 in, like 面取's. */
            d->lines[d->n_lines - 1].rest[1] = 0;
        }
    }
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
    back = want / 2.0 / sn;
    akx = (float)(cx + back * adx);
    aky = (float)(cy + back * ady);
    bkx = (float)(cx + back * bdx);
    bky = (float)(cy + back * bdy);
    /* The two lines keep their far ends and stop at those points; the chamfer
     * goes on the end.  Ａ first, the way the original's records come out. */
    first = a;
    second = b > a ? b - 1 : b;
    keep_far(d, first, cx, cy, akx, aky);
    keep_far(d, second, cx, cy, bkx, bky);
    /* 面取 **clears the last of the three bytes** on the two lines it re-cut.
     * Measured on SAMPLE6, whose lines carry 08 there: the two come back with
     * 00.  線伸縮 and コーナー連結 do not -- the same line through 線伸縮 keeps
     * its 08 -- so this belongs to 面取 and is not a property of rewriting a
     * record. */
    d->lines[d->n_lines - 2].rest[3] = 0;
    d->lines[d->n_lines - 1].rest[3] = 0;
    if (jwc_add_line(d, akx, aky, bkx, bky,
                     (unsigned char)d->line_type, (unsigned char)d->pen,
                     (unsigned char)((0 << 4) | (d->write_layer & 15)))) {
        /* A chamfer carries **0** in the byte a drawn line carries 3 in.
         * Measured, like 中心線's 2. */
        d->lines[d->n_lines - 1].rest[1] = 0;
    }
}

/* 中心線's last press: put the line down between the start already taken
 * and the point just given, both dropped onto the bisector. */
static void centre_line(JwCmd *c, Jwc *d, const JwView *w, double px, double py)
{
    double ox, oy, dx, dy, pax, pay, pbx, pby, n, t0, t1;

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
    n = dx * dx + dy * dy;
    if (n <= 0.0) {
        return;
    }
    t0 = ((c->x0 - ox) * dx + (c->y0 - oy) * dy) / n;
    t1 = ((px - ox) * dx + (py - oy) * dy) / n;
    if (!jwc_add_line(d, (float)(ox + t0 * dx), (float)(oy + t0 * dy),
                      (float)(ox + t1 * dx), (float)(oy + t1 * dy),
                      (unsigned char)d->line_type, (unsigned char)d->pen,
                      (unsigned char)((0 << 4) | (d->write_layer & 15)))) {
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
static void stretch_to(JwCmd *c, Jwc *d, const JwView *w, long k,
                       int sx, int sy, int right)
{
    double px, py, ax, ay, t, fx, fy, dx, dy, n;
    const JwcLine *l;
    int near0;

    if (!d || k < 0 || k >= d->n_lines) {
        return;
    }
    if (!take(c, d, w, sx, sy, right, &px, &py)) {
        return;                 /* 読取可能データ無: nothing taken, nothing moves */
    }
    l = &d->lines[k];
    dx = l->x1 - l->x0;
    dy = l->y1 - l->y0;
    n = dx * dx + dy * dy;
    if (n <= 0.0) {
        return;
    }
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
    jwc_relink_line(d, first, ax, ay, (float)cx, (float)cy);
    jwc_relink_line(d, second, bx, by, (float)cx, (float)cy);
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
        (unsigned char)((0 << 4) | (d->write_layer & 15));
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
    if (jwc_add_line(d, DIM_X(x0, y), DIM_Y(x0, y),
                     DIM_X(x1, y), DIM_Y(x1, y), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = 0x6e;
        d->lines[d->n_lines - 1].rest[3] = 0x20;
    }
    if (jwc_add_line(d, DIM_X(x1, b), DIM_Y(x1, b),
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

            if (jwc_add_line(d, DIM_X(on, y), DIM_Y(on, y),
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
    if (jwc_add_text(d,
                     DIM_X(mid - len / 2.0, y + off),
                     DIM_Y(mid - len / 2.0, y + off),
                     DIM_X(mid + len / 2.0, y + off),
                     DIM_Y(mid + len / 2.0, y + off),
                     buf, (unsigned char)d->dim_size, layer)) {
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
        (unsigned char)((0 << 4) | (d->write_layer & 15));
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
    if (jwc_add_line(d, DIM_X(a0, y), DIM_Y(a0, y),
                     DIM_X(a, y), DIM_Y(a, y), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = 0x80;
        d->lines[d->n_lines - 1].rest[3] = 0x20;
    }
    if (jwc_add_line(d, DIM_X(a, b), DIM_Y(a, b),
                     DIM_X(a, ye), DIM_Y(a, ye), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = 0x59;
        d->lines[d->n_lines - 1].rest[3] = 0x20;
    }
    if (!c->dim_prog_n
        && jwc_add_line(d, DIM_X(a0, b), DIM_Y(a0, b),
                        DIM_X(a0, ye), DIM_Y(a0, ye), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = 0x59;
        d->lines[d->n_lines - 1].rest[3] = 0x20;
    }
    for (i = 0; i < 2; i++) {
        const double per = i ? y + ay : y - ay;

        if (jwc_add_line(d, DIM_X(a, y), DIM_Y(a, y),
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

static void dimension(JwCmd *c, Jwc *d, double x1)
{
    const unsigned char layer =
        (unsigned char)((0 << 4) | (d->write_layer & 15));
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
    if (jwc_add_line(d, DIM_X(x0, y), DIM_Y(x0, y),
                     DIM_X(x1, y), DIM_Y(x1, y), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = (unsigned char)
            (c->dim_circle ? 0xa2 : uy == 0.0 && ux > 0.0 ? 0x80 : 0x00);
        d->lines[d->n_lines - 1].rest[3] = 0x20;
    }
    if (jwc_add_line(d, DIM_X(x0, b), DIM_Y(x0, b),
                     DIM_X(x0, ye), DIM_Y(x0, ye), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = 0x59;
        d->lines[d->n_lines - 1].rest[3] = 0x20;
    }
    if (jwc_add_line(d, DIM_X(x1, b), DIM_Y(x1, b),
                     DIM_X(x1, ye), DIM_Y(x1, ye), type, pen, layer)) {
        d->lines[d->n_lines - 1].rest[1] = 0x59;
        d->lines[d->n_lines - 1].rest[3] = 0x20;
    }
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

            if (jwc_add_line(d, DIM_X(on, y), DIM_Y(on, y),
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
    if (jwc_add_text(d,
                     DIM_X(mid - len / 2.0, y + off),
                     DIM_Y(mid - len / 2.0, y + off),
                     DIM_X(mid + len / 2.0, y + off),
                     DIM_Y(mid + len / 2.0, y + off),
                     buf, (unsigned char)d->dim_size, layer)) {
        d->texts[d->n_texts - 1].rest[2] = 0x10;
        d->texts[d->n_texts - 1].rest[3] =
            (unsigned char)(0x40 + c->dim_circle);
    }
#undef DIM_X
#undef DIM_Y
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
                      (unsigned char)((0 << 4) | (d->write_layer & 15)))) {
        return 0;
    }
    d->lines[d->n_lines - 1].rest[1] = 0x05;
    return 1;
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

    if (c->moved) {
        return;
    }
    at_screen(w, c->poly_px, c->poly_py, &px, &py);
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

int jw_cmd_press(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy, int right)
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
    if (c->command == 27 && c->zukei == JW_ZUKEI_RANGE && c->pressed == 2) {
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
        if (c->typing) {
            return 0;           /* the number has to be finished first */
        }
        if (c->stage == 4) {    /* 間隔取得: the line to measure from */
            const long k = jw_cmd_line_at(d, w, sx, sy);

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
            c->num[0] = c->num[1] = c->gap;
            c->dec[0] = 2;
            c->dec[1] = d->decimals;
            c->stage = 6;
            return 0;
        }
        if (c->stage != 2) {    /* not waiting for a side: pick a line */
            const long k = jw_cmd_line_at(d, w, sx, sy);

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
            /* The right button takes the interval last used and goes straight
             * to choosing the side -- `(R)同じ寸法`, as the command's own line
             * says.  No field, no `点指示 or 間隔=`: measured by running 複線
             * once with 20 and then pointing at another line with the right
             * button, which writes `[       20.00]` in the band and nothing
             * else. */
            if (right) {
                c->num[0] = c->num[1] = c->gap;
                c->dec[0] = 2;
                c->dec[1] = d->decimals;
                c->stage = 2;
                return 0;
            }
            c->typing = 1;
            c->typed_n = 0;
            c->typed[0] = 0;
            c->stage = 1;
            return 0;
        }
        return offset_line(c, d, w, sx, sy);
    }
    if (c->command == 10) {
        /* 線消: the right button takes the whole line away.  (The left one
         * starts cutting a piece out of it, which is not done yet.) */
        /* The search runs for either button -- 線消 at (244,140) on SAMPLE6
         * writes the same "found nothing" line whichever one is pressed -- and
         * a line comes first whatever the distances say: on SAMPLE6 (283,236)
         * is right on arc 21 and 2.19 from a line, and (351,179) right on
         * arc 20 and 0.06 from one, and both times it is 線数 that falls. */
        long k = jw_cmd_line_at(d, w, sx, sy);
        long j = k < 0 ? jw_cmd_arc_at(d, w, sx, sy) : -1;

        if (k < 0 && j < 0) {
            c->missed = 1;      /* nothing within reach; the drawing stands */
            return 0;
        }
        c->missed = 0;
        if (!right) {
            return 0;           /* 部分消去, cutting a piece out: not done yet */
        }
        if (k >= 0) {
            jwc_remove_line(d, k);
        } else {
            jwc_remove_arc(d, j);
        }
        c->stage = 1;
        return 1;
    }
    if (c->command == 13) {
        /* 文字: one press takes the place the string starts at -- the base
         * point is 左下, the bottom left, so it is the near end of the
         * baseline -- and the top line turns into a field to type it in.
         * [Enter] writes the text.  RESUME.md 4.17.
         *
         * Measured: pressing (250,200) on SAMPLE0 and typing `ABC` leaves
         * a record whose baseline runs (129.000,263.000)-(137.721,263.000),
         * the string at the end of the pool, character type 3 and layer 0. */
        jw_cmd_at(w, sx, sy, &x, &y);
        c->x0 = x;
        c->y0 = y;
        c->pressed = 1;
        c->stage = 1;
        c->typing_text = 1;
        c->typed[0] = 0;
        c->typed_n = 0;
        c->typed_at = 0;
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

        if (!take_point(c, d, w, sx, sy, 1, &x, &y)) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        memset(&p, 0, sizeof p);
        p.x = (float)x;
        p.y = (float)y;
        p.layer = (unsigned char)((0 << 4) | (d->write_layer & 15));
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
        const long k = jw_cmd_line_at(d, w, sx, sy);
        const double alen = (c->dim_arrow_mm > 0.0 ? c->dim_arrow_mm : 3.0)
                          * d->unit_mm;
        const double rad = c->dim_angle_deg * 3.14159265358979323846
                         / 180.0;
        double ex, ey, ox, oy, dx, dy, far;
        int i;

        if (k < 0) {
            c->missed = 1;
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
                             (unsigned char)((0 << 4)
                                             | (d->write_layer & 15)))) {
                d->lines[d->n_lines - 1].rest[1] = 0xf5;
                d->lines[d->n_lines - 1].rest[3] = 0x20;
                c->dim_did = 1;
            }
        }
        return 1;
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
            c->dim_vert = 0;
            c->dim_ux = 1.0;
            c->dim_uy = 0.0;
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
                             (unsigned char)((0 << 4)
                                             | (d->write_layer & 15)))) {
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
        const long m = jw_cmd_line_at(d, w, sx, sy);

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
    if (c->command == 26) {
        /* 円線接: the item's own line offers ①接 線 with the left button and
         * ②接円 with the right, and the first press in the drawing is what
         * chooses -- it is taken for that and nothing else.  Then ③指定点 off
         * the top line, a point, and a circle. */
        if (!c->tan_on) {
            if (right) {
                return 0;       /* ②接円 is not done */
            }
            c->tan_on = 1;
            c->pressed = 1;
            c->stage = 1;
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
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            /* The new line goes **over** the finished screen, which is what
             * the original does -- a text drawn after it in the file would
             * otherwise cover it (TEST1 has one right across the tangent).
             * jw_cmd_after draws everything past these three. */
            c->n0_lines = d->n_lines;
            c->n0_arcs = d->n_arcs;
            c->n0_texts = d->n_texts;
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
        const long k = jw_cmd_line_at(d, w, sx, sy);
        int i;

        if (k < 0) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        c->pressed = 1;
        if (c->hatch_closed) {
            return 0;           /* 別図形 is not done */
        }
        if (c->hatch_n > 0 && k == c->hatch_line[0] && c->hatch_n >= 2) {
            c->hatch_closed = 1;
            c->stage = 4;
            return 1;
        }
        for (i = 0; i < c->hatch_n; i++) {
            if (c->hatch_line[i] == k) {
                return 0;       /* already in the frame */
            }
        }
        if (c->hatch_n >= JW_HATCH_MAX) {
            return 0;
        }
        c->hatch = 1;
        c->hatch_line[c->hatch_n++] = k;
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
    if (c->command == 28) {
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
        const long k = jw_cmd_text_at(d, w, sx, sy);
        const char *str;

        /* A press that finds nothing **visible** does nothing: SAMPLE6's
         * `40` is on group 1, which that drawing has turned off, and pressing
         * it leaves the original saying 読取可能データ無 with the item's own
         * line still up.  Whether a text that is visible but not *editable*
         * can be picked is not measured -- none of the fourteen drawings has
         * a layer where the two flags differ. */
        if (k < 0) {
            return 0;
        }
        str = d->texts[k].text ? d->texts[k].text : "";
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
            return 1;
        }
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
            c->stage = 5;
            return 1;
        }
        polygon(c, d, px, py);
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
        if (c->pick_a < 0) {
            const long k = jw_cmd_line_at(d, w, sx, sy);

            if (k < 0) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            c->pick_a = k;
            /* What was there before this run: jw_cmd_after puts anything past
             * it back over the chrome. */
            c->n0_lines = d->n_lines;
            c->stage = 1;
            return 1;
        }
        {
            double px, py;

            if (!take(c, d, w, sx, sy, right, &px, &py)) {
                return 1;
            }
            if (c->stage != 2) {
                c->x0 = px;
                c->y0 = py;
                c->stage = 2;
                return 1;
            }
            c->x1 = px;
            c->y1 = py;
            c->pending = 1;
            c->stage = 3;
            return 1;
        }
    }
    if (c->command == 8) {
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
        const long k = jw_cmd_line_at(d, w, sx, sy);

        if (k < 0) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        /* The line above carries the chamfer length, so it has to be in the
         * numbers the chrome fills in (src/stage.h's `③寸法=%*.*f`). */
        c->num[0] = c->gap_chamfer;
        c->dec[0] = d->decimals;
        if (c->pick_a < 0) {
            /* What was there before this run -- jw_cmd_after puts anything
             * past it back over the chrome, and anything *before* it must be
             * left alone or the red mark goes under a fresh white line. */
            c->n0_lines = d->n_lines;
            c->pick_a = k;
            c->pick_x = sx;
            c->pick_y = sy;
            c->stage = 1;
            return 1;
        }
        if (k != c->pick_a) {
            chamfer(c, d, w, c->pick_a, k, sx, sy);
        }
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
        if (c->pick_a < 0 || c->pick_b < 0) {
            const long k = jw_cmd_line_at(d, w, sx, sy);

            if (k < 0) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            if (c->pick_a < 0) {
                c->n0_lines = d->n_lines;
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
            const long k = jw_cmd_line_at(d, w, sx, sy);

            if (k < 0) {
                c->missed = 1;
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
        stretch_to(c, d, w, c->pick_a, sx, sy, right);
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
        const long k = jw_cmd_line_at(d, w, sx, sy);

        if (k < 0) {
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        if (c->pick_a < 0) {
            c->pick_a = k;
            c->pick_x = sx;
            c->pick_y = sy;
            c->stage = 1;
            return 1;
        }
        if (k != c->pick_a) {
            corner_join(c, d, w, c->pick_a, k, sx, sy);
        }
        c->pick_a = -1;
        c->stage = 2;
        return 1;
    }
    if (c->command == 24) {
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
        const long k = jw_cmd_line_at(d, w, sx, sy);
        const long j = k < 0 ? jw_cmd_arc_at(d, w, sx, sy) : -1;
        const unsigned char layer =
            (unsigned char)((0 << 4) | (d->write_layer & 15));

        if (k < 0 && j < 0) {
            /* Nothing there: the original writes `.読取可能データ無` and puts
             * its own line back -- no `[ESC]`, which is the stage-1 line -- so
             * the command stays where it was. */
            c->missed = 1;
            return 0;
        }
        c->missed = 0;
        /* The word beside the counts is `線` for a line and `円` for an arc
         * (measured: pressing SAMPLE6's arc at (446,189) says 円 変更). */
        c->hit_kind = k >= 0 ? 1 : 2;
        if (k >= 0) {
            d->lines[k].type = (unsigned char)d->line_type;
            d->lines[k].pen = (unsigned char)d->pen;
            d->lines[k].layer = layer;
            d->lines[k].rest[0] = layer;
            d->lines[k].rest[2] |= 1;
        } else {
            d->arcs[j].type = (unsigned char)d->line_type;
            d->arcs[j].pen = (unsigned char)d->pen;
            d->arcs[j].layer = layer;
            d->arcs[j].rest[0] = layer;
            d->arcs[j].rest[2] |= 1;
        }
        c->stage = 1;
        return 1;
    }
    if (JW_RANGE_CMD(c->command)) {
        /* 消去: the first press takes a corner of the range and the second,
         * with the right button, fixes it -- 範囲確定, as the line it puts up
         * says.  What the box holds whole is then painted in colour 2 and the
         * top line asks for ①実行.  See RESUME.md 4.9.
         *
         * 複写 takes its range exactly the same way, and its lines are spelt
         * the same but for the word in front (src/copy.h).  Where it differs
         * is after 範囲確定: 消去 asks ①実行, 複写 asks **how** to copy. */
        jw_cmd_at(w, sx, sy, &x, &y);
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
            if (c->stage != 5 && c->stage != 6 && c->stage != 9) {
                return 0;
            }
            if (!take(c, d, w, sx, sy, right, &px, &py)) {
                return 1;
            }
            if (c->stage == 5) {
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
        if (!c->pressed) {
            c->x0 = x;
            c->y0 = y;
            c->pressed = 1;
            c->stage = 1;
            /* ③指定範囲 asks with which button, and says so along the top. */
            c->with_text = right;
            return 0;
        }
        if (c->pressed == 1) {
            c->x1 = x;
            c->y1 = y;
            c->pressed = 2;
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
            c->stage = (right && c->command == 25) ? 2 : 3;
            return 1;
        }
        if (c->stage == 3) {
            /* 追加･除外: 線・円 with the left button, 文字 with the right. */
            long k, j;

            if (right) {                /* 文字(R) */
                k = jw_cmd_text_at(d, w, sx, sy);
                if (k < 0) {
                    c->missed = 1;
                    return 0;
                }
                c->missed = 0;
                flip(c, JW_FLIP_TEXT, k);
                return 1;
            }
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
    if (c->command == 22) {
        /* 点: a press drops a 仮点.  The original changes neither count
         * (SAMPLE0 stays at 30|13), writes nothing on the top line, and
         * repaints the panel -- read off a press at (300,250) with 点 picked,
         * which leaves the twelve white pixels of a circle of radius two there
         * and nothing else.  Two presses leave two. */
        if (!take(c, d, w, sx, sy, right, &x, &y)
            || d->n_temp >= JWC_TEMP_MAX) {
            return 0;
        }
        d->temp_x[d->n_temp] = (float)x;
        d->temp_y[d->n_temp] = (float)y;
        d->n_temp++;
        /* It writes its line again afterwards -- [ESC], the dot at column 6 and
         * the whole prompt -- which is stage 1 in src/stage.h.  Picking the
         * item alone does not put [ESC] up; the first press does. */
        c->stage = 1;
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

        if (!take(c, d, w, sx, sy, right, &x, &y)) {
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
        if (a1 - a0 < 0.0 ? a1 - a0 + 360.0 > 180.0 : a1 - a0 > 180.0) {
            const double t = a0;

            a0 = a1;
            a1 = t;
        }
        return jwc_add_arc_at(d, (float)c->x0, (float)c->y0,
                              (float)hypot_of(c->x1 - c->x0, c->y1 - c->y0),
                              fixed16(a0), fixed16(a1),
                              (unsigned char)d->line_type,
                              (unsigned char)d->pen,
                              (unsigned char)((0 << 4) | (d->write_layer & 15)),
                              0x12);
    }
    if (c->command != 2 && c->command != 3 && c->command != 4
        && c->command != 11) {
        return 0;               /* ＋ line on an axis, ／ line, □ box, ○ circle */
    }
    if (!take(c, d, w, sx, sy, right, &x, &y)) {
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
    if (c->command == 2) {
        axis(c, &x, &y);
    }
    measure(c, d, x, y);
    /* Both take the pen and the line type the panel shows and go on the layer
     * being written to -- SAMPLE0 writes with pen 2, and what the original
     * draws there comes out white, which is what pen 2 is. */
    if (c->command == 4) {
        /* □: two opposite corners, and four lines come out -- SAMPLE0's count
         * goes from 30 to 34 when the original draws one. */
        const unsigned char t = (unsigned char)d->line_type;
        const unsigned char p = (unsigned char)d->pen;
        const unsigned char g = (unsigned char)((0 << 4) | (d->write_layer & 15));

        return jwc_add_line(d, (float)c->x0, (float)c->y0, (float)x, (float)c->y0, t, p, g)
            && jwc_add_line(d, (float)x, (float)c->y0, (float)x, (float)y, t, p, g)
            && jwc_add_line(d, (float)x, (float)y, (float)c->x0, (float)y, t, p, g)
            && jwc_add_line(d, (float)c->x0, (float)y, (float)c->x0, (float)c->y0, t, p, g);
    }
    if (c->command == 11) {
        /* ○: the first press is the centre, the second a point on it. */
        const double dx = x - c->x0, dy = y - c->y0;

        return jwc_add_arc(d, (float)c->x0, (float)c->y0,
                           (float)sqrt(dx * dx + dy * dy),
                           (unsigned char)d->line_type, (unsigned char)d->pen,
                           (unsigned char)((0 << 4) | (d->write_layer & 15)));
    }
    return jwc_add_line(d, (float)c->x0, (float)c->y0, (float)x, (float)y,
                        (unsigned char)d->line_type, (unsigned char)d->pen,
                        (unsigned char)((0 << 4) | (d->write_layer & 15)));
}
