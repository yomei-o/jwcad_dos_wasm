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

#endif
