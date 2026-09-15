/* What the program is in the middle of doing.
 *
 * The original is a state machine: a menu item puts it into a command, and the
 * presses that follow mean whatever that command says they mean.  This holds
 * that much of it -- which command, and what has been pressed so far -- and no
 * more.  One command is implemented: ／ (command 3), the plain line.  Two
 * presses draw one, which is what the original does (tools/line.sh drives it
 * and leaves the picture to compare against).
 */
#ifndef JW_CMD_H
#define JW_CMD_H

#include "jwc.h"
#include "view.h"

typedef struct {
    int command;                /* the menu item in force, 1 to 30, or 0 */
    int pressed;                /* how many points have been taken */
    double x0, y0;              /* the first of them, in drawing units */
    /* What the panel shows while it runs: how far in, and the two numbers the
     * original writes -- the length and the angle for a line, the two sides for
     * a box, the radius and the diameter for a circle.  The lengths are
     * millimetres of the real thing: drawing units over `unit_mm`, times the
     * scale the panel shows.  Measured -- (300,200) to (400,200) is a hundred
     * pixels and the original calls it 57.336 mm on SAMPLE0, which is
     * 100 / (518/297) / 1. */
    int stage;
    double num[2];
    int dec[2];                 /* how many decimals each is shown to */
    /* The last press looked for an entity and found none, which the original
     * says in the band beside the counts.  It stays up until a press finds
     * something or another item is picked -- see src/ui.c. */
    int missed;
} JwCmd;

/* Start a command, or leave it (0). */
void jw_cmd_pick(JwCmd *c, int command);

/* A press inside the drawing area, at a screen pixel.  `right` is the other
 * button, which the original reads as a different answer: 線消 takes a line
 * away with it where the left one would start cutting a piece out.  Returns 1
 * if the drawing changed and has to be drawn again. */
int jw_cmd_press(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy, int right);

/* Which line is under a point, or -1.  The original's reach is eight drawing
 * units: the point has to be within eight of the line itself *and* within eight
 * of the ends' box.  Measured on SAMPLE0's top edge -- seven above it hits and
 * eight does not, seven past its end hits and twelve does not -- and on a
 * diagonal drawn for the purpose, which is not picked from the far side of its
 * own bounding box. */
long jw_cmd_line_at(const Jwc *d, const JwView *w, int sx, int sy);

/* And which arc, or -1.  The original's 線消 says 線,円弧 and takes either. */
long jw_cmd_arc_at(const Jwc *d, const JwView *w, int sx, int sy);

/* Move the pointer without pressing.  While a command has a point in hand the
 * original keeps the reading under the counts up to date -- the length and the
 * angle to wherever the pointer is -- so this works them out again. */
void jw_cmd_track(JwCmd *c, const Jwc *d, const JwView *w, int sx, int sy);

/* The line the original drags from the point already taken to wherever the
 * pointer is: colour 2, exclusive-or (0x18), solid.  □ drags a rectangle of
 * four of them and ○ a circle, both the same way.  Drawn after everything
 * else, like the pointer, and taken back by drawing it again.
 *
 * Nothing happens if no point has been taken yet. */
void jw_cmd_band(const JwCmd *c, VGA *v, const JwView *w, int sx, int sy);

/* Where a screen pixel is in the drawing.  The view puts a drawing point at
 * `(x - ox) * scale + ax`, so this is that read backwards. */
void jw_cmd_at(const JwView *w, int sx, int sy, double *x, double *y);

#endif
