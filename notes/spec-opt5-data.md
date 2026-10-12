# オプション ⑤日影図：データの集め方（ovl33 のデータ整理）と壁面日影の下ごしらえ

ovl33（`decomp/ovl33/all.c`、lift は `python tools/altlift.py --ovl 33 0xSTART 0xLEN`）のうち、
**画面の遷移（メニュー・入力欄）を除いた「図面から建物データを集めて作業配列に積む」部分**を起こした仕様書。
アドレスは file-linear（`0x2ab80 + overlay 内オフセット`、3ab8:xxxx は +0x2ab80）。
メニュー・高さ入力・測定条件の画面は別の仕様書（UI 担当）。計算（ovl34）は calc 担当。
読み方の根拠は全部 disasm（`tools/disasm.py --ovl 33 …`）で確かめた。**実機での測定はしていない**（「測定が要る」は 9 節）。

## 0. 読み方の決まり（この仕様で何度も使う）

### 0.1 `compare A : B` + jcc の向き（altlift の表記）

altlift が `compare A : B` と出したあとの条件分岐は、**B を左、A を右にした符号なし比較**として読む：

| jcc | 飛ぶ条件 |
|---|---|
| `ja` | B > A |
| `jae` | B >= A |
| `jb` | B < A |
| `jbe` | B <= A |
| `je`/`jne` | B == A / B != A |

（A は先に積んだ値、B は後から積んだ値＝altlift が書く順。`fcom` 相当 `22b2:7191` は st(0)＝B と st(1)＝A を比べ、CF を B<A で立てる。
確かめた 2 件：`0x2b149` の符号関数が「-1/0/1」の 3 値になること、`0x2c2b4` の「測定面以下」の表示が z<0 のときだけ出ること。）
以降の擬似コードは **この向きで直した結果**を書く。altlift の `compare` 行をそのまま文章に読むと逆になる。

### 0.2 浮動小数点の型

