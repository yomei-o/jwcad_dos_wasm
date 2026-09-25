/* What the program is in the middle of doing.
 *
 * The original is a state machine: a menu item puts it into a command, and the
 * presses that follow mean whatever that command says they mean.  This holds
 * that much of it -- which command, and what has been pressed so far -- and no
 * more.  One command is implemented: ／ (command 3), the plain line.  Two
 * presses draw one, which is what the original does (tools/line.sh drives it
 * and leaves the picture to compare against).
 */
#ifndef JW_CMD_H
#define JW_CMD_H

#include "jwc.h"
#include "read.h"
#include "view.h"

/* How many entities 消去 can have picked out of its range by hand.  See the
 * `flip` list below. */
#define JW_FLIP_MAX 64

#include "zukei.h"

/* What kind of entity a `flip` entry names. */
#define JW_FLIP_LINE 0
#define JW_FLIP_ARC  1
#define JW_FLIP_TEXT 2

/* How many points 測定 keeps for drawing its legs.  The original's own limit
 * is not known; this is enough for any run a check makes. */
#define JW_MEAS_MAX 64

/* 残数 100 -- how many lines a hatch frame can hold. */
#define JW_HATCH_MAX 100

typedef struct {
    int command;                /* the menu item in force, 1 to 30, or 0 */
    int pressed;                /* how many points have been taken */
    double x0, y0;              /* the first of them, in drawing units */
    /* What the panel shows while it runs: how far in, and the two numbers the
     * original writes -- the length and the angle for a line, the two sides for
     * a box, the radius and the diameter for a circle.  The lengths are
     * millimetres of the real thing: drawing units over `unit_mm`, times the
     * scale the panel shows.  Measured -- (300,200) to (400,200) is a hundred
     * pixels and the original calls it 57.336 mm on SAMPLE0, which is
     * 100 / (518/297) / 1. */
    int stage;
    double num[2];
    int dec[2];                 /* how many decimals each is shown to */
    /* The last press looked for an entity and found none, which the original
     * says in the band beside the counts.  It stays up until a press finds
     * something or another item is picked -- see src/ui.c. */
    int missed;
    /* 消去's range: the other corner, once the right button has fixed it.
     * `pressed` counts the presses -- 1 while the box is being dragged, 2 once
     * it is fixed and what it picked is painted in colour 2. */
    double x1, y1;
    /* 複線: the line it was pointed at, the number being typed, and the
     * interval that number came to.  See RESUME.md 4.12.
     *
     * `typing` is on between the press that picks the line and the Enter that
     * ends the number; while it is on the keys are the command's, not the
     * menu's.  The field is eight columns wide, which is how much the original
     * clears for it. */
    long pick;
    int typing;
    char typed[48];
    int typed_n;
    double gap;                 /* millimetres of paper, as typed */
    /* The line that was pointed at, kept here so that the band it drags and
     * the press that fixes it can both work without the drawing in hand, and
     * so that neither can be looking at a line that has moved since. */
    double lx0, ly0, lx1, ly1;
    double per_mm;              /* drawing units to a millimetre of paper */
    double nx, ny;              /* the side the last copy went to, as a unit
                                 * normal -- 「②連続」 repeats it */
    /* 消去's 追加･除外: what has been taken out of the range by hand, and what
     * has been put in from outside it.  The selection is "inside the range,
     * exclusive-or this list", so both directions need only the one list.
     *
     * A list rather than a flag on every entity: this is the command's own
     * state and lives only as long as the command does, and what a person
     * picks out one at a time is a handful.  Past JW_FLIP_MAX the press is
     * ignored, which is the one place this is not the original. */
    struct { unsigned char kind; long at; } flip[JW_FLIP_MAX];
    int n_flip;
    /* [F2] in 追加･除外 empties the selection: after it the range holds
     * nothing and the presses build a new set up from nothing.  Measured --
     * see jw_cmd_key. */
    int cleared;
    /* 消去's ②範囲外消去: the range picks what it does *not* hold.  Its own
     * line offers it before the first press. */
    int outside;
    /* 消去's ③指定範囲: the data selection 複写 and 移動 use.  The range is
     * taken with two presses the way 追加･除外 takes it, and the **first**
     * button says what goes in the net -- `(L)線･円` leaves the texts out,
     * `(R)線･円･文字` takes them.  Measured on SAMPLE0 with
     * (150,130)-(245,170): the right button reddens 224 pixels (lines 5 and 6
     * and text 0), the left one 89 (the two lines alone).
     *
     * `with_text` is which of the two the first press was.  The top line says
     * so too -- `<線･円>` against `線･円･文字`, with a third item ③文字種 only
     * in the second.  See src/span.h. */
    int span;
    int with_text;
    /* How many entities there were when the range was fixed.  The selection is
     * that set and no other: 複写 puts its copies at the end of the arrays, and
     * a copy that lands inside the box is **not** picked up by it -- the
     * original leaves the copies white while the originals stay red.  Measured
     * with a five-millimetre distance, where the copy overlaps the box. */
    long n0_lines, n0_arcs, n0_texts;
    /* And the set itself, once 複写 or 移動 has acted on it.  The box test is
     * no use afterwards -- 移動 takes the entities out of the box and the
     * original still shows them picked -- so what was picked is written down
     * at that moment.  NULL until then; jw_cmd_pick frees them. */
    unsigned char *sel_line, *sel_arc, *sel_text;
    /* 変形 ①パラメトリック変形: どの端が範囲の中だったか（1=始点、
     * 2=終点、3=両方）。**一度決めたら測り直しません**——再変形で
     * 動いた端が範囲の外へ出ても、本物は同じ端を引っぱり続けます。 */
    /* 変形 ③複線化: 範囲に丸ごと入っている線を、間隔ぶん外に膨らませた
     * 輪郭にします（4.45b）。 */
    int hen_dbl;                /* 1 = ③複線化 の道 */
    int hen_dbl_cap;            /* ④留線【有】 */
    double hen_dbl_gap;         /* ③間隔（紙のミリ） */
    long hen_dbl_from;          /* 入れた線の先頭 */
    unsigned char *hen_end;
    /* [ESC] has thrown the point away and the command is asking for it again.
     * The line it wrote over is still there, so the chrome replays the stage
     * that was up and then puts src/esc.h's three pieces on top. */
    int escaped;
    /* How many copies 複写 has made of the same selection.  ③連続 makes
     * another, one step further on: the first lands at the distance, the
     * second at twice it.  Measured -- SAMPLE0's lines go from (161,139) to
     * (196,87) and then to (231,40) with 20,30. */
    int copies;
    /* 複写's base point -- 原図形の基準点位置.  Kept apart from x0,y0, which
     * are the range's first corner and are still needed to work out what the
     * range holds. */
    double base_x, base_y;
    /* One step, in drawing units: what ③連続 repeats.  ②数値位置 puts the
     * typed millimetres here and ①ﾏｳｽ位置 the distance from the base point to
     * the press, so 連続 does not have to know which of the two made the
     * first copy. */
    double step_x, step_y;
    /* Where the last press was, on the screen, and whether the pointer has
     * moved off it since.  **The counts box does not change the moment a point
     * is taken**: the original writes the two counts back and only puts the
     * length and the angle there once the pointer moves -- one pixel is
     * enough.  Measured with ／ on SAMPLE0: press at (300,200) and the box
     * still says `30| 13`, move to (301,200) and it says `長= 0.573`
     * (one pixel is 1/unit_mm millimetres of paper) and `角度= 0.000`. */
    int press_x, press_y;
    int moved;
    /* 文字 is taking a string rather than a number: the keys go into `typed`
     * as they come and [Enter] writes the text.  Measured -- the original
     * shows the whole string again at column 1 of row 2 after every key. */
    int typing_text;
    /* 文字 ②垂直: the baseline goes **up** instead of along.  Measured on
     * SAMPLE0 -- pressing ②垂直 (columns 34..39 of the item's line) and then
     * (250,200) and `ABC` leaves (129,263)-(129,271.721), where ①水平 leaves
     * (129,263)-(137.721,263).  Everything else about the record is the
     * same. */
    int text_vert;
    /* 複写 ⑤反転: 1 while it asks for the 反転基準線, 2 once the copies are
     * down.  See mirror_range. */
    int mirror;
    /* 複写/移動 ⑥回転: 1 while it asks for the 基準点, 2 while it asks for
     * the angle, 3 once the angle is in and it wants the place, 4 once a copy
     * is down.  rot_deg is what was typed.  See turn_range. */
    int rotate;
    double rot_deg;
    /* 複写/移動 ③数値倍率, which goes through the same four steps as ⑥回転
     * with a pair of scales instead of an angle.  See scale_range. */
    int scaling;
    double scale_x, scale_y;
    /* 複写/移動 ④ﾏｳｽ倍率: 1 while it asks for the 基準点, then the opposite
     * corner of the box round the original (msc_bx), then where it goes
     * (msc_px), then the opposite corner of the box the copy has to fill,
     * which is what settles the scale.  5 once a copy is down. */
    int mscale;
    double msc_bx, msc_by, msc_px, msc_py;
    /* Where the next key goes in `typed`.  文字 always appends, so it is
     * `typed_n` there; 文編集 starts the field with the text it was pointed
     * at and the cursor at the **front** -- typing `ABC` on 「Ｈ７－Ａ００１」
     * leaves 「ABCＨ７－Ａ００１」, measured off the original's own echo. */
    int typed_at;
    /* 文編集: the text being changed, or -1. */
    long edit_text;
    /* 曲線 ⑦連線 —— the polyline with rounded corners.
     *
     * Each press gives a point.  The **direction** of a segment is the one
     * from the press before it, rounded to `poly_deg` degrees (45 to start
     * with, 90 after ①角 度, free after a second press of it), and the line
     * it lies on goes **through the newest press** -- not through the vertex
     * the segment before it left.  The first one is the odd one: it is
     * anchored at the 始点.  Two lines meet at their intersection, and the
     * corner is rounded there.  See jw_cmd_press and RESUME 4.20b. */
    /* 曲線 ①ｻｲﾝ曲線。段 10 基準線、11 座標原点、12 1ｻｲｸﾙの長さ、
     * 13 振幅、14 始点、15 終点、16 分割 長さ。値は紙のミリ。 */
    int sine;
    double sine_ux, sine_uy;    /* 基準線の向き */
    double sine_ox, sine_oy;    /* 座標原点 */
    double sine_ax, sine_ay;    /* 始点 */
    double sine_bx, sine_by;    /* 終点 */
    double sine_cycle, sine_amp, sine_div;
    int sine_did;               /* 一本でも引いたら桁 1 に [ESC] */
    /* 曲線 ③ｽﾌﾟﾗｲﾝ。点を並べて ①点指示終了 → ①作図開始。 */
    int spl;                    /* 道が走っている */
    int spl_n;                  /* 取った点の数（最大 50） */
    int spl_div;                /* 区間分割数（初めは 5） */
    double spl_x[50], spl_y[50];
    int poly;                   /* ⑦連線 is running */
    int poly_deg;               /* 45, 90 or 0 for free */
    int poly_n;                 /* how many points have been pressed */
    double poly_px, poly_py;    /* the press before this one */
    double poly_ax, poly_ay;    /* the line in hand: a point on it ... */
    double poly_dx, poly_dy;    /* ... and its direction, already rounded */
    double poly_sx, poly_sy;    /* where the segment being drawn starts */
    double edge_mm;             /* ③辺寸法, millimetres of paper */
    double poly_t;              /* and the same in drawing units */
    /* ハッチ（18 番）—— 枠にした線と、その角度とピッチ。
     *
     * 枠は押した線そのもので持ちます（頂点ではなく辺）。ハッチ線は
     * 「原点からの法線距離がピッチの整数倍」の族で、枠の辺との交点を
     * 並べて内側だけを引きます。src/cmd.c の hatch_run を見てください。 */
    long hatch_line[JW_HATCH_MAX];
    int hatch_n;                /* how many are in the frame */
    int hatch;                  /* the frame is being taken */
    /* 円線接（26 番）の ①接線 ③指定点 —— 指した点と、そこから円に引いた
     * 接線。②接円 と ①円～円間・②円周点・④角度指定 は入れていません。 */
    /* 寸法（14 番の ①横方向）—— 引出し線の始点、寸法線の高さ、
     * 寸法値の始点。終点を読むと線 3 本と文字が 1 つ入ります。 */
    double dim_bx, dim_by;      /* 引出し線の始点 */
    double dim_y;               /* 寸法線を書く位置（の y） */
    double dim_x0;              /* 寸法値の始点（の x） */
    double dim_x1;              /* さっき書いた寸法値の終点。①連続 が継ぐ */
    double dim_ya;              /* 寸法線を押した点の、線に沿った側 */
    /* ②半径・③直径: 1 なら R、2 なら φ。値の前に付いて、寸法線の A バイトが
     * 0xa2、文字の最後のバイトが 0x41／0x42 になります。 */
    /* 寸法 ④円･角 ①円径: `円マウス指示 半径(L) 直径(R)` -- 円を指示すると
     * その場で一本入ります。段 9 がその問いで、段 10 は ③書込角度 の欄。 */
    /* ④円･角 ②円周: 円を指示して、その円周の始点と終点、引出し線の始点、
     * 寸法線の位置——五つの押しで一本入ります（段 11..15）。 */
    int dim_arc;                /* 1 = ②円周 の道 */
    /* いま入れている一本が始まるところ。n0_* は道に入ったところで、
     * この二つの差が「帯の下 2 行にも残るもの」です。 */
    long dim_seen_lines, dim_seen_arcs, dim_seen_texts;
    int dim_arc_end;            /* ①端部: 0 = 点、1 = 矢印 */
    int dim_arc_miss;           /* 円を探して線が出た（線データです） */
    /* ③角度 も同じ道です（dim_arc は 1 が ②円周、2 が ③角度）。②円周 は
     * 指示された円の中心と半径、③角度 は 原点マウス指示 で取った点。 */
    double dim_arc_cx, dim_arc_cy, dim_arc_r;
    /* ③【２線間】: 始線と終線を指示して、その交点まわりの角度。 */
    /* ⑤一括: 始線と終線、それに 追加線･除外線 で選んだ線を並べて、
     * 隣どうしのあいだに寸法を入れます（段 21..23）。 */
    int dim_lot;
    int dim_lot_n;
    int dim_lot_run;            /* 1 = 一本目、2 = 二本目から（引出し線が
                                 * 一本ぶん減ります） */
    long dim_lot_k[64];
    int dim_lot_sx, dim_lot_sy;         /* 始線を押した画面の点 */
    int dim_arc_two;
    long dim_arc_l0;            /* 始線 */
    double dim_arc_px, dim_arc_py;      /* 始線を押したところ */
    int dim_arc_unit;           /* ③角度 の ②単位: 0 = 度、1 = 度分秒 */
    double dim_arc_a0, dim_arc_a1;      /* 始点・終点の角度（度、反時計） */
    double dim_arc_r0;          /* 引出し線の始点までの半径 */
    char dim_arc_val[24];       /* 描いたあと帯の桁 17 に出る値 */
    int dim_ck;
    int dim_ck_out;             /* ①矢印【外】 */
    int dim_ck_vout;            /* ②値【外】 */
    double dim_ck_deg;          /* ③書込角度 */
    double dim_ck_prev;         /* その欄の「前回と同じ」-- 初めは 90 度 */
    char dim_ck_val[24];        /* 描いたあと帯の桁 18 に出る値 */
    int dim_circle;
    /* ⑧値変: 1 なら値を待っている、2 なら欄を出している。`dim_val_k` は
     * 書き直す文字のばんごう、`dim_val_size` は 変更文字種類 の [Fn]。 */
    int dim_val;
    long dim_val_k;
    int dim_val_size;
    /* ④累寸: 始点は一つで、読むたびにそこからの寸法が増えます。 */
    int dim_prog;
    int dim_prog_n;
    double dim_a0;
    double dim_value;           /* さっき書いた寸法値、帯に出るもの */
    long dim_texts;             /* 寸法値を聞きはじめたときの文字数 */
    int dim_vert;               /* ②縦方向。横と縦が入れ替わるだけ */
    /* 寸法の向き。①横方向 は (1,0)、②縦方向 は (0,1)、③任意方向 は
     * (cos,sin)。押した点はこの枠の座標で持ちます。 */
    double dim_ux, dim_uy;
    /* 寸法 ⑨設定's two that the drawing already uses: which pen the three
     * lines are drawn with and how far the value sits off the dimension
     * line, in millimetres of paper.  The front end fills them from the
     * panel; 1 and 0.5 are what the original comes up with. */
    int dim_pen;
    double dim_gap_mm;
    /* ②寸法線端部 が【矢印】のときに使う 矢印長さ（mm）と 矢印角度。 */
    int dim_end;
    double dim_ext_mm;
    /* 寸法値の書き方。`_on` は盤の【有】を 1 に直したものです。 */
    int dim_unit;
    int dim_dec;
    int dim_comma_on;
    int dim_pen_point;
    int dim_did;         /* ⑥点・⑦矢印 が一つ作った（桁 1 の [ESC]） */
    long dim_lines0;     /* ⑦矢印 を選んだときの線数。箱はそれを出し続けます */
    int dim_only;        /* ⑤寸法値: 線を引かず、値だけ書く */
    double dim_vx, dim_vy;      /* その始点 */
    int dim_zero_on;
    double dim_arrow_mm;
    double dim_angle_deg;
    int tan_on;                 /* ①接線 is running */
    /* ①接線 ④角度指定: 角度を打ってから円を指示すると、その角度の接線が
     * 決まります。始点と終点はその線の上に落として使います（4.25b）。 */
    double tan_deg;             /* 打ち込んだ角度 */
    double tan_prev;            /* その欄の「前回と同じ」-- 初めは 45 度 */
    long tan_k;                 /* ②円周点 が指示された円 */
    int tan_kind;               /* 2 = ②円周点、4 = ④角度指定 */
    long tan_kb;                /* ①円～円間 の円(Ａ) */
    /* ②接円（半径と２条件）。小項目は 1..6 で、いまは ⑥２点 だけです。 */
    int tan_circ;
    double tan_r;               /* ①接円半径（本当の大きさのミリ） */
    double tan_p1x, tan_p1y;    /* 第１点 */
    /* 接円の候補。⑥２点 は二つですが、⑤２円 は最大八つ——相手の円を
     * 内と外のどちらで抱えるかで四通り、それぞれ交点が二つです。 */
    double tan_ccx[8], tan_ccy[8];
    double tan_cr;              /* その半径（図面の単位） */
    long tan_la;                /* ④２線 の（Ａ） */
    double tan_lax, tan_lay;    /* そこを押した点 */
    int tan_cn;                 /* 候補の数 */
    /* ③接円（３条件）。10 = 小項目の行、11..14 = どの小項目か。 */
    int tan_tri;
    long tan_ln[4];             /* 接楕円・接円が押した線か円 */
    int tan_lk[4];              /* 0 = 線、1 = 円 */
    double tan_lx[4], tan_ly[4];        /* その押したところ */
    int tan_miss;               /* 円を探して線が出た（線データです） */
    double tan_apx, tan_apy;    /* 円(Ａ)を押したところ */
    int tan_did;                /* 一本引いた（桁 1 の [ESC]） */
    double tan_bx, tan_by;      /* 接線の上の一点（接点） */
    double tan_ax, tan_ay;      /* 始点を落としたところ */
    double tan_x, tan_y;        /* the 指定点 it has in hand */
    int hatch_closed;           /* the start line has come round again */
    long hatch_first;           /* the first line ① 実 行 made */
    /* ＋ and ／'s ②寸 法 and ③角 度: which of the two is being asked for,
     * 0 for neither, 1 for the length, 2 for the angle, 3 for a line to
     * be parallel to and 4 for one to be square to.  Both ask from
     * the top line, and both offer what was used last -- `任意寸法 ﾏｳｽ(L)
     * 前回と同じ ﾏｳｽ(R)` -- so the last one is kept here.  The screens are
     * in src/ui.c and the numbers the original comes up with are in
     * jw_cmd_pick. */
    /* Which cell of the top row was pressed, and with which button, when
     * nothing else in jw_cmd_top claimed it.  src/item.h holds what the
     * original writes for each -- **the line, not yet the behaviour**: as
     * each command's item is built, its own code claims the press and the
     * entry goes out of the table. */
    /* 図形 ①登録's road: 0 = not on it, 1 = the range is being taken, and
     * on from there -- see src/zukei.h, which holds what the original writes
     * at each step, and JW_ZUKEI_* below. */
    int zukei;
    double zukei_bx, zukei_by;  /* the base point, in drawing units */
    char zukei_name[16];        /* ◆図形名入力 */
    int zukei_name_n;
    /* 図形 ②読込.  The group's figures are the host's business -- it reads
     * the directory and the file -- so `zukei_n` is how many it found and
     * `zukei_in` is the one in hand, in the millimetres the file keeps. */
    int zukei_n;
    const JwcZukei *zukei_in;
    /* What jwc_zukei_bytes multiplied by, worked out when the file was read:
     * millimetres in one of this drawing's units.  **The preview divides by
     * it and the placing multiplies by its reciprocal** -- two different
     * routines in the original, and they do not agree to the last bit: the
     * string whose 4242.85693 millimetres is 37 units exactly comes out
     * 36.999996 the other way, and a whole pixel lower on the screen. */
    float zukei_scale;
    /* The angle the figure goes in at, in degrees anticlockwise about its
     * base point.  ③90ﾟ毎 walks it 0, 90, 180, 270 and back to 0 -- the
     * original writes each of the four into the band beside the counts, and
     * the preview turns with it (SAMPLE0's upright BOX comes out lying
     * along y=238 at 90). */
    float zukei_ang;
    /* ④ﾏｳｽ角 walks three ways round: nothing, `Ｘ 方向`, `Ｙ 方向` and back
     * to nothing, each with its own word at column 64 of the band.  **What
     * the two do is not measured yet** -- with Ｘ 方向 up the figure stays
     * upright as the pointer moves, so the angle must be taken from a press
     * and not from where the pointer is. */
    int zukei_mouse;
    /* ⑤仮表示 turns the preview off and on.  Off it writes `無` at column 76
     * and nothing follows the pointer; on, the word goes and the figure is
     * back.  Measured both ways. */
    int zukei_noghost;
    /* ②角  度 and ①倍率指定X,Y both ask for a number in a field along the
     * top: JW_ZUKEI_ANG or JW_ZUKEI_MAG while one is open, 0 otherwise.
     *
     * The value in brackets is **what 前回と同じ would use**, not the one in
     * force: the first time ②角  度 is pressed the band says 0.000 and the
     * brackets say 90.000, and after 30 has been entered they say 30.000.
     * It starts at 90 degrees and at 1,1. */
    int zukei_ask;
    char zukei_typed[16];
    int zukei_typed_n;
    float zukei_prev_ang;
    float zukei_mx, zukei_my;
    int top_item;
    int top_right;
    /* A press on the top line that landed outside every cell.  The command's
     * band goes and the two counts come back; nothing else changes. */
    int band_off;
    /* The menu item was picked while it was already the one in force -- see
     * JwUi.again.  It lives here because jw_ui_from starts from a cleared
     * JwUi, so anything kept only there is lost the moment a press makes the
     * chrome read the drawing again. */
    int again;
    int ask_kind;
    double ask_len;             /* `[  1000.000mm]` */
    double ask_ang;             /* `[  45.000\xdf]` */
    double hatch_angle;         /* ③角 度, degrees -- 45.00 to start with */
    double hatch_pitch;         /* ④ﾋﾟｯﾁ, millimetres of paper -- 10.0 */
    /* How wide and how tall the string being typed comes out, in drawing
     * units -- the box 文字 shows while it is being typed.  Worked out again
     * after every key, because the width follows from the string. */
    double text_wide, text_tall;
    /* コーナー連結's first line -- the one it calls 「Ａ」 -- while it waits
     * for the second.  -1 when it has none. */
    long pick_a;
    /* And where that first press was, on the screen.  Kept apart from
     * press_x/press_y, which jw_cmd_press overwrites at the top of **every**
     * press: both 線伸縮 and コーナー連結 have to remember which side of
     * the line the *first* press was on, and by the time the second arrives
     * press_x is already the second one. */
    int pick_x, pick_y;
    /* 線切断 has cut a line and the pointer has not moved off it yet.  The
     * original says `□ 線切断はマウス移動` until it does and then puts its
     * own line back, so this is what picks src/stage.h's stage 11 over
     * stage 2. */
    int cutting;
    /* Where 線切断 will cut, in drawing units, while it waits for the move. */
    double cut_x, cut_y;
    /* 中心線's second line, and the two presses that chose the pair.  The
     * centre line is the bisector of the two, and **which** of the two
     * bisectors is decided by the side each line was pressed on. */
    long pick_b;
    int pick_bx, pick_by;
    /* 測定【①距離】's running total and last leg, in metres, and where the
     * last press was.  Each press adds the leg from the one before. */
    double meas_total, meas_last, meas_x, meas_y;
    /* And the points themselves, so the legs can be drawn: the original puts
     * each one on the screen in colour 2 as it is measured. */
    double meas_px[JW_MEAS_MAX], meas_py[JW_MEAS_MAX];
    int meas_n;
    /* 正多角形's number of sides -- `正多角形の角数 = ` with `[5]` offered
     * as 前回と同じ. */
    int sides;
    /* 分割's count -- `分割 数 = ` with `[2]` offered as 前回と同じ.  The
     * original starts at 2 and remembers what was last typed. */
    int divisions;
    /* ２線's two gaps, in paper millimetres -- `①基準線からの間隔＝
     * 75.000 , 75.000 (mm)`.  The first is the side the new lines are written
     * in first (see two_lines). */
    double gap_two[2];
    /* ２線 has both ends and is waiting for the pointer to leave, the way
     * 線切断 does. */
    int pending;
    /* 面取's chamfer length, in paper millimetres.  The top line offers it as
     * `③寸法= 30.000` and starts there. */
    double gap_chamfer;
    /* Which of 面取's four shapes ① has come round to: 0 角面, 1 丸面,
     * 2 Ｌ面, 3 楕円面.  See src/ui.c for the line each one writes. */
    int chamfer;
    /* What 線変更 took: 1 a line, 2 an arc, 0 nothing yet.  The word it writes
     * beside the counts is `線` or `円` accordingly. */
    int hit_kind;
    /* Which modifier keys were held when the press happened -- JW_MOD_* from
     * src/read.h.  The front end puts them here before jw_cmd_press, because
     * that is when the original looks: it asks the BIOS at the press itself
     * and not while the pointer is moving. */
    int mods;
    /* A modified read that is waiting for its second press.  Both [SHIFT] and
     * [GRPH] take two: the first says what to work from and the second says
     * where.  See src/read.h for what was measured.
     *
     *   JW_SNAP_ON   [SHIFT]: `snap_kind`/`snap_at` name the line or arc that
     *                was picked, and the next press is put on it.
     *   JW_SNAP_MID  [GRPH]: `snap_x`,`snap_y` are Ａ点 and the next press is
     *                Ｂ点; the answer is the middle of the two.
     *
     * The second press indicates its point the ordinary way -- free with the
     * left button, read with the right -- so a right press that reads nothing
     * leaves the mode up and takes nothing, which is what the original does. */
    int snap;
    int snap_kind;              /* JW_ON_LINE or JW_ON_ARC */
    long snap_at;
    double snap_x, snap_y;
} JwCmd;

