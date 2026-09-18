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

#include "jwc.h"
#include "vga.h"

typedef struct {
    long n_lines;               /* 線数, the left-hand count */
    long n_arcs;                /* 円ｰ文数 -- the arcs and the texts together */
    int pen;                    /* 1 to 8; `Pen.1` and its colour come from it */
    int line_type;              /* past 8 the label is a style, not a pen */
    int paper;                  /* 0 = A-0 ... 4 = A-4, and on past that */
    double denom;               /* `S=1/100` */
    int command;                /* the menu item picked, 1 to 30, or 0 */
    /* How far into it the command is: 0 just picked, 1 with a point taken,
     * 2 with the thing drawn -- and the two numbers it measured, which for a
     * line are the length and the angle, for a box the two sides, and for a
     * circle the radius and the diameter.  See src/stage.h. */
    int stage;
    /* 複線's number, as it is being typed: the field at column 22 of the top
     * line.  The command keeps it (src/cmd.h) and the front end copies it in
     * with the rest. */
    char typed[48];
    int typed_n;
    double num[2];
    int dec[2];                 /* how many decimals each of them is shown to:
                                 * a length follows the drawing's scale, an
                                 * angle is always three */
    int snap;                   /* the pointer is over the drawing, so the two
                                 * words saying what the right button would
                                 * take *may* be on the screen -- see `mods` */
    /* Which modifier keys are held -- JW_MOD_* from src/read.h.  The words in
     * the band (src/snap.h) are the hint for the *modified* read, and the
     * original puts them up only while one is down: with nothing held the band
     * beside the counts stays black.  Which words they are depends on the key
     * -- 線・円上点 for [SHIFT], 鉛直･/円周点 for [CTRL], 中心点・Ａ点 for
     * [GRPH] -- so this says which, not merely whether.
     *
     * They looked unconditional for a long time because the emulator did not
     * answer INT 16h AH=12h and handed JW_CAD a word with the Ctrl bit set, so
     * every run behaved as though Ctrl were held (dosv_emu_cpp RESUME
     * 「刺された罠」, and RESUME.md 4.19 here).
     *
     * Two keys at once is **not measured**: the help says [CTRL] and [SHIFT]
     * together mean something of their own (書込用線種線色と同種同色のデータ
     * のみ), but not what the band then says, so jw_ui_draw picks one of the
     * three in a fixed order rather than inventing a fourth answer. */
    int mods;
    /* A modified read has picked what it works from and is waiting for the
     * second press.  JwCmd.snap, and while it is set the original writes a
     * line of its own over the top line (src/snapmsg.h). */
    int snapping;
    /* A press that searched for something and found nothing.  The original
     * says so in the band beside the counts and leaves it there until the next
     * press finds something or another item is picked; see jw_ui_draw. */
    int missed;
    /* 文字 is taking a string: the port draws it at column 1 of row 2. */
    int typing_text;
    /* 文字's own numbers: the character type selected for writing and that
     * type's pen, width and height (tenths of a millimetre).  src/prompt.h
     * holds the ones the capture happened to see, so these put them back --
     * see Jwc.char_type. */
    int char_type, char_pen, char_w, char_h;
    /* What 線変更 took: 1 a line, 2 an arc.  See JwCmd. */
    int hit_kind;
    /* Has the pointer moved since the last press?  Until it does, the counts
     * box keeps the two counts rather than the command's length and angle --
     * see JwCmd. */
    int moved;
    /* 消去's ②範囲外消去.  The original leaves the `＿` at column 6 off
     * in that mode -- the mark that says the left button can be dragged --
     * and writes the rest of the 追加･除外 line exactly as it does for
     * ①範囲内消去. */
    int outside;
    /* 消去's ③指定範囲, and whether its first press took the texts in with it
     * -- the top line has its own spelling for each.  See src/span.h. */
    int span;
    int with_text;
    /* [ESC] has thrown the point away: the line that was up stays and three
     * pieces go over it (src/esc.h). */
    int escaped;
    int group;                  /* the layer group the buttons show */
    unsigned char layer_on[16]; /* which of its sixteen layers are shown */
    /* The two little bars over each button.  The left one is on when the layer
     * carries a line or an arc and the right one when it carries a text; they
     * are colour 3 and nothing else moves them.  Read off the original with
     * every one of the fourteen drawings loaded -- SAMPLE2's layer 6 has
     * thirty-seven texts and no lines and shows the right bar alone, its layer
     * 9 one text and nothing else and the same, and its layer 7 eighteen lines
     * and eight texts and shows both.  A point counts as geometry: SAMPLE3's
     * layer 5 has sixty-one texts and twenty points and nothing else, and both
     * bars are on. */
    unsigned char layer_geom[16];
    unsigned char layer_text[16];
    /* Whether the digit gets a ring round it.  A layer that is not shown has
     * neither digit nor ring (SAMPLE0's layer 1); one that is shown but off in
     * the drawing's first layer table gets the digit and no ring (TEST7's
     * layers C, D and E). */
    unsigned char layer_ring[16];
    int layer;                  /* the one being written to, highlighted */
    long work_seconds;          /* 作業時間 -- the thin bar down the menu */
    const char *name;           /* what the write layer is called, or NULL */
    const char *guide;          /* the line of guidance, or NULL */
} JwUi;

/* Fill it in the way the original comes up with no drawing loaded. */
void jw_ui_default(JwUi *s);

/* And the way it comes up with this drawing loaded.  Everything but the
 * guidance line comes out of the drawing's own first line; see jwc.c. */
void jw_ui_from(JwUi *s, const Jwc *d);

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

/* And the other way: which command a key picks, or 0.  The capitals take the
 * right column and the small letters the left -- typing `X` in the original
 * puts it into ／ exactly as pressing the item does. */
int jw_ui_key_command(int key);

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

/* The line of guidance the original shows when it has nothing to say. */
const char *jw_ui_guide(void);

/* Which item on the top line a screen pixel picks, or 0.
 *
 * The top line is a menu of its own: the runs between its `|` characters are
 * the items, numbered from the left.  Measured on 消去's
 * `復活出来ません |① 実行(L)|② 中止(R)|` -- columns 24 to 33 carry the erase
 * out, columns 35 to 44 call it off, and column 34, the bar itself, does
 * nothing at all.  Anything before the first bar is not an item either.
 *
 * It reads the line jw_ui_draw last drew, so call it after that. */
int jw_ui_top_item(int x, int y);

#endif
