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

void jw_cmd_track(JwCmd *c, const Jwc *d, const JwView *w, int sx, int sy)
{
    double x, y;

    if (sx != c->press_x || sy != c->press_y) {
        c->moved = 1;           /* one pixel is enough -- see JwCmd.moved */
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

void jw_cmd_band(const JwCmd *c, VGA *v, const JwView *w, int sx, int sy)
{
    int px, py;

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
    if (JW_RANGE_CMD(c->command) && c->pressed == 2 && c->stage == 3) {
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
    if (!c->moved && !(c->command == 13 && c->typing_text)) {
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
        at_screen(w, c->x0 + c->text_wide, c->y0 + c->text_tall, &x1, &y1);
        jw_line(v, px, py, px, y1, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, px, y1, x1, y1, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, x1, y1, x1, py, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, x1, py, px, py, 2, 0x18, JW_STYLE_SOLID);
        jw_line(v, x1 + 1, y1, x1 + 1, y1 + 1, 4, 0x18, JW_STYLE_SOLID);
        jw_line(v, x1 + 3, y1, x1 + 3, y1 + 1, 4, 0x18, JW_STYLE_SOLID);
        jw_line(v, x1 + 1, py - 1, x1 + 1, py, 4, 0x18, JW_STYLE_SOLID);
        jw_line(v, x1 + 3, py - 1, x1 + 3, py, 4, 0x18, JW_STYLE_SOLID);
        return;
    }
    if (JW_RANGE_CMD(c->command) && c->pressed != 1) {
        return;                 /* the box is only dragged while it is open */
    }
    at_screen(w, c->x0, c->y0, &px, &py);
    if (c->command == 4 || JW_RANGE_CMD(c->command)) {
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
/* Does the range take texts in?  ①範囲内消去 and ②範囲外消去 always do;
 * ③指定範囲 asks, and the answer is which button took the first point --
 * `(L)線･円` against `(R)線･円･文字`, as its own line says.  Measured on
 * SAMPLE0 with (150,130)-(245,170): the right button reddens 224 pixels and
 * the left one 89, which is the two lines without text 0. */
static int takes_text(const JwCmd *c)
{
    /* ①範囲内消去 and ②範囲外消去 never ask; ③指定範囲 and 複写 do, and the
     * answer is which button took the first point. */
    return !(c->span || JW_MOVE_CMD(c->command)) || c->with_text;
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

static void copy_by_mm(JwCmd *c, Jwc *d)
{
    const double per = d->unit_mm > 0.0f ? d->unit_mm / d->denom : 1.0;
    const double dx = d->copy_x_mm * per, dy = d->copy_y_mm * per;

    freeze(c, d);
    if (c->command == 16) {
        move_range(c, d, dx, dy);
    } else {
        copy_range(c, d, dx, dy);
    }
    c->copies = 1;
}

/* ③連続: another step.  複写 makes another copy, one step further on than the
 * last; 移動 shifts what it picked by the distance again -- the counts stay
 * where they are and the entities end up at twice the distance.  Measured on
 * SAMPLE0 with 20,30: 複写 leaves copies at 35/52 and 70/104 and 移動 puts the
 * one set at 70/104. */
static void copy_again(JwCmd *c, Jwc *d)
{
    const double per = d->unit_mm > 0.0f ? d->unit_mm / d->denom : 1.0;
    const double n = c->copies + 1.0;

    if (c->command == 16) {
        move_range(c, d, d->copy_x_mm * per, d->copy_y_mm * per);
    } else {
        copy_range(c, d, d->copy_x_mm * per * n, d->copy_y_mm * per * n);
    }
    c->copies++;
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

    if (!d || !JW_RANGE_CMD(c->command) || c->pressed != 2) {
        return;
    }
    /* The chrome leaves the clip open to the whole screen; the marking is part
     * of the drawing, so it goes back to the drawing window. */
    v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
    v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
    v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
    v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;

    for (k = 0; k < c->n0_lines; k++) {
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
        } else if (!picked_line(c, d, k)) {
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
        jw_line(v, x0, y0, x1, y1, mark, ROP_REPLACE, style);
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

void jw_cmd_after(const JwCmd *c, VGA *v, const Jwc *d, const JwView *w)
{
    long k;

    if (!d || !JW_RANGE_CMD(c->command) || c->pressed != 2) {
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
            c->stage = JW_MOVE_CMD(c->command) ? 4 : 2;
        }
        return 0;
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
        if (c->stage == 8 && item == 3) {
            /* ③連続 -- another copy, one step further on.  The line stays as
             * it is and the counts go up again (32|14 to 34|15 on SAMPLE0). */
            copy_again(c, d);
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
    const int t = d ? d->char_type : 1;

    c->text_wide = d ? jwc_text_length(d, c->typed, (unsigned char)t) : 0.0;
    c->text_tall = d ? d->text_h[t] / 10.0 * d->unit_mm : 0.0;
}

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
                 * -- see jwc_text_length.  The baseline is horizontal, which
                 * is what ①水平 means, and the line offers ②垂直 and
                 * ③角度指定 for the others; those are not done. */
                const double len = jwc_text_length(d, c->typed, size);

                jwc_add_text(d, (float)c->x0, (float)c->y0,
                             (float)(c->x0 + len), (float)c->y0,
                             c->typed, size, layer);
            }
            c->typed[0] = 0;
            c->typed_n = 0;
            return 1;
        }
        if (key == 8) {
            if (c->typed_n > 0) {
                c->typed[--c->typed_n] = 0;
            }
            text_box(c, d);
            return 1;
        }
        if (key >= 0x20 && key < 0x7f
            && c->typed_n < (int)sizeof c->typed - 1) {
            c->typed[c->typed_n++] = (char)key;
            c->typed[c->typed_n] = 0;
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

int jw_cmd_press(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy, int right)
{
    double x, y;

    if (!d) {
        return 0;
    }
    /* Any press puts the two counts back in the box beside them; the length
     * and the angle come back when the pointer moves off (JwCmd.moved). */
    c->press_x = sx;
    c->press_y = sy;
    c->moved = 0;
    c->escaped = 0;
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
        text_box(c, d);
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
            /* 複写's own stages: ①ﾏｳｽ位置 has been picked and the presses now
             * take the base point and the place to put the copy.  RESUME.md
             * 4.9e -- the second of those is not understood yet, so this takes
             * the base point and stops there. */
            if (c->stage == 5) {
                c->base_x = x;
                c->base_y = y;
                c->stage = 6;
                return 1;
            }
            return 0;
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
