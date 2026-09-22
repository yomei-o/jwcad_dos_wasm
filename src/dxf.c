/* See src/dxf.h for where every number here was measured. */
#include "dxf.h"
#include "view.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* A0 to A4, and the height that goes with each. */
static const double PAPER_W[5] = { 1189.0, 841.0, 594.0, 420.0, 297.0 };
static const double PAPER_H[5] = { 841.0, 594.0, 420.0, 297.0, 210.0 };

/* The nine line types, in the order orig/DXF_HDR.DAT names them.  The .JWC
 * keeps the type as 1 to 9. */
static const char *const LTYPE[10] = {
    "CONTINUOUS", "CONTINUOUS", "DASHED1", "DASHED2", "DASHED3",
    "CENTER1", "CENTER2", "PHANTOM1", "PHANTOM2", "DOT"
};

/* The colour a pen writes in the DXF.  The pen picks a screen colour
 * (jw_view_pen_colour) and the file names the same hue in AutoCAD's
 * numbering: pen 1 draws cyan and writes 4, pen 2 white and 7, pen 3 green
 * and 3, pen 4 yellow and 2 -- all four measured against SAMPLE0's and
 * SAMPLE1's own files.  The three screen colours no drawing here uses
 * follow the same hues: blue 5, red 1, magenta 6. */
static int dxf_colour(unsigned pen)
{
    static const int BY_SCREEN[8] = { 7, 5, 1, 6, 3, 4, 2, 7 };
    const unsigned c = jw_view_pen_colour(pen);

    return BY_SCREEN[c < 8 ? c : 7];
}

static void put_code(FILE *f, int code)
{
    fprintf(f, "%3d\r\n", code);
}

static void put_str(FILE *f, int code, const char *s)
{
    put_code(f, code);
    fprintf(f, "%s\r\n", s);
}

static void put_int(FILE *f, int code, int v)
{
    put_code(f, code);
    fprintf(f, "%5d\r\n", v);
}

/* **Eight significant digits, cut rather than rounded.**  477 units on A-4
 * at 1/1 come to 273.4922779… and the original writes `273.49227`, where
 * `%.8g` gives `273.49228`; 323.05725 units come to 185.2278060… and it
 * writes `185.2278` where `%.8g` gives `185.22781`.  All 195 of SAMPLE0's
 * numbers come out right if everything past the eighth digit is thrown away
 * and the trailing zeros go with it. */
static void put_num(FILE *f, int code, double v)
{
    char digits[24], out[48];
    double a = v < 0.0 ? -v : v;
    int e, i, at = 0, point;

    put_code(f, code);
    if (a < 1e-12) {
        fprintf(f, "0\r\n");
        return;
    }
    /* The digits come out of `%.16e`, not out of dividing by a power of
     * ten: scaling the value first left 223.4922779 a hair over .49228 and
     * the cut then took the wrong digit. */
    {
        char sci[40];
        int k2 = 0;

        sprintf(sci, "%.16e", a);
        for (i = 0; sci[i] && sci[i] != 'e' && sci[i] != 'E'; i++) {
            if (sci[i] >= '0' && sci[i] <= '9' && k2 < 8) {
                digits[k2++] = sci[i];
            }
        }
        digits[k2] = 0;
        e = atoi(strchr(sci, 'e') ? strchr(sci, 'e') + 1 : "0");
    }
    if (v < 0.0) {
        out[at++] = '-';
    }
    point = e + 1;                      /* how many digits before the point */
    if (point <= 0) {
        out[at++] = '0';
        out[at++] = '.';
        for (i = 0; i < -point; i++) {
            out[at++] = '0';
        }
        for (i = 0; i < 8; i++) {
            out[at++] = digits[i];
        }
    } else {
        for (i = 0; i < point; i++) {
            out[at++] = i < 8 ? digits[i] : '0';
        }
        if (point < 8) {
            out[at++] = '.';
            for (i = point; i < 8; i++) {
                out[at++] = digits[i];
            }
        }
    }
    out[at] = 0;
    if (strchr(out, '.')) {             /* and the trailing zeros go */
        while (at > 0 && out[at - 1] == '0') {
            out[--at] = 0;
        }
        if (at > 0 && out[at - 1] == '.') {
            out[--at] = 0;
        }
    }
    fprintf(f, "%s\r\n", out);
}

/* A drawing unit in real millimetres.  **The order matters**: multiplied by
 * the paper first and divided by the 518 units of the drawing area after.
 * `u * (paper / 518)` puts the last digit out on about a third of SAMPLE0's
 * numbers, and `u / unit_mm` -- unit_mm being a float -- on nearly all. */
static double to_mm(double u, double pw, double denom)
{
    /* **Times the paper in float, over 518 in double.**  Every other order
     * puts the eighth digit out somewhere: all in double gives 185.22781
     * where the original writes 185.2278, all in float gives 25.227798
     * where it writes 25.227799, and this one gives both. */
    return u * pw / 518.0 * denom;
}