/* Which commands take a range with two presses the way ③指定範囲 does: 消去
 * itself, and 複写, whose own line offers the same `(L)線･円  (R)線･円･文字`
 * and whose first stage is spelt exactly the same (src/copy.h). */
#define JW_RANGE_CMD(n) ((n) == 25 || (n) == 1 || (n) == 16 || (n) == 27 || (n) == 17)

/* And which of those put what the range holds somewhere else: 複写 leaves the
 * originals and 移動 does not, but everything up to the distance is the same
 * (src/copy.h and src/move.h differ in a word or two). */
#define JW_MOVE_CMD(n) ((n) == 1 || (n) == 16)

/* The stages 複写 and 移動 end a copy on, where the line offers
 * `|①同形別処理|②他図形処理|③連続|`: 8 is ②数値位置's, 9 is ①ﾏｳｽ位置's, and
 * 16, 20 and 25 belong to ⑥回転, ③数値倍率 and ④ﾏｳｽ倍率 (src/typed.h).  The
 * line is word for word the same in all of them. */
/* 移動 takes the originals with it where 複写 leaves them behind; the
 * transforms are the same either way. */
#define JW_MOVING(c) ((c)->command == 16)

#define JW_REDO_STAGE(n) \
    ((n) == 8 || (n) == 9 || (n) == 16 || (n) == 20 || (n) == 25)

