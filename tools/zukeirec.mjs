/* The records a placed figure leaves, beside the original's.
 *
 *     DRAWING=SAMPLE0 AT="400 300" sh tools/zukeiplace.sh   # the original
 *     node tools/zukeirec.mjs                               # the port
 *
 * tools/zukeiplace.sh has the original register a figure, read it back, put
 * it down and **save the drawing**; this walks the port down the same road
 * and holds the entities it added against the ones the original's file has.
 * The two files are not the same byte for byte -- the original's save
 * upgrades the layer-scale table and rewrites the settings line -- so this
 * compares the records and not the file.
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
const AT = (env.AT || '400 300').split(';');

const M = await createJwcad();
const press = (x, y, right) => { M._jw_mouse(x, y); M._jw_click(x, y, right ? 1 : 0); };

M._jw_init();
press(30, 296); press(110, 8); press(180, 8);
{
  const want = (DRAWING + '        ').slice(0, 8) + '.JWC';
  let at = -1;
  for (let i = 0; i < M._jw_file_count(); i++) {
    if (M.UTF8ToString(M._jw_file_name(i)) === want) { at = i; break; }
  }
  if (at < 0) { console.log(`  ${DRAWING} is not in the list`); process.exit(1); }
  press(300, 112 + at * 16); press(300, 112 + at * 16);
}
press(30, 248);                 /* 図形 */
press(84, 8);                   /* ①登録 */
press(ax, ay, FIRST);
press(bx, by, true);
press(560, 8);                  /* nothing: see tools/zukeiplace.sh */
press(px, py);                  /* the base point */
press(296, 8);                  /* ①選択確定 */
for (const c of NAME) M._jw_key(c.charCodeAt(0));
M._jw_key(13);
press(210, 8);                  /* ① 実 行 */
press(140, 8);                  /* ②読込 */
press(190, 72);                 /* the figure's cell */
for (const at of AT) {
  const [x, y] = at.trim().split(/\s+/).map(Number);
  press(x, y);
}
if (!M._jw_save()) { console.log('  the port could not save'); process.exit(1); }
const mine = Buffer.from(M.HEAPU8.buffer, M._jw_saved(), M._jw_saved_size());
writeFileSync('tmp/zukei/port.JWC', mine);

/* Both files' counts and their last records. */
function counts(b) {
  const nl = b.indexOf(10);
  const csv = b.slice(nl + 1, b.indexOf(0, nl)).toString('latin1').split(',');
  return csv.slice(0, 4).map(Number);       /* lines, arcs, texts, points */
}
const theirs = readFileSync('tmp/zukei/placed.JWC');
const a = counts(mine), b = counts(theirs);
console.log(`  port  lines=${a[0]} arcs=${a[1]} texts=${a[2]} points=${a[3]}`);
console.log(`  orig  lines=${b[0]} arcs=${b[1]} texts=${b[2]} points=${b[3]}`);

/* Where the geometry starts: the original's save is 32 bytes longer than the
 * file it read, because it upgrades the sixteen layer-group scales. */
function dataAt(b, nl, na, nt, np, poolGuess) {
  for (const at of [800 + 1589, 800 + 1589 + 32, 800 + 1621, 800 + 1621 + 32]) {
    let ok = true;
    for (let k = 0; k < nl && ok; k++) {
      const t = b[at + k * 22 + 16], p = b[at + k * 22 + 17];
      if (!(t >= 1 && t <= 9 && p >= 1 && p <= 8)) ok = false;
    }
    if (ok) return at;
  }
  return -1;
}
const pa = dataAt(mine, ...a), pb = dataAt(theirs, ...b);
console.log(`  geometry at 0x${pa.toString(16)} / 0x${pb.toString(16)}`);
let bad = 0;
const n = Math.min(a[0], b[0]);
for (let k = 0; k < n; k++) {
  const ra = mine.slice(pa + k * 22, pa + k * 22 + 22);
  const rb = theirs.slice(pb + k * 22, pb + k * 22 + 22);
  if (!ra.equals(rb)) {
    if (bad < 6) {
      console.log(`  line ${k} differs`);
      console.log(`    port ${[...ra].map(v => v.toString(16).padStart(2, '0')).join(' ')}`);
      console.log(`    orig ${[...rb].map(v => v.toString(16).padStart(2, '0')).join(' ')}`);
    }
    bad++;
  }
}
console.log(bad === 0 ? `  all ${n} line records are the original's`
                      : `  ${bad} of ${n} line records differ`);
