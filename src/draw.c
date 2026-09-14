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

/* The arc's inner plotter, FUN_20a9_0d1a: one offset from the centre, mirrored
 * into the four quadrants, each mirror kept only if it is inside that
 * quadrant's angle bounds.  The original indexes a table of up to five
 * quadrant pieces; the sweep here is one range, which is the same thing said
 * more directly. */
static void arc_pixel(VGA *v, int cx, int cy, int dx, int dy,
                      double s, double e, double tilt_c, double tilt_s,
                      double rx, double ry,
                      unsigned colour, unsigned rop, int *style)
{
    static const int SX[4] = { 1, -1, -1,  1 };
    static const int SY[4] = { 1,  1, -1, -1 };
    int q;

    for (q = 0; q < 4; q++) {
        double ux = dx * SX[q], uy = dy * SY[q];
        double ang;
        int px, py;

        if ((dx == 0 && SX[q] < 0) || (dy == 0 && SY[q] < 0)) {
            continue;                       /* the axes belong to one quadrant */
        }
        /* Which angle on the unturned ellipse this pixel is, in degrees. */
        ang = atan2(uy / (ry > 0.0 ? ry : 1.0), ux / (rx > 0.0 ? rx : 1.0));
        ang = ang * 180.0 / 3.14159265358979323846;
        if (ang < 0.0) {
            ang += 360.0;
        }
        if (ang < s) {
            ang += 360.0;
        }
        if (ang > e) {
            continue;
        }
        px = cx + (int)(ux * tilt_c - uy * tilt_s);
        py = cy + (int)(ux * tilt_s + uy * tilt_c);

        if (*style != JW_STYLE_SOLID && !(*style & 1)) {
            continue;
        }
        jw_point(v, px, py, colour, rop);
    }
    if (*style != JW_STYLE_SOLID) {
        /* `*(int *)(state + 0x5a) <<= 1` with a 1 shifted in, once per step. */
        *style = ((*style << 1) | ((*style >> 15) & 1)) & 0xffff;
    }
}

/* JW_CAD's own integer cosine, and the polyline it builds arcs out of.
 *
 * Big arcs are not drawn dot by dot: the pixel routine (20a9:0d1a) only ever
 * sees radii up to four -- of SAMPLE6's 64 arcs it is called for the 55 small
 * ones and for none of the others -- and everything else goes to the line
 * routine as a chain of straight pieces.  Watching which instruction writes the
 * screen bytes under one of SAMPLE6's door swings says so, and reading the line
 * calls gives the chain.
 *
 * The endpoints handed to the line routine are the *float* centre plus a whole
 * number: every one of them has exactly the centre's fraction.  The whole
 * number comes from an integer trig routine (1000:0965) which takes the
 * truncated radius and a 32-bit angle whose high word is degrees.  Asking the
 * original for 636 of them -- a drawing of thirty quarter circles, radii 5 to
 * 34, in each of the four quadrants, read back through the emulator -- pins it
 * exactly:
 *
 *     cos_fixed(a) = round(cos a * 32768)            1.15 fixed point
 *     value(r, a)  = (r * cos_fixed + 16384) >> 15   arithmetic shift
 *                    and one less again if cos a < 0
 *
 * The last line is the off-by-one of a routine that folds the angle into the
 * first quadrant and negates, and it matters: it is what makes the chain sit a
 * pixel inside the true circle on the left and below.  All 636 agree.
 *
 * The step is twenty degrees up to radius 19 and ten from 20 on -- measured the
 * same way, one radius at a time, with no gaps.  Vertices are the start, then
 * every step while inside the sweep, then the end. */
static int int_cos(int r, double deg)
{
    const double d2r = 3.14159265358979323846 / 180.0;
    double m = fmod(deg, 360.0);
    double f, v;
    long t, p;
    int q;

    if (m < 0.0) {
        m += 360.0;
    }
    q = (int)(m / 90.0);
    f = (m - 90.0 * q) * d2r;
    /* Folded into the first quadrant, so that cos 60 is a half to the last bit
     * and the rounding of the fixed-point table is the original's. */
    switch (q) {
    case 0:  v =  cos(f); break;
    case 1:  v = -sin(f); break;
    case 2:  v = -cos(f); break;
    default: v =  sin(f); break;
    }
    t = v >= 0.0 ? (long)floor(v * 32768.0 + 0.5)
                 : -(long)floor(-v * 32768.0 + 0.5);
    p = (long)floor(((double)r * (double)t + 16384.0) / 32768.0);
    /* `<= 0`, not `< 0`: at ninety degrees, where the cosine is nothing at all,
     * the original still takes the negative branch.  Its own first vertex for
     * SAMPLE6's quarter circle is one pixel along the axis, not on it, and the
     * 636 measured values never land on zero so they cannot tell the two
     * apart. */
    return (int)(t <= 0 ? p - 1 : p);
}

