/* What the port's pick answers, in the original's own numbering.
 *
 *   ./tests/pick.exe orig/SAMPLE0.JWC 197 157 200 140
 *
 * The original's entity search answers **one number**, the entity counting
 * from one -- tools/pickat.sh reads it straight out of the running original.
 * This prints the same number for the port, so the two can be put side by side
 * (tools/pickcheck.sh does that).  A line is its index plus one; an arc is
 * counted after the lines, which is the order the file keeps them in.
 */
#include "cmd.h"
#include "jwc.h"
#include "view.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    const char *why;
    Jwc *d;
    JwView w;
    int i;

    if (argc < 2) {
        fprintf(stderr, "usage: pick IN.JWC X Y [X Y ...]\n");
        return 2;
    }
    d = jwc_load(argv[1], &why);
    if (!d) {
        fprintf(stderr, "%s: %s\n", argv[1], why);
        return 1;
    }
    jw_view_original(&w);
    for (i = 2; i + 1 < argc; i += 2) {
        const int sx = atoi(argv[i]), sy = atoi(argv[i + 1]);
        /* The filtered pick, because that is 追加･除外's: only what is drawn
         * with the pen and line type selected for writing. */
        long k = jw_cmd_line_at_kind(d, &w, sx, sy, 1);
        long j = k < 0 ? jw_cmd_arc_at_kind(d, &w, sx, sy, 1) : -1;
        double x, y;

        jw_cmd_at(&w, sx, sy, &x, &y);
        if (k >= 0) {
            printf("port     drawing (%g,%g) -> %ld\n", x, y, k + 1);
        } else if (j >= 0) {
            printf("port     drawing (%g,%g) -> %ld\n", x, y, d->n_lines + j + 1);
        } else {
            printf("port     drawing (%g,%g) -> nothing\n", x, y);
        }
    }
    jwc_free(d);
    return 0;
}
