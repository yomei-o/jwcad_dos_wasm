/* The screen around the drawing: the title bar, the left panel with its menu,
 * the layer buttons and the strip along the bottom.
 *
 * None of it is invented.  The original builds the whole thing out of three
 * primitives -- a filled rectangle, a line and a string drawn on a character
 * grid -- and every call it makes for the startup screen was read out of it:
 *
 *     DOSEMU_BP=11B9:07DC            the line routine, 20a9:07dc
 *     DOSEMU_BP=0EFF:23C5 DOSEMU_BPSTR=2   the string routine, 1def:23c5
 *
 * The string routine takes a **character cell**, one-based: column times eight
 * pixels across, row times sixteen down.  That is what `jw_ui_text` takes.
 *
 * What the panel shows comes from the drawing and from the program's state,
 * so it is passed in rather than guessed.
 */
#ifndef JW_UI_H
#define JW_UI_H

#include "jwc.h"

/* How many drawings the ファイル選択 list can hold.  The original shows
 * twenty-one at a time (rows 8 to 28) and scrolls; this is the whole
 * directory it has read. */
#define JW_FILE_MAX 64
/* How many of them are on the screen at once: rows 8 to 28. */
#define JW_FILE_ROWS 21
#include "vga.h"

typedef struct {
    long n_lines;               /* 線数, the left-hand count */
    long n_arcs;                /* 円ｰ文数 -- the arcs and the texts together */
    int pen;                    /* 1 to 8; `Pen.1` and its colour come from it */
    int line_type;              /* past 8 the label is a style, not a pen */
    int paper;                  /* 0 = A-0 ... 4 = A-4, and on past that */
    double denom;               /* `S=1/100` */
    int command;                /* the menu item picked, 1 to 30, or 0 */
    /* How far into it the command is: 0 just picked, 1 with a point taken,
     * 2 with the thing drawn -- and the two numbers it measured, which for a
     * line are the length and the angle, for a box the two sides, and for a
     * circle the radius and the diameter.  See src/stage.h. */
    int stage;
    /* 複線's number, as it is being typed: the field at column 22 of the top
     * line.  The command keeps it (src/cmd.h) and the front end copies it in
     * with the rest. */
    char typed[48];
    int typed_n;
    /* Where the next character goes in that field.  文字 appends, so it is
     * `typed_n` there; 文編集 starts the field with the text it was pointed
     * at and the cursor in front of it. */
    int typed_at;
    /* 下の帯: how far the view is zoomed in (1 at the original's own view --
     * the `表示倍率` the bar prints is the paper's times this), and which step
     * of ■拡大■ is running: 0 none, 1 asking for the 始点, 2 the 終点. */
    double view_scale;
    char zoom_typed[16];        /* 倍率指定 の欄に打った数 */
    int zoom_typed_n;
    int zoom_stage;
    /* 複写 ⑤反転 is running, so the copy table's stages 5 to 11 -- the
     * ①ﾏｳｽ位置 way of placing -- are not what the top line says. */
    int mirror;
    /* 複写 ⑥回転 is running, which uses the copy table's stages 5 to 11 no
     * more than ⑤反転 does -- it has its own 13 to 16 in src/typed.h.
     * rot_deg is the angle that went in, which the band shows. */
    int rotate;
    double rot_deg;
    /* 複写 ③数値倍率, the same way. */
    int scaling;
    /* 複写 ④ﾏｳｽ倍率, the same way. */
    int mscale;
    /* Where the pointer is.  The menu row it rests on is drawn inverted
     * whether or not anything has been pressed -- see menu_hover. */
    int mouse_x, mouse_y;
    /* レイヤ変更 is running: pressing one of the sixteen layer buttons puts
     * the program in a mode of its own, with its own line along the top.
     * Measured -- the original writes, at column 7,
     *
     *   レイヤ変更（ﾏｳｽ(L)表示切替 (R)書込選択） ［終了］マウスを作図範囲に移動
     *
     * so the left button turns a layer's drawing on and off, the right one
     * makes it the one written to, and moving the pointer into the drawing
     * area is how it ends. */
    /* ｸﾞﾙｰﾌﾟ's own mode, the same shape as レイヤ変更's: its line along the
     * top at column 20, `  ｸﾞﾙｰﾌﾟ 指示  ` in red where 図面名 and the group
     * number were (row 22), and `全レイヤ 表示` where サブ画面表示 was
     * (row 25).  It ends the same way -- the pointer back in the drawing.
     * Read off the original with tools/pressstr.sh 80 344 left. */
    int group_mode;
    /* ペン's board: the menu's fifteen rows become six pens and nine line
     * types, with `#` beside the pen in use and `*` beside the type.  A
     * press on the pen box at (1,305)-(120,319) puts it up and the pointer
     * back in the drawing takes it away, like ｸﾞﾙｰﾌﾟ. */
    int pen_board;
    /* グループ データ表示: the whole screen becomes sixteen little views,
     * one per layer group.  The right button on the group being written to,
     * while ｸﾞﾙｰﾌﾟ is asking, opens it. */
    int data_screen;
    /* サブ画面表示: a miniature of the whole drawing in the box at the
     * bottom of the panel, with the paper's edge round it. */
    int sub_screen;
    /* 入出力 (30) is a menu of menus.  0 is the one the item itself puts
     * up; JW_IO_* say which of its own the top line is showing. */
    /* 範囲記憶 has been pressed: its button in the strip goes from green to
     * cyan and stays there. */
    /* 電卓, the button at the left end of the strip: a keypad over the
     * panel's bottom four rows, a display above it and its own top line. */
    /* 目盛, the left cell of the panel that appears over the counts: it
     * asks for the grid's X and Y spacing in millimetres of paper. */
    /* 字表示 ↔ 枠表示, the right-hand cell of the panel's second row.
     * Pressing it swaps the word and puts ［終了］マウスを作図範囲に移動 on
     * the top line; the drawing itself changes when the pointer goes back
     * into the drawing area. */
    /* 軸角 on/off, the panel's second row, middle cell.
     *
     * **The black word is the state, the coloured one is the offer.**  With
     * 軸角 off the original writes `off` in colour 0 -- black on black, so
     * it cannot be seen -- and `on` in cyan; pressing `on` swaps them.  The
     * 目盛 row above works the same way, with `off` black and the four
     * numbers in yellow. */
    /* Which of 目盛's five cells is chosen: 0 for `off`, 1..4 for 11, 12,
     * 13 and 14.  The chosen cell is the one with the block of yellow under
     * it, and its word is written in black on top -- the same way 軸角's
     * row works. */
    int gauge_pick;
    int axis_on;
    int frame_text;
    int gauge_said;             /* that prompt is up */
    int grid_mode;
    double grid_x, grid_y;      /* its spacing, millimetres of paper */
    int calc;
    int kept;
    /* ｵﾌﾟｼｮﾝ (29) is a menu of menus too.  0 is the one the item itself
     * puts up; JW_OPT_* say which of its own is showing. */
    /* ＋ and ／'s ②寸 法 / ③角 度 -- JwCmd.ask_kind and the two numbers
     * it offers.  See src/cmd.h. */
    /* JwCmd.top_item and .top_right -- see src/item.h. */
    /* **The ファイル選択 screen is shared.**  入出力 lists drawings, 図形
     * lists the drawings a figure can be taken out of, 多角形 ④座標ファイル
     * 読込 lists `*.txt` and ｵﾌﾟｼｮﾝ ⑦外部処理 lists `*.bat`.  The screen is
     * the same one -- the same bars, the same box, the same two sliders --
     * and only these three strings change.  NULL means 入出力's own. */
    const char *file_bar;
    const char *file_path;
    const char *file_word;
    /* `編集ファイル名=` on row 3 -- the drawing in hand.  入出力 shows it;
     * the three other screens do not. */
    int file_named;
    /* The colour of the `path=A:\*.xxx` line.  Cyan on three of the four
     * screens and **green on ｵﾌﾟｼｮﾝ ⑦外部処理's**, which is the original's
     * own doing: its call says colour 4 where the others say 5. */
    int file_path_fg;
    int zukei;                  /* JwCmd.zukei -- 図形 ①登録's road */
    char zukei_name[16];        /* what has been typed into ◆図形名入力 */
    int zukei_name_n;
    /* The figures in the group, for the list ①登録 and ②読込 both put up:
     * fifty cells, five across and ten down, in the same grid ④ｸﾞﾙｰﾌﾟ変
     * uses.  ①登録 has `新規登録` in the first cell and the figures after
     * it; ②読込 has the figures from the first.  Alphabetical -- which is
     * the order the original lists AAA and BOX in, whichever way round they
     * were made (and also the order the host hands them over, so the two
     * cannot be told apart here). */
    char zukei_list[50][10];
    int zukei_list_n;
    /* Which cell is picked: the one the original writes black-on-white.  A
     * press on another moves it, a press on this one takes it -- the same
     * rule the drawing list has. */
    int zukei_sel;
    /* JwCmd.zukei_ang -- what the band beside the counts says while a figure
     * is being placed. */
    float zukei_ang;
    int zukei_mouse;
    int zukei_noghost;
    int zukei_ask;
    char zukei_typed[16];
    int zukei_typed_n;
    float zukei_prev_ang;
    float zukei_mx, zukei_my;
    int top_item;
    int top_right;
    int band_off;               /* JwCmd.band_off */
    /* The menu item was picked while it was already the one in force.  Only
     * 変形 and 図形 do anything with it -- see jw_ui_draw. */
    int again;
    int ask_kind;
    /* The three numbers src/prompt.h carries as digits: 複線's interval,
     * 面取's offset and ２線's pair of them.  They belong to the program's
     * state, and how many decimals they are shown to belongs to the
     * drawing, so the line is written from these rather than from what was
     * captured.  See put_fixed in src/ui.c. */
    /* How many decimals the drawing shows a length to.  `dec` above is the
     * running command's and is nought until it has taken a point; this one
     * is the drawing's own and is what the lines below are written with. */
    int dec_drawing;
    double gap;
    double gap_chamfer;
    int chamfer;                /* JwCmd.chamfer -- 面取's shape */
    double gap_two[2];
    double ask_len;
    double ask_ang;
    int opt_stage;
    /* ①建具平面's two sizes and which letter of the library is in use --
     * `見込 70.0mm`, `枠幅 35.0mm` and `種類【A】`, the three the bar
     * offers.  The letter picks the file: A is JW_OPT1.DAT, B is
     * JW_OPT1B.DAT and so on (JW_CAD.DOC, and the format is written out in
     * JW_OPT1.DAT itself from line 240). */
    double opt_depth, opt_width;
    char opt_kind;
    /* What is in that file: up to sixteen shapes, each with a name. */
    char opt_name[16][32];
    int opt_n;
    /* Once one of the sixteen has been pressed: which it is, the two numbers
     * the band then shows -- 内法寸法 1800.00 at column 29 and 基準線との間隔
     * 0.00 at column 42 -- and which line of the drawing is the 基準線, or -1
     * while it is still being asked for. */
    int opt_shape;
    double opt_inner;
    double opt_gap;
    long opt_line;
    int io_stage;
    /* ⑦INDEX's list.  The original keeps it in `JW_FILE0.000`, one
     * `A:\NAME` a line with CRLF between, and rewrites it as drawings are
     * opened -- the names on the screen are that file's, not the disk's
     * (QPICK and QBYTES are in it and not in `orig/`).
     *
     * The screen shows twenty rows at a time, from row 4, with the name at
     * column 22 and a mark at 20.  `ﾌｧｲﾙ 1/20` at column 22 of row 2 counts
     * them, `ﾏｰｸ=0` at 40 counts the marked ones and `Max:20` at 70 is how
     * many the file holds. */
    char ix_name[64][16];
    int ix_n;
    int ix_sel;
    unsigned char ix_mark[64];
    /* Which entry is at row 4.  The two yellow bands are the only things
     * that move it: the upper one puts the list back at the first entry,
     * the lower one jumps to the last, and then that one entry is all the
     * screen shows.  Measured with lists of 4, 20 and 25 names
     * (tools/ixprobe.sh) -- the list is cut to twenty, which is exactly how
     * many rows there are, so nothing else ever scrolls it. */
    int ix_top;
    /* ①ｲﾝﾃﾞｯｸｽ削除 asks first: `削除します |① 削 除 |② 再選択 |`. */
    int ix_del;
    /* **The mark at column 6 of ①ﾌｧｲﾙ's line.**  Entering it has none;
     * coming back to it after 合成 or 削除 has run has `・` there
     * (tools/origstr.sh, the two roads). */
    int io_done;
    /* ⑥ＤＸＦ ③設定's five choices, 0 for the left one and 1 for the
     * right: 点の出力, 円の出力, ﾚｲﾔ名, 空白出力, 図面の範囲.  The原作
     * starts 0,0,1,0,0 and a press on a row takes the side it lands on
     * (tools/origstr.sh).  They live in src/main_wasm.c, because
     * jw_ui_from clears everything here. */
    unsigned char dxf_set[5];
    /* 文字 ④設定's table, out of the drawing: the pen, the width, the
     * height and the gap of each of the ten character types, in tenths of a
     * millimetre, and how many texts are of each.  Index 0 is the one being
     * drawn with, which is why the rows are 1 to 10. */
    short char_tab_pen[11];
    short char_tab_w[11];
    short char_tab_h[11];
    short char_tab_gap[11];
    int char_tab_use[11];
    /* Which cell of it is being changed: 0 none, 1 the pen, 2 the width,
     * 3 the height, 4 the gap -- and which row, 1 to 10.  Measured: a press
     * in one of those four columns blanks the cell, puts a green block in
     * it and writes its own line along the top; a press in the 文字種類
     * column picks the type instead and moves the ●. */
    /* 測定's unit and how many decimals it shows: ⑥単位 goes ｍ(3桁) →
     * cm(1桁) → mm(0桁) → ｍ and ⑦小数点以下 goes 3 → 0 → 1 → 2 → 3, both
     * measured on the original.  The band writes them at row 2, columns 53
     * and 61, on white. */
    /* 寸法 ⑨設定's ten rows and the three cells of its line that carry a
     * state.  Measured on the original (tools/origstr.sh "90 280 left"
     * "604 8 left" …): the six numbers open a field at column 54 of their
     * row, the three 【】 rows change over where they stand, ②寸法線端部
     * goes 点 ↔ 矢印, ④小数点以下 goes 1 → 2 → 3 → 0, and ③単位 goes round
     * three states that print `mm`, `ｍ` and `ｍ`. */
    /* ④自動保存's band: how often it writes, what it writes to, where, and
     * how long it waits.  Measured -- `0秒` at column 20, `[AUTO.JWC]` at
     * 28, `[A:\]` at 43 and `10秒` at 66, all on white, and each of the
     * four cells of its line opens a field in its own place. */
    int auto_interval;
    char auto_name[16];
    char auto_path[16];
    int auto_wait;
    int auto_edit;              /* 1..4, which cell is being typed into */
    char auto_typed[16];
    int auto_typed_n;
    int dim_pen_line;           /* 線のペン No. */
    int dim_pen_point;          /* 点のペン No. */
    double dim_gap;             /* 寸法線と値の離れ */
    double dim_ext;             /* 引出し線の突出 */
    double dim_arrow;           /* 矢印長さ */
    double dim_angle;           /* 矢印角度 */
    int dim_rphi;               /* 0 前付け, 1 後付け */
    int dim_comma;              /* 0 有, 1 無 */
    int dim_zero;               /* 0 無, 1 有 */
    int dim_end;                /* 0 点, 1 矢印 */
    int dim_unit;               /* 0 mm, 1 and 2 both print ｍ */
    int dim_dec;                /* 小数点以下 (n) 桁 */
    /* Which row is being typed into, 6/8/10/12/14/16, and what has been
     * typed. */
    int dim_edit;
    char dim_typed[16];
    int dim_typed_n;
    int meas_unit;
    int meas_dec;
    int char_edit;
    int char_edit_row;
    char char_edit_typed[16];
    int char_edit_n;
    /* The DXF has just been written: ` 登 録  完 了 ` sits at row 2 column
     * 20 over ⑥ＤＸＦ's own line (入出力's own 保存 puts the same words at
     * column 34). */
    int dxf_done;
    /* What it wrote, for the four counters the original leaves on row 3:
     * `線=` at column 20, `円=` at 35, `文字=` at 50 and `点=` at 65, each
     * `n/n`.  A kind with none of them is not written at all. */
    long dxf_n[4];
    /* The name ③ﾌｧｲﾙ出力 asks for, in the field at column 25. */
    char io_name[13];
    int io_name_n;
    /* ②読込's ファイル選択 screen.  The names, each drawing's own 図面名,
     * its date and its size, exactly as the original lists them: the name
     * in DOS's 8.3 shape ("SAMPLE0 .JWC"), the title from the drawing's
     * own header.  The list is alphabetical with the drawing that is open
     * pulled to the top -- measured, not chosen. */
    char file_name[JW_FILE_MAX][13];
    /* **A drawing's 図面名 is two fields of 32 bytes**, at offsets 40 and
     * 72 of the header.  The list shows them as `one two`, one space
     * between, padded to 45 columns; the box above the list shows them on
     * two lines of their own; and ◆ｍｅｍｏ入力 edits them.  Joining the
     * NUL run between them into spaces instead put every title eleven
     * columns out. */
    char file_t1[JW_FILE_MAX][33];
    char file_t2[JW_FILE_MAX][33];
    char file_date[JW_FILE_MAX][17];
    long file_size[JW_FILE_MAX];
    /* The file's date and time as DOS keeps them, date<<16 | time -- what
     * the list is ordered by, newest first. */
    unsigned long file_stamp[JW_FILE_MAX];
    int file_n;
    int file_sel;               /* which row is yellow on blue */
    int file_top;               /* the first row shown, for long lists */
    char file_free[24];         /* "268,431,360", what the disk has left */
    /* The drawing in hand, without its extension -- 編集ファイル名 on the
     * file screen's third row. */
    char open_name[9];
    /* ③ 新規 保存's field: the name to write under, prefilled with the
     * drawing in hand.  It sits at row 5, column 17 -- measured. */
    char save_name[13];
    int save_name_n;
    /* Which of ◆ｍｅｍｏ入力's two lines the cursor is on (0 or 1), and
     * what has been typed into them.  The original asks for two. */
    /* Set once ① 実 行 has written the drawing: the original leaves
     * ` 登 録  完 了 ` on row 2 and the mark at column 6. */
    int saved_done;
    int memo_row;
    char memo[2][41];
    int memo_n[2];

/* What JwUi.data_screen holds: 1 = the sixteen groups, 2 = the sixteen
 * layers of the group being written to. */
/* 入出力's own menus, JwUi.io_stage. */
#define JW_IO_FILE 1            /* ①ﾌｧｲﾙ  -> |①保存(L)|②読込(R)|…  */
#define JW_IO_PLOT 2            /* ②ﾌﾟﾛｯﾀ -> |①RS-232C出力(L)|…     */
#define JW_IO_PNAME 3           /* ③ﾌｧｲﾙ出力 -> 出力ファイル名 ?      */
#define JW_IO_PSET 4            /* -> |①確定(L)|②範囲変更(R)|…      */
#define JW_IO_PGO 5             /* -> 作図開始|① 実行(L)|…           */
#define JW_IO_LOAD 6            /* ②読込 -> ファイル選択の一覧        */
#define JW_IO_SAVE 7            /* ①保存 -> 同じ一覧、上の行が違う    */
#define JW_IO_MEMO 8            /* ①選択確定 -> ◆ｍｅｍｏ 入力        */
#define JW_IO_OVER 9            /* -> 同名ﾌｧｲﾙが存在します            */
#define JW_IO_WRITE 10          /* -> 書き込みます|① 実 行           */
#define JW_IO_MERGE 11          /* ③合成  -> 同じ一覧                 */
#define JW_IO_KILL 12           /* ④削除  -> 同じ一覧                 */
#define JW_IO_DRIVE 13          /* ⑤ﾄﾞﾗｲﾌﾞ変更 -> |①【Ａ】|② Ｂ|…    */
#define JW_IO_DXF 14            /* ⑥ＤＸＦ -> |① 保存|② 読込|③ 設定| */
#define JW_IO_INDEX 15          /* ⑦INDEX -> 選択ファイル名 ﾏｳｽ指示    */
#define JW_IO_NEWNAME 16        /* ③ 新規 保存 -> ◆ファイル名入力     */
#define JW_IO_MERGE1 17         /* ③合成 ①選択確定 -> 合成|① 実 行(L)| */
#define JW_IO_MERGE2 18         /* その ① 実 行 -> 合成ﾃﾞｰﾀを書き込みます */
#define JW_IO_KILLASK 19        /* ④削除 ①選択確定 -> 削除します|① 削 除 */
#define JW_IO_DXFSET 20         /* ⑥ＤＸＦ ③設定 -> 出力時の設定…      */
#define JW_IO_DXFNAME 21        /* ③ 新規 保存 on ①保存 -> ◆ファイル名入力 */
#define JW_IO_DXFWRITE 22       /* [Enter] -> 書き込みます|① 実 行(L)|    */
#define JW_IO_NEWASK 23         /* ⑤新規図面 with work in hand -> 失われます */

/* ｵﾌﾟｼｮﾝ's own menus, JwUi.opt_stage. */
#define JW_OPT_PLAN 1           /* ①建具平面 -> 建具選択 の一覧        */
/* JW_OPT_BASE and JW_OPT_WHERE are in src/optplan.h, beside the lines they
 * put up. */

#define JW_DATA_GROUP 1
#define JW_DATA_LAYER 2
    int layer_mode;
    /* The left panel's own questions.  Pressing 紙 or the scale beside it
     * puts a line along the top and takes a number in a field, ended with
     * [Enter]; JW_ASK_* says which.  Measured on SAMPLE0: 紙 then `2` and
     * [Enter] goes A-4 to A-2, and the scale then `2` goes S=1/1.0 to
     * S=1/2.0. */
    /* Picking a menu item blacks out the two rows under the top line, but a
     * command that redraws the whole drawing as it starts puts them back.
     * 紙 and the scale do: after [Enter] the original is in 入出力 with its
     * band **full of drawing** down to y=17, where a plain press on 入出力
     * leaves it black.  Set after jw_ui_from, which zeroes the struct. */
    int band_kept;
    int ask;
    char ask_typed[8];
    int ask_n;
    /* 寸法: the value it has just written, which the band shows. */
    double dim_value;
    /* and the three numbers in its box: how many texts there were when it
     * started, and the dimension character type's width and height. */
    long dim_texts;
    double dim_w, dim_h;
    int dim_text_pen;           /* 帯の `ﾍﾟﾝn`: text_pen[dim_size] */
    int dim_size;               /* 寸法値の文字種。上の行の `文字[Fn]` */
    /* 寸法の案内線。本数（0/1/2）と、縦か、2 本の画面位置。 */
    int dim_guide_n;
    int dim_guide[2][4];
    /* ⑥点 の行: 点(No.n) の n は 点のペン No.、点数 は図面の実点の数。
     * 1 つでも打つと桁 1 に [ESC] が出ます。 */
    long dim_points;
    int dim_did;
    long dim_lines0;
    int dim_only;
    int dim_prog;
    int dim_arc;
    int dim_arc_end;
    int dim_arc_miss;
    double tan_deg;
    int tan_did;
    int sine;                   /* 曲線 ①ｻｲﾝ曲線 の道 */
    double sine_cycle, sine_amp, sine_div;
    int chain;
    int spl, spl_n, spl_div;
    int sine_did;
    int tan_tri;                /* ③接円（３条件）の小項目 */
    int tan_cn;                 /* 接円の候補の数（`（接円数n）`） */
    int tan_circ;
    double tan_r;
    int tan_miss;
    double tan_prev;
    double tan_len;
    double tan_ang;
    int hen_dbl;
    int hen_dbl_cap;
    int hen_dbl_edit;
    double hen_dbl_gap;
    int dim_lot;
    int dim_arc_two;
    int dim_arc_unit;
    char dim_arc_val[24];
    int dim_ck;
    int dim_ck_out;
    int dim_ck_vout;
    double dim_ck_deg;
    double dim_ck_prev;
    char dim_ck_val[24];
    int dim_circle;
    int dim_val;
    int dim_val_size;
    char dim_val_now[32];       /* 欄が出している今の値 */
    /* ハッチ: how many lines the frame has taken (the band counts down from
     * 100), and the angle and pitch it will fill with. */
    int hatch_n;
    double hatch_angle, hatch_pitch;
    /* 連線: how its directions are being rounded -- 45, 90 or 0 for free.
     * The band says so at columns 37 and 46 of row 2. */
    int poly_deg;
    /* 文編集: the character type of the text being changed -- the `3` of
     * `|種 3|Paste` at row 4, which is the text's own, not the drawing's. */
    int edit_type;
    double num[2];
    int dec[2];                 /* how many decimals each of them is shown to:
                                 * a length follows the drawing's scale, an
                                 * angle is always three */
    int snap;                   /* the pointer is over the drawing, so the two
                                 * words saying what the right button would
                                 * take *may* be on the screen -- see `mods` */
    /* Which modifier keys are held -- JW_MOD_* from src/read.h.  The words in
     * the band (src/snap.h) are the hint for the *modified* read, and the
     * original puts them up only while one is down: with nothing held the band
     * beside the counts stays black.  Which words they are depends on the key
     * -- 線・円上点 for [SHIFT], 鉛直･/円周点 for [CTRL], 中心点・Ａ点 for
     * [GRPH] -- so this says which, not merely whether.
     *
     * They looked unconditional for a long time because the emulator did not
     * answer INT 16h AH=12h and handed JW_CAD a word with the Ctrl bit set, so
     * every run behaved as though Ctrl were held (dosv_emu_cpp RESUME
     * 「刺された罠」, and RESUME.md 4.19 here).
     *
     * Two keys at once is **not measured**: the help says [CTRL] and [SHIFT]
     * together mean something of their own (書込用線種線色と同種同色のデータ
     * のみ), but not what the band then says, so jw_ui_draw picks one of the
     * three in a fixed order rather than inventing a fourth answer. */
    int mods;
    /* A modified read has picked what it works from and is waiting for the
     * second press.  JwCmd.snap, and while it is set the original writes a
     * line of its own over the top line (src/snapmsg.h). */
    int snapping;
    /* A press that searched for something and found nothing.  The original
     * says so in the band beside the counts and leaves it there until the next
     * press finds something or another item is picked; see jw_ui_draw. */
    int missed;
    /* 測定【①距離】's two lengths, in metres: the running total and the
     * last leg.  The band shows them to three decimals with the trailing
     * zeros taken off. */
    double meas_total, meas_last;
    /* 分割's count -- what its line offers as 前回と同じ and writes beside
     * the counts -- and how many 仮点 are still free. */
    int divisions;
    int temp_left;
    /* 線切断 has just cut a line and the pointer has not moved: the top line
     * says `□ 線切断はマウス移動` (src/stage.h stage 11) instead of the
     * command's own line. */
    int cutting;
    /* 文字 is taking a string: the port draws it at column 1 of row 2. */
    int typing_text;
    /* 文字's own numbers: the character type selected for writing and that
     * type's pen, width and height (tenths of a millimetre).  src/prompt.h
     * holds the ones the capture happened to see, so these put them back --
     * see Jwc.char_type. */
    int char_type, char_pen, char_w, char_h;
    /* What 線変更 took: 1 a line, 2 an arc.  See JwCmd. */
    int hit_kind;
    /* Has the pointer moved since the last press?  Until it does, the counts
     * box keeps the two counts rather than the command's length and angle --
     * see JwCmd. */
    int moved;
    /* 消去's ②範囲外消去.  The original leaves the `＿` at column 6 off
     * in that mode -- the mark that says the left button can be dragged --
     * and writes the rest of the 追加･除外 line exactly as it does for
     * ①範囲内消去. */
    int outside;
    /* 消去's ③指定範囲, and whether its first press took the texts in with it
     * -- the top line has its own spelling for each.  See src/span.h. */
    int span;
    int with_text;
    /* [ESC] has thrown the point away: the line that was up stays and three
     * pieces go over it (src/esc.h). */
    int escaped;
    int group;                  /* the layer group the buttons show */
    unsigned char layer_on[16]; /* which of its sixteen layers are shown */
    /* The two little bars over each button.  The left one is on when the layer
     * carries a line or an arc and the right one when it carries a text; they
     * are colour 3 and nothing else moves them.  Read off the original with
     * every one of the fourteen drawings loaded -- SAMPLE2's layer 6 has
     * thirty-seven texts and no lines and shows the right bar alone, its layer
     * 9 one text and nothing else and the same, and its layer 7 eighteen lines
     * and eight texts and shows both.  A point counts as geometry: SAMPLE3's
     * layer 5 has sixty-one texts and twenty points and nothing else, and both
     * bars are on. */
    unsigned char layer_geom[16];
    unsigned char layer_text[16];
    /* The same two, per layer **group**, for ｸﾞﾙｰﾌﾟ's display. */
    unsigned char group_geom[16];
    unsigned char group_text[16];
    unsigned char group_on[16];
    /* Whether the digit gets a ring round it.  A layer that is not shown has
     * neither digit nor ring (SAMPLE0's layer 1); one that is shown but off in
     * the drawing's first layer table gets the digit and no ring (TEST7's
     * layers C, D and E). */
    unsigned char layer_ring[16];
    int layer;                  /* the one being written to, highlighted */
    long work_seconds;          /* 作業時間 -- the thin bar down the menu */
    const char *name;           /* what the write layer is called, or NULL */
    const char *guide;          /* the line of guidance, or NULL */
} JwUi;

