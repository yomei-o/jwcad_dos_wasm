/* The browser front end.
 *
 * Nothing here draws: it loads a .JWC with src/jwc.c, hands it to
 * src/view.c, and lets the page read back the 640x480 screen that
 * src/vga.c holds -- the same four planes mode 12h would have.  The page
 * only ever does putImageData; there is no WebGL and no canvas drawing.
 *
 *   sh tools/build_wasm.sh     -> jwcad.js + jwcad.wasm
 */
#include "jwc.h"
#include "view.h"

#include <emscripten/emscripten.h>
#include <stdio.h>
#include <string.h>

static VGA vga;
static JwView view;
static Jwc *drawing;
static unsigned char pixels[VGA_MAX_STRIDE * 8 * VGA_MAX_HEIGHT];
static unsigned char rgba[640 * 480 * 4];
static char status[256];

EMSCRIPTEN_KEEPALIVE int jw_width(void)  { return vga.width; }
EMSCRIPTEN_KEEPALIVE int jw_height(void) { return vga.height; }
EMSCRIPTEN_KEEPALIVE unsigned char *jw_framebuffer(void) { return rgba; }
EMSCRIPTEN_KEEPALIVE const char *jw_status(void) { return status; }

EMSCRIPTEN_KEEPALIVE void jw_init(void)
{
    vga_reset(&vga, 0x12);
    jw_view_palette(&vga, "orig/JW_PAL.DAT");
    strcpy(status, jw_view_fonts("font") ? "ready" : "ready (no font)");
}

/* Redraw at the current view and unpack the planes for the canvas. */
static void present(void)
{
    if (!drawing) {
        memset(vga.plane, 0, sizeof vga.plane);
    } else {
        jw_view_draw(&vga, drawing, &view);
    }
    vga_render(&vga, pixels);
    jw_view_rgba(&vga, pixels, rgba);
}

EMSCRIPTEN_KEEPALIVE int jw_open(const char *path)
{
    const char *why;
    Jwc *d = jwc_load(path, &why);

    if (!d) {
        sprintf(status, "%s: %s", path, why);
        return 0;
    }
    jwc_free(drawing);
    drawing = d;
    jw_view_fit(&view, &vga, drawing);
    present();
    sprintf(status, "%ld lines  %ld arcs  %d texts  %d points",
            d->n_lines, d->n_arcs, d->n_texts, d->n_points);
    return 1;
}

/* Zoom about a point on the screen, so the drawing stays under the cursor. */
EMSCRIPTEN_KEEPALIVE void jw_zoom(double factor, int sx, int sy)
{
    double wx, wy;

    if (!drawing || factor <= 0.0) {
        return;
    }
    wx = view.ox + (sx - 8) / view.scale;
    wy = view.oy + (vga.height - 9 - sy) / view.scale;
    view.scale = (float)(view.scale * factor);
    view.ox = (float)(wx - (sx - 8) / view.scale);
    view.oy = (float)(wy - (vga.height - 9 - sy) / view.scale);
    present();
}

EMSCRIPTEN_KEEPALIVE void jw_pan(int dx, int dy)
{
    if (!drawing) {
        return;
    }
    view.ox -= dx / view.scale;
    view.oy += dy / view.scale;
    present();
}

EMSCRIPTEN_KEEPALIVE void jw_fit(void)
{
    if (drawing) {
        jw_view_fit(&view, &vga, drawing);
        present();
    }
}

int main(void)
{
    jw_init();
    return 0;
}
