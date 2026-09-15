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
} JwCmd;

/* Start a command, or leave it (0). */
void jw_cmd_pick(JwCmd *c, int command);

/* A press inside the drawing area, at a screen pixel.  Returns 1 if the drawing
 * changed and has to be drawn again. */
int jw_cmd_press(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy);

/* Where a screen pixel is in the drawing.  The view puts a drawing point at
 * `(x - ox) * scale + ax`, so this is that read backwards. */
void jw_cmd_at(const JwView *w, int sx, int sy, double *x, double *y);

#endif
