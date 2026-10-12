# オプション ⑤日影図 の計算（a）：②日影図（30分毎／1時間毎／指定時間の影）（ovl34 `3ab8:3ee7`）

読んだもの：`tmp/lift/o34.txt`（`python tools/altlift.py --ovl 34 0 0x6a00`）、`tools/disasm.py --ovl 34 0xSTART 0xLEN` の生の逆アセンブル
（**push の順は altlift が落とすので、呼び出し口は必ず生で読んだ**）、DGROUP の定数（`decomp/JW_CADV.unp.exe` の `hdr + 0x33750 + DS:xxxx`、
`python tmp/ds.py a8fc …`）。**エミュレータは走らせていない。** この文書の C は「x86 から機械的に起こしたもの」で、まだ一度も実機と
突き合わせていない。確かでない所は `【要測定】`、末尾の「実機で測ること」にまとめた。
番地は「overlay 内の相対」（`3ab8:xxxx`、file-linear は `0x2ab80 + 相対`）と file-linear（`02xxxx`）を併記する。

担当：入口 `3ab8:3ee7`（file-linear `0x2ea67`）と、その下で**他の入口が使わない部品**。共有の部品（`2bcd3`・`2be59`・`2c53d`・`2dddf`・
`2e67a`）もここに**全部書いた**（`spec-opt5-calc-b.md` の③④は同じ部品を呼ぶ）。
**③等時間図 `4451` と ④指定点 `5df6` は `spec-opt5-calc-b.md`**。そちらで食い違いが見つかった所は §10 に書いた。

---

## 0. 読み方の約束

* **x87 の比較の向き**：lift の `compare A : B`（A を先に積み B を後に積む。`22b2:7191`）のあとの `ja/jae/jb/jbe/je` は
  **「B と A を比べた」向きに働く**。`ja`＝B>A、`jae`＝B≥A、`jb`＝B<A、`jbe`＝B≤A。この文書の分岐は全部この読み。
  確かめた例：`22b2:7191` の前に `compare [0xa968]=7.0 : p; jae` が「p ≥ 7 なら指定時間」の向き（§2）、④一括処理の isect
  （`optbatch.c`）が同じ向きで実機と一致している。
* **22b2 の部品**（`decomp-audit.md` §3 と altlift の表）：`6cc6`=f32 を積む、`6ca8`=同（ES 付き）、`6d14`=f64 を積む、`6d9b`=i16 を積む、
  `6d94`=i32 を積む、`6d81`=i32 を積む（`lea bx,[…]` の番地から）、`6e4b`=f32 で保存（積みは残す）、`6e63`=f32 で保存して捨てる、
  `6e99`=f64 で保存（残す）、`6eb1`=f64 で引数スロットへ、`704d`=`st0*=f32`、`710c`=`st0*=f64`、`7154`=`st0+=f64`、`7095`=`st0+=f32`、
  `7035`/`70dc`=`st0−=`、`70f4`=`mem−st0`（f64）、`7065`=`st0/=f32`、`707d`=`mem/st0`（f32）、`713c`=`mem/st0`（f64）、`718c`=`st1+st0`、
  `7173`=`st1−st0`、`7182`=`st1/st0`、`7187`=`st0/st1`（**逆**）、**`7c18`＝定数 1.0 を積む**（`DS:0x8ea4`＝1.0f）、
  **`75ec`=sin、`75fe`=cos、`7592`=sqrt、`7658`=atan2、`6f61`=double→long の切り捨て（`ftol`）、`4e12`=long×long の下位 32 ビット**。
  `7258` は何もしない（f32→f64 の読み替えだけ）。altlift は `7c18` を知らないので、`x / 7c18` と出る式は **`1.0 / x`**（`7187`＝逆除算）。
* 浮動小数点は「f32 に保存するまで倍精度で持ち回る」。`float v = (float)(式)` は式全体を double で計算してから 1 回だけ丸める。
  `(keep)`＝丸めたものを書きつつ積みは丸めずに残す。
* sin／cos は MS C のソフト版。**ホストの libm と最後の 1 ビットが違いうる**【要測定】。
* 整数は**すべて 16 ビット（int）か 32 ビット（long）**。long の加減算は `sub/sbb` で 2 の補数のまま折り返す（`int32_t` の折り返しで書く）。
* 配列の添字は **1 始まり**。far ポインタは DS の `[off]:[seg]`。配列の中身の意味は §2.2。

---

## 1. 全体の流れ（呼び出し図）

```
ovl33 主メニュー [bp-0xd6]==2 (②日影図) の小項目 [bp-0xe2]=1/2/3
   └─ int 3f overlay 34 → 3ab8:3ee7   E1  hikage_calc(…)                 §3
         ├─ 2bcd3 (rel 0x1153)  sun_coeffs(lat, decl) → 5 つの float       §4.1
         └─ 時刻 t ごとに：
               ├─ 2be59 (rel 0x12d9) sun_shadow(t, 係数) → (X, Y)           §4.2
               └─ 2c53d (rel 0x19bd) shadow_main(w, X, Y, nE, nP, nB, C, wall)   §5〜§8
                     ├─ 2bf46 (rel 0x13c6) sort_groups(nB, nP)              §6.2
                     ├─ 2c069 (rel 0x14e9) first_edge(…)                     §7.1
                     ├─ 2d1a9 (rel 0x1629) next_edge(…)                      §7.2
                     │     └─ 2abc6 (rel 0x46) orient(i,j,k)                 §6.1
                     ├─ 2dddf (rel 0x225f) emit_line(w,&conn,x0,y0,x1,y1,wall)  §9
                     │     ├─ 2daab (rel 0x252b)… clip（壁面のときだけ）       §9.3
                     │     └─ 2e67a (rel 0x40fa) put_label(hour)              §9.4
                     ├─ 2c248 (rel 0x16c8) wall_project（壁面のときだけ）     §8
                     ├─ 2e1fb / 2e4d4：mode==0 / mode<0 のとき（③④）。②では呼ばれない
                     └─ 0xdef:2742 キー取得（ESC で −1）
```

（`[bp+..]` の番号は各関数の呼び出し規約。**cdecl 16 ビット far**：`push bp; mov bp,sp` のあと `[bp+4]`＝戻り番地、
**第 1 引数は `[bp+6]`**。引数は右から積むので「最後に積んだものが `[bp+6]`」。overlay 呼びの `int 3f` は積んだ引数をそのまま見せる。）

---

## 2. 入口の引数と ovl33 からの呼び方

呼び出し口は ovl33 の `030391`（小項目 1・2＝30分毎・1時間毎）と `03056a`（小項目 3＝指定時間）。どちらも `add sp,0x2c`＝引数 44 バイト。
**積んだ順（生の逆アセンブル `030323〜03038c`）から起こした表（`[bp+6]` から高い方へ）：**

| オフセット | 型 | 中身（呼び出し側） |
|---|---|---|
| `bp+6` | double | **p**＝`[bp-0xd4]`（f32 を double に広げたもの）。小項目 1（30分毎）＝**−1.0**（`DS:0xa8d8`）、小項目 2（1時間毎）＝**+1.0**（`DS:0xa810`）、小項目 3（指定時間）＝**入力した時刻（時）**（`[bp-0x64]`、範囲は 8〜16 か 9〜15 の整数でない値も可、§2.1） |
| `bp+0xe` | int | **nE**：辺の数（`2bf7f` が `*[bp+6]` へ返す `[bp-0x408]`、呼び元では `[bp-0xe4]`） |
| `bp+0x10` | int | **nP**：点の数（`*[bp+8]`＝`[bp-0x460]`、呼び元では `[bp-0xf2]`） |
| `bp+0x12` | double | `DS:[0x11d8]`（f32）＝**緯度**（度。初期値 36.0） |
| `bp+0x1a` | double | `DS:[0x11dc]`（f32）＝**日赤緯**（度。冬至 −23.45、春秋分 0、夏至 +23.45） |
| `bp+0x22` | int | **nB**：建物（ブロック）の数（`2bf7f` の戻り値 `[bp-6]`） |
| `bp+0x24` | double | **C**＝`[bp-0x5e]`（f32）。`2bf7f` が測定面の高さから決める**拡大率**（§2.2、`100,95,…,5` のどれか） |
| `bp+0x2c` | int | `DS:[0x11e4]`＝測定時間（0＝8〜16 時、≠0＝9〜15 時） |
| `bp+0x2e`,`0x30` | long | 壁面線の記録番号（`[bp-4]`,`[bp-2]`。**0＝普通の日影図**、≠0＝壁面日影図） |

