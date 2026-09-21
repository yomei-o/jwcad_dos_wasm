/* Can a drawing be opened the way the original opens one?
 *
 *     node tools/loadcheck.mjs
 *
 * 入出力 → ①ﾌｧｲﾙ → ②読込(right button) → a row → ①選択確定.  That is the
 * only way in: the page's own list is for moving files, not for opening
 * them, exactly as dosv_emu_cpp's page is.
 *
 * It starts with nothing open, because the original started with no drawing
 * does the same.
 */
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const M = await createJwcad();
let bad = 0;
const ok = (c, w) => { console.log((c ? '  ok   ' : '  FAIL ') + w); if (!c) bad++; };
const press = (x, y, right) => { M._jw_mouse(x, y); M._jw_click(x, y, right ? 1 : 0); };
const status = () => M.UTF8ToString(M._jw_status());

M._jw_init();
ok(/^ready/.test(status()), 'the page starts with no drawing open (' + status() + ')');

press(30, 296);                     // 入出力
press(110, 8);                      // ①ﾌｧｲﾙ
press(100, 8, true);                // ②読込 -- the right button on the same item
ok(M._jw_file_count() === 14,
   'the list is the drawings on the disk (' + M._jw_file_count() + ')');
ok(M.UTF8ToString(M._jw_file_name(0)) === 'SAMPLE0 .JWC',
   'in DOS\'s spelling and alphabetical (' + M.UTF8ToString(M._jw_file_name(0)) + ')');
/* The title is Shift-JIS, the bytes the original writes, so it is read as
   bytes rather than through UTF8ToString. */
const titleOf = (i) => {
  const p = M._jw_file_title(i);
  let n = 0;
  while (M.HEAPU8[p + n]) n++;
  return new TextDecoder('shift_jis').decode(M.HEAPU8.slice(p, p + n));
};
ok(titleOf(2).startsWith('マンション'),
   "and each one's own 図面名 beside it (" + titleOf(2) + ')');

/* A press on the third row, then ①選択確定. */
press(300, 112 + 2 * 16);
ok(M._jw_file_sel() === 2, 'a press on a row picks it (' + M._jw_file_sel() + ')');
press(180, 8);            // ①選択確定 -- the item starts at column 21
ok(/lines/.test(status()), '①選択確定 opens it (' + status() + ')');
ok(/762 lines|9[0-9]* lines|[0-9]+ lines/.test(status()), 'and it has a drawing in it');

/* And it is on top of the list the next time, the way the original shows it. */
press(30, 296);
press(110, 8);
press(100, 8, true);
ok(M.UTF8ToString(M._jw_file_name(0)) === 'SAMPLE2 .JWC',
   'the drawing that is open comes first the next time ('
   + M.UTF8ToString(M._jw_file_name(0)) + ')');
process.exit(bad ? 1 : 0);
