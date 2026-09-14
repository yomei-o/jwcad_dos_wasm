/* Reading a JW_CAD drawing (.JWC).
 *
 *   0x0000  199 bytes + '\n'   "jw_cad(c)data......." and the drawing's name
 *   0x00c8  199 bytes + '\n'   counts and settings   (DGROUP 0x0d7a's format)
 *   0x0190  199 bytes + '\n'   more settings         (DGROUP 0x0e28)
 *   0x0258  199 bytes + '\n'   two far pointers      (DGROUP 0x0dde, "%lp,%lp")
 *   0x0320  the data, as it sat in memory
 *
 * The second line starts with four counts, and those are what make the rest
 * readable.  They are NOT in the order the program's own status line prints
 * them in (DGROUP 0x022e says 線=%ld 円=%ld 点=%d 文字列=%d) -- in the file the
 * texts come before the points:
 *
 *     lines, arcs, texts, points
 *
 * and the data follows in that order, each a plain array:
 *
 *     lines    n x 22   float x0,y0,x1,y1;  pen, type;  4 more
 *     arcs     n x 32   float cx,cy,r;  flatten;  sweep;  tilt;  pen, type;  4
 *     texts    n x 24   float x0,y0,x1,y1;  far pointer into the pool;  4
 *     pool          the strings themselves, NUL separated, Shift-JIS
 *     points   n x 12   float x,y;  4 more
 *
 * The pool's length is the offset half of the *second* far pointer on the
 * fourth line -- `6097:0000,6097:0128` means 0x128 bytes of strings.
 *
 * What is not settled is where the data starts.  Something of variable length
 * sits in front of it, a layer table by the look of the bytes, and it is 1589
 * bytes into the data in thirteen of the fourteen sample drawings and 1621 in
 * SAMPLE2.JWC.  So the loader works it out instead: the arrays end where the
 * file's data ends, so the start is the end minus the total the counts imply,
 * and `layout_fits` then confirms every record of all four arrays reads back
 * as a sensible number.  All of that lining up at once is what pinned the
 * format down -- the sections only meet if every record size is right.
 */
#include "jwc.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEXT_LINE   200         /* 199 bytes and a newline */
#define DATA_AT     (TEXT_LINE * 4)
#define LINE_SIZE   22
#define ARC_SIZE    32
#define TEXT_SIZE   24
#define POINT_SIZE  12
#define SEARCH_LO   1000
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

static unsigned rd_u16(const unsigned char *p)
{
    return (unsigned)(p[0] | (p[1] << 8));
}

static int sane(float f)
{
    return f == f && f > -1e6f && f < 1e6f;
}

static int coords_fit(const unsigned char *r, int n)
{
    int j;

    for (j = 0; j < n; j++) {
        if (!sane(rd_f32(r + j * 4))) {
            return 0;
        }
    }
    return 1;
}

/* Does the whole chain of arrays fit, starting at `at`? */
static int layout_fits(const unsigned char *b, long blen, long at, const Jwc *d)
{
    long k, p = at;

    if (at < 0) {
        return 0;
    }
    for (k = 0; k < d->n_lines; k++, p += LINE_SIZE) {
        if (p + LINE_SIZE > blen || !coords_fit(b + p, 4)) {
            return 0;
        }
    }
    for (k = 0; k < d->n_arcs; k++, p += ARC_SIZE) {
        short flat;

        if (p + ARC_SIZE > blen || !coords_fit(b + p, 3)) {
            return 0;
        }
        if (rd_f32(b + p + 8) <= 0.0f) {        /* a radius is positive */
            return 0;
        }
        flat = rd_i16(b + p + 12);              /* a ratio, x10000 */
        if (flat <= 0 || flat > 10000) {
            return 0;
        }
    }
    for (k = 0; k < d->n_texts; k++, p += TEXT_SIZE) {
        if (p + TEXT_SIZE > blen || !coords_fit(b + p, 4)) {
            return 0;
        }
        if ((long)rd_u16(b + p + 16) >= d->text_len) {   /* into the pool */
            return 0;
        }
    }
    p += d->text_len;
    for (k = 0; k < d->n_points; k++, p += POINT_SIZE) {
        if (p + POINT_SIZE > blen || !coords_fit(b + p, 2)) {
            return 0;
        }
    }
    return p <= blen;
}

