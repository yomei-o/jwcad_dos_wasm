/* jw_plot_* -- see src/plot.h. */
#include "plot.h"
#include "png.h"
#include "view.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* **The red dotted rectangle is not the sheet.**  JW_CAD.DOC's switch list
 * says so: `-H  DOS/V機で画面枠（赤の点線枠）が用紙サイズになります` -- with
 * -H the frame *becomes* the paper, so without it the frame is the screen's,
 * 518 by 447 units, which is 297 by 256mm on A-4 and taller than the sheet.
 *
 * So the page is not the sheet either.  It is **what was drawn, with ten
 * millimetres round it**, which is what the reference at
 * <https://github.com/yomei-o/dosbox_wasm> does as well ("用紙は描かれた
 * 中身に合わせます（周囲 10mm）") -- a drawing that runs off the sheet still
 * comes out whole. */
#define JW_PLOT_MARGIN 10.0

void jw_plot_box(const Jwc *d, double *x0, double *y0, double *x1,
                 double *y1)
{
    const double mm = d && d->unit_mm > 0.0f ? 1.0 / d->unit_mm : 1.0;
    float lo_x, lo_y, hi_x, hi_y;

    jwc_extent(d, &lo_x, &lo_y, &hi_x, &hi_y);
    if (!(hi_x > lo_x) || !(hi_y > lo_y)) {
        lo_x = lo_y = 0.0f;
        hi_x = 518.0f;
        hi_y = 447.0f;
    }
    *x0 = lo_x * mm - JW_PLOT_MARGIN;
    *y0 = lo_y * mm - JW_PLOT_MARGIN;
    *x1 = hi_x * mm + JW_PLOT_MARGIN;
    *y1 = hi_y * mm + JW_PLOT_MARGIN;
}

void jw_plot_paper(const Jwc *d, double *wide, double *tall)
{
    double x0, y0, x1, y1;

    jw_plot_box(d, &x0, &y0, &x1, &y1);
    *wide = x1 - x0;
    *tall = y1 - y0;
}

/* ------------------------------------------------------------------ walk */

void jw_plot_walk(const Jwc *d, const JwPlotSink *k, void *u)
{
    const double mm = d->unit_mm > 0.0f ? 1.0 / d->unit_mm : 1.0;
    long i;

    for (i = 0; i < d->n_lines; i++) {
        const JwcLine *l = &d->lines[i];

        if (!jwc_visible(d, l->layer) || !k->line) {
            continue;
        }
        k->line(u, l->x0 * mm, l->y0 * mm, l->x1 * mm, l->y1 * mm,
                l->pen, l->type);
    }
    for (i = 0; i < d->n_arcs; i++) {
        const JwcArc *a = &d->arcs[i];
        const double flat = a->flatten > 0 ? a->flatten / 10000.0 : 1.0;
        const double tilt = a->tilt / 65536.0 * M_PI / 180.0;
        const double s = a->start / 65536.0 * M_PI / 180.0;
        double e = a->end / 65536.0 * M_PI / 180.0;
        double xy[722];
        int n, j;

        if (!jwc_visible(d, a->layer) || !k->poly) {
            continue;
        }
        if (a->end == a->start) {
            e = s + 2.0 * M_PI;         /* the whole ellipse */
        }
        while (e < s) {
            e += 2.0 * M_PI;
        }
        /* One segment every two degrees, and never fewer than eight: at a
         * plotter's resolution that is under a tenth of a millimetre for a
         * radius of a metre. */
        n = (int)((e - s) / (2.0 * M_PI / 180.0)) + 1;
        if (n < 8) {
            n = 8;
        }
        if (n > 360) {
            n = 360;
        }
        for (j = 0; j <= n; j++) {
            const double t = s + (e - s) * j / n;
            const double px = a->r * cos(t), py = a->r * flat * sin(t);

            xy[j * 2] = (a->cx + px * cos(tilt) - py * sin(tilt)) * mm;
            xy[j * 2 + 1] = (a->cy + px * sin(tilt) + py * cos(tilt)) * mm;
        }
        k->poly(u, xy, n + 1, a->pen, a->type);
    }
    for (i = 0; i < d->n_texts; i++) {
        const JwcText *t = &d->texts[i];
        const int size = t->size <= 10 ? t->size : 0;
        const double dx = t->x1 - t->x0, dy = t->y1 - t->y0;

        if (!jwc_visible(d, t->layer) || !k->text || !t->text) {
            continue;
        }
        k->text(u, t->x0 * mm, t->y0 * mm, atan2(dy, dx),
                d->text_h[size] / 10.0, d->text_w[size] / 10.0,
                t->text, d->text_pen[size]);
    }
    for (i = 0; i < d->n_points; i++) {
        const JwcPoint *p = &d->points[i];

        if (!jwc_visible(d, p->layer) || !k->point) {
            continue;
        }
        k->point(u, p->x * mm, p->y * mm);
    }
}

