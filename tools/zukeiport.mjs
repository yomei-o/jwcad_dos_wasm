/* The port down 図形's registration road, beside the original's shots.
 *
 *     sh   tools/zukei.sh            # the original: tmp/zukei/s0..s8.raw
 *     node tools/zukeiport.mjs       # the port, and the count of pixels apart
 *
 * **Run the two together.**  Both take the same DRAWING, RANGE, BASE, NAME,
 * FIRST and BASEBTN out of the environment, and the shots tools/zukei.sh
 * leaves are of whatever it was last asked for, so the pair has to be given
 * the same thing.  tools/zukeicase.sh does both in one go.
 *
 * The presses are the ones tools/zukei.sh makes, in the same order, so the
 * two can be put side by side a step at a time; and the file each one wrote
 * is held against the other at the end, byte for byte.
 */
import { readFileSync, writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const env = process.env;
const DRAWING = env.DRAWING || 'SAMPLE0';
const NAME = env.NAME || 'BOX';
const [ax, ay, bx, by] = (env.RANGE || '170 130 330 260').split(/\s+/).map(Number);
const [px, py] = (env.BASE || '170 130').split(/\s+/).map(Number);
const FIRST = env.FIRST === 'right';
const BASEBTN = env.BASEBTN === 'right';

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
/* the original is started on the drawing; the port opens it through 入出力 */
press(30, 296); press(110, 8); press(180, 8);
{
  const want = (DRAWING + '        ').slice(0, 8) + '.JWC';
  let found = false;
  for (let i = 0; i < M._jw_file_count(); i++) {
    if (M.UTF8ToString(M._jw_file_name(i)) !== want) continue;
    press(300, 112 + i * 16); press(300, 112 + i * 16);
    found = true;
    break;
  }
  if (!found) {
    console.log(`  ${DRAWING} is not in the list`);
    process.exit(1);
  }
}

const road = [
  ['図形', () => press(30, 248)],
  ['①登録', () => press(84, 8)],
  ['範囲の一隅', () => press(ax, ay, FIRST)],
  ['もう一隅 (右)', () => press(bx, by, true)],
  ['①範囲 確定', () => press(560, 8)],
  ['基準点', () => press(px, py, BASEBTN)],
  ['①選択確定', () => press(296, 8)],
  ['名前と [Enter]', () => { for (const c of NAME) M._jw_key(c.charCodeAt(0)); M._jw_key(13); }],
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

/* And the file itself.  The original leaves it in tmp/zukei/root/ZUKEI_1_/;
 * the port writes into its own filesystem, so it comes back through FS. */
let mineFile = null;
let theirsFile = null;
try {
  mineFile = Buffer.from(M.FS.readFile(`orig/ZUKEI_1_/${NAME}.JWK`));
} catch (err) { /* it wrote none */ }
try {
  theirsFile = readFileSync(`tmp/zukei/root/ZUKEI_1_/${NAME}.JWK`);
} catch (err) { /* nor did the original */ }
if (!mineFile && !theirsFile) {
  console.log(`  ${NAME}.JWK: neither wrote a file`);
} else if (!mineFile) {
  console.log(`  ${NAME}.JWK: the port wrote none, the original ${theirsFile.length} bytes`);
} else if (!theirsFile) {
  console.log(`  ${NAME}.JWK: the original wrote none, the port ${mineFile.length} bytes`);
} else {
  writeFileSync('tmp/zukei/port.JWK', mineFile);
  if (mineFile.length !== theirsFile.length) {
    console.log(`  ${NAME}.JWK: ${mineFile.length} bytes against ${theirsFile.length}`);
  } else {
    const off = [];
    for (let i = 0; i < mineFile.length; i++) {
      if (mineFile[i] !== theirsFile[i]) off.push(i);
    }
    console.log(off.length === 0
      ? `  ${NAME}.JWK: the original's ${mineFile.length} bytes exactly`
      : `  ${NAME}.JWK: ${off.length} bytes differ, first at 0x${off[0].toString(16)}`);
    if (off.length) {
      const a = off[0] & ~15;
      const hex = (b) => [...b.slice(a, a + 16)].map(v => v.toString(16).padStart(2, '0')).join(' ');
      console.log('    port ' + hex(mineFile));
      console.log('    orig ' + hex(theirsFile));
    }
  }
}