* 本物はソフトウェアの 8087 実行時ライブラリ（セグメント 22b2）。`tools/altlift.py` が演算を式に直す。`:f64` と付いたものは double、付かないものは float（メモリから積むとき）。
* 保存の `[x] = … (f32)` は float に丸めて書く。`(f64arg)`／`6eb1` は double をスタックに積む（引数渡し）。`7258` は何もしない（変換）。
* 演算の途中の丸めは optbatch.c と同じ流儀にする（`notes/opt4-ab-measured.md`：メモリ演算は型ごとに float 用・double 用）。**x87 の拡張精度は使わない**。途中が double か float かが決まらない所は各節に「丸め注意」と書いた。
* 22b2 のエントリ：`6cc6` fld f32、`6ca8` fld f32（es:）、`6d14` fld f64、`6d9b` fild i16、`6e4b` fst f32（pop しない）、`6e63`/`6e67` fstp f32、`6e99` fst f64、`6eb1` fstp f64、`6ef9` fstp f32（`DS:0x7a2a` を捨て場にした丸め）、
  `6fc7` fabs、`7016` f32(es) 減算 `st0-mem`、`701d` f32 減算、`7035` f32 逆減算 `mem-st0`、`7046` f32(es) 乗算、`704d` f32 乗算、`7065` f32 除算、`708e` f32(es) 加算、`7095` f32 加算、
  `70dc` f64 減算、`710c` f64 乗算、`7124` f64 除算、`713c` f64 逆除算、`7154` f64 加算、`7173/717d/7182/7187/718c` スタック演算（`-`/`*`/`/`/逆`/`+`）、`7191` 比較、
  **`75ec`＝sin、`75fe`＝cos**（引数は double をスタックに積む）、`7592`＝sqrt、`7658`＝atan2、**`7c18`＝1.0f を積む**（`DS:0x8ea4`、altlift は `?` と出す）。

### 0.3 定数（DS の値。overlay が `[0xa7xx]` と読むもの）

`tools` で DGROUP（unpacked root + 0x33750）から復号した値。型は使われ方から決めた。

| 番地 | 型 | 値 | 番地 | 型 | 値 |
|---|---|---|---|---|---|
| a7c4 | f64 | 0.017453292519943295 (π/180) | a7cc | f64 | 7.272205e-05 (2π/86400) |
| a7d4 | f64 | 1.0 | a7dc | f64 | 100.0 |
| a7e4 | f64 | 0.0 | a7ec | f64 | 0.001 |
| a7f4 | f64 | 0.1 | a7fc | f32 | 0.0 |
| a800 | f64 | -0.01 | a808 | f64 | 0.01 |
| a810 | f32 | 1.0 | a814 | f64 | -9.0 |
| a81c | f64 | 1000.0 | a824 | f32 | 9999.0 |
| a828 | f32 | -9999.0 | a82c | f32 | 9.0e10（89999998976） |
| a830 | f32 | -100.0 | a834 | f32 | 100.0 |
| a838 | f64 | 1.4 | a840 | f64 | 2.0e9 |
| a848 | f32 | 5.0 | a84c | f64 | 999999.0 |
| a854 | f64 | 10000.0 | a85c | f32 | 400.0 |
| a860 | f64 | 57.29577951308232 (180/π) | a868 | f64 | 90.0 |
| a870 | f32 | -180.0 | a874 | f32 | 360.0 |
| a878 | f64 | 0.0001 | a880 | f32 | -2.0 |
| a884 | f64 | -23.4499 | a88c | f64 | 23.4499 |
| a894 | f32 | -50.0 | a898 | f32 | 25.0 |
| a89c | f32 | 46.0 | a8a0 | f64 | 41.5999 |
| a8a8 | f64 | 41.3001 | a8b0 | f64 | 10.0 |
| a8b8 | f32 | 23.45 | a8bc | f32 | -23.45 |
| a8c0 | f32 | 10.0 | a8c4 | f64 | -23.4501 |
| a8cc | f64 | 23.4501 | a8d4 | f32 | 12.0 |
| a8d8 | f32 | -1.0 | a8dc | f32 | 9.0 |
| a8e0 | f32 | 15.0 | a8e4 | f32 | 8.0 |
| a8e8 | f32 | 16.0 | | | |
| 93b8 | f64 | 0.001 | 93c8 | f64 | 1.0 |
| 93e8 | f32 | 10.0 | 9380 | f32 | 0.0 |
| 93ec | f64 | 1.0e10 | | | |

（a894〜a8e8 は UI の入力範囲・既定値。この仕様では a7xx〜a84c、a860 までを使う。）

## 1. この仕様が扱う関数

| 開始（file-linear / overlay 内） | 中身 | 節 |
|---|---|---|
| `0x2ab81` / `0x1` | 作業配列の確保 | 2 |
| `0x2aea1`（`push bp` は 0x2aea1、本体 0x2aea2）/ `0x321` | 太陽の位置（影の長さと向き）＋昼夜の符号 | 3 |
| `0x2b17a` / `0x5fa` | ⑤壁面日影：壁面線の向きの決定 | 4 |
| `0x2b681` / `0xb01` | 点が壁面線の範囲内か | 5 |
| `0x2b82b` / `0xcab` | 壁面線で建物の辺を切る（クリップ） | 6 |
| `0x2bf7f` / `0x13ff`（7945 バイト） | **データの集め方（本体）** | 7 |

`0x2de88`（`lcall 11f2:5670` で押した点の近くの線を探す補助）、`0x2e282`・`0x2e36f`（文字レコードを作る）、`0x2e48b`（高さ入力）、`0x2efd0`（測定条件の文字列）、`0x2f0da`（測定条件の画面）、`0x2f85b`（メニュー本体）は UI 担当。ただし `0x2e36f` はここから呼ばれるので 7.6 に呼び方だけ書いた。

## 2. 作業配列（`0x2ab81`）

`int 3f` で overlay 28 の `4124`（ヒープ確保）へ `dx:ax = 0x18000`（98304 バイト）を頼み、戻り値が 0 でなければ `11f2:26d3(0x6b0 "メモリーが足りません")`（致命）。
`[0xbe90:0xbe92]`（offset:segment）が確保した塊の先頭。以下の配列を**段落（16 バイト）境界で続けて**切る：

```
p(size) = (size & ~0xf) + 0x10            // 本物は al だけ 0xf0 で潰し、+0x10。size が 16 の倍数でも +16。
seg(次) = seg(前) + p(size前) / 16        // offset は 0
```

| DS 変数（far ptr offset:seg） | 大きさ（バイト） | 要素 | 中身（この仕様で決まった分） |
|---|---|---|---|
| `0xc392`:`0xc394` X | 2500 | f32 | 点の x。添字は 1 から（`bx = i*4`）。**北向きの座標系の u** |
| `0xc398`:`0xc39a` Y | 2500 | f32 | 点の y（v） |
| `0xc39c`:`0xc39e` Z | 2500 | f32 | 点の高さ（第 1 の高さ） |
| `0xbf44`:`0xbf46` Z2 | 2500 | f32 | 第 2 の高さ（下側）。**倍率 s は掛けない**（7.8）。計算側で使うか不明 |
| `0xc130` | 2440 | f32 ×610 | この仕様では触らない（ovl34 用） |
| `0xc13a` | 2440 | f32 | 同上 |
| `0xbef6` | 2440 | f32 | 同上 |
| `0xc28c`:`0xc28e` S | 1220 | i16 ×610 | 点の「2 段フラグ」：1＝第 2 の高さあり（上の点）、0＝高さ 0、−1＝1 段のみ／下側の複製 |
| `0xbece`:`0xbed0` B | 1220 | i16 | 作業用の印（7.3〜7.7）。最後は**建物（連結成分）番号 1..nblk**（0＝辺に繋がらない点） |
| `0xc08a`:`0xc08c` E0 | 2010 | i16 ×1005 | 辺の始点の点番号（添字は辺番号 1 から） |
| `0xc096`:`0xc098` E1 | 2010 | i16 | 辺の終点の点番号 |
| `0xbc7a` | 1005 | byte | ovl34 用 |
| `0xc278` | 400 | f32 ×100 | ovl34 用（100 本の float。⑤指定点の座標配列と思われる） |
| `0xb77c` | 400 | f32 ×100 | 同上 |
| `0xb37a` | 620 | | ovl34 用 |
| `0xbef2` | 620 | | ovl34 用 |
| `0xb48c`:`0xb48e` | 62020（0xf244 = 0x10000−0xdbc） | | 作業領域（ovl34）。確保の式が `sub ax,0xdbc` なので 65536−0xdbc |
| `0xc086` | 440 | | ovl34 用 |
| `0xc09a` | 440 | | ovl34 用 |

合計 5619 段落（89904 バイト）。最後の配列の終わりの segment が `0xbfff` を超えたら `13bf:0a03(0x722e "out of space")`（致命）。
移植では**ふつうの malloc でよい**（segment の話は不要）。点は添字 1..300（後の複製で 600）、辺は 1..（2×辺+点 ≤ 1000）で、**添字 604〜609 は作業用の「スロット」**（7.7。点は 600 までなので重ならない）。

## 3. `0x2aea1`：太陽の位置（`sun(t, &L, &sinAz, &cosAz)`）

スタック引数（cdecl、`call 0x2aea1` の直前に 4 つ積む。積む順は cosAz→sinAz→L→t）：

| 位置 | 型 | 意味 |
|---|---|---|
| `[bp+6]` | i16 | 時刻 t（**秒**、正午からの差。負は午前） |
| `[bp+8]` | double* | out：影の長さ比 L（`cos(h)/sin(h)`＝高度 h の cot） |
| `[bp+0xa]` | double* | out：sinAz |
| `[bp+0xc]` | double* | out：cosAz |

戻り値 ax：`-1/0/1`（下の符号関数）。使う DS：`[0x11d8]`（f32 緯度°）、`[0x11dc]`（f32 日赤緯°。冬至の初期値 −23.45）、`[0xc392+0x97c]`＝X[607]、`[0xc398+0x97c]`＝Y[607]（壁面線の単位方向、7.7）。

```
phi   = (double)[0x11d8] * (π/180);            // [bp-0x5c]
delta = (double)[0x11dc] * (π/180);            // [bp-0x64]
sp = sin(phi); cp = cos(phi);                  // [bp-0x20], [bp-8]
sd = sin(delta); cd = cos(delta);              // [bp-0x18], [bp-0x54]
w  = (double)t * 7.272205e-05;                 // [bp-0x3c] = t * (2π/86400)
S  = ((cos(w) * cd) * cp) + (sd * sp);         // [bp-0x10]   = sin(高度)
C  = sqrt(1.0 - S*S);                          // [bp-0x4c]   = cos(高度)
*L      = 1.0 / (S / C);                       // 7c18 = fld 1.0; 713c 逆除算 → S/C、7187 逆除算 → 1.0/(S/C)
*sinAz  = (sin(w) / C) * cd;
cosAz_d = ((S * sp) - sd) / (C * cp);          // [bp-0x6c]
*cosAz  = cosAz_d;
sx = (float)(*sinAz * 100.0);                  // [bp-0x70]  (f32)
cx = (float)(cosAz_d * 100.0);                 // [bp-0x74]  (f32)
v  = (float)( X[607]*cx - Y[607]*sx );         // [bp-0x78] = [bp-0x24]（同じ値を 2 か所に保存）
if (v <  0.0)   return -1;                     // 0.0 >= v でなければ（0.1 の向きで直した）
if (v <= 0.001) return 0;
return 1;
```
（`S` の式は lift が `((*ax * cd) * cp) + (sd_ * sp)`。`*ax` は cos(w)。積の順はこのとおり。）
丸め注意：`v` の 2 つの積は f32 同士なので float 丸めの積の差。0.0／0.001 との比較は double。
`L` は S<=0（日の出前・日没後）で負や巨大になる。呼ぶ側（7.7）は t＝±T（±14400 秒＝4 時間、`[0x11e4]!=0` のとき ±10800）で呼び、`L(+T) >= 0.01` を要求する。

**この関数の用途（gather の中だけ）**：`X[607],Y[607]`＝壁面線の方向ベクトル d（北向き系）。`v = 100*(d.x*cosAz − d.y*sinAz)` の符号が「その時刻に太陽が壁面の裏側にあるか」の判定。
符号が 1（`v>0.001`）の時間帯が **壁面自身の日影（壁の裏面に日が当たる）**。ovl34 には別の同種の関数がある（overlay は互いに呼べない）。

## 4. `0x2b17a`：壁面線の向きを決める（`wall_orient(long wall)`）

引数 `[bp+6]`（long）＝壁面線の線番号（1 始まり）。戻り値：0＝決まった／1＝やめる（メッセージ済み）／−1（0xffff）＝[ESC]。メニュー側は戻りが 0 でなければ壁面線を採らない。

```
rec = line(wall)                                   // 0:013f(wall)、22 バイトを [bp-0x16] に写す
if (!frame_set(rec.x0, rec.y0, rec.x1, rec.y1)) return 1;   // 1bb4:27ea。壊れた線のとき（本物がメッセージ・BEL を出す）
side = 0;                                          // [bp-0x36]
for (i = 1; i <= [0x150]; i++) {                   // 文字（texts）全部
    t = text(i);                                   // 0:0398(i)、24 バイト
    if (t.size(+0x14) >= 0x5a) continue;
    if (!(t.rest2(+0x16) & 0x80)) continue;        // 高さの文字だけ
    if (!readable(t.layer(+0x15))) continue;       // 11f2:06d1（読取可レイヤ）
    v = (float) v_frame(t.x0, t.y0);               // 1bb4:2a18(1, x, y)
    if (!(|v| >= 0.1)) continue;                   // 壁面線の上（|v|<0.1）の文字は無視
    if (side == 0) side = (v > 0.0) ? 1 : -1;
    if ((side > 0 && v < 0.0) || (side < 0 && v > 0.0)) { /* 両側に建物 */ goto ask; }
}
if (side == 0) { 0xdef:26a9(2,0x14); if ([0xc22]<1) [0xc22]=1; puts("建物"); puts("データが不適当"); return 1; }   // 建物 0x725f、データが不適当 0x396
if (side > 0) swap_endpoints(wall);                // 建物が正側だけなら壁面線の向きを入れ替える
return 0;

