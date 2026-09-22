/* The port down 図形's registration road, beside the original's shots.
 *
 *     sh   tools/zukei.sh            # the original: tmp/zukei/s0..s8.raw
 *     node tools/zukeiport.mjs       # the port, and the count of pixels apart
 *
 * The presses are the ones tools/zukei.sh makes, in the same order, so the
 * two can be put side by side a step at a time.
 */
import { readFileSync, writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const M = await createJwcad();
const press = (x, y, right) => { M._jw_mouse(x, y); M._jw_click(x, y, right ? 1 : 0); };
const shot = () => Buffer.from(M.HEAPU8.buffer, M._jw_framebuffer(),
                               M._jw_width() * M._jw_height() * 4);

const W = 640, H = 480;
/* x 66..69 is the session clock, which is never the same twice. */
function apart(a, b) {
  let n = 0;
  for (let y = 0; y < H; y++) {
    for (let x = 0; x < W; x++) {
      if (x >= 66 && x <= 69) continue;
      const i = (y * W + x) * 4;
      if (a[i] !== b[i] || a[i + 1] !== b[i + 1] || a[i + 2] !== b[i + 2]) n++;
    }
  }
  return n;
}

M._jw_init();
/* the original is started on SAMPLE0; the port opens it through 入出力 */
press(30, 296); press(110, 8); press(180, 8);
for (let i = 0; i < M._jw_file_count(); i++) {
  if (M.UTF8ToString(M._jw_file_name(i)) !== 'SAMPLE0 .JWC') continue;
  press(300, 112 + i * 16); press(300, 112 + i * 16);
  break;
}

const road = [
  ['図形', () => press(30, 248)],
  ['①登録', () => press(84, 8)],
  ['範囲の一隅', () => press(170, 130)],
  ['もう一隅 (右)', () => press(330, 260, true)],
  ['①範囲 確定', () => press(560, 8)],
  ['基準点', () => press(170, 130)],
  ['①選択確定', () => press(296, 8)],
  ['名前と [Enter]', () => { for (const c of 'BOX') M._jw_key(c.charCodeAt(0)); M._jw_key(13); }],
  ['① 実 行', () => press(210, 8)],
];

let worst = 0;
road.forEach(([what, go], i) => {
  go();
  const mine = shot();
  writeFileSync('tmp/zukei/p' + i + '.raw', mine);
  let theirs;
  try {
    theirs = readFileSync('tmp/zukei/s' + i + '.raw');
  } catch (err) {
    console.log(`  ${i} ${what}: (no shot from the original)`);
    return;
  }
  const n = apart(mine, theirs);
  if (n > worst) worst = n;
  console.log(`  ${i} ${what}: ${n} px`);
});
console.log(worst === 0 ? 'the whole road is the original\'s' : `worst ${worst} px`);
