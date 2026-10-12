/* src/optset.c -- ｵﾌﾟｼｮﾝ ⑥各設定。
 *
 * 仕様と番地は notes/spec-opt6.md（ovl28 3ab8:6032、file-linear 0x30bb2。番地はそこでの file-linear）。
 * 「測定」と書いたものは実機（tools/probe.sh・tools/seqcheck.sh）で採った値。
 * 「測定のみ・decomp 未確認」と書いたものは decomp で読み切れなかったもの。 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "optset.h"
#include "draw.h"
#include "ui.h"

/* ------------------------------------------------------------------ 字面 */
/* DGROUP から採ったバイト列（tmp/dsc.py）。 */
#define S_ESC        "[ESC]"
#define S_BAND       "|\x87@\xd2\xd3\xd8\xb0\x94z\x95\xaa|\x87" "A\x89\xe6\x96\xca\xbb\xb2\xbd\xde|\x87" "B\xba\xcf\xdd\xc4\xde\xb7\xb0|\x87" "C\x8d\xec\x90}\x8e\x9e\x8a\xd4|\x87" "D\x8a\xc2\x8b\xab" "FILE|\x87" "E\xc4\xde\xd7\xaf\xb8\xde\x97\xca|\x87" "F\x89\xe6\x90" "F|"
#define S_SIZE       "\x89\xe6\x96\xca\xbb\xb2\xbd\xde\x90\xdd\x92\xe8 \x89\xba\x82\xcc\x90\xfc\x82\xcc\x92\xb7\x82\xb3\x82\xf0\x91\xaa\x82\xc1\x82\xc4\x93\xfc\x97\xcd(mm) :"   /* DS:65a4 */
#define S_DRAG       "[ESC] \x83}\x83" "E\x83X\x82\xcc\x83h\x83\x89\x83" "b\x83O\x91\x80\x8d\xec\x88\xda\x93\xae\x97\xca(\xc4\xde\xaf\xc4) ="   /* DS:66c4 */
#define S_TIME       "[ESC] \x8c\xbb\x90}\x96\xca\x82\xcc\x8d\xec\x90}\x8e\x9e\x8a\xd4"   /* DS:669f */
#define S_COLNO      "[ESC]  \x90" "F\x94\xd4\x8d\x86(0\x81`"                             /* DS:66ed */
#define S_KEY_ESC    "[ESC]  "                                                           /* DS:65d9 */
#define S_KEY_SAVE   "\x83L\x81[\x90\xdd\x92\xe8\x95\xdb\x91\xb6  "                       /* DS:6637 */
#define S_RUNBAND    "|\x87@ \x8e\xc0\x8ds(L)|\x87" "A \x92\x86\x8e~(R)|"                  /* DS:522 */
#define S_MEM_FMT    "[ESC] \x81\x9f\x83\x81\x83\x82\x83\x8a\x81[\x94z\x95\xaa\x82\xcc\x95\xcf\x8dX  %s\x82\xcc\x90\x94(\x8c\xbb\x97p %-5ld/\x8d\xc5\x91\xe5 %-5ld)="
#define S_MEM_LINE   "    \x90\xfc"
#define S_MEM_ARC    "  \x89~\x8c\xca"
#define S_MEM_PT     "    \x93_"
#define S_MEM_TXT    "\x95\xb6\x8e\x9a\x97\xf1"
#define S_MEM_OK     " |\x87@ \x95\xcf\x8dX\x8am\x92\xe8 |\x87" "A \x92\x86\x8e~ |"
#define S_MEM_SUM    "\x90\xfc=%ld \x89~=%ld \x93_=%d \x95\xb6\x8e\x9a\x97\xf1=%d(%ld\x8e\x9a)"
#define S_ARROW      "\x81\xa8 "
#define S_ARROW_JA   "\x92\x86\x8e~"

/* ------------------------------------------------------------------ 状態 */
static int os_item;                     /* 0 ＝各設定の帯、1..7 ＝その項目の中 */
static int os_ph;                       /* 項目の中の段 */

static long os_drag = 1000;             /* DS:[0xc1c]（初期イメージ 0x03e8） */
static float os_screen_mm = 170.0f;     /* DS:[0xc34]（初期イメージ 170.0） */

/* 数の欄（root 0ad:16d4 numin の、文字を打って [Enter] で確定するところ）。 */
static char nf[80];
static int nf_n;

/* 文字の欄（root 11f2:10c3、④と⑦）。 */
static char ed[96];
static int ed_n, ed_cur, ed_col, ed_max;

/* ③ */
static char os_keys[36] = " CHXBFTVRWDENASQchxbftvrwdenasq|Zz";   /* DS:0xedc 〜 0xefd */
static int os_ki;                       /* いま聞いているコマンド（1..32） */