ask:                                               // 両側に建物がある
    line(wall).rest2 |= 2;  7a6:033b(1);  [0xbc2] = 1;     // 壁面線を選択色に
    for (;;) {
        msg = "壁面日影" + (10 spaces, DS:0x94c) + "作図する方向 " + "マウス指示 ";    // 0x11cc,0x94c,0x7251,0x302
        r = 1bb4:2cb4(1, msg, &x, &y, &btn);       // [bp-0x44]=x, [bp-0x40]=y, [bp-0x4c]=btn
        if ([0x158] != 0) { 7a6:0635(0); line(wall).rest2 &= ~2; return 1; }
        if (r == -1)      { 7a6:0635(0); line(wall).rest2 &= ~2; return -1; }
        if (btn == 0) continue;                    // 動き。押しを待つ
        v2 = v_frame(x, y);
        if (v2 < 0.0) swap_endpoints(wall);        // **押した側が負なら入れ替える**（押した側＝描く側、建物は反対側）
        return 0;                                  // 選択色（rest2 bit1）は戻さない
    }
swap_endpoints(wall): rec = line(wall); swap(rec.x0, rec.x1); swap(rec.y0, rec.y1);   // 図面の線そのものを書き換える（取り消し無し）
```
意味：ここで決まる向きは「**建物は壁面線の負側（v<0）にある**」。`swap_endpoints` は図面の線の向きを本当に変える。
`v` は壁面線の座標系（原点＝始点、u＝線に沿う、v＝左向きの垂線）での値（`optbatch.c` の `fr_v`）。

## 5. `0x2b681`：点が壁面線の範囲内か（`wall_range_ok(long wall, float x, float y)`）

スタック：`[bp+6]` long 壁面線、`[bp+0xa]` f32 x、`[bp+0xe]` f32 y。戻り：0＝範囲内、1＝範囲外（メッセージを出した）。

```
rec = line(wall); if (!frame_set(rec.x0,rec.y0,rec.x1,rec.y1)) return 1;
if ((byte)[0x11d6] >= 2) return 0;          // 設定フラグ（8.2）が立っていれば検査しない
v = (float) v_frame(x, y);
if (v >= 0.0) { u = (float) u_frame(x, y); if (u >= 0.0 && u <= [0xc122]) return 0; }   // [0xc122]＝壁面線の長さ（27ea が置く）
0xdef:26a9(3, 0x12); if ([0xc22] < 2) [0xc22] = 2; puts("範囲"); puts("外");   // 0x804, 0x7264、BEL なし
return 1;
```
呼び出し側（`0x30777`〜、④指定点日影時間の指示）が使う。

## 6. `0x2b82b`：壁面線で建物の辺を切る（`clip(line22, int *pa, int *pb, int *pnp, byte *layerOf)`）

スタック：`[bp+6..0x1b]` 壁面線の 22 バイト記録（値渡し）、`[bp+0x1c]`＝&a、`[bp+0x1e]`＝&b（辺の両端の点番号）、`[bp+0x20]`＝&np（**点の数を数える別のカウンタ**＝7.4 の `[bp-0x6ea]`）、`[bp+0x22]`＝layerOf（点→レイヤの byte 配列）。
戻り値：0＝通常の辺（あとで辺として足す。a,b は書き換わることがある）／1＝この線は正側に出ているので足さない／**10 以上＝エラー**（壁面線が建物を通過）。

```
a = *pa; b = *pb; np = *pnp;
if (!frame_set(wall.x0,wall.y0,wall.x1,wall.y1)) return 1;           // 27ea（壊れた線）
va = (float) v(X[a],Y[a]);  vb = (float) v(X[b],Y[b]);               // 2a18(1,x,y)
if (va >= -0.01 && vb >= -0.01) { B[a] = -2; B[b] = -2; return 1; }  // 両方が壁面線の正側（または線上）：建物の外。0xfffe を点に付けて捨てる
if (va <  -0.01 && vb <  -0.01) return 0;                            // 両方が負側：建物の辺として通常に
// 片方だけ正側：壁面線との交点で切る
np++; *pnp = np;
old = (va >= -0.01) ? a : b;                                         // 正側の端
if (va >= -0.01) *pa = np; else *pb = np;                            // 新しい点が正側の端の代わりになる
B[np] = -1;  B[old] = -2;  layerOf[np] = layerOf[old];  S[np] = S[old];
seg = { X[a],Y[a],X[b],Y[b] }（切る前の a,b の座標。float の 22 バイト記録に詰める）;
ok = isect(wall, seg, &Xi, &Yi);                                     // 1bb4:3cd1(A=壁面線, B=辺)、引数は 22 バイト 2 個＋ポインタ 2 個、A の線の上で測る
if (ok && bbox_ok(Xi, Yi, X[a],Y[a],X[b],Y[b])) {
    // bbox_ok：Xi が [min(Xa,Xb), max(Xa,Xb)]、Yi が [min(Ya,Yb), max(Ya,Yb)] に入る（端を含む、float 比較）。
    if ((byte)[0x11d6] < 2) {                                        // 検査が有効なとき
        if (va > 0.01 || vb > 0.01) {                                // 正側に 0.01 より離れた端がある＝貫通の疑い
            u = (float) u_frame(Xi, Yi);
            if (u > 0.01 && u < [0xc122] - 0.01) return 10;          // 交点が壁面線の範囲の中 → 「壁面線が建物通過」
        }
    }
    X[np] = Xi;  Y[np] = Yi;                                         // f32
    // ここから高さの補間（下）。dx = X[b]-X[a]、dy = Y[b]-Y[a]（[bp-0x50], [bp-0xa]、f32）。a,b は *pa,*pb を書き換える前の値。
}
```
補間の軸と式（`0x2bce7`〜`0x2bf76`。短い辺は補間しない）：

```
if (|dx| + |dy| < 1.0f) {                       // a810 = 1.0f。比較は「1.0 >= |dx|+|dy|」の向きで jae → 1.0 <= sum なら下へ
    Z[np] = Z[old]; Z2[np] = Z2[old]; return 0;                       // 補間せず写す
}
if (|dx| <= |dy|) { den = dy; num = Yi - Y[a]; } else { den = dx; num = Xi - X[a]; }   // [bp-0x48], [bp-0x2a]（f32）
Z[np]  = ((Z [b] - Z [a]) / den) * num + Z [a];   if (Z [np] < 0.0) Z [np] = 0.0;   // 各演算 f32。[bp-0x54]=Z[a] を f32 に保存してから使う
Z2[np] = ((Z2[b] - Z2[a]) / den) * num + Z2[a];   if (Z2[np] < 0.0) Z2[np] = 0.0;
return 0;
```
（`|dx| <= |dy|` は altlift の `compare |dy| : |dx|; jbe` を向きを直した結果＝`|dx| <= |dy|`。）
交点が取れない／bbox の外のとき（`0x2bbab`）：
```
X[np] = X[old]; Y[np] = Y[old]; Z[np] = Z[old]; Z2[np] = Z2[old]; return 0;   // 位置も高さも old の写し
```
丸め注意：`Z[np]` の式は `((Zb−Za)/den)*num + Za`。`Zb−Za` は 7173（スタック減算）、`/den` は 7065（f32 除算）、`*num` は 704d、`+Za` は 7095。結果は `6e67` で float。
`va`,`vb`,`u` は float（`[bp-0x32]`/`[bp-0x3c]`/`[bp-0x1a]` に f32 で持つ）。

## 7. `0x2bf7f`：データの集め方（`gather(...)`）

### 7.0 シグネチャ（呼び出し側は 0x300f0、0x30575 ほか。`call 0x2bf7f; add sp,0x14`）

| 位置 | 型 | 意味 |
|---|---|---|
| `[bp+6]` | int* | out：辺の数 ne |
| `[bp+8]` | int* | out：点の数 np（**複製のあと**の数） |
| `[bp+0xa..0x11]` | double | 測定面の高さ H0（呼び側は `[0x11e0]` f32 を double にして積む） |
| `[bp+0x12]` | float* | out：倍率 s（5 の倍数、5..100） |
| `[bp+0x14,0x16]` | long | 壁面線の線番号（0＝壁面でない） |
| `[bp+0x18]` | char* | out：壁面自身の日影の時間帯の文字列（空なら無し） |

戻り値：**建物（連結成分）の数 nblk (>=1)**、失敗は **−1**（メッセージ表示済み）。メニュー側は `>0` を成功と見る。
ローカル：`np=[bp-0x460]`（点）、`ne=[bp-0x408]`（辺）、`nblk=[bp-0x406]`、`np0=[bp-0x6ea]`（壁面で切った点を含む総数）、
`layerOf[1..]` byte 配列 `[bp-0x958]`、`zl[0..255]` f32 `[bp-0x400]`（レイヤの高さ）、`msg[0x45c]` char `[bp-0x45c]`（エラー文）、`cnt=[bp-0xa44]`。

### 7.1 準備（0x2bf80〜0x2c000）

```
if ([0xc62]) 885:2e9a();   885:3b7a();   885:5256(0);              // 画面の準備（UI）
0xdef:13db(3, 0, 1 - [0xcb2], [0xcb4]);                          // 描画ページの切替（意味未詳）
[0x11c] = 10; [0xc22] = 0;                                       // [0xc22]＝メッセージの重さ（0..3）
alloc();                                                        // 2 節
if ([0xc22] != 0) { 0xdef:26a9(2,0x11); 0xdef:2636(); 0xdef:26a9(3,0x11); 0xdef:2636(); }   // 行 2・3 の桁 0x11 以降を消す
```

### 7.2 レイヤの高さ（0x2c000〜0x2c111）

「メモ欄」に `#lv<数>` と書いた**グループの基準高さ**と**レイヤの基準高さ**（メートル、`%f`）を読む。`11f2:0cd5(buf, g)`・`11f2:0c59(buf, j)` は文字列を取り出す関数。

