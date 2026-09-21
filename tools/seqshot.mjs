/* Several presses in a row, through the page's own entry points.
 *
 *     node tools/seqshot.mjs orig/SAMPLE0.JWC out.raw "20 312 left" "20 344 left"
 *
 * tools/clickshot.mjs does one press, which is enough for the chrome's own
 * targets but not for what those targets put up: ペン's board and ｸﾞﾙｰﾌﾟ's
 * sixteen boxes are only reachable after the press that opens them.
 */
import { writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const [path, out, ...steps] = process.argv.slice(2);
const M = await createJwcad();
M._jw_init();
const n = M.lengthBytesUTF8(path) + 1, buf = M._malloc(n);
M.stringToUTF8(path, buf, n);
M._jw_open(buf);
M._free(buf);
for (const step of steps) {
    const [xs, ys, button] = step.trim().split(/\s+/);
    const x = Number(xs), y = Number(ys);
    M._jw_mouse(x, y);
    M._jw_click(x, y, button === 'right' ? 1 : 0);
}
const last = steps[steps.length - 1].trim().split(/\s+/);
M._jw_mouse(Number(last[0]), Number(last[1]));
const w = M._jw_width(), h = M._jw_height();
writeFileSync(out, Buffer.from(M.HEAPU8.buffer, M._jw_framebuffer(), w * h * 4));
