/* The screen around the drawing.  See ui.h for where every number came from. */
#include "ui.h"

#include "draw.h"
#include "fontx.h"
#include "read.h"
#include "view.h"

#include "prompt.h"
#include "snap.h"
#include "snapmsg.h"
#include "stage.h"
#include "typed.h"
#include "span.h"
#include "copy.h"
#include "move.h"
#include "esc.h"

#include <stdio.h>
#include <string.h>

/* Which row of src/snap.h a held key asks for, or -1 for none.
 *
 * One key at a time is what was measured.  Two at once is a real thing -- the
 * help gives [CTRL] and [SHIFT] together a meaning of their own -- but what
 * the band says then has not been read out of the original, so this picks in a
 * fixed order rather than inventing a fourth answer.  [CTRL] comes first
 * because it is the one whose words fill both cells. */
static int snap_row(int mods)
{
    if (mods & JW_MOD_CTRL) {
        return JW_SNAP_CTRL;
    }
    if (mods & JW_MOD_SHIFT) {
        return JW_SNAP_SHIFT;
    }
    if (mods & JW_MOD_GRPH) {
        return JW_SNAP_GRPH;
    }
    return -1;
}

/* The original's menu, byte for byte out of its DGROUP at 0x7cd7: thirty
 * labels of six bytes each, the right column first.  The command numbers are
 * the ones USER_MNU.DAT documents -- "コマンド番号は複写から測定が 1〜15、
 * 移動から入出力が16〜30になる" -- so entry n-1 is command n. */
static const char MENU[30][7] = {
    "\x95\xa1\x20\x8e\xca\x00",   /*  1  複 写  */
    "\x20\x81\x7b\x20\x20\x00",   /*  2   ＋    */
    "\x20\x81\x5e\x20\x20\x00",   /*  3   ／    */
    "\x20\x81\xa0\x20\x20\x00",   /*  4   □    */
    "\x95\xa1\x20\x90\xfc\x00",   /*  5  複 線  */
    "\x84\xa5\x84\x9f\x20\x00",   /*  6  ├─   */
    "\x20\x81\x83\x20\x20\x00",   /*  7   ＜    */
    "\x96\xca\x20\x8e\xe6\x00",   /*  8  面 取  */
    "\x82\x51\x20\x90\xfc\x00",   /*  9  ２ 線  */
    "\x90\xfc\x20\x8f\xc1\x00",   /* 10  線 消  */
    "\x20\x81\x9b\x20\x20\x00",   /* 11   ○    */
    "\x20\x81\x69\x20\x20\x00",   /* 12   （    */
    "\x95\xb6\x20\x8e\x9a\x00",   /* 13  文 字  */
    "\x90\xa1\x20\x96\x40\x00",   /* 14  寸 法  */
    "\x91\xaa\x20\x92\xe8\x00",   /* 15  測 定  */
    "\x88\xda\x81\x40\x93\xae",   /* 16  移　動 */
    "\x95\xcf\x81\x40\x8c\x60",   /* 17  変　形 */
    "\x83\x6e\x83\x62\x83\x60",   /* 18  ハッチ */
    "\x91\xbd\x8a\x70\x8c\x60",   /* 19  多角形 */
    "\x92\x86\x90\x53\x90\xfc",   /* 20  中心線 */
    "\x95\xaa\x81\x40\x8a\x84",   /* 21  分　割 */
    "\x89\xbc\x8e\xc0\x93\x5f",   /* 22  仮実点 */
    "\x8b\xc8\x81\x40\x90\xfc",   /* 23  曲　線 */
    "\x90\xfc\x95\xcf\x8d\x58",   /* 24  線変更 */
    "\x8f\xc1\x81\x40\x8b\x8e",   /* 25  消　去 */
    "\x89\x7e\x90\xfc\x90\xda",   /* 26  円線接 */
    "\x90\x7d\x20\x20\x8c\x60",   /* 27  図  形 */
    "\x95\xb6\x95\xd2\x8f\x57",   /* 28  文編集 */
    "\xb5\xcc\xdf\xbc\xae\xdd",   /* 29  ｵﾌﾟｼｮﾝ */
    "\x93\xfc\x8f\x6f\x97\xcd",   /* 30  入出力 */
};

/* The key that picks each one, DGROUP 0x7cad: the fifteen of the right column
 * in capitals, then the fifteen of the left in small letters. */
static const char MENU_KEY[31] = "CHXBFTVRWDENASQchxbftvrwdenasq";

const char *jw_ui_menu_label(int command)
{
    return command >= 1 && command <= 30 ? MENU[command - 1] : "";
}

char jw_ui_menu_key(int command)
{
    return command >= 1 && command <= 30 ? MENU_KEY[command - 1] : 0;
}

/* ------------------------------------------------------------------ paint */

int jw_ui_key_command(int key)
{
    int i;

    for (i = 0; i < 30; i++) {
        if (MENU_KEY[i] == key) {
            return i + 1;
        }
    }
    return 0;
}

/* One band of a slider: filled, then outlined in white.  That is the shape
 * the original's calls make -- a run of horizontal lines in the colour,
 * then four more round the outside. */
static void band(VGA *v, int x0, int y0, int x1, int y1, unsigned colour);

/* A rectangle's four sides, the way the original draws one: four line
 * calls, corner to corner. */
static void frame(VGA *v, int x0, int y0, int x1, int y1, unsigned colour)
{
    jw_line(v, x0, y0, x1, y0, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, x1, y0, x1, y1, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, x1, y1, x0, y1, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, x0, y1, x0, y0, colour, ROP_REPLACE, JW_STYLE_SOLID);
}

static void band(VGA *v, int x0, int y0, int x1, int y1, unsigned colour)
{
    int y;

    for (y = y0; y <= y1; y++) {
        jw_line(v, x0, y, x1, y, colour, ROP_REPLACE, JW_STYLE_SOLID);
    }
    frame(v, x0, y0, x1, y1, 7);
}

static void fill(VGA *v, int x0, int y0, int x1, int y1, unsigned colour)
{
    int y;

    for (y = y0; y <= y1; y++) {
        jw_line(v, x0, y, x1, y, colour, ROP_REPLACE, JW_STYLE_SOLID);
    }
}

static void box(VGA *v, int x0, int y0, int x1, int y1, unsigned colour)
{
    jw_line(v, x0, y0, x1, y0, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, x1, y0, x1, y1, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, x1, y1, x0, y1, colour, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, x0, y1, x0, y0, colour, ROP_REPLACE, JW_STYLE_SOLID);
}

static int is_lead(unsigned char c)
{
    return (c >= 0x81 && c <= 0x9f) || (c >= 0xe0 && c <= 0xfc);
}

/* The top line as characters, so that jw_ui_top_item can find the bars.  One
 * byte per cell, filled in as jw_ui_text writes row 1 and cleared when
 * jw_ui_draw paints that row black again. */
/* ｸﾞﾙｰﾌﾟ mode puts these two over the panel: `  ｸﾞﾙｰﾌﾟ 指示  ` in red
 * where 図面名 and the group number are, and `全レイヤ 表示` where
 * サブ画面表示 is.  Both read off the original with tools/pressstr.sh. */
#define GROUP_PICK "  \xb8\xde\xd9\xb0\xcc\xdf \x8e\x77\x8e\xa6  "
#define GROUP_ALL  "\x91\x53\x83\x8c\x83\x43\x83\x84 \x95\x5c\x8e\xa6"

/* The little views' scale.  The paper is 518 by 447 units and lands on 106
 * by 92 pixels, which pins it between 0.204633 and 0.205817. */
#define JW_DATA_SCALE 0.2058

/* And サブ画面表示's, in the little box at the bottom of the panel: the
 * paper's corners put it between 0.12934 and 0.12975. */
#define JW_SUB_SCALE 0.1321
#define JW_SUB_AX 26.3
#define JW_SUB_AY 461.0

/* ②読込's ファイル選択 screen, byte for byte off the original
 * (tools/sjisc.py turns a line into the literal; a hex escape in C is
 * greedy, so every run of them is closed before the ASCII that follows). */
/* **The two are not the same line.**  ①保存 can make a file, so it offers
 * ③ 新規 保存 and ④ﾃﾞｨﾚｸﾄﾘ作成 and is drawn yellow on white; ②読込 only
 * opens one, and stops after ②ドライブ変更, white on black.  Measured, both
 * of them (tools/seqcheck.sh "30 296 left" "110 8 left" "100 8 left" and
 * the same with "180 8 left"). */
#define JW_FILE_BAR \
    "[ESC] " "\x83" "t" "\x83" "@" "\x83" "C" "\x83\x8b\x91" "I" \
    "\x91\xf0" " |" "\x87" "@" "\x91" "I" "\x91\xf0\x8a" "m" \
    "\x92\xe8" " |" "\x87" "A" "\x83" "h" "\x83\x89\x83" "C" "\x83" \
    "u(A:)" "\x95\xcf\x8d" "X |"
#define JW_SAVE_BAR \
    JW_FILE_BAR "\x87" "B " "\x90" "V" "\x8b" "K " \
    "\x95\xdb\x91\xb6" " |" "\x87" "C" \
    "\xc3\xde\xa8\xda\xb8\xc4\xd8\x8d\xec\x90\xac" "|"
#define JW_FILE_PATH "path=A:" "\x5c" "*.jwc"
/* What the two questions put on row 3, in place of the free space:
 * the name about to be written, on white.  And the mark at column 6
 * of the top line that goes with them. */
#define JW_SAVE_FILE "\x95\xdb\x91\xb6\xcc\xa7\xb2\xd9" "=A:" "\x5c"
#define JW_DOT "\x81" "E"
/* 入出力's own line.  The prompt table writes it while the command is
 * running; this copy is for the moment straight after ① 実 行, when the
 * original puts it back with the mark and the banner. */
#define JW_IO_BAR \
    "|" "\x87" "@" "\x83" "t" "\x83" "@" "\x83" "C" "\x83\x8b" \
    "(L)|" "\x87" "A" "\x83" "v" "\x83\x8d\x83" "b" "\x83" "^(R)|" \
    "\x87" "B" "\x83" "v" "\x83\x8a\x83\x93\x83" "^|" "\x87" "C" \
    "\x8e\xa9\x93\xae\x95\xdb\x91\xb6" "(" "\x96\xb3" ")|" "\x87" \
    "D" "\x90" "V" "\x8b" "K" "\x90" "}" "\x96\xca" "|" "\x87" "E" \
    "\x8f" "I" "\x97\xb9" "|"
/* And what it says when the write is done -- yellow on blue, row 2
 * column 34.  The original writes it and leaves it there. */
#define JW_DONE " " "\x93" "o " "\x98" "^  " "\x8a\xae" " " "\x97\xb9" " "
/* ①保存's road on from the list, each line read off the original
 * (tools/saveroad.sh walks it a press at a time and logs what is written). */
#define JW_MEMO_BAR \
    "           " "\x81\x9f\x82\x8d\x82\x85\x82\x8d\x82\x8f" " " \
    "\x93\xfc\x97\xcd"
#define JW_OVER_BAR \
    " " \
    "\x93\xaf\x96\xbc\xcc\xa7\xb2\xd9\x82\xaa\x91\xb6\x8d\xdd\x82\xb5\x82\xdc\x82\xb7" \
    " |" "\x87" "@" "\x8f\xe3\x8f\x91\x82\xab\x82\xb7\x82\xe9" \
    "(L)|" "\x87" "A " "\x8d\xc4\x91" "I" "\x91\xf0" "(R)|"
#define JW_WRITE_BAR \
    "\x8f\x91\x82\xab\x8d\x9e\x82\xdd\x82\xdc\x82\xb7" " |" "\x87" \
    "@ " "\x8e\xc0" " " "\x8d" "s(L)|" "\x87" "A " "\x8d\xc4\x91" \
    "I" "\x91\xf0" "(R)|" "\x87" "B" \
    "\xca\xde\xaf\xb8\xb1\xaf\xcc\xdf\x8d\xec\x90\xac\x81" "y" \
    "\x82\xb7\x82\xe9\x81" "z|"
#define JW_FILE_SAVE " " "\x95\xdb\x91\xb6" "    "
#define JW_FILE_EDIT "\x95\xd2\x8f" "W"
#define JW_FILE_NAMED "\x83" "t" "\x83" "@" "\x83" "C" "\x83\x8b\x96\xbc"

/* 入出力's two menus, byte for byte off the original. */
#define JW_IO_FILE_BAR \
    "|\x87\x40\x95\xdb\x91\xb6(L)|\x87\x41\x93\xc7\x8d\x9e(R)" \
    "|\x87\x42\x8d\x87\x90\xac|\x87\x43\x8d\xed\x8f\x9c" \
    "|\x87\x44\xc4\xde\xd7\xb2\xcc\xde\x95\xcf\x8d\x58" \
    "|\x87\x45\x82\x63\x82\x77\x82\x65|\x87\x46INDEX|"
/* 電卓's four keypad rows, its own line and the white strip of function
 * keys under it -- byte for byte off the original. */
/* 目盛's own line. */
#define JW_GRID_BAR \
    "|\x87\x40 \x8f\x49\x97\xb9|\x87\x41\x96\xda\x90\xb7   X , Y  " \
    "\x8a\xd4\x8a\x75  |\x87\x42\x8a\xee\x93\x5f\x95\xcf\x8d\x58 " \
    "|\x87\x43\x81\x79\x90\x7d\x90\xa1\x81\x7a|\x87\x44\x93\xc7\x8e\xe6|"

#define JW_CALC_R1 " 7  8  9 \x81\x7c\x81\x80\x81\x7d"
#define JW_CALC_R2 " 4  5  6 \x81\x7e \xdf" "AC"
#define JW_CALC_R3 " 1  2  3  \x81\x7b \x82\x62"
#define JW_CALC_R4 " 0\x81\x40,  \xa5  \x81\x81 En"
#define JW_CALC_TOP \
    "\x93\x64\x91\xec\x81\x69[,][Enter]\x82\xcd\x90\x94\x92\x6c\x93\xfc" \
    "\x97\xcd\x8e\x9e\x82\xc9\x8e\x67\x97\x70\x81\x6a"
#define JW_CALC_FKEY \
    "|[f1]\x8c\x76\x8e\x5a\x8c\x8b\x89\xca\x95\x5c\x8e\xa6 " \
    "|[f2]\x90\x94\x92\x6c\x8e\xe6\x93\xbe |"
#define JW_CALC_F6 \
    "[F6] \x82\xd7\x82\xab\x8f\xe6\x84\xa0[F7]  \xd9\xb0\xc4 \x84\xa0" \
    "[F8]  COS \x84\xa0[F9]  SIN \x84\xa0[F10] ATAN "

#define JW_IO_PSET_BAR \
    "\x90\xdd\x92\xe8 |\x87\x40\x8a\x6d\x92\xe8(L)" \
    "|\x87\x41\x94\xcd\x88\xcd\x95\xcf\x8d\x58(R)|\x87\x42\x94\x6a \x90\xfc" \
    "|\x87\x43\x8d\xbd \x90\xfc|\x87\x44\x91\xac\x82\xb3" \
    "|\x87\x45\x97\x70\x8e\x86|"