/* Start a command, or leave it (0).
 *
 * The struct must be zeroed before the first call: it owns a little memory --
 * what 複写 and 移動 picked out of a range -- and this frees what was there. */
void jw_cmd_pick(JwCmd *c, int command);

/* A press inside the drawing area, at a screen pixel.  `right` is the other
 * button, which the original reads as a different answer: 線消 takes a line
 * away with it where the left one would start cutting a piece out.  Returns 1
 * if the drawing changed and has to be drawn again. */
int jw_cmd_press(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy, int right);

/* Which line is under a point, or -1.  The original's reach is eight drawing
 * units: the point has to be within eight of the line itself *and* within eight
 * of the ends' box.  Measured on SAMPLE0's top edge -- seven above it hits and
 * eight does not, seven past its end hits and twelve does not -- and on a
 * diagonal drawn for the purpose, which is not picked from the far side of its
 * own bounding box. */
long jw_cmd_line_at(const Jwc *d, const JwView *w, int sx, int sy);

/* The same, but taking only what is drawn with the pen and line type that
 * are selected for writing when `only_writing` is set.  That is what a press
 * with a **modifier key held** does; a plain press takes anything, whichever
 * command is asking -- see writing_kind in src/cmd.c. */
long jw_cmd_line_at_kind(const Jwc *d, const JwView *w, int sx, int sy,
                         int only_writing);