戻り値：**1**＝最後まで描いた、**−1（0xFFFF）**＝ESC（または −2＝線が多すぎ）。ovl33 側の後始末は `030396〜0303a0`：`[0x11c]=1`、
小項目 1〜3 のあと `885:1f75()`、`[0xc08]=0`、`[0xbc0]=1`（呼び元の画面管理。UI の担当に任せる）。

### 2.1 p の意味（`02eab7`〜`02eb2d`）

```c
const double SEVEN = 7.0, EIGHT = 8.0;           /* a968, a970 (f64) */
int16_t step = 3600;                              /* [bp-0x32] */
int16_t t_first, t_last;                          /* [bp-0x12]=開始, [bp-0x1c]=終了（秒、正午から）*/
if (p < SEVEN) {                                  /* compare 7.0 : p ; jae→指定時間側。p>=7 が指定時間 */
    if (flag_9_15) { t_first = -10800; t_last = 10800; }      /* 0xd5d0 / 0x2a30 */
    else           { t_first = -14400; t_last = 14400; }      /* 0xc7c0 / 0x3840 */
    if (p < 0.0) step = 1800;                     /* compare 0.0 : p ; jae→skip。p>=0 は 3600 のまま */
} else {                                          /* 指定時間 */
    t_first = t_last = (int16_t)(long)((p - 8.0) * 3600.0 + 0.5) - 14400;   /* ftol=切り捨て、sub ax,0x3840 */
}
```
`(p-8)*3600+0.5` は double のまま切り捨て（`6f61`）、あとで 14400 を引く（16 ビット）。正午を 0 にした秒。例：p=10.5 → −5400。
時刻 t の時計時刻（時）は `t/3600 + 12`。

---

## 3. 入口 `3ab8:3ee7`（`hikage_calc`）

```c
int hikage_calc(double p, int nE, int nP, double lat, double decl, int nB, double C, int flag915, int32_t wall)
{
    /* 02ea73〜 */
    DS_f32[0x7582] = DS_f32[0x7586] = 0.5f;               /* a964 f32。②では使われない（③の格子の幅） */
    locate(col=0x14, row=1);                              /* 0xdef:26a9(1,0x14)：[bp+6]=0x14=桁、[bp+8]=1=行 */
    put_text(0x7590);                                      /* 0x11f2:356 "日 影 図 作 図 中"（SJIS 17 バイト。1 つ目の引数が桁 20・行 1）*/
    /* step,t_first,t_last は §2.1 */
    for (t = t_first; t <= t_last; t += step) {            /* 02edbc:cmp end,t; jl → return 1 */
        double hour;                                       /* DS f32 [0xb78c] */
        if (p >= 7.0) hour = (float)p;                     /* 02eb33:[0xb78c] = (float)p */
        else          hour = (float)((double)t * 0.000277777777777778 + 12.0);   /* 02eddf: t*a978(1/3600)+a980(12.0) */
        long n0 = DS_long[0x148] + 1;                      /* [bp-0x28]：この時刻の最初の新しい線の番号 */
        hide_cursor();  885:5256(0);  0xdef:13db(3,0,1-[0xcb2],[0xcb4]);   /* 画面の準備。意味は呼び元と同じ（§9.5）*/
        sun_coeffs(lat, decl, &cd, &cdcl, &tanl, &sdcl, &sdsl);     /* 2bcd3：毎回呼ぶ（値は同じ） */
        sun_shadow((int16_t)t, cd, cdcl, tanl, sdcl, sdsl, &X, &Y); /* 2be59。出力は f32 */
        int w = (t % 3600 == 0) ? 1 : 2;                   /* 16 ビット idiv。整時なら 1、そうでなければ 2 */
        DS_int[0xbe9e] = (hour > 12.0f) ? 3 : 2;           /* compare a988(12.0f) : hour ; ja→3。B>A すなわち hour>12.0 なら 3（午後）、12.0 ちょうどは 2 */
        DS_int[0xbea0] = 0;
        if (wall != 0) { DS_int[0xbe9e] = 1; DS_int[0xbea0] = 0; }   /* 壁面日影のラベル番号は 1 */
        hide_cursor(); 13db(3,0,1-[0xcb2],[0xcb4]);
        rc = shadow_main(w, (double)X, (double)Y, nE, nP, nB, C, wall);   /* 2c53d。引数は §5 */
        /* 02ed0d〜：この時刻に 2 本以上足した（[0x148] > n0）なら、足した線の端に印を付ける */
        if (DS_long[0x148] > n0) {
            line *a = rec(n0);          a->rest[2] |= 0x40;  a->rest[2] &= 0x7f;   /* 最初の線：0x80 を落として 0x40 */
            line *z = rec(DS_long[0x148]); z->rest[2] |= 0x40;                       /* 最後の線：0x40 */
        }
        13db(3,0,[0xcb2],[0xcb4]);  885:1f49();  885:23aa();       /* 描き直し */
        if (rc < 0) {                                       /* 02ed77 */
            if (rc == -2) {                                 /* 線が 400 を超えた（§7.3） */
                put_text(0x1dc);  DS_int[0xc22] = 2;  locate(0x14, 3);   /* 0xdef:26a9(3,0x14) = 桁 0x14 行 3 */
                put_textf(0x1de /* "%s" */, 0x396 /* "データが不適当" */);   /* 0x11f2:356(0x1de,0x396) */
            }
            return -1;                                      /* 0xffff */
        }
    }
    return 1;
}
```
注：

* `w`（`[bp-0x30]`）は**線種**になる（§9：`type = w`）。整時（t が 3600 の倍数）の線は type 1、半時間や指定時間（整時でない）は type 2。
* `[0xbe9e]`（午前 2／午後 3／壁面 1）は「**この時刻の何本目の描いた線に時刻の文字を付けるか**」の番号（§9.4）。
* 線の印：`n0 = [0x148]+1` を **この時刻に入る前**に控える。2 本以上足していたら、最初の線の `rest[2]` を `(| 0x40) & 0x7f`、最後の線の `rest[2] |= 0x40`
  （足した線は §9 で `rest[2] |= 0x80` されているので、最初の 1 本だけ 0x80 が落ちて 0x40 に替わる）。1 本以下なら何もしない（`jbe` の向き：
  `cmp [0x148],n0; jbe skip`、lift `02ed13〜02ed1f`）。**ESC でも -2 でもこの印付けは返る前に済む**。
* ESC は **各時刻の `shadow_main` の最後**でしか見ない（§8）。その時刻の線は全部描かれたまま残る。

---

## 4. 太陽の部品（共有）

### 4.1 `2bcd3`（rel `0x1153`、file-linear `0x2bcd4`）`sun_coeffs`

引数：`[bp+6]` double 緯度、`[bp+0xe]` double 日赤緯、`[bp+0x16]`〜`[bp+0x1e]` に float* が 5 つ。

```c
void sun_coeffs(double lat, double decl, float *pcd, float *pcdcl, float *ptanl, float *psdcl, float *psdsl)
{
    double L = lat  * 0.0174533;            /* DS:a90c f64。π/180 ではなく 7 桁の値 */
    double D = decl * 0.0174533;
    float  cosL = (float)cos(L);                         /* [bp-0xc] */
    double cosD = cos(D);                                /* ↓ */
    float  cosDf = (float)cosD;                          /* [bp-0x14]（6e4b：f32 で保存して積みは残す） */
    float  cdcl = (float)(cosD * (double)cosL);          /* [bp-0x30] ＝ cosD(丸めない)×cosL(f32) */
    float  sinL = (float)sin(L);                         /* [bp-8] */
    double sinD = sin(D);
    float  sinDf = (float)sinD;                          /* [bp-0x10]（keep） */
    float  sdsl = (float)(sinD * (double)sinL);          /* [bp-0x18] ＝ sinD(丸めない)×sinL(f32) */
    float  tanL = (float)((double)sinL / (double)cosL);  /* 707d：mem/st0。[bp-8] を上書き */
    float  sdcl = (float)((double)sinDf / (double)cosL); /* 7065：**丸めた sinD**（6cc6 で [bp-0x10] を読み直す）÷ cosL。[bp-0x10] を上書き */
    *pcd   = cosDf;     /* [bp+0x16] */
    *pcdcl = cdcl;      /* [bp+0x18] */
    *ptanl = tanL;      /* [bp+0x1a] */
    *psdcl = sdcl;      /* [bp+0x1c]  ＝ sinδ / cosφ */
    *psdsl = sdsl;      /* [bp+0x1e]  ＝ sinδ·sinφ */
}
```
入口 `3ee7` では出力先が `&[bp-0x10]`（cosδ）、`&[bp-0x24]`（cosδcosφ）、`&[bp-8]`（tanφ）、`&[bp-0xc]`（sinδ/cosφ）、`&[bp-0x20]`（sinδsinφ）。
**`sdcl` は「sinδ を f32 に丸めてから割る」**（`[bp-0x10]` を `6cc6` で読み直す）。`spec-opt5-calc-b.md` §3.1 は丸めない sinδ で割っていて、**1 ulp だけ違いうる**
（§10）。