#define JW_IO_PGO_BAR \
    "\x8d\xec\x90\x7d\x8a\x4a\x8e\x6e|\x87\x40 \x8e\xc0\x8d\x73(L)" \
    "|\x87\x41 \x92\x86\x8e\x7e(R)" \
    "|\x87\x42\x83\x4f\x83\x8b\x81\x5b\x83\x76\x98\x41\x91\xb1\x8f\x6f\x97\xcd" \
    "|\x87\x43\xcc\xa7\xb2\xd9\x98\x41\x91\xb1\x8f\x6f\x97\xcd" \
    "|\x87\x44\x94\xcd\x88\xcd|"
#define JW_IO_PLOT_BAR \
    "|\x87\x40RS-232C\x8f\x6f\x97\xcd(L)" \
    "|\x87\x41\xcc\xdf\xd8\xdd\xc0\xce\xdf\xb0\xc4\x8f\x6f\x97\xcd(R)" \
    "|\x87\x42\xcc\xa7\xb2\xd9\x8f\x6f\x97\xcd" \
    "|\x87\x43\x98\x67\x8f\x91\x8d\x9e|"

static char top_line[82];

static void top_clear(void)
{
    memset(top_line, ' ', sizeof top_line - 1);
    top_line[sizeof top_line - 1] = 0;
}

int jw_ui_top_item(int x, int y)
{
    const int col = x / 8 + 1;
    int i, bars = 0;

    if (y < 0 || y > 15 || col < 1 || col > 80) {
        return 0;
    }
    if (top_line[col - 1] == '|') {
        return 0;               /* the bar itself does nothing */
    }
    for (i = 0; i < col - 1; i++) {
        if (top_line[i] == '|') {
            bars++;
        }
    }
    return bars;                /* 0 = before the first bar, so not an item */
}

void jw_ui_text(VGA *v, int col, int row, unsigned fg, unsigned bg,
                const char *s)
{
    const unsigned char *p = (const unsigned char *)s;
    const Fontx *ank = jw_view_ank(), *kanji = jw_view_kanji();
    int x = (col - 1) * 8, y = (row - 1) * 16;
    int i = 0;

    if (!p || !ank->data) {
        return;
    }
    if (row == 1) {
        int i;

        for (i = 0; p[i] && col - 1 + i < 80; i++) {
            top_line[col - 1 + i] = (char)p[i];
        }
    }
    /* 0def:23c5 reads its last argument as three cases, not as a colour:
     * 0 paints the background black behind the letters, 2 leaves what is
     * there, and 1 or -1 fills the whole run's rectangle with `fg` first and
     * then writes the letters in black, transparently (0def:24a6 zeroes both
     * colours after the fill).  That last one is how the bottom strip puts
     * 範囲記憶 on a green button. */
    if (bg == 0xffffu || bg == 1) {
        fill(v, x, y, x + (int)strlen(s) * 8 - 1, y + 15, fg);
        fg = bg = 0;
    } else if (bg == 2) {
        bg = fg;
    }
    while (p[i]) {
        const unsigned char *g;
        int w;

        if (is_lead(p[i]) && p[i + 1]) {
            unsigned code = (unsigned)(p[i] << 8) | p[i + 1];

            /* ①〜⑨ are never drawn as themselves.  They are NEC's own row 13,
             * which the IBM font has no glyph for, so the original takes them
             * apart: `add ax,78f1h` turns 8740h..8748h into '1'..'9' and the
             * two halves of the double-width cell get the digit and a ')'.
             * The menus are full of them (`|①実行(L)|②中止(R)|`), and drawing
             * nothing there left 67 pixels of the top row differing.
             *
             * At 0x1046d the original guards this with bit 0 of DGROUP 0x129,
             * and falls through to the ordinary kanji path when it is set --
             * a machine whose font *does* have row 13, which is to say a
             * PC-98.  On DOS/V the byte is zero (read back with
             * `dump +3375:0129`), so this is the only path there is here. */
            if (code >= 0x8740 && code <= 0x8748) {
                g = fontx_glyph(ank, (code + 0x78f1) & 0xff);
                if (g) {
                    jw_glyph(v, x, y, 8, 16, g, fg, bg);
                }
                g = fontx_glyph(ank, ')');
                if (g) {
                    jw_glyph(v, x + 8, y, 8, 16, g, fg, bg);
                }
                x += 16;
                i += 2;
                continue;
            }
            g = fontx_glyph(kanji, code);
            w = 16;
            i += 2;
        } else if (p[i] < 0x20) {
            /* A control byte takes its cell and paints nothing.  The original
             * never even asks the font driver for one: 「読取可能データ無」
             * begins with a BEL, and with DOSEMU_FONT_TRACE=1 on the run that
             * writes it there is no request for code 0007 at all, while what
             * follows lands one cell along -- so the cell is stepped over, not
             * dropped.  JWANK16.FNT does carry a glyph there (a small ring),
             * which is what drawing it would put on the screen.
             *
             * The BEL is the only byte under 0x20 in any string the original
             * writes, so that is the one this is measured on; the rest are
             * taken the same way for want of anything to measure them by. */
            g = 0;
            w = 8;
            i += 1;
        } else {
            g = fontx_glyph(ank, p[i]);
            w = 8;
            i += 1;
        }
        if (g) {
            jw_glyph(v, x, y, w, 16, g, fg, bg);
        }
        x += w;
    }
}

/* ------------------------------------------------------- one glyph, by hand */

/* Part of the chrome is not drawn with the character routine at all: the
 * original walks a glyph and plots it a pixel at a time, through 1def:1691.
 * That routine takes a **full-width** character and a step read out of DGROUP
 * -- 1.0 at 0x9224 for a real kanji, 0.5 at 0x9228 for a code below 400, which
 * it turns into a full-width Latin letter by adding 0x22 to the high byte
 * (0x0130 becomes JIS 0x2330, the full-width zero).  Then, for row `r` and
 * column `c` of the 16x16 glyph, it plots
 *
 *     (int)(x + step * c), (int)(y + step * r)
 *
 * so at 0.5 the sixteen rows land on eight lines.  That is how the layer
 * buttons get their digits and how "ALL" fits in the white bar.
 *
 * The two steps were read out of the running original (`dump 3485:9220 24`
 * gives 00 00 80 3F at 0x9224 and 00 00 00 3F at 0x9228); the rest was read
 * off `DOSEMU_BP=0EFF:1691` and the 1,340 pixels it puts through 1def:1423,
 * which this reproduces exactly.
 */
static unsigned jis_to_sjis(unsigned jis)
{
    unsigned hi = jis >> 8, lo = jis & 0xff, s1, s2;

    if (hi & 1) {
        s1 = (hi + 1) / 2 + 0x70;
        s2 = lo + 0x1f + (lo >= 0x60);
    } else {
        s1 = hi / 2 + 0x70;
        s2 = lo + 0x7e;
    }
    if (s1 >= 0xa0) {
        s1 += 0x40;
    }
    return (s1 << 8) | s2;
}

static void jw_ui_blit(VGA *v, int x, int y, unsigned code, unsigned colour)
{
    const unsigned char *g;
    unsigned jis = code;
    double step = 1.0;
    int r, c;

    if (code < 400) {
        jis = code + 0x2200;
        step = 0.5;
    }
    g = fontx_glyph(jw_view_kanji(), jis_to_sjis(jis));
    if (!g) {
        return;
    }
    for (r = 0; r < 16; r++) {
        unsigned bits = ((unsigned)g[r * 2] << 8) | g[r * 2 + 1];
        int py = (int)(y + step * r);

        for (c = 0; c < 16; c++) {
            if (bits & (0x8000u >> c)) {
                jw_point(v, (int)(x + step * c), py, colour, ROP_REPLACE);
            }
        }
    }
}

/* ------------------------------------------------------------------ state */

/* The paper's width in millimetres.  0885:100d picks the label off the same
 * number: past 14 it is "err", 14 is "100", 13 "50m", 12 "10m", 8 and up
 * "%1dA" with six taken off, and below that "A-%1d". */
static const float PAPER_MM[5] = { 1189.0f, 841.0f, 594.0f, 420.0f, 297.0f };

static void paper_name(char *out, int paper)
{
    if (paper > 14) {
        strcpy(out, "err");
    } else if (paper == 14) {
        strcpy(out, "100");
    } else if (paper == 13) {
        strcpy(out, "50m");
    } else if (paper == 12) {
        strcpy(out, "10m");
    } else if (paper >= 8) {
        sprintf(out, "%1d`", paper - 6);
    } else {
        sprintf(out, "A-%1d", paper);
    }
}

/* 0885:1079.  Below 1 it is written the other way up, and a scale under 4.9
 * keeps a decimal: SAMPLE0's 1 comes out "S=1/1.0" and SAMPLE1's 100 "S=1/100".
 * The three thresholds are doubles in the original's DGROUP -- 0.99989 at
 * 0x9134, 4.9 at 0x9118 and the 0.5 it rounds with at 0x9128. */
static void scale_name(char *out, double denom)
{
    if (denom > 0.99989468) {
        if (denom < 4.9) {
            sprintf(out, "S=1/%3.1f", denom);
        } else {
            sprintf(out, "S=1/%d", (int)(denom + 0.5));
        }
    } else if (denom > 0.0) {
        double up = 1.0 / denom;

        if (up < 4.9) {
            sprintf(out, "S=%3.1f/1", up);
        } else {
            sprintf(out, "S=%3.0f/1", up);
        }
    } else {
        strcpy(out, "S=1/1.0");
    }
}

/* 0885:0b3b.  A line type of 8 or less is a pen and the label is its number;
 * past that it is one of three named styles. */
static void pen_name(char *out, int pen, int line_type)
{
    if (line_type <= 8) {
        sprintf(out, "Pen.%1d", pen);
    } else if (line_type <= 10) {
        strcpy(out, "Addi.L");
    } else if (line_type <= 15) {
        sprintf(out, "Rnd.f%1d", line_type - 10);
    } else if (line_type <= 18) {
        strcpy(out, "Long.L");
    } else {
        *out = 0;
    }
}

/* 表示倍率: 170 millimetres of screen over the paper's width, in float, which
 * is what the original keeps at DGROUP 0x8972 -- 0.5723907 for A-4, 0.4047619
 * for A-3, 0.2861953 for A-2 and 0.2021402 for A-1, all of them 170.0f over
 * the width this table holds. */
static double magnification(int paper)
{
    return paper >= 0 && paper <= 4 ? 170.0f / PAPER_MM[paper] : 0.0;
}

void jw_ui_default(JwUi *s)
{
    int i;

    memset(s, 0, sizeof(*s));
    s->pen = 2;
    s->view_scale = 1.0;
    s->line_type = 1;
    s->dec[0] = s->dec[1] = 3;
    s->paper = 3;
    s->denom = 100.0;
    s->group = 0;
    s->layer = 0;
    for (i = 0; i < 16; i++) {
        s->layer_on[i] = 1;
        s->layer_ring[i] = 1;
    }
}

void jw_ui_from(JwUi *s, const Jwc *d)
{
    int i;

    jw_ui_default(s);
    /* The right-hand count is the arcs **and** the texts: the label over it
     * reads 円ｰ文数, and 20 + 4 is the 24 the original shows for SAMPLE1. */
    s->n_lines = d->n_lines;
    s->n_arcs = d->n_arcs + d->n_texts;
    s->pen = d->pen;
    s->line_type = d->line_type;
    s->paper = d->paper;
    s->denom = d->denom;
    s->layer = d->write_layer;
    /* 目盛's two numbers, in millimetres of paper.  **Five when the drawing
     * has none**: SAMPLE0 stores 0 and the original still offers 5.000,
     * while SAMPLE1, which stores 15.697 units, shows its own 9.000. */
    s->grid_x = d->grid_x > 0.0 && d->unit_mm > 0.0f
                    ? d->grid_x / d->unit_mm : 5.0;
    s->grid_y = d->grid_y > 0.0 && d->unit_mm > 0.0f
                    ? d->grid_y / d->unit_mm : 5.0;
    s->group = d->write_layer >> 4;
    s->name = d->layer_name[(s->group << 4) | (s->layer & 15)];
    s->work_seconds = d->work_seconds;
    s->dec[0] = s->dec[1] = d->decimals;
    s->char_type = d->char_type;
    s->char_pen = d->text_pen[d->char_type];
    s->char_w = d->text_w[d->char_type];
    s->char_h = d->text_h[d->char_type];
    for (i = 0; i < 16; i++) {
        const unsigned char layer = (unsigned char)((s->group << 4) | i);
        long k;

        s->layer_on[i] = (unsigned char)jwc_visible(d, layer);
        s->layer_ring[i] = (unsigned char)(s->layer_on[i]
                                           && d->layer_edit[layer]
                                           && d->group_edit[layer >> 4]);
        for (k = 0; k < d->n_lines; k++) {
            if (d->lines[k].layer == layer) {
                s->layer_geom[i] = 1;
                break;
            }
        }
        for (k = 0; k < d->n_arcs && !s->layer_geom[i]; k++) {
            if (d->arcs[k].layer == layer) {
                s->layer_geom[i] = 1;
            }
        }
        for (k = 0; k < d->n_points && !s->layer_geom[i]; k++) {
            if (d->points[k].layer == layer) {
                s->layer_geom[i] = 1;
            }
        }
        for (k = 0; k < d->n_texts; k++) {
            if (d->texts[k].layer == layer) {
                s->layer_text[i] = 1;
                break;
            }
        }
    }
    /* And the same two per group, which is what ｸﾞﾙｰﾌﾟ's sixteen boxes
     * show: the high nibble of the layer byte picks the group. */
    for (i = 0; i < 16; i++) {
        s->group_on[i] = d->group_on[i];
    }
    for (i = 0; i < d->n_lines; i++) {
        s->group_geom[d->lines[i].layer >> 4] = 1;
    }
    for (i = 0; i < d->n_arcs; i++) {
        s->group_geom[d->arcs[i].layer >> 4] = 1;
    }
    for (i = 0; i < d->n_points; i++) {
        s->group_geom[d->points[i].layer >> 4] = 1;
    }
    for (i = 0; i < d->n_texts; i++) {
        s->group_text[d->texts[i].layer >> 4] = 1;
    }
}

/* One row of a stage table, with the command's numbers filled in.  Both
 * tables -- the generated src/stage.h and the hand-written src/typed.h -- hold
 * the same shape and are replayed through here. */
/* Copy `text`, putting `n` numbers in place of its first `count` runs of
 * digits.
 *
 * The prompts in src/prompt.h are the original's own bytes, captured while it
 * had one particular drawing up, so the few that carry a number carry that
 * drawing's number.  This puts the one in hand back without touching anything
 * else; `decimal` says whether a run with a `.` in it is one number (`4.0`)
 * or two. */
static void put_numbers(char *out, size_t cap, const char *text,
                        const double *n, int count, int decimal)
{
    size_t o = 0;
    int k = 0;

    while (*text && o + 24 < cap) {
        if (k < count && *text >= '0' && *text <= '9') {
            while (*text && ((*text >= '0' && *text <= '9')
                             || (decimal && *text == '.'))) {
                text++;
            }
            if (decimal) {
                o += (size_t)sprintf(out + o, "%.1f", n[k]);
            } else {
                o += (size_t)sprintf(out + o, "%d", (int)n[k]);
            }
            k++;
            continue;
        }
        out[o++] = *text++;
    }
    out[o] = 0;
}