/* orig/DXF_HDR.DAT, code and value a line each, with the codes re-aligned.
 * The last byte of the file is a DOS end-of-file mark and is not a line. */
static void put_template(FILE *f, const char *hdr)
{
    FILE *g = fopen(hdr, "rb");
    char line[128];
    int at = 0;

    if (!g) {
        return;
    }
    while (fgets(line, (int)sizeof line, g)) {
        int n = (int)strlen(line);

        while (n > 0 && (line[n - 1] == '\n' || line[n - 1] == '\r')) {
            line[--n] = 0;
        }
        if (n == 1 && line[0] == 0x1a) {
            break;
        }
        if (at % 2 == 0) {
            put_code(f, atoi(line));
        } else {
            fprintf(f, "%s\r\n", line);
        }
        at++;
    }
    fclose(g);
}

/* Which layer bytes the drawing uses, smallest first.  The name a layer gets
 * is `<byte >> 4>-<byte & 15>`. */
static int used_layers(const Jwc *d, unsigned char *out)
{
    unsigned char seen[256];
    int n = 0, i;
    long k;

    memset(seen, 0, sizeof seen);
    for (k = 0; k < d->n_lines; k++) seen[d->lines[k].layer] = 1;
    for (k = 0; k < d->n_arcs; k++) seen[d->arcs[k].layer] = 1;
    for (k = 0; k < d->n_texts; k++) seen[d->texts[k].layer] = 1;
    for (k = 0; k < d->n_points; k++) seen[d->points[k].layer] = 1;
    for (i = 0; i < 256; i++) {
        if (seen[i]) {
            out[n++] = (unsigned char)i;
        }
    }
    return n;
}

static void layer_name(unsigned char b, char *out)
{
    sprintf(out, "%d-%d", b >> 4, b & 15);
}

int jwc_dxf_write(const Jwc *d, const char *path, const char *hdr)
{
    FILE *f;
    unsigned char layer[256];
    char name[16];
    int n_layer, i, paper;
    long k;
    double mm, w, h;

    /* `mm` is the paper width here, not a factor: see to_mm. */

    if (!d) {
        return 0;
    }
    f = fopen(path, "wb");
    if (!f) {
        return 0;
    }
    paper = d->paper >= 0 && d->paper < 5 ? d->paper : 4;
    /* A drawing unit in real millimetres.  **Not `1 / unit_mm`** -- that
     * is a float and its reciprocal is a bit out: SAMPLE0's 44 units came
     * to 25.2278 where the original writes 25.227799.  The paper over the
     * 518 units of the drawing area, in double, gives the original's own
     * digits. */
    mm = PAPER_W[paper];
    w = PAPER_W[paper] * d->denom;
    h = PAPER_H[paper] * d->denom;

    put_str(f, 0, "SECTION");
    put_str(f, 2, "HEADER");
    put_str(f, 9, "$EXTMIN");
    put_num(f, 10, 0.0);
    put_num(f, 20, 0.0);
    put_str(f, 9, "$EXTMAX");
    put_num(f, 10, w);
    put_num(f, 20, h);
    put_str(f, 0, "ENDSEC");
    put_str(f, 0, "SECTION");
    put_str(f, 2, "TABLES");
    put_template(f, hdr);

    n_layer = used_layers(d, layer);
    put_str(f, 0, "TABLE");
    put_str(f, 2, "LAYER");
    put_int(f, 70, n_layer + 1);
    for (i = 0; i < n_layer; i++) {
        layer_name(layer[i], name);
        put_str(f, 0, "LAYER");
        put_str(f, 2, name);
        put_int(f, 70, 64);
        put_int(f, 62, 7);
        put_str(f, 6, "CONTINUOUS");
    }
    put_str(f, 0, "LAYER");
    put_str(f, 2, "ADD_LINE");
    put_int(f, 70, 64);
    put_int(f, 62, 7);
    put_str(f, 6, "CONTINUOUS");
    put_str(f, 0, "ENDTAB");
    put_str(f, 0, "ENDSEC");

    put_str(f, 0, "SECTION");
    put_str(f, 2, "ENTITIES");
    for (k = 0; k < d->n_lines; k++) {
        const JwcLine *l = &d->lines[k];

        layer_name(l->layer, name);
        put_str(f, 0, "LINE");
        put_str(f, 8, name);
        put_str(f, 6, LTYPE[l->type < 10 ? l->type : 0]);
        put_int(f, 62, dxf_colour(l->pen));
        put_num(f, 10, to_mm(l->x0, mm, d->denom));
        put_num(f, 20, to_mm(l->y0, mm, d->denom));
        put_num(f, 11, to_mm(l->x1, mm, d->denom));
        put_num(f, 21, to_mm(l->y1, mm, d->denom));
    }
    for (k = 0; k < d->n_arcs; k++) {
        const JwcArc *a = &d->arcs[k];
        double s, e;

        layer_name(a->layer, name);
        s = a->start / 65536.0;
        e = a->end / 65536.0;
        if (a->end == a->start) {       /* the whole circle */
            s = 0.0;
            e = 360.0;
        }
        put_str(f, 0, "ARC");
        put_str(f, 8, name);
        put_str(f, 6, LTYPE[a->type < 10 ? a->type : 0]);
        put_int(f, 62, dxf_colour(a->pen));
        put_num(f, 10, to_mm(a->cx, mm, d->denom));
        put_num(f, 20, to_mm(a->cy, mm, d->denom));
        put_num(f, 40, to_mm(a->r, mm, d->denom));
        put_num(f, 50, s);
        put_num(f, 51, e);
    }
    for (k = 0; k < d->n_texts; k++) {
        const JwcText *t = &d->texts[k];
        const int size = t->size <= 10 ? t->size : 0;
        const double hh = d->text_h[size] / 10.0 * d->denom;
        const double ww = d->text_h[size] ? (double)d->text_w[size]
                                            / d->text_h[size] : 1.0;
        double deg = atan2(t->y1 - t->y0, t->x1 - t->x0) * 180.0 / 3.14159265358979323846;

        layer_name(t->layer, name);
        if (deg < 0.0) {
            deg += 360.0;
        }
        put_str(f, 0, "TEXT");
        put_str(f, 8, name);
        put_num(f, 10, to_mm(t->x0, mm, d->denom));
        put_num(f, 20, to_mm(t->y0, mm, d->denom));
        put_num(f, 40, hh);
        put_num(f, 41, ww);
        put_num(f, 50, deg);
        put_str(f, 1, t->text ? t->text : "");
    }
    for (k = 0; k < d->n_points; k++) {
        const JwcPoint *p = &d->points[k];

        layer_name(p->layer, name);
        put_str(f, 0, "POINT");
        put_str(f, 8, name);
        put_int(f, 62, 4);
        put_num(f, 10, to_mm(p->x, mm, d->denom));
        put_num(f, 20, to_mm(p->y, mm, d->denom));
    }
    put_str(f, 0, "ENDSEC");
    put_str(f, 0, "EOF");
    fclose(f);
    return 1;
}

