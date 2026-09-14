/* Reading a JW_CAD drawing (.JWC).
 *
 * The file is a memory image: a fixed 800-byte text preamble, then the data
 * structures as they sat in RAM.  What is decoded here came from the files
 * themselves, checked against the counts the preamble states -- overlay 36 is
 * the routine that writes them, and its decompilation is still too tangled to
 * read line by line, so treat the field names past the geometry as provisional.
 * What IS settled: the counts, the record sizes, and the coordinates.
 */
#ifndef JW_JWC_H
#define JW_JWC_H

typedef struct {
    float x0, y0, x1, y1;
    unsigned char attr[6];      /* constant over runs: pen, type, layer, ... */
} JwcLine;

typedef struct {
    float cx, cy, r;
    short flatten;      /* the minor/major ratio, x10000; 10000 is a circle  */
    short flatten2;     /* zero in most records; a fraction, or part of the tilt */
    short start, end;   /* degrees; equal (usually 0,0) means the whole thing */
    short start_frac, end_frac;   /* hundredths of a degree, x10000 like flatten */
    short tilt;         /* degrees the ellipse is turned by */
    unsigned char pen, type;
    unsigned char rest[4];
} JwcArc;

typedef struct {
    char title[64];             /* the drawing name, Shift-JIS, from the header */
    long n_lines;               /* the preamble's own counts, in its own order: */
    long n_arcs;                /*   lines, circles, points, strings            */
    int n_points;
    int n_strings;
    JwcLine *lines;
    JwcArc *arcs;
    /* Where the geometry was found, for reporting and for tests. */
    long lines_at;
} Jwc;

/* Returns NULL and leaves `why` pointing at a reason on failure. */
Jwc *jwc_load(const char *path, const char **why);
void jwc_free(Jwc *d);

/* The bounding box of everything read. */
void jwc_extent(const Jwc *d, float *x0, float *y0, float *x1, float *y1);

#endif
