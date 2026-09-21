/* Can a drawing be opened the way the original opens one?
 *
 *     node tools/loadcheck.mjs
 *
 * 入出力 → ①ﾌｧｲﾙ → ②読込 → a row → ①選択確定.  That is the only way in:
 * the page's own list is for moving files, not for opening them, exactly as
 * dosv_emu_cpp's page is.  It starts with nothing open, because the original
 * started with no drawing does the same.
 *
 * **The places pressed here are the original's, not the port's.**  The first
 * version of this check pressed ①保存's cell with the right button, because
 * that is what the port had been written to answer; the original answers the
 * ②読込 cell with the left one, and a visitor pressing the word 読込 got
 * nothing.  A check that agrees with the code and not with the program is
 * worth less than no check at all, so the columns below are worked out from
 * the line the original writes:
 *
 *   [ESC] |①保存(L)|②読込(R)|③合成|…      col 8 is the first `|`
 *          9....17  19....27  29..34        so ①保存 is x 64..143
 *                                              ②読込 is x 144..223
 */
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const M = await createJwcad();
let bad = 0;
const ok = (c, w) => { console.log((c ? '  ok   ' : '  FAIL ') + w); if (!c) bad++; };
const press = (x, y, right) => { M._jw_mouse(x, y); M._jw_click(x, y, right ? 1 : 0); };
const status = () => M.UTF8ToString(M._jw_status());
/* Where a name is in the list.  **Not a fixed row**: the original makes an
   empty AUTO.JWC at startup and it sorts first, so counting rows from the
   top is counting on something that moves. */
const rowOf = (name) => {
  for (let i = 0; i < M._jw_file_count(); i++) {
    if (M.UTF8ToString(M._jw_file_name(i)) === name) return i;
  }
  return -1;
};
const titleOf = (i) => {
  const p = M._jw_file_title(i);
  let n = 0;
  while (M.HEAPU8[p + n]) n++;
  return new TextDecoder('shift_jis').decode(M.HEAPU8.slice(p, p + n));
};

M._jw_init();
ok(/^ready/.test(status()), 'the page starts with no drawing open (' + status() + ')');

press(30, 296);                     // 入出力
press(110, 8);                      // ①ﾌｧｲﾙ
press(180, 8);                      // ②読込 -- its own cell, the left button
ok(M._jw_file_count() === 15,
   'pressing the word 読込 puts up the list (' + M._jw_file_count()
   + ' files -- the fourteen and the AUTO.JWC the program makes)');
ok(M.UTF8ToString(M._jw_file_name(0)) === 'AUTO    .JWC',
   'in DOS\'s spelling and alphabetical (' + M.UTF8ToString(M._jw_file_name(0)) + ')');
ok(titleOf(rowOf('SAMPLE2 .JWC')).startsWith('マンション'),
   "and each one's own 図面名 beside it ("
   + titleOf(rowOf('SAMPLE2 .JWC')).trim() + ')');

/* A press on the third row, then ①選択確定. */
const row = (n) => press(300, 112 + n * 16);

const two = rowOf('SAMPLE2 .JWC');
const four = rowOf('SAMPLE4 .JWC');

row(two);
ok(M._jw_file_sel() === two, 'a press on a row picks it (' + M._jw_file_sel() + ')');
/* **Another row only moves the pick** -- measured on the original, which
   leaves the list up (tools/dblcheck.sh ROW2=12). */
row(four);
ok(M._jw_file_sel() === four && M._jw_file_count() === 15,
   'a press on a different row moves the pick and leaves the list up');
press(180, 8);                      // ①選択確定 -- the item starts at column 21
ok(/lines/.test(status()), '①選択確定 opens it (' + status() + ')');

/* **The same row again confirms it**, which is what a double press comes
   to.  Not a timed double click: on the original two presses 300,000 and
   30,000,000 instructions apart both open the drawing. */
press(30, 296);
press(110, 8);
press(180, 8);                      // ②読込
const one = rowOf('SAMPLE1 .JWC');

row(one);
ok(M._jw_file_sel() === one, 'a row is picked (' + M._jw_file_sel() + ')');
const before = status();
row(one);
ok(status() !== before && /lines/.test(status()),
   'and pressing it again opens it, the way a double press does ('
   + status() + ')');

/* **The two lists are not in the same order**, and both were measured:
     ②読込  plain alphabetical, the first row picked
     ①保存  the same, but the drawing in hand lifted to the top -- it is the
             name that would be overwritten, so it is the one offered
   Reading one and assuming the other put the port's list in the wrong order
   the first time round. */
press(30, 296);
press(110, 8);
press(180, 8);
ok(M.UTF8ToString(M._jw_file_name(0)) === 'AUTO    .JWC',
   '②読込 stays alphabetical whatever is open ('
   + M.UTF8ToString(M._jw_file_name(0)) + ')');
ok(M._jw_file_sel() === 0, 'and the first row is the one picked');

press(30, 296);
press(110, 8);
press(100, 8);                      // ①保存 -- the other cell
ok(M._jw_file_count() === 15, 'pressing 保存 puts up the list too');
ok(M.UTF8ToString(M._jw_file_name(0)) === 'SAMPLE1 .JWC',
   'with the drawing in hand on top -- SAMPLE1, the one the double press'
   + ' opened (' + M.UTF8ToString(M._jw_file_name(0)) + ')');
process.exit(bad ? 1 : 0);
