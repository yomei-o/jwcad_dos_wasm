/* JW_CAD's drawing primitives, translated from the `20a9` segment.
 *
 * Read alongside the original:
 *
 *     python tools/func.py 20a9:07dc          # the structured parts
 *     python tools/disasm.py 0x113e2 0x80     # the four inner loops
 *
 * Ghidra cannot follow the inner loops -- FUN_20a9_07dc reaches them through a
 * computed jump and the output says "Could not recover jumptable" -- so those
 * came out of the disassembly, at 20a9:0952 / 0991 (solid) and 0a39 / 0a8b
 * (styled).  The addresses in this file are Ghidra's, 0x1000 segments above
 * what disasm.py prints.
 */
#include "draw.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* FUN_20a9_0732 */
void jw_set_colour(VGA *v, unsigned colour, unsigned rop)
{
    vga_outw(v, 0x3ce, colour << 8);        /* GC 0  set/reset          */
    vga_outw(v, 0x3ce, 0x0f01);             /* GC 1  enable set/reset   */
    vga_outw(v, 0x3ce, (rop << 8) | 3);     /* GC 3  function           */
    vga_outw(v, 0x3ce, 0x0005);             /* GC 5  write mode 0       */
    vga_outw(v, 0x3ce, 0xff08);             /* GC 8  bit mask           */
}

/* `out(0x3ce, mask << 8 | 8)` then the read-modify-write whose data the
 * set/reset path discards.  Every pixel JW_CAD draws goes through this pair. */
static void put(VGA *v, long off, unsigned char mask)
{
    vga_outw(v, 0x3ce, ((unsigned)mask << 8) | GC_BIT_MASK);
    vga_rmw(v, off, 8);
}

/* The horizontal case, which the original singles out so it can write whole
 * bytes: a partial mask at each end and 0xff for everything between. */
static void hline(VGA *v, int x0, int x1, int y)
{
    long p = vga_offset(v, x0, y);
    /* first = the pixels from x0 to the end of its byte,
     * last  = the pixels from the start of x1's byte through x1. */
    unsigned char first = (unsigned char)~(unsigned char)(0xfeu << ((x0 & 7) ^ 7));
    unsigned char last = (unsigned char)(0xffu << ((x1 & 7) ^ 7));
    int bytes = (x1 >> 3) - (x0 >> 3);

    if (x0 & 7) {
        if (bytes == 0) {
            put(v, p, (unsigned char)(last & first));   /* both ends, one byte */
            return;
        }
        put(v, p, first);
        p++;
        bytes--;
    }
    while (bytes--) {
        put(v, p, 0xff);
        p++;
    }
    put(v, p, last);
}

/* 20a9:0952 and 20a9:0a39 -- the run is longer across than down, so x advances
 * every pixel and y only when the error turns over.
 *
 * The original accumulates consecutive pixels of one byte into AH and writes
 * once per byte (`mov ah,bl` / `or ah,bl` / `ror bl,1`), which is kept here:
 * the masks it merges are disjoint, so it makes no difference to the result,
 * but it keeps the shape of the code the same as the original's.
 */
static void bres_x(VGA *v, long off, unsigned char bit, int count,
                   int err, int inc_flat, int inc_step, int ystep, int style)
{
    unsigned char pending = 0;

    for (;;) {
        int draw = 1;

        if (style != JW_STYLE_SOLID) {
            style = ((style << 1) | ((style >> 15) & 1)) & 0xffff;   /* rol */
            draw = style & 1;
        }
        if (draw) {
            pending |= bit;
        }

        bit = (unsigned char)((bit >> 1) | (bit << 7));     /* ror: next pixel */
        if (bit & 0x80) {                    /* the mask wrapped: next byte */
            if (pending) {
                put(v, off, pending);
            }
            pending = 0;
            off++;
            if (--count == 0) {
                return;
            }
            if (err < 0) {
                err += inc_flat;
            } else {
                err += inc_step;
                off += ystep;
            }
            continue;
        }
        if (err < 0) {
            err += inc_flat;
            if (--count == 0) {
                break;
            }
            continue;                        /* same byte, keep accumulating */
        }
        err += inc_step;
        if (pending) {
            put(v, off, pending);
        }
        pending = 0;
        off += ystep;
        if (--count == 0) {
            return;
        }
    }
    if (pending) {
        put(v, off, pending);
    }
}

