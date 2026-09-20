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
#include "read.h"
#include "view.h"

/* How many entities 消去 can have picked out of its range by hand.  See the
 * `flip` list below. */
#define JW_FLIP_MAX 64

/* What kind of entity a `flip` entry names. */
#define JW_FLIP_LINE 0
#define JW_FLIP_ARC  1
#define JW_FLIP_TEXT 2

/* How many points 測定 keeps for drawing its legs.  The original's own limit
 * is not known; this is enough for any run a check makes. */
#define JW_MEAS_MAX 64

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
    /* How many entities there were when the range was fixed.  The selection is
     * that set and no other: 複写 puts its copies at the end of the arrays, and
     * a copy that lands inside the box is **not** picked up by it -- the
     * original leaves the copies white while the originals stay red.  Measured
     * with a five-millimetre distance, where the copy overlaps the box. */
    long n0_lines, n0_arcs, n0_texts;
    /* And the set itself, once 複写 or 移動 has acted on it.  The box test is
     * no use afterwards -- 移動 takes the entities out of the box and the
     * original still shows them picked -- so what was picked is written down
     * at that moment.  NULL until then; jw_cmd_pick frees them. */
    unsigned char *sel_line, *sel_arc, *sel_text;
    /* [ESC] has thrown the point away and the command is asking for it again.
     * The line it wrote over is still there, so the chrome replays the stage
     * that was up and then puts src/esc.h's three pieces on top. */
    int escaped;
    /* How many copies 複写 has made of the same selection.  ③連続 makes
     * another, one step further on: the first lands at the distance, the
     * second at twice it.  Measured -- SAMPLE0's lines go from (161,139) to
     * (196,87) and then to (231,40) with 20,30. */
    int copies;
    /* 複写's base point -- 原図形の基準点位置.  Kept apart from x0,y0, which
     * are the range's first corner and are still needed to work out what the
     * range holds. */
    double base_x, base_y;
    /* One step, in drawing units: what ③連続 repeats.  ②数値位置 puts the
     * typed millimetres here and ①ﾏｳｽ位置 the distance from the base point to
     * the press, so 連続 does not have to know which of the two made the
     * first copy. */
    double step_x, step_y;
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
    /* コーナー連結's first line -- the one it calls 「Ａ」 -- while it waits
     * for the second.  -1 when it has none. */
    long pick_a;
    /* And where that first press was, on the screen.  Kept apart from
     * press_x/press_y, which jw_cmd_press overwrites at the top of **every**
     * press: both 線伸縮 and コーナー連結 have to remember which side of
     * the line the *first* press was on, and by the time the second arrives
     * press_x is already the second one. */
    int pick_x, pick_y;
    /* 線切断 has cut a line and the pointer has not moved off it yet.  The
     * original says `□ 線切断はマウス移動` until it does and then puts its
     * own line back, so this is what picks src/stage.h's stage 11 over
     * stage 2. */
    int cutting;
    /* Where 線切断 will cut, in drawing units, while it waits for the move. */
    double cut_x, cut_y;
    /* 中心線's second line, and the two presses that chose the pair.  The
     * centre line is the bisector of the two, and **which** of the two
     * bisectors is decided by the side each line was pressed on. */
    long pick_b;
    int pick_bx, pick_by;
    /* 測定【①距離】's running total and last leg, in metres, and where the
     * last press was.  Each press adds the leg from the one before. */
    double meas_total, meas_last, meas_x, meas_y;
    /* And the points themselves, so the legs can be drawn: the original puts
     * each one on the screen in colour 2 as it is measured. */
    double meas_px[JW_MEAS_MAX], meas_py[JW_MEAS_MAX];
    int meas_n;
    /* 正多角形's number of sides -- `正多角形の角数 = ` with `[5]` offered
     * as 前回と同じ. */
    int sides;
    /* 分割's count -- `分割 数 = ` with `[2]` offered as 前回と同じ.  The
     * original starts at 2 and remembers what was last typed. */
    int divisions;
    /* ２線's two gaps, in paper millimetres -- `①基準線からの間隔＝
     * 75.000 , 75.000 (mm)`.  The first is the side the new lines are written
     * in first (see two_lines). */
    double gap_two[2];
    /* ２線 has both ends and is waiting for the pointer to leave, the way
     * 線切断 does. */
    int pending;
    /* 面取's chamfer length, in paper millimetres.  The top line offers it as
     * `③寸法= 30.000` and starts there. */
    double gap_chamfer;
    /* What 線変更 took: 1 a line, 2 an arc, 0 nothing yet.  The word it writes
     * beside the counts is `線` or `円` accordingly. */
    int hit_kind;
    /* Which modifier keys were held when the press happened -- JW_MOD_* from
     * src/read.h.  The front end puts them here before jw_cmd_press, because
     * that is when the original looks: it asks the BIOS at the press itself
     * and not while the pointer is moving. */
    int mods;
    /* A modified read that is waiting for its second press.  Both [SHIFT] and
     * [GRPH] take two: the first says what to work from and the second says
     * where.  See src/read.h for what was measured.
     *
     *   JW_SNAP_ON   [SHIFT]: `snap_kind`/`snap_at` name the line or arc that
     *                was picked, and the next press is put on it.
     *   JW_SNAP_MID  [GRPH]: `snap_x`,`snap_y` are Ａ点 and the next press is
     *                Ｂ点; the answer is the middle of the two.
     *
     * The second press indicates its point the ordinary way -- free with the
     * left button, read with the right -- so a right press that reads nothing
     * leaves the mode up and takes nothing, which is what the original does. */
    int snap;
    int snap_kind;              /* JW_ON_LINE or JW_ON_ARC */
    long snap_at;
    double snap_x, snap_y;
} JwCmd;

