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
#include "plot.h"
#include "ui.h"
#include "draw.h"
#include "optplan.h"
#include "tategu.h"
#include "view.h"

#include "dates.h"

#include <emscripten/emscripten.h>
#include <emscripten/heap.h>
#include <ctype.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>

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
/* The module's own disk: where the drawings that ship are, where an
 * upload is written, and what the file list reads. */
#define JW_DIR "orig"
/* The drawing that is open, in the shape the list shows ("SAMPLE0 .JWC"),
 * so that the save list can put it at the top the way the original does. */
static char loaded_name[13];
static unsigned char pixels[VGA_MAX_STRIDE * 8 * VGA_MAX_HEIGHT];
static unsigned char rgba[640 * 480 * 4];
static char status[256];
/* 図形 ①登録's leavings: the selection as it stood when the figure was
 * written, kept so that it can go on being painted white.  The original has a
 * screen and simply does not repaint it; this has to redraw every frame, so
 * it keeps the shape of the thing instead.  The three selection arrays are
 * **not** kept -- they belong to `cmd` and it is free to reuse them -- so the
 * range and the 追加･除外 list do the picking, which is what 図形 used anyway. */
static JwCmd zukei_left;
static int zukei_left_on;
/* **Outside the JwUi.**  jw_ui_from clears that whole struct after any press
 * that changes the drawing, so the names and the pick are kept here and
 * copied in by sync_ui, the way the drawing list is re-read. */
static char zukei_names[50][10];
static int zukei_names_n;
static int zukei_pick;
static int mouse_x = 200, mouse_y = 200;   /* where the original leaves it */

EMSCRIPTEN_KEEPALIVE int jw_width(void)  { return vga.width; }
EMSCRIPTEN_KEEPALIVE int jw_height(void) { return vga.height; }
EMSCRIPTEN_KEEPALIVE unsigned char *jw_framebuffer(void) { return rgba; }
EMSCRIPTEN_KEEPALIVE const char *jw_status(void) { return status; }

static void present(void);

/* 図形 ②読込 reads the group when the module starts; the reader itself is
 * further down, beside the rest of the disk. */
static void zukei_list_read(void);

EMSCRIPTEN_KEEPALIVE void jw_init(void)
{
    vga_reset(&vga, 0x12);
    jw_view_palette(&vga, "orig/JW_PAL.DAT");
    jw_ui_default(&ui);
    ui.guide = jw_ui_guide();
    strcpy(status, jw_view_fonts("font") ? "ready" : "ready (no font)");
    zukei_list_read();
    /* **The original makes an empty AUTO.JWC at startup**, and it is in the
     * list ②読込 shows.  Traced on the real program: it opens A:\\AUTO.JWC,
     * gets "not found", and creates it (DOSEMU_FILE_TRACE=1 over the first
     * 200 million instructions -- `open` then `create`).  自動保存 is off
     * and it makes one anyway.
     *
     * The port's disk is the module's own, so this costs nothing and the
     * two lists then hold the same names. */
    {
        FILE *f = fopen(JW_DIR "/AUTO.JWC", "rb");

        if (f) {
            fclose(f);
        } else {
            f = fopen(JW_DIR "/AUTO.JWC", "wb");
            if (f) fclose(f);
        }
    }
    /* **An empty drawing, not none.**  The original always has one: started
     * with no file it draws an empty sheet and every command works on it.
     * With nothing in hand jw_cmd_press returns at its first line and the
     * whole program is inert, which is what the page became. */
    jwc_free(drawing);
    drawing = jwc_new();
    jw_view_original(&view);
    jw_cmd_pick(&cmd, 0);
    jw_ui_from(&ui, drawing);
    ui.guide = jw_ui_guide();
    memset(loaded_name, 0, sizeof loaded_name);
    /* The screen the original shows when it is started with no drawing:
     * the menu, the counts, the bars and an empty sheet.  present() draws
     * it, and without this the page had nothing to show until a drawing was
     * opened -- which is why it used to open one for the visitor. */
    present();
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
    /* 連線's band says which of 45度毎 / 90度毎 / free is in force, and it
     * never got here -- ui.poly_deg stayed at nought, which reads as free,
     * so ⑦連線 came up saying free where the original says 45度毎. */
    ui.poly_deg = cmd.poly_deg;
    ui.again = cmd.again;
    /* The first three steps of 図形 ①登録 are the range being taken, which
     * the selection machinery counts in `pressed`; the rest are its own. */
    memcpy(ui.zukei_name, cmd.zukei_name, sizeof ui.zukei_name);
    ui.zukei_name_n = cmd.zukei_name_n;
    memcpy(ui.zukei_list, zukei_names, sizeof ui.zukei_list);
    ui.zukei_list_n = zukei_names_n;
    ui.zukei_sel = zukei_pick;
    ui.zukei_ang = cmd.zukei_ang;
    ui.zukei_mouse = cmd.zukei_mouse;
    ui.zukei_noghost = cmd.zukei_noghost;
    ui.zukei_ask = cmd.zukei_ask;
    memcpy(ui.zukei_typed, cmd.zukei_typed, sizeof ui.zukei_typed);
    ui.zukei_typed_n = cmd.zukei_typed_n;
    ui.zukei_prev_ang = cmd.zukei_prev_ang;
    ui.zukei_mx = cmd.zukei_mx;
    ui.zukei_my = cmd.zukei_my;
    ui.zukei = cmd.zukei > JW_ZUKEI_BASE ? cmd.zukei
             : cmd.zukei ? (cmd.pressed == 0 ? 1 : cmd.pressed == 1 ? 2 : 3)
             : 0;
    ui.top_item = cmd.top_item;
    ui.band_off = cmd.band_off;
    ui.top_right = cmd.top_right;
    ui.ask_kind = cmd.ask_kind;
    ui.gap = cmd.gap;
    ui.gap_chamfer = cmd.gap_chamfer;
    ui.chamfer = cmd.chamfer;
    ui.gap_two[0] = cmd.gap_two[0];
    ui.gap_two[1] = cmd.gap_two[1];
    ui.ask_len = cmd.ask_len;
    ui.ask_ang = cmd.ask_ang;
}

/* Redraw at the current view and unpack the planes for the canvas.  The order
 * is the original's: the drawing (which clears the screen first), then the
 * frame round it, then the pointer, which is exclusive-or and has to go last. */
/* ■拡大■ keeps the corner it has been given, and 前倍率 the view before the
 * last zoom -- `前倍率表示[NFER]` in JW_CAD.DOC. */
static int zoom_x, zoom_y;
static JwView before_zoom;
static int have_before;

/* Is one of the screens that cover the drawing up?  jw_cmd_after puts back
 * the entities the running command has made since it started -- and, with
 * nothing made yet, that is the whole drawing, which then comes up through
 * the panel.  The file screen, 文字種類's table, 寸法's settings and 図形's
 * own screen are all of them. */
static int panel_up(void)
{
    if (ui.io_stage) {
        return 1;
    }
    if ((ui.command == 13 || ui.command == 28) && ui.top_item == 4) {
        return 1;
    }
    if (ui.command == 14 && ui.top_item == 9) {
        return 1;
    }
    if (ui.command == 27
        && (ui.again || ui.top_item == 4
            || (ui.zukei >= JW_ZUKEI_PICK && ui.zukei < JW_ZUKEI_WRITE)
            || ui.zukei == JW_ZUKEI_LIST)) {
        return 1;
    }
    if (ui.command == 29 && ui.top_item >= 1 && ui.top_item <= 3
        && ui.opt_stage == JW_OPT_PLAN) {
        return 1;
    }
    return 0;
}

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
    jw_ui_data(&vga, &ui, drawing);
    /* **A panel that covers the drawing keeps the command under it quiet.**  jw_cmd_after puts back the entities a running command has
     * made since it started -- which, with nothing made yet, is the whole
     * drawing -- and that painted SAMPLE0 over 多角形 ④座標ファイル読込's
     * list.  The original draws the list over everything and nothing comes
     * back through it. */
    if (!panel_up()) {
        jw_cmd_marked(&cmd, &vga, drawing, &view);
        if (zukei_left_on) {
            jw_cmd_zukei_left(&zukei_left, &vga, drawing, &view);
        }
        jw_cmd_after(&cmd, &vga, drawing, &view);
        /* ｵﾌﾟｼｮﾝ ①建具平面 reddens the line the fitting is going into while
         * it asks where along it.  Measured: the line goes colour 2 the
         * moment it is picked and back to white once the fitting is in. */
        if (ui.command == 29 && ui.opt_stage == JW_OPT_WHERE && drawing
            && ui.opt_line >= 0 && ui.opt_line < drawing->n_lines) {
            const JwTategu *lib = jw_tategu_lib(1);
            JwTateguPut f;

            jw_view_line(&vga, drawing, &drawing->lines[ui.opt_line], &view, 2);
            /* And the fitting itself, at the pointer, in colour 2 and
             * **exclusive-or**: where the preview crosses the drawing's white
             * frame the original's pixel comes out 00ffff, which is 7 xor 2. */
            if (lib && ui.opt_shape >= 0 && ui.opt_shape < lib->n
                && mouse_x >= AREA_X0 && mouse_x <= AREA_X1
                && mouse_y >= AREA_Y0 && mouse_y <= AREA_Y1) {
                const JwTateguShape *sh = &lib->shape[ui.opt_shape];
                double px, py;
                int i;

                jw_cmd_at(&view, mouse_x, mouse_y, &px, &py);
                if (jw_tategu_frame(drawing, &drawing->lines[ui.opt_line],
                                    px, py, ui.opt_inner, ui.opt_depth,
                                    ui.opt_width, sh, &f)) {
                    for (i = 0; i < sh->n; i++) {
                        double ax, ay, bx, by;

                        if (sh->line[i].arc) {
                            continue;
                        }
                        jw_tategu_ends(&sh->line[i], &f, &ax, &ay, &bx, &by);
                        jw_view_mark(&vga, &view, ax, ay, bx, by, 2,
                                     JW_STYLE_SOLID, 0x18);
                    }
                }
            }
        }
    } else {
        /* **A panel loses what 図形 ①登録 left on top.**  The original does
         * not repaint while the figure it wrote is still standing over the
         * drawing -- 図形 and ①登録 pressed again leave it alone -- but the
         * list of figures covers the drawing, and what comes back afterwards
         * is a fresh painting with the drawing's own order.  Measured: with
         * the whole of TEST1 registered and then ②読込 pressed, the string
         * the registered line crosses is on top again (7 pixels). */
        zukei_left_on = 0;
    }
    /* the line a half-finished command drags, then the pointer -- both
     * exclusive-or, and both after everything else */
    jw_cmd_band(&cmd, drawing, &vga, &view, mouse_x, mouse_y);
    if (ui.zoom_stage == 2) {
        jw_ui_zoom_band(&vga, zoom_x, zoom_y, mouse_x, mouse_y);
    }
    jw_ui_range_notch(&vga);
    jw_ui_cursor(&vga, mouse_x, mouse_y);
    vga_render(&vga, pixels);
    jw_view_rgba(&vga, pixels, rgba);
}