/* And which arc, or -1.  The original's 線消 says 線,円弧 and takes either. */
long jw_cmd_arc_at(const Jwc *d, const JwView *w, int sx, int sy);
long jw_cmd_arc_at_kind(const Jwc *d, const JwView *w, int sx, int sy,
                        int only_writing);

/* Which text a press takes, or -1 -- 消去's 追加･除外 with the right button.
 * A box around the baseline, not a distance; see src/cmd.c. */
long jw_cmd_text_at(const Jwc *d, const JwView *w, int sx, int sy);

/* Is this entity inside 消去's fixed range?  Only what falls **wholly** inside
 * is taken -- SAMPLE0's line 5 and line 6 and text 0 go when (150,130)-(245,170)
 * is drawn round them, and line 1, which merely crosses the box, stays. */
int jw_cmd_in_range(const JwCmd *c, double ax, double ay, double bx, double by);

/* Paint what 消去 has picked, the way the original does: the entities inside
 * the range again, in colour 2, on top of the drawing.  Nothing else moves --
 * 224 white pixels turn red and not one other pixel changes. */
/* Where ２線's pair runs -- `e` is filled with x0,y0,x1,y1 of the i-th of the
 * two.  Returns 0 when there is nothing to draw. */
int jw_cmd_two_line(const JwCmd *c, const Jwc *d, int i, double *e);

