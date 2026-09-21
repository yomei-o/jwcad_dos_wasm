/* What 入出力's top line says at each step, saved as screens to read back.
 *
 *     node tools/iocheck.mjs && sh tools/iocheck.sh
 *
 * The bar it puts up is `|①保存(L)|②読込(R)|…`: one item, and the button
 * says which.  A visitor reported that nothing under 入出力 could be chosen
 * (2026-09-21), and a check that only drives the right button would not have
 * seen it -- so every step here is pressed with both.
 */
import { writeFileSync, mkdirSync } from 'node:fs';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const M = await createJwcad();
M._jw_init();
mkdirSync('tmp/io', { recursive: true });
const press = (x, y, right) => { M._jw_mouse(x, y); M._jw_click(x, y, right ? 1 : 0); };
const shot = (tag) => {
  const w = M._jw_width(), h = M._jw_height();
  writeFileSync('tmp/io/' + tag + '.raw',
                Buffer.from(M.HEAPU8.buffer, M._jw_framebuffer(), w * h * 4));
};

shot('1_boot');
press(30, 296);        shot('2_io');          // 入出力
press(110, 8);         shot('3_file');        // ①ﾌｧｲﾙ
press(100, 8);         shot('4_save_left');   // ①保存 -- the left button
press(100, 8, true);   shot('5_load_right');  // ②読込 -- the right button
press(180, 8);         shot('6_chosen');      // ①選択確定
console.log(M.UTF8ToString(M._jw_status()));