```
for (g = 0; g < 16; g++) { base[g] = 0.0f; buf = note_group(g);  if (buf starts with "#lv") sscanf(buf+3, "%f", &base[g]); }   // DS:0x206 = "%f"
for (j = 0; j < 255; j++) {
    lv = 0.0f; buf = note_layer(j); if (buf starts with "#lv") sscanf(buf+3, "%f", &lv);
    zl[j] = base[abs(j) >> 4] + lv;                                // f32。zl[255] は初期化されない
}
```
`#lv` の書き手は `0x2f7d3`（`"#l" + sprintf("v%0.3f", [0x11e0])` を `11f2:0c99` で書く）＝UI 側。

### 7.3 高さの文字 → 点（0x2c111〜0x2c45d）

```
np = 0; [0xbc0] = 1; cnt = 0;                                    // [bp-0x990] 'dirty' = 0
for (ln = 1; ln <= [0x150]; ln++) {                              // ln を進めない continue（削除）があるので for ではなく while
    t = text(ln);                                                // 24 バイト
    if (t.size(+0x14) >= 0x5a) { ln++; continue; }
    if (!(t.rest2(+0x16) & 0x80)) { ln++; continue; }            // 高さの文字
    ly = t.layer(+0x15);
    if (!readable(ly)) { ln++; continue; }                       // 11f2:06d1
    g = abs(ly) >> 4;
    if ([0xb26] != groupscale[g]) {                              // DS:0xb2a + 4*g（f32 の表）。float の == 比較
        sprintf(msg, "縮尺の違うデータがあります｡強行しますか"); /*0x676。書式に % は無い*/
        msg[0x441] = 0;  goto FAIL;                              // 確認はせず失敗にする（「強行」は選べない）
    }
    strcpy_far([0xbf48], t.str);                                 // 18b3:0064（far の文字列を DS:0xbf48 へ）
    h1 = 0 (未初期化のまま); h2 = -9.0;                          // [bp-0x6fa], [bp-0x960]
    n = sscanf([0xbf48], " %lf,%lf ", &h1, &h2);                 // DS:0x7267。n は 0,1,2
    if (n == 0) {                                                // 数が読めない文字（「∠未設定」など）は**図面から消す**
        0xdef:13db(3,0,[0xcb2],[0xcb4]); 885:1f49(); 18b3:0597(ln); 0xdef:13db(3,0,1-[0xcb2],[0xcb4]);
        continue;                                                // ln は進めない（レコードが詰まる）
    }
    z1 = (float)( ((zl[ly] + fabs(h1)) - H0) / ([0xb26] * [0xb4a2]) * 1000.0 );   // 7182 でスタック除算。分母は f32×f32
    if (z1 < 0.0) { z1 = 0.0; if ([0xc22] < 2) [0xc22] = 2; 0xdef:26a9(3,0x14); puts("測定面以下のﾃﾞｰﾀ有"); }   // 0x7271。続行する
    np++;
    X[np] = t.x0;  Y[np] = t.y0;  Z[np] = z1;  layerOf[np] = ly;  Z2[np] = 0.0f;
    if (n == 2) {
        w = (zl[ly] - H0) + h2;                                  // double（[bp-0x960] に f64 で保存）
        if (w > 0.0) Z2[np] = (float)( (w / ([0xb26] * [0xb4a2])) * 1000.0 );
    }
    B[np] = ln;
    if (h1 > 0.0) { S[np] = 1; ln++; continue; }                 // h1>0：二段の点（上＝z1、下＝Z2）。Z2 はこの時点で z2 か 0
    Z2[np] = z1;                                                 // h1<=0 のとき Z2 を z1 にする（単段）
    S[np] = (h1 >= 0.0) ? 0 : -1;                                // h1==0 → 0、h1<0 → −1
    ln++;
}
```
読み方：
* 高さの書き方（`JW_CADV.HLP`）：`10,9` ＝ 上 10m・下 9m、`-10` ＝ 10m だけ（絶対値）。正の h1 は**上の高さ＝|h1|**、h2 は**下の高さ（レイヤ基準＋h2）**。負の h1 は単段。
* z の単位換算：`(メートル相当 − 測定面の高さ) ÷ (縮尺 `[0xb26]` × `[0xb4a2]`) × 1000`。**`[0xb4a2]` の意味は未確定**（描画の拡大率に見える。9 節）。
* 点の座標は文字の始点（x0,y0）。サンプルの高さ文字は 1 点ごとに 1 文字（TEST5 は `2.800,4.200` が 4 文字）。
* 「ln を進めない」のは 18b3:0597 が文字を詰めるため。
* msg を作って FAIL する分岐の細部：lift 1249 の `?call 2854(msg, 0x676, groupscale)` のあと `msg[0x441]=0`、`jmp 0x2de0f`。msg の中身は 0x676 の書式に group の縮尺を渡したもの（書式に `%` が無いので文言そのまま）。

