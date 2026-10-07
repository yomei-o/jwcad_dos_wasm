/* ESC が効かなくなる（途中の状態から ESC を何回押しても抜けられない）道を探す。
 *
 *   node tools/escfuzz.mjs [コマンド鍵…]        例: node tools/escfuzz.mjs c C H
 *   ENV: N=1 コマンドあたりの試行数（既定 300）、SEED=1、DEPTH=5（操作の長さ上限）
 *
 * 各コマンドを選んだ直後の状態（stage/pressed/typing/top_item）を「静止」とし、
 * ランダムな操作（押し・右押し・数字・Enter・BS・項目の数字）を重ねたあと ESC を最大 8 回。
 * 静止に戻れず、最後の ESC が何も変えなかった道を「詰まり」として出す。
 * 本物でも ESC が無反応な行はある（札に [ESC] が無い行）ので、出たものは**候補**——本物と
 * 突き合わせるシナリオ（tools/cases/*.txt）に落として確かめる。 */
import { createRequire } from 'node:module';
import { loadFactory, runCase } from './stepcore.mjs';

const KEYS = process.argv.slice(2);
const ALL = 'chxbftvrwdensaq' + 'CHXBFTVRWDENASQ';
const keys = KEYS.length ? KEYS : ALL.split('');
const N = Number(process.env.N || 300);
const DEPTH = Number(process.env.DEPTH || 5);
let seed = Number(process.env.SEED || 1);
const rnd = () => { seed = (seed * 1103515245 + 12345) & 0x7fffffff; return seed / 0x7fffffff; };
const pick = (a) => a[Math.floor(rnd() * a.length)];

const POINTS = ['400 140', '300 250', '450 330', '162 250', '598 300', '350 350', '250 200', '500 200'];
const ACTS = [
    () => pick(POINTS) + ' left',
    () => pick(POINTS) + ' right',
    () => 'type ' + pick(['1', '2', '3', '4', '5', '6', '7', '8', '9']),
    () => 'type ' + pick(['0', '30', '12', '5', '1000']),
    () => 'key enter',
    () => 'key bs',
    () => 'move ' + pick(POINTS),
];

const f = await loadFactory(import.meta.url);
const M = await f();

function state() {
    const s = M.UTF8ToString(M._jw_cmd_state());
    const g = (k) => { const m = s.match(new RegExp(k + '=(-?\\d+)')); return m ? m[1] : '?'; };
    return ['stage', 'pressed', 'typing', 'top_item', 'uistage', 'uitop'].map(g).join('/');
}

async function run(steps) {
    const st = [];
    await runCase(M, 'orig/SAMPLE0.JWC', steps, () => { st.push(state()); });
    return st;
}

import { writeFileSync } from 'node:fs';
const stuck = [];
for (const key of keys) {
    const base = (await run(['type ' + key]))[0];
    const seen = new Set();
    for (let n = 0; n < N; n++) {
        const acts = [];
        const len = 1 + Math.floor(rnd() * DEPTH);
        for (let i = 0; i < len; i++) acts.push(pick(ACTS)());
        const steps = ['type ' + key, ...acts];
        for (let i = 0; i < 8; i++) steps.push('key esc');
        const st = await run(steps);
        const after = st.slice(1 + len);
        const end = after[after.length - 1];
        if (end === base) continue;
        if (after[after.length - 2] !== end) continue;        // まだ動いている（8 回では足りないだけ）
        const sig = acts.join(' | ') + ' => ' + end;
        if (seen.has(end)) continue;                           // 同じ詰まり方は 1 件だけ
        seen.add(end);
        stuck.push({ key, base, end, acts });
        console.log(`STUCK ${key}: base=${base} end=${end}\n    ${['type ' + key, ...acts].join(' | ')}`);
    }
}
console.log(`stuck ${stuck.length}`);
if (process.env.OUT) {
    /* 本物と突き合わせる一覧（tools/rbatch.py → tools/stepfast.py）。1 行 1 件、名前|図面|手順… */
    const lines = stuck.map((x, i) => ['escfz_' + x.key + '_' + i, 'SAMPLE0', 'type ' + x.key, ...x.acts, 'key esc', 'key esc', 'key esc'].join('|'));
    writeFileSync(process.env.OUT, lines.join('\n') + '\n');
}
