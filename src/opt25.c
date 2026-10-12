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
    (void)w;
    (void)x;
    (void)right;
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
    return JW_O25_TAKEN;
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
        if (key == 8 && o25_pos > 0) {          /* 欄の中の BS：前の 1 文字（Shift-JIS は未対応） */
            memmove(o25_buf + o25_pos - 1, o25_buf + o25_pos, (size_t)(o25_n - o25_pos + 1));
            o25_pos--;
            o25_n--;
        } else if (key == 7 && o25_pos < o25_n) {
            memmove(o25_buf + o25_pos, o25_buf + o25_pos + 1, (size_t)(o25_n - o25_pos));
            o25_n--;
        } else if (key >= 0x20 && key < 0x7f && o25_n < O25_FIELD) {
            memmove(o25_buf + o25_pos + 1, o25_buf + o25_pos, (size_t)(o25_n - o25_pos + 1));
            o25_buf[o25_pos++] = (char)key;
            o25_n++;
        }
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
