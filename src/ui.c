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
#include "henkei.h"
#include "esc.h"
#include "zukei.h"
#include "optplan.h"
#include "item.h"
#include "tategu.h"

#include <math.h>
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

int jw_ui_item_has(int command, int item, int right)
{
    const JwItem *q;

    for (q = JW_ITEM; q->command; q++) {
        if (q->command == command && q->item == item && q->right == right) {
            return 1;
        }
    }
    return 0;
}

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
/* **④削除 has two cells ②読込 has not**: `③ﾌｧｲﾙ名指定` and `④拡張子変更`.
 * Measured -- the original's last write to row 1 is the whole line at column
 * 1, and ②読込's and ③合成's stop after `②ﾄﾞﾗｲﾌﾞ(A:)変更 |`
 * (tools/origstr.sh "30 296 left" "110 8 left" "305 8 left"). */
#define JW_KILL_BAR \
    JW_FILE_BAR "\x87" "B" "\xcc\xa7\xb2\xd9\x96\xbc\x8e" "w" \
    "\x92\xe8" " |" "\x87" "C" "\x8a" "g" "\x92\xa3\x8e" "q" \
    "\x95\xcf\x8d" "X |"
#define JW_SAVE_BAR \
    JW_FILE_BAR "\x87" "B " "\x90" "V" "\x8b" "K " \
    "\x95\xdb\x91\xb6" " |" "\x87" "C" \
    "\xc3\xde\xa8\xda\xb8\xc4\xd8\x8d\xec\x90\xac" "|"
#define JW_FILE_PATH "path=A:" "\x5c" "*.jwc"
/* What the two questions put on row 3, in place of the free space:
 * the name about to be written, on white.  And the mark at column 6
 * of the top line that goes with them. */
#define JW_SAVE_FILE "\x95\xdb\x91\xb6\xcc\xa7\xb2\xd9" "=A:" "\x5c"
/* ③合成 and ④削除 ask before they do it.  Measured (tools/origstr.sh
 * "30 296 left" "110 8 left" "250 8 left" "200 152 left" "200 8 left"): the
 * list goes and the drawing comes back, the drawing that was picked is named
 * on row 3 at column 20 on white -- in 7 for 合成 and in 6 for 削除 -- and
 * the top line is one of these three.  合成 asks twice: `① 実 行` on the
 * first puts up the second, and `① 実行` on that one merges. */
#define JW_ASK_FILE "\xcc\xa7\xb2\xd9" "=A:" "\x5c"
/* ⑥ＤＸＦ ③設定.  Measured with tools/origstr.sh
 * "30 296 left" "110 8 left" "460 8 left" "220 8 left": two boxes of white
 * rule over the drawing, x 244..545, the first y 39..200 with rules at 72,
 * 104, 136 and 168, the second y 231..296 with one at 264.  The names are
 * at column 32, the left choice at 47 with its ★ at 45 and the right at 60
 * with its ★ at 58. */
#define JW_DXFSET_BAR \
    "\x95\xcf\x8d" "X" "\x8d\x80\x96\xda" " " "\x83" "}" "\x83" "E" \
    "\x83" "X" "\x8e" "w" "\x8e\xa6" " |" "\x87" "@" "\x95\xcf\x8d" \
    "X" "\x8a" "m" "\x92\xe8" "|"
#define JW_DXF_STAR "\x81\x9a"
/* 寸法 ⑨設定's own line, in four pieces with the three states between
 * them: `|①変更確定 |②寸法線端部【` X `】|③単位【` Y `】|④小数点以下(` Z
 * `)桁表示|`. */
#define JW_DIMSET_BAR1 \
    "|" "\x87" "@" "\x95\xcf\x8d" "X" "\x8a" "m" "\x92\xe8" " |" \
    "\x87" "A" "\x90\xa1\x96" "@" "\x90\xfc\x92" "[" "\x95\x94\x81" "y"
#define JW_DIMSET_BAR2 "\x81" "z|" "\x87" "B" "\x92" "P" "\x88\xca\x81" "y"
#define JW_DIMSET_BAR3 \
    "\x81" "z|" "\x87" "C" "\x8f\xac\x90\x94\x93" "_" "\x88\xc8\x89\xba" "("
#define JW_DIMSET_BAR4 ")" "\x8c\x85\x95\x5c\x8e\xa6" "|"
/* ⑤新規図面 asks first when there is work on the drawing in hand.  The line
 * is src/item.h's for that cell, which is where the original's bytes were
 * captured (branch 281). */
#define JW_NEWASK_BAR \
    "\x95\xd2\x8f" "W" "\x92\x86\x82\xcc\x90" "}" \
    "\x96\xca\x82\xaa\x8e\xb8\x82\xed\x82\xea\x82\xdc\x82\xb7" \
    "  |" "\x87" "@" "\x90" "V" "\x8b" "K|" "\x87" "A" \
    "\x95\xdb\x91\xb6" "|" "\x87" "B" "\x92\x86\x8e" "~|"
/* ⑥ＤＸＦ ①保存's last question.  Measured: the list stays, the strip along
 * the bottom comes back, the `path=` and the ` DXFOUT …` line are blanked
 * and `A:\NAME.dxf` goes on row 2 at column 18 on white. */
#define JW_DXFWRITE_BAR \
    " " "\x8f\x91\x82\xab\x8d\x9e\x82\xdd\x82\xdc\x82\xb7" " |" \
    "\x87" "@ " "\x8e\xc0" " " "\x8d" "s(L)|" "\x87" "A " \
    "\x8d\xc4\x91" "I" "\x91\xf0" "(R)|"
static const struct {
    int row;
    const char *name;
    const char *left;
    const char *right;
} JW_DXFSET[5] = {
    { 6, "\x93" "_" "\x82\xcc\x8f" "o" "\x97\xcd",
         "\x93" "_" "\x82\xcc\x82\xdc\x82\xdc",
         "\x89" "~" "\x82\xc9\x95\xcf\x8a\xb7" },
    { 8, "\x89" "~" "\x82\xcc\x8f" "o" "\x97\xcd",
         "\x89" "~" "\x82\xcc\x82\xdc\x82\xdc",
         "\x90\xfc\x82\xc9\x95\xcf\x8a\xb7" },
    { 10, "\x83\x8c\x83" "C" "\x83\x84\x96\xbc",
          "\x91" "S" "\x8a" "p" "\x97" "L" "\x82\xe8",
          "\x94\xbc\x8a" "p" "\x82\xcc\x82\xdd" },
    { 12, "\x8b\xf3\x94\x92\x8f" "o" "\x97\xcd",
          "\x95" "W" "\x81" "@" "\x81" "@" "\x8f\x80",
          "\x8d\xc5" " " "\x8f\xac" " " "\x8c\xc0" },
    { 18, "\x90" "}" "\x96\xca\x82\xcc\x94\xcd\x88\xcd",
          "\x93\xc7\x82\xdd\x8e\xe6\x82\xe9",
          "\x96\xb3\x8e\x8b\x82\xb7\x82\xe9" }
};
#define JW_MERGE1_BAR \
    "          " "\x8d\x87\x90\xac" "     |" "\x87" "@ " "\x8e\xc0" " " \
    "\x8d" "s(L)|" "\x87" "A " "\x8d\xc4\x91" "I" "\x91\xf0" "(R)|"
#define JW_MERGE2_BAR \
    "\x8d\x87\x90\xac" "\xc3\xde\xb0\xc0" "\x82\xf0" \
    "\x8f\x91\x82\xab\x8d\x9e\x82\xdd\x82\xdc\x82\xb7" "  |" "\x87" "@ " \
    "\x8e\xc0\x8d" "s(L)|" "\x87" "A " "\x92\x86\x8e" "~" "(R)|"
#define JW_DOT "\x81" "E"
/* The other four cells of ①ﾌｧｲﾙ's bar, each read off the original
 * (tools/ioroad.sh presses one and logs the line it writes).  ③合成 and
 * ④削除 put up the same ファイル選択 screen ②読込 does -- byte for byte the
 * same line -- so only these three have lines of their own. */
#define JW_DRIVE_BAR \
    "\x83" "h" "\x83\x89\x83" "C" "\x83" "u" "\x95\xcf\x8d" "X |" \
    "\x87" "@" "\x81" "y" "\x82" "`" "\x81" "z|" "\x87" "A " "\x82" \
    "a|" "\x87" "B " "\x82" "b|" "\x87" "C " "\x82" "c|" "\x87" "D " \
    "\x82" "d|" "\x87" "E " "\x82" "e|" "\x87" "F " "\x82" "f|" \
    "\x87" "G" "\x94" "C" "\x88\xd3" "|"
#define JW_DXF_BAR \
    "|" "\x87" "@ " "\x95\xdb\x91\xb6" "|" "\x87" "A " \
    "\x93\xc7\x8d\x9e" "|" "\x87" "B " "\x90\xdd\x92\xe8" "|"
#define JW_INDEX_BAR \
    "\x91" "I" "\x91\xf0\x83" "t" "\x83" "@" "\x83" "C" \
    "\x83\x8b\x96\xbc" "  " "\x83" "}" "\x83" "E" "\x83" "X" "\x8e" \
    "w" "\x8e\xa6" " (L) |" "\x87" "@" \
    "\xb2\xdd\xc3\xde\xaf\xb8\xbd\x8d\xed\x8f\x9c" "|  " "\x91" "I" \
    "\x91\xf0" ":[" "\xbd\xcd\xdf\xb0\xbd" "](R)"
#define JW_BS_BACK "[BS]" "\x91" "O" "\x8d\x80"
/* ①ｲﾝﾃﾞｯｸｽ削除's question.  Measured: `[ESC]` at column 1, `・` at 6 and
 * this at 8, with no `[BS]前項` after it. */
#define JW_IXDEL_BAR \
    "\x8d\xed\x8f\x9c\x82\xb5\x82\xdc\x82\xb7 |" "\x87" "@ " \
    "\x8d\xed" " " "\x8f\x9c" " |" "\x87" "A " "\x8d\xc4\x91" "I" "\x91\xf0" \
    " |"
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
/* The word beside the free space says which way the screen is going:
 * 保存 on ①保存's, 読込 on ②読込's.  Measured on both. */
#define JW_FILE_SAVE " " "\x95\xdb\x91\xb6" "    "
#define JW_FILE_LOAD " " "\x93\xc7\x8d\x9e" "    "
/* ③合成 and ④削除 wear ②読込's screen but put their own word over the list,
 * where ②読込 has `読込`. */
#define JW_FILE_MERGE " " "\x8d\x87\x90\xac" "    "
#define JW_FILE_KILL " " "\x8d\xed\x8f\x9c" "    "
#define JW_FILE_EDIT "\x95\xd2\x8f" "W"
#define JW_FILE_NAMED "\x83" "t" "\x83" "@" "\x83" "C" "\x83\x8b\x96\xbc"

/* The two bars the borrowed screens have that 入出力's has not: a third and
 * a fourth cell.  Bytes from the original, branches 148 and 268. */
#define JW_PICK_NAME_BAR \
    JW_FILE_BAR "\x87" "B" "\xcc\xa7\xb2\xd9\x96\xbc\x8e" "w" \
    "\x92\xe8" " |" "\x87" "C" "\x8a" "g" "\x92\xa3\x8e" "q" \
    "\x95\xcf\x8d" "X |"
#define JW_PICK_CHILD_BAR \
    JW_FILE_BAR "\x87" "B" "\x8e" "q" "\x83" "v" "\x83\x8d\x83" "Z" \
    "\x83" "X |" "\x87" "C" "\x8a" "g" "\x92\xa3\x8e" "q" \
    "\x95\xcf\x8d" "X |"

void jw_ui_pick_kind(JwUi *s, int kind)
{
    /* ⑥ＤＸＦ's two screens name the drawing in hand as 入出力's own do:
     * `編集ファイル名=SAMPLE0`, only further along the line because their
     * word is longer (tools/origstr.sh "30 296 left" "110 8 left"
     * "460 8 left" "100 8 left"). */
    s->file_named = kind == JW_PICK_IO || kind == JW_PICK_DXFOUT
                    || kind == JW_PICK_DXFIN;
    s->file_path_fg = kind == JW_PICK_CHILD ? 4 : 5;
    switch (kind) {
    case JW_PICK_DXFOUT:
        s->file_bar = 0;                /* 保存's own, from `saving` */
        s->file_path = "path=A:" "\x5c" "*.dxf";
        s->file_word = " DXFOUT    ";
        break;
    case JW_PICK_DXFIN:
        s->file_bar = 0;
        s->file_path = "path=A:" "\x5c" "*.dxf";
        s->file_word = " DXFIN    ";
        break;
    case JW_PICK_ZUKEI:
        s->file_bar = JW_FILE_BAR;
        s->file_path = JW_FILE_PATH;
        s->file_word = JW_FILE_LOAD;
        break;
    case JW_PICK_COORD:
        s->file_bar = JW_PICK_NAME_BAR;
        s->file_path = "path=A:" "\x5c" "*.txt";
        s->file_word = " " "\x8d\xc0\x95" "W    ";
        break;
    case JW_PICK_CHILD:
        s->file_bar = JW_PICK_CHILD_BAR;
        s->file_path = "path=A:" "\x5c" "*.bat";
        s->file_word = " " "\x8a" "O" "\x95\x94\x8f\x88\x97\x9d" "    ";
        break;
    default:
        s->file_bar = 0;
        s->file_path = 0;
        s->file_word = 0;
        break;
    }
}

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

/* Is this press on the top line and past the last of its cells?  A press on
 * a bar is on the line's own furniture and is not this. */
int jw_ui_past_cells(int x, int y)
{
    const int col = x / 8 + 1;
    int i;

    if (y < 0 || y > 15 || col < 1 || col > 80) {
        return 0;
    }
    for (i = col - 1; i < 80; i++) {
        if (top_line[i] == '|') {
            return 0;
        }
    }
    for (i = 0; i < col - 1; i++) {
        if (top_line[i] == '|') {
            return 1;           /* there were cells, and this is after them */
        }
    }
    return 0;
}

/* ②円周 の帯は **図面の上** です。原作は寸法を描いてから帯を書き直すので、
 * 桁 17 の値も 端部 の桁も円弧に乗ります（測定：値の右端 x=167 の y=31 が
 * 原作では白のまま、こちらでは円弧の水色でした）。段の中で書くと
 * jw_cmd_after が上から塗るので、ここだけ最後に書きます。 */
