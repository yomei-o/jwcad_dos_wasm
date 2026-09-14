/* Reading a JW_CAD drawing (.JWC).  See jwc.h for what is settled and what is
 * not.
 *
 * The layout, as the sample drawings show it:
 *
 *   0x0000  199 bytes + '\n'   "jw_cad(c)data......." and the drawing's name
 *   0x00c8  199 bytes + '\n'   counts and settings   (DGROUP 0x0d7a's format)
 *   0x0190  199 bytes + '\n'   more settings         (DGROUP 0x0e28)
 *   0x0258  199 bytes + '\n'   two far pointers      (DGROUP 0x0dde, "%lp,%lp")
 *   0x0320  the data as it sat in memory
 *
 * The counts come first on the second line, in the same order as the status
 * line the program itself prints (DGROUP 0x022e):
 *
 *   線=%ld 円=%ld 点=%d 文字列=%d(%ld字)
 *
 * and they are what makes the rest readable: `n_lines` records of 22 bytes,
 * then `n_arcs` of 32, and the counts have to come out exactly right or the
 * offset is wrong.
 *
 *   TEST7.JWC    4083 lines,  5 arcs, 106 points, 18 strings
 *   SAMPLE2.JWC  1084 lines, 98 arcs,  46 points, 10 strings
 *
 * Where the geometry starts is the one thing still guessed at.  Something of
 * variable length sits in front of it -- a layer table, by the look of the
 * bytes -- and it is 1589 into the data in five of the six samples and 1621 in
 * SAMPLE2.  So the loader searches for the offset at which every line and
 * every arc reads back as a plausible number, and takes the first one that
 * fits.  With both counts to satisfy, that is a tight constraint, and it lands
 * on the same place as reading the records by hand does.
 */
#include "jwc.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEXT_LINE   200         /* 199 bytes and a newline */
#define DATA_AT     (TEXT_LINE * 4)
#define LINE_SIZE   22
#define ARC_SIZE    32
#define SEARCH_LO   1200        /* the preamble has always been in this range */
#define SEARCH_HI   2600

static float rd_f32(const unsigned char *p)
{
    unsigned long v = (unsigned long)p[0] | ((unsigned long)p[1] << 8)
                    | ((unsigned long)p[2] << 16) | ((unsigned long)p[3] << 24);
    float f;

    memcpy(&f, &v, 4);          /* the files are little-endian IEEE, as x86 */
    return f;
}

static short rd_i16(const unsigned char *p)
{
    return (short)(p[0] | (p[1] << 8));
}

static int sane(float f)
{
    return f == f && f > -1e6f && f < 1e6f;
}

/* Does a run of `n` line records starting at `at` read as coordinates? */
static int lines_fit(const unsigned char *b, size_t len, long at, long n)
{
    long k;

    if (at < 0 || (size_t)(at + n * LINE_SIZE) > len) {
        return 0;
    }
    for (k = 0; k < n; k++) {
        const unsigned char *r = b + at + k * LINE_SIZE;
        int j;

        for (j = 0; j < 4; j++) {
            if (!sane(rd_f32(r + j * 4))) {
                return 0;
            }
        }
    }
    return 1;
}

static int arcs_fit(const unsigned char *b, size_t len, long at, long n)
{
    long k;

    if (n == 0) {
        return 1;
    }
    if (at < 0 || (size_t)(at + n * ARC_SIZE) > len) {
        return 0;
    }
    for (k = 0; k < n; k++) {
        const unsigned char *r = b + at + k * ARC_SIZE;
        short flat = rd_i16(r + 12);

        if (!sane(rd_f32(r)) || !sane(rd_f32(r + 4)) || !sane(rd_f32(r + 8))) {
            return 0;
        }
        if (rd_f32(r + 8) <= 0.0f) {        /* a radius is positive */
            return 0;
        }
        if (flat <= 0 || flat > 10000) {    /* a ratio, x10000 */
            return 0;
        }
    }
    return 1;
}

static int counts(const unsigned char *text, Jwc *d)
{
    char buf[TEXT_LINE];
    long a = 0, b = 0;
    int c = 0, e = 0;

    memcpy(buf, text, TEXT_LINE - 1);
    buf[TEXT_LINE - 1] = '\0';
    if (sscanf(buf, "%ld,%ld,%d,%d", &a, &b, &c, &e) != 4) {
        return 0;
    }
    d->n_lines = a;
    d->n_arcs = b;
    d->n_points = c;
    d->n_strings = e;
    return a >= 0 && b >= 0;
}

