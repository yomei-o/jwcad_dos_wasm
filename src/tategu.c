/* The fittings library.  See tategu.h. */
#include "tategu.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* A record is six whole numbers and nothing else; the line that opens a shape
 * is one number and a label.  So counting the numbers tells them apart. */
static int numbers(const char *s, int *out, int want)
{
    int got = 0;

    while (*s && got < want) {
        while (*s == ' ' || *s == '\t' || *s == '\r' || *s == '\n') {
            s++;
        }
        if (!*s) {
            break;
        }
        if (*s != '-' && (*s < '0' || *s > '9')) {
            break;              /* a label: whatever came before it is all */
        }
        out[got++] = (int)strtol(s, (char **)&s, 10);
    }
    return got;
}

int jw_tategu_read(const char *path, JwTategu *out)
{
    char line[256];
    FILE *f = fopen(path, "rb");
    JwTateguShape *shape = 0;

    memset(out, 0, sizeof(*out));
    if (!f) {
        return 0;
    }
    while (fgets(line, (int)sizeof line, f)) {
        int v[8];
        int got;

        if (line[0] == '#') {
            continue;           /* a comment */
        }
        got = numbers(line, v, 7);
        if (got == 1 && v[0] >= 990 && v[0] <= 999) {
            /* the next line opens a shape */
            if (out->n < JW_TATEGU_MAX) {
                shape = &out->shape[out->n++];
                shape->parts = 0;
                shape->n = 0;
            } else {
                shape = 0;
            }
            continue;
        }
        if (!shape) {
            continue;           /* the count at the top of the file */
        }
        if (shape->parts == 0) {
            /* `3                [1]` -- the number of parts, then a label */
            if (got >= 1) {
                shape->parts = v[0];
            }
            continue;
        }
        if (got >= 6 && shape->n < JW_TATEGU_LINES) {
            JwTateguLine *l = &shape->line[shape->n++];
            const char *e = strchr(line, 'E');

            if (!e) {
                e = strchr(line, 'e');
            }

            memset(l, 0, sizeof(*l));
            l->a = v[0];
            l->b = v[1];
            l->x1 = v[2];
            l->y1 = v[3];
            l->x2 = v[4];
            l->y2 = v[5];
            /* `... 3 1 1A` -- 線色, 線種, レイヤ.  Without them the line is
             * pen 2, which is what the shapes that carry none come out as. */
            l->pen = got >= 7 ? v[6] : 2;
            /* `... 1 0 -1 E 90 12` -- the `E` turns the record into an arc
             * and the two numbers after it are the sweep and the mode. */
            if (e && numbers(e + 1, v, 2) == 2) {
                l->arc = 1;
                l->sweep = v[0];
                l->mode = v[1];
            }
        }
    }
    fclose(f);
    return out->n;
}

/* ｵﾌﾟｼｮﾝ ①建具平面 putting a fitting in.
 *
 * Measured by having the original place one and then save the drawing
 * (tools/tateguplace.sh), and reading the records out of the file.  With
 * SAMPLE0's line 1 -- (40.973,323.057) to (477,323.057) -- as the 基準線 and
 * the point (350,200), which is drawing (229,263), the first shape's three
 * members come out
 *
 *     (-2910.394,343.9865)-(-1279.653,343.9865)
 *     (-1340.697,227.1313)-(-1340.697,418.9832)
 *     (-1401.741,302.1280)-( 228.9999,302.1280)
 *
 * and the library's own records for that shape are
 *
 *     1 2 0 47 35 47      2 2 0 -20 0 90      2 3 -35 23 0 23
 *
 * which pins down all of it:
 *
 *   * the parts stand `内法 / (parts - 1)` millimetres apart along the line --
 *     1800/2 = 900, and 900 millimetres is 1569.697 of SAMPLE0's units;
 *   * the **last** part is at the point, projected onto the line: the third
 *     member ends at x 229, which is where the press was.  They run back
 *     along the line from there;
 *   * a record's y is measured from the line with **35 in the middle** and
 *     scaled by `見込 / 70`: y=47 comes out 12mm on one side and y=23 12mm on
 *     the other, and with 見込 set to 14 the same two come out 2.4mm.  The
 *     library is drawn for a 70mm wall;
 *   * which side is which: the normal is the line's direction turned a
 *     quarter anticlockwise.  SAMPLE0's line 1 runs +x and y=47 lands above
 *     it; its line 0 runs +y and y=47 lands to the left;
 *   * a millimetre is `1 / jwc_zukei_scale`, the same as a figure's, and
     **divided** rather than multiplied by the reciprocal -- 900mm comes out
 *     1569.69702 that way and 1569.6969 the other, and the original's file
 *     says 1569.69702.
 *
 * **枠幅 changes nothing here.**  Placing the same shape with it at 35 and at
 * 70 gives the same three records to the last bit, so the 35 in the library's
 * own `1 2 0 47 35 47` is its own number and not that setting.
 *
 * The four bytes behind each line are `00 0e 00 90`: the drawing's write
 * layer, then 0e, 00 and 90, which are what the original wrote and are not
 * understood.
 */
