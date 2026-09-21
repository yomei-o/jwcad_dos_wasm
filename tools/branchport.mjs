/* The port through the same branches tools/branchorig.sh walks.
 *
 *     node tools/branchport.mjs 1 40
 *
 * Leaves tmp/branch/p<line>.raw, one per branch, to be put beside the
 * original's with tools/branchdiff.py.
 */
import { readFileSync, writeFileSync, mkdirSync } from 'node:fs';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const M = await createJwcad();
mkdirSync('tmp/branch', { recursive: true });
const from = Number(process.argv[2] || 1);
const to = Number(process.argv[3] || 40);
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

lines.forEach((line, i) => {
  const n = i + 1;

  if (n < from || n > to) return;
  const [menu, item, button, mx, my, bx] = line.split(/\s+/);

  /* A fresh module for each branch, which is what the two [ESC]s do for the
     original: start from the same screen every time. */
  reopen();
  press(Number(mx), Number(my));
  if (item !== '0') press(Number(bx), 8, button === 'right');
  const w = M._jw_width(), h = M._jw_height();
  writeFileSync('tmp/branch/p' + n + '.raw',
                Buffer.from(M.HEAPU8.buffer, M._jw_framebuffer(), w * h * 4));
});
console.log('wrote ' + (Math.min(to, lines.length) - from + 1) + ' screens');
