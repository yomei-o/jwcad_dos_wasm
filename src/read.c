#include "read.h"

#include <math.h>

/* Where a drawing point lands on the screen, as floats -- the read measures in
 * screen dots (the help says ８ﾄﾞｯﾄ), so the comparison has to happen there. */
static void at_screen(const JwView *w, double x, double y, double *sx, double *sy)
{
    *sx = (x - w->ox) * w->scale + w->ax;
    *sy = w->ay - (y - w->oy) * w->scale;
}

/* The distance the reach is measured in: |dx| + |dy| in screen dots.  See
 * JW_READ_REACH for what settled it. */
static double away(const JwView *w, double x, double y, int sx, int sy)
{
    double px, py, dx, dy;

    at_screen(w, x, y, &px, &py);
    dx = px - sx;
    dy = py - sy;
    return (dx < 0 ? -dx : dx) + (dy < 0 ? -dy : dy);
}

/* One candidate, kept if it is the nearest of its own rank so far.  A lower
 * `rank` wins outright: the help's order is a priority, not a tie-break. */
typedef struct {
    int rank;                   /* 0 highest; -1 when nothing has been seen */
    double dist;
    double x, y;
} Best;

static void offer(Best *b, const JwView *w, int rank, double x, double y,
                  int sx, int sy)
{
    const double d = away(w, x, y, sx, sy);

    if (d > JW_READ_REACH) {
        return;
    }
    if (b->rank < 0 || rank < b->rank || (rank == b->rank && d < b->dist)) {
        b->rank = rank;
        b->dist = d;
        b->x = x;
        b->y = y;
    }
}

/* Can this layer be read?  The panel's ring says so: the original's own layer
 * documentation (orig/JW_CADV.HLP, レイヤ操作 1/3) has it as
 *
 *     ○と数字が消えた状態は、そのレイヤを表示しない事を意味し、数字のみの
 *     表示は、そのレイヤの表示は行なうが、レイヤ内の線・点・文字は読取らな
 *     い事を意味します。
 *
 * which is exactly what src/ui.c already works out for the ring.  Measured
 * too: SAMPLE0's dimensioning is on layer 1, which is neither shown nor
 * ringed, and neither the endpoint at screen (231.74,189) nor the crossing at
 * (324,249) can be read. */
static int readable(const Jwc *d, unsigned char layer)
{
    return jwc_visible(d, layer) && d->layer_edit[layer]
           && d->group_edit[layer >> 4];
}

/* Where an arc's two ends are.  The angles are the record's own -- the sweep
 * runs from `start` to `end` anticlockwise in the shape's own frame and the
 * tilt turns it, which is how jw_arc_poly draws it. */
static void arc_end(const JwcArc *a, int which, double *x, double *y)
{
    const double d2r = 3.14159265358979323846 / 180.0;
    const double s = a->start / 65536.0;
    const double e0 = a->end / 65536.0;
    const double t = a->tilt / 65536.0;
    const double ang = (which ? (e0 > s ? e0 : e0 + 360.0) : s) * d2r;
    const double ct = cos(t * d2r), st = sin(t * d2r);
    const double rx = a->r * cos(ang);
    const double ry = a->r * (a->flatten / 10000.0) * sin(ang);

    *x = a->cx + rx * ct - ry * st;
    *y = a->cy + rx * st + ry * ct;
}

/* Where two segments cross, if they do and if it is between both pairs of
 * ends.  A crossing counts as a 読取点 -- TEST1's (242.40,338.82), where two
 * lines cross twenty-four dots from the nearest end, is read. */
static int cross(const JwcLine *p, const JwcLine *q, double *x, double *y)
{
    const double ax = p->x1 - p->x0, ay = p->y1 - p->y0;
    const double bx = q->x1 - q->x0, by = q->y1 - q->y0;
    const double den = ax * by - ay * bx;
    double t, u;

    if (den == 0.0) {
        return 0;
    }
    t = ((q->x0 - p->x0) * by - (q->y0 - p->y0) * bx) / den;
    u = ((q->x0 - p->x0) * ay - (q->y0 - p->y0) * ax) / den;
    if (t < 0.0 || t > 1.0 || u < 0.0 || u > 1.0) {
        return 0;
    }
    *x = p->x0 + t * ax;
    *y = p->y0 + t * ay;
    return 1;
}

/* Is any part of this segment within reach of the point?  Only the segments
 * that are get paired up for crossings, which keeps a drawing of a thousand
 * lines from being a million sums. */