/* 20a9:0991 and 20a9:0a8b -- longer down than across, so y advances every
 * pixel.  `ror ah,1` followed by `adc di,0` is what steps x: when the mask
 * wraps out of the byte the carry moves the pointer along one. */
static void bres_y(VGA *v, long off, unsigned char bit, int count,
                   int err, int inc_flat, int inc_step, int ystep, int style)
{
    for (;;) {
        int draw = 1;

        if (style != JW_STYLE_SOLID) {
            style = ((style << 1) | ((style >> 15) & 1)) & 0xffff;
            draw = style & 1;
        }
        if (draw) {
            put(v, off, bit);
        }
        off += ystep;
        if (--count == 0) {
            return;
        }
        if (err < 0) {
            err += inc_flat;
        } else {
            err += inc_step;
            if (bit & 1) {                   /* ror out of the byte */
                off++;                       /* adc di, 0          */
            }
            bit = (unsigned char)((bit >> 1) | (bit << 7));
        }
    }
}

void jw_line(VGA *v, int x0, int y0, int x1, int y1,
             unsigned colour, unsigned rop, int style)
{
    int dx, dy, major, minor, ystep, err, inc_flat, inc_step;
    long off;
    unsigned char bit;

    jw_set_colour(v, colour, rop);

    if (x1 < x0) {                           /* draw left to right */
        int t = x0; x0 = x1; x1 = t;
        t = y0; y0 = y1; y1 = t;
    }
    dx = x1 - x0;
    dy = y1 - y0;

    if (style == JW_STYLE_SOLID) {
        if (dx == 0 && dy == 0) {
            put(v, vga_offset(v, x0, y0), VGA_PIXEL_BIT(x0));
            vga_outw(v, 0x3ce, 0xff08);
            return;
        }
        if (dx == 0) {                       /* vertical: one bit, step down */
            long p;
            int n = dy < 0 ? -dy : dy;
            int top = dy < 0 ? y1 : y0;

            p = vga_offset(v, x0, top);
            vga_outw(v, 0x3ce,
                     ((unsigned)VGA_PIXEL_BIT(x0) << 8) | GC_BIT_MASK);
            for (n++; n > 0; n--) {
                vga_rmw(v, p, 8);
                p += v->stride;
            }
            vga_outw(v, 0x3ce, 0xff08);
            return;
        }
        if (dy == 0) {                       /* horizontal: whole bytes */
            hline(v, x0, x1, y0);
            vga_outw(v, 0x3ce, 0xff08);
            return;
        }
    }

    ystep = dy < 0 ? -v->stride : v->stride;
    if (dy < 0) {
        dy = -dy;
    }
    major = dx;
    minor = dy;
    if (major < minor) {
        int t = major; major = minor; minor = t;
    }
    inc_flat = minor * 2;
    err = inc_flat - major;
    inc_step = (minor - major) * 2;

    off = vga_offset(v, x0, y0);
    bit = VGA_PIXEL_BIT(x0);
    if (dx >= dy) {
        bres_x(v, off, bit, major + 1, err, inc_flat, inc_step, ystep, style);
    } else {
        bres_y(v, off, bit, major + 1, err, inc_flat, inc_step, ystep, style);
    }
    vga_outw(v, 0x3ce, 0xff08);
}

/* FUN_20a9_075c -- one pixel.
 *
 *     out(0x3ce, (1 << ((x & 7) ^ 7)) << 8 | 8);   // GC 8  bit mask
 *     out(0x3ce, 0x0205);                          // GC 5  write mode 2
 *     out(0x3ce, (rop << 8) | 3);                  // GC 3  function
 *     al = *p;                                     // latch load
 *     al = colour;
 *     *p = al;                                     // mode 2: al IS the colour
 *
 * Note the mode: the line routine puts the colour in set/reset and writes a
 * byte the hardware throws away, while this one writes the colour itself.
 */