### 7.4 線 → 辺（0x2c45d〜0x2c998）

```
if (wall) {                                                       // 壁面線の座標系
    wr = line(wall);  frame_set(wr.x0, wr.y0, wr.x1, wr.y1);      // 27ea。引数順 (x0,y0,x1,y1)
    np0 = np;                                                    // [bp-0x6ea]
}
0xdef:26a9(1, 0x14);  puts("建物 %s   （点%4d  辺     ）", "データ整理中", np);   // fmt 0x7284、%s は DS:0x7b4、%4d は np
ne = 0; cnt = 0;
for (li = 1; li <= [0x148](long); li++) {                         // 線全部（[bp-0xa42] の long で数える）
    L = line(li);                                                // 22 バイト [bp-0x41e..]: x0 -0x41e, y0 -0x41a, x1 -0x416, y1 -0x412, type +0x10, pen +0x11, layer +0x12, rest2 +0x14
    if (L.pen(+0x11) >= 0x5a) continue;
    ly = L.layer(+0x12);
    if (L.rest2 & 0x40) continue;                                // 線の rest[2] の bit 6／bit 7 が立ったものは建物の辺に使わない
    if (L.rest2 & 0x80) continue;
    a = b = 0;
    for (k = 1; k <= np; k++) {
        if (layerOf[k] != ly) continue;
        if ((|L.y0 - Y[k]| + |L.x0 - X[k]|) < 0.01) { a = k; if (B[k] > 0) B[k] = 0; }   // 同じレイヤの高さの点に一致（f32 の差の絶対値の和、double で 0.01 と比べる）
        if ((|L.y1 - Y[k]| + |L.x1 - X[k]|) < 0.01) { b = k; if (B[k] > 0) B[k] = 0; }
    }
    if (a == 0 && b == 0) continue;                              // どちらの端にも高さが無い線は建物の線ではない
    if (wall && a > 0 && b > 0) {
        r = clip(L, &a, &b, &np0, layerOf);                      // 6 節
        if (r >= 10) { msg = "壁面線が建物通過"; goto FAIL; }    // 0x72a1
        if (r > 0) continue;
    }
    if (a > 0 && b > 0 && a != b) {
        ne++; E0[ne] = a; E1[ne] = b;
        0xdef:26a9(1, 0x34); puts("%4d", ne);                    // 辺の数をその場で更新（桁 0x34）
        continue;
    }
    // 高さの点に繋がっていない端がある
    cnt++; sprintf(msg, "高さ未設定(端点不一致)の点が(%d)有", cnt);   // 0x72b6。メッセージは最後の cnt で上書きされる
    if (a == 0) { D = (L.x0, L.y0); frame_set(L.x0, L.y0, L.x1, L.y1); }     // [bp-0x986]=x, [bp-0x98e]=y
    else        { D = (L.x1, L.y1); frame_set(L.x1, L.y1, L.x0, L.y0); }
    // 27ea が [0xb30c],[0xb37e] に D を置く（原点の置き場）。向きは他のところで使わない
    found = 0;
    for (t = 1; t <= [0x150]; t++) {                              // 同じレイヤに、D に高さの文字が付いているか
        T = text(t); if (T.size >= 0x5a) continue; if (!(T.rest2 & 0x80)) continue;
        if (T.layer != ly) continue;
        if (|T.y0 - D.y| + |T.x0 - D.x| < 0.01) { found = 1; break; }
    }
    if (found) continue;                                         // あれば次の線へ（高さの文字が数えられなかった端は無視）
    // 無ければ目印を図面に書き込む
    0xdef:13db(3,0,[0xcb2],[0xcb4]); 885:1f49();
    put_text(size=9, "∠未設定");                                // 0x72d9、7.6。位置は [0xb30c],[0xb37e]（＝D）、レイヤは [0xb310]
    last = text([0x150]); last.rest2 |= 0x80; last.layer = ly;  // 作った文字を高さの文字扱いにし、線のレイヤに
    0xdef:13db(3,0,1-[0xcb2],[0xcb4]);
}
if (cnt > 0) goto FAIL;                                          // 0x2c998：高さ未設定の端があれば失敗（msg は「高さ未設定…(%d)有」）
```
* `layerOf[k]!=ly` を先に見る（レイヤが違う点は一致させない）。一致した**全ての** k の `B[k]` を 0 にするが、`a`,`b` は**最後に一致した k**。
* 「∠未設定」の文字は 7.3 の次回で数が読めずに消される。
* FAIL＝`goto 0x2de0f`（7.9）。

### 7.5 壁面で切った点の後始末（0x2c9a2〜0x2ce05）：壁面線があり、`np < np0` のとき

```
[0x11d5] = 0;
if (wall != 0 && np < np0) {                      // clip が新しい点を作った
    lab[1..np0] = 0;  ncomp = 0; found = 0; changed = 0; first = 1;
    // 辺を全部使って連結成分（lab）を付ける
    for (;;) {
        for (e = first; e <= ne; e++) {
            a = E0[e]; b = E1[e];
            if (!found && lab[a] == 0) { found = 1; ncomp++; lab[a] = ncomp; first = e; }
            if ((lab[a] != 0 && lab[b] == 0) || (lab[a] == 0 && lab[b] != 0)) { changed = 1; lab[a] = lab[b] = ncomp; }
        }
        if (changed) { changed = 0; continue; }         // もう一周（first から）
        if (found)   { found = 0; continue; }           // 次の成分
        break;
    }
    for (c = 1; c <= ncomp; c++) {
        lo = 9999.0f; hi = -9999.0f; pa = 0; pb = 0;
        for (;;) {
            best = 9999.0f; pb = 0;
            for (j = np + 1; j <= np0; j++)
                if (lab[j] == c && B[j] == -1) { u = (float) u_frame(X[j], Y[j]); if (u < best) { best = u; pb = j; } }   // 切った点の中で u が最小
            if (pb > 0) {
                if (best < lo) lo = best;                      // lo = min
                if (best > hi) hi = best;                      // hi = max
                B[pb] = 0;
                if (pa > 0 && (X[pa] != X[pb] || Y[pa] != Y[pb])) { ne++; E0[ne] = pa; E1[ne] = pb; }   // 並べて隣どうしを辺で結ぶ（壁面線に沿う辺）
                pa = pb;
                continue;
            }
            // 候補が尽きた
            if (lo < -0.01 && hi > [0xc122] + 0.01) { msg = "中庭等、建物を分割してください"; goto FAIL; }   // 0x72e2 + 0x294。壁面線の両端をまたいでいる
            if (|lo| < 0.1 || |lo - [0xc122]| < 0.1 || |hi| < 0.1 || |hi - [0xc122]| < 0.1) [0x11d5] = 1;   // 建物が壁面線の端に接している
            break;
        }
    }
    np = np0;                                          // 切った点を点の数に含める
}
```
注：`lo<-0.01` の判定は altlift の `compare -0.01 : lo; jae` を向きを直したもの（`lo >= -0.01` なら飛ぶ）。`hi > L+0.01` は `L+0.01 >= hi` で飛ぶ向き。
`pa` は成分が替わるたびに 0 に戻る（外側の for の先頭で `pa=pb=0`）。辺は「**u の昇順に隣り合う切断点どうし**」。

### 7.6 使われない高さの文字を消す（0x2ce05〜0x2cecb）と文字を足す補助