/* A length in metres, the way 測定 writes it: three decimals, then the
 * trailing zeros and a trailing point taken off.  Measured -- 0 comes out
 * `0`, a tenth of a metre `0.1`, 128.2mm `0.128`. */
static void put_metres(char *out, size_t cap, const char *text, double m)
{
    size_t o = 0;
    int done = 0;

    while (*text && o + 24 < cap) {
        if (!done && ((*text >= '0' && *text <= '9') || *text == '.')) {
            char num[32];
            size_t n;

            while (*text && ((*text >= '0' && *text <= '9') || *text == '.')) {
                text++;
            }
            n = (size_t)sprintf(num, "%.3f", m);
            while (n > 0 && num[n - 1] == '0') {
                n--;
            }
            if (n > 0 && num[n - 1] == '.') {
                n--;
            }
            num[n] = 0;
            o += (size_t)sprintf(out + o, "%s", num);
            done = 1;
            continue;
        }
        out[o++] = *text++;
    }
    out[o] = 0;
}

static void stage_text(VGA *v, const JwStage *q, const JwUi *s, int stage)
{
    char out[160];

    if (q->command != s->command || q->stage != stage) {
        return;
    }
    /* ②範囲外消去 has no `＿` in front of its 追加･除外 line. */
    if (s->outside && q->command == 25 && q->stage == 3 && q->col == 6) {
        return;
    }
    /* Some of what a stage writes only goes up once the pointer has moved off
     * the point just taken -- ／'s `長=` and `角度=`, 「（」's `半径=`.  The
     * table says which (src/stage.h's `moved`, measured; ○ and □ write theirs
     * the moment they are pressed and are not marked). */
    if (q->moved && !s->moved) {
        return;
    }
    /* 文字's field is only up while it is taking a string: once [Enter] has
     * written the text the command is at stage 2 and none of stage 1 is on
     * the screen any more (the original writes ` Get type[tab]` back at row 4
     * and its own line over the top one). */
    if ((q->command == 13 || q->command == 28)
        && q->stage == 1 && !s->typing_text) {
        return;
    }
    /* 線変更's word beside the counts is the one thing in the table that
     * depends on what the press found, so it is drawn below instead. */
    if (q->command == 24 && q->col == 20 && q->row == 2) {
        return;
    }
    /* And 文字's own numbers are the drawing's, not the capture's -- the
     * character type in its field and in its line, and that type's pen, width
     * and height in the panel.  Same as the prompt rows; see put_numbers. */
    if (q->command == 13) {
        double n[2];
        int k = 0;

        if ((q->col == 5 && q->row == 4) || (q->col == 8 && q->row == 1)) {
            n[k++] = s->char_type;
        } else if (q->col == 1 && q->row == 2 && q->fg == 0) {
            n[k++] = s->char_pen;
        } else if (q->col == 1 && q->row == 3 && q->fg == 0) {
            n[k++] = s->char_w / 10.0;
            n[k++] = s->char_h / 10.0;
        }
        if (k) {
            char one[160];

            put_numbers(one, sizeof one, q->text, n, k, q->row == 3);
            jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
            return;
        }
    }
    /* 文編集's `|種 3|Paste` carries the character type of the text it was
     * pointed at, so that digit is the drawing's too. */
    if (q->command == 28 && q->col == 5 && q->row == 4) {
        char one[160];
        double n = s->edit_type;

        put_numbers(one, sizeof one, q->text, &n, 1, 0);
        jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
        return;
    }
    /* 寸法 has its own two rows in the counts box: the pen it writes with
     * and how many texts the drawing had, then the character size.  The count
     * is the one from when the command asked for the 寸法値の始点 -- the
     * original does not write it again after the text goes in. */
    if (q->command == 14 && q->col == 1 && (q->row == 2 || q->row == 3)) {
        char one[160];
        double n[2];

        if (q->row == 2) {
            n[0] = JW_DIM_PEN;
            n[1] = (double)s->dim_texts;
            put_numbers(one, sizeof one, q->text, n, 2, 0);
        } else {
            n[0] = s->dim_w;
            put_numbers(one, sizeof one, q->text, n, 1, 1);
        }
        jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
        return;
    }
    if (q->command == 14 && q->col == 9 && q->row == 3) {
        char one[160];
        double n = s->dim_h;

        put_numbers(one, sizeof one, q->text, &n, 1, 1);
        jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
        return;
    }
    /* 寸法 puts the value it has just written in the band, one decimal with
     * the trailing zero and point taken off -- `250`, not `250.0`. */
    if (q->command == 14 && q->row == 2 && q->col == 17) {
        char num[32];
        size_t n = (size_t)sprintf(num, "%.1f", s->dim_value);

        while (n > 0 && num[n - 1] == '0') {
            n--;
        }
        if (n > 0 && num[n - 1] == '.') {
            n--;
        }
        num[n] = 0;
        jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, num);
        return;
    }
    /* ⑥回転 puts the angle that was typed in the band, where the capture has
     * `  30.000゜` -- eight columns and three decimals, so a plain %8.3f with
     * the ゜ after it.  put_numbers would drop to one decimal. */
    if ((q->command == 1 || q->command == 16) && q->stage == 15
        && q->row == 2) {
        char num[32];

        sprintf(num, "%8.3f\xdf", s->rot_deg);
        jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, num);
        return;
    }
    /* ハッチ's 残数 counts down from 100 as lines go into the frame, and its
     * angle and pitch are the command's own. */
    if (q->command == 18 && q->row == 2) {
        char one[160];
        double n;

        if (q->col == 70) {
            n = 100 - s->hatch_n;
        } else if (q->col == 32) {
            n = s->hatch_angle;
        } else if (q->col == 42) {
            n = s->hatch_pitch;
        } else {
            n = 0.0;
        }
        if (q->col == 70 || q->col == 32 || q->col == 42) {
            put_numbers(one, sizeof one, q->text, &n, 1, q->col != 70);
            jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
            return;
        }
    }
    /* 連線's two band words: `45度毎`/`90度毎`/`free` and `マウス`/`----`.
     * ①角 度 goes round the three and the table holds the first. */
    if (q->command == 23 && q->row == 2 && (q->col == 37 || q->col == 46)) {
        const char *one = q->col == 37
            ? (s->poly_deg == 90 ? "90" "\x93" "x" "\x96" "\x88"
               : s->poly_deg == 45 ? "45" "\x93" "x" "\x96" "\x88" : " free ")
            : (s->poly_deg ? "\x83" "}" "\x83" "E" "\x83" "X" : " ---- ");

        jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
        return;
    }
    /* 測定's two lengths and the scale in its own line. */
    if (q->command == 15) {
        char one[160];

        if (q->row == 3 && (q->col == 20 || q->col == 55)) {
            put_metres(one, sizeof one, q->text,
                       q->col == 20 ? s->meas_total : s->meas_last);
            jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
            return;
        }
        if (q->row == 1 && q->col == 8) {
            double n[2];

            n[0] = 1.0;
            n[1] = s->denom;
            put_numbers(one, sizeof one, q->text, n, 2, 0);
            jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
            return;
        }
    }
    /* 分割's numbers are the program's too: the count it offers as 前回と同じ
     * (`[2]`), how many 仮点 are left (`残 97`) and the count it just used
     * (`   4` beside the counts).  The digits in the captured text are
     * replaced the way 文字's are. */
    if (q->command == 21 && (q->col == 55 || q->col == 72 || q->col == 8)) {
        char one[160];
        double n[1];

        n[0] = q->col == 55 ? s->divisions
             : q->col == 72 ? s->divisions
             : s->temp_left;
        put_numbers(one, sizeof one, q->text, n, 1, 0);
        jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, one);
        return;
    }
    if (q->numbers == 3) {
        /* The one cell the original prints with a bare `%g` -- 「（」's radius
         * at the end of its line.  See tools/stage_table.py's LOOSE. */
        sprintf(out, q->text, s->num[q->first]);
    } else if (q->numbers == 2) {
        const int k = q->first + 1 > 1 ? 1 : q->first + 1;

        sprintf(out, q->text, q->width[0], s->dec[q->first], s->num[q->first],
                q->width[1], s->dec[k], s->num[k]);
    } else if (q->numbers == 1) {
        sprintf(out, q->text, q->width[0], s->dec[q->first], s->num[q->first]);
    } else {
        strcpy(out, q->text);
    }
    jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, out);
}

/* The line of guidance the original comes up with, out of its own DGROUP --
 * 作図条件・制限事項等については、付属の JW_CAD.DOC をご覧ください。 */
const char *jw_ui_guide(void)
{
    return "\x93\xae\x8d\xec\x8f\xf0\x8c\x8f\xa5\x90\xa7\x8c\xc0\x8e\x96"
    "\x8d\x80\x93\x99\x82\xc9\x82\xc2\x82\xa2\x82\xc4\x82\xcd\xa4"
    "\x95\x74\x91\xae\x82\xcc JW_CAD.DOC \x82\xf0\x82\xb2\x97\x97"
    "\x82\xad\x82\xbe\x82\xb3\x82\xa2\xa1";
}

/* The two counts and the label under them.  A command writes what it has
 * measured over them while it runs and the original puts them back the
 * moment it is finished, so this is called twice. */
static void counts(VGA *v, const JwUi *s)
{
    char buf[64];

    /* Paint the box again first.  Both of these are written transparently --
     * black letters on the green the box is filled with -- so writing over what
     * a command left there would leave both readable on top of each other.  The
     * original fills (1,17)-(120,47) line by line before it writes. */
    fill(v, 1, 17, 120, 47, 4);
    sprintf(buf, "%7ld|%7ld ", s->n_lines, s->n_arcs);
    jw_ui_text(v, 1, 2, 0, 0, buf);
    jw_ui_text(v, 1, 3, 0, 0, " \x90\xfc  \x90\x94|\x89\x7e\xa5\x95\xb6\x90\x94");
}

/* The panel the counts box turns into while the pointer rests on it.
 *
 * Nothing presses anything: moving the mouse into (1,17)-(120,47) blacks the
 * green box out and puts two rows of settings there, and moving out puts the
 * counts back.  Caught with the emulator parked at (60,30) -- ten string
 * writes, all of them into the box:
 *
 *     col  1 row 2 fg 6   目盛        col  1 row 3 fg 6   軸角
 *     col  5 row 2 fg 0   off         col  5 row 3 fg 0   off
 *     col  8 row 2 fg 6   11          col  8 row 3 fg 5   on
 *     col 10 row 2 fg 6   12          col 10 row 3 fg 6   字表示
 *     col 12 row 2 fg 6   13
 *     col 14 row 2 fg 6   14
 *
 * The rules and the two value boxes are not strings, so they came off the
 * screen instead: white down x=31 and x=55 the whole height, white along
 * y=32 across the box and along y=17 between the two rules, white down x=72
 * on the lower row only, and the value box beside each label filled --
 * (32,18)-(54,31) yellow for 目盛, (32,33)-(54,47) cyan for 軸角 -- with the
 * `off` written over it in black, the transparent way the counts are. */
static void gauge(VGA *v, const JwUi *s)
{
    int i;

    /* Pressing one of its cells takes the panel away again: 目盛 puts up
     * its own line and the counts come back green underneath. */
    if (s->grid_mode || s->mouse_x < 0 || s->mouse_x > 120 ||
        s->mouse_y < 17 || s->mouse_y > 48) {
        return;
    }
    fill(v, 1, 17, 120, 47, 0);
    fill(v, 32, 18, 54, 31, 6);
    fill(v, 32, 33, 54, 47, 5);
    jw_ui_text(v, 1, 2, 6, 0, "\x96" "\xda" "\x90" "\xb7");
    jw_ui_text(v, 5, 2, 0, 0, "off");
    jw_ui_text(v, 8, 2, 6, 0, "11");
    jw_ui_text(v, 10, 2, 6, 0, "12");
    jw_ui_text(v, 12, 2, 6, 0, "13");
    jw_ui_text(v, 14, 2, 6, 0, "14");
    jw_ui_text(v, 1, 3, 6, 0, "\x8e" "\xb2" "\x8a" "\x70");
    jw_ui_text(v, 5, 3, 0, 0, "off");
    jw_ui_text(v, 8, 3, 5, 0, "on");
    jw_ui_text(v, 10, 3, 6, 0, "\x8e" "\x9a" "\x95" "\x5c" "\x8e" "\xa6");

    /* And a short slant beside each of the four numbers -- eight pixels of
     * yellow that no string write accounts for, the same shape by every one
     * of 11, 12, 13 and 14: (63,20)-(61,27) and the same sixteen, thirty-two
     * and forty-eight pixels to the right.  Read off the original with the
     * pointer at (119,30), where nothing else is over them. */
    for (i = 0; i < 4; i++) {
        jw_line(v, 63 + 16 * i, 20, 61 + 16 * i, 27, 6,
                ROP_REPLACE, JW_STYLE_SOLID);
    }

    /* The rules go on last.  The two labels are kanji, so their cells are
     * sixteen pixels wide and reach x=31 -- and 軸角 starts at y=32, the
     * row the rule across the box runs along.  Drawing the rules first left
     * the port without the white down x=31 and without most of the rule at
     * y=32, 176 pixels in all: the original writes the text and then rules
     * over it. */
    fill(v, 31, 17, 55, 17, 7);
    fill(v, 31, 17, 31, 47, 7);
    fill(v, 55, 17, 55, 47, 7);
    fill(v, 72, 33, 72, 47, 7);
    fill(v, 1, 32, 120, 32, 7);
}

/* ------------------------------------------------------------------- draw */

/* The fifteen rows of the menu, at rows 5 to 19 of the character grid.  The
 * left column is command 16 to 30 and the right 1 to 15; the key goes between
 * them at column 8, and after the right label at column 15. */
/* The item that is picked is drawn the other way round: the original fills its
 * row with colour 6 and writes the label and the key over it in black.  The two
 * rectangles are (8,64)-(64,79) for the left column and (71,64)-(119,79) for
 * the right, sixteen pixels lower for each row down -- read off 0885:390f with
 * 移動 and 複写 picked. */
static void menu_pick(VGA *v, int command)
{
    const int left = command >= 16;
    const int row = left ? command - 16 : command - 1;
    char key[2];

    if (command < 1 || command > 30) {
        return;
    }
    fill(v, left ? 8 : 71, 64 + 16 * row, left ? 64 : 119, 79 + 16 * row, 6);
    key[0] = jw_ui_menu_key(command);
    key[1] = 0;
    jw_ui_text(v, left ? 2 : 10, row + 5, 0, 0, jw_ui_menu_label(command));
    jw_ui_text(v, left ? 8 : 15, row + 5, 0, 0, key);
}

/* And the item the pointer is **resting on**, which is a different highlight
 * from the picked one: white behind the label rather than yellow behind the
 * whole row, and the one-letter key beside it is left alone.
 *
 * Measured against the original with nothing pressed, pointer at (8,128):
 * it differs from the port over **x 8..55, y 128..143** and nowhere else, and
 * at (88,128) over **x 72..111**.  Those are the label cells -- six columns
 * from column 2 on the left, five from column 10 on the right -- so the key
 * at column 8 (and 15) stays as it was.  The rows are the menu's own, sixteen
 * pixels from y=64, and above them (y 52..63) nothing highlights.
 *
 * Every other check presses something first, so nothing caught this until
 * tools/hovercheck.sh went looking at the resting pointer alone.
 */