void jw_point(VGA *v, int x, int y, unsigned colour, unsigned rop)
{
    long off;

    /* Outside the clip is not drawn.  vga_rmw only checks that the byte is
     * inside the buffer, which a byte one past the end of a scan line is -- it
     * is the first byte of the next one, and drawing there puts a dot on the
     * far side of the screen. */
    if (vga_clipped(v, x, y)) {
        return;
    }
    off = vga_offset(v, x, y);

    vga_outw(v, 0x3ce, ((unsigned)VGA_PIXEL_BIT(x) << 8) | GC_BIT_MASK);
    vga_outw(v, 0x3ce, 0x0205);
    vga_outw(v, 0x3ce, (rop << 8) | 3);
    vga_read(v, off);                       /* the latch load the original does */
    vga_rmw(v, off, (unsigned char)colour);
    vga_outw(v, 0x3ce, 0x0005);             /* FUN_20a9_0702 puts mode 0 back */
    vga_outw(v, 0x3ce, 0xff08);
}

/* The arc's inner plotter, FUN_20a9_0d1a (link 10a9:0d1a), and the table of
 * pieces it reads.
 *
 * The sweep does not reach it as a pair of angles.  It reaches it as a list of
 * at most five pieces, each one a quadrant and a *box* in screen coordinates,
 * and every offset the walk produces is mirrored into the piece's quadrant and
 * kept only if it lands inside that piece's box:
 *
 *     cmp [bx+si+0x32], ax   jge ...    x <= box.xhi
 *     cmp [bx+si+0x3c], ax   jle ...    x >= box.xlo
 *     cmp [bx+si+0x46], ax   jl  ...    y <= box.yhi
 *     cmp [bx+si+0x50], ax   jg  ...    y >= box.ylo
 *
 * with the quadrant at [bx+si+0x28] and -1 ending the list.  A box is an
 * axis-aligned rectangle, so it is not the same thing as the angles it was
 * built from: a pixel a little past the end angle is still drawn when it sits
 * inside the rectangle, which is exactly what the original does and what no
 * angle test can be made to do.
 *
 * The table is read out of the original rather than guessed at.  One arc of 0
 * to 22 degrees, radius 5, centred at (150,120), under
 *
 *     DOSEMU_BP=11B9:0D1A DOSEMU_BPPTR=8 DOSEMU_BPPTRAT=40 DOSEMU_BPPTRN=50
 *
 * prints one piece: quadrant 0, x 154..155, y 118..120.  Giving the same arc a
 * centre of (150.5, 120.25) and a radius of 5.6 prints those same numbers, so
 * the box is built from the *truncated* centre and radius, the ones the walk
 * itself uses -- 154 is (int)(150 + 5*cos 22) and 118 is (int)(120 - 5*sin 22),
 * the truncation coming after the centre is added, not before. */
typedef struct {
    int q;                                  /* which mirror: 0..3, anticlockwise */
    int xlo, xhi, ylo, yhi;
} ArcPiece;

/* The sweep cut at the quadrant boundaries, each piece carrying the box its own
 * two ends make.  At most five pieces: a sweep that starts inside a quadrant
 * and runs a whole turn comes back into it, and that is the fifth. */
static int arc_pieces(ArcPiece *p, int cx, int cy, int rx, int ry,
                      double start, double end)
{
    static const double RAD = 3.14159265358979323846 / 180.0;
    int n = 0;
    double a = start;

    while (a < end && n < 5) {
        const double q = floor(a / 90.0);
        double b = (q + 1.0) * 90.0;
        double x0, x1, y0, y1;

        if (b > end) {
            b = end;
        }
        x0 = cx + rx * cos(a * RAD);
        x1 = cx + rx * cos(b * RAD);
        y0 = cy - ry * sin(a * RAD);
        y1 = cy - ry * sin(b * RAD);
        p[n].q = ((int)q) & 3;
        p[n].xlo = (int)(x0 < x1 ? x0 : x1);
        p[n].xhi = (int)(x0 < x1 ? x1 : x0);
        p[n].ylo = (int)(y0 < y1 ? y0 : y1);
        p[n].yhi = (int)(y0 < y1 ? y1 : y0);
        n++;
        a = b;
    }
    return n;
}

