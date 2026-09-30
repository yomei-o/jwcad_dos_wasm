/* tools/seqshot.mjs と同じ押し方で、**1 段ごとに**画面を書き出します
 * （out.000.raw, out.001.raw, ...）。tools/stepcheck.py が使います。
 * 各段のあと seqshot と同じく矢を最後の押しの所へ置き直してから撮ります。
 *
 *     node tools/stepshots.mjs orig/SAMPLE0.JWC tmp/x/port "20 312 left" "20 344 left"
 *
 * tools/clickshot.mjs does one press, which is enough for the chrome's own
 * targets but not for what those targets put up: ペン's board and ｸﾞﾙｰﾌﾟ's
 * sixteen boxes are only reachable after the press that opens them.
 */
import { writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const [path, out, ...steps] = process.argv.slice(2);
const M = await createJwcad();
/* 引いた線を並べる窓（本物の tools/frametrace.sh と突き合わせるため）。 */
if (process.env.JW_LINES) M._jw_lines_trace(1);
M._jw_init();
/* **図面は焼き込んだものを使いますが、ディスクにあればそちらを入れ直します。**
   tools/build_wasm.sh は orig/*.JWC を --embed-file で焼き込むので、
   そのあとに作った図面（tools/mkhoraku.py の TEST8 など）は、作り直さない
   かぎり中に入っていません——線が一本も出ない画面と比べることになります。 */
try {
    const { readFileSync, existsSync } = await import('node:fs');
    if (existsSync(path)) {
        const at = path.startsWith('/') ? path : '/' + path;
        const dir = at.slice(0, at.lastIndexOf('/'));
        try { M.FS.mkdirTree(dir); } catch { /* もうある */ }
        M.FS.writeFile(at, new Uint8Array(readFileSync(path)));
    }
} catch { /* ブラウザでは何もしません */ }
const n = M.lengthBytesUTF8(path) + 1, buf = M._malloc(n);
M.stringToUTF8(path, buf, n);
M._jw_open(buf);
M._free(buf);
/* `key enter`, `key esc`, `key bs` -- the same words the emulator's script
 * takes, so one list of steps drives both halves. */
const KEY = { enter: 13, esc: 27, bs: 8, space: 32 };
/* The function keys, the same numbers src/cmd.h gives them. */
for (let i = 1; i <= 10; i++) KEY['f' + i] = 0x100 + i;
let lastPress = null;
const W = M._jw_width(), H = M._jw_height();
const shot = (i) => {
    if (lastPress) M._jw_mouse(lastPress[0], lastPress[1]);
    writeFileSync(out + '.' + String(i).padStart(3, '0') + '.raw',
                  Buffer.from(M.HEAPU8.buffer, M._jw_framebuffer(), W * H * 4));
};
let si = 0;
for (const step of steps) {
    const w = step.trim().split(/\s+/);
    if (w[0] === 'type') {
        for (const ch of step.trim().slice(5)) M._jw_key(ch.charCodeAt(0));
        shot(si++);
        continue;
    }
    /* 押さずに矢だけ動かします。帯の仮の絵（ゴムひも・次の弧）は矢の
     * 先で決まるので、**押した点と矢の先が同じ**ところでは何も出ない
     * ことが多く、そこだけ見ていると仮の絵を比べられません。 */
    if (w[0] === 'move') {
        const mx = Number(w[1]), my = Number(w[2]);
        M._jw_mouse(mx, my);
        lastPress = [mx, my];
        shot(si++);
        continue;
    }
    if (w[0] === 'key') {
        /* **Only the words the emulator also knows.**  `key 13` reached the
         * port as Enter and the emulator as nothing at all (its script takes
         * `enter`, a single character or `xHH`), so a run that typed a value
         * and pressed Enter compared a committed panel against one still
         * being typed into -- 2078 pixels that were the check's fault. */
        const k = KEY[w[1]]
                ?? (w[1].length === 1 ? w[1].charCodeAt(0)
                  : /^x[0-9a-fA-F]{2}$/.test(w[1]) ? parseInt(w[1].slice(1), 16)
                  : undefined);
        if (k === undefined) {
            throw new Error('unknown key `' + w[1] + '` -- the emulator takes '
                            + Object.keys(KEY).join(', ') + ', one character '
                            + 'or xHH');
        }
        M._jw_key(k);
        shot(si++);
        continue;
    }
    const x = Number(w[0]), y = Number(w[1]);
    M._jw_mouse(x, y);
    M._jw_click(x, y, w[2] === 'right' ? 1 : 0);
    lastPress = [x, y];
    shot(si++);
}
