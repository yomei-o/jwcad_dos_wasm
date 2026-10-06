/* 移植を「手順（tools/rbatch.py の台本と同じ言葉）」どおりに押して回る核。
 * tools/stepshots.mjs（1 件を全段書き出す）と tools/stepfast.mjs（複数件を
 * 並べて走り、画素の比較まで node の中でする）が同じものを使います——段の
 * 解釈（move・type・key・押し、矢の置き直し）が二つに割れないように。
 *
 *     await runCase(M, 'orig/SAMPLE0.JWC', steps, (i, M, W, H) => { ... });
 *
 * 各段のあと seqshot と同じく矢を最後の押しの所へ置き直してから onShot を
 * 呼びます。onShot が true を返したら、そこで打ち切ります。
 */
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);

/* `key enter`, `key esc`, `key bs` -- the same words the emulator's script
 * takes, so one list of steps drives both halves. */
const KEY = { enter: 13, esc: 27, bs: 8, space: 32 };
/* The function keys, the same numbers src/cmd.h gives them. */
for (let i = 1; i <= 10; i++) KEY['f' + i] = 0x100 + i;

export async function loadFactory(here) {
    return createRequire(here)('../jwcad.js');
}

export async function runCase(M, path, steps, onShot) {
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
    let lastPress = null;
    const W = M._jw_width(), H = M._jw_height();
    let si = 0;
    const shot = () => {
        /* 矢が命令に跳ばされた（手書線の [ESC] など）ときは送り直さない——本物の
         * 矢もそこにある。 */
        if (lastPress && M._jw_mouse_x() === lastPress[0]
            && M._jw_mouse_y() === lastPress[1]) M._jw_mouse(lastPress[0], lastPress[1]);
        return onShot(si++, M, W, H);
    };
    for (const step of steps) {
        const w = step.trim().split(/\s+/);
        if (w[0] === 'type') {
            for (const ch of step.trim().slice(5)) M._jw_key(ch.charCodeAt(0));
            if (shot()) return;
            continue;
        }
        /* 押さずに矢だけ動かします。帯の仮の絵（ゴムひも・次の弧）は矢の
         * 先で決まるので、**押した点と矢の先が同じ**ところでは何も出ない
         * ことが多く、そこだけ見ていると仮の絵を比べられません。 */
        if (w[0] === 'move') {
            const mx = Number(w[1]), my = Number(w[2]);
            M._jw_mouse(mx, my);
            lastPress = [mx, my];
            if (shot()) return;
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
            if (shot()) return;
            continue;
        }
        const x = Number(w[0]), y = Number(w[1]);
        M._jw_mouse(x, y);
        M._jw_click(x, y, w[2] === 'right' ? 1 : 0);
        lastPress = [x, y];
        if (shot()) return;
    }
}