static void arc_pixel(VGA *v, int cx, int cy, int dx, int dy,
                      const ArcPiece *pieces, int n,
                      unsigned colour, unsigned rop, int *style)
{
    static const int SX[4] = { 1, -1, -1,  1 };
    static const int SY[4] = { -1, -1,  1,  1 };   /* screen y, so 0 is upwards */
    int draw = 1, i;

    /* The style word is rotated once per step whatever gets drawn, and the bit
     * that decides is the one leaving the top: `test byte [bx+0x5b], 0x80` and
     * then `shl word [bx+0x5a], 1` with that same bit put back at the bottom.
     * jw_line's inner loops do it in that order too. */
    if (*style != JW_STYLE_SOLID) {
        *style = ((*style << 1) | ((*style >> 15) & 1)) & 0xffff;
        draw = *style & 1;
    }
    if (!draw) {
        return;
    }
    for (i = 0; i < n; i++) {
        const int px = cx + dx * SX[pieces[i].q];
        const int py = cy + dy * SY[pieces[i].q];

        /* A pixel on an axis belongs to two mirrors, and one at a quadrant
         * boundary to two pieces; the original plots it twice and so does
         * this, which is the same picture. */
        if (px >= pieces[i].xlo && px <= pieces[i].xhi
            && py >= pieces[i].ylo && py <= pieces[i].yhi) {
            jw_point(v, px, py, colour, rop);
        }
    }
}

/* JW_CAD's own fixed-point trigonometry, and the polyline it builds arcs out of.
 *
 * Big arcs are not drawn dot by dot: the pixel routine only ever sees small
 * circles, and everything else goes to the line routine as a chain of straight
 * pieces.  Watching which instruction writes the screen bytes under one of
 * SAMPLE6's door swings says so (dosv_emu_cpp, `DOSEMU_WATCH=A2A9F-A2A9F` ->
 * `20a9:094b`, the line routine), and reading the line calls gives the chain.
 *
 * The routine that generates it is 1def:0228, and what follows is a
 * transcription of it -- read from the instructions (`python tools/disasm.py
 * 0def:03e0 0x440`) and checked against the arguments it is handed
 * (`DOSEMU_BP=0EFF:0228 DOSEMU_BPN=24 DOSEMU_BPDBL=2,6,10`).  It gets the
 * centre and the radius as doubles in *screen* units, the two angles as 32-bit
 * 16.16 fixed-point degrees, and the flatten and tilt as the record stores
 * them.  From those:
 *
 *     rx    = (long)r                        the radius, truncated
 *     ry    = (long)(flatten * r * 0.0001)   the other semi-axis, likewise
 *     step  = 20 degrees below rx 20, then 10, 8, 5, 2 and 1
 *             at 80, 160, 320 and 640
 *
 * and the vertices are the start angle exactly, then *whole degrees* from
 * floor(start) + step on while they stay inside the sweep, then the end angle
 * exactly.  Dropping the start's fraction is the original's own doing: it
 * builds the loop variable as `angle.high = start.high + step` and stores a
 * zero over the low word, which is also why almost every vertex comes out of
 * the table below rather than out of floating point.
 *
 * Each vertex is the float centre plus a whole number -- every endpoint the
 * line routine is handed carries exactly the centre's fraction -- and the whole
 * number is the two trig values turned by the tilt, in 16.16:
 *
 *     u = cos16(rx, angle)      v = -sin16(ry, angle)
 *     x = cx + ((u*ct) >> 16) + ((v*st) >> 16)
 *     y = cy + ((v*ct) >> 16) - ((u*st) >> 16)
 *
 * Screen y runs downwards and that sign convention already accounts for it, so
 * nothing here flips anything: the caller passes screen coordinates. */

