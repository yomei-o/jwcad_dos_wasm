/* Reading a JW_CAD drawing (.JWC).
 *
 * The file is a memory image: four 200-byte text lines, then the drawing's
 * data structures exactly as they sat in RAM.  Everything below was worked out
 * from the sample drawings and checks itself against the counts the file
 * states -- see jwc.c for how, and for the one thing still not settled.
 */
#ifndef JW_JWC_H
#define JW_JWC_H

/* `layer` is the high nibble = the layer group (0-F), the low nibble = the
 * layer inside it.  Measured, not guessed: breaking on the original's own
 * per-entity test (dosv_emu_cpp, DOSEMU_BP=1302:0680) prints the byte it is
 * handed, and the values match.  See jwc_visible.
 *
 * It is the *first* of the four trailing bytes in a line, an arc and a point,
 * and the *second* in a text -- the text's first byte is its size.  Reading it
 * at the same place in all four drew the whole of TEST6's hidden dimensioning
 * over the drawing, which is how the difference showed up. */
typedef struct {
    float x0, y0, x1, y1;
    unsigned char type, pen;    /* line type 1-9, then the pen 1-8 */
    unsigned char layer;
    unsigned char rest[4];
} JwcLine;

/* The two angles are 32-bit 16.16 fixed-point degrees, not degrees with a
 * separate fraction: SAMPLE6's tilted ellipse stores 0x00a247f8 for a start of
 * 162.2655, and that is exactly the long the original hands its arc routine
 * (dosv_emu_cpp, `DOSEMU_BP=0EFF:0228 DOSEMU_BPN=24`).  Read as a degree and a
 * fraction x10000 the same bytes come out as 160.158, which is a degree and a
 * half wrong and moves every vertex of the chain. */
typedef struct {
    float cx, cy, r;
    short flatten;      /* minor/major x10000; 10000 is a circle */
    long start;         /* 16.16 fixed degrees */
    long end;           /* end == start means the whole ellipse */
    short tilt;         /* degrees the ellipse is turned by */
    unsigned char type, pen;
    unsigned char layer;
    unsigned char rest[4];
} JwcArc;

typedef struct {
    float x0, y0, x1, y1;       /* the baseline: where the text starts and ends */
    const char *text;           /* Shift-JIS, pointing into Jwc.text */
    unsigned char size;         /* the character size, rest[0] */
    unsigned char layer;        /* rest[1], not rest[0] as in the others */
    unsigned char rest[4];
} JwcText;

typedef struct {
    float x, y;
    unsigned char layer;
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
    /* Which layers and layer groups are shown, out of the preamble. */
    unsigned char layer_on[256];
    unsigned char group_on[16];
    /* What the coordinates were multiplied by on the way in: JW_CAD's own
     * drawing-area width over the one the file was saved with.  1 unless the
     * drawing came off a wider screen. */
    float scale;
    /* The dot grid: whether it is on, and its spacing in drawing units.  It
     * runs through the drawing's origin in both directions. */
    unsigned char grid_on;
    float grid_x, grid_y;
    /* How many drawing units a millimetre of paper is: JW_CAD's own drawing
     * area (518 pixels) over the paper's width.  The character sizes are in
     * millimetres, so this is what turns them into pixels. */
    float unit_mm;
    /* The older of the two .JWC layouts: thirty fields on the second line and
     * a third line holding one number instead of twenty-eight.  TEST1 to TEST5
     * are like that and everything else is not. */
    unsigned char old_format;
    /* The ten character sizes, in tenths of a millimetre on the paper, and the
     * gap after each.  **They belong to the drawing, not to JW_CAD**: three
     * tables of eleven words sit at a fixed place in the preamble, and index 0
     * is the size currently selected for drawing with.  TEST2 is the one that
     * shows it -- its type 10 is 15.0 mm where every other drawing says 10.0,
     * and with the built-in table its headings come out two thirds of the size
     * the original draws them.  See view.c for what the three are used for. */
    short text_w[11];
    short text_h[11];
    short text_gap[11];
    /* And which pen each character type draws with -- `MPEN` in the .JWF, but
     * the drawing carries its own copy just ahead of the sizes.  TEST2's is
     * 1 1 2 2 2 3 3 3 3 3 where everything else says 1 1 2 2 3 3 4 4 5 5, so
     * its headings come out green and not cyan. */
    short text_pen[11];
    /* The 指定点 -- the points a shadow diagram is measured at.  They are not
     * entities: two arrays of 101 floats sit at a fixed place in the preamble
     * and the second line's field 4 says how many of them count.  JW_CAD draws
     * a little circle at each, and three of the fourteen drawings have them
     * (SAMPLE3 twenty, TEST3 eleven, TEST4 nine).  Three more carry leftover
     * coordinates with a count of zero and draw nothing, which is how the
     * count was identified. */
    int n_marks;
    float mark_x[101];
    float mark_y[101];
} Jwc;

/* Returns NULL and leaves `why` pointing at a reason on failure. */
Jwc *jwc_load(const char *path, const char **why);
void jwc_free(Jwc *d);

/* Is an entity on a layer that is shown?  `layer` is rest[0].
 *
 * The original asks this of every entity before it draws anything
 * (FUN_21f2_0680): the layer has to be on in a 256-byte table, *and* its group
 * has to be on in a 16-byte one.  TEST6 is where it matters -- 1,085 of its
 * 1,618 lines are in groups 1, 3, 8 and F, all switched off, and a port that
 * draws them puts a thicket of construction lines over the drawing. */
int jwc_visible(const Jwc *d, unsigned char layer);

/* The bounding box of everything shown. */
void jwc_extent(const Jwc *d, float *x0, float *y0, float *x1, float *y1);

#endif