Jwc *jwc_load(const char *path, const char **why)
{
    static const char SIG[] = "jw_cad(c)data";
    unsigned char *file = NULL;
    const unsigned char *body;
    size_t len, blen;
    long at, k;
    Jwc *d = NULL;
    FILE *f;

    *why = NULL;
    f = fopen(path, "rb");
    if (!f) {
        *why = "cannot open";
        return NULL;
    }
    fseek(f, 0, SEEK_END);
    len = (size_t)ftell(f);
    fseek(f, 0, SEEK_SET);
    file = (unsigned char *)malloc(len ? len : 1);
    if (!file || fread(file, 1, len, f) != len) {
        fclose(f);
        free(file);
        *why = "cannot read";
        return NULL;
    }
    fclose(f);

    if (len < DATA_AT + 64 || memcmp(file, SIG, sizeof SIG - 1) != 0) {
        free(file);
        *why = "not a JWC drawing";
        return NULL;
    }

    d = (Jwc *)calloc(1, sizeof *d);
    if (!d) {
        free(file);
        *why = "out of memory";
        return NULL;
    }
    /* The name follows the signature, padded with NULs and then spaces. */
    memcpy(d->title, file + sizeof SIG - 1 + 7, sizeof d->title - 1);
    for (k = (long)sizeof d->title - 2; k >= 0; k--) {
        if (d->title[k] == ' ' || d->title[k] == '\0') {
            d->title[k] = '\0';
        } else {
            break;
        }
    }

    if (!counts(file + TEXT_LINE, d)) {
        free(file);
        free(d);
        *why = "cannot read the counts";
        return NULL;
    }

    body = file + DATA_AT;
    blen = len - DATA_AT;
    for (at = SEARCH_LO; at < SEARCH_HI; at++) {
        if (lines_fit(body, blen, at, d->n_lines)
            && arcs_fit(body, blen, at + d->n_lines * LINE_SIZE, d->n_arcs)) {
            break;
        }
    }
    if (at >= SEARCH_HI) {
        free(file);
        free(d);
        *why = "cannot find where the geometry starts";
        return NULL;
    }
    d->lines_at = at;

    d->lines = (JwcLine *)calloc((size_t)(d->n_lines ? d->n_lines : 1),
                                 sizeof *d->lines);
    d->arcs = (JwcArc *)calloc((size_t)(d->n_arcs ? d->n_arcs : 1),
                               sizeof *d->arcs);
    if (!d->lines || !d->arcs) {
        jwc_free(d);
        free(file);
        *why = "out of memory";
        return NULL;
    }

    for (k = 0; k < d->n_lines; k++) {
        const unsigned char *r = body + at + k * LINE_SIZE;

        d->lines[k].x0 = rd_f32(r);
        d->lines[k].y0 = rd_f32(r + 4);
        d->lines[k].x1 = rd_f32(r + 8);
        d->lines[k].y1 = rd_f32(r + 12);
        memcpy(d->lines[k].attr, r + 16, 6);
    }
    {
        const unsigned char *base = body + at + d->n_lines * LINE_SIZE;

        for (k = 0; k < d->n_arcs; k++) {
            const unsigned char *r = base + k * ARC_SIZE;

            /* The angle fields gave themselves away by their values: the
             * ones that hold 0/45/90/180/225/270/315/360 are the sweep and
             * the tilt, and the small numbers between them are fractions
             * scaled by 10000, the same scale `flatten` uses. */
            d->arcs[k].cx = rd_f32(r);
            d->arcs[k].cy = rd_f32(r + 4);
            d->arcs[k].r = rd_f32(r + 8);
            /* Sixteen bits, not thirty-two: reading it as a long swallows
             * the field behind it and turns 10000 into nonsense for every
             * record where that field is not zero (33 of SAMPLE2's 98).
             * The values seen are 10000 for a circle and 1000..8679 for
             * flattened ellipses. */
            d->arcs[k].flatten = rd_i16(r + 12);
            d->arcs[k].flatten2 = rd_i16(r + 14);
            d->arcs[k].start      = rd_i16(r + 16);
            d->arcs[k].start_frac = rd_i16(r + 18);
            d->arcs[k].end        = rd_i16(r + 20);
            d->arcs[k].end_frac   = rd_i16(r + 22);
            d->arcs[k].tilt       = rd_i16(r + 24);
            d->arcs[k].pen        = r[26];
            d->arcs[k].type       = r[27];
            memcpy(d->arcs[k].rest, r + 28, 4);
        }
    }

    free(file);
    return d;
}

void jwc_free(Jwc *d)
{
    if (d) {
        free(d->lines);
        free(d->arcs);
        free(d);
    }
}

void jwc_extent(const Jwc *d, float *x0, float *y0, float *x1, float *y1)
{
    long k;
    float lo_x = 1e30f, lo_y = 1e30f, hi_x = -1e30f, hi_y = -1e30f;

#define SEE(px, py) do { \
        if ((px) < lo_x) lo_x = (px); \
        if ((px) > hi_x) hi_x = (px); \
        if ((py) < lo_y) lo_y = (py); \
        if ((py) > hi_y) hi_y = (py); \
    } while (0)

    for (k = 0; k < d->n_lines; k++) {
        SEE(d->lines[k].x0, d->lines[k].y0);
        SEE(d->lines[k].x1, d->lines[k].y1);
    }
    for (k = 0; k < d->n_arcs; k++) {
        SEE(d->arcs[k].cx - d->arcs[k].r, d->arcs[k].cy - d->arcs[k].r);
        SEE(d->arcs[k].cx + d->arcs[k].r, d->arcs[k].cy + d->arcs[k].r);
    }
#undef SEE

    if (lo_x > hi_x) {
        lo_x = lo_y = 0.0f;
        hi_x = hi_y = 1.0f;
    }
    *x0 = lo_x; *y0 = lo_y; *x1 = hi_x; *y1 = hi_y;
}
