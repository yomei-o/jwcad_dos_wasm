/* Press a panel target, type, [Enter], and write the screen.
 *
 *     node tools/askshot.mjs orig/SAMPLE0.JWC 18 328 2 tmp/out.raw
 *
 * 紙 and the scale beside it both ask for a number in a field along the top
 * and take it on [Enter] (RESUME 4.36), so checking them means typing, which
 * tools/clickshot.mjs does not do.
 */
import { writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');
const [path, xs, ys, typed, out] = process.argv.slice(2);
const x = Number(xs), y = Number(ys);
const M = await createJwcad();
M._jw_init();
const n = M.lengthBytesUTF8(path) + 1, buf = M._malloc(n);
M.stringToUTF8(path, buf, n);
M._jw_open(buf);
M._free(buf);
M._jw_mouse(x, y);
M._jw_click(x, y, 0);
for (const ch of typed) M._jw_key(ch.charCodeAt(0));
M._jw_key(13);
M._jw_mouse(x, y);
const w = M._jw_width(), h = M._jw_height();
writeFileSync(out, Buffer.from(M.HEAPU8.buffer, M._jw_framebuffer(), w * h * 4));