static void menu_hover(VGA *v, const JwUi *s)
{
    const int row = (s->mouse_y - 64) / 16;
    int command, x0, x1, col;

    /* y=303 is the last row's last pixel and the original does **not**
     * light it, though 300, 301 and 302 all do -- tools/menuhit.sh walked
     * the row's bottom edge.  Why it stops one short is not known; the
     * measurement is what the port follows. */
    if (s->mouse_y < 64 || s->mouse_y > 302 || row < 0 || row > 14) {
        return;
    }
    /* The rectangle that lights up is not the rectangle that has to be
     * pointed at.  tools/menuhit.sh walks x across a row: the original
     * lights the **left** column anywhere from x=8 to x=68 -- over the bar
     * between the two columns as well -- and the right one from x=69 out to
     * x=121, the panel's own edge.  Only x 0..7 picks neither. */
    if (s->mouse_x >= 8 && s->mouse_x <= 68) {
        command = row + 16;                     /* the left column */
        x0 = 8; x1 = 55; col = 2;
    } else if (s->mouse_x >= 69 && s->mouse_x <= 121) {
        command = row + 1;                      /* the right one */
        x0 = 72; x1 = 111; col = 10;
    } else {
        return;
    }
    if (command == s->command) {
        /* The row that is **picked** keeps its yellow: pointing at it does
         * not turn it white.  Caught by picking 入出力 with the pointer
         * still on it -- 638 pixels of the row came out white. */
        return;
    }
    fill(v, x0, 64 + 16 * row, x1, 79 + 16 * row, 7);
    jw_ui_text(v, col, row + 5, 0, 0, jw_ui_menu_label(command));
}

static void menu(VGA *v)
{
    int i;

    jw_ui_text(v, 2, 4, 7, 0, " Get type[tab]");
    for (i = 1; i <= 15; i++) {
        char key[2];

        jw_ui_text(v, 2, i + 4, 6, 0, jw_ui_menu_label(i + 15));
        key[0] = jw_ui_menu_key(i + 15);
        key[1] = '\0';
        jw_ui_text(v, 8, i + 4, 6, 0, key);
        jw_ui_text(v, 10, i + 4, 6, 0, jw_ui_menu_label(i));
        key[0] = jw_ui_menu_key(i);
        jw_ui_text(v, 15, i + 4, 6, 0, key);
    }
}

