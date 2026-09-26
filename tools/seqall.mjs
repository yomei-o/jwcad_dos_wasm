/* 一覧ぜんぶを **node 1 つで** 測ります。
 *
 *     node tools/seqall.mjs tools/cases/calc.txt [名前の一部]
 *
 * 1 件ごとに node と python を起こすと、測りそのものより子プロセスを作る
 * ほうが高くつきます（Git Bash では 1 つ 50ms 近い）。本物の絵は
 * tmp/origcache に取ってあるので、ここでは**移植を走らせて読み比べる
 * だけ**です。取ってない件は `(本物まだ)` と出して、tools/runcases.sh に
 * 撮らせてから、もう一度これを走らせます。
 *
 * 一覧は 1 行 1 件、名前と手順はタブ、手順どうしは `|`。名前が `~` で
 * 始まるものは「分かっている残り」で、数に入れません。
 */
import { readFileSync, existsSync, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const [list, only] = process.argv.slice(2);
const DRAWING = process.env.DRAWING || 'SAMPLE0';
const BOOT = process.env.BOOT || '40000000';
const WAIT = process.env.WAIT || '26000000';
const CACHE = process.env.ORIGCACHE || 'tmp/origcache';

const KEY = { enter: 13, esc: 27, bs: 8, space: 32 };
for (let i = 1; i <= 10; i++) KEY['f' + i] = 0x100 + i;

/* tools/seqcheck.sh と**同じ鍵**にします（printf '%s|%s|%s|%s' の形）。 */
function keyOf(steps) {
    const s = `${DRAWING}|${BOOT}|${WAIT}|${steps.join(' ')}`;
    return createHash('md5').update(s).digest('hex');
}

const rows = readFileSync(list, 'utf8').split(/\r?\n/)
    .filter(l => l && !l.startsWith('#'))
    .map(l => { const [name, steps] = l.split('\t');
                return { name, steps: steps.split('|') }; })
    .filter(r => !only || r.name.includes(only));

const M = await createJwcad();
let fail = 0, miss = 0, known = 0;
const missing = [];
for (const r of rows) {
    const path = CACHE + '/' + keyOf(r.steps) + '.raw';
    if (!existsSync(path)) {
        console.log(r.name.padEnd(16) + ' (本物まだ)');
        missing.push(r.name + '\t' + r.steps.join('|'));
        miss++;
        continue;
    }
    /* **1 件ごとに開き直します。** jw_open は図面を読み直して状態を
     * 戻すので、前の件の押しが次に残りません。 */
    M._jw_init();
    const p = 'orig/' + DRAWING + '.JWC';
    const n = M.lengthBytesUTF8(p) + 1, buf = M._malloc(n);
    M.stringToUTF8(p, buf, n);
    M._jw_open(buf);
    M._free(buf);
    let last = null;
    for (const step of r.steps) {
        const w = step.trim().split(/\s+/);
        if (w[0] === 'type') {
            for (const ch of step.trim().slice(5)) M._jw_key(ch.charCodeAt(0));
            continue;
        }
        if (w[0] === 'move') {
            const mx = Number(w[1]), my = Number(w[2]);
            M._jw_mouse(mx, my);
            last = [mx, my];
            continue;
        }
        if (w[0] === 'key') {
            const k = KEY[w[1]]
                    ?? (w[1].length === 1 ? w[1].charCodeAt(0)
                      : /^x[0-9a-fA-F]{2}$/.test(w[1])
                        ? parseInt(w[1].slice(1), 16) : undefined);
            if (k === undefined) throw new Error('unknown key ' + w[1]);
            M._jw_key(k);
            continue;
        }
        const x = Number(w[0]), y = Number(w[1]);
        M._jw_mouse(x, y);
        M._jw_click(x, y, w[2] === 'right' ? 1 : 0);
        last = [x, y];
    }
    if (last) M._jw_mouse(last[0], last[1]);
    const ww = M._jw_width(), hh = M._jw_height();
    const port = Buffer.from(M.HEAPU8.buffer, M._jw_framebuffer(), ww * hh * 4);
    const orig = readFileSync(path);
    let n2 = 0;
    for (let i = 0; i < ww * hh; i++) {
        const o = i * 4;
        if (orig[o] !== port[o] || orig[o + 1] !== port[o + 1]
            || orig[o + 2] !== port[o + 2]) n2++;
    }
    console.log(r.name.padEnd(16) + ' ' + n2 + ' different');
    if (r.name.startsWith('~')) known++;
    else if (n2) fail++;
}
if (miss) {
    /* 撮り直しの一覧を置いておきます（tools/cases.sh がこれを使います）。 */
    if (process.env.MISSLIST) {
        writeFileSync(process.env.MISSLIST, missing.join('\n') + '\n');
    }
    console.log(miss + ' 件は本物をまだ撮っていません'
                + '（sh tools/runcases.sh ' + list + '）');
}
if (fail) { console.log('FAIL ' + fail + ' / ' + rows.length); process.exit(1); }
console.log(rows.length + ' 通り ぜんぶ 0 画素差'
            + (known ? '（分かっている残り ' + known + ' 件を除く）' : ''));
