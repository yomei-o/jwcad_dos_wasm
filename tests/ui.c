/* Draw the screen chrome and, given the original's own picture, say how many
 * pixels differ.
 *
 *   ./tests/ui.exe tmp/ui.raw [tmp/ui_orig.raw]
 *
 * The original's picture is what dosv_emu_cpp captures with no drawing loaded
 * (tools/mkmask.sh takes the same shot).  The whole 640x480 is compared, not
 * just the drawing area: the point of this one is the frame around it.
 */
#include "jwc.h"
#include "ui.h"
#include "view.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static unsigned char pixels[640 * 480];
static unsigned char rgba[640 * 480 * 4];

int main(int argc, char **argv)
{
    VGA v;
    JwUi s;
    FILE *f;

    if (argc < 2) {
        fprintf(stderr, "usage: ui OUT.raw [ORIG.raw]\n");
        return 2;
    }
    vga_reset(&v, 0x12);
    if (!jw_view_fonts("font")) {
        fprintf(stderr, "no fonts in font/\n");
        return 1;
    }
    jw_view_palette(&v, "orig/JW_PAL.DAT");
    jw_ui_default(&s);
    s.guide = jw_ui_guide();
    jw_ui_draw(&v, &s);
    /* and the pointer where the original leaves it: DS:c3ba = DS:c3bc = 200 */
    jw_ui_cursor(&v, 200, 200);
    vga_render(&v, pixels);
    jw_view_rgba(&v, pixels, rgba);
    f = fopen(argv[1], "wb");
    if (!f) {
        fprintf(stderr, "cannot write %s\n", argv[1]);
        return 1;
    }
    fwrite(rgba, 1, sizeof rgba, f);
    fclose(f);
    printf("wrote %s\n", argv[1]);

    if (argc > 2) {
        static unsigned char want[640 * 480 * 4];
        long n = 0, i;

        f = fopen(argv[2], "rb");
        if (!f) {
            fprintf(stderr, "cannot read %s\n", argv[2]);
            return 1;
        }
        if (fread(want, 1, sizeof want, f) != sizeof want) {
            fprintf(stderr, "%s is not a 640x480 RGBA screen\n", argv[2]);
            fclose(f);
            return 1;
        }
        fclose(f);
        for (i = 0; i < 640L * 480; i++) {
            if (memcmp(want + i * 4, rgba + i * 4, 3) != 0) {
                n++;
            }
        }
        printf("%ld pixels differ from %s\n", n, argv[2]);
        return n ? 1 : 0;
    }
    return 0;
}
