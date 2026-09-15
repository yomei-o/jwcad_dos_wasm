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
#include "cmd.h"
#include "ui.h"
#include "view.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static VGA v;
static JwView w;
static unsigned char pixels[VGA_MAX_STRIDE * 8 * VGA_MAX_HEIGHT];
static unsigned char rgba[640 * 480 * 4];
static unsigned char pal[256][3];

int main(int argc, char **argv)
{
    /* -u: the whole screen, the frame around the drawing as well, so it can be
     * compared with the original's picture with nothing masked out.
     * -c N: and with menu item N picked, the way a click leaves it. */
    int ui = 0, original = 0, command = 0, a = 1;
    int mx = 200, my = 200;     /* where the original leaves the pointer */
    int press[8][3], n_press = 0, stage = 0, top_x = -1;
    double num[2] = { 0.0, 0.0 };
    int dec[2] = { 3, 3 };
    JwCmd c;
    const char *in, *out;
    const char *why;
    unsigned char rgb[16][3];
    size_t n;
    Jwc *d;
    int i;

    while (a < argc && argv[a][0] == '-') {
        if (strcmp(argv[a], "-u") == 0) {
            ui = original = 1;
            a++;
        } else if (strcmp(argv[a], "-o") == 0) {
            original = 1;
            a++;
        } else if (strcmp(argv[a], "-m") == 0 && a + 2 < argc) {
            mx = atoi(argv[a + 1]);
            my = atoi(argv[a + 2]);
            a += 3;
        } else if (strcmp(argv[a], "-p") == 0 && a + 2 < argc && n_press < 8) {
            press[n_press][0] = atoi(argv[a + 1]);
            press[n_press][1] = atoi(argv[a + 2]);
            press[n_press][2] = 0;
            n_press++;
            a += 3;
        } else if (strcmp(argv[a], "-r") == 0 && a + 2 < argc && n_press < 8) {
            /* the other button */
            press[n_press][0] = atoi(argv[a + 1]);
            press[n_press][1] = atoi(argv[a + 2]);
            press[n_press][2] = 1;
            n_press++;
            a += 3;
        } else if (strcmp(argv[a], "-t") == 0 && a + 1 < argc) {
            /* a press on the top line, which is a menu of its own */
            top_x = atoi(argv[a + 1]);
            a += 2;
        } else if (strcmp(argv[a], "-c") == 0 && a + 1 < argc) {
            command = atoi(argv[a + 1]);
            ui = original = 1;
            a += 2;
        } else {
            fprintf(stderr, "usage: drawing [-o|-u] [-c N] [-m X Y] [-p|-r X Y] [-t X] IN.JWC OUT\n");
            return 2;
        }
    }
    in = a < argc ? argv[a] : "orig/SAMPLE2.JWC";
    out = a + 1 < argc ? argv[a + 1] : "tmp/drawing.png";
    n = strlen(out);

    d = jwc_load(in, &why);
    if (!d) {
        fprintf(stderr, "%s: %s\n", in, why);
        return 1;
    }
    printf("%s: %ld lines, %ld arcs, %d texts, %d points, data +%ld..%ld\n",
           in, d->n_lines, d->n_arcs, d->n_texts, d->n_points,
           d->data_at, d->data_end);
    /* The two numbers every text measurement needs: how many drawing units a
     * millimetre of paper is, and what the coordinates were multiplied by on
     * the way in. */
    printf("  unit_mm %.6f  scale %.6f  denom %.6f  write layer %d\n",
           (double)d->unit_mm, (double)d->scale, (double)d->denom,
           d->write_layer);

    vga_reset(&v, 0x12);
    if (!jw_view_fonts("font")) {
        fprintf(stderr, "no fonts in font/ -- text will be skipped\n");
    }
    if (!jw_view_palette(&v, "orig/JW_PAL.DAT")) {
        fprintf(stderr, "no orig/JW_PAL.DAT -- the EGA default colours will be used\n");
    }
    /* -o: draw it where the original draws it, for comparing screens against
     * dosv_emu_cpp. Without it, fit the drawing to the screen, which is what a
     * viewer wants and what the browser front end does. */
    if (original) {
        jw_view_original(&w);
    } else {
        jw_view_fit(&w, &v, d);
    }
    /* -p: presses in the drawing area, before anything is drawn -- a command
     * changes the drawing, and the screen shows what came out. */
    jw_cmd_pick(&c, command);
    if (n_press) {
        for (i = 0; i < n_press; i++) {
            jw_cmd_press(&c, d, &w, press[i][0], press[i][1], press[i][2]);
        }
    }
    /* -t: a press on the top line.  Which item that is depends on the line the
     * chrome has drawn, so the chrome is drawn once first -- jw_view_draw
     * clears the screen below, so nothing of it survives. */
    if (top_x >= 0) {
        JwUi t;

        jw_ui_from(&t, d);
        t.command = command;
        t.guide = 0;
        t.stage = c.stage;
        t.num[0] = c.num[0];
        t.num[1] = c.num[1];
        t.dec[0] = c.dec[0];
        t.dec[1] = c.dec[1];
        t.snap = 0;
        t.missed = c.missed;
        jw_ui_draw(&v, &t);
        jw_cmd_top(&c, d, jw_ui_top_item(top_x, 8));
    }
    /* the pointer is where it is, and a command in hand keeps its reading up
     * to date as it moves */
    jw_cmd_track(&c, d, &w, mx, my);
    stage = c.stage;
    num[0] = c.num[0];
    num[1] = c.num[1];
    dec[0] = c.dec[0];
    dec[1] = c.dec[1];
    /* The drawing first: jw_view_draw clears the screen before it starts, the
     * way the original does when it opens a file.  The frame goes on after and
     * the pointer, which is exclusive-or, last of all. */
    jw_view_draw(&v, d, &w);
    /* what 消去 has picked, painted over the drawing the way the original
     * does it */
    jw_cmd_marked(&c, &v, d, &w);
    if (ui) {
        JwUi s;

        jw_ui_from(&s, d);
        s.guide = jw_ui_guide();
        s.command = command;
        s.stage = stage;
        s.num[0] = num[0];
        s.num[1] = num[1];
        s.dec[0] = dec[0];
        s.dec[1] = dec[1];
        /* the two words about the right button are there while the pointer is
         * over the drawing */
        s.snap = mx >= 122 && mx <= 638 && my >= 17 && my <= 462;
        s.missed = c.missed;
        if (command) {
            /* the line of guidance goes the moment anything is picked */
            s.guide = 0;
        }
        jw_ui_draw(&v, &s);
        /* the line a half-finished command drags, then the pointer -- both
         * exclusive-or, and both after everything else */
        jw_cmd_band(&c, &v, &w, mx, my);
        jw_ui_cursor(&v, mx, my);
    }
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
