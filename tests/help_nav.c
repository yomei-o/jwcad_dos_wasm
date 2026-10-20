/* HELP's page keys against what the original did (tools/helpkeys.py runs). */
#include "help.h"

#include <stdio.h>

static int bad;

static void is(const char *what, int got, int want)
{
    if (got != want) {
        printf("FAIL %s: %d, wanted %d\n", what, got, want);
        bad = 1;
    }
}

int main(void)
{
    int p;

    /* first page of each command (tools/helpscan.py) */
    is("複写", jw_help_first(1, 0), 1);
    is("＋", jw_help_first(2, 0), 5);
    is("入出力", jw_help_first(30, 0), 102);
    is("オプション", jw_help_first(29, 0), 85);
    is("電卓", jw_help_first(1, 1), 105);
    is("start", jw_help_first(0, 0), 102);
    /* 複写 から 1,1,1,1 で 2,3,4,5 */
    p = 1;
    p = jw_help_key(p, '1'); is("1", p, 2);
    p = jw_help_key(p, '1'); is("1", p, 3);
    p = jw_help_key(p, '2'); is("2", p, 2);
    p = jw_help_key(p, '2'); is("2", p, 1);
    p = jw_help_key(p, '2'); is("2 from the first", p, 102);
    p = jw_help_key(p, '2'); is("2 from 102", p, 85);
    is("105 back", jw_help_prev(105), 102);
    is("106 back", jw_help_prev(106), 105);
    is("118 back", jw_help_prev(118), 106);
    is("125 back", jw_help_prev(125), 122);
    is("135 back", jw_help_prev(135), 125);
    is("107 back", jw_help_prev(107), 106);
    is("159 next", jw_help_next(159), 0);
    is("3", jw_help_key(5, '3'), 106);
    is("4", jw_help_key(5, '4'), 118);
    is("5", jw_help_key(5, '5'), 122);
    is("enter", jw_help_key(104, 13), 1);
    is("right", jw_help_key(104, JW_HELP_KEY_RIGHT), 1);
    is("esc", jw_help_key(104, 27), -2);
    is("home", jw_help_key(104, JW_HELP_KEY_HOME), -2);
    is("space", jw_help_key(104, ' '), -1);
    is("tab", jw_help_key(104, 9), -1);
    is("top item 1", jw_help_top_hit(66, 8), 1);
    is("top gap", jw_help_top_hit(62, 8), 0);
    is("top 2", jw_help_top_hit(144, 8), 2);
    is("top bar", jw_help_top_hit(140, 8), 0);
    is("top 3", jw_help_top_hit(230, 8), 3);
    is("top 5", jw_help_top_hit(420, 8), 5);
    is("top beyond", jw_help_top_hit(500, 8), 0);
    is("top esc", jw_help_top_hit(20, 8), 6);
    if (!bad) {
        printf("help navigation ok\n");
    }
    return bad;
}
