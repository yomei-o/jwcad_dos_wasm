/* 入出力 → ①ﾌｧｲﾙ → ⑥ＤＸＦ, the whole way round.
 *
 *     node tools/dxfcheck.mjs
 *
 * ① 保存 writes a DXF onto the module's disk; the page's list has to show it
 * (or the ダウンロード button cannot reach it -- which is exactly what was
 * wrong on 2026-09-23, in this page and in dosv_emu_cpp's); and ② 読込 has
 * to find it again and bring what is in it back into a drawing.
 *
 * The upload is the same thing from the other end: a file written onto the
 * disk under the name the page gives it, which ② 読込 then lists.
 */
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

/* What index.html's setFiles() keeps, and what its upload names a file. */
const LISTED = (n) => /\.(JWC|DXF)$/i.test(n);
const UPLOAD_NAME = (n) =>
  n.replace(/^.*[/]/, '').replace(/\.[^.]*$/, '')
   .toUpperCase().replace(/[^A-Z0-9_-]/g, '_').slice(0, 8)
  + (/\.dxf$/i.test(n) ? '.dxf' : '.JWC');

let bad = 0;
const ok = (c, w) => { console.log((c ? '  ok   ' : '  FAIL ') + w); if (!c) bad++; };

const M = await createJwcad();
M._jw_init();
const open = (p) => {
  const n = M.lengthBytesUTF8(p) + 1, b = M._malloc(n);
  M.stringToUTF8(p, b, n); M._jw_open(b); M._free(b);
};
const press = (x, y) => { M._jw_mouse(x, y); M._jw_click(x, y, 0); };
const rowOf = (name) => {
  for (let i = 0; i < M._jw_file_count(); i++) {
    if (M.UTF8ToString(M._jw_file_name(i)) === name) return i;
  }
  return -1;
};
const toDxf = () => { press(30, 296); press(110, 8); press(460, 8); };

open('orig/SAMPLE0.JWC');
const had = [M._jw_count(0), M._jw_count(1)];

/* ① 保存 → ③ 新規 保存 → [Enter] → 書き込みます → ① 実 行 */
toDxf();
press(100, 8);
press(460, 8);
M._jw_key(13);
press(220, 8);
ok(M.FS.analyzePath('orig/SAMPLE0.dxf').exists,
   '① 保存 writes the DXF onto the disk');
const wrote = M.FS.readFile('orig/SAMPLE0.dxf');
ok(wrote.length > 1000, 'and it has something in it (' + wrote.length + ' bytes)');

/* The page's own list -- the one ダウンロード takes its file from. */
const listed = M.FS.readdir('orig').filter(LISTED);
ok(listed.includes('SAMPLE0.dxf'),
   'the page lists it, so ダウンロード can reach it');

/* ② 読込 finds it: the name DOS spells is the stem in upper case. */
toDxf();
press(160, 8);
ok(rowOf('SAMPLE0 .DXF') >= 0,
   '② 読込 lists it (' + M._jw_file_count() + ' files)');

/* An upload from the visitor's machine, under the name the page gives it. */
const up = UPLOAD_NAME('my drawing.DXF');
ok(up === 'MY_DRAWI.dxf', 'the page names an uploaded DXF ' + up);
M.FS.writeFile('orig/' + up, wrote);
toDxf();
press(160, 8);
ok(rowOf('MY_DRAWI.DXF') >= 0, '② 読込 lists the uploaded one too');

/* And reading one back into an empty drawing. */
press(30, 296); press(530, 8);           // ⑤新規図面
ok(M._jw_count(0) === 0, 'the sheet is empty (' + M._jw_count(0) + ')');
toDxf();
press(160, 8);
const at = rowOf('SAMPLE0 .DXF');
press(300, 112 + at * 16);
press(200, 8);                           // ①選択確定
ok(M._jw_count(0) === had[0],
   '② 読込 brings the lines back (' + M._jw_count(0) + ' of ' + had[0] + ')');
console.log(M.UTF8ToString(M._jw_status()));
process.exit(bad ? 1 : 0);
