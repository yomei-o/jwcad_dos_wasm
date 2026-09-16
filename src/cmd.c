/* The command state machine.  See cmd.h. */
#include "cmd.h"

#include "read.h"

#include "draw.h"

#include <math.h>
#include <stdlib.h>
#include <string.h>

void jw_cmd_pick(JwCmd *c, int command)
{
    memset(c, 0, sizeof(*c));
    c->command = command;
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
    }
}

void jw_cmd_track(JwCmd *c, const Jwc *d, const JwView *w, int sx, int sy)
{
    double x, y;

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
                       double *ax, double *ay, double *bx, double *by);

void jw_cmd_band(const JwCmd *c, VGA *v, const JwView *w, int sx, int sy)
{
    int px, py;

    /* 複線 drags a whole line, not a rubber band from a point: once the
     * interval is in, the copy follows the pointer from one side of the
     * chosen line to the other.  Colour 2, exclusive-or, solid, like every
     * other band -- and at the same pixels the copy lands on, so the press
     * that fixes it changes nothing but the colour. */
    if (c->command == 5 && c->stage == 2) {
        double ax, ay, bx, by;

        if (offset_ends(c, w, sx, sy, &ax, &ay, &bx, &by)) {
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
    if (c->command == 25 && c->pressed != 1) {
        return;                 /* the box is only dragged while it is open */
    }
    at_screen(w, c->x0, c->y0, &px, &py);
    if (c->command == 4 || c->command == 25) {
        jw_line(v, px, py, px, sy, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, px, sy, sx, sy, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, sx, py, sx, sy, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, px, py, sx, py, 2, 0x18, JW_STYLE_SOLID);
    } else if (c->command == 11) {
        const double dx = sx - px, dy = sy - py;

        jw_arc_poly(v, px, py, sqrt(dx * dx + dy * dy), 10000, 0, 0, 0,
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

long jw_cmd_line_at(const Jwc *d, const JwView *w, int sx, int sy)
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

        if (!jwc_visible(d, l->layer)) {
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
        if (away <= best) {
            best = away;
            found = k;
        }
    }
    return found;
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
long jw_cmd_arc_at(const Jwc *d, const JwView *w, int sx, int sy)
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

        if (!jwc_visible(d, a->layer) || a->flatten != 10000) {
            continue;
        }
        if (away < 0.0) {
            away = -away;
        }
        if (away > best) {
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

/* Where a press puts its point: the left button takes the pointer, the right
 * one snaps to what is already drawn.  Returns 0 when the right button found
 * nothing, which is when the original says 読取可能データ無 and does nothing
 * else -- no point is taken, so the command stays where it was. */
static int take(JwCmd *c, const Jwc *d, const JwView *w, int sx, int sy,
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

int jw_cmd_in_range(const JwCmd *c, double ax, double ay, double bx, double by)
{
    const double lo_x = c->x0 < c->x1 ? c->x0 : c->x1;
    const double hi_x = c->x0 < c->x1 ? c->x1 : c->x0;
    const double lo_y = c->y0 < c->y1 ? c->y0 : c->y1;
    const double hi_y = c->y0 < c->y1 ? c->y1 : c->y0;

    return ax >= lo_x && ax <= hi_x && bx >= lo_x && bx <= hi_x
           && ay >= lo_y && ay <= hi_y && by >= lo_y && by <= hi_y;
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

void jw_cmd_marked(const JwCmd *c, VGA *v, const Jwc *d, const JwView *w)
{
    long k;

    if (!d || c->command != 25 || c->pressed != 2) {
        return;
    }
    for (k = 0; k < d->n_lines; k++) {
        const JwcLine *l = &d->lines[k];
        int x0, y0, x1, y1;

        if (!in_reach_layer(d, l->layer)
            || !jw_cmd_in_range(c, l->x0, l->y0, l->x1, l->y1)) {
            continue;
        }
        at_screen(w, l->x0, l->y0, &x0, &y0);
        at_screen(w, l->x1, l->y1, &x1, &y1);
        jw_line(v, x0, y0, x1, y1, 2, ROP_REPLACE,
                jw_view_line_style(l->type));
    }
    for (k = 0; k < d->n_arcs; k++) {
        const JwcArc *a = &d->arcs[k];

        if (in_reach_layer(d, a->layer) && arc_in_range(c, a)) {
            jw_view_arc(v, d, a, w, 2);
        }
    }
    for (k = 0; k < d->n_texts; k++) {
        const JwcText *t = &d->texts[k];

        if (in_reach_layer(d, t->layer)
            && jw_cmd_in_range(c, t->x0, t->y0, t->x1, t->y1)) {
            jw_view_text(v, d, t, w, 2);
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

int jw_cmd_top(JwCmd *c, Jwc *d, int item)
{
    long k;
    int changed = 0;

    if (!d || c->command != 25 || c->pressed != 2) {
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
        const JwcLine *l = &d->lines[k];

        if (in_reach_layer(d, l->layer)
            && jw_cmd_in_range(c, l->x0, l->y0, l->x1, l->y1)) {
            jwc_remove_line(d, k);
            changed = 1;
        }
    }
    for (k = d->n_arcs - 1; k >= 0; k--) {
        if (in_reach_layer(d, d->arcs[k].layer)
            && arc_in_range(c, &d->arcs[k])) {
            jwc_remove_arc(d, k);
            changed = 1;
        }
    }
    for (k = d->n_texts - 1; k >= 0; k--) {
        const JwcText *t = &d->texts[k];

        if (in_reach_layer(d, t->layer)
            && jw_cmd_in_range(c, t->x0, t->y0, t->x1, t->y1)) {
            jwc_remove_text(d, k);
            changed = 1;
        }
    }
    c->pressed = 0;
    c->stage = 0;
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
                       double *ax, double *ay, double *bx, double *by)
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
    double ax, ay, bx, by;

    if (!offset_ends(c, w, sx, sy, &ax, &ay, &bx, &by)) {
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
    c->stage = 3;
    return 1;
}

/* A key while a command is asking for a number.  See cmd.h. */
int jw_cmd_key(JwCmd *c, const Jwc *d, int key)
{
    if (!c->typing) {
        return 0;
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

int jw_cmd_press(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy, int right)
{
    double x, y;

    if (!d) {
        return 0;
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
        if (c->stage < 2) {
            const long k = jw_cmd_line_at(d, w, sx, sy);

            if (k < 0) {
                c->missed = 1;
                return 0;
            }
            c->missed = 0;
            if (right) {
                return 0;       /* (R)同じ寸法, the interval last used: not done */
            }
            c->pick = k;
            c->lx0 = d->lines[k].x0;
            c->ly0 = d->lines[k].y0;
            c->lx1 = d->lines[k].x1;
            c->ly1 = d->lines[k].y1;
            c->per_mm = (d->unit_mm > 0.0f ? d->unit_mm : 1.0f)
                      / (d->denom > 0.0 ? d->denom : 1.0);
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
    if (c->command == 25) {
        /* 消去: the first press takes a corner of the range and the second,
         * with the right button, fixes it -- 範囲確定, as the line it puts up
         * says.  What the box holds whole is then painted in colour 2 and the
         * top line asks for ①実行.  See RESUME.md 4.9. */
        if (c->pressed == 2) {
            return 0;           /* the answer comes from the top line now */
        }
        jw_cmd_at(w, sx, sy, &x, &y);
        if (!c->pressed) {
            c->x0 = x;
            c->y0 = y;
            c->pressed = 1;
            c->stage = 1;
            return 0;
        }
        if (!right) {
            return 0;           /* 追加･除外 with the left button: not done */
        }
        c->x1 = x;
        c->y1 = y;
        c->pressed = 2;
        c->stage = 2;
        return 1;
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
