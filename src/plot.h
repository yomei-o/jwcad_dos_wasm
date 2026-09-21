/* Plotter output: the drawing as a PDF or a PNG.
 *
 * 入出力 → ②ﾌﾟﾛｯﾀ → ③ﾌｧｲﾙ出力 is where the original sends a drawing to a
 * plotter, through a `*.JWP` definition that says what the plotter's command
 * language is.  The browser has no plotter, so the port hands the person the
 * two things a plotter's paper is for: a PDF to print and a PNG to look at.
 *
 * Everything below works in **millimetres of paper with y upwards**, which is
 * what a plotter's coordinates are: a drawing unit is `1 / unit_mm` of those,
 * and unit_mm is 518 / the paper's width (src/jwc.c).
 */
#ifndef JW_PLOT_H
#define JW_PLOT_H

#include "jwc.h"

/* Where a walk over the drawing sends what it finds.  Any of the three may
 * be null; the walk skips what nobody wants. */
typedef struct {
    void (*line)(void *u, double x0, double y0, double x1, double y1,
                 int pen, int type);
    /* An arc, already turned into a run of points (`n` of them): the
     * flattening is the walk's business, not the sink's. */
    void (*poly)(void *u, const double *xy, int n, int pen, int type);
    /* A string on its baseline: (x,y) is where it starts, `dir` is the
     * baseline's angle in radians, `h` and `wide` are the character cell in
     * millimetres, and `text` is Shift-JIS. */
    void (*text)(void *u, double x, double y, double dir, double h,
                 double wide, const char *text, int pen);
    void (*point)(void *u, double x, double y);
} JwPlotSink;

void jw_plot_walk(const Jwc *d, const JwPlotSink *k, void *u);

/* The page: what was drawn, with ten millimetres round it, in millimetres
 * of paper.  (The red dotted rectangle on screen is the **screen's** frame,
 * not the sheet -- JW_CAD.DOC's `-H` switch says so -- so there is no sheet
 * to take the size from.) */
void jw_plot_box(const Jwc *d, double *x0, double *y0, double *x1,
                 double *y1);

/* Its width and height, which is the same thing said shorter. */
void jw_plot_paper(const Jwc *d, double *wide, double *tall);

/* A one-page PDF of the drawing, malloc'd; NULL if there was no memory.
 * Japanese goes in as Shift-JIS through the 90ms-RKSJ-H encoding of one of
 * PDF's own CJK fonts, so nothing has to be embedded. */
unsigned char *jw_plot_pdf(const Jwc *d, long *len);

/* And a PNG, `dpmm` pixels to the millimetre (4 is a readable A4). */
unsigned char *jw_plot_png(const Jwc *d, double dpmm, long *len);

#endif
