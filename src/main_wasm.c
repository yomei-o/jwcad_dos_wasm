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
#include <math.h>
#include "cmd.h"
#include "jwc.h"
#include "plot.h"
#include "kigou.h"
#include "ui.h"
#include "dxf.h"
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
/* 線記号変形の取り消しの控え。 */
static int kg_undo;
static long kg_nl, kg_na, kg_nt, kg_np;
static JwcLine kg_line;
/* 命令の帯を描く所：矢が左のメニューの上にあるあいだは、最後に作図範囲側に
 * いた所のまま（jw_mouse）。 */
static int band_x = 200, band_y = 200;
/* ○ ①径寸法 の欄を [Enter] で閉じてから、矢がまだ動いていない。 */
static int circ_fresh;
/* □ の ① の欄を開いたとき、その前は段 1（横=・縦= の箱）だった。 */
static int box_keep;

EMSCRIPTEN_KEEPALIVE int jw_width(void)  { return vga.width; }
EMSCRIPTEN_KEEPALIVE int jw_height(void) { return vga.height; }
EMSCRIPTEN_KEEPALIVE unsigned char *jw_framebuffer(void) { return rgba; }
EMSCRIPTEN_KEEPALIVE const char *jw_status(void) { return status; }

static void present(void);
/* 寸法設定 の ペン は図面ごとに保存されています（盤行の 7 番・8 番）。
 * SAMPLE0 は 1、SAMPLE2 と SAMPLE3 は 2 で、盤を開かずに寸法を引いても
 * 本物はその値で引きます（SAMPLE2 の 3 本は `01 02 ...`）。 */
static void dim_from_drawing(void);

/* 図形 ②読込 reads the group when the module starts; the reader itself is
 * further down, beside the rest of the disk. */
static void zukei_list_read(void);

/* 引いた線を並べる窓を開けます（`tools/seqshot.mjs` が環境変数を見て
 * 呼びます）。本物の側は `tools/frametrace.sh`。 */
EMSCRIPTEN_KEEPALIVE void jw_lines_trace(int on)
{
    jw_line_trace = on ? 1 : 0;
}

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
    /* 起動したところなので、命令をまたいで残る数（＋・／ の長さ・角度、
     * □ の大きさなど。本物では DGROUP の変数）も初めの値に戻します。
     * 検査（tools/seqall.mjs）は 1 つの wasm で何件も起動し直すので、
     * これが無いと前の件の数が残っていました。 */
    jw_cmd_pick(&cmd, 0);
    free(cmd.hen_end);
    free(cmd.sel_line);
    free(cmd.sel_arc);
    free(cmd.sel_text);
    memset(&cmd, 0, sizeof cmd);
    jw_cmd_pick(&cmd, 0);
    jw_ui_from(&ui, drawing);
    dim_from_drawing();
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
/* 文字入力を 1 つ決めたときの後始末。[Enter] でも、図面を押しても
 * 同じことをします（「指示事項」の実測）。 */
static void kigou_input_done(void);

/* 文字を打ち終えたあとの置き方。指示回数 0 なら線端、そうでなければ
 * 押したところを原点にします。 */
static void place_kigou(const JwKigouSym *sym, double px, double py,
                        int phase);

/* **位置を押した時点で置いた記号の枠**。文字入力の盤が出ているあいだ、
 * 指示線はもう消えているので、あとから字を足すときに使い直します。 */
/* 寸法値記入コード（`14***`）に渡す寸法設定。盤の値そのものです。 */
static const JwKigouDim *kigou_dim(void)
{
    static JwKigouDim k;

    k.gap_mm = cmd.dim_gap_mm;
    k.unit = cmd.dim_unit;
    k.dec = cmd.dim_dec;
    k.comma = cmd.dim_comma_on;
    k.zero = cmd.dim_zero_on;
    return &k;
}

static JwcLine held_base, held_base2;
static int held_two, held_on;
static double held_ox, held_oy;

static void place_kigou_typed(const JwKigouSym *sym)
{
    double px = cmd.kigou_px, py = cmd.kigou_py;

    if (!drawing) {
        return;
    }
    if (!jw_kigou_takes1(sym)) {
        place_kigou(sym, px, py, 10 + cmd.kigou_in_at);
        return;
    }
    if (cmd.kigou_line < 0 || cmd.kigou_line >= drawing->n_lines) {
        cmd.kigou_line = -1;
        return;
    }
    if (!sym->picks) {
        const JwcLine *l = &drawing->lines[cmd.kigou_line];
        const double q0 = (l->x0 - px) * (l->x0 - px)
                        + (l->y0 - py) * (l->y0 - py);
        const double q1 = (l->x1 - px) * (l->x1 - px)
                        + (l->y1 - py) * (l->y1 - py);

        px = q0 <= q1 ? l->x0 : l->x1;
        py = q0 <= q1 ? l->y0 : l->y1;
    }
    place_kigou(sym, px, py, 1);
}

static void kigou_input_done(void)
{
    const JwKigou *g = jw_kigou_lib(cmd.kigou_group);
    const JwKigouSym *sym = g && cmd.kigou_sym > 0 && cmd.kigou_sym <= g->n
                          ? &g->sym[cmd.kigou_sym - 1] : 0;

    if (sym) {
        place_kigou_typed(sym);
    }
    cmd.kigou_in_n = 0;
    cmd.kigou_in_buf[0] = 0;
    /* **次の文字入力があれば続けて聞きます**（「楕円記号 (2)」は
     * `INPUT(1)` のあと `INPUT(2)`。実測）。 */
    cmd.kigou_in_at++;
    if (!sym || !jw_kigou_input(sym, cmd.kigou_in_at)) {
        cmd.kigou_input = 0;
        cmd.kigou_in_at = 0;
        cmd.kigou_line = -1;
        cmd.kigou_line2 = -1;
        held_on = 0;
    }
}

/* 拾った指示線に記号を置いて、その線を消します。
 *
 * 原点は、指示線 1 だけのときは**押したところを指示線に落とした点**
 * （「幅 [1mm]」の実測）、指示線 2 もあるときは**2 本の交点**です。 */
static void place_kigou_1(const JwKigouSym *sym, double px, double py,
                        int phase)
{
    JwcLine base, base2;
    const JwcLine *two = 0;
    double ax, ay, dx, dy, len, t, ox, oy;

    if (!drawing) {
        return;
    }
    if (phase >= 10 && held_on) {
        /* 字だけをあとから足します（枠は押したときのまま）。 */
        cmd.n0_lines = drawing->n_lines;
        cmd.n0_ink = drawing->n_ink + 1;
        cmd.n0_arcs = drawing->n_arcs;
        cmd.n0_texts = drawing->n_texts;
        jw_kigou_put(drawing, sym, &held_base, held_two ? &held_base2 : 0,
                     held_ox, held_oy, px, py,
                     cmd.kigou_in_n ? cmd.kigou_in_buf : 0, phase, 0,
                     cmd.kigou_mag_x, cmd.kigou_mag_y, kigou_dim());
        ui.n_lines = drawing->n_lines;
        ui.n_arcs = drawing->n_arcs + drawing->n_texts;
        return;
    }
    if (cmd.kigou_line < 0 || cmd.kigou_line >= drawing->n_lines) {
        /* **指示線を取らない記号**（制御コード 10 が無いもの）。
         * 横を +x、縦を +y にした仮の線を原点に置いて描きます。
         * 指示線は拾っていないので、消す線もありません。 */
        JwcLine ln;

        memset(&ln, 0, sizeof ln);
        ln.x0 = (float)(px - 1.0);
        ln.y0 = (float)py;
        ln.x1 = (float)px;
        ln.y1 = (float)py;
        /* 線色・線種・レイヤは**書き込みのもの**です（指示線がないので）。 */
        ln.type = (unsigned char)drawing->line_type;
        ln.pen = (unsigned char)drawing->pen;
        ln.layer = (unsigned char)drawing->write_layer;
        /* **記号が足した分だけを帯の下に戻します**（jw_cmd_after）。
         * 全部を戻すと、消し跡の順が変わって別の所が狂います。 */
        cmd.n0_lines = drawing->n_lines;
        cmd.n0_ink = drawing->n_ink + 1;
        cmd.n0_arcs = drawing->n_arcs;
        cmd.n0_texts = drawing->n_texts;
        jw_kigou_put(drawing, sym, &ln, 0, px, py, px, py,
                     cmd.kigou_in_n ? cmd.kigou_in_buf : 0, phase, 0,
                     cmd.kigou_mag_x, cmd.kigou_mag_y, kigou_dim());
        ui.n_lines = drawing->n_lines;
        ui.n_arcs = drawing->n_arcs + drawing->n_texts;
        return;
    }
    base = drawing->lines[cmd.kigou_line];
    if (cmd.kigou_line2 >= 0 && cmd.kigou_line2 < drawing->n_lines) {
        base2 = drawing->lines[cmd.kigou_line2];
        two = &base2;
    }
    ax = base.x0;
    ay = base.y0;
    dx = base.x1 - ax;
    dy = base.y1 - ay;
    if (two) {
        /* 2 本の交点。平行なら押したところを落とした点に逃がします。 */
        const double ex = base2.x1 - base2.x0, ey = base2.y1 - base2.y0;
        const double det = dx * ey - dy * ex;

        if (det > 1e-9 || det < -1e-9) {
            const double s2 = ((base2.x0 - ax) * ey
                               - (base2.y0 - ay) * ex) / det;

            ox = ax + s2 * dx;
            oy = ay + s2 * dy;
            /* **先に消してから描きます。** 本物と同じ順にしないと、
             * 消し跡（黒で塗ったところ）が記号の上に乗ります。
             * base/base2 は写しなので、消しても使えます。 */
            /* **あとのほうから消します。** 先に小さい番号を消すと、
             * もう一方の番号がひとつ前にずれます。 */
            if (cmd.kigou_line2 > cmd.kigou_line) {
                jwc_remove_line(drawing, cmd.kigou_line2);
                jwc_remove_line(drawing, cmd.kigou_line);
            } else {
                jwc_remove_line(drawing, cmd.kigou_line);
                jwc_remove_line(drawing, cmd.kigou_line2);
            }
            cmd.n0_lines = drawing->n_lines;
        cmd.n0_ink = drawing->n_ink + 1;
            cmd.n0_arcs = drawing->n_arcs;
            cmd.n0_texts = drawing->n_texts;
            jw_kigou_put(drawing, sym, &base, two, ox, oy, px, py,
                         cmd.kigou_in_n ? cmd.kigou_in_buf : 0, phase, 0,
                         cmd.kigou_mag_x, cmd.kigou_mag_y, kigou_dim());
            cmd.kigou_line = -1;
            cmd.kigou_line2 = -1;
            cmd.kigou_line2 = -1;
            ui.n_lines = drawing->n_lines;
            ui.n_arcs = drawing->n_arcs + drawing->n_texts;
            return;
        }
    }
    len = dx * dx + dy * dy;
    t = len > 0.0 ? ((px - ax) * dx + (py - ay) * dy) / len : 0.0;
    ox = ax + t * dx;
    oy = ay + t * dy;
    /* **消すのは描く前**です——本物と同じ順にしないと、消し跡が
     * 記号の上に乗ります。`base` は写しなので消しても使えます。 */
    jwc_remove_line(drawing, cmd.kigou_line);
    /* [ESC] の取り消しのために元の線を控える。戻す向きは測った一件
     * （func_all henkei_s0_c4：左の枠が (40.973,323.057)→(40.973,44) で末尾に）
     * に合わせた判定で、ほかの向きの線では未確認。 */
    {
        const double e0 = (base.x0 - ox) * (base.x0 - ox)
                        + (base.y0 - oy) * (base.y0 - oy);
        const double e1 = (base.x1 - ox) * (base.x1 - ox)
                        + (base.y1 - oy) * (base.y1 - oy);

        kg_line = base;
        if (e0 < e1) {
            kg_line.x0 = base.x1;
            kg_line.y0 = base.y1;
            kg_line.x1 = base.x0;
            kg_line.y1 = base.y0;
        }
        kg_nl = drawing->n_lines;
        kg_na = drawing->n_arcs;
        kg_nt = drawing->n_texts;
        kg_np = drawing->n_points;
        kg_undo = 1;
    }
    cmd.n0_lines = drawing->n_lines;
        cmd.n0_ink = drawing->n_ink + 1;
    cmd.n0_arcs = drawing->n_arcs;
    cmd.n0_texts = drawing->n_texts;
    if (phase == 0) {
        held_base = base;
        if (two) {
            held_base2 = base2;
        }
        held_two = two != 0;
        held_ox = ox;
        held_oy = oy;
        held_on = 1;
    }
    jw_kigou_put(drawing, sym, &base, two, ox, oy, px, py,
                 cmd.kigou_in_n ? cmd.kigou_in_buf : 0, phase, 0,
                 cmd.kigou_mag_x, cmd.kigou_mag_y, kigou_dim());
    cmd.kigou_line = -1;
    cmd.kigou_line2 = -1;
    ui.n_lines = drawing->n_lines;
    ui.n_arcs = drawing->n_arcs + drawing->n_texts;
}

/* ...and the marks over the layer boxes follow what it put down
 * (jw_ui_layers_from). */
static void place_kigou(const JwKigouSym *sym, double px, double py,
                        int phase)
{
    place_kigou_1(sym, px, py, phase);
    if (drawing) {
        jw_ui_layers_from(&ui, drawing);
    }
}