/* Fill it in the way the original comes up with no drawing loaded. */
void jw_ui_default(JwUi *s);

/* And the way it comes up with this drawing loaded.  Everything but the
 * guidance line comes out of the drawing's own first line; see jwc.c. */
void jw_ui_from(JwUi *s, const Jwc *d);

/* Draw the whole chrome.  The drawing area (122,17)-(638,462) is left alone. */
void jw_ui_draw(VGA *v, const JwUi *s);

/* グループ データ表示, which needs the drawing as well as the state: it is
 * sixteen little views of it.  Drawn over the top of jw_ui_draw's screen. */
void jw_ui_data(VGA *v, const JwUi *s, const Jwc *d);

/* One string on the character grid, as 1def:23c5 does it: `col` and `row` are
 * one-based, a half-width character is eight pixels wide and a full-width one
 * sixteen, and `bg` is painted only where it differs from `fg`. */
void jw_ui_text(VGA *v, int col, int row, unsigned fg, unsigned bg,
                const char *s);

/* The menu, as the original holds it: thirty labels of six bytes, the right
 * column (command 1 to 15) first and the left column (16 to 30) after, and the
 * key that picks each one.  `jw_ui_menu_label(n)` and `jw_ui_menu_key(n)` take
 * the command number the original's own documentation uses -- USER_MNU.DAT
 * says "複写から測定が 1〜15、移動から入出力が16〜30". */
