/* Where a drawing's lines and arcs sit **on the screen**, for choosing points
 * to measure at.
 *
 *     ./tools/segs.exe orig/SAMPLE0.JWC            -- every segment
 *     ./tools/segs.exe orig/SAMPLE0.JWC 300 200 40 -- only those near a pixel
 *
 * The third form keeps a segment when any part of it is within the given
 * number of screen dots, and prints the midpoint of the on-screen run.  The
 * modifier reads ([SHIFT] 線上の点, [GRPH] 中心点) need a press in the middle
 * of a line rather than near an end, and this says where the middles are.
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "jwc.h"
#include "view.h"

static void at_screen(const JwView *w, double x, double y, double *sx, double *sy)
{
    *sx = (x - w->ox) * w->scale + w->ax;
    *sy = w->ay - (y - w->oy) * w->scale;
}

/* How far a screen pixel is from a segment, in the sum the read uses. */
static double near_seg(double x0, double y0, double x1, double y1,
                       double sx, double sy)
{
    const double dx = x1 - x0, dy = y1 - y0;
    const double len2 = dx * dx + dy * dy;
    double t = len2 > 0.0 ? ((sx - x0) * dx + (sy - y0) * dy) / len2 : 0.0;
    double px, py;

    if (t < 0.0) {
        t = 0.0;
    }
    if (t > 1.0) {
        t = 1.0;
    }
    px = x0 + t * dx - sx;
    py = y0 + t * dy - sy;
    return (px < 0 ? -px : px) + (py < 0 ? -py : py);
}

int main(int argc, char **argv)
{
    const char *why = 0;
    Jwc *d;
    JwView w;
    int have = 0, sx = 0, sy = 0;
    double reach = 0.0;
    long k;

    if (argc < 2) {
        fprintf(stderr, "usage: segs <drawing.JWC> [<x> <y> <reach>]\n");
        return 2;
    }
    if (argc >= 5) {
        have = 1;
        sx = atoi(argv[2]);
        sy = atoi(argv[3]);
        reach = atof(argv[4]);
    }
    d = jwc_load(argv[1], &why);
    if (!d) {
        fprintf(stderr, "%s: %s\n", argv[1], why ? why : "cannot read");
        return 1;
    }
    jw_view_original(&w);
    for (k = 0; k < d->n_lines; k++) {
        const JwcLine *l = &d->lines[k];
        double x0, y0, x1, y1, dd;

        at_screen(&w, l->x0, l->y0, &x0, &y0);
        at_screen(&w, l->x1, l->y1, &x1, &y1);
        dd = have ? near_seg(x0, y0, x1, y1, sx, sy) : 0.0;
        if (have && dd > reach) {
            continue;
        }
        printf("line %5ld layer %2u pen %u type %u  "
               "screen (%7.2f,%7.2f)-(%7.2f,%7.2f) mid (%7.2f,%7.2f) len %7.2f",
               k, l->layer, l->pen, l->type, x0, y0, x1, y1,
               (x0 + x1) / 2, (y0 + y1) / 2, hypot(x1 - x0, y1 - y0));
        if (have) {
            printf("  away %.2f", dd);
        }
        printf("\n");
    }
    for (k = 0; k < d->n_arcs; k++) {
        const JwcArc *a = &d->arcs[k];
        double cx, cy, dd;

        at_screen(&w, a->cx, a->cy, &cx, &cy);
        dd = have ? fabs(hypot(cx - sx, cy - sy) - a->r * w.scale) : 0.0;
        if (have && dd > reach) {
            continue;
        }
        /* Where the arc actually is on the screen.  The record's angles run
         * anticlockwise in the shape's own frame and `tilt` turns that frame,
         * so a point of the sweep is at angle+tilt about the centre -- forget
         * the tilt and the rim comes out somewhere the original draws
         * nothing.  Printed for the start, the middle and the end, because a
         * modifier read has to be pressed **on** the curve. */
        printf("arc  %5ld layer %2u pen %u type %u  centre (%7.2f,%7.2f) r %7.2f "
               "start %8.3f end %8.3f tilt %8.3f flat %u",
               k, a->layer, a->pen, a->type, cx, cy, a->r * w.scale,
               a->start / 65536.0, a->end / 65536.0, a->tilt / 65536.0,
               a->flatten);
        {
            const double s = a->start / 65536.0;
            const double e0 = a->end / 65536.0;
            const double e = e0 > s ? e0 : e0 + 360.0;
            const double t = a->tilt / 65536.0;
            const double d2r = 3.14159265358979323846 / 180.0;
            int i;

            printf("  on-curve");
            for (i = 0; i <= 2; i++) {
                const double ang = (s + (e - s) * i / 2.0 + t) * d2r;

                printf(" (%.2f,%.2f)", cx + a->r * w.scale * cos(ang),
                       cy - a->r * w.scale * sin(ang));
            }
        }
        if (have) {
            printf("  off-rim %.2f", dd);
        }
        printf("\n");
    }
    return 0;
}
