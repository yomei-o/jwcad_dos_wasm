#include "view.h"

#include "draw.h"

#include <math.h>
#include <stdio.h>

#include <string.h>

/* The anchor is added *before* the cast, because that is what the original
 * does: it works in floats all the way to the line routine and truncates once.
 * Truncating the drawing coordinate first and adding an integer offset after
 * puts a line one pixel out wherever the fraction would have carried. */
static int to_x(const JwView *w, float x)
{
    return (int)((x - w->ox) * w->scale + w->ax);
}

static int to_y(const VGA *v, const JwView *w, float y)
{
    (void)v;
    return (int)(w->ay - (y - w->oy) * w->scale);
}

/* Is this point inside the window?  The original asks the same question, of the
 * *first* endpoint only, before it draws anything (FUN_1def_17bb compares the
 * point against the four floats at DGROUP 0xb5aa/0xb5b2/0xb60e/0xb612 and
 * returns if it falls outside).  Keeping to that rather than clipping the line
 * is deliberate: a line that is cut where the original drops it puts pixels on
 * the screen that the original never draws. */
static int inside(const JwView *w, int x, int y)
{
    return x >= w->x0 && x <= w->x1 && y >= w->y0 && y <= w->y1;
}

/* Pull the far end of a segment back to the window, keeping the near end where
 * it is.
 *
 * The original *does* draw a line that runs off the drawing area -- dropping
 * those was worth 444 pixels of disagreement on TEST7 alone, which is how it
 * was settled.  Its own test (FUN_1def_17bb, against the four floats at DGROUP
 * 0xb5aa/0xb5b2/0xb60e/0xb612) throws away only what is entirely elsewhere.
 *
 * Which end is kept matters for the dashes: the pattern starts at the line's
 * own beginning, so moving the far end leaves it alone. */
static void clip_far(const JwView *w, int x0, int y0, int *x1, int *y1)
{
    double t = 1.0, dx = *x1 - x0, dy = *y1 - y0;

    if (dx > 0.0 && *x1 > w->x1) t = (w->x1 - x0) / dx;
    if (dx < 0.0 && *x1 < w->x0) t = (w->x0 - x0) / dx;
    if (dy > 0.0 && *y1 > w->y1) {
        double u = (w->y1 - y0) / dy;
        if (u < t) t = u;
    }
    if (dy < 0.0 && *y1 < w->y0) {
        double u = (w->y0 - y0) / dy;
        if (u < t) t = u;
    }
    if (t < 0.0) t = 0.0;
    if (t < 1.0) {
        *x1 = x0 + (int)(dx * t);
        *y1 = y0 + (int)(dy * t);
    }
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
    w->ax = 8.0f;
    w->ay = (float)(v->height - 9);
    w->x0 = 0;                  /* the whole screen: the fit already keeps it in */
    w->y0 = 0;
    w->x1 = v->width - 1;
    w->y1 = v->height - 1;
}

