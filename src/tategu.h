/* ｵﾌﾟｼｮﾝ's fittings library -- `JW_OPT1.DAT` and the rest.
 *
 * The files are plain text and ship with the program:
 *
 *     #建具平面用データ
 *     #
 *     16                      how many shapes
 *     999                     a shape starts
 *     3                [1]    how many parts it is in, and its label
 *     1 2 0 47 35 47          a line, from part 1 to part 2
 *     2 2 0 -20 0 90          a line inside part 2
 *     2 3 -35 23 0 23         a line, from part 2 to part 3
 *     999
 *     ...
 *
 * A record is `<part A> <part B> <xA> <yA> <xB> <yB>`: the two ends of one
 * line, each given in the frame of the part it belongs to.  **That is what
 * makes the drawing stretch**: the parts sit at the door's own width apart,
 * and a line between two of them is as long as that gap.  A line inside one
 * part (A == B) keeps its own size whatever the width.
 *
 * Where the parts go, and how big a unit is, was measured off the original's
 * ｵﾌﾟｼｮﾝ ①建具平面 screen -- see jw_tategu_draw in src/tategu.c.
 */
#ifndef JW_TATEGU_H
#define JW_TATEGU_H

#define JW_TATEGU_LINES 64      /* the most any one shape has */
#define JW_TATEGU_MAX   16      /* the most one screen shows */

typedef struct {
    int a, b;                   /* which part each end belongs to, 1-based */
    int x1, y1, x2, y2;         /* the two ends, in their own part's frame */
} JwTateguLine;

typedef struct {
    int parts;                  /* how many parts the shape is in */
    int n;                      /* how many lines */
    JwTateguLine line[JW_TATEGU_LINES];
} JwTateguShape;

typedef struct {
    int n;                      /* how many shapes were read */
    JwTateguShape shape[JW_TATEGU_MAX];
} JwTategu;

/* Read a library file.  Returns 0 and leaves `out` empty if it cannot. */
int jw_tategu_read(const char *path, JwTategu *out);

#endif
