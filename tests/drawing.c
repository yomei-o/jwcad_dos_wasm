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
#include "read.h"
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

/* 文編集's `|種 N|Paste`: the character type of the text it has in hand. */
static int edit_type(const JwCmd *c, const Jwc *d)
{
    if (c->command == 28 && d && c->edit_text >= 0 && c->edit_text < d->n_texts) {
        return d->texts[c->edit_text].size;
    }
    return 0;
}

int main(int argc, char **argv)
{
    /* -u: the whole screen, the frame around the drawing as well, so it can be
     * compared with the original's picture with nothing masked out.
     * -c N: and with menu item N picked, the way a click leaves it. */
    int ui = 0, original = 0, command = 0, a = 1;
    const char *write_to = NULL;        /* -w: save the drawing when it is done */
    int mods = 0;                       /* -M: which modifier keys are held */
    int mx = 200, my = 200;     /* where the original leaves the pointer */
    int press[8][3], n_press = 0, stage = 0;
    int zoom[4] = { 0, 0, 0, 0 }, zoomed = 0;
    int zoom_stage = 0;
    int zoom_at[2] = { 0, 0 };
    int actual[2] = { 0, 0 }, actualed = 0;
    double num[2] = { 0.0, 0.0 };
    int dec[2] = { 3, 3 };
    /* Zeroed before the first jw_cmd_pick: the command state owns a little
     * memory now (what 複写 and 移動 pick out of a range) and pick() frees
     * what was there. */
    JwCmd c = { 0 };
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
        } else if (strcmp(argv[a], "-f") == 0 && a + 1 < argc && n_press < 8) {
            /* [F1] to [F5], at this point in the sequence */
            press[n_press][0] = -3;
            press[n_press][1] = atoi(argv[a + 1]);
            press[n_press][2] = 0;
            n_press++;
            a += 2;
        } else if (strcmp(argv[a], "-H") == 0 && a + 1 < argc && n_press < 8) {
            /* The same as -K, but the bytes given as hex.  Japanese text is
             * Shift-JIS, which is not valid UTF-8, and a Windows argv does not
             * carry those bytes through -- `82 A0` comes out as a question
             * mark.  So `-H 82A082A2` is 「あい」 with nothing in between to
             * mangle it. */
            press[n_press][0] = -8;
            press[n_press][1] = a + 1;
            press[n_press][2] = 0;
            n_press++;
            a += 2;
        } else if (strcmp(argv[a], "-h") == 0 && a + 1 < argc && n_press < 8) {
            press[n_press][0] = -9;     /* ... and with the [Enter] */
            press[n_press][1] = a + 1;
            press[n_press][2] = 0;
            n_press++;
            a += 2;
        } else if (strcmp(argv[a], "-K") == 0 && a + 1 < argc && n_press < 8) {
            /* the same, but without the [Enter] -- the field still open */
            press[n_press][0] = -2;
            press[n_press][1] = a + 1;
            press[n_press][2] = 0;
            n_press++;
            a += 2;
        } else if (strcmp(argv[a], "-k") == 0 && a + 1 < argc && n_press < 8) {
            /* Keys, at this point in the sequence: a command asking for a
             * number takes them, and [Enter] is added at the end because that
             * is what ends the field.  複線 needs this between its two presses
             * (RESUME.md 4.12). */
            press[n_press][0] = -1;
            press[n_press][1] = a + 1;
            press[n_press][2] = 0;
            n_press++;
            a += 2;
        } else if (strcmp(argv[a], "-x") == 0 && n_press < 8) {
            /* [ESC], at this point in the sequence: it throws away the point
             * the command has in hand.  Its own option because the key is not
             * something a shell can pass in a string. */
            press[n_press][0] = -5;
            press[n_press][1] = 0;
            press[n_press][2] = 0;
            n_press++;
            a += 1;
        } else if (strcmp(argv[a], "-t") == 0 && a + 1 < argc && n_press < 8) {
            /* a press on the top line, which is a menu of its own.  It takes
             * its turn in the sequence like the others, because a command can
             * go back and forth between the two (複線's 間隔取得 is picked up
             * there and then asks for two presses in the drawing). */
            press[n_press][0] = -4;
            press[n_press][1] = atoi(argv[a + 1]);
            press[n_press][2] = 0;
            n_press++;
            a += 2;
        } else if (strcmp(argv[a], "-C") == 0 && a + 1 < argc && n_press < 8) {
            /* Pick another item **at this point** in the sequence, the way a
             * hand does: 円周1/4点 has to be measured on a circle drawn with
             * the pen and line type being written, and no drawing that ships
             * has one, so the circle is drawn with ○ first and then the item
             * that reads it is picked.  -c says which item to start in; this
             * says when to change. */
            press[n_press][0] = -6;
            press[n_press][1] = atoi(argv[a + 1]);
            press[n_press][2] = 0;
            n_press++;
            a += 2;
        } else if (strcmp(argv[a], "-M") == 0 && a + 1 < argc && n_press < 8) {
            /* Which modifier keys are held from this point in the sequence
             * on, as a word: `shift`, `ctrl`, `alt`, or `none` to let them go.
             * It takes its turn like a press, because a key goes down and up
             * around one: the original reads them at the press itself, and the
             * words in the band follow them while the pointer moves
             * (src/read.h). */
            press[n_press][0] = -7;
            press[n_press][1] =
                  (strstr(argv[a + 1], "shift") ? JW_MOD_SHIFT : 0)
                | (strstr(argv[a + 1], "ctrl") ? JW_MOD_CTRL : 0)
                | ((strstr(argv[a + 1], "alt")
                    || strstr(argv[a + 1], "grph")) ? JW_MOD_GRPH : 0);
            press[n_press][2] = 0;
            n_press++;
            a += 2;
        } else if (strcmp(argv[a], "-S") == 0 && a + 3 < argc) {
            /* which step of ■拡大■ the chrome should show, and the corner it
             * already has */
            zoom_stage = atoi(argv[a + 1]);
            zoom_at[0] = atoi(argv[a + 2]);
            zoom_at[1] = atoi(argv[a + 3]);
            a += 4;
        } else if (strcmp(argv[a], "-A") == 0 && a + 2 < argc) {
            /* 倍率指定 の右押し: 原寸でその点を中心に */
            actual[0] = atoi(argv[a + 1]);
            actual[1] = atoi(argv[a + 2]);
            actualed = 1;
            a += 3;
        } else if (strcmp(argv[a], "-Z") == 0 && a + 4 < argc) {
            /* zoom to that screen rectangle before anything else is drawn */
            zoom[0] = atoi(argv[a + 1]);
            zoom[1] = atoi(argv[a + 2]);
            zoom[2] = atoi(argv[a + 3]);
            zoom[3] = atoi(argv[a + 4]);
            zoomed = 1;
            a += 5;
        } else if (strcmp(argv[a], "-w") == 0 && a + 1 < argc) {
            /* Write the drawing out when the presses are done, the way the
             * original's 入出力 → ﾌｧｲﾙ → 保存 does.  tools/savecheck.sh then
             * opens what came out in the original and compares the screens. */
            write_to = argv[a + 1];
            a += 2;
        } else if (strcmp(argv[a], "-c") == 0 && a + 1 < argc) {
            command = atoi(argv[a + 1]);
            ui = original = 1;
            a += 2;
        } else {
            fprintf(stderr, "usage: drawing [-o|-u] [-c N] [-m X Y] [-p|-r X Y]"
                            " [-k|-K KEYS] [-h|-H HEX] [-f N] [-t X]"
                            " [-w OUT.JWC]"
                            " IN.JWC OUT\n");
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
    if (zoomed) {
        jw_view_zoom(&w, zoom[0], zoom[1], zoom[2], zoom[3]);
    }
    if (actualed) {
        jw_view_actual(&w, d, actual[0], actual[1]);
    }
    /* -p: presses in the drawing area, before anything is drawn -- a command
     * changes the drawing, and the screen shows what came out. */
    jw_cmd_pick(&c, command);
    if (n_press) {
        for (i = 0; i < n_press; i++) {
            if (press[i][0] == -4) {            /* -t: the top line */
                /* Which item that is depends on the line the chrome has
                 * written, so the chrome is drawn once first; jw_view_draw
                 * clears the screen below, so nothing of it survives. */
                JwUi t;

                jw_ui_from(&t, d);
                t.command = command;
                t.guide = 0;
                t.stage = c.stage;
                memcpy(t.typed, c.typed, sizeof t.typed);
                t.typed_n = c.typed_n;
                t.typed_at = c.typed_at;
                t.edit_type = edit_type(&c, d);
                t.poly_deg = c.poly_deg;
                t.mirror = c.mirror;
                t.rotate = c.rotate;
                t.rot_deg = c.rot_deg;
                t.dim_value = c.dim_value;
                t.dim_texts = c.dim_texts;
                t.dim_w = d ? d->text_w[JW_DIM_SIZE] / 10.0 : 0.0;
                t.dim_h = d ? d->text_h[JW_DIM_SIZE] / 10.0 : 0.0;
                t.hatch_n = c.hatch_n;
                t.hatch_angle = c.hatch_angle;
                t.hatch_pitch = c.hatch_pitch;
                t.num[0] = c.num[0];
                t.num[1] = c.num[1];
                t.dec[0] = c.dec[0];
                t.dec[1] = c.dec[1];
                t.snap = 0;
                t.missed = c.missed;
                t.outside = c.outside;
                t.escaped = c.escaped;
                t.span = c.span;
                t.with_text = c.with_text;
                t.moved = c.moved;
                t.hit_kind = c.hit_kind;
                t.cutting = c.cutting;
                t.divisions = c.divisions;
                t.meas_total = c.meas_total;
                t.meas_last = c.meas_last;
                t.temp_left = JWC_TEMP_MAX - (d ? d->n_temp : 0);
                t.typing_text = c.typing_text;
                jw_ui_draw(&v, &t);
                jw_cmd_top(&c, d, jw_ui_top_item(press[i][1], 8));
                continue;
            }
            if (press[i][0] == -7) {            /* -M: the keys */
                mods = press[i][1];
                continue;
            }
            if (press[i][0] == -6) {            /* -C: another item */
                command = press[i][1];
                jw_cmd_pick(&c, command);
                continue;
            }
            if (press[i][0] == -5) {            /* -x: [ESC] */
                jw_cmd_key(&c, d, 27);
                continue;
            }
            if (press[i][0] == -3) {            /* -f: a function key */
                jw_cmd_key(&c, d, JW_KEY_F1 + press[i][1] - 1);
                continue;
            }
            if (press[i][0] == -8 || press[i][0] == -9) {   /* -H / -h: hex */
                const char *k = argv[press[i][1]];
                int hi = -1;

                for (; *k; k++) {
                    const char *d16 = strchr("0123456789abcdef", *k | 0x20);

                    if (!d16 || !*k) {
                        continue;
                    }
                    if (hi < 0) {
                        hi = (int)(d16 - "0123456789abcdef");
                    } else {
                        jw_cmd_key(&c, d,
                                   hi * 16 + (int)(d16 - "0123456789abcdef"));
                        hi = -1;
                    }
                }
                if (press[i][0] == -9) {
                    jw_cmd_key(&c, d, 13);
                }
                continue;
            }
            if (press[i][0] < 0) {              /* -k / -K: keys */
                const char *k = argv[press[i][1]];

                for (; *k; k++) {
                    jw_cmd_key(&c, d, (unsigned char)*k);
                }
                if (press[i][0] == -1) {        /* -k ends with [Enter] */
                    jw_cmd_key(&c, d, 13);
                }
                continue;
            }
            c.mods = mods;
            jw_cmd_press(&c, d, &w, press[i][0], press[i][1], press[i][2]);
        }
    }
    /* the pointer is where it is, and a command in hand keeps its reading up
     * to date as it moves */
    jw_cmd_track(&c, d, &w, mx, my);
    if (write_to && !jwc_save(d, write_to, &why)) {
        fprintf(stderr, "%s: %s\n", write_to, why);
        return 1;
    }
    stage = c.stage;
    num[0] = c.num[0];
    num[1] = c.num[1];
    dec[0] = c.dec[0];
    dec[1] = c.dec[1];
    /* The drawing first: jw_view_draw clears the screen before it starts, the
     * way the original does when it opens a file.  The frame goes on after and
     * the pointer, which is exclusive-or, last of all. */
    jw_view_draw(&v, d, &w);
    if (ui) {
        JwUi s;

        jw_ui_from(&s, d);
        s.view_scale = w.scale;
        s.zoom_stage = zoom_stage;
        s.guide = (zoomed || actualed || zoom_stage) ? 0 : jw_ui_guide();   /* a zoom repaints, and the
                                              * opening message goes */
        s.command = command;
        s.stage = stage;
        memcpy(s.typed, c.typed, sizeof s.typed);
        s.typed_n = c.typed_n;
        s.typed_at = c.typed_at;
        s.edit_type = edit_type(&c, d);
        s.poly_deg = c.poly_deg;
        s.mirror = c.mirror;
        s.rotate = c.rotate;
        s.rot_deg = c.rot_deg;
        s.dim_value = c.dim_value;
        s.dim_texts = c.dim_texts;
        s.dim_w = d ? d->text_w[JW_DIM_SIZE] / 10.0 : 0.0;
        s.dim_h = d ? d->text_h[JW_DIM_SIZE] / 10.0 : 0.0;
        s.hatch_n = c.hatch_n;
        s.hatch_angle = c.hatch_angle;
        s.hatch_pitch = c.hatch_pitch;
        s.num[0] = num[0];
        s.num[1] = num[1];
        s.dec[0] = dec[0];
        s.dec[1] = dec[1];
        /* the two words about the right button are there while the pointer is
         * over the drawing */
        s.snap = mx >= 122 && mx <= 638 && my >= 17 && my <= 462;
        s.mods = mods;
        s.snapping = c.snap;
        s.missed = c.missed;
        s.outside = c.outside;
        s.escaped = c.escaped;
        s.span = c.span;
        s.with_text = c.with_text;
        s.moved = c.moved;
        s.hit_kind = c.hit_kind;
        s.cutting = c.cutting;
        s.divisions = c.divisions;
        s.meas_total = c.meas_total;
        s.meas_last = c.meas_last;
        s.temp_left = JWC_TEMP_MAX - (d ? d->n_temp : 0);
        s.typing_text = c.typing_text;
        if (command) {
            /* the line of guidance goes the moment anything is picked */
            s.guide = 0;
        }
        jw_ui_draw(&v, &s);
        /* what the range picked, and what 複写 has made since -- both over the
         * finished screen, which is the order the original draws them in (see
         * jw_cmd_after) */
        jw_cmd_marked(&c, &v, d, &w);
        jw_cmd_after(&c, &v, d, &w);
        /* the line a half-finished command drags, then the pointer -- both
         * exclusive-or, and both after everything else */
        jw_cmd_band(&c, &v, &w, mx, my);
        if (zoom_stage == 2) {
            jw_ui_zoom_band(&v, zoom_at[0], zoom_at[1], mx, my);
        }
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