/* ⑦ */
static int os_cidx;                     /* 色番号 [bp-0x50]（⑦を始めるときだけ 0） */
static unsigned char os_rgb[3];         /* [bp-6][bp-5][bp-4]＝R G B（6 ビット） */
/* ① */
static int os_ms;                       /* 段：1 線 2 円弧 3 点 4 文字列 5 確認の帯 */
static long os_mv[4];                   /* 受けた値（線・円弧・点・文字列） */
static long os_cap[4] = { 3639, 3639, 3639, 3639 };   /* 容量 DS:[0x13c][0x140][0x146][0x144]（測定のみ：起動時に決まる値） */
static long os_pool = 32767;
static int os_cap_user;                 /* ①の ① 変更確定 で容量を決めた */
static const Jwc *os_d;                 /* 使用数を読む図面 */
static int os_tick;                     /* ②を抜けたあとも行 2 の桁 18 に ┝ が残る（本物は桁 19 から消す。測定） */
static int os_pal_drawn;                /* 一度見本を出した（本物は消さない） */

int jw_optset_env_drive(void)
{
    return os_item == 5 ? os_ph : 0;
}

int jw_optset_cursor_hidden(int opt_stage)
{
    return opt_stage == JW_OPT_SET_TIME || opt_stage == JW_OPT_SET_KEY
        || (opt_stage == JW_OPT_SET_COL && os_ph == 1);
}

float jw_optset_screen_mm(void)
{
    return os_screen_mm;
}

long jw_optset_drag(void)
{
    return os_drag;
}

void jw_optset_reset(void)
{
    os_tick = 0;
    os_item = 0;
    os_ph = 0;
    nf_n = 0;
    nf[0] = 0;
    ed_n = 0;
    ed[0] = 0;
    os_pal_drawn = 0;
}

void jw_optset_open(int *opt_stage)
{
    jw_optset_reset();
    *opt_stage = JW_OPT_SET;
}

/* ------------------------------------------------------------ 数の欄 */
/* numin が欄に入れる文字（decomp/lift/root_0ad_16d4_numin.txt 0x270c〜0x27a3）：
 * 数字 . / p P # & \ @ / + - * / ^ , [ ] / ' " 。開始桁 + 入力済み文字数 > 78 は受けない。 */
static int nf_char(int k)
{
    return (k >= '0' && k <= '9') || k == '.' || k == 'p' || k == 'P' || k == '#' || k == '&'
        || k == '\\' || k == '@' || k == '+' || k == '-' || k == '*' || k == '/' || k == '^'
        || k == ',' || k == '[' || k == ']' || k == '\'' || k == '"';
}

/* 欄に 1 字足す。本物は `..` を `,` に替える（0x27c1〜0x27e2：直前が `.` で今も `.`）。 */
static void nf_add(int k, int col)
{
    if (!nf_char(k) || col + nf_n > 78 || nf_n >= (int)sizeof nf - 1) {
        return;
    }
    if (nf_n > 0 && nf[nf_n - 1] == '.' && k == '.') {
        nf[nf_n - 1] = ',';
        return;
    }
    nf[nf_n++] = (char)k;
    nf[nf_n] = 0;
}

static void nf_clear(void)
{
    nf_n = 0;
    nf[0] = 0;
}

/* 式の値（`,` の手前まで。+ - * / と単項の -）。 */
static double ex_prim(const char **p)
{
    double v;
    char *e;

    if (**p == '-') {
        (*p)++;
        return -ex_prim(p);
    }
    if (**p == '+') {
        (*p)++;
        return ex_prim(p);
    }
    v = strtod(*p, &e);
    *p = e;
    return v;
}

static double ex_term(const char **p)
{
    double v = ex_prim(p);

    for (;;) {
        if (**p == '*') {
            (*p)++;
            v *= ex_prim(p);
        } else if (**p == '/') {
            double d;

            (*p)++;
            d = ex_prim(p);
            v = d != 0.0 ? v / d : 0.0;
        } else {
            return v;
        }
    }
}

static double nf_value(void)
{
    const char *p = nf;
    double v = ex_term(&p);

    for (;;) {
        if (*p == '+') {
            p++;
            v += ex_term(&p);
        } else if (*p == '-') {
            p++;
            v -= ex_term(&p);
        } else {
            return v;
        }
    }
}

/* ------------------------------------------------------------ 文字の欄 */
static void ed_start(const char *init, int col, int max)
{
    snprintf(ed, sizeof ed, "%s", init);
    ed_n = (int)strlen(ed);
    ed_cur = 0;
    ed_col = col;
    ed_max = max;
}

