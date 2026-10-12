/* src/optdata.c -- ｵﾌﾟｼｮﾝ ④一括処理 ③データ整理。
 *
 * 仕様と番地は notes/spec-opt4-cde.md の ③ の節（ovl17 3ab8:566c、dis 0x301ec〜0x30635）。
 * 「測定のみ・decomp 未確認」と書いたものは実機（tools/pshot.sh・optsubcheck.sh・functest.sh）で
 * 採った値で、decomp では読み切れなかったもの。 */
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "optdata.h"
#include "cmd.h"

/* ------------------------------------------------------------------ 字面 */
/* 実機から採ったバイト列（tools/pshot.sh、2026-10-12）。 */
#define S_TITLE   "\x90\xae\x97\x9d\x94\xcd\x88\xcd"                         /* 整理範囲 */
#define S_L1      "\x8f" "d\x95\xa1\x90\xfc\x90\xae\x97\x9d"                 /* 重複線整理 */
#define S_L2      "\x98" "A\x8c\x8b\xa5\x8f" "d\x95\xa1\x90\xfc\x90\xae\x97\x9d" /* 連結･重複線整理 */
#define S_L3      "\x83\\\x81[\x83g"                                         /* ソート */
#define S_L4      "\x93\xaf\x88\xea\x95\xb6\x8e\x9a\x90\xae\x97\x9d"         /* 同一文字整理 */
#define S_START   "\x8en\x93_\x83}\x83" "E\x83X\x8ew\x8e\xa6 "              /* 始点マウス指示  */
#define S_LCIRC   "(L)\x90\xfc\xa5\x89~ "                                    /* (L)線･円  */
#define S_MOJI    "\x81i\x95\xb6\x8e\x9a\x81j"                               /* （文字） */
#define S_PREV    "|\x87@ \x91O \x94\xcd \x88\xcd|"                          /* |① 前 範 囲| */
#define S_RUN     "  |\x87@ \x8e\xc0\x8ds(L)|\x87" "A \x92\x86\x8e~(R)|"    /* 確定の帯 */
#define S_G0A     "|\x87@\x8f" "d\x95\xa1\x90\xfc\x90\xae\x97\x9d(L) |"
#define S_G0B     "\x87" "A\x98" "A\x8c\x8b\xa5\x8f" "d\x95\xa1\x90\xfc\x90\xae\x97\x9d(R) |"
#define S_G0C     "\x87" "B\x83\\\x81[\x83g |"
#define S_G0D     "\x87" "C\x93\xaf\x88\xea\x95\xb6\x8e\x9a\x90\xae\x97\x9d|"
#define S_BS      "[BS]\x91O\x8d\x80"                                        /* [BS]前項 */

/* G0：`|①重複線整理(L) |②連結･重複線整理(R) |③ソート |④同一文字整理|`（桁 8）＋ [BS]前項（桁 73）。
 * 帯は 2b54 が番号を振る（decomp dis 0x30274〜0x30311）。 */
void jw_optdata_g0(VGA *v)
{
    jw_ui_text(v, 8, 1, 7, 0, S_G0A S_G0B S_G0C S_G0D);
    jw_ui_text(v, 73, 1, 7, 0, S_BS);
}

static const char *label(int mode)
{
    return mode == 1 ? S_L1 : mode == 2 ? S_L2 : mode == 3 ? S_L3 : S_L4;
}

/* 範囲・確定の行。段は範囲の共通の道（0 始点、1 終点、3 追加･除外、2 確定）。
 * 線･円の範囲は 面取 の一括処理（src/ui.c）、文字の範囲は 文編集 ⑤位置整理 と同じ並びで、
 * 言葉が `整理範囲` に替わり、始点の行だけ [ESC] と ①前範囲 が付く（測定）。 */
void jw_optdata_range(VGA *v, const JwUi *s)
{
    const int moji = s->dr == 4;
    char one[96];

    if (s->stage == 2) {
        /* 確定の帯（decomp dis 0x3044b〜0x30501）：言葉＋`  |① 実行(L)|② 中止(R)|`、[ESC] 有効。 */
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
        strcpy(one, label(s->dr));
        strcat(one, S_RUN);
        jw_ui_text(v, 8, 1, 7, 0, one);
    } else if (s->stage == 0) {
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
        jw_ui_text(v, 8, 1, 7, 0, S_TITLE "  " S_START);
        jw_ui_text(v, 33, 1, 7, 0, moji ? S_MOJI : S_LCIRC);
        jw_ui_text(v, 68, 1, 7, 0, S_PREV);
    } else if (s->stage == 1) {
        if (moji) {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]  ");
            jw_ui_text(v, 8, 1, 7, 0, S_MOJI);
            jw_ui_text(v, 16, 1, 7, 0, "  ");
            jw_ui_text(v, 18, 1, 7, 0, "\x8fI\x93_\x8ew\x8e\xa6 ");
            jw_ui_text(v, 27, 1, 7, 0, "\xcf\xb3\xbd(L) ");
            jw_ui_text(v, 34, 1, 7, 0, " \x94\xcd\x88\xcd\x8am\x92\xe8 ");
            jw_ui_text(v, 44, 1, 7, 0, "\xcf\xb3\xbd(R) ");
            jw_ui_text(v, 53, 1, 7, 0, "|");
            jw_ui_text(v, 54, 1, 7, 0, "\x87@");
            jw_ui_text(v, 56, 1, 7, 0, "\x83\x8c\x83" "C\x83\x84");
            jw_ui_text(v, 62, 1, 7, 0, "|");
            jw_ui_text(v, 63, 1, 7, 0, "\x87" "A");
            jw_ui_text(v, 65, 1, 7, 0, "\x95\xb6\x8e\x9a\x8e\xed");
            jw_ui_text(v, 71, 1, 7, 0, "|");
        } else {
            jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
            jw_ui_text(v, 8, 1, 7, 0, "<\x90\xfc\xa5\x89~>");
            jw_ui_text(v, 17, 1, 7, 0, "\x8fI\x93_\x8ew\x8e\xa6");
            jw_ui_text(v, 26, 1, 7, 0, "\xcf\xb3\xbd(L)");
            jw_ui_text(v, 34, 1, 7, 0, "\x94\xcd\x88\xcd\x8am\x92\xe8");
            jw_ui_text(v, 43, 1, 7, 0, "\xcf\xb3\xbd(R)");
            jw_ui_text(v, 53, 1, 7, 0, "|\x87@\x83\x8c\x83" "C\x83\x84|\x87" "A\x90\xfc\x8e\xed\x90" "F|");
        }
    } else if (s->stage == 3) {
        jw_ui_text(v, 1, 1, 7, 0, "[ESC]");
        jw_ui_text(v, 6, 1, 7, 0, "\x81Q");
        jw_ui_text(v, 8, 1, 7, 0, S_TITLE);
        jw_ui_text(v, 18, 1, 7, 0, "\x92\xc7\x89\xc1\xa5\x8f\x9c\x8aO\x83" "f\x81[\x83^\x8ew\x8e\xa6");
        if (moji) {
            jw_ui_text(v, 40, 1, 7, 0, S_MOJI);
        } else {
            jw_ui_text(v, 40, 1, 7, 0, "\x90\xfc\x81" "E\x89~(L)");
            jw_ui_text(v, 51, 1, 7, 0, "[F1\x81`F10]");
        }
        jw_ui_text(v, 68, 1, 7, 0, "|\x87@\x94\xcd\x88\xcd");
        jw_ui_text(v, 76, 1, 7, 0, "\x8am\x92\xe8|");
    }
}

