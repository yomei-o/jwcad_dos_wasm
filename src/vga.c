#include "vga.h"

#include <string.h>

/* The sixteen colours mode 12h starts with -- the EGA default, which the BIOS
 * loads into the attribute controller and the DAC on a mode set.  JW_CAD
 * changes individual entries afterwards through INT 10h AH=10h AL=00h
 * (FUN_20a9_005e), so this is only where the screen starts. */
static const unsigned char EGA_DEFAULT[16][3] = {
    {  0,   0,   0}, {  0,   0, 170}, {  0, 170,   0}, {  0, 170, 170},
    {170,   0,   0}, {170,   0, 170}, {170,  85,   0}, {170, 170, 170},
    { 85,  85,  85}, { 85,  85, 255}, { 85, 255,  85}, { 85, 255, 255},
    {255,  85,  85}, {255,  85, 255}, {255, 255,  85}, {255, 255, 255},
};

void vga_reset(VGA *v, int mode)
{
    int i;

    memset(v, 0, sizeof(*v));
    if (mode == 0x6a) {             /* the -V6a SVGA mode the docs describe */
        v->width = 800;
        v->height = 600;
    } else {                        /* 12h, the default */
        v->width = 640;
        v->height = 480;
    }
    v->stride = v->width / 8;
    for (i = 0; i < 16; i++) {
        int c;

        v->palette[i] = (unsigned char)i;
        for (c = 0; c < 3; c++) {
            v->dac[i][c] = (unsigned char)(EGA_DEFAULT[i][c] * 63 / 255);
        }
    }
    v->gc[GC_BIT_MASK] = 0xff;
}

void vga_outw(VGA *v, unsigned port, unsigned ax)
{
    if (port == 0x3ce) {
        v->index = (unsigned char)(ax & 0x0f);
        v->gc[v->index] = (unsigned char)(ax >> 8);
    }
}

void vga_outb(VGA *v, unsigned port, unsigned char al)
{
    if (port == 0x3ce) {
        v->index = (unsigned char)(al & 0x0f);
    } else if (port == 0x3cf) {
        v->gc[v->index] = al;
    }
}

/* Video memory is 64 KB of planes; the original stays inside it because it
 * clips to the drawing area first, and anything translated from it should too.
 * Until every caller does, a write that lands outside is dropped rather than
 * scribbling over the process -- a real card would just wrap. */
static int off_ok(const VGA *v, long offset)
{
    return offset >= 0 && offset < (long)v->stride * v->height;
}

unsigned char vga_read(VGA *v, long offset)
{
    int p;

    if (!off_ok(v, offset)) {
        return 0;
    }
    for (p = 0; p < VGA_PLANES; p++) {
        v->latch[p] = v->plane[p][offset];
    }
    return v->latch[v->gc[GC_READ_MAP] & 3];
}

/* `rop` is GC 3's function bits still in place (0x00/0x08/0x10/0x18), so it can
 * be compared against the ROP_* names without shifting either side. */
static unsigned char apply_rop(unsigned rop, unsigned char src, unsigned char latch)
{
    switch (rop) {
    case ROP_AND: return (unsigned char)(src & latch);
    case ROP_OR:  return (unsigned char)(src | latch);
    case ROP_XOR: return (unsigned char)(src ^ latch);
    default:      return src;
    }
}

void vga_rmw(VGA *v, long offset, unsigned char data)
{
    unsigned char mask = v->gc[GC_BIT_MASK];
    unsigned mode = v->gc[GC_MODE] & 3;
    unsigned enable = v->gc[GC_ENABLE_SET_RESET] & 0x0f;
    unsigned setres = v->gc[GC_SET_RESET];
    unsigned rop = (unsigned)(v->gc[GC_DATA_ROTATE] & 0x18);
    unsigned rot = (unsigned)(v->gc[GC_DATA_ROTATE] & 7);
    int p;

    if (!off_ok(v, offset)) {
        return;
    }

    /* The read half of the read-modify-write is what fills the latches; the
     * code being translated relies on it, so do it here rather than asking
     * every caller to remember. */
    vga_read(v, offset);

    if (rot && mode != 2) {
        data = (unsigned char)((data >> rot) | (data << (8 - rot)));
    }
    if (mode == 3) {
        /* Write mode 3: the CPU byte is not colour and not data -- it becomes
         * the bit mask, ANDed with GC 8, and every plane takes the set/reset
         * value.  This is how JW_CAD stamps a glyph: one write paints the
         * foreground where the glyph's bits are set (FUN_20a9_014e), a second
         * with the byte complemented paints the background. */
        mask = (unsigned char)(mask & data);
    }

    for (p = 0; p < VGA_PLANES; p++) {
        /* Write mode 2 spreads the low four bits of the CPU byte across the
         * planes, the way set/reset does with its own register.  JW_CAD uses
         * mode 0 with set/reset for lines (FUN_20a9_0732) and mode 2 for the
         * arc's pixels (FUN_20a9_075c), so both have to be here. */
        unsigned char src = (mode == 2)
            ? (unsigned char)((data & (1u << p)) ? 0xff : 0x00)
            : (mode == 3 || (enable & (1u << p)))
            ? (unsigned char)((setres & (1u << p)) ? 0xff : 0x00)
            : data;
        unsigned char val = apply_rop(rop, src, v->latch[p]);
        v->plane[p][offset] = (unsigned char)
            ((val & mask) | (v->latch[p] & (unsigned char)~mask));
    }
}

long vga_offset(const VGA *v, int x, int y)
{
    return (long)y * v->stride + (x >> 3);
}

void vga_render(const VGA *v, unsigned char *out)
{
    int y, xb, bit;

    for (y = 0; y < v->height; y++) {
        const unsigned char *row0 = v->plane[0] + (long)y * v->stride;
        const unsigned char *row1 = v->plane[1] + (long)y * v->stride;
        const unsigned char *row2 = v->plane[2] + (long)y * v->stride;
        const unsigned char *row3 = v->plane[3] + (long)y * v->stride;
        unsigned char *dst = out + (long)y * v->width;

        for (xb = 0; xb < v->stride; xb++) {
            for (bit = 7; bit >= 0; bit--) {
                unsigned m = 1u << bit;
                *dst++ = (unsigned char)
                    (((row0[xb] & m) ? 1 : 0) |
                     ((row1[xb] & m) ? 2 : 0) |
                     ((row2[xb] & m) ? 4 : 0) |
                     ((row3[xb] & m) ? 8 : 0));
            }
        }
    }
}

void vga_set_dac(VGA *v, unsigned index, unsigned r, unsigned g, unsigned b)
{
    v->dac[index & 0xff][0] = (unsigned char)(r & 0x3f);
    v->dac[index & 0xff][1] = (unsigned char)(g & 0x3f);
    v->dac[index & 0xff][2] = (unsigned char)(b & 0x3f);
}

/* Six bits to eight, by replicating the top bits: 0x3F -> 0xFF and 0x2A ->
 * 0xAA, both exact.  dosv_emu_cpp does the same, so the two screenshots agree. */
static unsigned char dac8(unsigned char v)
{
    return (unsigned char)((v << 2) | (v >> 4));
}

void vga_palette_rgb(const VGA *v, unsigned char rgb[16][3])
{
    int i, c;

    for (i = 0; i < 16; i++) {
        for (c = 0; c < 3; c++) {
            rgb[i][c] = dac8(v->dac[v->palette[i]][c]);
        }
    }
}