void jw_view_original(JwView *w)
{
    w->ox = 0.0f;
    w->oy = 0.0f;
    w->scale = 1.0f;
    w->ax = 121.0f;             /* screen_x = (int)(x + 121) */
    w->ay = 463.0f;             /* screen_y = (int)(463 - y) */
    w->x0 = 122;                /* the drawing area, as 0def:12e8 is given it */
    w->y0 = 17;
    w->x1 = 638;
    w->y1 = 462;
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

/* Scale a glyph to the cell the drawing asks for -- exactly as the original
 * does it.
 *
 * How the original draws a .JWC text was not obvious.  It does not blit the
 * glyph (FUN_20a9_014e, the only routine that does, is for the menus and never
 * sees a drawing), and it does not plot the dots one at a time either.  What it
 * does, found by watching which instruction writes the screen bytes under one
 * of TEST6's banner lines: **one horizontal line per destination row, with the
 * row's dots as the line's dash pattern**.  Nine rows of nine pixels for a
 * nine-pixel character, each a call to the line routine carrying a sixteen-bit
 * pattern.  Reading those calls out of the emulator answers the question
 * directly: the pattern *is* the shrunk row.
 *
 * With 39 of them in hand the rule falls out of a search over every monotone
 * map from sixteen source columns to nine destination ones -- exactly one pair
 * of maps reproduces all 39, and it is this:
 *
 *     dst_x = floor(src_x * h / 16)
 *     dst_y = floor(y0 + src_y * h / 16)
 *
 * where `h` is the character's height as a **float** -- 8.690 for that banner,
 * not the 9 it rounds to -- and `y0` is the top of the cell, also a float
 * (baseline - h).  Every source dot lights the destination dot it lands on, so
 * nothing is dropped; and because the two are truncated separately, the row map
 * and the column map come out different, which is why no single integer rule
 * ever fitted.  The fractional part of y0 is the whole of the difference.
 *
 * It grows as well as it shrinks: at h = 32 the factor is two and each source
 * dot lights one corner of a two-by-two block. */
static const unsigned char *scale_glyph(const unsigned char *g, int sw,
                                        double h, double y0, int *dw, int *dh)
{
    static unsigned char out[128 * 128 / 8];
    const int sstride = (sw + 7) / 8;
    const double top = floor(y0);
    int dstride, x, y;

    *dw = (int)((sw - 1) * h / 16.0) + 1;
    *dh = (int)(floor(y0 + 15.0 * h / 16.0) - top) + 1;
    if (*dw < 1 || *dh < 1 || *dw > 128 || *dh > 128) {
        return NULL;
    }
    dstride = (*dw + 7) / 8;
    memset(out, 0, (size_t)(dstride * *dh));
    for (y = 0; y < 16; y++) {
        const int dy = (int)(floor(y0 + y * h / 16.0) - top);

        if (dy < 0 || dy >= *dh) {
            continue;
        }
        for (x = 0; x < sw; x++) {
            const int dx = (int)(x * h / 16.0);

            if (dx < *dw && (g[y * sstride + (x >> 3)] & (0x80 >> (x & 7)))) {
                out[dy * dstride + (dx >> 3)] |=
                    (unsigned char)(0x80 >> (dx & 7));
            }
        }
    }
    return out;
}

/* 1def:23c5 -- walk a Shift-JIS string, one glyph at a time.  The original
 * works on a character grid; here the baseline the .JWC record carries sets
 * the position and the size, so the glyphs follow the text's own box. */
/* JW_CAD's ten character sizes, in tenths of a millimetre on the paper, and the
 * gap it leaves between characters.  Index 0 is the size currently selected for
 * drawing with; 1-10 are the sizes a record can name.  Read straight out of the
 * running original -- three word tables at DGROUP 0x182, 0x198 and 0x1ae, which
 * FUN_28b3_0a63 indexes with the record's size byte.
 *
 * The heights are the same numbers as the widths, so only one table is kept. */
static const short TEXT_MM[11]  = {30, 20, 25, 30, 40, 50, 60, 70, 80, 90, 100};
static const short TEXT_GAP[11] = { 5,  0,  0,  5,  5,  5, 10, 10, 10, 10,  10};

static unsigned pen_colour(unsigned pen)
{
    static const unsigned char LCOLLOR[9] = { 5, 5, 7, 4, 6, 3, 1, 2, 1 };

    return LCOLLOR[pen < 9 ? pen : 0];
}

/* What colour a text comes out in.  It is not any byte of the record: the
 * record names a character type, 1 to 10, and the environment file gives each
 * type a pen --
 *
 *     MPEN   =  1  1  2  2  3  3  4  4  5  5          (JW_CAD.JWF / SAMPLE.JWF)
 *
 * -- which LCOLLOR then turns into a colour, the same table the lines use.  So
 * a type-1 text is pen 1 is magenta and a type-3 text is pen 2 is white, and
 * that is exactly what the original puts on the screen: TEST6 draws its type-1
 * strings in 5 and its type-10 strings in 3, SAMPLE3 its type-2 in 5 and its
 * type-3 in 7, SAMPLE1 and SAMPLE2 all type-3 and all white.  Every text in the
 * six drawings compared agrees.
 *
 * (Type 0 means "the size currently selected", whose pen is the one for type 3;
 * no sample uses it.) */
static unsigned text_colour(unsigned size)
{
    static const unsigned char MPEN[11] = {2, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5};

    return pen_colour(MPEN[size <= 10 ? size : 0]);
}

/* Below this many pixels the original does not draw the glyphs at all -- it
 * draws the box they would have filled.  The threshold is a word at DGROUP
 * 0x1c6, and it is 6. */
#define TEXT_GLYPH_MIN 6

/* How tall the string is on screen, in pixels.
 *
 * The size table is in millimetres of paper and the record is in screen units,
 * so the two are bridged by the string's own width: it is `cells/2` characters
 * of `width + gap` millimetres, and it covers `x1 - x0` units.  That ratio is
 * the same for the height. */
static double text_height(const JwcText *t, const JwView *w, int cells)
{
    int size = t->size <= 10 ? t->size : 0;
    double mm = (TEXT_MM[size] + TEXT_GAP[size]) / 10.0 * (cells / 2.0);
    double px = (double)(t->x1 - t->x0) * w->scale;

    if (mm <= 0.0 || px <= 0.0) {
        return 0.0;
    }
    return TEXT_MM[size] / 10.0 * (px / mm);
}

/* The box the original draws in place of a string too small to read: the
 * rectangle the characters would have stood in, plus a line along the baseline.
 * Measured from its own line calls -- for SAMPLE1's title block it draws
 * (173,410)-(215,410)-(215,405)-(173,405) and then (173,409)-(215,409), with
 * the baseline at 409 and a height of 5. */
static void draw_text_box(VGA *v, const JwView *w, int x0, int x1, int base,
                          int h, unsigned colour)
{
    int top = base - h + 1, bottom = base + 1;

    if (!inside(w, x0, top) || !inside(w, x1, bottom)) {
        return;
    }
    jw_line(v, x0, bottom, x1, bottom, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, x1, bottom, x1, top, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, x1, top, x0, top, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, x0, top, x0, bottom, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, x0, base, x1, base, colour, ROP_REPLACE, JW_STYLE_SOLID);
}

static void draw_text(VGA *v, const JwcText *t, const JwView *w, unsigned colour)
{
    const unsigned char *p = (const unsigned char *)t->text;
    double dx = t->x1 - t->x0, dy = t->y1 - t->y0;
    double len = dx * dx + dy * dy;
    int n = 0, cells = 0;
    int y;
    double height;

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

    height = text_height(t, w, cells);
    if ((int)height < TEXT_GLYPH_MIN) {
        draw_text_box(v, w, to_x(w, t->x0), to_x(w, t->x1),
                      to_y(v, w, t->y0), (int)height, colour);
        return;
    }

    /* Through the view, not a copy of its arithmetic: this used to inline the
     * old fit-only formula and put every string in the wrong place the moment
     * the view gained an anchor. */
    y = to_y(v, w, t->y0);
    /* The original draws text upright on a 8x16 grid; the baseline gives the
     * left edge and the run, so step along it a cell at a time. */
    {
        double step = ((t->x1 - t->x0) * w->scale) / cells;
        double fx = (t->x0 - w->ox) * w->scale + w->ax;    /* the exact position */
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
                /* The cell sits above the baseline the record gives, and its
                 * top is a float: TEST6's two banner strings are 8.690 tall
                 * with their records at 254 and 287, so the tops are 245.310
                 * and 278.310 and the nine rows land on 245..253 and 278..286.
                 *
                 * The left edge is rounded, not truncated -- the original's own
                 * line calls for that banner start at 379, 388 and 398 for
                 * running positions of 378.70, 388.26 and 397.82. */
                const double top = (double)y - height;
                int dw, dh;
                const unsigned char *sg = scale_glyph(g, cw * 8, height,
                                                      top, &dw, &dh);

                if (sg) {
                    jw_glyph(v, (int)(fx + 0.5), (int)floor(top), dw, dh, sg,
                             colour, colour);
                }
            }
            fx += step * cw;
        }
    }
}