/* root 21f2:10c3 の鍵（decomp 25760〜26100）：挿入が既定（[0xfda]=1）。1＝左 4＝右 7＝DEL 8＝BS 9＝行頭/行末。 */
static void ed_key(int k)
{
    int i;

    if (k >= 0x20 && k < 0x7f) {
        if (ed_n >= ed_max - 1 || ed_cur >= ed_max - 1) {
            return;
        }
        for (i = ed_n; i >= ed_cur; i--) {
            ed[i + 1] = ed[i];
        }
        ed[ed_cur++] = (char)k;
        ed_n++;
    } else if (k == 8 && ed_cur > 0) {
        for (i = ed_cur; i <= ed_n; i++) {
            ed[i - 1] = ed[i];
        }
        ed_cur--;
        ed_n--;
    } else if (k == 7 && ed_cur < ed_n) {
        for (i = ed_cur; i < ed_n; i++) {
            ed[i] = ed[i + 1];
        }
        ed_n--;
    } else if (k == 1 && ed_cur > 0) {
        ed_cur--;
    } else if (k == 4 && ed_cur < ed_n) {
        ed_cur++;
    } else if (k == 9) {
        ed_cur = ed_cur == ed_n ? 0 : ed_n;
    }
}

/* ------------------------------------------------------------ 描画の部品 */
static void cursor_block(VGA *v, int col)
{
    int y;

    for (y = 7; y <= 15; y++) {
        jw_line(v, (col - 1) * 8, y, (col - 1) * 8 + 7, y, 4, ROP_REPLACE, JW_STYLE_SOLID);
    }
}

/* 数の欄：打った字を欄の桁から、そのあとへ緑の四角。 */
static void field_draw(VGA *v, int col)
{
    if (nf_n > 0) {
        jw_ui_text(v, col, 1, 7, 0, nf);
    }
    cursor_block(v, col + nf_n);
}

/* 文字の欄：字を出し、カーソルの所に排他的論理和の四角（色 4、y 7〜15）。 */
static void edit_draw(VGA *v)
{
    int y;

    if (ed_n > 0) {
        jw_ui_text(v, ed_col, 1, 7, 0, ed);
    }
    for (y = 7; y <= 15; y++) {
        jw_line(v, (ed_col - 1 + ed_cur) * 8, y, (ed_col - 1 + ed_cur) * 8 + 7, y, 4, ROP_XOR,
                JW_STYLE_SOLID);
    }
}

/* ------------------------------------------------------------ 各設定の帯 */
static void band_draw(VGA *v)
{
    jw_ui_text(v, 1, 1, 7, 0, S_ESC);
    jw_ui_text(v, 8, 1, 7, 0, S_BAND);
}

/* ------------------------------------------------------------ 画面ｻｲｽﾞ（②） */
static void size_draw(VGA *v)
{
    int i;
    char one[4];

    jw_ui_text(v, 1, 1, 7, 0, S_KEY_ESC);
    jw_ui_text(v, 8, 1, 7, 0, S_SIZE);
    jw_ui_text(v, 18, 2, 2, 0, "\x84\xba");
    for (i = 1; i <= 29; i++) {
        one[0] = '\x84';
        one[1] = '\xaa';
        one[2] = 0;
        jw_ui_text(v, (i + 9) * 2, 2, 2, 0, one);
    }
    jw_ui_text(v, 78, 2, 2, 0, "\x84\xbc");
    field_draw(v, 52);
}

/* ------------------------------------------------------------ ① ﾒﾓﾘｰ配分 */
/* 最大値の式（decomp：ovl28 3ab8:5038、file-linear 0x2fc00〜0x300de。notes/spec-opt6.md）。
 * M は空きバイト（JW_MEM_FREE。本物は 0xc288、実機の 14 個の図面の最大値から割り出した値）。
 * 除算は long の 0 方向への切り捨て。S は文字列プールの使用バイト + 1。 */
static long mem_used(int k)
{
    if (!os_d) {
        return 0;
    }
    switch (k) {
    case 0: return os_d->n_lines;
    case 1: return os_d->n_arcs;
    case 2: return os_d->n_points;
    default: return os_d->n_texts;
    }
}

static long mem_max(int st)
{
    const long M = JW_MEM_FREE, S = (os_d ? os_d->text_len : 0) + 1;
    const long T0 = mem_used(3), A0 = mem_used(1), P0 = mem_used(2);

    switch (st) {
    case 1: return (M - S - 34 * T0 - 32 * A0 - 12 * P0 - 156) / 22 - 1;
    case 2: return (M - S - 34 * T0 - 12 * P0 - 114 - 22 * os_mv[0]) / 32 - 1;
    case 3: return (M - S - 34 * T0 - 32 * os_mv[1] - 22 * os_mv[0] - 122) / 12 - 1;
    default: return (M - (S + 1) - 32 * os_mv[1] - 12 * os_mv[2] - 22 * os_mv[0] - 66) / 34 - 1;
    }
}

