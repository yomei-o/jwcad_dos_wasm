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

/* Clear and draw.  Lines and arcs go through the translated primitives; texts
 * are drawn with the fonts, points as a cross. */
void jw_view_draw(VGA *v, const Jwc *d, const JwView *w);

/* 640x480 bytes of one colour index per pixel, then RGBA for a canvas. */
void jw_view_rgba(const VGA *v, const unsigned char *pixels, unsigned char *rgba);

#endif