/* The pen number picks the colour index.
 *
 * Measured from the original, not guessed: render a drawing under dosv_emu_cpp,
 * sample the colour it put along each line, and tally it against the pen byte.
 * SAMPLE1, SAMPLE2, SAMPLE3, SAMPLE6 and TEST6 agree --
 *
 *     pen 1 -> 5   pen 2 -> 7   pen 3 -> 4   pen 4 -> 6   pen 5 -> 3
 *
 * -- and those are the first five entries of `LCOLLOR= 5 7 4 6 3 1 2 1` in
 * SAMPLE.JWF, so the rest of that line is where 6, 7 and 8 come from.  (JW_CAD
 * reads LCOLLOR out of JW_CAD.JWF when there is one; the distribution has no
 * such file, so what the screen shows is the default compiled into the EXE.)
 * Pen 0 is not a pen; nothing in the samples uses it. */
/* The bit pattern a line type draws with.
 *
 * Read out of the running original, not invented: FUN_21f2_1c0d indexes a word
 * table at DGROUP 0xa88 with the record's type byte, and dumping sixteen words
 * from there (dosv_emu_cpp, `dump 3485:0A88 32`) gives exactly this.  The same
 * dump settled the pen colours a second time -- the table right before it, at
 * 0xa70, is `0 5 7 4 6 3 1 2 1 6 5`, which is LCOLLOR with a leading zero.
 *
 * Type 1 is solid.  It is mapped to JW_STYLE_SOLID rather than 0xFFFF so the
 * line routine keeps its whole-byte fast path; the pixels are the same either
 * way, and every drawing is mostly type 1. */
