/* The DXF the port writes, taken out of the module's own filesystem.
 *
 *     node tools/dxfout.mjs orig/SAMPLE0.JWC tmp/dxf/port.dxf
 *
 * It walks 入出力 → ①ﾌｧｲﾙ → ⑥ＤＸＦ → ① 保存 → ③ 新規 保存 → [Enter] →
 * ① 実 行, which is the road tools/origstr.sh walks on the original, and
 * then reads `orig/<name>.dxf` back out of MEMFS.
 */
import { writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const [path, out] = process.argv.slice(2);
const M = await createJwcad();
M._jw_init();
const n = M.lengthBytesUTF8(path) + 1, buf = M._malloc(n);
M.stringToUTF8(path, buf, n);
M._jw_open(buf);
M._free(buf);
const press = (x, y) => { M._jw_mouse(x, y); M._jw_click(x, y, 0); };
press(30, 296);                 /* 入出力 */
press(110, 8);                  /* ①ﾌｧｲﾙ */
press(460, 8);                  /* ⑥ＤＸＦ */
press(100, 8);                  /* ① 保存 */
press(460, 8);                  /* ③ 新規 保存 */
M._jw_key(13);                  /* [Enter] */
press(220, 8);                  /* ① 実 行 */
const stem = path.replace(/^.*\//, '').replace(/\.[^.]*$/, '');
writeFileSync(out, Buffer.from(M.FS.readFile('orig/' + stem + '.dxf')));
console.log('wrote', out);
