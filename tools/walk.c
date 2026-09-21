/* The port's plot, as plain lines, for tools/plotcmp.py.
 *
 *     ./tmp/walk.exe orig/SAMPLE0.JWC
 *
 * `L x0 y0 x1 y1 pen type` and `T x y height text`, in millimetres of paper
 * with y upwards -- a plotter's own coordinates, which is what the original
 * writes through a `*.JWP` definition.
 */
#include "plot.h"
#include <stdio.h>
static void one(void *u, double x0, double y0, double x1, double y1, int pen, int type)
{ (void)u; printf("L %.3f %.3f %.3f %.3f %d %d\n", x0, y0, x1, y1, pen, type); }
static void poly(void *u, const double *xy, int n, int pen, int type)
{ int i; (void)u; (void)pen; (void)type; for (i = 1; i < n; i++)
    printf("L %.3f %.3f %.3f %.3f\n", xy[(i-1)*2], xy[(i-1)*2+1], xy[i*2], xy[i*2+1]); }
static void txt(void *u, double x, double y, double dir, double h, double w, const char *s, int pen)
{ (void)u; (void)dir; (void)w; (void)pen; printf("T %.3f %.3f %.3f %s\n", x, y, h, s); }
int main(int argc, char **argv)
{
    const char *why;
    Jwc *d = jwc_load(argc > 1 ? argv[1] : "orig/SAMPLE0.JWC", &why);
    JwPlotSink k;
    if (!d) { printf("load %s\n", why); return 1; }
    k.line = one; k.poly = poly; k.text = txt; k.point = 0;
    jw_plot_walk(d, &k, 0);
    return 0;
}
