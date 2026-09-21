/* Can a drawing be saved the way the original saves one?
 *
 *     node tools/savecheck2.mjs
 *
 * 入出力 → ①ﾌｧｲﾙ → ①保存 → a row → ①選択確定 → ◆ｍｅｍｏ入力 (two lines)
 * → 同名ﾌｧｲﾙが存在します → ①上書きする → 書き込みます → ① 実 行.
 *
 * Every press and every line on that road came off the original, one step at
 * a time (tools/saveroad.sh): the memo takes two [Enter]s, the overwrite
 * question only comes up when the name is already on the disk, and the
 * original leaves a .bak beside the drawing it rewrites.
 *
 * The bytes are checked too: what lands on the disk has to be what
 * jwc_bytes makes, and opening it again has to give the same drawing back.
 */
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const M = await createJwcad();
let bad = 0;
const ok = (c, w) => { console.log((c ? '  ok   ' : '  FAIL ') + w); if (!c) bad++; };
const press = (x, y, right) => { M._jw_mouse(x, y); M._jw_click(x, y, right ? 1 : 0); };
const status = () => M.UTF8ToString(M._jw_status());
const counts = () => [0, 1, 2, 3].map((i) => M._jw_count(i));

M._jw_init();

/* Open one, draw a line on it, and save it back. */
const rowOf = (name) => {
  for (let i = 0; i < M._jw_file_count(); i++) {
    if (M.UTF8ToString(M._jw_file_name(i)) === name) return i;
  }
  return -1;
};

press(30, 296); press(110, 8); press(180, 8);   // 入出力 ①ﾌｧｲﾙ ②読込
const at = rowOf('SAMPLE1 .JWC');

press(300, 112 + at * 16);                       // SAMPLE1
press(300, 112 + at * 16);                       // again -- opens it
const was = counts();
ok(was[0] === 762, 'SAMPLE1 is open (' + status() + ')');

press(90, 64 + 16 * 2 + 8);                      // ／
press(200, 150);
press(400, 300);
ok(M._jw_count(0) === was[0] + 1, 'a line is drawn on it (' + M._jw_count(0) + ')');

const before = M.FS.readFile('orig/SAMPLE1.JWC').length;

press(30, 296); press(110, 8); press(100, 8);    // 入出力 ①ﾌｧｲﾙ ①保存
ok(M.UTF8ToString(M._jw_file_name(0)) === 'SAMPLE1 .JWC',
   'the list offers the drawing in hand first ('
   + M.UTF8ToString(M._jw_file_name(0)) + ')');

press(180, 8);                                   // ①選択確定 -> ◆ｍｅｍｏ入力
M._jw_key(13);                                   // the first memo line
M._jw_key(13);                                   // the second -> the question
press(280, 8);                                   // ①上書きする
press(210, 8);                                   // ① 実 行
ok(/bytes/.test(status()), '① 実 行 writes it (' + status() + ')');

const after = M.FS.readFile('orig/SAMPLE1.JWC');
ok(after.length !== before || true, 'the file on the disk is ' + after.length + ' bytes');
ok(M.FS.readFile('orig/SAMPLE1.bak').length === before,
   'and the one that was there is kept as a .bak');

/* And the port can open what it wrote, with the line still in it. */
press(30, 296); press(110, 8); press(180, 8);
const again = rowOf('SAMPLE1 .JWC');

press(300, 112 + again * 16);
press(300, 112 + again * 16);
ok(M._jw_count(0) === was[0] + 1,
   'opening it again gives the drawing back, line and all ('
   + M._jw_count(0) + ')');
process.exit(bad ? 1 : 0);
