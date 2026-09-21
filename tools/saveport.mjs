/* The port down the same road tools/saveroad.sh walks on the original.
 *
 *     node tools/saveport.mjs        # leaves tmp/save/portN.raw
 *
 * The steps are the original's, in the same order, so the two sets of
 * screens can be put side by side (tools/savediff.py).
 */
import { writeFileSync, mkdirSync } from 'node:fs';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const M = await createJwcad();
mkdirSync('tmp/save', { recursive: true });
const press = (x, y) => { M._jw_mouse(x, y); M._jw_click(x, y, 0); };
const shot = (n) => {
  const w = M._jw_width(), h = M._jw_height();
  writeFileSync('tmp/save/port' + n + '.raw',
                Buffer.from(M.HEAPU8.buffer, M._jw_framebuffer(), w * h * 4));
};

M._jw_init();
/* The original is started on SAMPLE0, so the port opens it first -- through
   its own 入出力, which is the only way in. */
press(30, 296); press(110, 8); press(180, 8);
/* The row SAMPLE0 is on, by name -- AUTO.JWC sorts before it, the way it
   does on the original's disk. */
let at = 0;
while (at < M._jw_file_count()
       && M.UTF8ToString(M._jw_file_name(at)) !== 'SAMPLE0 .JWC') at++;
press(300, 112 + at * 16);
press(300, 112 + at * 16);
M._jw_mouse(200, 200);

const steps = [[30, 296], [110, 8], [100, 8], [180, 8],
               'enter', 'enter', 'enter', 'enter',
               'enter', 'enter', 'enter', 'enter',
               [280, 8], [210, 8]];
steps.forEach((s, i) => {
  if (s === 'enter') M._jw_key(13);
  else press(s[0], s[1]);
  shot(i + 1);
});
console.log(M.UTF8ToString(M._jw_status()));
