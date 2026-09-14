#include "fontx.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static unsigned rd16(const unsigned char *p)
{
    return (unsigned)(p[0] | (p[1] << 8));
}

int fontx_load(Fontx *f, const char *path)
{
    FILE *fp = fopen(path, "rb");

    memset(f, 0, sizeof *f);
    if (!fp) {
        return 0;
    }
    fseek(fp, 0, SEEK_END);
    f->len = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    f->data = (unsigned char *)malloc((size_t)(f->len > 0 ? f->len : 1));
    if (!f->data || (long)fread(f->data, 1, (size_t)f->len, fp) != f->len) {
        fclose(fp);
        fontx_free(f);
        return 0;
    }
    fclose(fp);

    if (f->len < 18 || memcmp(f->data, "FONTX2", 6) != 0) {
        fontx_free(f);
        return 0;
    }
    f->width = f->data[14];
    f->height = f->data[15];
    f->dbcs = f->data[16];
    if (f->dbcs) {
        f->blocks = f->data[17];
        f->images = 18 + 4L * f->blocks;
    } else {
        f->blocks = 0;
        f->images = 17;
    }
    return f->images <= f->len;
}

void fontx_free(Fontx *f)
{
    free(f->data);
    memset(f, 0, sizeof *f);
}

const unsigned char *fontx_glyph(const Fontx *f, unsigned code)
{
    long size, at;
    int i;

    if (!f->data) {
        return NULL;
    }
    size = (f->width + 7) / 8 * f->height;
    if (!f->dbcs) {
        if (code > 0xff) {
            return NULL;
        }
        at = f->images + (long)code * size;
    } else {
        /* Walk the block table, counting the codes that come before this one:
         * the images are stored in code order with the gaps left out. */
        long before = 0;

        for (i = 0; i < f->blocks; i++) {
            unsigned lo = rd16(f->data + 18 + i * 4);
            unsigned hi = rd16(f->data + 20 + i * 4);

            if (code >= lo && code <= hi) {
                at = f->images + (before + (long)(code - lo)) * size;
                goto found;
            }
            before += (long)(hi - lo) + 1;
        }
        return NULL;
found:  ;
    }
    return at + size <= f->len ? f->data + at : NULL;
}
