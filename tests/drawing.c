/* Read a .JWC drawing and draw it with the translated primitives.
 *
 *   ./tests/drawing.exe orig/SAMPLE2.JWC tmp/sample2.png
 *
 * The whole path is the port's own: src/jwc.c reads the file, src/draw.c draws
 * the lines through src/vga.c's graphics controller, and what comes out is the
 * 640x480 four-plane screen mode 12h would hold.
 *
 * Arcs are drawn as polygons here.  The original's arc routine is
 * FUN_20a9_0e18, 1668 bytes with ten arguments, and it has not been translated
 * yet; this stands in so the drawing is complete enough to judge.
 */
#include "draw.h"
#include "jwc.h"
#include "png.h"

#include <math.h>
#include <stdio.h>
#include <string.h>

static VGA v;
static unsigned char pixels[VGA_MAX_STRIDE * 8 * VGA_MAX_HEIGHT];
static unsigned char pal[256][3];

static float sx, sy, scale;

static int to_x(float x) { return (int)((x - sx) * scale) + 8; }
static int to_y(float y) { return v.height - 9 - (int)((y - sy) * scale); }

static void put_line(float x0, float y0, float x1, float y1, unsigned colour)
{
    jw_line(&v, to_x(x0), to_y(y0), to_x(x1), to_y(y1), colour, ROP_REPLACE,
            JW_STYLE_SOLID);
}

int main(int argc, char **argv)
{
    const char *in = argc > 1 ? argv[1] : "orig/SAMPLE2.JWC";
    const char *out = argc > 2 ? argv[2] : "tmp/drawing.png";
    const char *why;
    unsigned char rgb[16][3];
    float x0, y0, x1, y1;
    Jwc *d;
    long k;
    int i;

    d = jwc_load(in, &why);
    if (!d) {
        fprintf(stderr, "%s: %s\n", in, why);
        return 1;
    }
    printf("%s: %ld lines, %ld arcs, %d points, %d strings, geometry at +%ld\n",
           in, d->n_lines, d->n_arcs, d->n_points, d->n_strings, d->lines_at);

    vga_reset(&v, 0x12);
    jwc_extent(d, &x0, &y0, &x1, &y1);
    sx = x0;
    sy = y0;
    scale = (float)(v.width - 16) / (x1 - x0);
    if ((float)(v.height - 16) / (y1 - y0) < scale) {
        scale = (float)(v.height - 16) / (y1 - y0);
    }

    for (k = 0; k < d->n_lines; k++) {
        /* attr[0] varies with the pen, so use it for colour until the
         * attribute bytes are pinned down properly. */
        unsigned c = (unsigned)(9 + (d->lines[k].attr[0] % 7));
        put_line(d->lines[k].x0, d->lines[k].y0,
                 d->lines[k].x1, d->lines[k].y1, c);
    }
    for (k = 0; k < d->n_arcs; k++) {
        float cx = d->arcs[k].cx, cy = d->arcs[k].cy, r = d->arcs[k].r;
        float px = cx + r, py = cy;

        for (i = 1; i <= 48; i++) {
            double a = i * 6.283185307179586 / 48.0;
            float qx = cx + r * (float)cos(a);
            float qy = cy + r * (float)sin(a);

            put_line(px, py, qx, qy, 14);
            px = qx;
            py = qy;
        }
    }

    vga_render(&v, pixels);
    vga_palette_rgb(&v, rgb);
    memset(pal, 0, sizeof pal);
    for (i = 0; i < 16; i++) {
        pal[i][0] = rgb[i][0];
        pal[i][1] = rgb[i][1];
        pal[i][2] = rgb[i][2];
    }
    png_indexed(out, v.width, v.height, pixels,
                (const unsigned char (*)[3])pal);
    printf("wrote %s\n", out);
    jwc_free(d);
    return 0;
}
