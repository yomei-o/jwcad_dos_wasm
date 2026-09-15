/* The screen around the drawing.  See ui.h for where every number came from. */
#include "ui.h"

#include "draw.h"
#include "fontx.h"
#include "view.h"

#include <stdio.h>
#include <string.h>

/* The original's menu, byte for byte out of its DGROUP at 0x7cd7: thirty
 * labels of six bytes each, the right column first.  The command numbers are
 * the ones USER_MNU.DAT documents -- "コマンド番号は複写から測定が 1〜15、
 * 移動から入出力が16〜30になる" -- so entry n-1 is command n. */
static const char MENU[30][7] = {
    "\x95\xa1\x20\x8e\xca\x00",   /*  1  複 写  */
    "\x20\x81\x7b\x20\x20\x00",   /*  2   ＋    */
    "\x20\x81\x5e\x20\x20\x00",   /*  3   ／    */
    "\x20\x81\xa0\x20\x20\x00",   /*  4   □    */
    "\x95\xa1\x20\x90\xfc\x00",   /*  5  複 線  */
    "\x84\xa5\x84\x9f\x20\x00",   /*  6  ├─   */
    "\x20\x81\x83\x20\x20\x00",   /*  7   ＜    */
    "\x96\xca\x20\x8e\xe6\x00",   /*  8  面 取  */
    "\x82\x51\x20\x90\xfc\x00",   /*  9  ２ 線  */
    "\x90\xfc\x20\x8f\xc1\x00",   /* 10  線 消  */
    "\x20\x81\x9b\x20\x20\x00",   /* 11   ○    */
    "\x20\x81\x69\x20\x20\x00",   /* 12   （    */
    "\x95\xb6\x20\x8e\x9a\x00",   /* 13  文 字  */
    "\x90\xa1\x20\x96\x40\x00",   /* 14  寸 法  */
    "\x91\xaa\x20\x92\xe8\x00",   /* 15  測 定  */
    "\x88\xda\x81\x40\x93\xae",   /* 16  移　動 */
    "\x95\xcf\x81\x40\x8c\x60",   /* 17  変　形 */
    "\x83\x6e\x83\x62\x83\x60",   /* 18  ハッチ */
    "\x91\xbd\x8a\x70\x8c\x60",   /* 19  多角形 */
    "\x92\x86\x90\x53\x90\xfc",   /* 20  中心線 */
    "\x95\xaa\x81\x40\x8a\x84",   /* 21  分　割 */
    "\x89\xbc\x8e\xc0\x93\x5f",   /* 22  仮実点 */
    "\x8b\xc8\x81\x40\x90\xfc",   /* 23  曲　線 */
    "\x90\xfc\x95\xcf\x8d\x58",   /* 24  線変更 */
    "\x8f\xc1\x81\x40\x8b\x8e",   /* 25  消　去 */
    "\x89\x7e\x90\xfc\x90\xda",   /* 26  円線接 */
    "\x90\x7d\x20\x20\x8c\x60",   /* 27  図  形 */
    "\x95\xb6\x95\xd2\x8f\x57",   /* 28  文編集 */
    "\xb5\xcc\xdf\xbc\xae\xdd",   /* 29  ｵﾌﾟｼｮﾝ */
    "\x93\xfc\x8f\x6f\x97\xcd",   /* 30  入出力 */
};

/* The key that picks each one, DGROUP 0x7cad: the fifteen of the right column
 * in capitals, then the fifteen of the left in small letters. */
static const char MENU_KEY[31] = "CHXBFTVRWDENASQchxbftvrwdenasq";

const char *jw_ui_menu_label(int command)
{
    return command >= 1 && command <= 30 ? MENU[command - 1] : "";
}

char jw_ui_menu_key(int command)
{
    return command >= 1 && command <= 30 ? MENU_KEY[command - 1] : 0;
}

/* ------------------------------------------------------------------ paint */