void jw_cmd_marked(const JwCmd *c, VGA *v, const Jwc *d, const JwView *w);

/* And what 図形 ①登録 leaves behind once the figure has been written: the
 * same selection, drawn again in its own colours on top of everything.  See
 * src/cmd.c -- the original does not repaint, so what it wrote stays on top. */
void jw_cmd_zukei_left(const JwCmd *c, VGA *v, const Jwc *d, const JwView *w);

/* And what the command has **made** since the range was fixed -- 複写's
 * copies -- drawn over the finished screen, chrome and all.  That is the
 * original's own order: it paints a new entity on top rather than redrawing,
 * and the two rows under the top line were cleared once, when the item was
 * picked.  Call it after jw_ui_draw. */
void jw_cmd_before(const JwCmd *c, VGA *v, const Jwc *d,
                   const JwView *w);
void jw_cmd_after(const JwCmd *c, VGA *v, const Jwc *d, const JwView *w);
/* 寸法 の 2 本の案内線が画面のどこに来るか。戻り値は本数（0/1/2）で、
 * `*vert` が縦かどうか、`*a` が 引出し線の始点、`*b` が 寸法線 の位置。
 * 引くのは枠（jw_ui_draw）です —— 順番のわけは cmd.c の注釈に。 */
int jw_cmd_guide_pos(const JwCmd *c, const JwView *w, int seg[2][4]);

