/* HELP through the browser build's entry points (jw_click / jw_key), against the
 * pictures tools/helpcheck.sh took from the original (tmp/hc/*.raw).
 *
 *     sh tools/helpcheck.sh && node tools/helpwasm.mjs
 */
import { readFileSync } from 'node:fs';
import { createRequire } from 'node:module';

const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');
const M = await createJwcad();
M._jw_init();
const shot = () => Buffer.from(M.HEAPU8.buffer, M._jw_framebuffer(), M._jw_width() * M._jw_height() * 4);
const diff = (file) => {
  const a = shot(), b = readFileSync(file);
  let n = 0;
  for (let i = 0; i < 640 * 480; i++) if (a[i*4] !== b[i*4] || a[i*4+1] !== b[i*4+1] || a[i*4+2] !== b[i*4+2]) n++;
  return n;
};
let bad = 0;
const is = (what, got, want) => { if (got !== want) { console.log('FAIL', what, got, 'wanted', want); bad = 1; } else console.log('ok  ', what); };
const move = (x, y) => M._jw_mouse(x, y);
const press = (x, y, r = 0) => { move(x, y); M._jw_click(x, y, r); move(x, y); };

move(620, 470);
const base = Buffer.from(shot());
press(620, 470);
is('HELP opens (入出力)', diff('tmp/hc/102.raw'), 0);
is('help_up', M._jw_help_up(), 1);
M._jw_key(49);  is('key 1', diff('tmp/hc/103_0.raw'), 0);
M._jw_key(0x121); M._jw_key(0x121); M._jw_key(0x121);   // down x3 -> 106
is('arrow down x3', diff('tmp/hc/106_3.raw'), 0);
M._jw_key(52);  is('key 4', diff('tmp/hc/118_5.raw'), 0);
M._jw_key(53);  is('key 5', diff('tmp/hc/122_7.raw'), 0);
M._jw_key(13);  is('Enter', diff('tmp/hc/1_11.raw'), 0);
M._jw_key(32);  is('Space does nothing', diff('tmp/hc/1_11.raw'), 0);
press(100, 8);  move(620, 470); is('top (1) next', diff('tmp/hc/2_12.raw'), 0);
press(300, 200, 1); move(620, 470); is('right press = previous', diff('tmp/hc/1_11.raw'), 0);
M._jw_key(27);
is('ESC closes', M._jw_help_up(), 0);
move(620, 470);
let n = 0; const a = shot();
for (let i = 0; i < 640 * 480 * 4; i++) if (a[i] !== base[i]) n++;
is('after ESC the screen is as before HELP', n, 0);
press(620, 470);
press(100, 72);
is('a menu press closes HELP', M._jw_help_up(), 0);
process.exit(bad);
