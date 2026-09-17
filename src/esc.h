/* src/esc.h -- what [ESC] writes when a command has a point in hand.

[ESC] throws the point away and asks for it again.  It does **not** clear the
top line: it writes three pieces over the line that was there -- a `・` at
column 6, the command's own "ask again" text at column 8, and `[BS]前項` at
column 73 -- so what the stage before left further along stays on the screen.
Measured with ／: after one press the line is

    [ESC]・◆終点指示 (L)free (R)Read |①  ＋  |②寸 法 |③角 度 |④平 行 |⑤垂 直 |

and after [ESC] it is the same but for columns 6 to 31.

With no point in hand [ESC] writes nothing at all, and a second [ESC] after the
first writes nothing either -- both measured.

    python tools/esc_table.py            # writes src/esc.h
 */
#ifndef JW_ESC_H
#define JW_ESC_H

#include "stage.h"

static const JwStage JW_ESC[] = {
    { 2, 1,  6, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "E" },
    { 2, 1,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8e" "n" "\x93" "_" "\x8e" "w" "\x8e" "\xa6" " (L)free (R)Read " },
    { 2, 1, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]" "\x91" "O" "\x8d" "\x80" },
    { 3, 1,  6, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "E" },
    { 3, 1,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8e" "n" "\x93" "_" "\x8e" "w" "\x8e" "\xa6" " (L)free (R)Read " },
    { 3, 1, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]" "\x91" "O" "\x8d" "\x80" },
    { 4, 1,  6, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "E" },
    { 4, 1,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8e" "n" "\x93" "_" "\x8e" "w" "\x8e" "\xa6" " (L)free (R)Read            " },
    { 4, 1, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]" "\x91" "O" "\x8d" "\x80" },
    { 11, 1,  6, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "E" },
    { 11, 1,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "\x9b" " " "\x89" "~" "\x92" "\x86" "\x90" "S" "\x93" "_ " "\x83" "}" "\x83" "E" "\x83" "X" "\x8e" "w" "\x8e" "\xa6" " (L)free (R)Read " },
    { 11, 1, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]" "\x91" "O" "\x8d" "\x80" },
    { 12, 1,  6, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "E" },
    { 12, 1,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "\x9b" "\x92" "\x86" "\x90" "S" "\x93" "_" "\x8e" "w" "\x8e" "\xa6" " (L)free (R)Read " },
    { 12, 1, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]" "\x91" "O" "\x8d" "\x80" },
    { 0, 0, 0, 0, 0, 0, 0, 0, { 0, 0 }, 0, 0 },
};

#endif
