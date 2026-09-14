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
    long flatten;               /* always 10000 in the samples; 1.0000 x 10^4 */
    short a[8];                 /* angles in degrees appear here: 0/90/180/270 */
    unsigned char attr[4];
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
