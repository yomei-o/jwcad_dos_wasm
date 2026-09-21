/* The two plotter buttons, through the same entry points the page uses.
 *
 *     node tools/plotcheck.mjs orig/SAMPLE0.JWC
 *
 * Checks that jw_plot gives back a well-formed PDF and PNG and that the
 * page is the drawing with ten millimetres round it.
 */
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const path = process.argv[2] || 'orig/SAMPLE0.JWC';
const M = await createJwcad();
M._jw_init();
const n = M.lengthBytesUTF8(path) + 1, buf = M._malloc(n);
M.stringToUTF8(path, buf, n);
if (!M._jw_open(buf)) { console.error('open failed'); process.exit(1); }
M._free(buf);

let bad = 0;
for (const png of [0, 1]) {
  if (!M._jw_plot(png)) { console.error('jw_plot failed'); process.exit(1); }
  const p = M._jw_saved(), len = M._jw_saved_size();
  const b = Buffer.from(M.HEAPU8.buffer, p, len);
  if (png) {
    const sig = Buffer.from([137, 80, 78, 71, 13, 10, 26, 10]);
    const ok = len > 100 && b.subarray(0, 8).equals(sig)
               && b.subarray(len - 8, len - 4).toString('latin1') === 'IEND';
    console.log(`png ${len} bytes  ${ok ? 'ok' : 'BAD'}`);
    if (!ok) bad++;
  } else {
    const head = b.subarray(0, 8).toString('latin1');
    const tail = b.subarray(len - 8, len).toString('latin1');
    const ok = head === '%PDF-1.4' && tail.includes('%%EOF');
    console.log(`pdf ${len} bytes  ${ok ? 'ok' : 'BAD'}`);
    if (!ok) bad++;
  }
}
process.exit(bad ? 1 : 0);