static void fill(VGA *v, int x0, int y0, int x1, int y1, unsigned colour)
{
    int y;

    for (y = y0; y <= y1; y++) {
        jw_line(v, x0, y, x1, y, colour, ROP_REPLACE, JW_STYLE_SOLID);
    }
}

static void box(VGA *v, int x0, int y0, int x1, int y1, unsigned colour)
{
    jw_line(v, x0, y0, x1, y0, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, x1, y0, x1, y1, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, x1, y1, x0, y1, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, x0, y1, x0, y0, colour, ROP_REPLACE, JW_STYLE_SOLID);
}

static int is_lead(unsigned char c)
{
    return (c >= 0x81 && c <= 0x9f) || (c >= 0xe0 && c <= 0xfc);
}

void jw_ui_text(VGA *v, int col, int row, unsigned fg, unsigned bg,
                const char *s)
{
    const unsigned char *p = (const unsigned char *)s;
    const Fontx *ank = jw_view_ank(), *kanji = jw_view_kanji();
    int x = (col - 1) * 8, y = (row - 1) * 16;
    int i = 0;

    if (!p || !ank->data) {
        return;
    }
    /* 0def:23c5 reads its last argument as three cases, not as a colour:
     * 0 paints the background black behind the letters, 2 leaves what is
     * there, and 1 or -1 fills the whole run's rectangle with `fg` first and
     * then writes the letters in black, transparently (0def:24a6 zeroes both
     * colours after the fill).  That last one is how the bottom strip puts
     * 範囲記憶 on a green button. */
    if (bg == 0xffffu || bg == 1) {
        fill(v, x, y, x + (int)strlen(s) * 8 - 1, y + 15, fg);
        fg = bg = 0;
    } else if (bg == 2) {
        bg = fg;
    }
    while (p[i]) {
        const unsigned char *g;
        int w;

        if (is_lead(p[i]) && p[i + 1]) {
            g = fontx_glyph(kanji, (unsigned)(p[i] << 8) | p[i + 1]);
            w = 16;
            i += 2;
        } else {
            g = fontx_glyph(ank, p[i]);
            w = 8;
            i += 1;
        }
        if (g) {
            jw_glyph(v, x, y, w, 16, g, fg, bg);
        }
        x += w;
    }
}

/* ------------------------------------------------------- one glyph, by hand */

/* Part of the chrome is not drawn with the character routine at all: the
 * original walks a glyph and plots it a pixel at a time, through 1def:1691.
 * That routine takes a **full-width** character and a step read out of DGROUP
 * -- 1.0 at 0x9224 for a real kanji, 0.5 at 0x9228 for a code below 400, which
 * it turns into a full-width Latin letter by adding 0x22 to the high byte
 * (0x0130 becomes JIS 0x2330, the full-width zero).  Then, for row `r` and
 * column `c` of the 16x16 glyph, it plots
 *
 *     (int)(x + step * c), (int)(y + step * r)
 *
 * so at 0.5 the sixteen rows land on eight lines.  That is how the layer
 * buttons get their digits and how "ALL" fits in the white bar.
 *
 * The two steps were read out of the running original (`dump 3485:9220 24`
 * gives 00 00 80 3F at 0x9224 and 00 00 00 3F at 0x9228); the rest was read
 * off `DOSEMU_BP=0EFF:1691` and the 1,340 pixels it puts through 1def:1423,
 * which this reproduces exactly.
 */
static unsigned jis_to_sjis(unsigned jis)
{
    unsigned hi = jis >> 8, lo = jis & 0xff, s1, s2;

    if (hi & 1) {
        s1 = (hi + 1) / 2 + 0x70;
        s2 = lo + 0x1f + (lo >= 0x60);
    } else {
        s1 = hi / 2 + 0x70;
        s2 = lo + 0x7e;
    }
    if (s1 >= 0xa0) {
        s1 += 0x40;
    }
    return (s1 << 8) | s2;
}