/* Reading one back.  Only the five entities the original writes are taken;
 * everything else is stepped over. */
int jwc_dxf_read(Jwc *d, const char *path, const char **why)
{
    FILE *f = fopen(path, "rb");
    char code[128], val[256];
    double mm;
    int got = 0;

    *why = "cannot open";
    if (!f) {
        return 0;
    }
    if (!d) {
        fclose(f);
        *why = "no drawing";
        return 0;
    }
    mm = (d->unit_mm > 0.0f ? 1.0 / d->unit_mm : 1.0) * d->denom;
    if (mm == 0.0) {
        mm = 1.0;
    }
    while (fgets(code, (int)sizeof code, f)) {
        int c = atoi(code);

        if (!fgets(val, (int)sizeof val, f)) {
            break;
        }
        {
            int n = (int)strlen(val);

            while (n > 0 && (val[n - 1] == '\n' || val[n - 1] == '\r')) {
                val[--n] = 0;
            }
        }
        if (c != 0) {
            continue;
        }
        if (!strcmp(val, "LINE") || !strcmp(val, "ARC")
            || !strcmp(val, "CIRCLE") || !strcmp(val, "POINT")
            || !strcmp(val, "TEXT")) {
            char kind[16];
            double x0 = 0, y0 = 0, x1 = 0, y1 = 0, r = 0, a0 = 0, a1 = 360;
            long back;

            strcpy(kind, val);
            while ((back = ftell(f)) >= 0
                   && fgets(code, (int)sizeof code, f)) {
                int cc = atoi(code);

                if (cc == 0) {
                    fseek(f, back, SEEK_SET);
                    break;
                }
                if (!fgets(val, (int)sizeof val, f)) {
                    break;
                }
                switch (cc) {
                case 10: x0 = atof(val); break;
                case 20: y0 = atof(val); break;
                case 11: x1 = atof(val); break;
                case 21: y1 = atof(val); break;
                case 40: r = atof(val); break;
                case 50: a0 = atof(val); break;
                case 51: a1 = atof(val); break;
                default: break;
                }
            }
            if (!strcmp(kind, "LINE")) {
                jwc_add_line(d, (float)(x0 / mm), (float)(y0 / mm),
                             (float)(x1 / mm), (float)(y1 / mm), 1, 1, 0);
                got++;
            } else if (!strcmp(kind, "ARC") || !strcmp(kind, "CIRCLE")) {
                jwc_add_arc_at(d, (float)(x0 / mm), (float)(y0 / mm),
                               (float)(r / mm), (long)(a0 * 65536.0),
                               (long)(a1 * 65536.0), 1, 1, 0, 0);
                got++;
            } else if (!strcmp(kind, "POINT")) {
                JwcPoint p;

                memset(&p, 0, sizeof p);
                p.x = (float)(x0 / mm);
                p.y = (float)(y0 / mm);
                jwc_put_point(d, &p);
                got++;
            }
        }
    }
    fclose(f);
    if (!got) {
        *why = "no entities";
        return 0;
    }
    *why = 0;
    return 1;
}
