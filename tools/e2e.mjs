/* 通しの試験：図面を開く→いくつか描く→保存→読み直す。
 *
 *     node tools/e2e.mjs
 *
 * 「使える」の最低線：描いた物が数え箱に反映され、保存した .JWC を開き直すと同じ数が戻る。
 * 描く手順は tools/stepcore.mjs と同じ言葉。保存は入出力 ①ファイル ①保存 の道（tools/saveport.mjs）。 */
import { loadFactory, runCase } from './stepcore.mjs';

const f = await loadFactory(import.meta.url);

function counts(M) {
    const s = M.UTF8ToString(M._jw_cmd_state());
    const g = (k) => { const m = s.match(new RegExp(k + '=(-?\\d+)')); return m ? Number(m[1]) : NaN; };
    return { lines: g('nl'), unl: g('unl') };
}

const draw = [
    // ＋ 水平な線
    'type H', '300 300 left', '500 300 left',
    // ／ 斜めの線
    'type X', '200 200 left', '420 380 left',
    // □ 2 点
    'type B', '260 240 left', '420 340 left',
    // ○ 円
    'type E', '350 260 left', '420 260 left',
    // 文字
    'type A', '250 420 left', 'type TEST', 'key enter',
];

const M = await f();
let before, after;
await runCase(M, 'orig/SAMPLE0.JWC', draw, (i, M2) => {
    after = M2.UTF8ToString(M2._jw_cmd_state());
});
const n = (s) => ({ nl: Number((s.match(/ nl=(\d+)/) || [])[1]), unl: Number((s.match(/ unl=(\d+)/) || [])[1]) });
console.log('描いたあとの線数', n(after));

// 保存：ページの [ダウンロード] と同じ jw_save → jw_saved（バイト列）
const rc = M._jw_save();
const p = M._jw_saved(), size = M._jw_saved_size();
console.log('保存', rc, size, 'bytes');
const bytes = M.HEAPU8.slice(p, p + size);

// 読み直し：新しい実体に書いて開く
const M2 = await f();
M2._jw_init();
M2.FS.writeFile('/orig/E2E.JWC', bytes);
const nb = M2.lengthBytesUTF8('orig/E2E.JWC') + 1, buf = M2._malloc(nb);
M2.stringToUTF8('orig/E2E.JWC', buf, nb);
M2._jw_open(buf);
M2._free(buf);
const st = M2.UTF8ToString(M2._jw_status());
console.log('読み直し:', st);
const got = Number((st.match(/(\d+) lines/) || [])[1]);
const ok = got === n(after).nl && /1 arcs/.test(st) && /14 texts/.test(st);
console.log(ok ? 'OK: 保存して開き直すと 線 ' + got + '・円 1・文字 14 が戻る' : 'NG: 数が違う');
process.exit(ok ? 0 : 1);