```
cnt = 0;
for (i = np; i >= 1; i--) {                         // 大きい点番号（＝大きい文字番号）から
    if (B[i] > 0) { dirty = 1; 0xdef:13db(…); 885:1f49(); 18b3:0597(B[i]); cnt++; 0xdef:13db(…); }   // 辺に繋がらなかった高さの文字（B＝文字番号）を図面から削除
}
if (cnt > 0) { msg = "不必要な" + "高さﾃﾞｰﾀ" + sprintf("を(%d)削除", cnt); goto FAIL; }   // 0x72f5,0x7242,0x72fe。DS:0xbf48 に作ってから msg へ
if (dirty) goto FAIL;                              // 7.4 の「∠未設定」を書いたとき
```
（`msg` 組み立て：`strcpy(msg, "不必要な"); strcat(msg, "高さﾃﾞｰﾀ"); sprintf(0xbf48, "を(%d)削除", cnt); strcat? → 2cc64 で msg に 0xbf48 を strcat して FAIL`。）
**使われなかった高さの文字は実行のたびに図面から本当に消える**（取り消し無し。サンプルの保存結果に影響する）。

`put_text(size, str)`（`0x2e36f`、UI 側の仕様と重複）：`len=strlen(str)`、0 なら何もしない；文字レコード（`DS:0xc3a0`）に x0=`[0xb30c]`、y0=`[0xb37e]`、`size`、レイヤ＝`[0xb310]` を入れ、x1,y1 を現在の座標系で `2981(0,幅,0)`/`2a18(0,幅,0)` から作り、`18b3:2668(rec)` で文字を足す。ここでは `size=9`、`str="∠未設定"`。

### 7.7 点の複製・北向きの座標・外形（0x2cecb〜0x2da80）

```
if (2*ne + np > 1000 || 2*np > 600) { msg = "データ数が多すぎます"; goto FAIL; }   // 0x764（help の「点≦300 かつ 点+辺×2≦1000」）
np1 = np; ne1 = ne;                                                // [bp-0xa48], [bp-0xa06]
// (A) 点を上下に複製する
for (i = 1; i <= np1; i++) {
    np++;  X[np] = X[i];  Y[np] = Y[i];  layerOf[np] = layerOf[i];
    if (S[i] <= 0) { Z[np] = Z[i]; S[np] = -1; continue; }                   // 単段：同じ高さの写し
    Z[np] = Z2[i]; S[np] = 1;                                               // 二段：下の高さ
    if (wall && B[i] == -2) continue;                                        // 壁面の正側の点の縦の辺は作らない
    ne++; E0[ne] = i; E1[ne] = np;                                          // 縦の辺（上の点→下の複製）
}
// (B) 下側の辺を作る
for (e = 1; e <= ne1; e++) {
    a2 = E0[e] + np1; b2 = E1[e] + np1;
    if (S[a2] < 0) continue;
    if (S[b2] >= 0) { ne++; E0[ne] = a2; E1[ne] = b2; }                      // 両端が二段の点のとき
}
```
`np` は以後 `2*np1`。辺は「上の辺 ne1 本 ＋縦の辺 ＋下の辺」。

```
// (C) 北向きの座標系
frame_set(0.0, 0.0, 100.0, 0.0);                     // 恒等：[0xa7e4]=0, [0xa7dc]=100
for (i = 1; i <= [0x150]; i++) {                    // 北の文字を探す（最初の 1 つで止める）
    T = text(i); if (T.size >= 0x5a) continue; if (!(T.rest2 & 0x40)) continue;
    strcpy_far([0xbf48], T.str);
    ang = sscanf(…, " %lf ")                         // DS:0x7309。[bp-0x6fa]（double）。読めなくても値が残る（未初期化の可能性）
    ang *= π/180;
    c100 = (float)(cos(ang) * 100.0);  s100 = (float)(sin(ang) * 100.0);
    frame_set(0.0, 0.0, c100, s100);                // 北向き（角 ang）が u 軸
    break;
}
umax = umin = vmax = vmin = zmax = 0.0f;           // 外形は原点を含む
for (i = 1; i <= np; i++) {
    u = (float) u_frame(X[i], Y[i]);  v = (float) v_frame(X[i], Y[i]);   // 2981(1,x,y)/2a18(1,x,y)
    X[i] = u;  Y[i] = v;
    if (u > umax) umax = u;  if (u < umin) umin = u;
    if (v > vmax) vmax = v;  if (v < vmin) vmin = v;
    if (Z[i] > zmax) zmax = Z[i];                   // zmax は Z（c39c）だけ
}
```
（変数：umax=`[bp-0xa3e]`、umin=`[bp-0x9f4]`、vmax=`[bp-0xa4c]`、vmin=`[bp-0xa0e]`、zmax=`[bp-0x404]`。）
**北向き座標系の約束**：北の文字は 2 つあり（数値の文字が先、「真北」の文字が後。サンプル：`15.00000` ＋ `真北`）、**最初の 0x40 文字の数値が角度（度）**。角度が 0 のときは u が x 軸。

```
// (D) 壁面線のスロット（壁面があるときだけ）
if (wall) {
    wr = line(wall);
    X[604] = (float) u(wr.x0, wr.y0);  Y[604] = (float) v(wr.x0, wr.y0);
    X[605] = (float) u(wr.x1, wr.y1);  Y[605] = (float) v(wr.x1, wr.y1);
    X[606] = X[605] - X[604];  Y[606] = Y[605] - Y[604];                         // 7016 の f32 減算
    len    = (float) sqrt(Y[606]*Y[606] + X[606]*X[606]);                        // [bp-0xf40]
    X[607] = X[606] / len;  Y[607] = Y[606] / len;                               // 壁面線の単位方向 d（北向き系）。sun() が使う
    X[608] = Y[607]*(-100.0) + X[604];   Y[608] = X[607]*100.0 + Y[604];         // 始点から法線 n=(−d.y, d.x) の向きに 100
    X[609] = (X[607]*len - Y[607]*100.0) + X[604];  Y[609] = (X[607]*100.0 + Y[607]*len) + Y[604];   // 終点側（len*d + 100*n）
    T = [0x11e4] ? 10800 : 14400;                                                // [bp-0xa54]（秒）
    rA = sun(-T, &L1,&s1,&c1);                                                   // [bp-0xf30]
    rB = sun(+T, &L2,&s2,&c2);                                                   // [bp-0xf34]
    // 午前側：-T から 60 秒きざみで「符号 <= 0」が続く最後の時刻を m1（分）に
    if (rA > 0) m1 = 20000;
    else { t = -T; while (t <= T) { if (sun(t) > 0) break; m1 = t / 60; t += 60; }          // 整数除算（0 方向へ切り捨て）
           if (T/60 <= m1) rB = 20000; }                                         // 一日中「<=0」のとき午後側も無し
    // 午後側：+T から 60 秒ずつ戻って「符号 <= 0」が続く最後の時刻を m2（分）に
    if (rB > 0) m2 = 20000;
    else { t = T; while (t >= -T) { if (sun(t) > 0) break; m2 = t / 60; t -= 60; } }
    strcpy([0xbf48], "壁面日影" /*0x11cc*/); [0xbf4c] = 0;       // 先頭 4 バイト「壁面」だけ
    strcat([0xbf48], "自身の" /*0x730f*/); strcat([0xbf48], "日影" /*0x11d0*/);       // → "壁面自身の日影"
    *out = 0;
    if (m1 < 20000) { hh = (m1 + 720) / 60; mm = (m1 + 720) % 60; s0 = 0x11e4 ? 9 : 8;
        strcpy(out, [0xbf48]);  sprintf([0xbf48], "(%2d:%2d)〜(%2d:%2d)", s0, 0, hh, mm);   // DS:0x218
        strcat(out, [0xbf48]); }
    if (m2 < 20000) { hh = (m2 + 720) / 60; mm = (m2 + 720) % 60; e0 = 0x11e4 ? 15 : 16;
        if (*out == 0) strcpy(out, [0xbf48]);
        sprintf([0xbf48], "(%2d:%2d)〜(%2d:%2d)", hh, mm, e0, 0);
        strcat(out, " " /*0x955*/); strcat(out, [0xbf48]); }
    if (*out) strcat(out, "×1" /*0x7316 = 81 7d 31*/);
}
```
注：上の while の中の「`m1 = t/60` を先に」は lift の順（`s<=0 → m1=t/60; t+=60`、`s>0 → 抜ける`）。`T/60 <= m1` は altlift の `compare` を向き直した結果（`jg` 失敗時に 20000）。**この分岐の 2 つ目（`rB`＝`[bp-0xf34]` へ 20000 を入れる）は lift の読みで、実機で壁面を選んだ 1 例（8 節）と照らす必要がある**。
`out` は呼び側が画面に出す（`[bp-0x5a]`）。