/* A press on the top line, which is a menu of its own: the runs between the
 * `|` characters are the items, numbered from the left.  Measured on 消去's
 * `復活出来ません |① 実行(L)|② 中止(R)|` -- columns 24 to 33 carry it out,
 * 35 to 44 call it off, and column 34, the bar itself, does nothing.
 * Returns 1 if the drawing changed. */
int jw_cmd_top(JwCmd *c, Jwc *d, int item, int right);

/* 図形 ①登録 -- the bytes of the .JWK for what the range picked, measured
 * from the base point that was pressed.  NULL and a reason when there is
 * nothing to write, which is what the original does with an empty range: it
 * offers 書き込みます all the same and then leaves the directory empty. */
unsigned char *jw_cmd_zukei_bytes(const JwCmd *c, const Jwc *d,
                                  long *out_len, const char **why);

/* 図形 ②読込: a figure has been taken in hand, so the road goes to 位置指示
 * and everything that steers the placing starts again. */
void jw_cmd_zukei_put(JwCmd *c, const Jwc *d);

/* Has src/item.h anything to say about this press?  Defined in src/ui.c,
 * which is where the table lives. */
int jw_ui_item_has(int command, int item, int right);

/* A key, while a command is asking for a number.  Digits and a point go into
 * the field, [BS] takes one back and [Enter] ends it; anything else is left
 * alone.  Returns 1 if the key was the command's, so that the caller knows not
 * to treat it as a menu key.
 *
 * The original echoes each character itself, one cell along from the last --
 * `"2  "` at column 22, `"0  "` at column 23 -- and clears the two cells after
 * it, which is how [BS] can put the field back.  src/ui.c draws the field from
 * `typed` and gets the same picture. */
