/* src/opt25.c -- ｵﾌﾟｼｮﾝ ⑧2.5D。
 *
 * 仕様と番地は notes/spec-opt8.md（ovl35、3ab8:5c55 ほか。番地は ovl35 のオフセット、
 * dis 番地は +0x2ab80）。「測定のみ・decomp 未確認」と書いたものは実機（tools/pshot.sh・
 * tools/optsubcheck.sh・tools/functest.sh）で採った値で、decomp では読み切れなかったもの。 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "opt25.h"
#include "cmd.h"
#include "draw.h"
#include "ui.h"

/* ------------------------------------------------------------------ 字面 */
/* 実機から採ったバイト列。DS 0x774f `|透視図|鳥瞰図|ｱｲｿﾒ|高さ､奥行|ﾚｲﾔｸﾞﾙｰﾌﾟ[%c]高さ|単位|` を
 * 1bb4:2b54 が ①〜⑥ の番号を付けて描く（5c55 0x30924〜0x3093a）。 */
#define S_ROW_A  "|\x87@\x93\xa7\x8e\x8b\x90}|\x87" "A\x92\xb9\xe1\xd5\x90}|\x87" "B\xb1\xb2\xbf\xd2|" \
                 "\x87" "C\x8d\x82\x82\xb3\xa4\x89\x9c\x8d" "s|\x87" "D\xda\xb2\xd4\xb8\xde\xd9\xb0\xcc\xdf["
#define S_ROW_B  "]\x8d\x82\x82\xb3|\x87" "E\x92P\x88\xca|"
#define S_BS     "[BS]\x91O\x8d\x80"                 /* [BS]前項 */
#define S_HT "\x90\xfc\xa5\x89~\x82\xcc\x8d\x82\x82\xb3\x89\x9c\x8ds "   /* 線･円の高さ奥行  */
#define S_DEL     "\x8d\xed\x8f\x9c"                         /* 削除 */
#define S_MOUSE   "\x83}\x83" "E\x83X\x8ew\x8e\xa6 "           /* マウス指示  */
#define S_NYU     "\x93\xfc\x97\xcd\xa5\x95\xcf\x8dX"        /* 入力･変更 */
#define S_PREVSAME "\x91O\x89\xf1\x82\xc6\x93\xaf\x82\xb6 \xcf\xb3\xbd" /* 前回と同じ ﾏｳｽ */
#define S_C1      "\x87@"                                    /* ① */
#define S_LAYBAD  "\x83\x8c\x83" "C\x83\x84\x82\xaa\x88\xe1\x82\xa2\x82\xdc\x82\xb7" /* レイヤが違います */
#define S_HAIN    " \x8d\x82\x82\xb3\xa5\x89\x9c\x8ds"        /*  高さ･奥行 */
#define S_M1      "\x82\x8d"                                 /* ｍ */
#define S_SAME    "\x93\xaf\x92l \x8d\xb6\xb8\xd8\xaf\xb8"   /* 同値 左ｸﾘｯｸ */
#define S_MM     " mm "
#define S_M      " \x82\x8d "                        /* ｍ（全角） */
#define S_GH     "\xda\xb2\xd4\xb8\xde\xd9\xb0\xcc\xdf[%c]\x8d\x82\x82\xb3 = "  /* ﾚｲﾔｸﾞﾙｰﾌﾟ[N]高さ =  */

/* ------------------------------------------------------------------ 状態 */
/* [0x11ea]：単位。0＝mm、1＝ｍ。起動時 -1 で、最初に項目の行へ入ったときに縮尺で決まる
 * （5c55 0x3080b〜0x30831：負なら 1、縮尺の分母が 10 より大きければそのまま、
 * でなければ 0）。以後はプログラムの間ずっと持つ（⑥で切替）。 */
