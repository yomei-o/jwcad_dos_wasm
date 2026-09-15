/* The command state machine.  See cmd.h. */
#include "cmd.h"

#include <math.h>
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

    if (!d || (c->command != 3 && c->command != 4 && c->command != 11)) {
        return 0;               /* ／ line, □ box, ○ circle */
    }
    jw_cmd_at(w, sx, sy, &x, &y);
    if (!c->pressed) {
        c->x0 = x;
        c->y0 = y;
        c->pressed = 1;
        c->stage = 1;
        c->num[0] = c->num[1] = 0.0;
        c->dec[0] = c->dec[1] = d->decimals;
        return 0;
    }
    c->pressed = 0;
    c->stage = 2;
    {
        const double mm = d->unit_mm > 0.0f ? d->denom / d->unit_mm : 1.0;
        const double dx = x - c->x0, dy = y - c->y0;

        c->dec[0] = c->dec[1] = d->decimals;
        if (c->command == 4) {
            c->num[0] = (dx < 0 ? -dx : dx) * mm;
            c->num[1] = (dy < 0 ? -dy : dy) * mm;
        } else if (c->command == 11) {
            c->num[0] = sqrt(dx * dx + dy * dy) * mm;
            c->num[1] = c->num[0] * 2.0;
        } else {
            c->num[0] = sqrt(dx * dx + dy * dy) * mm;
            /* An angle is degrees, so the drawing's scale has nothing to say
             * about it: always three decimals. */
            c->num[1] = atan2(dy, dx) * 180.0 / 3.14159265358979323846;
            c->dec[1] = 3;
        }
    }
    /* Both take the pen and the line type the panel shows and go on the layer
     * being written to -- SAMPLE0 writes with pen 2, and what the original
     * draws there comes out white, which is what pen 2 is. */
    if (c->command == 4) {
        /* □: two opposite corners, and four lines come out -- SAMPLE0's count
         * goes from 30 to 34 when the original draws one. */
        const unsigned char t = (unsigned char)d->line_type;
        const unsigned char p = (unsigned char)d->pen;
        const unsigned char g = (unsigned char)((0 << 4) | (d->write_layer & 15));

        return jwc_add_line(d, (float)c->x0, (float)c->y0, (float)x, (float)c->y0, t, p, g)
            && jwc_add_line(d, (float)x, (float)c->y0, (float)x, (float)y, t, p, g)
            && jwc_add_line(d, (float)x, (float)y, (float)c->x0, (float)y, t, p, g)
            && jwc_add_line(d, (float)c->x0, (float)y, (float)c->x0, (float)c->y0, t, p, g);
    }
    if (c->command == 11) {
        /* ○: the first press is the centre, the second a point on it. */
        const double dx = x - c->x0, dy = y - c->y0;

        return jwc_add_arc(d, (float)c->x0, (float)c->y0,
                           (float)sqrt(dx * dx + dy * dy),
                           (unsigned char)d->line_type, (unsigned char)d->pen,
                           (unsigned char)((0 << 4) | (d->write_layer & 15)));
    }
    return jwc_add_line(d, (float)c->x0, (float)c->y0, (float)x, (float)y,
                        (unsigned char)d->line_type, (unsigned char)d->pen,
                        (unsigned char)((0 << 4) | (d->write_layer & 15)));
}