/* 入出力 → ①ﾌｧｲﾙ → ②読込 lists the drawings on the disk.  The original
 * reads a directory; so does this -- `orig/` is the module's own, and it is
 * where the drawings that ship live and where an upload is written, so the
 * list is the disk itself and not a table kept beside it.
 *
 * The title shown is each drawing's own 図面名, out of the first 200 bytes
 * of the file.  It is two fields with NULs between them ("マンション" and
 * "基準階平面図　１／１００"), and the original prints the pair with the
 * gaps as spaces -- so the NULs become spaces here rather than ending the
 * string. */

/* The drawing that is open, in the shape the list shows ("SAMPLE0 .JWC"),
 * so that ②読込 can put it at the top the way the original does. */

/* `at` is where the two title fields start: 40 in a drawing's header, and
 * 0 in anything else -- the original shows the first 64 bytes of a `*.txt` or
 * a `*.bat` in the same two lines, which is how JW_SAMPL.BAT comes to read
 * `@REM 三 斜 計 算 (三角形の辺 200` / `まで選択)`. */
static void file_title_at(const char *path, char *one, char *two, int at)
{
    unsigned char head[200];
    FILE *f = fopen(path, "rb");
    size_t got;
    int k, w;

    memset(one, 0, 33);
    memset(two, 0, 33);
    if (!f) return;
    got = fread(head, 1, sizeof head, f);
    fclose(f);
    if (got < (size_t)at + 64) return;
    for (w = 0; w < 32; w++) {
        const unsigned char c = head[at + w];

        one[w] = c == 0 || c == 0x0d || c == 0x0a ? ' ' : (char)c;
    }
    for (w = 0; w < 32; w++) {
        const unsigned char c = head[at + 32 + w];

        two[w] = c == 0 || c == 0x0d || c == 0x0a ? ' ' : (char)c;
    }
    for (k = 31; k >= 0 && one[k] == ' '; k--) one[k] = 0;
    for (k = 31; k >= 0 && two[k] == ' '; k--) two[k] = 0;
}

static void file_title_of(const char *path, char *one, char *two)
{
    file_title_at(path, one, two, 40);
}

/* 268,431,360 -- the original groups it in threes. */
static void file_thousands(double v, char *out)
{
    char plain[32];
    int n, k, w = 0;

    sprintf(plain, "%.0f", v);
    n = (int)strlen(plain);
    for (k = 0; k < n; k++) {
        if (k && (n - k) % 3 == 0) out[w++] = ',';
        out[w++] = plain[k];
    }
    out[w] = 0;
}

static int file_cmp(const void *a, const void *b)
{
    return strcmp((const char *)a, (const char *)b);
}

/* `ext` is the three letters without the dot, in capitals: "JWC" for the
 * drawings 入出力 and 図形 list, "TXT" for 多角形 ④座標ファイル読込, "BAT"
 * for ｵﾌﾟｼｮﾝ ⑦外部処理.  The screen is the same one either way -- see
 * JwUi.file_bar. */
static void file_list_ext(int for_save, const char *ext)
{
    char names[JW_FILE_MAX][13];
    char dotext[5];
    int n = 0, i;
    DIR *dir = opendir(JW_DIR);
    struct dirent *e;

    dotext[0] = '.';
    memcpy(dotext + 1, ext, 3);
    dotext[4] = 0;

    ui.file_n = 0;
    ui.file_sel = 0;
    ui.file_top = 0;
    if (dir) {
        while ((e = readdir(dir)) != NULL && n < JW_FILE_MAX) {
            const char *dot = strrchr(e->d_name, '.');
            int k;

            if (!dot || strcasecmp(dot, dotext) != 0) continue;
            if (dot - e->d_name > 8 || dot == e->d_name) continue;
            /* DOS spells it "SAMPLE0 .JWC": the stem padded to eight. */
            memset(names[n], ' ', 8);
            for (k = 0; k < (int)(dot - e->d_name); k++) {
                names[n][k] = (char)toupper((unsigned char)e->d_name[k]);
            }
            memcpy(names[n] + 8, dotext, 5);
            n++;
        }
        closedir(dir);
    }
    /* Alphabetical -- the order the original lists them in. */
    qsort(names, (size_t)n, sizeof names[0], file_cmp);

    for (i = 0; i < n; i++) {
        char path[256];
        char stem[9];
        struct stat st;
        struct tm *tm;
        int k;

        memcpy(stem, names[i], 8);
        stem[8] = 0;
        for (k = 7; k >= 0 && stem[k] == ' '; k--) stem[k] = 0;
        sprintf(path, "%s/%s%s", JW_DIR, stem, dotext);
        memcpy(ui.file_name[i], names[i], sizeof ui.file_name[0]);
        /* A drawing keeps its 図面名 at 40 and 72 of the header; anything
         * else has its first 64 bytes read as the same two fields. */
        file_title_at(path, ui.file_t1[i], ui.file_t2[i],
                      strcmp(ext, "JWC") == 0 ? 40 : 0);
        ui.file_size[i] = 0;
        ui.file_stamp[i] = 0;
        strcpy(ui.file_date[i], "                ");
        if (stat(path, &st) == 0) {
            ui.file_size[i] = (long)st.st_size;
            tm = localtime(&st.st_mtime);
            if (tm) {
                /* **The year is years-since-1900, not the last two digits.**
                 * The original prints it with %02d, so 1995 comes out `95`
                 * and 2026 comes out `126` -- three digits, running into
                 * the next column.  Its own screen says `126/09/22`. */
                sprintf(ui.file_date[i], "%02d/%02d/%02d %02d:%02d  ",
                        tm->tm_year, tm->tm_mon + 1,
                        tm->tm_mday, tm->tm_hour, tm->tm_min);
                ui.file_stamp[i] =
                    ((unsigned long)(((tm->tm_year + 1900 - 1980) << 9)
                                     | ((tm->tm_mon + 1) << 5) | tm->tm_mday)
                     << 16)
                    | (unsigned long)((tm->tm_hour << 11) | (tm->tm_min << 5)
                                      | (tm->tm_sec / 2));
            }
        }
        /* **The drawings that ship keep the distribution's date.**  Their
         * copies in the .wasm carry the time the build ran, because that is
         * when --embed-file wrote them, and a drawing has no date of its
         * own inside it.  jwcv222h.lzh has them, a real lha puts them back
         * on extraction (tools/lzh.py does now), and src/dates.h is that
         * table.  Anything else -- an upload, a drawing just saved -- keeps
         * the date the filesystem gives it. */
        {
            int d;

            for (d = 0; JW_FILE_DATE[d].name; d++) {
                char want[16];

                sprintf(want, "%s%s", stem, dotext);
                if (strcmp(want, JW_FILE_DATE[d].name) != 0) continue;
                sprintf(ui.file_date[i], "%s  ", JW_FILE_DATE[d].when);
                ui.file_stamp[i] = JW_FILE_DATE[d].stamp;
                break;
            }
        }
    }
    ui.file_n = n;
    /* **Newest first.**  The original sorts the list by date, not by name:
     * with every file carrying the same date (which is what the emulator
     * used to answer) the order fell back to the directory's and looked
     * alphabetical, and the moment real dates arrived the two lists came
     * apart -- TEST7, the newest drawing that ships, went to the top.
     * Files of the same date keep their alphabetical order. */
    {
        int a, b;

        for (a = 1; a < n; a++) {
            for (b = a; b > 0 && ui.file_stamp[b] > ui.file_stamp[b - 1]; b--) {
                char name[13], t1[33], t2[33];
                char date[sizeof ui.file_date[0]];
                const long size = ui.file_size[b];
                const unsigned long stamp = ui.file_stamp[b];

                memcpy(name, ui.file_name[b], sizeof name);
                memcpy(t1, ui.file_t1[b], sizeof t1);
                memcpy(t2, ui.file_t2[b], sizeof t2);
                memcpy(date, ui.file_date[b], sizeof date);
                memcpy(ui.file_name[b], ui.file_name[b - 1], sizeof name);
                memcpy(ui.file_t1[b], ui.file_t1[b - 1], sizeof t1);
                memcpy(ui.file_t2[b], ui.file_t2[b - 1], sizeof t2);
                memcpy(ui.file_date[b], ui.file_date[b - 1], sizeof date);
                ui.file_size[b] = ui.file_size[b - 1];
                ui.file_stamp[b] = ui.file_stamp[b - 1];
                memcpy(ui.file_name[b - 1], name, sizeof name);
                memcpy(ui.file_t1[b - 1], t1, sizeof t1);
                memcpy(ui.file_t2[b - 1], t2, sizeof t2);
                memcpy(ui.file_date[b - 1], date, sizeof date);
                ui.file_size[b - 1] = size;
                ui.file_stamp[b - 1] = stamp;
            }
        }
    }
    /* **保存 puts the drawing that is open first; 読込 does not.**  Both
     * were measured, and they are not the same list:
     *
     *   ①保存  SAMPLE0, AUTO, ONE2, QBYTES, QPICK, SAMPLE1 ...  (SAMPLE0
     *           was the drawing in hand -- it is the name you would be
     *           overwriting, so it is the one offered)
     *   ②読込  AUTO, QPICK, SAMPLE0, SAMPLE1 ...  (plain alphabetical,
     *           and the first row is the one picked)
     *
     * Reading one of them and assuming the other is what put the port's
     * list in the wrong order the first time. */
    /* What the original puts beside 保存 is drive A's free space, and it
     * gets it from DOS.  **Before the return below**, because ②読込's screen
     * shows it too. */
    file_thousands(8.0 * 512.0 * 65535.0, ui.file_free);
    {
        int k;

        memcpy(ui.open_name, loaded_name, 8);
        ui.open_name[8] = 0;
        for (k = 7; k >= 0 && ui.open_name[k] == ' '; k--) ui.open_name[k] = 0;
    }
    if (!for_save) return;
    for (i = 0; i < n; i++) {
        if (memcmp(ui.file_name[i], loaded_name, 12) != 0) continue;
        while (i > 0) {
            char name[13];
            char t1[33], t2[33];
            char date[sizeof ui.file_date[0]];
            const long size = ui.file_size[i];

            memcpy(name, ui.file_name[i], sizeof name);
            memcpy(t1, ui.file_t1[i], sizeof t1);
            memcpy(t2, ui.file_t2[i], sizeof t2);
            memcpy(date, ui.file_date[i], sizeof date);
            memcpy(ui.file_name[i], ui.file_name[i - 1], sizeof name);
            memcpy(ui.file_t1[i], ui.file_t1[i - 1], sizeof t1);
            memcpy(ui.file_t2[i], ui.file_t2[i - 1], sizeof t2);
            memcpy(ui.file_date[i], ui.file_date[i - 1], sizeof date);
            ui.file_size[i] = ui.file_size[i - 1];
            i--;
            memcpy(ui.file_name[i], name, sizeof name);
            memcpy(ui.file_t1[i], t1, sizeof t1);
            memcpy(ui.file_t2[i], t2, sizeof t2);
            memcpy(ui.file_date[i], date, sizeof date);
            ui.file_size[i] = size;
        }
        break;
    }
    /* The port has no drive of its own -- its disk is the module's memory,
     * which has no size worth printing -- so it says what the A: drive of
     * this pair of repositories says: 8 sectors a cluster x 512 bytes x
     * 65535 free clusters, which is dosv_emu_cpp's answer to INT 21h AH=36h
     * and what the original prints when it runs there.  Measured. */
}