void jw_ui_draw(VGA *v, const JwUi *s)
{
    char buf[64], name[32];
    int i;

    v->clip_x0 = 0;
    v->clip_y0 = 0;
    v->clip_x1 = v->width - 1;
    v->clip_y1 = v->height - 1;

    /* -- the frame ------------------------------------------------------ */
    fill(v, 0, 0, 639, 15, 0);
    fill(v, 0, 463, 639, 479, 0);
    fill(v, 0, 0, 121, 303, 0);
    jw_line(v, 0, 16, 639, 16, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 639, 16, 639, 479, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 479, 639, 479, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 479, 0, 16, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 121, 16, 121, 463, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 63, 121, 63, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 121, 63, 121, 304, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 304, 121, 304, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 304, 0, 63, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 463, 639, 463, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 121, 463, 121, 479, 7, ROP_REPLACE, JW_STYLE_SOLID);

    /* -- the two counts ------------------------------------------------- */
    box(v, 0, 16, 121, 48, 7);
    counts(v, s);
    gauge(v, s);

    /* -- the menu ------------------------------------------------------- */
    menu(v);
    menu_pick(v, s->command);
    menu_hover(v, s);
    box(v, 0, 48, 121, 304, 7);
    jw_line(v, 0, 63, 121, 63, 7, ROP_REPLACE, JW_STYLE_SOLID);
    box(v, 1, 49, 120, 305, 7);
    fill(v, 65, 64, 70, 303, 7);
    fill(v, 67, 64, 68, 303, 0);
    /* The working time, two pixels wide, down the black core of the bar
     * between the two menu columns (0885:38b0).  The original turns seconds
     * into `q = seconds * 16 / 3600` and draws `q % 160` of it up from the
     * bottom in colour 5 and `q / 10`, at most 240, down from the top in
     * colour 6.  Both were read off it: q is 39 for SAMPLE1's 8,939 seconds
     * and 252 for TEST6's 56,704, and the two bars are 39 and 3, and 92 and
     * 25 -- 252 % 160 and 252 / 10. */
    {
        long q = s->work_seconds * 16 / 3600;
        long lo = q % 160, hi = q / 10;

        if (hi > 240) {
            hi = 240;
        }
        if (lo > 0) {
            fill(v, 67, (int)(304 - lo), 68, 303, 5);
        }
        if (hi > 0) {
            fill(v, 67, 64, 68, (int)(63 + hi), 6);
        }
    }
    jw_line(v, 55, 64, 55, 304, 7, ROP_REPLACE, 0x5555);
    jw_line(v, 111, 64, 111, 304, 7, ROP_REPLACE, 0x5555);
    fill(v, 0, 48, 7, 304, 7);
    if (!s->pen_board) {
        /* The two scroll arrows and the mark between them are not there
         * while ペン's board is up: the original leaves x 0..1 white down
         * the whole strip, and the board's own fill takes x 2..7. */
        jw_line(v, 1, 176, 6, 176, 0, ROP_REPLACE, JW_STYLE_SOLID);
        jw_ui_blit(v, 0, 112, 0x100 | 'U', 0);
        jw_ui_blit(v, 0, 236, 0x100 | 'D', 0);
    }

    /* ペン's board goes over the menu.  Read off the original after a press
     * on the pen box: `線 種   変 更` in black on a white row 4, then
     * `Pen.1`..`Pen.6` down rows 5..10 with a 47x12 block of the pen's own
     * colour at (64,+3)-(110,+14), and the nine line types down rows 11..19
     * with a sample line at (64,+8)-(110,+8) in that type's pattern.  `#`
     * marks the pen in use and `*` the type, both at column 8. */
    if (s->pen_board) {
        static const char *const TYPE[9] = {
            "\x8e\xc0\x81\x40\x90\xfc",   /* 実　線 */
            "\x93\x5f\x81\x40\x90\xfc",   /* 点　線 */
            "\x93\x5f\x81\x40\x90\xfc",
            "\x93\x5f\x81\x40\x90\xfc",
            "\x82\x50\x93\x5f\x8d\xbd",   /* １点鎖 */
            "\x82\x50\x93\x5f\x8d\xbd",
            "\x82\x51\x93\x5f\x8d\xbd",   /* ２点鎖 */
            "\x82\x51\x93\x5f\x8d\xbd",
            "\x95\xe2\x8f\x95\x90\xfc"    /* 補助線 */
        };
        int k;

        fill(v, 0, 48, 121, 63, 7);
        jw_ui_text(v, 2, 4, 0, 0,
                   "\x90\xfc\x20\x8e\xed\x20\x20\x20\x95\xcf\x20\x8d\x58");
        fill(v, 2, 65, 119, 303, 0);
        for (k = 0; k < 6; k++) {
            const int by = 64 + 16 * k;
            char one[8];

            sprintf(one, "Pen.%d", k + 1);
            jw_ui_text(v, 2, 5 + k, 7, 0, one);
            fill(v, 64, by + 3, 110, by + 14,
                 jw_view_pen_colour((unsigned)(k + 1)));
        }
        for (k = 0; k < 9; k++) {
            const int by = 160 + 16 * k;

            jw_ui_text(v, 2, 11 + k, 7, 0, TYPE[k]);
            jw_line(v, 64, by + 8, 110, by + 8, 7, ROP_REPLACE,
                    jw_view_line_style((unsigned)(k + 1)));
        }
        jw_ui_text(v, 8, 4 + s->pen, 7, 0, "#");
        jw_ui_text(v, 8, 10 + s->line_type, 7, 0, "*");
        /* Two white rules right across, **after** the words: one under the
         * title and one above 補助線, which is set apart from the eight
         * patterned types.  Drawn first they came out broken, because the
         * labels paint black behind themselves. */
        fill(v, 0, 64, 121, 64, 7);
        fill(v, 0, 288, 121, 288, 7);
    }

    /* -- the pen, the paper, the group, the layers ---------------------- */
    fill(v, 1, 306, 120, 383, 0);
    fill(v, 0, 352, 9, 384, 7);
    jw_ui_blit(v, 1, 354, 0x100 | 'A', 0);
    jw_ui_blit(v, 1, 364, 0x100 | 'L', 0);
    jw_ui_blit(v, 1, 374, 0x100 | 'L', 0);
    jw_line(v, 0, 320, 121, 320, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 336, 121, 336, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 0, 352, 121, 352, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 9, 368, 121, 368, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 9, 384, 121, 384, 7, ROP_REPLACE, JW_STYLE_SOLID);
    for (i = 0; i < 8; i++) {
        jw_line(v, 9 + 14 * i, 352, 9 + 14 * i, 384, 7, ROP_REPLACE,
                JW_STYLE_SOLID);
    }
    box(v, 0, 352, 121, 384, 7);

    fill(v, 1, 321, 120, 335, 0);
    fill(v, 1, 321, 36, 335, 4);
    paper_name(name, s->paper);
    sprintf(buf, " %-15s", name);
    jw_ui_text(v, 1, 21, 0, 0, buf);
    scale_name(buf, s->denom);
    jw_ui_text(v, 7, 21, 6, 0, buf);
    box(v, 0, 320, 121, 336, 7);

    fill(v, 1, 306, 120, 318, 0);
    if (s->group_mode || s->calc) {
        /* ｸﾞﾙｰﾌﾟ and 電卓 both empty the pen's row: the original leaves
         * y 305..319 black, no `Pen.2` and no sample line.  電卓 keeps the
         * panel's right edge at x=120 on the first of those rows, ｸﾞﾙｰﾌﾟ
         * does not -- one pixel, measured both ways. */
        fill(v, 1, 305, s->calc ? 119 : 120, 319, 0);
    } else {
    jw_ui_text(v, 1, 20, 7, 0, "               ");
    pen_name(buf, s->pen, s->line_type);
    jw_ui_text(v, 2, 20, jw_view_pen_colour((unsigned)s->pen), 0, buf);
    /* the sample beside Pen.n: the pen's own colour and the line type's
     * pattern (TEST7 writes with type 9 and the sample comes out dotted) */
    jw_line(v, 64, 312, 110, 312, jw_view_pen_colour((unsigned)s->pen),
            ROP_REPLACE, jw_view_line_style((unsigned)s->line_type));
    }
    /* Two white rows under the menu -- but ｸﾞﾙｰﾌﾟ empties the pen's row and
     * that takes the lower one with it: the original has y=304 white and
     * y=305 black while it is asking. */
    fill(v, 0, 304, 121, (s->group_mode || s->calc) ? 304 : 305, 7);
    jw_line(v, 0, 16, 0, 463, 7, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 121, 16, 121, 463, 7, ROP_REPLACE, JW_STYLE_SOLID);

    if (s->group_mode) {
        /* ｸﾞﾙｰﾌﾟ takes this row over: red where 図面名 and the word were. */
        jw_ui_text(v, 1, 22, 2, 0, GROUP_PICK);
    } else {
        jw_ui_text(v, 1, 22, 7, 0, "        ");
        if (s->name && *s->name) {
            jw_ui_text(v, 1, 22, 7, 0, s->name);
        }
        jw_ui_text(v, 9, 22, 6, 0, "\xb8\xde\xd9\xb0\xcc\xdf");
    }
    if (!s->group_mode) {
        /* All of this goes while ｸﾞﾙｰﾌﾟ is asking: the original leaves the
         * row with nothing on it but the red words -- no rule at x=64, no
         * cyan box for the number and no number. */
        fill(v, 110, 336, 121, 352, 5);
        box(v, 110, 336, 121, 352, 7);
        jw_line(v, 64, 336, 64, 352, 7, ROP_REPLACE, JW_STYLE_SOLID);
        sprintf(buf, "%X", s->group & 15);
        jw_ui_text(v, 15, 22, 0, 0, buf);
    }
    box(v, 0, 320, 121, 336, 7);

    /* The sixteen layer buttons.  The original fills the box of the layer it
     * writes to, then goes round the sixteen putting a full-width digit in
     * each (0EFF:1691, half size, black inside that filled box and yellow
     * everywhere else) and a ring round it (11B9:0AC5 with rx = ry = 5 at
     * (16 + 14k, 361) and (16 + 14k, 377), colour 6).  Both lists were read
     * off the running original. */
    if (s->group_mode) {
        /* The same sixteen boxes, but the **groups**: each one gets a white
         * rectangle (11,356)-(20,366) of its cell with the digit in cyan
         * inside it, and the group being written to is filled cyan with its
         * digit in black -- the layer display's rule in another colour, with
         * the rectangle added.  Read off the original after a press on
         * ｸﾞﾙｰﾌﾟ (tools/clickcheck.sh 80 344 left). */
        fill(v, 10 + 14 * (s->group & 7), 355 + 16 * ((s->group >> 3) & 1),
             22 + 14 * (s->group & 7), 367 + 16 * ((s->group >> 3) & 1), 5);
        for (i = 0; i < 16; i++) {
            const int cx = 14 * (i & 7), cy = 16 * (i >> 3);
            const unsigned digit = 0x100u | (i < 10 ? '0' + i : 'A' + i - 10);

            if (!s->group_on[i]) {
                continue;
            }
            box(v, 11 + cx, 356 + cy, 20 + cx, 366 + cy, 7);
            jw_ui_blit(v, 12 + cx, 358 + cy, digit, i == s->group ? 0 : 5);
        }
        for (i = 0; i < 16; i++) {
            const int bx = 10 + 14 * (i & 7), by = 353 + 16 * (i >> 3);

            fill(v, bx, by, bx + 6, by + 1, s->group_geom[i] ? 3 : 0);
            fill(v, bx + 7, by, bx + 12, by + 1, s->group_text[i] ? 3 : 0);
        }
    } else {
    fill(v, 10 + 14 * (s->layer & 7), 355 + 16 * ((s->layer >> 3) & 1),
         22 + 14 * (s->layer & 7), 367 + 16 * ((s->layer >> 3) & 1), 6);
    for (i = 0; i < 16; i++) {
        const int bx = 12 + 14 * (i & 7), by = 358 + 16 * (i >> 3);
        const unsigned digit = 0x100u | (i < 10 ? '0' + i : 'A' + i - 10);

        if (s->layer_on[i]) {
            jw_ui_blit(v, bx, by, digit, i == s->layer ? 0 : 6);
            if (s->layer_ring[i]) {
                jw_arc(v, bx + 4, by + 3, 5.0, 0.0, 0.0, 6, ROP_REPLACE,
                       JW_STYLE_SOLID);
            }
        }
    }
    jw_line(v, 55, 360, 55, 362, 0, ROP_REPLACE, JW_STYLE_SOLID);
    jw_line(v, 56, 360, 56, 362, 0, ROP_REPLACE, JW_STYLE_SOLID);
    for (i = 0; i < 16; i++) {
        const int bx = 10 + 14 * (i & 7), by = 353 + 16 * (i >> 3);

        fill(v, bx, by, bx + 6, by + 1, s->layer_geom[i] ? 3 : 0);
        fill(v, bx + 7, by, bx + 12, by + 1, s->layer_text[i] ? 3 : 0);
    }
    }

    if (s->group_mode) {
        jw_ui_text(v, 2, 25, 6, 0, GROUP_ALL);
    } else {
        jw_ui_text(v, 1, 25, 7, 0, " \x83\x54\x83\x75\x89\xe6\x96\xca \x95\x5c\x8e\xa6 ");
    }
    box(v, 0, 384, 121, 400, 7);
    jw_line(v, 0, 479, 0, 16, 7, ROP_REPLACE, JW_STYLE_SOLID);

    if (s->calc) {
        /* 電卓's keypad, over the rows 図面名, the sixteen layers and
         * サブ画面表示 had.  Read off the original with
         * tools/pressstr.sh 25 470 left. */
        int k;

        fill(v, 1, 320, 120, 399, 0);
        jw_ui_text(v, 1, 22, 6, 0, JW_CALC_R1);
        jw_ui_text(v, 1, 23, 6, 0, JW_CALC_R2);
        jw_ui_text(v, 1, 24, 6, 0, JW_CALC_R3);
        jw_ui_text(v, 1, 25, 6, 0, JW_CALC_R4);
        jw_ui_text(v, 13, 21, 7, 0, "0");
        jw_ui_text(v, 12, 23, 6, 0, " \xdf");
        /* The grid goes on **after** the keys: each row of them paints
         * black behind itself and would cut the lines otherwise. */
        /* The keys sit in a grid: a line every sixteen rows from y=336, and
         * columns at x 0, 24, 48, 72, 102 and 121 -- plus one at 87 that
         * stops after the third row, because ＝ is two keys wide. */
        for (k = 0; k <= 4; k++) {
            fill(v, 0, 336 + 16 * k, 121, 336 + 16 * k, 7);
        }
        fill(v, 0, 336, 0, 400, 7);
        fill(v, 24, 336, 24, 400, 7);
        fill(v, 48, 336, 48, 400, 7);
        fill(v, 72, 336, 72, 400, 7);
        fill(v, 87, 336, 87, 368, 7);
        fill(v, 102, 336, 102, 400, 7);
        fill(v, 121, 336, 121, 400, 7);
    }

    /* -- the strip along the bottom ------------------------------------- */
    fill(v, 1, 464, 638, 478, 0);
    box(v, 0, 463, 639, 479, 7);
    if (s->ask == JW_ASK_LNAME) {
        /* 図面名 empties the strip altogether -- y 464..479 is black right
         * across, frame and all, while it is asking for the name. */
        fill(v, 0, 464, 639, 479, 0);
    } else if (s->zoom_stage) {
        /* ■拡大■ takes the whole strip: 電卓, 範囲記憶, 前倍率, 倍率指定,
         * ｵﾌｾｯﾄ and HELP all go black and only the Zoom bar is left, in
         * **green** while it waits for the first corner and back to its
         * usual yellow after.  Until a corner is down it
         * offers the whole paper on the space bar; after that only the word
         * is left.  Measured -- the strip is black from x=1 to 223 and green
         * from 224 to 438, exactly the bar's own width, and the letters run
         * **over** the frame's bottom row, so that goes on first.  RESUME
         * 4.27. */
        fill(v, 224, 464, 438, 478, s->zoom_stage == 1 ? 4 : 6);
        if (s->zoom_stage == 1) {
            jw_ui_text(v, 29, 30, 0, 0, " " "\x97" "p" "\x8e" "\x86" "\x91" "S" "\x91" "\xcc" "\x8d" "\xc4" "\x95" "\x5c" "\x8e" "\xa6" "  [" "\xbd" "\xcd" "\xdf" "\xb0" "\xbd" "\xb7" "\xb0" "] ");
        } else {
            jw_ui_text(v, 30, 30, 0, 0, "      " "\x82" "y" "\x81" "@" "\x82" "\x8f" "\x81" "@" "\x82" "\x8f" "\x81" "@" "\x82" "\x8d" "      ");
        }
    } else {
    box(v, 0, 463, 121, 479, 7);
    jw_ui_text(v, 1, 30, 7, 0, "    [Z   ");
    jw_ui_blit(v, 2, 463, 0x4545, 7);      /* JIS 4545 and 426e: 電卓 */
    jw_ui_blit(v, 18, 463, 0x426E, 7);
    box(v, 51, 463, 121, 479, 7);
    fill(v, 52, 464, 120, 478, 4);
    jw_ui_text(v, 8, 30, s->kept ? 5 : 4, 0xffff, "\x94\xcd\x88\xcd\x8b\x4c\x89\xaf");
    jw_ui_text(v, 17, 30, 7, 0, "\x91\x4f\x94\x7b\x97\xa6[NFER]");
    fill(v, 224, 463, 438, 479, 6);
    sprintf(buf, "Zoom[\xbd\xcd\xdf\xb0\xbd] \x95\x5c\x8e\xa6\x94\x7b\x97\xa6 %4.2f ",
            magnification(s->paper) * s->view_scale);
    jw_ui_text(v, 30, 30, 0, 0, buf);
    jw_ui_text(v, 56, 30, 7, 0, "\x94\x7b\x97\xa6\x8e\x77\x92\xe8[XFER]");
    fill(v, 550, 464, 606, 478, 4);
    jw_ui_text(v, 70, 30, 0, 0, "\xb5\xcc\xbe\xaf\xc4");
    jw_ui_text(v, 77, 30, 7, 0, "HELP");
    jw_ui_blit(v, 590, 464, 0x100 | 'H', 0);
    jw_ui_blit(v, 598, 464, 0x100 | 'o', 0);
    jw_ui_blit(v, 591, 471, 0x100 | 'm', 0);
    jw_ui_blit(v, 599, 471, 0x100 | 'e', 0);
    box(v, 550, 463, 606, 479, 7);
    box(v, 0, 463, 639, 479, 7);
    }

    /* -- the title and the guidance ------------------------------------- */
    fill(v, 0, 0, 639, 15, 0);
    top_clear();
    if (s->zoom_stage) {
        /* ■拡大■ writes over whatever the command had there. */
        if (s->zoom_stage != 2) {
            /* ■拡大■ drops it once a corner is down: the original clears the
             * row and writes nothing but the prompt.  倍率指定 keeps it. */
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
        }
        if (s->zoom_stage == 3) {
            jw_ui_text(v, 12, 1, 7, 0, "\x95" "\x5c" "\x8e" "\xa6" "\x92" "\x86" "\x90" "S " "\x83" "}" "\x83" "E" "\x83" "X" "\x8e" "w" "\x8e" "\xa6" "   " "\x94" "C" "\x88" "\xd3" "\x94" "{" "\x97" "\xa6" "\xcf" "\xb3" "\xbd" "(L) " "\x94" "{" "\x97" "\xa6" "=1.0" "\xcf" "\xb3" "\xbd" "(R)  " "\x8d" "\xc4" "\x95" "\x5c" "\x8e" "\xa6" "[XFER]");
        } else {
            jw_ui_text(v, 30, 1, 7, 0, s->zoom_stage == 1 ? "\x81" "\xa1" "\x8a" "g" "\x91" "\xe5" "\x81" "\xa1" "\x8e" "n" "\x93" "_ " "\x83" "}" "\x83" "E" "\x83" "X" "\x8e" "w" "\x8e" "\xa6" " " : "\x81" "\xa1" "\x8a" "g" "\x91" "\xe5" "\x81" "\xa1" "    " "\x8f" "I" "\x93" "_ " "\x83" "}" "\x83" "E" "\x83" "X" "\x8e" "w" "\x8e" "\xa6" " ");
        }
    } else if (s->command == 30 && s->saved_done) {
        /* Straight after ① 実 行: the original goes back to 入出力's own
         * line with the mark at column 6, and leaves ` 登 録  完 了 ` on
         * row 2 in yellow on blue.  Measured at the end of the road
         * tools/saveroad.sh walks. */
        jw_ui_text(v, 1, 1, 7, 0, "     ");
        jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
        jw_ui_text(v, 8, 1, 7, 0, JW_IO_BAR);
        jw_ui_text(v, 34, 2, 6, 1, JW_DONE);
    } else if (s->command == 30 && s->io_stage) {
        /* 入出力's own menus.  Read off the original: ①ﾌｧｲﾙ and ②ﾌﾟﾛｯﾀ
         * each replace the top line with one of their own, both behind an
         * `[ESC]`, and ﾌｧｲﾙ adds the drive beside it and `[BS]前項` at the
         * far end. */
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
        if (s->io_stage == JW_IO_PNAME) {
            int i;

            /* ③ﾌｧｲﾙ出力 asks where to put it.  This line does **not** go
             * through the string routine in the original, so it was read
             * off the screen with tools/readrow.py; the field is at column
             * 25, which is where the green block sits before anything is
             * typed. */
            jw_ui_text(v, 8, 1, 7, 0,
                       "\x8f\x6f\x97\xcd\x83\x74\x83\x40\x83\x43"
                       "\x83\x8b\x96\xbc ?");
            for (i = 0; i < s->io_name_n && i < 12; i++) {
                char one[2];

                one[0] = s->io_name[i];
                one[1] = 0;
                jw_ui_text(v, 25 + i, 1, 7, 0, one);
            }
            i = s->io_name_n < 12 ? s->io_name_n : 12;
            fill(v, 24 * 8 + i * 8, 7, 24 * 8 + 7 + i * 8, 15, 4);
        } else if (s->io_stage == JW_IO_PSET) {
            jw_ui_text(v, 8, 1, 7, 0, JW_IO_PSET_BAR);
        } else if (s->io_stage == JW_IO_PGO) {
            jw_ui_text(v, 8, 1, 7, 0, JW_IO_PGO_BAR);
        } else if (s->io_stage == JW_IO_LOAD || s->io_stage == JW_IO_SAVE
                   || s->io_stage == JW_IO_MEMO || s->io_stage == JW_IO_OVER
                   || s->io_stage == JW_IO_WRITE) {
            /* ①保存 keeps its list on the screen the whole way: ①選択確定,
             * the two memo lines, the overwrite question and 書き込みます
             * all change the top line and leave the rest where it is.
             * Measured -- ①選択確定 moves 8,815 pixels and 8,623 of them
             * are the top line. */
            const int saving = s->io_stage != JW_IO_LOAD;
            char one[96];
            int k, i;

            /* ②読込: the drawings on the disk, listed over the drawing
             * area.  Every column here was read off the original
             * (tools/seqcheck.sh "30 296 left" "110 8 left" "100 8 right",
             * with the string routine logged): the name at column 17 in
             * DOS's 8.3 shape, the drawing's own 図面名 at 33, and the row
             * that is picked in yellow on blue.  The panel on the left
             * stays; only the drawing area is given over to the list. */
            const int asking = s->io_stage == JW_IO_OVER
                               || s->io_stage == JW_IO_WRITE;

            fill(v, 122, 16, 639, 463, 0);
            /* The strip along the bottom goes as well -- all of it, the
             * panel's end included -- and two solid yellow bars fence the
             * list off.  Measured off the original's own screen: y 99..109
             * and y 453..462, both from x 122 to x 638.
             *
             * **The strip comes back for the two questions.**  同名ﾌｧｲﾙが
             * 存在します and 書き込みます leave the list where it is but
             * draw the strip again (5,865 pixels of row 30), and blank the
             * 保存 … bytes free line while they are up. */
            if (!asking) {
                fill(v, 0, 464, 639, 479, 0);
            }
            fill(v, 122, 99, 638, 109, 6);
            fill(v, 122, 453, 638, 462, 6);
            /* The screen's own right-hand border, which the clear above
             * wiped: the chrome draws (639,16)-(639,479) and the file
             * screen leaves it standing from the rule at the top to the
             * one above the strip. */
            fill(v, 639, 16, 639, 462, 7);
            /* a rule under the header, two rows thick */
            fill(v, 120, 56, 639, 57, 7);
            /* and a white rule above and below each of them */
            fill(v, 120, 98, 639, 98, 7);
            fill(v, 120, 110, 639, 110, 7);
            fill(v, 121, 452, 639, 452, 7);
            fill(v, 0, 463, 639, 463, 7);
            if (s->io_stage == JW_IO_MEMO) {
                jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                jw_ui_text(v, 8, 1, 7, 0, JW_MEMO_BAR);
            } else if (s->io_stage == JW_IO_OVER) {
                jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
                jw_ui_text(v, 8, 1, 7, 0, JW_OVER_BAR);
            } else if (s->io_stage == JW_IO_WRITE) {
                jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
                jw_ui_text(v, 8, 1, 7, 0, JW_WRITE_BAR);
            } else if (saving) {
                jw_ui_text(v, 1, 1, 6, 0xffffu, JW_SAVE_BAR);
            } else {
                jw_ui_text(v, 1, 1, 7, 0, JW_FILE_BAR);
            }
            if (!asking) {
                /* The two questions clear this line as well as the one
                 * below it -- measured: at 同名ﾌｧｲﾙが存在します the cyan
                 * path and count are gone. */
                jw_ui_text(v, 17, 2, 5, 0, JW_FILE_PATH);
                sprintf(one, "(%dfiles)", s->file_n);
                jw_ui_text(v, 70, 2, 5, 0, one);
            }
            if (asking) {
                /* 保存ﾌｧｲﾙ=A:\NAME.JWC, on white.  Measured off the
                 * original the moment the question goes up. */
                char stem[9];

                memcpy(stem, s->file_n ? s->file_name[s->file_sel] : "        ", 8);
                stem[8] = 0;
                for (k = 7; k >= 0 && stem[k] == ' '; k--) stem[k] = 0;
                sprintf(one, "%s%s.JWC", JW_SAVE_FILE, stem);
                jw_ui_text(v, 17, 3, 7, 0xffffu, one);
            } else {
                sprintf(one, "%s%s bytes free   ", JW_FILE_SAVE, s->file_free);
                jw_ui_text(v, 17, 3, 7, 0, one);
                jw_ui_text(v, 51, 3, 7, 0, JW_FILE_EDIT);
                jw_ui_text(v, 55, 3, 7, 0, JW_FILE_NAMED);
                jw_ui_text(v, 65, 3, 7, 0, "=");
            }
            if (s->file_n) {
                const int sel = s->file_sel;
                char stem[9];

                /* The box above the list: the file that is picked, with its
                 * date, its size and its title spelled out. */
                memcpy(stem, s->file_name[sel], 8);
                stem[8] = 0;
                for (k = 7; k >= 0 && stem[k] == ' '; k--) stem[k] = 0;
                if (!asking) {
                    jw_ui_text(v, 66, 3, 7, 0, stem);
                }
                jw_ui_text(v, 17, 5, 7, 0, s->file_name[sel]);
                jw_ui_text(v, 32, 5, 7, 0, s->file_date[sel]);
                sprintf(one, "%8ld bytes   ", s->file_size[sel]);
                jw_ui_text(v, 32, 6, 7, 0, one);
                /* The box shows the two fields on two lines of their own,
                 * which is also what ◆ｍｅｍｏ入力 edits. */
                sprintf(one, "%-32.32s", s->file_t1[sel]);
                jw_ui_text(v, 47, 5, 7, 0, one);
                sprintf(one, "%-32.32s", s->file_t2[sel]);
                jw_ui_text(v, 47, 6, 7, 0, one);
            }
            if (s->io_stage == JW_IO_MEMO) {
                /* ◆ｍｅｍｏ入力 writes over the title field, two lines of
                 * it, and puts a green block where the next character
                 * goes.  The block is the one ③ﾌｧｲﾙ出力's name field has:
                 * column 47, and the cell's lower nine rows (y+7..y+15).
                 * Measured -- ①選択確定 changes exactly 72 pixels there. */
                for (k = 0; k < 2; k++) {
                    const int row = 5 + k;

                    if (s->memo_n[k]) {
                        jw_ui_text(v, 47, row, 7, 0, s->memo[k]);
                    }
                }
                k = s->memo_n[s->memo_row];
                /* **Exclusive-or, not a plain block.**  The original leaves
                 * the character under the cursor showing: white text under
                 * green comes out magenta (7 ^ 4 = 3), which is what its
                 * screen has there. */
                for (i = 0; i < 9; i++) {
                    jw_line(v, 46 * 8 + k * 8, (4 + s->memo_row) * 16 + 7 + i,
                            46 * 8 + 7 + k * 8, (4 + s->memo_row) * 16 + 7 + i,
                            4, ROP_XOR, JW_STYLE_SOLID);
                }
            }
            /* **The two sliders**, one each side of the title column.
             *
             * Every number here was read off the original's own line calls
             * (tools/sliderlines.sh: DOSEMU_WATCH said the pixels come from
             * 12B5:094B, which is the line routine, so the slider is
             * ordinary lines and its geometry is in the arguments).
             *
             * Each is a box y110..452 with an inner box y129..433, a
             * triangle at each end, and four bands down the middle, each
             * filled and then outlined in white:
             *
             *   yellow  the files above the page      (the scroll offset)
             *   blue    the files the page is showing (up to 21)
             *   yellow  the files below it
             *   black   the rest of the track
             *
             * A band ends at floor(k * 302 / 62) from y130, where k counts
             * files.  Measured at four counts: 16 files gave 77 pixels, 17
             * gave 82, 36 gave 175, and a disk of 75 gave 292 -- which is
             * sixty files' worth, so the original's list stops at sixty. */
            {
                static const int SLIDER_X[2] = {231, 623};
                int w;

                for (w = 0; w < 2; w++) {
                    const int x0 = SLIDER_X[w];
                    const int mid = x0 + 8;
                    const int n = s->file_n < 60 ? s->file_n : 60;
                    const int top = s->file_top;
                    const int end = top + JW_FILE_ROWS < n
                                        ? top + JW_FILE_ROWS : n;
                    const int a = 130 + top * 302 / 62;
                    const int b = 130 + end * 302 / 62;
                    const int c = 130 + n * 302 / 62;
                    int t;

                    /* **The right-hand one is not the same box.**  Its
                     * right edge would be at 639, and the original's own
                     * calls stop short: the outer box is the single line
                     * at x 623, and the inner one has a top, a bottom and
                     * a left side but no right.  Drawing all four put a
                     * white column down x 639 that the original has not
                     * got. */
                    if (w == 0) {
                        frame(v, x0, 110, x0 + 16, 452, 7);
                        frame(v, x0, 129, x0 + 16, 433, 7);
                    } else {
                        jw_line(v, x0, 110, x0, 452, 7, ROP_REPLACE,
                                JW_STYLE_SOLID);
                        jw_line(v, x0, 129, x0 + 15, 129, 7, ROP_REPLACE,
                                JW_STYLE_SOLID);
                        jw_line(v, x0, 433, x0 + 15, 433, 7, ROP_REPLACE,
                                JW_STYLE_SOLID);
                        jw_line(v, x0, 433, x0, 129, 7, ROP_REPLACE,
                                JW_STYLE_SOLID);
                    }
                    for (t = x0 + 2; t <= x0 + 14; t++) {
                        jw_line(v, t, 126, mid, 113, 7, ROP_REPLACE, 0xffffu);
                        jw_line(v, t, 436, mid, 449, 7, ROP_REPLACE, 0xffffu);
                    }
                    band(v, x0 + 1, 130, x0 + 15, a, 6);
                    band(v, x0 + 1, a, x0 + 15, b, 1);
                    band(v, x0 + 1, b, x0 + 15, c, 6);
                    band(v, x0 + 1, c, x0 + 15, 432, 0);
                    /* the file that is picked, one file's worth, inset by
                     * one more column and in its own colour */
                    t = 130 + s->file_sel * 302 / 62;
                    /* Filled and outlined in **its own** colour, not white:
                     * the original's four outline calls for this one are
                     * col=6 like the fill, so it is 13 columns wide and 5
                     * rows tall with nothing round it. */
                    fill(v, x0 + 2, t, x0 + 14,
                         130 + (s->file_sel + 1) * 302 / 62, 6);
                }
            }
            for (k = 0; k < JW_FILE_ROWS; k++) {
                const int i = s->file_top + k;
                const int on = i == s->file_sel;

                if (i >= s->file_n) {
                    jw_ui_text(v, 17, 8 + k, 7, 0, "            ");
                    jw_ui_text(v, 33, 8 + k, 7, 0,
                               "                                             ");
                    continue;
                }
                /* The row that is picked: 保存 draws it yellow on blue,
                 * 読込 cyan on blue.  Both measured. */
                const int fg = on ? (saving ? 6 : 5) : 7;
                const unsigned bg = on ? 1u : 0u;

                jw_ui_text(v, 17, 8 + k, fg, bg, s->file_name[i]);
                /* `one two`, a single space between -- **not** the run of
                 * NULs the file has there, which would put the second
                 * field eleven columns further along. */
                char joined[72];

                sprintf(joined, "%s %s", s->file_t1[i], s->file_t2[i]);
                sprintf(one, "%-45.45s", joined);
                jw_ui_text(v, 33, 8 + k, fg, bg, one);
            }
        } else if (s->io_stage == JW_IO_FILE) {
            jw_ui_text(v, 8, 1, 7, 0, JW_IO_FILE_BAR);
            jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91\x4f\x8d\x80");
            jw_ui_text(v, 46, 2, 7, 0xffffu, "(A:/B:)");
        } else {
            jw_ui_text(v, 8, 1, 7, 0, JW_IO_PLOT_BAR);
        }
    } else if (s->command >= 1 && s->command <= 30) {
        /* what the original writes there once an item is picked, piece by
         * piece and in its own order -- see src/prompt.h */
        const JwPrompt *p = JW_PROMPT[s->command - 1];
        const JwPrompt *q;

        /* Picking an item also clears the two rows under the top line, right
         * across the drawing.  It shows only on a drawing that has something
         * up there: SAMPLE1 has 1,515 lit pixels in rows 32 to 47 and every
         * one of them is gone the moment an item is picked, while SAMPLE2 --
         * which tools/menucheck.sh uses -- has none, which is why this went
         * unnoticed.  Rows 17 to 47, columns 122 to 638: text rows 2 and 3,
         * the same band the prompts write in. */
        if (!s->band_kept) {
            fill(v, 122, 17, 638, 47, 0);
        }

        /* A command that writes in the band under the top line clears the two
         * counts out of the way first -- the original fills (1,17)-(120,47)
         * with colour 4 again, line by line, just before it writes there
         * (文字 does it at 43,996,047 instructions in).  Only when it writes
         * inside that box: ハッチ puts 残数 at column 70 and leaves the counts
         * alone. */
        for (q = p; q->col; q++) {
            if (q->row != 1 && q->col <= 15) {
                fill(v, 1, 17, 120, 47, 4);
                break;
            }
        }
        /* ③指定範囲 replaces the line 消去 came up with: the original writes
         * `指定範囲  始点マウス指示  (L)線･円  (R)線･円･文字 …` over the top
         * of it.  src/span.h holds that whole line as stage 0. */
        if (s->span && s->command == 25) {
            const JwStage *r;

            for (r = JW_SPAN; r->command; r++) {
                stage_text(v, r, s, 0);
            }
            p = q;              /* q is the terminator: skip the prompt */
        }
        for (; p->col; p++) {
            char out[160];
            const char *text = p->text;

            /* 文字's three numbers belong to the drawing, not to the capture:
             * the character type it writes with, and that type's pen, width
             * and height.  src/prompt.h holds what SAMPLE2 said (`[F4]`,
             * `ﾍﾟﾝ2`, `横 4.0 縦 4.0`), so the digits are put back from the
             * file -- SAMPLE0 says `[F3]` and `3.0`, SAMPLE3 `[F8]`, `ﾍﾟﾝ4`
             * and `8.0`, TEST7 `[F6]`, `ﾍﾟﾝ3` and `6.0`, all measured. */
            if (s->command == 13 && s->char_type) {
                double n[2];
                int k = 0;

                if (p->row == 1 && p->col == 8) {
                    n[k++] = s->char_type;
                } else if (p->row == 2 && p->col == 1) {
                    n[k++] = s->char_pen;
                } else if (p->row == 3 && p->col == 1) {
                    n[k++] = s->char_w / 10.0;
                    n[k++] = s->char_h / 10.0;
                }
                if (k) {
                    put_numbers(out, sizeof out, p->text, n, k, p->row == 3);
                    text = out;
                }
            }
            jw_ui_text(v, p->col, p->row, (unsigned)p->fg, (unsigned)p->bg,
                       text);
        }
        /* Then what the command has written since, stage by stage, because a
         * later stage only writes over part of what an earlier one left -- and
         * the original puts the two counts back between them, which is why they
         * are not on the screen when a command has finished. */
        for (i = 1; i <= s->stage; i++) {
            const JwStage *q;

            /* The original clears the top line and paints the counts box
             * again as it moves on -- `(0,0)-(639,15)` in black and
             * `(1,17)-(120,47)` in colour 4, both seen in the fills □ makes
             * when the box is finished.  Without it the tail of the line the
             * stage before left is still there.
             *
             * The counts go back only where the stage has nothing of its own
             * to put in that box.  Both are written transparently, so writing
             * one over the other leaves them both readable. */
            int own = 0;

            for (q = JW_STAGE; q->command; q++) {
                if (s->span && q->command == 25 && q->stage != 2) {
                    continue;   /* 指定範囲 has its own table -- but not for
                                 * stage 2, 復活出来ません, which is the same
                                 * line whichever of the three was picked */
                }
                if (q->command == s->command && q->stage == i
                    && (q->row == 2 || q->row == 3) && q->col <= 15
                    && !(q->moved && !s->moved)) {
                    own = 1;    /* inside the box, which is (1,17)-(120,47)
                                 * -- rows 2 and 3.  Columns 17 and 22 of the
                                 * same row are beside it, not in it, and so
                                 * is row 4: 文編集 writes ` Get type[tab]`
                                 * there when it is done and the counts are
                                 * back in the box under it. */
                }
            }
            for (q = JW_TYPED; q->command; q++) {
                if (q->command == s->command && q->stage == i
                    && (q->row == 2 || q->row == 3) && q->col <= 15) {
                    own = 1;
                }
            }
            for (q = JW_COPY; q->command; q++) {
                if ((s->mirror || s->rotate || s->scaling || s->mscale)
                    && q->stage >= 5 && q->stage <= 11) {
                    continue;   /* ⑤反転, ⑥回転 and ③数値倍率 go their own
                                 * way */
                }
                if (q->command == s->command && q->stage == i
                    && (q->row == 2 || q->row == 3) && q->col <= 15) {
                    own = 1;
                }
            }
            for (q = JW_MOVE; q->command; q++) {
                if (q->command == s->command && q->stage == i
                    && (q->row == 2 || q->row == 3) && q->col <= 15) {
                    own = 1;
                }
            }
            /* [ESC] puts the two counts back: □ and ○ write their sides and
             * radius into that box while they run, and after [ESC] the box
             * says `30| 13` again (measured -- 748 pixels of it). */
            if (s->escaped && i == s->stage) {
                own = 0;
            }
            fill(v, 0, 0, 639, 15, 0);
            /* The band right of the counts box goes too.  複線 leaves
             * `[F1]`..`[F5]` and the interval there while it asks, and the
             * original wipes the lot on the way to the next stage: the line
             * calls after the press are `(122,17)-(638,17)` down to
             * `(122,31)-(638,31)`, all in black.  The counts box itself
             * (columns 1 to 15) is painted separately just below. */
            fill(v, 122, 17, 638, 31, 0);
            top_clear();
            if ((s->command == 13 || s->command == 28)
                && i == 1 && s->typing_text) {
                /* 文字's field takes the screen over: the whole band under the
                 * top line goes black -- the counts and their label with it --
                 * and so does the strip along the very bottom.  Measured on
                 * SAMPLE0: after the press rows 16 to 47 are empty across all
                 * 640 columns except the string being typed at column 1, and
                 * rows 464 to 479 are empty too, where every other command
                 * leaves the zoom bar alone. */
                fill(v, 0, 17, 638, 47, 0);
                fill(v, 639, 17, 639, 47, 0);   /* the frame's right edge too */
                fill(v, 0, 464, 639, 479, 0);
                /* The white line under the top one survives only under the
                 * cells the string has filled: with `ABC` typed it is there
                 * from x 0 to 23 and gone from 24 on, with `A` from 0 to 7.
                 * The string is written in that row's cells, so what is left
                 * is what the string has not reached. */
                fill(v, s->typed_n * 8, 16, 638, 16, 0);
            } else if (own) {
                fill(v, 1, 17, 120, 47, 4);
            } else {
                counts(v, s);
            }
            /* [ESC] replaces the stage it came from: the line is blacked
             * and the band's numbers go back to the two counts, so none of
             * what that stage wrote is put up again. */
            for (q = JW_STAGE; !(s->escaped && i == s->stage) && q->command;
                 q++) {
                if (s->span && q->command == 25 && q->stage != 2) {
                    continue;
                }
                /* 線切断 is the right button of the same item as 線伸縮, and
                 * its line is kept at stage 11 so that both fit in the one
                 * table.  It is there only until the pointer moves off the
                 * cut, which is what JwUi.cutting says. */
                stage_text(v, q, s,
                           (s->cutting && i == 2 && s->command == 6) ? 11 : i);
            }
            /* The stages you can only reach by typing -- src/typed.h -- are
             * replayed the same way, out of their own table. */
            for (q = JW_TYPED; !(s->escaped && i == s->stage) && q->command;
                 q++) {
                if (s->span && q->command == 25 && q->stage != 2) {
                    continue;
                }
                stage_text(v, q, s, i);
            }
            /* ③指定範囲's own table.  Its first stage has two spellings, one
             * per button, and src/span.h keeps the left-button one as stage
             * 11 so that both can live in the one table. */
            if (s->span) {
                const JwStage *r;
                const int st = (i == 1 && !s->with_text) ? 11 : i;

                for (r = JW_SPAN; r->command; r++) {
                    stage_text(v, r, s, st);
                }
            }
            /* And [ESC].  It blacks the top line and writes three pieces:
             * a `・` at column 6, the command's own "ask again" text at
             * column 8 and `[BS]前項` at column 73 (src/esc.h).  The fill is
             * not in the string log -- what settled it is the screen, where
             * 「|①  ＋  |②寸 法 |…」 from the line before is gone. */
            if (s->escaped && i == s->stage) {
                const JwStage *r;

                fill(v, 0, 0, 639, 15, 0);
                top_clear();
                for (r = JW_ESC; r->command; r++) {
                    stage_text(v, r, s, 1);
                }
            }
            /* 複写 and 移動, kept apart the same way (src/copy.h,
             * src/move.h). */
            if (s->command == 1 || s->command == 16) {
                const JwStage *r;
                const int st = (i == 1 && !s->with_text) ? 11 : i;

                for (r = s->command == 1 ? JW_COPY : JW_MOVE; r->command; r++) {
                    stage_text(v, r, s, st);
                }
            }
            /* ○'s line has a little ◎ in it that is **not text**: after
             * `②基点変` the original draws it with its own circle routine.
             * Found by watching the pixel (DOSEMU_WATCH=A012A-A012A), which
             * says 10a9:0ccd wrote it -- inside FUN_20a9_0c8f, the four-way
             * step of the circle plotter at 20a9:0e18, which is jw_arc here.
             *
             * Three rings and the middle pixel, at (470,8): radius 5, 2 and 1
             * plus the point.  That is exactly the eleven rows the original
             * leaves, and it is how a program with no fill primitive fills a
             * disc.
             *
             * It says where the base point is: pressing `②基点変` takes the
             * middle away (the ring alone) and pressing it again puts it back.
             * The port has no 基点変, so it draws the one the command starts
             * with -- the middle, which is the centre of the circle. */
            /* 文字's field: the string as it has been typed so far, at
             * column 1 of row 2.  The original writes the whole of it again
             * after every key (`A`, `AB`, `ABC`), so this does the same. */
            if ((s->command == 13 || s->command == 28)
                && i == 1 && s->typing_text) {
                jw_ui_text(v, 1, 2, 7, 0, s->typed);
                /* and the block where the next character will go, colour 4,
                 * nine rows of the cell -- the same one 複線's field has.
                 * 文編集 starts with the cursor in front of the string it
                 * was given, so it goes where the cursor is, and it goes on
                 * **exclusive-or**: over the empty field 文字 has it reads 4
                 * either way, but over the left half of 「Ｈ」 the original
                 * reads ff00ff, which is 7 exclusive-or 4. */
                {
                    int y;

                    for (y = 23; y <= 31; y++) {
                        jw_line(v, s->typed_at * 8, y, s->typed_at * 8 + 7, y,
                                4, 0x18, JW_STYLE_SOLID);
                    }
                }
            }
            /* 線変更 says `線` or `円` there, whichever it took. */
            if (s->command == 24 && i == 1 && s->hit_kind) {
                jw_ui_text(v, 20, 2, 7, 0xffff,
                           s->hit_kind == 2 ? "\x89" "~" : "\x90" "\xfc");
            }
            if (s->command == 11 && i == 1 && !s->escaped) {
                jw_arc(v, 470, 8, 5, 0, 0, 7, ROP_REPLACE, JW_STYLE_SOLID);
                jw_arc(v, 470, 8, 2, 0, 0, 7, ROP_REPLACE, JW_STYLE_SOLID);
                jw_arc(v, 470, 8, 1, 0, 0, 7, ROP_REPLACE, JW_STYLE_SOLID);
                jw_point(v, 470, 8, 7, ROP_REPLACE);
            }
            /* 複写's distance field, the same shape but from column 18:
             * `[ESC].距離 X,Y =` fills columns 1 to 16 and the characters go in
             * one to a cell after it. */
            if (((s->command == 1 || s->command == 16) && i == 7)
                || (s->command == 21 && i == 2)) {
                int n;

                for (n = 0; n < s->typed_n && n < 8; n++) {
                    char one[4];

                    one[0] = s->typed[n];
                    one[1] = one[2] = ' ';
                    one[3] = 0;
                    jw_ui_text(v, 18 + n, 1, 7, 0, one);
                }
                /* The cursor, the same green block 複線 has: the lower nine
                 * rows of the cell the next character goes in.  Measured with
                 * `20,30` typed -- x176..183, y7..15, which is column 23. */
                n = s->typed_n < 8 ? s->typed_n : 8;
                fill(v, 136 + n * 8, 7, 143 + n * 8, 15, 4);
            }
            if ((s->command == 1 || s->command == 16) && i == 18) {
                /* ③数値倍率's pair.  `[ESC].倍率 X,Y =` fills columns 1 to
                 * 16 and the field is at 18, the same place ②数値位置 puts
                 * its distance. */
                int n;

                for (n = 0; n < s->typed_n && n < 8; n++) {
                    char one[4];

                    one[0] = s->typed[n];
                    one[1] = one[2] = ' ';
                    one[3] = 0;
                    jw_ui_text(v, 18 + n, 1, 7, 0, one);
                }
                n = s->typed_n < 8 ? s->typed_n : 8;
                fill(v, 136 + n * 8, 7, 143 + n * 8, 15, 4);
            }
            /* ⑥回転's angle field starts at column 15 instead: `[ESC]  角度 =`
             * fills columns 1 to 13 and the digits go in one to a cell after
             * the space. */
            if ((s->command == 1 || s->command == 16) && i == 14) {
                int n;

                for (n = 0; n < s->typed_n && n < 8; n++) {
                    char one[4];

                    one[0] = s->typed[n];
                    one[1] = one[2] = ' ';
                    one[3] = 0;
                    jw_ui_text(v, 15 + n, 1, 7, 0, one);
                }
                n = s->typed_n < 8 ? s->typed_n : 8;
                fill(v, 112 + n * 8, 7, 119 + n * 8, 15, 4);
            }
            /* And the field itself: what has been typed, one character to a
             * cell from column 22, each of them clearing the two cells after
             * it the way the original writes them. */
            if (s->command == 5 && i == 1) {
                int n;

                for (n = 0; n < s->typed_n && n < 8; n++) {
                    char one[4];

                    one[0] = s->typed[n];
                    one[1] = one[2] = ' ';
                    one[3] = 0;
                    jw_ui_text(v, 22 + n, 1, 7, 0, one);
                }
                /* And the cursor: a green block in the lower nine rows of the
                 * cell the next character goes in.  Measured on the original
                 * with nothing typed (x168..175, y7..15, colour 4) and with
                 * two characters in (x184..191, the same rows), so it is the
                 * cell at column 22 + however many have been typed. */
                n = s->typed_n < 8 ? s->typed_n : 8;
                fill(v, 168 + n * 8, 7, 175 + n * 8, 15, 4);
            }
        }
        /* □ shows where the box it is about to draw is anchored: a little
         * frame at the right-hand end of the top line, in the blank after
         * 「④基点変」.  Four solid white lines, read straight off the
         * original -- (580,3)-(590,3)-(590,13)-(580,13) and back -- drawn the
         * moment the first point is taken.  Pressing ④基点変 puts a blob in
         * the middle of it and pressing again takes it away, which is the
         * anchor moving; that part is not measured yet, so only the empty
         * frame is here.
         *
         * Only □, and only while it is waiting for the second point: the
         * frame is gone again once the box is drawn, and the original writes
         * its own words over that corner.  All thirty items were picked in
         * turn and pressed once (SAMPLE0 at (250,150)); item 4 is the only one
         * that draws it. */
        if (s->command == 4 && s->stage == 1 && !s->escaped) {
            box(v, 580, 3, 590, 13, 7);
        }
        /* What a *modified* read would take, which is there while a modifier
         * key is held and the pointer is over the drawing -- see src/snap.h.
         * Last, because a stage writes spaces at column 17 on a black
         * background and those reach across column 22.  With no modifier held
         * the original writes those spaces and nothing else. */
        const int row = snap_row(s->mods);

        /* 複線's 間隔取得 asks for a point, and while it is asking, the word
         * for what the right button would take is on the screen even though
         * the command has none of its own (src/snap.h has nothing for 5).
         * Column 22 only -- the original writes 円周1/4点 there, the same
         * as □ and ○ do, and leaves column 17 alone.
         *
         * [CTRL] only: this was measured when every run behaved as though Ctrl
         * were held, so it is a [CTRL] measurement.  What [SHIFT] and [GRPH]
         * write here has not been measured. */
        if (row == JW_SNAP_CTRL && s->snap && s->command == 5
            && s->stage == 5) {
            jw_ui_text(v, 22, 2, 7, 0, JW_SNAP[JW_SNAP_CTRL][3][1]);
        }
        /* 複写 and 移動 say what the right button would take from the moment
         * the range is fixed and they are asking how to do it -- stage 4 on --
         * and not while the range is being taken.  Measured: with the pointer
         * over the drawing, the two presses that make the box leave the band
         * empty, ①同形別処理 (which goes back to stage 4) puts 円周1/4点 back,
         * and it is gone again once it is asking for the distance (stage 7)
         * or the copy is made (stage 8).  A [CTRL] measurement, as above. */
        if (row == JW_SNAP_CTRL && s->snap
            && (s->command == 1 || s->command == 16)
            && s->stage >= 4 && s->stage <= 6) {
            jw_ui_text(v, 22, 2, 7, 0, JW_SNAP[JW_SNAP_CTRL][3][1]);
        }
        /* None of them while 文字 is taking a string: the band is black. */
        if (row >= 0 && s->snap && !s->typing_text && !s->escaped
            && JW_SNAP[row][s->command - 1][0]) {
            jw_ui_text(v, 17, 2, 7, 0, JW_SNAP[row][s->command - 1][0]);
        }
        if (row >= 0 && s->snap && !s->typing_text && !s->escaped
            && JW_SNAP[row][s->command - 1][1]) {
            jw_ui_text(v, 22, 2, 7, 0, JW_SNAP[row][s->command - 1][1]);
        }
        /* 「読取可能データ無」 -- what a command that looks for an entity
         * says when the press found none.  Read off the original with 線消 on
         * SAMPLE6 and a press at (244,140), which is 8.5 from the nearest arc
         * and further from every line:
         *
         *     [bp] 0DEF:23C5  col=0x20 row=0x0002 fg=0x0007 bg=0x0000
         *          07 93 C7 8E E6 89 C2 94 5C 83 66 81 5B 83 5E 96 B3
         *
         * The first byte is a BEL, which takes a cell and paints nothing --
         * the emulator's log prints every byte under 0x20 as a dot, so it
         * reads as a full stop there and is not one.
         *
         * It stays up: a second press that misses leaves it, and it goes only
         * when a press finds something (the band is repainted) or another item
         * is picked.  Both were measured -- 線消 at (244,140) then (446,189)
         * leaves the band empty, and picking 複写 after the miss clears it. */
        if (s->missed) {
            jw_ui_text(v, 32, 2, 7, 0,
                       "\x07" "\x93" "\xc7" "\x8e" "\xe6" "\x89"
                       "\xc2" "\x94" "\x5c" "\x83" "\x66" "\x81"
                       "\x5b" "\x83" "\x5e" "\x96" "\xb3");
        }
        /* A modified read that is waiting for its second press writes a line
         * of its own.  Last of all, because it goes over everything: the top
         * line is blacked and takes [ESC] and the mode's own text, and the
         * band beside the counts has the words the key put there **wiped**
         * (fourteen spaces at column 17) and サーチ left in their place.  All
         * of it is src/snapmsg.h, straight out of the original; the fill is
         * not in the string log and the screen is what says it happens, the
         * same way [ESC]'s fill was settled. */
        if (s->snapping) {
            const JwSnapMsg *m;

            fill(v, 0, 0, 639, 15, 0);
            top_clear();
            /* And the band beside the counts, which goes black from
             * the drawing area's left edge to its right.  Measured on
             * the screen rather than in the string log: with the mode
             * up, every pixel of y17..31 from x122 to x638 is black,
             * the words the key had put there included. */
            fill(v, 122, 17, 638, 31, 0);
            for (m = JW_SNAPMSG; m->text; m++) {
                if (m->mode == s->snapping) {
                    jw_ui_text(v, m->col, m->row, 7, 0, m->text);
                }
            }
        }
    } else {
        jw_ui_text(v, 8, 1, 7, 0,
                   "|| JW_CADV version 2.22H  Copyright (c) jw_software club "
                   "1991-1999 ||");
    }
    jw_line(v, 0, 16, 639, 16, 7, ROP_REPLACE, JW_STYLE_SOLID);
    /* 文字's field takes that line away from where the string it is taking
     * has got to -- see the stage loop, where the rest of the band goes. */
    if ((s->command == 13 || s->command == 28) && s->typing_text) {
        fill(v, s->typed_n * 8, 16, 638, 16, 0);
    }
    /* 紙's own line, and the field it takes the size in.
     *
     * Measured with `sh tools/pressstr.sh 18 328 left` and by reading the
     * screen: `[ESC]  ` at column 1, the question at 18, `A-` at 46 and the
     * usual green cursor block at 48 (x 376..383, rows 7..15).  Typing a
     * digit and [Enter] applies it -- SAMPLE0 goes from A-4 to A-2.
     */
    if (s->ask) {
        const int at = s->ask == JW_ASK_PAPER ? 48
                     : s->ask == JW_ASK_SCALE ? 50 : 34;
        int i;

        fill(v, 0, 0, 639, 15, 0);
        top_clear();
        if (s->ask != JW_ASK_LNAME) {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
        }
        if (s->ask == JW_ASK_LNAME) {
            /* 図面名 -- the box left of ｸﾞﾙｰﾌﾟ -- asks for the **layer's**
             * name: `レイヤ名を入力` at column 18 and the field at 34, with
             * no [ESC] in front of it.  Read off the original with
             * tools/pressstr.sh 30 344 left. */
            jw_ui_text(v, 18, 1, 7, 0,
                   "\x83""\x8c""\x83""\x43""\x83""\x84""\x96""\xbc"
                   "\x82""\xf0""\x93""\xfc""\x97""\xcd");
        } else if (s->ask == JW_ASK_PAPER) {
            jw_ui_text(v, 18, 1, 7, 0,
                   "\x97""\x70""\x8e""\x86""\x20""\x83""\x54""\x83""\x43"
                   "\x83""\x59""\x20""\x28""\x41""\x30""\x81""\x60""\x41"
                   "\x34""\x81""\x6a""\x20""\x95""\xcf""\x8d""\x58");
            jw_ui_text(v, 46, 1, 7, 0, "A-");
        } else {
            jw_ui_text(v, 18, 1, 7, 0,
                   "\x83""\x8c""\x83""\x43""\x83""\x84""\x20""\x83""\x4f"
                   "\x83""\x8b""\x81""\x5b""\x83""\x76""\x8f""\x6b""\x8e"
                   "\xda""\x20""\x95""\xcf""\x8d""\x58");
            jw_ui_text(v, 45, 1, 7, 0,
                   "\x94""\x7b""\x97""\xa6""\x3d");
        }
        for (i = 0; i < s->ask_n && i < 6; i++) {
            char one[2];

            one[0] = s->ask_typed[i];
            one[1] = 0;
            jw_ui_text(v, at + i, 1, 7, 0, one);
        }
        i = s->ask_n < 6 ? s->ask_n : 6;
        fill(v, (at - 1) * 8 + i * 8, 7, (at - 1) * 8 + 7 + i * 8, 15, 4);
    }
    /* レイヤ変更's own line.  Read off the original with
     * `sh tools/pressstr.sh 16 360 left`: column 7, colour 7, and the whole
     * of it in one write. */
    if (s->layer_mode) {
        fill(v, 0, 0, 639, 15, 0);
        top_clear();
        jw_ui_text(v, 7, 1, 7, 0,
                   "\x83\x8c\x83\x43\x83\x84\x95\xcf\x8d\x58\x81\x69"
                   "\xcf\xb3\xbd" "(L)\x95\x5c\x8e\xa6\x90\xd8\x91\xd6"
                   " (R)\x8f\x91\x8d\x9e\x91\x49\x91\xf0\x81\x6a "
                   "\x81\x6d\x8f\x49\x97\xb9\x81\x6e\x83\x7d\x83\x45"
                   "\x83\x58\x82\xf0\x8d\xec\x90\x7d\x94\xcd\x88\xcd"
                   "\x82\xc9\x88\xda\x93\xae");
    }
    if (s->grid_mode) {
        char one[64];

        /* 目盛 asks for the grid's spacing.  Read off the original with
         * tools/pressstr.sh 30 24 left: its own line, and the two numbers
         * in a white field at column 17 of the band. */
        fill(v, 0, 0, 639, 15, 0);
        top_clear();
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
        jw_ui_text(v, 8, 1, 7, 0, JW_GRID_BAR);
        /* The two rows under the top line go black first, the way picking
         * a menu item clears them: SAMPLE1's grid dots reach up there and
         * the original's are gone the moment 目盛 is pressed. */
        fill(v, 122, 17, 638, 47, 0);
        sprintf(one, "%10.3f ,%10.3f", s->grid_x, s->grid_y);
        jw_ui_text(v, 17, 2, 7, 0xffffu, one);
    }
    if (s->calc) {
        fill(v, 0, 0, 639, 15, 0);
        top_clear();
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
        jw_ui_text(v, 7, 1, 7, 0, JW_CALC_TOP);
        jw_ui_text(v, 41, 1, 7, 0, JW_CALC_FKEY);
        jw_ui_text(v, 18, 2, 7, 0xffffu, JW_CALC_F6);
        /* And the rule under the top line back on: the strip of function
         * keys paints black behind its letters and cuts it. */
        fill(v, 122, 16, 639, 16, 7);
    }
    if (s->pen_board) {
        fill(v, 0, 0, 639, 15, 0);
        top_clear();
        jw_ui_text(v, 20, 1, 7, 0,
                   " \x81\x6d\x8f\x49\x97\xb9\x81\x6e\x83\x7d\x83\x45"
                   "\x83\x58\x82\xf0\x8d\xec\x90\x7d\x94\xcd\x88\xcd"
                   "\x82\xc9\x88\xda\x93\xae");
    }
    if (s->group_mode) {
        fill(v, 0, 0, 639, 15, 0);
        top_clear();
        jw_ui_text(v, 20, 1, 7, 0,
                   "\x83\x8c\x83\x43\x83\x84 \x83\x4f\x83\x8b\x81\x5b"
                   "\x83\x76 \x95\xcf\x8d\x58   \x81\x6d\x8f\x49\x97\xb9"
                   "\x81\x6e\x83\x7d\x83\x45\x83\x58\x82\xf0\x8d\xec"
                   "\x90\x7d\x94\xcd\x88\xcd\x82\xc9\x88\xda\x93\xae");
    }
    if (s->guide) {
        jw_ui_text(v, 17, 3, 7, 0, s->guide);
    }
}

