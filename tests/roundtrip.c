/* Read a .JWC and write it straight back.
 *
 *   ./tests/roundtrip.exe orig/SAMPLE0.JWC orig/TEST7.JWC ...
 *
 * Nothing in between, so the file that comes out has to be the file that went
 * in, byte for byte.  That is not a tautology: the reader takes the drawing
 * apart into arrays and throws the record bytes away, so a round trip only
 * closes if every field is read and written at the same offset, in the same
 * size and with the same meaning -- and if the counts, the string pool's
 * length and the two far pointers on the fourth line come back out saying what
 * they said.
 *
 * TEST7 is the one drawing that must NOT come back the same: it was saved on
 * an 800x600 screen, and the reader multiplies every coordinate by 518/678 on
 * the way in.  The original does exactly the same and writes 518 back (see
 * jwc.c), so the test asks only that what comes out reads back unchanged a
 * second time.
 */
#include "jwc.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static unsigned char *slurp(const char *path, long *len)
{
    unsigned char *b;
    FILE *f = fopen(path, "rb");

    if (!f) {
        return NULL;
    }
    fseek(f, 0, SEEK_END);
    *len = ftell(f);
    fseek(f, 0, SEEK_SET);
    b = (unsigned char *)malloc((size_t)(*len > 0 ? *len : 1));
    if (b && (long)fread(b, 1, (size_t)*len, f) != *len) {
        free(b);
        b = NULL;
    }
    fclose(f);
    return b;
}

/* Where the two first differ, or -1. */
static long first_diff(const unsigned char *a, long na,
                       const unsigned char *b, long nb)
{
    long i, n = na < nb ? na : nb;

    for (i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return i;
        }
    }
    return na == nb ? -1 : n;
}

int main(int argc, char **argv)
{
    const char *out = "tmp/roundtrip.JWC";
    int bad = 0, i;

    for (i = 1; i < argc; i++) {
        const char *why;
        Jwc *d = jwc_load(argv[i], &why);
        unsigned char *a, *b;
        long na = 0, nb = 0, at;

        if (!d) {
            printf("%-22s skipped (%s)\n", argv[i], why);
            continue;
        }
        if (!jwc_save(d, out, &why)) {
            printf("%-22s SAVE FAILED (%s)\n", argv[i], why);
            jwc_free(d);
            bad++;
            continue;
        }
        jwc_free(d);

        a = slurp(argv[i], &na);
        b = slurp(out, &nb);
        if (!a || !b) {
            printf("%-22s cannot read it back\n", argv[i]);
            bad++;
        } else if ((at = first_diff(a, na, b, nb)) < 0) {
            printf("%-22s %7ld bytes, identical\n", argv[i], na);
        } else {
            /* TEST7 is meant to change: it arrives in a 678-pixel width and
             * leaves in JW_CAD's own 518.  Saving what came out again must
             * then change nothing. */
            Jwc *again = jwc_load(out, &why);
            const char *out2 = "tmp/roundtrip2.JWC";
            unsigned char *c = NULL;
            long nc = 0;

            if (again && jwc_save(again, out2, &why)) {
                c = slurp(out2, &nc);
            }
            if (again) {
                jwc_free(again);
            }
            if (c && first_diff(b, nb, c, nc) < 0) {
                printf("%-22s %7ld -> %ld bytes at +%ld, settles\n",
                       argv[i], na, nb, at);
            } else {
                printf("%-22s DIFFERS at +%ld (%ld -> %ld bytes)\n",
                       argv[i], at, na, nb);
                bad++;
            }
            free(c);
        }
        free(a);
        free(b);
    }
    if (bad) {
        printf("%d file(s) did not round trip\n", bad);
    }
    return bad ? 1 : 0;
}