int jw_tategu_frame(const Jwc *d, const JwcLine *base, double px, double py,
                    double inner, double depth, double width,
                    const JwTateguShape *sh, JwTateguPut *out)
{
    const double dx = (double)base->x1 - base->x0;
    const double dy = (double)base->y1 - base->y0;
    const double len = sqrt(dx * dx + dy * dy);
    double t;

    if (len <= 0.0 || sh->parts < 1) {
        return 0;
    }
    out->k = jwc_zukei_scale(d);
    if (out->k == 0.0f) {
        return 0;
    }
    out->ux = dx / len;
    out->uy = dy / len;
    out->nx = -out->uy;
    out->ny = out->ux;
    t = (px - base->x0) * out->ux + (py - base->y0) * out->uy;
    out->ox = base->x0 + t * out->ux;
    out->oy = base->y0 + t * out->uy;
    out->step = sh->parts > 1 ? inner / (sh->parts - 1) : 0.0;
    out->depth = depth;
    out->width = width;
    out->parts = sh->parts;
    return 1;
}

void jw_tategu_ends(const JwTateguLine *l, const JwTateguPut *f,
                    double *ax, double *ay, double *bx, double *by)
{
    /* **枠幅 scales a member that stays inside one part.**  The library is
     * drawn with the frame 25 wide: the third shape's `2 2 0 0 25 0` comes
     * out 35 millimetres long with 枠幅 at 35 and 70 with it at 70.  A member
     * that runs **between** two parts is not scaled -- the first shape's
     * `1 2 0 47 35 47` is 900 + 35 long whatever 枠幅 says.
     *
     * Whether it is a scale by 枠幅/25 or the 25 being replaced by 枠幅 is
     * not settled: every measurement so far is of a member whose x is 25.
     * The library has 5, 10, 15, 17, 20, 50, 90 and 100 inside a part as
     * well, so one of those would tell them apart. */
    const double w = l->a == l->b && f->width > 0.0 ? f->width / 25.0 : 1.0;
    const double a0 = ((l->a - f->parts) * f->step + l->x1 * w) / f->k;
    const double a1 = ((l->b - f->parts) * f->step + l->x2 * w) / f->k;
    const double c0 = ((l->y1 - 35.0) * f->depth / 70.0) / f->k;
    const double c1 = ((l->y2 - 35.0) * f->depth / 70.0) / f->k;

    *ax = f->ox + a0 * f->ux + c0 * f->nx;
    *ay = f->oy + a0 * f->uy + c0 * f->ny;
    *bx = f->ox + a1 * f->ux + c1 * f->nx;
    *by = f->oy + a1 * f->uy + c1 * f->ny;
}

int jw_tategu_place(Jwc *d, const JwTateguShape *sh, const JwcLine *base,
                    double px, double py, double inner, double depth,
                    double width)
{
    JwTateguPut f;
    int i, n = 0;

    if (!jw_tategu_frame(d, base, px, py, inner, depth, width, sh, &f)) {
        return 0;
    }
    for (i = 0; i < sh->n; i++) {
        const JwTateguLine *l = &sh->line[i];
        double ax, ay, bx, by;
        JwcLine put;

        if (l->arc) {
            continue;           /* the arcs are not placed yet */
        }
        jw_tategu_ends(l, &f, &ax, &ay, &bx, &by);
        memset(&put, 0, sizeof put);
        put.x0 = (float)ax;
        put.y0 = (float)ay;
        put.x1 = (float)bx;
        put.y1 = (float)by;
        put.type = (unsigned char)d->line_type;
        put.pen = (unsigned char)l->pen;
        put.layer = (unsigned char)d->write_layer;
        put.rest[0] = put.layer;
        put.rest[1] = 0x0e;
        put.rest[2] = 0;
        put.rest[3] = 0x90;
        if (!jwc_put_line(d, &put)) {
            break;
        }
        n++;
    }
    return n;
}

const JwTategu *jw_tategu_lib(int which)
{
    static const char *const FILES[4] = {
        0, "orig/JW_OPT1.DAT", "orig/JW_OPT2.DAT", "orig/JW_OPT3.DAT"
    };
    static JwTategu lib[4];
    static int read[4];

    if (which < 1 || which > 3) {
        return 0;
    }
    if (!read[which]) {
        read[which] = 1;
        jw_tategu_read(FILES[which], &lib[which]);
    }
    return &lib[which];
}
