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
    /* Field 9 says the scale too, and it agrees in every drawing that ships,
     * but the original does not read it: changing it with tools/asktext.py
     * leaves the panel saying what it said before.  What it reads is the word
     * table in the memory image -- see scales() below. */
    d->denom = (f = field(line, 9)) ? (float)atof(f) : 1.0f;
    d->work_seconds = (f = field(line, 18)) ? strtol(f, NULL, 10) : 0;
    d->char_type = (f = field(line, 5)) ? (int)strtol(f, NULL, 10) : 1;
    if (d->char_type < 1 || d->char_type > 10) {
        d->char_type = 1;
    }
}

/* How many decimals the panel shows a length to.  It is not stored: it comes
 * off the scale.  Sweeping the scale in the running original -- thirteen of the
 * fourteen drawings keep it as a word at 0x705, and tools/askword.py changes it
 * -- gives three decimals up to 1/10, two from 1/20 to 1/100 and one from 1/150
 * up.  That is "start at three and take one off every time the scale goes past
 * ten", and the same sweep says an angle is always three: it is degrees, and the
 * scale has nothing to say about it. */
static void decimals(Jwc *d)
{
    float s;

    d->decimals = 3;
    for (s = d->denom; s > 10.0f; s /= 10.0f) {
        d->decimals--;
    }
    if (d->decimals < 0) {
        d->decimals = 0;
    }
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
    decimals(d);

    /* "%lp,%lp" -- the second one's offset is how long the string pool is. */
    memcpy(buf, file + TEXT_LINE * 3, TEXT_LINE - 1);
    buf[TEXT_LINE - 1] = '\0';
    if (sscanf(buf, "%4X:%4X,%4X:%4X", &s1, &o1, &s2, &o2) != 4) {
        return 0;
    }
    d->text_len = (long)o2;
    d->text_seg = s2;
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
    d->copy_x_mm = d->copy_y_mm = 1000.0;
    memset(d->group_on, 1, sizeof d->group_on);
    memset(d->layer_on, 1, sizeof d->layer_on);
    memset(d->group_edit, 1, sizeof d->group_edit);
    memset(d->layer_edit, 1, sizeof d->layer_edit);
    if (at >= 288) {
        memcpy(d->group_on, b + at - 288, sizeof d->group_on);
        memcpy(d->layer_on, b + at - 272, sizeof d->layer_on);
    }
    if (at >= 560) {
        memcpy(d->group_edit, b + at - 560, sizeof d->group_edit);
        memcpy(d->layer_edit, b + at - 544, sizeof d->layer_edit);
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
    d->cap_lines = d->n_lines + 1;
    d->cap_texts = d->n_texts + 1;
    d->cap_arcs = d->n_arcs + 1;

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

    d->raw = file;              /* kept: jwc_save writes most of it back */
    d->raw_len = len;
    return d;
}

void jwc_free(Jwc *d)
{
    if (d) {
        free(d->raw);
        free(d->lines);
        free(d->arcs);
        free(d->texts);
        free(d->points);
        free(d->text);
        free(d);
    }
}

/* Writing a drawing back.
 *
 * A .JWC is a memory image, so saving is mostly *copying*: in front of the
 * geometry sit 1,589 bytes (1,621 in SAMPLE2) of settings this port does not
 * model, and behind it 2,304 bytes of layer names, and the original keeps both
 * exactly as they were.  That was measured rather than assumed -- tools/save.sh
 * takes the original through its own save and leaves the file it wrote.  Saving
 * SAMPLE0 with nothing changed changes five things and nothing else:
 *
 *   1. the counts on the second line, if anything was drawn or erased;
 *   2. the far pointer on the fourth line, and the same segment repeated in
 *      every text record -- it is wherever the string pool happened to land in
 *      memory this run, and means nothing in a file;
 *   3. the third line, which is the settings of the moment (複線's interval,
 *      the character size) and not the drawing's;
 *   4. the character-size table at 0x6c3, for the same reason;
 *   5. a byte at offset 22 of the first line, which turns from '.' into 'f',
 *      and with it the sixteen layer-group scales at 0x705, which turn from
 *      sixteen words into sixteen floats and make the file 32 bytes longer.
 *
 * The port writes none of those five except the counts and the pool's length.
 * Number 5 is worth a note: it is an upgrade of the file's format, the one
 * SAMPLE2 already has, and the original does *not* always do it -- SAMPLE0,
 * SAMPLE1 and TEST1 come back upgraded, SAMPLE6 and TEST7 come back with the
 * words still words.  What decides it has not been read out of the original
 * yet, so the port does not guess: it writes the table back in the form it
 * found it, which every version reads.
 *
 * The one number the writer does change on its own is the drawing-area width,
 * the field after thirty commas on the second line.  jwc_load multiplies every
 * coordinate by 518/width on the way in, so what is in memory is always in
 * JW_CAD's own 518-pixel width -- and the original writes 518 there too, which
 * is how TEST7 (saved on an 800x600 screen, so 678) comes back from a save
 * saying 518 with every coordinate moved to match.
 */
static void wr_f32(unsigned char *p, float f)
{
    unsigned long v;

    memcpy(&v, &f, 4);
    p[0] = (unsigned char)(v & 0xff);
    p[1] = (unsigned char)((v >> 8) & 0xff);
    p[2] = (unsigned char)((v >> 16) & 0xff);
    p[3] = (unsigned char)((v >> 24) & 0xff);
}

static void wr_u16(unsigned char *p, unsigned v)
{
    p[0] = (unsigned char)(v & 0xff);
    p[1] = (unsigned char)((v >> 8) & 0xff);
}

static void wr_i32(unsigned char *p, long v)
{
    unsigned long u = (unsigned long)v;

    p[0] = (unsigned char)(u & 0xff);
    p[1] = (unsigned char)((u >> 8) & 0xff);
    p[2] = (unsigned char)((u >> 16) & 0xff);
    p[3] = (unsigned char)((u >> 24) & 0xff);
}

/* One of the four header lines: 199 bytes holding the text, a NUL and then
 * spaces, and a newline in the last byte. */
static void put_header(unsigned char *dst, const char *text)
{
    size_t n = strlen(text);

    if (n > TEXT_LINE - 2) {
        n = TEXT_LINE - 2;
    }
    memset(dst, ' ', TEXT_LINE - 1);
    memcpy(dst, text, n);
    dst[n] = '\0';
    dst[TEXT_LINE - 1] = '\n';
}

/* Append a comma and a piece of text, if there is room for it. */
static void add_field(char *out, size_t cap, const char *piece, size_t len)
{
    size_t n = strlen(out);

    if (n + len + 2 > cap) {
        return;
    }
    out[n] = ',';
    memcpy(out + n + 1, piece, len);
    out[n + 1 + len] = '\0';
}

/* Copy the fields of `src` from the one after `skip` commas to the end, and
 * put `width` in place of the one after thirty commas when `width` is not
 * NULL.  That is the drawing-area width, and it is the only field of the line
 * the port has anything of its own to say about. */
static void keep_fields(char *out, size_t cap, const char *src, int skip,
                        const char *width)
{
    const char *f = field(src, skip);
    int k = skip;

    for (; f; k++) {
        const char *end = strchr(f, ',');
        size_t len = end ? (size_t)(end - f) : strlen(f);

        if (width && k == 30) {
            add_field(out, cap, width, strlen(width));
        } else {
            add_field(out, cap, f, len);
        }
        f = end ? end + 1 : NULL;
    }
}

/* One of the four lines as it was read: 199 bytes with a NUL somewhere in
 * them, so it can be handed to the field routines as a string. */
static void read_header(char *out, const unsigned char *raw, int which)
{
    memcpy(out, raw + TEXT_LINE * which, TEXT_LINE - 1);
    out[TEXT_LINE - 1] = '\0';
}

unsigned char *jwc_bytes(const Jwc *d, long *out_len, const char **why)
{
    char src[TEXT_LINE], line[TEXT_LINE * 2];
    unsigned char *out;
    long span, tail_at, tail_len, len, p, k;

    *why = NULL;
    *out_len = 0;
    if (!d->raw || d->raw_len < DATA_AT || d->data_at <= 0) {
        *why = "nothing was read in";
        return NULL;
    }
    span = d->n_lines * LINE_SIZE + d->n_arcs * ARC_SIZE
         + (long)d->n_texts * TEXT_SIZE + d->text_len
         + (long)d->n_points * POINT_SIZE;
    tail_at = DATA_AT + d->data_end;
    tail_len = d->raw_len > tail_at ? d->raw_len - tail_at : 0;
    len = DATA_AT + d->data_at + span + tail_len;

    out = (unsigned char *)malloc((size_t)len);
    if (!out) {
        *why = "out of memory";
        return NULL;
    }
    /* the preamble, and the layer names behind the geometry, exactly as read */
    memcpy(out, d->raw, (size_t)(DATA_AT + d->data_at));
    if (tail_len) {
        memcpy(out + DATA_AT + d->data_at + span, d->raw + tail_at,
               (size_t)tail_len);
    }

    /* the counts, and the width the coordinates are now in */
    read_header(src, d->raw, 1);
    sprintf(line, "%ld,%ld,%d,%d", d->n_lines, d->n_arcs, d->n_texts,
            d->n_points);
    keep_fields(line, sizeof line, src, 4, "518");
    put_header(out + TEXT_LINE, line);

    /* the string pool's length, which is the offset half of the second of the
     * two far pointers */
    read_header(src, d->raw, 3);
    sprintf(line, "%04X:0000,%04X:%04lX", d->text_seg, d->text_seg,
            d->text_len & 0xffff);
    keep_fields(line, sizeof line, src, 2, NULL);
    put_header(out + TEXT_LINE * 3, line);

    p = DATA_AT + d->data_at;
    for (k = 0; k < d->n_lines; k++, p += LINE_SIZE) {
        unsigned char *r = out + p;

        wr_f32(r, d->lines[k].x0);
        wr_f32(r + 4, d->lines[k].y0);
        wr_f32(r + 8, d->lines[k].x1);
        wr_f32(r + 12, d->lines[k].y1);
        r[16] = d->lines[k].type;
        r[17] = d->lines[k].pen;
        r[18] = d->lines[k].layer;
        memcpy(r + 19, d->lines[k].rest + 1, 3);
    }
    for (k = 0; k < d->n_arcs; k++, p += ARC_SIZE) {
        unsigned char *r = out + p;

        wr_f32(r, d->arcs[k].cx);
        wr_f32(r + 4, d->arcs[k].cy);
        wr_f32(r + 8, d->arcs[k].r);
        wr_u16(r + 12, (unsigned)(unsigned short)d->arcs[k].flatten);
        wr_i32(r + 14, d->arcs[k].start);
        wr_i32(r + 18, d->arcs[k].end);
        wr_i32(r + 22, d->arcs[k].tilt);
        r[26] = d->arcs[k].type;
        r[27] = d->arcs[k].pen;
        r[28] = d->arcs[k].layer;
        memcpy(r + 29, d->arcs[k].rest + 1, 3);
    }
    for (k = 0; k < d->n_texts; k++, p += TEXT_SIZE) {
        unsigned char *r = out + p;
        long off = d->texts[k].text ? (long)(d->texts[k].text - d->text) : 0;

        wr_f32(r, d->texts[k].x0);
        wr_f32(r + 4, d->texts[k].y0);
        wr_f32(r + 8, d->texts[k].x1);
        wr_f32(r + 12, d->texts[k].y1);
        wr_u16(r + 16, (unsigned)(off & 0xffff));
        wr_u16(r + 18, d->text_seg);
        r[20] = d->texts[k].size;
        r[21] = d->texts[k].layer;
        memcpy(r + 22, d->texts[k].rest + 2, 2);
    }
    memcpy(out + p, d->text, (size_t)d->text_len);
    p += d->text_len;
    for (k = 0; k < d->n_points; k++, p += POINT_SIZE) {
        unsigned char *r = out + p;

        wr_f32(r, d->points[k].x);
        wr_f32(r + 4, d->points[k].y);
        r[8] = d->points[k].layer;
        memcpy(r + 9, d->points[k].rest + 1, 3);
    }

    *out_len = len;
    return out;
}

int jwc_save(const Jwc *d, const char *path, const char **why)
{
    long len = 0;
    unsigned char *out = jwc_bytes(d, &len, why);
    FILE *f;

    if (!out) {
        return 0;
    }
    f = fopen(path, "wb");
    if (!f) {
        free(out);
        *why = "cannot open for writing";
        return 0;
    }
    if ((long)fwrite(out, 1, (size_t)len, f) != len) {
        fclose(f);
        free(out);
        *why = "cannot write";
        return 0;
    }
    fclose(f);
    free(out);
    return 1;
}

int jwc_add_line(Jwc *d, float x0, float y0, float x1, float y1,
                 unsigned char type, unsigned char pen, unsigned char layer)
{
    JwcLine *l;
    /* The file is a memory image and the reader sizes the array to what it
     * holds, so anything drawn afterwards needs room made for it.  A block at a
     * time, because a line is twenty-two bytes and a drawing gets thousands. */
    static const long BLOCK = 256;

    if (d->n_lines >= d->cap_lines) {
        long want = d->cap_lines + BLOCK;
        JwcLine *grown = (JwcLine *)realloc(d->lines, (size_t)want * sizeof *grown);

        if (!grown) {
            return 0;
        }
        d->lines = grown;
        d->cap_lines = want;
    }
    l = &d->lines[d->n_lines];
    memset(l, 0, sizeof *l);
    l->x0 = x0;
    l->y0 = y0;
    l->x1 = x1;
    l->y1 = y1;
    l->type = type;
    l->pen = pen;
    l->layer = layer;
    /* The three bytes behind the layer.  A line the original draws has 03 00
     * 00 there, whatever the drawing, the layer and the pen: measured by
     * drawing two lines in SAMPLE0 and one in SAMPLE6 and having the original
     * save each (tools/save.sh with PRE=).  What the 3 means is not known --
     * the lines that ship carry 0x41, 0x18 and 0x4f there, and a second byte
     * of 0, 2 or 3 behind it -- so it is written back and not invented. */
    l->rest[1] = 3;
    d->n_lines++;
    return 1;
}

/* A copy of an entity, moved by (dx,dy).  複写 makes these, and the original's
 * own copy keeps every byte of the record but the coordinates -- so this does
 * too, rather than deciding what the trailing bytes ought to be. */
int jwc_dup_line(Jwc *d, long k, float dx, float dy)
{
    JwcLine *l;

    if (k < 0 || k >= d->n_lines) {
        return 0;
    }
    if (!jwc_add_line(d, 0, 0, 0, 0, 0, 0, 0)) {
        return 0;
    }
    l = &d->lines[d->n_lines - 1];
    *l = d->lines[k];
    l->x0 += dx;
    l->y0 += dy;
    l->x1 += dx;
    l->y1 += dy;
    return 1;
}

int jwc_split_line(Jwc *d, long k, float x, float y)
{
    JwcLine was;

    if (k < 0 || k >= d->n_lines) {
        return 0;
    }
    was = d->lines[k];
    if (!jwc_add_line(d, 0, 0, 0, 0, 0, 0, 0)) {
        return 0;
    }
    d->lines[d->n_lines - 1] = was;
    d->lines[d->n_lines - 1].x1 = x;
    d->lines[d->n_lines - 1].y1 = y;
    if (!jwc_add_line(d, 0, 0, 0, 0, 0, 0, 0)) {
        return 0;
    }
    d->lines[d->n_lines - 1] = was;
    d->lines[d->n_lines - 1].x0 = x;
    d->lines[d->n_lines - 1].y0 = y;
    jwc_remove_line(d, k);
    return 1;
}

int jwc_relink_line(Jwc *d, long k, float x0, float y0, float x1, float y1)
{
    JwcLine *l;

    if (k < 0 || k >= d->n_lines) {
        return 0;
    }
    if (!jwc_add_line(d, 0, 0, 0, 0, 0, 0, 0)) {
        return 0;
    }
    l = &d->lines[d->n_lines - 1];
    *l = d->lines[k];
    l->x0 = x0;
    l->y0 = y0;
    l->x1 = x1;
    l->y1 = y1;
    jwc_remove_line(d, k);
    return 1;
}

int jwc_dup_arc(Jwc *d, long k, float dx, float dy)
{
    JwcArc *a;

    if (k < 0 || k >= d->n_arcs) {
        return 0;
    }
    if (!jwc_add_arc(d, 0, 0, 1, 0, 0, 0)) {
        return 0;
    }
    a = &d->arcs[d->n_arcs - 1];
    *a = d->arcs[k];
    a->cx += dx;
    a->cy += dy;
    return 1;
}

int jwc_dup_text(Jwc *d, long k, float dx, float dy)
{
    const JwcText was = d->texts[k];
    JwcText *t;
    char *keep;

    if (k < 0 || k >= d->n_texts) {
        return 0;
    }
    /* Through jwc_add_text, so that the string goes into the pool the way the
     * original appends it; then the rest of the record is put back.
     *
     * The string is copied out first.  jwc_add_text **reallocs the pool**, and
     * `was.text` points into it: handing it the old pointer reads freed memory
     * the moment the pool moves.  It survived the first copy and lost the text
     * on the second (複写's ③連続), which is how it was found. */
    keep = (char *)malloc(strlen(was.text ? was.text : "") + 1);
    if (!keep) {
        return 0;
    }
    strcpy(keep, was.text ? was.text : "");
    if (!jwc_add_text(d, was.x0 + dx, was.y0 + dy, was.x1 + dx, was.y1 + dy,
                      keep, was.size, was.layer)) {
        free(keep);
        return 0;
    }
    free(keep);
    t = &d->texts[d->n_texts - 1];
    t->rest[2] = was.rest[2];
    t->rest[3] = was.rest[3];
    return 1;
}

void jwc_remove_line(Jwc *d, long k)
{
    if (k < 0 || k >= d->n_lines) {
        return;
    }
    memmove(d->lines + k, d->lines + k + 1,
            (size_t)(d->n_lines - k - 1) * sizeof *d->lines);
    d->n_lines--;
}

void jwc_remove_arc(Jwc *d, long k)
{
    if (k < 0 || k >= d->n_arcs) {
        return;
    }
    memmove(d->arcs + k, d->arcs + k + 1,
            (size_t)(d->n_arcs - k - 1) * sizeof *d->arcs);
    d->n_arcs--;
}

void jwc_remove_text(Jwc *d, long k)
{
    if (k < 0 || k >= d->n_texts) {
        return;
    }
    memmove(d->texts + k, d->texts + k + 1,
            (size_t)(d->n_texts - k - 1) * sizeof *d->texts);
    d->n_texts--;
}

/* Add a text, the way 文字 does.
 *
 * Two things grow: the array of records and **the string pool**, which is one
 * run of NUL-separated Shift-JIS with the records pointing into it by offset.
 * The original appends: writing `ABC` at (250,200) on SAMPLE0 puts the string
 * at offset 76, which is where the pool ended, and the fourth header line goes
 * from `60D1:004C` to `4612:0050` -- four bytes more, the three letters and
 * the NUL.  jwc_save writes whatever `text_len` says, so growing it here is
 * all the file needs.
 *
 * Every JwcText holds a **pointer** into the pool rather than an offset, so
 * moving the pool moves them: the offsets are taken first and put back after.
 */
int jwc_add_text(Jwc *d, float x0, float y0, float x1, float y1,
                 const char *str, unsigned char size, unsigned char layer)
{
    static const long BLOCK = 32;
    const long len = (long)strlen(str);
    long k, *off;
    char *pool;
    JwcText *t;

    if (d->n_texts >= d->cap_texts) {
        long want = d->cap_texts + BLOCK;
        JwcText *grown = (JwcText *)realloc(d->texts, (size_t)want * sizeof *grown);

        if (!grown) {
            return 0;
        }
        d->texts = grown;
        d->cap_texts = want;
    }
    off = (long *)malloc((size_t)(d->n_texts + 1) * sizeof *off);
    if (!off) {
        return 0;
    }
    for (k = 0; k < d->n_texts; k++) {
        off[k] = d->texts[k].text ? (long)(d->texts[k].text - d->text) : 0;
    }
    pool = (char *)realloc(d->text, (size_t)(d->text_len + len + 2));
    if (!pool) {
        free(off);
        return 0;
    }
    d->text = pool;
    for (k = 0; k < d->n_texts; k++) {
        d->texts[k].text = d->text + off[k];
    }
    free(off);

    memcpy(d->text + d->text_len, str, (size_t)len);
    d->text[d->text_len + len] = '\0';
    d->text[d->text_len + len + 1] = '\0';      /* jwc_load's spare byte */
    t = &d->texts[d->n_texts];
    memset(t, 0, sizeof *t);
    t->x0 = x0;
    t->y0 = y0;
    t->x1 = x1;
    t->y1 = y1;
    t->text = d->text + d->text_len;
    t->size = size;
    t->layer = layer;
    t->rest[0] = size;          /* the record keeps the size first, then the
                                 * layer -- see jwc.h */
    t->rest[1] = layer;
    d->text_len += len + 1;
    d->n_texts++;
    return 1;
}

/* How long a text's baseline is, in drawing units.
 *
 * It follows from the string and the character size, not from anything stored:
 * in millimetres of paper it is
 *
 *     (cells * (width + gap) - last * gap) / 20
 *
 * where `cells` is the string's width in half-width cells (a full-width
 * character is two) and `last` is 2 when the string ends in a full-width
 * character and 1 when it does not.  The gap belongs to the character before
 * it and is as wide as that character; only the last one's is left off.
 *
 * Measured against the original: all 106 of TEST7's texts come back from its
 * own save at exactly that length, and `ABC` written on SAMPLE0 at character
 * type 3 comes out 8.720535 where this gives 8.720539.  RESUME.md 4.16.
 */
double jwc_text_length(const Jwc *d, const char *str, unsigned char size)
{
    const unsigned char *p = (const unsigned char *)str;
    const int k = size <= 10 ? size : 0;
    long cells = 0, last = 1;

    if (!p) {
        return 0.0;
    }
    while (*p) {
        if (((p[0] >= 0x81 && p[0] <= 0x9f) || (p[0] >= 0xe0 && p[0] <= 0xef))
            && p[1]) {
            cells += 2;
            last = 2;
            p += 2;
        } else {
            cells += 1;
            last = 1;
            p += 1;
        }
    }
    return (cells * (double)(d->text_w[k] + d->text_gap[k])
            - last * (double)d->text_gap[k]) / 20.0 * d->unit_mm;
}

int jwc_add_arc(Jwc *d, float cx, float cy, float r,
                unsigned char type, unsigned char pen, unsigned char layer)
{
    return jwc_add_arc_at(d, cx, cy, r, 0, 0, type, pen, layer, 0x52);
}

int jwc_add_arc_at(Jwc *d, float cx, float cy, float r, long start, long end,
                   unsigned char type, unsigned char pen, unsigned char layer,
                   unsigned char mark)
{
    JwcArc *a;
    static const long BLOCK = 64;

    if (d->n_arcs >= d->cap_arcs) {
        long want = d->cap_arcs + BLOCK;
        JwcArc *grown = (JwcArc *)realloc(d->arcs, (size_t)want * sizeof *grown);

        if (!grown) {
            return 0;
        }
        d->arcs = grown;
        d->cap_arcs = want;
    }
    a = &d->arcs[d->n_arcs];
    memset(a, 0, sizeof *a);
    a->cx = cx;
    a->cy = cy;
    a->r = r;
    a->flatten = 10000;         /* a circle, not an ellipse */
    a->start = start;
    a->end = end;               /* start == end is the whole way round */
    a->tilt = 0;
    a->type = type;
    a->pen = pen;
    a->layer = layer;
    /* And an arc's three: 00 00 `mark`.  Four circles drawn with ○ in the
     * original -- two in SAMPLE0 and one in SAMPLE6, on different layers and
     * with different pens -- all come back from its own save with 0x52 in the
     * last byte, and an arc drawn with 「（」 with 0x12.  The arcs that ship
     * carry 0x3b and 0x52 there, so it is something the drawing already
     * distinguishes; it is written back, not invented. */
    a->rest[3] = mark;
    d->n_arcs++;
    return 1;
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
