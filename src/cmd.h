/* What the program is in the middle of doing.
 *
 * The original is a state machine: a menu item puts it into a command, and the
 * presses that follow mean whatever that command says they mean.  This holds
 * that much of it -- which command, and what has been pressed so far -- and no
 * more.  One command is implemented: ／ (command 3), the plain line.  Two
 * presses draw one, which is what the original does (tools/line.sh drives it
 * and leaves the picture to compare against).
 */
#ifndef JW_CMD_H
#define JW_CMD_H

#include "jwc.h"
#include "view.h"

/* How many entities 消去 can have picked out of its range by hand.  See the
 * `flip` list below. */
#define JW_FLIP_MAX 64

/* What kind of entity a `flip` entry names. */
#define JW_FLIP_LINE 0
#define JW_FLIP_ARC  1
#define JW_FLIP_TEXT 2

typedef struct {
    int command;                /* the menu item in force, 1 to 30, or 0 */
    int pressed;                /* how many points have been taken */
    double x0, y0;              /* the first of them, in drawing units */
    /* What the panel shows while it runs: how far in, and the two numbers the
     * original writes -- the length and the angle for a line, the two sides for
     * a box, the radius and the diameter for a circle.  The lengths are
     * millimetres of the real thing: drawing units over `unit_mm`, times the
     * scale the panel shows.  Measured -- (300,200) to (400,200) is a hundred
     * pixels and the original calls it 57.336 mm on SAMPLE0, which is
     * 100 / (518/297) / 1. */
    int stage;
    double num[2];
    int dec[2];                 /* how many decimals each is shown to */
    /* The last press looked for an entity and found none, which the original
     * says in the band beside the counts.  It stays up until a press finds
     * something or another item is picked -- see src/ui.c. */
    int missed;
    /* 消去's range: the other corner, once the right button has fixed it.
     * `pressed` counts the presses -- 1 while the box is being dragged, 2 once
     * it is fixed and what it picked is painted in colour 2. */
    double x1, y1;
    /* 複線: the line it was pointed at, the number being typed, and the
     * interval that number came to.  See RESUME.md 4.12.
     *
     * `typing` is on between the press that picks the line and the Enter that
     * ends the number; while it is on the keys are the command's, not the
     * menu's.  The field is eight columns wide, which is how much the original
     * clears for it. */
    long pick;
    int typing;
    char typed[48];
    int typed_n;
    double gap;                 /* millimetres of paper, as typed */
    /* The line that was pointed at, kept here so that the band it drags and
     * the press that fixes it can both work without the drawing in hand, and
     * so that neither can be looking at a line that has moved since. */
    double lx0, ly0, lx1, ly1;
    double per_mm;              /* drawing units to a millimetre of paper */
    double nx, ny;              /* the side the last copy went to, as a unit
                                 * normal -- 「②連続」 repeats it */
    /* 消去's 追加･除外: what has been taken out of the range by hand, and what
     * has been put in from outside it.  The selection is "inside the range,
     * exclusive-or this list", so both directions need only the one list.
     *
     * A list rather than a flag on every entity: this is the command's own
     * state and lives only as long as the command does, and what a person
     * picks out one at a time is a handful.  Past JW_FLIP_MAX the press is
     * ignored, which is the one place this is not the original. */
    struct { unsigned char kind; long at; } flip[JW_FLIP_MAX];
    int n_flip;
    /* [F2] in 追加･除外 empties the selection: after it the range holds
     * nothing and the presses build a new set up from nothing.  Measured --
     * see jw_cmd_key. */
    int cleared;
    /* 消去's ②範囲外消去: the range picks what it does *not* hold.  Its own
     * line offers it before the first press. */
    int outside;
    /* 消去's ③指定範囲: the data selection 複写 and 移動 use.  The range is
     * taken with two presses the way 追加･除外 takes it, and the **first**
     * button says what goes in the net -- `(L)線･円` leaves the texts out,
     * `(R)線･円･文字` takes them.  Measured on SAMPLE0 with
     * (150,130)-(245,170): the right button reddens 224 pixels (lines 5 and 6
     * and text 0), the left one 89 (the two lines alone).
     *
     * `with_text` is which of the two the first press was.  The top line says
     * so too -- `<線･円>` against `線･円･文字`, with a third item ③文字種 only
     * in the second.  See src/span.h. */
    int span;
    int with_text;
    /* Where the last press was, on the screen, and whether the pointer has
     * moved off it since.  **The counts box does not change the moment a point
     * is taken**: the original writes the two counts back and only puts the
     * length and the angle there once the pointer moves -- one pixel is
     * enough.  Measured with ／ on SAMPLE0: press at (300,200) and the box
     * still says `30| 13`, move to (301,200) and it says `長= 0.573`
     * (one pixel is 1/unit_mm millimetres of paper) and `角度= 0.000`. */
    int press_x, press_y;
    int moved;
    /* 文字 is taking a string rather than a number: the keys go into `typed`
     * as they come and [Enter] writes the text.  Measured -- the original
     * shows the whole string again at column 1 of row 2 after every key. */
    int typing_text;
    /* How wide and how tall the string being typed comes out, in drawing
     * units -- the box 文字 shows while it is being typed.  Worked out again
     * after every key, because the width follows from the string. */
    double text_wide, text_tall;
    /* What 線変更 took: 1 a line, 2 an arc, 0 nothing yet.  The word it writes
     * beside the counts is `線` or `円` accordingly. */
    int hit_kind;
} JwCmd;

