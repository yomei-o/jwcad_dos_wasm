/* The browser front end.
 *
 * Nothing here draws: it loads a .JWC with src/jwc.c, hands it to src/view.c
 * for the drawing and src/ui.c for the frame around it, and lets the page read
 * back the 640x480 screen that src/vga.c holds -- the same four planes mode 12h
 * would have.  The page only ever does putImageData; there is no WebGL and no
 * canvas drawing.
 *
 * What comes out is the original's whole screen, not just its drawing: the
 * title bar, the menu, the layer buttons, the strip along the bottom and the
 * pointer.  tools/full.sh checks it against the real JW_CAD running in
 * dosv_emu_cpp, and thirteen of the fourteen drawings the distribution ships
 * come out identical, pixel for pixel.
 *
 *   sh tools/build_wasm.sh     -> jwcad.js + jwcad.wasm
 */
#include "cmd.h"
#include "jwc.h"
#include "ui.h"
#include "view.h"

#include <emscripten/emscripten.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* The drawing area, as the original hands it to its own clip (0def:12e8). */
#define AREA_X0 122
#define AREA_Y0 17
#define AREA_X1 638
#define AREA_Y1 462

static VGA vga;
static JwView view;
static JwUi ui;
static JwCmd cmd;
static Jwc *drawing;
static unsigned char pixels[VGA_MAX_STRIDE * 8 * VGA_MAX_HEIGHT];
static unsigned char rgba[640 * 480 * 4];
static char status[256];
static int mouse_x = 200, mouse_y = 200;   /* where the original leaves it */

EMSCRIPTEN_KEEPALIVE int jw_width(void)  { return vga.width; }
EMSCRIPTEN_KEEPALIVE int jw_height(void) { return vga.height; }
EMSCRIPTEN_KEEPALIVE unsigned char *jw_framebuffer(void) { return rgba; }
EMSCRIPTEN_KEEPALIVE const char *jw_status(void) { return status; }

EMSCRIPTEN_KEEPALIVE void jw_init(void)
{
    vga_reset(&vga, 0x12);
    jw_view_palette(&vga, "orig/JW_PAL.DAT");
    jw_ui_default(&ui);
    ui.guide = jw_ui_guide();
    strcpy(status, jw_view_fonts("font") ? "ready" : "ready (no font)");
}

/* Everything the chrome shows that belongs to the command in hand.  Three
 * places need it -- moving the pointer, pressing, and typing -- so it is in
 * one place. */
static void sync_ui(void)
{
    ui.stage = cmd.stage;
    ui.typed_n = cmd.typed_n;
    memcpy(ui.typed, cmd.typed, sizeof ui.typed);
    ui.num[0] = cmd.num[0];
    ui.num[1] = cmd.num[1];
    ui.dec[0] = cmd.dec[0];
    ui.dec[1] = cmd.dec[1];
    ui.missed = cmd.missed;
    ui.outside = cmd.outside;
    ui.span = cmd.span;
    ui.with_text = cmd.with_text;
    ui.moved = cmd.moved;
    ui.hit_kind = cmd.hit_kind;
    ui.typing_text = cmd.typing_text;
}

/* Redraw at the current view and unpack the planes for the canvas.  The order
 * is the original's: the drawing (which clears the screen first), then the
 * frame round it, then the pointer, which is exclusive-or and has to go last. */
static void present(void)
{
    if (!drawing) {
        memset(vga.plane, 0, sizeof vga.plane);
    } else {
        jw_view_draw(&vga, drawing, &view);
    }
    ui.snap = mouse_x >= AREA_X0 && mouse_x <= AREA_X1
        && mouse_y >= AREA_Y0 && mouse_y <= AREA_Y1;
    jw_ui_draw(&vga, &ui);
    /* the line a half-finished command drags, then the pointer -- both
     * exclusive-or, and both after everything else */
    jw_cmd_band(&cmd, &vga, &view, mouse_x, mouse_y);
    jw_ui_cursor(&vga, mouse_x, mouse_y);
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
    /* Where the original puts it: the .JWC holds screen units for the view it
     * was saved with, and JW_CAD puts them down where they are. */
    jw_view_original(&view);
    jw_cmd_pick(&cmd, 0);
    jw_ui_from(&ui, drawing);
    ui.guide = jw_ui_guide();
    present();
    sprintf(status, "%ld lines  %ld arcs  %d texts  %d points",
            d->n_lines, d->n_arcs, d->n_texts, d->n_points);
    return 1;
}

/* Saving.
 *
 * The page cannot hand a C function a file, and the port has no file system
 * here, so the bytes are made in memory and the page reads them out of the
 * heap and makes a Blob of them.  They are the same bytes tests/roundtrip.exe
 * checks and tools/savecheck.sh has the real JW_CAD open. */
static unsigned char *saved;
static long saved_len;

EMSCRIPTEN_KEEPALIVE int jw_save(void)
{
    const char *why;

    free(saved);
    saved = NULL;
    saved_len = 0;
    if (!drawing) {
        return 0;
    }
    saved = jwc_bytes(drawing, &saved_len, &why);
    if (!saved) {
        sprintf(status, "%s", why);
        return 0;
    }
    return 1;
}

