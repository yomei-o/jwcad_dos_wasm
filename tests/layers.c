/* What the sixteen layer buttons could be showing.
 *
 *   ./tests/layers.exe orig/SAMPLE2.JWC
 *
 * For each layer of each group: whether the layer is switched on, whether its
 * group is, and how many entities sit on it.  Printed so it can be held
 * against the two little bars the original paints above each button.
 */
#include "jwc.h"

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    const char *why;
    Jwc *d;
    long used[256], ln[256], ar[256], tx[256], pt[256];
    int g, i;

    if (argc < 2) {
        fprintf(stderr, "usage: layers DRAWING.JWC\n");
        return 2;
    }
    d = jwc_load(argv[1], &why);
    if (!d) {
        fprintf(stderr, "%s: %s\n", argv[1], why);
        return 1;
    }
    memset(used, 0, sizeof used);
    memset(ln, 0, sizeof ln); memset(ar, 0, sizeof ar);
    memset(tx, 0, sizeof tx); memset(pt, 0, sizeof pt);
    for (i = 0; i < d->n_lines; i++) { used[d->lines[i].layer]++; ln[d->lines[i].layer]++; }
    for (i = 0; i < d->n_arcs; i++) { used[d->arcs[i].layer]++; ar[d->arcs[i].layer]++; }
    for (i = 0; i < d->n_texts; i++) { used[d->texts[i].layer]++; tx[d->texts[i].layer]++; }
    for (i = 0; i < d->n_points; i++) { used[d->points[i].layer]++; pt[d->points[i].layer]++; }
    printf("%s  write layer %d  paper %d  pen %d  type %d  1/%g\n",
           argv[1], d->write_layer, d->paper, d->pen, d->line_type,
           (double)d->denom);
    for (g = 0; g < 16; g++) {
        long n = 0;

        for (i = 0; i < 16; i++) n += used[(g << 4) | i];
        if (!n && !d->group_on[g]) continue;
        printf("  group %X %s ", g, d->group_on[g] ? "on " : "off");
        for (i = 0; i < 16; i++) {
            printf(" %X:%s%ld/%ld/%ld/%ld", i,
                   d->layer_on[(g << 4) | i] ? "+" : "-",
                   ln[(g << 4) | i], ar[(g << 4) | i], tx[(g << 4) | i],
                   pt[(g << 4) | i]);
        }
        printf("\n");
    }
    jwc_free(d);
    return 0;
}
