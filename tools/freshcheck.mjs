/* Does the program work before any drawing has been opened?
 *
 *     node tools/freshcheck.mjs
 *
 * The original started with no file on its command line has an **empty
 * drawing** in hand, not none: it draws an empty sheet and every command
 * works on it.  The port had none, and then 文字 and every other command did
 * nothing at all until a drawing was opened -- which a visitor found within
 * a minute of the page going up.
 *
 * So this is the page as it is when it opens, and then the commands, one
 * after another, with nothing loaded.
 */
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const M = await createJwcad();
let bad = 0;
const ok = (c, w) => { console.log((c ? '  ok   ' : '  FAIL ') + w); if (!c) bad++; };
const press = (x, y, right) => { M._jw_mouse(x, y); M._jw_click(x, y, right ? 1 : 0); };
const status = () => M.UTF8ToString(M._jw_status());
/* Straight out of the drawing.  The status line only changes when one is
   opened, so it cannot answer "did that command put anything down". */
const counts = () => [0, 1, 2, 3].map(i => M._jw_count(i));
const shown = () => counts().join('/') + ' (lines/arcs/texts/points)';
/* The menu's geometry, the original's: item n is at x 90 (1..15) or x 30
   (16..30), y = 64 + 16(row) + 8 -- tools/press.sh. */
const menu = (n) => press(n <= 15 ? 90 : 30, 64 + 16 * ((n - 1) % 15) + 8);

M._jw_init();
ok(String(counts()) === '0,0,0,0',
   'the page opens with an empty sheet (' + shown() + ')');

/* ／ -- a line, with nothing loaded. */
menu(3);
press(200, 150);
press(400, 300);
ok(counts() && counts()[0] === 1,
   '／ draws a line on it (' + shown() + ')');

/* □ -- a box, four more lines. */
menu(4);
press(250, 180);
press(450, 320);
ok(counts() && counts()[0] === 5,
   '□ draws a box (' + shown() + ')');

/* ○ -- a circle. */
menu(11);
press(300, 200);
press(400, 200);
ok(counts() && counts()[1] === 1,
   '○ draws a circle (' + shown() + ')');

/* 文字 (13) -- the one the visitor named. */
menu(13);
press(300, 250);
for (const ch of 'ABC') M._jw_key(ch.charCodeAt(0));
M._jw_key(13);
ok(counts() && counts()[2] === 1,
   '文字 writes a string (' + shown() + ')');

/* 仮実点 (22).  A press drops a 仮点, which is not an entity -- the counts
   do not move, and the original's do not either. */
menu(22);
press(350, 350);
ok(M._jw_count(4) === 1,
   '仮実点 drops a 仮点 (' + M._jw_count(4) + ')  -- it is not an entity,'
   + ' so the counts do not move, which is what the original does');

/* And the plotter, which walks whatever is there. */
ok(!!M._jw_plot(0), 'and プロッタ出力 makes a PDF of it');
process.exit(bad ? 1 : 0);
