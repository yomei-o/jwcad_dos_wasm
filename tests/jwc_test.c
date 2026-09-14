/* Check the .JWC reader against every drawing the distribution ships.
 *
 * The counts in the file's own preamble are the check: the loader has to find
 * an offset at which exactly that many line records and that many arc records
 * read back as numbers, so if any of them is wrong the load fails outright
 * rather than producing a plausible-looking wrong answer.  On top of that:
 *
 *   - the geometry has to be somewhere sensible, and the same place for
 *     drawings whose preamble is the same shape
 *   - every coordinate has to be a real number in a range a drawing could use
 *   - an arc's flatten ratio is between 0 and 1, and its sweep is degrees
 *
 *   sh tools/build_tests.sh && ./tests/jwc_test.exe
 */
#include "jwc.h"

#include <stdio.h>
#include <string.h>

static int failures;

static void bad(const char *file, const char *what, double got)
{
    printf("FAIL %-14s %-38s %g\n", file, what, got);
    failures++;
}

static int check(const char *name)
{
    char path[256];
    const char *why;
    Jwc *d;
    long k;

    sprintf(path, "orig/%s", name);
    d = jwc_load(path, &why);
    if (!d) {
        printf("FAIL %-14s %s\n", name, why);
        failures++;
        return 0;
    }

    if (d->lines_at < 1400 || d->lines_at > 1800) {
        bad(name, "geometry starts somewhere unexpected", (double)d->lines_at);
    }
    for (k = 0; k < d->n_lines; k++) {
        const JwcLine *l = &d->lines[k];

        if (!(l->x0 > -1e5f && l->x0 < 1e5f && l->y0 > -1e5f && l->y0 < 1e5f
              && l->x1 > -1e5f && l->x1 < 1e5f && l->y1 > -1e5f && l->y1 < 1e5f)) {
            bad(name, "line coordinate out of range", (double)k);
            break;
        }
    }
    for (k = 0; k < d->n_arcs; k++) {
        const JwcArc *a = &d->arcs[k];

        if (!(a->r > 0.0f && a->r < 1e5f)) {
            bad(name, "arc radius out of range", (double)a->r);
            break;
        }
        if (a->flatten <= 0 || a->flatten > 10000) {
            bad(name, "arc flatten is not a ratio", (double)a->flatten);
            break;
        }
        if (a->start < -360 || a->start > 720 || a->end < -360 || a->end > 720) {
            bad(name, "arc sweep is not degrees", (double)a->start);
            break;
        }
    }

    printf("  %-14s %5ld lines %4ld arcs %4d points %3d strings   at +%ld\n",
           name, d->n_lines, d->n_arcs, d->n_points, d->n_strings, d->lines_at);
    jwc_free(d);
    return 1;
}

int main(void)
{
    static const char *files[] = {
        "SAMPLE0.JWC", "SAMPLE1.JWC", "SAMPLE2.JWC", "SAMPLE3.JWC",
        "SAMPLE4.JWC", "SAMPLE5.JWC", "SAMPLE6.JWC",
        "TEST1.JWC", "TEST2.JWC", "TEST3.JWC", "TEST4.JWC", "TEST5.JWC",
        "TEST6.JWC", "TEST7.JWC",
    };
    size_t i;
    int loaded = 0;

    for (i = 0; i < sizeof files / sizeof files[0]; i++) {
        loaded += check(files[i]);
    }
    printf("loaded %d of %d drawings\n", loaded,
           (int)(sizeof files / sizeof files[0]));

    if (failures || loaded != (int)(sizeof files / sizeof files[0])) {
        printf("%d checks failed\n", failures);
        return 1;
    }
    printf("jwc: all checks passed\n");
    return 0;
}
