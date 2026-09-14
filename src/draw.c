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
