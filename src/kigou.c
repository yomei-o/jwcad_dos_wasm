/* 変形 ④線記号変形 の記号データを読むところ。書式は src/kigou.h に。 */
#include "kigou.h"

#include <math.h>
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
            /* **区切りは、いま読み終えた記号のもの**です。一覧での
             * 大きさは「その記号を閉じる区切り」が決めます（990 が 0.1、
             * 999 が 1.0）——手前の区切りではありません。 */
            if (sym) {
                sym->sep = sep;
                sym->sep_mul = mul;
            }
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
            sym->sep = 999;
            sym->sep_mul = 0.0;
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

/* 記号を図面に置きます —— **指示線 1 と、記号の位置**まで。
 *
 * 「幅 [1mm]」を SAMPLE0 の y=157 の線（x 161..231）に、位置 (300,200) で
 * 置いた本物の絵から読みました:
 *
 *   記号の原点は**押した位置を指示線に落とした点**（x=300）
 *   `110 01 -12 0 -1.5 0` は制御(1)=10 なので**左端が指示線の始点**（161）、
 *   右端は原点の 1.5 手前（298）
 *   `101 10 1.5 0 12 0` は制御(2)=10 なので**右端が指示線の終点**
 *   山形は原点まわり ±1.5・±1 単位
 *
 * **記号の 1 単位は紙の 1mm** なので、図面の単位にするには `unit_mm` を
 * 掛けます。
 *
 * 制御コードは下 2 桁で読みます。10／20 は端を指示線に合わせる指定、
 * それ以外は 1 の位が意味を持ちます（01 追従、08 表のみ、09 ダミー…）。
 * 100 の位の 1／2 は線色を指示線 1／2 と同じにする指定です。
 *
 * **まだ入っていないもの**: 指示線 2、指示回数 2 以上、倍率（700／800 と
 * ①倍率 横,縦）、円・文字・実点の部材、文字入力、他コマンドへの移行。
 */
