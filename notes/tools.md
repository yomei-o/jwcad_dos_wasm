# ツール一覧（実行ファイルの解析まわり）

`README.md` から移しました。LZH 展開・EXEPACK 展開・オーバーレイの切り出し・逆コンパイルまわりの道具の説明です。検査の道具（rbatch・funcfast・stepcheck など）は `RESUME.md` を見てください。

---

## ツール

**`tools/lzh.py`** — LZH の展開。ここには lha も 7z も入っていないので、
super_depth_wasm から持ってきました。ヘッダレベル 0/1/2、`-lh0-` 〜 `-lh7-`。

```sh
python tools/lzh.py orig/jwcv222h.lzh          # 一覧（CRC 検査つき）
python tools/lzh.py orig/jwcv222h.lzh orig     # 展開
```

**`tools/unexepack.py`** — Microsoft EXEPACK の展開。上のとおり。

**`tools/overlays.py`** — オーバーレイの連鎖を歩いて、一覧・切り出し・
Ghidra 用の結合イメージ作成。

```sh
python tools/overlays.py            # 一覧
python tools/overlays.py --split    # decomp/ovl/ovlNN.bin（生イメージ）
python tools/overlays.py --merge    # decomp/ovl/jwNN.exe（ルート＋1 個）
```

**`tools/disasm.py`** — 展開済みイメージの一部を 16bit で逆アセンブル（capstone）。
`INT 21h` / `INT 10h` / `INT 33h` の機能名、`INT 3Fh` のオーバーレイ番号、
DGROUP の文字列、VGA のポートを注釈します。

```sh
python tools/disasm.py 0x26147 0x90     # イメージ先頭からのオフセット
python tools/disasm.py 3375:8f53 0x40   # seg:off
```

**`tools/callsites.py`** — ある番地への呼び出しを全部見つけて、そこで積まれた
引数を機械語から復元。Ghidra の 16bit 出力は引数をローカル変数に化けさせるので、
これが無いと引数の個数すら確かめられません。near / far / `INT 3Fh` の 3 種類とも
探します。`push cs` ＋ near call で far 呼び出しを合成する MSC の手口も込みです。

```sh
python tools/callsites.py 10a9:0732
#   root    010c01  far    pushed: [bp+18], 0x0000
#   root    011263  near   pushed: (cs), [bp+14], [bp+16]
```

**`tools/func.py`** — `decomp/*/all.c` から関数を 1 本取り出す。

```sh
python tools/func.py 1000:0446    # main
python tools/func.py 20a9         # そのセグメントの関数一覧
```

**`tools/ovlmap.py`** — 各オーバーレイが触る DGROUP の文字列を数えて、
何担当かを当てる。上の表はこれで作りました。

**`tools/ghidra.sh`** — Ghidra headless で逆コンパイルして `decomp/` に出す。

```sh
sh tools/ghidra.sh root      # ルート
sh tools/ghidra.sh 07        # オーバーレイ 7（ルート込み）
sh tools/ghidra.sh all       # 全部（長い）
```

**`tools/lowpri.sh`** — 長い仕事を低優先度で走らせるラッパ。Ghidra もこれ経由です。

