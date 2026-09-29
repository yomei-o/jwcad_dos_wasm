/* 移植を押して回り、各ステップのあとのコマンドの状態を出します（検査用）。
 *
 *     node tools/cmdstate.mjs orig/SAMPLE0.JWC "90 104 left" "key bs" ...
 */
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
for (let i = 1; i <= 10; i++) KEY['f' + i] = 0x100 + i;
for (const step of steps) {
    const w = step.trim().split(/\s+/);
    if (w[0] === 'type') {
        for (const ch of step.trim().slice(5)) M._jw_key(ch.charCodeAt(0));
    } else if (w[0] === 'key') {
        M._jw_key(KEY[w[1]] ?? w[1].charCodeAt(0));
    } else if (w[0] === 'move') {
        M._jw_mouse(Number(w[1]), Number(w[2]));
    } else {
        const x = Number(w[0]), y = Number(w[1]);
        M._jw_mouse(x, y);
        M._jw_click(x, y, w[2] === 'right' ? 1 : 0);
    }
    console.log(step.padEnd(16), M.UTF8ToString(M._jw_cmd_state()));
}