/* Start a command, or leave it (0). */
void jw_cmd_pick(JwCmd *c, int command);

/* A press inside the drawing area, at a screen pixel.  `right` is the other
 * button, which the original reads as a different answer: 線消 takes a line
 * away with it where the left one would start cutting a piece out.  Returns 1
 * if the drawing changed and has to be drawn again. */
int jw_cmd_press(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy, int right);

/* Which line is under a point, or -1.  The original's reach is eight drawing
 * units: the point has to be within eight of the line itself *and* within eight
 * of the ends' box.  Measured on SAMPLE0's top edge -- seven above it hits and
 * eight does not, seven past its end hits and twelve does not -- and on a
 * diagonal drawn for the purpose, which is not picked from the far side of its
 * own bounding box. */
long jw_cmd_line_at(const Jwc *d, const JwView *w, int sx, int sy);

/* The same, but taking only what is drawn with the pen and line type that
 * are selected for writing when `only_writing` is set.  That is what 消去's
 * 追加･除外 does and 線消 does not -- see src/cmd.c. */
long jw_cmd_line_at_kind(const Jwc *d, const JwView *w, int sx, int sy,
                         int only_writing);

/* And which arc, or -1.  The original's 線消 says 線,円弧 and takes either. */
long jw_cmd_arc_at(const Jwc *d, const JwView *w, int sx, int sy);
long jw_cmd_arc_at_kind(const Jwc *d, const JwView *w, int sx, int sy,
                        int only_writing);

/* Which text a press takes, or -1 -- 消去's 追加･除外 with the right button.
 * A box around the baseline, not a distance; see src/cmd.c. */
long jw_cmd_text_at(const Jwc *d, const JwView *w, int sx, int sy);

/* Is this entity inside 消去's fixed range?  Only what falls **wholly** inside
 * is taken -- SAMPLE0's line 5 and line 6 and text 0 go when (150,130)-(245,170)
 * is drawn round them, and line 1, which merely crosses the box, stays. */
int jw_cmd_in_range(const JwCmd *c, double ax, double ay, double bx, double by);

/* Paint what 消去 has picked, the way the original does: the entities inside
 * the range again, in colour 2, on top of the drawing.  Nothing else moves --
 * 224 white pixels turn red and not one other pixel changes. */
void jw_cmd_marked(const JwCmd *c, VGA *v, const Jwc *d, const JwView *w);

/* A press on the top line, which is a menu of its own: the runs between the
 * `|` characters are the items, numbered from the left.  Measured on 消去's
 * `復活出来ません |① 実行(L)|② 中止(R)|` -- columns 24 to 33 carry it out,
 * 35 to 44 call it off, and column 34, the bar itself, does nothing.
 * Returns 1 if the drawing changed. */
int jw_cmd_top(JwCmd *c, Jwc *d, int item);

/* A key, while a command is asking for a number.  Digits and a point go into
 * the field, [BS] takes one back and [Enter] ends it; anything else is left
 * alone.  Returns 1 if the key was the command's, so that the caller knows not
 * to treat it as a menu key.
 *
 * The original echoes each character itself, one cell along from the last --
 * `"2  "` at column 22, `"0  "` at column 23 -- and clears the two cells after
 * it, which is how [BS] can put the field back.  src/ui.c draws the field from
 * `typed` and gets the same picture. */
int jw_cmd_key(JwCmd *c, Jwc *d, int key);

/* The function keys, for jw_cmd_key.  They are not characters, so they are
 * numbered past the byte the rest of the keys come in as.  While 複線 is
 * asking for a number, [F1] to [F5] are the five it offers along the top --
 * 1000, 100, 200, 300 and 500 -- and pressing one is the same as typing that
 * and pressing [Enter] (measured: [F1] and [F3] both go straight to
 * `○ 複写方向マウス指示(L)` with the value in the band). */
#define JW_KEY_F1 0x101
#define JW_KEY_F2 0x102
#define JW_KEY_F5 0x105
#define JW_KEY_F10 0x10a

/* Move the pointer without pressing.  While a command has a point in hand the
 * original keeps the reading under the counts up to date -- the length and the
 * angle to wherever the pointer is -- so this works them out again. */
void jw_cmd_track(JwCmd *c, const Jwc *d, const JwView *w, int sx, int sy);

/* The line the original drags from the point already taken to wherever the
 * pointer is: colour 2, exclusive-or (0x18), solid.  □ drags a rectangle of
 * four of them and ○ a circle, both the same way.  Drawn after everything
 * else, like the pointer, and taken back by drawing it again.
 *
 * Nothing happens if no point has been taken yet. */
void jw_cmd_band(const JwCmd *c, VGA *v, const JwView *w, int sx, int sy);

/* Where a screen pixel is in the drawing.  The view puts a drawing point at
 * `(x - ox) * scale + ax`, so this is that read backwards. */
void jw_cmd_at(const JwView *w, int sx, int sy, double *x, double *y);

#endif
