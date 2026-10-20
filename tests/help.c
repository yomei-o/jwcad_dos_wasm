/* Draw the screen with HELP on a page and, given the original's own picture,
 * say how many pixels differ.
 *
 *   ./tests/help.exe PAGE tmp/help.raw [tmp/help_orig.raw]
 *
 * With no drawing loaded and the pointer where the original leaves it for the
 * script in tools/helpcheck.sh.  The command picked in the menu is the first

 */
#include "help.h"
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
    int page, mx = 620, my = 470;

    if (argc < 3) {
        fprintf(stderr, "usage: help PAGE OUT.raw [ORIG.raw]\n");
        return 2;
    }
    page = atoi(argv[1]);
    vga_reset(&v, 0x12);
    if (!jw_view_fonts("font")) {
        fprintf(stderr, "no fonts in font/\n");
        return 1;
    }
    jw_view_palette(&v, "orig/JW_PAL.DAT");
    jw_ui_default(&s);
    s.guide = jw_ui_guide();
    jw_ui_draw(&v, &s);
    if (!jw_help_ready()) {
        fprintf(stderr, "no orig/JW_CADV.HLP\n");
        return 1;
    }
    jw_help_draw(&v, page);
    jw_ui_cursor(&v, mx, my);
    vga_render(&v, pixels);
    jw_view_rgba(&v, pixels, rgba);
    f = fopen(argv[2], "wb");
    if (!f) {
        fprintf(stderr, "cannot write %s\n", argv[2]);
        return 1;
    }
    fwrite(rgba, 1, sizeof rgba, f);
    fclose(f);
    if (argc > 3) {
        static unsigned char want[640 * 480 * 4];
        long n = 0, i;

        f = fopen(argv[3], "rb");
        if (!f || fread(want, 1, sizeof want, f) != sizeof want) {
            fprintf(stderr, "cannot read %s\n", argv[3]);
            return 1;
        }
        fclose(f);
        for (i = 0; i < 640L * 480; i++) {
            if (memcmp(want + i * 4, rgba + i * 4, 3) != 0) {
                n++;
            }
        }
        printf("%ld pixels differ from %s\n", n, argv[3]);
        return n ? 1 : 0;
    }
    return 0;
}