int jw_cmd_key(JwCmd *c, Jwc *d, int key);
/* 寸法 ③任意方向 の角度が決まったとき。度で渡します。 */
void jw_cmd_dim_angle(JwCmd *c, double deg);

/* The function keys, for jw_cmd_key.  They are not characters, so they are
 * numbered past the byte the rest of the keys come in as.  While 複線 is
 * asking for a number, [F1] to [F5] are the five it offers along the top --
 * 1000, 100, 200, 300 and 500 -- and pressing one is the same as typing that
 * and pressing [Enter] (measured: [F1] and [F3] both go straight to
 * `○ 複写方向マウス指示(L)` with the value in the band). */
#define JW_KEY_F1 0x101
#define JW_KEY_F2 0x102
#define JW_KEY_F5 0x105
#define JW_KEY_F10 0x10a

/* Move the pointer without pressing.  While a command has a point in hand the
 * original keeps the reading under the counts up to date -- the length and the
 * angle to wherever the pointer is -- so this works them out again. */
/* The drawing is not const here: 線切断 cuts the line it was given **when the
 * pointer moves off it**, not at the press (`□ 線切断はマウス移動`), and this
 * is where that lands. */
void jw_cmd_track(JwCmd *c, Jwc *d, const JwView *w, int sx, int sy);

/* The line the original drags from the point already taken to wherever the
 * pointer is: colour 2, exclusive-or (0x18), solid.  □ drags a rectangle of
 * four of them and ○ a circle, both the same way.  Drawn after everything
 * else, like the pointer, and taken back by drawing it again.
 *
 * Nothing happens if no point has been taken yet. */
void jw_cmd_band(const JwCmd *c, const Jwc *d, VGA *v, const JwView *w,
                 int sx, int sy);

/* Where a screen pixel is in the drawing.  The view puts a drawing point at
 * `(x - ox) * scale + ax`, so this is that read backwards. */
void jw_cmd_at(const JwView *w, int sx, int sy, double *x, double *y);

#endif
