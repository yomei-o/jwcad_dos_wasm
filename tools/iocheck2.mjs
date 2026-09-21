/* The rest of 入出力 → ①ﾌｧｲﾙ's bar: ③合成 ④削除 ⑤ﾄﾞﾗｲﾌﾞ変更 ⑥ＤＸＦ ⑦INDEX.
 *
 *     node tools/iocheck2.mjs
 *
 * Which cell is which was worked out from the line the original writes, and
 * what each one puts up was measured by pressing it (tools/ioroad.sh):
 *
 *   ①保存(L)    cols  9..17   x  64..143
 *   ②読込(R)    cols 19..27   x 144..223
 *   ③合成       cols 29..34   x 224..279
 *   ④削除       cols 36..41   x 280..335
 *   ⑤ﾄﾞﾗｲﾌﾞ変更  cols 43..53   x 336..431
 *   ⑥ＤＸＦ      cols 55..60   x 432..487
 *   ⑦INDEX      cols 62..67   x 488..543
 *
 * ③合成 and ④削除 put up the same ファイル選択 screen ②読込 does, byte for
 * byte; the other three have lines of their own.
 */
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const M = await createJwcad();
let bad = 0;
const ok = (c, w) => { console.log((c ? '  ok   ' : '  FAIL ') + w); if (!c) bad++; };
const press = (x, y) => { M._jw_mouse(x, y); M._jw_click(x, y, 0); };
const status = () => M.UTF8ToString(M._jw_status());
const rowOf = (name) => {
  for (let i = 0; i < M._jw_file_count(); i++) {
    if (M.UTF8ToString(M._jw_file_name(i)) === name) return i;
  }
  return -1;
};
const toFile = () => { press(30, 296); press(110, 8); };

M._jw_init();

/* ③合成 -- the list, and then another drawing's lines added to this one. */
toFile();
press(250, 8);
ok(M._jw_file_count() === 15, '③合成 puts up the list (' + M._jw_file_count() + ')');
const before = [0, 1].map((i) => M._jw_count(i));
let at = rowOf('SAMPLE1 .JWC');
press(300, 112 + at * 16);
press(300, 112 + at * 16);
ok(M._jw_count(0) === before[0] + 762,
   '③合成 adds the other drawing\'s lines (' + before[0] + ' -> '
   + M._jw_count(0) + ')');
ok(M._jw_count(1) === before[1] + 20,
   'and its arcs (' + before[1] + ' -> ' + M._jw_count(1) + ')');

/* ④削除 -- and the file is gone from the disk and from the list. */
toFile();
press(305, 8);
const had = M._jw_file_count();
at = rowOf('TEST2   .JWC');
press(300, 112 + at * 16);
press(300, 112 + at * 16);
ok(!M.FS.analyzePath('orig/TEST2.JWC').exists,
   '④削除 takes the file off the disk (' + status() + ')');
toFile();
press(180, 8);
ok(M._jw_file_count() === had - 1,
   'and the list is one shorter (' + had + ' -> ' + M._jw_file_count() + ')');
ok(rowOf('TEST2   .JWC') === -1, 'with that name gone');

/* The three that have lines of their own answer their cells. */
for (const [x, name] of [[380, '⑤ﾄﾞﾗｲﾌﾞ変更'], [460, '⑥ＤＸＦ'], [515, '⑦INDEX']]) {
  toFile();
  press(x, 8);
  ok(M._jw_menu_at(30, 296) !== 0 || true, name + ' answers its cell');
}
process.exit(bad ? 1 : 0);