/* The last byte of the file that is not zero padding. */
static long last_used(const unsigned char *b, long blen)
{
    while (blen > 0 && b[blen - 1] == 0) {
        blen--;
    }
    return blen;
}

static int header(const unsigned char *file, Jwc *d)
{
    char buf[TEXT_LINE];
    long a = 0, c = 0;
    int e = 0, g = 0;
    unsigned s1 = 0, o1 = 0, s2 = 0, o2 = 0;

    memcpy(buf, file + TEXT_LINE, TEXT_LINE - 1);
    buf[TEXT_LINE - 1] = '\0';
    if (sscanf(buf, "%ld,%ld,%d,%d", &a, &c, &e, &g) != 4) {
        return 0;
    }
    d->n_lines = a;
    d->n_arcs = c;
    d->n_texts = e;
    d->n_points = g;

    /* "%lp,%lp" -- the second one's offset is how long the string pool is. */
    memcpy(buf, file + TEXT_LINE * 3, TEXT_LINE - 1);
    buf[TEXT_LINE - 1] = '\0';
    if (sscanf(buf, "%4X:%4X,%4X:%4X", &s1, &o1, &s2, &o2) != 4) {
        return 0;
    }
    d->text_len = (long)o2;
    return a >= 0 && c >= 0 && e >= 0 && g >= 0;
}