### 4.2 `2be59`（rel `0x12d9`、file-linear `0x2be5a`）`sun_shadow`

引数：`[bp+6]` int16 **t**（正午から秒）、`[bp+8]` double A（cosδ）、`[bp+0x10]` double B（cosδcosφ）、`[bp+0x18]` double Cc（tanφ）、
`[bp+0x20]` double Dd（sinδ/cosφ）、`[bp+0x28]` double E（sinδsinφ）、`[bp+0x30]` float* outX、`[bp+0x32]` float* outY。
（入口が積む順＝`[bp-0x20],[bp-0xc],[bp-8],[bp-0x24],[bp-0x10]` を double に広げて、最後に t。）

```c
void sun_shadow(int16_t t, double A, double B, double Cc, double Dd, double E, float *outX, float *outY)
{
    double w   = (double)t * 7.272205e-05;                    /* a914 f64。2π/86400 ではなく 7 桁。[bp-0x14] f64 */
    double S   = cos(w) * B + E;                              /* 太陽高度の sin。710c(f64 mul)、7154(f64 add)。double のまま */
    float  inv = (float)(1.0 / S);                            /* 7c18(1.0) と 7187(逆除算)。[bp-4] f32。S≤0 の検査は無い */
    *outX = (float)(((double)sin(w) * (double)inv) * A);      /* 704d(f32 mul) → 710c(f64 mul) */
    *outY = (float)(Cc - (double)inv * Dd);                   /* 710c → 70f4(mem−st0) */
}
```
意味：高さ 1 の点が地面に落とす影の、点からの変位（東向き x、北向き y）。`X = cosδ·sinω/ sin(alt)`、`Y = tanφ − sinδ/(cosφ·sin(alt))`。

---

## 5. 影の外周を作って描く `2c53d`（rel `0x19bd`、file-linear `0x2c53e`）`shadow_main`

### 5.1 引数（入口 `02ecb7〜02ed00` の積み方から）

| オフセット | 型 | 中身 |
|---|---|---|
| `bp+6` | int | **w**：入口の `[bp-0x30]`＝**1（整時）／2（それ以外）**。②では常に > 0。③は 0、④は < 0 で呼ぶ（`spec-opt5-calc-b.md`） |
| `bp+8` | double | **X**：影の変位 x（`sun_shadow` の outX を double に） |
| `bp+0x10` | double | **Y**：影の変位 y |
| `bp+0x18` | int | **m**＝nE（辺の数） |
| `bp+0x1a` | int | **n**＝nP（点の数） |
| `bp+0x1c` | int | **D**＝nB（建物＝グループの数） |
| `bp+0x1e` | double | **C**（拡大率） |
| `bp+0x26`,`0x28` | long | 壁面線の記録番号（0 なら普通） |

戻り値：**1**＝完了、**−1**＝ESC、**−2**＝線が 400 を超えた（§7.3）。

### 5.2 局所変数と配列の約束

**拡大率 C の約束**：ovl33 の `2bf7f` が点の座標・高さを **C 倍して**（`c392[i]*=C` など）配列に入れてから呼ぶ。`C` は 100.0 から 5.0 ずつ減らして
`[0xa840]=2.0e9` の式（lift `02dbc7〜02dc17`）を満たした値（下限 5.0）。**ここで long に切り捨てるので、拡大率が精度を決める**。
出力に出す座標は **逆に `(float)((double)long * (double)sc)`**（`sc = (float)(1.0/C)`）で戻す。**配列の座標系は ovl33 が `1bb4:27ea` で置いた「真北の座標系 (u,v)」**
（作図の座標ではない）。作図へは `2dddf` が `1bb4:2981(0,u,v)`・`2a18(0,u,v)` で戻す（§9）。

```c
/* 入力の配列（ovl33 が詰めたもの。1 始まり）*/
float   *PX = c392, *PY = c398, *PH = c39c;   /* 点の u, v, 高さ（すべて C 倍済み）。点番号 1..n */
int16_t *GRP = bece;       /* 点 i の建物（グループ）番号 1..D（0/負＝無し） */
int16_t *EA  = c08a, *EB = c096;   /* 辺 e の両端の点番号。e=1..m。e=m+1 は作業の「番兵辺」 */
/* 作業の配列 */
int32_t *SX = c130, *SY = c13a;    /* 影の先の位置（long）。添字は点番号。n+1 は番兵点 s、602/603 は作業点 */
int32_t *SIDE = bef6;              /* 点 k の「いまの線 A→B の左右」 = orient(A,B,k)。next_edge が作る */
uint8_t *VIS  = bc7a;              /* 辺の「通った」印（1 バイト、添字は辺番号 1..m+1）*/
int16_t *START = c278;             /* グループ g の開始点（＝そのグループで影の先の y が最小の点）。0＝済み／無し、負＝他に囲まれた */
int16_t *ORDER = b77c;             /* グループを START の y の小さい順に並べた表 1..D */
```
番兵・作業の点番号：`s = n+1`、`ip = 602 (0x25a)`、`ic = 603 (0x25b)`（`[bp-0xc6]`、`[bp-6]`）。**`c130/c13a` は少なくとも 604 要素ある**
（ovl33 の確保：`c130`, `c13a` 各 0x9c4 バイト＋…、配列の頭の `2ab81` 参照）。壁面日影は `c392/c398` の 604〜608 を壁面線の端と向きに使う（§8）。

### 5.3 手順（普通の日影図：wall==0）

