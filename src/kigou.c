/* 変形 ④線記号変形 の記号データを読むところ。書式は src/kigou.h に。 */
#include "kigou.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 行から数を拾います。`"` が来たらそこで止め、`e`／`E` は円の印として
 * 呼び手に知らせます。読めた数の個数を返します。 */
static int numbers(const char *s, double *out, int want, int *saw_e,
                   const char **rest)
{
    int got = 0;

    if (saw_e) {
        *saw_e = 0;
    }
    while (*s && got < want) {
        char *end;

        while (*s == ' ' || *s == '\t' || *s == '\r' || *s == '\n') {
            s++;
        }
        if (!*s || *s == '"') {
            break;
        }
        if ((*s == 'e' || *s == 'E') && saw_e) {
            /* `... -11   e  1.2` —— ここから先は半径（と偏平率）です。 */
            *saw_e = 1;
            s++;
            continue;
        }
        if (*s != '-' && *s != '.' && (*s < '0' || *s > '9')) {
            break;              /* 名前や注記。ここまでが数です */
        }
        out[got] = strtod(s, &end);
        if (end == s) {
            break;
        }
        s = end;
        got++;
    }
    if (rest) {
        *rest = s;
    }
    return got;
}

/* 行の頭から空白を飛ばし、末尾の空白を落とした写しを作ります。 */
static void trim_to(char *dst, size_t cap, const char *s)
{
    size_t n;

    while (*s == ' ' || *s == '\t') {
        s++;
    }
    n = strlen(s);
    while (n > 0 && (s[n - 1] == ' ' || s[n - 1] == '\t'
                     || s[n - 1] == '\r' || s[n - 1] == '\n')) {
        n--;
    }
    if (n >= cap) {
        n = cap - 1;
    }
    memcpy(dst, s, n);
    dst[n] = 0;
}

/* 区切りの行か。990〜999 と、表示倍率追加指定の `99*`。 */
static int separator(const char *line, int *sep, double *mul)
{
    const char *s = line;
    long v;
    char *end;

    while (*s == ' ' || *s == '\t') {
        s++;
    }
    if (s[0] == '9' && s[1] == '9' && s[2] == '*') {
        *sep = 999;
        *mul = strtod(s + 3, 0);
        return 1;
    }
    v = strtol(s, &end, 10);
    if (end == s || v < 990 || v > 999) {
        return 0;
    }
    while (*end == ' ' || *end == '\t' || *end == '\r' || *end == '\n') {
        end++;
    }
    if (*end) {
        return 0;               /* 数のあとに何か書いてある行は部材です */
    }
    *sep = (int)v;
    *mul = 0.0;
    return 1;
}

/* 1 つの部材の行を読みます。読めたら 1。 */
static int one_part(const char *line, JwKigouPart *p)
{
    double v[16];
    const char *rest = line;
    int saw_e = 0;
    int n;

    memset(p, 0, sizeof(*p));
    p->pen = p->type = p->layer = -1;
    n = numbers(line, v, 16, &saw_e, &rest);
    if (n < 2) {
        return 0;
    }
    p->c1 = (long)v[0];
    p->c2 = (long)v[1];

    /* 倍率指定: `700 倍率` と `800 倍率`（それだけの行）。 */
    if (n == 2 && (p->c1 == 700 || p->c1 == 800)) {
        p->kind = JW_KIGOU_SCALE;
        p->real_size = p->c1 == 800;
        p->scale = v[1];
        return 1;
    }
    /* 記号連鎖: `10000 番号`。 */
    if (n == 2 && p->c1 == 10000) {
        p->kind = JW_KIGOU_NEXT;
        return 1;
    }
    /* 他の命令へ移る指定は制御コード（1）だけの行です。 */
    if (n <= 2 && p->c1 >= 10100) {
        p->kind = JW_KIGOU_CMD;
        return 1;
    }
    if (n < 6) {
        return 0;
    }
    p->x1 = v[2];
    p->y1 = v[3];
    p->x2 = v[4];
    p->y2 = v[5];
    if (n >= 7) {
        p->pen = (int)v[6];
        p->has_attr = 1;
    }
    if (n >= 8) {
        p->type = (int)v[7];
    }
    if (n >= 9) {
        p->layer = (int)v[8];
    }
    if (saw_e) {
        /* 円・円弧・楕円。`e` のあとが半径、その次が偏平率。 */
        p->kind = JW_KIGOU_ARC;
        if (n >= 10) {
            p->radius = v[9];
        }
        if (p->radius < 0.0) {
            p->radius = -p->radius;
            p->flat = n >= 11 ? v[10] : 0.0;
        }
        return 1;
    }
    if (p->pen == 10000) {
        p->kind = JW_KIGOU_TEXT_PART;
        while (*rest && *rest != '"') {
            rest++;
        }
        if (*rest == '"') {
            trim_to(p->text, sizeof p->text, rest + 1);
        }
        return 1;
    }
    if (p->pen == 30000) {
        p->kind = JW_KIGOU_POINT;
        return 1;
    }
    p->kind = JW_KIGOU_LINE;
    return 1;
}