/* グループ データ表示.
 *
 * Read off the original: the right button on the group being written to,
 * while ｸﾞﾙｰﾌﾟ is asking, puts the whole drawing area over to sixteen little
 * views, one per group, four across and four down.  Each one carries a white
 * block with its digit in black at column 17, 33, 49 or 65 of rows 2, 9, 16
 * and 23, and under it the group's own geometry with the paper's edge round
 * it -- the red dashes of 用紙枠, which the main view never shows because at
 * scale 1 they fall outside the window.
 *
 * The panels are 128 apart across and 112 down.  The paper's corner (0,0)
 * lands on (128,126) in the first one and its far corner (518,447) on
 * (234,34), which is where the scale comes from.
 *
 * The strip along the bottom and the panel below the menu go with it. */
void jw_ui_data(VGA *v, const JwUi *s, const Jwc *d)
{
    int k;

    if (!d) {
        return;
    }
    if (s->sub_screen) {
        /* サブ画面表示: the box under the sixteen layer boxes becomes a
         * miniature of the whole drawing.  Read off the original after a
         * press on it -- a yellow rectangle (27,401)-(94,461) with the
         * paper's own edge inside it in red dashes, the drawing in white,
         * and a green dashed line along the bottom. */
        JwView w;

        memset(&w, 0, sizeof w);

        w.ox = 0.0f;
        w.oy = 0.0f;
        w.scale = (float)JW_SUB_SCALE;
        w.ax = (float)JW_SUB_AX;
        w.ay = (float)JW_SUB_AY;
        w.x0 = 1;
        w.y0 = 401;
        w.x1 = 120;
        w.y1 = 462;
        w.group1 = 0;
        /* **Set every field.**  layer1 came later than this block and was
         * left as whatever the stack held, which made visible_in hide the
         * whole drawing -- the box came out with its frame and nothing in
         * it, and only the pixels said so. */
        w.layer1 = 0;
        w.frame_box = 1;
        fill(v, 1, 401, 120, 462, 0);
        jw_view_draw_into(v, d, &w);
        v->clip_x0 = 0;
        v->clip_y0 = 0;
        v->clip_x1 = v->width - 1;
        v->clip_y1 = v->height - 1;
        /* The yellow border is four lines between the corners, not a
         * closed box: (27,401) and (95,401) are empty. */
        jw_line(v, 28, 401, 94, 401, 6, ROP_REPLACE, JW_STYLE_SOLID);
        jw_line(v, 28, 461, 94, 461, 6, ROP_REPLACE, JW_STYLE_SOLID);
        jw_line(v, 27, 402, 27, 460, 6, ROP_REPLACE, JW_STYLE_SOLID);
        jw_line(v, 95, 402, 95, 460, 6, ROP_REPLACE, JW_STYLE_SOLID);
        jw_line(v, 26, 461, 94, 461, 4, ROP_REPLACE, jw_view_line_style(9));
    }
    if (!s->data_screen) {
        return;
    }
    if (s->data_screen == JW_DATA_GROUP) {
        fill(v, 0, 305, 121, 305, 7);
    }
    fill(v, 122, 17, 638, 462, 0);
    /* The panel keeps ｸﾞﾙｰﾌﾟ's own rows -- the red words and the sixteen
     * group boxes are still there -- but the pen's row, 紙 and the scale,
     * and サブ画面表示 all go.  And so does everything the strip along the
     * bottom has right of the panel. */
    if (s->data_screen == JW_DATA_GROUP) {
        /* ｸﾞﾙｰﾌﾟ's screen empties the pen's row and 紙's; レイヤ's keeps
         * them both. */
        fill(v, 1, 306, 120, 335, 0);
    }
    fill(v, 1, 416, 120, 462, 0);
    fill(v, 122, 463, 638, 478, 0);
    for (k = 0; k < 16; k++) {
        JwView w;

        memset(&w, 0, sizeof w);
        const int cx = 128 * (k & 3), cy = 112 * (k >> 2);

        w.ox = 0.0f;
        w.oy = 0.0f;
        w.scale = (float)JW_DATA_SCALE;
        w.ax = (float)(128 + cx);
        w.ay = (float)(126 + cy);
        /* The window is the **whole drawing area**, not the panel: SAMPLE3
         * has lines that reach x=122 out of the first panel and the
         * original draws them. */
        w.x0 = 122;
        w.y0 = 17;
        w.x1 = 638;
        w.y1 = 462;
        w.frame_box = 1;
        w.group1 = 0;
        w.layer1 = 0;
        /* An empty panel gets no view at all -- not even the paper's edge.
         * SAMPLE0 has everything in group 0 and the original leaves the
         * other fifteen blank; TEST6, which uses four groups, draws a
         * frame in each of those. */
        if (s->data_screen == JW_DATA_LAYER) {
            w.layer1 = ((s->group << 4) | k) + 1;
            if (!s->layer_geom[k] && !s->layer_text[k]) {
                continue;
            }
        } else {
            w.group1 = k + 1;
            if (!s->group_geom[k] && !s->group_text[k]) {
                continue;
            }
        }
        jw_view_draw_into(v, d, &w);

    }
    /* The sixteen labels go on afterwards, with the clip put back: a view
     * leaves it on its own panel, and a label sits **above** its panel, so
     * drawn inside the loop they came out clipped away. */
    v->clip_x0 = 0;
    v->clip_y0 = 0;
    v->clip_x1 = v->width - 1;
    v->clip_y1 = v->height - 1;
    for (k = 0; k < 16; k++) {
        const int col = 17 + 16 * (k & 3), row = 2 + 7 * (k >> 2);
        char one[8];

        if (s->data_screen == JW_DATA_LAYER) {
            /* `0-0 `, plain white on black -- no block behind it, which is
             * what the group display has. */
            sprintf(one, "%X-%X ", s->group & 15, k);
            jw_ui_text(v, col, row, 7, 0, one);
            jw_ui_text(v, col + 4, row, 7, 0,
                       d->layer_name[(s->group << 4) | k]);
        } else {
            one[0] = (char)(k < 10 ? '0' + k : 'A' + k - 10);
            one[1] = 0;
            jw_ui_text(v, col, row, 7, 0xffffu, one);
            jw_ui_text(v, col + 1, row, 7, 0, d->group_name[k]);
        }
    }
    /* The rule under the top line goes back on **after** the names: they
     * paint black behind themselves and break it otherwise. */
    fill(v, 122, 16, 639, 16, 7);
    /* jw_view_draw_into leaves the clip on the last panel it drew, so
     * the top line has to put it back before writing there -- without
     * this nothing above y=368 appeared at all. */
    v->clip_x0 = 0;
    v->clip_y0 = 0;
    v->clip_x1 = v->width - 1;
    v->clip_y1 = v->height - 1;
    fill(v, 0, 0, 639, 15, 0);
    if (s->data_screen == JW_DATA_LAYER) {
        jw_ui_text(v, 17, 1, 7, 0, "\x83\x8c\x83\x43\x83\x84");
        jw_ui_text(v, 23, 1, 7, 0,
                   " \x83\x66\x81\x5b\x83\x5e\x95\x5c\x8e\xa6");
    } else {
    jw_ui_text(v, 17, 1, 7, 0, "\x83\x4f\x83\x8b\x81\x5b\x83\x76");
    jw_ui_text(v, 25, 1, 7, 0,
               " \x83\x66\x81\x5b\x83\x5e\x95\x5c\x8e\xa6");
    }
    jw_ui_text(v, s->data_screen == JW_DATA_LAYER ? 34 : 36, 1, 7, 0,
               " \x81\x6d\x8f\x49\x97\xb9\x81\x6e\x83\x7d\x83\x45"
               "\x83\x58\x82\xf0\x8d\xec\x90\x7d\x94\xcd\x88\xcd"
               "\x82\xc9\x88\xda\x93\xae");
}

