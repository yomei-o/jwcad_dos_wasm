/* 「使える」の最低線の通し：ESC で戻る・描いたものを消せる・移動／複写できる。
 *     node tools/usable.mjs
 * 各行は 線数/段 の並び（段ごと）。例 `＋ 引く→ESC→ESC  30/0 30/1 31/2 30/1 30/1` は 引く→31、ESC→30。 */
import { loadFactory, runCase } from './stepcore.mjs';
const f = await loadFactory(import.meta.url);
async function run(name, steps, show) {
  const M = await f();
  let st = '', log = [];
  await runCase(M, 'orig/SAMPLE0.JWC', steps, (i, M2) => {
    st = M2.UTF8ToString(M2._jw_cmd_state());
    log.push(st.match(/ nl=(\d+)/)?.[1] + '/' + (st.match(/stage=(\d+)/)?.[1]));
  });
  console.log(name.padEnd(28), log.join(' '));
}
// ESC で戻る：線を引いて ESC → 消える、もう一度 ESC は何も起きない
await run('＋ 引く→ESC→ESC', ['type H','300 300 left','500 300 left','key esc','key esc']);
await run('□ 引く→ESC', ['type B','260 240 left','420 340 left','key esc']);
await run('○ 引く→ESC', ['type E','350 260 left','420 260 left','key esc']);
await run('文字 打つ→ESC', ['type A','250 300 left','type ABC','key esc']);
// 書いたものを消す：線消（右押しで線を消す）、消去（範囲）
await run('線を引く→線消(右)', ['type X','200 200 left','420 380 left','type D','300 290 right']);
await run('消去 範囲→実行', ['type d','100 100 left','600 400 left','key enter']);
// 移動：範囲→①マウス位置
await run('移動 範囲→置く', ['type c','150 130 left','245 170 left','key enter','type 1','200 150 left','300 250 left']);
await run('複写 範囲→置く', ['type C','150 130 left','245 170 left','key enter','type 1','200 150 left','300 250 left']);
await run('消去 ①範囲内→実行', ['type d','type 1','150 130 left','245 170 left','type 1','type 1']);
await run('消去 ①範囲内→実行(Enter)', ['type d','150 130 left','245 170 left','key enter','key enter']);
await run('消去 →ESC で戻る', ['type d','150 130 left','245 170 left','key enter','key esc','key esc']);
await run('移動→ESC×3', ['type c','150 130 left','245 170 left','key enter','type 1','200 150 left','300 250 left','key esc','key esc','key esc']);
