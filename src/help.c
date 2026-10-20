#include "help.h"
#include "draw.h"
#include "ui.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HLP_PATH "orig/JW_CADV.HLP"
#define HLP_LINES_PER_PAGE 20
#define HLP_MAX_LINES (JW_HELP_PAGES * HLP_LINES_PER_PAGE)

static unsigned char *hlp;
static long hlp_len;
static long line_at[HLP_MAX_LINES + 2];
static int loaded;      /* 1 read, -1 failed */

static int load(void)
{
    FILE *fp;
    long i;
    int n;

    if (loaded) {
        return loaded > 0;
    }
    loaded = -1;
    fp = fopen(HLP_PATH, "rb");
    if (!fp) {
        return 0;
    }
    fseek(fp, 0, SEEK_END);
    hlp_len = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    hlp = (unsigned char *)malloc((size_t)(hlp_len > 0 ? hlp_len : 1));
    if (!hlp || (long)fread(hlp, 1, (size_t)hlp_len, fp) != hlp_len) {
        fclose(fp);
        free(hlp);
        hlp = NULL;
        return 0;
    }
    fclose(fp);
    for (n = 0; n <= HLP_MAX_LINES + 1; n++) {
        line_at[n] = hlp_len;
    }
    n = 0;
    line_at[n++] = 0;
    for (i = 0; i < hlp_len && n <= HLP_MAX_LINES; i++) {
        if (hlp[i] == '\n') {
            line_at[n++] = i + 1;
        }
    }
    loaded = 1;
    return 1;
}

int jw_help_ready(void)
{
    return load();
}

/* The first page of each command, in menu order 1..30 (複写 ... 入出力): what
 * HELP opens on, read off the original one command at a time. */
static const unsigned char first_of[31] = {
    102,
    1, 5, 7, 9, 10, 12, 13, 14, 17, 20, 21, 23, 24, 30, 35,
    39, 43, 49, 52, 57, 58, 60, 62, 66, 68, 70, 77, 81, 85, 102
};

/* Where a "chapter" starts: Previous stops at these.  Taken from the page
 * headings (1/N, or no count); the ones from 102 on were walked in the original
 * (walked back from 159: 148, 142, 138, 135, 125, 122, ...; 150/155/157 are not stops). */
static const unsigned char chapter[] = {
    1, 5, 7, 9, 10, 12, 13, 14, 17, 20, 21, 23, 24, 30, 35, 39, 43, 49, 52, 57,
    58, 60, 62, 66, 68, 70, 77, 81, 85, 102, 105, 106, 118, 122, 125, 135, 138,
    142, 148
};

int jw_help_first(int command, int calc)
{
    if (calc) {
        return 105;
    }
    if (command < 1 || command > 30) {
        return 102;
    }
    return first_of[command];
}

int jw_help_next(int page)
{
    return page + 1 >= JW_HELP_PAGES ? 0 : page + 1;
}

int jw_help_prev(int page)
{
    size_t i;

    for (i = 0; i < sizeof chapter; i++) {
        if (chapter[i] == page) {
            /* From the very first command it comes round to 入出力, not to the
             * last chapter of the file (measured). */
            return i == 0 ? 102 : chapter[i - 1];
        }
    }
    return page > 0 ? page - 1 : 102;
}

/* The top row is `[ESC]`, then from column 8 five cells whose bars sit at
 * x = 59, 139, 219, 307, 395 and 475 (measured: the cell after each bar is
 * what answers a press, the bar's own cell does not). */
int jw_help_top_hit(int x, int y)
{
    static const int from[5] = { 64, 144, 224, 312, 400 };
    static const int to[5] = { 135, 215, 303, 391, 471 };
    int i;

    if (y < 0 || y > 15) {
        return 0;
    }
    if (x >= 0 && x <= 39) {
        return 6;
    }
    for (i = 0; i < 5; i++) {
        if (x >= from[i] && x <= to[i]) {
            return i + 1;
        }
    }
    return 0;
}

int jw_help_key(int page, int key)
{
    switch (key) {
    case '1':
    case JW_HELP_KEY_DOWN:
    case JW_HELP_KEY_PGDN:
        return jw_help_next(page);
    case '2':
    case JW_HELP_KEY_UP:
    case JW_HELP_KEY_PGUP:
        return jw_help_prev(page);
    case '3':
        return 106;
    case '4':
        return 118;
    case '5':
        return 122;
    case 13:
    case JW_HELP_KEY_LEFT:
    case JW_HELP_KEY_RIGHT:
        return 1;
    case 27:
    case JW_HELP_KEY_HOME:
    case JW_HELP_KEY_END:
        return -2;
    default:
        return -1;
    }
}

static void fill(VGA *v, int x0, int y0, int x1, int y1, unsigned colour)
{
    int y;

    for (y = y0; y <= y1; y++) {
        jw_line(v, x0, y, x1, y, colour, ROP_REPLACE, JW_STYLE_SOLID);
    }
}

static void put_line(VGA *v, int row, const unsigned char *s, long n)
{
    char buf[200];
    int len = 0;
    long i;

    /* The control bytes (a TAB now and then) take no room at all. */
    while (n > 0 && s[n - 1] == '\r') {
        n--;
    }
    for (i = 0; i < n && len < (int)sizeof buf - 1; i++) {
        if (s[i] >= 0x20) {
            buf[len++] = (char)s[i];
        }
    }
    buf[len] = 0;
    if (len) {
        jw_ui_text(v, 17, row, 7, 0, buf);
    }
}

void jw_help_draw(VGA *v, int page)
{
    static const char top[] =
        "|1)\x8e\x9f\xcd\xdf\xb0\xbc\xde|2)\x91O\xcd\xdf\xb0\xbc\xde|3)\x8a\xee\x96\x7b\x91\x80\x8d\xec"
        "|4)\xbd\xde\xb0\xd1\x91\x80\x8d\xec|5)\xda\xb2\xd4\x91\x80\x8d\xec|";
    static const char title[] =
        "JW_CADV version 2.22H  Copyright (c) jw_software club 99-01-01";
    int j;

    if (!load()) {
        return;
    }
    /* drawing a picture leaves the clip window on the drawing area */
    v->clip_x0 = 0;
    v->clip_y0 = 0;
    v->clip_x1 = v->width - 1;
    v->clip_y1 = v->height - 1;
    /* the top row, in place of the command's line */
    fill(v, 0, 0, 639, 15, 0);
    jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
    jw_ui_text(v, 8, 1, 7, 0, top);
    /* the drawing area goes black, and the title bar goes across it */
    fill(v, 122, 17, 638, 462, 0);
    jw_ui_text(v, 17, 2, 6, 1, title);
    jw_line(v, 128, 16, 128 + 8 * (int)strlen(title) - 1, 16, 7, ROP_REPLACE, JW_STYLE_SOLID);
    for (j = 0; j < HLP_LINES_PER_PAGE; j++) {
        const int n = page * HLP_LINES_PER_PAGE + j;

        if (n < HLP_MAX_LINES && line_at[n] < hlp_len) {
            put_line(v, 4 + j, hlp + line_at[n], line_at[n + 1] - line_at[n] - 1);
        }
    }
    /* a line that runs to column 80 would take the frame's right edge with it */
    jw_line(v, 639, 17, 639, 462, 7, ROP_REPLACE, JW_STYLE_SOLID);
}
