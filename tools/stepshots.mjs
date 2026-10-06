/* tools/seqshot.mjs と同じ押し方で、**1 段ごとに**画面を書き出します
 * （out.000.raw, out.001.raw, ...）。tools/stepcheck.py の SLOW=1 と、
 * 1 件だけ見たいときに使います（ふだんの比較は tools/stepfast.mjs）。
 * 各段のあと seqshot と同じく矢を最後の押しの所へ置き直してから撮ります。
 *
 *     node tools/stepshots.mjs orig/SAMPLE0.JWC tmp/x/port "20 312 left" "20 344 left"
 *
 * tools/clickshot.mjs does one press, which is enough for the chrome's own
 * targets but not for what those targets put up: ペン's board and ｸﾞﾙｰﾌﾟ's
 * sixteen boxes are only reachable after the press that opens them.
 *
 * 段の解釈は tools/stepcore.mjs（stepfast.mjs と共通）。
 */
import { writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';
import { runCase } from './stepcore.mjs';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const [path, out, ...steps] = process.argv.slice(2);
const M = await createJwcad();
await runCase(M, path, steps, (i, M, W, H) => {
    writeFileSync(out + '.' + String(i).padStart(3, '0') + '.raw',
                  Buffer.from(M.HEAPU8.buffer, M._jw_framebuffer(), W * H * 4));
    return false;
});
