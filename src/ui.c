/* The screen around the drawing.  See ui.h for where every number came from. */
#include "ui.h"

#include "draw.h"
#include "fontx.h"
#include "read.h"
#include "view.h"

#include "prompt.h"
#include "snap.h"
#include "snapmsg.h"
#include "stage.h"
#include "typed.h"
#include "span.h"
#include "copy.h"
#include "move.h"
#include "esc.h"

#include <stdio.h>
#include <string.h>

/* Which row of src/snap.h a held key asks for, or -1 for none.
 *
 * One key at a time is what was measured.  Two at once is a real thing -- the
 * help gives [CTRL] and [SHIFT] together a meaning of their own -- but what
 * the band says then has not been read out of the original, so this picks in a
 * fixed order rather than inventing a fourth answer.  [CTRL] comes first
 * because it is the one whose words fill both cells. */
static int snap_row(int mods)
{
    if (mods & JW_MOD_CTRL) {
        return JW_SNAP_CTRL;
    }
    if (mods & JW_MOD_SHIFT) {
        return JW_SNAP_SHIFT;
    }
    if (mods & JW_MOD_GRPH) {
        return JW_SNAP_GRPH;
    }
    return -1;
}

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

int jw_ui_key_command(int key)
{
    int i;

    for (i = 0; i < 30; i++) {
        if (MENU_KEY[i] == key) {
            return i + 1;
        }
    }
    return 0;
}

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

/* The top line as characters, so that jw_ui_top_item can find the bars.  One
 * byte per cell, filled in as jw_ui_text writes row 1 and cleared when
 * jw_ui_draw paints that row black again. */
static char top_line[82];

static void top_clear(void)
{
    memset(top_line, ' ', sizeof top_line - 1);
    top_line[sizeof top_line - 1] = 0;
}

