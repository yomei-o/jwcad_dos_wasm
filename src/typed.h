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
    { 0, 0, 0, 0, 0, 0, 0, 0, { 0, 0 }, 0, 0 },
};

#endif