static void file_list(int for_save)
{
    file_list_ext(for_save, "JWC");
    jw_ui_pick_kind(&ui, JW_PICK_IO);
}

/* 図形, 多角形 and ｵﾌﾟｼｮﾝ borrow 入出力's ファイル選択 screen.  See
 * jw_ui_pick_kind. */
static void file_pick(int kind)
{
    static const char *const EXT[4] = { "JWC", "JWC", "TXT", "BAT" };

    file_list_ext(0, EXT[kind]);
    jw_ui_pick_kind(&ui, kind);
    ui.io_stage = JW_IO_LOAD;
}

/* The name the list has picked, as a path on the module's disk. */
static void file_picked(char *path)
{
    char stem[9];
    int k;

    /* ③ 新規 保存 puts a name of its own in; otherwise it is the row the
     * list has picked. */
    if (ui.save_name[0]) {
        /* DOS takes the first eight, whatever the field holds. */
        char name[9];

        memcpy(name, ui.save_name, 8);
        name[8] = 0;
        for (k = 7; k >= 0 && (name[k] == ' ' || name[k] == 0); k--) name[k] = 0;
        sprintf(path, "%s/%s.JWC", JW_DIR, name);
        return;
    }
    memcpy(stem, ui.file_name[ui.file_sel], 8);
    stem[8] = 0;
    for (k = 7; k >= 0 && stem[k] == ' '; k--) stem[k] = 0;
    sprintf(path, "%s/%s.JWC", JW_DIR, stem);
}

/* ④削除: take the file off the disk. */
static void file_kill(void)
{
    char path[256];

    if (!ui.file_n) {
        return;
    }
    file_picked(path);
    if (remove(path) == 0) {
        sprintf(status, "%s deleted", path);
    } else {
        sprintf(status, "%s: cannot delete", path);
    }
}

/* How big the drawing was before ③合成 brought the other one in, so that
 * ② 中止 on the second question can put it back.  Measured: the first
 * ① 実 行 draws the merged drawing and asks again over it. */
static long merge_n0_lines, merge_n0_arcs;
static int merge_n0_texts, merge_n0_points;

static void merge_undo(void)
{
    if (!drawing) {
        return;
    }
    drawing->n_lines = merge_n0_lines;
    drawing->n_arcs = merge_n0_arcs;
    drawing->n_texts = merge_n0_texts;
    drawing->n_points = merge_n0_points;
}

/* ③合成: add another drawing's entities to the one in hand.
 *
 * What the original does with the two drawings' coordinates is not settled
 * yet -- the screen is the same one ②読込 uses, and the road past
 * ①選択確定 has still to be walked -- so this does the one thing that is
 * certain from the name and says so. */
static void file_merge(void)
{
    char path[256];
    const char *why;
    Jwc *other;
    long k;

    if (!ui.file_n || !drawing) {
        return;
    }
    merge_n0_lines = drawing->n_lines;
    merge_n0_arcs = drawing->n_arcs;
    merge_n0_texts = drawing->n_texts;
    merge_n0_points = drawing->n_points;
    file_picked(path);
    other = jwc_load(path, &why);
    if (!other) {
        sprintf(status, "%s: %s", path, why);
        return;
    }
    /* **The records go over as they stand.**  Going through jwc_add_line
     * and jwc_add_arc_at instead left 447 pixels of the merged drawing
     * different from the original's: they build a record rather than copy
     * one, and the spare bytes and the rounding are not the file's. */
    for (k = 0; k < other->n_lines; k++) {
        jwc_put_line(drawing, &other->lines[k]);
    }
    for (k = 0; k < other->n_arcs; k++) {
        jwc_put_arc(drawing, &other->arcs[k]);
    }
    /* **The texts and the指定点 come too.**  Without them the counts stopped
     * at 1219|77 where the original says 1219|90 -- 円･文数 counts the arcs
     * and the texts together. */
    for (k = 0; k < other->n_points; k++) {
        jwc_put_point(drawing, &other->points[k]);
    }
    for (k = 0; k < other->n_texts; k++) {
        jwc_put_text(drawing, &other->texts[k]);
    }
    sprintf(status, "%ld lines  %ld arcs  %d texts  %d points",
            drawing->n_lines, drawing->n_arcs, drawing->n_texts,
            drawing->n_points);
    jwc_free(other);
}

/* Open the drawing the list has picked.  Two things do it -- ①選択確定 on
 * the top line, and a second press on the row that is already picked -- so
 * it is in one place. */
int jw_open(const char *path);

/* Write the drawing in hand to the disk, under the name the list has picked,
 * keeping the old one as a .bak.
 *
 * **The .bak is not a nicety.**  The original makes one: walking the road
 * with tools/saveroad.sh leaves SAMPLE0.bak beside the drawing, and the
 * 書き込みます line offers ③ﾊﾞｯｸｱｯﾌﾟ作成【する】 -- it is on by default.
 *
 * The bytes are jwc_bytes's, which the round-trip test and the real
 * ＪＷ＿ＣＡＤ have both read back (tools/savecheck.sh). */
static int file_write(void)
{
    char path[256];
    char bak[256];
    char stem[9];
    const char *why;
    unsigned char *bytes;
    long len;
    FILE *f;
    int k;

    if (!drawing || !ui.file_n) {
        return 0;
    }
    if (ui.save_name[0]) {
        memcpy(stem, ui.save_name, 8);
        stem[8] = 0;
        for (k = 7; k >= 0 && (stem[k] == ' ' || stem[k] == 0); k--) stem[k] = 0;
    } else {
        memcpy(stem, ui.file_name[ui.file_sel], 8);
        stem[8] = 0;
        for (k = 7; k >= 0 && stem[k] == ' '; k--) stem[k] = 0;
    }
    sprintf(path, "%s/%s.JWC", JW_DIR, stem);
    sprintf(bak, "%s/%s.bak", JW_DIR, stem);
    bytes = jwc_bytes(drawing, &len, &why);
    if (!bytes) {
        sprintf(status, "%s", why);
        return 0;
    }
    /* The old one first, so a write that fails does not lose both. */
    remove(bak);
    rename(path, bak);
    f = fopen(path, "wb");
    if (!f) {
        free(bytes);
        sprintf(status, "%s: cannot write", path);
        return 0;
    }
    fwrite(bytes, 1, (size_t)len, f);
    fclose(f);
    free(bytes);
    sprintf(status, "%s.JWC  %ld bytes", stem, len);
    return 1;
}

/* 図形 ①登録's ① 実 行 -- put the figure on the disk.
 *
 * The original writes it into the group's own directory under the name that
 * was typed: its top line says ` A:ZUKEI_1_\NAME.JWK ` while it asks, and the
 * file trace of the running original (tools/zukei.sh with DOSEMU_FILE_TRACE)
 * shows it building `ZUKEI_1_\jwc_temp.000` first and leaving `NAME.JWK`
 * behind -- the temp file is gone by the end, so this writes the one name.
 *
 * A selection with nothing in it leaves no file at all, which is measured:
 * the road still offers 書き込みます and ① 実 行 still goes back to the menu,
 * and the directory is still empty afterwards.
 */
static int zukei_write(void)
{
    char path[256];
    const char *why;
    unsigned char *bytes;
    long len;
    FILE *f;

    if (!drawing || !cmd.zukei_name_n) {
        return 0;
    }
    bytes = jw_cmd_zukei_bytes(&cmd, drawing, &len, &why);
    if (!bytes) {
        sprintf(status, "%s", why ? why : "nothing to write");
        return 0;
    }
    mkdir(JW_DIR "/ZUKEI_1_", 0777);
    sprintf(path, "%s/ZUKEI_1_/%s.JWK", JW_DIR, cmd.zukei_name);
    f = fopen(path, "wb");
    if (!f) {
        free(bytes);
        sprintf(status, "%s: cannot write", path);
        return 0;
    }
    fwrite(bytes, 1, (size_t)len, f);
    fclose(f);
    free(bytes);
    sprintf(status, "%s.JWK  %ld bytes", cmd.zukei_name, len);
    /* and it stays on the screen in white */
    zukei_left = cmd;
    zukei_left.sel_line = NULL;
    zukei_left.sel_arc = NULL;
    zukei_left.sel_text = NULL;
    zukei_left_on = 1;
    zukei_list_read();          /* it is in the group now */
    return 1;
}