static void jw_ui_blit(VGA *v, int x, int y, unsigned code, unsigned colour)
{
    const unsigned char *g;
    unsigned jis = code;
    double step = 1.0;
    int r, c;

    if (code < 400) {
        jis = code + 0x2200;
        step = 0.5;
    }
    g = fontx_glyph(jw_view_kanji(), jis_to_sjis(jis));
    if (!g) {
        return;
    }
    for (r = 0; r < 16; r++) {
        unsigned bits = ((unsigned)g[r * 2] << 8) | g[r * 2 + 1];
        int py = (int)(y + step * r);

        for (c = 0; c < 16; c++) {
            if (bits & (0x8000u >> c)) {
                jw_point(v, (int)(x + step * c), py, colour, ROP_REPLACE);
            }
        }
    }
}

/* ------------------------------------------------------------------ state */

/* The paper's width in millimetres.  0885:100d picks the label off the same
 * number: past 14 it is "err", 14 is "100", 13 "50m", 12 "10m", 8 and up
 * "%1dA" with six taken off, and below that "A-%1d". */
static const float PAPER_MM[5] = { 1189.0f, 841.0f, 594.0f, 420.0f, 297.0f };

static void paper_name(char *out, int paper)
{
    if (paper > 14) {
        strcpy(out, "err");
    } else if (paper == 14) {
        strcpy(out, "100");
    } else if (paper == 13) {
        strcpy(out, "50m");
    } else if (paper == 12) {
        strcpy(out, "10m");
    } else if (paper >= 8) {
        sprintf(out, "%1d`", paper - 6);
    } else {
        sprintf(out, "A-%1d", paper);
    }
}

/* 0885:1079.  Below 1 it is written the other way up, and a scale under 4.9
 * keeps a decimal: SAMPLE0's 1 comes out "S=1/1.0" and SAMPLE1's 100 "S=1/100".
 * The three thresholds are doubles in the original's DGROUP -- 0.99989 at
 * 0x9134, 4.9 at 0x9118 and the 0.5 it rounds with at 0x9128. */
static void scale_name(char *out, double denom)
{
    if (denom > 0.99989468) {
        if (denom < 4.9) {
            sprintf(out, "S=1/%3.1f", denom);
        } else {
            sprintf(out, "S=1/%d", (int)(denom + 0.5));
        }
    } else if (denom > 0.0) {
        double up = 1.0 / denom;

        if (up < 4.9) {
            sprintf(out, "S=%3.1f/1", up);
        } else {
            sprintf(out, "S=%3.0f/1", up);
        }
    } else {
        strcpy(out, "S=1/1.0");
    }
}

/* 0885:0b3b.  A line type of 8 or less is a pen and the label is its number;
 * past that it is one of three named styles. */
static void pen_name(char *out, int pen, int line_type)
{
    if (line_type <= 8) {
        sprintf(out, "Pen.%1d", pen);
    } else if (line_type <= 10) {
        strcpy(out, "Addi.L");
    } else if (line_type <= 15) {
        sprintf(out, "Rnd.f%1d", line_type - 10);
    } else if (line_type <= 18) {
        strcpy(out, "Long.L");
    } else {
        *out = 0;
    }
}

/* 表示倍率: 170 millimetres of screen over the paper's width, in float, which
 * is what the original keeps at DGROUP 0x8972 -- 0.5723907 for A-4, 0.4047619
 * for A-3, 0.2861953 for A-2 and 0.2021402 for A-1, all of them 170.0f over
 * the width this table holds. */
static double magnification(int paper)
{
    return paper >= 0 && paper <= 4 ? 170.0f / PAPER_MM[paper] : 0.0;
}

void jw_ui_default(JwUi *s)
{
    int i;

    memset(s, 0, sizeof(*s));
    s->pen = 2;
    s->line_type = 1;
    s->paper = 3;
    s->denom = 100.0;
    s->group = 0;
    s->layer = 0;
    for (i = 0; i < 16; i++) {
        s->layer_on[i] = 1;
        s->layer_ring[i] = 1;
    }
}