/* round(cos(d) * 65536) for d = 0..90 -- the table the original keeps at
 * DGROUP 0x1b44..0x1cac and reads in four directions: forwards for a sine,
 * backwards for a cosine, negated past 90 and past 180.  Written out rather
 * than computed, so that the port cannot disagree with it over one ulp of some
 * platform's cos(). */
static const long kCos16[91] = {
    65536, 65526, 65496, 65446, 65376, 65287, 65177, 65048, 64898, 64729,
    64540, 64332, 64104, 63856, 63589, 63303, 62997, 62672, 62328, 61966,
    61584, 61183, 60764, 60326, 59870, 59396, 58903, 58393, 57865, 57319,
    56756, 56175, 55578, 54963, 54332, 53684, 53020, 52339, 51643, 50931,
    50203, 49461, 48703, 47930, 47143, 46341, 45525, 44695, 43852, 42995,
    42126, 41243, 40348, 39441, 38521, 37590, 36647, 35693, 34729, 33754,
    32768, 31772, 30767, 29753, 28729, 27697, 26656, 25607, 24550, 23486,
    22415, 21336, 20252, 19161, 18064, 16962, 15855, 14742, 13626, 12505,
    11380, 10252,  9121,  7987,  6850,  5712,  4572,  3430,  2287,  1144,
        0
};

/* The angle in whole degrees, folded the way the original folds it. */
static long fix_cos(int deg)
{
    int d = deg % 360;

    if (d < 0) d += 360;
    if (d <=  90) return  kCos16[d];
    if (d <= 180) return -kCos16[180 - d];
    if (d <= 270) return -kCos16[d - 180];
    return kCos16[360 - d];
}

static long fix_sin(int deg)
{
    int d = deg % 360;

    if (d < 0) d += 360;
    if (d <=  90) return  kCos16[90 - d];
    if (d <= 180) return  kCos16[d - 90];
    if (d <= 270) return -kCos16[270 - d];
    return -kCos16[d - 270];
}

/* `mov ax, dx` after a 32-bit multiply: the high word of a signed long, which
 * is a floor and not a truncation.  Written as a divide so that it does not
 * depend on how this compiler shifts a negative number. */
static long sar16(long x)
{
    return x >= 0 ? x / 65536L : -((-x + 65535L) / 65536L);
}

/* 1000:0965 (cosine) and 1000:083a (sine), which differ only in which way they
 * read the table.  `ang` is 16.16 fixed degrees, `r` a whole radius.
 *
 * A whole number of degrees goes through the table; anything else is computed
 * in floating point, by the same routine, with the degrees-to-radians constant
 * the original keeps at DGROUP 0x91e0 (which is exactly pi/180/65536).
 *
 * The rounding is the part that could not be guessed: the product is nudged by
 * half a unit *away from zero* and then floored, so that value(r, 180) is
 * -r-1 rather than -r and value(r, 90) is -1 rather than 0.  That one pixel is
 * what makes the original's chains sit inside the true circle on the left and
 * below. */
static int trig16(int r, long ang, int want_sin)
{
    long prod;

    if (ang & 0xffffL) {
        const double d2r = 3.14159265358979323846 / 180.0 / 65536.0;
        const double rad = (double)ang * d2r;

        prod = (long)((double)r * (want_sin ? sin(rad) : cos(rad)) * 65536.0);
    } else {
        const int deg = (int)(ang >> 16);

        prod = (long)r * (want_sin ? fix_sin(deg) : fix_cos(deg));
    }
    prod = prod > 0 ? prod + 32768L : prod - 32768L;
    return (int)sar16(prod);
}

