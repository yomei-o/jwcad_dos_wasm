/* Read a .JWC drawing and draw it with the translated primitives.
 *
 *   ./tests/drawing.exe orig/SAMPLE2.JWC tmp/sample2.png
 *   ./tests/drawing.exe orig/SAMPLE2.JWC tmp/sample2.raw   # RGBA, for diffing
 *
 * The whole path is the port's own: src/jwc.c reads the file, src/view.c lays
 * it out, src/draw.c draws through src/vga.c's graphics controller, and what
 * comes out is the 640x480 four-plane screen mode 12h would hold.  The WASM
 * front end runs exactly the same code, which is what tests/wasm_check.js
 * checks by comparing the two byte for byte.
 */
#include "jwc.h"
#include "png.h"
#include "view.h"

#include <stdio.h>
#include <string.h>

static VGA v;
static JwView w;
static unsigned char pixels[VGA_MAX_STRIDE * 8 * VGA_MAX_HEIGHT];
static unsigned char rgba[640 * 480 * 4];
static unsigned char pal[256][3];

int main(int argc, char **argv)
{
    const char *in = argc > 1 ? argv[1] : "orig/SAMPLE2.JWC";
    const char *out = argc > 2 ? argv[2] : "tmp/drawing.png";
    const char *why;
    unsigned char rgb[16][3];
    size_t n = strlen(out);
    Jwc *d;
    int i;

    d = jwc_load(in, &why);
    if (!d) {
        fprintf(stderr, "%s: %s\n", in, why);
        return 1;
    }
    printf("%s: %ld lines, %ld arcs, %d texts, %d points, data +%ld..%ld\n",
           in, d->n_lines, d->n_arcs, d->n_texts, d->n_points,
           d->data_at, d->data_end);

    vga_reset(&v, 0x12);
    if (!jw_view_fonts("font")) {
        fprintf(stderr, "no fonts in font/ -- text will be skipped\n");
    }
    if (!jw_view_palette(&v, "orig/JW_PAL.DAT")) {
        fprintf(stderr, "no orig/JW_PAL.DAT -- the EGA default colours will be used\n");
    }
    jw_view_fit(&w, &v, d);
    jw_view_draw(&v, d, &w);
    vga_render(&v, pixels);

    if (n > 4 && strcmp(out + n - 4, ".raw") == 0) {
        FILE *f = fopen(out, "wb");

        jw_view_rgba(&v, pixels, rgba);
        if (!f) {
            fprintf(stderr, "cannot write %s\n", out);
            return 1;
        }
        fwrite(rgba, 1, (size_t)v.width * v.height * 4, f);
        fclose(f);
    } else {
        vga_palette_rgb(&v, rgb);
        memset(pal, 0, sizeof pal);
        for (i = 0; i < 16; i++) {
            pal[i][0] = rgb[i][0];
            pal[i][1] = rgb[i][1];
            pal[i][2] = rgb[i][2];
        }
        png_indexed(out, v.width, v.height, pixels,
                    (const unsigned char (*)[3])pal);
    }
    printf("wrote %s\n", out);
    jwc_free(d);
    return 0;
}
