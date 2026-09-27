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
int jw_kigou_wants2(const JwKigouSym *sym)
{
    int k;

    for (k = 0; k < sym->n; k++) {
        if (sym->part[k].c1 % 100 == 20 || sym->part[k].c2 % 100 == 20) {
            return 1;
        }
    }
    return 0;
}

const JwKigouPart *jw_kigou_input(const JwKigouSym *sym, int nth)
{
    int k, n = 0;

    for (k = 0; k < sym->n; k++) {
        const JwKigouPart *p = &sym->part[k];

        if (p->kind == JW_KIGOU_TEXT_PART && p->c1 >= 20000
            && p->c1 < 22000) {
            if (n == nth) {
                return p;
            }
            n++;
        }
    }
    return 0;
}

int jw_kigou_takes1(const JwKigouSym *sym)
{
    int k;

    for (k = 0; k < sym->n; k++) {
        if (sym->part[k].c1 % 100 == 10 || sym->part[k].c2 % 100 == 10) {
            return 1;
        }
    }
    return 0;
}

int jw_kigou_put(Jwc *d, const JwKigouSym *sym, const JwcLine *base,
                 const JwcLine *base2, double ox, double oy,
                 const char *typed, int phase, JwKigouGhost *ghost,
                 double mx, double my)
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
    /* 倍率指定（700 図寸 / 800 実寸）。行を読むたびに変わります。 */
    double sc = 1.0;
    int flip = 0;
    int k, put = 0, in_n = 0;

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
        /* **①倍率 横,縦**。記号の枠の x と y に掛けます。円データの
         * 2 点目は角度なので掛けません。 */
        const double qx1 = p->x1 * mx, qy1 = p->y1 * my;
        const double qx2 = p->kind == JW_KIGOU_ARC ? p->x2 : p->x2 * mx;
        const double qy2 = p->kind == JW_KIGOU_ARC ? p->y2 : p->y2 * my;
        JwcLine l;

        if (p->kind == JW_KIGOU_SCALE) {
            /* **次の行からの倍率**です（§７）。実寸のときは縮尺の分母で
             * 割って紙のミリにします。倍率が負なら 180 度回します。 */
            const double f = p->scale < 0.0 ? -p->scale : p->scale;

            sc = f;
            if (p->real_size && d->denom > 0.0f) {
                sc /= (double)d->denom;
            }
            flip = p->scale < 0.0;
            continue;
        }
        if (p->kind != JW_KIGOU_LINE && p->kind != JW_KIGOU_ARC
            && p->kind != JW_KIGOU_TEXT_PART
            && p->kind != JW_KIGOU_POINT) {
            continue;           /* 連鎖・命令はまだ */
        }
        if (p->kind == JW_KIGOU_TEXT_PART && p->c1 >= 22000) {
            continue;           /* 打鍵を飛ばしたときの字はまだ */
        }
        {
            const int is_in = p->kind == JW_KIGOU_TEXT_PART
                            && p->c1 >= 20000;

            if (phase >= 10) {
                /* **いま聞いている 1 つだけ**を相手にします。 */
                if (!is_in) {
                    continue;
                }
                if (in_n++ != phase % 10) {
                    continue;
                }
                if (phase < 20 && (!typed || !typed[0])) {
                    continue;   /* 何も打たなければ置きません */
                }
            } else if (phase == 0) {
                if (is_in) {
                    continue;   /* 押した時点ではまだ字が無い */
                }
            } else if (is_in && (!typed || !typed[0])) {
                continue;
            }
        }
        if (c1 % 10 == 8 || c2 % 10 == 8 || c1 % 10 == 9 || c2 % 10 == 9) {
            continue;           /* 表のみ・ダミーは作図しません */
        }
        if ((c1 == 20 || c2 == 20) && !base2) {
            continue;           /* 指示線 2 が無ければ置けません */
        }
        if (p->kind == JW_KIGOU_POINT) {
            JwcPoint pt;

            memset(&pt, 0, sizeof pt);
            pt.x = (float)(ox + (qx1 * ux + qy1 * nx) * mm * sc * (flip ? -1.0 : 1.0));
            pt.y = (float)(oy + (qx1 * uy + qy1 * ny) * mm * sc * (flip ? -1.0 : 1.0));
            pt.layer = base->layer;
            memcpy(pt.rest, base->rest, sizeof pt.rest);
            if (jwc_put_point(d, &pt)) {
                put++;
            }
            continue;
        }
        if (p->kind == JW_KIGOU_TEXT_PART) {
            /* **DAT の 2 点目は向きだけ**です。記録に入れる終点は
             * 字の長さから作ります——本物の箱は「建具記号 (AW)」で
             * 10 画素、2 点目をそのまま入れると 18 画素になります。
             *
             * 基点は文字種の 100 の位（0 左下・1 中下 … 8 右上）で、
             * その分だけ始点を戻します。 */
            JwcText t;
            const int sz = p->type > 0 ? p->type % 100 : 1;
            const int bp = p->type > 0 ? (p->type / 100) % 10 : 0;
            /* **すき間は 1 字につき 1 つ**で、半角でも減りません。
             * 全角だけの字では半角換算と同じ答えになるので長く
             * 気づきませんでした——`FL2ＦＬ`（半角 3・全角 2、種 3 は
             * 幅 3.0mm すき間 0.5mm）でだけ 1 画素ずれます。 */
            const double cw = d->text_w[sz <= 10 ? sz : 0] / 10.0 * mm;
            const double gp = d->text_gap[sz <= 10 ? sz : 0] / 10.0 * mm;
            const double high = d->text_h[sz <= 10 ? sz : 0] / 10.0 * mm;
            /* 文字入力（20000）は**打った字**、まだなら空。
             *
             * 文字変更（21000）は**打った字を変える前の字の前に**
             * 差し込みます（実測：既定 `ＦＬ` に `FL2` と打つと
             * `FL2ＦＬ`）。欄が変える前の字を持っていて、カーソルが
             * 先頭にあるからだと読めます。 */
            char joined[160];
            const char *str;
            const unsigned char *q;
            double wide = 0.0, last = 0.0, wtyped = 0.0, lastt = 0.0;
            double bx, by, tx, ty, tn;
            int i = 0;

            if (p->c1 >= 21000 && p->c1 < 22000) {
                joined[0] = 0;
                if (typed && typed[0]) {
                    strncpy(joined, typed, sizeof joined - 1);
                    joined[sizeof joined - 1] = 0;
                }
                strncat(joined, p->text, sizeof joined - strlen(joined) - 1);
                str = joined;
            } else if (p->c1 >= 20000) {
                str = typed && typed[0] ? typed : "";
            } else {
                str = p->text;
            }
            /* **打った分だけの幅**も出します。文字変更は打った字が
             * 前に入るので、`><` の印はそのうしろ——字全体の端ではあり
             * ません。 */
            q = (const unsigned char *)(typed ? typed : "");
            while (q[i]) {
                if (((q[i] >= 0x81 && q[i] <= 0x9f)
                     || (q[i] >= 0xe0 && q[i] <= 0xfc)) && q[i + 1]) {
                    wtyped += cw + gp;
                    lastt = gp;
                    i += 2;
                } else {
                    wtyped += (cw + gp) / 2.0;
                    lastt = gp / 2.0;
                    i += 1;
                }
            }
            /* **打った分はすき間を引きません**——次の字が入る所が
             * 印の位置なので（「高さ記号」に `X` を打って実測）。 */
            (void)lastt;
            i = 0;
            q = (const unsigned char *)str;
            while (q[i]) {
                if (((q[i] >= 0x81 && q[i] <= 0x9f)
                     || (q[i] >= 0xe0 && q[i] <= 0xfc)) && q[i + 1]) {
                    wide += cw + gp;
                    last = gp;
                    i += 2;
                } else {
                    wide += (cw + gp) / 2.0;
                    last = gp / 2.0;
                    i += 1;
                }
            }
            /* **最後の字のすき間は数えません。** `FL2ＦＬ`（種 3、幅
             * 3.0mm すき間 0.5mm）で本物の箱は x205..226、引かないと
             * x205..227 になります。すき間が 0 の記号（建具・楕円は
             * 種 2）では差が出ないので、ここでしか測れていません
             * ——最後が半角のときに半分を引くのか丸ごとなのかは、
             * まだ分けられていません。 */
            wide -= last;
            /* 記号の枠の向きを図面の向きに。倍率の負は 180 度回します。 */
            tx = (ux * (qx2 - qx1) + nx * (qy2 - qy1));
            ty = (uy * (qx2 - qx1) + ny * (qy2 - qy1));
            tn = sqrt(tx * tx + ty * ty);
            if (tn > 0.0) {
                tx /= tn;
                ty /= tn;
            } else {
                tx = ux;
                ty = uy;
            }
            if (flip) {
                tx = -tx;
                ty = -ty;
            }
            bx = ox + (qx1 * ux + qy1 * nx) * mm * sc * (flip ? -1.0 : 1.0);
            by = oy + (qx1 * uy + qy1 * ny) * mm * sc * (flip ? -1.0 : 1.0);
            bx -= wide * (bp % 3) / 2.0 * tx;
            by -= wide * (bp % 3) / 2.0 * ty;
            bx -= high * (bp / 3) / 2.0 * (-ty);
            by -= high * (bp / 3) / 2.0 * tx;
            memset(&t, 0, sizeof t);
            t.x0 = (float)bx;
            t.y0 = (float)by;
            t.x1 = (float)(bx + wide * tx);
            t.y1 = (float)(by + wide * ty);
            t.size = (unsigned char)sz;
            t.layer = base->layer;
            memcpy(t.rest, base->rest, sizeof t.rest);
            t.text = str;
            if (phase >= 20) {
                if (ghost) {
                    ghost->t = t;
                    strncpy(ghost->text, str, sizeof ghost->text - 1);
                    ghost->text[sizeof ghost->text - 1] = 0;
                    ghost->t.text = ghost->text;
                    ghost->cx = bx + wtyped * tx;
                    ghost->cy = by + wtyped * ty;
                    ghost->px = ox + (qx1 * ux + qy1 * nx) * mm * sc
                                * (flip ? -1.0 : 1.0);
                    ghost->py = oy + (qx1 * uy + qy1 * ny) * mm * sc
                                * (flip ? -1.0 : 1.0);
                }
                put++;
                continue;       /* 図面には入れません */
            }
            if (jwc_put_text(d, &t)) {
                put++;
            }
            continue;
        }
        if (p->kind == JW_KIGOU_ARC) {
            /* **角度は記号の枠のもの**なので、指示線の角度を
             * 足して図面の角度にします。半径は紙の mm です。 */
            /* **始角・終角がどちらの指示線に追従するか**は制御(2) の
             * 1 の位です（§３-５〜８）。1 なら両方とも指示線 1、
             * 2 なら始点だけ、3 なら終点だけ、4 なら両方が指示線 2。 */
            const double t1 = atan2(uy, ux) * 180.0 / 3.14159265358979323846;
            const double t2 = atan2(ny, nx) * 180.0 / 3.14159265358979323846;
            const long f = c2 % 10;
            const double ts = f == 2 || f == 4 ? t1 : t1;
            const double te = f == 3 || f == 4 ? t1 : t1;
            JwcArc a;

            memset(&a, 0, sizeof a);
            a.cx = (float)(ox + (qx1 * ux + qy1 * nx) * mm * sc * (flip ? -1.0 : 1.0));
            a.cy = (float)(oy + (qx1 * uy + qy1 * ny) * mm * sc * (flip ? -1.0 : 1.0));
            a.r = (float)(p->radius * mx * mm * sc * (flip ? -1.0 : 1.0));
            a.flatten = p->flat > 0.0
                      ? (short)(p->flat * 10000.0 + 0.5) : 10000;
            a.start = (long)((p->x2 + ts) * 65536.0);
            a.end = (long)((p->y2 + te) * 65536.0);
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
            l.x0 = (float)(ox + (qx1 * ux + qy1 * nx) * mm * sc * (flip ? -1.0 : 1.0));
            l.y0 = (float)(oy + (qx1 * uy + qy1 * ny) * mm * sc * (flip ? -1.0 : 1.0));
        }
        if (c2 == 10) {
            /* 制御(2) の 10 は指示線 1 の**近い**端です。 */
            l.x1 = (float)sx;
            l.y1 = (float)sy;
        } else if (c2 == 20 && base2) {
            l.x1 = (float)gx;
            l.y1 = (float)gy;
        } else {
            l.x1 = (float)(ox + (qx2 * ux + qy2 * nx) * mm * sc * (flip ? -1.0 : 1.0));
            l.y1 = (float)(oy + (qx2 * uy + qy2 * ny) * mm * sc * (flip ? -1.0 : 1.0));
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
