/* src/help.h -- the HELP button at the right of the bottom strip.
 *
 * It shows JW_CADV.HLP, 20 lines to a page, over the drawing area.  Which page
 * it opens on follows the command in the menu; (1)..(5) and [ESC] along the top
 * row move about.  Measured on the original (dosv_emu_cpp) with tools/helpkeys.py
 * and tools/helpscan.py; the screen is compared with tools/helpcheck.sh.  The
 * key handling is **measured only, decomp not read** (notes/help.md).
 */
#ifndef JW_HELP_H
#define JW_HELP_H

#include "vga.h"

#define JW_HELP_PAGES 160

/* The keys the browser sends besides the ASCII ones (src/cmd.h has F1..F10 at
 * 0x101..0x10a). */
#define JW_HELP_KEY_UP   0x120
#define JW_HELP_KEY_DOWN 0x121
#define JW_HELP_KEY_LEFT 0x122
#define JW_HELP_KEY_RIGHT 0x123
#define JW_HELP_KEY_PGUP 0x124
#define JW_HELP_KEY_PGDN 0x125
#define JW_HELP_KEY_HOME 0x126
#define JW_HELP_KEY_END  0x127

/* The page HELP opens on for the command picked in the menu (1..30), or the
 * calculator when `calc` is set.  Anything else opens on 入出力. */
int jw_help_first(int command, int calc);

/* The page after / before `page`.  Next just counts on and comes round to 0.
 * Previous goes back one page, except from the first page of a command, where it
 * goes to the first page of the command before. */
int jw_help_next(int page);
int jw_help_prev(int page);

/* What a press on the top row picks while HELP is up: 0 none, 1 次ﾍﾟｰｼﾞ,
 * 2 前ﾍﾟｰｼﾞ, 3 基本操作, 4 ｽﾞｰﾑ操作, 5 ﾚｲﾔ操作, 6 [ESC]. */
int jw_help_top_hit(int x, int y);

/* The page a top-row item or a key goes to; -1 when the key means nothing.
 * `key` is the byte jw_key gets (13 Enter, 0x101.. F-keys).  Returns -2 for the
 * keys that leave HELP (ESC, Home, End). */
int jw_help_key(int page, int key);

/* Is the HLP file there?  (The page is not opened without it.) */
int jw_help_ready(void);

/* Paint the top row and the drawing area for `page`. */
void jw_help_draw(VGA *v, int page);

#endif