/* ----------------------------------------------------------- the pointer */

/* 1885:3c2b -- one line into each plane the mask names, which for the pointer
 * is DS:c3c0 = 6, planes 1 and 2.  Exclusive-or per plane is the same as
 * exclusive-or with 6 in one pass, but this is the order the original does it
 * in, and the two colours it passes are 1 << plane. */
static void cursor_line(VGA *v, int x0, int y, int x1)
{
    int plane;

    for (plane = 0; plane < 3; plane++) {
        if (6 & (1 << plane)) {
            jw_line(v, x0, y, x1, y, 1u << plane, 0x18, JW_STYLE_SOLID);
        }
    }
}

void jw_ui_cursor(VGA *v, int x, int y)
{
    const int w = v->width - 1, h = v->height - 1;
    int x0, x1, i;

    if (463 + 10 < y) {
        y = 463 + 10;
    }
    if (x > w) {
        return;
    }
    x0 = x1 = x;
    for (i = 0; i <= 10; i++) {
        cursor_line(v, x0, y, x1);
        if (x1 < w) {
            x1++;
        }
        if (++y > h) {
            return;
        }
    }
    x0 += 4;
    x1 = x0 + 2;
    for (i = 0; i < 5; i++) {
        if (x0 < w) {
            if (x1 > w) {
                x1 = w;
            }
            cursor_line(v, x0, y, x1);
            y++;
            cursor_line(v, x0, y, x1);
            if (++y > h) {
                return;
            }
        }
        x0++;
        x1++;
    }
}

