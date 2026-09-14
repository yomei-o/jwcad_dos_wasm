/* Reading a JW_CAD drawing (.JWC).
 *
 * The file is a memory image: four 200-byte text lines, then the drawing's
 * data structures exactly as they sat in RAM.  Everything below was worked out
 * from the sample drawings and checks itself against the counts the file
 * states -- see jwc.c for how, and for the one thing still not settled.
 */
#ifndef JW_JWC_H
#define JW_JWC_H

typedef struct {
    float x0, y0, x1, y1;
    unsigned char pen, type;    /* constant over runs of segments */
    unsigned char rest[4];
} JwcLine;

typedef struct {
    float cx, cy, r;
    short flatten;      /* minor/major x10000; 10000 is a circle */
    short flatten2;     /* zero in most records */
    short start, start_frac;    /* degrees, and a fraction x10000 */
    short end, end_frac;        /* end == start means the whole ellipse */
    short tilt;                 /* degrees the ellipse is turned by */
    unsigned char pen, type;
    unsigned char rest[4];
} JwcArc;

typedef struct {
    float x0, y0, x1, y1;       /* the baseline: where the text starts and ends */
    const char *text;           /* Shift-JIS, pointing into Jwc.text */
    unsigned char rest[4];
} JwcText;

typedef struct {
    float x, y;
    unsigned char rest[4];
} JwcPoint;

typedef struct {
    char title[64];             /* the drawing's name, Shift-JIS */
    long n_lines;
    long n_arcs;
    int n_texts;
    int n_points;
    JwcLine *lines;
    JwcArc *arcs;
    JwcText *texts;
    JwcPoint *points;
    char *text;                 /* the NUL-separated string pool */
    long text_len;
    long data_at;               /* where the geometry starts, past the preamble */
    long data_end;              /* one past the last point record */
} Jwc;

/* Returns NULL and leaves `why` pointing at a reason on failure. */
Jwc *jwc_load(const char *path, const char **why);
void jwc_free(Jwc *d);

/* The bounding box of everything read. */
void jwc_extent(const Jwc *d, float *x0, float *y0, float *x1, float *y1);

#endif