/* One vertex of the chain, in screen pixels, as a float. */
static void arc_vertex(double cx, double cy, int rx, int ry, long ang,
                       long ct, long st, double *px, double *py)
{
    const long u = trig16(rx, ang, 0);
    const long v = -trig16(ry, ang, 1);

    *px = cx + (double)(sar16(u * ct) + sar16(v * st));
    *py = cy + (double)(sar16(v * ct) - sar16(u * st));
}

/* One piece of the chain, cut to the clip.
 *
 * The line routine walks bytes, so a piece that leaves the screen carries on
 * into the next scan line; and in the browser's view, which is not clipped to a
 * drawing area, an arc can leave it.  Liang-Barsky, the two ends together --
 * unlike a drawing's lines, an arc's pieces can have *both* ends outside. */
static void clipped_line(VGA *v, double x0, double y0, double x1, double y1,
                         unsigned colour, unsigned rop, int style)
{
    const double dx = x1 - x0, dy = y1 - y0;
    double t0 = 0.0, t1 = 1.0;
    int i;

    for (i = 0; i < 4; i++) {
        const double p = i == 0 ? -dx : i == 1 ? dx : i == 2 ? -dy : dy;
        const double q = i == 0 ? x0 - v->clip_x0
                       : i == 1 ? v->clip_x1 + 1 - x0
                       : i == 2 ? y0 - v->clip_y0
                                : v->clip_y1 + 1 - y0;
        double r;

        if (p == 0.0) {
            if (q < 0.0) {
                return;                 /* parallel and outside */
            }
            continue;
        }
        r = q / p;
        if (p < 0.0) {
            if (r > t1) return;
            if (r > t0) t0 = r;
        } else {
            if (r < t0) return;
            if (r < t1) t1 = r;
        }
    }
    {
        /* Clamped as well as cut: the cast can land a pixel past the edge when
         * the parameter comes out a hair over. */
        int ax = (int)(x0 + t0 * dx), ay = (int)(y0 + t0 * dy);
        int bx = (int)(x0 + t1 * dx), by = (int)(y0 + t1 * dy);

        if (ax < v->clip_x0) ax = v->clip_x0;
        if (bx < v->clip_x0) bx = v->clip_x0;
        if (ax > v->clip_x1) ax = v->clip_x1;
        if (bx > v->clip_x1) bx = v->clip_x1;
        if (ay < v->clip_y0) ay = v->clip_y0;
        if (by < v->clip_y0) by = v->clip_y0;
        if (ay > v->clip_y1) ay = v->clip_y1;
        if (by > v->clip_y1) by = v->clip_y1;
        /* JW_TRACE=1 prints the chain the same way the original's own line
         * calls come out of the emulator, which is what tools/qpoly.py sets
         * the two side by side with. */
        if (getenv("JW_TRACE")) {
            printf("(%9.4f,%9.4f)-(%9.4f,%9.4f)\n", x0, y0, x1, y1);
        }
        jw_line(v, ax, ay, bx, by, colour, rop, style);
    }
}

void jw_arc_poly(VGA *v, double cx, double cy, double r, int flatten,
                 long start, long end, long tilt, unsigned colour, unsigned rop,
                 int style)
{
    const double d2r = 3.14159265358979323846 / 180.0 / 65536.0;
    const int rx = (int)r;
    const int ry = (int)((double)flatten * r * 0.0001);
    const long step = (long)(rx < 20 ? 20 : rx < 80 ? 10 : rx < 160 ? 8
                             : rx < 320 ? 5 : rx < 640 ? 2 : 1) << 16;
    /* The tilt's own cosine and sine, at the same 16.16 scale.
     *
     * The one that has to be measured rather than worked out is a quarter turn:
     * the original's sine comes back a hair short of one there, so the whole
     * number it stores is 65535 and not 65536.  Its cosine at no turn at all is
     * the full 65536, and at a half and a three-quarter turn both come back
     * exactly -65536, so this is the sine alone.  Read straight out of the
     * original for all four (dosv_emu_cpp, `DOSEMU_BP=0EFF:061E,0EFF:0667`).
     * It is not a rounding nicety: at 65536 the whole chain of an arc tilted by
     * ninety degrees sits one pixel across from where the original puts it. */
    const double trad = (double)tilt * d2r;
    const long ct = (long)(cos(trad) * 65536.0);
    long st = (long)(sin(trad) * 65536.0);
    long a, eff_end = end > start ? end : end + (360L << 16);
    double px, py, qx, qy;

    if (st == 65536L) {
        st = 65535L;
    }
    arc_vertex(cx, cy, rx, ry, start, ct, st, &px, &py);
    for (a = ((start >> 16) << 16) + step; a <= eff_end; a += step) {
        arc_vertex(cx, cy, rx, ry, a, ct, st, &qx, &qy);
        clipped_line(v, px, py, qx, qy, colour, rop, style);
        px = qx;
        py = qy;
    }
    arc_vertex(cx, cy, rx, ry, end, ct, st, &qx, &qy);
    clipped_line(v, px, py, qx, qy, colour, rop, style);
}