static int line_style(unsigned type)
{
    static const unsigned short PATTERN[16] = {
        0x5555, 0xFFFF, 0x9999, 0xC3C3, 0xE7E7, 0xEBEB, 0xF99F, 0xD5D5,
        0xF24F, 0x2222, 0x2222, 0xE9E9, 0xFA3F, 0xF51F, 0xF517, 0xF515,
    };
    unsigned short p = PATTERN[type & 15];

    return p == 0xFFFF ? JW_STYLE_SOLID : (int)p;
}

/* The dot grid, under the drawing.
 *
 * One dot at every multiple of the spacing in both directions, colour 7, the
 * whole window.  The range is worked out from the window rather than guessed at
 * because the grid goes through the drawing's origin, which can be off screen:
 * SAMPLE1's origin is at the bottom-left corner of its window and the dots run
 * up and to the right from there, but nothing says a drawing has to be saved
 * that way. */
static void draw_grid(VGA *v, const Jwc *d, const JwView *w)
{
    double lo, hi;
    long i, j, i0, i1, j0, j1;

    if (!d->grid_on || d->grid_x <= 0.0f || d->grid_y <= 0.0f ||
        w->scale <= 0.0f) {
        return;
    }
    lo = (((double)w->x0 - w->ax) / w->scale + w->ox) / d->grid_x;
    hi = (((double)w->x1 - w->ax) / w->scale + w->ox) / d->grid_x;
    i0 = (long)lo - 1;
    i1 = (long)hi + 1;
    lo = ((w->ay - (double)w->y1) / w->scale + w->oy) / d->grid_y;
    hi = ((w->ay - (double)w->y0) / w->scale + w->oy) / d->grid_y;
    j0 = (long)lo - 1;
    j1 = (long)hi + 1;
    if (i1 - i0 > 4000 || j1 - j0 > 4000) {
        return;                         /* zoomed out past any use */
    }
    for (j = j0; j <= j1; j++) {
        const int y = to_y(v, w, (float)((double)j * d->grid_y));

        if (y < w->y0 || y > w->y1) {
            continue;
        }
        for (i = i0; i <= i1; i++) {
            const int x = to_x(w, (float)((double)i * d->grid_x));

            if (x >= w->x0 && x <= w->x1) {
                jw_point(v, x, y, 7, ROP_REPLACE);
            }
        }
    }
}

