/* The port through the same branches tools/branchorig.sh walks.
 *
 *     node tools/branchport.mjs 1 284
 *
 * Leaves tmp/branch/p<line>.raw, one per branch, to be put beside the
 * original's with tools/branchdiff.py.
 *
 * **One run, not one per branch.**  The original is started once and walked
 * through every branch in order with two [ESC]s between them, which is what
 * tools/branchorig.sh does -- and some of what a command remembers survives
 * those: 面取's 【角面】/【丸面】/【Ｌ面】 is one setting, and pressing ① on
 * three branches running walks it round the three.  Starting the port over
 * for each branch measured a different program from the one the screenshots
 * came from, and the three lines never lined up.
 */
import { readFileSync, writeFileSync, mkdirSync } from 'node:fs';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const M = await createJwcad();
mkdirSync('tmp/branch', { recursive: true });
const from = Number(process.argv[2] || 1);
const to = Number(process.argv[3] || 284);
const lines = readFileSync('tmp/branch/list.txt', 'utf8').trim().split('\n');
const press = (x, y, right) => { M._jw_mouse(x, y); M._jw_click(x, y, right ? 1 : 0); };

/* The original is started on a drawing, so the port opens the same one --
   through its own 入出力, which is the only way in. */
function reopen() {
  M._jw_init();
  press(30, 296); press(110, 8); press(180, 8);
  for (let i = 0; i < M._jw_file_count(); i++) {
    if (M.UTF8ToString(M._jw_file_name(i)) !== 'SAMPLE0 .JWC') continue;
    press(300, 112 + i * 16);
    press(300, 112 + i * 16);
    break;
  }
}

reopen();
lines.forEach((line, i) => {
  const n = i + 1;
  const [menu, item, button, mx, my, bx] = line.split(/\s+/);

  /* The two [ESC]s the harness puts between branches: back to the menu,
     whatever the branch before was in the middle of. */
  M._jw_key(27);
  M._jw_key(27);
  press(Number(mx), Number(my));
  if (item !== '0') press(Number(bx), 8, button === 'right');
  if (n < from || n > to) return;
  const w = M._jw_width(), h = M._jw_height();
  writeFileSync('tmp/branch/p' + n + '.raw',
                Buffer.from(M.HEAPU8.buffer, M._jw_framebuffer(), w * h * 4));
});
console.log('wrote ' + (Math.min(to, lines.length) - from + 1) + ' screens');
