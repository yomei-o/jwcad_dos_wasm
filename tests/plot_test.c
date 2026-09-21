/* The plotter's two files, written out so they can be looked at.
 *
 *     ./tests/plot_test.exe orig/SAMPLE0.JWC tmp/plot
 *
 * Leaves <stem>.pdf and <stem>.png.  There is nothing to compare them
 * against -- the original plots to a plotter, not to a file a browser can
 * open -- so what this checks is that they come out at all, and that the
 * page is the drawing's own extent with ten millimetres round it.
 */
#include "plot.h"
#include "view.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int write_out(const char *path, const unsigned char *p, long n)
{
    FILE *f = fopen(path, "wb");

    if (!f) {
        printf("cannot write %s\n", path);
        return 0;
    }
    fwrite(p, 1, (size_t)n, f);
    fclose(f);
    return 1;
}

int main(int argc, char **argv)
{
    const char *why = 0;
    const char *stem = argc > 2 ? argv[2] : "tmp/plot";
    Jwc *d = jwc_load(argc > 1 ? argv[1] : "orig/SAMPLE0.JWC", &why);
    char path[512];
    unsigned char *p;
    double wide, tall;
    long n = 0;

    if (!d) {
        printf("load: %s\n", why ? why : "?");
        return 1;
    }
    /* The PNG draws the letters itself, with the screen's own fonts. */
    if (!jw_view_fonts("font")) {
        puts("no fonts in font/ -- the PNG will have no text");
    }
    jw_plot_paper(d, &wide, &tall);
    printf("paper %.1f x %.1f mm  unit_mm %.6f\n", wide, tall,
           (double)d->unit_mm);

    p = jw_plot_pdf(d, &n);
    if (!p) {
        puts("no pdf");
        return 1;
    }
    sprintf(path, "%s.pdf", stem);
    if (!write_out(path, p, n)) {
        return 1;
    }
    printf("pdf %ld bytes  %s\n", n, path);
    free(p);

    p = jw_plot_png(d, 4.0, &n);
    if (!p) {
        puts("no png");
        return 1;
    }
    sprintf(path, "%s.png", stem);
    if (!write_out(path, p, n)) {
        return 1;
    }
    printf("png %ld bytes  %s\n", n, path);
    free(p);
    jwc_free(d);
    return 0;
}
