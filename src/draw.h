/* JW_CAD's drawing primitives, translated from the `20a9` segment. */
#ifndef JW_DRAW_H
#define JW_DRAW_H

#include "vga.h"

/* No line style: draw every pixel.  The original passes -1. */
#define JW_STYLE_SOLID (-1)

/* FUN_20a9_07dc -- one line, in `colour`, combined with what is already there
 * by `rop` (one of the ROP_* values, which go straight into GC 3).
 *
 * `style` is a 16-bit pattern rotated left one bit per pixel; a set bit draws.
 * JW_STYLE_SOLID takes the fast paths: whole bytes at a time when the line is
 * horizontal, and pixels accumulated within a byte when it is shallow.
 */
void jw_line(VGA *v, int x0, int y0, int x1, int y1,
             unsigned colour, unsigned rop, int style);

/* FUN_20a9_0732 -- point the graphics controller at a colour and an operation.
 * Exposed because the original calls it on its own as well. */
void jw_set_colour(VGA *v, unsigned colour, unsigned rop);

/* FUN_20a9_075c -- one pixel, through write mode 2, which is how the arc draws
 * (the line routine uses mode 0 and the set/reset register instead). */
void jw_point(VGA *v, int x, int y, unsigned colour, unsigned rop);

/* FUN_20a9_0e18 -- an ellipse, or the part of one between two angles.
 *
 * `rx` is the semi-axis across, `flatten` the other one as a ratio x10000 (so
 * 10000 is a circle), `tilt` the whole thing turned by that many degrees, and
 * `start`/`end` the sweep in degrees anticlockwise.  start == end draws it all.
 * These are the units the .JWC arc record stores, and the original's own, which
 * works in whole degrees out of 360 (`0x168` all through FUN_20a9_0e18).
 */
/* An arc as the original draws it once the radius reaches five: a chain of
 * straight pieces, the vertices being the float centre plus whole numbers from
 * its own integer cosine.  `start`/`end` are the record's own degrees and
 * `tilt` its own tilt -- this routine does the screen flip itself. */
void jw_arc_poly(VGA *v, double cx, double cy, int rx, int ry, int tilt,
                 double start, double end, unsigned colour, unsigned rop,
                 int style);

void jw_arc(VGA *v, int cx, int cy, int rx, int flatten, int tilt,
            double start, double end, unsigned colour, unsigned rop, int style);

/* FUN_20a9_014e -- stamp one glyph's bitmap at a pixel position, in write
 * mode 3, painting the background where the glyph's bits are clear.  Pass
 * bg == fg to leave the background alone. */
void jw_glyph(VGA *v, int x, int y, int w, int h,
              const unsigned char *bits, unsigned fg, unsigned bg);

#endif
