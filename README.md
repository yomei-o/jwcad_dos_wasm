# JW_CAD for DOS/V — 解析と C 移植

DOS/V 用の 2 次元 CAD **ＪＷ＿ＣＡＤ version 2.22h**（jw_software club、1991-1996）を、
実行ファイルを Ghidra で逆コンパイルして解析し、C 言語に書き直して
最終的に WASM で動かすためのリポジトリです。

**遊ぶ（見る）: https://yomei-o.github.io/jwcad_dos_wasm/**
同梱の図面をブラウザで開いて、拡大縮小と移動、作図ができます。

進め方は [super_depth_wasm](https://github.com/yomei-o/super_depth_wasm) と同じ
——**逆コンパイル出力を読んで C に書き直し**、ネイティブと WASM を同じソースから作り、
ウィンドウを開かずに検証する——ですが、規模が違います（JW_CAD は 1,451,937 バイト、
うち 1.2 MB がオーバーレイ）。本物は対になる
[dosv_emu_cpp](https://github.com/yomei-o/dosv_emu_cpp)（DOS/V エミュレータ）で動かし、
**その画面・保存したファイルとこちらを突き合わせて**確かめます。

> **方針（いちばん大事）**：挙動は decomp（逆コンパイル・逆アセンブル）を読んで写す。
> 画面の差に合わせた「それらしい規則」を作らない。実装したら、テストより先に
> decomp と一致しているかを確かめる。詳しくは [RESUME.md](RESUME.md)。

## いまできていること

読み込みも描画も移植した C で、画面は当時と同じ 640×480 16 色（VGA モード 12h）の
4 プレーンをそのまま展開しています。

* **図面**：`.JWC`・`.DXF` の読み書き。同梱の図面 14 枚をすべて読めて、書いたものを本物が開いて同じ画面を描く。
* **作図コマンド**：＋ ／ □ ○ （ 複線 線消 点 消去 線変更 文字 複写 移動 線伸縮 線切断 コーナー連結
  面取 ２線 中心線 分割 正多角形 測定 寸法 ハッチ 円線接 曲線⑦連線 文編集 変形①パラメトリック ■拡大■。
  日本語入力、右ボタンの読取（[SHIFT]・[GRPH]・[CTRL] の修飾つき）、数値入力欄。
  ※ **UI の遷移（入力欄・[ESC]・行や札の出し入れ）は命令ごとに decomp との照合が済んでいるものと、
  画面を測って合わせただけのものが混ざっています**。照合の状況は [RESUME.md](RESUME.md)。
* **寸法（14）**：ひととおり（横・縦・任意方向・半径・直径・円･角・寸法値・点・矢印・値変・設定）。
* **図形（27）**：登録（`.JWK` は本物とバイト単位で一致）と読込。ｵﾌﾟｼｮﾝ ①建具平面。
* **入出力**：ファイルの保存・読込・合成・削除・INDEX・ＤＸＦ・新規図面・自動保存。プロッタ出力から PDF／PNG。
* **画面まわり**：左の盤（ペン・紙・縮尺・図面名・ｸﾞﾙｰﾌﾟ・レイヤ 16・サブ画面表示・目盛）、帯の電卓・倍率指定。

本物との突き合わせの結果（0 画素差の表、メニューの枝 284 通り、PDF／プロッタ出力の比較）は
[notes/validation.md](notes/validation.md) にあります。

**まだのもの**：変形（17）の ②包絡処理変形の一部・④線記号変形、ｵﾌﾟｼｮﾝ（29）の日影図・2.5D、帯の HELP、
各命令の細部（[RESUME.md](RESUME.md) の「次にやること」）。入出力 ③プリンタ と、ｵﾌﾟｼｮﾝ ⑦外部処理・
変形 ⑤外部 の `*.bat` 実行は、利用者の指示で作りません。

## ビルドと検証

```sh
sh tools/check.sh          # 全部。ビルド、単体検査、図面 14 枚、ネイティブ対 WASM
sh tools/build_tests.sh    # ネイティブ側だけ
sh tools/build_wasm.sh     # jwcad.js / jwcad.wasm
```

`tools/check.sh` の最後は**ネイティブと WASM の画面を 1 画素ずつ突き合わせます**。
両方が同じ `src/*.c` を通るので、差が出たらそれは移植が環境に依存した印です。

```
=== native against WASM, pixel for pixel
  same   orig/SAMPLE1.JWC
  same   orig/SAMPLE2.JWC
  ...
```

## 対象

`orig/jwcv222h.lzh` がオリジナルの配布アーカイブです。展開済みのファイルも
`orig/` に置いてあります（全 60 ファイル、CRC 一致）。

| ファイル | サイズ | 中身 |
|---|---|---|
| `JW_CADV.EXE` | 1,451,937 | 本体。DOS MZ / 16bit リアルモード、Microsoft C 6.0 |
| `JW_CADV.HLP` | 144,019 | ヘルプ |
| `JW_OPT*.DAT` | 22 本 | 建具などのパラメトリック図形ライブラリ。テキスト（`#建具一般平面図` に線分の並びが続く） |
| `JW_PAL.DAT` `JW_PAL.WB` | 160 | パレット |
| `DXF_HDR.DAT` | 1,535 | DXF 出力のヘッダ雛形 |
| `SAMPLE*.JWC` `TEST*.JWC` | | 図面のサンプル 13 枚 |
| `SAMPLE.JWF` `SAMPLE.JWL` `SAMPLE.JWP` | | 設定・線種・プロッタ |
| `KEISAN*.JWM` | | 計算マクロ |
| `SETUP_V.EXE` `JW_SAMPL.EXE` | | インストーラとサンプル集 |
| `README_V.DOC` `JW_CAD.DOC` `JW_VER.DOC` `JW_MNU.DOC` `JWP.DOC` | | 添付ドキュメント |

添付ドキュメントによると、DOS のマウスドライバ (`MOUSE.COM`) が必須、
画面は VGA のビデオモード `12h`（640×480 16 色）が既定で、起動オプション
`-Vnn` で変えられます（`-V6a` で SVGA 800×600、ただし FEP が使えなくなる）。

## 実行ファイルそのものの話

EXEPACK の展開、オーバーレイ 36 個の地図、文字列の置き場、どのオーバーレイが何を担当するか——**[notes/analysis.md](notes/analysis.md)**にまとめてあります。移植を読むだけなら要りません。

## ソースの構成

| 場所 | 中身 |
|---|---|
| `src/` | 移植した C。`cmd.c`（作図コマンド）、`ui.c`（画面まわり）、`jwc.c`（図面ファイル）、`draw.c`・`view.c`（描画）、`main_wasm.c`（WASM の入口）、`*.h` の表（`item.h`・`stage.h`・`typed.h`・`prompt.h` は本物が上の行に書く文字を記録から起こしたもの） |
| `tools/` | 検査と解析の道具。作図の検査は `rbatch.py`・`funcfast.py`・`stepcheck.py`、解析は `disasm.py`・`altlift.py`・`strref.py`（使い方は RESUME.md） |
| `tools/cases/` | 検査の手順の一覧（`func_all.txt` ほか）と、測るためのプローブ（`probe_*.txt`） |
| `decomp/` | Ghidra の逆コンパイル出力（root と overlay 36 本）と読み下したメモ（`decomp/lift/`） |
| `orig/` | 本物の配布物（展開済み）。`font/` はフォント |
| `notes/` | 解析の資料（下の一覧） |
| `tests/` | 単体検査 |

## 資料

| ファイル | 中身 |
|---|---|
| [RESUME.md](RESUME.md) | **引き継ぎ**。方針・作業手順・検査の道具・いまの状態・次にやること |
| [notes/INDEX.md](notes/INDEX.md) | 資料の目次 |
| [notes/decomp-audit.md](notes/decomp-audit.md) | 命令ごとに decomp と突き合わせた記録（照合済みの表・読み・未照合） |
| [notes/validation.md](notes/validation.md) | 本物との突き合わせの結果 |
| [notes/analysis.md](notes/analysis.md) | 実行ファイルの解析（EXEPACK・オーバーレイ 36 本・文字列） |
| [notes/tools.md](notes/tools.md) | 解析の道具（LZH・EXEPACK・オーバーレイ） |
| [notes/jwc-format.md](notes/jwc-format.md) | `.JWC` の形 |
| [notes/reference-addresses.md](notes/reference-addresses.md) | 押さえた番地・画面・表・ファイル形式 |
| [notes/history-2026-10.md](notes/history-2026-10.md)・[history-2026-09.md](notes/history-2026-09.md) | 作業の履歴 |
| [notes/traps.md](notes/traps.md) | 刺された罠 |
| `notes/draw.md` `edit.md` `dim.md` `ui.md` | 作図・編集・寸法・画面の解析メモ |

## 権利について

ＪＷ＿ＣＡＤ はもともと jw_software club（清水治郎・田中善文）が配布していた
フリーソフトです。`orig/` にオリジナルの配布アーカイブ `jwcv222h.lzh` と
その中身をそのまま入れてあります。著作権は作者にあります。
このリポジトリのツールと、これから書く C ソースは解析して書き直したものです。