int jw_kigou_put(Jwc *d, const JwKigouSym *sym, const JwcLine *base,
                 const JwcLine *base2, double ox, double oy)
{
    const double mm = d->unit_mm > 0.0f ? (double)d->unit_mm : 1.0;
    /* **端に合わせるときは原点から遠いほうの端**です（「コーナー」と
     * 「幅 [1mm]」の実測）。記号の +x も、その遠い端から原点への向き。 */
    const double d0 = (base->x0 - ox) * (base->x0 - ox)
                    + (base->y0 - oy) * (base->y0 - oy);
    const double d1 = (base->x1 - ox) * (base->x1 - ox)
                    + (base->y1 - oy) * (base->y1 - oy);
    const double fx = d0 >= d1 ? base->x0 : base->x1;
    const double fy = d0 >= d1 ? base->y0 : base->y1;
    const double sx = d0 >= d1 ? base->x1 : base->x0;
    const double sy = d0 >= d1 ? base->y1 : base->y0;
    const double dx = ox - fx, dy = oy - fy;
    const double len = sqrt(dx * dx + dy * dy);
    double ux, uy, nx, ny, gx = 0.0, gy = 0.0, hx = 0.0, hy = 0.0;
    int k, put = 0;

    if (len <= 0.0) {
        return 0;
    }
    ux = dx / len;
    uy = dy / len;
    nx = -uy;
    ny = ux;
    if (base2) {
        /* **指示線 2 があれば、記号の y はその向き**です
         * （JW_OPT4.DAT §２-２）。こちらも遠いほうの端から原点へ。 */
        const double e0 = (base2->x0 - ox) * (base2->x0 - ox)
                        + (base2->y0 - oy) * (base2->y0 - oy);
        const double e1 = (base2->x1 - ox) * (base2->x1 - ox)
                        + (base2->y1 - oy) * (base2->y1 - oy);
        const double ex = ox - (e0 >= e1 ? base2->x0 : base2->x1);
        const double ey = oy - (e0 >= e1 ? base2->y0 : base2->y1);
        const double el = sqrt(ex * ex + ey * ey);

        gx = e0 >= e1 ? base2->x0 : base2->x1;
        gy = e0 >= e1 ? base2->y0 : base2->y1;
        hx = e0 >= e1 ? base2->x1 : base2->x0;
        hy = e0 >= e1 ? base2->y1 : base2->y0;
        if (el > 0.0) {
            nx = -ex / el;
            ny = -ey / el;
        }
    }
    for (k = 0; k < sym->n; k++) {
        const JwKigouPart *p = &sym->part[k];
        const long c1 = p->c1 % 100, c2 = p->c2 % 100;
        JwcLine l;

        if (p->kind != JW_KIGOU_LINE && p->kind != JW_KIGOU_ARC) {
            continue;           /* 文字・実点はまだ */
        }
        if (c1 % 10 == 8 || c2 % 10 == 8 || c1 % 10 == 9 || c2 % 10 == 9) {
            continue;           /* 表のみ・ダミーは作図しません */
        }
        if ((c1 == 20 || c2 == 20) && !base2) {
            continue;           /* 指示線 2 が無ければ置けません */
        }
        if (p->kind == JW_KIGOU_ARC) {
            /* **角度は記号の枠のもの**なので、指示線の角度を
             * 足して図面の角度にします。半径は紙の mm です。 */
            const double turn = atan2(uy, ux) * 180.0 / 3.14159265358979323846;
            JwcArc a;

            memset(&a, 0, sizeof a);
            a.cx = (float)(ox + (p->x1 * ux + p->y1 * nx) * mm);
            a.cy = (float)(oy + (p->x1 * uy + p->y1 * ny) * mm);
            a.r = (float)(p->radius * mm);
            a.flatten = p->flat > 0.0
                      ? (short)(p->flat * 10000.0 + 0.5) : 10000;
            a.start = (long)((p->x2 + turn) * 65536.0);
            a.end = (long)((p->y2 + turn) * 65536.0);
            a.type = base->type;
            a.pen = base->pen;
            a.layer = base->layer;
            memcpy(a.rest, base->rest, sizeof a.rest);
            if (!(p->c1 >= 100 && p->c1 < 300)) {
                if (p->has_attr && p->pen > 0) {
                    a.pen = (unsigned char)p->pen;
                }
                if (p->has_attr && p->type > 0) {
                    a.type = (unsigned char)(p->type % 10);
                }
            }
            if (jwc_put_arc(d, &a)) {
                put++;
            }
            continue;
        }
        memset(&l, 0, sizeof l);
        if (c1 == 10) {
            l.x0 = (float)fx;
            l.y0 = (float)fy;
        } else if (c1 == 20 && base2) {
            /* 制御(1) の 20 は指示線 2 の**近い**端です。 */
            l.x0 = (float)hx;
            l.y0 = (float)hy;
        } else {
            l.x0 = (float)(ox + (p->x1 * ux + p->y1 * nx) * mm);
            l.y0 = (float)(oy + (p->x1 * uy + p->y1 * ny) * mm);
        }
        if (c2 == 10) {
            /* 制御(2) の 10 は指示線 1 の**近い**端です。 */
            l.x1 = (float)sx;
            l.y1 = (float)sy;
        } else if (c2 == 20 && base2) {
            l.x1 = (float)gx;
            l.y1 = (float)gy;
        } else {
            l.x1 = (float)(ox + (p->x2 * ux + p->y2 * nx) * mm);
            l.y1 = (float)(oy + (p->x2 * uy + p->y2 * ny) * mm);
        }
        /* 100 の位が 1 なら線色・線種・レイヤは指示線 1 と同じ。 */
        if (p->c1 >= 100 && p->c1 < 300) {
            /* 100 の位が 1 なら指示線 1、2 なら指示線 2 の
             * 線色・線種・レイヤです（§４-２、§４-３）。 */
            const JwcLine *from = p->c1 >= 200 && base2 ? base2 : base;

            l.type = from->type;
            l.pen = from->pen;
            l.layer = from->layer;
            memcpy(l.rest, from->rest, sizeof l.rest);
        } else {
            l.type = (unsigned char)(p->has_attr && p->type > 0
                                     ? p->type % 10 : base->type);
            l.pen = (unsigned char)(p->has_attr && p->pen > 0
                                    ? p->pen : base->pen);
            l.layer = base->layer;
            memcpy(l.rest, base->rest, sizeof l.rest);
        }
        if (jwc_put_line(d, &l)) {
            put++;
        }
    }
    return put;
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