static int segment_near(const JwcLine *l, const JwView *w, int sx, int sy)
{
    double x0, y0, x1, y1, dx, dy, len2, t, px, py;

    at_screen(w, l->x0, l->y0, &x0, &y0);
    at_screen(w, l->x1, l->y1, &x1, &y1);
    dx = x1 - x0;
    dy = y1 - y0;
    len2 = dx * dx + dy * dy;
    t = len2 > 0.0 ? ((sx - x0) * dx + (sy - y0) * dy) / len2 : 0.0;
    if (t < 0.0) {
        t = 0.0;
    }
    if (t > 1.0) {
        t = 1.0;
    }
    px = x0 + t * dx - sx;
    py = y0 + t * dy - sy;
    /* The reach again, but generously: a crossing within eight of the point
     * can sit on a segment that is itself a little further away. */
    return (px < 0 ? -px : px) + (py < 0 ? -py : py) <= JW_READ_REACH * 2.0;
}

int jw_read(const Jwc *d, const JwView *w, int sx, int sy, double *x, double *y)
{
    Best b;
    long k, j;

    b.rank = -1;
    b.dist = 0.0;
    b.x = b.y = 0.0;
    if (!d) {
        return 0;
    }
    /* 目盛 -- the dot grid, and it outranks everything.  SAMPLE1 draws one
     * every 15.6969697 units; a press at (500,57) reads (497.727,54.879),
     * which is the dot, and (503,60) -- 10.4 away by the sum above -- reads
     * nothing. */
    if (d->grid_on && d->grid_x > 0.0 && d->grid_y > 0.0) {
        const double gx = ((sx - w->ax) / w->scale + w->ox) / d->grid_x;
        const double gy = ((w->ay - sy) / w->scale + w->oy) / d->grid_y;
        int i, jj;

        for (i = -1; i <= 1; i++) {
            for (jj = -1; jj <= 1; jj++) {
                offer(&b, w, 0, (floor(gx) + i) * d->grid_x,
                      (floor(gy) + jj) * d->grid_y, sx, sy);
            }
        }
    }
    /* 仮点 -- the points the 点 command drops. */
    for (k = 0; k < d->n_temp; k++) {
        offer(&b, w, 1, d->temp_x[k], d->temp_y[k], sx, sy);
    }
    /* 実点 -- the point records. */
    for (k = 0; k < d->n_points; k++) {
        if (readable(d, d->points[k].layer)) {
            offer(&b, w, 2, d->points[k].x, d->points[k].y, sx, sy);
        }
    }
    /* 端点・交点 -- the ends of every line and arc, and where two lines
     * cross. */
    for (k = 0; k < d->n_lines; k++) {
        const JwcLine *l = &d->lines[k];

        if (!readable(d, l->layer)) {
            continue;
        }
        offer(&b, w, 3, l->x0, l->y0, sx, sy);
        offer(&b, w, 3, l->x1, l->y1, sx, sy);
    }
    for (k = 0; k < d->n_lines; k++) {
        const JwcLine *l = &d->lines[k];

        if (!readable(d, l->layer) || !segment_near(l, w, sx, sy)) {
            continue;
        }
        for (j = k + 1; j < d->n_lines; j++) {
            const JwcLine *m = &d->lines[j];
            double cx, cy;

            if (!readable(d, m->layer) || !segment_near(m, w, sx, sy)) {
                continue;
            }
            if (cross(l, m, &cx, &cy)) {
                offer(&b, w, 3, cx, cy, sx, sy);
            }
        }
    }
    for (k = 0; k < d->n_arcs; k++) {
        double ex, ey;

        /* A closed one has no end to read.  Measured: ○ drawn on SAMPLE0 with
         * its centre at screen (300,250) and its rim through (350,250) leaves
         * a record whose start and end are the same, and a right press at
         * (352,252) -- four dots from where the rim was taken -- reads
         * nothing. */
        if (!readable(d, d->arcs[k].layer)
            || d->arcs[k].start == d->arcs[k].end) {
            continue;
        }
        arc_end(&d->arcs[k], 0, &ex, &ey);
        offer(&b, w, 3, ex, ey, sx, sy);
        arc_end(&d->arcs[k], 1, &ex, &ey);
        offer(&b, w, 3, ex, ey, sx, sy);
    }
    /* 文字（左下・右下）-- a text's baseline is exactly those two points.
     * SAMPLE0's first text runs (51.17,310.96)-(93.03,310.96) and both ends
     * are read. */
    for (k = 0; k < d->n_texts; k++) {
        const JwcText *t = &d->texts[k];

        if (!readable(d, t->layer)) {
            continue;
        }
        offer(&b, w, 4, t->x0, t->y0, sx, sy);
        offer(&b, w, 4, t->x1, t->y1, sx, sy);
    }
    if (b.rank < 0) {
        return 0;
    }
    *x = b.x;
    *y = b.y;
    return 1;
}
