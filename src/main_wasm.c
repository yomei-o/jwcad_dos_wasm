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
    /* The chrome draws the menu row the pointer rests on inverted, so it has
     * to know where the pointer is. */
    ui.mouse_x = mouse_x;
    ui.mouse_y = mouse_y;
    ui.stage = cmd.stage;
    ui.typed_n = cmd.typed_n;
    memcpy(ui.typed, cmd.typed, sizeof ui.typed);
    ui.num[0] = cmd.num[0];
    ui.num[1] = cmd.num[1];
    ui.dec[0] = cmd.dec[0];
    ui.dec[1] = cmd.dec[1];
    ui.missed = cmd.missed;
    ui.outside = cmd.outside;
    ui.escaped = cmd.escaped;
    ui.span = cmd.span;
    ui.with_text = cmd.with_text;
    ui.moved = cmd.moved;
    ui.hit_kind = cmd.hit_kind;
    ui.cutting = cmd.cutting;
    ui.divisions = cmd.divisions;
    ui.meas_total = cmd.meas_total;
    ui.meas_last = cmd.meas_last;
    ui.temp_left = JWC_TEMP_MAX - (drawing ? drawing->n_temp : 0);
    ui.typing_text = cmd.typing_text;
    ui.mods = cmd.mods;
    ui.snapping = cmd.snap;
}

/* Redraw at the current view and unpack the planes for the canvas.  The order
 * is the original's: the drawing (which clears the screen first), then the
 * frame round it, then the pointer, which is exclusive-or and has to go last. */
/* ■拡大■ keeps the corner it has been given, and 前倍率 the view before the
 * last zoom -- `前倍率表示[NFER]` in JW_CAD.DOC. */
static int zoom_x, zoom_y;
static JwView before_zoom;
static int have_before;

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
    jw_cmd_marked(&cmd, &vga, drawing, &view);
    jw_cmd_after(&cmd, &vga, drawing, &view);
    /* the line a half-finished command drags, then the pointer -- both
     * exclusive-or, and both after everything else */
    jw_cmd_band(&cmd, &vga, &view, mouse_x, mouse_y);
    if (ui.zoom_stage == 2) {
        jw_ui_zoom_band(&vga, zoom_x, zoom_y, mouse_x, mouse_y);
    }
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
    ui.view_scale = view.scale;
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
        ui.view_scale = view.scale;
        present();
    }
}

