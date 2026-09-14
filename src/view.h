/* Putting a drawing on the screen: the part the native and WASM front ends
 * share.  Everything below the line -- jwc.c, draw.c, vga.c -- is the port. */
#ifndef JW_VIEW_H
#define JW_VIEW_H

#include "fontx.h"
#include "jwc.h"
#include "vga.h"

typedef struct {
    float ox, oy;       /* the drawing coordinate at the bottom-left corner */
    float scale;        /* screen pixels per drawing unit */
} JwView;

/* The view that fits the whole drawing on the screen, with a small margin. */
void jw_view_fit(JwView *w, const VGA *v, const Jwc *d);

/* Load the fonts the port draws text with, from a directory holding
 * JWANK16.FNT and JWKAN16.FNT.  Text is skipped if they are not there. */
int jw_view_fonts(const char *dir);

/* Install JW_CAD's own sixteen colours from JW_PAL.DAT.  Returns how many
 * entries were read; 0 leaves the EGA defaults in place.
 *
 * The original does this at startup through INT 10h AX=1010h, one entry at a
 * time, and its colours are not the defaults -- 4 is green, 6 is yellow, 7 is
 * white.  Without it the port draws the right pixels in the wrong colours, and
 * the screen comparison against dosv_emu_cpp (which installs the same file
 * because the guest asks it to) fails on every coloured pixel. */
int jw_view_palette(VGA *v, const char *path);

/* Clear and draw.  Lines and arcs go through the translated primitives; texts
 * are drawn with the fonts, points as a cross. */
void jw_view_draw(VGA *v, const Jwc *d, const JwView *w);

/* 640x480 bytes of one colour index per pixel, then RGBA for a canvas. */
void jw_view_rgba(const VGA *v, const unsigned char *pixels, unsigned char *rgba);

#endif