```
// (E) 倍率 s を決める
dv = (float)(vmax - vmin);  du = (float)(umax - umin);                // [bp-0x98e], [bp-0x986]（f32 を作ってから使う）
d2 = (double)(dv*dv + du*du);                                          // [bp-0x6fa]
T2 = [0x11e4] ? 10800 : 14400;
sun(T2, &Lend, &sEnd, &cEnd);                                          // 壁面でなくても呼ぶ。Lend は [bp-0x426]
if (d2 < 0.01 || !(Lend >= 0.01)) { msg = "データが不適当"; goto FAIL; }    // 0x396（lift の `jb`/`jbe` を向き直した結果。Lend<0.01 は日没後）
r  = sqrt(d2) * 1.4;                                                   // [bp-0x6fa] ← 7592 の戻りを 710c(1.4) で掛ける
A  = (zmax * Lend + r) * 1.4;                                          // [bp-0x960]
s  = 100.0f;
while ( (s * A) * (s * r) > 2.0e9 ) s = s - 5.0f;                      // 7035 逆減算＝ s - 5.0。f32 に保存
if (s < 5.0f) { msg = "作図範囲が狭すぎます 縮尺変更"; goto FAIL; }       // 0x731a
*pScale = s;                                                           // [bp+0x12]
```
`s*A`・`s*r` は double×double、`2.0e9` は double（`a840`）。**s は 100 から 5 ずつ減らす**ので 5 の倍数。2e9 は 32 ビット整数の範囲に収める用心と読める（ovl34 は整数座標で面積を計算する疑い）。

```
// (F) 建物（連結成分）の番号
B[1..np] = 0;  nblk = 0; found = 0; changed = 0; first = 1;
for (;;) {
    for (e = first; e <= ne; e++) {                                   // 7.5 の連結成分の付け方と同じ手順
        a = E0[e]; b = E1[e];
        if (!found && B[a] == 0) { found = 1; nblk++; B[a] = nblk; first = e; }
        if ((B[a] != 0 && B[b] == 0) || (B[a] == 0 && B[b] != 0)) { changed = 1; B[a] = B[b] = nblk; }
    }
    if (changed) { changed = 0; continue; }
    if (found)   { found = 0; continue; }
    break;
}
if (nblk <= 0) { msg = "データ" + "がありません"; goto FAIL; }          // 0x7338 + 0x276。「データがありません」
// (G) 倍率を掛ける
for (i = 1; i <= np; i++) { X[i] = s * X[i]; Y[i] = s * Y[i]; Z[i] = s * Z[i]; }   // 7046（f32）。Z2 は掛けない
*pNp = np; *pNe = ne; return nblk;
```
（連結成分の付け方の注：`B[a]=B[b]=nblk` は**現在の最新の成分番号**を代入するだけ。同じ辺の両端がすでに別の成分を持っていても上書きしない（片方だけ付いている場合だけ代入）。
この手順は「最初に見つけた未割り当ての点から始めて、そこから届く点にだけ nblk を広げる」ことを繰り返す。）

### 7.8 失敗（`0x2de0f`、`FAIL:`）

```
puts(BEL = "\x07"  /*0x1dc*/);  if ([0xc22] < 2) [0xc22] = 2;
0xdef:26a9(3, 0x14); puts(msg);                                     // 行 3・桁 0x14 にエラー文
0xdef:13db(3, 0, [0xcb2], [0xcb4]);  885:1f49();                    // 描き直し
11f2:27eb(0);
0xdef:26a9(3, 0x14); puts(msg);                                     // もう一度
return -1;
```
`msg` は `[bp-0x45c]`（7.3〜7.7 で組む）。`7.4` の「高さ未設定…」は最後の `cnt` が入っている。

## 8. メニュー側から見た呼び出し（ovl34 への引数の積み方）

### 8.1 `0x2bf7f` の呼び出し（0x300f0・0x304a5・0x306a4・0x30b4f・…）

push 順：`&msg[bp-0x5a]`、`wall[bp-2]`、`wall[bp-4]`、`&scale[bp-0x5e]`、`double [0x11e0]`、`&np[bp-0xf2]`、`&ne[bp-0xe4]`。`add sp,0x14`。戻りを `[bp-6]`（nblk）に。
`wall` は main の `[bp-2]:[bp-4]`（long、壁面日影なし＝0）。失敗（戻り≦0）なら ovl34 は呼ばない。

### 8.2 overlay 34 の 3 つの入口（`int 3f`、引数は呼び側が積んで `add sp` で捨てる）

push 順（後ろほど [bp+6] に近い）。double は float を倍精度にして積んだもの。

| 入口 | 呼び側 | push 順 | 合計 |
|---|---|---|---|
| `3ee7`（②日影図） | 0x30391, 0x3056a | `wall[bp-2]`, `wall[bp-4]`, `[0x11e4]`, double `scale[bp-0x5e]`, `nblk[bp-6]`, double `[0x11dc]`（日赤緯）, double `[0x11d8]`（緯度）, `np[bp-0xf2]`, `ne[bp-0xe4]`, double `interval[bp-0xd4]` | 0x2c（22 語） |
| `4451`（③等時間図） | 0x30727 | `&msg[bp-0x5a]`, `wall[bp-2]`, `wall[bp-4]`, （1 語：lift 欠落、`[0x11e4]` と推定）, double `scale`, `nblk`, double `[0x11dc]`, double `[0x11d8]`, `np`, `ne`, `mode[bp-0xe2]` | 0x28（20 語） |
| `5df6`（④指定点） | 0x30bd6 | `&msg[bp-0x5a]`, `wall[bp-2]`, `wall[bp-4]`, `[0x11e4]`, double `scale`, `nblk`, double `[0x11dc]`, double `[0x11d8]`, `np`, `ne`, `&ys[bp-0x2c6]`, `&xs[bp-0x1ea]`, `count[bp-0x2c8]`, `[0x11e]`（指定点の通し番号） | 0x2e（23 語） |

`3ee7` の最後の double（interval）は：30 分毎＝`[0xa8d8]`＝**−1.0**、1 時間毎＝`[0xa810]`＝**1.0**、指定時間＝入力値（`[bp-0xd4]`、既定 `[0xa8d4]`＝12.0、範囲 9〜15／8〜16）。
**ovl34 側で実際に何番目が何かは calc 担当が確かめること**（この表の push 順は disasm から直接読んだが、callee の `[bp+n]` への割り当ては未確認）。呼んだあと `[0x11c]=1`、`[0xbc0]=1`、`[0xc08]=0`。

### 8.3 設定フラグ

`byte [0x11d6]`：メニュー入口（`0x2f870`）で 0 にし、`byte [0x123] >= 0x14` のとき `885:5307()` の bit1（値 2）・bit2（値 4）をそれぞれ立てる（`-M` 系のオプション）。`>=2` は 5 節・6 節の「貫通検査」を飛ばす。
`byte [0x11d5]`：7.5 が建物が壁面線の端に接していれば 1（そうでなければ 0）。`byte [0x11d7]`：ovl34 を呼ぶ前に 0 に。`word [0x11e4]`：測定時間（0＝8〜16 時、≠0＝9〜15 時）。