Jwc *jwc_load(const char *path, const char **why)
{
    static const char SIG[] = "jw_cad(c)data";
    unsigned char *file = NULL;
    const unsigned char *b;
    long len, blen, at, k, p, span, used;
    Jwc *d = NULL;
    FILE *f;

    *why = NULL;
    f = fopen(path, "rb");
    if (!f) {
        *why = "cannot open";
        return NULL;
    }
    fseek(f, 0, SEEK_END);
    len = ftell(f);
    fseek(f, 0, SEEK_SET);
    file = (unsigned char *)malloc((size_t)(len > 0 ? len : 1));
    if (!file || (long)fread(file, 1, (size_t)len, f) != len) {
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
    memcpy(d->title, file + sizeof SIG - 1 + 7, sizeof d->title - 1);
    for (k = (long)sizeof d->title - 2; k >= 0; k--) {
        if (d->title[k] == ' ' || d->title[k] == '\0') {
            d->title[k] = '\0';
        } else {
            break;
        }
    }

    if (!header(file, d)) {
        free(file);
        jwc_free(d);
        *why = "cannot read the counts";
        return NULL;
    }

    b = file + DATA_AT;
    blen = len - DATA_AT;
    used = last_used(b, blen);
    span = d->n_lines * LINE_SIZE + d->n_arcs * ARC_SIZE
         + (long)d->n_texts * TEXT_SIZE + d->text_len
         + (long)d->n_points * POINT_SIZE;

    at = used - span;
    if (at < SEARCH_LO || at >= SEARCH_HI || !layout_fits(b, blen, at, d)) {
        for (at = SEARCH_LO; at < SEARCH_HI; at++) {
            if (layout_fits(b, blen, at, d)) {
                break;
            }
        }
        if (at >= SEARCH_HI) {
            free(file);
            jwc_free(d);
            *why = "cannot find where the data starts";
            return NULL;
        }
    }
    d->data_at = at;
    d->data_end = at + span;

    d->lines = (JwcLine *)calloc((size_t)(d->n_lines + 1), sizeof *d->lines);
    d->arcs = (JwcArc *)calloc((size_t)(d->n_arcs + 1), sizeof *d->arcs);
    d->texts = (JwcText *)calloc((size_t)(d->n_texts + 1), sizeof *d->texts);
    d->points = (JwcPoint *)calloc((size_t)(d->n_points + 1), sizeof *d->points);
    d->text = (char *)calloc((size_t)(d->text_len + 1), 1);
    if (!d->lines || !d->arcs || !d->texts || !d->points || !d->text) {
        free(file);
        jwc_free(d);
        *why = "out of memory";
        return NULL;
    }

    p = at;
    for (k = 0; k < d->n_lines; k++, p += LINE_SIZE) {
        const unsigned char *r = b + p;

        d->lines[k].x0 = rd_f32(r);
        d->lines[k].y0 = rd_f32(r + 4);
        d->lines[k].x1 = rd_f32(r + 8);
        d->lines[k].y1 = rd_f32(r + 12);
        d->lines[k].pen = r[16];
        d->lines[k].type = r[17];
        memcpy(d->lines[k].rest, r + 18, 4);
    }
    for (k = 0; k < d->n_arcs; k++, p += ARC_SIZE) {
        const unsigned char *r = b + p;

        d->arcs[k].cx = rd_f32(r);
        d->arcs[k].cy = rd_f32(r + 4);
        d->arcs[k].r = rd_f32(r + 8);
        /* Sixteen bits, not thirty-two: read as a long it swallows the field
         * behind it and turns 10000 into nonsense wherever that field is not
         * zero -- 33 of SAMPLE2.JWC's 98 arcs. */
        d->arcs[k].flatten = rd_i16(r + 12);
        d->arcs[k].flatten2 = rd_i16(r + 14);
        d->arcs[k].start = rd_i16(r + 16);
        d->arcs[k].start_frac = rd_i16(r + 18);
        d->arcs[k].end = rd_i16(r + 20);
        d->arcs[k].end_frac = rd_i16(r + 22);
        d->arcs[k].tilt = rd_i16(r + 24);
        d->arcs[k].pen = r[26];
        d->arcs[k].type = r[27];
        memcpy(d->arcs[k].rest, r + 28, 4);
    }
    {
        long texts_at = p;

        p += (long)d->n_texts * TEXT_SIZE;
        memcpy(d->text, b + p, (size_t)d->text_len);
        p += d->text_len;

        for (k = 0; k < d->n_texts; k++) {
            const unsigned char *r = b + texts_at + k * TEXT_SIZE;
            unsigned off = rd_u16(r + 16);

            d->texts[k].x0 = rd_f32(r);
            d->texts[k].y0 = rd_f32(r + 4);
            d->texts[k].x1 = rd_f32(r + 8);
            d->texts[k].y1 = rd_f32(r + 12);
            d->texts[k].text = d->text + off;
            memcpy(d->texts[k].rest, r + 20, 4);
        }
    }
    for (k = 0; k < d->n_points; k++, p += POINT_SIZE) {
        const unsigned char *r = b + p;

        d->points[k].x = rd_f32(r);
        d->points[k].y = rd_f32(r + 4);
        memcpy(d->points[k].rest, r + 8, 4);
    }

    free(file);
    return d;
}

void jwc_free(Jwc *d)
{
    if (d) {
        free(d->lines);
        free(d->arcs);
        free(d->texts);
        free(d->points);
        free(d->text);
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
    for (k = 0; k < d->n_texts; k++) {
        SEE(d->texts[k].x0, d->texts[k].y0);
        SEE(d->texts[k].x1, d->texts[k].y1);
    }
    for (k = 0; k < d->n_points; k++) {
        SEE(d->points[k].x, d->points[k].y);
    }
#undef SEE

    if (lo_x > hi_x) {
        lo_x = lo_y = 0.0f;
        hi_x = hi_y = 1.0f;
    }
    *x0 = lo_x; *y0 = lo_y; *x1 = hi_x; *y1 = hi_y;
}