```c
int shadow_main(int w, double X, double Y, int m, int n, int D, double C, int32_t wall)
{
    float sc = (float)(1.0 / C);                                /* 02c552〜02c55f：[bp-0x52]。7c18+7187（1.0/C） */
    int ip = 602, ic = 603;
    if (wall != 0 && DS_byte[0x11d6] < 4) { /* §8 項目 1：影が壁面に当たらない判定。wall==0 または [0x11d6]>=4 では飛ばす（02c577: cmp 4; jb 02c581） */ }

    /* (1) 点の影の先（long） */                                 /* 02c6b1〜02c790 */
    for (int i = 1; i <= n; i++) {
        int32_t L = 0;
        float h = PH[i];
        if (h > 0.0) L = (int32_t)trunc((double)h);              /* compare 0.0 : h ; ja → ftol（切り捨て） */
        SX[i] = (int32_t)trunc((double)PX[i] + (double)L * X);   /* 6d94(L) ×710c(X) と f32 PX の和 → ftol */
        SY[i] = (int32_t)trunc((double)PY[i] + (double)L * Y);
    }

    sort_groups(D, n);                                           /* §6.2。02c795 */

    /* (2) 番兵点と番兵辺 */
    int g1 = ORDER[1];
    int k0 = START[g1];                                          /* [bp-0x26] */
    int s  = n + 1;                                              /* [bp-0xc8] */
    SX[s] = SX[k0];
    SY[s] = SY[k0] - 100;                                        /* 0x64 */
    EA[m + 1] = s;                                               /* [0xc08a][m+1] */
    int seg = 0;                                                 /* [bp-0x9c] */
    int conn = 0;                                                /* [bp-0xba]：続けて描いた線の数（ラベルの番号）*/

    for (int r = 1; r <= D; r++) {                               /* [bp-0x92]。02ce25 */
        int g = ORDER[r];                                        /* [bp-0x26] */
        if (START[g] <= 0) continue;                             /* 02ce4d: jle → r++ */
        int K = START[g];
        EB[m + 1] = K;                                           /* [0xc096][m+1] */
        int Bcur = K;                                            /* [bp-0xb8] */
        int st_ = 1;                                             /* [bp-0x30] */
        int Aprev = s;                                           /* [bp-0xae]（先に代入してから呼ぶ） */
        int A, B, E, stv;                                        /* [bp-0xd4],[bp-8],[bp-0x90],[bp-0x76] */
        first_edge(s, K, &A, &B, &E, &stv, n, m);                /* §7.1。02ce9a */
        if (Aprev == B) continue;                                /* 辺が 1 本も見つからない：02cea3 */

        SX[ic] = SX[K];  SY[ic] = SY[K];                         /* 02ceac〜02cede */
        float x1f = (float)((double)SX[ic] * (double)sc);        /* 6d81(i32) ×704d(f32) → 6e4b/6e63 */
        float y1f = (float)((double)SY[ic] * (double)sc);
        float x0f, y0f;
        /* wall != 0 のときはここで 2c248 の変換が入る（§8）。普通は 2d010 へ */

        for (;;) {                                               /* 02d010 */
            if (seg >= 400) return -2;                           /* cmp [bp-0x9c],0x190; jl→続き、jmp 02c817 */
            seg++;
            SX[ip] = SX[ic];  SY[ip] = SY[ic];                   /* 02d01b〜02d059：602 := 603 */
            x0f = x1f;  y0f = y1f;                               /* [bp-0x9a]=[bp-0xb2]、[bp-0xa6]=[bp-0xc2] */
            int P2 = Aprev, Q2 = Bcur, st2 = st_;                /* [bp-0xc4]=[bp-0xae]、[bp-0xd2]=[bp-0xb8]、[bp-0x70]=[bp-0x30] */
            Aprev = A;  Bcur = B;  /*Eprev=E;*/ st_ = stv;       /* [bp-0xae]=A、[bp-0xb8]=B、[bp-0x7e]=E、[bp-0x30]=stv */
            next_edge(P2, Q2, st2, A, B, E, stv, &A, &B, &E, &stv, s, m + 1);   /* §7.2。02d0dc */
            x1f = (float)((double)SX[ic] * (double)sc);          /* 6d81(c130[603])×sc。02d0e2〜02d115 */
            y1f = (float)((double)SY[ic] * (double)sc);

            /* 描く（wall==0：02d125〜 → 02c9a4。wall≠0：02c81d〜、§8）*/
            if (w > 0) {                                         /* 02c9b3 */
                if (PH[Aprev] > 0.01 || PH[Bcur] > 0.01) {       /* compare a954(0.01 f64) : h ; ja。h は f32 */
                    if (emit_line(w, &conn, (double)x0f, (double)y0f, (double)x1f, (double)y1f, wall) == 0)
                        conn = 0;                                /* 02ca79：戻り 0 なら連続を切る */
                } else {
                    conn = 0;                                    /* 02ca83 */
                }
            }                                                    /* w==0:2e1fb、w<0:2e4d4（③④。②では来ない） */

            /* (3) 他のグループの開始点が、いま描いた線の上／内側かを調べて印を付ける（§7.4）*/
            if (r < D) mark_other_groups(r, D, Aprev, Bcur, ip, ic);   /* 02cafe〜02ce09 */

            if (s > B) continue;                                 /* 02ce09：cmp [bp-0xc8],[bp-8]; jle→終了。B は **新しい B** */
            break;                                               /* B >= s：このグループの外周は 1 周した */
        }
        if (r < D) {                                             /* 02ce15→02d160：負・0 の開始点を 0 に */
            for (int j = r + 1; j <= D; j++) { int gj = ORDER[j]; if (START[gj] <= 0) START[gj] = 0; }
        }
    }
    /* 02c69c：キーを見る */
    return (getkey() == 0x1b) ? -1 : 1;                          /* 0xdef:2742。AL だけ比べる */
}
```
重要な読み：

1. **「描く」の枠**：描くのは **`s > B` の間、辺を 1 本たどるごと**。`B`（新しい far 端）が番兵点（`s` 以上）になったらその外周は終わり
   （番兵辺 `(s,K)` が選ばれると B が `s` になる＝出発点 K に戻って番兵に触れた）。
2. **高さの条件**（`02c9b8〜02ca06`）：歩いた辺の両端 `Aprev`・`Bcur` のどちらかの高さが **0.01 より大きい**ときだけ線にする。**両方 ≤ 0.01（地面の辺）なら描かない**
   （影ではなく建物の外形なので）。描かなかったとき `conn=0`。
3. **ESC の確認は 1 時刻の外周を全部描いたあと 1 回だけ**。途中で押しても、その時刻は描き切る。キー取得は `0xdef:2742`（待たない）。
4. 作業の最大数：`seg`（「たどった辺の数」）が **400** になったら −2。時刻ごとに 0 から数える。

### 5.4 `seg` と `conn` の違い

* `seg`（`[bp-0x9c]`）は**たどった数**（描かなかった辺も数える）。400 で打ち切り。
* `conn`（`[bp-0xba]`）は **`emit_line` が直前まで続けて描いた回数**。`emit_line` が描くたびに +1（`2dddf` の `inc [bx]`）、描かなかった／高さの条件で飛ばしたら 0 に戻る。
  **時刻の文字は `conn == [0xbe9e]` になった線**に付く（§9.4）。`conn` は**グループをまたいでも 0 に戻らない**（`02c806` で時刻の頭に一度 0 にするだけ）。

---

## 6. 整数の部品

### 6.1 `2abc6`（rel `0x46`、file-linear `0x2abc7`）`orient(i,j,k)`

```c
static int32_t lmul(int32_t a, int32_t b) { return (int32_t)((uint32_t)a * (uint32_t)b); }   /* 22b2:4e12。上位は捨てる */
int32_t orient(int i, int j, int k)       /* [bp+6]=i, [bp+8]=j, [bp+0xa]=k。戻り dx:ax */
{
    int32_t r1 = lmul(SX[j] - SX[i], SY[k] - SY[i]);
    int32_t r2 = lmul(SY[j] - SY[i], SX[k] - SX[i]);
    return r1 - r2;                       /* sub/sbb。折り返す */
}
```
`>0`＝k は i→j の**左**。座標は拡大済みの long なので 32 ビットで足りる前提（折り返す場合は結果が壊れる。**実機も同じ**）。

### 6.2 `2bf46`（rel `0x13c6`、file-linear `0x2bf47`）`sort_groups(D, n)`（`[bp+6]=D`、`[bp+8]=n`）

```c
void sort_groups(int D, int n)
{
    int32_t tmp[D + 1];                               /* [bp-0x32e]：long の局所 */
    for (int j = 1; j <= D; j++) tmp[j] = 2000000000; /* 0x77359400 */
    for (int k = 1; k <= n; k++) {                    /* 各点について */
        int j = GRP[k];
        if (j <= 0) continue;
        if (SY[k] < tmp[j]) { tmp[j] = SY[k]; START[j] = k; }     /* 符号つき long。「より小さい」だけ（同点なら最初の点が残る）*/
    }
    for (int a = 1; a <= D; a++) {
        int32_t best = 1000000000;  int idx = 1;      /* 0x3b9aca00。見つからなければ idx=1 のまま */
        for (int j = 1; j <= D; j++) if (tmp[j] < best) { best = tmp[j]; idx = j; }
        ORDER[a] = idx;
        tmp[idx] = 2000000000;
    }
}
```
**START[j] は「その時刻の影の先 y（`SY`）が最小の点」**（影が最も南＝画面の下にある点）。グループは **その y の小さい順**に外周をたどる。
`START` は時刻ごとに作り直す（途中で 0 や負にされる）。

---

## 7. 外周のたどり方

### 7.1 `2c069`（rel `0x14e9`、file-linear `0x2c06a`）`first_edge`（外周の最初の辺）

呼び出し（`02ce77〜02ce9a`）：`[bp+6]=s`、`[bp+8]=K`、`[bp+0xa]=&A`、`[bp+0xc]=&B`、`[bp+0xe]=&E`、`[bp+0x10]=&st`、`[bp+0x12]=n`、`[bp+0x14]=m`。

