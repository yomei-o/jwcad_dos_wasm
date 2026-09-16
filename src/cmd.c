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
    memset(c, 0, sizeof(*c));
    c->command = command;
    /* 複線 remembers the interval between runs, and its line says so before
     * anything has been typed: `(R)同じ寸法[    1000.000]`.  A thousand is
     * what the original had when src/prompt.h was captured -- the program's
     * state, like the five numbers [F1] to [F5] stand for. */
    c->gap = 1000.0;
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
                       double *ax, double *ay, double *bx, double *by,
                       double *side);

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
    if (c->command == 25 && c->pressed == 2) {
        /* 追加･除外 keeps the range on the screen: four lines in colour 4,
         * exclusive-or.  The right button's 範囲確定 does not -- its screen
         * has no green at all, and this one has 264 pixels of it (SAMPLE0,
         * (150,130)-(245,170)).
         *
         * Exclusive-or, and each side drawn corner to corner, is what the
         * screen says: the **four corners come out black**, because each of
         * them is drawn twice and the second turns it back, and where the box
         * crosses a blue pixel it goes magenta (1 xor 4 = 5) instead of
         * green.  Both would be impossible if it were painted flat. */
        if (c->stage == 3) {
            int qx, qy;

            at_screen(w, c->x0, c->y0, &px, &py);
            at_screen(w, c->x1, c->y1, &qx, &qy);
            jw_line(v, px, py, qx, py, 4, 0x18, JW_STYLE_SOLID);
            jw_line(v, qx, py, qx, qy, 4, 0x18, JW_STYLE_SOLID);
            jw_line(v, qx, qy, px, qy, 4, 0x18, JW_STYLE_SOLID);
            jw_line(v, px, qy, px, py, 4, 0x18, JW_STYLE_SOLID);
        }
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

/* Does this entity pass the writing pen and line type?
 *
 * 消去's 追加･除外 takes **only entities drawn with the pen and the line type
 * that are selected for writing**; 線消 takes anything.  That is the whole of
 * the difference between the two, and it was read out of the original rather
 * than guessed: tools/mkpick.py's `bytes` drawing puts twelve lines ten pixels
 * apart that differ only in the bytes behind the coordinates, and
 * tools/pickat.sh presses on each and reads the number the original's search
 * answers.  Ten are taken; the two refused are the one with line type 2 and
 * the one with pen 5, SAMPLE0 writing with type 1 and pen 2.  The trailing
 * four bytes make no difference at all, nor does the layer once every layer
 * table is on.
 *
 * It is why SAMPLE6 looked unexplainable: it writes with pen 4, so its walls
 * (pen 1, 2 and 5) cannot be taken out of a range however exactly they are
 * pointed at, and the little pen-4 fittings beside them can.
 *
 * The same test is in the original at 11f2:5993 -- `pen != DGROUP 0xa6a ||
 * type != DGROUP 0xa6c` skips the record -- and jwc.h has those two addresses
 * as the panel's pen and line type. */
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

void jw_cmd_marked(const JwCmd *c, VGA *v, const Jwc *d, const JwView *w)
{
    long k;

    if (!d || c->command != 25 || c->pressed != 2) {
        return;
    }
    for (k = 0; k < d->n_lines; k++) {
        const JwcLine *l = &d->lines[k];
        int x0, y0, x1, y1;
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
        } else if (jw_cmd_in_range(c, l->x0, l->y0, l->x1, l->y1)
                   == flipped(c, JW_FLIP_LINE, k)) {
            continue;
        }
        at_screen(w, l->x0, l->y0, &x0, &y0);
        at_screen(w, l->x1, l->y1, &x1, &y1);
        if (style != jw_view_line_style(l->type)) {
            /* The dotted one is not painted *over* the line: the original
             * blacks the whole of it first, so the gaps come out background
             * and not the white that was there.  Measured -- the gaps are
             * 000000 in the original's screen, not ffffff. */
            jw_line(v, x0, y0, x1, y1, 0, ROP_REPLACE, JW_STYLE_SOLID);
        }
        jw_line(v, x0, y0, x1, y1, 2, ROP_REPLACE, style);
    }
    for (k = 0; k < d->n_arcs; k++) {
        const JwcArc *a = &d->arcs[k];
        const double m = a->r;

        if (in_reach_layer(d, a->layer)
            && (c->outside
                ? wholly_outside(c, a->cx - m, a->cy - m, a->cx + m, a->cy + m)
                : arc_in_range(c, a)) != flipped(c, JW_FLIP_ARC, k)) {
            jw_view_arc(v, d, a, w, 2);
        }
    }
    for (k = 0; k < d->n_texts; k++) {
        const JwcText *t = &d->texts[k];

        if (in_reach_layer(d, t->layer)
            && (c->outside ? wholly_outside(c, t->x0, t->y0, t->x1, t->y1)
                           : jw_cmd_in_range(c, t->x0, t->y0, t->x1, t->y1))
               != flipped(c, JW_FLIP_TEXT, k)) {
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

    if (!d) {
        return 0;
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
    if (c->command == 25 && c->pressed == 0 && c->stage == 0) {
        if (item == 1 || item == 2) {
            c->outside = item == 2;
            return 0;
        }
        return 0;
    }
    if (c->command != 25 || c->pressed != 2) {
        return 0;
    }
    if (c->stage == 3) {        /* 追加･除外's 「①範囲 確定」 */
        if (item == 1) {
            c->stage = 2;
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
    for (k = d->n_texts - 1; k >= 0; k--) {
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
    /* `読取可能データ無` goes when ①実行 runs: the original writes
     * `消去 再度(L)` over it.  Measured -- press somewhere with nothing there
     * and then ①実行, and the band beside the counts says 消去 再度(L), not
     * the complaint. */
    c->missed = 0;
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
int jw_cmd_key(JwCmd *c, const Jwc *d, int key)
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
    if (key == JW_KEY_F2 && c->command == 25 && c->stage == 3) {
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
    if (c->command == 25) {
        /* 消去: the first press takes a corner of the range and the second,
         * with the right button, fixes it -- 範囲確定, as the line it puts up
         * says.  What the box holds whole is then painted in colour 2 and the
         * top line asks for ①実行.  See RESUME.md 4.9. */
        jw_cmd_at(w, sx, sy, &x, &y);
        if (!c->pressed) {
            c->x0 = x;
            c->y0 = y;
            c->pressed = 1;
            c->stage = 1;
            return 0;
        }
        if (c->pressed == 1) {
            c->x1 = x;
            c->y1 = y;
            c->pressed = 2;
            /* The right button fixes the range and asks for ①実行; the left
             * one fixes the same range but stays, so that entities can be
             * taken out of it and put back one at a time.  Measured: both
             * leave the same 224 red pixels on SAMPLE0's (150,130)-(245,170),
             * and only the top line differs. */
            c->stage = right ? 2 : 3;
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
            k = jw_cmd_line_at_kind(d, w, sx, sy, 1);
            j = k < 0 ? jw_cmd_arc_at_kind(d, w, sx, sy, 1) : -1;
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
