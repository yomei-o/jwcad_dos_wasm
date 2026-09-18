/* 読取 -- what the right button takes.
 *
 * Every command's own line says `(L)free (R)Read`: the left button takes the
 * point the pointer is on and the right one *snaps* to something already
 * drawn.  The original's help (orig/JW_CADV.HLP, 基本操作 3/12, item 6) sets
 * out both what it looks for and in what order:
 *
 *     読取り範囲内（約８ﾄﾞｯﾄ）にある読取り点に対する優先順位は
 *     （優先順位高）目盛 → 仮点 → 実点 → 端点・交点 →
 *       文字（左下・右下） → 用紙枠の四隅（優先順位低）
 *
 * and, two paragraphs above it, what a plain right click covers:
 *
 *     目盛、点、線･円･楕円の端点と交点、文字の左下・右下点位置
 *     の読取り（スナップ）をします。
 *
 * Every part of that was then measured on the running original with
 * tools/read.sh, which presses the right button once and works out where the
 * point it took was; see RESUME.md for the numbers.
 *
 * With a **modifier key** held the right button takes something else again.
 * The original's help (基本操作 3/12 and 4/12) has all three:
 *
 *     2)[SHIFT]キー を押しながら線・円を指示すると、線・円上の点
 *     　　スナップになります。
 *     3)[GRPH] キー を押しながら線・円を指示すると中心点が選べ、
 *     　　端点を指示すると２点間の中心点が選べます。
 *     4)[CTRL]キー  を押しながらの操作は、
 *       a)[+]コマンド の場合、線・円を指示すると鉛直・円周1/4点
 *       b)[/]コマンド の場合、線・円を指示すると鉛直・円周点
 *       c)他のコマンドの場合、円を指示するとが円周1/4点選べます｡
 *
 * [SHIFT] and [GRPH] are done here.  Both take **two** presses, which those
 * words do not say and the running original does: the first press picks what
 * to work from and the second says where.  Measured with tools/readmod.sh,
 * which prints every string the original writes and turns its 長=/角度= pair
 * back into the point that was taken:
 *
 *   [SHIFT]  the press searches for a line or an arc within the reach.
 *            Nothing there -> 読取可能データ無, and the command has not moved.
 *            Found -> the top line becomes 【線･円上点スナップ】 (L)free
 *            (R)Read and the **next** press is turned into the point on that
 *            line or circle.  Either button: the left one indicates freely,
 *            the right one reads first, and what comes out is put on the line
 *            all the same -- a right press at SAMPLE0's corner (162,140) with
 *            line 5 picked gives (161.97,157.384), which is that corner's x
 *            on line 5.  A right press that reads nothing leaves the mode up.
 *   [GRPH]   the press reads the ordinary way first.  It hit -> that point is
 *            Ａ点, the top line becomes 《２点間中心》Ｂ点 and the next press
 *            gives Ｂ点; the answer is the middle of the two.  It missed -> a
 *            line or an arc is searched for instead, and its middle (a line)
 *            or its centre (a circle) is taken **at once**, with no second
 *            press at all.
 *
 * What is still not done is [CTRL], which is per command -- in ＋ and ／ it
 * constrains the direction as well -- and the ellipse and arc intersections.
 */
#ifndef JW_READ_H
#define JW_READ_H

#include "jwc.h"
#include "view.h"

/* The reach, in screen dots.  The help says 約8ドット and the measurement says
 * eight exactly, as a **manhattan** distance and not a circle: on SAMPLE0's
 * endpoint at screen (379.99,401.56) a press at (387,401) is 7.57 away and
 * reads, (388,401) is 8.57 and does not, (380,394) is 7.57 and reads,
 * (380,393) is 8.57 and does not -- and (386,404), only 6.5 away as the crow
 * flies but 8.45 by this sum, does not.  So the window is a diamond. */
#define JW_READ_REACH 8.0

/* What the right button would take at a screen pixel.  Returns 1 and puts the
 * point in drawing units into *x,*y, or 0 if there is nothing within reach --
 * which is when the original writes 読取可能データ無 in the band. */
int jw_read(const Jwc *d, const JwView *w, int sx, int sy, double *x, double *y);

/* Which modifier keys are held.  The original asks the BIOS for them at the
 * press itself (INT 16h AH=12h), so this is the state at that moment rather
 * than a mode the program is in. */
#define JW_MOD_SHIFT 1
#define JW_MOD_CTRL  2
#define JW_MOD_GRPH  4

/* What a modified read picked, for JwCmd.snap_kind. */
#define JW_ON_LINE 1
#define JW_ON_ARC  2

/* And which of the two modified reads is part-way through, for JwCmd.snap. */
#define JW_SNAP_ON  1           /* [SHIFT] 線･円上点スナップ */
#define JW_SNAP_MID 2           /* [GRPH] ２点間中心、Ｂ点待ち */


/* The point of a line nearest a given point: the foot of the perpendicular, on
 * the line **extended**, because the original does not stop at the ends.
 * Measured -- [SHIFT] picks SAMPLE0's line 5, which runs x 161.97 to 231.74 at
 * y 157.38, and a free press at (300,157), seventy dots past its right end,
 * gives (300,157.384) rather than the end. */
void jw_read_on_line(const JwcLine *l, double px, double py,
                     double *x, double *y);

/* And of an arc: the point of its circle in the direction of the given point
 * from the centre.  The **whole** circle, not the sweep it draws -- [SHIFT]
 * picks SAMPLE6's arc 23, which draws 90 to 180, and a press at (460,190),
 * whose direction from the centre is -26.7, gives (459.68,189.84).  That is on
 * the circle and on no part of the arc.
 *
 * `flatten` other than 10000 is an ellipse, whose nearest point is not this
 * one; jw_cmd_arc_at refuses an ellipse, so the snap is never handed one. */
void jw_read_on_arc(const JwcArc *a, double px, double py,
                    double *x, double *y);

/* 中心点 -- the middle of a line and the centre of a circle.  Measured:
 * [GRPH] on SAMPLE0's line 4 (x 161.97 to 598 at y 401.56) takes
 * (379.99,401.56) at once, and on SAMPLE6's arc 23 it takes (434.76,177.29). */
void jw_read_mid_line(const JwcLine *l, double *x, double *y);
void jw_read_mid_arc(const JwcArc *a, double *x, double *y);

/* 円周1/4点 -- the nearest of the four quarter points of an arc's circle, which
 * is what [CTRL] takes in a command that is neither ＋ nor ／.
 *
 * The **whole** circle again, not the part that is drawn.  Measured: 「（」
 * draws an arc about (300,250) with radius 50 running 100 to 170 degrees, so
 * no quarter point is on it at all, and a [CTRL] press at (275,207) inside □
 * takes (300,200) -- the 90 degree one.  An arc counts as much as a closed
 * circle does, and the press is answered at once, with no second press.
 *
 * A line is not taken: the same press on SAMPLE0's line 4, drawn with the pen
 * and line type being written, says 読取可能データ無.  The help agrees --
 * 「他のコマンドの場合、円を指示すると円周1/4点が選べます」. */
void jw_read_quarter(const JwcArc *a, double px, double py,
                     double *x, double *y);

#endif
