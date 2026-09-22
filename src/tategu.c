/* The fittings library.  See tategu.h. */
#include "tategu.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* A record is six whole numbers and nothing else; the line that opens a shape
 * is one number and a label.  So counting the numbers tells them apart. */
static int numbers(const char *s, int *out, int want)
{
    int got = 0;

    while (*s && got < want) {
        while (*s == ' ' || *s == '\t' || *s == '\r' || *s == '\n') {
            s++;
        }
        if (!*s) {
            break;
        }
        if (*s != '-' && (*s < '0' || *s > '9')) {
            break;              /* a label: whatever came before it is all */
        }
        out[got++] = (int)strtol(s, (char **)&s, 10);
    }
    return got;
}

int jw_tategu_read(const char *path, JwTategu *out)
{
    char line[256];
    FILE *f = fopen(path, "rb");
    JwTateguShape *shape = 0;

    memset(out, 0, sizeof(*out));
    if (!f) {
        return 0;
    }
    while (fgets(line, (int)sizeof line, f)) {
        int v[8];
        int got;

        if (line[0] == '#') {
            continue;           /* a comment */
        }
        got = numbers(line, v, 7);
        if (got == 1 && v[0] == 999) {
            /* the next line opens a shape */
            if (out->n < JW_TATEGU_MAX) {
                shape = &out->shape[out->n++];
                shape->parts = 0;
                shape->n = 0;
            } else {
                shape = 0;
            }
            continue;
        }
        if (!shape) {
            continue;           /* the count at the top of the file */
        }
        if (shape->parts == 0) {
            /* `3                [1]` -- the number of parts, then a label */
            if (got >= 1) {
                shape->parts = v[0];
            }
            continue;
        }
        if (got >= 6 && shape->n < JW_TATEGU_LINES) {
            JwTateguLine *l = &shape->line[shape->n++];
            const char *e = strchr(line, 'E');

            memset(l, 0, sizeof(*l));
            l->a = v[0];
            l->b = v[1];
            l->x1 = v[2];
            l->y1 = v[3];
            l->x2 = v[4];
            l->y2 = v[5];
            /* `... 3 1 1A` -- 線色, 線種, レイヤ.  Without them the line is
             * pen 2, which is what the shapes that carry none come out as. */
            l->pen = got >= 7 ? v[6] : 2;
            /* `... 1 0 -1 E 90 12` -- the `E` turns the record into an arc
             * and the two numbers after it are the sweep and the mode. */
            if (e && numbers(e + 1, v, 2) == 2) {
                l->arc = 1;
                l->sweep = v[0];
                l->mode = v[1];
            }
        }
    }
    fclose(f);
    return out->n;
}