void jw_ui_from(JwUi *s, const Jwc *d)
{
    int i;

    jw_ui_default(s);
    /* The right-hand count is the arcs **and** the texts: the label over it
     * reads 円ｰ文数, and 20 + 4 is the 24 the original shows for SAMPLE1. */
    s->n_lines = d->n_lines;
    s->n_arcs = d->n_arcs + d->n_texts;
    s->pen = d->pen;
    s->line_type = d->line_type;
    s->paper = d->paper;
    s->denom = d->denom;
    s->layer = d->write_layer;
    s->name = d->layer_name[(s->group << 4) | (s->layer & 15)];
    s->work_seconds = d->work_seconds;
    for (i = 0; i < 16; i++) {
        const unsigned char layer = (unsigned char)((s->group << 4) | i);
        long k;

        s->layer_on[i] = (unsigned char)jwc_visible(d, layer);
        s->layer_ring[i] = (unsigned char)(s->layer_on[i]
                                           && d->layer_edit[layer]
                                           && d->group_edit[layer >> 4]);
        for (k = 0; k < d->n_lines; k++) {
            if (d->lines[k].layer == layer) {
                s->layer_geom[i] = 1;
                break;
            }
        }
        for (k = 0; k < d->n_arcs && !s->layer_geom[i]; k++) {
            if (d->arcs[k].layer == layer) {
                s->layer_geom[i] = 1;
            }
        }
        for (k = 0; k < d->n_points && !s->layer_geom[i]; k++) {
            if (d->points[k].layer == layer) {
                s->layer_geom[i] = 1;
            }
        }
        for (k = 0; k < d->n_texts; k++) {
            if (d->texts[k].layer == layer) {
                s->layer_text[i] = 1;
                break;
            }
        }
    }
}

/* The line of guidance the original comes up with, out of its own DGROUP --
 * 作図条件・制限事項等については、付属の JW_CAD.DOC をご覧ください。 */
const char *jw_ui_guide(void)
{
    return "\x93\xae\x8d\xec\x8f\xf0\x8c\x8f\xa5\x90\xa7\x8c\xc0\x8e\x96"
    "\x8d\x80\x93\x99\x82\xc9\x82\xc2\x82\xa2\x82\xc4\x82\xcd\xa4"
    "\x95\x74\x91\xae\x82\xcc JW_CAD.DOC \x82\xf0\x82\xb2\x97\x97"
    "\x82\xad\x82\xbe\x82\xb3\x82\xa2\xa1";
}

/* ------------------------------------------------------------------- draw */

/* The fifteen rows of the menu, at rows 5 to 19 of the character grid.  The
 * left column is command 16 to 30 and the right 1 to 15; the key goes between
 * them at column 8, and after the right label at column 15. */
static void menu(VGA *v)
{
    int i;

    jw_ui_text(v, 2, 4, 7, 0, " Get type[tab]");
    for (i = 1; i <= 15; i++) {
        char key[2];

        jw_ui_text(v, 2, i + 4, 6, 0, jw_ui_menu_label(i + 15));
        key[0] = jw_ui_menu_key(i + 15);
        key[1] = '\0';
        jw_ui_text(v, 8, i + 4, 6, 0, key);
        jw_ui_text(v, 10, i + 4, 6, 0, jw_ui_menu_label(i));
        key[0] = jw_ui_menu_key(i);
        jw_ui_text(v, 15, i + 4, 6, 0, key);
    }
}