/* ------------------------------------------------------------------- PDF */

/* A growing byte buffer, because a PDF's cross-reference table needs the
 * offsets of what has already been written. */
typedef struct {
    unsigned char *p;
    long n, cap;
} Buf;

static int buf_room(Buf *b, long more)
{
    if (b->n + more <= b->cap) {
        return 1;
    }
    while (b->cap < b->n + more) {
        b->cap = b->cap ? b->cap * 2 : 4096;
    }
    b->p = (unsigned char *)realloc(b->p, (size_t)b->cap);
    return b->p != 0;
}

static void buf_put(Buf *b, const char *s, long n)
{
    if (n < 0) {
        n = (long)strlen(s);
    }
    if (!buf_room(b, n)) {
        return;
    }
    memcpy(b->p + b->n, s, (size_t)n);
    b->n += n;
}

static void buf_f(Buf *b, const char *fmt, ...);

#include <stdarg.h>

static void buf_f(Buf *b, const char *fmt, ...)
{
    char line[512];
    va_list ap;
    int n;

    va_start(ap, fmt);
    n = vsnprintf(line, sizeof line, fmt, ap);
    va_end(ap);
    if (n > 0) {
        buf_put(b, line, n);
    }
}

/* The eight pens, in the colours the screen gives them (src/view.c's
 * jw_view_pen_colour and the palette in orig/JW_PAL.DAT). */
static void pen_rgb(int pen, double *r, double *g, double *b)
{
    static const double RGB[8][3] = {
        { 0.0, 1.0, 1.0 },      /* 1 cyan */
        { 1.0, 1.0, 1.0 },      /* 2 white -- black on paper */
        { 0.0, 1.0, 0.0 },      /* 3 green */
        { 1.0, 1.0, 0.0 },      /* 4 yellow */
        { 1.0, 0.0, 1.0 },      /* 5 magenta */
        { 0.0, 0.0, 1.0 },      /* 6 blue */
        { 0.95, 0.0, 0.0 },     /* 7 red */
        { 0.6, 0.6, 0.6 }       /* 8 grey */
    };
    const int k = pen >= 1 && pen <= 8 ? pen - 1 : 1;

    /* Pen 2 is the screen's white, which on paper has to be black. */
    if (k == 1) {
        *r = *g = *b = 0.0;
        return;
    }
    *r = RGB[k][0];
    *g = RGB[k][1];
    *b = RGB[k][2];
}

/* The nine line types as a PDF dash array, in points.  The lengths are the
 * screen's patterns (src/view.c's jw_view_line_style) turned into paper:
 * four screen pixels is about a millimetre at a plotter's scale. */
static const char *dash_of(int type)
{
    switch (type) {
    case 2: return "[1.4 1.4] 0";
    case 3: return "[2.8 1.4] 0";
    case 4: return "[5.7 1.4] 0";
    case 5: return "[5.7 1.4 1.4 1.4] 0";
    case 6: return "[8.5 1.4 1.4 1.4] 0";
    case 7: return "[5.7 1.4 1.4 1.4 1.4 1.4] 0";
    case 8: return "[8.5 1.4 1.4 1.4 1.4 1.4] 0";
    case 9: return "[0.7 2.1] 0";       /* 補助線 */
    default: return "[] 0";
    }
}

typedef struct {
    Buf *b;
    double mm2pt;
    double ox, oy;              /* the page's own origin, in millimetres */
    int pen, type;              /* what the graphics state is set to */
} Pdf;

static void pdf_state(Pdf *p, int pen, int type)
{
    if (pen != p->pen) {
        double r, g, b;

        pen_rgb(pen, &r, &g, &b);
        buf_f(p->b, "%.3f %.3f %.3f RG\n", r, g, b);
        p->pen = pen;
    }
    if (type != p->type) {
        buf_f(p->b, "%s d\n", dash_of(type));
        p->type = type;
    }
}