/* One vertex of the chain, in screen pixels, as a float. */
static void arc_vertex(double cx, double cy, int rx, int ry, double ang,
                       int tilt, double *px, double *py)
{
    /* The drawing's y runs up, the screen's down; the record's tilt turns the
     * offsets, not the angle.  For the whole-quadrant tilts every drawing here
     * uses, that is an exact swap of the two whole numbers. */
    const double d2r = 3.14159265358979323846 / 180.0;
    int dx = int_cos(rx, ang);
    int dy = int_cos(ry, ang - 90.0);
    int t = ((tilt % 360) + 360) % 360;

    if (t % 90 == 0) {
        int n = t / 90, i, a;

        for (i = 0; i < n; i++) {
            a = dx;
            dx = -dy;
            dy = a;
        }
        *px = cx + dx;
        *py = cy - dy;
    } else {
        const double c = cos(t * d2r), s = sin(t * d2r);

        *px = cx + (dx * c - dy * s);
        *py = cy - (dx * s + dy * c);
    }
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
        jw_line(v, ax, ay, bx, by, colour, rop, style);
    }
}

void jw_arc_poly(VGA *v, double cx, double cy, int rx, int ry, int tilt,
                 double start, double end, unsigned colour, unsigned rop,
                 int style)
{
    const double step = rx <= 19 ? 20.0 : 10.0;
    double a, px, py, qx, qy;

    if (end <= start) {
        end += 360.0;
    }
    arc_vertex(cx, cy, rx, ry, start, tilt, &px, &py);
    for (a = start + step; a < end; a += step) {
        arc_vertex(cx, cy, rx, ry, a, tilt, &qx, &qy);
        clipped_line(v, px, py, qx, qy, colour, rop, style);
        px = qx;
        py = qy;
    }
    arc_vertex(cx, cy, rx, ry, end, tilt, &qx, &qy);
    clipped_line(v, px, py, qx, qy, colour, rop, style);
}

void jw_arc(VGA *v, int cx, int cy, int rx, int flatten, int tilt,
            double start, double end, unsigned colour, unsigned rop, int style)
{
    double ry = rx * (flatten > 0 ? flatten / 10000.0 : 1.0);
    double t = tilt * 3.14159265358979323846 / 180.0;
    double tc = cos(t), ts = sin(t);
    double a = rx, b = ry;
    double x, y, d1, d2;

    if (rx <= 0) {
        return;
    }
    /* Fold the sweep into [0,360) and make the end come after the start, so a
     * pixel's own angle can be compared against it directly.  start == end is
     * the whole ellipse, which is how the .JWC record says "a circle". */
    start = start - 360.0 * floor(start / 360.0);
    end = end - 360.0 * floor(end / 360.0);
    if (end <= start) {
        end += 360.0;
    }

    /* Radius one is its own case.  The original plots three dots for it --
     * (0,1), (1,1), (1,0) -- where the two-region walk below gives only the
     * first and the last, and SAMPLE6 has forty-seven of them.  Read out of
     * its own pixel calls (11B9:0D1A) for a drawing of nothing but small
     * circles; for every radius from two to nine the walk below is right to
     * the dot. */
    if (a == 1.0 && b == 1.0) {
        arc_pixel(v, cx, cy, 0, 1, start, end, tc, ts, a, b, colour, rop, &style);
        arc_pixel(v, cx, cy, 1, 1, start, end, tc, ts, a, b, colour, rop, &style);
        arc_pixel(v, cx, cy, 1, 0, start, end, tc, ts, a, b, colour, rop, &style);
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
        arc_pixel(v, cx, cy, (int)x, (int)y, start, end, tc, ts, a, b,
                  colour, rop, &style);
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
        arc_pixel(v, cx, cy, (int)x, (int)y, start, end, tc, ts, a, b,
                  colour, rop, &style);
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