EMSCRIPTEN_KEEPALIVE const unsigned char *jw_saved(void) { return saved; }
EMSCRIPTEN_KEEPALIVE int jw_saved_size(void) { return (int)saved_len; }

/* Zoom about a point on the screen, so the drawing stays under the cursor. */
EMSCRIPTEN_KEEPALIVE void jw_zoom(double factor, int sx, int sy)
{
    double wx, wy;

    if (!drawing || factor <= 0.0) {
        return;
    }
    wx = view.ox + (sx - view.ax) / view.scale;
    wy = view.oy + (view.ay - sy) / view.scale;
    view.scale = (float)(view.scale * factor);
    view.ox = (float)(wx - (sx - view.ax) / view.scale);
    view.oy = (float)(wy - (view.ay - sy) / view.scale);
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

/* Back to where the original had it. */
EMSCRIPTEN_KEEPALIVE void jw_home(void)
{
    if (drawing) {
        jw_view_original(&view);
        present();
    }
}

EMSCRIPTEN_KEEPALIVE void jw_fit(void)
{
    if (drawing) {
        jw_view_fit_in(&view, drawing, AREA_X0, AREA_Y0, AREA_X1, AREA_Y1);
        present();
    }
}

/* Move the pointer.  It is the original's arrow, drawn exclusive-or into two
 * planes, so moving it is a matter of drawing the screen again. */
EMSCRIPTEN_KEEPALIVE void jw_mouse(int x, int y)
{
    if (x == mouse_x && y == mouse_y) {
        return;
    }
    mouse_x = x;
    mouse_y = y;
    /* a command with a point in hand keeps its reading up to date as the
     * pointer moves, the way the original does */
    jw_cmd_track(&cmd, drawing, &view, x, y);
    sync_ui();
    present();
}

/* Press the left button at a point.  For now only the menu answers: picking an
 * item fills its row and writes the command's own line along the top, which is
 * what the original does (tools/menucheck.sh compares the two).  The line of
 * guidance goes the moment anything is picked, as it does there. */
EMSCRIPTEN_KEEPALIVE int jw_click(int x, int y, int right)
{
    const int pick = jw_ui_menu_hit(x, y);

    if (pick) {
        ui.command = pick;
        ui.guide = 0;
        jw_cmd_pick(&cmd, pick);
        ui.stage = 0;
        ui.missed = 0;          /* picking an item clears the band */
        mouse_x = x;
        mouse_y = y;
        present();
        return pick;
    }
    /* The top line is a menu too.  消去 finishes there and nowhere else: the
     * `|①実行(L)|` the original writes after a range is picked is a real
     * target, and pressing the drawing area instead leaves the entities red
     * (4.9 in RESUME.md).  jw_ui_top_item reads the line the chrome last
     * wrote, so the chrome has to have been drawn -- present() does that at
     * the end of every press, so by the time anyone can click it has. */
    if (cmd.command && y >= 0 && y <= 15 && jw_ui_top_item(x, y)) {
        if (jw_cmd_top(&cmd, drawing, jw_ui_top_item(x, y))) {
            jw_ui_from(&ui, drawing);       /* the counts move with it */
            ui.command = cmd.command;
            ui.guide = 0;
        }
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    if (cmd.command && x >= AREA_X0 && x <= AREA_X1
        && y >= AREA_Y0 && y <= AREA_Y1) {
        const int changed = jw_cmd_press(&cmd, drawing, &view, x, y, right);

        mouse_x = x;
        mouse_y = y;
        if (changed) {
            jw_ui_from(&ui, drawing);   /* the counts and the panel move with it */
            ui.command = cmd.command;
            ui.guide = 0;
        }
        sync_ui();
        present();
        return -1;
    }
    return 0;
}

/* A key.  The one-letter keys down the menu pick a command, which is all the
 * original does with them here; anything else is ignored for now. */
EMSCRIPTEN_KEEPALIVE int jw_key(int key)
{
    int pick;

    /* A command that is asking for a number has the keyboard until [Enter]:
     * the one-letter keys would otherwise pick another item out from under it
     * (`5` is not a menu key, but `.` and the digits share the line with
     * nothing and the next key after [Enter] must go back to the menu). */
    if (jw_cmd_key(&cmd, drawing, key)) {
        sync_ui();
        present();
        return -1;
    }
    pick = jw_ui_key_command(key);

    if (!pick) {
        return 0;
    }
    ui.command = pick;
    ui.guide = 0;
    ui.stage = 0;
    ui.missed = 0;
    jw_cmd_pick(&cmd, pick);
    present();
    return pick;
}

/* Which menu command a point picks, or 0.  The page uses it to show the name
 * of what is under the pointer. */
EMSCRIPTEN_KEEPALIVE int jw_menu_at(int x, int y)
{
    return jw_ui_menu_hit(x, y);
}

EMSCRIPTEN_KEEPALIVE const char *jw_menu_label(int command)
{
    return jw_ui_menu_label(command);
}

int main(void)
{
    jw_init();
    return 0;
}
