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

    /* The midpoint ellipse, in the two regions where the slope crosses -1. */
    x = 0.0;
    y = b;
    d1 = b * b - a * a * b + 0.25 * a * a;
    while (a * a * (y - 0.5) > b * b * (x + 1.0)) {
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
