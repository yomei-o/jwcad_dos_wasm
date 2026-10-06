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
    char typed[96];            /* 入力欄：画面の桁 78 までで 63 文字（decomp numin）に足りる大きさ */
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
    /* 線記号変形: how much ink there was when the symbol went down, plus
     * one (0 = not set).  jw_cmd_after puts the symbol back in the order
     * it was made, which the ink keeps (see there). */
    long n0_ink;
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
    long hen_dbl_from;          /* 入れた線の先頭 */    /* 曲線 ⑤手書線。押し二つで一本、[F1]〜[F10] で作図ｽﾃｯﾌﾟ。 */
    int hand;                   /* 道が走っている */
    int hand_step;              /* 作図ｽﾃｯﾌﾟ（ﾄﾞｯﾄ、既定 4） */
    double hand_x, hand_y;      /* いま引いているところ */
    int hand_sx, hand_sy;       /* 同じところ、画面の画素で */
    long hand_from;             /* この一筆で足した線の先頭 */
    int hand_did;               /* 一度でも引いた（行に [ESC]） */
    int hen_env;                /* 1 = ②包絡処理変形 の道 */
    int hen_env_all;            /* ①【全 線 種】（既定は【実線のみ】） */
    int hen_env_did;            /* 一度でも包絡・消去した（行に [ESC]） */
    int hen_env_msg;            /* `.線数は５０までです` を出している */

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
    int sine;                   /* 1=ｻｲﾝ曲線、2=⑧解除、3=２次曲線 */
    double sine_qa;             /* ②２次曲線 の y = a x^2 */
    /* 曲線 ⑥連続弧。三点で一本目、あとは前の弧に接しながら伸びます。 */
    int chain;                  /* 道が走っている */
    double ch_ax, ch_ay;        /* 第１の弧の始点 */
    double ch_mx, ch_my;        /* 中間点 */
    double ch_px, ch_py;        /* いまの端 */
    double ch_cx, ch_cy;        /* いまの弧の中心 */
    double ch_tx, ch_ty;        /* 端での進む向き */
    int ch_rev;                 /* ②弧反転（掃きを逆に） */
    /* [ESC] で一本ずつ戻すための、足す前の状態。 */
    int ch_n;
    struct {
        double px, py, cx, cy, tx, ty;
        long nl, na;
    } ch_undo[128];
    int ch_line;                /* ④直線（次は線） */
    double ch_r;                /* ③半径 の欄（実寸ミリ） */
    int ch_r_on;                /* その半径を使うか（欄の既定とは別） */
    double sine_ux, sine_uy;    /* 基準線の向き */
    double sine_ox, sine_oy;    /* 座標原点 */
    double sine_ax, sine_ay;    /* 始点 */
    double sine_bx, sine_by;    /* 終点 */
    double sine_cycle, sine_amp, sine_div;
    int sine_did;               /* 一本でも引いたら桁 1 に [ESC] */
    /* 曲線 ③ｽﾌﾟﾗｲﾝ。点を並べて ①点指示終了 → ①作図開始。 */
    int spl;                    /* 道が走っている（1=ｽﾌﾟﾗｲﾝ、2=ﾍﾞｼﾞｪ） */
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
    /* ⑦連線 の [ESC] のための、押す前の状態（押し一回ぶんずつ）。 */
    int pu_n;
    struct {
        int n;
        double px, py, ax, ay, dx, dy, sx, sy;
        long nl, na;
    } pu[128];
    /* ハッチ（18 番）—— 枠にした線と、その角度とピッチ。
     *
     * 枠は押した線そのもので持ちます（頂点ではなく辺）。ハッチ線は
     * 「原点からの法線距離がピッチの整数倍」の族で、枠の辺との交点を
     * 並べて内側だけを引きます。src/cmd.c の hatch_run を見てください。 */
    long hatch_line[JW_HATCH_MAX];
    int hatch_n;                /* how many are in the frame */
    int field_cursor;           /* 入力欄のカーソル桁（ui の最後の描画から。-1 は無し） */
    int lc_off;                 /* 線変更 ②レイヤ変更 が【無】（升 ② を押した） */
    int lc_range;                /* 線変更 ①指定範囲内変更 の道（実機で確認：
                                   * 升①→範囲（OVL5 共有の箱取り）→絞り込み→
                                   * 変更内容、RESUME.md 4 参照）。1 で範囲取りに
                                   * 入っている。 */
    int lc_narrow;                /* 絞り込み（stage 2 の升）: 0 未選択、
                                   * 1 指定線種・2 指定線色（どちらも実機で画面は
                                   * 確認したがフィルタの入力は未実装）、
                                   * 3 全線変更（実装済み・フィルタなし）。 */
    int meas_hold;              /* 測定：文を置いた直後は数え箱の 文数 を一つ遅らせる（1 なら -1 を保留） */
    int off_typed;              /* 最後に決めた間隔は打った数 */
    int off_label_gone;         /* 複線の F1〜F5 の札：外れで消え、欄を開き直すまで戻らない */
    int off_pt;                 /* 点押しで間隔を決めた直後（連続の行になる）*/
    /* 複線 の `● 前線と連続(R)`：decomp（ovl7 0x2cc46〜0x2ce00）の条件は
     * 前の基準線 id が非 0・今の基準線 id が正・前の線の属性(rest[1])が 0xc0
     * を含まない・基準線同士の交点が画面内、の四つ。off_prev_pick/
     * off_prev_copy が前回の複写でどの線を基準にどの線を足したかを持ち、
     * off_done はその四条件から毎回計算し直す（offset_can_continue）。 */
    int off_done;               /* 複線：前線と連続(R) が今出せるか（四条件） */
    long off_prev_pick;         /* 前の基準線 id（前回複写した元の線。-1 は無し） */
    long off_prev_copy;         /* 前回の複写線（R のトリム相手。-1 は無し） */
    double gap_hist[5];         /* 複線 の 間隔 の F1〜F5 */
    int hatch_used;             /* 残数の元：取った本数（[ESC] の取消では戻らない） */
    int hatch_plain;            /* 最初の行の数字で 残数 を消した */
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
    long dim_seen_lines, dim_seen_arcs, dim_seen_texts, dim_seen_points;
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
    /* 変形 ④線記号変形。一覧が出ているかと、どのグループか。 */
    int hen_kigou;
    int kigou_pick;
    int kigou_sym;
    long kigou_line;  /* 拾った指示線 1、無ければ -1 */
    long kigou_line2; /* 指示線 2、無ければ -1 */
    int kigou_input;  /* 文字入力の盤が出ているか */
    int kigou_in_at;  /* 何番目の文字の部材を聞いているか */
    char kigou_in_buf[64];       /* 打った文字 */
    int kigou_in_n;
    /* ①倍率 横,縦。上の行の 1 つめの升で開きます。 */
    int kigou_mag_ask;
    char kigou_mag_typed[32];
    int kigou_mag_n;
    double kigou_mag_x, kigou_mag_y;
    double kigou_px, kigou_py;   /* そのとき押したところ */
    int kigou_group;
    int dim_dec;
    int dim_comma_on;
    int dim_pen_point;
    /* 寸法 の [ESC]：最後に入れた寸法の前の件数（本物の [bp-0x72] と
     * [bp-0x16]・[bp-0xa2]・[bp-0x1c]、ovl27 0x2e0ba〜0x2e16d）。 */
    int dim_undo;
    long dim_ul, dim_up, dim_ut;
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
    long tan_na_mark;           /* ③ の取り消し：始めたときの円弧の数 */
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
    /* 図形 の帯の項目 ③表示・⑥レイヤ：升を選ばずに idle のまま押せる、
     * 関数呼び出しの無い純粋な状態トグル（ovl31 メインディスパッチャ
     * dis 032a6c〜、local_cc==3/6 の分岐）。
     *   ③表示 (DS:[0x1174])：`+= 1; if (1 < v) v = 0;` という式は 0→1→0→1…
     *   という 0/1 トグルに畳み込まれる（2 以上には絶対にならない）。
     *   ⑥レイヤ (DS:[0x1175])：`+= 1; if (2 < v) v = 0;` は 0→1→2→0 の
     *   3 値サイクル。
     * どちらも帯の文字列選択（DS:0x712e 系・0x7146 系、dis 02b94〜02c04）に
     * 使われているらしいが、どの文字列がどの画面に出るかは実機でまだ
     * 追えていない（測定のみ・decomp未確認、RESUME.md 項目 7 参照）。 */
    int zukei_disp;              /* 0x1174 相当：③表示、0/1 トグル */
    int zukei_layer;             /* 0x1175 相当：⑥レイヤ、0/1/2 サイクル */
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
    /* 本物は float で持っています（DGROUP 0x0fe0 が長さ、0x0fe4 が角度。
     * 測定：50 を打つと 0x42480000）。 */
    double ask_len;             /* `[  1000.000mm]` */
    double ask_ang;             /* `[  45.000\xdf]` */
    /* ＋・／ の ②寸法 が決まっている（**長さを固定**して向きだけ矢に
     * 付いてくる）。オーバーレイ 23 の 0x2db8c〜0x2dcc3。 */
    int fix_len;
    /* 欄を閉じたあとの `・始点指示 (L)free (R)Read … [BS]前項` の状態。
     * 長さ・角度を固定していなくても（`任意寸法 ﾏｳｽ(L)`）この行になる。
     * [BS] で元の行（①〜⑤ の升）に戻る。 */
    int fix_mode;
    /* **取り消し**（何も持っていないときの [ESC]）。本物はオーバーレイ 23 の
     * 0x2bdad〜：直前の押しで足した線・円弧・文字の数（[bp-0xf0] など）だけ
     * 後ろから消して、その押しの前の段に戻る（測定：／ で引いたあと [ESC] →
     * 線が消えて `◆終点指示`、始点を持ったまま）。ここに、その数と、戻る
     * 先の状態を控えます。 */
    long undo_lines, undo_arcs, undo_texts;
    struct {
        int pressed, stage, box_done, circ_done, fix_done;
        double x0, y0, x1, y1;
    } undo_to;
    /* 固定したあとの 1 本目を引き終えた（上の行が `確定長さ =` になる）。 */
    int fix_done;
    double fix_ang;             /* その線の角度（度）。上の行に出る */
    double fix_shown;           /* その線の長さ（mm）。上の行に出る */
    /* ③角度 が決まっている（**向きを固定**して、矢はその向きの上に
     * 映した所）。本物は DGROUP 0x0fdc に角度を float で持つ。 */
    int fix_angle;
    int line_done;
    /* ○ ②楕円：1 中心、2 `長径,短径 =` の欄、3 `長軸の平行線をマウス指示`、
     * 4 `角度 =` の欄。長径・短径・角度は命令を選び直しても残る（前回と同じ）。 */
    int ell, ell_done;
    /* ○ ③重円 の数（1 は単円）と、①径指定 を押したとき持っていた中心。 */
    int circ_multi;
    int tx_undo;                /* 文字：最後に書いた文字を取り消せる */
    int mv_undo;                /* 複写・移動 の取り消しの控え */
    long mv_nl, mv_na, mv_nt, mv_np;
    double mv_dx, mv_dy;
    int cl_pts;                 /* 中心線の 2 点指示：読んだ点の数 */
    double cl_x1, cl_y1, cl_x2, cl_y2;
    int text_ang_ask;           /* 文字 ③角度指定 の欄 */
    double text_ang;            /* 文字の角度（度） */
    /* 文字 の ②行連続・③列連続（連続書）：2 か 3。0 はふつう。段 40 は
     * `◇連続書 基点マウス指示`、段 41 は間隔の欄。間隔は図面寸法の mm で、
     * 行連続 と 列連続 で別に持つ（測定：5.0 と 20.0）。 */
    int text_rep;
    int meas_put;               /* 測定 ①表示：小数点位置を待つ */
    int circ_dia;
    int band_row2;
    int arc_drawn;              /* （ で一本描いた */
    double arc_r_shown;
    int box_drawn;              /* □ で一つ描いた */
    int box_esc_back;
    int line_esc_back;
    double box_last[2];              /* 直前の押しで作った：帯の 2 行目にも重ねる */
    /* 面取 ④一括処理（丸面 なら ③）：範囲を取っている。段は範囲の命令と同じ
     * （0 始点、1 終点、3 追加･除外、2 `一括処理 |①実行|②中止|③内角面取|`）。 */
    int chb, chb_inner;
    int ch_bad;
    int ch_side;
    /* 分割 ④２線間の等分割線（decomp ovl20 3ab8:01f5）：1=線(A)、2=線【B】か点、3=分割数の欄。 */
    int div4, div4_bpt, div4_same, div4_made, div4_n;
    long div4_a, div4_b;
    double div4_px, div4_py;
    int div2;                   /* 分割 ②円分割点=2／③楕円分割点=3 を選んである（段 6 が始点＝円弧を拾う行） */
    int div_real;
    int dl_ask;
    int ld_ask;                 /* 線消 部分消去 の ①線切断寸法 の欄 */
    int te_sub;                 /* 文編集【変更】の ①基点 1・②文連結切断 2・③疑似線文字 3 */
    int te_bh, te_bv;           /* 文字基準点：横 0 左 1 中 2 右、縦 0 下 1 中 2 上 */
    int te_panel;               /* ①基点 の盤で ②・④ を押した後は左の盤が基点を出す */
    long te_pick;               /* 〈移動〉《複写》で選んだ文字（位置指示の段）、無ければ -1 */
    int te_esc;                 /* 選ぶ行の桁 1 に [ESC]（消した・置いた後） */
    int te_mx, te_my;           /* 位置指示の箱の左下（矢の所、画面の画素） */
    int te_plain;               /* ⑥文字種類変更 の左の盤と升を [ESC] で下ろした */
    int te6_layer, te6_hv;      /* ⑥ の ②レイヤ 変更無/有、③横縦変更 無/横/縦 */
    int te5;                    /* 文編集 ⑤位置整理（文字だけの範囲） */
    int fep;                    /* ④設定 の ③ＦＥＰ：0 ON・1 off (1)・2 off (2) */
    int tx_plain;               /* 文字：左の盤（ﾍﾟﾝ・基点・横縦）を下ろして数え箱 */
    int tx_doc;                 /* 文字 ⑤文書 ①ﾌｧｲﾙに書出 の範囲（文字だけ） */
    int te5_ask;                /* ⑤ ②行間 の欄 */
    double te5_gap;             /* ⑤ の行間（図寸 mm）、0 は現位置 */
    double ld_cut;              /* 線切断寸法（図寸 mm） */
    JwcLine ld_undo;            /* 部分消去で抜いた元の線 */
    int ld_undo_on;                 /* ２線 ①基準線からの間隔 の欄 */               /* 分割 ①【実点】 */                /* 面取 ②【辺寸法】（寸法は面でなく辺の長さ） */                 /* 面取 ③寸法= に 0 以下：`データが不適当` */
    /* 手書線：いまの一筆（か直前の一筆）の区間ごとの始点。[ESC] はここから
     * 一つずつ戻る。 */
    int hand_n;
    double hand_px[256], hand_py[256];
    int hand_psx[256], hand_psy[256];
    int box_ctr;                /* □ ④基点変：始点が四角の中心 */               /* ○ ②基点変：○（二点が直径） */
    int pt_real;                /* 点 ①【実点】 */
    int pt_mode;                /* 点 ②〜⑤（③交点だけ移植） */
    int tan_noarc;              /* 円線接：図面に円弧が一つも無い（外れの言葉の桁が変わる） */
    int pt_par;                 /* 点 ③：二本が平行（計算不可） */
    int pt_line;                /* 点 ④：外れた押しの近くに線があった（言葉の桁が一つ左） */
    /* 点 ②距離（decomp ovl20 3ab8:45ea の 0x2f596〜0x2fe47）。pt2：0=始点（S0）、1=距離の欄（S1）、
     * 2=方向を決める点（S2）、3=円弧指示（S3）。pt2_circ：①で切り替える 直進／円周。 */
    int pt2, pt2_circ, pt2_bad;
    long pt2_arc;
    double pt2_x1, pt2_y1, pt2_x2, pt2_y2, pt2_total, pt2_step;
    int pt3, pt3_a;             /* 点 ③交点：0=対象線（A）、1=対象線【B】、A の線番号 */
    int pt_added;               /* 点：足した実点の数（記録のカウント用） */
    int pt_undo;                /* 点：この命令で打った分の符号つきの数（decomp ovl20 3ab8:45ea の [bp-0x48]。仮点 +1、実点 -1、①で 0） */
    int tx_count;               /* 文字：この命令で書いて残っている数 */
    double rep_gap[2];
    int text_file;              /* 文字 ⑤文[書/読]：書出範囲 を取っている */
    int text_tate;              /* 文字 ⑥(縦)：縦字（記録の rest[2] に 0x20） */
    int rel_place;              /* ①ﾏｳｽ位置 の置き方（基点からの差で） */
    double rel_px, rel_py;
    int erase_again;            /* 消去 `消去 再度(L)` を出した */
    /* コーナー連結 の 線切断：`残切断点 20` から一つずつ減り、切った所に
     * 小さな白い輪が残る（測定）。 */
    int cut_n;
    double cut_px[20], cut_py[20];
    /* 多角形 ③座標値による多角形：1 原点、2 始点、3 次の点（辺を足す）。 */
    int pg3, pg3_n;
    /* 多角形 ①２点からの距離（二辺）：1=A点、2=B点、3=寸法（d1,d2 の欄）、4=２線を書く方向。
     * decomp ovl22 ディスパッチャ item==1 枝（file-linear 0x2cbe4〜0x2d384）。pg1_n は直前に
     * 引いた本数（A 段の [ESC] で消す）。pg1_pd は寸法の前回値（既定 1000、1000）。 */
    int pg1, pg1_n;
    int lc_msg;                 /* 線変更：押した直後の行 2 の `線 変更`（次の鍵で消える） */
    int lc_attr;                /* 線変更 ③属性設定 の範囲を取っている */
    /* 測定 ②角度（decomp ovl29 0x3278a〜）：ms2 0=◇原点、1=◆角度点。ms2_res は結果あり（②が 表示）。 */
    int meas2, ms2, ms2_mode, ms2_res;
    double ms2_ox, ms2_oy, ms2_deg;
    /* 測定 ③面積（decomp ovl29 0x2d978〜0x2efb8）：点列から三角形 (P1,P[n-1],P[n]) を足していく。
     * ms3_tri は各三角形の符号つき面積（mm²）。累計は合計の絶対値、面積は最後の三角形の絶対値。 */
    int meas3, ms3_n;
    double ms3_x[32], ms3_y[32], ms3_tri[32];
    /* 測定 ④座標（decomp ovl29 0x2efbb〜）：ms4 0=◇原点、1=原点を取った（◆）、2 以上は座標点を取った。 */
    int meas4, ms4;
    double ms4_ox, ms4_oy, ms4_px, ms4_py;
    int meas_arc;               /* 測定 ①距離 ◆の ③円周：円を拾う行（円が取れた先は未実装） */
    int dim_ck_gone;            /* 寸法 ④①円径 の 書込角度の札は [ESC] で消える（測定：dim_s0_c4） */
    int dim_arc_quiet;          /* 寸法 ④③角度を選んだ直後は行 2 の `点`・`度` の札がまだ出ない（次の鍵で出る。測定：dim_s0_c4_v） */
    int dim5c, dim5m;           /* 寸法 ⑤寸法値 ③円周：円をマウス指示（dim5m 1 = 線データです、2 = 読取可能データ無）。測定：dim_s0_c5_v */
    int dim7_hold, dim7_n;      /* 寸法 ⑦矢印：数え箱の線数が二度の外しの押しまで追いつかない（測定：dim_s0_c7） */
    int dim8_plain;             /* 寸法 ⑧値変：升の無い数字で左の盤が数え箱に戻る（測定：dim_s0_c8_v） */
    int meas8d;                 /* ⑧③指定文字を [Enter] で決めた：行 2 に `データ無` と打った文字 */
    int meas8;                  /* ⑧文字列集計 ③指定文字：文字を打つ欄（測定：measure_s0_c8_v） */
    char ms8_typed[24];
    int ms8_n;
    int meas9k;                 /* ⑨式の範囲の行の種類：0 ヘロン、3 三斜 */
    int meas9t;                 /* ⑨式 ③三斜面積：単位の行（測定：measure_s0_c9_v） */
    int meas9z;                 /* ⑨式：一度押したら行 2 の `ヘロンの公式 …` の白い札は戻らない（測定：measure_s0_c9） */
    int meas9q;                 /* ⑨式 ①ヘロン：範囲の終点まで取った（追加・除外の行） */
    int meas9p;                 /* ⑨式 ①ヘロン：範囲の始点を押した（終点を待つ） */
    int meas9;                  /* 測定 ⑨式 ①ヘロン：三辺の文字の範囲を取る行（測定：measure_s0_c9） */
    int meas5r;                 /* A群の範囲：前範囲（Enter／①）のあとの追加・除外の行 */
    int meas5s;                 /* ⑤表計算 1〜4 を選んだ：A群の範囲の始点待ち（測定：measure_s0_c5_v） */
    int meas5;                  /* 測定 ⑤表計算（入口の帯だけ。各項目は未実装） */
    int meas_noind;             /* 測定の最初の行で ESC：単位・桁の帯が消える（測定のみ・decomp 未確認：measure_s0_c5） */
    int er_item;                /* 消去：始点を押したときの項目（[ESC] でその行へ戻る） */
    int er_pt;                  /* 消去：項目を選んだあとの始点（終点の行が `終点指示 (L)free (R)Read` になる） */
    int mv_none;                /* 複写・移動：何も選んでいないまま置いた（[ESC] の札が出ない） */
    int range_opt;              /* 範囲の始点を持ったあとの (1)レイヤ／(2)線種色／(3)文字種：`書込 … のみ選択` の札（表示のみ。選択への効きは未実装） */
    double pg1_ax, pg1_ay, pg1_bx, pg1_by;
    double pg1_pd[2];
    double pg3_x, pg3_y;
    int ch_ask;                 /* 面取 ③寸法= の欄 */
    /* □ ③平行：1 なら `基準線　マウス指示`、box_ref なら傾きは基準線から。 */
    int box_refask, box_ref;
    int circ_hold;
    double circ_hx, circ_hy;
    /* （ ①三点指示：1 始点、2 終点、3 中間点。できたら 1 に戻る。 */
    int arc3, arc3_done;
    int arc3_kind;              /* 1 三点指示、2 半円 */
    double a3x[2], a3y[2], arc3_rmm;
    double ell_cx, ell_cy;
    double ell_a, ell_b, ell_ang;
    int co_undo_n, co_undo_new; /* コーナー連結：元の線の数・足した線の数 */
    JwcLine co_undo[2];         /* 　　　　　　　元の線 */
    int dl_undo_n;              /* ２線：最後の組の線の数（取り消し用） */
    double dl_undo_x, dl_undo_y;/* 　　　その組の始点 */
    int st_undo_on;             /* 線伸縮：取り消せる線がある */
    JwcLine st_undo;            /* 　　　　伸縮する前の線 */
    long ld_line;               /* 線消 部分消去：押した線 */
    float ld_u0;                /* 　　　　　　　 始点の位置（線の上） */
    int range_marked;           /* 範囲の印（rest の bit1）を落として付け直している */              /* ＋・／ で一本でも引いた */
    /* ／ の ④平行・⑤垂直：基準線の向き（cos,sin を float で）に固定。
     * par_on が立っていると fix_dir のかわりにこの向きへ映す。 */
    int par_on;
    float par_cs, par_sn;
    /* □ の ①寸法：`横,縦` の欄が開いている（box_ask）、大きさが決まって
     * 置く場所を待っている（box_fix）。大きさは紙の mm を float で（本物は
     * DGROUP 0x0fe8/0x0fec、初めは 1000,1000）。基点は -1〜1 の 2 つ
     * （0 が真ん中。④基点変 で動く——まだ読んでいない）。 */
    int box_ask;
    int box_fix;
    int box_done;
    double box_w, box_h;
    int box_bi, box_bj;
    int box_base;               /* ④基点変 で 0〜8 を回る（0 が真ん中） */
    /* □・○ の欄を [ESC] か `任意寸法 ﾏｳｽ(L)` で閉じたあとの、2 点で描く
     * `始点指示 … [BS]前項` の状態（／ の fix_mode と同じ）。 */
    int box_mode;
    int circ_mode;
    /* □ の ②角度：傾いた四角。角度は度を float で（本物は DGROUP 0x0fe4、
     * 初めは 45）。box_rot が立っていると 2 点の四角がその角度で傾く。 */
    int box_rot;
    double box_ang;
    /* ○ の ①径寸法：`半 径 =` の欄（circ_ask）、半径が決まって置く場所を
     * 待っている（circ_fix）。半径は紙の mm、初めは 1000。 */
    int circ_ask;
    int circ_fix;
    int circ_done;
    double circ_r;
    int circ_base;              /* ②基点変 で 0〜8 を回る（0 が中心） */
    /* （ の ②角度指定：`角度 =` の欄（arc_ask）、角度が決まって終点の押しは
     * 向きだけを決める（arc_fix）。角度は度、初めは 90（本物の `[  90.000ﾟ]`）。 */
    int arc_ask;                /* 1 = ②角度指定 の欄、2 = ①半径指定 の欄 */
    int arc_fix;
    double arc_ang;
    /* ①半径指定：半径が決まっている（始点の押しでは向きだけ、半径はこの数）。
     * 紙の mm、初めは 1000（本物の `[1000.000mm]`）。 */
    int arc_rfix;
    double arc_r;
    double hatch_angle;         /* ③角 度, degrees -- 45.00 to start with */
    double hatch_pitch;         /* ④ﾋﾟｯﾁ, millimetres of paper -- 10.0 */
    /* How wide and how tall the string being typed comes out, in drawing
     * units -- the box 文字 shows while it is being typed.  Worked out again
     * after every key, because the width follows from the string. */
    double text_wide, text_tall, text_half;
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
    /* 正多角形's centre-basis toggle, `DS:[0x53f4]` in the decomp: 0=頂点
     * (the point given is a corner), 1=辺中 (it is the midpoint of an
     * edge, so the radius is divided by cos(pi/n) and every vertex angle
     * is shifted by half a step).  Measured with dosv_emu_cpp's
     * DOSEMU_BP on `22b2:75fe`/`75ec`/`7658` (cos/sin/atan2): with N=6,
     * centre (300,250), vertex press (400,250) (a0=atan2(0,100)=0), 辺中
     * mode's cos/sin arguments come back exactly
     * pi/6, pi/2, 5pi/6, 7pi/6, 3pi/2, 11pi/6, (wrap) pi/6 -- i.e.
     * a0 + pi/n + i*(2*pi/n) for i=0..n, confirming the phase as well as
     * the already-decomp-confirmed radius formula (RESUME.md 10-e 追補
     * その3/その4). Toggled by key '1' while picking the second point
     * (file-linear 0x2da19, `mov ax,1; sub ax,[0x53f4]; mov [0x53f4],ax`)
     * -- the band-click toggle described in decomp is not wired here
     * (測定のみ・decomp未確認：クリックでのトグルは未実装). */
    int pg_edge;
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
    /* ２線：始点／終点を押して、矢が動くまで読みを待っている（1=L、2=R）。decomp ovl17 の
     * 点入力 3ab8:309e（dis 0x2dc1e）は押した位置を anchor にして次のイベントを待ち、離れて
     * から読む（mode≠0 なら 21f2:34e9。失敗は `読取可能データ無`）。dl_phase は 0=始点、
     * 1=終点、dl_sx/dl_sy は押した画面位置。 */
    int dl_wait, dl_phase, dl_sx, dl_sy;
    int pg_item;                /* 多角形：項目の行で項目を選んだ（1 以上） */
    int dl_nopre;               /* 読みが外れたあとの押しでは仮の二本が消える（測定のみ） */
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
/* 面取 の一括処理 も同じ範囲の取り方（本物も ovl5 の同じ範囲の道具）。 */
/* 文編集 ⑤位置整理 も同じ範囲の道具で、取るのは文字だけ（`（文字）`）。 */
#define JW_RANGE(c) (JW_RANGE_CMD((c)->command) || ((c)->command == 8 && (c)->chb) \
                     || ((c)->command == 28 && (c)->te5) \
                     || ((c)->command == 13 && (c)->tx_doc) \
                     || ((c)->command == 24 && (c)->lc_range))

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
int jw_cmd_div4_prev(void);
double jw_cmd_pt2_last(void);

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
int jw_cmd_te_digit(JwCmd *c, int n);

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