EMSCRIPTEN_KEEPALIVE void jw_fit(void)
{
    if (drawing) {
        jw_view_fit_in(&view, drawing, AREA_X0, AREA_Y0, AREA_X1, AREA_Y1);
        ui.view_scale = view.scale;
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
    /* レイヤ変更 ends by itself: its own line says
     * `［終了］マウスを作図範囲に移動`, and that is the whole of it. */
    if (ui.layer_mode && x >= AREA_X0 && x <= AREA_X1
        && y >= AREA_Y0 && y <= AREA_Y1) {
        ui.layer_mode = 0;
    }
    /* a command with a point in hand keeps its reading up to date as the
     * pointer moves, the way the original does */
    jw_cmd_track(&cmd, drawing, &view, x, y);
    sync_ui();
    present();
}

/* Which modifier keys are held.  The page calls this from its own key
 * and mouse handlers, because two different things want it: the words
 * in the band follow the key while the pointer moves, and a press reads
 * the keys as it happens (src/read.h).  One field does both, the way the
 * original has one keyboard. */
EMSCRIPTEN_KEEPALIVE void jw_mods(int m)
{
    if (cmd.mods == m) {
        return;
    }
    cmd.mods = m;
    sync_ui();
    present();
}

/* Press the left button at a point.  For now only the menu answers: picking an
 * item fills its row and writes the command's own line along the top, which is
 * what the original does (tools/menucheck.sh compares the two).  The line of
 * guidance goes the moment anything is picked, as it does there. */
/* The sixteen layer buttons, and the mode pressing one puts the program in.
 *
 * They are two rows of eight, drawn by src/ui.c at
 *
 *     (10 + 14k, 353) to (22 + 14k, 367)      k = 0..7, layers 0 to 7
 *     (10 + 14k, 369) to (22 + 14k, 383)      layers 8 to F
 *
 * and the original answers a press on one with a line of its own (read off
 * with `sh tools/pressstr.sh 16 360 left`):
 *
 *     レイヤ変更（ﾏｳｽ(L)表示切替 (R)書込選択） ［終了］マウスを作図範囲に移動
 *
 * -- the left button turns a layer's drawing on and off, the right one makes
 * it the layer written to, and the mode ends when the pointer goes back into
 * the drawing area.  The first press does both: it starts the mode **and**
 * acts.
 *
 * `d->layer_on` is indexed by the whole byte (group in the high nibble), and
 * jwc_visible reads it, so turning one off takes its lines off the screen.
 */
static int layer_at(int x, int y)
{
    int k, row;

    if (y >= 353 && y <= 367) {
        row = 0;
    } else if (y >= 369 && y <= 383) {
        row = 1;
    } else {
        return -1;
    }
    k = (x - 10) / 14;
    if (x < 10 || k > 7 || x > 10 + 14 * k + 12) {
        return -1;
    }
    return row * 8 + k;
}

EMSCRIPTEN_KEEPALIVE int jw_click(int x, int y, int right)
{
    const int pick = jw_ui_menu_hit(x, y);
    const int bar = jw_ui_bar_item(x, y);

    /* The strip along the bottom.  Only the two that move the view are done:
     * ■拡大■ (the Zoom bar) takes two corners and 前倍率 goes back to the
     * view before the last one.  電卓, 範囲記憶, 倍率指定, ｵﾌｾｯﾄ and HELP are
     * measured but not built (RESUME 4.27). */
    if (bar) {
        if (bar == JW_BAR_ZOOM) {
            ui.zoom_stage = 1;
        } else if (bar == JW_BAR_SCALE) {
            ui.zoom_stage = 3;
        } else if (bar == JW_BAR_PREV && have_before) {
            view = before_zoom;
            have_before = 0;
            ui.view_scale = view.scale;
        }
        mouse_x = x;
        mouse_y = y;
        present();
        return -1;
    }
    /* While ■拡大■ is running the drawing window is where its two corners
     * come from, and nothing else happens there. */
    if (ui.zoom_stage && x >= AREA_X0 && x <= AREA_X1
        && y >= AREA_Y0 && y <= AREA_Y1) {
        if (ui.zoom_stage == 3) {
            /* 倍率指定: the right button is 原寸, `倍率=1.0ﾏｳｽ(R)`.  The left
             * one asks for a number first, which is not done. */
            if (!right) {
                return -1;
            }
            before_zoom = view;
            have_before = 1;
            jw_view_actual(&view, drawing, x, y);
            ui.view_scale = view.scale;
            ui.zoom_stage = 0;
        } else if (ui.zoom_stage == 1) {
            zoom_x = x;
            zoom_y = y;
            ui.zoom_stage = 2;
        } else {
            before_zoom = view;
            have_before = 1;
            jw_view_zoom(&view, zoom_x, zoom_y, x, y);
            ui.view_scale = view.scale;
            ui.zoom_stage = 0;
        }
        mouse_x = x;
        mouse_y = y;
        present();
        return -1;
    }

    /* 紙: the paper box, x 1..47 of the row at y 321..335.  The scale beside
     * it (S=1/...) starts at column 7 = x 48 and asks its own question, which
     * is not done. */
    if (x >= 1 && x <= 120 && y >= 321 && y <= 335 && drawing) {
        mouse_x = x;
        mouse_y = y;
        jw_ui_from(&ui, drawing);
        /* After jw_ui_from: it starts from jw_ui_default, which memsets. */
        ui.ask = x <= 47 ? JW_ASK_PAPER : JW_ASK_SCALE;
        ui.ask_n = 0;
        ui.ask_typed[0] = 0;
        sync_ui();
        present();
        return -1;
    }
    {
        const int n = layer_at(x, y);

        if (n >= 0 && drawing) {
            /* `layer_on` is indexed by the whole byte: the group in the
             * high nibble, the layer in the low one (src/jwc.h). */
            const int full = (ui.group << 4) | n;

            if (right) {
                drawing->write_layer = full;
                /* Writing to a layer shows it: the original cannot leave the
                 * one it writes to hidden. */
                drawing->layer_on[full] = 1;
            } else if (full != drawing->write_layer) {
                /* **The layer being written to cannot be turned off.**
                 * Measured on SAMPLE0, whose write layer is 0 and whose
                 * layer 1 starts hidden, so layer 0 carries the whole
                 * drawing: the original leaves the screen exactly as a press
                 * on an empty layer leaves it (2445 lit pixels in the
                 * drawing area), while turning it off would empty the screen
                 * altogether -- which is what the port did until this. */
                drawing->layer_on[full] = !drawing->layer_on[full];
            }
            mouse_x = x;
            mouse_y = y;
            jw_ui_from(&ui, drawing);
            /* **After** jw_ui_from, which starts from jw_ui_default and that
             * memsets the whole thing -- setting the flag first loses it. */
            ui.layer_mode = 1;
            sync_ui();
            present();
            return -1;
        }
    }
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

    /* 紙 has the keyboard while it is asking for a size.  Measured: a digit
     * goes into the field at column 48 and [Enter] applies it -- SAMPLE0
     * goes from A-4 to A-2 on `2` then [Enter]. */
    if (ui.ask) {
        const int what = ui.ask;

        if (key == 27) {
            ui.ask = 0;
        } else if (key == 13 || key == 10) {
            /* **The drawing is measured in millimetres of paper**, so a
             * bigger sheet makes it smaller on the screen: unit_mm is
             * 518 / the paper's width, and the view has to follow it.
             * Measured on SAMPLE0 -- A-4 to A-2 doubles the width, and the
             * original's drawing goes from 2421 lit pixels to 1212, which is
             * the ratio of the two unit_mm exactly. */
            const double was = drawing ? drawing->unit_mm : 1.0;

            if (ui.ask_n > 0 && what == JW_ASK_PAPER) {
                jwc_set_paper(drawing, ui.ask_typed[0] - '0');
            } else if (ui.ask_n > 0 && drawing) {
                const double n = atof(ui.ask_typed);

                if (n > 0.0) {
                    drawing->denom = (float)n;
                }
            }
            jw_ui_from(&ui, drawing);
            jw_view_original(&view);
            if (drawing && was > 0.0) {
                view.scale *= drawing->unit_mm / was;
            }
        } else if (key == 8) {
            if (ui.ask_n > 0) {
                ui.ask_typed[--ui.ask_n] = 0;
            }
        } else if (((key >= '0' && key <= '9') || key == '.')
                   && ui.ask_n < (int)sizeof ui.ask_typed - 1) {
            ui.ask_typed[ui.ask_n++] = (char)key;
            ui.ask_typed[ui.ask_n] = 0;
        }
        present();
        return -1;
    }
    /* ■拡大■ has the keyboard while it is asking for corners: [ESC] gives up
     * and the space bar takes the whole paper, which is what the bar itself
     * offers (`用紙全体再表示 [ｽﾍﾟｰｽｷｰ]`). */
    if (ui.zoom_stage) {
        if (key == 27) {
            ui.zoom_stage = 0;
            present();
            return -1;
        }
        if (key == ' ' && drawing) {
            before_zoom = view;
            have_before = 1;
            jw_view_original(&view);
            ui.view_scale = view.scale;
            ui.zoom_stage = 0;
            present();
            return -1;
        }
        return 0;
    }

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

/* Is a command taking a string?  文字 is, between the press that says where
 * the text goes and the [Enter] that writes it.
 *
 * The page needs to know because **Japanese comes in through the browser's own
 * input method**, not through a DOS front-end processor: while this is true
 * the page keeps a hidden field focused so the OS composes into it, and hands
 * over the committed characters as Shift-JIS bytes.  That is exactly what a
 * DOS/V FEP delivers -- two ordinary keys for a double-byte character -- so
 * jw_cmd_key needs nothing special (RESUME.md 4.17). */
EMSCRIPTEN_KEEPALIVE int jw_typing(void)
{
    return cmd.typing_text;
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
