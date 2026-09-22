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

#include "jwc.h"

#define JW_TATEGU_LINES 64      /* the most any one shape has */
#define JW_TATEGU_MAX   16      /* the most one screen shows */

typedef struct {
    int a, b;                   /* which part each end belongs to, 1-based */
    int x1, y1, x2, y2;         /* the two ends, in their own part's frame */
    /* An arc, if the record had `E` after the three attribute numbers: the
     * first pair is then the centre and the second the start, the radius is
     * the distance between them, `sweep` is degrees anticlockwise and `mode`
     * says what else to draw -- see the note at the top of the file. */
    int pen;                    /* 線色, the 7th number.  2 when there is none */
    int arc;
    int sweep;
    int mode;
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

/* The library one of ｵﾌﾟｼｮﾝ's first three items uses, read once and kept:
 * 1 is JW_OPT1.DAT (建具平面), 2 JW_OPT2.DAT (断面) and 3 JW_OPT3.DAT
 * (立面).  NULL for anything else. */
const JwTategu *jw_tategu_lib(int which);

/* Put a shape into a drawing -- what ｵﾌﾟｼｮﾝ ①建具平面 does once a shape, a
 * 基準線 and a point are in hand.  Returns how many lines it added.
 *
 * `base` is the line the fitting goes in, `(px,py)` the point that says where
 * along it, `inner` the 内法寸法 and `depth` the 見込, both in millimetres.
 * See src/tategu.c for where every number in it was measured. */
int jw_tategu_place(Jwc *d, const JwTateguShape *sh, const JwcLine *base,
                    double px, double py, double inner, double depth,
                    double width);

/* Where a fitting goes: the frame its parts are laid out in.  `base` is the
 * 基準線, `(px,py)` the point along it, `inner` the 内法寸法 and `depth` the
 * 見込, both in millimetres.  Returns 0 if the line has no length. */
typedef struct {
    double ox, oy;              /* the point, projected onto the line */
    double ux, uy;              /* along the line */
    double nx, ny;              /* across it, a quarter turn anticlockwise */
    double step;                /* millimetres between two parts */
    double depth;               /* 見込, for the across scale */
    double width;               /* 枠幅, for the along scale inside a part */
    float k;                    /* millimetres in one drawing unit */
    int parts;
} JwTateguPut;

int jw_tategu_frame(const Jwc *d, const JwcLine *base, double px, double py,
                    double inner, double depth, double width,
                    const JwTateguShape *sh, JwTateguPut *out);

/* And one member's two ends in the drawing's own coordinates. */
void jw_tategu_ends(const JwTateguLine *l, const JwTateguPut *f,
                    double *ax, double *ay, double *bx, double *by);

#endif