void jw_arc(VGA *v, double cxf, double cyf, double r,
            double start, double end, unsigned colour, unsigned rop, int style)
{
    ArcPiece pieces[5];
    const int cx = (int)cxf, cy = (int)cyf;
    const int rx = (int)r;
    double a = rx, b = rx;
    double x, y, d1, d2;
    int n;

    /* A radius that truncates to nothing is one dot at the truncated centre,
     * whatever the sweep says.  SAMPLE2 has eight of them (radii 0.37 and
     * 0.6167, two of them whole circles) and the original draws exactly one
     * pixel for each -- read off its own pixel calls. */
    if (rx < 0) {
        return;
    }
    if (rx == 0) {
        jw_point(v, cx, cy, colour, rop);
        return;
    }
    /* Both angles into the range the original puts them in: the start into
     * [0,360) and the end into (0,360], each by whole turns -- four loops at
     * 0def:194a that add or subtract 360 one turn at a time.  An end that is
     * not past the start is a turn further on, which is how the record says
     * "the whole circle" and also what makes a sweep that crosses zero come
     * out as pieces on both sides of it. */
    while (start < 0.0) {
        start += 360.0;
    }
    while (start >= 360.0) {
        start -= 360.0;
    }
    while (end <= 0.0) {
        end += 360.0;
    }
    while (end > 360.0) {
        end -= 360.0;
    }
    if (end <= start) {
        end += 360.0;
    }
    n = arc_pieces(pieces, cx, cy, rx, rx, start, end);

    /* Radius one is its own case.  The original plots three dots for it --
     * (0,1), (1,1), (1,0) -- where the two-region walk below gives only the
     * first and the last, and SAMPLE6 has forty-seven of them.  Read out of
     * its own pixel calls (11B9:0D1A) for a drawing of nothing but small
     * circles; for every radius from two to nine the walk below is right to
     * the dot. */
    if (a == 1.0 && b == 1.0) {
        arc_pixel(v, cx, cy, 0, 1, pieces, n, colour, rop, &style);
        arc_pixel(v, cx, cy, 1, 1, pieces, n, colour, rop, &style);
        arc_pixel(v, cx, cy, 1, 0, pieces, n, colour, rop, &style);
        return;
    }

    /* The midpoint ellipse, in the two regions where the slope crosses -1. */
    x = 0.0;
    y = b;
    d1 = b * b - a * a * b + 0.25 * a * a;
    /* The region boundary is the plain `a*a*y > b*b*x`, not the textbook's
     * `a*a*(y-0.5) > b*b*(x+1)`.  The original's own pixel calls say so: for
     * radius 4 it plots (0,4)(1,4)(2,3)(3,3)(3,2)(4,1)(4,0) and for radius 1
     * (0,1)(1,1)(1,0) -- the (3,3) and the (1,1) are exactly the points the
     * textbook form drops. */
    while (a * a * y > b * b * x) {
        arc_pixel(v, cx, cy, (int)x, (int)y, pieces, n, colour, rop, &style);
        if (d1 < 0.0) {
            x += 1.0;
            d1 += 2.0 * b * b * x + b * b;
        } else {
            x += 1.0;
            y -= 1.0;
            d1 += 2.0 * b * b * x - 2.0 * a * a * y + b * b;
        }
    }
    d2 = b * b * (x + 0.5) * (x + 0.5) + a * a * (y - 1.0) * (y - 1.0)
       - a * a * b * b;
    while (y >= 0.0) {
        arc_pixel(v, cx, cy, (int)x, (int)y, pieces, n, colour, rop, &style);
        if (d2 > 0.0) {
            y -= 1.0;
            d2 += a * a - 2.0 * a * a * y;
        } else {
            y -= 1.0;
            x += 1.0;
            d2 += 2.0 * b * b * x - 2.0 * a * a * y + a * a;
        }
    }
}