```c
int first_edge(int s, int K, int *pA, int *pB, int *pE, int *pst, int n, int m)
{
    uint8_t coin[n + 1];                        /* [bp-0x262] */
    *pA = K;  *pB = s;  *pE = m + 1;  *pst = -1;
    int32_t xK = SX[K], yK = SY[K];
    for (int i = 1; i <= n; i++) coin[i] = (SX[i] == xK && SY[i] == yK);   /* K と影の先が重なる点 */
    for (int e = 1; e <= m; e++) {
        int a = EA[e], b = EB[e];
        int p0 = a, p1 = b;                      /* [bp-0x264]=a, [bp-0x26c]=b */
        if (!coin[a] && !coin[b]) continue;
        if (coin[a] && coin[b]) continue;        /* 両端とも K に重なる（長さ 0）は無視 */
        if (coin[b]) { p0 = b; p1 = a; }         /* p0 = K に重なる側、p1 = 遠い側 */
        int32_t cr = orient(s, K, p1);           /* [bp-0x27c] */
        int take = 0;
        if (*pst < 0) {                          /* 02c139 */
            if (cr < 0) take = better(*pA, *pB, p1);              /* 02c16c：現在の最良より左なら */
            else if (cr > 0) { *pst = 1; take = 1; }              /* 02c166 */
            else { *pst = 0; take = 1; }                           /* cr==0：02c145 */
        } else if (*pst == 0) {                  /* 02c223 */
            if (cr > 0) { *pst = 1; take = 1; }
        } else {                                 /* *pst > 0：02c128 */
            if (cr > 0) take = better(*pA, *pB, p1);
        }
        if (take) { *pA = p0; *pB = p1; *pE = e; }               /* 02c149〜02c164 */
    }
    *pst = -1;                                   /* 02c239：最後に必ず -1 */
    return 1;
}
static int better(int Acur, int Bcur, int p1) { return orient(Acur, Bcur, p1) > 0; }   /* 02c185 の 3 引数は (*cur,*prev,p1)。
        dx>0 → take、dx<0 → skip、dx==0 なら ax≠0 → take（＝ int32 として >0）*/
```
読み：**開始点 K に重なる辺のうち、番兵方向（s→K＝真上向き）に対して「左側（cr>0）＞ 一直線（0）＞ 右側（<0）」の順に選び、同じ側のなかでは
最も反時計回り（左）のものを選ぶ**。`*pst` は途中の状態に使うだけで、**関数の最後に −1 に戻す**（呼び元の `stv`＝−1 で始まる）。
見つからなければ `*pA=K,*pB=s,*pE=m+1` のまま＝呼び元の `B==s` で「辺なし」と分かる（`02cea3`）。

### 7.2 `2d1a9`（rel `0x262a`、file-linear `0x2d1aa`）`next_edge`（次の辺・交点）

呼び出し（`02d0b0〜02d0dc`）の引数（`[bp+6]` から）：

| オフセット | 変数 | 中身 |
|---|---|---|
| `bp+6` | P2 | 2 回前の A（`[bp-0xc4]`） |
| `bp+8` | Q2 | 2 回前の B（`[bp-0xd2]`） |
| `bp+0xa` | st2 | 2 回前の状態（`[bp-0x70]`） |
| `bp+0xc` | A | いまの辺の始点側（`[bp-0xd4]`） |
| `bp+0xe` | B | いまの辺の終点側（`[bp-8]`） |
| `bp+0x10` | E | いまの辺番号（`[bp-0x7e]`） |
| `bp+0x12` | st | 前回の `*pst`（`[bp-0x76]`） |
| `bp+0x14`〜`0x1a` | pA,pB,pE,pst | 出力（`&A`,`&B`,`&E`,`&stv`＝`[bp-0xd4]`,`[bp-8]`,`[bp-0x90]`,`[bp-0x76]`） |
| `bp+0x1c` | S | 点の数 s（`[bp-0xc8]`＝n+1。**番兵点を含む**） |
| `bp+0x1e` | M1 | 辺の数＋1（m+1。番兵辺を含む） |

```c
void next_edge(int P2, int Q2, int st2, int A, int B, int E, int st,
               int *pA, int *pB, int *pE, int *pst, int S, int M1)
{
    double tmin = 0.0;                                 /* [bp-0x1e] f64 (DS:a934) */
    int e, a, b;
    *pA = B;  *pB = A;  *pE = E;  *pst = -1;           /* 既定：向きを逆にして戻る（02d1b6〜02d1d6）*/
    if (st < 0) for (e = 1; e <= M1; e++) VIS[e] = 0;  /* 02d1e6〜02d207：[bp+0x12]<0 のときだけ 通った印を消す */
    int32_t dxe = SX[B] - SX[A];                       /* [bp-0x10] */
    int32_t dye = SY[B] - SY[A];                       /* [bp-0x14] */
    int32_t K0  = lmul(dye, SX[A]) - lmul(dxe, SY[A]); /* [bp-0x42] */
    for (int k = 1; k <= S; k++)                       /* SIDE[k] = orient(A,B,k)（折り返しも同じ）*/
        SIDE[k] = lmul(SY[k], dxe) - lmul(SX[k], dye) + K0;
    for (e = 1; e <= M1; e++) {                        /* 02d307〜02d37d */
        a = EA[e];  b = EB[e];
        int32_t fa = SIDE[a], fb = SIDE[b];
        if (fa < 0) {
            if (fb < 0) continue;
            if (fb > 0) goto L3da;
            goto L30e;
        }
        if (fa == 0) goto L30e;
        if (fb > 0) continue;
        if (fb < 0) goto L3da;
        goto L30e;                                      /* fb==0 */

    L3da:  /* 辺 ab の両端が A→B の線の反対側 */
        { int32_t c1 = orient(a, b, A);
          if (c1 < 0) { int32_t c2 = orient(a, b, B); if (c2 < 0) continue; if (c2 > 0) goto L430; goto L483; }
          if (c1 > 0) { int32_t c2 = orient(a, b, B); if (c2 > 0) continue; if (c2 < 0) goto L430; goto L483; }
          goto L483; }
    L483:  if (orient(a, b, A) != 0) goto L430; continue;
    L30e:  /* 端が線の上（側が 0）：A,B が辺 ab の反対側かを調べる */
        { int32_t c1 = orient(a, b, A);
          if (c1 < 0) { int32_t c2 = orient(a, b, B); if (c2 < 0) continue; if (c2 > 0) goto L4d8; goto L51c; }
          if (c1 > 0) { int32_t c2 = orient(a, b, B); if (c2 > 0) continue; if (c2 < 0) goto L4d8; goto L51c; }
          goto L51c; }
    L4d8:  if (VIS[e]) continue;                       /* 通った辺は見ない */
           if (SIDE[b] == 0) { int t=a; a=b; b=t; }    /* b が線の上なら入れ替え */
           if (SIDE[b] < 0) continue;                  /* b が右側なら無視 */
           goto L46c;
    L430:  if (VIS[e]) continue;
           if (SIDE[a] > 0) { int t=a; a=b; b=t; }     /* a を右（負）側に */
           goto L46c;
    L51c:  /* 辺が線に接する（A か B が ab の線の上） */
           if (SIDE[a] != 0 || SIDE[b] != 0) {
               if (VIS[e]) continue;
               /* 02d6dc */
               if (orient(a, b, A) == 0) continue;
               if (SIDE[b] == 0) { int t=a; a=b; b=t; }
               if (SIDE[b] > 0) goto L46c;
               /* 02d735 */
               if (*pst >= 0) continue;
               if (orient(*pA, *pB, b) > 0) goto L9b3;
               continue;
           }
           /* 辺 ab 全体が線 AB の上（一直線）：02d553 */
           if (E == e) continue;
           if (e != M1) VIS[e] = 1;
           if (*pst >= 0) continue;
           { int32_t absdx = labs32(dxe), absdy = labs32(dye);
             int32_t u, v; int neg;
             if (absdy < absdx) { u = SX[a] - SX[B]; v = SX[b] - SX[B]; neg = (dxe < 0); }   /* x が主（02d5ac） */
             else               { u = SY[a] - SY[B]; v = SY[b] - SY[B]; neg = (dye < 0); }   /* y が主（02d607） */
             if (neg) { u = -u; v = -v; }
             if (u <= 0 && v <= 0) continue;           /* B より手前だけ */
             if (u > 0 && v > 0) continue;             /* 両方向こう */
             if (u > 0) { int t=a; a=b; b=t; }         /* 02d6ba */
             *pst = 0;
             a = B;                                    /* 02d6d3 */
             goto L9b3; }

    L46c:  if (st > 0) goto L7ac;
    L475:  if (*pst > 0) goto L84b;
           goto L948;

    L7ac:  /* 前の 2 つの辺 P2→Q2 との位置関係で 通った印を付けて捨てる */
           if (orient(P2, Q2, b) <= 0) goto L803;
           if (orient(a, b, P2) > 0) goto L475;
           { int32_t c = orient(a, b, Q2); if (c > 0) goto L475; }      /* c<=0 は L803 へ */
    L803:  if (orient(a, b, P2) <= 0) goto L83d;
           { int32_t c = orient(a, b, Q2); if (c > 0) goto L475; }
    L83d:  VIS[e] = 1; continue;

    L84b:  /* すでに候補がある：交点の近いほうを取る（比べるのは 辺 ab の線が 現在の候補辺を切る位置 τ と tmin） */
           { int Ao = *pA, Bo = *pB;
             int32_t c  = orient(a, b, Ao);
             int32_t c2 = orient(a, b, Bo);
             double cd = (double)c, c2d = (double)c2;
             int32_t diff = c2 - c;
             double tau = cd / (cd - c2d);
             if (diff < 0)       { if (tau <= tmin) goto L948; continue; }          /* 02d91e → jbe 02d948 */
             else if (diff == 0) { if (0.0 > cd) goto L948; continue; }             /* 02d8c9：compare cd : 0.0 ; ja */
             else                { if (tau > tmin) goto L948; continue; } }         /* 02d8f4 → ja 02d948 */
    L948:  { double sa = (double)SIDE[a], sb = (double)SIDE[b];
             tmin = sa / (sa - sb);                      /* [bp-0x1e]。辺 ab 上で A→B の線を切る位置 */
             *pst = 1; }
    L9b3:  *pA = a;  *pB = b;  *pE = e;
           continue;
    }
    /* 02d9ce：選ばれた辺を「通った」にして、交点を点 603 に置く */
    VIS[*pE] = 1;
    { int32_t dx = SX[*pB] - SX[*pA];
      int32_t dy = SY[*pB] - SY[*pA];
      SX[603] = (int32_t)trunc((double)SX[*pA] + (double)dx * tmin);      /* 6d94×710c、6d81 の和、ftol */
      SY[603] = (int32_t)trunc((double)SY[*pA] + (double)dy * tmin); }
}
```
**読みの注意：**