const char *jw_ui_menu_label(int command);

/* The one black pixel a range screen leaves at the counts box's corner.
 * Called last, after everything else has been drawn. */
void jw_ui_range_notch(VGA *v);

/* A press on the top line, past its last cell. */
int jw_ui_past_cells(int x, int y);

/* Which ファイル選択 screen this is: JW_PICK_IO for 入出力's own, and the
 * three others for the commands that borrow it.  Sets file_bar, file_path,
 * file_word and file_named. */
#define JW_PICK_IO    0
#define JW_PICK_ZUKEI 1         /* 図形 ⑦登録 ⑧複写 -- `*.jwc`, 読込 */
#define JW_PICK_COORD 2         /* 多角形 ④座標ﾌｧｲﾙ読込 -- `*.txt`, 座標 */
#define JW_PICK_CHILD 3         /* ｵﾌﾟｼｮﾝ ⑦外部処理 -- `*.bat`, 外部処理 */
#define JW_PICK_DXFOUT 4        /* ⑥ＤＸＦ ①保存 -- `*.dxf`, DXFOUT     */
#define JW_PICK_DXFIN 5         /* ⑥ＤＸＦ ②読込 -- `*.dxf`, DXFIN      */
void jw_ui_pick_kind(JwUi *s, int kind);
char jw_ui_menu_key(int command);

