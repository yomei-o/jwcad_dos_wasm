/* Check that the graphics controller behaves the way JW_CAD's drawing code
 * assumes -- without which nothing translated from `20a9` can be trusted.
 *
 * The two routines below are transcriptions, not inventions: `set_colour` is
 * FUN_20a9_0732 and `vline` is the `x0 == x1` arm of FUN_20a9_07dc, with
 * `out(...)` becoming vga_outw and `*p = *p | 8` becoming vga_rmw.
 *
 *   sh tools/build_tests.sh && ./tests/vga_test.exe
 */
#include "vga.h"

#include <stdio.h>
#include <string.h>

static int failures;

static void check(const char *what, int got, int want)
{
    if (got != want) {
        printf("FAIL %-42s got %d, want %d\n", what, got, want);
        failures++;
    }
}

/* FUN_20a9_0732(colour, rop) */
static void set_colour(VGA *v, unsigned colour, unsigned rop)
{
    vga_outw(v, 0x3ce, colour << 8);             /* GC 0 set/reset    */
    vga_outw(v, 0x3ce, 0x0f01);                  /* GC 1 enable s/r   */
    vga_outw(v, 0x3ce, (rop << 8) | 3);          /* GC 3 function     */
    vga_outw(v, 0x3ce, 0x0005);                  /* GC 5 write mode 0 */
    vga_outw(v, 0x3ce, 0xff08);                  /* GC 8 bit mask     */
}

/* The vertical-line arm of FUN_20a9_07dc:
 *
 *     out(0x3ce, CONCAT11(1 << ((x & 7) ^ 7), 8));
 *     do { *p = *p | 8; p += stride; } while (--n);
 */
static void vline(VGA *v, int x, int y0, int y1)
{
    long p = vga_offset(v, x, y0);
    int n = y1 - y0 + 1;

    vga_outw(v, 0x3ce, ((unsigned)(1u << ((x & 7) ^ 7)) << 8) | 8);
    do {
        vga_rmw(v, p, 8);
        p += v->stride;
    } while (--n);
}

static unsigned char pixels[VGA_MAX_STRIDE * 8 * VGA_MAX_HEIGHT];

static int pixel_at(const VGA *v, int x, int y)
{
    return pixels[(long)y * v->width + x];
}

int main(void)
{
    static VGA v;
    int y, n;

    vga_reset(&v, 0x12);
    check("mode 12h width", v.width, 640);
    check("mode 12h height", v.height, 480);
    check("mode 12h stride", v.stride, 80);
    check("mode 6a stride", (vga_reset(&v, 0x6a), v.stride), 100);

    vga_reset(&v, 0x12);
    check("offset of (0,0)", (int)vga_offset(&v, 0, 0), 0);
    check("offset of (8,1)", (int)vga_offset(&v, 8, 1), 81);
    check("bit for x=0", VGA_PIXEL_BIT(0), 0x80);
    check("bit for x=7", VGA_PIXEL_BIT(7), 0x01);

    /* One vertical line in colour 9, replacing what is under it. */
    set_colour(&v, 9, ROP_REPLACE);
    vline(&v, 3, 10, 20);
    vga_render(&v, pixels);
    check("line pixel", pixel_at(&v, 3, 10), 9);
    check("line pixel (far end)", pixel_at(&v, 3, 20), 9);
    check("just above the line", pixel_at(&v, 3, 9), 0);
    check("just below the line", pixel_at(&v, 3, 21), 0);
    check("neighbour in the same byte", pixel_at(&v, 2, 15), 0);
    check("neighbour in the same byte", pixel_at(&v, 4, 15), 0);

    n = 0;
    for (y = 0; y < v.height; y++) {
        if (pixel_at(&v, 3, y)) {
            n++;
        }
    }
    check("line length", n, 11);

    /* XOR over the same pixels must take them back to the background: the
     * original uses this for the rubber-band cursor. */
    set_colour(&v, 9, ROP_XOR);
    vline(&v, 3, 10, 20);
    vline(&v, 3, 10, 20);
    vga_render(&v, pixels);
    check("XOR twice leaves colour 9", pixel_at(&v, 3, 15), 9);

    set_colour(&v, 9, ROP_XOR);
    vline(&v, 3, 10, 20);
    vga_render(&v, pixels);
    check("one XOR clears it", pixel_at(&v, 3, 15), 0);

    /* Colour 0 with replace is how the original erases. */
    set_colour(&v, 12, ROP_REPLACE);
    vline(&v, 100, 0, 5);
    set_colour(&v, 0, ROP_REPLACE);
    vline(&v, 100, 0, 5);
    vga_render(&v, pixels);
    check("erased with colour 0", pixel_at(&v, 100, 3), 0);

    /* A bit mask of 0xff writes all eight pixels of the byte at once, which is
     * what the block routines rely on. */
    set_colour(&v, 7, ROP_REPLACE);
    vga_outw(&v, 0x3ce, 0xff08);
    vga_rmw(&v, vga_offset(&v, 200, 40), 0);
    vga_render(&v, pixels);
    check("whole byte written", pixel_at(&v, 200, 40), 7);
    check("whole byte written", pixel_at(&v, 207, 40), 7);
    check("next byte untouched", pixel_at(&v, 208, 40), 0);

    if (failures) {
        printf("%d checks failed\n", failures);
        return 1;
    }
    printf("vga: all checks passed\n");
    return 0;
}