* `L7ac` の末尾（`L7e6`〜`L83d`）は lift の分岐を端から転記したもの。**`orient(a,b,P2) > 0` なら `L475` へ（候補を取る側）、`<= 0` なら `L803` で再び調べる**。
  `L803` は **P2 が辺の線の上か右**（`orient<=0`）なら捨てる（`L83d`）、そうでなければ Q2 の側を調べて `>0` なら `L475`、それ以外は捨てる。
  生の逆アセンブル（`02d7ac〜02d848`）の通りに書いたが、**ここは 3 回の `orient` の組み合わせが多いので最も写し間違いやすい**【要測定／要照合】。
* **tmin と τ の比べ**：`τ = c/(c−c2)` は「新しい辺 ab の線が、いまの候補辺（Ao→Bo）を切る位置」、`tmin` は「候補辺が A→B の線を切る位置（候補辺の上の割合）」。
  **同じ点で交わる辺が複数あるとき、角度で順位を付ける**ための比べ。交わる位置が A→B の上で違う辺どうしも同じ式で比べられる（3 本の線の配置から決まる）。
* 交点の座標は **`trunc(SX[a] + (SX[b]-SX[a])·tmin)`**（辺の始点側が `*pA`、割合は辺の上の割合）。`tmin==0`（一直線・接する場合）なら `*pA` の点そのもの。
* 見つからなかったときの既定（`*pA=B,*pB=A,*pE=E,*pst=-1,tmin=0`）は「B に戻る」ことになり、`SX[603]=SX[B]`。**図形が閉じていれば起きない**と読めるが、起きると
  同じ辺を往復して `seg` が 400 になり −2 で終わる。

### 7.3 400 を超えたとき

`seg >= 400` で `shadow_main` が **−2**。入口は §3 のとおり行 3（桁 0x14）に `"データが不適当"`（`0x396`）を `%s` で出し、**描いたぶんは消さずに** −1 で返る。
`[0xc22]=2`（行 2 の言葉の優先度）。

### 7.4 `02cafe〜02ce09` 他の建物の開始点に印を付ける（`mark_other_groups`）

いま描いた 1 本（`ip=602`→`ic=603`、辺 `Aprev→Bcur`）について、**まだ描いていないグループ（`ORDER[r+1..D]`）の開始点**を見る。開始点が
**この線の上にあれば 0（＝このグループは外周に含まれて済み）**、**この線が走査線 y=yp をまたぐ向きなら符号を反転（＝奇数回なら「他に囲まれた」）**。
全部の線を見終わったとき、負（囲まれた）と 0 のグループは 0 にして飛ばす（§5.3 末尾）。

```c
void mark_other_groups(int r, int D, int Aprev, int Bcur, int ip, int ic)
{
    int g0 = GRP[Aprev];  START[g0] = 0;                 /* 02cb0a：いま歩いている辺の始点のグループは済み */
    for (int j = r + 1; j <= D; j++) {                   /* 02cb30〜02cb78 */
        int gj = ORDER[j];
        if (START[gj] == 0) continue;
        int p = abs16(START[gj]);                        /* [bp-0x54]。負でも正でも点番号 */
        if (SIDE[p] == 0) {                              /* 点 p が線 A→B（最後に next_edge が見た線）の上 */
            int32_t dxB = SX[Bcur] - SX[Aprev];  int32_t yA = SY[Aprev];
            int32_t dyB = SY[Bcur] - yA;
            if (dxB == 0 && dyB == 0) continue;
            int32_t ax = labs32(dxB), ay = labs32(dyB);
            int32_t *V; int32_t p_lo, p_hi, vp;
            if (ay < ax) V = SX; else V = SY;            /* 主な軸 */
            int32_t d = (ay < ax) ? dxB : dyB;
            int32_t vpv = V[p], vA = V[Aprev], vB = V[Bcur];
            int in;
            if (d <= 0) in = (vB <= vpv && vpv <= vA);   /* 02cb32 / 02cb3d */
            else        in = (vA <= vpv && vpv <= vB);   /* 02cc71 / 02ccd8 */
            if (in) START[gj] = 0;                       /* 02ccb9 */
        } else {                                          /* 02cd12 */
            int32_t yp = SY[p], y602 = SY[ip], y603 = SY[ic];
            if (!(y602 < yp || y603 < yp)) continue;
            if (!(y602 >= yp || y603 >= yp)) continue;   /* 走査線 yp が線分 602–603 を（半開区間で）またぐ */
            int up = (y603 > y602);
            if (!up) { if (SIDE[p] > 0)  START[gj] = -START[gj]; }       /* 02cde7→02cdfc */
            else     { if (SIDE[p] <= 0) START[gj] = -START[gj]; }       /* 02cdbb→02cdd0 */
        }
    }
}
```
`SIDE[]` は**直前の `next_edge` が作った値**（線 `A→B` に対する左右）で、`ip→ic` の線分はその線の上にある（`ic` は A→B 上の交点）。
符号の反転は **`neg` で毎回反転**（奇数回で負、偶数回で正に戻る）。

---

## 8. 壁面日影（`wall != 0`）のときの違い

`wall`（壁面線の記録番号 dword）が 0 でないとき、`shadow_main` は次を足す。**この節は普通の日影図には効かない。** lift は読んだが、逐語の写しは §7 ほど詰めていない
【要測定】。壁面日影は「壁面線を測定面の高さとした立面として描く」（HELP）。

1. **前処理（`02c581〜02c6b1`）**：`wall != 0 && DS[0x11d6] < 4` のとき、`X==0 && Y==0`（変位が 0）でなければ
   `d = c398[607]*(Y*100) − X*100`（`[bp-0x7c]` に f32。`c392/c398` の 607 は ovl33 が壁面線の単位ベクトルを置いた所、`0xa93c`＝100.0）を作り、
   `d <= 0.001`（`0xa944`）なら**影が壁面に当たらない**として、格子（`0xb48c`）を直接いじってすぐ戻る（`w<0`／`w==0` の場合。②の `w>0` では格子は使わず、
   キー取得（`0xdef:2742`）の結果で −1 か 1 を返して終わる）。②の壁面では **線は 1 本も描かれずに戻る**ことがある。