int jw_kigou_read(const char *path, JwKigou *out)
{
    char line[512];
    FILE *f = fopen(path, "rb");
    JwKigouSym *sym = 0;
    int sep = 999;
    double mul = 0.0;
    int want_head = 0;

    memset(out, 0, sizeof(*out));
    if (!f) {
        return 0;
    }
    while (fgets(line, (int)sizeof line, f)) {
        double v[4];

        if (line[0] == '#') {
            if (!out->group[0]) {
                trim_to(out->group, sizeof out->group, line + 1);
            }
            continue;
        }
        if (!out->said) {
            /* 見出しの次にある「いくつ入っているか」。 */
            if (numbers(line, v, 1, 0, 0) == 1 && v[0] > 0 && v[0] < 100) {
                out->said = (int)v[0];
            }
            continue;
        }
        if (separator(line, &sep, &mul)) {
            want_head = 1;
            continue;
        }
        {
            /* **空の行は飛ばします。** `999` のあとに 1 行
             * 空けてあるファイルがあり（JW_OPT4H.DAT など）、
             * そこを見出しとして読むと名前が空になって、
             * 本物の一覧と 1 つずつずれます。 */
            const char *t = line;

            while (*t == ' ' || *t == '\t'
                   || *t == '\r' || *t == '\n') {
                t++;
            }
            if (!*t) {
                continue;
            }
        }
        if (want_head) {
            const char *rest = line;

            want_head = 0;
            if (out->n >= JW_KIGOU_MAX) {
                sym = 0;
                continue;
            }
            sym = &out->sym[out->n++];
            memset(sym, 0, sizeof(*sym));
            sym->sep = sep;
            sym->sep_mul = mul;
            if (numbers(line, v, 1, 0, &rest) == 1) {
                sym->picks = (int)v[0];
            }
            trim_to(sym->name, sizeof sym->name, rest);
            continue;
        }
        if (!sym || sym->n >= JW_KIGOU_PARTS) {
            continue;
        }
        if (one_part(line, &sym->part[sym->n])) {
            sym->n++;
        }
    }
    fclose(f);
    return out->n;
}

static const char *const KIGOU_FILES[JW_KIGOU_FILES] = {
    "orig/JW_OPT4.DAT",  "orig/JW_OPT4B.DAT", "orig/JW_OPT4C.DAT",
    "orig/JW_OPT4D.DAT", "orig/JW_OPT4E.DAT", "orig/JW_OPT4F.DAT",
    "orig/JW_OPT4G.DAT", "orig/JW_OPT4H.DAT", "orig/JW_OPT4I.DAT",
    "orig/JW_OPT4J.DAT"
};

const JwKigou *jw_kigou_lib(int which)
{
    static JwKigou lib[JW_KIGOU_FILES];
    static char done[JW_KIGOU_FILES];

    if (which < 0 || which >= JW_KIGOU_FILES) {
        return 0;
    }
    if (!done[which]) {
        done[which] = 1;
        jw_kigou_read(KIGOU_FILES[which], &lib[which]);
    }
    return lib[which].n ? &lib[which] : 0;
}

char jw_kigou_letter(int which)
{
    if (which < 0 || which >= JW_KIGOU_FILES) {
        return 0;
    }
    return (char)('A' + which);
}
