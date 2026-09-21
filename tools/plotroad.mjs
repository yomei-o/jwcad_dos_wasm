/* The plotter's road through the port's own menus, not the page's buttons.
 *
 *     node tools/plotroad.mjs orig/SAMPLE0.JWC
 *
 * 入出力 → ②ﾌﾟﾛｯﾀ → ③ﾌｧｲﾙ出力 → a name → ①確定 → ① 実行, which is where
 * the original writes a plotter file and the port writes the PDF and the
 * PNG instead.  The columns are the original's own bars (RESUME 4.44).
 */
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const path = process.argv[2] || 'orig/SAMPLE0.JWC';
const M = await createJwcad();
M._jw_init();
const n = M.lengthBytesUTF8(path) + 1, buf = M._malloc(n);
M.stringToUTF8(path, buf, n);
M._jw_open(buf);
M._free(buf);

const press = (x, y) => { M._jw_mouse(x, y); M._jw_click(x, y, 0); };
press(30, 296);                 // 入出力
press(220, 8);                  // ②ﾌﾟﾛｯﾀ
press(400, 8);                  // ③ﾌｧｲﾙ出力
for (const ch of 'PLOT') M._jw_key(ch.charCodeAt(0));
M._jw_key(13);                  // the name, then [Enter]
press(140, 8);                  // ①確定
press(164, 8);                  // ① 実行

if (!M._jw_plot_wanted()) { console.log('nothing asked for'); process.exit(1); }
console.log('name', JSON.stringify(M.UTF8ToString(M._jw_plot_name())));
let bad = 0;
for (const png of [0, 1]) {
  if (!M._jw_plot(png)) { console.log('plot failed'); process.exit(1); }
  const p = M._jw_saved(), len = M._jw_saved_size();
  const b = Buffer.from(M.HEAPU8.buffer, p, len);
  const ok = png
    ? b.subarray(0, 4).equals(Buffer.from([137, 80, 78, 71]))
    : b.subarray(0, 8).toString('latin1') === '%PDF-1.4';
  console.log(png ? 'png' : 'pdf', len, 'bytes', ok ? 'ok' : 'BAD');
  if (!ok) bad++;
}
process.exit(bad ? 1 : 0);
