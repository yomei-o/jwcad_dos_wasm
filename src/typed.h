/* The stages a command with a number in it writes, by hand.
 *
 * src/stage.h is made by a tool that only presses the mouse
 * (tools/press.sh + tools/stage_table.py), so the stages you can only reach by
 * typing are not in it.  These are those, read off `sh tools/multi.sh 20` --
 * the same dump, the same columns, the same colours -- and kept in the shape
 * src/stage.h uses so that src/ui.c can replay both tables the same way.
 *
 * The five numbers along the top (1000.00, 100.00, 200.00, 300.00, 500.00) are
 * what [F1] to [F5] stood for when this was captured; they belong to the
 * program's state, like the numbers in src/prompt.h, and are here as the
 * original had them.
 *
 * Column 22 of the top line is the field the typed number goes in.  The blank
 * eight columns are the original clearing it; what goes in afterwards is drawn
 * by src/ui.c out of what has been typed, one character at a time, because
 * that is what the original does (`"2  "` at column 22, `"0  "` at column 23).
 */
#ifndef JW_TYPED_H
#define JW_TYPED_H

#include "stage.h"

static const JwStage JW_TYPED[] = {
    {  5, 1,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]  " },
    {  5, 1,  7, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x93" "_\x8e" "w\x8e" "\xa6" " or \x8a" "\xd4" "\x8a" "u=" },
    {  5, 1, 36, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "| 1000.00" },
    {  5, 1, 39, 2, 7, 0xffff, 0, 0, { 0, 0 }, 0, "[F1]" },
    {  5, 1, 45, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "|  100.00" },
    {  5, 1, 48, 2, 7, 0xffff, 0, 0, { 0, 0 }, 0, "[F2]" },
    {  5, 1, 54, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "|  200.00" },
    {  5, 1, 57, 2, 7, 0xffff, 0, 0, { 0, 0 }, 0, "[F3]" },
    {  5, 1, 63, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "|  300.00" },
    {  5, 1, 66, 2, 7, 0xffff, 0, 0, { 0, 0 }, 0, "[F4]" },
    {  5, 1, 72, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "|  500.00" },
    {  5, 1, 75, 2, 7, 0xffff, 0, 0, { 0, 0 }, 0, "[F5]" },
    {  5, 1, 22, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "        " },
    {  5, 2, 64, 2, 7, 0xffff, 1, 0, { 12, 0 }, 0, "[%*.*f]" },
    {  5, 2,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    {  5, 2, 15, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "|\x87" "@\x92" "[\x93" "_\x8e" "w\x92" "\xe8" "|" },
    {  5, 2, 30, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "\x9b" " \x95" "\xa1" "\x8e" "\xca" "\x95" "\xfb" "\x8c" "\xfc" "\x83" "}\x83" "E\x83" "X\x8e" "w\x8e" "\xa6" "(L)   \x98" "A\x91" "\xb1" "\x93" "\xfc" "\x97" "\xcd" "[<\x84" "\xae" "]" },
    {  5, 3,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    {  5, 3,  6, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "E" },
    {  5, 3,  8, 1, 7, 0x0000, 1, 1, { 12, 0 }, 0, " \x90" "\xfc" "\x8e" "w\x8e" "\xa6" "   (L)\x91" "O\x89" "\xf1" "\x82" "\xc6" "\x88" "\xe1" "\x82" "\xa4" "\x90" "\xa1" "\x96" "@  (R)\x93" "\xaf" "\x82" "\xb6" "\x90" "\xa1" "\x96" "@[%*.*f]|\x87" "@\x8a" "\xd4" "\x8a" "u\x8e" "\xe6" "\x93" "\xbe" "|\x87" "A\x98" "A\x91" "\xb1" "|" },
    {  5, 4,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    {  5, 4,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8a" "\xd4" "\x8a" "u\x8e" "\xe6" "\x93" "\xbe" " \x8a" "\xee" "\x8f" "\x80" "\x90" "\xfc" "\x81" "@\x83" "}\x83" "E\x83" "X\x8e" "w\x8e" "\xa6" " " },
    {  5, 5,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    {  5, 5,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8a" "\xd4" "\x8a" "u\x8e" "\xe6" "\x93" "\xbe" " \x81" "\x9e" "\x93" "_\x83" "}\x83" "E\x83" "X\x8e" "w\x8e" "\xa6" " (L)free (R)Read " },
    {  5, 6,  6, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "E" },
    {  5, 6,  8, 1, 7, 0x0000, 1, 1, { 12, 0 }, 0, " \x90" "\xfc" "\x8e" "w\x8e" "\xa6" "   (L)\x91" "O\x89" "\xf1" "\x82" "\xc6" "\x88" "\xe1" "\x82" "\xa4" "\x90" "\xa1" "\x96" "@  (R)\x93" "\xaf" "\x82" "\xb6" "\x90" "\xa1" "\x96" "@[%*.*f]|\x87" "@\x8a" "\xd4" "\x8a" "u\x8e" "\xe6" "\x93" "\xbe" "|" },
    { 25, 3,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 25, 3,  6, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "Q" },
    { 25, 3,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8f" "\xc1" " \x8b" "\x8e" "  \x92" "\xc7" "\x89" "\xc1" "\xa5" "\x8f" "\x9c" "\x8a" "O\x83" "f\x81" "[\x83" "^\x8e" "w\x8e" "\xa6" "   " },
    { 25, 3, 37, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x90" "\xfc" "\x81" "E\x89" "~(L) " },
    { 25, 3, 47, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x95" "\xb6" "\x8e" "\x9a" "(R)" },
    { 25, 3, 54, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, " [F1\x81" "`F10] " },
    { 25, 3, 68, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "|\x87" "@\x94" "\xcd" "\x88" "\xcd" " \x8a" "m\x92" "\xe8" "|" },
    /* The field the 13 command puts up once a point is taken -- the
     * original own bytes, read off a run (RESUME 4.17).  The number in
     * the cell at column 5 is the drawing character type, so src/ui.c
     * puts it back. */
    { 13, 1,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x95" "\xb6" "\x8e" "\x9a" "\x97" "\xf1" "\x93" "\xfc" "\x97" "\xcd" },
    { 13, 1, 11, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "|\x81" "|\x81" "|\x81" "|" },
    { 13, 1, 19, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "10\x81" "|\x81" "|\x81" "|\x81" "|\x81" "{\x81" "|\x81" "|\x81" "|\x81" "|20\x81" "|\x81" "|\x81" "|\x81" "|\x81" "{\x81" "|\x81" "|\x81" "|\x81" "|30\x81" "|\x81" "|\x81" "|\x81" "|\x81" "{\x81" "|\x81" "|\x81" "|\x81" "|40" },
    { 13, 1,  1, 4, 7, 0xffff, 0, 0, { 0, 0 }, 0, "\x8d" "\xb6" "\x89" "\xba" },
    { 13, 1,  5, 4, 7, 0xffff, 0, 0, { 0, 0 }, 0, "|\x8e" "\xed" " 3|Paste" },
    /* And what it says once [Enter] has written the text: the same line
     * with [ESC] in front and a different half -- it is asking where the
     * next one goes.  The numbers are the drawing character type, put
     * back by src/ui.c. */
    { 13, 2,  1, 2, 0, 0x0000, 0, 0, { 0, 0 }, 0, " \xcd" "\xdf" "\xdd" "2 \x8a" "\xee" "\x93" "_ \x8d" "\xb6" "\x89" "\xba" " " },
    { 13, 2,  1, 3, 0, 0x0000, 0, 0, { 0, 0 }, 0, " \x89" "\xa1" " 3.0 \x8f" "c 3.0 " },
    { 13, 2,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 13, 2,  6, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "E" },
    { 13, 2,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x95" "\xb6" "\x8e" "\x9a" "\x8e" "\xed" "\x97" "\xde" "[F3]  \x8a" "\xee" "\x93" "_\x8e" "w\x8e" "\xa6" "(L)free(R)Read|\x87" "@\x8a" "\xee" "\x93" "_\x95" "\xcf" "|\x87" "A\x8d" "s\x98" "A\x91" "\xb1" "|\x87" "B\x97" "\xf1" "\x98" "A\x91" "\xb1" "|" },
    { 13, 2, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]\x91" "O\x8d" "\x80" },
    /* 分割【仮点】's four stages (21).  Captured with
     * `python tools/steps_table.py 21 d 250 200 450 200 t 4 e`.
     *
     * The numbers in them belong to the program, not to the capture: `[2]` is
     * the division count it offers as 前回と同じ, `残 97` is how many 仮点 are
     * left, and the `   4` beside the counts is what was used.  src/ui.c puts
     * them back the way it does 文字's character type -- see stage_text.
     *
     * The field at column 18 is not here: src/ui.c draws it a character at a
     * time out of what has been typed, the same as 複線's and 複写's. */
    { 21, 1,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 21, 1,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "\x9f" " \x8f" "I\x93" "_\x8e" "w\x8e" "\xa6" " (L)free (R)Read " },
    { 21, 2,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]  " },
    { 21, 2,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x95" "\xaa" "\x8a" "\x84" },
    { 21, 2, 12, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, " \x90" "\x94" " " },
    { 21, 2, 16, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "=" },
    { 21, 2, 37, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x91" "O\x89" "\xf1" "\x82" "\xc6" "\x93" "\xaf" "\x82" "\xb6" " \xcf" "\xb3" "\xbd" "(R) " },
    { 21, 2, 55, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[2]" },
    { 21, 2, 66, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "|" },
    { 21, 2, 67, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[F1] " },
    { 21, 2, 72, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x95" "\xaa" "\x8a" "\x84" },
    { 21, 2, 76, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x95" "\xcf" "\x8d" "X" },
    { 21, 2, 80, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "|" },
    { 21, 2, 18, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "        " },
    { 21, 4,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 21, 4, 72, 2, 7, 0x0000, 0, 0, { 0, 0 }, 0, "   4" },
    { 21, 4, 76, 2, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x95" "\xaa" "\x8a" "\x84" },
    { 21, 4,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "\x9e" "\x82" "Q\x93" "_\x8a" "\xd4" "\x95" "\xaa" "\x8a" "\x84" "\x93" "_ \x8e" "n\x93" "_\x8e" "w\x8e" "\xa6" " (L)free (R)Read |\x87" "@\x81" "y\x89" "\xbc" "\x93" "_\x81" "z| \x8e" "c 97" },
    { 21, 4, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]\x91" "O\x8d" "\x80" },
    /* 正多角形's stages (19).  Captured with
     * `python tools/steps_table.py 19 300 8 100 8 t 6 e 300 250 400 250`
     * -- two presses on the top line (②正多角形 then ①任意寸法), the
     * number of sides typed, then the centre and a vertex.
     *
     * `[5]` is the count it offers as 前回と同じ; src/ui.c puts the
     * program's own in.  The field at column 25 is not here -- src/ui.c draws
     * it out of what has been typed. */
    { 19, 1,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "|\x87" "@\x94" "C\x88" "\xd3" "\x90" "\xa1" "\x96" "@\x82" "\xcc" "\x90" "\xb3" "\x91" "\xbd" "\x8a" "p\x8c" "` |\x87" "A\x90" "\xa1" "\x96" "@\x8e" "w\x92" "\xe8" "\x82" "\xcc" "\x90" "\xb3" "\x91" "\xbd" "\x8a" "p\x8c" "` |" },
    { 19, 1, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]\x91" "O\x8d" "\x80" },
    { 19, 2,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]  " },
    { 19, 2,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x90" "\xb3" "\x91" "\xbd" "\x8a" "p\x8c" "`\x82" "\xcc" "\x8a" "p\x90" "\x94" " =               \x91" "O\x89" "\xf1" "\x82" "\xc6" "\x93" "\xaf" "\x82" "\xb6" " \xcf" "\xb3" "\xbd" "(R) [5]" },
    { 19, 2, 25, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "        " },
    { 19, 4,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "\x9c" " \x92" "\x86" "\x90" "S\x93" "_ \x83" "}\x83" "E\x83" "X\x8e" "w\x8e" "\xa6" " (L)free (R)Read  |\x87" "@\x8a" "p\x90" "\x94" "\x95" "\xcf" "\x8d" "X|" },
    { 19, 4, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]\x91" "O\x8d" "\x80" },
    { 19, 5,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]  " },
    { 19, 5,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "\x9e" " " },
    { 19, 5, 11, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x92" "\xb8" "\x93" "_" },
    { 19, 5, 15, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, " \x83" "}\x83" "E\x83" "X\x8e" "w\x8e" "\xa6" " (L)free (R)Read " },
    { 19, 5, 55, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "|\x87" "@\x8a" "\xee" "\x8f" "\x80" "\x93" "_\x95" "\xcf" "\x8d" "X|" },
    { 19, 6,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 19, 6,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "\x9c" " \x92" "\x86" "\x90" "S\x93" "_ \x83" "}\x83" "E\x83" "X\x8e" "w\x8e" "\xa6" " (L)free (R)Read  |\x87" "@\x8a" "p\x90" "\x94" "\x95" "\xcf" "\x8d" "X|" },
    { 19, 6, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]\x91" "O\x8d" "\x80" },
    { 0, 0, 0, 0, 0, 0, 0, 0, { 0, 0 }, 0, 0 },
};

#endif