static long mem_pool(void)
{
    long p = JW_MEM_FREE - 22 * os_mv[0] - 32 * os_mv[1] - 12 * os_mv[2] - 24 * os_mv[3] - 91;

    if (p > 0x7fff) {
        p = 0x7fff;
    }
    if ((p & 1) == 0) {
        p--;
    }
    return p;
}

/* 容量の初期値（測定のみ・decomp 未確認）。起動時は 4 つとも 3639。図面を読んで 3639 を越える数があると
 * 本物は読み込みのとき配列を広げる（3ab8:4124→43b1）：新しい容量＝使用数＋δ、
 * δ ＝ (M − 32767 − S − 22L − 32A − 12(P+2T) − 91) / 91（TEST7 の 6688・2610 が合う）。 */
static void mem_caps_from(const Jwc *d)
{
    int k;

    for (k = 0; k < 4; k++) {
        os_cap[k] = 3639;
    }
    if (d && (d->n_lines > 3639 || d->n_arcs > 3639 || d->n_points > 3639 || d->n_texts > 3639)) {
        const long delta = (JW_MEM_FREE - 32767 - (d->text_len + 1) - 22 * d->n_lines - 32 * d->n_arcs
                            - 12 * ((long)d->n_points + 2L * d->n_texts) - 91) / 91;

        os_cap[0] = d->n_lines + delta;
        os_cap[1] = d->n_arcs + delta;
        os_cap[2] = d->n_points + delta;
        os_cap[3] = d->n_texts + delta;
    }
}

static void mem_draw(VGA *v)
{
    char buf[200];

    if (os_ms >= 1 && os_ms <= 4) {
        static const char *const LAB[4] = { S_MEM_LINE, S_MEM_ARC, S_MEM_PT, S_MEM_TXT };

        snprintf(buf, sizeof buf, S_MEM_FMT, LAB[os_ms - 1], mem_used(os_ms == 1 ? 0 : os_ms == 2 ? 1 : os_ms == 3 ? 2 : 3),
                 mem_max(os_ms));
        jw_ui_text(v, 1, 1, 7, 0, buf);
        field_draw(v, 64);
    } else {
        snprintf(buf, sizeof buf, S_MEM_SUM S_MEM_OK, os_mv[0], os_mv[1], (int)os_mv[2], (int)os_mv[3], mem_pool());
        jw_ui_text(v, 1, 1, 7, 0, S_ESC);
        jw_ui_text(v, 8, 1, 7, 0, buf);
    }
}

/* 欄の確定。code：0 通常（打った値）、1 作図範囲の空の押し（値 0＝容量）、2 上の行の押し（初期値のまま）。 */
static int mem_accept(int code, int *opt_stage)
{
    const int k = os_ms - 1;
    const long mx = mem_max(os_ms);
    double v = (os_ms >= 3) ? (double)mx : 0.0;     /* 点・文字列は初期値が最大値 */

    if (code == 0 && nf_n > 0) {
        v = nf_value();
    } else if (code == 1) {
        v = 0.0;
    }
    if (v == 0.0) {
        v = (double)os_cap[k];
    }
    if (v < (double)mem_used(k) || v > (double)mx) {
        nf_clear();
        return JW_OS_TAKEN;
    }
    os_mv[k] = (long)v;
    os_ms++;
    nf_clear();
    (void)opt_stage;
    return JW_OS_TAKEN;
}

static void mem_apply(void)
{
    int k;

    for (k = 0; k < 4; k++) {
        os_cap[k] = os_mv[k];
    }
    os_cap_user = 1;
    os_pool = mem_pool();
}

