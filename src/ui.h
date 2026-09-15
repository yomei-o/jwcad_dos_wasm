/* The screen around the drawing: the title bar, the left panel with its menu,
 * the layer buttons and the strip along the bottom.
 *
 * None of it is invented.  The original builds the whole thing out of three
 * primitives -- a filled rectangle, a line and a string drawn on a character
 * grid -- and every call it makes for the startup screen was read out of it:
 *
 *     DOSEMU_BP=11B9:07DC            the line routine, 20a9:07dc
 *     DOSEMU_BP=0EFF:23C5 DOSEMU_BPSTR=2   the string routine, 1def:23c5
 *
 * The string routine takes a **character cell**, one-based: column times eight
 * pixels across, row times sixteen down.  That is what `jw_ui_text` takes.
 *
 * What the panel shows comes from the drawing and from the program's state,
 * so it is passed in rather than guessed.
 */
#ifndef JW_UI_H
#define JW_UI_H

#include "vga.h"

typedef struct {
    long n_lines;               /* the two counts at the top left */
    long n_arcs;
    int pen;                    /* `Pen.2` */
    const char *paper;          /* `A-3` */
    long scale_denom;           /* `S=1/100` */
    int group;                  /* the layer group the buttons show */
    unsigned char layer_on[16]; /* which of its sixteen layers are shown */
    int layer;                  /* the one being written to, highlighted */
    double zoom;                /* 表示倍率, the number on the bottom strip */
    const char *guide;          /* the line of guidance, or NULL */
} JwUi;

/* Fill it in the way the original comes up with no drawing loaded. */
void jw_ui_default(JwUi *s);

/* Draw the whole chrome.  The drawing area (122,17)-(638,462) is left alone. */
void jw_ui_draw(VGA *v, const JwUi *s);

/* One string on the character grid, as 1def:23c5 does it: `col` and `row` are
 * one-based, a half-width character is eight pixels wide and a full-width one
 * sixteen, and `bg` is painted only where it differs from `fg`. */
void jw_ui_text(VGA *v, int col, int row, unsigned fg, unsigned bg,
                const char *s);

/* The menu, as the original holds it: thirty labels of six bytes, the right
 * column (command 1 to 15) first and the left column (16 to 30) after, and the
 * key that picks each one.  `jw_ui_menu_label(n)` and `jw_ui_menu_key(n)` take
 * the command number the original's own documentation uses -- USER_MNU.DAT
 * says "複写から測定が 1〜15、移動から入出力が16〜30". */
const char *jw_ui_menu_label(int command);
char jw_ui_menu_key(int command);

/* Which command a point in the menu picks, or 0.  The menu is fifteen rows of
 * two columns; the original draws them at rows 5 to 19 of the character grid,
 * the left column from column 2 and the right from column 10. */
int jw_ui_menu_hit(int x, int y);

/* The mouse pointer.  0885:4f03 draws it with the same line routine as
 * everything else, but into planes 1 and 2 only and with the graphics
 * controller set to exclusive-or (0x18), so drawing it a second time takes the
 * screen back exactly as it was.  The shape is eleven rows of a triangle from
 * (x, y) and then five steps of a three-pixel tail; the arrow is pulled up so
 * that it ends no lower than DS:0a60, the bottom of the drawing area. */
void jw_ui_cursor(VGA *v, int x, int y);

#endif
