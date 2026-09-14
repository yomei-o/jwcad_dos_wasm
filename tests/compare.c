/* Compare two screens, pixel for pixel, and say where they differ.
 *
 *   ./tests/compare.exe A.raw B.raw tmp/diff.png [x0 y0 x1 y1]
 *
 * Both files are 640x480 RGBA, which is what this port's own screenshots are
 * (tests/drawing.exe with a .raw name, jw_view_rgba) and what dosv_emu_cpp
 * writes for a `shot` whose name ends in .raw.  That is the whole point of the
 * format agreeing: the original and the port can be put side by side with
 * nothing in between to be wrong about.
 *
 * `cmp -s` already answers "are they the same".  What it cannot answer is the
 * question that follows every "no": *where*, and in which direction.  So the
 * output is a difference map --
 *
 *   black   both agree, background
 *   white   both agree, something drawn
 *   red     only A has something here
 *   green   only B has something here
 *   yellow  both drew, in different colours
 *
 * -- plus the counts and the bounding box of the disagreement, because a port
 * that is one pixel off everywhere and a port that is wrong in one corner look
 * identical in a single number.
 */
#include "png.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define W 640
#define H 480

static unsigned char *load(const char *path, long *n)
{
    FILE *f = fopen(path, "rb");
    unsigned char *b;
    long size;

    if (!f) {
        fprintf(stderr, "cannot read %s\n", path);
        return NULL;
    }
    fseek(f, 0, SEEK_END);
    size = ftell(f);
    fseek(f, 0, SEEK_SET);
    b = malloc((size_t)size);
    if (!b || fread(b, 1, (size_t)size, f) != (size_t)size) {
        fprintf(stderr, "cannot read %s\n", path);
        free(b);
        fclose(f);
        return NULL;
    }
    fclose(f);
    *n = size;
    return b;
}

int main(int argc, char **argv)
{
    static unsigned char map[W * H];
    static unsigned char pal[256][3];
    const char *pa, *pb, *out;
    unsigned char *a, *b;
    long na = 0, nb = 0;
    int x0 = 0, y0 = 0, x1 = W - 1, y1 = H - 1;
    int x, y;
    long same = 0, diff = 0, drawn = 0;
    int dx0 = W, dy0 = H, dx1 = -1, dy1 = -1;

    if (argc < 4) {
        fprintf(stderr, "usage: compare A.raw B.raw out.png [x0 y0 x1 y1]\n");
        return 2;
    }
    pa = argv[1];
    pb = argv[2];
    out = argv[3];
    if (argc >= 8) {
        x0 = atoi(argv[4]); y0 = atoi(argv[5]);
        x1 = atoi(argv[6]); y1 = atoi(argv[7]);
    }
    if (x0 < 0) x0 = 0;
    if (y0 < 0) y0 = 0;
    if (x1 >= W) x1 = W - 1;
    if (y1 >= H) y1 = H - 1;

    a = load(pa, &na);
    if (!a) return 1;
    b = load(pb, &nb);
    if (!b) { free(a); return 1; }
    if (na != (long)W * H * 4 || nb != (long)W * H * 4) {
        fprintf(stderr, "expected %ld bytes of RGBA in each; got %ld and %ld\n",
                (long)W * H * 4, na, nb);
        free(a); free(b);
        return 1;
    }

    memset(map, 0, sizeof map);
    for (y = y0; y <= y1; y++) {
        for (x = x0; x <= x1; x++) {
            const long i = ((long)y * W + x) * 4;
            const int a_lit = a[i] || a[i + 1] || a[i + 2];
            const int b_lit = b[i] || b[i + 1] || b[i + 2];
            const int equal = a[i] == b[i] && a[i + 1] == b[i + 1] && a[i + 2] == b[i + 2];

            if (equal) {
                same++;
                if (a_lit) { drawn++; map[(long)y * W + x] = 1; }
                continue;
            }
            diff++;
            map[(long)y * W + x] = (unsigned char)(!b_lit ? 2 : !a_lit ? 3 : 4);
            if (x < dx0) dx0 = x;
            if (y < dy0) dy0 = y;
            if (x > dx1) dx1 = x;
            if (y > dy1) dy1 = y;
        }
    }

    pal[0][0] = 0;   pal[0][1] = 0;   pal[0][2] = 0;      /* agree, background */
    pal[1][0] = 255; pal[1][1] = 255; pal[1][2] = 255;    /* agree, drawn */
    pal[2][0] = 255; pal[2][1] = 0;   pal[2][2] = 0;      /* only A */
    pal[3][0] = 0;   pal[3][1] = 255; pal[3][2] = 0;      /* only B */
    pal[4][0] = 255; pal[4][1] = 255; pal[4][2] = 0;      /* both, different colours */
    png_indexed(out, W, H, map, pal);

    printf("%s vs %s  in (%d,%d)-(%d,%d)\n", pa, pb, x0, y0, x1, y1);
    printf("  %ld pixels compared, %ld the same (%ld of them drawn), %ld different (%.2f%%)\n",
           same + diff, same, drawn, diff,
           same + diff ? 100.0 * (double)diff / (double)(same + diff) : 0.0);
    if (diff) {
        printf("  the disagreement spans (%d,%d)-(%d,%d)\n", dx0, dy0, dx1, dy1);
    }
    printf("  wrote %s\n", out);
    free(a);
    free(b);
    return diff ? 1 : 0;
}
