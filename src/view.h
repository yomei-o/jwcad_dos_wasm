/* Putting a drawing on the screen: the part the native and WASM front ends
 * share.  Everything below the line -- jwc.c, draw.c, vga.c -- is the port. */
#ifndef JW_VIEW_H
#define JW_VIEW_H

#include "fontx.h"
#include "jwc.h"
#include "vga.h"

typedef struct {
    float ox, oy;       /* the drawing coordinate the anchor stands for */
    float scale;        /* screen pixels per drawing unit */
    float ax, ay;       /* the screen position (ox,oy) lands on */
    int x0, y0, x1, y1; /* the window on screen, inclusive; outside it, nothing */
    /* Which layer group to draw, plus one -- 0 is every group, which is what
     * a JwView that nobody set means.  グループ データ表示 wants one group
     * per panel and nothing else does. */
    int group1;
    /* 用紙枠 as a closed rectangle, corner to corner, instead of four lines
     * run out to the window's edges.  The main view needs the second (only
     * part of the paper is on screen); グループ データ表示's little panels
     * hold the whole sheet and the original draws the box. */
    int frame_box;
    /* One layer, plus one -- the whole byte, group and layer.  レイヤ
     * データ表示 wants one layer per panel; 0 means "whatever group1
     * says". */
    int layer1;
} JwView;

/* The view that fits the whole drawing on the screen, with a small margin.
 * A viewer's convenience, and not what the original does -- see below. */
void jw_view_fit(JwView *w, const VGA *v, const Jwc *d);

/* The same, into a given window rather than the whole screen: what the browser
 * front end wants once the frame is drawn round the drawing, since the drawing
 * has to stay inside (122,17)-(638,462). */
void jw_view_fit_in(JwView *w, const Jwc *d, int x0, int y0, int x1, int y1);

/* ズームバーの ■拡大■: the rectangle two presses gave fills the window. */
void jw_view_zoom(JwView *w, int sx0, int sy0, int sx1, int sy1);

/* 倍率指定[XFER] の右押し: 原寸（表示倍率 1.0）でその点を中心に。 */
void jw_view_actual(JwView *w, const Jwc *d, int sx, int sy);

/* The view the original uses.
 *
 * Measured, not guessed: breaking on the original's own line routine
 * (dosv_emu_cpp, `DOSEMU_BP=0EFF:17BB DOSEMU_BPPTR=2,3,4,5`) prints the screen
 * coordinates it computed for each of the drawing's lines, and comparing those
 * against the same lines in the .JWC gives
 *
 *     screen_x = x + 121        screen_y = 463 - y
 *
 * for SAMPLE1, SAMPLE2, SAMPLE3 and TEST1 alike, to within the rounding of one
 * pixel.  So the scale is **one**: a .JWC holds screen units for the view it
 * was saved with, and JW_CAD puts them down where they are.  Its drawing area
 * is (122,17)-(638,462), which is what it hands to its own clip (0def:12e8).
 *
 * The conversion to a pixel is a plain truncation of that float, not a rounding
 * and not a truncation of the drawing coordinate before the offset is added:
 * for a vertical line at 168.091 the original lights column 168, where
 * `(int)47.091 + 121` would light 167.  So the anchor is kept as a float and
 * added before the cast.  (This is also why the anchor and the window have to
 * be separate fields: the anchor is 121/463, the window is the drawing area.)
 *
 * This is what a screen comparison against the original has to use; jw_view_fit
 * answers a different question (how do I see all of it at once). */
void jw_view_original(JwView *w);

/* Load the fonts the port draws text with, from a directory holding
 * JWANK16.FNT and JWKAN16.FNT.  Text is skipped if they are not there. */
int jw_view_fonts(const char *dir);

/* The two fonts jw_view_fonts loaded.  The screen chrome in src/ui.c draws
 * with them too, at their own size -- the original's menus go through the same
 * DOS/V font it hands the drawing. */
const Fontx *jw_view_ank(void);

/* One text, in a colour of the caller's choosing.  jw_view_draw uses the pen
 * the drawing gives it; 消去 paints what it has picked again in colour 2, and
 * that is the only reason this is not private to view.c. */
void jw_view_text(VGA *v, const Jwc *d, const JwcText *t, const JwView *w,
                  unsigned colour);

/* What colour a text of this character size comes out in -- the drawing's own
 * MPEN table through LCOLLOR.  複写 needs it to put a copied text back on top
 * of what it reddened. */
unsigned jw_view_text_colour(const Jwc *d, unsigned size);

/* One line, clipped the way jw_view_draw clips it. */
/* A line in drawing coordinates, cut to the window.  What the range marking
 * uses: jw_line itself does not clip. */
void jw_view_mark(VGA *v, const JwView *w, double ax, double ay,
                  double bx, double by, unsigned colour, int style);

void jw_view_line(VGA *v, const Jwc *d, const JwcLine *l, const JwView *w,
                  unsigned colour);

/* And one arc, the same way. */
void jw_view_arc(VGA *v, const Jwc *d, const JwcArc *a, const JwView *w,
                 unsigned colour);
const Fontx *jw_view_kanji(void);

/* What colour a pen draws in -- the original's own table, DGROUP 0x0a70.
 * The panel down the left writes `Pen.n` in it too. */
unsigned jw_view_pen_colour(unsigned pen);

/* And the bit pattern a line type draws with -- DGROUP 0x0a88.  The short
 * line in the panel beside `Pen.n` is a sample drawn in both. */
int jw_view_line_style(unsigned type);

/* Install JW_CAD's own sixteen colours from JW_PAL.DAT.  Returns how many
 * entries were read; 0 leaves the EGA defaults in place.
 *
 * The original does this at startup through INT 10h AX=1010h, one entry at a
 * time, and its colours are not the defaults -- 4 is green, 6 is yellow, 7 is
 * white.  Without it the port draws the right pixels in the wrong colours, and
 * the screen comparison against dosv_emu_cpp (which installs the same file
 * because the guest asks it to) fails on every coloured pixel. */
int jw_view_palette(VGA *v, const char *path);

/* The same as jw_view_draw without the clearing, for a drawing that goes
 * into part of a screen someone else is building. */
void jw_view_draw_into(VGA *v, const Jwc *d, const JwView *w);

/* Clear and draw.  Lines and arcs go through the translated primitives; texts
 * are drawn with the fonts, points as a cross. */
void jw_view_draw(VGA *v, const Jwc *d, const JwView *w);

/* 640x480 bytes of one colour index per pixel, then RGBA for a canvas. */
void jw_view_rgba(const VGA *v, const unsigned char *pixels, unsigned char *rgba);

#endif
