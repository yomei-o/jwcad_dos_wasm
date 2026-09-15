/* The command state machine.  See cmd.h. */
#include "cmd.h"

#include <string.h>

void jw_cmd_pick(JwCmd *c, int command)
{
    memset(c, 0, sizeof(*c));
    c->command = command;
}

void jw_cmd_at(const JwView *w, int sx, int sy, double *x, double *y)
{
    *x = (sx - w->ax) / w->scale + w->ox;
    *y = (w->ay - sy) / w->scale + w->oy;
}

int jw_cmd_press(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy)
{
    double x, y;

    if (!d || c->command != 3) {         /* ／ -- the plain line */
        return 0;
    }
    jw_cmd_at(w, sx, sy, &x, &y);
    if (!c->pressed) {
        c->x0 = x;
        c->y0 = y;
        c->pressed = 1;
        return 0;
    }
    c->pressed = 0;
    /* The line takes the pen and the line type the panel shows and goes on the
     * layer being written to -- SAMPLE0 writes with pen 2, and the line the
     * original draws there comes out white, which is what pen 2 is. */
    return jwc_add_line(d, (float)c->x0, (float)c->y0, (float)x, (float)y,
                        (unsigned char)d->line_type, (unsigned char)d->pen,
                        (unsigned char)((0 << 4) | (d->write_layer & 15)));
}
