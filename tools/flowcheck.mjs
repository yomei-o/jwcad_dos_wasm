/* The whole way through, in one session of the port.
 *
 *     node tools/flowcheck.mjs orig/SAMPLE1.JWC
 *
 *   open a drawing -> draw a line -> save -> open what was saved ->
 *   入出力 ②ﾌﾟﾛｯﾀ ③ﾌｧｲﾙ出力 ① 実行 -> PDF and PNG -> read both back
 *
 * Every piece has a check of its own, and each of those starts from a fresh
 * module.  A person does not: they open a drawing, draw, save, and plot the
 * same session.  This is that session.
 *
 * The line drawn at the start is what makes the end mean something -- the
 * drawing saved must have one line more than the one opened, and the PDF
 * must have one segment more than the PDF of the original.  A chain that
 * quietly plots the drawing as it was loaded passes every other check here.
 */
import { createRequire } from 'node:module';
import { execFileSync } from 'node:child_process';
import { mkdirSync, writeFileSync } from 'node:fs';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const path = process.argv[2] || 'orig/SAMPLE1.JWC';
mkdirSync('tmp/flow', { recursive: true });
let bad = 0;
const ok = (c, w) => { console.log((c ? '  ok   ' : '  FAIL ') + w); if (!c) bad++; };

const M = await createJwcad();
M._jw_init();

const open = (p) => {
  const n = M.lengthBytesUTF8(p) + 1, b = M._malloc(n);
  M.stringToUTF8(p, b, n);
  const r = M._jw_plot ? M._jw_open(b) : 0;
  M._free(b);
  return r;
};
/* The counts the drawing carries in its own header: lines, arcs, texts,
   points (the second line of the 200-byte preamble). */
const counts = (bytes) => Buffer.from(bytes.subarray(0xc8, 0xc8 + 40))
    .toString('latin1').split(',').slice(0, 4).map(Number);
const plot = (png) => {
  if (!M._jw_plot(png)) { console.error('jw_plot failed'); process.exit(1); }
  return Buffer.from(Buffer.from(M.HEAPU8.buffer, M._jw_saved(), M._jw_saved_size()));
};
const read = (file, which) => JSON.parse(execFileSync(process.execPath,
    ['tools/' + which + 'read.mjs', file], { encoding: 'utf8' }));

/* 1. open, and plot it as it is, to have something to compare against */
ok(!!open(path), path + ' opened');
writeFileSync('tmp/flow/before.pdf', plot(0));
const before = read('tmp/flow/before.pdf', 'pdf');

/* 2. draw one line: ／ (menu item 3) and two presses in the drawing area.
      The menu's geometry is tools/press.sh's -- x 90, y 64 + 16(n-1) + 8. */
const press = (x, y) => { M._jw_mouse(x, y); M._jw_click(x, y, 0); };
press(90, 104);
press(200, 150);
press(400, 300);

/* 3. save it, the way the page's ダウンロード does */
if (!M._jw_save()) { console.error('jw_save failed'); process.exit(1); }
const saved = Buffer.from(Buffer.from(M.HEAPU8.buffer, M._jw_saved(), M._jw_saved_size()));
writeFileSync('tmp/flow/FLOW.JWC', saved);
M.FS.writeFile('FLOW.JWC', saved);

const was = counts(Buffer.from(require('node:fs').readFileSync(path)));
const now = counts(saved);
ok(now[0] === was[0] + 1,
   'saved with the line that was drawn (' + was[0] + ' -> ' + now[0] + ' lines)');

/* 4. open what was saved -- through jwc_load and fopen, as a fresh drawing */
ok(!!open('FLOW.JWC'), 'and the port reads its own file back');

/* 5. plot it the way a person does: 入出力 ②ﾌﾟﾛｯﾀ ③ﾌｧｲﾙ出力, a name, ① 実行 */
press(30, 296);
press(220, 8);
press(400, 8);
for (const ch of 'FLOW') M._jw_key(ch.charCodeAt(0));
M._jw_key(13);
press(140, 8);
press(164, 8);
ok(!!M._jw_plot_wanted(), 'the menus asked for a plot');
ok(M.UTF8ToString(M._jw_plot_name()) === 'FLOW',
   'under the name that was typed (' + M.UTF8ToString(M._jw_plot_name()) + ')');

/* 6. the two files, read back by something that did not write them */
writeFileSync('tmp/flow/out.pdf', plot(0));
writeFileSync('tmp/flow/out.png', plot(1));
const pdf = read('tmp/flow/out.pdf', 'pdf');
const png = read('tmp/flow/out.png', 'png');

ok(true, 'the PDF reads back (' + pdf.mm.join('x') + 'mm, ' + pdf.segments
         + ' lines, ' + pdf.texts.length + ' text)');
ok(true, 'the PNG decodes (' + png.size.join('x') + ', ' + png.ink + ' ink)');
ok(pdf.segments === before.segments + 1,
   'and the line that was drawn is in it ('
   + before.segments + ' -> ' + pdf.segments + ' segments)');

console.log(bad ? '  something is broken' : '  the whole way through works');
process.exit(bad ? 1 : 0);
