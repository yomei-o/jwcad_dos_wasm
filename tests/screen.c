/* Draw with the translated primitives and write the screen out as a PNG, so
 * what `src/draw.c` produces can actually be looked at.
 *
 *   sh tools/build_tests.sh && ./tests/screen.exe tmp/lines.png
 */
#include "draw.h"
#include "png.h"

#include <math.h>
#include <stdio.h>
#include <string.h>

static VGA v;
static unsigned char pixels[VGA_MAX_STRIDE * 8 * VGA_MAX_HEIGHT];
static unsigned char pal[256][3];

/* A box, as four calls to the line routine. */
static void box(int x0, int y0, int x1, int y1, unsigned colour, int style)
{
    jw_line(&v, x0, y0, x1, y0, colour, ROP_REPLACE, style);
    jw_line(&v, x1, y0, x1, y1, colour, ROP_REPLACE, style);
    jw_line(&v, x1, y1, x0, y1, colour, ROP_REPLACE, style);
    jw_line(&v, x0, y1, x0, y0, colour, ROP_REPLACE, style);
}

int main(int argc, char **argv)
{
    const char *path = argc > 1 ? argv[1] : "tmp/lines.png";
    unsigned char rgb[16][3];
    int i;

    vga_reset(&v, 0x12);

    /* A fan, to exercise both Bresenham arms in every direction. */
    for (i = 0; i < 32; i++) {
        double a = i * 6.2831853071795864 / 32.0;
        int x = 160 + (int)(140.0 * cos(a));
        int y = 160 + (int)(140.0 * sin(a));
        jw_line(&v, 160, 160, x, y, (unsigned)(1 + (i % 15)), ROP_REPLACE,
                JW_STYLE_SOLID);
    }

    box(4, 4, 316, 316, 15, JW_STYLE_SOLID);
    box(12, 12, 308, 308, 8, 0xf0f0);

    /* Shallow and steep runs, so the byte-accumulating path and the
     * carry-stepping path both appear. */
    for (i = 0; i < 10; i++) {
        jw_line(&v, 340, 20 + i * 6, 630, 20 + i * 30, 10, ROP_REPLACE,
                JW_STYLE_SOLID);
        jw_line(&v, 340 + i * 30, 330, 360 + i * 6, 470, 12, ROP_REPLACE,
                JW_STYLE_SOLID);
    }

    /* Dashes and a horizontal run that crosses many byte borders. */
    for (i = 0; i < 8; i++) {
        jw_line(&v, 20, 330 + i * 8, 300, 330 + i * 8, 14, ROP_REPLACE,
                (int)(0xffffu >> i));
    }

    /* XOR twice has to leave no trace, which is what the rubber band relies on. */
    jw_line(&v, 20, 470, 300, 470, 7, ROP_XOR, JW_STYLE_SOLID);
    jw_line(&v, 20, 470, 300, 470, 7, ROP_XOR, JW_STYLE_SOLID);

    vga_render(&v, pixels);
    vga_palette_rgb(&v, rgb);
    memset(pal, 0, sizeof pal);
    for (i = 0; i < 16; i++) {
        pal[i][0] = rgb[i][0];
        pal[i][1] = rgb[i][1];
        pal[i][2] = rgb[i][2];
    }
    png_indexed(path, v.width, v.height, pixels, (const unsigned char (*)[3])pal);
    printf("wrote %s  %dx%d\n", path, v.width, v.height);
    return 0;
}