/* 図形 ②読込 -- the group's own directory, and the figure in hand.
 *
 * `A:ZUKEI_1_` is group 1 of the fifty the HELP says there are, each holding
 * fifty figures.  The port reads the directory whenever something could have
 * changed it, which is at the start and after a figure is written.
 */
#define ZUKEI_DIR JW_DIR "/ZUKEI_1_"

static JwcZukei zukei_in;
static int zukei_in_on;

static int zukei_cmp(const void *a, const void *b)
{
    return strcmp((const char *)a, (const char *)b);
}

static void zukei_list_read(void)
{
    DIR *dir = opendir(ZUKEI_DIR);
    struct dirent *e;
    int n = 0;

    zukei_names_n = 0;
    zukei_pick = 0;
    if (dir) {
        while ((e = readdir(dir)) != NULL && n < 50) {
            const char *dot = strrchr(e->d_name, '.');
            int k;

            if (!dot || strcasecmp(dot, ".JWK") != 0) {
                continue;
            }
            if (dot - e->d_name > 8 || dot == e->d_name) {
                continue;
            }
            for (k = 0; k < (int)(dot - e->d_name); k++) {
                zukei_names[n][k] =
                    (char)toupper((unsigned char)e->d_name[k]);
            }
            zukei_names[n][dot - e->d_name] = 0;
            n++;
        }
        closedir(dir);
    }
    qsort(zukei_names, (size_t)n, sizeof zukei_names[0], zukei_cmp);
    zukei_names_n = n;
    cmd.zukei_n = n;
}

/* Take the figure in cell `at` into hand: read the file and work out what a
 * millimetre of it is in this drawing's units. */
static int zukei_take(int at)
{
    char path[256];
    const char *why;
    unsigned char *raw;
    long len;
    FILE *f;

    if (at < 0 || at >= zukei_names_n || !drawing) {
        return 0;
    }
    sprintf(path, "%s/%s.JWK", ZUKEI_DIR, zukei_names[at]);
    f = fopen(path, "rb");
    if (!f) {
        sprintf(status, "%s: cannot open", path);
        return 0;
    }
    fseek(f, 0, SEEK_END);
    len = ftell(f);
    fseek(f, 0, SEEK_SET);
    raw = len > 0 ? (unsigned char *)malloc((size_t)len) : NULL;
    if (!raw || fread(raw, 1, (size_t)len, f) != (size_t)len) {
        free(raw);
        fclose(f);
        sprintf(status, "%s: cannot read", path);
        return 0;
    }
    fclose(f);
    if (zukei_in_on) {
        jwc_zukei_free(&zukei_in);
        zukei_in_on = 0;
        cmd.zukei_in = NULL;
    }
    if (!jwc_zukei_read(&zukei_in, raw, len, &why)) {
        free(raw);
        sprintf(status, "%s", why ? why : "not a figure");
        return 0;
    }
    free(raw);
    zukei_in_on = 1;
    cmd.zukei_in = &zukei_in;
    cmd.zukei_scale = jwc_zukei_scale(drawing);
    return 1;
}

/* ⑦INDEX's list.  The original keeps it in `JW_FILE0.000`, one `A:\NAME` a
 * line with CRLF between, and rewrites it as drawings are opened -- the names
 * on the screen are that file's and not the disk's.  The port reads it when
 * the item is pressed and leaves it alone otherwise. */
/* **The list holds twenty and no more.**  A JW_FILE0.000 of twenty-five
 * names comes up cut to twenty, one of five still says `Max:20`, and twenty
 * rows is exactly what the screen has -- so the window never scrolls past
 * what one press of the lower band does (tools/ixprobe.sh). */
#define JW_IX_MAX 20

static int index_lines(char name[][16])
{
    char line[64];
    FILE *f = fopen(JW_DIR "/JW_FILE0.000", "rb");
    int n = 0, k = 0, c;

    if (!f) {
        return 0;
    }
    while ((c = fgetc(f)) != EOF && n < JW_IX_MAX) {
        if (c == '\r') {
            continue;
        }
        if (c == '\n') {
            line[k] = 0;
            if (k) {
                memcpy(name[n], line, (size_t)(k < 15 ? k : 15));
                name[n][k < 15 ? k : 15] = 0;
                n++;
            }
            k = 0;
            continue;
        }
        if (k < (int)sizeof line - 1) {
            line[k++] = (char)c;
        }
    }
    if (k && n < JW_IX_MAX) {
        line[k] = 0;
        memcpy(name[n], line, (size_t)(k < 15 ? k : 15));
        name[n][k < 15 ? k : 15] = 0;
        n++;
    }
    fclose(f);
    return n;
}

static void index_write(char name[][16], int n)
{
    FILE *f = fopen(JW_DIR "/JW_FILE0.000", "wb");
    int i;

    if (!f) {
        return;
    }
    for (i = 0; i < n; i++) {
        fprintf(f, "%s\r\n", name[i]);
    }
    fclose(f);
}

/* **The drawing just opened goes to the head of the list**, and any line it
 * already had goes.  Measured: a file of `F01 F02 SAMPLE0 F03 F04` comes
 * back `SAMPLE0 F01 F02 F03 F04` once the program has SAMPLE0 open, and one
 * with no SAMPLE0 in it comes back with SAMPLE0 written in front. */
static void index_touch(void)
{
    char name[JW_IX_MAX][16], one[16];
    int n = index_lines(name), i, j, k;

    strcpy(one, "A:\\");
    for (k = 0; k < 8 && loaded_name[k] && loaded_name[k] != ' '; k++) {
        one[3 + k] = loaded_name[k];
    }
    one[3 + k] = 0;
    for (i = 0; i < n; i++) {
        if (!strcmp(name[i], one)) {
            break;
        }
    }
    if (i == n) {               /* a name the list did not have */
        if (n < JW_IX_MAX) {
            n++;
        }
        i = n - 1;              /* and the last one falls off the end */
    }
    for (j = i; j > 0; j--) {
        memcpy(name[j], name[j - 1], sizeof name[0]);
    }
    memcpy(name[0], one, sizeof name[0]);
    index_write(name, n);
}

static void index_read(void)
{
    ui.ix_n = index_lines(ui.ix_name);
    ui.ix_sel = 0;
    ui.ix_top = 0;
    ui.ix_del = 0;
    memset(ui.ix_mark, 0, sizeof ui.ix_mark);
}

/* ①ｲﾝﾃﾞｯｸｽ削除 |① 削 除: the marked lines go, the file is written back and
 * the list comes up at the first name with nothing marked. */
static void index_delete(void)
{
    int i, n = 0;

    for (i = 0; i < ui.ix_n; i++) {
        if (ui.ix_mark[i]) {
            continue;
        }
        if (n != i) {
            memcpy(ui.ix_name[n], ui.ix_name[i], sizeof ui.ix_name[0]);
        }
        n++;
    }
    ui.ix_n = n;
    ui.ix_sel = 0;
    ui.ix_top = 0;
    ui.ix_del = 0;
    memset(ui.ix_mark, 0, sizeof ui.ix_mark);
    index_write(ui.ix_name, n);
}

static void file_chosen(void)
{
    char path[256];
    char stem[9];
    int k;

    if (!ui.file_n) {
        return;
    }
    memcpy(stem, ui.file_name[ui.file_sel], 8);
    stem[8] = 0;
    for (k = 7; k >= 0 && stem[k] == ' '; k--) stem[k] = 0;
    sprintf(path, "%s/%s.JWC", JW_DIR, stem);
    jw_open(path);
}

/* What ②読込's list holds, for tools/loadcheck.mjs.  The page does not use
 * these: its own list is for moving files about, and opening a drawing is
 * the program's business. */
/* How much is in the drawing, for the checks: 0 lines, 1 arcs, 2 texts,
 * 3 points.  The status line only changes when a drawing is opened, so it
 * cannot answer "did that command put anything down". */
EMSCRIPTEN_KEEPALIVE long jw_count(int which)
{
    if (!drawing) return -1;
    return which == 0 ? drawing->n_lines
         : which == 1 ? drawing->n_arcs
         : which == 2 ? drawing->n_texts
         : which == 3 ? drawing->n_points
         : which == 4 ? drawing->n_temp : -1;   /* 4 = the 仮点 */
}

EMSCRIPTEN_KEEPALIVE int jw_top_item(int x, int y) { return jw_ui_top_item(x, y); }
EMSCRIPTEN_KEEPALIVE int jw_io_stage(void) { return ui.io_stage; }
EMSCRIPTEN_KEEPALIVE int jw_file_count(void) { return ui.file_n; }
EMSCRIPTEN_KEEPALIVE int jw_file_sel(void) { return ui.file_sel; }

EMSCRIPTEN_KEEPALIVE const char *jw_file_name(int i)
{
    return i >= 0 && i < ui.file_n ? ui.file_name[i] : "";
}