/* ------------------------------------------------------------ ③ ｺﾏﾝﾄﾞｷｰ */
static void key_draw(VGA *v)
{
    char one[3];
    char buf[96];
    int j;

    jw_ui_text(v, 1, 1, 7, 0, S_KEY_ESC);
    if (os_ki <= 30) {
        snprintf(buf, sizeof buf, "%s \x82\xcc\x83L\x81[  %c \x81\xa8 ", jw_ui_menu_label(os_ki),
                 os_keys[os_ki]);
    } else if (os_ki == 31) {
        if (os_keys[31] == '|') {
            snprintf(buf, sizeof buf, "\x91O\x8d\x80 \x82\xcc\x83L\x81[  [BS] \x81\xa8 ");
        } else {
            snprintf(buf, sizeof buf, "\x91O\x8d\x80 \x82\xcc\x83L\x81[  [%c] \x81\xa8 ", os_keys[31]);
        }
    } else {
        if (os_keys[32] == '|') {
            snprintf(buf, sizeof buf, "\x93" "d\x91\xec \x82\xcc\x83L\x81[  [Z] or [z] \x81\xa8 ");
        } else {
            snprintf(buf, sizeof buf, "\x93" "d\x91\xec \x82\xcc\x83L\x81[  [%c] \x81\xa8 ", os_keys[32]);
        }
    }
    jw_ui_text(v, 8, 1, 7, 0, buf);
    for (j = 1; j <= 30; j++) {
        one[0] = os_keys[j];
        one[1] = 0;
        if (j == os_ki) {
            jw_ui_text(v, (j + 8) * 2, 3, 6, 0xffffu, one);
        } else {
            jw_ui_text(v, (j + 8) * 2, 3, 6, 0, one);
        }
    }
}

/* ------------------------------------------------------------ ⑦ 画色 */
static void color_draw_prompt(VGA *v)
{
    jw_ui_text(v, 1, 1, 7, 0, S_COLNO "7) ?=");
    if (os_ph == 0) {
        edit_draw(v);
    } else if (ed_n > 0) {
        jw_ui_text(v, ed_col, 1, 7, 0, ed);         /* 確定した字は残り、四角は無い（測定） */
    }
}

static void color_draw_edit(VGA *v)
{
    char buf[40];
    int x;

    jw_ui_text(v, 20, 4, 7, 0, "\x82V   \x82W   \x82X");
    jw_ui_text(v, 20, 5, 7, 0, "\x81\xaa   \x81\xaa   \x81\xaa");
    jw_ui_text(v, 19, 7, 7, 0, "Red Green Blue");
    snprintf(buf, sizeof buf, "(%02x) (%02x) (%02x) ", os_rgb[0], os_rgb[1], os_rgb[2]);
    jw_ui_text(v, 19, 8, 7, 0, buf);
    jw_ui_text(v, 20, 10, 7, 0, "\x81\xab   \x81\xab   \x81\xab");
    jw_ui_text(v, 20, 11, 7, 0, "\x82P   \x82Q   \x82R");
    jw_ui_text(v, 20, 14, 7, 0, "\x90" "F\x94\xd4\x8d\x86\x95\xcf\x8dX:[Enter]    \x90" "F\x93o\x98^:[\x81{]");
    jw_ui_text(v, 20, 16, 7, 0, "End       :[Esc]");
    for (x = 400; x < 440; x++) {
        jw_line(v, x, 48, x, 176, (unsigned)os_cidx, ROP_REPLACE, JW_STYLE_SOLID);
    }
    jw_line(v, 500, 48, 500, 176, (unsigned)os_cidx, ROP_REPLACE, JW_STYLE_SOLID);
}

/* ------------------------------------------------------------ 描画 */
void jw_optset_text(VGA *v, const Jwc *d, int opt_stage)
{
    (void)d;
    switch (opt_stage) {
    case JW_OPT_SET:
        band_draw(v);
        if (os_tick) {
            /* ┉の右半分は消えて、軸の 1 本だけが残る。 */
            jw_line(v, 143, 17, 143, 31, 2, ROP_REPLACE, JW_STYLE_SOLID);
        }
        break;
    case JW_OPT_SET_SIZE:
        size_draw(v);
        break;
    case JW_OPT_SET_MEM:
        mem_draw(v);
        break;
    case JW_OPT_SET_KEY:
        if (os_ph == 0) {
            key_draw(v);
        } else {
            char buf[128];

            jw_ui_text(v, 1, 1, 7, 0, S_KEY_ESC);
            snprintf(buf, sizeof buf, "%s %s%s", S_KEY_SAVE, "", "");
            jw_ui_text(v, 8, 1, 7, 0, S_KEY_SAVE S_RUNBAND);
        }
        break;
    case JW_OPT_SET_TIME:
        jw_ui_text(v, 1, 1, 7, 0, S_TIME);
        edit_draw(v);
        break;
    case JW_OPT_SET_DRAG:
        jw_ui_text(v, 1, 1, 7, 0, S_DRAG);
        field_draw(v, 42);
        break;
    case JW_OPT_SET_COL:
        if (os_pal_drawn) {
            color_draw_edit(v);
        }
        color_draw_prompt(v);
        break;
    default:
        break;
    }
}