static int o25_unit = -1;
/* 入力欄の長さ：018e 0x2ae26 の 11f2:10c3 に渡す最大 0x14（測定：g5_long・g5_long21）。 */
#define O25_FIELD 20
static char o25_buf[48];
static int o25_n;
static int o25_pos;             /* 欄のカーソル（挿入モード。④⑤とも先頭から始まる：10c3 の行が正） */
static int o25_group;           /* ⑤ で聞いている書込グループ */
/* 項目の行の行 2 の ` mm `（単位）の札。共通の入力待ち（1bb4:2cb4）が**捨てる**鍵（ESC・項目の無い数字・
 * 命令でない文字）は、行 2 の札を黒で消したまま描き直さない（RESUME §0 の表）。次に項目の行を描き直す
 * 出来事（押し・[Enter]・項目から戻る）で戻る。測定：optsubcheck の m_esc・m_7・m_9。 */
static int o25_lab = 1;
static int o25_lim = O25_FIELD;  /* 欄の最大の長さ：⑤は 20、④は 50（10c3 の第 4 引数 0x2742 は 10000+50） */
static char o25_prev[64];       /* ④の前回値（018e の [bp-0x3c]。⑧に入るたびに空） */
static int o25_del;             /* ④ ①削除モード */
static int o25_repl;            /* ④ 既存の文字を消して欄の既定値にした（`同値 左ｸﾘｯｸ`） */
static int o25_msg;             /* ④ 行 2：1 ＝ レイヤが違います（桁 22） */
static int o25_missed;          /* 押した所に線が無い（読取可能データ無） */
static double o25_ox, o25_oy, o25_ux, o25_uy;   /* 文字を置く端と、遠い端へ向かう単位ベクトル */
static int o25_cur = -1;        /* 入力欄の緑のカーソルの桁（text が決める） */

static char hexch(int n)
{
    n &= 15;
    return (char)(n + (n > 9 ? 7 : 0) + '0');
}

void jw_opt25_reset(void)
{
    o25_n = 0;
    o25_pos = 0;
    o25_buf[0] = 0;
    o25_lim = O25_FIELD;
}

int jw_opt25_covers(int opt_stage)
{
    return opt_stage >= JW_OPT25_WAIT && opt_stage <= JW_OPT25_ASK;
}

/* ------------------------------------------------------------------ 入口 */
static void unit_init(const Jwc *d)
{
    if (o25_unit < 0) {
        o25_unit = 1;
        if (!(d->denom > 10.0f)) {
            o25_unit = 0;
        }
    }
}

void jw_opt25_open(const Jwc *d, int *opt_stage)
{
    unit_init(d);
    jw_opt25_reset();
    o25_prev[0] = 0;
    o25_del = 0;
    o25_msg = 0;
    o25_lab = 1;
    *opt_stage = JW_OPT25_MENU;
}

/* ⑤ の確定（decomp 018e 0x2b073〜、spec-opt8-height §1）：空なら何も書かない。空でなければ
 * 式を数にして `%g` に直し（本物は 0xad:4 の式評価、ここは atof）、同じグループの既存の高さの文字
 * （位置 (0,0)・+0x17 の bit7・書込グループ一致）を消してから、位置 (0,0) の文字（大きさ 1、
 * レイヤ字節＝書込レイヤ、+0x17=0x80）を足す。 */
static int gh_commit(Jwc *d)
{
    char t[64];
    long k;
    double w;

    if (o25_n == 0) {
        return 0;
    }
    sprintf(t, "%g", atof(o25_buf));
    for (k = d->n_texts - 1; k >= 0; k--) {
        const JwcText *x = &d->texts[k];

        if (x->x0 == 0.0f && x->y0 == 0.0f && (x->rest[3] & 0x80)
            && (x->layer >> 4) == (d->write_layer >> 4)) {
            jwc_remove_text(d, k);
            break;
        }
    }
    w = jwc_text_length(d, t, 1);
    if (!jwc_add_text(d, 0.0f, 0.0f, (float)w, 0.0f, t, 1, d->write_layer)) {
        return 0;
    }
    d->texts[d->n_texts - 1].rest[2] = 0;
    d->texts[d->n_texts - 1].rest[3] = 0x80;     /* +0x17 の bit7（rest は +0x14 から） */
    return 1;
}