EMSCRIPTEN_KEEPALIVE const char *jw_file_title(int i)
{
    return i >= 0 && i < ui.file_n ? ui.file_t1[i] : "";
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
    {
        const char *base = strrchr(path, '/');
        const char *dot;
        int k;

        base = base ? base + 1 : path;
        dot = strrchr(base, '.');
        memset(loaded_name, ' ', 8);
        memcpy(loaded_name + 8, ".JWC", 5);
        for (k = 0; k < 8 && base + k != dot && base[k]; k++) {
            loaded_name[k] = (char)toupper((unsigned char)base[k]);
        }
    }
    /* Where the original puts it: the .JWC holds screen units for the view it
     * was saved with, and JW_CAD puts them down where they are. */
    jw_view_original(&view);
    jw_cmd_pick(&cmd, 0);
    jw_ui_from(&ui, drawing);
    ui.guide = jw_ui_guide();
    present();
    sprintf(status, "%ld lines  %ld arcs  %d texts  %d points",
            d->n_lines, d->n_arcs, d->n_texts, d->n_points);
    index_touch();
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

/* Plotter output.  入出力 → ②ﾌﾟﾛｯﾀ → ③ﾌｧｲﾙ出力 is where the original sends
 * a drawing to a plotter through a `*.JWP` definition; the browser has no
 * plotter, so what the page offers instead is the two things a plotter's
 * paper is for -- a PDF to print and a PNG to look at (src/plot.c).  Both
 * land in the same `saved` buffer the .JWC download uses. */
/* Set when 入出力 → ②ﾌﾟﾛｯﾀ → ③ﾌｧｲﾙ出力 → ① 実行 has been pressed: the
 * page reads it after every press, hands over the two files and clears it.
 * The original writes a plotter file at that point; there is no plotter
 * here, so what comes out is the PDF and the PNG. */
static int plot_wanted;

EMSCRIPTEN_KEEPALIVE int jw_plot_wanted(void)
{
    const int v = plot_wanted;

    plot_wanted = 0;
    return v;
}

/* And the name that was typed into the field, for what the page calls the
 * files it hands over. */
EMSCRIPTEN_KEEPALIVE const char *jw_plot_name(void)
{
    return ui.io_name;
}

EMSCRIPTEN_KEEPALIVE int jw_plot(int as_png)
{
    free(saved);
    saved = NULL;
    saved_len = 0;
    if (!drawing) {
        return 0;
    }
    saved = as_png ? jw_plot_png(drawing, 4.0, &saved_len)
                   : jw_plot_pdf(drawing, &saved_len);
    if (!saved) {
        sprintf(status, "plot: out of memory");
        return 0;
    }
    return 1;
}

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
    if ((ui.layer_mode || ui.group_mode || ui.pen_board || ui.data_screen)
        && x >= AREA_X0 && x <= AREA_X1
        && y >= AREA_Y0 && y <= AREA_Y1) {
        ui.layer_mode = 0;
        ui.group_mode = 0;
        ui.pen_board = 0;
        ui.data_screen = 0;
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

    /* ペン's board answers presses of its own, and it is over the menu, so
     * it has to come before the menu.  Rows 5..10 are the six pens and
     * 11..19 the nine line types; the board stays up and the panel's pen
     * row follows (the original writes `Pen.4` there in the pen's colour
     * and moves the `#`). */
    if (ui.pen_board && x >= 1 && x <= 120 && y >= 64 && y <= 303
        && drawing) {
        const int row = (y - 64) / 16;          /* 0..14 */

        if (row < 6) {
            drawing->pen = (unsigned char)(row + 1);
        } else {
            drawing->line_type = (unsigned char)(row - 5);
        }
        mouse_x = x;
        mouse_y = y;
        jw_ui_from(&ui, drawing);
        ui.pen_board = 1;       /* after jw_ui_from, which memsets */
        sync_ui();
        present();
        return -1;
    }
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
        } else if (bar == JW_BAR_CALC && drawing) {
            const int was_kept = ui.kept;

            jw_ui_from(&ui, drawing);
            ui.calc = 1;        /* after jw_ui_from, which memsets */
            ui.kept = was_kept;
        } else if ((bar == JW_BAR_KEEP || bar == JW_BAR_OFFSET) && drawing) {
            /* 範囲記憶 and ｵﾌｾｯﾄ both leave the original **in 入出力**, the
             * same way 紙, the scale and サブ画面表示 do -- the item's row
             * goes yellow and its bar goes along the top.  Measured with
             * tools/clickcheck.sh at (90,470) and (570,470). */
            const int was_kept = ui.kept || bar == JW_BAR_KEEP;

            jw_ui_from(&ui, drawing);
            ui.command = 30;
            ui.band_kept = 1;
            ui.kept = was_kept;
            jw_cmd_pick(&cmd, 30);
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
    /* サブ画面表示: the box at the bottom of the panel, y 385..399.  It
     * turns the box under it into a miniature of the drawing, and leaves
     * the original in 入出力 the way 紙 and the scale do. */
    if (x >= 1 && x <= 120 && y >= 385 && y <= 399 && drawing) {
        mouse_x = x;
        mouse_y = y;
        jw_ui_from(&ui, drawing);
        /* It **turns it on**, it does not toggle: pressing twice leaves the
         * original's miniature up, and the port that toggled came out 564
         * pixels short. */
        ui.sub_screen = 1;      /* after jw_ui_from, which memsets */
        ui.command = 30;
        ui.band_kept = 1;
        jw_cmd_pick(&cmd, 30);
        sync_ui();
        present();
        return -1;
    }

    /* 目盛: the left cell of the panel that shows over the counts while the
     * pointer is there (RESUME 4.38).  It asks for the grid's spacing. */
    /* 字表示 ↔ 枠表示, the panel's second row, right-hand cell.  Measured:
     * the press swaps the word and puts its own prompt up, and the drawing
     * itself is left until the pointer goes back into the drawing area --
     * which is what the prompt says to do. */
    /* 目盛's five cells, the panel's first row: `off` and the four numbers. */
    if (x >= 32 && x <= 119 && y >= 17 && y <= 31 && drawing) {
        ui.gauge_pick = x <= 55 ? 0 : (x - 56) / 16 + 1;
        ui.gauge_said = 1;
        ui.guide = 0;
        mouse_x = x;
        mouse_y = y;
        present();
        return -1;
    }
    /* 軸角's on/off, the cell to its left. */
    if (x >= 56 && x <= 71 && y >= 32 && y <= 47 && drawing) {
        ui.axis_on = !ui.axis_on;
        ui.gauge_said = 1;
        ui.guide = 0;
        mouse_x = x;
        mouse_y = y;
        present();
        return -1;
    }
    if (x >= 72 && x <= 119 && y >= 32 && y <= 47 && drawing) {
        ui.frame_text = !ui.frame_text;
        ui.gauge_said = 1;
        ui.guide = 0;           /* and the opening note goes with the banner */
        mouse_x = x;
        mouse_y = y;
        present();
        return -1;
    }
    if (x >= 1 && x <= 55 && y >= 17 && y <= 31 && drawing) {
        mouse_x = x;
        mouse_y = y;
        jw_ui_from(&ui, drawing);
        ui.grid_mode = 1;       /* after jw_ui_from, which memsets */
        sync_ui();
        present();
        return -1;
    }

    /* ペン: the box above 紙, y 305..319.  It puts a board over the menu --
     * six pens and nine line types -- and the pointer back in the drawing
     * takes it away again. */
    if (x >= 1 && x <= 120 && y >= 305 && y <= 319 && drawing) {
        mouse_x = x;
        mouse_y = y;
        jw_ui_from(&ui, drawing);
        ui.pen_board = 1;       /* after jw_ui_from, which memsets */
        sync_ui();
        present();
        return -1;
    }

    /* 図面名: the box left of ｸﾞﾙｰﾌﾟ on the same row.  It asks for the
     * **layer's** name -- `レイヤ名を入力` along the top with a field at
     * column 34 -- and takes the strip along the bottom away while it does.
     */
    if (x >= 1 && x <= 63 && y >= 337 && y <= 351 && drawing) {
        mouse_x = x;
        mouse_y = y;
        jw_ui_from(&ui, drawing);
        ui.ask = JW_ASK_LNAME;  /* after jw_ui_from, which memsets */
        ui.ask_n = 0;
        ui.ask_typed[0] = 0;
        sync_ui();
        present();
        return -1;
    }
    /* ｸﾞﾙｰﾌﾟ: the word between the drawing's name and the group number, on
     * the row at y 337..351.  It goes into a mode of its own, the same shape
     * as レイヤ変更's -- its line along the top, `ｸﾞﾙｰﾌﾟ 指示` in red over
     * this row and `全レイヤ 表示` over サブ画面表示, and the pointer back
     * in the drawing ends it.  The group's number beside it (x 110..121)
     * is the same target, with either button -- tools/pressstr.sh at
     * (115,344) writes the same six strings left or right. */
    if (x >= 65 && x <= 121 && y >= 337 && y <= 351 && drawing) {
        mouse_x = x;
        mouse_y = y;
        jw_ui_from(&ui, drawing);
        ui.group_mode = 1;      /* after jw_ui_from, which memsets */
        sync_ui();
        present();
        return -1;
    }
    /* While ｸﾞﾙｰﾌﾟ is asking, the sixteen boxes are the **groups**: the
     * right button picks the one to write to and the left turns one off
     * and on, exactly as they do for layers.  The mode stays up. */
    if (ui.group_mode && drawing) {
        const int n = layer_at(x, y);

        if (n >= 0) {
            if (right) {
                drawing->write_layer =
                    (unsigned char)((n << 4) | (drawing->write_layer & 15));
                drawing->group_on[n] = 1;
            } else if (n != (drawing->write_layer >> 4)) {
                drawing->group_on[n] = !drawing->group_on[n];
            }
            if (right && n == (drawing->write_layer >> 4)) {
                /* The right button on the group already being written to
                 * opens グループ データ表示 instead. */
                mouse_x = x;
                mouse_y = y;
                jw_ui_from(&ui, drawing);
                ui.group_mode = 1;      /* the panel keeps ｸﾞﾙｰﾌﾟ's rows */
                ui.data_screen = JW_DATA_GROUP;
                sync_ui();
                present();
                return -1;
            }
            mouse_x = x;
            mouse_y = y;
            jw_ui_from(&ui, drawing);
            ui.group_mode = 1;  /* after jw_ui_from, which memsets */
            sync_ui();
            present();
            return -1;
        }
    }
    {
        const int n = layer_at(x, y);

        if (n >= 0 && drawing) {
            /* `layer_on` is indexed by the whole byte: the group in the
             * high nibble, the layer in the low one (src/jwc.h). */
            const int full = (ui.group << 4) | n;

            if (right && full == drawing->write_layer) {
                /* The right button on the layer already being written to
                 * opens レイヤ データ表示 -- the same screen ｸﾞﾙｰﾌﾟ has,
                 * with one layer per panel and `0-0 ` for a label. */
                mouse_x = x;
                mouse_y = y;
                jw_ui_from(&ui, drawing);
                ui.layer_mode = 1;
                ui.data_screen = JW_DATA_LAYER;
                sync_ui();
                present();
                return -1;
            }
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
        /* **Picking the item already in force is not a re-pick.**  変形 goes
         * on to 変形範囲 and 図形 puts up its own empty screen; every other
         * command measured comes up the same way again.  See JwUi.again. */
        const int again = pick == ui.command && (pick == 17 || pick == 27);

        /* **面取's shape is a setting, not the command's state.**  The
         * original keeps 【角面】【丸面】【Ｌ面】【楕円面】 across picking
         * the item again -- the branch table presses ① on one branch and
         * again on the next and walks the ring -- while jw_cmd_pick clears
         * everything the command holds.  So it is carried over by hand. */
        const int chamfer = cmd.chamfer;

        ui.saved_done = 0;      /* the banner belongs to the save that made it */
        ui.command = pick;
        ui.guide = 0;
        jw_cmd_pick(&cmd, pick);
        cmd.chamfer = chamfer;
        ui.stage = 0;
        /* Picking an item starts that command over, and 入出力 is a command
         * like any other: its own menus go with it.  Without this, pressing
         * 入出力 while its file list was up left the list there, and the
         * next press on the top line was read as ①選択確定. */
        ui.io_stage = 0;
        ui.opt_stage = 0;       /* and ｵﾌﾟｼｮﾝ's, for the same reason */
        ui.missed = 0;          /* picking an item clears the band */
        cmd.again = again;      /* after jw_cmd_pick, which clears it */
        mouse_x = x;
        mouse_y = y;
        /* **And everything else the command was in the middle of.**
         * jw_cmd_pick has just cleared the command's own state; without
         * this the chrome keeps the last one's -- pick ＋, press ④平行,
         * then pick ／, and the port still drew 基準線 マウス指示 because
         * ui.ask_kind was never put back.  It shows only when one command
         * follows another in the same run, which is how the program is
         * used and how tools/branchport.mjs now walks it. */
        sync_ui();
        present();
        return pick;
    }
    /* The top line is a menu too.  消去 finishes there and nowhere else: the
     * `|①実行(L)|` the original writes after a range is picked is a real
     * target, and pressing the drawing area instead leaves the entities red
     * (4.9 in RESUME.md).  jw_ui_top_item reads the line the chrome last
     * wrote, so the chrome has to have been drawn -- present() does that at
     * the end of every press, so by the time anyone can click it has. */
    /* 入出力's top line is its own menu, and pressing an item there opens
     * another one.  Measured: ①ﾌｧｲﾙ and ②ﾌﾟﾛｯﾀ each replace the line; the
     * rest are not done yet, and pressing them leaves it as it was. */
    /* **Three other commands open 入出力's ファイル選択 screen.**  図形
     * ⑦登録 and ⑧複写 list the drawings a figure can be taken out of,
     * 多角形 ④座標ファイル読込 lists `*.txt` and ｵﾌﾟｼｮﾝ ⑦外部処理 lists
     * `*.bat`.  The screen is the same one down to the bytes -- only the
     * top line, the `path=` and the word beside the free space change, and
     * `編集ファイル名=` is 入出力's alone.  See jw_ui_pick_kind. */
    if (!ui.io_stage && y >= 0 && y <= 15) {
        const int it = jw_ui_top_item(x, y);
        int kind = 0;

        if (ui.command == 27 && (it == 8 || it == 9)) {
            kind = JW_PICK_ZUKEI;
        } else if (ui.command == 19 && it == 4) {
            kind = JW_PICK_COORD;
        } else if (ui.command == 29 && it == 7) {
            kind = JW_PICK_CHILD;
        }
        if (kind) {
            file_pick(kind);
            mouse_x = x;
            mouse_y = y;
            present();
            return -1;
        }
    }
    /* A press on one of the rows of ②読込's list picks that drawing.  The
     * rows are 8 to 28 and the list starts at column 17, both measured. */
    if (ui.command == 30
        && (ui.io_stage == JW_IO_LOAD || ui.io_stage == JW_IO_SAVE
            || ui.io_stage == JW_IO_MERGE || ui.io_stage == JW_IO_KILL)
        && x >= 128 && y >= 112) {
        const int row = y / 16 - 7;

        mouse_x = x;
        mouse_y = y;
        if (row >= 0 && row < JW_FILE_ROWS
            && ui.file_top + row < ui.file_n) {
            /* **A press on the row that is already picked confirms it** --
             * which is what a double press comes to, and what a visitor
             * meant by "the list answers a double click".
             *
             * It is not a timed double click.  Measured three ways
             * (tools/dblcheck.sh): two presses 300,000 instructions apart
             * and two 30,000,000 apart both open the drawing, one press on
             * its own leaves the list up, and a second press on a
             * **different** row leaves it up as well and picks that row.
             * So the rule is "the same row again", not "quickly". */
            const int was = ui.io_stage;

            if (ui.file_top + row == ui.file_sel) {
                if (was == JW_IO_MERGE || was == JW_IO_KILL) {
                    ui.io_stage = was == JW_IO_KILL ? JW_IO_KILLASK
                                                    : JW_IO_MERGE1;
                } else {
                    ui.io_stage = JW_IO_FILE;
                    if (was == JW_IO_LOAD) file_chosen();
                }
                present();
                return -1;
            }
            ui.file_sel = ui.file_top + row;
        }
        present();
        return -1;
    }
    /* ⑦INDEX's list.  Measured with made-up lists of four, twenty and
     * twenty-five names (tools/ixprobe.sh): the names are rows 4 to 23 and a
     * press picks the one it lands on, the right button picks it and turns
     * its mark on or off, a press below the last name picks the last name,
     * the upper yellow band (row 3) puts the list back at the first name and
     * the lower one (row 29) jumps to the last -- which then stands alone at
     * the top, because the window keeps its twenty rows. */
    if (ui.command == 30 && ui.io_stage == JW_IO_INDEX && !ui.ix_del
        && ui.ix_n > 0 && x >= 122 && y >= 32 && y < 464) {
        const int row = y / 16;

        mouse_x = x;
        mouse_y = y;
        if (row == 2) {
            ui.ix_top = 0;
            ui.ix_sel = 0;
        } else if (row == 28) {
            ui.ix_top = ui.ix_n - 1;
            ui.ix_sel = ui.ix_n - 1;
        } else {
            int at = ui.ix_top + row - 3;

            if (at > ui.ix_n - 1) {
                at = ui.ix_n - 1;
            }
            if (at < 0) {
                at = 0;
            }
            ui.ix_sel = at;
            if (right) {
                ui.ix_mark[at] = (unsigned char)!ui.ix_mark[at];
            }
        }
        present();
        return -1;
    }
    /* ｵﾌﾟｼｮﾝ's top line.  ①建具平面 puts up the library's sixteen shapes;
     * the rest are not built yet and leave the line as it was. */
    if (ui.command == 29 && y >= 0 && y <= 15 && jw_ui_top_item(x, y)) {
        const int item = jw_ui_top_item(x, y);

        cmd.top_item = 0;
        cmd.top_right = 0;
        if (ui.opt_stage == 0 && item == 1) {
            /* The screen is up; what is on it comes from src/item.h like
             * ②断面's and ③立面's. */
            ui.opt_stage = JW_OPT_PLAN;
            ui.opt_depth = 70.0;
            ui.opt_width = 35.0;
            ui.opt_kind = 'A';
            /* The two the band shows once a shape is picked.  1800 and 0 are
             * what the original starts with. */
            ui.opt_shape = -1;
            ui.opt_inner = 1800.0;
            ui.opt_gap = 0.0;
            ui.opt_line = -1;
        }
        if (ui.opt_stage == 0 || item == 1) {
            if (jw_ui_item_has(29, item, right)) {
            /* The rest of ｵﾌﾟｼｮﾝ's bar is not built, but the original
             * still writes something when it is pressed -- src/item.h. */
                cmd.top_item = item;
                cmd.top_right = right;
            }
        }
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    if (ui.command == 30 && y >= 0 && y <= 15 && jw_ui_top_item(x, y)) {
        const int item = jw_ui_top_item(x, y);
        /* What the chain below answers, it answers by moving 入出力 on.  If
         * it does not move, nothing here knew the cell -- and src/item.h may
         * still know what the original writes on it. */
        const int was = ui.io_stage;
        const int ixwas = ui.ix_del;

        cmd.top_item = 0;
        cmd.top_right = 0;
        if (ui.io_stage == 0 && (item == 1 || item == 2)) {
            ui.io_stage = item == 1 ? JW_IO_FILE : JW_IO_PLOT;
        } else if (ui.io_stage == JW_IO_FILE && (item == 1 || item == 2)) {
            /* `|①保存(L)|②読込(R)|③合成|…` -- **each label is its own
             * cell**, and either button presses it.  The (L) and (R) are
             * the original telling you which button it answers elsewhere,
             * not which one to use here: the 入出力 line above works the
             * same way, and ②ﾌﾟﾛｯﾀ(R) is pressed with the left button at
             * its own column (tools/plotrun.sh, against the original).
             *
             * This was read the other way at first -- one cell, the button
             * choosing -- and pressing the word 読込 then did nothing at
             * all, which is what a visitor hit. */
            file_list(item == 1);
            ui.io_stage = item == 1 ? JW_IO_SAVE : JW_IO_LOAD;
        } else if (ui.io_stage == JW_IO_FILE && item >= 3 && item <= 7) {
            /* The rest of the bar.  ③合成 and ④削除 put up the same list
             * ②読込 does -- measured, the line is the same byte for byte
             * (tools/ioroad.sh) -- and the other three have lines of their
             * own. */
            if (item == 3 || item == 4) {
                file_list(0);
                ui.io_stage = item == 3 ? JW_IO_MERGE : JW_IO_KILL;
            } else {
                ui.io_stage = item == 5 ? JW_IO_DRIVE
                            : item == 6 ? JW_IO_DXF : JW_IO_INDEX;
                if (ui.io_stage == JW_IO_INDEX) {
                    index_read();
                }
            }
        } else if ((ui.io_stage == JW_IO_LOAD || ui.io_stage == JW_IO_SAVE
                    || ui.io_stage == JW_IO_MERGE || ui.io_stage == JW_IO_KILL)
                   && item == 1) {
            /* ①選択確定.  読込 opens the drawing there and then; 保存 goes
             * on to ◆ｍｅｍｏ入力, the overwrite question and 書き込みます
             * -- the road tools/saveroad.sh walked on the original. */
            const int was = ui.io_stage;

            mouse_x = x;
            mouse_y = y;
            if (was == JW_IO_LOAD) {
                ui.io_stage = JW_IO_FILE;
                file_chosen();
            } else if (was == JW_IO_MERGE || was == JW_IO_KILL) {
                /* **Neither does it yet.**  The original takes the list
                 * down, puts the drawing back and asks -- 合成 twice,
                 * 削除 once (RESUME 4.44c). */
                ui.io_stage = was == JW_IO_KILL ? JW_IO_KILLASK
                                                : JW_IO_MERGE1;
            } else {
                ui.io_stage = JW_IO_MEMO;
                ui.memo_row = 0;
            }
            present();
            return -1;
        } else if (ui.io_stage == JW_IO_SAVE && item == 3) {
            /* 3 shinki hozon: write under a name of your own rather than
             * over one from the list. */
            ui.io_stage = JW_IO_NEWNAME;
            memcpy(ui.save_name, ui.open_name, sizeof ui.open_name);
            ui.save_name[sizeof ui.open_name - 1] = 0;
            ui.save_name_n = (int)strlen(ui.save_name);
        } else if (ui.io_stage == JW_IO_MERGE1 && item == 1) {
            /* ① 実 行 brings it in and asks again over the drawing it has
             * made; ② 中止 on that one takes it out again. */
            /* **The counts wait.**  The original draws the merged
             * drawing and still says 30|13 until the second question is
             * answered, so jw_ui_from is not called here. */
            file_merge();
            ui.io_stage = JW_IO_MERGE2;
        } else if (ui.io_stage == JW_IO_MERGE1 && item == 2) {
            file_list(0);
            ui.io_stage = JW_IO_MERGE;          /* ② 再選択 */
        } else if (ui.io_stage == JW_IO_MERGE2 && item == 1) {
            /* **jw_ui_from clears the whole JwUi**, so what 入出力 was
             * in the middle of has to be put back after it. */
            jw_ui_from(&ui, drawing);           /* ① 実行 keeps it */
            ui.command = cmd.command;
            ui.io_done = 1;
            /* and the road comes back to ①ﾌｧｲﾙ's line, not to 入出力's */
            ui.io_stage = JW_IO_FILE;
        } else if (ui.io_stage == JW_IO_MERGE2 && item == 2) {
            merge_undo();                       /* ② 中止 */
            jw_ui_from(&ui, drawing);
            ui.command = cmd.command;
            ui.io_done = 1;
            ui.io_stage = JW_IO_FILE;
        } else if (ui.io_stage == JW_IO_KILLASK && item == 1) {
            file_kill();                        /* ① 削 除 */
            file_list(0);
            ui.io_stage = JW_IO_KILL;
            ui.io_done = 1;
        } else if (ui.io_stage == JW_IO_KILLASK && item == 2) {
            file_list(0);
            ui.io_stage = JW_IO_KILL;           /* ② 再選択 */
        } else if (ui.io_stage == JW_IO_INDEX && item == 1 && !ui.ix_del) {
            ui.ix_del = 1;          /* ①ｲﾝﾃﾞｯｸｽ削除 asks first */
        } else if (ui.io_stage == JW_IO_INDEX && ui.ix_del && item == 1) {
            index_delete();         /* ① 削 除 */
        } else if (ui.io_stage == JW_IO_INDEX && ui.ix_del && item == 2) {
            ui.ix_del = 0;          /* ② 再選択 */
        } else if (ui.io_stage == JW_IO_OVER && item == 1) {
            ui.io_stage = JW_IO_WRITE;      /* ①上書きする */
        } else if (ui.io_stage == JW_IO_OVER && item == 2) {
            ui.io_stage = JW_IO_SAVE;       /* ② 再選択 */
        } else if (ui.io_stage == JW_IO_WRITE && item == 1) {
            /* ① 実 行.  The original goes all the way back to 入出力's own
             * line afterwards, not to ①ﾌｧｲﾙ's -- measured (step 14 of
             * tools/saveroad.sh reads `1)ファイル(L)2)プロッタ(R)…`). */
            ui.saved_done = file_write();
            ui.io_stage = 0;
            ui.save_name[0] = 0;        /* the typed name belongs to that save */
            ui.save_name_n = 0;
        } else if (ui.io_stage == JW_IO_WRITE && item == 2) {
            ui.io_stage = JW_IO_SAVE;       /* ② 再選択 */
        } else if (ui.io_stage == JW_IO_PLOT && item == 3) {
            /* ③ﾌｧｲﾙ出力.  The original asks which `*.JWP` to use first --
             * a plotter definition, which says what language the plotter
             * speaks.  **The port has no plotter**: it writes the PDF and
             * the PNG itself (src/plot.c), so there is nothing to choose
             * and it goes straight to the name. */
            ui.io_stage = JW_IO_PNAME;
            ui.io_name_n = 0;
            ui.io_name[0] = 0;
        } else if (ui.io_stage == JW_IO_PSET && item == 1) {
            ui.io_stage = JW_IO_PGO;            /* ①確定 */
        } else if (ui.io_stage == JW_IO_PGO && item == 1) {
            ui.io_stage = 0;                    /* ① 実行 */
            plot_wanted = 1;
        } else if (ui.io_stage == JW_IO_PGO && item == 2) {
            ui.io_stage = 0;                    /* ② 中止 */
        }
        if (ui.io_stage == was && ui.ix_del == ixwas && !plot_wanted
            && jw_ui_item_has(30, item, right)) {
            cmd.top_item = item;
            cmd.top_right = right;
        }
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* The top line, but on none of its cells: the command's band goes and
     * the two counts come back.  See JwCmd.band_off. */
    if (cmd.command && y >= 0 && y <= 15 && !jw_ui_top_item(x, y)
        && jw_ui_past_cells(x, y)) {
        cmd.band_off = 1;
        cmd.top_item = 0;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    if (cmd.command && y >= 0 && y <= 15 && jw_ui_top_item(x, y)) {
        /* 図形 ①登録's ① 実 行: the file goes out **before** the press is
         * handed on, because that is what clears the road. */
        if (cmd.command == 27 && cmd.zukei == JW_ZUKEI_WRITE && !right
            && jw_ui_top_item(x, y) == 1) {
            zukei_write();
        }
        /* ②読込's ①選択確定 reads the file the list has picked; jw_cmd_top
         * then moves the road on to 位置指示. */
        if (cmd.command == 27 && cmd.zukei == JW_ZUKEI_LIST
            && jw_ui_top_item(x, y) == 1) {
            zukei_take(zukei_pick);
        }
        if (jw_cmd_top(&cmd, drawing, jw_ui_top_item(x, y), right)) {
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
    /* ｵﾌﾟｼｮﾝ ①建具平面's road, once the sixteen are up:
     *
     *   * a press on one of them takes that shape.  The cells are two across
     *     and eight down, the rules at y 16 and then every 48 from 63, and
     *     the divider at x 380 -- the same grid the shapes are drawn in.
     *   * a press on a line of the drawing takes it as the 基準線;
     *   * a press then says where along it the fitting goes, and it goes in.
     *
     * Measured with tools/optpick.sh and tools/tateguplace.sh: the counts go
     * 30 to 33 on the third press, which is the first shape's three members.
     */
    if (cmd.command == 29 && ui.opt_stage == JW_OPT_PLAN && ui.top_item == 1
        && x >= AREA_X0 && x <= AREA_X1 && y >= 16 && y < 400) {
        const int col = x >= 380 ? 1 : 0;
        const int row = y < 63 ? 0 : (y - 63) / 48 + 1;
        const JwTategu *lib = jw_tategu_lib(1);

        if (row < 8 && lib && row * 2 + col < lib->n) {
            ui.opt_shape = row * 2 + col;
            ui.opt_stage = JW_OPT_BASE;
        }
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    if (cmd.command == 29
        && (ui.opt_stage == JW_OPT_BASE || ui.opt_stage == JW_OPT_BASE2)
        && drawing
        && x >= AREA_X0 && x <= AREA_X1 && y >= AREA_Y0 && y <= AREA_Y1) {
        const long at = jw_cmd_line_at(drawing, &view, x, y);

        if (at >= 0) {
            ui.opt_line = at;
            ui.opt_stage = JW_OPT_WHERE;
        }
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    if (cmd.command == 29 && ui.opt_stage == JW_OPT_WHERE && drawing
        && x >= AREA_X0 && x <= AREA_X1 && y >= AREA_Y0 && y <= AREA_Y1) {
        const JwTategu *lib = jw_tategu_lib(1);
        double px, py;

        jw_cmd_at(&view, x, y, &px, &py);
        if (lib && ui.opt_shape >= 0 && ui.opt_shape < lib->n
            && ui.opt_line >= 0 && ui.opt_line < drawing->n_lines) {
            jw_tategu_place(drawing, &lib->shape[ui.opt_shape],
                            &drawing->lines[ui.opt_line], px, py,
                            ui.opt_inner, ui.opt_depth, ui.opt_width);
        }
        ui.opt_stage = JW_OPT_BASE2;
        ui.opt_line = -1;
        mouse_x = x;
        mouse_y = y;
        /* **Not jw_ui_from.**  That clears the whole JwUi, and ｵﾌﾟｼｮﾝ's own
         * state lives in it: the road would go back to nothing and the top
         * line to the version banner.  The counts are the only thing that
         * has changed. */
        ui.n_lines = drawing->n_lines;
        ui.n_arcs = drawing->n_arcs + drawing->n_texts;
        sync_ui();
        present();
        return -1;
    }
    /* 図形 ②読込's list: a press on another cell moves the pick and leaves
     * the list up, a press on the one already picked takes that figure.  The
     * same rule the drawing list has, and measured the same way: with AAA and
     * BOX in the group, one press on BOX's cell turns BOX black-on-white and
     * AAA plain and nothing else, and a second press puts BOX in hand. */
    if (cmd.command == 27 && cmd.zukei == JW_ZUKEI_LIST
        && x >= 144 && x < 624 && y >= 56 && y < 376) {
        const int at = (y - 56) / 32 * 5 + (x - 144) / 96;

        if (at < zukei_names_n) {
            if (at != zukei_pick) {
                zukei_pick = at;
            } else if (zukei_take(at)) {
                jw_cmd_zukei_put(&cmd, drawing);
            }
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
    /* 入出力 → ②ﾌﾟﾛｯﾀ → ③ﾌｧｲﾙ出力's field.  [Enter] moves it on to the
     * settings bar, [ESC] gives the whole thing up. */
    /* ◆ｍｅｍｏ入力 asks for two lines, and [Enter] moves from the first to
     * the second and then on.  Measured: ①選択確定 puts the line up, the
     * first [Enter] moves 144 pixels (rows 5 and 6 -- the cursor), the
     * second brings up the overwrite question. */
    /* ③ 新規 保存's field.  [Enter] takes the name on to ◆ｍｅｍｏ入力 and
     * the rest of the road; [ESC] goes back to the list. */
    /* 図形 ①登録's ◆図形名入力.  The name is what the figure is written
     * under, and [Enter] goes on to `書き込みます`. */
    /* ②角  度 and ①倍率指定X,Y's fields.  Digits, a dot and a comma go in,
     * [Enter] takes what is there and [ESC] gives it up; either way the road
     * goes back to 位置指示. */
    if (cmd.command == 27 && cmd.zukei_ask) {
        if (key == 27) {
            cmd.zukei_ask = 0;
        } else if (key == 13 || key == 10) {
            if (cmd.zukei_typed_n) {
                if (cmd.zukei_ask == JW_ZUKEI_ANG) {
                    cmd.zukei_ang = (float)atof(cmd.zukei_typed);
                    cmd.zukei_prev_ang = cmd.zukei_ang;
                } else {
                    const char *comma = strchr(cmd.zukei_typed, ',');

                    cmd.zukei_mx = (float)atof(cmd.zukei_typed);
                    cmd.zukei_my = comma ? (float)atof(comma + 1) : cmd.zukei_mx;
                }
            }
            cmd.zukei_ask = 0;
        } else if (key == 8) {
            if (cmd.zukei_typed_n > 0) {
                cmd.zukei_typed[--cmd.zukei_typed_n] = 0;
            }
        } else if (((key >= '0' && key <= '9') || key == '.' || key == ','
                    || key == '-')
                   && cmd.zukei_typed_n < (int)sizeof cmd.zukei_typed - 1) {
            cmd.zukei_typed[cmd.zukei_typed_n++] = (char)key;
            cmd.zukei_typed[cmd.zukei_typed_n] = 0;
        }
        sync_ui();
        present();
        return -1;
    }
    if (cmd.command == 27 && cmd.zukei == JW_ZUKEI_NAME) {
        if (key == 27) {
            cmd.zukei = JW_ZUKEI_PICK;
        } else if ((key == 13 || key == 10) && cmd.zukei_name_n) {
            cmd.zukei = JW_ZUKEI_WRITE;
        } else if (key == 8) {
            if (cmd.zukei_name_n > 0) {
                cmd.zukei_name[--cmd.zukei_name_n] = 0;
            }
        } else if (key > ' ' && key < 127
                   && cmd.zukei_name_n < (int)sizeof cmd.zukei_name - 4) {
            cmd.zukei_name[cmd.zukei_name_n++] = (char)toupper(key);
            cmd.zukei_name[cmd.zukei_name_n] = 0;
        }
        sync_ui();
        present();
        return -1;
    }
    if (ui.command == 30 && ui.io_stage == JW_IO_NEWNAME) {
        if (key == 27) {
            ui.io_stage = JW_IO_SAVE;
            ui.save_name_n = 0;
        } else if (key == 13 || key == 10) {
            if (ui.save_name_n) {
                ui.io_stage = JW_IO_MEMO;
                ui.memo_row = 0;
            }
        } else if (key == 8) {
            if (ui.save_name_n > 0) ui.save_name[--ui.save_name_n] = 0;
        } else if (key > ' ' && key < 127
                   && (int)strlen(ui.save_name) < (int)sizeof ui.save_name - 1) {
            /* **The cursor is at the front.**  The field comes up with the
             * drawing in hand in it and a keystroke goes in before that,
             * not after: measured on the original, `X` over `SAMPLE0` gives
             * `XSAMPLE0` and `ABC` gives `ABCSAMPLE0` -- ten characters,
             * so it does not stop at eight either. */
            char rest[13];
            const int n = ui.save_name_n;

            strcpy(rest, ui.save_name + n);
            ui.save_name[n] = (char)toupper(key);
            strcpy(ui.save_name + n + 1, rest);
            ui.save_name_n = n + 1;
        }
        present();
        return 1;
    }
    if (ui.command == 30 && ui.io_stage == JW_IO_MEMO) {
        if (key == 27) {
            ui.io_stage = JW_IO_SAVE;
        } else if (key == 13 || key == 10) {
            if (ui.memo_row == 0) {
                ui.memo_row = 1;
            } else {
                /* The question only comes up when there is something to
                 * overwrite; a name that is not on the disk goes straight
                 * to 書き込みます. */
                char path[256];
                FILE *f;

                /* **The name that will be written**, which after
                 * ③ 新規 保存 is the one that was typed and not the row the
                 * list has picked.  Asking the wrong one sent every new
                 * name through 同名ﾌｧｲﾙが存在します. */
                file_picked(path);
                f = fopen(path, "rb");
                if (f) {
                    fclose(f);
                    ui.io_stage = JW_IO_OVER;
                } else {
                    ui.io_stage = JW_IO_WRITE;
                }
            }
        } else if (key == 8) {
            if (ui.memo_n[ui.memo_row] > 0) {
                ui.memo[ui.memo_row][--ui.memo_n[ui.memo_row]] = 0;
            }
        } else if (key >= ' ' && key < 127
                   && ui.memo_n[ui.memo_row] < (int)sizeof ui.memo[0] - 1) {
            ui.memo[ui.memo_row][ui.memo_n[ui.memo_row]++] = (char)key;
            ui.memo[ui.memo_row][ui.memo_n[ui.memo_row]] = 0;
        }
        present();
        return 1;
    }
    /* [ESC] on ⑦INDEX.  Measured (tools/ixprobe.sh): from the list it goes
     * back to ①ﾌｱｲﾙ's line, and from ①ｲﾝﾃﾞｯｸｽ削除's question it goes back to
     * the list with the pick and the marks as they were. */
    if (ui.command == 30 && ui.io_stage == JW_IO_INDEX && key == 27) {
        if (ui.ix_del) {
            ui.ix_del = 0;
        } else {
            ui.io_stage = JW_IO_FILE;
        }
        present();
        return -1;
    }
    if (ui.command == 30 && ui.io_stage == JW_IO_PNAME) {
        if (key == 27) {
            ui.io_stage = 0;
        } else if (key == 13 || key == 10) {
            ui.io_stage = JW_IO_PSET;
        } else if (key == 8) {
            if (ui.io_name_n > 0) {
                ui.io_name[--ui.io_name_n] = 0;
            }
        } else if (key >= ' ' && key < 127
                   && ui.io_name_n < (int)sizeof ui.io_name - 1) {
            ui.io_name[ui.io_name_n++] = (char)key;
            ui.io_name[ui.io_name_n] = 0;
        }
        present();
        return -1;
    }
    if (ui.ask) {
        const int what = ui.ask;

        if (key == 27) {
            ui.ask = 0;
        } else if (key == 13 || key == 10) {
            /* **The drawing is measured in millimetres of paper**, so a
             * bigger sheet makes it smaller on the screen: unit_mm is
             * 518 / the paper's width.  Measured on SAMPLE0 -- A-4 to A-2
             * doubles the width, and the original's drawing goes from 2421
             * lit pixels to 1212, which is the ratio of the two unit_mm
             * exactly.  jwc_set_paper does the shrinking, on the geometry
             * rather than on the view; the view is left alone. */
            if (what == JW_ASK_LNAME) {
                /* The name goes on the layer being written to -- that is
                 * the one the box shows. */
                if (drawing) {
                    char *to = drawing->layer_name[drawing->write_layer];
                    int n = ui.ask_n < 8 ? ui.ask_n : 8;

                    memcpy(to, ui.ask_typed, (size_t)n);
                    to[n] = 0;
                }
            } else if (ui.ask_n > 0 && what == JW_ASK_PAPER) {
                jwc_set_paper(drawing, ui.ask_typed[0] - '0');
            } else if (ui.ask_n > 0 && drawing) {
                const double n = atof(ui.ask_typed);

                if (n > 0.0) {
                    jwc_set_denom(drawing, 1.0 / n);
                }
            }
            jw_ui_from(&ui, drawing);
            ui.ask = 0;                 /* the question goes with the answer */
            /* And the original comes out of it **in 入出力**: the menu's
             * last row goes yellow and its bar
             * (`|①ファイル(L)|②プロッタ(R)|…`) goes along the top.  That
             * is the whole of the 3079 pixels tools/papercheck.sh had left
             * -- 904 in the menu row, 2175 in the bar. */
            ui.command = 30;
            jw_cmd_pick(&cmd, 30);
            ui.band_kept = 1;   /* it redraws, so the band is the drawing's */
        } else if (key == 8) {
            if (ui.ask_n > 0) {
                ui.ask_typed[--ui.ask_n] = 0;
            }
        } else if (((key >= ' ' && key < 127 && what == JW_ASK_LNAME)
                    || (key >= '0' && key <= '9') || key == '.')
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
