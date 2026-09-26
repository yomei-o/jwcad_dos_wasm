/* 変形 ④線記号変形 の記号データ —— `JW_OPT4.DAT` とその仲間。
 *
 * **書式は配布物の中に平文で入っています。** `orig/JW_OPT4.DAT` の 133 行目
 * から日本語の説明が続いていて、`JW_CAD.DOC` の「（６）記号変形用データ」が
 * 「記述方法は［JW_OPT4.DAT］をご覧ください」とそこを指しています。
 * ここはその説明どおりに読むだけの器です——**画面に何が出るか、置いた線が
 * どう曲がるかは、まだ 1 つも測っていません**。それは本物に描かせてから。
 *
 * ファイルの形:
 *
 *     #建築 1                 グループ名
 *     16                      いくつ入っているか
 *     999                     区切り
 *     0         方位 (40mm)   指示回数、データ名
 *     10  09     0 0 20 0     部材（下）
 *     01  01   -20 0 20 0
 *     ...
 *     994                     次の区切り（一覧での表示倍率も兼ねる）
 *     1         方位 (30φ円)
 *     ...
 *
 * 部材の行は、先頭 2 つが**制御コード**で、そのあとに数が並びます:
 *
 *   線    `c1 c2 x1 y1 x2 y2 [線色 線種 レイヤ]`
 *   円弧  `c1 c2 cx cy 始角 終角 線色 線種 レイヤ e 半径 [偏平率]`
 *   文字  `c1 c2 x1 y1 x2 y2 10000 文字種 [レイヤ] "文字列`
 *   実点  `c1 c2 x y x y 30000 実点種 [レイヤ]`
 *   倍率  `700 倍率`（図面寸法）・`800 倍率`（実寸法。負なら 180 度回す）
 *   連鎖  `10000 番号`（書いたあと次の記号へ。`10000 10000` で選択画面）
 *   他命令 `10100`（複写）`11300`（文字入力）`11400`（寸法）…`15000`
 *
 * 制御コードの意味（DAT の §２〜§４ より）:
 *
 *   10  指示線 1 を設定      20  指示線 2 を設定
 *   01  指示線 1 の角度に追従  02  指示線 2 の角度に追従
 *   03  指示線 2 の角度の 1/2  04  二本からの距離で指定
 *   00  どちらにも影響されない 08  一覧に出るだけで作図しない
 *   09  ダミー（`10 09` は指示線 1 を消すだけ）
 *
 * 制御コード（1）が 3 桁で 100 の位が 1／2 なら、線色・線種・レイヤを
 * 指示線 1／2 と同じにします（`101`・`202`）。5 桁で 10000 の位が 2 なら
 * 文字入力（`20000`）、さらに 1000 の位が 1 なら文字変更（`21000`）、
 * 2000 の位が 2 ならスキップ時の文字（`22000`）です。
 */
#ifndef JW_KIGOU_H
#define JW_KIGOU_H

#define JW_KIGOU_PARTS 60       /* 1 データの部材数の上限（DAT §１-４） */
#define JW_KIGOU_MAX   16       /* 1 グループの記号数（実際は 12〜16） */
#define JW_KIGOU_NAME  40       /* データ名の桁数 */
#define JW_KIGOU_TEXT  64       /* 文字データの本文 */
#define JW_KIGOU_FILES 10       /* JW_OPT4.DAT と B〜J */

typedef enum {
    JW_KIGOU_LINE = 0,          /* 線 */
    JW_KIGOU_ARC,               /* 円・円弧・楕円 */
    JW_KIGOU_TEXT_PART,         /* 文字 */
    JW_KIGOU_POINT,             /* 実点 */
    JW_KIGOU_SCALE,             /* 700／800 の倍率指定 */
    JW_KIGOU_NEXT,              /* 10000 の記号連鎖 */
    JW_KIGOU_CMD                /* 10100 などの他命令へ移る指定 */
} JwKigouKind;

typedef struct {
    int kind;                   /* JwKigouKind */
    long c1, c2;                /* 制御コード（1）（2）。数のまま持ちます */
    double x1, y1, x2, y2;      /* 線・文字は両端、円は中心と始角・終角 */
    int pen, type, layer;       /* 線色・線種・レイヤ。無ければ -1 */
    int has_attr;               /* 上の三つが行にあったか */
    /* 円弧 */
    double radius;              /* 半径。負で与えられたら楕円 */
    double flat;                /* 偏平率（0.1〜1.0）。楕円でなければ 0 */
    /* 文字 */
    char text[JW_KIGOU_TEXT];
    /* 倍率指定 */
    double scale;               /* 700／800 の倍率。負なら 180 度回す */
    int real_size;              /* 800（実寸法）なら 1、700 なら 0 */
} JwKigouPart;

typedef struct {
    char name[JW_KIGOU_NAME];   /* データ名（行の残り、前後の空白は落とす） */
    int picks;                  /* 指示回数。0 は 1 回、10 は指示なし */
    int sep;                    /* 直前の区切り（990〜999）。一覧の表示倍率 */
    double sep_mul;             /* `99*` のあとの数。無ければ 0 */
    int n;
    JwKigouPart part[JW_KIGOU_PARTS];
} JwKigouSym;

typedef struct {
    char group[JW_KIGOU_NAME];  /* 頭の `#建築 1` の `#` を除いたもの */
    int said;                   /* 2 行目に書いてある個数 */
    int n;                      /* 実際に読めた個数 */
    JwKigouSym sym[JW_KIGOU_MAX];
} JwKigou;

/* 1 ファイル読みます。読めなければ 0 を返して `out` は空のままです。 */
int jw_kigou_read(const char *path, JwKigou *out);

/* A〜J の 10 グループ。`which` は 0 が `JW_OPT4.DAT`、1 が `JW_OPT4B.DAT`、
 * …、9 が `JW_OPT4J.DAT`。一度読んだら持ち続けます。範囲外は NULL。 */
const JwKigou *jw_kigou_lib(int which);

/* そのグループの名札（`A`〜`J`）。範囲外は 0。 */
char jw_kigou_letter(int which);

#endif