/* ④の正規化（spec-opt8-height §3.6）：`v`/`V` で切り、`,` `;` で区切った各項を `%g` に直して `,` でつなぎ、
 * 末尾に `v`。式の評価は atof で代用（本物は 0xad:4 の式評価。測定のみ・decomp 未確認の差）。 */
static void normalize(const char *buf, char *out)
{
    char tmp[128];
    char *pv;
    int idx = 0, vflag = 0;

    strncpy(tmp, buf, sizeof tmp - 1);
    tmp[sizeof tmp - 1] = 0;
    out[0] = 0;
    if ((pv = strchr(tmp, 'v')) != NULL) { vflag = 1; *pv = 0; }
    if ((pv = strchr(tmp, 'V')) != NULL) { vflag = 1; *pv = 0; }
    while (tmp[idx]) {
        char g[40];
        int k = idx;

        sprintf(g, "%g", atof(tmp + idx));
        if (idx > 0) strcat(out, ",");
        strcat(out, g);
        while (tmp[k] && tmp[k] != ',' && tmp[k] != ';') k++;
        if (!tmp[k]) break;
        idx = k + 1;
    }
    if (vflag) strcat(out, "v");
}

/* ④で文字を足す（0000）：原点 (ox,oy) から遠い端へ向かう軸に、長さ len で。+0x17 の bit7。 */
static int ht_write(Jwc *d, const char *str)
{
    double len;
    float x1, y1;

    if (!str[0]) return 0;
    len = jwc_text_length(d, str, 1);
    x1 = (float)(((double)(float)o25_ux * len) + (float)o25_ox);
    y1 = (float)(((double)(float)o25_uy * len) + (float)o25_oy);
    if (!jwc_add_text(d, (float)o25_ox, (float)o25_oy, x1, y1, str, 1, d->write_layer)) return 0;
    d->texts[d->n_texts - 1].rest[2] = 0;
    d->texts[d->n_texts - 1].rest[3] = 0x80;
    return 1;
}

/* ④の押し（decomp 018e 0x2b251〜0x2b5d6）。 */
static int ht_press(Jwc *d, const JwView *w, int x, int y, int right, int *opt_stage)
{
    long n, k;
    JwcLine L;
    double px, py, A, B;
    int btn = right ? 2 : 1;
    int replaced = 0;

    o25_msg = 0;
    if (btn == 2 && !(o25_prev[0] && !o25_del)) return JW_O25_TAKEN;     /* 右押しは「前回と同じ」のときだけ */
    n = jw_cmd_pick_line(d, w, x, y);
    if (n < 0) {
        o25_missed = 1;
        return JW_O25_TAKEN;
    }
    L = d->lines[n];
    if (L.layer != d->write_layer) {
        o25_msg = 1;
        return JW_O25_TAKEN;
    }
    if (L.rest[2] & 0xC0) return JW_O25_TAKEN;                            /* 曲線 */
    jw_cmd_at(w, x, y, &px, &py);
    A = fabs((double)L.y0 - py) + fabs((double)L.x0 - px);
    B = fabs((double)L.y1 - py) + fabs((double)L.x1 - px);
    {
        double fx, fy, dx, dy, ln;

        if (A < B) { o25_ox = L.x0; o25_oy = L.y0; fx = L.x1; fy = L.y1; }
        else       { o25_ox = L.x1; o25_oy = L.y1; fx = L.x0; fy = L.y0; }
        dx = fx - o25_ox;
        dy = fy - o25_oy;
        if (fabs(dy) + fabs(dx) >= 0.001) {
            ln = sqrt(dy * dy + dx * dx);
            o25_ux = (float)(dx / ln);
            o25_uy = (float)(dy / ln);
        } else {
            o25_ux = 1.0;
            o25_uy = 0.0;
        }
    }
    for (k = 0; k < d->n_texts; k++) {
        const JwcText *t = &d->texts[k];

        if (t->rest[0] >= 0x5a || !(t->rest[3] & 0x80) || t->layer != d->write_layer) continue;
        if (!(fabs((double)t->y0 - o25_oy) + fabs((double)t->x0 - o25_ox) < 0.01)) continue;
        if (btn == 1 && t->text) {
            strncpy(o25_prev, t->text, sizeof o25_prev - 1);
            o25_prev[sizeof o25_prev - 1] = 0;
            replaced = 1;
        }
        jwc_remove_text(d, k);
        break;
    }
    o25_repl = replaced;
    if (o25_del) return JW_O25_CHANGED;
    if (btn == 1) {
        strcpy(o25_buf, o25_prev);
        o25_n = (int)strlen(o25_buf);
        o25_pos = 0;
        o25_lim = 50;
        *opt_stage = JW_OPT25_HT_IN;
        return JW_O25_CHANGED;
    }
    ht_write(d, o25_prev);
    return JW_O25_CHANGED;
}

