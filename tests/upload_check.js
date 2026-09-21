// Does a drawing **uploaded into the browser build** open the way one baked
// into it does?
//
//   sh tools/build_wasm.sh
//   node tests/upload_check.js orig/SAMPLE2.JWC
//
// index.html's アップロード writes the visitor's bytes into the module's own
// filesystem and then opens them by name, so that an uploaded drawing is read
// by jwc_load() and fopen() -- the code every other check covers -- rather
// than by a second entry point that parses from memory.  This drives exactly
// that, and compares the screen with the one the embedded copy gives.
//
// It also checks the file comes back out the way ダウンロード takes it.
const fs = require('fs');
const source = process.argv[2] || 'orig/SAMPLE2.JWC';
const bytes = fs.readFileSync(source);

const createJwcad = require('../jwcad.js');

function open(M, path) {
    const n = M.lengthBytesUTF8(path) + 1;
    const buf = M._malloc(n);

    M.stringToUTF8(path, buf, n);
    const ok = M._jw_open(buf);
    M._free(buf);
    if (!ok) {
        console.error(path + ': ' + M.UTF8ToString(M._jw_status()));
        process.exit(1);
    }
    const w = M._jw_width(), h = M._jw_height();
    const p = M._jw_framebuffer();
    return Buffer.from(M.HEAPU8.buffer.slice(p, p + w * h * 4));
}

createJwcad().then(M => {
    M._jw_init();
    if (!M.FS) {
        console.error('FS is not exported -- the page cannot upload');
        process.exit(1);
    }
    const baked = open(M, source);

    try { M.FS.mkdir('/up'); } catch (err) { /* already there */ }
    M.FS.writeFile('/up/UPLOAD.JWC', new Uint8Array(bytes));
    const back = Buffer.from(M.FS.readFile('/up/UPLOAD.JWC'));
    if (!back.equals(bytes)) {
        console.error('what came back out is not what went in');
        process.exit(1);
    }
    const uploaded = open(M, '/up/UPLOAD.JWC');
    if (!uploaded.equals(baked)) {
        console.error(source + ': the uploaded copy draws a different screen');
        process.exit(1);
    }
    console.log(source + ': uploaded as /up/UPLOAD.JWC, ' + bytes.length
                + ' bytes in and back out, same screen');
});