int jw_ui_top_item(int x, int y)
{
    const int col = x / 8 + 1;
    int i, bars = 0;

    if (y < 0 || y > 15 || col < 1 || col > 80) {
        return 0;
    }
    if (top_line[col - 1] == '|') {
        return 0;               /* the bar itself does nothing */
    }
    for (i = 0; i < col - 1; i++) {
        if (top_line[i] == '|') {
            bars++;
        }
    }
    return bars;                /* 0 = before the first bar, so not an item */
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
    if (row == 1) {
        int i;

        for (i = 0; p[i] && col - 1 + i < 80; i++) {
            top_line[col - 1 + i] = (char)p[i];
        }
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
            unsigned code = (unsigned)(p[i] << 8) | p[i + 1];

            /* ①〜⑨ are never drawn as themselves.  They are NEC's own row 13,
             * which the IBM font has no glyph for, so the original takes them
             * apart: `add ax,78f1h` turns 8740h..8748h into '1'..'9' and the
             * two halves of the double-width cell get the digit and a ')'.
             * The menus are full of them (`|①実行(L)|②中止(R)|`), and drawing
             * nothing there left 67 pixels of the top row differing.
             *
             * At 0x1046d the original guards this with bit 0 of DGROUP 0x129,
             * and falls through to the ordinary kanji path when it is set --
             * a machine whose font *does* have row 13, which is to say a
             * PC-98.  On DOS/V the byte is zero (read back with
             * `dump +3375:0129`), so this is the only path there is here. */
            if (code >= 0x8740 && code <= 0x8748) {
                g = fontx_glyph(ank, (code + 0x78f1) & 0xff);
                if (g) {
                    jw_glyph(v, x, y, 8, 16, g, fg, bg);
                }
                g = fontx_glyph(ank, ')');
                if (g) {
                    jw_glyph(v, x + 8, y, 8, 16, g, fg, bg);
                }
                x += 16;
                i += 2;
                continue;
            }
            g = fontx_glyph(kanji, code);
            w = 16;
            i += 2;
        } else if (p[i] < 0x20) {
            /* A control byte takes its cell and paints nothing.  The original
             * never even asks the font driver for one: 「読取可能データ無」
             * begins with a BEL, and with DOSEMU_FONT_TRACE=1 on the run that
             * writes it there is no request for code 0007 at all, while what
             * follows lands one cell along -- so the cell is stepped over, not
             * dropped.  JWANK16.FNT does carry a glyph there (a small ring),
             * which is what drawing it would put on the screen.
             *
             * The BEL is the only byte under 0x20 in any string the original
             * writes, so that is the one this is measured on; the rest are
             * taken the same way for want of anything to measure them by. */
            g = 0;
            w = 8;
            i += 1;
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
    s->dec[0] = s->dec[1] = 3;
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
    s->dec[0] = s->dec[1] = d->decimals;
    s->char_type = d->char_type;
    s->char_pen = d->text_pen[d->char_type];
    s->char_w = d->text_w[d->char_type];
    s->char_h = d->text_h[d->char_type];
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

/* One row of a stage table, with the command's numbers filled in.  Both
 * tables -- the generated src/stage.h and the hand-written src/typed.h -- hold
 * the same shape and are replayed through here. */
/* Copy `text`, putting `n` numbers in place of its first `count` runs of
 * digits.
 *
 * The prompts in src/prompt.h are the original's own bytes, captured while it
 * had one particular drawing up, so the few that carry a number carry that
 * drawing's number.  This puts the one in hand back without touching anything
 * else; `decimal` says whether a run with a `.` in it is one number (`4.0`)
 * or two. */
static void put_numbers(char *out, size_t cap, const char *text,
                        const double *n, int count, int decimal)
{
    size_t o = 0;
    int k = 0;

    while (*text && o + 24 < cap) {
        if (k < count && *text >= '0' && *text <= '9') {
            while (*text && ((*text >= '0' && *text <= '9')
                             || (decimal && *text == '.'))) {
                text++;
            }
            if (decimal) {
                o += (size_t)sprintf(out + o, "%.1f", n[k]);
            } else {
                o += (size_t)sprintf(out + o, "%d", (int)n[k]);
            }
            k++;
            continue;
        }
        out[o++] = *text++;
    }
    out[o] = 0;
}

/* A length in metres, the way 測定 writes it: three decimals, then the
 * trailing zeros and a trailing point taken off.  Measured -- 0 comes out
 * `0`, a tenth of a metre `0.1`, 128.2mm `0.128`. */
static void put_metres(char *out, size_t cap, const char *text, double m)
{
    size_t o = 0;
    int done = 0;

    while (*text && o + 24 < cap) {
        if (!done && ((*text >= '0' && *text <= '9') || *text == '.')) {
            char num[32];
            size_t n;

            while (*text && ((*text >= '0' && *text <= '9') || *text == '.')) {
                text++;
            }
            n = (size_t)sprintf(num, "%.3f", m);
            while (n > 0 && num[n - 1] == '0') {
                n--;
            }
            if (n > 0 && num[n - 1] == '.') {
                n--;
            }
            num[n] = 0;
            o += (size_t)sprintf(out + o, "%s", num);
            done = 1;
            continue;
        }
        out[o++] = *text++;
    }
    out[o] = 0;
}

static void stage_text(VGA *v, const JwStage *q, const JwUi *s, int stage)
{
    char out[160];

    if (q->command != s->command || q->stage != stage) {
        return;
    }
    /* ②範囲外消去 has no `＿` in front of its 追加･除外 line. */
    if (s->outside && q->command == 25 && q->stage == 3 && q->col == 6) {
        return;
    }
    /* Some of what a stage writes only goes up once the pointer has moved off
     * the point just taken -- ／'s `長=` and `角度=`, 「（」's `半径=`.  The
     * table says which (src/stage.h's `moved`, measured; ○ and □ write theirs
     * the moment they are pressed and are not marked). */
    if (q->moved && !s->moved) {
        return;
    }
    /* 文字's field is only up while it is taking a string: once [Enter] has
     * written the text the command is at stage 2 and none of stage 1 is on
     * the screen any more (the original writes ` Get type[tab]` back at row 4
     * and its own line over the top one). */
    if ((q->command == 13 || q->command == 28)
        && q->stage == 1 && !s->typing_text) {
        return;
    }
    /* 線変更's word beside the counts is the one thing in the table that
     * depends on what the press found, so it is drawn below instead. */
    if (q->command == 24 && q->col == 20 && q->row == 2) {
        return;
    }
    /* And 文字's own numbers are the drawing's, not the capture's -- the
     * character type in its field and in its line, and that type's pen, width
     * and height in the panel.  Same as the prompt rows; see put_numbers. */
    if (q->command == 13) {
        double n[2];
        int k = 0;

        if ((q->col == 5 && q->row == 4) || (q->col == 8 && q->row == 1)) {
            n[k++] = s->char_type;
        } else if (q->col == 1 && q->row == 2 && q->fg == 0) {
            n[k++] = s->char_pen;
        } else if (q->col == 1 && q->row == 3 && q->fg == 0) {
            n[k++] = s->char_w / 10.0;
            n[k++] = s->char_h / 10.0;
        }
        if (k) {
            char one[160];

            put_numbers(one, sizeof one, q->text, n, k, q->row == 3);
            jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
            return;
        }
    }
    /* 文編集's `|種 3|Paste` carries the character type of the text it was
     * pointed at, so that digit is the drawing's too. */
    if (q->command == 28 && q->col == 5 && q->row == 4) {
        char one[160];
        double n = s->edit_type;

        put_numbers(one, sizeof one, q->text, &n, 1, 0);
        jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
        return;
    }
    /* ハッチ's 残数 counts down from 100 as lines go into the frame, and its
     * angle and pitch are the command's own. */
    if (q->command == 18 && q->row == 2) {
        char one[160];
        double n;

        if (q->col == 70) {
            n = 100 - s->hatch_n;
        } else if (q->col == 32) {
            n = s->hatch_angle;
        } else if (q->col == 42) {
            n = s->hatch_pitch;
        } else {
            n = 0.0;
        }
        if (q->col == 70 || q->col == 32 || q->col == 42) {
            put_numbers(one, sizeof one, q->text, &n, 1, q->col != 70);
            jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
            return;
        }
    }
    /* 連線's two band words: `45度毎`/`90度毎`/`free` and `マウス`/`----`.
     * ①角 度 goes round the three and the table holds the first. */
    if (q->command == 23 && q->row == 2 && (q->col == 37 || q->col == 46)) {
        const char *one = q->col == 37
            ? (s->poly_deg == 90 ? "90" "\x93" "x" "\x96" "\x88"
               : s->poly_deg == 45 ? "45" "\x93" "x" "\x96" "\x88" : " free ")
            : (s->poly_deg ? "\x83" "}" "\x83" "E" "\x83" "X" : " ---- ");

        jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
        return;
    }
    /* 測定's two lengths and the scale in its own line. */
    if (q->command == 15) {
        char one[160];

        if (q->row == 3 && (q->col == 20 || q->col == 55)) {
            put_metres(one, sizeof one, q->text,
                       q->col == 20 ? s->meas_total : s->meas_last);
            jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
            return;
        }
        if (q->row == 1 && q->col == 8) {
            double n[2];

            n[0] = 1.0;
            n[1] = s->denom;
            put_numbers(one, sizeof one, q->text, n, 2, 0);
            jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
            return;
        }
    }
    /* 分割's numbers are the program's too: the count it offers as 前回と同じ
     * (`[2]`), how many 仮点 are left (`残 97`) and the count it just used
     * (`   4` beside the counts).  The digits in the captured text are
     * replaced the way 文字's are. */
    if (q->command == 21 && (q->col == 55 || q->col == 72 || q->col == 8)) {
        char one[160];
        double n[1];

        n[0] = q->col == 55 ? s->divisions
             : q->col == 72 ? s->divisions
             : s->temp_left;
        put_numbers(one, sizeof one, q->text, n, 1, 0);
        jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
        return;
    }
    if (q->numbers == 3) {
        /* The one cell the original prints with a bare `%g` -- 「（」's radius
         * at the end of its line.  See tools/stage_table.py's LOOSE. */
        sprintf(out, q->text, s->num[q->first]);
    } else if (q->numbers == 2) {
        const int k = q->first + 1 > 1 ? 1 : q->first + 1;

        sprintf(out, q->text, q->width[0], s->dec[q->first], s->num[q->first],
                q->width[1], s->dec[k], s->num[k]);
    } else if (q->numbers == 1) {
        sprintf(out, q->text, q->width[0], s->dec[q->first], s->num[q->first]);
    } else {
        strcpy(out, q->text);
    }
    jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, out);
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

/* The two counts and the label under them.  A command writes what it has
 * measured over them while it runs and the original puts them back the
 * moment it is finished, so this is called twice. */
static void counts(VGA *v, const JwUi *s)
{
    char buf[64];

    /* Paint the box again first.  Both of these are written transparently --
     * black letters on the green the box is filled with -- so writing over what
     * a command left there would leave both readable on top of each other.  The
     * original fills (1,17)-(120,47) line by line before it writes. */
    fill(v, 1, 17, 120, 47, 4);
    sprintf(buf, "%7ld|%7ld ", s->n_lines, s->n_arcs);
    jw_ui_text(v, 1, 2, 0, 0, buf);
    jw_ui_text(v, 1, 3, 0, 0, " \x90\xfc  \x90\x94|\x89\x7e\xa5\x95\xb6\x90\x94");
}

/* ------------------------------------------------------------------- draw */

/* The fifteen rows of the menu, at rows 5 to 19 of the character grid.  The
 * left column is command 16 to 30 and the right 1 to 15; the key goes between
 * them at column 8, and after the right label at column 15. */
/* The item that is picked is drawn the other way round: the original fills its
 * row with colour 6 and writes the label and the key over it in black.  The two
 * rectangles are (8,64)-(64,79) for the left column and (71,64)-(119,79) for
 * the right, sixteen pixels lower for each row down -- read off 0885:390f with
 * 移動 and 複写 picked. */
static void menu_pick(VGA *v, int command)
{
    const int left = command >= 16;
    const int row = left ? command - 16 : command - 1;
    char key[2];

    if (command < 1 || command > 30) {
        return;
    }
    fill(v, left ? 8 : 71, 64 + 16 * row, left ? 64 : 119, 79 + 16 * row, 6);
    key[0] = jw_ui_menu_key(command);
    key[1] = 0;
    jw_ui_text(v, left ? 2 : 10, row + 5, 0, 0, jw_ui_menu_label(command));
    jw_ui_text(v, left ? 8 : 15, row + 5, 0, 0, key);
}

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
    box(v, 0, 16, 121, 48, 7);
    counts(v, s);

    /* -- the menu ------------------------------------------------------- */
    menu(v);
    menu_pick(v, s->command);
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
    top_clear();
    if (s->command >= 1 && s->command <= 30) {
        /* what the original writes there once an item is picked, piece by
         * piece and in its own order -- see src/prompt.h */
        const JwPrompt *p = JW_PROMPT[s->command - 1];
        const JwPrompt *q;

        /* Picking an item also clears the two rows under the top line, right
         * across the drawing.  It shows only on a drawing that has something
         * up there: SAMPLE1 has 1,515 lit pixels in rows 32 to 47 and every
         * one of them is gone the moment an item is picked, while SAMPLE2 --
         * which tools/menucheck.sh uses -- has none, which is why this went
         * unnoticed.  Rows 17 to 47, columns 122 to 638: text rows 2 and 3,
         * the same band the prompts write in. */
        fill(v, 122, 17, 638, 47, 0);

        /* A command that writes in the band under the top line clears the two
         * counts out of the way first -- the original fills (1,17)-(120,47)
         * with colour 4 again, line by line, just before it writes there
         * (文字 does it at 43,996,047 instructions in).  Only when it writes
         * inside that box: ハッチ puts 残数 at column 70 and leaves the counts
         * alone. */
        for (q = p; q->col; q++) {
            if (q->row != 1 && q->col <= 15) {
                fill(v, 1, 17, 120, 47, 4);
                break;
            }
        }
        /* ③指定範囲 replaces the line 消去 came up with: the original writes
         * `指定範囲  始点マウス指示  (L)線･円  (R)線･円･文字 …` over the top
         * of it.  src/span.h holds that whole line as stage 0. */
        if (s->span && s->command == 25) {
            const JwStage *r;

            for (r = JW_SPAN; r->command; r++) {
                stage_text(v, r, s, 0);
            }
            p = q;              /* q is the terminator: skip the prompt */
        }
        for (; p->col; p++) {
            char out[160];
            const char *text = p->text;

            /* 文字's three numbers belong to the drawing, not to the capture:
             * the character type it writes with, and that type's pen, width
             * and height.  src/prompt.h holds what SAMPLE2 said (`[F4]`,
             * `ﾍﾟﾝ2`, `横 4.0 縦 4.0`), so the digits are put back from the
             * file -- SAMPLE0 says `[F3]` and `3.0`, SAMPLE3 `[F8]`, `ﾍﾟﾝ4`
             * and `8.0`, TEST7 `[F6]`, `ﾍﾟﾝ3` and `6.0`, all measured. */
            if (s->command == 13 && s->char_type) {
                double n[2];
                int k = 0;

                if (p->row == 1 && p->col == 8) {
                    n[k++] = s->char_type;
                } else if (p->row == 2 && p->col == 1) {
                    n[k++] = s->char_pen;
                } else if (p->row == 3 && p->col == 1) {
                    n[k++] = s->char_w / 10.0;
                    n[k++] = s->char_h / 10.0;
                }
                if (k) {
                    put_numbers(out, sizeof out, p->text, n, k, p->row == 3);
                    text = out;
                }
            }
            jw_ui_text(v, p->col, p->row, (unsigned)p->fg, (unsigned)p->bg,
                       text);
        }
        /* Then what the command has written since, stage by stage, because a
         * later stage only writes over part of what an earlier one left -- and
         * the original puts the two counts back between them, which is why they
         * are not on the screen when a command has finished. */
        for (i = 1; i <= s->stage; i++) {
            const JwStage *q;

            /* The original clears the top line and paints the counts box
             * again as it moves on -- `(0,0)-(639,15)` in black and
             * `(1,17)-(120,47)` in colour 4, both seen in the fills □ makes
             * when the box is finished.  Without it the tail of the line the
             * stage before left is still there.
             *
             * The counts go back only where the stage has nothing of its own
             * to put in that box.  Both are written transparently, so writing
             * one over the other leaves them both readable. */
            int own = 0;

            for (q = JW_STAGE; q->command; q++) {
                if (s->span && q->command == 25 && q->stage != 2) {
                    continue;   /* 指定範囲 has its own table -- but not for
                                 * stage 2, 復活出来ません, which is the same
                                 * line whichever of the three was picked */
                }
                if (q->command == s->command && q->stage == i
                    && (q->row == 2 || q->row == 3) && q->col <= 15
                    && !(q->moved && !s->moved)) {
                    own = 1;    /* inside the box, which is (1,17)-(120,47)
                                 * -- rows 2 and 3.  Columns 17 and 22 of the
                                 * same row are beside it, not in it, and so
                                 * is row 4: 文編集 writes ` Get type[tab]`
                                 * there when it is done and the counts are
                                 * back in the box under it. */
                }
            }
            for (q = JW_TYPED; q->command; q++) {
                if (q->command == s->command && q->stage == i
                    && (q->row == 2 || q->row == 3) && q->col <= 15) {
                    own = 1;
                }
            }
            for (q = JW_COPY; q->command; q++) {
                if (q->command == s->command && q->stage == i
                    && (q->row == 2 || q->row == 3) && q->col <= 15) {
                    own = 1;
                }
            }
            for (q = JW_MOVE; q->command; q++) {
                if (q->command == s->command && q->stage == i
                    && (q->row == 2 || q->row == 3) && q->col <= 15) {
                    own = 1;
                }
            }
            /* [ESC] puts the two counts back: □ and ○ write their sides and
             * radius into that box while they run, and after [ESC] the box
             * says `30| 13` again (measured -- 748 pixels of it). */
            if (s->escaped && i == s->stage) {
                own = 0;
            }
            fill(v, 0, 0, 639, 15, 0);
            /* The band right of the counts box goes too.  複線 leaves
             * `[F1]`..`[F5]` and the interval there while it asks, and the
             * original wipes the lot on the way to the next stage: the line
             * calls after the press are `(122,17)-(638,17)` down to
             * `(122,31)-(638,31)`, all in black.  The counts box itself
             * (columns 1 to 15) is painted separately just below. */
            fill(v, 122, 17, 638, 31, 0);
            top_clear();
            if ((s->command == 13 || s->command == 28)
                && i == 1 && s->typing_text) {
                /* 文字's field takes the screen over: the whole band under the
                 * top line goes black -- the counts and their label with it --
                 * and so does the strip along the very bottom.  Measured on
                 * SAMPLE0: after the press rows 16 to 47 are empty across all
                 * 640 columns except the string being typed at column 1, and
                 * rows 464 to 479 are empty too, where every other command
                 * leaves the zoom bar alone. */
                fill(v, 0, 17, 638, 47, 0);
                fill(v, 639, 17, 639, 47, 0);   /* the frame's right edge too */
                fill(v, 0, 464, 639, 479, 0);
                /* The white line under the top one survives only under the
                 * cells the string has filled: with `ABC` typed it is there
                 * from x 0 to 23 and gone from 24 on, with `A` from 0 to 7.
                 * The string is written in that row's cells, so what is left
                 * is what the string has not reached. */
                fill(v, s->typed_n * 8, 16, 638, 16, 0);
            } else if (own) {
                fill(v, 1, 17, 120, 47, 4);
            } else {
                counts(v, s);
            }
            /* [ESC] replaces the stage it came from: the line is blacked
             * and the band's numbers go back to the two counts, so none of
             * what that stage wrote is put up again. */
            for (q = JW_STAGE; !(s->escaped && i == s->stage) && q->command;
                 q++) {
                if (s->span && q->command == 25 && q->stage != 2) {
                    continue;
                }
                /* 線切断 is the right button of the same item as 線伸縮, and
                 * its line is kept at stage 11 so that both fit in the one
                 * table.  It is there only until the pointer moves off the
                 * cut, which is what JwUi.cutting says. */
                stage_text(v, q, s,
                           (s->cutting && i == 2 && s->command == 6) ? 11 : i);
            }
            /* The stages you can only reach by typing -- src/typed.h -- are
             * replayed the same way, out of their own table. */
            for (q = JW_TYPED; !(s->escaped && i == s->stage) && q->command;
                 q++) {
                if (s->span && q->command == 25 && q->stage != 2) {
                    continue;
                }
                stage_text(v, q, s, i);
            }
            /* ③指定範囲's own table.  Its first stage has two spellings, one
             * per button, and src/span.h keeps the left-button one as stage
             * 11 so that both can live in the one table. */
            if (s->span) {
                const JwStage *r;
                const int st = (i == 1 && !s->with_text) ? 11 : i;

                for (r = JW_SPAN; r->command; r++) {
                    stage_text(v, r, s, st);
                }
            }
            /* And [ESC].  It blacks the top line and writes three pieces:
             * a `・` at column 6, the command's own "ask again" text at
             * column 8 and `[BS]前項` at column 73 (src/esc.h).  The fill is
             * not in the string log -- what settled it is the screen, where
             * 「|①  ＋  |②寸 法 |…」 from the line before is gone. */
            if (s->escaped && i == s->stage) {
                const JwStage *r;

                fill(v, 0, 0, 639, 15, 0);
                top_clear();
                for (r = JW_ESC; r->command; r++) {
                    stage_text(v, r, s, 1);
                }
            }
            /* 複写 and 移動, kept apart the same way (src/copy.h,
             * src/move.h). */
            if (s->command == 1 || s->command == 16) {
                const JwStage *r;
                const int st = (i == 1 && !s->with_text) ? 11 : i;

                for (r = s->command == 1 ? JW_COPY : JW_MOVE; r->command; r++) {
                    stage_text(v, r, s, st);
                }
            }
            /* ○'s line has a little ◎ in it that is **not text**: after
             * `②基点変` the original draws it with its own circle routine.
             * Found by watching the pixel (DOSEMU_WATCH=A012A-A012A), which
             * says 10a9:0ccd wrote it -- inside FUN_20a9_0c8f, the four-way
             * step of the circle plotter at 20a9:0e18, which is jw_arc here.
             *
             * Three rings and the middle pixel, at (470,8): radius 5, 2 and 1
             * plus the point.  That is exactly the eleven rows the original
             * leaves, and it is how a program with no fill primitive fills a
             * disc.
             *
             * It says where the base point is: pressing `②基点変` takes the
             * middle away (the ring alone) and pressing it again puts it back.
             * The port has no 基点変, so it draws the one the command starts
             * with -- the middle, which is the centre of the circle. */
            /* 文字's field: the string as it has been typed so far, at
             * column 1 of row 2.  The original writes the whole of it again
             * after every key (`A`, `AB`, `ABC`), so this does the same. */
            if ((s->command == 13 || s->command == 28)
                && i == 1 && s->typing_text) {
                jw_ui_text(v, 1, 2, 7, 0, s->typed);
                /* and the block where the next character will go, colour 4,
                 * nine rows of the cell -- the same one 複線's field has.
                 * 文編集 starts with the cursor in front of the string it
                 * was given, so it goes where the cursor is, and it goes on
                 * **exclusive-or**: over the empty field 文字 has it reads 4
                 * either way, but over the left half of 「Ｈ」 the original
                 * reads ff00ff, which is 7 exclusive-or 4. */
                {
                    int y;

                    for (y = 23; y <= 31; y++) {
                        jw_line(v, s->typed_at * 8, y, s->typed_at * 8 + 7, y,
                                4, 0x18, JW_STYLE_SOLID);
                    }
                }
            }
            /* 線変更 says `線` or `円` there, whichever it took. */
            if (s->command == 24 && i == 1 && s->hit_kind) {
                jw_ui_text(v, 20, 2, 7, 0xffff,
                           s->hit_kind == 2 ? "\x89" "~" : "\x90" "\xfc");
            }
            if (s->command == 11 && i == 1 && !s->escaped) {
                jw_arc(v, 470, 8, 5, 0, 0, 7, ROP_REPLACE, JW_STYLE_SOLID);
                jw_arc(v, 470, 8, 2, 0, 0, 7, ROP_REPLACE, JW_STYLE_SOLID);
                jw_arc(v, 470, 8, 1, 0, 0, 7, ROP_REPLACE, JW_STYLE_SOLID);
                jw_point(v, 470, 8, 7, ROP_REPLACE);
            }
            /* 複写's distance field, the same shape but from column 18:
             * `[ESC].距離 X,Y =` fills columns 1 to 16 and the characters go in
             * one to a cell after it. */
            if (((s->command == 1 || s->command == 16) && i == 7)
                || (s->command == 21 && i == 2)) {
                int n;

                for (n = 0; n < s->typed_n && n < 8; n++) {
                    char one[4];

                    one[0] = s->typed[n];
                    one[1] = one[2] = ' ';
                    one[3] = 0;
                    jw_ui_text(v, 18 + n, 1, 7, 0, one);
                }
                /* The cursor, the same green block 複線 has: the lower nine
                 * rows of the cell the next character goes in.  Measured with
                 * `20,30` typed -- x176..183, y7..15, which is column 23. */
                n = s->typed_n < 8 ? s->typed_n : 8;
                fill(v, 136 + n * 8, 7, 143 + n * 8, 15, 4);
            }
            /* And the field itself: what has been typed, one character to a
             * cell from column 22, each of them clearing the two cells after
             * it the way the original writes them. */
            if (s->command == 5 && i == 1) {
                int n;

                for (n = 0; n < s->typed_n && n < 8; n++) {
                    char one[4];

                    one[0] = s->typed[n];
                    one[1] = one[2] = ' ';
                    one[3] = 0;
                    jw_ui_text(v, 22 + n, 1, 7, 0, one);
                }
                /* And the cursor: a green block in the lower nine rows of the
                 * cell the next character goes in.  Measured on the original
                 * with nothing typed (x168..175, y7..15, colour 4) and with
                 * two characters in (x184..191, the same rows), so it is the
                 * cell at column 22 + however many have been typed. */
                n = s->typed_n < 8 ? s->typed_n : 8;
                fill(v, 168 + n * 8, 7, 175 + n * 8, 15, 4);
            }
        }
        /* □ shows where the box it is about to draw is anchored: a little
         * frame at the right-hand end of the top line, in the blank after
         * 「④基点変」.  Four solid white lines, read straight off the
         * original -- (580,3)-(590,3)-(590,13)-(580,13) and back -- drawn the
         * moment the first point is taken.  Pressing ④基点変 puts a blob in
         * the middle of it and pressing again takes it away, which is the
         * anchor moving; that part is not measured yet, so only the empty
         * frame is here.
         *
         * Only □, and only while it is waiting for the second point: the
         * frame is gone again once the box is drawn, and the original writes
         * its own words over that corner.  All thirty items were picked in
         * turn and pressed once (SAMPLE0 at (250,150)); item 4 is the only one
         * that draws it. */
        if (s->command == 4 && s->stage == 1 && !s->escaped) {
            box(v, 580, 3, 590, 13, 7);
        }
        /* What a *modified* read would take, which is there while a modifier
         * key is held and the pointer is over the drawing -- see src/snap.h.
         * Last, because a stage writes spaces at column 17 on a black
         * background and those reach across column 22.  With no modifier held
         * the original writes those spaces and nothing else. */
        const int row = snap_row(s->mods);

        /* 複線's 間隔取得 asks for a point, and while it is asking, the word
         * for what the right button would take is on the screen even though
         * the command has none of its own (src/snap.h has nothing for 5).
         * Column 22 only -- the original writes 円周1/4点 there, the same
         * as □ and ○ do, and leaves column 17 alone.
         *
         * [CTRL] only: this was measured when every run behaved as though Ctrl
         * were held, so it is a [CTRL] measurement.  What [SHIFT] and [GRPH]
         * write here has not been measured. */
        if (row == JW_SNAP_CTRL && s->snap && s->command == 5
            && s->stage == 5) {
            jw_ui_text(v, 22, 2, 7, 0, JW_SNAP[JW_SNAP_CTRL][3][1]);
        }
        /* 複写 and 移動 say what the right button would take from the moment
         * the range is fixed and they are asking how to do it -- stage 4 on --
         * and not while the range is being taken.  Measured: with the pointer
         * over the drawing, the two presses that make the box leave the band
         * empty, ①同形別処理 (which goes back to stage 4) puts 円周1/4点 back,
         * and it is gone again once it is asking for the distance (stage 7)
         * or the copy is made (stage 8).  A [CTRL] measurement, as above. */
        if (row == JW_SNAP_CTRL && s->snap
            && (s->command == 1 || s->command == 16)
            && s->stage >= 4 && s->stage <= 6) {
            jw_ui_text(v, 22, 2, 7, 0, JW_SNAP[JW_SNAP_CTRL][3][1]);
        }
        /* None of them while 文字 is taking a string: the band is black. */
        if (row >= 0 && s->snap && !s->typing_text && !s->escaped
            && JW_SNAP[row][s->command - 1][0]) {
            jw_ui_text(v, 17, 2, 7, 0, JW_SNAP[row][s->command - 1][0]);
        }
        if (row >= 0 && s->snap && !s->typing_text && !s->escaped
            && JW_SNAP[row][s->command - 1][1]) {
            jw_ui_text(v, 22, 2, 7, 0, JW_SNAP[row][s->command - 1][1]);
        }
        /* 「読取可能データ無」 -- what a command that looks for an entity
         * says when the press found none.  Read off the original with 線消 on
         * SAMPLE6 and a press at (244,140), which is 8.5 from the nearest arc
         * and further from every line:
         *
         *     [bp] 0DEF:23C5  col=0x20 row=0x0002 fg=0x0007 bg=0x0000
         *          07 93 C7 8E E6 89 C2 94 5C 83 66 81 5B 83 5E 96 B3
         *
         * The first byte is a BEL, which takes a cell and paints nothing --
         * the emulator's log prints every byte under 0x20 as a dot, so it
         * reads as a full stop there and is not one.
         *
         * It stays up: a second press that misses leaves it, and it goes only
         * when a press finds something (the band is repainted) or another item
         * is picked.  Both were measured -- 線消 at (244,140) then (446,189)
         * leaves the band empty, and picking 複写 after the miss clears it. */
        if (s->missed) {
            jw_ui_text(v, 32, 2, 7, 0,
                       "\x07" "\x93" "\xc7" "\x8e" "\xe6" "\x89"
                       "\xc2" "\x94" "\x5c" "\x83" "\x66" "\x81"
                       "\x5b" "\x83" "\x5e" "\x96" "\xb3");
        }
        /* A modified read that is waiting for its second press writes a line
         * of its own.  Last of all, because it goes over everything: the top
         * line is blacked and takes [ESC] and the mode's own text, and the
         * band beside the counts has the words the key put there **wiped**
         * (fourteen spaces at column 17) and サーチ left in their place.  All
         * of it is src/snapmsg.h, straight out of the original; the fill is
         * not in the string log and the screen is what says it happens, the
         * same way [ESC]'s fill was settled. */
        if (s->snapping) {
            const JwSnapMsg *m;

            fill(v, 0, 0, 639, 15, 0);
            top_clear();
            /* And the band beside the counts, which goes black from
             * the drawing area's left edge to its right.  Measured on
             * the screen rather than in the string log: with the mode
             * up, every pixel of y17..31 from x122 to x638 is black,
             * the words the key had put there included. */
            fill(v, 122, 17, 638, 31, 0);
            for (m = JW_SNAPMSG; m->text; m++) {
                if (m->mode == s->snapping) {
                    jw_ui_text(v, m->col, m->row, 7, 0, m->text);
                }
            }
        }
    } else {
        jw_ui_text(v, 8, 1, 7, 0,
                   "|| JW_CADV version 2.22H  Copyright (c) jw_software club "
                   "1991-1999 ||");
    }
    jw_line(v, 0, 16, 639, 16, 7, ROP_REPLACE, JW_STYLE_SOLID);
    /* 文字's field takes that line away from where the string it is taking
     * has got to -- see the stage loop, where the rest of the band goes. */
    if ((s->command == 13 || s->command == 28) && s->typing_text) {
        fill(v, s->typed_n * 8, 16, 638, 16, 0);
    }
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
