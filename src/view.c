#include "view.h"

#include "draw.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include <string.h>

/* JW_TRACE=1 makes the drawing routines print what they are about to draw --
 * `flat` and `box` for the two text placeholders, `turn` and `up` for the two
 * ways a string is drawn.  The original's own calls come out of the emulator
 * with DOSEMU_BP, so the two lists can be set side by side; tools/qbox.py does
 * exactly that for the boxes.  It is not a debugging leftover: a one-pixel
 * disagreement in a four-pixel glyph cannot be read off the screen, only off
 * the two lists. */

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
static void clip_far(const JwView *w, double x0, double y0,
                     double *x1, double *y1)
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
        *x1 = x0 + dx * t;
        *y1 = y0 + dy * t;
        /* Clamped as well as cut: truncating the parameter's own rounding can
         * land the pixel one past the edge, and in the browser's zoomed view
         * that shows up as a dot outside the window. */
        if (*x1 < w->x0) *x1 = w->x0;
        if (*x1 > w->x1) *x1 = w->x1;
        if (*y1 < w->y0) *y1 = w->y0;
        if (*y1 > w->y1) *y1 = w->y1;
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

void jw_view_fit_in(JwView *w, const Jwc *d, int x0, int y0, int x1, int y1)
{
    float dx0, dy0, dx1, dy1, sx, sy, wide, tall;

    jwc_extent(d, &dx0, &dy0, &dx1, &dy1);
    wide = dx1 - dx0 > 0.0f ? dx1 - dx0 : 1.0f;
    tall = dy1 - dy0 > 0.0f ? dy1 - dy0 : 1.0f;
    sx = (float)(x1 - x0) / wide;
    sy = (float)(y1 - y0) / tall;
    w->scale = sx < sy ? sx : sy;
    w->ox = dx0;
    w->oy = dy0;
    /* centred in the window, with the drawing's own origin at the left edge */
    w->ax = (float)x0 + ((float)(x1 - x0) - wide * w->scale) / 2.0f;
    w->ay = (float)y1 - ((float)(y1 - y0) - tall * w->scale) / 2.0f;
    w->x0 = x0;
    w->y0 = y0;
    w->x1 = x1;
    w->y1 = y1;
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
    w->group1 = 0;              /* every group */
    w->frame_box = 0;
    w->layer1 = 0;
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

const Fontx *jw_view_ank(void)
{
    return &ank;
}

const Fontx *jw_view_kanji(void)
{
    return &kanji;
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
                                        double cellw, double h, double y0,
                                        int *dw, int *dh)
{
    static unsigned char out[128 * 128 / 8];
    const int sstride = (sw + 7) / 8;
    const double top = floor(y0);
    int dstride, x, y;

    *dw = (int)((sw - 1) * cellw / sw) + 1;
    *dh = (int)(floor(y0 + 15.0 * h / 16.0) - top) + 1;
    if (*dw < 1 || *dh < 1 || *dw > 128 || *dh > 128) {
        return NULL;
    }
    dstride = (*dw + 7) / 8;
    memset(out, 0, (size_t)(dstride * *dh));
    for (y = 0; y < 16; y++) {
        /* A source dot covers a *range* of destination dots.  Shrinking, the
         * range is the one dot the rule above names -- which is what the
         * original does and what the screen comparison checks.  Growing, it is
         * the whole block the dot has become; without that a magnified glyph
         * comes out as a scatter of single pixels, which is what the browser
         * front end showed when zoomed in. */
        const int dy = (int)(floor(y0 + y * h / 16.0) - top);
        int dy1 = (int)(floor(y0 + (y + 1) * h / 16.0) - top);
        int yy;

        if (dy1 <= dy) {
            dy1 = dy + 1;
        }
        if (dy1 > *dh) {
            dy1 = *dh;
        }
        if (dy >= *dh) {
            continue;
        }
        for (x = 0; x < sw; x++) {
            const int dx = (int)(x * cellw / sw);
            int dx1 = (int)((x + 1) * cellw / sw);
            int xx;

            if (dx1 <= dx) {
                dx1 = dx + 1;
            }
            if (dx1 > *dw) {
                dx1 = *dw;
            }
            if (dx >= *dw ||
                !(g[y * sstride + (x >> 3)] & (0x80 >> (x & 7)))) {
                continue;
            }
            for (yy = dy < 0 ? 0 : dy; yy < dy1; yy++) {
                for (xx = dx; xx < dx1; xx++) {
                    out[yy * dstride + (xx >> 3)] |=
                        (unsigned char)(0x80 >> (xx & 7));
                }
            }
        }
    }
    return out;
}

/* 1def:23c5 -- walk a Shift-JIS string, one glyph at a time.  The original
 * works on a character grid; here the baseline the .JWC record carries sets
 * the position and the size, so the glyphs follow the text's own box. */
/* The ten character sizes -- width, height and the gap after -- live in
 * Jwc.text_w / text_h / text_gap, because **they belong to the drawing**: the
 * running original has them at DGROUP 0x182, 0x198 and 0x1ae, and it fills
 * those from the file (see jwc.c).  Every drawing here but TEST2 happens to
 * carry the same numbers, which is why a built-in table looked right for a
 * long time.

 */
unsigned jw_view_pen_colour(unsigned pen)
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
 * type-3 in 7, SAMPLE1 and SAMPLE2 all type-3 and all white.
 *
 * The pens are the drawing's, not JW_CAD's: the file carries its own copy of
 * MPEN alongside the sizes (jwc.c).  TEST2's is `1 1 2 2 2 3 3 3 3 3`, so its
 * type-10 headings are pen 3 and green, where the same records under the
 * built-in table come out pen 5 and cyan -- 2,258 pixels in the right place
 * and the wrong colour.
 *
 * (Type 0 means "the size currently selected".) */
unsigned jw_view_text_colour(const Jwc *d, unsigned size)
{
    return jw_view_pen_colour((unsigned)d->text_pen[size <= 10 ? size : 0]);
}

/* Below this many pixels the original does not draw the glyphs at all -- it
 * draws the box they would have filled.  The threshold is a word at DGROUP
 * 0x1c6, and it is 6. */
#define TEXT_GLYPH_MIN 6

/* Half-width to full-width, 0x20 to 0x7e.
 *
 * The original draws a one-byte character in a drawing from its **full-width**
 * glyph, squeezed into half a cell.  It is not a guess: TEST7's heading starts
 * "2.5D", and reading the original's own line calls for the D gives
 *
 *     ###..  .###.  .#.#.  .#.##  .#..#  .#.##  .#.#.  .###.  ###..
 *
 * which no shrink of the 8x16 D can produce -- a search over every monotone map
 * from eight columns to five finds nothing -- while the 16x16 full-width D
 * reproduces it exactly, row for row. */
static const unsigned short WIDE[95] = {
    0x8140, 0x8149, 0x8168, 0x8194, 0x8190, 0x8193, 0x8195, 0x8166,
    0x8169, 0x816A, 0x8196, 0x817B, 0x8143, 0x817C, 0x8144, 0x815E,
    0x824F, 0x8250, 0x8251, 0x8252, 0x8253, 0x8254, 0x8255, 0x8256,
    0x8257, 0x8258, 0x8146, 0x8147, 0x8183, 0x8181, 0x8184, 0x8148,
    0x8197, 0x8260, 0x8261, 0x8262, 0x8263, 0x8264, 0x8265, 0x8266,
    0x8267, 0x8268, 0x8269, 0x826A, 0x826B, 0x826C, 0x826D, 0x826E,
    0x826F, 0x8270, 0x8271, 0x8272, 0x8273, 0x8274, 0x8275, 0x8276,
    0x8277, 0x8278, 0x8279, 0x816D, 0x815F, 0x816E, 0x814F, 0x8151,
    0x814D, 0x8281, 0x8282, 0x8283, 0x8284, 0x8285, 0x8286, 0x8287,
    0x8288, 0x8289, 0x828A, 0x828B, 0x828C, 0x828D, 0x828E, 0x828F,
    0x8290, 0x8291, 0x8292, 0x8293, 0x8294, 0x8295, 0x8296, 0x8297,
    0x8298, 0x8299, 0x829A, 0x816F, 0x8162, 0x8170, 0x8160,
};

/* And the half-width katakana, 0xa1 to 0xdf, which go the same way.  TEST7's
 * note starts with a half-width bracket: the original draws it from the kanji
 * font's full-width one -- the ANK glyph has its stem in column 2 and the
 * full-width one in column 8, and after the shrink to four pixels those are
 * different dots.  The cell stays half a cell wide; it is the glyph that is
 * full width. */
static const unsigned short KANA[0xdf - 0xa1 + 1] = {
    0x8142, 0x8175, 0x8176, 0x8141, 0x8145, 0x8392, 0x8340, 0x8342,
    0x8344, 0x8346, 0x8348, 0x8383, 0x8385, 0x8387, 0x8362, 0x815B,
    0x8341, 0x8343, 0x8345, 0x8347, 0x8349, 0x834A, 0x834C, 0x834E,
    0x8350, 0x8352, 0x8354, 0x8356, 0x8358, 0x835A, 0x835C, 0x835E,
    0x8360, 0x8363, 0x8365, 0x8367, 0x8369, 0x836A, 0x836B, 0x836C,
    0x836D, 0x836E, 0x8371, 0x8374, 0x8377, 0x837A, 0x837D, 0x837E,
    0x8380, 0x8381, 0x8382, 0x8384, 0x8386, 0x8388, 0x8389, 0x838A,
    0x838B, 0x838C, 0x838D, 0x838F, 0x8393, 0x814A, 0x814B,
};

/* How tall the string is on screen, in pixels, and how far one half-width cell
 * carries the pen.
 *
 * Both come from the paper, not from the record's own box: the size table is in
 * millimetres, and `unit` is how many drawing units a millimetre of paper is
 * (JW_CAD's 518-pixel drawing area over the paper's width -- the same number
 * the dot grid uses).  The box was the first guess, and it is *close*: TEST6's
 * heading measures 9.559 units a character where the paper says 9.593.  Reading
 * the original's own line calls settles it -- of the 116 cells it draws in
 * TEST6 the paper's step puts 92 in the right place and the box's step 81, and
 * in TEST7, where every coordinate has been multiplied by 518/678, it is 72
 * against 42.  Neither ever puts a *wrong* bitmap down; the box's step just
 * drifts a pixel along a long string. */
static double text_height(const Jwc *d, const JwcText *t, double unit)
{
    return d->text_h[t->size <= 10 ? t->size : 0] / 10.0 * unit;
}

static double text_step(const Jwc *d, const JwcText *t, double unit)
{
    const int size = t->size <= 10 ? t->size : 0;

    return (d->text_w[size] + d->text_gap[size]) / 10.0 * unit / 2.0;
}

/* The box the original draws in place of a string too small to read.
 *
 * Read out of its own line calls, for SAMPLE3's first string -- the record puts
 * its baseline at 316 and asks for a 3.083-pixel character:
 *
 *     (309,316)-(318,316)  (318,316)-(318,313)  (318,313)-(309,313)
 *     (309,313)-(309,316)  (309,315)-(318,315)
 *
 * so the rectangle stands *on* the baseline and is `floor(height)` tall, and
 * the fifth line is one row above it.  (The old reading had the rectangle a row
 * higher and a row taller, and the fifth line on the baseline itself.) */
/* One side of the box, cut to the window rather than dropped.
 *
 * FUN_1def_17bb takes a flag that says whether it is being handed a point or a
 * line.  With it set it tests that one point against the four floats at DGROUP
 * 0xb5aa/0xb5b2/0xb60e/0xb612 and returns if it falls outside -- that is the
 * rule `inside` keeps.  With it **clear** it is a line, and then the function
 * goes the other way: both ends inside hands the whole line straight to
 * FUN_1def_0000, both ends outside on the same side returns, and anything
 * between is cut against those same four floats before it draws.
 *
 * The box around an unreadably small string is five such lines.  Measured on
 * SAMPLE0 with 複写 ⑤反転: the mirrored `Ｈ７－Ａ００１` starts at x=-11.084,
 * which is screen column 109, and the original draws the box's horizontal
 * sides from column 122 -- the window's own edge -- while dropping the
 * vertical one at 109 altogether.  Dropping the whole box lost 75 pixels.
 *
 * draw_text_box_turned still drops: no drawing measured so far puts a turned
 * box across the edge, so there is nothing to read the answer off. */
static void box_line(VGA *v, const JwView *w, int x0, int y0, int x1, int y1,
                     unsigned colour)
{
    double fx0 = x0, fy0 = y0, fx1 = x1, fy1 = y1;

    if (!inside(w, x0, y0)) {
        if (!inside(w, x1, y1)) {
            return;
        }
        clip_far(w, fx1, fy1, &fx0, &fy0);
    } else {
        clip_far(w, fx0, fy0, &fx1, &fy1);
    }
    jw_line(v, (int)fx0, (int)fy0, (int)fx1, (int)fy1, colour, ROP_REPLACE,
            JW_STYLE_SOLID);
}

static void draw_text_box(VGA *v, const JwView *w, int x0, int x1, int base,
                          int h, unsigned colour)
{
    const int top = base - h;

    if (getenv("JW_TRACE")) {
        printf("flat %d..%d base=%d h=%d%c", x0, x1, base, h, 10);
    }
    box_line(v, w, x0, base, x1, base, colour);
    box_line(v, w, x1, base, x1, top, colour);
    box_line(v, w, x1, top, x0, top, colour);
    box_line(v, w, x0, top, x0, base, colour);
    /* The fifth line is the row above the baseline -- except for a box with no
     * height at all, which has no row above to use: there the original puts it
     * beside the baseline instead, one pixel along.  TEST6 has four of those
     * (strings whose height truncates to nothing) and draws them three pixels
     * wide in a single row. */
    if (h == 0) {
        box_line(v, w, x0 + 1, base, x1 + 1, base, colour);
    } else {
        box_line(v, w, x0, base - 1, x1, base - 1, colour);
    }
}

/* A string whose baseline is not horizontal.
 *
 * **The original draws those a pixel at a time**, not as rows of patterned
 * lines: watching which instruction writes one of TEST2's vertical labels
 * (dosv_emu_cpp, `DOSEMU_WATCH`) lands in 20a9:075c, the pixel routine, and
 * `DOSEMU_BP=11B9:075C DOSEMU_BPN=8` prints the x, y and colour of every dot.
 * An upright string never goes there.
 *
 * With `u` the unit vector along the baseline and `n = (u.y, -u.x)` the one
 * that points from the baseline into the cell, the dot for the glyph's pixel
 * (sx, sy) is
 *
 *     P = O + (walk + sx*g*cw/(2*sw)) * u + ((15 - sy) * g/16) * n
 *
 * truncated in each coordinate.  Three things in that are the original's and
 * not the obvious choice:
 *
 *   * the glyph is squeezed into **`floor(height)`** pixels, not `height`.
 *     With the float height TEST2's label is one pixel out in two places and
 *     TEST1's, which is 8.72 tall, is wrong all over; with the whole number
 *     both are exact.  `g` below is that whole number
 *   * the glyph's *last* row sits on the baseline (hence the 15), where the
 *     upright routine leaves a row's gap
 *   * the walk between characters is the plain paper step, not rounded and
 *     not anything the record's box says
 *
 * Read off TEST2's `5mライン` (127 dots) and TEST1's `パラペットのカット部分`
 * (204): every dot of both. */
static void draw_text_turned(VGA *v, const JwcText *t, const JwView *w,
                             const unsigned char *p, double height, double step,
                             double ux, double uy, unsigned colour)
{
    const double nx = uy, ny = -ux;
    /* The pen starts at a whole pixel: the x truncated and the y rounded *up*,
     * which is the same pair the upright routine and the box use.  It shows
     * only when the record is off a whole pixel -- TEST1's `GL`, whose baseline
     * starts at (264.709, 429.783), is exact from (264, 430) and a pixel out
     * from the floats. */
    const double ox = floor(((double)t->x0 - w->ox) * w->scale + w->ax);
    const double oy = ceil(w->ay - ((double)t->y0 - w->oy) * w->scale);
    double walk = 0.0;
    int i = 0;

    if (getenv("JW_TRACE")) {
        printf("turn (%10.5f,%10.5f) u=(%.9f,%.9f) h=%.6f step=%.6f %s",
               ox, oy, ux, uy, height, step, (const char *)p);
        printf("\n");
    }

    while (p[i]) {
        const unsigned char *g = NULL;
        int cw, sw = 16, sx, sy;

        if (is_lead(p[i]) && p[i + 1]) {
            g = fontx_glyph(&kanji, (unsigned)(p[i] << 8) | p[i + 1]);
            cw = 2;
            i += 2;
        } else {
            cw = 1;
            if (p[i] >= 0x20 && p[i] <= 0x7e) {
                g = fontx_glyph(&kanji, WIDE[p[i] - 0x20]);
            } else if (p[i] >= 0xa1 && p[i] <= 0xdf) {
                g = fontx_glyph(&kanji, KANA[p[i] - 0xa1]);
            }
            if (!g) {
                g = fontx_glyph(&ank, p[i]);
                sw = 8;
            }
            i += 1;
        }
        if (g) {
            const double gh = floor(height);
            const double cellw = gh * cw / 2.0;
            const int sstride = (sw + 7) / 8;

            for (sy = 0; sy < 16; sy++) {
                const double up = (15.0 - sy) * gh / 16.0;

                for (sx = 0; sx < sw; sx++) {
                    const double along = walk + sx * cellw / sw;
                    double px, py;
                    int ix, iy;

                    if (!(g[sy * sstride + (sx >> 3)] & (0x80 >> (sx & 7)))) {
                        continue;
                    }
                    px = ox + along * ux + up * nx;
                    py = oy + along * uy + up * ny;
                    ix = (int)floor(px);
                    iy = (int)floor(py);
                    if (ix >= w->x0 && ix <= w->x1 && iy >= w->y0 && iy <= w->y1) {
                        jw_point(v, ix, iy, colour, ROP_REPLACE);
                    }
                }
            }
        }
        walk += step * cw;
    }
}

/* The same box, for a string whose baseline is not horizontal.
 *
 * Read off two of TEST3's, one straight up and one at forty-five degrees
 * (tools/askone.sh, then tools/lr.py).  For the 45-degree one, whose record
 * runs from (331.832, 352.397) to (336.457, 347.773) on screen, the original
 * draws
 *
 *     (331,353)-(336,348)  (336,348)-(334,346)  (334,346)-(329,351)
 *     (329,351)-(331,353)  (332,353)-(337,348)
 *
 * so the two ends are `floor(x)` and `ceil(y)` -- the same rounding the upright
 * routine uses -- the far side is `floor(end + (int)height * n)` in each
 * coordinate, and the fifth line is the baseline again, one pixel across its
 * own major axis: `+1` in x when the baseline is the more vertical of the two
 * and `-1` in y when it is the more horizontal.  Seven boxes measured, at
 * 90, 45, 39, -64, -19 and two more degrees, and they all say that -- and so
 * does the upright box, whose fifth line is the row above the baseline. */
static void draw_text_box_turned(VGA *v, const JwView *w, double x0, double y0,
                                 double x1, double y1, double ux, double uy,
                                 double rdx, double rdy, int h, unsigned colour)
{
    const double nx = uy, ny = -ux;
    const int ax = (int)floor(x0), ay = (int)ceil(y0);
    const int bx = (int)floor(x1), by = (int)ceil(y1);
    const int cx = (int)floor(bx + h * nx), cy = (int)floor(by + h * ny);
    const int dx = (int)floor(ax + h * nx), dy = (int)floor(ay + h * ny);

    if (getenv("JW_TRACE")) {
        printf("box (%12.6f,%12.6f)-(%12.6f,%12.6f) u=(%.9f,%.9f) h=%d"
               "  %d,%d %d,%d %d,%d %d,%d\n",
               x0, y0, x1, y1, ux, uy, h, ax, ay, bx, by, cx, cy, dx, dy);
    }
    if (!inside(w, ax, ay) || !inside(w, bx, by) ||
        !inside(w, cx, cy) || !inside(w, dx, dy)) {
        return;
    }
    jw_line(v, ax, ay, bx, by, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, bx, by, cx, cy, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, cx, cy, dx, dy, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, dx, dy, ax, ay, colour, ROP_REPLACE, JW_STYLE_SOLID);
    {
        /* Which way the extra line goes is the original's own comparison, at
         * 18B3:1A2C: it keeps the box's depth as a pair of 16.16 numbers, and
         * takes the column beside the baseline when the pair's x is at least
         * its y, the row above it otherwise.
         *
         *     ox = h * (long)(sin(angle) * 65536)
         *     oy = h * (long)(cos(angle) * 65536)
         *
         * with the angle the record's own, and the cast truncating towards
         * zero before the height multiplies it.  Reading the pair out of the
         * original (`DOSEMU_BP=19C3:1A54 DOSEMU_BPPTR=bp DOSEMU_BPPTRAT=-196`)
         * for all 41 of TEST3's boxes and working the same two numbers out
         * here reproduces every one of them, and that is what settles the
         * boxes at forty-five degrees, where the two come out *equal* and the
         * unit vector's own last bits do not.  A box with no height at all
         * gives 0 and 0, which is why TEST6's headings go across too. */
        const double th = atan2(rdy, rdx);
        const long ox = (long)h * (long)(sin(th) * 65536.0);
        const long oy = (long)h * (long)(cos(th) * 65536.0);
        const int across = (oy < 0 ? -oy : oy) <= (ox < 0 ? -ox : ox);
        const int ex = across ? 1 : 0;
        const int ey = across ? 0 : -1;

        if (inside(w, ax + ex, ay + ey) && inside(w, bx + ex, by + ey)) {
            jw_line(v, ax + ex, ay + ey, bx + ex, by + ey,
                    colour, ROP_REPLACE, JW_STYLE_SOLID);
        }
    }
}

/* One arc.  The colour is the caller's: jw_view_draw hands it the record's own
 * pen, and 消去 hands it colour 2 to paint what it has picked. */
void jw_view_arc(VGA *v, const Jwc *d, const JwcArc *a, const JwView *w,
                 unsigned colour)
{
    /* The original's arc routine works in screen coordinates, with the centre
     * and the radius still floats and the two angles the record's own 16.16
     * degrees.  Pass them through untouched. */
    const double cx = (a->cx - w->ox) * w->scale + w->ax;
    const double cy = w->ay - (a->cy - w->oy) * w->scale;
    const double r = a->r * w->scale;
    const int rx = (int)r;

    (void)d;
    /* Which of the two the original picks (1def:0228, the tests at 0def:03e0):
     * the pixel routine only for a true circle under ten pixels across whose
     * box lies wholly inside the drawing area -- it does no clipping -- and the
     * chain of straight pieces for all the rest, including every ellipse
     * however small. */
    if (a->flatten == 10000 && rx < 10
        && cx - r >= v->clip_x0 && cx + r <= v->clip_x1
        && cy - r >= v->clip_y0 && cy + r <= v->clip_y1) {
        /* The pixel routine is not given a tilt: the original folds it into the
         * two angles on the way in (`start + tilt`, `end + tilt` at 0def:0389)
         * and hands over a plain circle.  The angles stay the drawing's own --
         * anticlockwise from the x axis -- because the boxes jw_arc builds from
         * them turn them into screen coordinates itself. */
        const double ts = (a->start + a->tilt) / 65536.0;
        const double te = (a->end + a->tilt) / 65536.0;

        jw_arc(v, cx, cy, r, ts, te, colour, ROP_REPLACE,
               jw_view_line_style(a->type));
    } else {
        jw_arc_poly(v, cx, cy, r, a->flatten, a->start, a->end, a->tilt,
                    colour, ROP_REPLACE, jw_view_line_style(a->type));
    }
}

static void draw_text(VGA *v, const Jwc *d, const JwcText *t, const JwView *w,
                      double unit, unsigned colour)
{
    const unsigned char *p = (const unsigned char *)t->text;
    double dx = t->x1 - t->x0, dy = t->y1 - t->y0;
    double len = dx * dx + dy * dy;
    int n = 0, cells = 0;
    int y, turned;
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
    /* A string that runs right to left is turned too, even though its baseline
     * is horizontal: TEST4's `10.244` at 180 degrees has its box *below* the
     * baseline, which is where the turned routine puts it and the upright one
     * cannot.  Five of the fourteen drawings have such strings. */
    turned = dy != 0.0 || dx < 0.0;

    /* The baseline is rounded *up*, where a line's endpoint is truncated.  It
     * matters only when the baseline lands off a whole pixel, which among the
     * samples happens for TEST7 alone -- its coordinates are all multiplied by
     * 518/678 on the way in.  Its eleven strings that can be matched against
     * the original's own line calls settle it: five of them sit a row below
     * where rounding puts them and all eleven where the ceiling does.  The
     * other drawings have whole-number baselines and do not care. */
    y = (int)ceil((double)(w->ay - (t->y0 - w->oy) * w->scale));

    height = text_height(d, t, unit);
    if ((int)height < TEXT_GLYPH_MIN) {
        if (turned) {
            /* The length rounded to a float, which is where the original keeps
             * it.  TEST7's `14.0` runs from x 327.00386 to 327.00403 -- a
             * sixth of a thousandth of a pixel of slope -- and in double that
             * is enough to make the unit vector 0.9999999997 instead of 1, and
             * the far side of the box lands on 329 instead of 330.  A float
             * cannot hold the difference and neither could the original. */
            const double m = (float)sqrt(len);

            draw_text_box_turned(v, w,
                                 ((double)t->x0 - w->ox) * w->scale + w->ax,
                                 w->ay - ((double)t->y0 - w->oy) * w->scale,
                                 ((double)t->x1 - w->ox) * w->scale + w->ax,
                                 w->ay - ((double)t->y1 - w->oy) * w->scale,
                                 dx / m, -dy / m, dx, dy,
                                 (int)height, colour);
        } else {
            draw_text_box(v, w, to_x(w, t->x0), to_x(w, t->x1), y, (int)height,
                          colour);
        }
        return;
    }
    /* Anything but a left-to-right baseline goes to the routine above, which is
     * a different one in the original too. */
    if (turned) {
        const double n = (float)sqrt(len);

        draw_text_turned(v, t, w, p, height, text_step(d, t, unit),
                         dx / n, -dy / n, colour);
        return;
    }
    /* The original draws text upright on a 16x16 grid; the baseline gives the
     * left edge and the run, so step along it a cell at a time. */
    {
        /* Where the pen starts, and how far along the string it has walked.
         *
         * The two are kept apart because that is what the original's own line
         * calls say: the start is *truncated* and then a pixel is added, and
         * the walk is truncated on top of that.  Fitting the origin against
         * those calls gives 254.5, 378.5, 150.5 and 477.5 for the four strings
         * long enough to fit -- every one a half exactly, against record
         * coordinates of 254.0000, 378.7037, 150.0324 and 477.6236.  With it,
         * all 26 cells of TEST6's longest heading, all 12 of its shorter one
         * and all 18 of TEST7's land where the original puts them. */
        const double step = text_step(d, t, unit);
        const double x0 = floor((t->x0 - w->ox) * w->scale + w->ax) + 1.0;
        double walk = 0.0;
        int i = 0;

        while (p[i]) {
            const unsigned char *g = NULL;
            unsigned code;
            int cw, sw = 16;

            if (is_lead(p[i]) && p[i + 1]) {
                code = (unsigned)(p[i] << 8) | p[i + 1];
                g = fontx_glyph(&kanji, code);
                cw = 2;
                i += 2;
            } else {
                cw = 1;
                if (p[i] >= 0x20 && p[i] <= 0x7e) {
                    g = fontx_glyph(&kanji, WIDE[p[i] - 0x20]);
                } else if (p[i] >= 0xa1 && p[i] <= 0xdf) {
                    g = fontx_glyph(&kanji, KANA[p[i] - 0xa1]);
                }
                if (!g) {
                    g = fontx_glyph(&ank, p[i]);
                    sw = 8;
                }
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
                const unsigned char *sg = scale_glyph(g, sw, height * cw / 2.0,
                                                      height, top, &dw, &dh);

                const int gx = (int)(x0 + floor(walk));
                const int gy = (int)floor(top);

                /* Outside the view's window there is nothing to draw.  The
                 * browser's window is the whole screen, so this only bites at
                 * the edges; the original's is the drawing area. */
                if (getenv("JW_TRACE")) {
                    printf("up %d,%d %dx%d  x0=%.4f walk=%.4f h=%.6f top=%.4f"
                           " step=%.4f sw=%d ch=%02x%c", gx, gy, dw, dh, x0,
                           walk, height, top, step, sw,
                           sw == 8 ? p[i - 1] : code, 10);
                }
                if (sg && gx <= w->x1 && gx + dw > w->x0 &&
                    gy <= w->y1 && gy + dh > w->y0) {
                    jw_glyph(v, gx, gy, dw, dh, sg, colour, colour);
                }
            }
            walk += step * cw;
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
int jw_view_line_style(unsigned type)
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
    double lo, hi, gy;
    long i, j, i0, i1, j0, j1;

    /* No 目盛 in グループ データ表示's panels: SAMPLE1's grid is 15.697
     * units, which comes out as dotted rows three pixels apart all over the
     * panel, and the original's is bare. */
    if (w->group1 || w->layer1) {
        return;
    }
    if (!d->grid_on || d->grid_x <= 0.0 || d->grid_y <= 0.0 ||
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
    /* The positions are **added up**, not multiplied out.  `33 * 15.6969697` is
     * 518.0 to the last bit and `15.6969697` added thirty-three times is
     * 517.99988, so SAMPLE1's last column is 639.0 one way and 638.99988 the
     * other -- and the original draws it at 638, one dot on each of the grid's
     * twenty-eight rows.  Every other column and row is the same either way. */
    gy = 0.0;
    for (i = 0; i < (j0 < 0 ? -j0 : j0); i++) {
        gy += d->grid_y;
    }
    if (j0 < 0) {
        gy = -gy;
    }
    for (j = j0; j <= j1; j++, gy += d->grid_y) {
        const int y = (int)(w->ay - (gy - w->oy) * w->scale);
        double gx;

        if (y < w->y0 || y > w->y1) {
            continue;
        }
        gx = 0.0;
        for (i = 0; i < (i0 < 0 ? -i0 : i0); i++) {
            gx += d->grid_x;
        }
        if (i0 < 0) {
            gx = -gx;
        }
        for (i = i0; i <= i1; i++, gx += d->grid_x) {
            const int x = (int)((gx - w->ox) * w->scale + w->ax);

            if (x >= w->x0 && x <= w->x1) {
                jw_point(v, x, y, 7, ROP_REPLACE);
            }
        }
    }
}

/* Is this entity drawn in this view?
 *
 * The main view asks the drawing: the layer has to be on and so does its
 * group.  グループ データ表示's little panels ask something else -- they
 * are **one group each, everything in it**, whether it is switched on or
 * not.  Measured: SAMPLE0's layer 1 is hidden and its pen 1 lines are all
 * over the original's first panel. */
static int visible_in(const Jwc *d, const JwView *w, unsigned char layer)
{
    if (w->layer1) {
        return layer == w->layer1 - 1;
    }
    if (w->group1) {
        return (layer >> 4) == w->group1 - 1;
    }
    return jwc_visible(d, layer);
}

/* One line, clipped and styled the way jw_view_draw does it.  複写 puts
 * its copies back with this after the chrome has been drawn. */
void jw_view_line(VGA *v, const Jwc *d, const JwcLine *l, const JwView *w,
                  unsigned colour)
{

        /* Cut to the window in floats and turn into pixels afterwards.  The
     * original hands its line routine the whole line as it stands and lets
     * that clip; a long line cut at truncated endpoints comes out along a
     * slightly different slope, and TEST7's longest dashed one lands a
     * pixel to the left for its whole length -- 207 of the drawing's 281
     * differing line pixels. */
    double fx0 = (l->x0 - w->ox) * w->scale + w->ax;
    double fy0 = w->ay - (l->y0 - w->oy) * w->scale;
    double fx1 = (l->x1 - w->ox) * w->scale + w->ax;
    double fy1 = w->ay - (l->y1 - w->oy) * w->scale;

    if (!visible_in(d, w, l->layer)) {
        return;
    }
    /* A line the record marks with bit 0x10 of its fourth trailing byte is
     * **one dot**, at the truncated start, however long the two ends say it
     * is.  Measured: the same geometry drawn twice, once with the bit and
     * once without, comes out as one pixel and as eleven.  No other bit of
     * those three bytes changes anything.
     *
     * Every line carrying it is under 1.36 pixels long -- 3,294 of TEST7's
     * 4,083 and 404 of SAMPLE2's -- so it is the drawing saying "this one
     * is shorter than a dot".  Without it the port puts down two pixels
     * wherever the two ends happen to truncate to different ones. */
    if (l->rest[2] & 0x10) {
        const int px = (int)fx0, py = (int)fy0;

        if (inside(w, px, py)) {
        jw_point(v, px, py, jw_view_pen_colour(l->pen), ROP_REPLACE);
        }
        return;
    }
    if (!inside(w, (int)fx0, (int)fy0)) {
        if (!inside(w, (int)fx1, (int)fy1)) {
        return;
        }
        clip_far(w, fx1, fy1, &fx0, &fy0);
    } else {
        clip_far(w, fx0, fy0, &fx1, &fy1);
    }
    jw_line(v, (int)fx0, (int)fy0, (int)fx1, (int)fy1,
        jw_view_pen_colour(l->pen), ROP_REPLACE, jw_view_line_style(l->type));
    }

/* A line in drawing coordinates, cut to the window, in whatever colour and
 * style the caller wants.
 *
 * `jw_line` does not clip -- v->clip_* is the caller's business, the way
 * `inside` above explains -- so anything that hands it screen coordinates has
 * to cut them first.  The range marking (src/cmd.c's jw_cmd_marked) did not,
 * and it never showed while only 複写 used it, because 複写 leaves what it
 * picked where it was.  移動 takes the selection with it: scaling SAMPLE0's
 * (150,130)-(245,170) by two puts line 5 at screen y=14.77, and 141 red
 * pixels landed across the top line.
 */
void jw_view_mark(VGA *v, const JwView *w, double ax, double ay,
                  double bx, double by, unsigned colour, int style)
{
    double fx0 = (ax - w->ox) * w->scale + w->ax;
    double fy0 = w->ay - (ay - w->oy) * w->scale;
    double fx1 = (bx - w->ox) * w->scale + w->ax;
    double fy1 = w->ay - (by - w->oy) * w->scale;

    if (!inside(w, (int)fx0, (int)fy0)) {
        if (!inside(w, (int)fx1, (int)fy1)) {
            return;
        }
        clip_far(w, fx1, fy1, &fx0, &fy0);
    } else {
        clip_far(w, fx0, fy0, &fx1, &fy1);
    }
    jw_line(v, (int)fx0, (int)fy0, (int)fx1, (int)fy1, colour, ROP_REPLACE,
            style);
}

/* 用紙枠: the paper's edge, in red and dashed.
 *
 * It is the rectangle **(0,0)-(518,447)** in drawing units, which at scale
 * one is the drawing window's own border -- screen x 121 and 639, y 463 and
 * 16 -- so it never shows until the view moves.  That is why it took a zoom
 * to find: with the view (200,100)-(300,400) the original draws a dashed red
 * column where x=0 lands (column 187), with (150,50)-(450,450) at column 179,
 * with (300,17)-(400,60) a dashed red row where y=447 lands (row 122), and
 * with (620,200)-(638,220) a column where x=518 lands (column 603).  All four
 * agree with 0, 518 and 447 to the pixel.
 *
 * The dashes are every fourth pixel -- line type 9, 0x2222 -- and their phase
 * is the screen's, not the line's: the column at 187 lights rows 19, 23, 27 …
 * and so does the one at 603.
 */

static void paper_frame(VGA *v, const JwView *w)
{
    const int style = jw_view_line_style(9);
    /* In doubles, because a corner can be a long way off at a big zoom and
     * `(int)` of a float that does not fit is undefined -- TEST7 at 2x drew
     * two pixels outside the window until this was clamped. */
    const double fx0 = (0.0 - w->ox) * w->scale + w->ax;
    const double fx1 = (518.0 - w->ox) * w->scale + w->ax;
    const double fy0 = w->ay - (0.0 - w->oy) * w->scale;
    const double fy1 = w->ay - (447.0 - w->oy) * w->scale;
    /* The dashes go by the **screen**, not by where the line starts: the
     * column at x=0 lights rows 19, 23, 27 … whether the view is
     * (200,100)-(300,400) or (620,200)-(638,220), and the row at y=447 lights
     * columns 124, 128, 132 …  So each edge is drawn right across the window
     * from a start that keeps that phase. */
    const int vs = v->clip_y0 + (((1 - v->clip_y0) % 4) + 4) % 4;
    const int hs = v->clip_x0 - (((v->clip_x0 - 2) % 4) + 4) % 4;

    /* Corner to corner, and each edge's dashes count from its own start --
     * which is how the little panels come out: the top edge lights 130, 134
     * … from a left corner at 128, the same "start plus two" the main
     * view's lines have from the window's edge. */
    if (w->frame_box) {
        const double bx1 = (517.0 - w->ox) * w->scale + w->ax;
        const double by1 = w->ay - (446.0 - w->oy) * w->scale;

        jw_line(v, (int)fx0, (int)fy1, (int)fx0, (int)fy0, 2, ROP_REPLACE,
                style);
        jw_line(v, (int)bx1, (int)by1, (int)bx1, (int)fy0, 2, ROP_REPLACE,
                style);
        jw_line(v, (int)fx0, (int)fy0, (int)bx1, (int)fy0, 2, ROP_REPLACE,
                style);
        jw_line(v, (int)fx0, (int)by1, (int)bx1, (int)by1, 2, ROP_REPLACE,
                style);
        return;
    }
    if (fx0 >= v->clip_x0 && fx0 <= v->clip_x1) {
        jw_line(v, (int)fx0, vs, (int)fx0, v->clip_y1, 2, ROP_REPLACE, style);
    }
    if (fx1 >= v->clip_x0 && fx1 <= v->clip_x1) {
        jw_line(v, (int)fx1, vs, (int)fx1, v->clip_y1, 2, ROP_REPLACE, style);
    }
    if (fy0 >= v->clip_y0 && fy0 <= v->clip_y1) {
        jw_line(v, hs, (int)fy0, v->clip_x1, (int)fy0, 2, ROP_REPLACE, style);
    }
    if (fy1 >= v->clip_y0 && fy1 <= v->clip_y1) {
        jw_line(v, hs, (int)fy1, v->clip_x1, (int)fy1, 2, ROP_REPLACE, style);
    }
}

void jw_view_draw(VGA *v, const Jwc *d, const JwView *w)
{
    memset(v->plane, 0, sizeof v->plane);
    jw_view_draw_into(v, d, w);
}

void jw_view_draw_into(VGA *v, const Jwc *d, const JwView *w)
{
    long k;

    /* Everything below draws through the clip, as the original does. */
    v->clip_x0 = w->x0 > 0 ? w->x0 : 0;
    v->clip_y0 = w->y0 > 0 ? w->y0 : 0;
    v->clip_x1 = w->x1 < v->width - 1 ? w->x1 : v->width - 1;
    v->clip_y1 = w->y1 < v->height - 1 ? w->y1 : v->height - 1;
    paper_frame(v, w);
    for (k = 0; k < d->n_lines; k++) {
        jw_view_line(v, d, &d->lines[k], w,
                     jw_view_pen_colour(d->lines[k].pen));
    }
    for (k = 0; k < d->n_arcs; k++) {
        if (!visible_in(d, w, d->arcs[k].layer)) {
            continue;
        }
        jw_view_arc(v, d, &d->arcs[k], w, jw_view_pen_colour(d->arcs[k].pen));
    }
    for (k = 0; k < d->n_texts; k++) {
        if (!visible_in(d, w, d->texts[k].layer)) {
            continue;
        }
        draw_text(v, d, &d->texts[k], w, (double)d->unit_mm * w->scale,
                  jw_view_text_colour(d, d->texts[k].size));
    }
    /* The 指定点 markers: a two-pixel circle at each, in white.  The original
     * draws it as four short lines -- for SAMPLE3's first, whose point is at
     * screen (301.33, 230.68):
     *
     *     (300,228)-(302,228)  (300,232)-(302,232)
     *     (299,229)-(299,231)  (303,229)-(303,231)
     *
     * which is the twelve pixels of a circle of radius two around (301,230),
     * the truncated centre.  They are drawn whatever is on the paper: with
     * every line, arc, text and point pushed off it they are still there,
     * which is what finally said they are not entities. */
    for (k = 0; k < d->n_points; k++) {
        int x = to_x(w, d->points[k].x);
        int y = to_y(v, w, d->points[k].y);

        if (!visible_in(d, w, d->points[k].layer) || !inside(w, x, y)) {
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
        jw_point(v, x, y, jw_view_pen_colour(d->points[k].rest[1]), ROP_REPLACE);
    }
    /* The grid last: the original's dots sit *on top of* the drawing.  Thirteen
     * of SAMPLE1's land on a line, and there the original shows the dot's white
     * and not the line's colour. */
    /* The 指定点 markers come after the point records, not before: TEST3 has a
     * point sitting on one marker's ring, and the original leaves the ring's
     * white there rather than the point's cyan. */
    for (k = 0; k < d->n_marks; k++) {
        const int mx = to_x(w, d->mark_x[k]), my = to_y(v, w, d->mark_y[k]);
        const unsigned mc = jw_view_pen_colour(2);

        if (!inside(w, mx - 2, my - 2) || !inside(w, mx + 2, my + 2)) {
            continue;
        }
        jw_line(v, mx - 1, my - 2, mx + 1, my - 2, mc, ROP_REPLACE, JW_STYLE_SOLID);
        jw_line(v, mx - 1, my + 2, mx + 1, my + 2, mc, ROP_REPLACE, JW_STYLE_SOLID);
        jw_line(v, mx - 2, my - 1, mx - 2, my + 1, mc, ROP_REPLACE, JW_STYLE_SOLID);
        jw_line(v, mx + 2, my - 1, mx + 2, my + 1, mc, ROP_REPLACE, JW_STYLE_SOLID);
    }
    draw_grid(v, d, w);
    /* The 仮点 last of all.  The original drops one straight onto the screen
     * when the 点 command is pressed, over whatever is already there -- so on
     * every screen there is to compare against, the ring is on top of the grid
     * and of the drawing.  What it would do on a redraw of its own is not
     * known; nothing in the fourteen drawings can be made to show it. */
    for (k = 0; k < d->n_temp; k++) {
        const int mx = to_x(w, d->temp_x[k]), my = to_y(v, w, d->temp_y[k]);
        const unsigned mc = jw_view_pen_colour(2);

        if (!inside(w, mx - 2, my - 2) || !inside(w, mx + 2, my + 2)) {
            continue;
        }
        jw_line(v, mx - 1, my - 2, mx + 1, my - 2, mc, ROP_REPLACE, JW_STYLE_SOLID);
        jw_line(v, mx - 1, my + 2, mx + 1, my + 2, mc, ROP_REPLACE, JW_STYLE_SOLID);
        jw_line(v, mx - 2, my - 1, mx - 2, my + 1, mc, ROP_REPLACE, JW_STYLE_SOLID);
        jw_line(v, mx + 2, my - 1, mx + 2, my + 1, mc, ROP_REPLACE, JW_STYLE_SOLID);
    }
}

void jw_view_text(VGA *v, const Jwc *d, const JwcText *t, const JwView *w,
                  unsigned colour)
{
    draw_text(v, d, t, w, (double)d->unit_mm * w->scale, colour);
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

/* ズームバーの ■拡大■: make the rectangle two presses gave fill the window.
 *
 * **Read out of the original, not fitted to a picture.**  Dumping the whole of
 * DGROUP before and after a zoom (`dump +3375:0000 44320` twice in one script)
 * leaves five numbers changed, and they are the view:
 *
 *     0x0c30, 0x0c3c  float  the scale, x and y -- 1.0 before, and after a
 *                            zoom on a rectangle 450 screen pixels wide
 *                            **1.151111**, which is 518/450 to seven digits
 *     0x0c38          float  121.0, untouched -- `screen_x = (x-ox)*s + 121`
 *     0x0c48, 0x0c4c  float  the origin (ox, oy): 29.0 and 38.83977 for that
 *                            zoom, where the rectangle ran x 29..479 and
 *                            y 203..263 in drawing units
 *     0x896e          double the 表示倍率 the band prints, 0.5723906822 ->
 *                            0.6588851280, whose ratio is the same 1.1511109
 *
 * So the window is **518 by 447** -- a zoom on a 300 pixel tall rectangle
 * multiplies the scale by exactly 447/300 = 1.49 -- and what the original
 * keeps is the bottom left of what is visible:
 *
 *     ox = cx - 259/s      oy = cy - 223.5/s
 *
 * with (cx,cy) the rectangle's middle.  For the 450 wide one that gives
 * 254 - 225 = 29 and 233 - 194.15 = 38.85, which is what DGROUP holds.
 * 121 and 463 do not move, so the window is screen x 121..639, y 16..463.
 */
/* 倍率指定[XFER] with the right button: the point pressed goes to the middle
 * of the window and the 表示倍率 becomes 1.0 -- `倍率=1.0ﾏｳｽ(R)` on its own
 * line, and 原寸 in JW_CAD.DOC.
 *
 * Read out of the original: a right press at (300,200) on SAMPLE0 leaves
 * DGROUP 0x0c30 at 1.7470588 (which is 518 / (170 x unit_mm), the scale that
 * makes the band print 1.00) and the origin at (30.7508, 135.357); one at
 * (400,300) leaves (130.75083, 35.3569).  Both give **259 and 223** for the
 * half-window -- note the 223, where ■拡大■ uses 223.5.
 */
void jw_view_actual(JwView *w, const Jwc *d, int sx, int sy)
{
    const double cx = (sx - w->ax) / w->scale + w->ox;
    const double cy = (w->ay - sy) / w->scale + w->oy;

    if (!d || d->unit_mm <= 0.0f) {
        return;
    }
    w->scale = (float)(518.0 / (170.0 * d->unit_mm));
    w->ox = (float)(cx - 259.0 / w->scale);
    w->oy = (float)(cy - 223.0 / w->scale);
    w->ax = 121.0f;
    w->ay = 463.0f;
}

void jw_view_zoom(JwView *w, int sx0, int sy0, int sx1, int sy1)
{
    const double lo_x = sx0 < sx1 ? sx0 : sx1, hi_x = sx0 < sx1 ? sx1 : sx0;
    const double lo_y = sy0 < sy1 ? sy0 : sy1, hi_y = sy0 < sy1 ? sy1 : sy0;
    const double wide = hi_x - lo_x, tall = hi_y - lo_y;
    double by, cx, cy;

    if (wide < 1.0 || tall < 1.0) {
        return;
    }
    cx = ((lo_x + hi_x) / 2.0 - w->ax) / w->scale + w->ox;
    cy = (w->ay - (lo_y + hi_y) / 2.0) / w->scale + w->oy;
    by = 518.0 / wide < 447.0 / tall ? 518.0 / wide : 447.0 / tall;
    w->scale = (float)(w->scale * by);
    w->ox = (float)(cx - 259.0 / w->scale);
    w->oy = (float)(cy - 223.5 / w->scale);
    w->ax = 121.0f;
    w->ay = 463.0f;
}
