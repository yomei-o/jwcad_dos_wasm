// Render a drawing through the WASM build and write the screen out as raw
// RGBA, so it can be compared byte for byte with what the native build makes.
//
//   sh tools/build_wasm.sh
//   node tests/wasm_check.js orig/SAMPLE2.JWC tmp/sample2.wasm.raw
//   node tests/wasm_check.js orig/SAMPLE2.JWC tmp/sample2.wasm.JWC   # the save
//
// A .JWC out asks for the file the browser's 保存 button would hand over,
// which has to be the file tests/roundtrip.exe makes natively.
//
// Both builds compile the same src/*.c, so any difference means the port has
// picked up something platform-shaped, which is exactly what this is for.
const fs = require('fs');
const path = process.argv[2] || 'orig/SAMPLE2.JWC';
const out = process.argv[3] || 'tmp/wasm.raw';

const createJwcad = require('../jwcad.js');

createJwcad().then(M => {
    M._jw_init();
    const n = M.lengthBytesUTF8(path) + 1;
    const buf = M._malloc(n);
    M.stringToUTF8(path, buf, n);
    if (!M._jw_open(buf)) {
      console.error(M.UTF8ToString(M._jw_status()));
      process.exit(1);
    }
    M._free(buf);
    if (/[.]JWC$/i.test(out)) {
      if (!M._jw_save()) {
        console.error(M.UTF8ToString(M._jw_status()));
        process.exit(1);
      }
      const q = M._jw_saved(), n = M._jw_saved_size();
      fs.writeFileSync(out, Buffer.from(M.HEAPU8.buffer, q, n));
      console.log(`${path}: -> ${out} (${n} bytes)`);
      return;
    }
    const w = M._jw_width(), h = M._jw_height();
    const p = M._jw_framebuffer();
    fs.writeFileSync(out, Buffer.from(M.HEAPU8.buffer, p, w * h * 4));
    console.log(`${path}: ${M.UTF8ToString(M._jw_status())} -> ${out} (${w}x${h})`);
});