static void ht_commit(Jwc *d, int *opt_stage)
{
    char out[160];

    normalize(o25_buf, out);
    if (strlen(out) > 50) {
        /* `文字数が多すぎます` で欄へ戻る（行 2 の言葉は未実装：測定のみ） */
        out[50] = 0;
    }
    strcpy(o25_prev, out);
    ht_write(d, out);
    *opt_stage = JW_OPT25_HT;
    o25_lim = O25_FIELD;
    (void)d;
}

int jw_opt25_missed(void)
{
    const int m = o25_missed;

    o25_missed = 0;
    return m;
}

/* ----------------------------------------------------------------- 項目 */
static void item_pick(Jwc *d, int n, int *opt_stage)
{
    switch (n) {
    case 5:                                     /* ⑤ ﾚｲﾔｸﾞﾙｰﾌﾟ[N]高さ */
        o25_group = (d->write_layer >> 4) & 15;
        jw_opt25_reset();
        {   /* 既定値：同じグループの高さの文字のうち最後の 1 件（018e 0x2ad58〜） */
            long k;

            for (k = 0; k < d->n_texts; k++) {
                const JwcText *x = &d->texts[k];

                if (x->rest[0] < 0x5a && x->x0 == 0.0f && x->y0 == 0.0f
                    && (x->rest[3] & 0x80) && (x->layer >> 4) == o25_group && x->text) {
                    strncpy(o25_buf, x->text, O25_FIELD);
                    o25_buf[O25_FIELD] = 0;
                    o25_n = (int)strlen(o25_buf);
                }
            }
        }
        *opt_stage = JW_OPT25_GH;
        break;
    case 4:                                     /* ④ 線･円の高さ奥行（018e の flag=0） */
        o25_del = 0;
        o25_msg = 0;
        *opt_stage = JW_OPT25_HT;
        break;
    case 6:                                     /* ⑥ 単位：切替えて項目の行を描き直す */
        o25_unit = o25_unit ? 0 : 1;
        break;
    default:
        break;
    }
}