void jw_view_draw(VGA *v, const Jwc *d, const JwView *w)
{
    long k;

    memset(v->plane, 0, sizeof v->plane);
    draw_grid(v, d, w);

    for (k = 0; k < d->n_lines; k++) {
        const JwcLine *l = &d->lines[k];
        int sx0 = to_x(w, l->x0), sy0 = to_y(v, w, l->y0);
        int sx1 = to_x(w, l->x1), sy1 = to_y(v, w, l->y1);

        if (!jwc_visible(d, l->layer)) {
            continue;
        }
        if (!inside(w, sx0, sy0)) {
            if (!inside(w, sx1, sy1)) {
                continue;
            }
            clip_far(w, sx1, sy1, &sx0, &sy0);
        } else {
            clip_far(w, sx0, sy0, &sx1, &sy1);
        }
        jw_line(v, sx0, sy0, sx1, sy1,
                pen_colour(l->pen), ROP_REPLACE, line_style(l->type));
    }
    for (k = 0; k < d->n_arcs; k++) {
        const JwcArc *a = &d->arcs[k];
        double s = a->start + a->start_frac / 10000.0;
        double e = a->end + a->end_frac / 10000.0;

        if (!jwc_visible(d, a->layer)) {
            continue;
        }

        /* Screen y runs downwards, so the turn and the sweep are both
         * mirrored -- the same reason to_y subtracts. */
        jw_arc(v, to_x(w, a->cx), to_y(v, w, a->cy),
               /* truncated, not rounded: the original hands its arc routine
                * (20a9:0e18) a radius of 1 for a record that says 1.8459, and
                * 7 for 7.401 -- breaking on it and reading the arguments is
                * how that was settled. */
               (int)(a->r * w->scale), a->flatten, -a->tilt, -e, -s,
               pen_colour(a->pen), ROP_REPLACE, line_style(a->type));
    }
    for (k = 0; k < d->n_texts; k++) {
        if (!jwc_visible(d, d->texts[k].layer)) {
            continue;
        }
        draw_text(v, &d->texts[k], w, text_colour(d->texts[k].size));
    }
    for (k = 0; k < d->n_points; k++) {
        int x = to_x(w, d->points[k].x);
        int y = to_y(v, w, d->points[k].y);

        if (!jwc_visible(d, d->points[k].layer) || !inside(w, x, y)) {
            continue;
        }
        /* One pixel, in the record's own pen -- not the five-by-five cross in
         * colour 12 this used to draw, which was a placeholder from before
         * there was anything to check against and put 180 pixels of a colour
         * JW_CAD has no pen for into SAMPLE3 alone.
         *
         * The pen is the second of the four trailing bytes, the same place the
         * lines and arcs keep theirs: SAMPLE3's points say 2 and the original
         * draws white there, SAMPLE6's say 1 and it draws cyan, TEST6's say 5
         * and it draws magenta.
         *
         * What shape the original gives a point is *not* settled -- every point
         * in the six drawings compared sits on top of other geometry, so there
         * is nothing to read.  One pixel beats both the cross and nothing at
         * all on every drawing that has points, which is as far as the evidence
         * goes. */
        jw_point(v, x, y, pen_colour(d->points[k].rest[1]), ROP_REPLACE);
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