static void pdf_line(void *u, double x0, double y0, double x1, double y1,
                     int pen, int type)
{
    Pdf *p = (Pdf *)u;

    pdf_state(p, pen, type);
    buf_f(p->b, "%.2f %.2f m %.2f %.2f l S\n",
          (x0 - p->ox) * p->mm2pt, (y0 - p->oy) * p->mm2pt,
          (x1 - p->ox) * p->mm2pt, (y1 - p->oy) * p->mm2pt);
}

static void pdf_poly(void *u, const double *xy, int n, int pen, int type)
{
    Pdf *p = (Pdf *)u;
    int i;

    if (n < 2) {
        return;
    }
    pdf_state(p, pen, type);
    buf_f(p->b, "%.2f %.2f m\n", (xy[0] - p->ox) * p->mm2pt,
          (xy[1] - p->oy) * p->mm2pt);
    for (i = 1; i < n; i++) {
        buf_f(p->b, "%.2f %.2f l\n", (xy[i * 2] - p->ox) * p->mm2pt,
              (xy[i * 2 + 1] - p->oy) * p->mm2pt);
    }
    buf_put(p->b, "S\n", -1);
}

static void pdf_point(void *u, double x, double y)
{
    Pdf *p = (Pdf *)u;
    const double r = 0.4 * p->mm2pt;
    const double cx = (x - p->ox) * p->mm2pt, cy = (y - p->oy) * p->mm2pt;

    pdf_state(p, 2, 1);
    buf_f(p->b, "%.2f %.2f m %.2f %.2f l S\n", cx - r, cy, cx + r, cy);
    buf_f(p->b, "%.2f %.2f m %.2f %.2f l S\n", cx, cy - r, cx, cy + r);
}

static void pdf_text(void *u, double x, double y, double dir, double h,
                     double wide, const char *text, int pen)
{
    Pdf *p = (Pdf *)u;
    const unsigned char *s = (const unsigned char *)text;
    double r, g, b;
    int i;

    (void)wide;
    pen_rgb(pen, &r, &g, &b);
    buf_f(p->b, "q %.3f %.3f %.3f rg BT /F1 %.2f Tf\n", r, g, b,
          h * p->mm2pt);
    buf_f(p->b, "%.4f %.4f %.4f %.4f %.2f %.2f Tm\n", cos(dir), sin(dir),
          -sin(dir), cos(dir), (x - p->ox) * p->mm2pt,
          (y - p->oy) * p->mm2pt);
    buf_put(p->b, "<", -1);
    for (i = 0; s[i]; i++) {
        buf_f(p->b, "%02X", s[i]);
    }
    buf_put(p->b, "> Tj ET Q\n", -1);
    p->pen = -1;                /* the q/Q put the stroke colour back */
    p->type = -1;
}