int jw_opt25_click(Jwc *d, const JwView *w, int x, int y, int right, int cell,
                   int *opt_stage, int *leave)
{
    *leave = 0;
    if (!d || *opt_stage < JW_OPT25_MENU || *opt_stage > JW_OPT25_LAST) {
        return JW_O25_NONE;
    }
    o25_lab = 1;
    if (*opt_stage == JW_OPT25_MENU) {
        if (y >= 0 && y <= 15 && cell) {
            if (cell >= 1 && cell <= 6) {
                item_pick(d, cell, opt_stage);
            }
            return JW_O25_TAKEN;
        }
        if (y >= 0 && y <= 15) {
            /* [BS]前項 は桁 73〜80。項目でない所の押し（測定：m_click_blank は何も起きない）。 */
            return JW_O25_TAKEN;
        }
        return JW_O25_TAKEN;
    }
    if (*opt_stage == JW_OPT25_HT) {
        if (y >= 0 && y <= 15) {
            if (cell == 1 && !o25_del) {
                o25_del = 1;
                o25_msg = 0;
            } else if (x > 580) {                   /* [BS]前項 */
                if (o25_del) {
                    o25_del = 0;
                } else {
                    *opt_stage = JW_OPT25_MENU;
                    o25_lab = 1;
                }
            }
            return JW_O25_TAKEN;
        }
        if (w && x >= w->x0 && x <= w->x1 && y >= w->y0 && y <= w->y1) {
            return ht_press(d, w, x, y, right, opt_stage);
        }
        return JW_O25_TAKEN;
    }
    if (*opt_stage == JW_OPT25_HT_IN) {              /* 欄の中の押し：どれも確定（10c3：左は Enter、右は ESC、④は戻り値を見ない） */
        ht_commit(d, opt_stage);
        return JW_O25_CHANGED;
    }
    return JW_O25_TAKEN;
}

/* 欄の編集（11f2:10c3、挿入モード）：BS は前の 1 文字、Ctrl-G は後ろの 1 文字。④は最大 50 で、
 * `.` を続けて打つと前の `.` が `,` になる。 */
static void field_edit(int key)
{
    if (key == 8 && o25_pos > 0) {
        memmove(o25_buf + o25_pos - 1, o25_buf + o25_pos, (size_t)(o25_n - o25_pos + 1));
        o25_pos--;
        o25_n--;
    } else if (key == 7 && o25_pos < o25_n) {
        memmove(o25_buf + o25_pos, o25_buf + o25_pos + 1, (size_t)(o25_n - o25_pos));
        o25_n--;
    } else if (key >= 0x20 && key < 0x7f && o25_n < o25_lim) {
        if (o25_lim > O25_FIELD && key == '.' && o25_pos > 0 && o25_buf[o25_pos - 1] == '.') {
            o25_buf[o25_pos - 1] = ','; /* 2つ目の . は入らない（測定：h4_in_dd） */
            return;
        }
        memmove(o25_buf + o25_pos + 1, o25_buf + o25_pos, (size_t)(o25_n - o25_pos + 1));
        o25_buf[o25_pos++] = (char)key;
        o25_n++;
    }
}

int jw_opt25_key(Jwc *d, int key, int *opt_stage, int *leave)
{
    *leave = 0;
    if (!d || *opt_stage < JW_OPT25_MENU || *opt_stage > JW_OPT25_LAST) {
        return JW_O25_NONE;
    }
    switch (*opt_stage) {
    case JW_OPT25_MENU:
        if (key == 8) {                         /* BS：オプションの行へ（0x30a9c の 0x14） */
            *leave = 1;
            *opt_stage = 0;
            return JW_O25_TAKEN;
        }
        if (key == 13 || key == 10) {           /* [Enter] は 2cb4 が 0xd で返し、項目の行を描き直す */
            o25_lab = 1;
            return JW_O25_TAKEN;
        }
        if (key >= 0 && key < 256 && jw_ui_key_command(key)) {
            return JW_O25_NONE;                 /* 命令の頭文字は命令を替える */
        }
        o25_lab = 0;                            /* 捨てられる鍵：行 2 の札が消える */
        return JW_O25_TAKEN;
    case JW_OPT25_GH:
        if (key == 27) {
            *opt_stage = JW_OPT25_MENU;
            return JW_O25_TAKEN;
        }
        if (key == 13 || key == 10) {
            const int ch = gh_commit(d);

            o25_lab = 1;
            *opt_stage = JW_OPT25_MENU;
            return ch ? JW_O25_CHANGED : JW_O25_TAKEN;
        }
        field_edit(key);
        return JW_O25_TAKEN;
    case JW_OPT25_HT:
        if (key == 8) {
            if (o25_del) {
                o25_del = 0;
            } else {
                *opt_stage = JW_OPT25_MENU;
                o25_lab = 1;
            }
            return JW_O25_TAKEN;
        }
        if (key == '1' && !o25_del) {
            o25_del = 1;
            o25_msg = 0;
            return JW_O25_TAKEN;
        }
        if (key >= 0 && key < 256 && key != 13 && key != 10 && jw_ui_key_command(key)) {
            return JW_O25_NONE;
        }
        return JW_O25_TAKEN;
    case JW_OPT25_HT_IN:
        if (key == 13 || key == 10 || key == 27) {
            ht_commit(d, opt_stage);
            return JW_O25_CHANGED;
        }
        field_edit(key);
        return JW_O25_TAKEN;
    default:
        break;
    }
    return JW_O25_NONE;
}