/* And the other way: which command a key picks, or 0.  The capitals take the
 * right column and the small letters the left -- typing `X` in the original
 * puts it into ／ exactly as pressing the item does. */
int jw_ui_key_command(int key);

/* Which command a point in the menu picks, or 0.  The menu is fifteen rows of
 * two columns; the original draws them at rows 5 to 19 of the character grid,
 * the left column from column 2 and the right from column 10. */
/* The strip along the bottom. */
#define JW_BAR_CALC    1        /* 電卓 */
#define JW_BAR_KEEP    2        /* 範囲記憶 */
#define JW_BAR_PREV    3        /* 前倍率[NFER] */
#define JW_BAR_ZOOM    4        /* Zoom[ｽﾍﾟｰｽ] */
#define JW_BAR_SCALE   5        /* 倍率指定[XFER] */
#define JW_BAR_OFFSET  6        /* ｵﾌｾｯﾄ */
#define JW_BAR_HELP    7        /* HELP */
int jw_ui_bar_item(int x, int y);

/* The rectangle ■拡大■ drags once it has a corner: colour 4, exclusive-or,
 * the same band 消去 pulls round a range. */
void jw_ui_zoom_band(VGA *v, int x0, int y0, int x1, int y1);

int jw_ui_menu_hit(int x, int y);