/* ------------------------------------------------------------ 終了・遷移 */
/* 各設定の帯へ戻る（本物は 30bbd へ戻って帯を描き直す）。 */
static int to_band(int *opt_stage)
{
    os_tick = os_item == 2;
    os_item = 0;
    os_ph = 0;
    nf_clear();
    ed_n = 0;
    ed[0] = 0;
    *opt_stage = JW_OPT_SET;
    return JW_OS_TAKEN;
}

/* ⑤を読み終えて各設定の帯へ（呼び元が読んだあと）。 */
int jw_optset_env_done(int *opt_stage)
{
    return to_band(opt_stage);
}

static int enter_item(Jwc *d, int item, int *opt_stage)
{
    os_item = item;
    os_ph = 0;
    nf_clear();
    ed_n = 0;
    ed[0] = 0;
    *opt_stage = JW_OPT_SET + item;
    if (item == 5) {
        return JW_OS_ENV;
    }
    switch (item) {
    case 1:
        os_ms = 1;
        os_d = d;
        if (!os_cap_user) {
            mem_caps_from(d);
        }
        break;
    case 3:
        os_ki = 1;
        break;
    case 4: {
        char buf[32];
        const long t = d ? d->work_seconds : 0;

        snprintf(buf, sizeof buf, "%d:%02d", (int)(t / 3600), (int)((t % 3600) / 60));
        ed_start(buf, 25, 20);
        break;
    }
    case 7:
        os_cidx = 0;
        os_pal_drawn = 0;
        ed_start("", 24, 60);
        break;
    default:
        break;
    }
    return JW_OS_TAKEN;
}

/* ------------------------------------------------------------ 確定の処理 */
/* ⑥：空 [Enter] は今の値を戻す。|v|≧5 かつ |v|≦30000（DS:[0xa4f0]=5.0、[0xa540]=30000.0）なら (int)v。 */
static int drag_accept(int *opt_stage)
{
    double v = os_drag;

    if (nf_n > 0) {
        v = nf_value();
    }
    if (fabs(v) >= 5.0) {   /* 上限は実質無し（測定：1000000 も受理。[0xa540] は大きな double） */
        os_drag = (long)(short)(int)v;
        return to_band(opt_stage);
    }
    nf_clear();
    return JW_OS_TAKEN;
}

/* ②：0 か空は何もしない。10〜1000（DS:[0xa4f4]=10.0、[0xa574]=1000.0）なら
 * [0xc34] = 518 * (1/480) * 値（float）。 */
static int size_accept(int *opt_stage)
{
    float v = 0.0f;

    if (nf_n > 0) {
        v = (float)nf_value();
    }
    if (v == 0.0f) {
        return to_band(opt_stage);
    }
    if (v <= 1000.0f && v >= 10.0f) {
        const float k = 1.0f / 480.0f;

        os_screen_mm = ((float)518 * k) * v;
        return to_band(opt_stage);
    }
    nf_clear();
    return JW_OS_TAKEN;
}

/* ④：sscanf("%d:%d") が 2 つ読めたら 3600h + 60m 秒に。負なら聞き直し。 */
static int time_accept(Jwc *d, int *opt_stage)
{
    int h, m;

    if (sscanf(ed, "%d:%d", &h, &m) == 2) {
        const long t = (long)(short)h * 3600L + (long)(short)m * 60L;

        if (t < 0) {
            char buf[32];
            const long t0 = d ? d->work_seconds : 0;

            snprintf(buf, sizeof buf, "%d:%02d", (int)(t0 / 3600), (int)((t0 % 3600) / 60));
            ed_start(buf, 25, 20);
            return JW_OS_TAKEN;
        }
        if (d) {
            d->work_seconds = t;
        }
    }
    return to_band(opt_stage);
}

static void pal_read(VGA *v)
{
    os_rgb[0] = v->dac[os_cidx][0];
    os_rgb[1] = v->dac[os_cidx][1];
    os_rgb[2] = v->dac[os_cidx][2];
}

static void pal_write(VGA *v)
{
    vga_set_dac(v, (unsigned)os_cidx, os_rgb[0], os_rgb[1], os_rgb[2]);
}

/* '+'：jw_pal.dat へ 16 色（root 20a9:0547、`%02x %02x %02x\n` を "wt" で）。 */
static void pal_save(const VGA *v)
{
    FILE *f = fopen("orig/JW_PAL.DAT", "wb");
    int i;

    if (!f) {
        return;
    }
    for (i = 0; i < 16; i++) {
        fprintf(f, "%02x %02x %02x\r\n", v->dac[i][0], v->dac[i][1], v->dac[i][2]);
    }
    fclose(f);
}