## 9. 測定が要るもの（実機で確かめる）

1. **`[0xb4a2]` と `[0xb26]`**：z の式 `(…−H0)/([0xb26]*[0xb4a2])*1000` の意味。TEST1（高さ文字 `11.000`）で「日影図」を実行して作図した影の長さと突き合わせるか、`DOSEMU_BP` で gather の `X[1]`,`Z[1]` を採る（`[0xc392]` 先頭の 8 バイト）。縮尺 1/100 と 1/200 の図面（TEST1＝100、TEST3＝200）で z が倍になるか。表示倍率（Zoom）を変えて z が変わらないか。
2. **丸め**：`d2`・`A`・`s` の double/float の分かれ、`sun()` の `v`（f32 の積の差）。`s` は最終出力 `*[bp+0x12]` を DOSEMU_BP（`0x2dc40` の `mov [bx],ax`）で採り、移植と合わせる。
3. **壁面日影の時間帯の文字列**：壁面自身の日影が出る図面（TEST7 が壁面日影用）で 7.7(D) の `out` を採る。`m1`/`m2` の取り方（特に `rB=20000` を入れる条件）を確かめる。
4. **サンプルの内訳**（`tmp/scan_h.py` の結果）：高さの文字（`rest[2]&0x80`）＝SAMPLE3 に 6、TEST1 に 14、TEST2 に 10、TEST3 に 28、TEST4 に 12、TEST5 に 34（`2.800,4.200` 形式）、TEST7 に 16。北の文字（`&0x40`）は 2 つずつ（数値の文字が先、`真北` が後）：SAMPLE3 `15.00000`、TEST1 `8.53077`、TEST2 `-19.44003`、TEST3 `-19.00599`、TEST4 `40.15600`、TEST5 `-10.00000`、TEST7 `24.47904`。
   線の `rest[2]&0xC0` が立つ線は SAMPLE3 に 851 本、TEST7 に 4005 本（他は 0）。7.4 はこの線を辺に使わない。SAMPLE3・TEST7 でこの除外が効いているか。
5. **0xdef:13db(3,0,[0xcb2],[0xcb4])**：描画ページの切替か。gather の途中（高さの文字を消すとき・「∠未設定」を足すとき）の画面の変わり方。
6. **`18b3:0597`**：文字の削除（詰める）。削除のあとの文字番号の動き（7.3 は ln を進めず、7.6 は大きい番号から消す）。
7. **失敗の言葉の位置**：行 3・桁 0x14 に BEL つきで出る。`0xdef:26a9` の引数が「行・桁」の順であること（spec-opt4-cde と同じ書き方）。
8. **壁面線の向きの入れ替え**（4 節）：`swap_endpoints` で図面の線が本当に書き換わるか（保存して線 22 バイトの x0↔x1、y0↔y1 を見る）。両側に建物があるときのクリックの側と書き換えの向き（`v2<0` で入れ替え）。
9. **高さの文字のレイヤ**：`zl[ly]`＝グループの `#lv` ＋ レイヤの `#lv` の足し算。メモ欄に `#lv` を書いた図面で z が変わるか。

## 10. DS 変数の表（この仕様で決まったもの）

| 番地 | 型 | 名前 | 意味 |
|---|---|---|---|
| 0x148 | long | n_lines | 線の数（`0:013f` の添字の上限） |
| 0x14c | long | n_arcs | 円弧の数（`0:0271`） |
| 0x150 | int | n_texts | 文字の数（`0:0398`） |
| 0x152 | int | n_points | 点の数（`0:03ef`） |
| 0x158 | int | quit | ≠0 なら関数ごと中断 |
| 0x11c | int | | 描画後に 1／gather 中は 10（意味未詳） |
| 0x123 | byte | opt_level | ≥0x14 のとき設定フラグを読む |
| 0x11d5 | byte | wall_touch | 7.5：建物が壁面線の端に接する |
| 0x11d6 | byte | chk_off | bit1/bit2＝貫通検査を飛ばす（8.3） |
| 0x11d7 | byte | | ovl34 呼び出し前に 0 |
| 0x11d8 | f32 | latitude | 緯度°（初期 36.0） |
| 0x11dc | f32 | declination | 日赤緯°（初期 −23.45＝冬至） |
| 0x11e0 | f32 | surface_h | 測定面の高さ m（初期 0.0） |
| 0x11e4 | int | time_mode | 0＝8〜16 時、≠0＝9〜15 時 |
| 0x11e | int | | 指定点の通し番号（5df6 に渡す） |
| 0xb26 | f32 | scale | 書込グループの縮尺（分母） |
| 0xb2a+4g | f32[16] | group_scale | グループ別の縮尺 |
| 0xb310 | word | wlayer | 書込レイヤ（group<<4 \| layer） |
| 0xb30c / 0xb37e | f32 | org_x / org_y | 直近の座標系の原点（27ea が置く） |
| 0xb76a / 0xb784 | f32 | ux / uy | 直近の座標系の単位ベクトル（27ea が置く） |
| 0xc122 | f32 | base_len | 座標系の基準線の長さ（27ea が置く）＝壁面線の長さ |
| 0xb4a2 | f32 | zoom? | **意味未確定**（9 節 1） |
| 0xbc0, 0xbc2, 0xc08 | | | 描画の更新フラグ（gather 前後で 1 / 1 / 0） |
| 0xc20, 0xc2c | word | | 入力待ちの設定（`2cb4` の [BS]/…。UI 側） |
| 0xc22 | word | msg_level | メッセージの重さ（0 無し、1/2 警告） |
| 0xc62 | word | | ≠0 のとき 885:2e9a を呼ぶ |
| 0xcb2, 0xcb4 | word | page | 描画ページ（13db の引数） |
| 0xbf48 | char[] | scratch | 文字列の作業場（strcpy_far の行き先） |
| 0xbe90:0xbe92 | far | heap | 2 節の確保の戻り |
| 0xc392 ほか | far | | 2 節の配列 |
| 0x73e6 / 0x73ea | f32 | last_h1 / last_h2 | 高さ入力の「前回値」（初期 9.0e9＝無し）。UI 側 |
| 0x206 | char[] | "%f" | |
| 0x7267 | char[] | " %lf,%lf " | 高さの文字の書式 |
| 0x7309 | char[] | " %lf " | 北の文字の書式 |
| 0x218 | char[] | "(%2d:%2d)〜(%2d:%2d)" | 時間帯の書式 |

メッセージの言葉（SJIS はそのまま DS にある）：`壁面日影`(11cc)、`日影`(11d0)、`作図する方向 `(7251)、`マウス指示 `(302)、`建物`(725f)、`データが不適当`(396)、`範囲`(804)、`外`(7264)、`データ整理中`(7b4)、
`建物 %s   （点%4d  辺     ）`(7284)、`%4d`(72b2)、`高さ未設定(端点不一致)の点が(%d)有`(72b6)、`∠未設定`(72d9)、`壁面線が建物通過`(72a1)、`中庭等、建物を分割`(72e2)＋`してください`(294)、
`不必要な`(72f5)、`高さﾃﾞｰﾀ`(7242)、`を(%d)削除`(72fe)、`データ数が多すぎます`(764)、`作図範囲が狭すぎます 縮尺変更`(731a)、`測定面以下のﾃﾞｰﾀ有`(7271)、
`縮尺の違うデータがあります｡強行しますか`(676)、`データ`(7338)＋`がありません`(276)、`自身の`(730f)、`×1`(7316)。
