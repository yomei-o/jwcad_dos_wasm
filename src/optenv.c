/* src/optenv.c -- ｵﾌﾟｼｮﾝ ⑥各設定 ⑤環境FILE の読み込み（*.jwf）。
 *
 * 本物は ovl28 の 3ab8:1305（file-linear 0x2be85）。仕様は notes/spec-opt6.md の ⑤ の節。
 * 行の読み方（0x2bef1〜0x2c1d4）：fgets(190)、`#` で始まる行と `=` の無い行は捨てる、値は `=` の次から半角空白を読み飛ばした所、
 * キーワードは行頭からの前方一致（大文字小文字を区別）。sscanf の戻り値は見ない（足りない値は元のまま）。
 * 移植が持っているもの（レイヤ名・グループ名、レイヤの表示/読取/プロテクト、書込グループ・レイヤ、線種・線色の既定）だけを書き、
 * 持っていないもの（寸法・文字寸法の定数など）は読んで捨てる（notes/spec-opt6.md に一覧）。 */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "optenv.h"

/* 行頭が kw で始まるか（root 11f2:0312）。 */
static int starts(const char *line, const char *kw)
{
    return strncmp(line, kw, strlen(kw)) == 0;
}

/* `,` で切った n 番目の項目（0 起点）。 */
static const char *nth(const char *p, int n)
{
    while (n-- > 0) {
        p = strchr(p, ',');
        if (!p) {
            return NULL;
        }
        p++;
    }
    return p;
}

/* LAYCND の 1 つの値 v をグループ／レイヤの状態に分ける。 */
static void cnd_set(unsigned char *show, unsigned char *edit, int v, int *is_write)
{
    int d, t;

    *is_write = 0;
    if (v >= 100) {
        *is_write = 1;
        v = 2;                      /* 百の位以外の桁は捨てる（0x2c9xx） */
    }
    d = v % 10;
    t = v / 10;
    *show = 0;
    *edit = 0;
    if (d >= 1) {
        *show = 1;
    }
    if (d >= 2) {
        *edit = 1;
    }
    if (t >= 1) {
        *edit = (unsigned char)(*edit | 2);
    }
    if (t >= 2) {
        *edit = (unsigned char)(*edit | 6);
    }
}

static void trim_name(char *s, size_t cap)
{
    char *c = strchr(s, ',');
    char *n = strchr(s, '\n');
    size_t len;

    (void)cap;
    if (c) {
        *c = 0;
    }
    n = strchr(s, '\n');
    if (n) {
        *n = 0;
    }
    n = strchr(s, '\r');
    if (n) {
        *n = 0;
    }
    len = strlen(s);
    while (len > 0 && s[len - 1] == ' ') {
        s[--len] = 0;
    }
}

int jw_optenv_load(Jwc *d, const char *path, JwEnvState *st)
{
    FILE *f = fopen(path, "rt");
    char line[200];
    int ev_group = -1;                  /* LAYCND の書込グループ（[bp-2]） */
    int eof_ok = 0;

    if (!f) {
        return -1;
    }
    while (fgets(line, 190, f)) {
        const char *p;

        if (line[0] == '#') {
            continue;
        }
        p = strchr(line, '=');
        if (!p) {
            continue;
        }
        p++;
        while (*p == ' ') {
            p++;
        }
        if (starts(line, "LAYTYP_") || starts(line, "LAYCOL_")) {
            const int is_typ = line[3] == 'T';
            const int g = (int)strtol(line + 7, NULL, 16);
            int val[16] = { 0 };
            int i;
            const char *q = p;

            for (i = 0; i < 16; i++) {
                char *e;
                const long x = strtol(q, &e, 10);

                if (e == q) {
                    break;
                }
                val[i] = (int)x;
                q = e;
            }
            if (g >= 0 && g < 16) {
                for (i = 0; i < 16; i++) {
                    (is_typ ? st->laytyp : st->laycol)[g * 16 + i] = (unsigned char)val[i];
                }
            }
        } else if (starts(line, "LAYNAM_")) {
            const int g = (int)strtol(line + 7, NULL, 16);
            int i;

            if (g < 0 || g > 15) {
                continue;
            }
            for (i = 0; i < 17; i++) {
                const char *q = nth(p, i);
                char tmp[24];

                if (!q) {
                    break;
                }
                if (i == 0) {
                    strncpy(tmp, q, 16);
                    tmp[16] = 0;
                    trim_name(tmp, sizeof tmp);
                    memset(d->group_name[g], 0, sizeof d->group_name[g]);
                    strncpy(d->group_name[g], tmp, 16);
                } else {
                    strncpy(tmp, q, 8);
                    tmp[8] = 0;
                    trim_name(tmp, sizeof tmp);
                    memset(d->layer_name[g * 16 + i - 1], 0, sizeof d->layer_name[0]);
                    strncpy(d->layer_name[g * 16 + i - 1], tmp, 8);
                }
            }
        } else if (starts(line, "LAYCND_")) {
            const int g = (int)strtol(line + 7, NULL, 16);
            const char *q = p;
            int i, w;
            char *e;
            long v;

            if (g < 0 || g > 15) {
                continue;
            }
            v = strtol(q, &e, 10);
            if (e == q || v < 0) {
                continue;
            }
            cnd_set(&d->group_on[g], &d->group_edit[g], (int)v, &w);
            if (w) {
                ev_group = g;
            }
            q = e;
            for (i = 0; i < 16; i++) {
                while (*q == ',' || *q == ' ') {
                    q++;
                }
                v = strtol(q, &e, 10);
                if (e == q || v < 0) {
                    break;
                }
                cnd_set(&d->layer_on[g * 16 + i], &d->layer_edit[g * 16 + i], (int)v, &w);
                if (w) {
                    st->group_write_layer[g] = (unsigned char)(g * 16 + i);
                }
                q = e;
            }
            {
                const int lb = st->group_write_layer[g];

                d->layer_on[lb] = 1;
                d->layer_edit[lb] = 1;
            }
        }
        /* LTYPE・LCOLLOR・MPEN・MWIDE・MHIGH・MDIST・M_OFFSET・MSMNT1〜3・SNPO_SET・LAYSCALE・COM_LAY*・COM_AUTO*・PAPER_NO は
         * 読んで捨てる（移植に対応する持ち物が無い、または既定値と同じ。notes/spec-opt6.md 参照）。 */
    }
    eof_ok = feof(f) != 0;
    fclose(f);
    /* 読み終えたあと（0x2bf0d〜）：書込グループ g の表示・読取可を立て、書込レイヤ＝その表。 */
    {
        const int g = ev_group >= 0 ? ev_group : (d->write_layer >> 4) & 15;
        const int lb = st->group_write_layer[g];

        d->group_on[g] = 1;
        d->group_edit[g] = 1;
        d->write_layer = lb;
        if (st->laytyp[lb]) {
            st->write_type = st->laytyp[lb];
        }
        if (st->laycol[lb]) {
            st->write_pen = st->laycol[lb];
        }
    }
    return eof_ok ? 0 : -1;
}