/* ⑦の色番号の確定。 */
static int color_accept(VGA *v, int *opt_stage)
{
    int n;

    if (ed_n < 1) {
        return to_band(opt_stage);
    }
    if (sscanf(ed, "%d", &n) == 1) {
        os_cidx = n & 0xff;
    }
    if (os_cidx > 15) {
        ed_start("", 24, 60);
        return JW_OS_TAKEN;
    }
    pal_read(v);
    os_pal_drawn = 1;
    os_ph = 1;
    return JW_OS_TAKEN;
}

/* ③の保存：jw_key.000 へ DS:0x1e6 の書式（文字列と改行）で DS:0xedc の 34 字を
 * "wt" で書く（移植は CR LF を直に書く）。 */
static void key_save(void)
{
    FILE *f = fopen("jw_key.000", "wb");

    if (f) {
        fprintf(f, "%s\r\n", os_keys);
        fclose(f);
    }
}

/* ------------------------------------------------------------ 鍵 */
int jw_optset_key(Jwc *d, VGA *v, int key, int *opt_stage)
{
    const int enter = key == 13 || key == 10;

    if (os_item == 0) {
        if (key == 27) {
            return JW_OS_LEAVE;
        }
        if (key >= '1' && key <= '7') {
            return enter_item(d, key - '0', opt_stage);
        }
        if (key >= 0 && key < 256 && jw_ui_key_command(key)) {
            return JW_OS_NONE;
        }
        return JW_OS_TAKEN;
    }
    switch (os_item) {
    case 5:
        /* ファイル選択（*.jwf）：[ESC] は各設定の帯へ、① 選択確定（1・[Enter]）で読んで帯へ（測定：env_*）。
         * ② ドライブ変更の行（os_ph 2）では 1〜7 と [ESC] でファイル選択の行へ、8 でドライブ名入力（os_ph 3）。 */
        if (os_ph == 2) {
            if (key == 27 || (key >= '1' && key <= '7')) {
                os_ph = 0;
            } else if (key == '8') {
                os_ph = 3;
            }
            return JW_OS_TAKEN;
        }
        if (os_ph == 3) {
            if (key == 27 || enter) {
                os_ph = 0;
            }
            return JW_OS_TAKEN;
        }
        if (key == 27) {
            return to_band(opt_stage);
        }
        if (key == '2') {
            os_ph = 2;
            return JW_OS_TAKEN;
        }
        if (key == '1' || enter) {
            return JW_OS_ENVLOAD;
        }
        if (key >= 0 && key < 256 && jw_ui_key_command(key)) {
            return JW_OS_NONE;
        }
        return JW_OS_TAKEN;
    case 1:
        if (os_ms == 5) {
            if (key == '1') {
                mem_apply();
                return to_band(opt_stage);
            }
            if (key == '2') {
                return to_band(opt_stage);
            }
            if (key == 27) {
                os_ms = 4;
            }
            return JW_OS_TAKEN;
        }
        if (key == 27) {
            if (os_ms == 1) {
                return to_band(opt_stage);
            }
            os_ms--;
            nf_clear();
            return JW_OS_TAKEN;
        }
        if (enter) {
            return mem_accept(0, opt_stage);
        }
        if (key == 8) {
            if (nf_n > 0) {
                nf[--nf_n] = 0;
            }
            return JW_OS_TAKEN;
        }
        if (key >= 0 && key < 256 && !nf_char(key) && jw_ui_key_command(key)) {
            return JW_OS_NONE;
        }
        nf_add(key, 64);
        return JW_OS_TAKEN;
    case 6:
    case 2:
        if (key == 27) {
            return to_band(opt_stage);
        }
        if (enter) {
            return os_item == 6 ? drag_accept(opt_stage) : size_accept(opt_stage);
        }
        if (key == 8) {
            if (nf_n > 0) {
                nf[--nf_n] = 0;
            }
            return JW_OS_TAKEN;
        }
        if (key >= 0 && key < 256 && !nf_char(key) && jw_ui_key_command(key)) {
            return JW_OS_NONE;
        }
        nf_add(key, os_item == 6 ? 42 : 52);
        return JW_OS_TAKEN;
    case 4:
        if (key == 27) {
            return to_band(opt_stage);
        }
        if (enter) {
            return time_accept(d, opt_stage);
        }
        ed_key(key);
        return JW_OS_TAKEN;
    case 3:
        if (os_ph == 1) {
            if (key == '1') {
                key_save();
                return to_band(opt_stage);
            }
            if (key == 27 || key == '2') {
                return to_band(opt_stage);
            }
            return JW_OS_TAKEN;
        }
        if (key == 27) {
            return to_band(opt_stage);
        }
        if (enter) {
            os_ki++;
        } else if ((key >= 'A' && key <= 'Z') || (key >= 'a' && key <= 'z') || (os_ki == 31 && key == 8)) {
            if (os_ki == 31 && key == 8) {
                os_keys[31] = '|';
            } else if (os_ki == 32) {
                if (key == 'Z' || key == 'z') {
                    os_keys[32] = 'Z';
                    os_keys[33] = 'z';
                } else {
                    os_keys[32] = (char)key;
                    os_keys[33] = '~';
                }
            } else {
                os_keys[os_ki] = (char)key;
                if (os_ki <= 30) {
                    jw_ui_set_menu_key(os_ki, (char)key);
                }
            }
            os_ki++;
        }
        if (os_ki > 32) {
            os_ph = 1;
        }
        return JW_OS_TAKEN;
    case 7:
        if (os_ph == 0) {
            if (key == 27) {
                return to_band(opt_stage);
            }
            if (enter) {
                return color_accept(v, opt_stage);
            }
            ed_key(key);
            return JW_OS_TAKEN;
        }
        if (key == 27) {
            return to_band(opt_stage);
        }
        if (enter) {
            os_ph = 0;
            ed_start("", 24, 60);
            return JW_OS_TAKEN;
        }
        if (key == '+') {
            pal_save(v);
            os_ph = 0;
            ed_start("", 24, 60);
            return JW_OS_TAKEN;
        }
        if (key == '1' && os_rgb[0] > 0) os_rgb[0]--;
        if (key == '7' && os_rgb[0] < 0x3f) os_rgb[0]++;
        if (key == '2' && os_rgb[1] > 0) os_rgb[1]--;
        if (key == '8' && os_rgb[1] < 0x3f) os_rgb[1]++;
        if (key == '3' && os_rgb[2] > 0) os_rgb[2]--;
        if (key == '9' && os_rgb[2] < 0x3f) os_rgb[2]++;
        pal_write(v);
        return JW_OS_TAKEN;
    default:
        return JW_OS_TAKEN;
    }
}

