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
/* `key enter`, `key esc`, `key bs` -- the same words the emulator's script
 * takes, so one list of steps drives both halves. */
const KEY = { enter: 13, esc: 27, bs: 8, space: 32 };
let lastPress = null;
for (const step of steps) {
    const w = step.trim().split(/\s+/);
    if (w[0] === 'type') {
        for (const ch of step.trim().slice(5)) M._jw_key(ch.charCodeAt(0));
        continue;
    }
    if (w[0] === 'key') {
        const k = KEY[w[1]] ?? Number(w[1]);
        M._jw_key(k);
        continue;
    }
    const x = Number(w[0]), y = Number(w[1]);
    M._jw_mouse(x, y);
    M._jw_click(x, y, w[2] === 'right' ? 1 : 0);
    lastPress = [x, y];
}
if (lastPress) M._jw_mouse(lastPress[0], lastPress[1]);
const w = M._jw_width(), h = M._jw_height();
writeFileSync(out, Buffer.from(M.HEAPU8.buffer, M._jw_framebuffer(), w * h * 4));
