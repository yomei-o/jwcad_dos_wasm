/* What the port's **modified** read takes -- the counterpart of
 * tools/readmod.sh, which asks the same of the running original.
 *
 *     ./tests/snap.exe orig/SAMPLE0.JWC shift 300 402 400 398 L
 *     ./tests/snap.exe orig/SAMPLE0.JWC alt 232 157 400 157 L
 *     ./tests/snap.exe orig/SAMPLE6.JWC shift 415 158 430 165 L
 *
 * The first press is always the right button with the named modifier held,
 * because that is the only thing that starts one.  The second, if there is
 * one, is free with `L` and a read with `R`, and nothing is held for it: the
 * original reads the keys again at that press and the snap is already in hand.
 *
 * It runs ／ (command 3), whose first point is the point the read produced, so
 * the answer comes back out of JwCmd.x0,y0.  Printed as screen dots, which is
 * what tools/readmod.sh prints, so the two can be put side by side.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cmd.h"
#include "jwc.h"
#include "read.h"
#include "view.h"

static int mods_of(const char *s)
{
    int m = 0;

    if (strstr(s, "shift")) {
        m |= JW_MOD_SHIFT;
    }
    if (strstr(s, "ctrl")) {
        m |= JW_MOD_CTRL;
    }
    if (strstr(s, "alt") || strstr(s, "grph")) {
        m |= JW_MOD_GRPH;
    }
    return m;
}

static void say(const JwCmd *c)
{
    if (c->pressed) {
        printf("point (%.3f,%.3f) drawing, screen (%.3f,%.3f)\n",
               c->x0, c->y0, c->x0 + 121.0, 463.0 - c->y0);
    } else if (c->snap == JW_SNAP_ON) {
        printf("線･円上点スナップ: %s %ld\n",
               c->snap_kind == JW_ON_ARC ? "arc" : "line", c->snap_at);
    } else if (c->snap == JW_SNAP_MID) {
        printf("２点間中心 Ｂ点待ち: Ａ点 (%.3f,%.3f) screen (%.3f,%.3f)\n",
               c->snap_x, c->snap_y, c->snap_x + 121.0, 463.0 - c->snap_y);
    } else if (c->missed) {
        printf("読取可能データ無\n");
    } else {
        printf("nothing happened\n");
    }
}

int main(int argc, char **argv)
{
    const char *why = 0;
    Jwc *d;
    JwView w;
    JwCmd c;

    if (argc < 5) {
        fprintf(stderr, "usage: snap DRAWING.JWC <mod> <x> <y>"
                        " [<x> <y> <L|R>]\n");
        return 2;
    }
    d = jwc_load(argv[1], &why);
    if (!d) {
        fprintf(stderr, "%s: %s\n", argv[1], why ? why : "cannot read");
        return 1;
    }
    jw_view_original(&w);
    memset(&c, 0, sizeof c);
    jw_cmd_pick(&c, 3);
    c.mods = mods_of(argv[2]);
    jw_cmd_press(&c, d, &w, atoi(argv[3]), atoi(argv[4]), 1);
    if (argc >= 8) {
        c.mods = 0;
        jw_cmd_press(&c, d, &w, atoi(argv[5]), atoi(argv[6]),
                     argv[7][0] == 'R' || argv[7][0] == 'r');
    }
    say(&c);
    jw_cmd_pick(&c, 0);
    jwc_free(d);
    return 0;
}