/* ------------------------------------------------------------ 押し */
int jw_optset_click(Jwc *d, VGA *v, int x, int y, int right, int *opt_stage)
{
    const int top = y >= 0 && y <= 15;
    const int item = top ? jw_ui_top_item(x, y) : 0;

    (void)d;
    if (jw_ui_menu_hit(x, y)) {
        return JW_OS_NONE;
    }
    if (os_item == 0) {
        if (top && item >= 1 && item <= 7) {
            return enter_item(d, item, opt_stage);
        }
        if (top && x < 40) {
            return JW_OS_LEAVE;
        }
        return JW_OS_TAKEN;
    }
    switch (os_item) {
    case 5:
        if (os_ph == 2) {
            if (top && item >= 1 && item <= 7) {
                os_ph = 0;
            } else if (top && item == 8) {
                os_ph = 3;
            } else if (top && item == 0 && x < 40) {
                os_ph = 0;
            }
            return JW_OS_TAKEN;
        }
        if (os_ph == 3) {
            if (top && item == 0 && x < 40) {
                os_ph = 0;
            }
            return JW_OS_TAKEN;
        }
        if (top && item == 2) {
            os_ph = 2;
            return JW_OS_TAKEN;
        }
        if (top && item == 1) {
            return JW_OS_ENVLOAD;
        }
        if (top && item == 0 && x < 40) {
            return to_band(opt_stage);
        }
        return JW_OS_TAKEN;
    case 1:
        if (os_ms == 5) {
            if (item == 1) {
                mem_apply();
                return to_band(opt_stage);
            }
            if (item == 2) {
                return to_band(opt_stage);
            }
            return JW_OS_TAKEN;
        }
        if (top) {
            nf_clear();
            return mem_accept(2, opt_stage);
        }
        return mem_accept(nf_n > 0 ? 0 : 1, opt_stage);
    case 6:
        if (top) {
            nf_clear();
        }
        return drag_accept(opt_stage);
    case 2:
        if (top) {
            nf_clear();
        }
        return size_accept(opt_stage);
    case 4:
        if (right || (top && x <= 36)) {
            return to_band(opt_stage);
        }
        return time_accept(d, opt_stage);
    case 7:
        if (os_ph == 0) {
            if (right || (top && x <= 36)) {
                return to_band(opt_stage);
            }
            return color_accept(v, opt_stage);
        }
        return JW_OS_TAKEN;
    case 3:
        if (os_ph == 1) {
            if (right || item == 2) {
                return to_band(opt_stage);
            }
            if (item == 1) {
                FILE *f = fopen("jw_key.000", "wb");

                if (f) {
                    fprintf(f, "%s\r\n", os_keys);
                    fclose(f);
                }
                return to_band(opt_stage);
            }
        }
        return JW_OS_TAKEN;
    default:
        return JW_OS_TAKEN;
    }
}
