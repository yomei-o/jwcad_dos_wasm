/* The port down ｵﾌﾟｼｮﾝ ①建具平面's road, beside the original's shots.
 *
 *     sh   tools/optpick.sh 1 250 40 300 139 350 200
 *     node tools/tateguport.mjs 250 40 300 139 350 200
 *
 * The same presses in the same order: ｵﾌﾟｼｮﾝ, the item, then each point.
 * tools/optpick.sh shoots after the item and after every point, so shot 0 is
 * the sixteen shapes and the rest follow the road.
 */
import { readFileSync, writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const env = process.env;
const DRAWING = env.DRAWING || 'SAMPLE0';
const ITEM = Number(env.ITEM || 1);
const pts = process.argv.slice(2).map(Number);

const M = await createJwcad();
const press = (x, y, right) => { M._jw_mouse(x, y); M._jw_click(x, y, right ? 1 : 0); };
const shot = () => Buffer.from(M.HEAPU8.buffer, M._jw_framebuffer(),
                               M._jw_width() * M._jw_height() * 4);

const W = 640, H = 480;
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
/* The original is started on the drawing; the port opens it through 入出力. */
press(30, 296); press(110, 8); press(180, 8);
{
  const want = (DRAWING + '        ').slice(0, 8) + '.JWC';
  for (let i = 0; i < M._jw_file_count(); i++) {
    if (M.UTF8ToString(M._jw_file_name(i)) !== want) continue;
    press(300, 112 + i * 16); press(300, 112 + i * 16);
    break;
  }
}
/* ｵﾌﾟｼｮﾝ, then its item -- the columns tools/optpick.sh uses. */
const BX = [0, 100, 172, 228, 300, 356, 420, 492, 556][ITEM] || 100;
press(30, 280);
press(BX, 8);

const road = [['the sixteen shapes', () => {}]];
for (let i = 0; i + 1 < pts.length; i += 2) {
  const [x, y] = [pts[i], pts[i + 1]];
  road.push([`(${x},${y})`, () => press(x, y)]);
}

let worst = 0;
road.forEach(([what, go], i) => {
  go();
  const mine = shot();
  writeFileSync('tmp/optpick/p' + i + '.raw', mine);
  let theirs;
  try {
    theirs = readFileSync('tmp/optpick/s' + i + '.raw');
  } catch (err) {
    console.log(`  ${i} ${what}: (no shot from the original)`);
    return;
  }
  const n = apart(mine, theirs);
  if (n > worst) worst = n;
  console.log(`  ${i} ${what}: ${n} px`);
});
console.log(worst === 0 ? 'the whole road is the original\'s' : `worst ${worst} px`);
