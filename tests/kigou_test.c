/* 線記号変形の記号ファイルを読んで、中身を並べます。
 *
 *     ./tests/kigou.exe            # A〜J の見出しと個数
 *     ./tests/kigou.exe 0          # そのグループの記号を全部
 *     ./tests/kigou.exe 0 2        # そのうち 1 つの部材まで
 *
 * 本物が一覧に出す名前（tools/seqcheck.sh の STR=1 で拾えます）と
 * 突き合わせるためのものです。
 */
#include "kigou.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char *KIND[] = { "線", "円", "文字", "実点", "倍率", "連鎖",
                              "命令" };

int main(int argc, char **argv)
{
    int i;

    if (argc < 2) {
        for (i = 0; i < JW_KIGOU_FILES; i++) {
            const JwKigou *g = jw_kigou_lib(i);

            printf("%c  %-24s 書いてある数 %2d  読めた数 %2d\n",
                   jw_kigou_letter(i), g ? g->group : "(読めません)",
                   g ? g->said : 0, g ? g->n : 0);
        }
        return 0;
    }
    {
        const JwKigou *g = jw_kigou_lib(atoi(argv[1]));
        int only = argc > 2 ? atoi(argv[2]) : -1;

        if (!g) {
            printf("no such group\n");
            return 1;
        }
        printf("#%s  %d / %d\n", g->group, g->n, g->said);
        for (i = 0; i < g->n; i++) {
            const JwKigouSym *s = &g->sym[i];
            int k;

            printf("%2d  指示%-3d 区切%3d%s  部材%2d  %s\n", i + 1, s->picks,
                   s->sep, s->sep_mul ? "*" : " ", s->n, s->name);
            if (only >= 0 && only != i + 1) {
                continue;
            }
            for (k = 0; k < s->n; k++) {
                const JwKigouPart *p = &s->part[k];

                printf("      %-4s c=%ld,%ld  (%.4f,%.4f)-(%.4f,%.4f)",
                       KIND[p->kind], p->c1, p->c2, p->x1, p->y1,
                       p->x2, p->y2);
                if (p->has_attr) {
                    printf("  pen=%d type=%d lay=%d", p->pen, p->type,
                           p->layer);
                }
                if (p->kind == JW_KIGOU_ARC) {
                    printf("  r=%.4f", p->radius);
                    if (p->flat > 0.0) {
                        printf(" 偏平=%.3f", p->flat);
                    }
                }
                if (p->kind == JW_KIGOU_SCALE) {
                    printf("  %s %.4f", p->real_size ? "実寸" : "図寸",
                           p->scale);
                }
                if (p->text[0]) {
                    printf("  \"%s\"", p->text);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
