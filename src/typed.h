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
    /* 測定【①距離】's one stage (15).  Captured with
     * `python tools/steps_table.py 15 250 200 450 300`.
     *
     * Every press writes the same three cells, so there is only one stage:
     * the two lengths in the band and the command's own line.  The numbers in
     * them are the program's -- the running total, the last leg and the
     * drawing's scale -- and src/ui.c puts them back (stage_text).
     *
     * The lengths are in **metres**, to three decimals with the trailing
     * zeros and a trailing point taken off: 0 comes out `0`, 100mm `0.1`,
     * 128.2mm `0.128`.  Measured four ways. */
    { 15, 1, 20, 3, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8b" "\x97" "\x97" "\xa3" " \x97" "\xdd" "\x8c" "v = 0 \x82" "\x8d" },
    { 15, 1, 50, 3, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8b" "\x97" "\x97" "\xa3" " " },
    { 15, 1, 55, 3, 7, 0x0000, 0, 0, { 0, 0 }, 0, " = 0 \x82" "\x8d" },
    { 15, 1,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 15, 1,  6, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "E" },
    { 15, 1,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8b" "\x97" "\x97" "\xa3" " \x81" "\x9f" "\x8e" "\x9f" "\x93" "_\x8e" "w\x8e" "\xa6" " (L)free (R)Read \x81" "i\x82" "r\x81" "\x81" "1/1\x81" "j|\x87" "@\x95" "\\ \x8e" "\xa6" "|\x87" "A\xb8" "\xd8" "\xb1" "\xb0" "|\x87" "B\x89" "~ \x8e" "\xfc" "|" },

    /* 28 文編集【変更】, read off `python tools/steps_table.py 28 d 190 152 e`
     * on SAMPLE0.  Stage 1 is the press that picks a text: the top line turns
     * into a field with a ruler over it and the panel's ` Get type[tab]`
     * becomes `左下 |種 3|Paste`.  The string itself goes at column 1 of row
     * 2 and is the drawing's, so src/ui.c writes it; the `3` is the text's own
     * character type and is put back the same way 文字's is.  Stage 2 is
     * [Enter]: the counts come back and the item's own line goes up again. */
    { 28, 1, 11, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "|\x81" "|\x81" "|\x81" "|" },
    { 28, 1, 19, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "10\x81" "|\x81" "|\x81" "|\x81" "|\x81" "{\x81" "|\x81" "|\x81" "|\x81" "|20\x81" "|\x81" "|\x81" "|\x81" "|\x81" "{\x81" "|\x81" "|\x81" "|\x81" "|30\x81" "|\x81" "|\x81" "|\x81" "|\x81" "{\x81" "|\x81" "|\x81" "|\x81" "|40" },
    { 28, 1,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x95" "\xcf" "\x8d" "X\x95" "\xb6" "\x8e" "\x9a" "\x97" "\xf1" "\x93" "\xfc" "\x97" "\xcd" },
    { 28, 1,  1, 4, 7, 0xffff, 0, 0, { 0, 0 }, 0, "\x8d" "\xb6" "\x89" "\xba" },
    { 28, 1,  5, 4, 7, 0xffff, 0, 0, { 0, 0 }, 0, "|\x8e" "\xed" " 3|Paste" },
    /* Stage 2 also rewrites ` Get type[tab]` at row 4 and the menu item
     * at row 17, and those are **not** here: the chrome draws both, and
     * replaying them with a black background takes the panel's own white
     * rules at y=48, 49 and 63 with them (312 pixels of them). */
    { 28, 2,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 28, 2,  6, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "E" },
    { 28, 2,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "y\x95" "\xcf" "\x8d" "X\x81" "z\x95" "\xb6" "\x8e" "\x9a" "\x91" "I\x91" "\xf0" " |\x87" "@\x8a" "\xee" "\x93" "_\x81" "i\x8d" "\xb6" "\x89" "\xba" "\x81" "j|\x87" "A\x95" "\xb6" "\x98" "A\x8c" "\x8b" "\xa5" "\x90" "\xd8" "\x92" "f |\x87" "B\x8b" "^\x8e" "\x97" "\x90" "\xfc" "\x95" "\xb6" "\x8e" "\x9a" "|" },
    { 28, 2, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]\x91" "O\x8d" "\x80" },
    /* 23 曲線 ⑦連線, read off
     * `python tools/steps_table.py 23 540 8 200 200 400 200 400 350 250 350 600 8`.
     * Stage 1 is ⑦連線 picked off the item's own line, stage 2 the 始点,
     * stage 3 every press after it (the capture's stages 3, 4 and 5 are the
     * same line) and stage 4 is ④ 終了, which puts the 始点指示 line back.
     * The band words at columns 37 and 46 say how the direction is being
     * rounded; src/ui.c writes them from the command's own state. */
    { 23, 1, 37, 2, 5, 0xffff, 0, 0, { 0, 0 }, 0, "45\x93" "x\x96" "\x88" },
    { 23, 1,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "\x9e" "\x8e" "n\x93" "_\x8e" "w\x8e" "\xa6" " (L)free (R)Read |\x87" "@\x8a" "p \x93" "x |" },
    { 23, 1, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]\x91" "O\x8d" "\x80" },
    { 23, 2, 37, 2, 5, 0xffff, 0, 0, { 0, 0 }, 0, "45\x93" "x\x96" "\x88" },
    { 23, 2,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]  \x81" "\x9f" "\x8f" "I\x93" "_\x8e" "w\x8e" "\xa6" " (L)free (R)Read |\x87" "@\x8a" "p \x93" "x |" },
    { 23, 3, 37, 2, 5, 0xffff, 0, 0, { 0, 0 }, 0, "45\x93" "x\x96" "\x88" },
    { 23, 3, 46, 2, 5, 0xffff, 0, 0, { 0, 0 }, 0, "\x83" "}\x83" "E\x83" "X" },
    { 23, 3, 56, 2, 7, 0xffff, 0, 0, { 0, 0 }, 0, "\x90" "}\x90" "\xa1" "      3.00 " },
    { 23, 3,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]  \x81" "\x9f" "\x8f" "I\x93" "_\x8e" "w\x8e" "\xa6" " (L)free (R)Read |\x87" "@\x8a" "p \x93" "x |\x87" "A\x8a" "\xee" "\x8f" "\x80" "\x93" "_|\x87" "B\x8a" "\xdb" " \x96" "\xca" "   \x95" "\xd3" "\x90" "\xa1" "\x96" "@ |\x87" "C \x8f" "I\x97" "\xb9" "|" },
    { 23, 4, 37, 2, 5, 0xffff, 0, 0, { 0, 0 }, 0, "45\x93" "x\x96" "\x88" },
    { 23, 4,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 23, 4,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "\x9e" "\x8e" "n\x93" "_\x8e" "w\x8e" "\xa6" " (L)free (R)Read |\x87" "@\x8a" "p \x93" "x |" },
    { 23, 4, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]\x91" "O\x8d" "\x80" },
    /* 18 ハッチ, read off `python tools/steps_table.py 18 300 402 380 410
     * 300 419 197 410 310 402 120 8 100 8` on SAMPLE0.
     *
     * Stage 1 is the 開始線, stage 2 the next line of the frame, stage 3 every
     * one after that (the capture's stages 3 and 4 are the same line), stage 4
     * is the 開始線 pressed again to close it, stage 5 is ①【指示終了】 and
     * stage 6 is ① 実 行.  The 残数 at column 70 counts down from 100 and the
     * angle and pitch at columns 32 and 42 are the command's own, so src/ui.c
     * writes those three. */
    { 18, 1, 70, 2, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8e" "c\x90" "\x94" " 99  " },
    { 18, 1,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 18, 1,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "         \x81" "\x9e" " \x83" "n\x83" "b\x83" "`\x98" "g \x90" "}\x8c" "`\x82" "\xcc" "\x98" "A\x91" "\xb1" "\x90" "\xfc" "(\x8c" "\xca" ")\x83" "}\x83" "E\x83" "X\x8e" "w\x8e" "\xa6" " [\x92" "\x86" "\x8a" "\xd4" "\x90" "\xfc" "]" },
    { 18, 2, 70, 2, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8e" "c\x90" "\x94" " 98  " },
    { 18, 2,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 18, 2,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "|\x87" "@\x8e" "\xa9" "\x93" "\xae" "\x91" "I\x91" "\xf0" "(\x8d" "\xb6" "\x89" "\xf1" ")| \x81" "\x9e" "\x98" "g \x90" "}\x8c" "`\x82" "\xcc" "\x98" "A\x91" "\xb1" "\x90" "\xfc" "(\x8c" "\xca" ")\x83" "}\x83" "E\x83" "X\x8e" "w\x8e" "\xa6" " [\x92" "\x86" "\x8a" "\xd4" "\x90" "\xfc" "]" },
    { 18, 3, 70, 2, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8e" "c\x90" "\x94" " 97  " },
    { 18, 3,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 18, 3,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "|\x87" "@\x8e" "\xa9" "\x93" "\xae" "\x91" "I\x91" "\xf0" "(\x8d" "\xb6" "\x89" "\xf1" ")| \x81" "\x9e" "\x98" "g \x90" "}\x8c" "`\x82" "\xcc" "\x98" "A\x91" "\xb1" "\x90" "\xfc" "(\x8c" "\xca" ")\x83" "}\x83" "E\x83" "X\x8e" "w\x8e" "\xa6" " [\x92" "\x86" "\x8a" "\xd4" "\x90" "\xfc" "][\x8a" "J\x8e" "n\x90" "\xfc" "\x82" "\xc5" "\x8f" "I\x97" "\xb9" "]" },
    { 18, 4, 70, 2, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8e" "c\x90" "\x94" " 96  " },
    { 18, 4,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 18, 4,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "|\x87" "@\x81" "y\x8e" "w\x8e" "\xa6" "\x8f" "I\x97" "\xb9" "\x81" "z|\x95" "\xca" "\x90" "}\x8c" "`\x82" "\xf0" "\x83" "}\x83" "E\x83" "X\x8e" "w\x8e" "\xa6" " (L)\x8a" "J\x8e" "n\x90" "\xfc" " (R)\x92" "P\x93" "\xc6" "\x89" "~" },
    { 18, 5, 32, 2, 7, 0xffff, 0, 0, { 0, 0 }, 0, "[  45.00]" },
    { 18, 5, 42, 2, 7, 0xffff, 0, 0, { 0, 0 }, 0, "[  10.0]" },
    { 18, 5,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 18, 5,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "|\x87" "@ \x8e" "\xc0" " \x8d" "s(L)|\x87" "A\x8a" "\xee" "\x93" "_\x95" "\xcf" "\x8d" "X|\x87" "B \x8a" "p \x93" "x |\x87" "C\x83" "s\x83" "b\x83" "`|\x87" "D (1)\x96" "{\x90" "\xfc" " |" },
    { 18, 6, 22, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x83" "n\x83" "b\x83" "`" },
    { 18, 6, 28, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8c" "v\x8e" "Z\x92" "\x86" "\x82" "\xc5" "\x82" "\xb7" "\x81" "i[ESC] \x82" "\xc5" "\x92" "\x86" "\x8e" "~" },
    { 18, 6,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 18, 6,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "  |\x87" "@ \x93" "\xaf" "\x90" "}\x8c" "`\x83" "n\x83" "b\x83" "`\x92" "\xc7" "\x89" "\xc1" "  |\x87" "A \x91" "\xbc" "\x90" "}\x8c" "`\x83" "n\x83" "b\x83" "`  | " },
    /* 26 円線接 ①接線 ③指定点, read off
     * `DRAWING=TEST1 python tools/steps_table.py 26 600 450 320 8 500 350
     * 255 239`.  Stage 1 is the first press in the drawing, which is what
     * picks ①接 線 off the item's own line; stage 2 is ③指定点 off the top
     * line, stage 3 the point and stage 4 the circle. */
    { 26, 1,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 26, 1,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x90" "\xda" "\x90" "\xfc" " |\x87" "@\x89" "~\x81" "`\x89" "~\x8a" "\xd4" " |\x87" "A\x89" "~\x8e" "\xfc" "\x93" "_ |\x87" "B\x8e" "w\x92" "\xe8" "\x93" "_ |\x87" "C\x8a" "p\x93" "x\x8e" "w\x92" "\xe8" " |" },
    { 26, 1, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]\x91" "O\x8d" "\x80" },
    { 26, 2,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8e" "w\x92" "\xe8" "\x93" "_\x82" "\xa9" "\x82" "\xe7" "\x82" "\xcc" "\x90" "\xda" "\x90" "\xfc" "  \x81" "\x9e" " \x8e" "w\x92" "\xe8" "\x93" "_\x83" "}\x83" "E\x83" "X\x8e" "w\x8e" "\xa6" " (L)free (R)Read " },
    { 26, 2, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]\x91" "O\x8d" "\x80" },
    { 26, 3,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 26, 3,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "         |\x87" "@\x92" "\xb7" "\x82" "\xb3" "\x8e" "w\x92" "\xe8" "| \x81" "\x9e" "\x89" "~\x83" "}\x83" "E\x83" "X\x8e" "w\x8e" "\xa6" " " },
    { 26, 4,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 26, 4,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x8e" "w\x92" "\xe8" "\x93" "_\x82" "\xa9" "\x82" "\xe7" "\x82" "\xcc" "\x90" "\xda" "\x90" "\xfc" "  \x81" "\x9e" " \x8e" "w\x92" "\xe8" "\x93" "_\x83" "}\x83" "E\x83" "X\x8e" "w\x8e" "\xa6" " (L)free (R)Read " },
    { 26, 4, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]\x91" "O\x8d" "\x80" },
    /* 14 寸法 ①横方向, read off `python tools/steps_table.py 14 600 450
     * 162 140 300 110 r 162 140 598 140` on SAMPLE0.  Stage 1 is the first
     * press in the drawing, which picks ①横方向 off the item's own line;
     * then 引出し線の始点, 寸法線の位置, 寸法値の始点 and 寸法値の終点.
     * The value at column 17 of row 2 and the height at column 9 of row 3 are
     * the drawing's, so src/ui.c writes those. */
    { 14, 1,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 14, 1,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x88" "\xf8" "\x8f" "o\x82" "\xb5" "\x90" "\xfc" "\x82" "\xcc" "\x8e" "n\x93" "_ (L)free (R)Read " },
    { 14, 1, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]\x91" "O\x8d" "\x80" },
    { 14, 2,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 14, 2,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "\x9c" " \x90" "\xa1" "\x96" "@\x90" "\xfc" " \x88" "\xca" "\x92" "u \x83" "}\x83" "E\x83" "X\x8e" "w\x8e" "\xa6" " (L)free (R)Read " },
    { 14, 3,  9, 3, 0, 0x0000, 0, 0, { 0, 0 }, 0, "\x8f" "c 2.5 " },
    { 14, 3,  1, 2, 0, 0x0000, 0, 0, { 0, 0 }, 0, " " "\xcd" "\xdf" "\xdd" "1 " "\x95" "\xb6" "\x90" "\x94" "   13 " },
    { 14, 3,  1, 3, 0, 0x0000, 0, 0, { 0, 0 }, 0, " " "\x89" "\xa1" " 2.5 " },
    { 14, 3,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 14, 3,  6, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "E" },
    { 14, 3,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x95" "\xb6" "\x8e" "\x9a" "[F2]  \x90" "\xa1" "\x96" "@\x92" "l\x8e" "n\x93" "_\x8e" "w\x8e" "\xa6" " |\x87" "@\x8f" "\xac" "\x90" "\x94" "\x93" "_\x88" "\xc8" "\x89" "\xba" "[1]\x8c" "\x85" " |\x87" "A\x94" "\xbc" "\x8c" "a|\x87" "B\x92" "\xbc" "\x8c" "a|\x87" "C\x97" "\xdd" "\x90" "\xa1" "|\x87" "D\x88" "\xea" "\x8a" "\x87" "|" },
    { 14, 4,  9, 3, 0, 0x0000, 0, 0, { 0, 0 }, 0, "\x8f" "c 2.5 " },
    { 14, 4,  1, 2, 0, 0x0000, 0, 0, { 0, 0 }, 0, " " "\xcd" "\xdf" "\xdd" "1 " "\x95" "\xb6" "\x90" "\x94" "   13 " },
    { 14, 4,  1, 3, 0, 0x0000, 0, 0, { 0, 0 }, 0, " " "\x89" "\xa1" " 2.5 " },
    { 14, 4,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 14, 4,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x95" "\xb6" "\x8e" "\x9a" "[F2]  \x81" "\x9f" "\x90" "\xa1" "\x96" "@\x92" "l\x8f" "I\x93" "_\x8e" "w\x8e" "\xa6" " " },
    { 14, 5,  9, 3, 0, 0x0000, 0, 0, { 0, 0 }, 0, "\x8f" "c 2.5 " },
    { 14, 5,  1, 2, 0, 0x0000, 0, 0, { 0, 0 }, 0, " " "\xcd" "\xdf" "\xdd" "1 " "\x95" "\xb6" "\x90" "\x94" "   13 " },
    { 14, 5,  1, 3, 0, 0x0000, 0, 0, { 0, 0 }, 0, " " "\x89" "\xa1" " 2.5 " },
    { 14, 5, 17, 2, 7, 0xffff, 0, 0, { 0, 0 }, 0, "250" },
    { 14, 5,  1, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[ESC]" },
    { 14, 5,  6, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x81" "E" },
    { 14, 5,  8, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "\x95" "\xb6" "\x8e" "\x9a" "[F2]  \x90" "\xa1" "\x96" "@\x92" "l\x8e" "n\x93" "_\x8e" "w\x8e" "\xa6" " \xcf" "\xb3" "\xbd" "(L) \x98" "A\x91" "\xb1" "\x93" "\xfc" "\x97" "\xcd" "\x82" "\xcc" "\x8f" "I\x93" "_\xcf" "\xb3" "\xbd" "(R) |\x87" "@\x98" "A\x91" "\xb1" "|" },
    { 14, 5, 73, 1, 7, 0x0000, 0, 0, { 0, 0 }, 0, "[BS]\x91" "O\x8d" "\x80" },
    { 0, 0, 0, 0, 0, 0, 0, 0, { 0, 0 }, 0, 0 },
};

#endif