void jw_ui_draw(VGA *v, const JwUi *s)
{
    char buf[64], name[32];
    int i;

    v->clip_x0 = 0;
    v->clip_y0 = 0;
    v->clip_x1 = v->width - 1;
    v->clip_y1 = v->height - 1;

    /* -- the frame ------------------------------------------------------ */
    fill(v, 0, 0, 639, 15, 0);
    fill(v, 0, 463, 639, 479, 0);
    fill(v, 0, 0, 121, 303, 0);
    jw_line(v, 0, 16, 639, 16, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 639, 16, 639, 479, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 479, 639, 479, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 479, 0, 16, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 121, 16, 121, 463, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 63, 121, 63, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 121, 63, 121, 304, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 304, 121, 304, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 304, 0, 63, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 463, 639, 463, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 121, 463, 121, 479, 7, ROP_REPLACE, JW_STYLE_SOLID);

    /* -- the two counts ------------------------------------------------- */
    fill(v, 1, 17, 120, 47, 4);
    box(v, 0, 16, 121, 48, 7);
    sprintf(buf, "%7ld|%7ld ", s->n_lines, s->n_arcs);
    jw_ui_text(v, 1, 2, 0, 0, buf);
    jw_ui_text(v, 1, 3, 0, 0, " \x90\xfc  \x90\x94|\x89\x7e\xa5\x95\xb6\x90\x94");

    /* -- the menu ------------------------------------------------------- */
    menu(v);
    box(v, 0, 48, 121, 304, 7);
    jw_line(v, 0, 63, 121, 63, 7, ROP_REPLACE, JW_STYLE_SOLID);
    box(v, 1, 49, 120, 305, 7);
    fill(v, 65, 64, 70, 303, 7);
    fill(v, 67, 64, 68, 303, 0);
    /* The working time, two pixels wide, down the black core of the bar
     * between the two menu columns (0885:38b0).  The original turns seconds
     * into `q = seconds * 16 / 3600` and draws `q % 160` of it up from the
     * bottom in colour 5 and `q / 10`, at most 240, down from the top in
     * colour 6.  Both were read off it: q is 39 for SAMPLE1's 8,939 seconds
     * and 252 for TEST6's 56,704, and the two bars are 39 and 3, and 92 and
     * 25 -- 252 % 160 and 252 / 10. */
    {
        long q = s->work_seconds * 16 / 3600;
        long lo = q % 160, hi = q / 10;

        if (hi > 240) {
            hi = 240;
        }
        if (lo > 0) {
            fill(v, 67, (int)(304 - lo), 68, 303, 5);
        }
        if (hi > 0) {
            fill(v, 67, 64, 68, (int)(63 + hi), 6);
        }
    }
    jw_line(v, 55, 64, 55, 304, 7, ROP_REPLACE, 0x5555);
    jw_line(v, 111, 64, 111, 304, 7, ROP_REPLACE, 0x5555);
    fill(v, 0, 48, 7, 304, 7);
    jw_line(v, 1, 176, 6, 176, 0, ROP_REPLACE, JW_STYLE_SOLID);
    jw_ui_blit(v, 0, 112, 0x100 | 'U', 0);
    jw_ui_blit(v, 0, 236, 0x100 | 'D', 0);

    /* -- the pen, the paper, the group, the layers ---------------------- */
    fill(v, 1, 306, 120, 383, 0);
    fill(v, 0, 352, 9, 384, 7);
    jw_ui_blit(v, 1, 354, 0x100 | 'A', 0);
    jw_ui_blit(v, 1, 364, 0x100 | 'L', 0);
    jw_ui_blit(v, 1, 374, 0x100 | 'L', 0);
    jw_line(v, 0, 320, 121, 320, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 336, 121, 336, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 352, 121, 352, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 9, 368, 121, 368, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 9, 384, 121, 384, 7, ROP_REPLACE, JW_STYLE_SOLID);
    for (i = 0; i < 8; i++) {
        jw_line(v, 9 + 14 * i, 352, 9 + 14 * i, 384, 7, ROP_REPLACE,
                JW_STYLE_SOLID);
    }
    box(v, 0, 352, 121, 384, 7);

    fill(v, 1, 321, 120, 335, 0);
    fill(v, 1, 321, 36, 335, 4);
    paper_name(name, s->paper);
    sprintf(buf, " %-15s", name);
    jw_ui_text(v, 1, 21, 0, 0, buf);
    scale_name(buf, s->denom);
    jw_ui_text(v, 7, 21, 6, 0, buf);
    box(v, 0, 320, 121, 336, 7);

    fill(v, 1, 306, 120, 318, 0);
    jw_ui_text(v, 1, 20, 7, 0, "               ");
    pen_name(buf, s->pen, s->line_type);
    jw_ui_text(v, 2, 20, jw_view_pen_colour((unsigned)s->pen), 0, buf);
    /* the sample beside Pen.n: the pen's own colour and the line type's
     * pattern (TEST7 writes with type 9 and the sample comes out dotted) */
    jw_line(v, 64, 312, 110, 312, jw_view_pen_colour((unsigned)s->pen),
            ROP_REPLACE, jw_view_line_style((unsigned)s->line_type));
    fill(v, 0, 304, 121, 305, 7);
    jw_line(v, 0, 16, 0, 463, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 121, 16, 121, 463, 7, ROP_REPLACE, JW_STYLE_SOLID);

    jw_ui_text(v, 1, 22, 7, 0, "        ");
    if (s->name && *s->name) {
        jw_ui_text(v, 1, 22, 7, 0, s->name);
    }
    jw_ui_text(v, 9, 22, 6, 0, "\xb8\xde\xd9\xb0\xcc\xdf");
    fill(v, 110, 336, 121, 352, 5);
    box(v, 110, 336, 121, 352, 7);
    jw_line(v, 64, 336, 64, 352, 7, ROP_REPLACE, JW_STYLE_SOLID);
    sprintf(buf, "%X", s->group & 15);
    jw_ui_text(v, 15, 22, 0, 0, buf);
    box(v, 0, 320, 121, 336, 7);

    /* The sixteen layer buttons.  The original fills the box of the layer it
     * writes to, then goes round the sixteen putting a full-width digit in
     * each (0EFF:1691, half size, black inside that filled box and yellow
     * everywhere else) and a ring round it (11B9:0AC5 with rx = ry = 5 at
     * (16 + 14k, 361) and (16 + 14k, 377), colour 6).  Both lists were read
     * off the running original. */
    fill(v, 10 + 14 * (s->layer & 7), 355 + 16 * ((s->layer >> 3) & 1),
         22 + 14 * (s->layer & 7), 367 + 16 * ((s->layer >> 3) & 1), 6);
    for (i = 0; i < 16; i++) {
        const int bx = 12 + 14 * (i & 7), by = 358 + 16 * (i >> 3);
        const unsigned digit = 0x100u | (i < 10 ? '0' + i : 'A' + i - 10);

        if (s->layer_on[i]) {
            jw_ui_blit(v, bx, by, digit, i == s->layer ? 0 : 6);
            if (s->layer_ring[i]) {
                jw_arc(v, bx + 4, by + 3, 5.0, 0.0, 0.0, 6, ROP_REPLACE,
                       JW_STYLE_SOLID);
            }
        }
    }
    jw_line(v, 55, 360, 55, 362, 0, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 56, 360, 56, 362, 0, ROP_REPLACE, JW_STYLE_SOLID);
    for (i = 0; i < 16; i++) {
        const int bx = 10 + 14 * (i & 7), by = 353 + 16 * (i >> 3);

        fill(v, bx, by, bx + 6, by + 1, s->layer_geom[i] ? 3 : 0);
        fill(v, bx + 7, by, bx + 12, by + 1, s->layer_text[i] ? 3 : 0);
    }

    jw_ui_text(v, 1, 25, 7, 0, " \x83\x54\x83\x75\x89\xe6\x96\xca \x95\x5c\x8e\xa6 ");
    box(v, 0, 384, 121, 400, 7);
    jw_line(v, 0, 479, 0, 16, 7, ROP_REPLACE, JW_STYLE_SOLID);

    /* -- the strip along the bottom ------------------------------------- */
    fill(v, 1, 464, 638, 478, 0);
    box(v, 0, 463, 639, 479, 7);
    box(v, 0, 463, 121, 479, 7);
    jw_ui_text(v, 1, 30, 7, 0, "    [Z   ");
    jw_ui_blit(v, 2, 463, 0x4545, 7);      /* JIS 4545 and 426e: 電卓 */
    jw_ui_blit(v, 18, 463, 0x426E, 7);
    box(v, 51, 463, 121, 479, 7);
    fill(v, 52, 464, 120, 478, 4);
    jw_ui_text(v, 8, 30, 4, 0xffff, "\x94\xcd\x88\xcd\x8b\x4c\x89\xaf");
    jw_ui_text(v, 17, 30, 7, 0, "\x91\x4f\x94\x7b\x97\xa6[NFER]");
    fill(v, 224, 463, 438, 479, 6);
    sprintf(buf, "Zoom[\xbd\xcd\xdf\xb0\xbd] \x95\x5c\x8e\xa6\x94\x7b\x97\xa6 %4.2f ",
            magnification(s->paper));
    jw_ui_text(v, 30, 30, 0, 0, buf);
    jw_ui_text(v, 56, 30, 7, 0, "\x94\x7b\x97\xa6\x8e\x77\x92\xe8[XFER]");
    fill(v, 550, 464, 606, 478, 4);
    jw_ui_text(v, 70, 30, 0, 0, "\xb5\xcc\xbe\xaf\xc4");
    jw_ui_text(v, 77, 30, 7, 0, "HELP");
    jw_ui_blit(v, 590, 464, 0x100 | 'H', 0);
    jw_ui_blit(v, 598, 464, 0x100 | 'o', 0);
    jw_ui_blit(v, 591, 471, 0x100 | 'm', 0);
    jw_ui_blit(v, 599, 471, 0x100 | 'e', 0);
    box(v, 550, 463, 606, 479, 7);
    box(v, 0, 463, 639, 479, 7);

    /* -- the title and the guidance ------------------------------------- */
    fill(v, 0, 0, 639, 15, 0);
    jw_ui_text(v, 8, 1, 7, 0,
               "|| JW_CADV version 2.22H  Copyright (c) jw_software club "
               "1991-1999 ||");
    jw_line(v, 0, 16, 639, 16, 7, ROP_REPLACE, JW_STYLE_SOLID);
    if (s->guide) {
        jw_ui_text(v, 17, 3, 7, 0, s->guide);
    }
}