2. **点の座標**：`c392/c398` の 604〜605 に壁面線の端（`2cf5f〜2cf9f` で作図の座標を `1bb4:27ea` の座標系へ）、606〜608 に長さ・単位ベクトル・直交ベクトル
   （ovl33 が置く。`2d4e5〜2d819`）。
3. **線の変換 `2c248`（rel `0x16c8`）**：1 本の線（`x0f,y0f`→`x1f,y1f`）を、壁面線の座標系の上で **壁面線の手前側にある部分だけに切る／
   壁面線に落とす**。引数 `[bp+6..0x1b]`＝壁面線の 22 バイト記録、`[bp+0x1c]`,`[bp+0x20]`＝点 (x,y)（float）、`[bp+0x24]`,`[bp+0x28]`＝影の変位 (X,Y)（float）、
   出力 `[bp+0x2c]`,`[bp+0x2e]`＝新しい x,y（float、入力の写しが既定）、`[bp+0x30]`＝符号つき距離（float、`0xa91c`＝1.0 より大きいとき変換する）。
   変換するとき `isect`（`1bb4:3cd1`）で「点＋(X,Y)×a924(−100)」の線と壁面線の交点を求め、範囲 `[−2000, 2000]`・`[−2000, −1000]`（`a928,a92c,a930`）の外なら 1 を返して**そのまま**。
4. **描く直前（`02c9aa〜02cafe`）**：`w>0` のとき高さの条件（§5.3）に **通ったあと `2dddf` へ**（クリップあり、§9.3）。`[bp-0x84]`（2c248 が変換したか）が 1 で
   2 回描く（元の線と変換後の線の組み替え。`02cabc〜02cafb`）。

壁面日影の細部は【要測定】（`TEST7.JWC` が壁面日影のサンプル）。

---

## 9. 線と時刻の文字を図面に書く

### 9.1 `2dddf`（rel `0x225f`、file-linear `0x2dde0`）`emit_line`

引数（`[bp+6]` から）：`w`（線種。**0 なら何もしない**）、`int *conn`（`[bp+8]`）、`x0`(double `[bp+0xa]`)、`y0`(`[bp+0x12]`)、`x1`(`[bp+0x1a]`)、`y1`(`[bp+0x22]`)、
`wall` dword（`[bp+0x2a]`,`[bp+0x2c]`）。座標は**真北の座標系 (u,v)**。

```c
int emit_line(int w, int *conn, double x0, double y0, double x1, double y1, int32_t wall)
{
    if (w == 0) return 0;                                  /* 02de0f〜 */
    if (x0 == x1 && y0 == y1) return 0;                    /* compare ; jne→続き。長さ 0 の線は描かない */
    int clipped_flag = 1;                                  /* [bp-0x18]（意味は使わない） */
    if (wall != 0) {                                       /* 02de2a: or ax,[bp+0x2c]; jne 02de35 */
        /* §9.3：DS[0x11d6] のビットで 2daab（クリップ）を 1〜3 回。範囲外なら 0 を返す */
    }
    /* 02dfad：描く（普通の日影図はここへ直接来る＝クリップ無し） */
    hide_cursor();  0xdef:13db(3, 0, …);  885:1f49();
    float xa = (float)*pf(2981(0,x0,y0));   float ya = (float)*pf(2a18(0,x0,y0));     /* 真北の座標系 → 作図の座標 */
    float xb = (float)*pf(2981(0,x1,y1));   float yb = (float)*pf(2a18(0,x1,y1));
    if (DS_byte[0x11d7]) call_2ab80();                     /* メモリー不足の後始末（出さない）*/
    Line rec;  rec.x0=xa; rec.y0=ya; rec.x1=xb; rec.y1=yb;
    rec.type  = (uint8_t)w;                                /* [bp-6] */
    rec.pen   = DS_byte[0xa6a];                            /* [bp-5]：いまのペン */
    rec.layer = DS_byte[0xb310];                           /* [bp-4]：いまの書込レイヤ（上位 4 ビット＝グループ） */
    /* rec.rest[1..3] は **初期化しない**（スタックの残り）。§10 */
    11f2:66b3(&rec, 0);                                    /* 末尾に足す。ペン<0x5a で x0==x1 && y0==y1 なら足さず 0 を返す。[0x148]++ */
    11f2:6476(rec, 0);                                     /* 画面に描く（足した線を 1 本描くだけ。記録は足さない） */
    if (!layer_used[rec.layer]) { layer_used[rec.layer] = 1; 885:2988(-1); 885:5256(0); }   /* 使用レイヤ表 [0xb4a6+layer] */
    Line *z = rec_ptr(DS_long[0x148]);                      /* 0:13f（最後の記録）*/
    z->rest[2] |= 0x80;                                    /* 02e0f9：or [bx+0x14],0x80 */
    if (wall == 0) z->rest[3] |= 0x40;                     /* 02e119：or [bx+0x15],0x40 */
    else if (clip_flag_bp1a == 0) z->rest[3] &= 0xbf;      /* 02e139：and [bx+0x15],0xbf（壁面で [bp-0x1a]==0 のとき） */
    (*conn)++;                                             /* 02e149 */
    13db(3,0,[0xcb2],[0xcb4]);
    if ((int32_t)*conn == (int32_t)(DS_int[0xbe9e] | DS_int[0xbea0] << 16)) {   /* 02e16c〜 */
        c392[611] = xa; c398[611] = ya;   c392[612] = xb; c398[612] = yb;      /* 時刻の文字の置き場（作図の座標）。0x98c/4、0x990/4 */
        put_label(DS_f32[0xb78c]);                          /* 2e67a。§9.4 */
    }
    return 1;
}
```
**保存される差は layer・pen・type と `rest[2]`（0x80、時刻の頭と終わりで §3 が入れ替える）・`rest[3]`（0x40）と、初期化されない `rest[1..3]` の残り**。

### 9.2 色・線種

* `type = w`：**整時の影（8,9,…時）＝ 1、それ以外（30分・指定時間の整時でない時刻）＝ 2**。
* `pen = DS:[0xa6a]`、`layer = DS:[0xb310]`：**呼び元（UI）がいま選んでいるペンと書込レイヤ**。②は専用のペン・レイヤに切り替えない（lift に書き込みが無い）【要測定：SAMPLE3 で ② を走らせ、書いた線の pen/layer を見る】。
  （ただし ovl33 の `測定条件図面書込` が別の文字記録を書くことはある。それは UI 側の担当）。

### 9.3 `2daab`（rel `0x252b`）`clip`（壁面日影だけ）

`2dddf` は `wall != 0` のとき、`DS[0x11d6]` のビット（bit1=0x02、bit2=0x04）で `clip` を呼ぶ：`11d6 < 4` なら `clip(0,…)` を 1 回（0 を返したら描かない）、
`11d6 >= 4` なら `clip(-1,…)`（戻りを `[bp-0x1a]` に）。`11d6 >= 6` でなければ `clip(1,…)` を 2 回（どちらかが 0 なら描かない）。
`clip(mode, double *x0,*y0,*x1,*y1, …)` は線分を画面の枠（`±100`、`2000/−2000/−1000`）の内側に切り、`orient` 風の外積の符号で端を判定し、
`t = d1/(d1−d2)`（f32）で切る（lift `02dcb7〜02dd3a`）。**`[0x11d5]`（byte）≠0 かつ mode>0 のとき `[0x7582]` と `[0x7586]` の大小で `0xa960`(200.0f) を掛けた閾値を使う**
（lift `02dac3〜02db0d`）。詳細は【要測定】。

### 9.4 `2e67a`（rel `0x40fa`、file-linear `0x2e67b`）`put_label(hour)`（時刻の文字）

呼ばれるのは `conn == [0xbe9e]` になった線（**その時刻の 2 本目（午前）／3 本目（午後）／1 本目（壁面）の描いた線**）。引数 `[bp+6]` double＝時（`[0xb78c]` を double に）。

