#include "view.h"

#include "draw.h"

#include <string.h>

static int to_x(const JwView *w, float x)
{
    return (int)((x - w->ox) * w->scale) + 8;
}

static int to_y(const VGA *v, const JwView *w, float y)
{
    return v->height - 9 - (int)((y - w->oy) * w->scale);
}

void jw_view_fit(JwView *w, const VGA *v, const Jwc *d)
{
    float x0, y0, x1, y1, sx, sy;

    jwc_extent(d, &x0, &y0, &x1, &y1);
    sx = (float)(v->width - 16) / (x1 - x0 > 0.0f ? x1 - x0 : 1.0f);
    sy = (float)(v->height - 16) / (y1 - y0 > 0.0f ? y1 - y0 : 1.0f);
    w->scale = sx < sy ? sx : sy;
    w->ox = x0;
    w->oy = y0;
}

/* The pen number picks the colour.  JW_CAD's own palette is in JW_PAL.DAT and
 * in the .JWF settings; until those are read this keeps the pens apart. */
static unsigned pen_colour(unsigned pen)
{
    return 9 + (pen % 7);
}

void jw_view_draw(VGA *v, const Jwc *d, const JwView *w)
{
    long k;

    memset(v->plane, 0, sizeof v->plane);

    for (k = 0; k < d->n_lines; k++) {
        const JwcLine *l = &d->lines[k];

        jw_line(v, to_x(w, l->x0), to_y(v, w, l->y0),
                to_x(w, l->x1), to_y(v, w, l->y1),
                pen_colour(l->pen), ROP_REPLACE, JW_STYLE_SOLID);
    }
    for (k = 0; k < d->n_arcs; k++) {
        const JwcArc *a = &d->arcs[k];
        double s = a->start + a->start_frac / 10000.0;
        double e = a->end + a->end_frac / 10000.0;

        /* Screen y runs downwards, so the turn and the sweep are both
         * mirrored -- the same reason to_y subtracts. */
        jw_arc(v, to_x(w, a->cx), to_y(v, w, a->cy),
               (int)(a->r * w->scale + 0.5), a->flatten, -a->tilt, -e, -s,
               pen_colour(a->pen), ROP_REPLACE, JW_STYLE_SOLID);
    }
    for (k = 0; k < d->n_texts; k++) {
        const JwcText *t = &d->texts[k];

        jw_line(v, to_x(w, t->x0), to_y(v, w, t->y0),
                to_x(w, t->x1), to_y(v, w, t->y1), 13, ROP_REPLACE,
                JW_STYLE_SOLID);
    }
    for (k = 0; k < d->n_points; k++) {
        int x = to_x(w, d->points[k].x);
        int y = to_y(v, w, d->points[k].y);

        jw_line(v, x - 2, y, x + 2, y, 12, ROP_REPLACE, JW_STYLE_SOLID);
        jw_line(v, x, y - 2, x, y + 2, 12, ROP_REPLACE, JW_STYLE_SOLID);
    }
}

void jw_view_rgba(const VGA *v, const unsigned char *pixels, unsigned char *rgba)
{
    unsigned char rgb[16][3];
    long n = (long)v->width * v->height, i;

    vga_palette_rgb(v, rgb);
    for (i = 0; i < n; i++) {
        const unsigned char *c = rgb[pixels[i] & 15];

        rgba[i * 4 + 0] = c[0];
        rgba[i * 4 + 1] = c[1];
        rgba[i * 4 + 2] = c[2];
        rgba[i * 4 + 3] = 255;
    }
}
