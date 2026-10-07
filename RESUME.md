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
円線接（BS は `[0xc2c]` が立つ段だけ、ESC の戻り）、点（札・BS・全仮点削除）、分割、曲線（連線・連続弧・BS）、面取（半径欄・同じ線・平行、
L面・楕円面の幾何、形ごとの記憶、検査範囲、`データが不適当`。2026-10-07 深夜追加、notes/chamfer-decomp.md）、
線変更（ESC で変更前に戻す）、線消、複線、＜（同じ線＝`同データです`）、┣、□・○・円弧・＋／（欄の検査・押し・ESC・零長）、
複写・移動（③〜⑥の ESC、再配置の undo、`mv_none`）、文編集（②方向は 4 状態、BS）、図形（④の枠・札・ドライブ行）、測定（⑨式の ESC）、
寸法 ⑤一括 段24（`①一括処理実行` 直後の [ESC]・[BS]前項、`notes/decomp-audit.md` 10-h）。
文字（**10-07 夜・部分**：帯ディスパッチャ `FUN_3ab8_6467`＝ovl15 3ab8:6467 を読み、項目 0/1（角度 0.0）・2（角度 ±90°、DS:0x4344 で分岐）・
3（オーバーレイ呼び出しの角度入力）・4（別セグメント `FUN_4375_88aa`、未解析）・6（`DS:0x4344` トグル）の番地と値を確認。
decomp は角度（mm のずれではない）を扱っており、「①基点変／②行連続／③列連続＝位置を mm ずらす」という以前の仮説は誤りだったので撤回——
行連続・列連続の mm 間隔（5.0→8.721 下・20.0→34.882 右）は実機測定のまま、この関数とは別の入口にあると見られる。
DS:0x4344 と `c->text_tate` が同じ意味かは未確認。別に見つけた文字基準点（hb/vb、左中右／下中上＋ずれ位置、`FUN_3ab8_0d67`＝3ab8:0d67、
文編集 ②移動・③複写とも共有）も存在だけ確認・未実装のまま。詳細は src/cmd.c の該当コメント）。
**10-07 深夜（2 回目）**：線消 部分消去の [ESC] を実機で裏取りし、破片（切った残り）を消し忘れていたバグを修正
（間に右押しの全消を挟んだときは消さない、`linedel_s1_c1` と矛盾しないことを確認）。線消 右押しの全消を [ESC] で戻すとき
rest を 0 にしていたのも直した（実機は rest を元のまま戻す）。消去（command==25）は `erase_again` 回りの既存の修正・
`outside`/`in_reach_layer` の記録削除ループを再チェックしたのみ（不一致なし、decomp のレコード削除本体はまだ未読——
notes/decomp-audit.md 10-c/10-d・nokori.md 参照）。
**まだ表を起こしていない（次）**：寸法の残り（⑤一括の段21〜23の ESC・`①連続入力`/`②終了` の着地、④円角の digit キー、⑥点・⑦矢印の decomp 番地）、
消去の在／外判定とレコード削除本体（ovl27 3ab8:740f 以降）、面取の一括処理（Ｌ面・楕円面には元々出ない）と傾きモード `[0xcb6]`、
複写・移動の ⑦ と置く計算、文字の④設定・①基点変・行連続／列連続・⑤文書 の入口（上で部分的に読んだだけ）。
**10-07 深夜（3 回目、escaudit9）**：複写・移動 ③数値倍率・④ﾏｳｽ倍率・⑤反転・⑥回転 の段を `tools/cmdstate.mjs`・192.168.11.37 の実機
（`tools/steps_table.py`・`tools/functest.sh`）で監査、3 件直した。(1) ESC で段を一つ戻すとき、画面に出ない内部の進捗変数
（`c->mirror`/`rotate`/`scaling`/`mscale`）を一緒に戻していなかったバグ（`notes/traps.md` 新しい罠）。(2) ③数値倍率の倍率欄に
入力検査を追加（`0` または絶対値 10000 超は `データが不適当`、境目は実機で 1 刻みずつ確認：|v|<=10000 かつ v≠0）。(3)
`mirror_range`/`turn_range`/`scale_range` が `place_by` を経由しないため置いた直後の [ESC] の取り消し（`place_undo`）が実は
何もしていなかったバグ（複写側のみ修正、移動側は未対応）。基準点・置く段の [Enter] が同じ行を再描画するだけという前提は実機で
裏取りし、現状のまま（Enter 用の分岐なし）で正しいと確認。**⑦属性変更 は未着手**（実機で選ぶと
`|①確定|②グループ|③レイヤ|④線色|⑤線種|` という別の帯に入ることだけ確認——`src/cmd.c` の段4ハンドラに item==7 の分岐が無い）。
変形 ①パラメトリック変形 の同じ倍率欄（`c->command==17 && c->stage==18`）には同じ入力検査を足していない（スコープ外、同じ欠けが
残っている可能性あり）。`tools/cases/probe_copymove.txt` に回帰 4 件を追加、192.168.11.37 で 17/17 一致を確認。詳細は nokori.md 参照。
**10-07 深夜（4 回目、escaudit10）**：上の (3) が複写側しか直していなかった、移動＋⑤⑥③④ の ESC 取り消しを実装。
`move_range(-dx,-dy)` と同じ流儀で、`mirror_range`/`turn_range`/`scale_range` を基準点⇄置く点を入れ替え・角度を逆／倍率を
逆数にしてもう一度呼ぶ（`place_undo`）。最初に「変形前の値を控えて書き戻す」方式を試したが、192.168.11.37 の実機と生バイトで
比べると合わず（`notes/traps.md` 新しい罠）、上の「同じ関数を呼び直す」方式に直してビット一致を確認（⑤⑥③④ の `functest.sh`
が `same`）。基準点と置く点の y が同じになる置き方だけ、共有頂点の 1 座標が最後の 1 ビット違う既知の残り（nokori.md 参照）。
`tools/cases/probe_copymove.txt` に回帰 5 件を追加。

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

## 1. 守ること

* 挙動は decomp（逆コンパイル・逆アセンブル）から写す。画面に合わせた「それらしい規則」を作らない。測定だけで入れたものは「測定のみ・decomp 未確認」と書く。
* 完成の基準は画面ではなく**機能**。小さく分けて commit → pull --rebase → push。サブエージェントの報告は番地を確かめてから使う。
* 作らない：入出力 ③プリンタ、HELP、ｵﾌﾟｼｮﾝ ⑦外部処理・変形 ⑤外部 の `*.bat` 実行。ｵﾌﾟｼｮﾝは一番最後。

## 2. 検査の道具（基本）

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

## 3. 資料

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
