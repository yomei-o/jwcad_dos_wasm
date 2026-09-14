# フォントの出どころ

ＪＷ＿ＣＡＤ は**フォントを持っていません**。起動時に DOS/V へ
`INT 15h AX=5000h` で字形取得ルーチンのアドレスを尋ね、それを呼びます
（`RESUME.md` の「文字」）。なので移植側がフォントを用意する必要があります。

ここに置いてあるのは **東雲（しののめ）フォント**から作った FONTX2 です。

| | |
|---|---|
| 原典 | [/efont/ 東雲フォントファミリー](http://openlab.ring.gr.jp/efont/shinonome/) |
| 取得元 | https://github.com/code4fukui/shinonome-font （原典のミラー） |
| 作者 | 古川泰之さん（原作）、/efont/（保守） |
| ライセンス | **Public Domain**（`SHINONOME-LICENSE.txt`） |

> このアーカイブに含まれるすべてのフォントデータ、ドキュメント、スクリプト類は
> すべて Public Domain で提供されています。
> （中略）自由な改造、他フォーマットへの変換、組込み、再配布を行うことができます。

BDF から FONTX2 への変換は `tools/mkfontx.py` です。

```sh
git clone https://github.com/code4fukui/shinonome-font.git
python tools/mkfontx.py shinonome-font font
```

| ファイル | |
|---|---|
| `JWANK16.FNT` | 8×16、256 字（JIS X 0201。latin1 に半角カナを重ねたもの） |
| `JWKAN16.FNT` | 16×16、6,879 字（JIS X 0208。Shift-JIS で索く。88 ブロック） |

## なぜ FONTX2 か

FONTX2 は DOS/V のフォントの形式です。**最終的にはこの移植の画面を、
DOS/V エミュレータで動かした本物の `JW_CADV.EXE` の画面と突き合わせて
検証したい**ので、そのときエミュレータ側にも同じフォントを
`INT 15h AX=5000h` 経由で持たせられる形にしてあります。
両方が同じ字形を描かなければ、画面比較に意味がありません。
