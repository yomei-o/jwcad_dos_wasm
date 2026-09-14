/* FONTX2 fonts -- the format DOS/V fonts come in.
 *
 * JW_CAD has no font of its own; it asks DOS/V for one through
 * `INT 15h AX=5000h` and calls the routine it gets back with `es:si` pointing
 * at a buffer and `cx` holding the character code (see RESUME.md, 文字).  The
 * port supplies the font instead, and uses FONTX2 so the same files can later
 * be served to a DOS/V emulator running the original -- the two only draw the
 * same glyphs if they read the same font.
 *
 * font/JWANK16.FNT and font/JWKAN16.FNT are built from the Shinonome BDF
 * sources by tools/mkfontx.py; see font/PROVENANCE.md.
 */
#ifndef JW_FONTX_H
#define JW_FONTX_H

typedef struct {
    unsigned char *data;
    long len;
    int width, height;
    int dbcs;                   /* 1 = two-byte codes with a block table */
    int blocks;                 /* how many, for the double-byte form */
    long images;                /* where the glyph images start */
} Fontx;

int fontx_load(Fontx *f, const char *path);
void fontx_free(Fontx *f);

/* The glyph for `code`, or NULL.  (width + 7) / 8 * height bytes, one bit per
 * pixel, the leftmost pixel in the high bit. */
const unsigned char *fontx_glyph(const Fontx *f, unsigned code);

#endif
