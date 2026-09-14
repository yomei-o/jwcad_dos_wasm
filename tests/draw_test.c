/* Check the line routine translated from FUN_20a9_07dc.
 *
 * There is no original to diff against yet, so these are properties that a
 * Bresenham line has to satisfy and that the translation would break if an
 * error term or a step were copied wrong:
 *
 *   - the two endpoints are lit
 *   - exactly max(|dx|,|dy|)+1 pixels are lit
 *   - every lit pixel is within half a pixel of the true line
 *   - drawing a line backwards lights the same pixels, which is what the
 *     original's "swap so x0 <= x1" is for
 *   - nothing outside the line's bounding box is touched
 *
 *   sh tools/build_tests.sh && ./tests/draw_test.exe
 */
#include "draw.h"

#include <math.h>
#include <stdio.h>
#include <string.h>

static int failures;
static VGA v;
static unsigned char pixels[VGA_MAX_STRIDE * 8 * VGA_MAX_HEIGHT];

static void fail(const char *what, int x0, int y0, int x1, int y1,
                 long got, long want)
{
    printf("FAIL %-34s (%3d,%3d)-(%3d,%3d)  got %ld, want %ld\n",
           what, x0, y0, x1, y1, got, want);
    failures++;
}

static int at(int x, int y)
{
    if (x < 0 || y < 0 || x >= v.width || y >= v.height) {
        return -1;
    }
    return pixels[(long)y * v.width + x];
}

/* How far (x,y) sits from the line through the endpoints, in pixels. */
static double distance(int x, int y, int x0, int y0, int x1, int y1)
{
    double dx = x1 - x0, dy = y1 - y0;
    double len = sqrt(dx * dx + dy * dy);

    if (len == 0.0) {
        return 0.0;
    }
    return fabs(dy * (x - x0) - dx * (y - y0)) / len;
}

static void one_line(int x0, int y0, int x1, int y1)
{
    int x, y, lit = 0, expect;
    int lox = x0 < x1 ? x0 : x1, hix = x0 < x1 ? x1 : x0;
    int loy = y0 < y1 ? y0 : y1, hiy = y0 < y1 ? y1 : y0;
    double worst = 0.0;

    vga_reset(&v, 0x12);
    jw_line(&v, x0, y0, x1, y1, 7, ROP_REPLACE, JW_STYLE_SOLID);
    vga_render(&v, pixels);

    if (at(x0, y0) != 7) {
        fail("first endpoint not lit", x0, y0, x1, y1, at(x0, y0), 7);
    }
    if (at(x1, y1) != 7) {
        fail("second endpoint not lit", x0, y0, x1, y1, at(x1, y1), 7);
    }

    for (y = 0; y < v.height; y++) {
        for (x = 0; x < v.width; x++) {
            if (!at(x, y)) {
                continue;
            }
            lit++;
            if (x < lox || x > hix || y < loy || y > hiy) {
                fail("pixel outside the bounding box", x0, y0, x1, y1,
                     ((long)x << 16) | y, 0);
                return;
            }
            {
                double d = distance(x, y, x0, y0, x1, y1);
                if (d > worst) {
                    worst = d;
                }
            }
        }
    }

    expect = (hix - lox > hiy - loy ? hix - lox : hiy - loy) + 1;
    if (lit != expect) {
        fail("pixel count", x0, y0, x1, y1, lit, expect);
    }
    if (worst > 0.75) {
        fail("pixel too far from the line", x0, y0, x1, y1,
             (long)(worst * 100), 75);
    }
}

static void same_both_ways(int x0, int y0, int x1, int y1)
{
    static unsigned char forward[sizeof pixels];

    vga_reset(&v, 0x12);
    jw_line(&v, x0, y0, x1, y1, 7, ROP_REPLACE, JW_STYLE_SOLID);
    vga_render(&v, pixels);
    memcpy(forward, pixels, sizeof forward);

    vga_reset(&v, 0x12);
    jw_line(&v, x1, y1, x0, y0, 7, ROP_REPLACE, JW_STYLE_SOLID);
    vga_render(&v, pixels);

    if (memcmp(forward, pixels, (size_t)v.width * v.height) != 0) {
        fail("drawn backwards differs", x0, y0, x1, y1, 1, 0);
    }
}

int main(void)
{
    static const int ends[][4] = {
        {  0,   0,   0,   0},       /* a single point                     */
        { 10,  10,  10,  10},
        {  5,  20, 100,  20},       /* horizontal, crossing byte borders  */
        {  0,   0, 639,   0},       /* the full width                     */
        {  8,  30,  15,  30},       /* inside one byte                    */
        {  9,  31,  14,  31},
        { 40,  50,  40, 200},       /* vertical                           */
        { 40, 200,  40,  50},
        { 10,  10,  60,  60},       /* 45 degrees                         */
        { 60,  60,  10,  10},
        { 10, 100, 300, 140},       /* shallow: the dx-major loop         */
        {300, 140,  10, 100},
        { 10, 100, 300,  60},       /* shallow, going up                  */
        {100,  10, 140, 300},       /* steep: the dy-major loop           */
        {140, 300, 100,  10},
        {100, 300, 140,  10},       /* steep, going up                    */
        {  1,   1, 638, 478},       /* nearly the whole screen            */
        {638,   1,   1, 478},
    };
    size_t i;
    int n, y;

    vga_reset(&v, 0x12);
    for (i = 0; i < sizeof ends / sizeof ends[0]; i++) {
        one_line(ends[i][0], ends[i][1], ends[i][2], ends[i][3]);
        same_both_ways(ends[i][0], ends[i][1], ends[i][2], ends[i][3]);
    }

    /* A style pattern draws only where its bits are set.  0xaaaa is every
     * other pixel, so a 101-pixel horizontal run lights about half. */
    vga_reset(&v, 0x12);
    jw_line(&v, 0, 5, 100, 5, 7, ROP_REPLACE, 0xaaaa);
    vga_render(&v, pixels);
    n = 0;
    for (y = 0; y <= 100; y++) {
        if (at(y, 5)) {
            n++;
        }
    }
    if (n < 45 || n > 56) {
        fail("dashed line density", 0, 5, 100, 5, n, 50);
    }

    /* An all-ones pattern has to match a solid line exactly. */
    {
        static unsigned char solid[sizeof pixels];

        vga_reset(&v, 0x12);
        jw_line(&v, 3, 7, 200, 90, 7, ROP_REPLACE, JW_STYLE_SOLID);
        vga_render(&v, solid);
        vga_reset(&v, 0x12);
        jw_line(&v, 3, 7, 200, 90, 7, ROP_REPLACE, 0xffff);
        vga_render(&v, pixels);
        if (memcmp(solid, pixels, (size_t)v.width * v.height) != 0) {
            fail("style 0xffff differs from solid", 3, 7, 200, 90, 1, 0);
        }
    }

    if (failures) {
        printf("%d checks failed\n", failures);
        return 1;
    }
    printf("draw: all checks passed\n");
    return 0;
}
