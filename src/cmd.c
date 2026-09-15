/* The command state machine.  See cmd.h. */
#include "cmd.h"

#include "draw.h"

#include <math.h>
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

void jw_cmd_band(const JwCmd *c, VGA *v, const JwView *w, int sx, int sy)
{
    int px, py;

    if (!c->pressed) {
        return;
    }
    at_screen(w, c->x0, c->y0, &px, &py);
    if (c->command == 4) {
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

int jw_cmd_press(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy, int right)
{
    double x, y;

    if (!d) {
        return 0;
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
    if (c->command == 22) {
        /* 点: the left button drops a 仮点 where it was pressed.  The original
         * changes neither count (SAMPLE0 stays at 30|13), writes nothing on the
         * top line, and repaints the panel -- read off a press at (300,250)
         * with 点 picked, which leaves the twelve white pixels of a circle of
         * radius two there and nothing else.  Two presses leave two.
         *
         * The right button is (R)Read, the snap, which is not done yet. */
        if (right || d->n_temp >= JWC_TEMP_MAX) {
            return 0;
        }
        jw_cmd_at(w, sx, sy, &x, &y);
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
    jw_cmd_at(w, sx, sy, &x, &y);
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
