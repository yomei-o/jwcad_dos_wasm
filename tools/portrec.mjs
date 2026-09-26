/* 移植を押して回り、保存したバイト列から弧のレコードを読みます。
 *
 *     node portrec.mjs orig/SAMPLE0.JWC "30 232 left" "420 8 left" ...
 */
import { writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const [path, ...steps] = process.argv.slice(2);
const M = await createJwcad();
M._jw_init();
const n = M.lengthBytesUTF8(path) + 1, buf = M._malloc(n);
M.stringToUTF8(path, buf, n);
M._jw_open(buf);
M._free(buf);
const KEY = { enter: 13, esc: 27, bs: 8, space: 32 };
/* ﾌｧﾝｸｼｮﾝｷｰ。tools/seqshot.mjs と同じ番号です——これが無いと
 * `key f1` が 'f' の一文字として届き、黙って別のことを測ります。 */
for (let i = 1; i <= 10; i++) KEY['f' + i] = 0x100 + i;
for (const step of steps) {
    const w = step.trim().split(/\s+/);
    if (w[0] === 'type') {
        for (const ch of step.trim().slice(5)) M._jw_key(ch.charCodeAt(0));
        continue;
    }
    if (w[0] === 'key') { M._jw_key(KEY[w[1]] ?? w[1].charCodeAt(0)); continue; }
    const x = Number(w[0]), y = Number(w[1]);
    M._jw_mouse(x, y);
    M._jw_click(x, y, w[2] === 'right' ? 1 : 0);
}
M._jw_save();
const p = M._jw_saved(), len = M._jw_saved_size();
const out = Buffer.from(M.HEAPU8.buffer, p, len);
writeFileSync(process.env.OUT || 'tmp/portrec.JWC', out);
console.log('wrote', len, 'bytes');
