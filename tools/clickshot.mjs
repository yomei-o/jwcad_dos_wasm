/* Press somewhere in the **browser build** and write the screen out.
 *
 *     node tools/clickshot.mjs orig/SAMPLE0.JWC 60 360 left tmp/port.raw
 *
 * It goes through `jw_click`, which is the entry point the page uses, so
 * this tests what a visitor actually gets -- tests/drawing.exe reaches past
 * it into jw_cmd_press and never sees the chrome's own targets (the layer
 * buttons, the counts box, the bottom strip).
 */
import { writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';

const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const [path, xs, ys, button, out] = process.argv.slice(2);
const x = Number(xs), y = Number(ys);
const right = button === 'right' ? 1 : 0;

const M = await createJwcad();
M._jw_init();
const n = M.lengthBytesUTF8(path) + 1;
const buf = M._malloc(n);
M.stringToUTF8(path, buf, n);
if (!M._jw_open(buf)) {
  console.error(M.UTF8ToString(M._jw_status()));
  process.exit(1);
}
M._free(buf);

/* The pointer goes there first, the way it does under a hand, and stays
   there afterwards -- that is where the original leaves it too. */
M._jw_mouse(x, y);
M._jw_click(x, y, right);
M._jw_mouse(x, y);

const w = M._jw_width(), h = M._jw_height();
const p = M._jw_framebuffer();
writeFileSync(out, Buffer.from(M.HEAPU8.buffer, p, w * h * 4));