/* ----------------------------------------------------------- the pointer */

/* 1885:3c2b -- one line into each plane the mask names, which for the pointer
 * is DS:c3c0 = 6, planes 1 and 2.  Exclusive-or per plane is the same as
 * exclusive-or with 6 in one pass, but this is the order the original does it
 * in, and the two colours it passes are 1 << plane. */
static void cursor_line(VGA *v, int x0, int y, int x1)
{
    int plane;

    for (plane = 0; plane < 3; plane++) {
        if (6 & (1 << plane)) {
            jw_line(v, x0, y, x1, y, 1u << plane, 0x18, JW_STYLE_SOLID);
        }
    }
}

void jw_ui_cursor(VGA *v, int x, int y)
{
    const int w = v->width - 1, h = v->height - 1;
    int x0, x1, i;

    if (463 + 10 < y) {
        y = 463 + 10;
    }
    if (x > w) {
        return;
    }
    x0 = x1 = x;
    for (i = 0; i <= 10; i++) {
        cursor_line(v, x0, y, x1);
        if (x1 < w) {
            x1++;
        }
        if (++y > h) {
            return;
        }
    }
    x0 += 4;
    x1 = x0 + 2;
    for (i = 0; i < 5; i++) {
        if (x0 < w) {
            if (x1 > w) {
                x1 = w;
            }
            cursor_line(v, x0, y, x1);
            y++;
            cursor_line(v, x0, y, x1);
            if (++y > h) {
                return;
            }
        }
        x0++;
        x1++;
    }
}

/* Which command a point picks.  The menu's fifteen rows are rows 5 to 19 of the
 * character grid -- y 64 to 303 -- and the two columns are split by the white
 * bar the original paints at x 65 to 70. */
int jw_ui_menu_hit(int x, int y)
{
    int row;

    if (x < 8 || x > 120 || y < 64 || y > 303) {
        return 0;
    }
    row = (y - 64) / 16;                    /* 0 to 14 */
    return x < 66 ? row + 16 : row + 1;
}
