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
        v->palette[i] = (unsigned char)i;
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

unsigned char vga_read(VGA *v, long offset)
{
    int p;

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
    unsigned enable = v->gc[GC_ENABLE_SET_RESET] & 0x0f;
    unsigned setres = v->gc[GC_SET_RESET];
    unsigned rop = (unsigned)(v->gc[GC_DATA_ROTATE] & 0x18);
    unsigned rot = (unsigned)(v->gc[GC_DATA_ROTATE] & 7);
    int p;

    /* The read half of the read-modify-write is what fills the latches; the
     * code being translated relies on it, so do it here rather than asking
     * every caller to remember. */
    vga_read(v, offset);

    if (rot) {
        data = (unsigned char)((data >> rot) | (data << (8 - rot)));
    }

    for (p = 0; p < VGA_PLANES; p++) {
        unsigned char src = (enable & (1u << p))
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

void vga_palette_rgb(const VGA *v, unsigned char rgb[16][3])
{
    int i;

    for (i = 0; i < 16; i++) {
        const unsigned char *c = EGA_DEFAULT[v->palette[i] & 0x0f];
        rgb[i][0] = c[0];
        rgb[i][1] = c[1];
        rgb[i][2] = c[2];
    }
}
