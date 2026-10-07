# 引き継ぎ（RESUME）

ＤＯＳ／Ｖ用の 2 次元 CAD **ＪＷ＿ＣＡＤ 2.22H**（1996）を、実行ファイルを逆コンパイルして C に書き直し、
WASM で動かすリポジトリです。概要は [README.md](README.md)。**この会話を知らない Claude は、ここから読んでください。**
詳しい記録は `notes/` に分けてあり、末尾の「資料」に目次があります。

対になる [dosv_emu_cpp](https://github.com/yomei-o/dosv_emu_cpp) が DOS/V エミュレータで**本物の `JW_CADV.EXE` を動かす**方で、
最終的な検証はそちらの画面・保存したファイルとこちらを突き合わせて行います。両方が同じフォント（`font/*.FNT`）と
パレット（`orig/JW_PAL.DAT`）を使います。並べて置いてください（`どこか/jwcad_dos_wasm`、`どこか/dosv_emu_cpp`）。

## 0. 2026-10-07 の到達点と、これからの進め方（まずここ）

**利用者の要望（4 週間毎日、最終目標）**：ふつうの作図が**全部のやり方で**本物と同じに動くこと（ESC で戻る・描いたものを消す・移動する、
四角形ならどの方法でも）。見た目の画素の完全一致ではなく、機能が本物どおりであること。優先順位は合意済み：
**線（＋ ／）・四角形（□）・円円弧（○ （）・文字・寸法・消去と線消・移動・複写・面取** を先に確実に（見込み 8〜12 時間）。
ｵﾌﾟｼｮﾝは一番最後、HELP・プリンタ・変形⑤外部の実行は作らない。所要時間の目安は nokori.md の先頭の表。

### なぜ何度直してもずれが出たか（原因と、今回見つけた決め手）
入力まわり（[ESC]・[BS]・[Enter]・行 2 の札）を、最初に**画面を測って**書いたまま、decomp から段全体を起こしていなかった。
個別の規則を 1 つずつ裏取りしても、測っていない段が毎回新しくずれた。**決め手は、本物の入力待ちが 1 つの共通関数で、
段ごとに「ESC を受けるか」「BS を受けるか」を引数で決めていること**：

| 入力 | 本物（root `1bb4:2cb4`、decomp/root/all.c 41105 行付近。Ghidra 名 `FUN_2bb4_2cb4`） |
|---|---|
| ESC | **第 1 引数が 0 または 0x2710 以外のときだけ** -1 を返す。それ以外は 2cb4 の中で捨てて待ち続ける（札が出るのもこの段だけ） |
| BS | グローバル `[0xc2c]` が非 0 のときだけ 0x14（画面に `[BS]前項` が出る段）。それ以外は捨てる |
| Enter | 常に 0xd（矢の位置の左押しと同じ扱いになる段がある） |
| 数字 | 行の `|` 区切りの項目があるときだけ項目番号。無い数字は捨てられ、**行 2 の札は 2a18 が消したまま再描画されない** |
| 図面の押し | 戻り値 0、ボタン（左 1／右 2）は出力引数 |
| 行 2 の札 | root `13bf:2a18` が、何かキー・ボタンが来るたびに `[0xc22]≠0` なら行 2 を黒で消す。呼び元がループ頭で描き直すのは 2cb4 が戻ったときだけ |
| 数値欄 | root `0ad:16d4`（numin、decomp/lift/root_0ad_16d4_numin.txt）。欄に打った文字が 1 つ以上あるとき作図範囲の押しは Enter と同じ道。出口で数え箱を標準（線数|円・文数）に描き直す |

つまり **「ESC/BS が効く段」は画面に札（`[ESC]`・`[BS]前項`）が出る段と一致し、効かない段ではキーは何も起こさずに捨てられる**。
移植側にあった「測定に合わせた ESC/BS の分岐」は、この規則から見ると多くが不正確だった（BS を ESC の代用にする、など）。

### 進め方（これを命令ごとに繰り返す）
1. **段ごとの完全な遷移表を decomp から起こす**（サブエージェントに並列で読ませる。命令ごとに 1 人、10〜40 分）。表の列：
   段、画面の札、ESC／BS／Enter／数字／左押し／右押し／空き地の押し の結果と次の段、取り消し（undo の枠）、数値欄の検査と既定値。
   **番地（関数・dis アドレス）を必ず付ける**。実機（../dosv_emu_cpp、`tools/probe.sh`・`tools/emu.sh`、`NOCACHE=1`）で確かめられるものは確かめ、
   decomp と食い違えば**実機を優先**（decomp の読み違いがある。例：点の [Enter] の札）。
2. 移植（src/cmd.c の命令まわり）と突き合わせて「一致／不一致（本物はこう）」を付け、**表のとおりに直す**。
   一致した段はコメントを「decomp 照合済み」にして残す（修正なしで済んだ段も成果）。
3. 原本との画面照合で 1 手ずつ確かめる（下の道具）。差が出たら、まず表（decomp）の読みを疑い、実機で確かめる。
4. commit → pull --rebase → push（小さく分けて）。

サブエージェントに渡す文面の型：「命令 X の入力まわりの完全な状態遷移表を decomp から起こす。ファイルは編集しない。読む場所は
notes/decomp-audit.md の X の節・notes/tools.md・decomp/ovlNN/all.c・tmp/dis（`python tools/disasm.py --ovl N 0 0x10000` で作る）・
`tools/altlift.py`・`tools/strref.py`。共通の仕組みは上の表。成果物は段ごとの表＋番地＋移植との一致/不一致」。
（10-07 に出した報告の要点は nokori.md の「decomp 照合の結果」にある。）

### 10-07 に decomp で照合・修正した命令（番地は各コメント・notes/decomp-audit.md 追記を参照）
円線接（BS は `[0xc2c]` が立つ段だけ、ESC の戻り）、点（札・BS・全仮点削除）、分割、曲線（連線・連続弧・BS）、面取（半径欄・同じ線・平行）、
線変更（ESC で変更前に戻す）、線消、複線、＜（同じ線＝`同データです`）、┣、□・○・円弧・＋／（欄の検査・押し・ESC・零長）、
複写・移動（③〜⑥の ESC、再配置の undo、`mv_none`）、文編集（②方向は 4 状態、BS）、図形（④の枠・札・ドライブ行）、測定（⑨式の ESC）。
**まだ表を起こしていない（次）**：文字、寸法、消去・線消の全段、面取の全段と L面・楕円面の幾何、複写・移動の ⑦ と置く計算。

### 検査の道具（10-07 に増えたもの）
* `tools/usable.mjs`：ESC で戻る・消す・移動／複写の通し（`node tools/usable.mjs`）。`tools/e2e.mjs`：描く→保存→開き直す。
* `tools/drawfuzz.py N SEED OUT.txt 鍵…`：項目・数値・左右の押しを混ぜて**最後まで描ききる**手順を乱数で作る（優先 8 つ分は
  `tools/cases/drawfuzz_pri.txt`）。`tools/escfuzz.mjs`：ESC で抜けられない道を探す。`tools/cases/probe_item_walk*.txt`・`probe_option_walk.txt`：
  コマンド×項目×小項目の総当たり。
* 本物との照合は `python tools/rbatch.py <一覧>`（ビルド機で本物を走らせて tmp/origcache を埋める。1 件 5〜10 秒、18 並列。
  **同じ JWRUN（既定 C:/jwrun）で 2 本同時に走らせない**——別の `JWRUN=C:/jwrun3 PAR=8` を使うが、それでも重なると止まる。
  途中で切れると**結果が全部失われる**（最後にまとめて取り込むため）：一覧は 300〜500 件ずつに分ける）→ `python tools/stepfast.py <一覧> [名前の部分]`。
  **tmp は 10-07 夜に全部消した**（容量 3.5GB）。origcache は作り直し中（`python tools/rbatch.py tools/cases/func_all.txt`、約 800 件・1〜1.5 時間）。
  tmp の逆アセンブルは `python tools/disasm.py --ovl N 0 0x10000` で作り直す。キャッシュ用ディレクトリには
  `compact /c /s:tmp\origcache /i /q`（NTFS 圧縮）を掛けること。
* 作業用の小道具（tmp の mont.py・shot.py・st.mjs など）は tmp と一緒に消えた。必要なら `tools/stepcore.mjs` の `runCase` で数行書く。

## 1. 方針と作業手順（必ず守る）

**挙動は decomp（逆コンパイル・逆アセンブル）を読んで写す。画面の差に合わせた「それらしい規則」を作らない。**
（利用者が何度も指摘したこと。UI の層は最初から画面を測って合わせる作り方で、測っていない組み合わせが本物とずれる。）

1. 命令ごとに decomp から本体を読み、**仕様（状態変数・押し／[ESC]／[BS]／数字キーの遷移）**を起こす。
2. 移植と突き合わせ、**一致／不一致／未確認**の表にする。
3. 不一致は decomp どおりに直す。裏が取れず測定だけで入れた規則は、コメントと記録に「**測定のみ・decomp 未確認**」と書く。
4. **実装した後は、テストより先に decomp と一致しているかを確かめる**。確認した関数・番地を残す。
5. そのあとテスト（下）。通っても decomp と違えば未完。回帰は週一でよい。
6. **サブエージェントに読ませると速い**（命令ごとに並列で 10〜20 分）。ただし**報告には推定が混ざる。番地を確かめてから使う。**
7. 完成の基準は画面ではなく**機能**（入力欄・切替・数値入力が全部動くまで「終わった」と言わない）。
8. 小さく分けたコマンドで進める（検査・commit・push を一つにまとめると止まって見える）。動作確認できた成果は commit→pull→push まで進める。

利用者の約束：入出力 ③プリンタ と、ｵﾌﾟｼｮﾝ ⑦外部処理・変形 ⑤外部 の `*.bat` 実行、HELP は作らない。

## 2. 検査の道具

本物はビルド機（192.168.6.14、`C:/jwrun`）でまとめて走らせ、結果を手元にキャッシュします。

```sh
export NODE=$(ls /c/prog/emsdk/emsdk/node/*/bin/node.exe | head -1)   # 必ず先に（空だと stepcheck が落ちる）
python tools/rbatch.py tools/cases/func_all.txt        # 本物をビルド機で走らせて tmp/funccache・origcache を埋める
MASK=1 python tools/funcfast.py tools/cases/func_all.txt [名前]   # 保存した記録を本物と比べる（784 件 約 2 分半）
STEPOUT=tmp/stepone python tools/stepcheck.py 一覧.txt          # 段ごとの画面を本物と比べ、最初に違った段を出す（ALL=1 で各段の画素数）
sh tools/snap.sh   # 長い比較は移植の写し（STEPSHOTS=tmp/snap/tools/stepshots.mjs STEPOUT=tmp/stepall）で。作り直しとぶつからない
```

* 一覧は `名前|図面|手順|手順…`。`tools/cases/func_all.txt`（命令 1〜28 × 升 1〜9 × 3 通り）が基本。
  `grep "^offset_" tools/cases/func_all.txt > tmp/g_offset.txt` のように抜き出して使う。プローブは `tools/cases/probe_*.txt`。
* 画面の差を見る：`STEPOUT=.. python tmp/shot.py 一覧 件名 段`（左が本物・右が移植）、`python tmp/oshot.py 一覧 件名`（本物の全段の上の行）。
  `tmp/` は git の外なので、無ければ作る（`stepcheck.py`・`rbatch.py` の `cases()` を使う小さな script）。
* 1 件の記録の差：`sh tmp/onea.sh 一覧 件名`。移植の状態：`node tools/cmdstate.mjs 図面 "手順" …`（`jw_cmd_state`）。
* **本物の画面の行を機械的に起こす**：`python tools/steps_table.py 命令 手順…`（本物を実際に歩かせ、各段で書いた行を出す）。
  `tools/emu.sh` で本物を直接歩かせる。`DOSEMU_BP=seg:off` 等でレジスタ・スタックを読める（dosv_emu_cpp 側にある）。
* **decomp を読む**：`python tools/strref.py "案内文"`（文字列から該当コード）、`python tools/disasm.py --ovl N 開始 長さ`、
  `python tools/altlift.py --ovl N 開始 長さ`（x87 込みの記号表示。Ghidra C は浮動小数点で崩れるので dis とこれを読む）、
  `python tools/func.py 32b2:6cc6`、`python tools/resolve4375.py`（`int 3Fh` 越しのオーバーレイ呼び出しの解決）。
  ovl の対応：02 伸縮・＜・線切断／04 面取・（／05 範囲取り（共有 OVL5:2a3d）／07 複線／09 ハッチ／13 曲線・点／15 文字・文編集／
  17 ２線／20 中心線・分割・点／22 正多角形・２線／23 ＋／□／25 接円・２線・文編集⑤／26 線変更／27 寸法／29 測定／31 図形。
* 注意：パッチは Write ツールで作った script で当てる（heredoc はバックスラッシュを壊す）。書き込み用に開く前に内容を用意する。
  `src/cmd.c`・`ui.c` は CRLF。cp932 の文字列は `\xNN` のまま C に書く（Python の文字列で書くと生バイトになり UTF-8 不正になる）。
  `index.html` はビルドのたびに変わる（`jwcad.wasm` と一緒に commit）。

- **全体の画面比較は `python tools/stepfast.py tools/cases/func_all.txt`（約 75 秒、784 件）。**
  並列＋node 内比較＋最初の差で止める。出力は stepcheck.py と同じ形で、結果も一致を確認済み。
  差のあった段の画面は STEPOUT（既定 tmp/stepcheck）に残る。ALL=1 で全段の画素数。
  stepcheck.py/stepshots.mjs は 1 件を全段書き出したいとき用。段の解釈は tools/stepcore.mjs 共通。

- **本物を走らせる rbatch は同じ場所を取り合う**：`JWRUN=C:/jwrun3 python tools/rbatch.py 一覧`（ビルド機に複製した別の場所。
  `C:\jwrun` に孤児の python が残って `jobs` が掴まれたままのとき）。複製は `robocopy C:\jwrun2 C:\jwrun3 /e /xd jobs`。
  並行して調べるときは必ず別の `JWRUN` を使う。
- 項目の行の「最初の押し」型・ESC の戻り・Enter など、新しく測った probe は `tools/cases/probe_*.txt`
  （probe_polygon1・probe_pdist*・probe_erasecell・probe_firstclick・probe_divide* ・probe_measure*）。

## 3. いまの状態（2026-10-07 朝）

10-07 未明〜朝にかけて、nokori.md A 節の方針（コマンド×項目×ESC/BS/数字入力の総当たり）で
多角形②・複写・移動・消去・ハッチ・線変更・寸法⑧値変・変形①③を監査、見つけたバグはその場で
decomp／実機突き合わせで直した（escaudit1〜7、`git log --oneline` に commit 多数）。記録の差
8 件のうち 5 件も同時に片付いた。詳細・残りの監査対象・新しく見つかった罠は **nokori.md と
notes/traps.md** を見ること——この節（2026-10-06 時点）より新しい。

## 3b. いまの状態（2026-10-06、上のセッションより前）

* 記録 `func_all`：ほぼ全件一致（残り：plus_s0_c3_v ＋③角度、linedel_s1_c1、curve ⑥ ×3、curve ⑦ ×2）。`func_draw`：67/68。
* 画面 `stepfast`（796 件）：**755 一致**（10-06 朝 490 → 689 → 夜 755）。全件一致の群：ハッチ・複線・文編集・slash・多角形・分割・移動・複写・**測定・線変更・円弧・点・箱・面取・２線**。寸法は c2 の 7 画素、曲線は c5〜c7、図形 ④〜⑨、変形 c4・c5 などが残り（47 件）。
  ほぼ一致：円線接 27/28・点 26/28・消去 26/28・２線 26/28・変形 24/28・箱 25/28・plus 27/28。
  差が残る群（件数）：測定 17、図形 16、曲線 16、寸法 15、線変更 14、円 6、面取 5、変形 4。
  **agent が decomp を読んで仕様まで書いたが未実装**：測定 ②角度・③面積・④座標・⑤表計算（報告は tmp/ に無い——本文の要点は
  notes/agent-specs-2026-10-06.md に写してある）、分割 ②③の弧の先（円分割・楕円分割の式）。
  曲線 ③スプライン・④ベジェは「押すたびに前の仮の線を消して最後の一本だけ残す」（curve_s0_c3 の 11 手目）ので ovl13 の読みが要る。
  図形 ④〜⑨は全画面の盤で未移植。
* **「最初の押し」型の規則**（decomp 項目行の読み 1bb4:2cb4 は押したボタンも返す）：項目の行が出ているときの図面の押しは
  点を使わず **左 = ①、右 = ②**（変形・多角形・円線接②・寸法。実装済み）。[Enter] は多くの範囲取りで ①（前範囲／範囲確定）と同じ、
  点を待つ行では (400,200) の押し。点の読み（２線・点②・多角形①）は押した位置を置くだけで、矢が離れたときに読む。
* 10-05〜06 に **decomp と照合して直したもの**（番地つきの表は [notes/decomp-audit.md](notes/decomp-audit.md) の「照合済み」）：
  ＋／□ の [ESC]（始点は 1 変数、取り消しは直近の確定 1 回分）・④⑤で始点を保つ／ハッチの足せる線（最後の線と平行でない）・閉じる条件（3 本以上）・
  残数 100-n／複線の間隔履歴・`● 前線と連続(R)`／入力欄の長さ（欄の開始桁 + 文字数 ≤ 78、numin 0x27a3）／文編集の書き換え・②移動・③複写・⑥・⑤の一部／
  線変更のレイヤ（②【有】だけ）と ①指定範囲内変更の一部／測定 ①距離・⑥単位・⑦小数以下／図形の右押し・③表示・⑥レイヤ／
  点・円線接・面取・中心線・分割の入口と小項目の文字／多角形 ②正多角形の頂点/辺中。
* **測定のみで decomp 未確認の規則**（見つけたら裏を取る）：ハッチの 残数を消す条件（数字キー・[Enter]）、測定の数え箱の保留（meas_hold）、
  多角形の一部。一覧は notes/decomp-audit.md の「今日の測定のみの規則」。

## 4. 次にやること（優先順）

**まず「decomp との一致の洗い出し」を、まだ一つも照合していない命令に広げる。** 各項目の読みと番地は
[notes/decomp-audit.md](notes/decomp-audit.md)（「未照合・不一致」と 10-b〜10-h）にあります。

1. **未実装の機能**（全作図コマンドを動かす観点で）
   * ハッチ ①自動選択(左回)：ovl9 02b3fe〜02ba2e、次の線は 02cb23＝3ab8:1fa3（最後の線の左側で最小 u の交差）。実機で '1' が 1fa3 に合流することは確認済み。
   * 線変更 ①指定範囲内変更の絞り込み ①指定線種・②指定線色、③属性設定（ovl26 0x30681）、【有】で縮尺が違うときのエラー。
   * 文編集 ⑥の範囲 ①実行、⑤位置整理の並べ順（平均の向き v）・基点の足し込み・③文字数指定。②移動・③複写の軸ロックと角度指定。
   * 図形 ④グループ変・⑤削除・⑦⑧（`4375` セグメントは `tools/resolve4375.py` で OVL8 の 2ab8:4c2c と判明）。
   * ２線 の同位置マウス（LL/RR）と包絡処理（ovl17、`python tools/altlift.py --ovl 17 0x2bb71 0x1560` で式にする）。
   * 測定 ②角度〜⑤表計算・⑧文集計式。複線の点押しの丸め（`[0x4a]` 条件）。
   * 多角形の寸法指定 3 方式・帯クリックのトグル・確定直後の ESC。曲線（サイン・２次・ｽﾌﾟﾗｲﾝ・ﾍﾞｼﾞｪ）の細部。
2. **画面で一番ずれている群**（集計は stepall3.log）：double・zukei・henkei・polygon・curve・tangent・dim・erase・box・move・copy。
   群ごとに「最初に違う段」を見て、**decomp を読んでから**直す。
3. **UI の遷移を一つも照合していない命令**：複写・移動・変形・消去・円線接・寸法・点・分割・中心線・面取・曲線 ほか。
   ESC は共有スタックではなく**命令ごとに別実装**（ovl23 の 0c0d だけ読了）。まず各命令の [ESC]/[BS] の戻り先を decomp から起こす。

## 5. 資料

| ファイル | 中身 |
|---|---|
| [notes/decomp-audit.md](notes/decomp-audit.md) | **decomp との照合の記録の本体**（照合済みの表、未照合、命令ごとの読み 10-b〜10-h） |
| [notes/history-2026-10.md](notes/history-2026-10.md) | 10 月の作業の履歴（直したもの・測った値） |
| [notes/history-2026-09.md](notes/history-2026-09.md) | 9 月の作業の履歴と当時の引き継ぎ・方針・枝の表（古い記述を含む） |
| [notes/traps.md](notes/traps.md) | 刺された罠（同じ失敗を繰り返さないため） |
| [notes/reference-addresses.md](notes/reference-addresses.md) | 押さえた番地、画面（BIOS・ビデオモード・パレット・文字・線・円弧）、本物の中の表、`.JWC` の形式、ビルドマシン |
| [notes/validation.md](notes/validation.md) | 本物との突き合わせの結果（0 画素差の表、メニューの枝、PDF） |
| [notes/analysis.md](notes/analysis.md)・[tools.md](notes/tools.md)・[jwc-format.md](notes/jwc-format.md) | 実行ファイルの解析・解析の道具・`.JWC` の形 |
| `notes/draw.md` `edit.md` `dim.md` `ui.md` | 作図・編集・寸法・画面の解析メモ（`notes/INDEX.md` に目次） |

> **残りの作業は `nokori.md` に書く**（ここは経緯と手順）。
