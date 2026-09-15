/* What the port's 読取 takes at a screen pixel.
 *
 *     ./tests/readpt.exe orig/SAMPLE0.JWC 170 150 214 152
 *
 * One line per point, in the same shape tools/read.sh prints for the original,
 * so tools/readcheck.sh can put the two side by side.
 */
#include <stdio.h>
#include <stdlib.h>

#include "jwc.h"
#include "read.h"
#include "view.h"

int main(int argc, char **argv)
{
    const char *why = 0;
    Jwc *d;
    JwView w;
    int i;

    if (argc < 4 || (argc - 2) % 2) {
        fprintf(stderr, "usage: readpt <drawing.JWC> <x> <y> [<x> <y> ...]\n");
        return 2;
    }
    d = jwc_load(argv[1], &why);
    if (!d) {
        fprintf(stderr, "%s: %s\n", argv[1], why ? why : "cannot read");
        return 1;
    }
    jw_view_original(&w);
    for (i = 2; i + 1 < argc; i += 2) {
        const int sx = atoi(argv[i]), sy = atoi(argv[i + 1]);
        double x, y;

        if (jw_read(d, &w, sx, sy, &x, &y)) {
            printf("(%d,%d) -> drawing (%.3f,%.3f)  screen (%.3f,%.3f)\n",
                   sx, sy, x, y, x + 121.0, 463.0 - y);
        } else {
            printf("(%d,%d) -> nothing read\n", sx, sy);
        }
    }
    return 0;
}