/* Which commands take a range with two presses the way ③指定範囲 does: 消去
 * itself, and 複写, whose own line offers the same `(L)線･円  (R)線･円･文字`
 * and whose first stage is spelt exactly the same (src/copy.h). */
#define JW_RANGE_CMD(n) ((n) == 25 || (n) == 1 || (n) == 16)

/* And which of those put what the range holds somewhere else: 複写 leaves the
 * originals and 移動 does not, but everything up to the distance is the same
 * (src/copy.h and src/move.h differ in a word or two). */
#define JW_MOVE_CMD(n) ((n) == 1 || (n) == 16)

/* Start a command, or leave it (0).
 *
 * The struct must be zeroed before the first call: it owns a little memory --
 * what 複写 and 移動 picked out of a range -- and this frees what was there. */
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
 * are selected for writing when `only_writing` is set.  That is what a press
 * with a **modifier key held** does; a plain press takes anything, whichever
 * command is asking -- see writing_kind in src/cmd.c. */
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
/* Where ２線's pair runs -- `e` is filled with x0,y0,x1,y1 of the i-th of the
 * two.  Returns 0 when there is nothing to draw. */
int jw_cmd_two_line(const JwCmd *c, const Jwc *d, int i, double *e);

void jw_cmd_marked(const JwCmd *c, VGA *v, const Jwc *d, const JwView *w);

/* And what the command has **made** since the range was fixed -- 複写's
 * copies -- drawn over the finished screen, chrome and all.  That is the
 * original's own order: it paints a new entity on top rather than redrawing,
 * and the two rows under the top line were cleared once, when the item was
 * picked.  Call it after jw_ui_draw. */
void jw_cmd_after(const JwCmd *c, VGA *v, const Jwc *d, const JwView *w);

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
/* The drawing is not const here: 線切断 cuts the line it was given **when the
 * pointer moves off it**, not at the press (`□ 線切断はマウス移動`), and this
 * is where that lands. */
void jw_cmd_track(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy);

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
