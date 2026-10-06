/* tools/stepfast.py の作業者。仕事の一覧（JSON）を読んで、1 件ずつ移植を押して回り、
 * 各段の画面を**この中で**本物の画面（origcache の .raw）と比べます。
 * node の起動（約 0.85 秒）を 1 件ごとに払わず、画面を書き出して python で読み直す
 * こともしないので、tools/stepcheck.py より 5〜10 倍速く、さらに複数並べて走らせます。
 *
 *     node tools/stepfast.mjs jobs.json results.json
 *
 * jobs:    [{ name, path, steps:[...], origs:[ '/…/x.raw' | null, ... ], dump:'dir/name' }]
 * results: [{ name, counts:[n | null, ...], first }]
 * ALL=1 のときは最初の差で止めず全段を数えます。差のあった段は、画面を
 * dump.NNN.raw に書き出します（ALL なら全段、でなければ最初の差の段だけ）。
 */
import { readFileSync, writeFileSync, existsSync } from 'node:fs';
import { createRequire } from 'node:module';
import { runCase } from './stepcore.mjs';
const require = createRequire(import.meta.url);
const createJwcad = require('../jwcad.js');

const [jobsPath, outPath] = process.argv.slice(2);
const ALL = !!process.env.ALL;
const jobs = JSON.parse(readFileSync(jobsPath, 'utf8'));
const results = [];

for (const job of jobs) {
    const counts = job.steps.map(() => null);
    let first = null, error = null;
    try {
        const M = await createJwcad();
        await runCase(M, job.path, job.steps, (i, M, W, H) => {
            const o = job.origs[i];
            if (!o || !existsSync(o)) return false;
            const a = new Uint32Array(M.HEAPU8.buffer.slice(M._jw_framebuffer(),
                                                           M._jw_framebuffer() + W * H * 4));
            const ob = readFileSync(o);
            const b = new Uint32Array(ob.buffer.slice(ob.byteOffset, ob.byteOffset + ob.length));
            /* 画素の数え方は tools/fulldiff.py と同じ（RGB が違う画素。α は見ない）。 */
            let n = 0;
            for (let k = 0; k < a.length; k++) if (((a[k] ^ b[k]) & 0xffffff) !== 0) n++;
            counts[i] = n;
            if (n) {
                if (first === null) first = i;
                if (job.dump && (ALL || first === i)) {
                    writeFileSync(job.dump + '.' + String(i).padStart(3, '0') + '.raw',
                                  Buffer.from(a.buffer));
                }
                return !ALL;        /* 最初の差で止める */
            }
            return false;
        });
    } catch (e) {
        error = String(e && e.message || e);
    }
    results.push({ name: job.name, counts, first, error });
}
writeFileSync(outPath, JSON.stringify(results));