/* ------------------------------------------------------------------ 字 */
/* カーソルの下の文字（無ければ 0）。本物は緑の箱の上に、その文字を色 5 で下半分（y>=7）だけ描く
 * （測定：g5_pre。箱の中の洋紅の 14 画素）。 */
int jw_opt25_cursor_char(void)
{
    return o25_cur >= 0 && o25_pos < o25_n ? (unsigned char)o25_buf[o25_pos] : 0;
}

int jw_opt25_cursor(void)
{
    return o25_cur;
}

void jw_opt25_text(VGA *v, int opt_stage, int group)
{
    char row[160];

    o25_cur = -1;
    if (opt_stage == JW_OPT25_GH) {
        char t[64];

        jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
        sprintf(t, S_GH, hexch(o25_group));
        jw_ui_text(v, 8, 1, 7, 0, t);
        jw_ui_text(v, 27, 1, 7, 0, o25_buf);
        o25_cur = 26 + o25_pos;     /* 欄は桁 27（1 始まり）、x = 桁*8 */
        return;
    }
    if (opt_stage == JW_OPT25_HT) {
        jw_ui_text(v, 8, 1, 7, 0, S_HT);
        if (o25_del) {
            jw_ui_text(v, 8 + 16, 1, 7, 0, S_DEL "  " S_MOUSE "(L)");
        } else {
            char t[96];

            strcpy(t, S_NYU "(L)  ");
            if (o25_prev[0]) strcat(t, S_PREVSAME "(R) ");
            strcat(t, "|" S_C1 S_DEL "|");
            jw_ui_text(v, 8 + 16, 1, 7, 0, t);
            if (o25_prev[0]) {
                jw_ui_text(v, (int)strlen(o25_prev) > 40 ? 18 : 38, 2, 7, 0xffffu, o25_prev);
            }
        }
        jw_ui_text(v, 73, 1, 7, 0, S_BS);
        if (o25_msg) {
            jw_ui_text(v, 22, 2, 7, 0, S_LAYBAD);
        }
        return;
    }
    if (opt_stage == JW_OPT25_HT_IN) {
        char t[64];

        sprintf(t, S_HAIN "(%s) =", o25_unit ? S_M1 : "mm");
        jw_ui_text(v, 1, 1, 7, 0, t);
        if (o25_repl) jw_ui_text(v, 70, 1, 7, 0, S_SAME);
        jw_ui_text(v, 18, 1, 7, 0, o25_buf);
        o25_cur = 17 + o25_pos;
        return;
    }
    sprintf(row, "%s%c%s", S_ROW_A, hexch(group), S_ROW_B);
    jw_ui_text(v, 8, 1, 7, 0, row);
    jw_ui_text(v, 73, 1, 7, 0, S_BS);
    if (o25_lab) {
        jw_ui_text(v, 67, 2, o25_unit ? 6 : 5, 0xffffu, o25_unit ? S_M : S_MM);
    }
}

void jw_opt25_overlay(VGA *v, const Jwc *d, const JwView *w, int opt_stage)
{
    (void)v;
    (void)d;
    (void)w;
    (void)opt_stage;
}