unsigned char *jw_plot_pdf(const Jwc *d, long *len)
{
    Buf out, body;
    Pdf p;
    double wide, tall, x0, y0, x1, y1;
    long off[9], i, xref;
    char head[256];

    if (!d) {
        return 0;
    }
    memset(&out, 0, sizeof out);
    memset(&body, 0, sizeof body);
    jw_plot_box(d, &x0, &y0, &x1, &y1);
    wide = x1 - x0;
    tall = y1 - y0;

    p.b = &body;
    p.mm2pt = 72.0 / 25.4;
    p.ox = x0;
    p.oy = y0;
    p.pen = -1;
    p.type = -1;
    buf_f(&body, "%.2f w 1 J 1 j\n", 0.24 * p.mm2pt);
    {
        JwPlotSink k;

        k.line = pdf_line;
        k.poly = pdf_poly;
        k.text = pdf_text;
        k.point = pdf_point;
        jw_plot_walk(d, &k, &p);
    }

    buf_put(&out, "%PDF-1.4\n", -1);
    /* 1 catalogue, 2 pages, 3 page, 4 contents, 5 font, 6 descendant. */
    off[1] = out.n;
    buf_put(&out, "1 0 obj<</Type/Catalog/Pages 2 0 R>>endobj\n", -1);
    off[2] = out.n;
    buf_put(&out, "2 0 obj<</Type/Pages/Kids[3 0 R]/Count 1>>endobj\n", -1);
    off[3] = out.n;
    sprintf(head, "3 0 obj<</Type/Page/Parent 2 0 R/MediaBox[0 0 %.2f %.2f]"
            "/Resources<</Font<</F1 5 0 R>>>>/Contents 4 0 R>>endobj\n",
            wide * p.mm2pt, tall * p.mm2pt);
    buf_put(&out, head, -1);
    off[4] = out.n;
    sprintf(head, "4 0 obj<</Length %ld>>stream\n", body.n);
    buf_put(&out, head, -1);
    buf_put(&out, (const char *)body.p, body.n);
    buf_put(&out, "endstream endobj\n", -1);
    off[5] = out.n;
    /* A CID font with one of PDF's own CJK encodings: Shift-JIS goes in as
     * it stands and nothing has to be embedded. */
    buf_put(&out, "5 0 obj<</Type/Font/Subtype/Type0/BaseFont/Ryumin-Light"
            "/Encoding/90ms-RKSJ-H/DescendantFonts[6 0 R]>>endobj\n", -1);
    off[6] = out.n;
    buf_put(&out, "6 0 obj<</Type/Font/Subtype/CIDFontType0"
            "/BaseFont/Ryumin-Light"
            "/CIDSystemInfo<</Registry(Adobe)/Ordering(Japan1)/Supplement 2>>"
            "/FontDescriptor 7 0 R/DW 1000>>endobj\n", -1);
    off[7] = out.n;
    buf_put(&out, "7 0 obj<</Type/FontDescriptor/FontName/Ryumin-Light"
            "/Flags 6/FontBBox[-170 -331 1024 903]/ItalicAngle 0"
            "/Ascent 903/Descent -331/CapHeight 709/StemV 69>>endobj\n", -1);

    xref = out.n;
    buf_put(&out, "xref\n0 8\n0000000000 65535 f \n", -1);
    for (i = 1; i <= 7; i++) {
        sprintf(head, "%010ld 00000 n \n", off[i]);
        buf_put(&out, head, -1);
    }
    sprintf(head, "trailer<</Size 8/Root 1 0 R>>\nstartxref\n%ld\n%%%%EOF\n",
            xref);
    buf_put(&out, head, -1);
    free(body.p);
    *len = out.n;
    return out.p;
}

/* ------------------------------------------------------------------- PNG */

typedef struct {
    unsigned char *rgb;
    int w, h;
    double dpmm, ox, oy, tall;
} Ras;

static void ras_dot(Ras *r, int x, int y, int pen)
{
    double cr, cg, cb;
    long at;

    if (x < 0 || y < 0 || x >= r->w || y >= r->h) {
        return;
    }
    pen_rgb(pen, &cr, &cg, &cb);
    at = ((long)y * r->w + x) * 3;
    r->rgb[at] = (unsigned char)(cr * 255.0);
    r->rgb[at + 1] = (unsigned char)(cg * 255.0);
    r->rgb[at + 2] = (unsigned char)(cb * 255.0);
}

static void ras_line(Ras *r, double ax, double ay, double bx, double by,
                     int pen)
{
    const int x0 = (int)((ax - r->ox) * r->dpmm + 0.5);
    const int y0 = (int)((r->tall - (ay - r->oy)) * r->dpmm + 0.5);
    const int x1 = (int)((bx - r->ox) * r->dpmm + 0.5);
    const int y1 = (int)((r->tall - (by - r->oy)) * r->dpmm + 0.5);
    int dx = x1 > x0 ? x1 - x0 : x0 - x1;
    int dy = y1 > y0 ? y1 - y0 : y0 - y1;
    const int sx = x0 < x1 ? 1 : -1, sy = y0 < y1 ? 1 : -1;
    int err, x = x0, y = y0;

    dy = -dy;
    err = dx + dy;
    for (;;) {
        int e2;

        ras_dot(r, x, y, pen);
        if (x == x1 && y == y1) {
            break;
        }
        e2 = 2 * err;
        if (e2 >= dy) {
            err += dy;
            x += sx;
        }
        if (e2 <= dx) {
            err += dx;
            y += sy;
        }
    }
}

static void ras_line_cb(void *u, double x0, double y0, double x1, double y1,
                        int pen, int type)
{
    (void)type;
    ras_line((Ras *)u, x0, y0, x1, y1, pen);
}