/* FUN_20a9_014e -- stamp a glyph, through write mode 3.
 *
 *     FUN_20a9_0732(fg, 0);           // set/reset = fg, enable = 0x0f
 *     out(0x3ce, 0x0305);             // GC 5 = write mode 3
 *     ...
 *     out(0x3ce, fg << 8 | 0);        // set/reset = fg
 *     al = *vram;  al = *glyph;  *vram = al;       // paint where the bits are
 *     out(0x3ce, bg << 8 | 0);        // set/reset = bg
 *     al = *vram;  al = ~*glyph; *vram = al;       // and the background
 *
 * In write mode 3 the byte the CPU writes becomes the bit mask, so one byte of
 * the glyph paints eight pixels in one go.  That is why the code writes the
 * glyph itself rather than putting it in the bit mask register.
 */
void jw_glyph(VGA *v, int x, int y, int w, int h,
              const unsigned char *bits, unsigned fg, unsigned bg)
{
    const int stride = (w + 7) / 8;
    /* Where x falls inside its byte.  The bits have to be slid over by that
     * much, because the screen byte holds eight fixed columns and a glyph does
     * not have to start on one of them.  Without this the whole cell snapped
     * left to the byte boundary -- up to seven pixels -- which is what put
     * TEST6's banner three pixels off with everything else about it right. */
    const int shift = x & 7;
    const int bytes = stride + (shift ? 1 : 0);
    int row, col;

    jw_set_colour(v, fg, ROP_REPLACE);
    vga_outw(v, 0x3ce, 0x0305);                 /* GC 5 = write mode 3 */

    for (row = 0; row < h; row++) {
        const int first = x >> 3;           /* arithmetic: floor, for x < 0 */
        long at;
        unsigned char carry = 0;

        if (y + row < v->clip_y0 || y + row > v->clip_y1) {
            continue;
        }
        at = vga_offset(v, x, y + row);
        for (col = 0; col < bytes; col++) {
            const unsigned char s = col < stride ? bits[row * stride + col] : 0;
            const int bx = (first + col) * 8;
            unsigned char g = (unsigned char)(carry | (s >> shift));
            int b;

            carry = (unsigned char)(shift ? s << (8 - shift) : 0);
            /* The byte has to belong to *this* scan line.  Without the test a
             * glyph running off the right edge carried on into the left of the
             * next one -- which is what the browser front end showed as
             * rubbish down the sides and as doubled text when zoomed in. */
            if (first + col < 0 || first + col >= v->stride) {
                continue;
            }
            for (b = 0; b < 8; b++) {
                if (bx + b < v->clip_x0 || bx + b > v->clip_x1) {
                    g &= (unsigned char)~(0x80u >> b);
                }
            }
            if (!g && bg == fg) {
                continue;
            }
            vga_outw(v, 0x3ce, (fg << 8) | GC_SET_RESET);
            vga_rmw(v, at + col, g);
            if (bg != fg) {
                vga_outw(v, 0x3ce, (bg << 8) | GC_SET_RESET);
                vga_rmw(v, at + col, (unsigned char)~g);
            }
        }
    }
    vga_outw(v, 0x3ce, 0x0005);                 /* back to write mode 0 */
    vga_outw(v, 0x3ce, 0xff08);
}
