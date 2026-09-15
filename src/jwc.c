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
 *     lines    n x 22   float x0,y0,x1,y1;  type, pen;  4 more
 *     arcs     n x 32   float cx,cy,r;  flatten;  sweep;  tilt;  type, pen;  4
 *
 * The two bytes are in that order, not the other way round, and it was measured
 * rather than guessed: run the original under dosv_emu_cpp, sample the colour it
 * put on the screen along each line, and tally it against each byte.  The second
 * one predicts the colour exactly (1->5, 2->7, 3->4, 4->6, 5->3) and the first
 * one not at all; the first takes values 1-9, which is JW_CAD's line types.
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

/* A signed 32-bit field.  The arc angles are 16.16 fixed point, so the low
 * word is the fraction and the pair has to be read together. */
static long rd_i32(const unsigned char *p)
{
    return (long)(int)((unsigned)p[0] | ((unsigned)p[1] << 8)
                       | ((unsigned)p[2] << 16) | ((unsigned)p[3] << 24));
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

/* Field 30 of the counts line is how wide the drawing area was when the file
 * was saved, in pixels.  JW_CAD divides its own width by it and **multiplies
 * every coordinate in the drawing by the ratio, once, at load time** -- an
 * overlay-6 routine (link 2ab8:43b0) walks the whole entity array doing it.
 *
 * Thirteen of the fourteen sample drawings say 518, which is what JW_CAD's own
 * drawing area comes to in mode 12h (639 - 121), so nothing happens.  TEST7
 * says 678: it was saved on an 800x600 screen, and every one of its 4,083 lines
 * arrives on screen at 518/678 = 0.764012 of where the file puts it.  That one
 * number was the last unexplained thing in the geometry -- it was found by
 * breaking on the float library during the load and reading the two integers
 * the ratio is built from.
 *
 * The five TEST1-TEST5 files stop at field 29 and are left alone. */
static const char *field(const char *line, int n)
{
    int commas = 0;

    for (; *line; line++) {
        if (*line == ',' && ++commas == n) {
            return line + 1;
        }
    }
    return NULL;
}

static float saved_width_ratio(const char *line)
{
    const char *f = field(line, 30);
    long w = f ? strtol(f, NULL, 10) : 0;

    return w > 0 ? 518.0f / (float)w : 1.0f;
}

/* The dot grid.
 *
 * Field 29 turns it on -- of the fourteen drawings only SAMPLE1 has it -- and
 * fields 25 and 26 are its spacing **on the paper, in millimetres**: 9 and 9
 * for SAMPLE1, 5 and 5 for the rest.  The same two numbers are sitting in the
 * running original's DGROUP at 0x115a and 0x115e while it draws.
 *
 * Millimetres become drawing units through the paper: JW_CAD fits the paper's
 * width across its 518-pixel drawing area, so a millimetre is `518 / paper`
 * units, and field 11 says which paper (A-4 is 4).  That is not a guess about
 * the zoom -- the original's own 表示倍率 (DGROUP 0x896e) is 0.5723906 for the
 * two A-4 drawings, 0.4047689 for the three A-3 ones and 0.2862 for the A-2,
 * which are in the ratio 1 : 1/sqrt2 : 1/2, the paper sizes exactly.  And the
 * factor it implies is visible in the drawings themselves: a text of `n`
 * characters of `width + gap` millimetres measures `n * (width+gap) * 518/paper`
 * units in SAMPLE3 and SAMPLE6, and in TEST7 too once its own 678 is allowed
 * for.
 *
 * SAMPLE1 settles the result: 9 mm is 15.69697 units, and the original's dots
 * stand at 121 + k*15.69697 truncated -- 136, 152, 168, 183, 199, 215, 230 ...
 * 623 -- which is every one of the 33 columns and 29 rows it draws, with no
 * offset: the grid goes through the drawing's own origin. */
static void grid(const char *line, Jwc *d)
{
    static const float PAPER[5] = { 1189.0f, 841.0f, 594.0f, 420.0f, 297.0f };
    const char *f = field(line, 11);
    int paper = f ? (int)strtol(f, NULL, 10) : -1;

    if (paper < 0 || paper > 4) {
        return;
    }
    d->unit_mm = 518.0f / PAPER[paper];
    f = field(line, 29);
    if (!f || strtol(f, NULL, 10) == 0) {
        return;
    }
    f = field(line, 25);
    d->grid_x = f ? atof(f) * 518.0 / PAPER[paper] : 0.0;
    f = field(line, 26);
    d->grid_y = f ? atof(f) * 518.0 / PAPER[paper] : 0.0;
    d->grid_on = d->grid_x > 0.0 && d->grid_y > 0.0;
}

/* The drawing's own character sizes.
 *
 * Three tables of eleven words, in tenths of a millimetre on the paper: the
 * width, the height and the gap after the character.  Index 0 is whatever size
 * is selected for drawing with; 1 to 10 are the types a record can name.
 *
 * They are **not** JW_CAD's -- they are the drawing's, and the file carries
 * them.  TEST2's type 10 is 15.0 mm where every other drawing here says 10.0,
 * and its headings measure 13.95 pixels a character against the 9.59 the
 * built-in table gives; reading the tables out of the file puts all four of
 * its long strings on the pixel the original puts them.  The offsets are
 * absolute in the preamble, which is a fixed 800 bytes of text followed by a
 * fixed block of settings -- SAMPLE2, whose geometry starts 32 bytes later
 * than everyone else's, has its tables in the same place.
 *
 * Found by searching every drawing's preamble for a run of words beginning
 * 20 25 30 40, which is the run the running original has at DGROUP 0x182. */
static void sizes(const unsigned char *file, long len, Jwc *d)
{
    static const short DEF_W[11] = {30, 20, 25, 30, 40, 50, 60, 70, 80, 90, 100};
    static const short DEF_G[11] = { 5,  0,  0,  5,  5,  5, 10, 10, 10, 10,  10};
    static const short DEF_P[11] = { 2,  1,  1,  2,  2,  3,  3,  4,  4,  5,   5};
    int i;

    memcpy(d->text_w, DEF_W, sizeof d->text_w);
    memcpy(d->text_h, DEF_W, sizeof d->text_h);
    memcpy(d->text_gap, DEF_G, sizeof d->text_gap);
    memcpy(d->text_pen, DEF_P, sizeof d->text_pen);
    if (len < 0x06ef + 22) {
        return;
    }
    for (i = 0; i < 11; i++) {
        d->text_pen[i] = rd_i16(file + 0x06ad + i * 2);
        d->text_w[i] = rd_i16(file + 0x06c3 + i * 2);
        d->text_h[i] = rd_i16(file + 0x06d9 + i * 2);
        d->text_gap[i] = rd_i16(file + 0x06ef + i * 2);
    }
    /* A drawing with nothing sane there keeps the defaults rather than drawing
     * every string as a dot. */
    for (i = 1; i < 11; i++) {
        if (d->text_w[i] <= 0 || d->text_h[i] <= 0 || d->text_gap[i] < 0
            || d->text_pen[i] < 1 || d->text_pen[i] > 8) {
            memcpy(d->text_w, DEF_W, sizeof d->text_w);
            memcpy(d->text_h, DEF_W, sizeof d->text_h);
            memcpy(d->text_gap, DEF_G, sizeof d->text_gap);
            memcpy(d->text_pen, DEF_P, sizeof d->text_pen);
            return;
        }
    }
}

/* The 指定点, out of the preamble: `count` of them, x at 0x0324 and y at
 * 0x04b8, 101 floats each.  See jwc.h. */
static void marks(const unsigned char *file, long len, Jwc *d, int count)
{
    int i;

    d->n_marks = count < 0 ? 0 : count > 101 ? 101 : count;
    if (len < 0x04b8 + 101 * 4) {
        d->n_marks = 0;
        return;
    }
    for (i = 0; i < d->n_marks; i++) {
        d->mark_x[i] = rd_f32(file + 0x0324 + i * 4);
        d->mark_y[i] = rd_f32(file + 0x04b8 + i * 4);
    }
}

/* The five numbers the panel down the left of the screen shows.  The original
 * keeps them in DGROUP -- 0x0a68 the paper, 0x0a6a the pen, 0x0a6c the line
 * type, 0x0b26 the scale -- and dumping those while it has each of the
 * fourteen drawings up gives exactly fields 11, 12, 13 and 9 of this line.
 * Field 10 is the layer being written to, which is the button it fills. */
static void panel(const char *line, Jwc *d)
{
    const char *f;

    d->paper = (f = field(line, 11)) ? (int)strtol(f, NULL, 10) : 3;
    d->pen = (f = field(line, 12)) ? (int)strtol(f, NULL, 10) : 1;
    d->line_type = (f = field(line, 13)) ? (int)strtol(f, NULL, 10) : 1;
    d->write_layer = (f = field(line, 10)) ? (int)strtol(f, NULL, 10) : 0;
    d->denom = (f = field(line, 9)) ? (float)atof(f) : 1.0f;
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
    d->scale = saved_width_ratio(buf);
    grid(buf, d);
    panel(buf, d);
    d->old_format = (unsigned char)(field(buf, 30) == NULL);

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
    sizes(file, len, d);
    {
        char line[TEXT_LINE];
        const char *f;

        memcpy(line, file + TEXT_LINE, TEXT_LINE - 1);
        line[TEXT_LINE - 1] = '\0';
        f = field(line, 4);
        marks(file, len, d, f ? (int)strtol(f, NULL, 10) : 0);
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

    /* The last 560 bytes of the preamble are the layer tables: two copies of
     * 16 group bytes followed by 256 layer bytes, then 16 bytes of something
     * else.  The second copy is the one the redraw consults (it matches the
     * table at DGROUP 0xb7c/0xb388 that FUN_21f2_0680 reads); the first is the
     * pair at 0xb6c/0xc170 that FUN_21f2_06d1 reads, and the two differ only in
     * TEST7 among the samples.  Both were found by dumping the tables out of a
     * running original and searching the file for them. */
    memset(d->group_on, 1, sizeof d->group_on);
    memset(d->layer_on, 1, sizeof d->layer_on);
    if (at >= 288) {
        memcpy(d->group_on, b + at - 288, sizeof d->group_on);
        memcpy(d->layer_on, b + at - 272, sizeof d->layer_on);
    }

    /* The layer names come straight after the geometry, eight bytes each. */
    for (k = 0; k < 256; k++) {
        long o = d->data_end + k * 8;

        if (o + 8 <= blen) {
            memcpy(d->layer_name[k], b + o, 8);
        }
        d->layer_name[k][8] = 0;
    }

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
        d->lines[k].type = r[16];
        d->lines[k].pen = r[17];
        d->lines[k].layer = r[18];
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
        /* 16.16 fixed degrees, both of them -- see jwc.h. */
        d->arcs[k].start = rd_i32(r + 14);
        d->arcs[k].end = rd_i32(r + 18);
        /* The tilt is a whole 16.16 long as well, not a degree with two spare
         * bytes in front of it.  SAMPLE2 has four ellipses turned by
         * 0x0059ffeb -- 88.99968 degrees -- and reading only the high word
         * puts every vertex of their chains a pixel out. */
        d->arcs[k].tilt = rd_i32(r + 22);
        d->arcs[k].type = r[26];
        d->arcs[k].pen = r[27];
        d->arcs[k].layer = r[28];
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
            d->texts[k].size = r[20];
            d->texts[k].layer = r[21];
            memcpy(d->texts[k].rest, r + 20, 4);
        }
    }
    for (k = 0; k < d->n_points; k++, p += POINT_SIZE) {
        const unsigned char *r = b + p;

        d->points[k].x = rd_f32(r);
        d->points[k].y = rd_f32(r + 4);
        d->points[k].layer = r[8];
        memcpy(d->points[k].rest, r + 8, 4);
    }

    if (d->scale != 1.0f) {
        const float s = d->scale;

        for (k = 0; k < d->n_lines; k++) {
            d->lines[k].x0 *= s; d->lines[k].y0 *= s;
            d->lines[k].x1 *= s; d->lines[k].y1 *= s;
        }
        for (k = 0; k < d->n_arcs; k++) {
            d->arcs[k].cx *= s; d->arcs[k].cy *= s; d->arcs[k].r *= s;
        }
        for (k = 0; k < d->n_texts; k++) {
            d->texts[k].x0 *= s; d->texts[k].y0 *= s;
            d->texts[k].x1 *= s; d->texts[k].y1 *= s;
        }
        for (k = 0; k < d->n_points; k++) {
            d->points[k].x *= s; d->points[k].y *= s;
        }
        for (k = 0; k < d->n_marks; k++) {
            d->mark_x[k] *= s; d->mark_y[k] *= s;
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
        free(d->texts);
        free(d->points);
        free(d->text);
        free(d);
    }
}

int jwc_visible(const Jwc *d, unsigned char layer)
{
    return d->layer_on[layer] && d->group_on[layer >> 4];
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

    /* Only what is shown: a hidden layer that reaches across the sheet would
     * otherwise decide the zoom for a drawing nobody can see. */
    for (k = 0; k < d->n_lines; k++) {
        if (!jwc_visible(d, d->lines[k].layer)) {
            continue;
        }
        SEE(d->lines[k].x0, d->lines[k].y0);
        SEE(d->lines[k].x1, d->lines[k].y1);
    }
    for (k = 0; k < d->n_arcs; k++) {
        if (!jwc_visible(d, d->arcs[k].layer)) {
            continue;
        }
        SEE(d->arcs[k].cx - d->arcs[k].r, d->arcs[k].cy - d->arcs[k].r);
        SEE(d->arcs[k].cx + d->arcs[k].r, d->arcs[k].cy + d->arcs[k].r);
    }
    for (k = 0; k < d->n_texts; k++) {
        if (!jwc_visible(d, d->texts[k].layer)) {
            continue;
        }
        SEE(d->texts[k].x0, d->texts[k].y0);
        SEE(d->texts[k].x1, d->texts[k].y1);
    }
    for (k = 0; k < d->n_points; k++) {
        if (!jwc_visible(d, d->points[k].layer)) {
            continue;
        }
        SEE(d->points[k].x, d->points[k].y);
    }
#undef SEE

    if (lo_x > hi_x) {
        lo_x = lo_y = 0.0f;
        hi_x = hi_y = 1.0f;
    }
    *x0 = lo_x; *y0 = lo_y; *x1 = hi_x; *y1 = hi_y;
}