/* Which question the left panel is asking (JwUi.ask). */
#define JW_ASK_PAPER 1          /* 用紙 サイズ (A0～A4） 変更 */
#define JW_ASK_SCALE 2          /* レイヤ グループ縮尺 変更 */
#define JW_ASK_LNAME 3          /* レイヤ名を入力 */

/* The mouse pointer.  0885:4f03 draws it with the same line routine as
 * everything else, but into planes 1 and 2 only and with the graphics
 * controller set to exclusive-or (0x18), so drawing it a second time takes the
 * screen back exactly as it was.  The shape is eleven rows of a triangle from
 * (x, y) and then five steps of a three-pixel tail; the arrow is pulled up so
 * that it ends no lower than DS:0a60, the bottom of the drawing area. */
void jw_ui_cursor(VGA *v, int x, int y);

/* The line of guidance the original shows when it has nothing to say. */
const char *jw_ui_guide(void);

/* Which item on the top line a screen pixel picks, or 0.
 *
 * The top line is a menu of its own: the runs between its `|` characters are
 * the items, numbered from the left.  Measured on 消去's
 * `復活出来ません |① 実行(L)|② 中止(R)|` -- columns 24 to 33 carry the erase
 * out, columns 35 to 44 call it off, and column 34, the bar itself, does
 * nothing at all.  Anything before the first bar is not an item either.
 *
 * It reads the line jw_ui_draw last drew, so call it after that. */
void jw_ui_band_last(VGA *v, const JwUi *s);
int jw_ui_top_item(int x, int y);

#endif
