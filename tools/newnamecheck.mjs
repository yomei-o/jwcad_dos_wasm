/* ③ 新規 保存: writing under a name of your own.
 *
 *     node tools/newnamecheck.mjs
 *
 * 入出力 → ①ﾌｧｲﾙ → ①保存 → ③ 新規 保存 → a name → [Enter] → ◆ｍｅｍｏ入力
 * → 書き込みます → ① 実 行.  A visitor found this missing: only ①選択確定
 * was built, so a drawing could be written over an existing name and never
 * under a new one.
 *
 * The cells of the save list's line, counted from what the original writes:
 *
 *   [ESC] ファイル選択 |①選択確定 |②ドライブ(A:)変更 |③ 新規 保存 |④…|
 *    1..6  7..19        21..31      33..51              53..65
 *                       x168..255   x256..415           x416..527
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

M._jw_init();
/* Open one and draw a line, so there is something worth keeping. */
press(30, 296); press(110, 8); press(180, 8);
const at = rowOf('SAMPLE1 .JWC');
press(300, 112 + at * 16);
press(300, 112 + at * 16);
press(90, 64 + 16 * 2 + 8);          // ／
press(200, 150);
press(400, 300);
ok(M._jw_count(0) === 763, 'SAMPLE1 with a line drawn on it (' + M._jw_count(0) + ')');

press(30, 296); press(110, 8); press(100, 8);   // 入出力 ①ﾌｧｲﾙ ①保存
press(470, 8);                                   // ③ 新規 保存
/* The field comes up with the drawing in hand in it and the cursor at the
   **front**: `X` over `SAMPLE0` gives `XSAMPLE0`, `MYWORK` gives
   `MYWORKSAMPLE` -- twelve, with the last character falling off the end --
   and **[BS] does nothing at all** (tools/namefield.sh, and the same road
   with `key bs` under tools/origstr.sh).  So the name that gets written is
   the first eight of what is in the field. */
for (const ch of 'MYWORK') M._jw_key(ch.charCodeAt(0));
M._jw_key(13);                                   // the name
M._jw_key(13);                                   // the two memo lines
M._jw_key(13);
press(210, 8);                                   // ① 実 行 (no overwrite question)
ok(M.FS.analyzePath('orig/MYWORKSA.JWC').exists,
   '③ 新規 保存 writes it under the name that was typed (' + status() + ')');
ok(!M.FS.analyzePath('orig/MYWORKSA.bak').exists,
   'and makes no .bak, because there was nothing to back up');

/* And it is in the list, and opening it gives the drawing back. */
press(30, 296); press(110, 8); press(180, 8);
const back = rowOf('MYWORKSA.JWC');
ok(back >= 0, 'the list has it (' + back + ')');
press(300, 112 + back * 16);
press(300, 112 + back * 16);
ok(M._jw_count(0) === 763,
   'and it opens with the line still in it (' + M._jw_count(0) + ')');
process.exit(bad ? 1 : 0);
