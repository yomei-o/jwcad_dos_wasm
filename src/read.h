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
 * point it took was; see RESUME.md for the numbers.  What is *not* done here
 * is the modified reads -- [SHIFT] for a point on a line, [GRPH] for a centre,
 * [CTRL] for 鉛直/円周1/4点 -- and the ellipse and arc intersections.
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

#endif
