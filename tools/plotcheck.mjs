/* The two plotter buttons, through the same entry points the page uses.
 *
 *     node tools/plotcheck.mjs orig/SAMPLE0.JWC
 *
 * jw_plot gives back a PDF and a PNG; this writes them out and then **reads
 * them back with something that knows nothing about how they were made**
 * (tools/pdfread.mjs, tools/pngread.mjs).  Checking the first eight bytes
 * and the last, which is what this did before, is a check a broken file
 * passes: the deflate bug that emitted every byte twice left a PNG with a
 * good signature and a good IEND that no viewer would open.
 */
import { createRequire } from 'node:module';
import { execFileSync } from 'node:child_process';
import { mkdirSync, writeFileSync } from 'node:fs';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const path = process.argv[2] || 'orig/SAMPLE0.JWC';
const stem = 'tmp/plotcheck/' + path.replace(/^.*[/]/, '').replace(/\.[^.]*$/, '');
const M = await createJwcad();
M._jw_init();
const n = M.lengthBytesUTF8(path) + 1, buf = M._malloc(n);
M.stringToUTF8(path, buf, n);
if (!M._jw_open(buf)) { console.error('open failed'); process.exit(1); }
M._free(buf);

mkdirSync('tmp/plotcheck', { recursive: true });
let bad = 0;
for (const png of [0, 1]) {
  if (!M._jw_plot(png)) { console.error('jw_plot failed'); process.exit(1); }
  const p = M._jw_saved(), len = M._jw_saved_size();
  const b = Buffer.from(Buffer.from(M.HEAPU8.buffer, p, len));   // copy: the heap moves
  const file = stem + (png ? '.png' : '.pdf');

  writeFileSync(file, b);
  try {
    const out = execFileSync(process.execPath,
        [png ? 'tools/pngread.mjs' : 'tools/pdfread.mjs', file],
        { encoding: 'utf8' });
    const got = JSON.parse(out);

    console.log((png ? 'png ' : 'pdf ') + len + ' bytes  ok  '
                + (png ? got.size.join('x') + ' ' + got.ink + ' ink'
                       : got.mm.join('x') + 'mm ' + got.segments + ' lines '
                         + got.texts.length + ' text'));
  } catch (err) {
    console.log((png ? 'png ' : 'pdf ') + len + ' bytes  BAD');
    process.stderr.write(String(err.stderr || err.message));
    bad++;
  }
}
process.exit(bad ? 1 : 0);