void jw_ui_band_last(VGA *v, const JwUi *s)
{
    if (s->command != 14 || (!s->dim_ck && !s->dim_arc)) {
        return;
    }
    if (s->missed) {
        /* ①円径 は `読取可能データ無` を BEL なしで桁 32 から。②円周 は
         * どちらも桁 20 からで、円が見つからずに線を拾うと
         * `線データです`（三つとも測定）。 */
        if (s->dim_arc == 2 && s->dim_arc_two) {
            /* ③【２線間】の外した押しは、ほかの道と同じ BEL つきです
             * （測定：桁 32 に `.読取可能データ無`）。 */
            jw_ui_text(v, 32, 2, 7, 0,
                       "\x07" "\x93\xc7\x8e\xe6\x89"
                       "\xc2\x94\x5c\x83\x66\x81"
                       "\x5b\x83\x5e\x96\xb3");
            return;
        }
        if (s->dim_arc && s->dim_arc_miss) {
            jw_ui_text(v, 20, 2, 7, 0, "\x90\xfc\x83" "f\x81[\x83^\x82\xc5\x82\xb7");
        } else {
            jw_ui_text(v, s->dim_arc ? 20 : 32, 2, 7, 0, "\x93\xc7\x8e\xe6\x89\xc2\x94\x5c\x83" "f\x81[\x83^\x96\xb3");
        }
        return;
    }
    /* ①円径 の 書込角度 と値も同じです。外した押しのあとは帯に何も
     * 残りません（測定：サーチが桁 17..30 を消し、書込角度 も値も
     * 書き直されません）。 */
    if (s->dim_ck && s->stage == 9) {
        char one[24];

        sprintf(one, "%8.3f\xdf", s->dim_ck_deg);
        jw_ui_text(v, 62, 2, 7, 0xffffu, one);
        if (s->dim_ck_val[0]) {
            jw_ui_text(v, 18, 2, 7, 0xffffu, s->dim_ck_val);
        }
        return;
    }
    if (!s->dim_arc || s->stage != 11) {
        return;
    }
    if (s->dim_arc_end) {
        jw_ui_text(v, 45, 2, 7, 0xffffu, "\x96\xee\x88\xf3");
    } else {
        jw_ui_text(v, 46, 2, 7, 0xffffu, "\x93_");
    }
    if (s->dim_arc == 2) {
        /* ②単位 の欄は桁 54 で中心をそろえます: `度` は桁 53、`度分秒` は
         * 桁 51 から。**文字列の記録には桁を押したときの `度分秒` が出て
         * きませんが、画面には出ています**——記録だけで決めると、押した
         * だけでは空になってしまいます。 */
        if (!s->dim_arc_unit) {
            jw_ui_text(v, 53, 2, 7, 0xffffu, "\x93x");
        } else {
            jw_ui_text(v, 51, 2, 7, 0xffffu,
                       "\x93x" "\x95" "\xaa" "\x95" "\x62");
        }
    }
    if (s->dim_arc_val[0]) {
        jw_ui_text(v, 17, 2, 7, 0xffffu, s->dim_arc_val);
    }
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
    /* **A cell is between two bars.**  Past the last one there is no cell at
     * all, and the original does nothing there: 面取 in 【Ｌ面】 has a line
     * of three cells where 【角面】 has five, and pressing where ④ used to
     * be leaves the screen exactly as it was.  Counting the bars in front
     * alone made that press ② and put up another screen. */
    for (i = col - 1; i < 80; i++) {
        if (top_line[i] == '|') {
            break;
        }
    }
    if (i >= 80 && (top_line[col - 1] == ' ' || top_line[col - 1] == 0)) {
        /* Past the last bar and on nothing: no cell.  What is written out
         * there **is** one, though -- 文字's line ends `|⑥(横)字|  [BS]前項`
         * and pressing 前項 puts the two counts back. */
        return 0;
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
    s->dec_drawing = d->decimals;
    s->char_type = d->char_type;
    s->char_pen = d->text_pen[d->char_type];
    s->char_w = d->text_w[d->char_type];
    s->char_h = d->text_h[d->char_type];
    for (i = 0; i < 11; i++) {
        s->char_tab_pen[i] = d->text_pen[i];
        s->char_tab_w[i] = d->text_w[i];
        s->char_tab_h[i] = d->text_h[i];
        s->char_tab_gap[i] = d->text_gap[i];
        s->char_tab_use[i] = 0;
    }
    {
        int k;

        for (k = 0; k < d->n_texts; k++) {
            const int t = d->texts[k].size;

            if (t >= 1 && t <= 10) {
                s->char_tab_use[t]++;
            }
        }
    }
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

/* The same, but **the field keeps its width**.  put_numbers writes the number
 * as short as it goes, which suits 文字's `横 4.0`; a number inside a fixed
 * field has to stay in it, so the run of spaces and digits it was found in is
 * measured and the value written back across the whole of it.  `[     1000.00]`
 * at three decimals is `[    1000.000]`, not `[     1000.000]`. */
static void put_fixed(char *out, size_t cap, const char *text,
                      const double *n, int count, int dec)
{
    size_t o = 0;
    int k = 0;

    while (*text && o + 32 < cap) {
        if (k < count && *text >= '0' && *text <= '9') {
            size_t back = 0;
            int w = 0;

            while (back < o && out[o - back - 1] == ' ') {
                back++;
            }
            while (*text && ((*text >= '0' && *text <= '9') || *text == '.')) {
                text++;
                w++;
            }
            o -= back;
            w += (int)back;
            o += (size_t)sprintf(out + o, "%*.*f", w, dec, n[k]);
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
/* 測定's lengths.  **The unit is the one ⑥単位 has**: metres as the file
 * keeps them, times a hundred for cm and a thousand for mm, shown to as many
 * decimals as ⑦小数点以下 says, with the trailing zeros and the point taken
 * off.  The word at the end of the recorded line is `ｍ`, and cm and mm are
 * written in its place -- measured: 0.081 ｍ comes out `8.1 cm`. */
/* The last run of digits in a recorded line, put back.  寸法 ⑨設定's rows
 * carry their range in brackets -- `線のペン No.(1〜6)        1` -- so the
 * number that belongs to the setting is the last one, not the first. */
static void put_last(char *out, size_t cap, const char *text, const char *num)
{
    const char *at = 0, *p = text;
    size_t o;

    while (*p) {
        if ((*p >= '0' && *p <= '9') || *p == '.') {
            const char *start = p;

            while (*p && ((*p >= '0' && *p <= '9') || *p == '.')) {
                p++;
            }
            at = start;
        } else if ((unsigned char)*p >= 0x81) {
            p += 2;                     /* a double-byte character */
        } else {
            p++;
        }
    }
    if (!at) {
        snprintf(out, cap, "%s", text);
        return;
    }
    o = (size_t)(at - text);
    if (o >= cap) {
        o = cap - 1;
    }
    memcpy(out, text, o);
    out[o] = 0;
    strncat(out, num, cap - o - 1);
    p = at;
    while (*p && ((*p >= '0' && *p <= '9') || *p == '.')) {
        p++;
    }
    strncat(out, p, cap - strlen(out) - 1);
}

static void put_metres(char *out, size_t cap, const char *text, double m,
                       int unit, int dec)
{
    static const double MUL[3] = { 1.0, 100.0, 1000.0 };
    size_t o = 0;
    int done = 0;

    m *= MUL[unit % 3];
    while (*text && o + 24 < cap) {
        if ((unsigned char)*text == 0x82 && (unsigned char)text[1] == 0x8d
            && unit % 3) {
            o += (size_t)sprintf(out + o, "%s", unit % 3 == 1 ? "cm" : "mm");
            text += 2;
            continue;
        }
        if (!done && ((*text >= '0' && *text <= '9') || *text == '.')) {
            char num[32];
            size_t n;

            while (*text && ((*text >= '0' && *text <= '9') || *text == '.')) {
                text++;
            }
            n = (size_t)sprintf(num, "%.*f", dec, m);
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
    /* 寸法's own line while it asks for the 寸法値: the `[1]` in
     * `①小数点以下[1]桁` is the setting, not a recording (measured -- one
     * press on that cell makes it `[2]`), and ⑤寸法値's line stops at the
     * `(R)` where ①横方向 goes on with `|①連続|`. */
    if (q->command == 14 && q->col == 8
        && (q->stage == 3 || q->stage == 5)) {
        int i, bars = 0;

        strncpy(out, q->text, sizeof out - 1);
        out[sizeof out - 1] = 0;
        for (i = 0; out[i]; i++) {
            if (is_lead((unsigned char)out[i]) && out[i + 1]) {
                i++;
                continue;
            }
            if (out[i] == '[' && out[i + 1] >= '0' && out[i + 1] <= '9'
                && out[i + 2] == ']') {
                out[i + 1] = (char)('0' + (s->dim_dec & 15));
            }
            if (out[i] == '|' && s->dim_only) {
                out[i] = 0;
                break;
            }
            /* ④累寸 leaves only `|②一括|` after the 小数点以下 cell. */
            if (out[i] == '|' && s->dim_prog && q->stage == 3 && ++bars == 2) {
                strcpy(out + i, "|\x87" "A" "\x88\xea\x8a\x87" "|");
                break;
            }
        }
        jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, out);
        return;
    }
    /* 寸法's `文字[F2]` is not a 2: it is **the 寸法値's character type**, the
     * one the drawing keeps in field 6 of its panel line.  SAMPLE0 has 2 and
     * writes [F2], SAMPLE2 has 3 and writes [F3], SAMPLE3 has 8 and writes
     * [F8].  The recording is SAMPLE0's, so the digit is put back here. */
    if (q->command == 14 && q->row == 1 && strstr(q->text, "[F2]")
        && s->dim_size >= 1 && s->dim_size <= 9) {
        char *at;

        strncpy(out, q->text, sizeof out - 1);
        out[sizeof out - 1] = 0;
        at = strstr(out, "[F2]");
        at[2] = (char)('0' + s->dim_size);
        jw_ui_text(v, q->col, q->row, (unsigned)q->fg, (unsigned)q->bg, out);
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
            n[0] = s->dim_text_pen ? s->dim_text_pen : JW_DIM_PEN;
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
    /* 寸法 puts the value it has just written in the band -- the **same
     * string** the drawing got, `m` and all (measured: 単位 を二度押すと
     * 桁 17 も `0.3m`). */
    if (q->command == 14 && q->row == 2 && q->col == 17) {
        char num[32];

        jwc_dim_text(num, sizeof num, s->dim_value, s->dim_unit, s->dim_dec,
                     !s->dim_comma, s->dim_zero);
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
                       q->col == 20 ? s->meas_total : s->meas_last,
                       s->meas_unit, s->meas_dec);
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

/* Does the line the chrome has just written offer `① 前 範 囲`?  That cell
 * is what the twelve screens with the notch at (0,16) have in common; see
 * notch() below. */
static int asks_range(void)
{
    /* ` 前 範 囲`, the original's bytes. */
    static const char WANT[] = " \x91" "O " "\x94\xcd" " " "\x88\xcd";
    const int n = (int)sizeof WANT - 1;
    int i;

    for (i = 0; i + n <= 80; i++) {
        if (memcmp(top_line + i, WANT, (size_t)n) == 0) {
            return 1;
        }
    }
    return 0;
}

/* A line cut to a box before it is drawn.  jw_line does not clip -- it is the
 * chrome's own routine and the chrome draws inside itself -- and the fittings
 * library asks for lines that run out of the row they are shown in. */
static void clip_line(VGA *v, double x0, double y0, double x1, double y1,
                      int bx0, int by0, int bx1, int by1, unsigned colour)
{
    double t0 = 0.0, t1 = 1.0;
    const double dx = x1 - x0, dy = y1 - y0;
    int i;

    for (i = 0; i < 4; i++) {
        const double p = i == 0 ? -dx : i == 1 ? dx : i == 2 ? -dy : dy;
        const double q = i == 0 ? x0 - bx0
                       : i == 1 ? bx1 - x0
                       : i == 2 ? y0 - by0
                                : by1 - y0;

        if (p == 0.0) {
            if (q < 0.0) {
                return;
            }
            continue;
        }
        if (p < 0.0) {
            const double r = q / p;

            if (r > t1) {
                return;
            }
            if (r > t0) {
                t0 = r;
            }
        } else {
            const double r = q / p;

            if (r < t0) {
                return;
            }
            if (r < t1) {
                t1 = r;
            }
        }
    }
    jw_line(v, (int)(x0 + t0 * dx), (int)(y0 + t0 * dy),
            (int)(x0 + t1 * dx), (int)(y0 + t1 * dy), colour, ROP_REPLACE,
            JW_STYLE_SOLID);
}

/* One coordinate, in pixels away from the block's own origin.
 *
 * A front view is as tall as the window, and the height is no more in the
 * file than the width is: it is written in **tenths of the opening plus an
 * offset**.  0 is the sill, 5000 the middle, 10000 the head, 3000 three
 * tenths up; what is left over is an ordinary measurement, so 10035 is 35
 * above the head, 4900 a hundred below the middle and 3040 forty above three
 * tenths.
 *
 * `step` is how far apart two tenths are drawn.  A plan has no such values --
 * everything in it is under five hundred -- so it passes nought and the sum
 * is the ordinary one.
 *
 * Measured on ③立面, where the opening is 60 pixels tall and a unit is a
 * fourteenth of a pixel: cell 5's middle rail comes out at 165, 168, 170 and
 * 175 for 5035, 5000, 4960 and 4900, cell 3's at 81 and 84 for 3040 and
 * 3000, and cell 2's stiles at 314 and 317 for -15 and 15.  Nothing else
 * fits all three. */
static double across(int v, double unit, double step)
{
    const int k = (int)floor((v + 500.0) / 1000.0);

    return k * step + (v - k * 1000) * unit;
}

/* The sixteen shapes ｵﾌﾟｼｮﾝ ①建具平面 ②断面 ③立面 show, out of the library
 * files that ship with the program.  See src/tategu.h for the format and the
 * top of tmp/tatedraw.py's note for where the numbers came from.
 *
 * A unit is a quarter of a pixel both ways, the shape's y grows upwards while
 * the screen's grows down, and the parts stand two hundred pixels apart end
 * to end whatever their number -- eight hundred units, a door's width. */
static void tategu(VGA *v, int which)
{
    const JwTategu *t = jw_tategu_lib(which);
    int i;

    if (!t) {
        return;
    }
    for (i = 0; i < t->n && i < 16; i++) {
        const JwTateguShape *sh = &t->shape[i];
        /* ③立面 is a front view and is laid out four across and four down;
         * the other two are plans, two across and eight down. */
        const int wide = which == 3;
        const int col = wide ? i % 4 : i & 1;
        const int row = wide ? i / 4 : i >> 1;
        /* how far a unit goes, how far apart the blocks stand end to end,
         * and how tall the opening is drawn */
        const double unit = wide ? 1.0 / 14.0 : 0.25;
        const double span = wide ? 60.0 : 200.0;
        const double tenth = wide ? 6.0 : 0.0;
        const double left = wide ? 156.0 + col * 130.0
                                 : (col ? 420.0 : 150.0);
        const double step = sh->parts > 1 ? span / (sh->parts - 1) : 0.0;
        const double base = wide ? 102.0 + 96.0 * row : 54.0 + 48.0 * row;
        /* The row this shape is shown in, between its two rules.  They are
         * at y 16, 63, 111, 159 ... -- 47 apart once and 48 after that --
         * and the divider down the middle is x 380.  **Everything is cut to
         * it**: a shape taller than its row would otherwise write into the
         * ones above and below. */
        const int x0 = wide ? (col ? 122 + col * 130 : 122) : (col ? 381 : 122);
        const int x1 = wide ? (col == 3 ? 638 : 250 + col * 130)
                            : (col ? 638 : 379);
        const int y0 = (wide ? 16 + row * 96 : (row ? 63 + (row - 1) * 48 : 16)) + 1;
        const int y1 = (wide ? 112 + row * 96 : 63 + row * 48) - 1;
        int k;

        for (k = 0; k < sh->n; k++) {
            const JwTateguLine *l = &sh->line[k];
            const double ax = left + (l->a - 1) * step + across(l->x1, unit, 0.0);
            const double bx = left + (l->b - 1) * step + across(l->x2, unit, 0.0);
            const double ay = base - across(l->y1, unit, tenth);
            const double by = base - across(l->y2, unit, tenth);
            const unsigned ink = jw_view_pen_colour((unsigned)l->pen);

            if (l->arc) {
                /* The centre is the first pair and the start the second; the
                 * radius is how far apart they come out on the screen.  The
                 * sweep is anticlockwise in the shape's own sense, where y
                 * grows upwards, so on the screen it runs the other way.
                 * A 1 in the mode's tens place clips it to the row. */
                const double dx = bx - ax, dy = by - ay;
                const double r = sqrt(dx * dx + dy * dy);
                const double a0 = atan2(-dy, dx) * 180.0 / 3.14159265358979323846;
                const double a1 = a0 + l->sweep;
                const int units = l->mode % 10;
                const int cx0 = v->clip_x0, cy0 = v->clip_y0;
                const int cx1 = v->clip_x1, cy1 = v->clip_y1;
                const double rad = 3.14159265358979323846 / 180.0;

                v->clip_x0 = x0;
                v->clip_y0 = y0;
                v->clip_x1 = x1;
                v->clip_y1 = y1;
                if (units <= 3) {
                    /* **The smaller angle first.**  jw_arc_poly sweeps
                     * anticlockwise from its start to its end and adds a
                     * whole turn when the end is behind the start -- so a
                     * record with a negative sweep, like 排煙窓's, would go
                     * the long way round and leave pieces of arc all over
                     * the row. */
                    const double lo = a1 < a0 ? a1 : a0;
                    const double hi = a1 < a0 ? a0 : a1;

                    jw_arc_poly(v, ax, ay, r, 10000,
                                (long)(lo * 65536.0), (long)(hi * 65536.0), 0,
                                ink, ROP_REPLACE, JW_STYLE_SOLID);
                }
                if (units == 1 || units == 3 || units == 5 || units == 7) {
                    clip_line(v, ax, ay, bx, by, x0, y0, x1, y1, ink);
                }
                if (units == 2 || units == 3 || units == 6 || units == 7) {
                    const double ex = ax + r * cos(a1 * rad);
                    const double ey = ay - r * sin(a1 * rad);

                    clip_line(v, floor(ax), floor(ay), floor(ex), floor(ey),
                              x0, y0, x1, y1, ink);
                }
                v->clip_x0 = cx0;
                v->clip_y0 = cy0;
                v->clip_x1 = cx1;
                v->clip_y1 = cy1;
                continue;
            }
            clip_line(v, ax, ay, bx, by, x0, y0, x1, y1, ink);
        }
    }
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
    /* **⑦矢印 の 2 本は箱に出ません。** 本物は矢印を引いたあと箱を
     * 書き直さないので、選んだときの線数のままです（30 のまま）。 */
    sprintf(buf, "%7ld|%7ld ",
            ((s->command == 14 && s->top_item == 7)
             || (s->command == 14 && s->dim_arc && s->dim_did))
                ? s->dim_lines0 : s->n_lines,
            s->n_arcs);
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
    /* The block of yellow marks which of 目盛's cells is chosen: `off` at
     * x32..54, and the four numbers at x56..71, 72..87, 88..103, 104..119.
     * The numbers' blocks start a row higher than `off`'s -- measured. */
    if (s->gauge_pick == 0) {
        fill(v, 32, 18, 54, 31, 6);
    } else {
        fill(v, 56 + 16 * (s->gauge_pick - 1), 17,
             71 + 16 * (s->gauge_pick - 1), 31, 6);
    }
    /* **The cell that is filled is the state.**  With 軸角 off the block of
     * cyan is under `off` (x32..54) and `on` is written in cyan on black;
     * pressing `on` moves the block to it (x56..70) and the words swap
     * over.  Measured -- the original's cyan spans x32..70 afterwards,
     * which is `off` in cyan letters and `on` on a cyan ground. */
    if (s->axis_on) {
        fill(v, 56, 33, 70, 47, 5);
    } else {
        fill(v, 32, 33, 54, 47, 5);
    }
    jw_ui_text(v, 1, 2, 6, 0, "\x96" "\xda" "\x90" "\xb7");
    jw_ui_text(v, 5, 2, s->gauge_pick == 0 ? 0 : 6, 0, "off");
    jw_ui_text(v, 8, 2, s->gauge_pick == 1 ? 0 : 6, 0, "11");
    jw_ui_text(v, 10, 2, s->gauge_pick == 2 ? 0 : 6, 0, "12");
    jw_ui_text(v, 12, 2, s->gauge_pick == 3 ? 0 : 6, 0, "13");
    jw_ui_text(v, 14, 2, s->gauge_pick == 4 ? 0 : 6, 0, "14");
    jw_ui_text(v, 1, 3, 6, 0, "\x8e" "\xb2" "\x8a" "\x70");
    jw_ui_text(v, 5, 3, s->axis_on ? 5 : 0, 0, "off");
    jw_ui_text(v, 8, 3, s->axis_on ? 0 : 5, 0, "on");
    /* 字表示 or 枠表示, whichever way the cell has been pressed. */
    jw_ui_text(v, 10, 3, 6, 0, s->frame_text
               ? "\x98" "g" "\x95\x5c\x8e\xa6"
               : "\x8e\x9a\x95\x5c\x8e\xa6");

    /* And a short slant beside each of the four numbers -- eight pixels of
     * yellow that no string write accounts for, the same shape by every one
     * of 11, 12, 13 and 14: (63,20)-(61,27) and the same sixteen, thirty-two
     * and forty-eight pixels to the right.  Read off the original with the
     * pointer at (119,30), where nothing else is over them. */
    for (i = 0; i < 4; i++) {
        /* On the chosen number the slant is black, like the digits: the
         * whole cell is yellow underneath. */
        jw_line(v, 63 + 16 * i, 20, 61 + 16 * i, 27,
                s->gauge_pick == i + 1 ? 0u : 6u,
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

/* Is 図形's list of figures up?  ①登録 puts it up once the base point is
 * down (stages 5 and 6) and ②読込 as soon as it is pressed (stage 9). */
static int zukei_list_up(const JwUi *s)
{
    return s->command == 27
           && ((s->zukei >= JW_ZUKEI_PICK && s->zukei < JW_ZUKEI_WRITE)
               || s->zukei == JW_ZUKEI_LIST);
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
    if (s->ask == JW_ASK_LNAME
        || (s->command == 14 && s->dim_val && s->stage == 8)) {
        /* 図面名 empties the strip altogether -- y 464..479 is black right
         * across, frame and all, while it is asking for the name.  **寸法
         * ⑧値変's field does the same** while it holds the value (measured:
         * 5,865 pixels of the strip). */
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
        if (s->zoom_stage == 4) {
            /* 倍率指定 の欄を出しているあいだ、帯は `画 面 倍 率`（桁 37）。 */
            jw_ui_text(v, 37, 30, 0, 0, "\x89\xe6" " " "\x96\xca" " " "\x94" "{" " " "\x97\xa6");
        } else if (s->zoom_stage == 1) {
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
        if (s->zoom_stage == 4) {
            /* 倍率指定 の左押しのあと: `画 面 倍 率 (10000以下) ＝` と
             * 桁 35 の 8 マスの欄、桁 52 に `前倍率ﾏｳｽ(L) 最小倍率ﾏｳｽ(R) `。
             * 欄の緑の四角は次の字が入るマスです。 */
            int n;

            jw_ui_text(v, 8, 1, 7, 0, "\x89\xe6" " " "\x96\xca" " " "\x94" "{" " " "\x97\xa6" " " "(10000\x88\xc8\x89\xba) " "\x81\x81");
            jw_ui_text(v, 52, 1, 7, 0, "\x91" "O" "\x94" "{" "\x97\xa6\xcf\xb3\xbd" "(L) " "\x8d\xc5\x8f\xac\x94" "{" "\x97\xa6\xcf\xb3\xbd" "(R) ");
            for (n = 0; n < s->zoom_typed_n && n < 8; n++) {
                char one[4];

                one[0] = s->zoom_typed[n];
                one[1] = one[2] = ' ';
                one[3] = 0;
                jw_ui_text(v, 35 + n, 1, 7, 0, one);
            }
            n = s->zoom_typed_n < 8 ? s->zoom_typed_n : 8;
            fill(v, 272 + n * 8, 7, 279 + n * 8, 15, 4);
        } else if (s->zoom_stage == 3) {
            jw_ui_text(v, 12, 1, 7, 0, "\x95" "\x5c" "\x8e" "\xa6" "\x92" "\x86" "\x90" "S " "\x83" "}" "\x83" "E" "\x83" "X" "\x8e" "w" "\x8e" "\xa6" "   " "\x94" "C" "\x88" "\xd3" "\x94" "{" "\x97" "\xa6" "\xcf" "\xb3" "\xbd" "(L) " "\x94" "{" "\x97" "\xa6" "=1.0" "\xcf" "\xb3" "\xbd" "(R)  " "\x8d" "\xc4" "\x95" "\x5c" "\x8e" "\xa6" "[XFER]");
        } else {
            jw_ui_text(v, 30, 1, 7, 0, s->zoom_stage == 1 ? "\x81" "\xa1" "\x8a" "g" "\x91" "\xe5" "\x81" "\xa1" "\x8e" "n" "\x93" "_ " "\x83" "}" "\x83" "E" "\x83" "X" "\x8e" "w" "\x8e" "\xa6" " " : "\x81" "\xa1" "\x8a" "g" "\x91" "\xe5" "\x81" "\xa1" "    " "\x8f" "I" "\x93" "_ " "\x83" "}" "\x83" "E" "\x83" "X" "\x8e" "w" "\x8e" "\xa6" " ");
        }
    } else if ((s->command == 2 || s->command == 3) && s->ask_kind) {
        /* ＋ and ／'s ②寸 法 and ③角 度.  Read off the original, branches
         * 7 and 9 of tmp/branch/list.txt:
         *
         *   [ESC]  寸法 =         任意寸法 ﾏｳｽ(L) 前回と同じ ﾏｳｽ(R)
         *   [ESC]  角度 =        ｜0 度 ﾏｳｽ(L)｜前回と同じ ﾏｳｽ(R) ｜[F1] ﾏｳｽ角度｜
         *
         * with the field of eight blanks at column 15 and the number it
         * offers on the row below -- `[  1000.000mm]` at column 54 and
         * `[  45.000\xdf]` at column 50.  The two bars are not at the same
         * column and 角度 has no trailing space after its `=`; both are the
         * original's, not a tidying. */
        char one[32];

        if (s->ask_kind >= 3) {
            /* 平行 and 垂直 ask for a line, not a number, so there is no
             * field and no cursor -- and `[ESC]` here has no trailing
             * spaces, which the two below do have. */
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
            jw_ui_text(v, 8, 1, 7, 0, s->ask_kind == 3
                       ? "\x8a\xee\x8f\x80\x90\xfc\x81" "@" "\x83" "}" "\x83" "E"
                         "\x83" "X" "\x8e" "w" "\x8e\xa6" " |" "\x87" "@" "\x8e" "w"
                         "\x92\xe8\x89\xf0\x8f\x9c" "|" "\x81" "@" "\x95\xbd\x8d" "s"
                         "\x90\xfc" "(L)   "
                         "\x93\xaf\x88\xea\x90\xfc\x8f\xe3\x82\xcc\x90\xfc" "(R)"
                       : "\x8a\xee\x8f\x80\x90\xfc\x81" "@" "\x83" "}" "\x83" "E"
                         "\x83" "X" "\x8e" "w" "\x8e\xa6" " |" "\x87" "@" "\x8e" "w"
                         "\x92\xe8\x89\xf0\x8f\x9c" "|");
        } else {
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
        if (s->ask_kind == 1) {
            jw_ui_text(v, 8, 1, 7, 0, "\x90\xa1\x96" "@ = ");
            jw_ui_text(v, 38, 1, 7, 0,
                       "\x94" "C" "\x88\xd3\x90\xa1\x96" "@ " "\xcf\xb3\xbd" "(L) "
                       "\x91" "O" "\x89\xf1\x82\xc6\x93\xaf\x82\xb6" " " "\xcf\xb3\xbd"
                       "(R) ");
            sprintf(one, "[%10.3fmm]", s->ask_len);
            jw_ui_text(v, 54, 2, 7, 0xffff, one);
        } else {
            jw_ui_text(v, 8, 1, 7, 0, "\x8a" "p" "\x93" "x =");
            /* **The two are not the same bar.**  ＋ offers `｜0 度 ﾏｳｽ(L)｜`
             * and ／ offers `｜任意角度(L)｜` -- branches 9 and 19. */
            jw_ui_text(v, 32, 1, 7, 0, s->command == 2
                       ? "\x81" "b0 " "\x93" "x " "\xcf\xb3\xbd" "(L)" "\x81" "b" "\x91"
                         "O" "\x89\xf1\x82\xc6\x93\xaf\x82\xb6" " " "\xcf\xb3\xbd" "(R) "
                         "\x81" "b[F1] " "\xcf\xb3\xbd\x8a" "p" "\x93" "x" "\x81" "b"
                       : "\x81" "b" "\x94" "C" "\x88\xd3\x8a" "p" "\x93" "x(L)" "\x81"
                         "b" "\x91" "O" "\x89\xf1\x82\xc6\x93\xaf\x82\xb6" " "
                         "\xcf\xb3\xbd" "(R) " "\x81" "b[F1] " "\xcf\xb3\xbd\x8a" "p"
                         "\x93" "x" "\x81" "b");
            sprintf(one, "[%8.3f\xdf]", s->ask_ang);
            jw_ui_text(v, 50, 2, 7, 0xffff, one);
        }
        jw_ui_text(v, 15, 1, 7, 0, "        ");
        /* And the cursor -- the same green block the other fields have, in
         * the lower nine rows of the cell the next character goes in.
         * Measured on the original: x 112..119, y 7..15, which is column 15
         * with nothing typed. */
        fill(v, 112 + s->typed_n * 8, 7, 119 + s->typed_n * 8, 15, 4);
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
    } else if (s->io_stage) {
        /* 入出力 is not the only command with a file screen -- see
         * JwUi.file_bar. */
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
        } else if (s->io_stage == JW_IO_MERGE2) {
            /* **The second question is asked over the drawing**, not over
             * the list: the list is taken down, the other drawing is in
             * and drawn, and the two counts still say what they said. */
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
            jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
            jw_ui_text(v, 8, 1, 7, 0, JW_MERGE2_BAR);
        } else if (s->io_stage == JW_IO_NEWASK) {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
            jw_ui_text(v, 8, 1, 7, 0, JW_NEWASK_BAR);
        } else if (s->io_stage == JW_IO_DXFSET) {
            int i;

            jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
            jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
            jw_ui_text(v, 8, 1, 7, 0, JW_DXFSET_BAR);
            /* The black goes one pixel wider than the rule each side: a
             * line of the drawing that crossed at y 139 showed at x 243 and
             * 546 and nowhere else. */
            fill(v, 243, 39, 546, 200, 0);
            fill(v, 243, 231, 546, 296, 0);
            fill(v, 244, 39, 545, 40, 7);
            fill(v, 244, 199, 545, 200, 7);
            fill(v, 244, 231, 545, 232, 7);
            fill(v, 244, 295, 545, 296, 7);
            fill(v, 244, 41, 245, 198, 7);
            fill(v, 544, 41, 545, 198, 7);
            fill(v, 244, 233, 245, 294, 7);
            fill(v, 544, 233, 545, 294, 7);
            fill(v, 244, 72, 545, 72, 7);
            fill(v, 244, 104, 545, 104, 7);
            fill(v, 244, 136, 545, 136, 7);
            fill(v, 244, 168, 545, 168, 7);
            fill(v, 244, 264, 545, 264, 7);
            /* **One rule down the middle**, at x 344, from under each
             * heading to the foot of its box.  The rows of text blank the
             * bit of it they cross, because the original writes each name
             * padded out to column 46 -- so the padding is written here
             * too, and in that order. */
            fill(v, 344, 72, 344, 200, 7);
            fill(v, 344, 264, 344, 296, 7);
            /* and the strip along the bottom goes while the panel is up */
            fill(v, 0, 464, 639, 479, 0);
            jw_ui_text(v, 32, 4, 7, 0,
                       "\x8f" "o" "\x97\xcd\x8e\x9e\x82\xcc\x90\xdd\x92\xe8");
            jw_ui_text(v, 32, 16, 7, 0,
                       "\x93\xfc\x97\xcd\x8e\x9e\x82\xcc\x90\xdd\x92\xe8");
            for (i = 0; i < 5; i++) {
                const int row = JW_DXFSET[i].row;

                char one[48];

                sprintf(one, "%-15s", JW_DXFSET[i].name);
                jw_ui_text(v, 32, row, 7, 0, one);
                sprintf(one, "%-13s", JW_DXFSET[i].left);
                jw_ui_text(v, 47, row, 7, 0, one);
                jw_ui_text(v, 60, row, 7, 0, JW_DXFSET[i].right);
                jw_ui_text(v, 45, row, 7, 0,
                           s->dxf_set[i] ? "  " : JW_DXF_STAR);
                jw_ui_text(v, 58, row, 7, 0,
                           s->dxf_set[i] ? JW_DXF_STAR : "  ");
            }
        } else if (s->io_stage == JW_IO_DRIVE) {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
            jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
            jw_ui_text(v, 8, 1, 7, 0, JW_DRIVE_BAR);
        } else if (s->io_stage == JW_IO_DXF) {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
            jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
            jw_ui_text(v, 8, 1, 7, 0, JW_DXF_BAR);
            jw_ui_text(v, 73, 1, 7, 0, JW_BS_BACK);
            if (s->dxf_done) {
                static const struct { int col; const char *word; } C[4] = {
                    { 20, "\x90\xfc" }, { 35, "\x89" "~" },
                    { 50, "\x95\xb6\x8e\x9a" }, { 65, "\x93" "_" }
                };
                char one[32];
                int c;

                jw_ui_text(v, 20, 2, 6, 1, JW_DONE);
                for (c = 0; c < 4; c++) {
                    if (!s->dxf_n[c]) {
                        continue;
                    }
                    sprintf(one, "%s=%ld/%ld", C[c].word, s->dxf_n[c],
                            s->dxf_n[c]);
                    jw_ui_text(v, C[c].col, 3, 7, 0, one);
                }
            }
        } else if (s->io_stage == JW_IO_INDEX) {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
            jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
            if (s->ix_del) {
                jw_ui_text(v, 8, 1, 7, 0, JW_IXDEL_BAR);
            } else {
                jw_ui_text(v, 8, 1, 7, 0, JW_INDEX_BAR);
                jw_ui_text(v, 73, 1, 7, 0, JW_BS_BACK);
            }
        /* ⑦INDEX's body: the drawing area blacked, a yellow band above the
         * list and another below it with a ▲ and a ▼ at each end, the three
         * counts along row 2, and twenty names.
         *
         * Measured on the original: the bands are rows 3 and 29 (y 32..47
         * and 448..463) right across from x 122, the triangles are black on
         * them at columns 20 and 75, the names sit at column 22 of rows 4 to
         * 23 in white, and the one that is picked is black on cyan. */
        if (s->io_stage == JW_IO_INDEX) {
            char one[32];
            int i, marks = 0;

            fill(v, 122, 16, 638, 462, 0);
            fill(v, 128, 463, 638, 463, 0);
            fill(v, 122, 32, 638, 47, 6);
            fill(v, 122, 448, 638, 462, 6);
            jw_ui_text(v, 20, 3, 0, 2, "\x81\xa3");
            jw_ui_text(v, 75, 3, 0, 2, "\x81\xa3");
            jw_ui_text(v, 20, 29, 0, 2, "\x81\xa5");
            jw_ui_text(v, 75, 29, 0, 2, "\x81\xa5");
            for (i = 0; i < s->ix_n && i < 64; i++) {
                if (s->ix_mark[i]) {
                    marks++;
                }
            }
            sprintf(one, "\xcc\xa7\xb2\xd9 %d/%d", s->ix_n ? s->ix_sel + 1 : 0,
                    s->ix_n);
            jw_ui_text(v, 22, 2, 7, 0, one);
            sprintf(one, "\xcf\xb0\xb8=%d", marks);
            jw_ui_text(v, 40, 2, 7, 0, one);
            /* **`Max:20` is how many the list holds, not how many it has.**
             * A JW_FILE0.000 of five names still says 20, and one of
             * twenty-five is cut to twenty (tools/ixprobe.sh). */
            jw_ui_text(v, 70, 2, 7, 0, "Max:20");
            for (i = s->ix_top; i < s->ix_n && i - s->ix_top < 20; i++) {
                const int row = 4 + i - s->ix_top;

                jw_ui_text(v, 20, row, 6, 0, s->ix_mark[i] ? "*" : " ");
                /* The drawing that is open is first in the list and is the
                 * only one written in 5; the cyan is the picked row. */
                jw_ui_text(v, 22, row, i == 0 ? 5 : 7,
                           i == s->ix_sel ? 0xffffu : 0, s->ix_name[i]);
            }
        }
        } else if (s->io_stage == JW_IO_LOAD || s->io_stage == JW_IO_SAVE
                   || s->io_stage == JW_IO_MERGE || s->io_stage == JW_IO_KILL
                   || s->io_stage == JW_IO_MEMO || s->io_stage == JW_IO_OVER
                   || s->io_stage == JW_IO_WRITE || s->io_stage == JW_IO_MERGE1
                   || s->io_stage == JW_IO_KILLASK
                   || s->io_stage == JW_IO_NEWNAME
                   || s->io_stage == JW_IO_DXFNAME
                   || s->io_stage == JW_IO_DXFWRITE) {
            /* ①保存 keeps its list on the screen the whole way: ①選択確定,
             * the two memo lines, the overwrite question and 書き込みます
             * all change the top line and leave the rest where it is.
             * Measured -- ①選択確定 moves 8,815 pixels and 8,623 of them
             * are the top line. */
            /* ③合成 and ④削除 wear ②読込's face: the same list, the same
             * line.  Only ①保存 and its road look different. */
            /* ③ 新規 保存's own screen is still 保存's: the word beside
             * the free space says 保存, not 読込 (measured). */
            const int saving = s->io_stage == JW_IO_SAVE
                               || s->io_stage == JW_IO_MEMO
                               || s->io_stage == JW_IO_OVER
                               || s->io_stage == JW_IO_WRITE
                               || s->io_stage == JW_IO_NEWNAME;
            char one[96];
            int k, i;

            /* ②読込: the drawings on the disk, listed over the drawing
             * area.  Every column here was read off the original
             * (tools/seqcheck.sh "30 296 left" "110 8 left" "100 8 right",
             * with the string routine logged): the name at column 17 in
             * DOS's 8.3 shape, the drawing's own 図面名 at 33, and the row
             * that is picked in yellow on blue.  The panel on the left
             * stays; only the drawing area is given over to the list. */
            /* **The questions leave the list where it is.**  合成's two
             * and 削除's one do what 保存's do: the strip along the bottom
             * comes back, the ` 合成 … bytes free` line is blanked and the
             * drawing that was picked is named on it instead. */
            const int asking = s->io_stage == JW_IO_OVER
                               || s->io_stage == JW_IO_WRITE
                               || s->io_stage == JW_IO_MERGE1
                               || s->io_stage == JW_IO_KILLASK
                               || s->io_stage == JW_IO_DXFWRITE;

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
            } else if (s->io_stage == JW_IO_MERGE1
                       || s->io_stage == JW_IO_KILLASK) {
                jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
                jw_ui_text(v, 8, 1, 7, 0,
                           s->io_stage == JW_IO_MERGE1 ? JW_MERGE1_BAR
                           : s->io_stage == JW_IO_MERGE2 ? JW_MERGE2_BAR
                           : JW_IXDEL_BAR);
                if (s->io_stage == JW_IO_KILLASK) {
                    jw_ui_text(v, 73, 1, 7, 0, JW_BS_BACK);
                }
            } else if (s->io_stage == JW_IO_DXFWRITE) {
                jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
                jw_ui_text(v, 8, 1, 7, 0, JW_DXFWRITE_BAR);
            } else if (s->io_stage == JW_IO_NEWNAME
                       || s->io_stage == JW_IO_DXFNAME) {
                /* ③ 新規 保存 asks for a name.  Measured: the line is
                 * `[ESC]  ` and ` ◆ファイル名入力` at column 8, and the
                 * field is at row 5 column 17 with the drawing in hand
                 * already in it. */
                jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
                jw_ui_text(v, 8, 1, 7, 0,
                           " " "\x81\x9f\x83" "t" "\x83" "@" "\x83" "C"
                           "\x83\x8b\x96\xbc\x93\xfc\x97\xcd");
            } else if (saving) {
                jw_ui_text(v, 1, 1, 6, 0xffffu, JW_SAVE_BAR);
            } else {
                jw_ui_text(v, 1, 1, 7, 0,
                           s->file_bar ? s->file_bar
                           : s->io_stage == JW_IO_KILL ? JW_KILL_BAR
                           : JW_FILE_BAR);
            }
            if (!asking) {
                /* The two questions clear this line as well as the one
                 * below it -- measured: at 同名ﾌｧｲﾙが存在します the cyan
                 * path and count are gone. */
                jw_ui_text(v, 17, 2,
                           (unsigned)(s->file_path_fg ? s->file_path_fg : 5),
                           0, s->file_path ? s->file_path : JW_FILE_PATH);
                sprintf(one, "(%dfiles)", s->file_n);
                jw_ui_text(v, 70, 2, 5, 0, one);
            }
            if (s->io_stage == JW_IO_DXFWRITE) {
                /* `A:\NAME.dxf` on row 2, not row 3, and with no word in
                 * front of it. */
                char stem[16];

                memcpy(stem, s->save_name, sizeof stem - 1);
                stem[sizeof stem - 1] = 0;
                for (k = (int)strlen(stem) - 1;
                     k >= 0 && stem[k] == ' '; k--) stem[k] = 0;
                sprintf(one, "A:" "\x5c" "%s.dxf", stem);
                jw_ui_text(v, 18, 2, 7, 0xffffu, one);
            } else if (asking) {
                /* 保存ﾌｧｲﾙ=A:\NAME.JWC, on white.  Measured off the
                 * original the moment the question goes up.  合成 and 削除
                 * write `ﾌｧｲﾙ=` at column 20 instead, and 削除 in 6. */
                char stem[9];
                const int ask3 = s->io_stage == JW_IO_MERGE1
                                 || s->io_stage == JW_IO_KILLASK;

                memcpy(stem, s->file_n ? s->file_name[s->file_sel] : "        ", 8);
                stem[8] = 0;
                for (k = 7; k >= 0 && stem[k] == ' '; k--) stem[k] = 0;
                sprintf(one, "%s%s.JWC", ask3 ? JW_ASK_FILE : JW_SAVE_FILE,
                        stem);
                jw_ui_text(v, ask3 ? 20 : 17, 3,
                           s->io_stage == JW_IO_KILLASK ? 6 : 7, 0xffffu, one);
            } else {
                sprintf(one, "%s%s bytes free   ",
                        s->file_word ? s->file_word
                        : saving ? JW_FILE_SAVE
                        : s->io_stage == JW_IO_MERGE ? JW_FILE_MERGE
                        : s->io_stage == JW_IO_KILL ? JW_FILE_KILL
                        : JW_FILE_LOAD,
                        s->file_free);
                jw_ui_text(v, 17, 3, 7, 0, one);
                if (s->file_named) {
                    /* **Where 編集ファイル名 lands follows the word.**  The
                     * original writes the word, the free space and the rest
                     * as one string from column 17, so a longer word pushes
                     * this along: ` 読込    ` puts it at 51, ` DXFIN    ` at
                     * 52 and ` DXFOUT    ` at 53 -- all measured. */
                    const char *w = s->file_word ? s->file_word
                                    : saving ? JW_FILE_SAVE : JW_FILE_LOAD;
                    int at = 42, j;

                    for (j = 0; w[j]; j++) {
                        at++;
                        if ((unsigned char)w[j] >= 0x81) {
                            j++;        /* a double-byte character is two */
                            at++;
                        }
                    }
                    jw_ui_text(v, at, 3, 7, 0, JW_FILE_EDIT);
                    jw_ui_text(v, at + 4, 3, 7, 0, JW_FILE_NAMED);
                    jw_ui_text(v, at + 14, 3, 7, 0, "=");
                    jw_ui_text(v, at + 15, 3, 7, 0, s->open_name);
                }
            }
            /* **◆ファイル名入力 empties the box above the list.**  The
             * original leaves the name field alone on row 5 and nothing at
             * all on row 6 -- no date, no size, no title. */
            if (s->file_n && s->io_stage != JW_IO_NEWNAME
                && s->io_stage != JW_IO_DXFNAME
                && s->io_stage != JW_IO_DXFWRITE) {
                const int sel = s->file_sel;
                char stem[9];

                /* The box above the list: the file that is picked, with its
                 * date, its size and its title spelled out. */
                memcpy(stem, s->file_name[sel], 8);
                stem[8] = 0;
                for (k = 7; k >= 0 && stem[k] == ' '; k--) stem[k] = 0;
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
            if (s->io_stage == JW_IO_NEWNAME
                || s->io_stage == JW_IO_DXFNAME
                || s->io_stage == JW_IO_DXFWRITE) {
                char field[16];

                sprintf(field, "%-13.13s", s->save_name);
                jw_ui_text(v, 17, 5, 7, 0, field);
                /* and the green block where the next character goes, which
                 * is in front of what is there: the same exclusive-or block
                 * ◆ｍｅｍｏ入力 has, at column 17 and the cell's lower nine
                 * rows. */
                if (s->io_stage != JW_IO_DXFWRITE) {
                    /* ◆ｍｅｍｏ入力's block, exclusive-or and all: the
                     * letter under it comes out magenta (7 ^ 4 = 3), which
                     * is what the original's `S` does. */
                    for (i = 0; i < 9; i++) {
                        jw_line(v, 16 * 8 + s->save_name_n * 8, 4 * 16 + 7 + i,
                                16 * 8 + 7 + s->save_name_n * 8,
                                4 * 16 + 7 + i, 4, ROP_XOR, JW_STYLE_SOLID);
                    }
                }
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
                    /* **An empty list has no bands at all.**  多角形
                     * ④座標ファイル読込 finds no `*.txt`, and the
                     * original's slider is then the outer box and the two
                     * triangles and nothing else -- not even the black
                     * `rest of the track`, which this drew the whole way
                     * down with a white edge each side. */
                    if (!s->file_n) {
                        continue;
                    }
                    band(v, x0 + 1, 130, x0 + 15, a, 6);
                    band(v, x0 + 1, a, x0 + 15, b, 1);
                    band(v, x0 + 1, b, x0 + 15, c, 6);
                    band(v, x0 + 1, c, x0 + 15, 432, 0);
                    /* the file that is picked, one file's worth, inset by
                     * one more column and in its own colour.  **Only when
                     * there is one**: 多角形 ④座標ファイル読込 finds no
                     * `*.txt` at all and the original's slider is empty. */
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
                /* The row that is picked: 保存 and ④削除 draw it yellow on
                 * blue, 読込 and ③合成 cyan on blue.  All measured -- the
                 * original writes the name with fg 6 for 削除 and fg 5 for
                 * the other two (tools/origstr.sh). */
                const int fg = on ? (saving || s->io_stage == JW_IO_KILL
                                     || s->io_stage == JW_IO_KILLASK
                                     ? 6 : 5) : 7;
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
            if (s->io_done) {
                jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
            }
            jw_ui_text(v, 8, 1, 7, 0, JW_IO_FILE_BAR);
            jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91\x4f\x8d\x80");
            /* **`(A:/B:)`.**  It was `(A:)` here, from枝 273's picture --
             * which was taken with an older dosemu.  The emulator answers
             * INT 21h AH=0Eh with three drives, and with more than one the
             * original writes the long form: every road measured on
             * 2026-09-22 has `(A:/B:)` at column 46 (tools/origstr.sh
             * "30 296 left" "110 8 left", and again on the way back from
             * ③合成).  The pictures under tmp/branch are older than
             * dosemu.exe -- tools/check.sh says so about tmp/menus too. */
            jw_ui_text(v, 46, 2, 7, 0xffffu, "(A:/B:)");
        } else {
            jw_ui_text(v, 8, 1, 7, 0, JW_IO_PLOT_BAR);
        }
    } else if (s->command == 17 && s->again) {
        /* 変形 picked a second time: it goes on to its range.  Bytes from
         * tools/escroad.sh. */
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
        jw_ui_text(v, 8, 1, 7, 0,
                   "\x95\xcf\x8c" "`" "\x94\xcd\x88\xcd" "  " "\x8e" "n"
                   "\x93" "_" "\x83" "}" "\x83" "E" "\x83" "X" "\x8e" "w"
                   "\x8e\xa6" " ");
        jw_ui_text(v, 33, 1, 7, 0, "(L)" "\x90\xfc\xa5\x89" "~ ");
        jw_ui_text(v, 42, 1, 7, 0, " (R)");
        jw_ui_text(v, 46, 1, 7, 0, "\x90\xfc\xa5\x89" "~" "\xa5\x95\xb6\x8e\x9a");
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
        for (q = p; !s->band_off && q->col; q++) {
            /* Not when the band has been turned off: the box is cleared to
             * make room for what the command writes there, and with the
             * command's band gone the two counts stay where they are. */
            if (q->row != 1 && q->col <= 15) {
                fill(v, 1, 17, 120, 47, 4);
                break;
            }
        }
        /* 図形 ②読込's ②角  度 and ①倍率指定X,Y.  Both take the top line
         * over while they ask, and src/zukei.h holds what the original
         * writes.  Two of the scale line's pieces are **numbers**, so they
         * are written from the state instead of replayed:
         *
         *     角度   `[  90.000ﾟ]` at column 50 of row 2, and the field at
         *            column 15 of row 1
         *     倍率   `[     1.000` at column 56 and `,     1.000` at 67, and
         *            the field at column 22
         *
         * The brackets hold what 前回と同じ would use -- 90 degrees and 1,1
         * until something has been entered -- and not the angle in force. */
        if (s->command == 27 && s->zukei_ask) {
            const JwZukei *z;
            char one[32];

            fill(v, 0, 0, 639, 15, 0);
            top_clear();
            for (z = JW_ZUKEI; z->stage; z++) {
                if (z->stage != s->zukei_ask) {
                    continue;
                }
                if (s->zukei_ask == JW_ZUKEI_MAG
                    && (z->col == 56 || z->col == 67)) {
                    continue;   /* written below, from the state */
                }
                jw_ui_text(v, z->col, 1, (unsigned)z->fg, (unsigned)z->bg,
                           z->text);
            }
            /* The green block where the next character goes, the same one
             * ◆図形名入力 has: eight wide, rows 7 to 15, at the field's own
             * column plus what has been typed. */
            {
                const int at = (s->zukei_ask == JW_ZUKEI_ANG ? 15 : 22)
                             - 1 + s->zukei_typed_n;

                fill(v, at * 8, 7, at * 8 + 7, 15, 4);
            }
            if (s->zukei_ask == JW_ZUKEI_ANG) {
                sprintf(one, "[%8.3f" "\xdf" "]", (double)s->zukei_prev_ang);
                jw_ui_text(v, 50, 2, 7, 0xffffu, one);
                if (s->zukei_typed_n) {
                    jw_ui_text(v, 15, 1, 7, 0, s->zukei_typed);
                }
            } else {
                sprintf(one, "[%10.3f", (double)s->zukei_mx);
                jw_ui_text(v, 56, 1, 7, 0, one);
                sprintf(one, ",%10.3f", (double)s->zukei_my);
                jw_ui_text(v, 67, 1, 7, 0, one);
                if (s->zukei_typed_n) {
                    jw_ui_text(v, 22, 1, 7, 0, s->zukei_typed);
                }
            }
            /* and nothing of the line 図形 came up with, the same way the
             * road's own lines drop it */
            while (p->col) {
                p++;
            }
        }
        /* 図形 ①登録 replaces the line 図形 came up with, and keeps
         * replacing it the whole way to `書き込みます`.  src/zukei.h holds
         * what the original writes at each step. */
        if (s->zukei && s->command == 27 && !s->zukei_ask) {
            const JwZukei *z;
            /* The first corner taken with the **right** button says
             * `線･円･文字` and offers ③文字種; with the left one it says
             * `<線･円>` and stops at ②線種色.  src/zukei.h keeps the pair as
             * stages 2 and 12, the way src/span.h keeps 消去's. */
            const int st = s->zukei == 2 && s->with_text ? JW_ZUKEI_RANGE2
                         : s->zukei;

            for (z = JW_ZUKEI; z->stage; z++) {
                if (z->stage == st) {
                    jw_ui_text(v, z->col, 1, (unsigned)z->fg,
                               (unsigned)z->bg, z->text);
                }
            }
            if (s->zukei == JW_ZUKEI_NAME) {
                /* the name, and the green block where the next character
                 * goes -- the field is nine cells at column 34 */
                const int n = s->zukei_name_n < 9 ? s->zukei_name_n : 9;

                if (n) {
                    jw_ui_text(v, 34, 1, 7, 0, s->zukei_name);
                }
                fill(v, 33 * 8 + n * 8, 7, 33 * 8 + 7 + n * 8, 15, 4);
            }
            /* and nothing of the line 図形 came up with.  Not `p = q`:
             * the loop above breaks early when the prompt writes in the
             * counts box, and 図形's does. */
            while (p->col) {
                p++;
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
            /* **A press on the top row clears the band with it.**  測定
             * comes up with `【m】 (3)桁` under its line and ①距離 leaves
             * row 2 empty; what the press writes there is in src/item.h
             * like everything else, so the prompt's own rows 2 and 3 are
             * skipped whenever a cell has been pressed. */
            if ((s->top_item || s->band_off) && p->row != 1) {
                continue;
            }
            /* 面取's ① has gone round to another shape: the line is
             * that shape's, not the one the menu item came up with.  Bytes
             * from tools/cycle.sh. */
            if (s->command == 8 && s->chamfer && p->row == 1 && p->col == 8) {
                static const char *const SHAPE[3] = {
                    "\x91\xce\x8f\xdb\x90\xfc" "(" "\x82" "`)" "\x83" "}"
                    "\x83" "E" "\x83" "X" "\x8e" "w" "\x8e\xa6" " |" "\x87"
                    "@" "\x81" "y" "\x8a\xdb\x96\xca\x81" "z|" "\x87" "A"
                    "\x94\xbc\x8c" "a= 30.000|" "\x87" "B"
                    "\x88\xea\x8a\x87\x8f\x88\x97\x9d" "|",
                    "\x91\xce\x8f\xdb\x90\xfc" "(" "\x82" "`)" "\x83" "}"
                    "\x83" "E" "\x83" "X" "\x8e" "w" "\x8e\xa6" " |" "\x87"
                    "@" "\x81" "y" "\x82" "k" "\x96\xca\x81" "z|" "\x87"
                    "A(A),(B)" "\x95\xd3" "= 30.000, 30.000|",
                    "\x91\xce\x8f\xdb\x90\xfc" "(" "\x82" "`)" "\x83" "}"
                    "\x83" "E" "\x83" "X" "\x8e" "w" "\x8e\xa6" " |" "\x87"
                    "@" "\x81" "y" "\x91\xc8\x89" "~" "\x96\xca\x81" "z|"
                    "\x87" "A" "\x94\xbc\x8c" "a= 30.000|" "\x87" "B"
                    "\x95\xce\x95\xbd\x97\xa6" "=" "\x8e\xa9\x93\xae" "|",
                };
                double n[2];

                n[0] = n[1] = s->gap_chamfer;
                put_fixed(out, sizeof out, SHAPE[s->chamfer - 1], n,
                          s->chamfer == 2 ? 2 : 1, s->dec_drawing);
                jw_ui_text(v, p->col, p->row, (unsigned)p->fg,
                           (unsigned)p->bg, out);
                continue;
            }
            /* 複線, 面取 and ２線 carry a number of the program's own in
             * their line, and how many decimals it is shown to is the
             * drawing's.  See put_fixed. */
            if (p->row == 1 && p->col == 8
                && (s->command == 5 || s->command == 8 || s->command == 9)) {
                double n[2];
                int k = 0;

                if (s->command == 5) {
                    n[k++] = s->gap;
                } else if (s->command == 8) {
                    n[k++] = s->gap_chamfer;
                } else {
                    n[k++] = s->gap_two[0];
                    n[k++] = s->gap_two[1];
                }
                put_fixed(out, sizeof out, p->text, n, k, s->dec_drawing);
                text = out;
            }
            jw_ui_text(v, p->col, p->row, (unsigned)p->fg, (unsigned)p->bg,
                       text);
        }
        /* **入出力 の行の `④自動保存(無)` は保存間隔がついていると
         * `(有)` になります**（測定：①保存間隔 に 30 を入れてから行に
         * 戻ると 有）。行は src/prompt.h の録画なので、その一字だけ
         * 上から書きます（桁 59）。 */
        if (s->command == 30 && !s->top_item && s->auto_interval > 0) {
            jw_ui_text(v, 59, 1, 7, 0, "\x97L");
        }
        /* **図形 picked a second time puts up its own screen.**  The
         * drawing area from row 2 to row 24 goes and row 2 says what there
         * is to show.  Measured with tools/escroad.sh on SAMPLE2, where
         * every pixel of y 32..383 from x 122 to x 638 is black afterwards;
         * the strip below it -- the drawing's title block -- is left alone.
         * The bar along the top is the one 図形 came up with, so this goes
         * after the prompt and before whatever cell was pressed. */
        if (s->command == 27 && s->again) {
            fill(v, 122, 16, 638, 383, 0);
            /* `登録図形がありません（グループ変更）`, the original's bytes.
             * It goes only while nothing on the bar has been pressed: the
             * press puts the band's own labels back over it -- and ①登録,
             * which has its own road and no cell of the table, takes it
             * away too. */
            if (!s->top_item && !s->zukei) {
                jw_ui_text(v, 22, 2, 7, 0,
                           "\x93" "o" "\x98" "^" "\x90" "}" "\x8c" "`"
                           "\x82\xaa\x82\xa0\x82\xe8\x82\xdc\x82\xb9\x82\xf1\x81" "i"
                           "\x83" "O" "\x83\x8b\x81" "[" "\x83" "v"
                           "\x95\xcf\x8d" "X" "\x81" "j");
            }
        }
        /* 文字 ④設定 and 文編集 ④ put up the 文字種類 table, and it hides
         * what is under it: SAMPLE0's frame runs down x 161 from y 139 to
         * y 419 and the original shows it again only from y 299.  The strip
         * along the bottom of the screen goes with it. */
        if ((s->command == 13 || s->command == 28) && s->top_item == 4) {
            fill(v, 0, 464, 639, 479, 0);
            fill(v, 147, 87, 612, 298, 0);
        }
        /* ｵﾌﾟｼｮﾝ ①建具平面 ②断面 ③立面: sixteen shapes, two to a row,
         * eight rows 48 pixels tall, with a rule between each pair and one
         * down the middle at x 380.  All of the strip along the bottom goes
         * but `電卓[Z 範囲記憶`, which the original leaves standing. */
        if (s->command == 29 && s->top_item >= 1 && s->top_item <= 3
            && s->opt_stage == JW_OPT_PLAN) {
            fill(v, 122, 17, 638, 462, 0);
            fill(v, 122, 463, 638, 478, 0);
        }
        /* 図形 ④ｸﾞﾙｰﾌﾟ変 takes the whole drawing area, and so does the
         * list of figures 図形 ①登録 puts up once its base point is down. */
        if ((s->command == 27 && s->top_item == 4) || zukei_list_up(s)) {
            fill(v, 0, 464, 639, 479, 0);
            fill(v, 122, 16, 638, 462, 0);
        }
        if (s->command == 27 && s->zukei == JW_ZUKEI_WRITE) {
            /* `書き込みます` puts the drawing back and names the file it is
             * about to write, black on white. */
            char one[48];

            sprintf(one, " A:ZUKEI_1_" "\x5c" "%s.JWK ", s->zukei_name);
            jw_ui_text(v, 18, 2, 7, 0xffffu, one);
        }
        if (zukei_list_up(s)) {
            /* The group's path, how many cells the list has, and the cells
             * themselves.  ①登録's first cell makes a new figure; ②読込
             * has only the figures.
             *
             * `数=` is the **number of cells**, not of figures: an empty
             * group being registered into says 数=1 with only 新規登録 in
             * it, the same group with one figure says 数=2, and ②読込 on
             * that group says 数=1.  Measured on all four. */
            const int newcell = s->zukei != JW_ZUKEI_LIST;
            char one[48];
            int i;

            jw_ui_text(v, 10, 30, 7, 0, "A:ZUKEI_1_");
            sprintf(one, " " "\x90" "}" "\x8c" "` 1   " "\x90\x94" "=%d",
                    s->zukei_list_n + (newcell ? 1 : 0));
            jw_ui_text(v, 60, 2, 7, 0, one);
            if (newcell) {
                jw_ui_text(v, 20, 5, 7, s->zukei_sel == 0 ? 0xffffu : 0,
                           " " "\x90" "V" "\x8b" "K" "\x93" "o" "\x98" "^ ");
            }
            for (i = 0; i < s->zukei_list_n; i++) {
                const int at = i + (newcell ? 1 : 0);

                if (at >= 50) {
                    break;
                }
                sprintf(one, " %-9s", s->zukei_list[i]);
                jw_ui_text(v, 20 + 12 * (at % 5), 5 + 2 * (at / 5), 7,
                           s->zukei_sel == at ? 0xffffu : 0, one);
            }
        }
        /* 図形 ②読込, with a figure in hand: the angle it goes in at, in the
         * band beside the counts.  `   0.000` and a degree sign, nine cells
         * at column 47, black on white. */
        /* **Only until the first one is down.**  Putting a figure down
         * writes the two counts back over the band, and the angle is not
         * written again: the original's own writes at that step are the
         * counts, their label, the new line and [BS]前項, and nothing at
         * column 47. */
        /* **Not while one of the fields is open.**  The original clears the
         * band then and shows only the brackets at column 50. */
        if (s->command == 27 && s->zukei == JW_ZUKEI_PUT && !s->zukei_ask) {
            /* **One or the other, not both.**  With ④ﾏｳｽ角 up the angle is
             * whatever the mouse will say, so the original takes the number
             * away and writes `Ｘ 方向` or `Ｙ 方向` at column 64 instead:
             * after that press row 24 has ink only from x 504 to 559, where
             * before it had the number from 368 to 439.  ⑤仮表示's `無` at
             * column 76 goes with either. */
            /* ①倍率指定X,Y's pair, at column 32 and fifteen wide:
             * `[  2.00,  2.00]`.  It is there once a scale has been entered
             * and not before -- the band on the way in has only the angle. */
            if (s->zukei_mx != 1.0f || s->zukei_my != 1.0f) {
                char two[24];

                sprintf(two, "[%6.2f,%6.2f]", (double)s->zukei_mx,
                        (double)s->zukei_my);
                jw_ui_text(v, 32, 2, 7, 0xffffu, two);
            }
            if (s->zukei_mouse) {
                jw_ui_text(v, 64, 2, 7, 0xffffu,
                           s->zukei_mouse == 1
                               ? "\x82" "w \x95\xfb\x8c\xfc"
                               : "\x82" "x \x95\xfb\x8c\xfc");
            } else {
                char one[16];

                sprintf(one, "%8.3f" "\xdf", (double)s->zukei_ang);
                jw_ui_text(v, 47, 2, 7, 0xffffu, one);
            }
            if (s->zukei_noghost) {
                jw_ui_text(v, 76, 2, 7, 0xffffu, "\x96\xb3");
            }
        }
        /* 寸法 ⑨設定's panel.  The box goes up first and the words over
         * it -- the rule at x 410 is broken where each value is written,
         * which is the original telling us the order. */
        if (s->command == 14 && s->top_item == 9) {
            static const int RULE[8] = { 104, 136, 168, 200, 232, 264, 296, 328 };
            int k;

            fill(v, 0, 464, 639, 479, 0);
            fill(v, 238, 71, 502, 362, 0);
            fill(v, 239, 71, 501, 72, 7);
            fill(v, 239, 361, 501, 362, 7);
            fill(v, 239, 71, 240, 362, 7);
            fill(v, 500, 71, 501, 362, 7);
            fill(v, 410, 71, 410, 362, 7);
            for (k = 0; k < 8; k++) {
                fill(v, 239, RULE[k], 501, RULE[k], 7);
            }
        }
        /* A press on the top row that the command has no answer for yet.  The
         * original does not clear the row for these -- it writes over part of
         * what is already there -- so these go on after the prompt and before
         * the stages, in the order the original wrote them.  src/item.h. */
        /* ｵﾌﾟｼｮﾝ ①建具平面, once one of the sixteen has been pressed: the
         * shapes go, the drawing comes back, and the line asks for a 基準線.
         * src/optplan.h holds what the original writes at each step, and the
         * band's numbers are written here because they are values:
         *
         *   基準線 waiting  内法寸法 at column 29 and 基準線との間隔 at 42,
         *                   both eight wide and black on white
         *   位置 waiting    the 間隔 again at column 32, then ` 中心 ` at 44
         *                   and ` 内法 ` at 55, and two pairs of spaces in
         *                   colour 6 at 68 and 77
         */
        if (s->command == 29 && s->opt_stage >= JW_OPT_BASE) {
            const JwOptPlan *q;
            char one[32];

            fill(v, 0, 0, 639, 15, 0);
            top_clear();
            for (q = JW_OPTPLAN; q->stage; q++) {
                if (q->stage == s->opt_stage) {
                    jw_ui_text(v, q->col, 1, (unsigned)q->fg,
                               (unsigned)q->bg, q->text);
                }
            }
            if (s->opt_stage != JW_OPT_WHERE) {
                sprintf(one, "%8.2f", s->opt_inner);
                jw_ui_text(v, 29, 2, 7, 0xffffu, one);
                sprintf(one, "%8.2f", s->opt_gap);
                jw_ui_text(v, 42, 2, 7, 0xffffu, one);
            } else {
                sprintf(one, "%7.2f ", s->opt_gap);
                jw_ui_text(v, 32, 2, 7, 0xffffu, one);
                jw_ui_text(v, 44, 2, 7, 0xffffu, " \x92\x86\x90S ");
                jw_ui_text(v, 55, 2, 7, 0xffffu, " \x93\xe0\x96@ ");
                jw_ui_text(v, 68, 2, 6, 0, "  ");
                jw_ui_text(v, 77, 2, 6, 0, "  ");
            }
        }
        if (s->top_item && !(s->command == 29
                             && s->opt_stage >= JW_OPT_BASE)) {
            const JwItem *r;

            /* **The row is cleared first.**  A fill leaves no string for
             * the capture to record, so it is not in src/item.h and had to
             * be measured: 面取 ①【丸面】 puts up a shorter line than the
             * one 面取 came up with, and the original has nothing after it
             * where writing over the prompt left `|④一括処理|` standing.
             * Clearing took the table from 201 branches out to 131. */
            fill(v, 0, 0, 639, 15, 0);
            top_clear();
            for (r = JW_ITEM; r->command; r++) {
                if (r->command != s->command || r->item != s->top_item
                    || r->right != s->top_right) {
                    continue;
                }
                /* Rows 25 and 30 are the chrome's own -- `サブ画面 表示` and
                 * the strip along the bottom.  The original writes them
                 * again after a redraw and they are in the table with
                 * everything else, but the chrome has already put them
                 * there, and replaying them takes the rule at y 384 and the
                 * two blitted characters of `電卓` with them. */
                if (r->row == 25 || r->row == 30 || r->row == 0) {
                    continue;
                }
                /* **文字 ④設定's ten rows come out of the drawing.**  What
                 * src/item.h has there is SAMPLE0's own numbers, and the
                 * panel has to show the ones the drawing carries -- and the
                 * ones a press on it has just changed. */
                if ((s->command == 13 || s->command == 28) && s->top_item == 4
                    && r->row >= 9 && r->row <= 18) {
                    continue;
                }
                /* **The counts box is painted before each thing that goes
                 * in it.**  Both the counts and what a command puts in
                 * their place are written transparently -- black letters on
                 * the green the box is filled with -- so one over the other
                 * leaves both readable.  The fill leaves no string and so
                 * is not in the table; a group starts at row 2, which is
                 * the top of the box.  See counts(). */
                if (r->row == 2 && r->col <= 15) {
                    fill(v, 1, 17, 120, 47, 4);
                }
                /* ⑤寸法値's own line carries the same `[1]` -- the
                 * 小数点以下 setting, in the same columns. */
                if (s->command == 14 && s->top_item == 5 && r->col == 8) {
                    char one[160];
                    int j;

                    strncpy(one, r->text, sizeof one - 1);
                    one[sizeof one - 1] = 0;
                    for (j = 0; one[j]; j++) {
                        if (is_lead((unsigned char)one[j]) && one[j + 1]) {
                            j++;
                            continue;
                        }
                        if (one[j] == '[' && one[j + 1] >= '0'
                            && one[j + 1] <= '9' && one[j + 2] == ']') {
                            one[j + 1] = (char)('0' + (s->dim_dec & 15));
                        }
                    }
                    jw_ui_text(v, r->col, r->row, (unsigned)r->fg,
                               (unsigned)r->bg, one);
                    continue;
                }
                /* **寸法 ⑥点's line carries two numbers**: the 点のペン
                 * No. in 点(No.n) and the drawing's own count of real
                 * points.  And once one has been put down the original
                 * writes [ESC] in column 1 (measured: after one press the
                 * line reads `[ESC]  点(No.1) … 点数 17`). */
                if (s->command == 14 && s->top_item == 6 && r->col == 8) {
                    char one[160];
                    double n[2];

                    n[0] = s->dim_pen_point ? s->dim_pen_point : JW_DIM_PEN;
                    n[1] = (double)s->dim_points;
                    put_numbers(one, sizeof one, r->text, n, 2, 0);
                    jw_ui_text(v, r->col, r->row, (unsigned)r->fg,
                               (unsigned)r->bg, one);
                    if (s->dim_did) {
                        jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                    }
                    continue;
                }
                /* ⑦矢印 puts the same [ESC] up once it has drawn one. */
                if (s->command == 14 && s->top_item == 7 && s->dim_did
                    && r->row == 1) {
                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                }
                /* **寸法 ⑨設定's panel is state, not a recording.**  Its
                 * ten rows and the three cells of its own line all change
                 * when they are pressed, so the numbers and the words in
                 * 【】 are written from what they are now. */
                if (s->command == 14 && s->top_item == 9) {
                    char one[128], num[24];
                    const char *word = 0;

                    if (r->row == 1 && r->col == 8) {
                        sprintf(one, "%s%s%s%s%s%d%s",
                                JW_DIMSET_BAR1,
                                s->dim_end ? "\x96\xee\x88\xf3"
                                           : " " "\x93" "_ ",
                                JW_DIMSET_BAR2,
                                s->dim_unit % 3 ? "\x82\x8d" : "mm",
                                JW_DIMSET_BAR3, s->dim_dec, JW_DIMSET_BAR4);
                        jw_ui_text(v, r->col, r->row, (unsigned)r->fg,
                                   (unsigned)r->bg, one);
                        continue;
                    }
                    if (r->col == 32 && (r->row == 6 || r->row == 8)) {
                        sprintf(num, "%d", r->row == 6 ? s->dim_pen_line
                                                       : s->dim_pen_point);
                        put_last(one, sizeof one, r->text, num);
                        jw_ui_text(v, r->col, r->row, (unsigned)r->fg,
                                   (unsigned)r->bg, one);
                        continue;
                    }
                    if (r->col == 32 && (r->row == 10 || r->row == 12
                                         || r->row == 14 || r->row == 16)) {
                        sprintf(num, "%.1f",
                                r->row == 10 ? s->dim_gap
                                : r->row == 12 ? s->dim_ext
                                : r->row == 14 ? s->dim_arrow : s->dim_angle);
                        put_last(one, sizeof one, r->text, num);
                        jw_ui_text(v, r->col, r->row, (unsigned)r->fg,
                                   (unsigned)r->bg, one);
                        continue;
                    }
                    if (r->row == 18 && r->col == 55) {
                        word = s->dim_rphi ? "\x8c\xe3" : "\x91" "O";
                    } else if (r->row == 20 && r->col == 57) {
                        word = s->dim_comma ? "\x96\xb3" : "\x97" "L";
                    } else if (r->row == 22 && r->col == 57) {
                        word = s->dim_zero ? "\x97" "L" : "\x96\xb3";
                    }
                    if (word) {
                        jw_ui_text(v, r->col, r->row, (unsigned)r->fg,
                                   (unsigned)r->bg, word);
                        continue;
                    }
                }
                jw_ui_text(v, r->col, r->row, (unsigned)r->fg,
                           (unsigned)r->bg, r->text);
            }
            /* **A field of blanks on the top row is a field**, and the
             * original puts its green cursor in the first cell of it: the
             * lower nine rows, the same block ＋'s 寸法 and 複線's number
             * have.  A fill leaves no string, so which cell it is has to
             * come from somewhere -- and the run of **eight** spaces the
             * item writes is exactly the field it is in.  Eight and no
             * other: 文編集 ⑤整理 writes seven at column 1 to take `[ESC]`
             * off, and that is not a field. */
            for (r = JW_ITEM; r->command; r++) {
                if (r->command == s->command && r->item == s->top_item
                    && r->right == s->top_right && r->row == 1
                    && strspn(r->text, " ") == 8 && !r->text[8]) {
                    /* **寸法 ③任意方向 types into that field.**  Each
                     * character goes in its own cell with two spaces after
                     * it, the way ⑥回転's angle does, and the green block
                     * moves to the cell the next one will take. */
                    int x = (r->col - 1) * 8;

                    if (s->command == 14 && s->top_item == 3) {
                        int n;

                        for (n = 0; n < s->typed_n && n < 8; n++) {
                            char one[4];

                            one[0] = s->typed[n];
                            one[1] = one[2] = ' ';
                            one[3] = 0;
                            jw_ui_text(v, r->col + n, 1, 7, 0, one);
                        }
                        n = s->typed_n < 8 ? s->typed_n : 8;
                        x += n * 8;
                    }
                    fill(v, x, 7, x + 7, 15, 4);
                }
            }
        }
        /* And the box's rules, **after** the words: each one crosses a
         * column the words are written in, and a write paints its own cell
         * black, so a rule drawn first comes out in pieces.  Measured off
         * the original -- the pixels src/item.h's text does not account
         * for: the top two rows thick, one under the header, the bottom
         * two, the sides two columns each and five single rules between. */
        /* 寸法 ⑨設定's field, **after** src/item.h has been replayed:
         * the line it writes is its own, not the panel's. */
        if (s->command == 14 && s->top_item == 9 && s->dim_edit) {
            const int row = s->dim_edit;
            int j;

            jw_ui_text(v, 54, row, 7, 0, "        ");
            if (s->dim_typed_n) {
                jw_ui_text(v, 54, row, 7, 0, s->dim_typed);
            }
            j = (53 + s->dim_typed_n) * 8;
            fill(v, j, (row - 1) * 16 + 7, j + 7, (row - 1) * 16 + 15, 4);
            fill(v, 0, 0, 639, 15, 0);
            top_clear();
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
            jw_ui_text(v, 8, 1, 7, 0,
                       "     " "\x95\xcf\x8d" "X" "\x92" "l"
                       "\x82\xf0\x93\xfc\x97\xcd");
        }
        /* ④自動保存's band.  Drawn over src/item.h's recording, because the
         * four are state now. */
        if (s->command == 30 && s->top_item == 4 && !s->io_stage) {
            char one[32];
            int i;

            if (s->auto_edit != 1) {
                sprintf(one, "%d" "\x95" "b", s->auto_interval);
                jw_ui_text(v, 20, 2, 7, 0xffffu, one);
            }
            if (s->auto_edit != 2) {
                /* the name is kept as its stem; `.JWC` is the original's
                 * own and does not change (measured: `X` typed over it
                 * gives `[XAUTO.JWC]`) */
                sprintf(one, "[%s.JWC]", s->auto_name);
                jw_ui_text(v, 28, 2, 7, 0xffffu, one);
            }
            if (s->auto_edit != 3) {
                sprintf(one, "[%s]", s->auto_path);
                jw_ui_text(v, 43, 2, 7, 0xffffu, one);
            }
            if (s->auto_edit != 4) {
                sprintf(one, "%d" "\x95" "b", s->auto_wait);
                jw_ui_text(v, 66, 2, 7, 0xffffu, one);
            }
            if (s->auto_edit) {
                static const int AT[5] = { 0, 20, 28, 43, 66 };
                const int at = AT[s->auto_edit];
                int j;

                /* **The whole band goes**, not just the cell: the original
                 * leaves row 2 black from the drawing area's left edge with
                 * nothing on it but the green block. */
                /* The screen's own right-hand border stays: x 639 is
                 * white from the rule at the top down. */
                fill(v, 122, 16, 638, 31, 0);
                if (s->auto_typed[0]) {
                    jw_ui_text(v, at, 2, 7, 0, s->auto_typed);
                }
                /* the block is exclusive-or, so the letter under it shows
                 * through -- `A` under it comes out magenta */
                j = (at - 1 + s->auto_typed_n) * 8;
                for (i = 0; i < 9; i++) {
                    jw_line(v, j, 16 + 7 + i, j + 7, 16 + 7 + i, 4,
                            ROP_XOR, JW_STYLE_SOLID);
                }
            }
        }
        /* 測定's unit and decimals.  Drawn last, over whatever src/prompt.h
         * or src/item.h put there, because they are state and those two are
         * recordings. */
        /* **The band goes when a cell is pressed.**  測定 comes up with
         * `ｍ (3)桁` under its line and ①距離 leaves row 2 empty; only
         * ⑥単位 and ⑦小数点以下 put it back, and those two are not
         * `top_item` presses (src/main_wasm.c). */
        if (s->command == 15 && !s->top_item) {
            static const char *const UNIT[3] = {
                " " "\x82\x8d" " ", " cm ", " mm "
            };
            char one[16];

            jw_ui_text(v, 53, 2, 7, 0xffffu, UNIT[s->meas_unit % 3]);
            sprintf(one, "(%d)" "\x8c\x85" " ", s->meas_dec);
            jw_ui_text(v, 61, 2, 7, 0xffffu, one);
        }
        /* The ten rows of 文字 ④設定's table.  Every column was read off
         * the original's own writes (tools/origstr.sh "90 264 left"
         * "428 8 left"): the name and the pen at column 20, the width at
         * 42, two spaces at 51, the height at 53, the gap at 62, and either
         * how many texts use it at 71 or a `-` at 75.  A type that is used
         * has a `*` at 22, and the one being drawn with has `●` at 20. */
        if ((s->command == 13 || s->command == 28) && s->top_item == 4) {
            char one[64];
            int k;

            for (k = 1; k <= 10; k++) {
                const int row = 8 + k;

                sprintf(one, "   [F%2d]        %d     ", k,
                        s->char_tab_pen[k]);
                jw_ui_text(v, 20, row, 7, 0, one);
                sprintf(one, "%6.1f   ", s->char_tab_w[k] / 10.0);
                jw_ui_text(v, 42, row, 7, 0, one);
                jw_ui_text(v, 51, row, 7, 0, "  ");
                sprintf(one, "%6.1f   ", s->char_tab_h[k] / 10.0);
                jw_ui_text(v, 53, row, 7, 0, one);
                sprintf(one, "%6.1f   ", s->char_tab_gap[k] / 10.0);
                jw_ui_text(v, 62, row, 7, 0, one);
                if (s->char_tab_use[k]) {
                    sprintf(one, "%5d ", s->char_tab_use[k]);
                    jw_ui_text(v, 71, row, 7, 0, one);
                    jw_ui_text(v, 22, row, 7, 0, "*");
                } else {
                    jw_ui_text(v, 75, row, 7, 0, "-");
                }
            }
            if (s->char_type >= 1 && s->char_type <= 10) {
                jw_ui_text(v, 20, 8 + s->char_type, 7, 0, "\x81\x9c");
            }
            /* The cell being changed: blanked, with what has been typed in
             * it and the green block after that.  The four fields are at
             * columns 31, 40, 51 and 62 -- measured, and not where the
             * numbers themselves are written.  The line along the top says
             * which column it is and what it will take, and is written over
             * the one src/item.h put there. */
            if (s->char_edit) {
                static const int FIELD[5] = { 0, 31, 40, 51, 62 };
                const int at = FIELD[s->char_edit];
                const int row = 8 + s->char_edit_row;
                int j;

                jw_ui_text(v, at, row, 7, 0, "        ");
                if (s->char_edit_n) {
                    jw_ui_text(v, at, row, 7, 0, s->char_edit_typed);
                }
                j = (at - 1 + s->char_edit_n) * 8;
                fill(v, j, (row - 1) * 16 + 7, j + 7, (row - 1) * 16 + 15, 4);

                fill(v, 0, 0, 639, 15, 0);
                top_clear();
                jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
                jw_ui_text(v, 8, 1, 7, 0, "      " "\x95\xb6\x8e\x9a" " ");
                if (s->char_edit == 1) {
                    jw_ui_text(v, 19, 1, 7, 0,
                               "\x83" "y" "\x83\x93\x81" "i" "\x90" "F"
                               "\x81" "j1" "\x81" "`7 ");
                    jw_ui_text(v, 34, 1, 7, 0, "\x95\xcf\x8d" "X");
                } else if (s->char_edit == 4) {
                    jw_ui_text(v, 19, 1, 7, 0, "\x8a\xd4\x8a" "u");
                    jw_ui_text(v, 23, 1, 7, 0,
                               "( -1.0" "\x81" "`500)  " "\x90" "}"
                               "\x96\xca\x90\xa1\x96" "@(mm) ");
                    jw_ui_text(v, 50, 1, 7, 0, "\x95\xcf\x8d" "X");
                } else {
                    jw_ui_text(v, 19, 1, 7, 0,
                               s->char_edit == 2 ? "\x95\x9d"
                                                 : "\x8d\x82");
                    jw_ui_text(v, 21, 1, 7, 0,
                               "(  0.1" "\x81" "`500)  " "\x90" "}"
                               "\x96\xca\x90\xa1\x96" "@(mm) ");
                    jw_ui_text(v, 48, 1, 7, 0, "\x95\xcf\x8d" "X");
                }
            }
        }
        if ((s->command == 13 || s->command == 28) && s->top_item == 4) {
            static const int RULE[5] = { 236, 308, 396, 484, 556 };
            int k;

            fill(v, 147, 87, 612, 88, 7);
            fill(v, 147, 120, 612, 120, 7);
            fill(v, 147, 296, 612, 297, 7);
            fill(v, 147, 87, 148, 297, 7);
            fill(v, 611, 87, 612, 297, 7);
            for (k = 0; k < 5; k++) {
                fill(v, RULE[k], 87, RULE[k], 297, 7);
            }
        }
        /* **A press that redrew the drawing area wiped what it had just
         * written there.**  図形 ②読込 and ⑤削除 say so in the strip along
         * the bottom (`描画中断`, kept in src/item.h as a row-0 marker),
         * and their screens have neither the full stop at row 24 nor the
         * 登録図形がありません line that ③表示's keeps. */
        if (s->command == 27 && s->again && s->top_item) {
            const JwItem *r;

            for (r = JW_ITEM; r->command; r++) {
                if (r->command == 27 && r->item == s->top_item
                    && r->right == s->top_right && r->row == 0) {
                    /* The drawing area proper: the band under the top line
                     * -- rows 2 and 3 -- is not part of it, and the
                     * 登録図形がありません line there survives the redraw. */
                    fill(v, 122, 48, 638, 383, 0);
                    break;
                }
            }
        }
        /* The rules go **after** the labels: ③立面's names sit on the same
         * text row as the rule above their cell, and the original's rule is
         * whole underneath them. */
        if (s->command == 29 && s->top_item >= 1 && s->top_item <= 3
            && s->opt_stage == JW_OPT_PLAN) {
            int k;

            if (s->top_item == 3) {
                /* ③立面 lays them out four across and four down, 96 tall,
                 * with the rules at x 251, 381 and 511. */
                for (k = 0; k < 5; k++) {
                    fill(v, 122, 16 + k * 96, 638, 16 + k * 96, 7);
                }
                fill(v, 251, 16, 251, 400, 7);
                fill(v, 381, 16, 381, 400, 7);
                fill(v, 511, 16, 511, 400, 7);
            } else {
                for (k = 0; k < 9; k++) {
                    const int y = k ? 63 + (k - 1) * 48 : 16;

                    fill(v, 122, y, 638, y, 7);
                }
                fill(v, 380, 16, 380, 399, 7);
            }
        }
        /* And the shapes themselves, **after** the labels: the `[7]` the
         * original writes sits over the top-left of the cell and the arc in
         * that one runs through it, cyan over the white of the label. */
        if (s->command == 29 && s->top_item >= 1 && s->top_item <= 3
            && s->opt_stage == JW_OPT_PLAN) {
            tategu(v, s->top_item);
        }
        /* 図形 ④ｸﾞﾙｰﾌﾟ変's grid, after the words for the same reason the
         * 文字種類 box is: the original's rules are whole.  ①登録's list of
         * figures is the same grid. */
        if ((s->command == 27 && s->top_item == 4) || zukei_list_up(s)) {
            int k;

            for (k = 0; k <= 10; k++) {
                fill(v, 144, 56 + k * 32, 624, 56 + k * 32, 7);
            }
            for (k = 0; k <= 5; k++) {
                fill(v, 144 + k * 96, 56, 144 + k * 96, 376, 7);
            }
        }
        /* Then what the command has written since, stage by stage, because a
         * later stage only writes over part of what an earlier one left -- and
         * the original puts the two counts back between them, which is why they
         * are not on the screen when a command has finished. */
        for (i = 1; !s->top_item && !s->zukei && i <= s->stage; i++) {
            /* **A cell that was pressed has said everything already.**
             * src/item.h holds every write that press made, so the stages
             * are not replayed over the top of it -- 文字 ①基点変 puts the
             * command at stage 2 and the stage's own line is not the one
             * the original writes when it is reached that way.  Same for
             * 図形 ①登録's road, which takes a range the way 複写 does but
             * writes its own line at each step (src/zukei.h). */
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
            for (q = JW_HENKEI; q->command; q++) {
                if (q->command == s->command && q->stage == i
                    && (q->row == 2 || q->row == 3) && q->col <= 15) {
                    own = 1;
                }
            }
            /* ⑧値変 keeps the 文字 band the road left in the box: the
             * original shows `ﾍﾟﾝ1 文数 14 / 横 2.5 縦 2.5` while it asks
             * for a value, not the two counts. */
            /* 段 7 keeps the 文字 band; **段 8 puts the two counts back**
             * (measured: `33| 14` while the field is up). */
            if (s->command == 14 && s->dim_val && i == 7) {
                own = 1;
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
            /* 寸法's two guides go **here**: after the black the band is
             * wiped with and after the counts box, and before the stage's
             * own cells.  ②縦方向 sends one through the counts box at
             * column 17 and the original's white 寸法値 covers it; drawn
             * after the cells it showed through as 00ffff (7 xor 2).
             *
             * **Once**, on the last turn of this loop.  The loop replays one
             * stage per turn, and an exclusive-or line drawn an even number
             * of times is not there at all. */
            if (s->dim_guide_n && i == s->stage) {
                int k;

                for (k = 0; k < s->dim_guide_n; k++) {
                    jw_line(v, s->dim_guide[k][0], s->dim_guide[k][1],
                            s->dim_guide[k][2], s->dim_guide[k][3], 2, 0x18,
                            jw_view_line_style(k ? 0 : 9));
                }
            }
            /* ⑧値変: `変更文字種類[Fn]  変更寸法値ﾏｳｽ(L)   始･終点変更
             * 寸法値ﾏｳｽ(R) ` while it waits for one, and ` 寸法値 =` with the
             * value in a field at column 18 once one is pressed. */
            if (s->command == 14 && s->dim_val && i == s->stage) {
                char one[160];
                const JwStage *r;

                /* 段 7 keeps the 文字 band the road puts there --
                 * `ﾍﾟﾝ1 文数 14 / 横 2.5 縦 2.5` -- and 段 3's own
                 * records are what write it. */
                if (s->stage == 7) {
                    for (r = JW_TYPED; r->command; r++) {
                        if (r->command == 14 && r->stage == 3
                            && r->col <= 15
                            && (r->row == 2 || r->row == 3)) {
                            stage_text(v, r, s, 3);
                        }
                    }
                }

                if (s->stage == 7) {
                    jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
                    sprintf(one, "%s%d%s", "\x95\xcf\x8d" "X" "\x95\xb6\x8e\x9a\x8e\xed\x97\xde" "[F",
                            s->dim_val_size ? s->dim_val_size : s->dim_size,
                            "]  " "\x95\xcf\x8d" "X" "\x90\xa1\x96" "@" "\x92" "l" "\xcf\xb3\xbd" "(L)   " "\x8e" "n" "\xa5\x8f" "I" "\x93" "_" "\x95\xcf\x8d" "X" "\x90\xa1\x96" "@" "\x92" "l" "\xcf\xb3\xbd" "(R) ");
                    jw_ui_text(v, 8, 1, 7, 0, one);
                    jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91" "O\x8d\x80");
                } else if (s->stage == 8) {
                    int n, m;

                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
                    jw_ui_text(v, 8, 1, 7, 0, " " "\x90\xa1\x96" "@" "\x92" "l" " =");
                    /* The value that was pressed is written first and the
                     * typed keys go **over it, a cell at a time** -- with
                     * `9` typed into `250` the original shows `9`, the
                     * cursor over the `5` and the `0` still there. */
                    jw_ui_text(v, 18, 1, 7, 0, s->dim_val_now);
                    for (n = 0; n < s->typed_n && n < 16; n++) {
                        char two[2];

                        two[0] = s->typed[n];
                        two[1] = 0;
                        jw_ui_text(v, 18 + n, 1, 7, 0, two);
                    }
                    /* **The whole cell, exclusive-or.**  The digit under
                     * it comes out magenta (7 xor 4) and the block is
                     * sixteen rows tall, not the nine 複線's cursor has. */
                    n = s->typed_n < 16 ? s->typed_n : 16;
                    for (m = 0; m < 16; m++) {
                        jw_line(v, 136 + n * 8, m, 143 + n * 8, m, 4,
                                ROP_XOR, JW_STYLE_SOLID);
                    }
                }
            }
            /* ②半径・③直径 ask for a circle: `[ESC]` and
             * `● 円 マウス指示 ` at column 8, and nothing else. */
            if (s->command == 14 && s->dim_circle && i == s->stage
                && s->stage == 6) {
                jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                jw_ui_text(v, 8, 1, 7, 0, "\x81\x9c" " " "\x89" "~" " " "\x83" "}" "\x83" "E" "\x83" "X" "\x8e" "w" "\x8e\xa6" " ");
            }
            /* 寸法 ④円･角 ②円周 の五つの段。桁 1 の [ESC] は一本入った
             * あとだけ、桁 6 の `・` と桁 73 の [BS]前項 は段 11 だけ、
             * 帯の 端部 は 点 が桁 46、矢印 が桁 45 です（測定）。 */
            if (s->command == 14 && s->dim_arc && i == s->stage
                && s->stage >= 11 && s->stage <= 15) {
                if (s->dim_did || s->stage > 11) {
                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                }
                if (s->stage == 11 && s->dim_arc == 2 && s->dim_arc_two) {
                    jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
                    jw_ui_text(v, 8, 1, 7, 0, "\x8ap\x93x\x81i\x8d\xb6\x89\xf4\x82\xe8\x81j\x8en\x90\xfc\x83}\x83" "E\x83X\x8ew\x8e\xa6       |\x87@\x92[\x95\x94|\x87" "A\x92P\x88\xca|\x87" "B\x81y\x82Q\x90\xfc\x8a\xd4\x81z|");
                    jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91O\x8d\x80");
                } else if (s->stage == 12 && s->dim_arc == 2
                           && s->dim_arc_two) {
                    jw_ui_text(v, 8, 1, 7, 0, "\x8ap\x93x\x81i\x8d\xb6\x89\xf4\x82\xe8\x81j         \x8fI\x90\xfc\x83}\x83" "E\x83X\x8ew\x8e\xa6 ");
                } else if (s->stage == 11 && s->dim_arc == 2) {
                    jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
                    jw_ui_text(v, 8, 1, 7, 0, "\x8ap\x93x\x8c\xb4\x93_\x83}\x83" "E\x83X\x8ew\x8e\xa6 (L)free (R)Read |\x87@\x92[\x95\x94|\x87" "A\x92P\x88\xca|\x87" "B\x81y\x82Q\x93_\x8a\xd4\x81z|");
                    jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91O\x8d\x80");
                } else if (s->stage == 12 && s->dim_arc == 2) {
                    jw_ui_text(v, 8, 1, 7, 0, "\x8ap\x93x\x81i\x8d\xb6\x89\xf4\x82\xe8\x81j\x8en\x93_\x8ew\x8e\xa6 (L)free (R)Read ");
                } else if (s->stage == 13 && s->dim_arc == 2) {
                    jw_ui_text(v, 8, 1, 7, 0, "\x8ap\x93x\x81i\x8d\xb6\x89\xf4\x82\xe8\x81j         \x8fI\x93_\x8ew\x8e\xa6 (L)free (R)Read ");
                } else if (s->stage == 11) {
                    jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
                    jw_ui_text(v, 8, 1, 7, 0,
                               s->dim_did ? "\x89~\x8e\xfc \x89~\x83}\x83" "E\x83X\x8ew\x8e\xa6 (L)              |\x87@\x92[\x95\x94|\x87" "A\x98" "A\x91\xb1\x8en\x93_\x8ew\x8e\xa6 (R) |" : "\x89~\x8e\xfc \x89~\x83}\x83" "E\x83X\x8ew\x8e\xa6                  |\x87@\x92[\x95\x94|");
                    jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91O\x8d\x80");
                } else if (s->stage == 12) {
                    jw_ui_text(v, 8, 1, 7, 0, "\x89~\x8e\xfc\x81i\x8d\xb6\x89\xf4\x82\xe8\x81j\x8en\x93_\x8ew\x8e\xa6 (L)free (R)Read ");
                } else if (s->stage == 13) {
                    jw_ui_text(v, 8, 1, 7, 0, "\x89~\x8e\xfc\x81i\x8d\xb6\x89\xf4\x82\xe8\x81j         \x8fI\x93_\x8ew\x8e\xa6 (L)free (R)Read ");
                } else if (s->stage == 14) {
                    jw_ui_text(v, 8, 1, 7, 0, "\x88\xf8\x8fo\x82\xb5\x90\xfc\x82\xcc\x8en\x93_ (L)free (R)Read ");
                } else {
                    jw_ui_text(v, 8, 1, 7, 0, "\x81\x9c \x90\xa1\x96@\x90\xfc \x88\xca\x92u \x83}\x83" "E\x83X\x8ew\x8e\xa6 (L)free (R)Read ");
                }
            }
            /* ②接円（半径と２条件）の道。 */
            if (s->command == 26 && i == s->stage
                && (s->stage == 30 || s->stage == 20 || s->stage == 21
                    || s->stage == 22 || s->stage == 23
                    || s->stage == 24 || s->stage == 25
                    || s->stage == 26 || s->stage == 27 || s->stage == 28
                    || s->stage == 29 || s->stage == 31)) {
                char one[80];

                if (i == 30) {
                    jw_ui_text(v, 8, 1, 7, 0, "|\x87@\x82P\x90\xfc\x82P\x89~(L)|\x87" "A\x82P\x93_\x82P\x90\xfc(R)|\x87" "B\x82P\x89~\x82P\x93_ |\x87" "C\x82Q\x90\xfc |\x87" "D\x82Q\x89~ |\x87" "E\x82Q\x93_ |");
                    jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91O\x8d\x80");
                } else if (i == 20 || i == 21) {
                    /* 接円半径の桁数は図面の縮尺が決めます（`d->decimals`）:
                     * SAMPLE0(1/1) で 3 桁 `1000.000`、TEST1 で
                     * 2 桁 ` 1000.00`、SAMPLE3 で 1 桁 `  1000.0`。
                     * 変更半径 の欄も同じです。 */
                    /* 二つめの段（第２点・（Ｂ））は [ESC] が出て
                     * [BS]前項 が出ません。一つめはその逆です。 */
                    if (s->tan_did || i == 21) {
                        jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                    }
                    sprintf(one, "%s%8.*f|", i == 20 ? "\x91\xe6\x82P\x93_ \x8ew\x8e\xa6 (L)free (R)Read   |\x87@\x90\xda\x89~\x94\xbc\x8c" "a=" : "\x91\xe6\x82Q\x93_ \x8ew\x8e\xa6 (L)free (R)Read   |\x87@\x90\xda\x89~\x94\xbc\x8c" "a=",
                            s->dec_drawing, s->tan_r);
                    jw_ui_text(v, 8, 1, 7, 0, one);
                    if (i == 20) {
                        jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91O\x8d\x80");
                    }
                } else if (i == 24 || i == 25) {
                    /* （Ｂ）の段は [ESC] が出て [BS]前項 が出ません。
                     * （Ａ）はその逆です（どちらも測定）。 */
                    if (s->tan_did || i == 25) {
                        jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                    }
                    sprintf(one, "%s%8.*f|", i == 24 ? "\x82Q\x90\xfc\x81i\x82`\x81j  \x83}\x83" "E\x83X\x8ew\x8e\xa6   |\x87@\x90\xda\x89~\x94\xbc\x8c" "a=" : "\x82Q\x90\xfc\x81i\x82" "a\x81j  \x83}\x83" "E\x83X\x8ew\x8e\xa6   |\x87@\x90\xda\x89~\x94\xbc\x8c" "a=",
                            s->dec_drawing, s->tan_r);
                    jw_ui_text(v, 8, 1, 7, 0, one);
                    if (i == 24) {
                        jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91O\x8d\x80");
                    }
                } else if (i == 26) {
                    int n, x;

                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
                    jw_ui_text(v, 8, 1, 7, 0, "\x95\xcf\x8dX\x94\xbc\x8c" "a=");
                    sprintf(one, "[%10.*f mm]", s->dec_drawing, s->tan_r);
                    jw_ui_text(v, 50, 1, 7, 0, one);
                    jw_ui_text(v, 17, 1, 7, 0, "        ");
                    x = 16 * 8;
                    for (n = 0; n < s->typed_n && n < 8; n++) {
                        char two[4];

                        two[0] = s->typed[n];
                        two[1] = two[2] = ' ';
                        two[3] = 0;
                        jw_ui_text(v, 17 + n, 1, 7, 0, two);
                    }
                    n = s->typed_n < 8 ? s->typed_n : 8;
                    x += n * 8;
                    fill(v, x, 7, x + 7, 15, 4);
                } else if (i == 27 || i == 28) {
                    /* ⑤２円。二つめの段の [ESC]/[BS] は ④２線 と同じ。 */
                    if (s->tan_did || i == 28) {
                        jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                    }
                    sprintf(one, "%s%8.*f|", i == 27 ? "\x89~\x81i\x82`\x81j  \x83}\x83" "E\x83X\x8ew\x8e\xa6   |\x87@\x90\xda\x89~\x94\xbc\x8c" "a=" : "\x89~\x81i\x82" "a\x81j  \x83}\x83" "E\x83X\x8ew\x8e\xa6   |\x87@\x90\xda\x89~\x94\xbc\x8c" "a=",
                            s->dec_drawing, s->tan_r);
                    jw_ui_text(v, 8, 1, 7, 0, one);
                    if (i == 27) {
                        jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91O\x8d\x80");
                    }
                } else if (i == 29) {
                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
                    sprintf(one, "\x90\xda\x89~\x91I\x91\xf0\x81\x81\x83}\x83" "E\x83X\x88\xda\x93\xae\x81@\x81@ \x81@\x8am\x92\xe8\x81\x81\x83N\x83\x8a\x83" "b\x83N\x81@\x81@\x81i\x90\xda\x89~\x90\x94%d\x81j", s->tan_cn);
                    jw_ui_text(v, 8, 1, 7, 0, one);
                } else if (i == 31) {
                    int n, x;

                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
                    jw_ui_text(v, 8, 1, 7, 0, "\x95\xcf\x8dX\x94\xbc\x8c" "a=");
                    sprintf(one, "[%10.*f mm]", s->dec_drawing, s->tan_r);
                    jw_ui_text(v, 50, 1, 7, 0, one);
                    jw_ui_text(v, 17, 1, 7, 0, "        ");
                    x = 16 * 8;
                    for (n = 0; n < s->typed_n && n < 8; n++) {
                        char two[4];

                        two[0] = s->typed[n];
                        two[1] = two[2] = ' ';
                        two[3] = 0;
                        jw_ui_text(v, 17 + n, 1, 7, 0, two);
                    }
                    n = s->typed_n < 8 ? s->typed_n : 8;
                    x += n * 8;
                    fill(v, x, 7, x + 7, 15, 4);
                } else if (i == 22) {
                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
                    jw_ui_text(v, 8, 1, 7, 0, "\x90\xda\x89~\x91I\x91\xf0\x81\x81\x83}\x83" "E\x83X\x88\xda\x93\xae\x81@\x81@ \x81@\x8am\x92\xe8\x81\x81\x83N\x83\x8a\x83" "b\x83N\x81@\x81@\x81i\x90\xda\x89~\x90\x94" "2\x81j");
                } else {
                    int n, x;

                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
                    jw_ui_text(v, 8, 1, 7, 0, "\x95\xcf\x8dX\x94\xbc\x8c" "a=");
                    sprintf(one, "[%10.*f mm]", s->dec_drawing, s->tan_r);
                    jw_ui_text(v, 50, 1, 7, 0, one);
                    jw_ui_text(v, 17, 1, 7, 0, "        ");
                    x = 16 * 8;
                    for (n = 0; n < s->typed_n && n < 8; n++) {
                        char two[4];

                        two[0] = s->typed[n];
                        two[1] = two[2] = ' ';
                        two[3] = 0;
                        jw_ui_text(v, 17 + n, 1, 7, 0, two);
                    }
                    n = s->typed_n < 8 ? s->typed_n : 8;
                    x += n * 8;
                    fill(v, x, 7, x + 7, 15, 4);
                }
            }
            /* ①円～円間 の二つの段。 */
            if (s->command == 26 && i == s->stage
                && (s->stage == 18 || s->stage == 19)) {
                if (s->tan_did || i == 19) {
                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                }
                jw_ui_text(v, 8, 1, 7, 0, i == 18 ? "\x89~\x81`\x89~\x8a\xd4\x82\xcc\x90\xda\x90\xfc \x81\x9e \x89~(\x82`)\x82\xf0\x83}\x83" "E\x83X\x8ew\x8e\xa6 \x81i\x90\xda\x90\xfc\x92\xca\x89\xdf\x88\xca\x92u\x81j" : "\x89~\x81`\x89~\x8a\xd4\x82\xcc\x90\xda\x90\xfc \x81\x9f \x89~(\x82" "a)\x82\xf0\x83}\x83" "E\x83X\x8ew\x8e\xa6 \x81i\x90\xda\x90\xfc\x92\xca\x89\xdf\x88\xca\x92u\x81j");
                if (i == 18) {
                    /* 桁 73 の [BS]前項 は 円(Ａ) のときだけです（測定）。 */
                    jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91O\x8d\x80");
                }
            }
            /* ②円周点 の二つの段。 */
            if (s->command == 26 && i == s->stage
                && (s->stage == 16 || s->stage == 17)) {
                if (i == 16) {
                    /* 一本引いたあとだけ [ESC] が出ます（測定）。 */
                    if (s->tan_did) {
                        jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                    }
                    jw_ui_text(v, 8, 1, 7, 0, "\x89~\x8e\xfc\x93_\x82\xcc\x90\xda\x90\xfc  \x81\x9e \x89~\x83}\x83" "E\x83X\x8ew\x8e\xa6 ");
                    jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91O\x8d\x80");
                } else {
                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                    jw_ui_text(v, 8, 1, 7, 0, " \x81\x9e \x89~\x8e\xfc\x93_\x82\xf0\x83}\x83" "E\x83X\x8ew\x8e\xa6 (L)free (R)Read ");
                }
            }
            /* 円線接 ①接線 ④角度指定 の四つの段。 */
            if (s->command == 26 && i == s->stage
                && s->stage >= 12 && s->stage <= 15) {
                char one[48];

                if (i == 12) {
                    int n, x;

                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
                    jw_ui_text(v, 8, 1, 7, 0, "\x8ap\x93x =");
                    jw_ui_text(v, 32, 1, 7, 0, "\x81" "b0 \x93x \xcf\xb3\xbd(L)\x81" "b\x91O\x89\xf1\x82\xc6\x93\xaf\x82\xb6 \xcf\xb3\xbd(R) \x81" "b[F1] \xcf\xb3\xbd\x8ap\x93x\x81" "b");
                    sprintf(one, "[%8.3f\xdf]", s->tan_prev);
                    jw_ui_text(v, 50, 2, 7, 0xffffu, one);
                    x = 14 * 8;
                    for (n = 0; n < s->typed_n && n < 8; n++) {
                        char two[4];

                        two[0] = s->typed[n];
                        two[1] = two[2] = ' ';
                        two[3] = 0;
                        jw_ui_text(v, 15 + n, 1, 7, 0, two);
                    }
                    n = s->typed_n < 8 ? s->typed_n : 8;
                    x += n * 8;
                    fill(v, x, 7, x + 7, 15, 4);
                } else if (i == 13) {
                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                    jw_ui_text(v, 8, 1, 7, 0, "\x8ap\x93x\x8ew\x92\xe8\x82\xcc\x90\xda\x90\xfc  \x81\x9e \x89~\x83}\x83" "E\x83X\x8ew\x8e\xa6 ");
                } else if (i == 14) {
                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                    jw_ui_text(v, 8, 1, 7, 0, "\x8en\x93_\x8ew\x8e\xa6 (L)free (R)Read ");
                } else {
                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
                    jw_ui_text(v, 8, 1, 7, 0, "\x8fI\x93_\x8ew\x8e\xa6 (L)free (R)Read ");
                    sprintf(one, "%s%10.2f%s", "\x92\xb7\x82\xb3 =", s->tan_len, " (mm) ");
                    jw_ui_text(v, 34, 1, 7, 0, one);
                    sprintf(one, "%s%7.3f%s", "\x8ap\x93x =", s->tan_ang, "(\xdf) ");
                    jw_ui_text(v, 56, 1, 7, 0, one);
                }
            }
            /* 変形 ③複線化 は同じ範囲の道を通りますが、言葉が違います。
             * 段 3 は 文字(R) を取らないので `線・円(L)` だけ、段 4 は
             * 自分の行です。 */
            if (s->command == 17 && s->hen_dbl && i == s->stage) {
                if (i == 3) {
                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                    jw_ui_text(v, 6, 1, 7, 0, "\x81Q");
                    jw_ui_text(v, 8, 1, 7, 0, "\x95\xa1\x90\xfc\x89\xbb  \x92\xc7\x89\xc1\xa5\x8f\x9c\x8aO\x83" "f\x81[\x83^\x8ew\x8e\xa6   ");
                    jw_ui_text(v, 38, 1, 7, 0, "\x90\xfc\x81" "E\x89~(L) ");
                    jw_ui_text(v, 48, 1, 7, 0, " [F1\x81`F10] ");
                    jw_ui_text(v, 68, 1, 7, 0, "|\x87@\x94\xcd\x88\xcd \x8am\x92\xe8|");
                } else if (i == 4 && s->hen_dbl_edit) {
                    /* ③間隔 の欄（測定：`[ESC]` のあとに BEL、桁 38 に
                     * 前回と同じ、桁 56 に `[%10.3f`、桁 67 に `mm`、
                     * 桁 69 に `]`、打ち込みは桁 14 から 8 つ）。 */
                    char one[40];
                    int m, gx;

                    jw_ui_text(v, 1, 1, 7, 0, "[ESC].\x8a\xd4\x8au =");
                    jw_ui_text(v, 38, 1, 7, 0, "\x91O\x89\xf1\x82\xc6\x93\xaf\x82\xb6 \xcf\xb3\xbd(R) ");
                    sprintf(one, "[%10.3f", s->hen_dbl_gap);
                    jw_ui_text(v, 56, 1, 7, 0, one);
                    jw_ui_text(v, 67, 1, 7, 0, "mm");
                    jw_ui_text(v, 69, 1, 7, 0, "]");
                    jw_ui_text(v, 14, 1, 7, 0, "        ");
                    gx = 13 * 8;
                    for (m = 0; m < s->typed_n && m < 8; m++) {
                        char two[4];

                        two[0] = s->typed[m];
                        two[1] = two[2] = ' ';
                        two[3] = 0;
                        jw_ui_text(v, 14 + m, 1, 7, 0, two);
                    }
                    m = s->typed_n < 8 ? s->typed_n : 8;
                    gx += m * 8;
                    fill(v, gx, 7, gx + 7, 15, 4);
                } else if (i == 4) {
                    char one[120];

                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                    sprintf(one, "%s%8.2f%s%s", "\x95\xa1\x90\xfc\x89\xbb |\x87@ \x8e\xc0\x8ds(L)|\x87" "A \x92\x86\x8e~(R)|\x87" "B\x8a\xd4\x8au", s->hen_dbl_gap,
                            "(mm)|\x87" "C\x97\xaf\x90\xfc\x81y", s->hen_dbl_cap ? "\x97L\x81z|(\x89~\x95s\x89\xc2)" : "\x96\x9d\x81z|");
                    jw_ui_text(v, 8, 1, 7, 0, one);
                }
            }
            /* 寸法 ⑤一括 の四つの段。 */
            if (s->command == 14 && s->dim_lot && i == s->stage
                && s->stage >= 21 && s->stage <= 24) {
                if (s->stage == 22) {
                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
                } else {
                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                }
                if (s->stage == 21) {
                    jw_ui_text(v, 8, 1, 7, 0, " \x81\x9e\x88\xea\x8a\x87\x8f\x88\x97\x9d\x82\xb7\x82\xe9\x90\xfc\x82\xcc \x81i\x8en\x90\xfc\x81j\x83}\x83" "E\x83X\x8ew\x8e\xa6  \x81m\xcf\xb3\xbd(R) \x93\xaf\x8e\xed\x90\xfc\x91I\x91\xf0\x81n");
                } else if (s->stage == 22) {
                    jw_ui_text(v, 8, 1, 7, 0, " \x81\x9e\x88\xea\x8a\x87\x8f\x88\x97\x9d\x82\xb7\x82\xe9\x90\xfc\x82\xcc   \x81y\x8fI\x90\xfc\x81z\x83}\x83" "E\x83X\x8ew\x8e\xa6 ");
                } else if (s->stage == 23) {
                    jw_ui_text(v, 8, 1, 7, 0, "\x92\xc7\x89\xc1\x90\xfc\xa5\x8f\x9c\x8aO\x90\xfc \x83}\x83" "E\x83X\x8ew\x8e\xa6 |\x87@\x88\xea\x8a\x87\x8f\x88\x97\x9d\x8e\xc0\x8ds |\x87" "A \x92\x86\x8e~ | ");
                } else {
                    jw_ui_text(v, 8, 1, 7, 0, "\x88\xea\x8a\x87\x8f\x88\x97\x9d |\x87@\x98" "A\x91\xb1\x93\xfc\x97\xcd|\x87" "A\x8fI\x97\xb9|");
                    jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91O\x8d\x80");
                }
            }
            /* 寸法 ④円･角 ①円径: `円マウス指示 半径(L) 直径(R)` and the
             * three cells, with the 書込角度 in a field at column 62.
             * **[ESC] goes up only once one has been drawn**: the press
             * that puts the line up leaves column 1 blank, which is what
             * the screen says and what the string log agrees with. */
            if (s->command == 14 && s->dim_ck && i == s->stage
                && s->stage == 9) {
                char one[160];

                if (s->dim_did) {
                    jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
                }
                jw_ui_text(v, 6, 1, 7, 0, JW_DOT);
                sprintf(one, "%s%s%s%s%s", "\x89~\x83}\x83" "E\x83X\x8ew\x8e\xa6 \x94\xbc\x8c" "a(L) \x92\xbc\x8c" "a(R)|\x87@\x96\xee\x88\xf3",
                        s->dim_ck_out ? "\x81y\x8aO\x81z" : "\x81y\x93\xe0\x81z", "|\x87" "A\x92l",
                        s->dim_ck_vout ? "\x81y\x8aO\x81z" : "\x81y\x93\xe0\x81z", "|\x87" "B\x8f\x91\x8d\x9e\x8ap\x93x|");
                jw_ui_text(v, 8, 1, 7, 0, one);
                jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91O\x8d\x80");
            }
            /* ③書込角度's own field (段 10): the same `角度 =` line
             * ③任意方向 has, with its own 前回と同じ at column 50. */
            if (s->command == 14 && s->dim_ck && i == s->stage
                && s->stage == 10) {
                char one[80];
                int n, x;

                jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
                jw_ui_text(v, 8, 1, 7, 0, "\x8ap\x93x =");
                jw_ui_text(v, 32, 1, 7, 0, "\x81" "b0 \x93x \xcf\xb3\xbd(L)\x81" "b\x91O\x89\xf1\x82\xc6\x93\xaf\x82\xb6 \xcf\xb3\xbd(R) \x81" "b[F1] \xcf\xb3\xbd\x8ap\x93x\x81" "b");
                sprintf(one, "[%8.3f\xdf]", s->dim_ck_prev);
                jw_ui_text(v, 50, 2, 7, 0xffffu, one);
                x = 14 * 8;
                for (n = 0; n < s->typed_n && n < 8; n++) {
                    char two[4];

                    two[0] = s->typed[n];
                    two[1] = two[2] = ' ';
                    two[3] = 0;
                    jw_ui_text(v, 15 + n, 1, 7, 0, two);
                }
                n = s->typed_n < 8 ? s->typed_n : 8;
                x += n * 8;
                fill(v, x, 7, x + 7, 15, 4);
            }
            /* ④累寸 keeps `[BS]前項` on the line while it asks for the
             * next point; the plain road's stage 4 has nothing there. */
            if (s->command == 14 && s->dim_prog && i == s->stage
                && s->stage == 4) {
                jw_ui_text(v, 73, 1, 7, 0, "[BS]\x91" "O\x8d\x80");
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
            /* 変形 ①パラメトリック変形 walks 複写's road cell for cell, out
             * of its own table (src/henkei.h). */
            /* ③複線化 の段 3 と 4 は自分の行を出します。 */
            if (s->command == 17
                && !(s->hen_dbl && (i == 3 || i == 4))) {
                const JwStage *r;
                const int st = (i == 1 && !s->with_text) ? 11 : i;

                for (r = JW_HENKEI; r->command; r++) {
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
            if (((s->command == 1 || s->command == 16 || s->command == 17)
                 && i == 7)
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
            if ((s->command == 1 || s->command == 16 || s->command == 17)
                && i == 18) {
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
        /* 円線接 の ①接線 は桁 17 から、句点つきです（測定）。
         * **②接円 は違います**——読めなかっただけのときは、ほかの
         * 命令と同じ BEL つきの `読取可能データ無` が桁 32 から
         * 出ます（測定：④２線 で線でないところを押すと
         * `サーチ`(桁 18、青地) と `.読取可能データ無`(桁 32)。
         * サーチ は行を書き直すときに桁 17..30 ごと消えます）。
         * 二本が平行のときの `データが不適当` は ②接円 でも
         * 桁 18 で、これは 0 画素で合っています。 */
        if (s->missed && s->command == 26
            && (s->tan_miss || !s->tan_circ)) {
            jw_ui_text(v, 18, 2, 7, 0,
                       s->tan_miss == 2
                       ? "\x83" "f\x81[\x83^\x82\xaa\x95s\x93K\x93\x96"
                       : s->tan_miss
                       ? "\x90\xfc\x83" "f\x81[\x83^\x82\xc5\x82\xb7"
                       : "\x93\xc7\x8e\xe6\x89\xc2\x94\x5c\x83" "f\x81[\x83^\x96\xb3");
        } else if (s->missed) {
            /* 寸法 ④円･角 ①円径 は同じ言葉を **一桁左から**、
             * BEL なしに桁 32 から書きます。ほかの道は BEL が一桁を取るので
             * 桁 33 からです――どちらも画面で測りました。 */
            if (s->command == 14 && (s->dim_ck || s->dim_arc)) {
                ;               /* jw_ui_band_last で、図面のあとに */
            } else {
                jw_ui_text(v, 32, 2, 7, 0,
                           "\x07" "\x93" "\xc7" "\x8e" "\xe6" "\x89"
                           "\xc2" "\x94" "\x5c" "\x83" "\x66" "\x81"
                           "\x5b" "\x83" "\x5e" "\x96" "\xb3");
            }
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
    /* 変形 ③複線化 を選んだところ。命令の行のかわりに自分の行が出ます。 */
    if (s->command == 17 && s->hen_dbl && !s->stage && !s->top_item) {
        fill(v, 0, 0, 639, 15, 0);
        top_clear();
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
        jw_ui_text(v, 8, 1, 7, 0, "\x95\xa1\x90\xfc\x89\xbb  \x8en\x93_\x83}\x83" "E\x83X\x8ew\x8e\xa6 ");
        jw_ui_text(v, 31, 1, 7, 0, "(L)\x90\xfc\xa5\x89~ ");
        jw_ui_text(v, 68, 1, 7, 0, "|\x87@ \x91O \x94\xcd \x88\xcd|");
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
    if (s->gauge_said) {
        /* 字表示 ↔ 枠表示 answers with its own prompt, and **clears the
         * line first**: the original's opening banner is gone after the
         * press, the way picking a menu item takes it away. */
        fill(v, 0, 0, 639, 15, 0);
        top_clear();
        jw_ui_text(v, 20, 1, 7, 0,
                   " " "\x81" "m" "\x8f" "I" "\x97\xb9\x81" "n" "\x83" "}" "\x83"
                   "E" "\x83" "X" "\x82\xf0\x8d\xec\x90" "}"
                   "\x94\xcd\x88\xcd\x82\xc9\x88\xda\x93\xae");
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

/* **The counts box loses its top-left pixel on a range screen.**  Measured
 * over every branch: (0,16) is black in the original on the twelve whose line
 * offers `① 前 範 囲` -- 複写 and 移動 as they come up, 線変更 ①③, 消去
 * ③指定範囲, 図形 ①登録 and 文編集 ⑤整理 -- and white on all the rest.  The
 * rest of the border is whole.
 *
 * What the original does to it is not known; a border drawn as four lines
 * that miss the corner would do it.  This is the measurement, and it goes on
 * last because everything else that touches the corner would paint over it. */
void jw_ui_range_notch(VGA *v)
{
    if (asks_range()) {
        fill(v, 0, 16, 0, 16, 0);
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
