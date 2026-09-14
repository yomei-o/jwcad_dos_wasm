/* The VGA as JW_CAD uses it: mode 12h, 640x480, four planes, drawn through the
 * graphics controller's set/reset path.
 *
 * JW_CAD never touches a pixel directly.  It puts the colour in the set/reset
 * register, turns enable-set/reset all the way on, puts the pixels it wants in
 * the bit mask register, and then does a read-modify-write to video memory with
 * a byte whose value the hardware throws away:
 *
 *     out(0x3ce, (0x01 << ((x & 7) ^ 7)) << 8 | 8);   // bit mask = this pixel
 *     *p = *p | 8;                                    // the 8 goes nowhere
 *
 * So the port keeps the graphics controller rather than removing it.  Every
 * drawing routine translated from the original stays a line-for-line copy --
 * `vga_out()` where it had `out()`, `vga_rmw()` where it had `*p |= 8` -- and
 * what comes out can be compared against the original's screen byte for byte.
 * Unpacking the planes into pixels happens once, at the end, in vga_render().
 */
#ifndef JW_VGA_H
#define JW_VGA_H

#include <stddef.h>

/* Mode 12h.  The original reads the line length from the BIOS data area at
 * 0040:004A (the text column count), which is 80 in this mode; -V6a asks for
 * 800x600, where it is 100. */
#define VGA_PLANES      4
#define VGA_MAX_STRIDE  128
#define VGA_MAX_HEIGHT  600

/* Graphics controller registers, by index, with the names the port uses. */
#define GC_SET_RESET        0x00
#define GC_ENABLE_SET_RESET 0x01
#define GC_COLOR_COMPARE    0x02
#define GC_DATA_ROTATE      0x03    /* low 3 bits are the rotate, bits 3-4 the op */
#define GC_READ_MAP         0x04
#define GC_MODE             0x05
#define GC_MISC             0x06
#define GC_COLOR_DONT_CARE  0x07
#define GC_BIT_MASK         0x08

/* The four operations bits 3-4 of GC_DATA_ROTATE select.  These are the values
 * as they sit in the register, because that is what JW_CAD passes: the second
 * argument of FUN_20a9_0732 is written straight into GC 3, so a caller asking
 * for XOR pushes 0x18, not 3. */
#define ROP_REPLACE 0x00
#define ROP_AND     0x08
#define ROP_OR      0x10
#define ROP_XOR     0x18

typedef struct {
    unsigned char plane[VGA_PLANES][VGA_MAX_STRIDE * VGA_MAX_HEIGHT];
    unsigned char latch[VGA_PLANES];    /* loaded by every read, as on the real thing */
    unsigned char gc[16];               /* the graphics controller registers */
    unsigned char index;                /* the last index written to 0x3ce */
    unsigned char palette[16];          /* set through INT 10h AH=10h */
    int stride;                         /* bytes per scan line */
    int width, height;
} VGA;

void vga_reset(VGA *v, int mode);

/* `out dx, ax` -- index in AL, data in AH.  This is how all of JW_CAD's
 * register writes are encoded, and the two cannot be told apart from the value
 * alone: writing set/reset = 0 is `out(0x3ce, 0x0000)`, which looks exactly
 * like a byte write of the index 0. */
void vga_outw(VGA *v, unsigned port, unsigned ax);

/* `outp(port, al)` -- 0x3ce selects the register, 0x3cf writes it.  This is the
 * form FUN_20a9_0702 uses to restore the nine registers one at a time. */
void vga_outb(VGA *v, unsigned port, unsigned char al);

/* Write modes, as GC 5's low two bits select them.  Mode 0 takes the colour
 * from the set/reset register; mode 2 takes it from the low four bits of the
 * byte the CPU writes.  JW_CAD uses both. */
#define GC_MODE_SETRESET 0
#define GC_MODE_COLOUR   2

/* One read-modify-write to video memory.  `data` is what the CPU wrote, which
 * the set/reset path ignores whenever enable-set/reset is on -- as it always is
 * here -- but it is passed through anyway so the translated code can stay
 * literal. */
void vga_rmw(VGA *v, long offset, unsigned char data);

/* A plain read, which on real hardware is what loads the latches. */
unsigned char vga_read(VGA *v, long offset);

/* The byte offset of a pixel, the way the original computes it:
 *     y * DS:0x1cc2 + (x >> 3) + DS:0x1cc8 */
long vga_offset(const VGA *v, int x, int y);

/* The bit mask that selects one pixel inside its byte. */
#define VGA_PIXEL_BIT(x) ((unsigned char)(0x80u >> ((x) & 7)))

/* Unpack the planes into one byte per pixel (0-15), row-major. */
void vga_render(const VGA *v, unsigned char *out);

/* The mode 12h default palette, as 16 RGB triples of 0-255. */
void vga_palette_rgb(const VGA *v, unsigned char rgb[16][3]);

#endif
