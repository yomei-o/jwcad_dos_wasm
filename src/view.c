#include "view.h"

#include "draw.h"

#include <stdio.h>

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

static Fontx ank, kanji;

int jw_view_fonts(const char *dir)
{
    char path[512];

    sprintf(path, "%s/JWANK16.FNT", dir);
    if (!fontx_load(&ank, path)) {
        return 0;
    }
    sprintf(path, "%s/JWKAN16.FNT", dir);
    return fontx_load(&kanji, path);
}

/* JW_PAL.DAT: sixteen lines of "rr gg bb" in hex, six bits per channel -- the
 * values the original hands to INT 10h AX=1010h one at a time.  Anything that
 * does not parse stops the load and leaves the rest of the DAC alone, which for
 * a file this small means "the defaults", not "half a palette". */
int jw_view_palette(VGA *v, const char *path)
{
    FILE *f = fopen(path, "rb");
    char line[128];
    int i = 0;

    if (!f) {
        return 0;
    }
    while (i < 16 && fgets(line, sizeof line, f)) {
        unsigned r, g, b;

        if (sscanf(line, "%x %x %x", &r, &g, &b) != 3) {
            break;
        }
        vga_set_dac(v, (unsigned)i, r, g, b);
        i++;
    }
    fclose(f);
    return i;
}

/* Shift-JIS lead byte, the test 3a75:0002 makes. */
static int is_lead(unsigned char c)
{
    return (c >= 0x81 && c <= 0x9f) || (c >= 0xe0 && c <= 0xfc);
}

/* Scale a glyph to the cell the drawing asks for.
 *
 * The original blits at the font's own size -- FUN_20a9_014e loops
 * (width >> 3) bytes by height rows and does not resample -- because on a DOS
 * screen the font is whatever DOS/V hands over, 16 dots tall.  A .JWC text
 * record carries a baseline whose length is the string's width in drawing
 * units, though, so a viewer that can zoom has to fit the glyph to it.  This
 * is nearest-neighbour, and it is a decision of the port, not the original's:
 * what the original actually puts on screen at a given zoom is one of the
 * things to settle against the emulator.
 */
static const unsigned char *scale_glyph(const unsigned char *g, int sw, int sh,
                                        int dw, int dh)
{
    static unsigned char out[64 * 64 / 8 * 64];
    int sstride = (sw + 7) / 8, dstride = (dw + 7) / 8;
    int x, y;

    if (dw == sw && dh == sh) {
        return g;
    }
    if (dw < 1 || dh < 1 || dstride * dh > (int)sizeof out) {
        return NULL;
    }
    memset(out, 0, (size_t)(dstride * dh));
    for (y = 0; y < dh; y++) {
        int sy = y * sh / dh;

        for (x = 0; x < dw; x++) {
            int sx = x * sw / dw;

            if (g[sy * sstride + (sx >> 3)] & (0x80 >> (sx & 7))) {
                out[y * dstride + (x >> 3)] |= (unsigned char)(0x80 >> (x & 7));
            }
        }
    }
    return out;
}

/* 1def:23c5 -- walk a Shift-JIS string, one glyph at a time.  The original
 * works on a character grid; here the baseline the .JWC record carries sets
 * the position and the size, so the glyphs follow the text's own box. */
static void draw_text(VGA *v, const JwcText *t, const JwView *w, unsigned colour)
{
    const unsigned char *p = (const unsigned char *)t->text;
    double dx = t->x1 - t->x0, dy = t->y1 - t->y0;
    double len = dx * dx + dy * dy;
    int n = 0, cells = 0;
    int x, y;

    if (!p || !*p || !ank.data) {
        return;
    }
    /* How many half-width cells the string is wide. */
    for (n = 0; p[n]; ) {
        if (is_lead(p[n]) && p[n + 1]) {
            cells += 2;
            n += 2;
        } else {
            cells += 1;
            n += 1;
        }
    }
    if (!cells) {
        return;
    }
    len = len > 0.0 ? len : 1.0;

    x = (int)((t->x0 - w->ox) * w->scale) + 8;
    y = v->height - 9 - (int)((t->y0 - w->oy) * w->scale);
    /* The original draws text upright on a 8x16 grid; the baseline gives the
     * left edge and the run, so step along it a cell at a time. */
    {
        double step = ((t->x1 - t->x0) * w->scale) / cells;
        double fx = x;
        int i = 0;

        if (step < 1.0) {
            step = 8.0;                     /* degenerate box: use the font's */
        }
        while (p[i]) {
            const unsigned char *g;
            unsigned code;
            int cw;

            if (is_lead(p[i]) && p[i + 1]) {
                code = (unsigned)(p[i] << 8) | p[i + 1];
                g = fontx_glyph(&kanji, code);
                cw = 2;
                i += 2;
            } else {
                g = fontx_glyph(&ank, p[i]);
                cw = 1;
                i += 1;
            }
            if (g) {
                int dw = (int)(step * cw + 0.5);
                int dh = (int)(step * 2.0 + 0.5);
                const unsigned char *sg;

                if (dw < 2) {
                    dw = 2;
                }
                if (dh < 2) {
                    dh = 2;
                }
                sg = scale_glyph(g, cw * 8, 16, dw, dh);
                if (sg) {
                    jw_glyph(v, (int)fx, y - dh + 1, dw, dh, sg, colour, colour);
                }
            }
            fx += step * cw;
        }
    }
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
        draw_text(v, &d->texts[k], w, 15);
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