```c
void put_label(double hour)
{
    hide_cursor(); 13db(3,0,1-[0xcb2],[0xcb4]);
    int saved = DS_int[0x112c];  DS_int[0x112c] = 1;                 /* 数の書き方の切替 */
    char buf[0x50];
    if (1bb4:6b3f(buf, hour) == 0) { DS_int[0x112c] = saved; return; }  /* 数→文字列（"9" "10" "8.5" など。【要測定】） */
    DS_int[0x112c] = saved;
    if (strlen(buf) == 0) return;                                    /* 22b2:21c4 */
    float width = *(float*)18b3:3cf(3, 0, buf);                      /* 文字の大きさ 3 での文字列の長さ（作図の単位）[bp-0x56] */
    float x1 = c392[611], y1 = c398[611], x2 = c392[612], y2 = c398[612];   /* 描いた線の作図の座標 */
    float dx = x2 - x1, dy = y2 - y1;                                /* [bp-0x5c],[bp-0x64] */
    double len = sqrt((double)dy*dy + (double)dx*dx);                /* 7592。[bp-0x6c] f64 */
    float ux = (float)(dx / len), uy = (float)(dy / len);            /* [bp-0x78],[bp-0x80] */
    float a  = (float)((len - (double)width) * 0.5);                 /* a900=0.5。[bp-0x9e] → [bp-0x5c] */
    float b  = (float)(0.5 / (double)DS_f32[0xb4a2]);                /* [bp-0xa2] → [bp-0x64]：線から 0.5mm 離す（用紙の mm あたりの作図単位で割る）*/
    Text t;
    t.x0 = (float)(((double)a * ux - (double)b * uy) + x1);          /* [0xc3a0] */
    t.y0 = (float)(((double)a * uy + (double)b * ux) + y1);          /* [0xc3a4] */
    t.size = 3;  t.layer = DS_byte[0xb310];                          /* [0xc3b4]=3、[0xc3b5] */
    t.text = far(buf, DS_word[0xbc78]);                              /* [0xc3b0],[0xc3b2] */
    float w2 = *(float*)18b3:3cf(3, 0, buf);                         /* もう一度 */
    t.x1 = (float)((((double)w2 + a) * ux - (double)b * uy) + x1);   /* [0xc3a8] */
    t.y1 = (float)((((double)w2 + a) * uy + (double)b * ux) + y1);   /* [0xc3ac] */
    13db(3,…); 885:1f49(); DS_int[0x11c] = 0x0a;  DS_byte[0xc3b6] &= 0xdf;
    885:5256(0);  18b3:2668(&t);                                     /* 文字の記録を足して描く */
    DS_int[0xbc0] = 1;
    if (DS_byte[0x11d7]) call_2ab80();
    13db(…); 
}
```
文字は**線の中央に、線の向きに沿って、線の左側（`b>0` 側）へ 0.5mm 離して**置く。文字の大きさ種別 3、レイヤは `[0xb310]`。時刻の数の書き方（`1bb4:6b3f`）と
`[0x112c]` の意味は読んでいない【要測定：保存した .JWC の文字の中身】。`rest[1..3]` は `18b3:2668` が決める（`spec-opt5-calc-b.md` §7.2 を参照）。

### 9.5 画面の関数

`885:5256(0)`＝マウスカーソルを隠す、`885:23aa`＝全面の描き直し、`885:2988(-1)`＝使用レイヤ表の作り直し、`885:1f49`＝画面の更新、
`0xdef:13db(3,0,…)`＝描画状態（カーソル／書き込みの切替）の設定、`0xdef:26a9(col,row)`＝桁・行を指定、`11f2:356(str)`＝上の行へ文字列を書く。
**②の画面では、線は 1 本描くごとに `11f2:6476` で画面に描かれる**（時刻ごとに、外周の辺が出るたびに）ので、計算の途中経過が見える。最後に `885:23aa` で全面を描き直す。

---

## 10. `spec-opt5-calc-b.md` との食い違い（確かめて直すこと）

* **`2dddf` のクリップは壁面（`wall != 0`）のときだけ**：`02de2a: mov ax,[bp+0x2c]; or ax,[bp+0x2a]; jne 02de35; jmp 02dfad`。`jne`＝壁面あり→クリップ側、
  なし→直接描く。`spec-opt5-calc-b.md` §7.1 項目 2 の「壁面でなければクリップ」は**逆**に読める。
* **`sun_coeffs` の D（sinδ/cosφ）**：lift の `6e4b` は「保存するが積みは残す」だが、D は **`[bp-0x10]`（f32 に丸めた sinδ）を `6cc6` で読み直して**割る
  （`02bdf0〜02bdfb`）。calc-b の C は丸めない sinδ。差は f32 の 1 ulp 以内（結果は f32 に丸めるので、まれにしか出ない）。
* **`sc = 1.0/C`**：altlift が `7c18` を知らず「`C / ?`」と出す箇所。`7c18` は 1.0 を積む定数なので `7187`（逆除算）は **`1.0/C`**（`02c552〜02c55f`）。
  calc-b にも同じ式があれば同様。

---

## 11. ②日影図 の結果（まとめ：書き込みの順）

時刻 t を **正午から −4h（9-15 なら −3h）〜+4h（+3h）**、30 分毎なら 17 回（−4,−3.5,…,+4）、1 時間毎なら 9 回、指定時間なら 1 回、**昇順**に：

1. 1 時刻の中では、**グループ（建物）を、影の先の y が小さい順（`ORDER`）**に、各グループの外周を **開始点 K（y 最小）から**たどり、辺を 1 本たどるごとに（`seg++`）、
   その辺の端の高さが 0.01 を超えていれば線を **1 本足す**（長さ 0 でなければ）。たどる順序は §7（`first_edge` が最初の辺、`next_edge` が次の辺と交点）。
2. 線の属性：`type`＝1（整時）／2（半時間・指定時間の整時でない）、`pen=[0xa6a]`、`layer=[0xb310]`、`rest[2] |= 0x80`、`rest[3] |= 0x40`（壁面でなければ）。
   座標は `(float)((double)long × sc)` を真北の座標系から作図の座標へ戻した float。
3. その時刻の **2 本目（午前）／3 本目（午後）／1 本目（壁面）** の線に、時刻の文字（大きさ 3）を 1 つ足す。
4. 時刻の終わりに、足した線が 2 本以上なら、その時刻の**最初の線の `rest[2]` を `0x40`（0x80 を落とす）**、**最後の線の `rest[2]` に 0x40**。
5. ESC は各時刻の終わりでだけ見る。

建物のないグループ（高さ 0 のみ）や、START が負（他に囲まれた）のグループは線を出さない。

---

## 12. 実機で測ること（優先順）

1. **②1時間毎を `SAMPLE3.JWC`（マンション、日影用）と `TEST1.JWC`（日影用サンプル）で実行→保存→`tools/probediff.py` 相当で記録を比べる**：
   * 足された線の本数・順・**座標（float のビット）**・`type`（1/2）・`pen`・`layer`・`rest[1..3]`（スタックの残り：`[bp-3..-1]`）。
   * 文字の本数・位置・中身（時刻の書き方）・大きさ・`rest[]`。
   * `rest[2]` の `0x40/0x80` の付き方（§3、各時刻の最初と最後）。
   手順：`type s`、`type 5`（日影図）、`type 2`（日影図）、`type 2`（1時間毎の影）。操作はできるだけ少なく（`tools/funccases.sh` に `probe_opt5_*.txt` として並べる）。
2. **30分毎**（`type 1`）、**指定時間**（`type 3`→ 数字 `10`/`10.5`、Enter）の線種（整時か否か）とラベルの番号（午前 2・午後 3）。
3. **ESC の効き**：長い図面（`TEST7`・`SAMPLE3`）で線が出ている途中に ESC を送る。その時刻が描き切られるか、メッセージが出るか。
4. **400 を超える図面**（`SAMPLE5` など）で `データが不適当` が出る位置と、描いた線の本数。
5. **`日 影 図 作 図 中` の行・桁**（`0xdef:26a9(1,0x14)` が桁 20・行 1 か。上の行を消してから出すか）と、終わったあとの画面。
6. **sin/cos の 1 ビット差**：ホストの libm と MS C の差が座標に出るか（`SAMPLE3` の 1 時間毎で座標を比べる。出るなら `tools/` に MS C 相当の sin/cos を持ち込む）。
7. **壁面日影**（`TEST7` で ⑤ に壁面線を指定してから ②）：§8 の変換・クリップの式。
8. `[0xa6a]`・`[0xb310]` が、②の実行前にどの値か（ペン・書込レイヤが UI の現在値のままか）。

最優先は 1（保存の差を見ると、`next_edge` の写し間違い・`rest[1..3]` の残り・sin/cos の差が一度に出る）。
