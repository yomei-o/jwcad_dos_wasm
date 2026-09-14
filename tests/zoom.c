/* Draw a drawing zoomed in, the way the browser front end does, and say
 * whether anything landed where it should not.
 *
 *     ./tests/zoom.exe orig/SAMPLE1.JWC [factor] [out.raw]
 *
 * The browser view (jw_view_fit plus jw_zoom) is not clipped to a drawing area
 * the way the original's is -- the whole screen is the window -- so every
 * primitive has to keep itself inside the screen.  A glyph that ran off the
 * right edge used to carry on into the *left* of the next scan line, which is
 * what "rubbish outside the drawing" and "the text goes double when I zoom in"
 * both were.  This is the check for it: zoom until most of the drawing is off
 * screen, then count the pixels outside a border that nothing should reach.
 */
#include "jwc.h"
#include "png.h"
#include "view.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static unsigned char pixels[640 * 480];
static unsigned char rgba[640 * 480 * 4];

int main(int argc, char **argv)
{
    VGA v;
    JwView w;
    const char *why;
    Jwc *d;
    double factor = argc > 2 ? atof(argv[2]) : 8.0;
    long lit = 0;
    int x, y;

    if (argc < 2) {
        fprintf(stderr, "usage: zoom DRAWING.JWC [factor] [out.raw]\n");
        return 2;
    }
    d = jwc_load(argv[1], &why);
    if (!d) {
        fprintf(stderr, "%s: %s\n", argv[1], why);
        return 1;
    }
    vga_reset(&v, 0x12);
    jw_view_fonts("font");
    jw_view_palette(&v, "orig/JW_PAL.DAT");
    jw_view_fit(&w, &v, d);
    /* Zoom about the middle, as the browser does about the pointer. */
    w.ox += (float)((v.width / 2 - w.ax) / w.scale);
    w.oy += (float)((w.ay - v.height / 2) / w.scale);
    w.scale = (float)(w.scale * factor);
    w.ax = (float)(v.width / 2);
    w.ay = (float)(v.height / 2);
    /* A margin, so that "outside the window" means something: with the whole
     * screen as the window a glyph that runs off the right edge lands on the
     * left of the next line and the count stays zero. */
    w.x0 = 40;
    w.y0 = 40;
    w.x1 = v.width - 41;
    w.y1 = v.height - 41;
    jw_view_draw(&v, d, &w);
    vga_render(&v, pixels);

    /* Nothing may be drawn outside the view's own window. */
    for (y = 0; y < v.height; y++) {
        for (x = 0; x < v.width; x++) {
            if (!pixels[y * v.width + x]) {
                continue;
            }
            if (x < w.x0 || x > w.x1 || y < w.y0 || y > w.y1) {
                lit++;
            }
        }
    }
    printf("%s at %gx: %ld pixels outside the window (%d,%d)-(%d,%d)\n",
           argv[1], factor, lit, w.x0, w.y0, w.x1, w.y1);
    if (argc > 3) {
        FILE *f = fopen(argv[3], "wb");

        if (f) {
            jw_view_rgba(&v, pixels, rgba);
            fwrite(rgba, 1, sizeof rgba, f);
            fclose(f);
        }
    }
    jwc_free(d);
    return lit ? 1 : 0;
}