static void sync_ui(void)
{
    /* The chrome draws the menu row the pointer rests on inverted, so it has
     * to know where the pointer is. */
    ui.mouse_x = mouse_x;
    ui.mouse_y = mouse_y;
    ui.stage = cmd.stage;
    /* □ の ①寸法 で大きさを決めて置いているあいだは、画面は □ の
     * 「1 点取ったあと」と同じ（`■ 終点指示`、` 横=` ` 縦=`、枠）。 */
    if ((cmd.command == 4 && cmd.box_fix && !cmd.box_ask)
        || (cmd.command == 11 && cmd.circ_fix && !cmd.circ_ask)) {
        ui.stage = 1;
    }
    ui.hold_counts = circ_fresh && (cmd.command == 11 || cmd.command == 4);
    /* □ の ①寸法 の欄を開いても数え箱は描き直さない：開く前が 横=・縦= の
     * 箱（置いているか、始点を持っていた）ならそのまま（測定：始点の
     * あと ① で `横= 0.000 縦= 0.000`）。 */
    if ((cmd.command != 4 && cmd.command != 11) || !(cmd.command == 4 ? (cmd.box_ask || cmd.box_refask) : cmd.circ_ask)) {
        box_keep = 0;
    }
    if (cmd.box_keep_off) {
        box_keep = 0;
        if (!cmd.box_ask) {
            cmd.box_keep_off = 0;
        }
    }
    ui.keep_box_counts = cmd.command == 4 && cmd.box_ask && !cmd.box_keep_off
                         && (cmd.box_fix || box_keep);
    /* □ ③平行 の基準線を聞く行でも数え箱は ` 横= / 縦=` のまま（測定：box_s1_c3）。 */
    if (cmd.command == 4 && cmd.box_refask && cmd.ref_miss >= 2) {
        box_keep = 0;           /* 二度目の外れで数え箱が戻る（測定：box_s1_c3） */
    }
    if (!(cmd.command == 4 && cmd.box_refask)) {
        cmd.ref_miss = 0;
    }
    if (cmd.command == 4 && cmd.box_refask && box_keep) {
        ui.keep_box_counts = 1;
    }
    /* ○ も：始点（中心）を持って ①径寸法 の欄を開いても、数え箱は ` 半径= / 直径=` のまま（測定：circle_s1_c1）。 */
    if (cmd.command == 11 && cmd.circ_ask && box_keep) {
        ui.keep_box_counts = 1;
    }
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
    ui.st_base_mode = cmd.st_base_mode;
    ui.st_par = cmd.st_par;
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
    ui.dl_wait = cmd.dl_wait;
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
             : cmd.zukei ? (cmd.pressed == 0 ? 1 : cmd.pressed == 1 ? 2
                            : cmd.stage == 3 ? JW_ZUKEI_ADD : 3)
             : 0;
    ui.top_item = cmd.top_item;
    ui.band_off = cmd.band_off;
    ui.top_right = cmd.top_right;
    ui.ask_kind = cmd.ask_kind;
    ui.fix_len = cmd.fix_len;
    ui.fix_mode = cmd.fix_mode;
    ui.fix_done = cmd.fix_done;
    ui.fix_ang = cmd.fix_ang;
    ui.fix_shown = cmd.fix_shown;
    ui.fix_angle = cmd.fix_angle;
    ui.box_ask = cmd.box_ask;
    ui.box_base = cmd.box_base;
    ui.box_mode = cmd.box_mode;
    ui.circ_mode = cmd.circ_mode;
    ui.box_ang = cmd.box_ang;
    ui.circ_ask = cmd.circ_ask;
    ui.ell = cmd.ell;
    ui.circ_multi = cmd.circ_multi;
    ui.cut_n = cmd.cut_n;
    ui.pg3 = cmd.pg3;
    ui.pg1 = cmd.pg1;
    ui.pg1_n = cmd.pg1_n;
    ui.er_pt = cmd.er_pt;
    ui.mv_none = cmd.mv_none;
    ui.range_opt = cmd.range_opt;
    ui.pg1_pd[0] = cmd.pg1_pd[0];
    ui.pg1_pd[1] = cmd.pg1_pd[1];
    ui.pg_edge = cmd.pg_edge;
    ui.ch_ask = cmd.ch_ask;
    ui.text_ang_ask = cmd.text_ang_ask;
    ui.text_rep = cmd.text_rep;
    ui.meas_put = cmd.meas_put;
    ui.circ_dia = cmd.circ_dia;
    ui.chb = cmd.chb;
    ui.ch_bad = cmd.ch_bad;
    ui.circ_bad = cmd.circ_bad;
    ui.lyr_only = cmd.lyr_only;
    ui.te_dir = cmd.te_dir;
    ui.zukei_drive = cmd.zukei_drive;
    ui.zukei_cell = cmd.zukei_cell;
    ui.zukei_blank = cmd.zukei_blank;
    ui.zukei_plain = cmd.zukei_plain;
    ui.poly_esc = cmd.poly_esc;
    ui.pt_delall = cmd.pt_delall;
    ui.pt_plain = cmd.pt_plain;
    ui.ch_same = cmd.ch_same;
    ui.ch_side = cmd.ch_side;
    ui.div_real = cmd.div_real;
    ui.ld_ask = cmd.ld_ask;
    ui.te_sub = cmd.te_sub;
    ui.te_bh = cmd.te_bh;
    ui.te_bv = cmd.te_bv;
    ui.te_panel = cmd.te_panel;
    memcpy(ui.te_off_h, cmd.te_off_h, sizeof ui.te_off_h);
    memcpy(ui.te_off_v, cmd.te_off_v, sizeof ui.te_off_v);
    ui.te_off_ask = cmd.te_off_ask;
    ui.te_pick = cmd.te_pick + 1;      /* 0 は無し（jw_ui_from が 0 にする） */
    ui.te_esc = cmd.te_esc;
    ui.te_plain = cmd.te_plain;
    ui.te6_layer = cmd.te6_layer;
    ui.te6_hv = cmd.te6_hv;
    ui.te5 = cmd.te5;
    ui.te5_ask = cmd.te5_ask;
    ui.fep = cmd.fep;
    ui.tx_plain = cmd.tx_plain;
    ui.tx_doc = cmd.tx_doc;
    ui.te5_gap = cmd.te5_gap;
    ui.real_left = drawing ? 3639 - drawing->n_points : 0;
    ui.chb_inner = cmd.chb_inner;
    ui.box_ctr = cmd.box_ctr;
    ui.rep_gap[0] = cmd.rep_gap[0];
    ui.rep_gap[1] = cmd.rep_gap[1];
    ui.box_refask = cmd.box_refask;
    ui.arc3 = cmd.arc3;
    ui.arc3_kind = cmd.arc3_kind;
    ui.arc3_done = cmd.arc3_done;
    ui.arc3_rmm = cmd.arc3_rmm;
    ui.ell_done = cmd.ell_done;
    ui.ell_a = cmd.ell_a;
    ui.ell_b = cmd.ell_b;
    ui.ell_ang = cmd.ell_ang;
    ui.circ_fix = cmd.circ_fix;
    ui.circ_done = cmd.circ_done;
    ui.circ_r = cmd.circ_r;
    ui.circ_base = cmd.circ_base;
    ui.arc_ask = cmd.arc_ask;
    ui.arc_ang = cmd.arc_ang;
    ui.arc_r = cmd.arc_r;
    ui.box_fix = cmd.box_fix;
    ui.box_done = cmd.box_done;
    ui.box_w = cmd.box_w;
    ui.box_h = cmd.box_h;
    ui.gap = cmd.gap;
    ui.gap_chamfer = cmd.gap_chamfer;
    ui.chamfer = cmd.chamfer;
    ui.ch_radius = cmd.ch_radius;
    ui.ch_a = cmd.ch_a;
    ui.ch_b = cmd.ch_b;
    ui.ch_flat = cmd.ch_flat;
    ui.ch_ask_flat = cmd.ch_ask_flat;
    ui.gap_two[0] = cmd.gap_two[0];
    ui.gap_two[1] = cmd.gap_two[1];
    ui.ask_len = cmd.ask_len;
    ui.ask_ang = cmd.ask_ang;
    /* ページだけが落としていた 14 。tests/drawing.c は渡していたので
     * 検査は通り、ブラウザだけが寸法の帯を `文数 0.0`、文編集の
     * 種を 0、ハッチと複写の倍率・角度を 0 で出していた。 */
    ui.typed_at = cmd.typed_at;
    ui.edit_type = (cmd.command == 28 && drawing && cmd.edit_text >= 0
                    && cmd.edit_text < drawing->n_texts)
                 ? drawing->texts[cmd.edit_text].size : 0;
    ui.mirror = cmd.mirror;
    ui.rotate = cmd.rotate;
    ui.scaling = cmd.scaling;
    ui.mscale = cmd.mscale;
    ui.attr_group = cmd.attr_group;
    ui.attr_layer = cmd.attr_layer;
    ui.attr_pen = cmd.attr_pen;
    ui.attr_type = cmd.attr_type;
    ui.rot_deg = cmd.rot_deg;
    ui.dim_value = cmd.dim_value;
    /* ⑧値変 counts what the drawing has now, not what the road left. */
    ui.dim_texts = cmd.dim_val && drawing ? drawing->n_texts
                                          : cmd.dim_texts;
    /* ⑧値変's 変更文字種類[Fn] takes the band with it: with [F3] the box
     * reads `ﾍﾟﾝ2 文数 14 / 横 3.0 縦 3.0`, which is character type 3's
     * pen and size. */
    {
        const int dk = (cmd.dim_val && cmd.dim_val_size)
                     ? cmd.dim_val_size
                     : (drawing ? drawing->dim_size : 0);

        ui.dim_w = drawing ? drawing->text_w[dk] / 10.0 : 0.0;
        ui.dim_h = drawing ? drawing->text_h[dk] / 10.0 : 0.0;
        ui.dim_text_pen = drawing ? drawing->text_pen[dk] : 0;
    }
    ui.dim_size = drawing ? drawing->dim_size : 0;
    ui.dim_guide_n = jw_cmd_guide_pos(&cmd, &view, ui.dim_guide);
    ui.dim_points = drawing ? drawing->n_points : 0;
    ui.dim_did = cmd.dim_did;
    ui.dim_lines0 = cmd.dim_lines0;
    ui.dim_only = cmd.dim_only;
    ui.dim_prog = cmd.dim_prog;
    ui.dim_circle = cmd.dim_circle;
    ui.dim_arc = cmd.dim_arc;
    ui.dim_arc_end = cmd.dim_arc_end;
    ui.dim_arc_miss = cmd.dim_arc_miss;
    ui.tan_deg = cmd.tan_deg;
    ui.tan_did = cmd.tan_did;
    ui.sine = cmd.sine;
    ui.sine_cycle = cmd.sine_cycle;
    ui.sine_amp = cmd.sine_amp;
    ui.sine_div = cmd.sine_div;
    ui.ch_rev = cmd.ch_rev;
    ui.ch_line = cmd.ch_line;
    ui.ch_r = cmd.ch_r;
    ui.chain = cmd.chain;
    ui.spl = cmd.spl;
    ui.spl_n = cmd.spl_n;
    ui.spl_div = cmd.spl_div;
    ui.sine_did = cmd.sine_did;
    ui.tan_tri = cmd.tan_tri;
    ui.tan_cn = cmd.tan_cn;
    ui.tan_circ = cmd.tan_circ;
    ui.tan_r = cmd.tan_r;
    ui.tan_miss = cmd.tan_miss;
    ui.tan_prev = cmd.tan_prev;
    ui.tan_len = 0.0;
    ui.tan_ang = 0.0;
    if (cmd.command == 26 && cmd.stage == 15 && drawing) {
        /* 終点を訊いている間の `長さ =` と `角度 =`。どちらも矢の先を
         * 接線に落としたところまでで、長さは **本当の大きさ**（図面の
         * 単位 x 縮尺）です（測定：TEST1 で 248.2 単位が 28462.13mm）。 */
        const double rad = cmd.tan_deg * 3.14159265358979323846 / 180.0;
        const double ux = cos(rad), uy = sin(rad);
        double px, py, t;

        jw_cmd_at(&view, mouse_x, mouse_y, &px, &py);
        t = (px - cmd.tan_bx) * ux + (py - cmd.tan_by) * uy;
        px = cmd.tan_bx + ux * t - cmd.tan_ax;
        py = cmd.tan_by + uy * t - cmd.tan_ay;
        ui.tan_len = sqrt(px * px + py * py) * jwc_zukei_scale(drawing);
        /* 角度 は **引いている向き** で、長さが 0 なら 0.000 です
         * （測定：始点を押したところでは 0.000、終点まで引くと 30.000）。 */
        if (ui.tan_len != 0.0) {
            ui.tan_ang = atan2(py, px) * 180.0 / 3.14159265358979323846;
            while (ui.tan_ang < 0.0) {
                ui.tan_ang += 360.0;
            }
        }
    }
    ui.hen_dbl = cmd.hen_dbl;
    ui.hen_dbl_cap = cmd.hen_dbl_cap;
    ui.hen_dbl_edit = cmd.hen_dbl && cmd.typing;
    ui.hen_dbl_gap = cmd.hen_dbl_gap;
    ui.lc_range = cmd.lc_range;
    ui.hand = cmd.hand;
    ui.hand_step = cmd.hand_step;
    ui.hand_did = cmd.hand_did;
    ui.hen_env = cmd.hen_env;
    ui.kigou = cmd.hen_kigou;
    ui.kigou_pick = cmd.kigou_pick;
    ui.kigou_sym = cmd.kigou_sym;
    ui.kigou_wait = cmd.kigou_line >= 0;
    ui.kigou_input = cmd.kigou_input;
    {
        const JwKigou *kg2 = jw_kigou_lib(cmd.kigou_group);
        const JwKigouPart *ip = kg2 && cmd.kigou_sym > 0
                                && cmd.kigou_sym <= kg2->n
                              ? jw_kigou_input(&kg2->sym[cmd.kigou_sym - 1],
                                               cmd.kigou_in_at) : 0;

        ui.kigou_in_kind = ip ? ip->type % 100 : 1;
        ui.kigou_in_base = ip && ip->type > 0 ? (ip->type / 100) % 10 : 0;
        /* **文字変更の指定（21000）は欄が空**です（`文字列入力` が
         * 出ます）。変える前の字は、その場に仮に描かれます
         * ——DAT §５-６「その文字位置に設定した文字を変更して作図」。 */
        ui.kigou_in_text = ip && ip->c1 < 21000 ? ip->text : 0;
        ui.kigou_in_buf = cmd.kigou_in_n ? cmd.kigou_in_buf : 0;
        ui.kigou_in_old = ip && ip->c1 >= 21000 ? ip->text : 0;
    }
    ui.kigou_mag_ask = cmd.kigou_mag_ask;
    ui.kigou_mag_typed = cmd.kigou_mag_typed;
    ui.kigou_mag_n = cmd.kigou_mag_n;
    ui.kigou_mag_x = cmd.kigou_mag_x;
    ui.kigou_mag_y = cmd.kigou_mag_y;
    {
        const JwKigou *kg = jw_kigou_lib(cmd.kigou_group);

        ui.kigou_two = kg && cmd.kigou_sym > 0 && cmd.kigou_sym <= kg->n
                     && jw_kigou_wants2(&kg->sym[cmd.kigou_sym - 1]);
        ui.kigou_free = kg && cmd.kigou_sym > 0 && cmd.kigou_sym <= kg->n
                      && !jw_kigou_takes1(&kg->sym[cmd.kigou_sym - 1]);
    }
    ui.kigou_group = cmd.kigou_group;
    ui.hen_env_all = cmd.hen_env_all;
    ui.hen_env_did = cmd.hen_env_did;
    ui.hen_env_msg = cmd.hen_env_msg;

    ui.dim_lot = cmd.dim_lot;
    ui.dim_arc_two = cmd.dim_arc_two;
    ui.dim_arc_unit = cmd.dim_arc_unit;
    memcpy(ui.dim_arc_val, cmd.dim_arc_val, sizeof ui.dim_arc_val);
    ui.dim_ck = cmd.dim_ck;
    ui.dim_ck_out = cmd.dim_ck_out;
    ui.dim_ck_vout = cmd.dim_ck_vout;
    ui.dim_ck_deg = cmd.dim_ck_deg;
    ui.dim_ck_prev = cmd.dim_ck_prev;
    memcpy(ui.dim_ck_val, cmd.dim_ck_val, sizeof ui.dim_ck_val);
    ui.dim_val = cmd.dim_val;
    ui.dim_val_size = cmd.dim_val_size;
    ui.dim_val_now[0] = 0;
    if (cmd.dim_val == 2 && drawing && cmd.dim_val_k >= 0
        && cmd.dim_val_k < drawing->n_texts
        && drawing->texts[cmd.dim_val_k].text) {
        strncpy(ui.dim_val_now, drawing->texts[cmd.dim_val_k].text,
                sizeof ui.dim_val_now - 1);
        ui.dim_val_now[sizeof ui.dim_val_now - 1] = 0;
    }
    ui.hatch_n = cmd.hatch_n;
    ui.hatch_used = cmd.hatch_used;
    ui.off_done = cmd.off_done;
    ui.off_pt = cmd.off_pt;
    ui.off_label_gone = cmd.off_label_gone;
    ui.meas_hold = cmd.meas_hold;
    ui.lc_off = cmd.lc_off;
    ui.pt_real = cmd.pt_real;
    ui.pt_mode = cmd.pt_mode;
    ui.pt3 = cmd.pt3;
    ui.pt_line = cmd.pt_line;
    ui.pt_par = cmd.pt_par;
    ui.div2 = cmd.div2;
    ui.meas_noind = cmd.meas_noind;
    ui.meas5 = cmd.meas5;
    ui.meas5s = cmd.meas5s;
    ui.meas9 = cmd.meas9;
    ui.meas9p = cmd.meas9p;
    ui.meas9q = cmd.meas9q;
    ui.meas9z = cmd.meas9z;
    ui.meas9t = cmd.meas9t;
    ui.meas9k = cmd.meas9k;
    ui.meas8 = cmd.meas8;
    ui.dim5c = cmd.dim5c;
    ui.dim_arc_quiet = cmd.dim_arc_quiet;
    ui.dim_ck_gone = cmd.dim_ck_gone;
    ui.lc_keyed = cmd.lc_keyed;
    ui.esc_gone = cmd.esc_gone;
    ui.ell_mouse = cmd.ell_mouse;
    ui.zukei_disp = cmd.zukei_disp;
    ui.zukei_layer = cmd.zukei_layer;
    ui.lc_attr = cmd.lc_attr;
    ui.dim5m = cmd.dim5m;
    ui.dim8_plain = cmd.dim8_plain;
    ui.meas8d = cmd.meas8d;
    memcpy(ui.ms8_typed, cmd.ms8_typed, sizeof ui.ms8_typed);
    ui.meas5r = cmd.meas5r;
    ui.meas_arc = cmd.meas_arc;
    ui.meas4 = cmd.meas4;
    ui.ms4 = cmd.ms4;
    {
        const double sc = drawing ? (double)jwc_zukei_scale(drawing) : 1.0;

        ui.ms4_x = (cmd.ms4_px - cmd.ms4_ox) * sc / 1000.0;
        ui.ms4_y = (cmd.ms4_py - cmd.ms4_oy) * sc / 1000.0;
    }
    ui.meas3 = cmd.meas3;
    ui.ms3_n = cmd.ms3_n;
    {
        double tot = 0.0, last = 0.0;
        int k;

        for (k = 3; k <= cmd.ms3_n && k < 32; k++) {
            tot += cmd.ms3_tri[k];
            last = cmd.ms3_tri[k];
        }
        ui.ms3_tot = tot < 0.0 ? -tot : tot;
        ui.ms3_last = last < 0.0 ? -last : last;
    }
    ui.meas2 = cmd.meas2;
    ui.ms2 = cmd.ms2;
    ui.ms2_mode = cmd.ms2_mode;
    ui.ms2_res = cmd.ms2_res;
    ui.ms2_deg = cmd.ms2_deg;
    ui.lc_msg = cmd.lc_msg;
    ui.div4 = cmd.div4;
    ui.div4_same = cmd.div4_same;
    ui.div4_made = cmd.div4_made;
    ui.div4_n = cmd.div4_n;
    ui.div4_prev = jw_cmd_div4_prev();
    ui.pt2 = cmd.pt2;
    ui.pt2_circ = cmd.pt2_circ;
    ui.pt2_bad = cmd.pt2_bad;
    ui.pt2_last = jw_cmd_pt2_last();
    ui.tan_noarc = cmd.tan_noarc;
    ui.pt_undo = cmd.pt_undo;
    memcpy(ui.gap_hist, cmd.gap_hist, sizeof ui.gap_hist);
    ui.hatch_plain = cmd.hatch_plain;
    ui.hatch_angle = cmd.hatch_angle;
    ui.hatch_pitch = cmd.hatch_pitch;
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

/* ⑥ＤＸＦ ③設定's five choices.  They are here rather than in JwUi because
 * jw_ui_from clears that whole struct; present() copies them over. */
static unsigned char dxf_set[5] = { 0, 0, 1, 0, 0 };
/* Which of ⑥ＤＸＦ's two file screens is up: 1 for ① 保存 and 2 for ② 読込.
 * ③ 新規 保存 and ①選択確定 mean different things on them than they do on
 * 入出力's own. */
static int dxf_mode;
/* How big the drawing was when it was opened, saved or started afresh.
 * **⑤新規図面 asks before it throws work away** -- the original writes
 * `編集中の図面が失われます |①新規|②保存|③中止|` when there is any, and
 * goes straight to an empty sheet when there is not. */
static long base_n[4];

static void base_mark(void)
{
    base_n[0] = drawing ? drawing->n_lines : 0;
    base_n[1] = drawing ? drawing->n_arcs : 0;
    base_n[2] = drawing ? drawing->n_texts : 0;
    base_n[3] = drawing ? drawing->n_points : 0;
}

static int drawing_edited(void)
{
    return drawing
        && (drawing->n_lines != base_n[0] || drawing->n_arcs != base_n[1]
            || drawing->n_texts != base_n[2]
            || drawing->n_points != base_n[3]);
}

static void drawing_new(void)
{
    /* **The paper and the scale carry over.**  Measured: from SAMPLE0 the
     * empty sheet is A-4 at 1/1 and from SAMPLE1 it is A-4 at 1/100, which
     * is what each of them was. */
    const int paper = drawing ? drawing->paper : 4;
    const double denom = drawing ? drawing->denom : 1.0;

    jwc_free(drawing);
    drawing = jwc_new();
    if (drawing) {
        jwc_set_paper(drawing, paper);
        jwc_set_denom(drawing, denom);
    }
    jw_view_original(&view);
    jw_cmd_pick(&cmd, 30);
    jw_ui_from(&ui, drawing);
    dim_from_drawing();
    ui.command = 30;
    memset(loaded_name, 0, sizeof loaded_name);
    base_mark();
}
/* And whether a DXF has just been written, for ` 登 録  完 了 `. */
static int dxf_done;
static long dxf_n[4];
/* 測定's unit and decimals -- see JwUi. */
static int meas_unit, meas_dec = 3;
/* 寸法 ⑨設定's ten rows and the three cells of its line that carry a state.
 * The numbers are the ones SAMPLE0 comes up with; where the drawing keeps
 * them is not found yet (src/jwc.h, JW_DIM_PEN). */
static int dim_pen_line = 1, dim_pen_point = 1;

static void dim_from_drawing(void)
{
    if (drawing) {
        dim_pen_line = drawing->dim_pen_line;
        dim_pen_point = drawing->dim_pen_point;
    }
}
static double dim_gap = 0.5, dim_ext = 0.0, dim_arrow = 3.0, dim_angle = 15.0;
static int dim_rphi, dim_comma, dim_zero, dim_end, dim_unit, dim_dec = 1;
static int dim_edit;
/* ④自動保存's four.  The original comes up with 0 seconds, AUTO.JWC on the
 * A: drive and a ten-second wait. */
static int auto_interval, auto_wait = 10, auto_edit, auto_typed_n;
static char auto_name[16] = "AUTO";
static char auto_path[16] = "A:" "\x5c";
static char auto_typed[16];
static char dim_typed[16];
static int dim_typed_n;

/* 文字変更（21000）を聞いている間、**変える前の字をその場に枠で**
 * 出します（色 1 の XOR。図形の仮置きと同じ描き方です）。 */
static void kigou_ghost(void)
{
    const JwKigou *g;
    const JwKigouSym *sym;
    JwcLine ln;
    const JwcLine *two = 0;
    double ox, oy;
    JwKigouGhost gh;

    if (!cmd.kigou_input || !drawing) {
        return;
    }
    g = jw_kigou_lib(cmd.kigou_group);
    if (!g || cmd.kigou_sym <= 0 || cmd.kigou_sym > g->n) {
        return;
    }
    sym = &g->sym[cmd.kigou_sym - 1];
    /* 指示線を取る記号の印も出します。置いたときの枠（`held_*`）を使い、
     * 逆向きの字は jw_view_text_ghost／_caret が本物どおり基線から下へ
     * 描きます（notes/edit.md 4.45h）。 */
    if (held_on) {
        ln = held_base;
        ox = held_ox;
        oy = held_oy;
        two = held_two ? &held_base2 : 0;
    } else {
        memset(&ln, 0, sizeof ln);
        ln.x0 = (float)(cmd.kigou_px - 1.0);
        ln.y0 = (float)cmd.kigou_py;
        ln.x1 = (float)cmd.kigou_px;
        ln.y1 = (float)cmd.kigou_py;
        ln.type = (unsigned char)drawing->line_type;
        ln.pen = (unsigned char)drawing->pen;
        ln.layer = (unsigned char)drawing->write_layer;
        ox = cmd.kigou_px;
        oy = cmd.kigou_py;
    }
    memset(&gh, 0, sizeof gh);
    if (jw_kigou_put(drawing, sym, &ln, two, ox, oy,
                     cmd.kigou_px, cmd.kigou_py,
                     cmd.kigou_in_n ? cmd.kigou_in_buf : 0,
                     20 + cmd.kigou_in_at, &gh,
                     cmd.kigou_mag_x, cmd.kigou_mag_y, kigou_dim())) {
        if (gh.t.text && gh.t.text[0]) {
            jw_view_text_ghost(&vga, drawing, &gh.t, &view, 2, 0x18);
            jw_view_text_caret(&vga, drawing, &gh.t, &view, gh.cx, gh.cw,
                               4, 0x18);
        } else {
            jw_view_text_point(&vga, drawing, &gh.t, &view, gh.px, gh.py,
                               4, 0x18, gh.tx, gh.ty);
        }
    }
}

static void present(void)
{
    ui.view_scale = view.scale;
    ui.view_ox = view.ox;
    ui.view_oy = view.oy;
    memcpy(ui.dxf_set, dxf_set, sizeof dxf_set);
    ui.dxf_done = dxf_done;
    memcpy(ui.dxf_n, dxf_n, sizeof ui.dxf_n);
    ui.meas_unit = meas_unit;
    ui.meas_dec = meas_dec;
    ui.auto_interval = auto_interval;
    ui.auto_wait = auto_wait;
    ui.auto_edit = auto_edit;
    ui.auto_typed_n = auto_typed_n;
    memcpy(ui.auto_name, auto_name, sizeof ui.auto_name);
    memcpy(ui.auto_path, auto_path, sizeof ui.auto_path);
    memcpy(ui.auto_typed, auto_typed, sizeof ui.auto_typed);
    cmd.dim_pen = dim_pen_line;
    cmd.dim_gap_mm = dim_gap;
    cmd.dim_end = dim_end;
    cmd.dim_ext_mm = dim_ext;
    cmd.dim_unit = dim_unit;
    cmd.dim_dec = dim_dec;
    cmd.dim_comma_on = !dim_comma;
    cmd.dim_pen_point = dim_pen_point;
    cmd.dim_zero_on = dim_zero;
    cmd.dim_arrow_mm = dim_arrow;
    cmd.dim_angle_deg = dim_angle;
    ui.dim_pen_line = dim_pen_line;
    ui.dim_pen_point = dim_pen_point;
    ui.dim_gap = dim_gap;
    ui.dim_ext = dim_ext;
    ui.dim_arrow = dim_arrow;
    ui.dim_angle = dim_angle;
    ui.dim_rphi = dim_rphi;
    ui.dim_comma = dim_comma;
    ui.dim_zero = dim_zero;
    ui.dim_end = dim_end;
    ui.dim_unit = dim_unit;
    ui.dim_dec = dim_dec;
    ui.dim_edit = dim_edit;
    ui.dim_typed_n = dim_typed_n;
    memcpy(ui.dim_typed, dim_typed, sizeof ui.dim_typed);
    if (!drawing) {
        memset(vga.plane, 0, sizeof vga.plane);
    } else {
        jw_view_draw(&vga, drawing, &view);
        jw_cmd_before(&cmd, &vga, drawing, &view);
    }
    ui.snap = mouse_x >= AREA_X0 && mouse_x <= AREA_X1
        && mouse_y >= AREA_Y0 && mouse_y <= AREA_Y1;
    /* 測定中に置いた文は 数え箱の 円･文数 に数えない（measure_s1_c1）。 */
    if (drawing && cmd.command == 15 && cmd.meas_hold) {
        ui.n_arcs = drawing->n_arcs + drawing->n_texts - 1;
    }
    jw_ui_draw(&vga, &ui);
    cmd.field_cursor = jw_ui_field_cursor();
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
        /* **記号の仮の印は最後**です。帯の下に描き直した線より先に
         * 置くと、重なった所の排他的論理和がひっくり返ります
         * （「建具記号 (AW)」で y=157 の 3 画素）。 */
        kigou_ghost();
        jw_ui_band_last(&vga, &ui);
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
    /* 拡大の範囲を取っているあいだは、命令の帯は出ません（測定：□ の
     * 始点のあと Zoom を押すと、赤い四角が消えて緑の枠だけ）。 */
    if (ui.zoom_stage != 1 && ui.zoom_stage != 2) {
        if (!circ_fresh) {
            jw_cmd_band(&cmd, drawing, &vga, &view, band_x, band_y);
        }
    }
    if (ui.zoom_stage == 2) {
        jw_ui_zoom_band(&vga, zoom_x, zoom_y, mouse_x, mouse_y);
    }
    jw_ui_band_end(&vga, &ui);
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
    static const char *const EXT[8] = { "JWC", "JWC", "TXT", "BAT", "DXF",
                                        "DXF", "TXT", "BAT" };

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

/* 検査用：いまのコマンドの状態（tools/cmdstate.mjs）。 */
EMSCRIPTEN_KEEPALIVE const char *jw_cmd_state(void)
{
    static char buf[720];

    snprintf(buf, sizeof buf,
             "cmd=%d stage=%d pressed=%d typing=%d fix_mode=%d fix_done=%d "
             "fix_len=%d fix_angle=%d ask_kind=%d top_item=%d box_ask=%d "
             "box_fix=%d circ_fix=%d base=%.17g,%.17g step=%.17g,%.17g ang=%g chb=%d cham=%d hn=%d h0=%d miss=%d lc=%d/%d zk=%d uitop=%d uistage=%d uiesc=%d noind=%d m5=%d um5=%d m5s=%d nl=%d unl=%d d8=%d mirror=%d rotate=%d scaling=%d mscale=%d attrg=%d attrl=%d attrp=%d attrt=%d te_dir=%d cutting=%d stbase=%d te_sub=%d te_bh=%d te_bv=%d te_off_ask=%d te_off_h=%g te_off_v=%g",
             cmd.command, cmd.stage, cmd.pressed, cmd.typing, cmd.fix_mode,
             cmd.fix_done, cmd.fix_len, cmd.fix_angle, cmd.ask_kind,
             cmd.top_item, cmd.box_ask, cmd.box_fix, cmd.circ_fix,
             cmd.base_x, cmd.base_y, cmd.step_x, cmd.step_y, cmd.text_ang, cmd.chb, cmd.chamfer, cmd.hatch_n, cmd.hatch_line[0], cmd.missed, cmd.lc_range, cmd.lc_narrow, cmd.zukei, ui.top_item, ui.stage, ui.escaped, cmd.meas_noind, cmd.meas5, ui.meas5, cmd.meas5s, drawing ? (int)drawing->n_lines : -1, (int)ui.n_lines, cmd.ch_side | (cmd.ch_ask << 1) | (cmd.chb << 2), cmd.mirror, cmd.rotate, cmd.scaling, cmd.mscale, cmd.attr_group, cmd.attr_layer, cmd.attr_pen, cmd.attr_type, cmd.te_dir, cmd.cutting, cmd.st_base_mode,
             cmd.te_sub, cmd.te_bh, cmd.te_bv, cmd.te_off_ask,
             (double)cmd.te_off_h[cmd.te_bh], (double)cmd.te_off_v[cmd.te_bv]);
    return buf;
}
EMSCRIPTEN_KEEPALIVE int jw_top_item(int x, int y) { return jw_ui_top_item(x, y); }
/* 移植の矢の位置（tools/stepshots.mjs が、矢が跳んだかを見る）。 */
EMSCRIPTEN_KEEPALIVE int jw_mouse_x(void) { return mouse_x; }
EMSCRIPTEN_KEEPALIVE int jw_mouse_y(void) { return mouse_y; }
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
    dim_from_drawing();
    ui.guide = jw_ui_guide();
    present();
    sprintf(status, "%ld lines  %ld arcs  %d texts  %d points",
            d->n_lines, d->n_arcs, d->n_texts, d->n_points);
    index_touch();
    base_mark();
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

static void hand_abandon(void);

EMSCRIPTEN_KEEPALIVE int jw_save(void)
{
    const char *why;

    /* 本物の保存は 入出力 を押して命令を離れてから（一筆の途中なら捨てる）。 */
    hand_abandon();

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

/* 入出力 ④自動保存 —— **時計で書き出すところ。**
 *
 * 盤で決めた `①保存間隔` 秒ごとに、`②ファイル名` を `③保存パス` に
 * 書きます。本物は起動から三十分ほどで `AUTO.JWC` を置く（RESUME 4.44f、
 * 図形の一覧の先頭に出ます）ので、そこはページの時計に任せて、ここは
 * 「何秒たった」と言われたら書くだけにしてあります。
 *
 * `jw_auto_tick(秒)` を呼ぶと、たまった秒が保存間隔に届いたところで一度
 * 書いて 1 を返します。間隔が 0（行に `④自動保存(無)` と出ているとき）は
 * 何もしません。書き先は ①保存 と同じで、`orig/<名前>.JWC`。
 * 保存パスは A: しか無いので、覚えてはいますが道は変えていません。 */
static double auto_clock;

EMSCRIPTEN_KEEPALIVE int jw_auto_tick(double seconds)
{
    char path[256];
    char stem[16];
    const char *why;
    unsigned char *bytes;
    long len;
    FILE *f;
    int k;

    if (auto_interval <= 0 || !drawing) {
        auto_clock = 0.0;
        return 0;
    }
    auto_clock += seconds;
    if (auto_clock < (double)auto_interval) {
        return 0;
    }
    auto_clock = 0.0;
    memcpy(stem, auto_name, sizeof stem - 1);
    stem[sizeof stem - 1] = 0;
    for (k = (int)strlen(stem) - 1; k >= 0 && stem[k] == ' '; k--) {
        stem[k] = 0;
    }
    if (!stem[0]) {
        return 0;
    }
    bytes = jwc_bytes(drawing, &len, &why);
    if (!bytes) {
        sprintf(status, "%s", why);
        return 0;
    }
    sprintf(path, "%s/%s.JWC", JW_DIR, stem);
    f = fopen(path, "wb");
    if (!f) {
        free(bytes);
        sprintf(status, "%s: cannot write", path);
        return 0;
    }
    fwrite(bytes, 1, (size_t)len, f);
    fclose(f);
    free(bytes);
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
        /* **命令を何も選んでいなければ、入出力 に戻ります。** 本物の
         * 「いまの命令」は起動したときから 入出力（30）で、盤を閉じると
         * その上の行 `|①ファイル(L)|②プロッタ(R)|…` を出し、メニューの
         * 入出力 も黄色くなります（測定：線色の盤を開いて閉じただけ）。 */
        if (!ui.command) {
            ui.command = 30;
            ui.guide = 0;
            jw_cmd_pick(&cmd, 30);
            ui.stage = 0;
            ui.io_stage = 0;
            ui.opt_stage = 0;
        }
    }
    /* a command with a point in hand keeps its reading up to date as the
     * pointer moves, the way the original does */
    {
        const long n0 = drawing ? drawing->n_lines : 0;

        /* 拡大の範囲を取っているあいだは、命令の読みは止まっています。
         * **左のメニューの上でも止まります**：帯（仮の線・四角）も数え箱も
         * 最後に作図範囲側にいたときのまま（測定：／ の始点のあと
         * (350,300) から (60,200) へ動かすと、線は (350,300) まで・
         * 長さも元のまま）。上の行の上では本物も追いかけます。 */
        if (ui.zoom_stage != 1 && ui.zoom_stage != 2 && x >= AREA_X0) {
            jw_cmd_track(&cmd, drawing, &view, x, y);
            band_x = x;
            band_y = y;
            circ_fresh = 0;
        }
        if (drawing && drawing->n_lines != n0) {
            /* 手書線 は矢が動くだけで線が増えます。 */
            jw_ui_from(&ui, drawing);
            ui.command = cmd.command;
            ui.guide = 0;
        }
    }
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

/* **帯の 電卓**。升目を押すと数が組み上がり、演算子で前の計算が
 * 片付きます。測定（[f1]計算結果表示 が置く文字で読みました）:
 *
 *   7＋9＝ → 16、7×9＝ → 63、100÷4＝ → 25、7･5＝ → 7.5、
 *   7＋9＋2＝ → 18、7＋9＋ → 16（演算子で前のぶんが片付く）、
 *   9[F7] → 3、90[F9] → 1、0[F8] → 1、2[F6]3＝ → 8。
 *   **[F8][F9][F10] は度**です（30[F9] が 0.5）。
 *
 * 表示は打っている数だけで、**答えは出ません**——7＋9＝ のあとの
 * 表示は `0` で、16 は [f1] か [f2] で取り出します。 */
static char calc_entry[24] = "0";   /* 表示している数 */
static double calc_acc;             /* 答えの置き場 */
static int calc_op;                 /* 待っている演算子 */
static int calc_fresh = 1;          /* 次の数字で打ち直す */

/* 行 20 に「片付いたぶん」を置きます。
 *
 * **本物は `%.10lf` で書いて、12 文字目で切ります**（ｵｰﾊﾞｰﾚｲ 22 の
 * `3ab8:0dcf`。呼び元は 1 つで、`0xbea4` に長さ 12 を渡しています）。
 * そのあと後ろから、`0` と（元からの）NUL を落とし、`.` に当たったら
 * それも落として止まります。桁を数えて丸めているのではありません——
 * ATAN(2) = 63.43494882292… は `63.4349488229` の 12 文字 `63.434948822`
 * で、丸めると思って読むと「原作の atan が 5e-12 小さい」ように見えて
 * いました（ATAN(7) の `81.869897645` も同じ）。 */
static void calc_pend_set(double v)
{
    char *p = ui.calc_pend;
    int i = 12;

    snprintf(p, sizeof ui.calc_pend, "%.10f", v);
    p[i] = 0;
    for (;;) {
        i--;
        if (i < 1) {
            break;
        }
        if (p[i] == '.') {
            p[i] = 0;
            break;
        }
        if (p[i] != '0' && p[i] != 0) {
            break;
        }
        p[i] = 0;
    }
}

static void calc_show(void)
{
    strncpy(ui.calc_disp, calc_entry, sizeof ui.calc_disp - 1);
    ui.calc_disp[sizeof ui.calc_disp - 1] = 0;
}

/* 打った数を、桁あふれのない形で文字にします。 */
static void calc_put(double v)
{
    char one[40];
    int i;

    sprintf(one, "%.10g", v);
    for (i = 0; one[i] && i < (int)sizeof calc_entry - 1; i++) {
        calc_entry[i] = one[i];
    }
    calc_entry[i] = 0;
}

static double calc_apply(double a, int op, double b)
{
    switch (op) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return b != 0.0 ? a / b : 0.0;
    case '^': return pow(a, b);
    default:  return b;
    }
}

/* 升目のひとつ。行は y=336 から 16 ごと、桁は x 0/24/48/72/102/121 で、
 * **87 の仕切りは上三行だけ**（＝ と ＋ は二つぶん）。 */
static int calc_key(int x, int y)
{
    static const char *row[4] = { "789-/~", "456*dA", "123+C", "0,.=E" };
    /* **升目は y=337 から**です（測定：y=368 は上の行・
     * y=369 から下の行。y=336 と y=400 はどの行でも
     * ありません）。 */
    const int r = y < 337 || y > 399 ? -1 : (y - 337) / 16;
    int c;

    if (r < 0 || r > 3) {
        return 0;
    }
    if (x < 24) {
        c = 0;
    } else if (x < 48) {
        c = 1;
    } else if (x < 72) {
        c = 2;
    } else if (x < 88 && r < 2) {
        /* 上二行の切れ目は x=88 です（測定：87 は −、88 から ÷）。 */
        c = 3;
    } else if (x < 103) {
        /* 切れ目は x=103 です（測定：x=102 は÷、103 から ±）。 */
        c = r < 2 ? 4 : 3;
    } else {
        c = r < 2 ? 5 : 4;
    }
    return row[r][c];
}

/* 電卓の升目を押したとき。1 を返したら画面を描き直します。 */
static int calc_press(int x, int y)
{
    const int k = calc_key(x, y);
    int n = (int)strlen(calc_entry);

    if (!k) {
        return 0;
    }
    if (k >= '0' && k <= '9') {
        if (calc_fresh) {
            if (!calc_op) {
                /* 答えのあとに打ち始めると、行 20 は空になります
                 * （測定：＝ のあと数字を押すと行 20 が消えました）。 */
                ui.calc_pend[0] = 0;
                ui.calc_op = 0;
            }
            calc_entry[0] = (char)k;
            calc_entry[1] = 0;
            calc_fresh = 0;
        } else if (n < 13) {
            if (n == 1 && calc_entry[0] == '0') {
                calc_entry[0] = (char)k;
            } else {
                calc_entry[n] = (char)k;
                calc_entry[n + 1] = 0;
            }
        }
    } else if (k == '.') {
        if (calc_fresh) {
            strcpy(calc_entry, "0.");
            calc_fresh = 0;
        } else if (!strchr(calc_entry, '.') && n < 13) {
            calc_entry[n] = '.';
            calc_entry[n + 1] = 0;
        }
    } else if (k == '~') {
        /* ± は打っている数の符号を返します（測定：7 のあと `-7`）。
         * **何も打っていなければ、返るのは片付いたほう（行 20）**です
         * （測定：7＋9＝ のあと ± で行 20 が `-16`。開けた直後に
         * 押すと、空だった行 20 が `0` になりました）。 */
        if (calc_fresh) {
            calc_acc = calc_acc == 0.0 ? 0.0 : -calc_acc;
            calc_pend_set(calc_acc);
        } else if (calc_entry[0] == '-') {
            memmove(calc_entry, calc_entry + 1, strlen(calc_entry));
        } else if (strcmp(calc_entry, "0") != 0) {
            memmove(calc_entry + 1, calc_entry, strlen(calc_entry) + 1);
            calc_entry[0] = '-';
        }
    } else if (k == 'A') {
        calc_acc = 0.0;
        calc_op = 0;
        strcpy(calc_entry, "0");
        calc_fresh = 1;
        ui.calc_mark = 0;
        ui.calc_pend[0] = 0;
        ui.calc_op = 0;
        ui.calc_unit = 0;
    } else if (k == 'C') {
        strcpy(calc_entry, "0");
        calc_fresh = 1;
    } else if (k == 'd') {
        /* ﾟ は度分秒の入力に移ります（桁 15 の印が `\'` に）。 */
        /* **度→分→秒**と進みます（測定：7ﾟ30ﾟ で行 20 が 7.5、
         * 印と札が `'` から `"` へ）。 */
        if (ui.calc_unit == '\'') {
            calc_acc += atof(calc_entry) / 60.0;
            ui.calc_mark = '"';
            ui.calc_unit = '"';
        } else if (ui.calc_unit == '"') {
            calc_acc += atof(calc_entry) / 3600.0;
        } else {
            calc_acc = atof(calc_entry);
            ui.calc_mark = '\'';
            ui.calc_unit = '\'';
        }
        calc_pend_set(calc_acc);
        ui.calc_op = 0;
        strcpy(calc_entry, "0");
        calc_fresh = 1;
    } else if (k == '=') {
        /* **打ち直し中なら相手は答えの置き場そのもの**です（測定：
         * 9[F7] で 3 になったあと ＝ を押しても 3 のまま）。 */
        calc_acc = calc_apply(calc_acc, calc_op,
                              calc_fresh ? calc_acc : atof(calc_entry));
        calc_op = 0;
        calc_pend_set(calc_acc);
        ui.calc_op = 0;
        strcpy(calc_entry, "0");
        calc_fresh = 1;
    } else if (k == 'E') {
        calc_fresh = 1;
    } else {
        calc_acc = calc_apply(calc_acc, calc_op,
                              calc_fresh ? calc_acc : atof(calc_entry));
        calc_op = k;
        calc_pend_set(calc_acc);
        ui.calc_op = k;
        strcpy(calc_entry, "0");
        calc_fresh = 1;
    }
    calc_show();
    if (drawing) {
        /* 数え箱は次の押しで追いつきます（置いた瞬間は古いまま）。 */
        ui.n_lines = drawing->n_lines;
        ui.n_arcs = drawing->n_arcs + drawing->n_texts;
    }
    return 1;
}

/* 曲線 ⑤手書線 の一筆の途中で命令を離れると、その一筆の線は全部捨てられる
 * （測定：func_all curve_s1_c5、保存のためにメニューを押すと二筆目の線が
 * 記録に残らない）。 */
static void hand_abandon(void)
{
    if (cmd.command == 23 && cmd.hand && cmd.stage == 61 && drawing
        && drawing->n_lines > cmd.hand_from) {
        while (drawing->n_lines > cmd.hand_from) {
            jwc_remove_line(drawing, drawing->n_lines - 1);
        }
        jwc_ink_clear(drawing);
        jw_ui_from(&ui, drawing);
    }
}

EMSCRIPTEN_KEEPALIVE int jw_click(int x, int y, int right)
{
    const int pick = jw_ui_menu_hit(x, y);
    const int bar = jw_ui_bar_item(x, y);

    /* 行 2 の `表示範囲 記憶` は**次の押しか鍵で消えます**（矢を動かす
     * だけなら残ります——測定）。押した釦がまた 範囲記憶 なら、下で
     * 出し直します。 */
    ui.keep_msg = 0;
    ui.offset_msg = 0;
    if (x >= AREA_X0 && y >= AREA_Y0) {
        band_x = x;
        band_y = y;
    }
    /* 寸法 ④円・角 の最初の行（①円径(L)|②円周(R)|③角度）：図面の押しは項目の読みが返すボタンで、
     * 左 = ①、右 = ②（測定：dim_s0_c4 の 400 140 left。1bb4:2cb4 と同形）。 */
    if (cmd.command == 14 && ui.top_item == 4 && !dxf_mode && !cmd.dim_ck && !cmd.dim_arc
        && !cmd.typing && x >= AREA_X0 && x <= AREA_X1 && y >= AREA_Y0 && y <= AREA_Y1) {
        const int r = jw_click(right ? 160 : 70, 8, 0);

        mouse_x = x;            /* 矢は押した所のまま（項目の升へは動かない） */
        mouse_y = y;
        sync_ui();
        present();
        return r;
    }
    /* 点 ②距離の始点の行：行 1 の右（x>580）の押しは [BS]前項（decomp 2cb4：y<[0xa5e] かつ x>580 は 0x14、
     * 測定：pf_e）。 */
    if (cmd.command == 22 && cmd.pt_mode == 2 && cmd.pt2 == 0 && y >= 0 && y < 16 && x > 580
        && drawing) {
        cmd.missed = 0;
        jw_cmd_key(&cmd, drawing, 8);
        sync_ui();
        present();
        return -1;
    }

    /* [f2] の拾い場。押した文字の数が欄に入ります。**読めるのは
     * 届くレイヤの文字だけ**で、SAMPLE0 のレイヤ 01 の `250` は
     * 拾えませんでした（測定）。数でない文字は 0 になります。 */
    if (ui.calc_get && drawing && x >= AREA_X0 && x <= AREA_X1
        && y >= AREA_Y0 && y <= AREA_Y1) {
        const long k = jw_cmd_text_at(drawing, &view, x, y);

        if (k < 0) {
            ui.calc_miss = 1;
            mouse_x = x;
            mouse_y = y;
            present();
            return -1;
        }
        calc_put(atof(drawing->texts[k].text ? drawing->texts[k].text : "0"));
        calc_fresh = 0;
        /* **拾うと行 20 は消えます**（測定：16 を置いたあと同じ字を
         * 拾うと、行 21 は 16、行 20 は空でした）。 */
        calc_acc = 0.0;
        calc_op = 0;
        ui.calc_pend[0] = 0;
        ui.calc_op = 0;
        ui.calc_get = 0;
        ui.calc_miss = 0;
        mouse_x = x;
        mouse_y = y;
        /* 数え箱はこの押しで追いつきます（置いた瞬間は古いまま）。 */
        ui.n_lines = drawing->n_lines;
        ui.n_arcs = drawing->n_arcs + drawing->n_texts;
        calc_show();
        sync_ui();
        present();
        return -1;
    }
    /* [f1] の置き場。**押したところが小数点の位置**です——文字は
     * 一枡 (w+gap)/20 ミリずつ進み、押しは小数点の枡に w/2 ミリ入った
     * ところ（測定：SAMPLE0 で `16` が (171.588,213)、`7.5` が
     * (174.640,213)、`1234.5` が (165.483,213)。どれも押しは
     * (300,250)＝記録 (179,213)）。 */
    if (ui.calc_place && drawing && x >= AREA_X0 && x <= AREA_X1
        && y >= AREA_Y0 && y <= AREA_Y1) {
        const int k = drawing->char_type >= 0 && drawing->char_type <= 10
                    ? drawing->char_type : 0;
        const double step = (drawing->text_w[k] + drawing->text_gap[k])
                          / 20.0 * drawing->unit_mm;
        const double half = drawing->text_w[k] / 40.0 * drawing->unit_mm;
        char one[40];
        double dx, dy;
        int lead = 0, i;

        /* **右は読取**です。読めなければ桁 32 に `読取可能データ無` を
         * 出して、道はそのまま（測定）。 */
        if (right) {
            if (!jw_read(drawing, &view, x, y, &dx, &dy)) {
                ui.calc_miss = 1;
                mouse_x = x;
                mouse_y = y;
                present();
                return -1;
            }
        } else {
            jw_cmd_at(&view, x, y, &dx, &dy);
        }
        ui.calc_miss = 0;
        /* 置くのは **行 20 に出ている答え**だけです。行 20 が空
         * ——7 を打っただけ、[f2] で拾っただけ——なら**何も置かず**、
         * 打ち欄だけ 0 に戻ります（測定：原作の記録に文字が増えず、
         * 行 21 が `0`、行 20 は空のままでした）。 */
        if (ui.calc_pend[0]) {
            /* 置く字は **行 20 に出ているそのもの**です。 */
            strcpy(one, ui.calc_pend);
            for (i = 0; one[i] && one[i] != '.'; i++) {
                lead++;
            }
            {
                const double x0 = dx - lead * step - half;
                const double len = jwc_text_length(drawing, one,
                                                   (unsigned char)k);

                jwc_add_text(drawing, (float)x0, (float)dy,
                             (float)(x0 + len), (float)dy, one,
                             (unsigned char)k,
                             (unsigned char)drawing->write_layer);
            }
        }
        strcpy(calc_entry, "0");
        calc_fresh = 1;
        /* **待っていた演算も消えます**（測定：7＋ のあと置いてから
         * 2＝ を押すと、原作の行 20 は 9 ではなく 2 でした）。 */
        calc_op = 0;
        {
            /* **数え箱は置く前の数のまま**です（測定：文字を入れても
             * 円･文数 は 13 のままでした）。行 20 も**置く前のまま**で、
             * 空なら空のままです（測定：7 を打っただけで置くと、原作の
             * 行 20 は空のままでした）。 */
            const long was_l = ui.n_lines, was_a = ui.n_arcs;
            char was_pend[24];

            strcpy(was_pend, ui.calc_pend);
            ui.calc_place = 0;
            mouse_x = x;
            mouse_y = y;
            /* memset するので戻します。**度分秒の印（桁 15）は
             * 戻しません**——原作も消えていました（測定：7ﾟ のあと
             * 置くと印がありません）。 */
            jw_ui_from(&ui, drawing);
            ui.n_lines = was_l;
            ui.n_arcs = was_a;
            strcpy(ui.calc_pend, was_pend);
            /* **待っている演算子の字は消えます**（測定：7＋ のあと
             * 置くと、行 20 は 7 だけで ＋ が出ませんでした）。 */
            ui.calc_op = 0;
        }
        ui.calc = 1;
        calc_show();
        sync_ui();
        present();
        return -1;
    }
    /* 電卓の升目。盤と同じで、menu より先に答えます。 */
    if (ui.calc && x >= 0 && x <= 120 && y >= 336 && y <= 399
        && calc_press(x, y)) {
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }

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
            /* 数え箱は、帯を押した点までの大きさで止まります（測定）。 */
            if (drawing && cmd.pressed) {
                jw_cmd_track(&cmd, drawing, &view, x, y);
                sync_ui();
            }
            ui.zoom_stage = 1;
            ui.guide = 0;   /* 起動の案内は消えます */
        } else if (bar == JW_BAR_SCALE) {
            ui.zoom_stage = 3;
            ui.guide = 0;
        } else if (bar == JW_BAR_PREV && have_before) {
            view = before_zoom;
            have_before = 0;
            ui.view_scale = view.scale;
        } else if (bar == JW_BAR_CALC && drawing) {
            /* **選んでいる命令はそのまま**です（測定：入出力 を
             * 選んでから 電卓 を押しても、左の 入出力 の行は
             * 白抜きのままでした）。jw_ui_from が memset するので
             * 取っておいて戻します。 */
            const int was_kept = ui.kept;
            const int was_cmd = ui.command;
            const int was_band = ui.band_kept;
            const int was_off = ui.offset_mode;

            jw_ui_from(&ui, drawing);
            ui.calc = 1;        /* after jw_ui_from, which memsets */
            ui.kept = was_kept;
            ui.command = was_cmd;
            ui.band_kept = was_band;
            ui.offset_mode = was_off;
            strcpy(calc_entry, "0");
            calc_acc = 0.0;
            calc_op = 0;
            calc_fresh = 1;
            ui.calc_mark = 0;
            ui.calc_pend[0] = 0;
            ui.calc_op = 0;
            ui.calc_unit = 0;
            calc_show();
        } else if ((bar == JW_BAR_KEEP || bar == JW_BAR_OFFSET) && drawing) {
            /* 範囲記憶 and ｵﾌｾｯﾄ both leave the original **in 入出力**, the
             * same way 紙, the scale and サブ画面表示 do -- the item's row
             * goes yellow and its bar goes along the top.  Measured with
             * tools/clickcheck.sh at (90,470) and (570,470). */
            /* 範囲記憶 は **押すたびに入り切りします**（測定：2 回目で
             * 釦が緑の `範囲記憶` に戻り、行 2 の帯も消えました）。 */
            const int was_kept = bar == JW_BAR_KEEP ? !ui.kept : ui.kept;
            /* ｵﾌｾｯﾄ は 0→1回だけ→常駐→切 と回ります（測定：
             * 2 回目で `常駐` がつき、3 回目で釦が緑に戻りました）。 */
            const int was_off = bar == JW_BAR_OFFSET
                              ? (ui.offset_mode + 1) % 3 : ui.offset_mode;

            jw_ui_from(&ui, drawing);
            ui.command = 30;
            ui.band_kept = 1;
            ui.kept = was_kept;
            ui.offset_mode = was_off;
            if (bar == JW_BAR_OFFSET) {
                ui.offset_msg = was_off ? was_off : 3;
            }
            /* 押した直後だけ行 2 に帯が出ます——記憶したときは
             * `記憶`（黄）、解いたときは `解除`（緑）。 */
            if (bar == JW_BAR_KEEP) {
                ui.keep_msg = was_kept ? 1 : 2;
            }
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
            /* 倍率指定: the right button is 原寸, `倍率=1.0ﾏｳｽ(R)`; the left
             * one takes that point as the centre and then asks for the
             * factor -- `画 面 倍 率 (10000以下) ＝` with an eight cell field
             * at column 35.  前倍率ﾏｳｽ(L) and 最小倍率ﾏｳｽ(R) on that line are
             * not measured. */
            if (!right) {
                zoom_x = x;
                zoom_y = y;
                ui.zoom_stage = 4;
                ui.zoom_typed_n = 0;
                ui.zoom_typed[0] = 0;
                mouse_x = x;
                mouse_y = y;
                present();
                return -1;
            }
            {
                const int was_kept = ui.kept;

                before_zoom = view;
                have_before = 1;
                jw_view_actual(&view, drawing, x, y);
                /* and 入出力 again, the same as the typed factor */
                jw_ui_from(&ui, drawing);
                ui.command = 30;
                ui.band_kept = 1;   /* 帯の下の図面は消えません */
                ui.kept = was_kept;
                ui.view_scale = view.scale;
                jw_cmd_pick(&cmd, 30);
            }
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
        /* **The band under the top line goes**, as it does when an item is
         * picked: SAMPLE1's dots on rows 23 and 39 are black in the
         * original after this press (66 pixels). */
        ui.band_kept = 0;
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
    /* 軸角の札（升の左）——押すと**角度を訊く行**が出ます。盤は消えて
     * 数え箱が戻るので、目盛 と同じ道です（実測は notes/ui.md 4.38）。 */
    if (x >= 1 && x <= 55 && y >= 32 && y <= 47 && drawing) {
        const double was = ui.axis_deg;

        mouse_x = x;
        mouse_y = y;
        jw_ui_from(&ui, drawing);
        ui.axis_mode = 1;       /* jw_ui_from のあと。memset されるので */
        ui.axis_deg = was > 0.0 ? was : 90.0;
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
            /* **押す前の**書込グループを控えます。右のときは
             * すぐ下で書き換えるので、書き換えたあとに比べると
             * **必ず一致**してしまい、どの升でも データ表示 が
             * 開いていました（12,227 画素）。 */
            const int was_write = drawing->write_layer >> 4;

            if (right) {
                drawing->write_layer =
                    (unsigned char)((n << 4) | (drawing->write_layer & 15));
                drawing->group_on[n] = 1;
            } else if (n != was_write) {
                drawing->group_on[n] = !drawing->group_on[n];
            }
            if (right && n == was_write) {
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
        hand_abandon();
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
        } else if (ui.command == 17 && it == 5 && !ui.stage) {
            kind = JW_PICK_HENKEI;
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
    /* ④自動保存's four cells, each opening a field in its own place on the
     * band: ①保存間隔 at column 20, ②ファイル名 at 28, ③保存パス at 43 and
     * ④ＷＡＩＴ at 66. */
    if (ui.command == 30 && ui.top_item == 4 && !ui.io_stage
        && y >= 0 && y <= 15) {
        const int it = jw_ui_top_item(x, y);

        if (it >= 1 && it <= 4) {
            /* **②ファイル名 and ③保存パス come up with what they hold**,
             * the name without its `.JWC` and the path as it stands, and
             * the green block in front of it; ①保存間隔 and ④ＷＡＩＴ come
             * up empty (measured). */
            auto_edit = it;
            auto_typed_n = 0;
            auto_typed[0] = 0;
            if (it == 2 || it == 3) {
                char *dot;

                memcpy(auto_typed, it == 2 ? auto_name : auto_path,
                       sizeof auto_typed - 1);
                auto_typed[sizeof auto_typed - 1] = 0;
                dot = strchr(auto_typed, '.');
                if (it == 2 && dot) {
                    *dot = 0;               /* it is kept as the stem */
                }
                if (it == 3) {
                    /* and the path without its backslash: `A:` */
                    const size_t n = strlen(auto_typed);

                    if (n && auto_typed[n - 1] == 0x5c) {
                        auto_typed[n - 1] = 0;
                    }
                }
            }
            mouse_x = x;
            mouse_y = y;
            present();
            return -1;
        }
    }
    /* 変形（17）の行の `②包絡処理変形`（桁 33〜49、x 256〜391）。自分の
     * 行を出し、押しを二つ取って包絡するか、終点を右で押して範囲内消去
     * します。行の `①【実線のみ】`（桁 30〜43、x 232〜351）は始点を待って
     * いるあいだだけで、押すと【全 線 種】に変わります。 */
    if (ui.command == 17 && ui.hen_env && !ui.top_item && !cmd.pressed
        && !dxf_mode && y >= 0 && y <= 15
        && x / 8 + 1 >= 30 && x / 8 + 1 <= 43) {
        cmd.hen_env_all = !cmd.hen_env_all;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* 線記号変形の一覧が出ているあいだ。上の行の `①種類【A】変更`
     * （桁 19〜35、x 144〜279）でグループの一覧、その升でグループを
     * 選びます。升は x 144..576 を 3 列、y 40..328 を 9 行（実測）。 */
    if (ui.kigou && !cmd.kigou_pick && !cmd.kigou_sym && !dxf_mode
        && y >= 0 && y <= 15 && x >= 144 && x <= 279) {
        /* **記号を選んだあとは別の行**です。この桁は ①倍率 横,縦 に
         * なっていて、一覧の `①種類【A】変更` ではありません。 */
        cmd.kigou_pick = 1;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    if (ui.kigou && cmd.kigou_pick && !dxf_mode
        && x >= 144 && x < 576 && y >= 40 && y < 328) {
        const int cell = (y - 40) / 32 * 3 + (x - 144) / 144;

        if (cell >= 1 && cell <= JW_KIGOU_FILES
            && jw_kigou_lib(cell - 1)) {
            cmd.kigou_group = cell - 1;
            cmd.kigou_pick = 0;
        }
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* **記号を選んだあと、図面の線を押すと変形します。**
     *
     * いまできるのは「指示線 1 を押して、その線を記号に置き換える」
     * ところまでです。「直線消」は部材が 1 つだけで、それも制御コード
     * 08（表のみ＝作図しない）なので、押した線が消えて終わります
     * ——本物も線の数が 30 から 29 になります（実測）。
     *
     * **まだ測っていないもの**: 実際に線を描く記号、指示線 2、
     * 指示回数 2 以上、倍率、文字入力。 */
    /* **上の行の 2 つめの升は ②他記号選択**（`jw_ui_top_item` の 2）。
     * 一覧に戻ります。 */
    if (ui.kigou && cmd.kigou_sym && !cmd.kigou_pick && !cmd.kigou_input
        && !dxf_mode && y >= 0 && y <= 15
        && jw_ui_top_item(x, y) == 2) {
        cmd.kigou_sym = 0;
        cmd.kigou_line = -1;
        cmd.kigou_line2 = -1;
        cmd.kigou_in_at = 0;
        cmd.kigou_in_n = 0;
        cmd.kigou_in_buf[0] = 0;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }

    /* **上の行の 1 つめの升は ①倍率 横,縦**（`jw_ui_top_item` の 1）。 */
    if (ui.kigou && cmd.kigou_sym && !cmd.kigou_pick && !cmd.kigou_input
        && !dxf_mode && y >= 0 && y <= 15
        && jw_ui_top_item(x, y) == 1) {
        cmd.kigou_mag_ask = 1;
        cmd.kigou_mag_n = 0;
        cmd.kigou_mag_typed[0] = 0;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }

    /* **記号を選んだあと、指示線を押して置きます。**
     *
     * 指示回数 0 は線を 1 回押すだけ（「直線消」）、1 は線のあと
     * `○位置(L)free (R)Read` で位置をもう 1 回（どちらも実測）。 */
    /* **盤が出ているあいだの押しは [Enter] と同じ**です（実測）。 */
    if (ui.kigou && cmd.kigou_sym && !cmd.kigou_pick && cmd.kigou_input
        && !dxf_mode
        && drawing && x >= 122 && x <= 638 && y >= 16 && y <= 462) {
        kigou_input_done();
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    if (ui.kigou && cmd.kigou_sym && !cmd.kigou_pick && !cmd.kigou_input
        && !dxf_mode
        && drawing && x >= 122 && x <= 638 && y >= 16 && y <= 462) {
        const JwKigou *g = jw_kigou_lib(cmd.kigou_group);
        const JwKigouSym *sym = g && cmd.kigou_sym <= g->n
                              ? &g->sym[cmd.kigou_sym - 1] : 0;
        double px, py;

        jw_cmd_at(&view, x, y, &px, &py);
        if (sym && !jw_kigou_takes1(sym)) {
            /* **制御コード 10 が無い記号は指示線を取りません。**
             * 押したところがそのまま原点です（「建具記号 (AW)」の実測：
             * 線の数が 30 → 31 に増え、指示線は消えません）。 */
            cmd.kigou_line = -1;
            cmd.kigou_line2 = -1;
            cmd.kigou_px = px;
            cmd.kigou_py = py;
            if (jw_kigou_input(sym, 0)) {
                /* **押した時点でもう置きます**（打った字だけあと）。 */
                place_kigou(sym, px, py, 0);
                cmd.kigou_input = 1;
                cmd.kigou_in_at = 0;
            } else {
                place_kigou(sym, px, py, -1);
            }
        } else if (sym && cmd.kigou_line < 0) {
            const long k = jw_cmd_line_at(drawing, &view, x, y);

            /* 指示線が取れなければ `読取可能データ無`（記号名の札は消える。測定：henkei_s0_c4） */
            cmd.missed = k < 0;
            if (k >= 0) {
                cmd.kigou_line = k;
                cmd.kigou_line2 = -1;
                cmd.kigou_px = px;
                cmd.kigou_py = py;
                if (jw_kigou_input(sym, 0)
                    && !jw_kigou_wants2(sym) && !sym->picks) {
                    /* **文字入力の指定があれば、置く前に盤を出します。**
                     * まだ打鍵は受けません（絵を先に合わせます）。
                     *
                     * ただし**指示がまだ残っているうちは出しません**——
                     * 「仕切弁(GV)」（H の 2 番、指示回数 1）で本物は
                     * 位置を押してから盤を出します。指示線を押した時点で
                     * 出していたので、位置の押しが [Enter] に食われて
                     * いました（14065 画素）。 */
                    cmd.kigou_input = 1;
                    cmd.kigou_in_at = 0;
                } else if (!sym->picks) {
                    /* **指示回数 0 は線の端が原点**です（「方位 (40mm)」
                     * の実測：押した点ではなく、押したほうに近い端）。 */
                    const JwcLine *l = &drawing->lines[k];
                    const double q0 = (l->x0 - px) * (l->x0 - px)
                                    + (l->y0 - py) * (l->y0 - py);
                    const double q1 = (l->x1 - px) * (l->x1 - px)
                                    + (l->y1 - py) * (l->y1 - py);

                    place_kigou(sym, q0 <= q1 ? l->x0 : l->x1,
                                q0 <= q1 ? l->y0 : l->y1, -1);
                }
            }
        } else if (sym && jw_kigou_wants2(sym) && cmd.kigou_line2 < 0) {
            /* **データに 20 があれば指示線 2** を押させます（実測）。
             * 指示回数ではありません——「Ｒ面取」は 指示回数 1 でも
             * `指示線(2)◆マウス指示` と出ます。 */
            const long k = jw_cmd_line_at(drawing, &view, x, y);

            if (k >= 0 && k != cmd.kigou_line) {
                cmd.kigou_line2 = k;
                if (jw_kigou_input(sym, 0) && !sym->picks) {
                    cmd.kigou_px = px;
                    cmd.kigou_py = py;
                    cmd.kigou_input = 1;
                    cmd.kigou_in_at = 0;
                } else {
                    place_kigou(sym, px, py, -1);
                }
            }
        } else if (sym) {
            /* 位置の押し。ここで指示は済みなので、文字入力があれば
             * **ここで**盤を出します（上の実測）。
             *
             * **盤を出す前に、文字以外の部材はもう置きます。** 「加工
             * 記号例」（D の 15 番）で、本物は位置を押した時点で三角形を
             * 引いてから `粗さ` を聞きます（39 画素）。指示線を取らない
             * 記号では前からそうしていました。 */
            /* 位置の押しは (L)free (R)Read：右で読めなければ `読取可能データ無`（測定：henkei_s0_c4） */
            cmd.missed = 0;
            if (right) {
                double rx, ry;

                if (!jw_read(drawing, &view, x, y, &rx, &ry)) {
                    cmd.missed = 1;
                    mouse_x = x;
                    mouse_y = y;
                    sync_ui();
                    present();
                    return -1;
                }
                px = rx;
                py = ry;
            }
            if (jw_kigou_input(sym, 0)) {
                cmd.kigou_px = px;
                cmd.kigou_py = py;
                place_kigou(sym, px, py, 0);
                cmd.kigou_input = 1;
                cmd.kigou_in_at = 0;
            } else {
                place_kigou(sym, px, py, -1);
            }
        }
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* 一覧の升を押すとその記号を選びます。升は 4 列 x 4 行で、
     * 列の境は x 121/251/381/511/639、行は y 16 から 96 ごと（実測）。 */
    if (ui.kigou && !cmd.kigou_pick && !cmd.kigou_sym && !dxf_mode
        && x >= 122 && x <= 638 && y >= 17 && y < 400) {
        const int col = x >= 511 ? 3 : x >= 381 ? 2 : x >= 251 ? 1 : 0;
        const int row = (y - 16) / 96;
        const int k = row * 4 + col;
        const JwKigou *g = jw_kigou_lib(cmd.kigou_group);

        if (g && k < g->n) {
            cmd.kigou_sym = k + 1;
            cmd.kigou_line = -1;
        }
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* 変形 の行の `④線記号変形`（桁 60〜71、x 472〜575）。押すと
     * 記号の一覧（4×4 の 16 升）が作図範囲いっぱいに出ます。 */
    if (ui.command == 17 && !ui.top_item && !cmd.pressed && !dxf_mode
        && y >= 0 && y <= 15 && x / 8 + 1 >= 60 && x / 8 + 1 <= 71) {
        cmd.hen_kigou = 1;
        cmd.kigou_pick = 0;
        cmd.kigou_sym = 0;
        cmd.kigou_line = -1;
        cmd.hen_env = 0;
        cmd.hen_dbl = 0;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    if (ui.command == 17 && !ui.top_item && !cmd.pressed && !dxf_mode
        && y >= 0 && y <= 15 && x / 8 + 1 >= 33 && x / 8 + 1 <= 49) {
        cmd.hen_env = 1;
        cmd.hen_kigou = 0;
        cmd.hen_dbl = 0;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* 変形（17）の行の `③複線化`（桁 51〜58、x 400〜471）。範囲の道は
     * ①パラメトリック変形 と同じものを通り、①範囲確定 のあとの行だけ
     * 変わります。①パラメトリック変形（桁 9〜31）を押し直すと戻ります。 */
    if (ui.command == 17 && !ui.top_item && !cmd.pressed && !dxf_mode
        && y >= 0 && y <= 15 && x / 8 + 1 >= 51 && x / 8 + 1 <= 58) {
        cmd.hen_dbl = 1;
        cmd.hen_env = 0;
        cmd.hen_kigou = 0;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    if (ui.command == 17 && !ui.top_item && !cmd.pressed && !dxf_mode
        && y >= 0 && y <= 15 && x / 8 + 1 >= 9 && x / 8 + 1 <= 31) {
        /* ①パラメトリック変形 のセルを押すのは数字キー `1` と同じ――ここで
         * `cmd.again` を立てないと、次に作図領域を押したとき src/cmd.c の
         * 「変形の最初の行」節（command==17 && !pressed && !again && ...）に
         * また引っかかって、せっかく選んだモードではなく **もう一度
         * L/R でモードを選ぶ押し**として扱われてしまう（測定：
         * henkei_table.py の `head+para+first_r+...` と同じ手順を
         * functest.sh で比べると、このセルを押したあとの右押しが
         * 範囲の始点にならず ②包絡処理変形 に化けていた）。 */
        cmd.hen_dbl = 0;
        cmd.hen_env = 0;
        cmd.hen_kigou = 0;
        cmd.again = 1;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* 寸法 ⑨設定's panel.  The ten rows are 6 to 22 of the box, two rows
     * apart; the six with a number open a field and the three with 【】
     * change over where they stand.  Its own line has three more. */
    /* 寸法's own line while it is asking for the 寸法値の始点 carries
     * `|①小数点以下[1]桁 |②半径|③直径|④累寸|⑤一括|`, and ① turns the
     * digit round the same way 寸法設定's ④ does: measured, [1] becomes
     * [2].  The cell is columns 34 to 52.  ② to ⑤ are not done. */
    if (ui.command == 14 && !dxf_mode && y >= 0 && y <= 15
        && ((!ui.top_item && (cmd.stage == 3 || cmd.stage == 5))
            || ui.top_item == 5)
        && x / 8 + 1 >= 34 && x / 8 + 1 <= 52) {
        dim_dec = (dim_dec + 1) % 4;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* 寸法 ④円･角's own line, `|①円径(L) |②円周(R) |③角度 |`: ①円径 is
     * columns 9 to 18 and asks for a circle.  ②円周 and ③角度 are not
     * done, so their cells stay src/item.h's. */
    if (ui.command == 14 && ui.top_item == 4 && !dxf_mode
        && y >= 0 && y <= 15 && x / 8 + 1 >= 9 && x / 8 + 1 <= 18) {
        cmd.top_item = 0;
        cmd.top_right = 0;
        cmd.dim_ck = 1;
        /* **枠の上に戻すのは、この道に入ってからのもの全部です。**
         * 二本目を入れると一本目の弧が消えました（y32..47 の 49 画素）
         * ——原作は項目を選んだときに (122,17)-(638,47) を黒くして、
         * あとから描いたものはそのまま残します。 */
        cmd.n0_lines = drawing ? drawing->n_lines : 0;
        cmd.n0_arcs = drawing ? drawing->n_arcs : 0;
        cmd.n0_texts = drawing ? drawing->n_texts : 0;
        cmd.dim_ck_val[0] = 0;
        cmd.dim_did = 0;
        cmd.stage = 9;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* ②円周 は同じ線の桁 20 から 29、右ボタンの合図つきですが、どちらの
     * ボタンでも入ります（①円径 と同じ）。 */
    if (ui.command == 14 && ui.top_item == 4 && !dxf_mode
        && y >= 0 && y <= 15 && x / 8 + 1 >= 20 && x / 8 + 1 <= 29) {
        cmd.top_item = 0;
        cmd.top_right = 0;
        cmd.dim_arc = 1;
        /* **枠の上に戻すのは、この道に入ってからのもの全部です。**
         * 二本目を入れると一本目の弧が消えました（y32..47 の 49 画素）
         * ——原作は項目を選んだときに (122,17)-(638,47) を黒くして、
         * あとから描いたものはそのまま残します。 */
        cmd.n0_lines = drawing ? drawing->n_lines : 0;
        cmd.n0_arcs = drawing ? drawing->n_arcs : 0;
        cmd.n0_texts = drawing ? drawing->n_texts : 0;
        cmd.dim_arc_val[0] = 0;
        cmd.dim_did = 0;
        cmd.stage = 11;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* ③角度 は同じ線の桁 31 から 37。②円周 と同じ道を通り、始めの押しが
     * 円ではなく 角度原点 になります。 */
    if (ui.command == 14 && ui.top_item == 4 && !dxf_mode
        && y >= 0 && y <= 15 && x / 8 + 1 >= 31 && x / 8 + 1 <= 37) {
        cmd.top_item = 0;
        cmd.top_right = 0;
        cmd.dim_arc = 2;
        cmd.dim_arc_quiet = 1;
        cmd.dim_arc_val[0] = 0;
        cmd.dim_did = 0;
        cmd.stage = 11;
        cmd.n0_lines = drawing ? drawing->n_lines : 0;
        cmd.n0_arcs = drawing ? drawing->n_arcs : 0;
        cmd.n0_texts = drawing ? drawing->n_texts : 0;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* ③書込角度's `｜0 度 ￏﾳﾽ(L)｜`: columns 34 to 44, the cell
     * ③任意方向 has too.  It sets the angle to nought and leaves the
     * field's 前回と同じ alone (measured). */
    if (ui.command == 14 && ui.dim_ck && cmd.stage == 10 && !right
        && y >= 0 && y <= 15 && x / 8 + 1 >= 34 && x / 8 + 1 <= 44) {
        cmd.dim_ck_deg = 0.0;
        cmd.typing = 0;
        cmd.typed[0] = 0;
        cmd.typed_n = 0;
        cmd.stage = 9;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* ②半径 (columns 53 to 59) and ③直径 (60 to 66): both ask `● 円
     * マウス指示` and then take a circle. */
    if (ui.command == 14 && !ui.top_item && !dxf_mode && !cmd.dim_prog
        && (cmd.stage == 3 || cmd.stage == 5) && y >= 0 && y <= 15
        && x / 8 + 1 >= 53 && x / 8 + 1 <= 66) {
        cmd.dim_circle = x / 8 + 1 <= 59 ? 1 : 2;
        cmd.stage = 6;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* ⑤一括（桁 74 から）: 始線・終線・追加線･除外線 を選んで、隣どうしの
     * あいだに寸法を並べて入れます。 */
    if (ui.command == 14 && !ui.top_item && !dxf_mode && !cmd.dim_prog
        && (cmd.stage == 3 || cmd.stage == 5) && y >= 0 && y <= 15
        && x / 8 + 1 >= 74) {
        cmd.dim_lot = 1;
        cmd.dim_lot_n = 0;
        cmd.dim_lot_done = 0;
        cmd.stage = 21;
        cmd.n0_lines = drawing ? drawing->n_lines : 0;
        cmd.n0_arcs = drawing ? drawing->n_arcs : 0;
        cmd.n0_texts = drawing ? drawing->n_texts : 0;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* ④累寸 (columns 67 to 73) turns the progressive road on: the line
     * becomes `|①小数点以下[1]桁 |②一括|` and every point read after the
     * 始点 gets its own dimension from it. */
    if (ui.command == 14 && !ui.top_item && !dxf_mode && !cmd.dim_prog
        && (cmd.stage == 3 || cmd.stage == 5) && y >= 0 && y <= 15
        && x / 8 + 1 >= 67 && x / 8 + 1 <= 73) {
        cmd.dim_prog = 1;
        cmd.stage = 3;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* 寸法 ③任意方向's `｜0 度 ﾏｳｽ(L)｜`: columns 34 to 44 of the top
     * line.  前回と同じ ﾏｳｽ(R) and [F1] ﾏｳｽ角度 are not done. */
    if (ui.command == 14 && ui.top_item == 3 && !right
        && y >= 0 && y <= 15 && x / 8 + 1 >= 34 && x / 8 + 1 <= 44) {
        jw_cmd_dim_angle(&cmd, 0.0);
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    if (ui.command == 14 && ui.top_item == 9 && !dim_edit
        && x >= 239 && x <= 501 && y >= 72 && y < 362) {
        /* 一つの欄は文字の二行ぶん（上の行を押しても下の行と同じ。測定：dim_s0_c9 の 400 140）。 */
        const int row0 = y / 16 + 1;
        const int row = (row0 & 1) ? row0 + 1 : row0;

        mouse_x = x;
        mouse_y = y;
        if (row == 18) {
            dim_rphi = !dim_rphi;
        } else if (row == 20) {
            dim_comma = !dim_comma;
        } else if (row == 22) {
            dim_zero = !dim_zero;
        } else if (row == 6 || row == 8 || row == 10 || row == 12
                   || row == 14 || row == 16) {
            dim_edit = row;
            dim_typed_n = 0;
            dim_typed[0] = 0;
        }
        present();
        return -1;
    }
    if (ui.command == 14 && ui.top_item == 9 && y >= 0 && y <= 15) {
        const int it = jw_ui_top_item(x, y);

        if (it == 1) {
            /* ①変更確定 takes the panel down and puts 寸法's own line back
             * (measured: `|①横方向|②縦方向|…|⑨設定|`). */
            cmd.top_item = 0;
            cmd.top_right = 0;
            dim_edit = 0;
            mouse_x = x;
            mouse_y = y;
            sync_ui();
            present();
            return -1;
        }
        if (it >= 2 && it <= 4) {
            if (it == 2) {
                dim_end = !dim_end;
            } else if (it == 3) {
                dim_unit = (dim_unit + 1) % 3;
            } else {
                dim_dec = (dim_dec + 1) % 4;
            }
            mouse_x = x;
            mouse_y = y;
            present();
            return -1;
        }
    }
    /* 測定 ⑥単位 and ⑦小数点以下.  ⑥ goes ｍ(3桁) → cm(1桁) → mm(0桁) and
     * round again; ⑦ goes 3 → 0 → 1 → 2 → 3 and leaves the unit alone. */
    if (ui.command == 15 && y >= 0 && y <= 15
        && (jw_ui_top_item(x, y) == 6 || jw_ui_top_item(x, y) == 7)) {
        static const int DEC[3] = { 3, 1, 0 };

        if (jw_ui_top_item(x, y) == 6) {
            meas_unit = (meas_unit + 1) % 3;
            meas_dec = DEC[meas_unit];
        } else {
            meas_dec = (meas_dec + 1) % 4;
        }
        /* **The cell writes nothing on the top line**, so it is not a
         * `top_item` press: leaving one set would make the chrome skip the
         * band, and the two lengths would go off the screen. */
        cmd.top_item = 0;
        cmd.top_right = 0;
        cmd.meas_noind = 0;
        mouse_x = x;
        mouse_y = y;
        sync_ui();
        present();
        return -1;
    }
    /* 文字 ④設定's table.  The box's own rules divide the columns, so they
     * say which cell a press lands in: 文字種類 up to x 236 picks the type,
     * and ペン, 文字幅, 文字高 and 間隔 (up to 308, 396, 484 and 556) open a
     * field on that row.  Rows 9 to 18 are y 128 to 287. */
    /* 表のあいだは作図範囲の押しは表のものだけ：欄が開いていれば押しは
     * 欄を閉じるだけ（打った数は捨てて元の値）、表の升の外は何もしない
     * （測定：func_all text_s0_c4 の (300,250)・(450,330)・(598,300)R）。 */
    if ((ui.command == 13 || ui.command == 28) && ui.top_item == 4
        && drawing && x >= AREA_X0 && y >= AREA_Y0 && y <= AREA_Y1
        && (ui.char_edit || !(x >= 147 && x < 556 && y >= 128 && y < 288))) {
        ui.char_edit = 0;
        ui.char_edit_n = 0;
        mouse_x = x;
        mouse_y = y;
        present();
        return -1;
    }
    if ((ui.command == 13 || ui.command == 28) && ui.top_item == 4
        && !ui.char_edit && x >= 147 && x < 556 && y >= 128 && y < 288
        && drawing) {
        const int row = y / 16 - 7;             /* 1 to 10 */

        mouse_x = x;
        mouse_y = y;
        if (x < 236) {
            drawing->char_type = row;
            jw_ui_from(&ui, drawing);
            ui.command = cmd.command;
            ui.top_item = 4;
        } else {
            ui.char_edit = x < 308 ? 1 : x < 396 ? 2 : x < 484 ? 3 : 4;
            ui.char_edit_row = row;
            ui.char_edit_n = 0;
            ui.char_edit_typed[0] = 0;
        }
        present();
        return -1;
    }
    /* ⑥ＤＸＦ ③設定's rows.  A press takes the side it lands on -- the left
     * one up to column 57 and the right one from 58 (measured at columns 38,
     * 51, 57, 58 and 63) -- and a press between two rows does nothing. */
    if (ui.command == 30 && ui.io_stage == JW_IO_DXFSET
        && x >= 246 && x <= 543 && y >= 41 && y < 295) {
        static const int ROW[5] = { 6, 8, 10, 12, 18 };
        const int row = y / 16 + 1;
        int i;

        mouse_x = x;
        mouse_y = y;
        for (i = 0; i < 5; i++) {
            if (ROW[i] == row) {
                dxf_set[i] = (unsigned char)(x >= 464);
            }
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
        if (ui.opt_stage == 0 && item >= 1 && item <= 3) {   /* ②断面・③立面 も同じ一覧画面（測定：probe_option_walk） */
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
        if (ui.opt_stage == 0 || (item >= 1 && item <= 3)) {
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
    /* 図形・多角形 が借りたファイル選択の上の行。③ﾌｧｲﾙ名指定 は名前の欄、
     * ほかは選ぶものが無いので何もしない（ここで止めて、命令の升として
     * 取らせない。測定：func_all polygon_s0_c4_v）。 */
    if (ui.io_stage == JW_IO_LOAD && ui.command != 30) {
        ui.pick_bad = 0;
        if (y >= 0 && y <= 15 && jw_ui_top_item(x, y)) {
            if (jw_ui_top_item(x, y) == 3) {
                ui.io_stage = JW_IO_PICKNAME;
                ui.io_name_n = 0;
                ui.io_name[0] = 0;
            }
            present();
            return -1;
        }
        /* 作図範囲の押しは取らない（文字 ⑤文書 の文読込で、押しても画面は
         * そのまま。測定：func_all text_s0_c5_v）。 */
        if (x >= AREA_X0 && y >= AREA_Y0) {
            mouse_x = x;
            mouse_y = y;
            present();
            return -1;
        }
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
        } else if (ui.io_stage == 0 && item == 5) {
            /* ⑤新規図面: an empty sheet.  Measured -- the two counts go to
             * nought, the paper stays A-4 at 1/1, the group goes back to 0
             * and 入出力's own line is still up. */
            if (drawing_edited()) {
                ui.io_stage = JW_IO_NEWASK;
            } else {
                drawing_new();
            }
        } else if (ui.io_stage == JW_IO_NEWASK && item == 1) {
            drawing_new();                      /* ①新規 */
            ui.io_stage = 0;
        } else if (ui.io_stage == JW_IO_NEWASK && item == 2) {
            file_list(1);                       /* ②保存 */
            ui.io_stage = JW_IO_SAVE;
        } else if (ui.io_stage == JW_IO_NEWASK && item == 3) {
            ui.io_stage = 0;                    /* ③中止 */
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
            if (was == JW_IO_LOAD && dxf_mode == 2) {
                /* ⑥ＤＸＦ ② 読込: the entities in the file join the drawing
                 * in hand, the way ③合成 joins another drawing's. */
                char path[256], stem[16];
                const char *why;
                int j;

                memcpy(stem, ui.file_name[ui.file_sel], 8);
                stem[8] = 0;
                for (j = 7; j >= 0 && stem[j] == ' '; j--) stem[j] = 0;
                /* **The list spells it `.DXF` and the disk may not.**  The
                 * names in the list are DOS's -- the stem upper case and the
                 * extension the one that was asked for -- while the file the
                 * program wrote is `NAME.dxf`.  Try what it writes first and
                 * the upper case after, so a file put there by hand opens
                 * too. */
                sprintf(path, "%s/%s.dxf", JW_DIR, stem);
                {
                    /* **Look, do not read**: jwc_dxf_read adds what it finds
                     * to the drawing, so trying it twice would bring the
                     * entities in twice. */
                    FILE *probe = fopen(path, "rb");

                    if (probe) {
                        fclose(probe);
                    } else {
                        sprintf(path, "%s/%s.DXF", JW_DIR, stem);
                    }
                }
                if (jwc_dxf_read(drawing, path, &why)) {
                    sprintf(status, "%s read", path);
                } else {
                    sprintf(status, "%s: %s", path, why);
                }
                jw_ui_from(&ui, drawing);
                ui.command = cmd.command;
                ui.io_stage = JW_IO_DXF;
                dxf_done = 0;
            } else if (was == JW_IO_LOAD) {
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
        } else if (ui.io_stage == JW_IO_DXFWRITE && item == 1) {
            /* ① 実 行 writes the DXF and comes back to ⑥ＤＸＦ's line with
             * ` 登 録  完 了 ` over it. */
            char path[256];
            char stem[16];
            int k;

            memcpy(stem, ui.save_name, sizeof stem - 1);
            stem[sizeof stem - 1] = 0;
            for (k = (int)strlen(stem) - 1; k >= 0 && stem[k] == ' '; k--) {
                stem[k] = 0;
            }
            sprintf(path, "%s/%s.dxf", JW_DIR, stem);
            jwc_dxf_write(drawing, path, JW_DIR "/DXF_HDR.DAT");
            dxf_n[0] = drawing ? drawing->n_lines : 0;
            dxf_n[1] = drawing ? drawing->n_arcs : 0;
            dxf_n[2] = drawing ? drawing->n_texts : 0;
            dxf_n[3] = drawing ? drawing->n_points : 0;
            dxf_done = 1;
            ui.io_stage = JW_IO_DXF;
        } else if (ui.io_stage == JW_IO_DXFWRITE && item == 2) {
            ui.io_stage = JW_IO_SAVE;           /* ② 再選択 */
        } else if (ui.io_stage == JW_IO_SAVE && item == 3) {
            /* 3 shinki hozon: write under a name of your own rather than
             * over one from the list. */
            ui.io_stage = dxf_mode == 1 ? JW_IO_DXFNAME : JW_IO_NEWNAME;
            memcpy(ui.save_name, ui.open_name, sizeof ui.open_name);
            ui.save_name[sizeof ui.open_name - 1] = 0;
            /* **The cursor starts in front of the name**, not after it:
             * the original's green block is at column 17, over the `S` of
             * SAMPLE0, and a keystroke goes in before it. */
            ui.save_name_n = 0;
        } else if (ui.io_stage == JW_IO_DXF && (item == 1 || item == 2)) {
            /* ① 保存 and ② 読込 wear 入出力's own ファイル選択 screen with
             * `*.dxf` in it.  保存 is the yellow-on-white line, 読込 the
             * plain one -- which is what JW_IO_SAVE and JW_IO_LOAD give. */
            file_list_ext(item == 1, "DXF");
            jw_ui_pick_kind(&ui, item == 1 ? JW_PICK_DXFOUT : JW_PICK_DXFIN);
            ui.io_stage = item == 1 ? JW_IO_SAVE : JW_IO_LOAD;
            dxf_mode = item;
            dxf_done = 0;
        } else if (ui.io_stage == JW_IO_DXF && item == 3) {
            ui.io_stage = JW_IO_DXFSET;         /* ③ 設定 */
        } else if (ui.io_stage == JW_IO_DXFSET && item == 1) {
            ui.io_stage = JW_IO_DXF;            /* ①変更確定 */
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
        /* ⑤新規図面 answers whether it changes io_stage or not: with an
         * untouched drawing it just empties it and leaves the line alone,
         * and src/item.h's question must not be written over that. */
        if (ui.io_stage == was && ui.ix_del == ixwas && !plot_wanted
            && !(was == 0 && item == 5)
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
        /* 項目を押しても帯の `読取可能データ無` は消えます（測定：
         * 円線接 ④２線 で外したあと ①接円半径 を押すと帯は空）。 */
        cmd.missed = 0;
        box_keep = (cmd.command == 4 || cmd.command == 11) && ui.stage == 1;
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
    if (cmd.command && y >= 0 && y <= 15) {
        /* 上の行の、項目でないところ。図面の押しではありません——
         * 原作はここを押してもサーチをしません（文字の記録に
         * サーチが出ません）。道は動かず、帯に出ていた
         * `読取可能データ無` だけが消えます（測定：円線接 ④２線 で
         * 外した押しのあと、桁 20（マウス指示 の上）を押すと帯は
         * 空になります）。 */
        cmd.missed = 0;
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
        const int was_typing = cmd.typing;
        const int was_moved = cmd.moved;
        const int changed = jw_cmd_press(&cmd, drawing, &view, x, y, right);

        /* 三点指示の弧：読みが外れた押しは何も変えないので、仮の弧は矢について残る（測定：arc_s0_c1_v） */
        if (cmd.missed) {
            cmd.moved = was_moved;
        }

        mouse_x = x;
        mouse_y = y;
        /* 文編集 ②移動・③複写 で文字を拾うと矢はその始点へ跳ぶ。 */
        if (cmd.command == 28 && cmd.te_pick >= 0) {
            mouse_x = cmd.te_mx;
            mouse_y = cmd.te_my;
        }
        /* ＋・／ の欄を押しで閉じたら、始点があればその場の矢で仮の線と盤
         * （測定：func_all plus_s1_c2）。 */
        if (was_typing && !cmd.typing && cmd.pressed == 1 && drawing
            && (cmd.command == 2 || cmd.command == 3 || cmd.command == 4)) {
            jw_cmd_track(&cmd, drawing, &view, x, y);
            cmd.moved = 1;
        }
        /* 複線 の 点指示 or 間隔 の欄を押しで閉じたら、その場の矢で仮の複写線を
         * 出す（測定：func_all offset_s1_c1 の (300,250)）。 */
        if (was_typing && !cmd.typing && cmd.command == 5 && cmd.stage == 2) {
            cmd.moved = 1;
        }
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
static int lc_msg_was;

EMSCRIPTEN_KEEPALIVE int jw_key(int key)
{
    /* 線変更：押したあとの最初の鍵で `線`／`円` の札が消える（測定：linechg_s1_c4〜c9）。 */
    if (cmd.command == 24 && cmd.hit_kind && !cmd.lc_keyed) {
        cmd.lc_keyed = 1;
        sync_ui();
        present();
    }
    /* 寸法 ④③角度を選んだ直後の最初の鍵で、行 2 の札が出る（測定：dim_s0_c4_v の `0`）。 */
    if (cmd.dim_arc_quiet && (key == 13 || key == 10 || key == 27)) {
        cmd.dim_arc_quiet = 0;
        sync_ui();
        present();
    }
    /* 寸法 ⑧値変で [Enter] を打つと行と左の盤が描き直される（測定：dim_s0_c8_v）。 */
    if (cmd.command == 14 && cmd.stage == 7 && !cmd.typing && key == 27) {
        cmd.dim8_plain = 1;             /* [ESC] も升の無い数字と同じに数え箱へ（測定：dim_s0_c8） */
        cmd.missed = 0;
        sync_ui();
        present();
        return -1;
    }
    if (cmd.command == 14 && cmd.stage == 7 && cmd.dim8_plain && (key == 13 || key == 10)) {
        cmd.dim8_plain = 0;
        sync_ui();
        present();
        return -1;
    }
    /* 行 2 の `表示範囲 記憶` は**次の鍵で消えます**（測定：[ESC] を
     * 押すと帯だけが消えて、ほかは何も変わりませんでした）。鍵が何も
     * しないときでも画面は書き直します。 */
    if (ui.keep_msg || ui.offset_msg) {
        ui.keep_msg = 0;
        ui.offset_msg = 0;
        present();
    }
    /* `読取可能データ無` は**次の入力イベント**で消えます（decomp：入力待ち root
     * 0x6608 の 0x66a0〜0x672c が `[0xc22]` を見てメッセージ行を塗りつぶす。
     * 外れを再び立てるのはそのキーの処理）。以前は [ESC] だけで消していた。 */
    if (cmd.lyr_only && key == 8) {
        cmd.lyr_only = 0;
        sync_ui();
        present();
    }
    if (cmd.missed || cmd.ch_same) {
        /* 次の鍵で外れの札は消える。その鍵が何もしなくても描き直す（測定：escfz_r_26）。 */
        cmd.missed = 0;
        cmd.ch_same = 0;
        sync_ui();
        present();
    }
    cmd.missed = 0;
    cmd.ch_same = 0;
    lc_msg_was = cmd.lc_msg;
    cmd.lc_msg = 0;             /* 線変更の `線 変更` は次の鍵で消える（測定：linechg_s1_c4） */
    /* 点 ②距離の欄でも命令の頭文字の鍵は命令を替える（decomp：欄の読み 0xad:16d4 は [0x158] を立てて
     * 全段から抜ける。測定：probe_pdist2 pf_h の `abc` → c で移動）。 */
    if (cmd.command == 22 && cmd.pt_mode == 2 && cmd.pt2 == 1 && cmd.typing
        && ((key >= 'a' && key <= 'z') || (key >= 'A' && key <= 'Z'))
        && jw_ui_key_command(key)) {
        cmd.typing = 0;
        cmd.typed_n = 0;
        cmd.pt2 = 0;
    }
    /* 線記号変形で記号を置いた直後の [ESC]：足したものを消し、抜いた指示線を
     * 末尾に戻す（測定：func_all henkei_s0_c4 で 31|16 → 30|13）。一度だけ。 */
    if (key == 27 && kg_undo && cmd.command == 17 && drawing) {
        jwc_ink_settle(drawing);        /* 消した跡は黒の穴になる（測定：henkei_s0_c4 の ESC） */
        while (drawing->n_lines > kg_nl) {
            jwc_remove_line(drawing, drawing->n_lines - 1);
        }
        while (drawing->n_arcs > kg_na) {
            jwc_remove_arc(drawing, drawing->n_arcs - 1);
        }
        while (drawing->n_texts > kg_nt) {
            jwc_remove_text(drawing, drawing->n_texts - 1);
        }
        while (drawing->n_points > kg_np) {
            jwc_remove_point(drawing, drawing->n_points - 1);
        }
        if (jwc_add_line(drawing, kg_line.x0, kg_line.y0, kg_line.x1,
                         kg_line.y1, kg_line.type, kg_line.pen,
                         kg_line.layer)) {
            drawing->lines[drawing->n_lines - 1] = kg_line;
        }
        kg_undo = 0;
        jw_ui_from(&ui, drawing);
        ui.command = cmd.command;
        sync_ui();
        present();
        return -1;
    }

    /* **①倍率 横,縦 の打鍵。** 図形 (27) の ◆倍率 とまったく同じで、
     * 数が 1 つだけなら縦も同じにします（そちらから持ってきた作法で、
     * 線記号変形で測ったものではありません）。 */
    if (cmd.kigou_mag_ask) {
        if (key == 27) {
            cmd.kigou_mag_ask = 0;
        } else if (key == 13 || key == 10) {
            if (cmd.kigou_mag_n) {
                const char *comma = strchr(cmd.kigou_mag_typed, ',');

                cmd.kigou_mag_x = atof(cmd.kigou_mag_typed);
                cmd.kigou_mag_y = comma ? atof(comma + 1) : cmd.kigou_mag_x;
            }
            cmd.kigou_mag_ask = 0;
        } else if (key == 8) {
            if (cmd.kigou_mag_n > 0) {
                cmd.kigou_mag_typed[--cmd.kigou_mag_n] = 0;
            }
        } else if (((key >= '0' && key <= '9') || key == '.' || key == ','
                    || key == '-')
                   && cmd.kigou_mag_n < (int)sizeof cmd.kigou_mag_typed - 1) {
            cmd.kigou_mag_typed[cmd.kigou_mag_n++] = (char)key;
            cmd.kigou_mag_typed[cmd.kigou_mag_n] = 0;
        }
        sync_ui();
        present();
        return -1;
    }

    /* **文字入力の盤の打鍵。** 打った字が欄に入り、[Enter] でその字を
     * 記号に入れて置きます（実測：`AB` と打って [Enter] で、線が 1 本・
     * 円が 1 つ・文字が 2 つ増えます）。 */
    if (cmd.kigou_input) {
        if (key == 27) {
            cmd.kigou_input = 0;
            cmd.kigou_in_n = 0;
            cmd.kigou_line = -1;
            cmd.kigou_line2 = -1;
            held_on = 0;
            sync_ui();
            present();
            return -1;
        }
        if (key == 8) {
            if (cmd.kigou_in_n > 0) {
                cmd.kigou_in_n--;
                cmd.kigou_in_buf[cmd.kigou_in_n] = 0;
            }
            sync_ui();
            present();
            return -1;
        }
        if (key == 13) {
            kigou_input_done();
            sync_ui();
            present();
            return -1;
        }
        if (key >= 32 && key < 127
            && cmd.kigou_in_n < (int)sizeof cmd.kigou_in_buf - 1) {
            cmd.kigou_in_buf[cmd.kigou_in_n++] = (char)key;
            cmd.kigou_in_buf[cmd.kigou_in_n] = 0;
            sync_ui();
            present();
            return -1;
        }
        return -1;
    }

    /* [f1]/[f2] の道は **[ESC] で電卓の画面へそのまま戻ります**
     * （測定：外したあとの画面は 電卓 を開いた直後と 0 画素差）。 */
    if ((ui.calc_place || ui.calc_get) && key == 27) {
        ui.calc_place = 0;
        ui.calc_get = 0;
        ui.calc_miss = 0;
        present();
        return -1;
    }
    if (ui.calc && key == JW_KEY_F2 && !ui.calc_place && !ui.calc_get) {
        /* [f2]数値取得。図面の文字を選ぶと、その数が欄に入ります。 */
        ui.calc_get = 1;
        ui.calc_miss = 0;
        present();
        return -1;
    }
    if (ui.calc && key == JW_KEY_F1 && !ui.calc_place) {
        /* [f1]計算結果表示。押したところに答えを文字として入れます。 */
        ui.calc_place = 1;
        present();
        return -1;
    }
    /* 電卓の [F6]〜[F10]。**度**で計算します（測定：30[F9] が 0.5、
     * 9[F7] が 3、2[F6]3＝ が 8）。 */
    if (ui.calc && key >= JW_KEY_F1 && key <= JW_KEY_F10) {
        const double d2r = 3.14159265358979323846 / 180.0;
        const double v = atof(calc_entry);

        if (key == JW_KEY_F1 + 5) {         /* [F6] べき乗 */
            calc_acc = calc_apply(calc_acc, calc_op,
                                  calc_fresh ? calc_acc : v);
            calc_op = '^';
            calc_pend_set(calc_acc);
            ui.calc_op = '^';
            strcpy(calc_entry, "0");
            calc_fresh = 1;
        } else if (key == JW_KEY_F1 + 6) {  /* [F7] ﾙｰﾄ */
            calc_acc = v > 0.0 ? sqrt(v) : 0.0;
            calc_op = 0;
            calc_pend_set(calc_acc);
            ui.calc_op = 0;
            strcpy(calc_entry, "0");
            calc_fresh = 1;
        } else if (key == JW_KEY_F1 + 7) {  /* [F8] COS */
            calc_acc = cos(v * d2r);
            calc_op = 0;
            calc_pend_set(calc_acc);
            ui.calc_op = 0;
            strcpy(calc_entry, "0");
            calc_fresh = 1;
        } else if (key == JW_KEY_F1 + 8) {  /* [F9] SIN */
            calc_acc = sin(v * d2r);
            calc_op = 0;
            calc_pend_set(calc_acc);
            ui.calc_op = 0;
            strcpy(calc_entry, "0");
            calc_fresh = 1;
        } else if (key == JW_KEY_F10) {     /* [F10] ATAN */
            calc_acc = atan(v) / d2r;
            calc_op = 0;
            calc_pend_set(calc_acc);
            ui.calc_op = 0;
            strcpy(calc_entry, "0");
            calc_fresh = 1;
        } else {
            return 0;
        }
        calc_show();
        present();
        return -1;
    }
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
    if (ui.command == 30
        && (ui.io_stage == JW_IO_NEWNAME || ui.io_stage == JW_IO_DXFNAME)) {
        const int dxf = ui.io_stage == JW_IO_DXFNAME;

        if (key == 27) {
            ui.io_stage = JW_IO_SAVE;
            ui.save_name_n = 0;
        } else if (key == 13 || key == 10) {
            if (ui.save_name[0]) {
                /* ⑥ＤＸＦ has no ◆ｍｅｍｏ入力: [Enter] asks straight away
                 * whether to write. */
                ui.io_stage = dxf ? JW_IO_DXFWRITE : JW_IO_MEMO;
                ui.memo_row = 0;
            }
        } else if (key == 8) {
            if (ui.save_name_n > 0) ui.save_name[--ui.save_name_n] = 0;
        } else if (key > ' ' && key < 127) {
            /* **The cursor is at the front.**  The field comes up with the
             * drawing in hand in it and a keystroke goes in before that,
             * not after: measured on the original, `X` over `SAMPLE0` gives
             * `XSAMPLE0` and `ABC` gives `ABCSAMPLE0` -- ten characters,
             * so it does not stop at eight either. */
            /* **The field holds twelve and the last one falls off**, not
             * the one being typed: MYWORK over SAMPLE0 comes out
             * `MYWORKSAMPLE` on the original, with the `0` gone. */
            char rest[16];
            const int n = ui.save_name_n;

            memcpy(rest, ui.save_name + n, sizeof rest - 1);
            rest[sizeof rest - 1] = 0;
            ui.save_name[n] = (char)toupper(key);
            memcpy(ui.save_name + n + 1, rest,
                   sizeof ui.save_name - (size_t)n - 2);
            ui.save_name[sizeof ui.save_name - 1] = 0;
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
    /* ④自動保存's field. */
    if (auto_edit) {
        if (key == 27) {
            auto_edit = 0;
        } else if (key == 13 || key == 10) {
            if (auto_typed[0]) {
                if (auto_edit == 1) auto_interval = atoi(auto_typed);
                else if (auto_edit == 4) auto_wait = atoi(auto_typed);
                else if (auto_edit == 2) {
                    memcpy(auto_name, auto_typed, sizeof auto_name - 1);
                    auto_name[sizeof auto_name - 1] = 0;
                } else {
                    memcpy(auto_path, auto_typed, sizeof auto_path - 1);
                    auto_path[sizeof auto_path - 1] = 0;
                }
            }
            auto_edit = 0;
        } else if (key == 8) {
            if (auto_typed_n > 0) auto_typed[--auto_typed_n] = 0;
        } else if (key > ' ' && key < 127
                   && auto_typed_n < (int)sizeof auto_typed - 2) {
            /* in front of what is there, the way the name field does it */
            char rest[16];
            const int n = auto_typed_n;

            memcpy(rest, auto_typed + n, sizeof rest - 1);
            rest[sizeof rest - 1] = 0;
            auto_typed[n] = (char)toupper(key);
            memcpy(auto_typed + n + 1, rest,
                   sizeof auto_typed - (size_t)n - 2);
            auto_typed[sizeof auto_typed - 1] = 0;
            auto_typed_n = n + 1;
        }
        present();
        return -1;
    }
    /* 寸法 ⑨設定's field. */
    if (dim_edit) {
        if (key == 27) {
            dim_edit = 0;
        } else if (key == 13 || key == 10) {
            if (dim_typed_n) {
                const double val = atof(dim_typed);

                if (dim_edit == 6) dim_pen_line = (int)val;
                else if (dim_edit == 8) dim_pen_point = (int)val;
                else if (dim_edit == 10) dim_gap = val;
                else if (dim_edit == 12) dim_ext = val;
                else if (dim_edit == 14) dim_arrow = val;
                else dim_angle = val;
            }
            dim_edit = 0;
        } else if (key == 8) {
            if (dim_typed_n > 0) dim_typed[--dim_typed_n] = 0;
        } else if (key > ' ' && key < 127
                   && dim_typed_n < (int)sizeof dim_typed - 1) {
            dim_typed[dim_typed_n++] = (char)key;
            dim_typed[dim_typed_n] = 0;
        }
        present();
        return -1;
    }
    /* 寸法 ⑤寸法値の項目の行での [ESC] は寸法の最初のメニューへ戻る（測定：dim_s0_c5）。 */
    if (ui.command == 14 && ui.top_item == 5 && cmd.stage == 0 && !cmd.typing && key == 27) {
        cmd.top_item = 0;
        cmd.top_right = 0;
        cmd.missed = 0;
        sync_ui();
        present();
        return -1;
    }
    /* 寸法 ⑨設定の盤での [ESC] は ①変更確定 と同じ：盤を下ろして寸法の行へ（測定：dim_s0_c9）。 */
    if (ui.command == 14 && ui.top_item == 9 && key == 27) {
        cmd.top_item = 0;
        cmd.top_right = 0;
        sync_ui();
        present();
        return -1;
    }
    /* 文字 ④設定's field: digits, [Enter] to put it in the drawing and
     * [ESC] to give it up. */
    if (ui.char_edit) {
        if (key == 27) {
            ui.char_edit = 0;
        } else if (key == 13 || key == 10) {
            if (ui.char_edit_n && drawing) {
                const double val = atof(ui.char_edit_typed);
                const int k = ui.char_edit_row;

                if (ui.char_edit == 1) {
                    drawing->text_pen[k] = (short)val;
                } else if (ui.char_edit == 2) {
                    drawing->text_w[k] = (short)(val * 10.0 + 0.5);
                } else if (ui.char_edit == 3) {
                    drawing->text_h[k] = (short)(val * 10.0 + 0.5);
                } else {
                    drawing->text_gap[k] =
                        (short)(val * 10.0 + (val < 0 ? -0.5 : 0.5));
                }
            }
            ui.char_edit = 0;
            if (drawing) {
                jw_ui_from(&ui, drawing);
                ui.command = cmd.command;
                ui.top_item = 4;
            }
        } else if (key == 8) {
            if (ui.char_edit_n > 0) {
                ui.char_edit_typed[--ui.char_edit_n] = 0;
            }
        } else if (key > ' ' && key < 127
                   && ui.char_edit_n < (int)sizeof ui.char_edit_typed - 1) {
            ui.char_edit_typed[ui.char_edit_n++] = (char)key;
            ui.char_edit_typed[ui.char_edit_n] = 0;
        }
        present();
        return -1;
    }
    /* ④設定 の表の [ESC]：表を閉じて命令の行へ（描き直す。測定：func_all
     * text_s0_c4・textedit_s0_c4）。 */
    if ((cmd.command == 13 || cmd.command == 28) && cmd.top_item == 4
        && key == 27) {
        cmd.top_item = 0;
        cmd.top_right = 0;
        if (drawing) {
            jw_ui_from(&ui, drawing);
            ui.command = cmd.command;
            ui.guide = 0;
        }
        sync_ui();
        present();
        return -1;
    }
    if (ui.command == 30 && ui.io_stage == JW_IO_INDEX && key == 27) {
        if (ui.ix_del) {
            ui.ix_del = 0;
        } else {
            ui.io_stage = JW_IO_FILE;
        }
        present();
        return -1;
    }
    /* 多角形 が借りたファイル選択の [ESC]：多角形 の行へ戻る（測定）。 */
    if (ui.io_stage == JW_IO_LOAD && (ui.command == 19 || ui.command == 13)
        && key == 27) {
        /* 文字 の文読込からは 文書 の行ではなく 文字 の行へ（測定：
         * text_s0_c5_v）。 */
        if (ui.command == 13) {
            cmd.top_item = 0;
            cmd.top_right = 0;
        }
        ui.io_stage = 0;
        ui.pick_bad = 0;
        ui.io_name_n = 0;
        ui.io_name[0] = 0;
        jw_ui_pick_kind(&ui, JW_PICK_IO);
        sync_ui();
        present();
        return -1;
    }
    if (ui.io_stage == JW_IO_PICKNAME) {
        if (key == 27) {
            ui.io_stage = JW_IO_LOAD;
        } else if (key == 13 || key == 10) {
            ui.io_stage = JW_IO_LOAD;       /* 無いファイル */
            ui.pick_bad = 1;
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
        if (ui.zoom_stage == 4) {
            /* 倍率指定's field: digits and a point, [Enter] sets the view. */
            if (key == 13 || key == 10) {
                const int was_kept = ui.kept;

                if (ui.zoom_typed_n && drawing) {
                    before_zoom = view;
                    have_before = 1;
                    jw_view_factor(&view, drawing, zoom_x, zoom_y,
                                   atof(ui.zoom_typed));
                }
                /* **And it leaves the original in 入出力**, the way 紙, the
                 * scale, 範囲記憶 and ｵﾌｾｯﾄ do: the item's row goes yellow
                 * and `|①ファイル(L)|②プロッタ(R)|…` goes along the top. */
                jw_ui_from(&ui, drawing);
                ui.command = 30;
                ui.band_kept = 1;   /* 帯の下の図面は消えません */
                ui.kept = was_kept;
                ui.view_scale = view.scale;
                jw_cmd_pick(&cmd, 30);
                present();
                return -1;
            }
            if (key == 8) {
                if (ui.zoom_typed_n > 0) {
                    ui.zoom_typed[--ui.zoom_typed_n] = 0;
                }
                present();
                return -1;
            }
            if (((key >= '0' && key <= '9') || key == '.')
                && ui.zoom_typed_n < 8) {
                ui.zoom_typed[ui.zoom_typed_n++] = (char)key;
                ui.zoom_typed[ui.zoom_typed_n] = 0;
                present();
                return -1;
            }
            return 0;
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
    {
        /* **鍵でも数は動きます。** 曲線 ①ｻｲﾝ曲線 は分割 長さの
         * [Enter] で線が増えるので、押しのときと同じように
         * カウント箱を取り直します（測定：取り直さないと 線数 が
         * 30 のままで 40 画素ずれました）。 */
        const long n0 = drawing ? drawing->n_lines : 0;
        const long a0 = drawing ? drawing->n_arcs : 0;
        const long t0 = drawing ? drawing->n_texts : 0;
        const int was_typing = cmd.typing;
        const int p0 = cmd.pressed;
        const int cf0 = cmd.circ_fix || !cmd.circ_bad;
        const int bf0 = 1;

        if (jw_cmd_key(&cmd, drawing, key)) {
            /* 大きさを決めて置く状態になった [Enter] で、数え箱は 半径=／横= の行になる（測定のみ：escfz_E_73） */
            if ((key == 13 || key == 10) && ((cmd.command == 11 && cmd.circ_fix && !cf0) || (cmd.command == 4 && cmd.box_fix && !bf0))) {
                sync_ui();
                ui.moved = 1;
                present();
                return -1;
            }
            /* 図形：空の領域から [ESC] で範囲を抜けたら枠の左の辺だけ残る（測定のみ：zukei_s0_c2・c5）。 */
            if (key == 27 && cmd.command == 27 && p0 && !cmd.pressed && cmd.zukei_blank == 1) {
                cmd.zukei_blank = 2;
            }
            /* 手書線の [ESC] で一区間戻ると、矢もその始点へ跳ぶ（測定：
             * curve_s1_c5 で矢が (598,300) に）。 */
            /* □ で始点を持ち直したら、数え箱と仮の四角はその場の矢から
             * （測定：box_plain の `横= 5.734`）。 */
            if (key == 27 && (cmd.command == 4 || cmd.command == 2
                              || cmd.command == 3)
                && cmd.pressed == 1 && drawing && mouse_x >= AREA_X0) {
                jw_cmd_track(&cmd, drawing, &view, mouse_x, mouse_y);
            }
            if (key == 27 && cmd.command == 23 && cmd.hand
                && cmd.stage == 61) {
                mouse_x = cmd.hand_sx;
                mouse_y = cmd.hand_sy;
            }
            /* □ ①寸法・○ ①径寸法 の欄を [Enter] で閉じたら、**その場の矢で**
             * 読み直します：本物はすぐ数え箱に 横= 20.000・縦= 30.000 を出し、
             * 赤い四角を矢の所に描く（矢が上の行の上でも。測定）。 */
            /* 矢がメニューの上なら読み直しません（本物は追わない）：数え箱は
             * 線数のまま、四角も矢が作図範囲に来るまで出ません（測定）。 */
            if (was_typing && !cmd.typing && (key == 13 || key == 10)
                && ((cmd.command == 4 && cmd.box_fix)
                    || (cmd.command == 12 && cmd.pressed == 2))) {
                if (mouse_x >= AREA_X0) {
                    jw_cmd_track(&cmd, drawing, &view, band_x, band_y);
                } else if (cmd.command == 4) {
                    circ_fresh = 1;
                }
            }
            /* ○ は違います：欄を閉じても数え箱は線数のまま、円も矢が
             * 動くまで出ません（測定：20 [Enter] で `32|14`）。 */
            if (was_typing && !cmd.typing && (key == 13 || key == 10)
                && cmd.command == 11 && cmd.circ_fix) {
                circ_fresh = 1;
            }
            if (drawing && (drawing->n_lines != n0
                            || drawing->n_arcs != a0
                            || drawing->n_texts != t0)) {
                jw_ui_from(&ui, drawing);
                ui.command = cmd.command;
                ui.guide = 0;
            }
            sync_ui();
            present();
            return -1;
        }
    }
    /* 基準線を聞いているあいだの [Enter] は、矢の所での押しと同じ（測定：
     * ／ の ④平行 で [Enter] を打つと `サーチ` → `.読取可能データ無`）。 */
    if ((cmd.command == 2 || cmd.command == 3) && cmd.ask_kind >= 3
        && !cmd.typing && (key == 13 || key == 10)) {
        /* 矢が作図範囲の外（メニューや上の行）でも探しに行って、何も
         * 無いと言います——メニューを押したことにはなりません（測定：＋ の
         * ④平行 を鍵で出して、矢がメニューの上のまま [Enter] を打つと
         * `基準線 マウス指示` のまま `読取可能データ無`）。 */
        if (mouse_x >= AREA_X0 && mouse_x <= AREA_X1
            && mouse_y >= AREA_Y0 && mouse_y <= AREA_Y1) {
            jw_click(mouse_x, mouse_y, 0);
        } else {
            cmd.missed = 1;
            sync_ui();
            present();
        }
        return -1;
    }
    /* **[Enter] は作図の押し**（欄が開いていないとき）。メニューを押した
     * ことにはならない（測定：（ ②半円 で矢がメニューの上のまま [Enter] →
     * `◆ 終点指示`、func_all の arc_s0_c2_v）。 */
    /* どの命令でもそうなのかは未確認（全部に入れると ○ ③重円 などで本物と
     * 違った——本物はそこで欄を開いている）ので、測った （ の①②③ に限る。 */
    /* 文編集 ⑦消去 も [Enter] は同じ所の押し（測定：func_all
     * textedit_s0_c7_v で 読取可能データ無）。②移動・③複写 では言葉が
     * 出ない（c2_v・c3_v）ので入れていない。 */
    if ((key == 13 || key == 10)
        && ((cmd.command == 12 && (cmd.arc3 || (cmd.pressed == 1 && !cmd.arc_ask)))
            /* 中心を取ったあとの [Enter] は (400,200) の押し（測定：dfz_N_4・
             * N_6・N_21、前回の半径・始点の代わりに画面 (400,200) の点が始点に
             * なり、次の押しが終点）。中心の前の [Enter] は何も起きない。
             * decomp 未確認（FUN_4000_138d の入力、0xc122/0xc124 は座標系の
             * 値で前回の点ではなかった）。 */
            || (cmd.command == 28 && cmd.top_item == 7)
            /* □ ③平行・多角形 ①の A/B 点も点の読みを待つ行：[Enter] は同じ所の押し
             * （測定：box_s0_c5_v・polygon_s0_c1_v）。 */
            || (cmd.command == 4 && cmd.box_refask)
            || (cmd.command == 19 && (cmd.pg1 == 1 || cmd.pg1 == 2)))
        && !cmd.typing && !cmd.typing_text && drawing) {
        /* 取る点は矢ではなく**画面の (400,200)**：矢を作図範囲に入れても、
         * メニューに戻しても、図面を替えても、先に押してからでも同じ
         * （測定：tools/cases/probe_enter.txt の 7 件）。鍵盤で動かす矢の
         * 初めの位置と読んでいる——矢印鍵で動かす所は移していない。 */
        const int changed = jw_cmd_press(&cmd, drawing, &view, 400, 200, 0);

        if (changed) {
            jw_ui_from(&ui, drawing);
            ui.command = cmd.command;
            ui.guide = 0;
        }
        sync_ui();
        present();
        return -1;
    }
    /* **数字の鍵は上の行の升。** `1` は ① を左で押したのと同じ（測定：
     * □ で `1` → ①寸法 の欄、そのまま 60,40 [Enter] で置く所）。欄が
     * 開いているあいだは上の jw_cmd_key が数として取っています。 */
    /* 文字 ⑤文書 の ②読込・③短文ﾌｧｲﾙ設定：`*.txt` の ファイル選択（文読込）。
     * 選んだあと（読む）はまだ。 */
    if (cmd.command == 13 && cmd.top_item == 5 && !cmd.tx_doc && !ui.io_stage
        && (key == '2' || key == '3') && !cmd.typing && !cmd.typing_text) {
        file_pick(JW_PICK_TEXTIN);
        present();
        return -1;
    }
    /* 文字・文編集 ④設定 の表の数字：① 変更確定（表を閉じる）、② 基点変更
     * （文字基準点 の盤、① で表に戻る）、③ ＦＥＰ は ON → off (1) →
     * off (2) → ON（測定：steps_table `13 t 4 t 3 t 3 t 3 t 3 t 2 t 1 t 1`）。
     * ほかの数字は何もしない（func_all text_s0_c4_v の `0`）。 */
    if ((cmd.command == 13 || cmd.command == 28) && cmd.top_item == 4
        && !ui.char_edit && ((key >= '0' && key <= '9') || key == 13
                             || key == 10)) {
        /* [Enter] は ① 変更確定 と同じ（測定：text_s0_c4_v）。 */
        const int n = (key == 13 || key == 10) ? 1
                                               : key - '0';

        if (cmd.te_sub == 1) {
            jw_cmd_te_digit(&cmd, n);
        } else if (n == 1) {
            cmd.top_item = 0;
            cmd.top_right = 0;
            if (drawing) {
                jw_ui_from(&ui, drawing);
                ui.command = cmd.command;
                ui.guide = 0;
            }
        } else if (n == 2) {
            cmd.te_sub = 1;
        } else if (n == 3) {
            cmd.fep = (cmd.fep + 1) % 3;
        }
        sync_ui();
        present();
        return -1;
    }
    /* 文編集【変更】の行の数字はその行の升（①基点・②文連結切断・③疑似線
     * 文字）で、項目の行の升ではない（測定：func_all textedit_s1_c1〜c3）。
     * 文字 band2（点を置いたあとの「基点指示…|①基点変|②行連続|③列連続|…」）
     * の①基点変も同じ 文字基準点 の盤（kp8）を共有するので、jw_cmd_te_digit
     * へ同じ道で渡す（実機確認：tools/probe.sh 13 400 140 t A e t 1。
     * jw_cmd_te_digit 側で②③を command==28 専用に絞ってあるので、文字の
     * ②行連続・③列連続は奪われず cmd_top の既存実装（decomp/実機照合済み）
     * のまま通る）。 */
    if ((cmd.command == 28 || cmd.command == 13) && key >= '0' && key <= '9'
        && !cmd.typing && !cmd.typing_text
        && jw_cmd_te_digit(&cmd, key - '0')) {
        sync_ui();
        present();
        return -1;
    }
    /* 範囲を取る命令の最初の行・追加除外の行で [Enter] は ① と同じ（測定：move_s0_c1_v・
     * erase_s0_c2_v など。decomp：項目の読み 1bb4:2cb4 は Enter を 0xd で返し、共有の範囲取り
     * （ovl5）はそれを ①前範囲／①範囲確定 として扱う——範囲取り側の分岐は未照合）。 */
    /* 変形 ③複線化 の始点の行の [Enter] も ①前範囲（測定：henkei_s0_c3_v）。項目の行の升は
     * 押さない（①パラメトリック変形 の升が押されてしまう）。 */
    if ((key == 13 || key == 10) && cmd.command == 17 && cmd.hen_dbl && !cmd.pressed
        && !cmd.typing && !cmd.typing_text && drawing) {
        jw_cmd_top(&cmd, drawing, 1, 0);
        sync_ui();
        present();
        return -1;
    }
    /* 円線接・線消 の途中の [Enter] は、矢の今の位置の左押しと同じ（測定のみ・decomp 未確認：tmp の en1・en3・en9）。 */
    if ((key == 13 || key == 10) && ((cmd.command == 26 && cmd.stage == 16) || (cmd.command == 10 && cmd.stage >= 2)) && !cmd.typing
        && !cmd.typing_text && drawing && cmd.stage >= 1 && mouse_x >= AREA_X0 && mouse_y >= AREA_Y0) {
        return jw_click(mouse_x, mouse_y, 0);
    }
    if ((key == 13 || key == 10) && cmd.command != 17 && (JW_RANGE(&cmd) || (cmd.command == 24 && cmd.top_item == 3)
         || (cmd.command == 25 && cmd.span))
        && !cmd.typing && !cmd.typing_text
        && (cmd.pressed == 0 || cmd.pressed == 2) && !cmd.te5
        && !(JW_MOVE_CMD(cmd.command) && cmd.stage >= 4)
        && !(cmd.command == 27 && cmd.top_item == 4)) {      /* 複写・移動 の 位置を聞く段などでは [Enter] は何もしない（測定：escfz_c_2） */
        key = '1';
    }
    /* 図形 の最初の行の [9] は何もしない（測定のみ：zukei_s0_c9。<他図面> の升は鍵では選べない）。 */
    if (cmd.command == 27 && key == '9' && !cmd.typing && !cmd.zukei && !cmd.top_item && !cmd.pressed) {
        /* 無効キーではなく全面再描画で、消えていた札が戻る（decomp ovl31 2a6c、実機確認） */
        cmd.zukei_plain = 0;
        sync_ui();
        present();
        return 0;
    }
    if (cmd.command && key >= '1' && key <= '9' && !cmd.typing
        && !cmd.typing_text) {
        const int x = jw_ui_top_cell_x(key - '0');

        /* □ の `④基点変 □` の □ は字の無い ⑤ の升（測定：box_s1_c5）。
         * ＋ の `④ 平行・垂直` の 垂直 も ⑤（測定：plus_s1_c5 で基準線を
         * 聞く行へ）。 */
        if (x < 0 && key == '5' && cmd.pressed == 1
            && (cmd.command == 4 || cmd.command == 2)) {
            jw_cmd_top(&cmd, drawing, 5, 0);
            sync_ui();
            present();
            return -1;
        }
        if (x >= 0) {
            /* 鍵で押しても矢は動きません（本物の矢は元の所のまま）。 */
            const int mx = mouse_x, my = mouse_y;

            jw_click(x, 8, 0);
            mouse_x = mx;
            mouse_y = my;
            sync_ui();
            present();
            return -1;
        }
    }
    pick = jw_ui_key_command(key);

    /* 升の無い数字は何もしないが、本物は行と左の盤を描き直す。始点を持った
     * ＋・／・□・○ では盤が 長= 0.000 角度= 0.000° などになる（測定：func_all
     * plus_s1_c9 の `9`）。 */
    /* ハッチ 最初の行の数字は 残数 を消す（測定：func_all hatch_s0_c1〜）。
     * 枠を取り始めてからの数字は ①自動選択 など（まだ）。 */
    if (cmd.command == 18 && !cmd.hatch_closed && key >= '0' && key <= '9'
        && !(key == '1' && cmd.hatch_n >= 2) && !cmd.typing
        && jw_cmd_key(&cmd, drawing, key)) {
        sync_ui();
        present();
        return -1;
    }
    /* 文字 ⑤文書 の書出範囲：追加･除外 の段の ① は 範囲確定。 */
    if (cmd.command == 13 && cmd.tx_doc && key >= '0' && key <= '9'
        && !cmd.typing) {
        if (key == '1' && cmd.pressed == 2 && cmd.stage == 3) {
            cmd.stage = 2;
        }
        sync_ui();
        present();
        return -1;
    }
    /* 寸法 ⑧値変：升の無い数字は左の盤が数え箱に戻る（測定：dim_s0_c8_v の `type 30`）。 */
    if (!pick && key >= '0' && key <= '9' && cmd.command == 14 && cmd.stage == 7
        && !cmd.typing && !cmd.typing_text) {
        cmd.dim8_plain = 1;
        sync_ui();
        present();
        return 0;
    }
    /* 文字：升の無い数字は行を描き直し、左の盤は数え箱に戻る（測定：
     * func_all text_s0_c7 の `7`）。 */
    if (!pick && key >= '0' && key <= '9' && cmd.command == 13
        && !cmd.typing && !cmd.typing_text) {
        cmd.tx_plain = 1;
        sync_ui();
        present();
        return 0;
    }
    if (!pick && (key == 13 || key == 10) && cmd.command == 12 && cmd.pressed >= 1 && !cmd.moved && !cmd.typing) {
        /* 円弧 の途中の [Enter] も数え箱を段の行へ描き直す（測定のみ：escfz_N_94）。
         * この分岐は !cmd.moved（このループではまだ矢が動いていない）のときだけ
         * 通るので、生の mouse_x/mouse_y をそのまま使うと直前に押した点と同じ
         * 位置になり、角度が必ず 0.000 度になってしまう（押した点との差が
         * 0 だから）。本物はこの段の矢がまだ動いていないときは既定の画面位置
         * (400,200) から角度を計算する（nokori.md 「まだ直していない」節、
         * 測定：escfz_N_94 相当の手順で 13.393 度。decomp 未確認・測定のみ）。 */
        if (drawing) {
            jw_cmd_track(&cmd, drawing, &view, 400, 200);
        }
        sync_ui();
        ui.moved = 1;
        present();
        return 0;
    }
    if (!pick && ((key >= '0' && key <= '9') || key == 8) && cmd.pressed == 1 && !cmd.moved
        && (cmd.command == 2 || cmd.command == 3 || cmd.command == 4
            || cmd.command == 11)) {
        sync_ui();
        ui.moved = 1;           /* 盤だけ。帯（仮の線）は矢が動くまで出ない */
        present();
        return 0;
    }

    if (!pick) {
        /* [ESC] は何もしない命令でも `読取可能データ無` を消すので書き直す
         * （測定：func_all chamfer_s0_c2_v の最後の [ESC]）。 */
        if (key == 27 || lc_msg_was) {
            sync_ui();
            present();
        }
        return 0;
    }
    ui.command = pick;
    ui.guide = 0;
    ui.stage = 0;
    ui.missed = 0;
    hand_abandon();
    jw_cmd_pick(&cmd, pick);
    /* 升の行は新しいコマンドでは消える（前のコマンドの top_item が残ると
     * 別のコマンドの src/item.h の行が出る。測定：文字 ③ のあと `AB` で
     * □ に替わると本物は `・□ 始点指示…`）。 */
    ui.top_item = cmd.top_item;
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