/* Which command a point picks.  The menu's fifteen rows are rows 5 to 19 of the
 * character grid -- y 64 to 303 -- and the two columns are split by the white
 * bar the original paints at x 65 to 70. */
/* Which button of the strip along the bottom a press is on, or 0.
 *
 * The edges are where jw_ui_draw puts them: 電卓 up to the box at 51, 範囲記憶
 * in the green one from 52 to 120, then 前倍率, the Zoom bar (the yellow
 * 224..438), 倍率指定, ｵﾌｾｯﾄ in the green 550..606 and HELP after it. */
/* The rectangle ■拡大■ drags from the corner it has to the pointer.  Colour
 * 4 and exclusive-or, like 消去's range: the original's screen after the first
 * corner has green sides right across the drawing. */
void jw_ui_zoom_band(VGA *v, int x0, int y0, int x1, int y1)
{
    v->clip_x0 = 122;
    v->clip_y0 = 17;
    v->clip_x1 = 638;
    v->clip_y1 = 462;
    jw_line(v, x0, y0, x1, y0, 4, 0x18, JW_STYLE_SOLID);
    jw_line(v, x1, y0, x1, y1, 4, 0x18, JW_STYLE_SOLID);
    jw_line(v, x1, y1, x0, y1, 4, 0x18, JW_STYLE_SOLID);
    jw_line(v, x0, y1, x0, y0, 4, 0x18, JW_STYLE_SOLID);
    v->clip_x0 = 0;
    v->clip_y0 = 0;
    v->clip_x1 = v->width - 1;
    v->clip_y1 = v->height - 1;
}

int jw_ui_bar_item(int x, int y)
{
    if (y < 463 || y > 479 || x < 0 || x > 639) {
        return 0;
    }
    if (x <= 51) {
        return JW_BAR_CALC;
    }
    if (x <= 120) {
        return JW_BAR_KEEP;
    }
    if (x < 224) {
        return JW_BAR_PREV;
    }
    if (x <= 438) {
        return JW_BAR_ZOOM;
    }
    if (x < 550) {
        return JW_BAR_SCALE;
    }
    if (x <= 606) {
        return JW_BAR_OFFSET;
    }
    return JW_BAR_HELP;
}

int jw_ui_menu_hit(int x, int y)
{
    int row;

    if (x < 8 || x > 120 || y < 64 || y > 303) {
        return 0;
    }
    row = (y - 64) / 16;                    /* 0 to 14 */
    return x < 66 ? row + 16 : row + 1;
}
