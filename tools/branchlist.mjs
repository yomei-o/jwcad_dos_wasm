/* Every branch of the menus, as a list of presses.
 *
 *     node tools/branchlist.mjs > tmp/branch/list.txt
 *     MENU=1-10 node tools/branchlist.mjs
 *
 * One line per branch:
 *
 *     <menu> <item> <button> <mx> <my> <bx>
 *
 * -- pick menu item <menu> at (mx,my), then press the top line at (bx,8)
 * with <button>.  Item 0 means "just the menu item, nothing after it".
 *
 * **Where to press comes from the line the original writes.**  The port
 * draws the same line (the thirty prompts are already nought pixels), so
 * jw_top_item can be asked which column belongs to which cell, and the
 * answer is the original's own layout rather than a column counted by hand.
 * That is the mistake that made ②読込 unreachable: a cell pressed in the
 * wrong place looks exactly like a cell that does nothing.
 */
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const M = await createJwcad();
M._jw_init();

const range = (process.env.MENU || '1-30').split('-').map(Number);
const press = (x, y, right) => { M._jw_mouse(x, y); M._jw_click(x, y, right ? 1 : 0); };
/* The menu's geometry, the original's: items 1..15 at x 90, 16..30 at x 30,
   y = 64 + 16*row + 8 (tools/press.sh). */
const menuAt = (n) => [n <= 15 ? 90 : 30, 64 + 16 * ((n - 1) % 15) + 8];

for (let n = range[0]; n <= range[1]; n++) {
  const [mx, my] = menuAt(n);

  /* A fresh module for each menu item: a command left half-finished would
     change what the next one puts up, and the point is what each one does
     on its own. */
  M._jw_init();
  press(mx, my);
  console.log(`${n} 0 left ${mx} ${my} 0`);

  /* Which columns are cells, out of the line that item put up. */
  const seen = new Set();
  for (let x = 8; x < 640; x += 8) {
    const item = M._jw_top_item(x, 8);

    if (!item || seen.has(item)) continue;
    seen.add(item);
    /* The middle of the cell, so a press cannot land on the bar itself. */
    let x0 = x;
    let x1 = x;
    while (x1 + 8 < 640 && M._jw_top_item(x1 + 8, 8) === item) x1 += 8;
    const bx = (x0 + x1) / 2 | 0;

    for (const b of ['left', 'right']) {
      console.log(`${n} ${item} ${b} ${mx} ${my} ${bx}`);
    }
  }
}