static void ras_poly_cb(void *u, const double *xy, int n, int pen, int type)
{
    int i;

    (void)type;
    for (i = 1; i < n; i++) {
        ras_line((Ras *)u, xy[(i - 1) * 2], xy[(i - 1) * 2 + 1],
                 xy[i * 2], xy[i * 2 + 1], pen);
    }
}

/* A string into the raster.
 *
 * The PDF hands the letters to the reader's own CJK font; a PNG has to draw
 * them, and the fonts are the ones the screen uses -- JWANK16 for the
 * half-width cells and JWKAN16 for the rest (src/fontx.c).  Each glyph is
 * sampled into its cell rather than scaled up, which is what the original
 * does on screen too (src/view.c): for every pixel of the cell, ask the
 * 16x16 bitmap what is there.
 */
static int is_lead_byte(unsigned char c)
{
    return (c >= 0x81 && c <= 0x9f) || (c >= 0xe0 && c <= 0xfc);
}

static void ras_text_cb(void *u, double x, double y, double dir, double h,
                        double wide, const char *text, int pen)
{
    Ras *r = (Ras *)u;
    const Fontx *ank = jw_view_ank(), *kanji = jw_view_kanji();
    const unsigned char *p = (const unsigned char *)text;
    const double ux = cos(dir), uy = sin(dir);
    /* The cell, in pixels.  `wide` is one half-width cell. */
    const int cw = (int)(wide * r->dpmm + 0.5);
    const int ch = (int)(h * r->dpmm + 0.5);
    double at = 0.0;
    int i;

    if (!ank || !ank->data || cw <= 0 || ch <= 0) {
        return;
    }
    for (i = 0; p[i];) {
        const unsigned char *g;
        int full = 0, gw, sx, sy;

        if (is_lead_byte(p[i]) && p[i + 1]) {
            g = fontx_glyph(kanji, (unsigned)(p[i] << 8) | p[i + 1]);
            full = 1;
            i += 2;
        } else {
            g = fontx_glyph(ank, p[i]);
            i++;
        }
        gw = full ? cw * 2 : cw;
        if (g) {
            for (sy = 0; sy < ch; sy++) {
                for (sx = 0; sx < gw; sx++) {
                    /* Which dot of the 16-high bitmap this pixel is. */
                    const int bx = sx * (full ? 16 : 8) / gw;
                    const int by = sy * 16 / ch;
                    const int stride = full ? 2 : 1;
                    const double ax = at + sx, ay = (double)(ch - 1 - sy);

                    if (!(g[by * stride + bx / 8] & (0x80 >> (bx & 7)))) {
                        continue;
                    }
                    ras_dot(r,
                            (int)((x - r->ox) * r->dpmm + ax * ux - ay * uy),
                            (int)((r->tall - (y - r->oy)) * r->dpmm
                                  - ax * uy - ay * ux),
                            pen);
                }
            }
        }
        at += gw;
    }
}

static void ras_point_cb(void *u, double x, double y)
{
    Ras *r = (Ras *)u;

    ras_line(r, x - 0.4, y, x + 0.4, y, 2);
    ras_line(r, x, y - 0.4, x, y + 0.4, 2);
}

unsigned char *jw_plot_png(const Jwc *d, double dpmm, long *len)
{
    Ras r;
    double wide, tall;
    JwPlotSink k;
    unsigned char *png;

    if (!d || dpmm <= 0.0) {
        return 0;
    }
    {
        double x0, y0, x1, y1;

        jw_plot_box(d, &x0, &y0, &x1, &y1);
        wide = x1 - x0;
        tall = y1 - y0;
        r.ox = x0;
        r.oy = y0;
    }
    r.dpmm = dpmm;
    r.tall = tall;
    r.w = (int)(wide * dpmm + 0.5);
    r.h = (int)(tall * dpmm + 0.5);
    if (r.w <= 0 || r.h <= 0) {
        return 0;
    }
    r.rgb = (unsigned char *)malloc((size_t)r.w * r.h * 3);
    if (!r.rgb) {
        return 0;
    }
    memset(r.rgb, 0xff, (size_t)r.w * r.h * 3);         /* white paper */
    k.line = ras_line_cb;
    k.poly = ras_poly_cb;
    k.text = ras_text_cb;
    k.point = ras_point_cb;
    jw_plot_walk(d, &k, &r);
    png = png_encode(r.rgb, r.w, r.h, len);
    free(r.rgb);
    return png;
}
