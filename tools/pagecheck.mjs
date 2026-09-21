/* index.html's own controls, driven headlessly.
 *
 *     node tools/pagecheck.mjs
 *
 * The page's script is pulled out and run against a stand-in document and a
 * stand-in Module, then put through what a visitor does: upload a drawing,
 * and download the one on the screen.
 *
 * The download is what this exists for.  Two things about handing a browser
 * a file are easy to get wrong and **neither shows up on the machine it was
 * written on**:
 *
 *   a detached <a> does not download in every browser, so the button looks
 *   dead;
 *   revoking the object URL in the same turn as the click cancels the
 *   download wherever the browser has not started reading the blob yet.
 *
 * Both were wrong here until 2026-09-21.
 */
import { readFileSync } from 'node:fs';
import vm from 'node:vm';

const html = readFileSync('index.html', 'utf8');
const script = html.slice(html.indexOf('<script>', html.indexOf('jwcad.js')) + 8,
                          html.lastIndexOf('</script>'));

const anchors = [];
const listeners = new Map();
const body = { children: [], append(a) { this.children.push(a); } };
let revoked = 0;

function el(id) {
  return {
    id, value: '', textContent: '', disabled: false, files: [],
    options: [],
    append(c) { this.options.push(c); },
    appendChild(c) { this.options.push(c); },
    addEventListener(k, f) { listeners.set(id + ':' + k, f); },
    focus() {}, blur() {},
    getBoundingClientRect: () => ({ left: 0, top: 0, width: 640, height: 480 }),
    getContext: () => ({ putImageData() {}, createImageData: () => ({ data: { set() {} } }) }),
    style: {}, classList: { add() {}, remove() {} },
  };
}
const els = {};
for (const id of ['screen', 'status', 'pick', 'up', 'save', 'ime']) els[id] = el(id);

globalThis.document = {
  body,
  getElementById: id => els[id],
  createElement: tag => {
    const a = { tag, style: {}, clicked: 0, href: '', download: '',
                click() { this.clicked++; }, remove() { this.removed = true; } };
    if (tag === 'a') anchors.push(a);
    return a;
  },
  addEventListener() {},
  activeElement: null,
};
globalThis.window = { addEventListener() {} };
globalThis.TextDecoder = class { decode() { return '�'; } };
globalThis.Uint8ClampedArray = Uint8ClampedArray;
globalThis.URL = { createObjectURL: () => 'blob:x',
                   revokeObjectURL() { revoked++; } };
globalThis.Blob = class { constructor(parts) { this.parts = parts; } };

/* A stand-in for the WASM module: enough for the page to open a drawing and
   hand its bytes over. */
const SAVED = 4321;
const fs = {};
const Module = {
  HEAPU8: new Uint8Array(640 * 480 * 4 + 65536),
  FS: {
    mkdir() { throw new Error('exists'); },
    writeFile(p, b) { fs[p] = b; },
    readFile(p) { return fs[p]; },
  },
  lengthBytesUTF8: sIn => sIn.length + 1,
  stringToUTF8() {},
  UTF8ToString: () => 'status',
  _malloc: () => 1, _free() {},
  _jw_init() {}, _jw_open: () => 1,
  _jw_width: () => 640, _jw_height: () => 480, _jw_framebuffer: () => 0,
  _jw_status: () => 0,
  _jw_save: () => 1, _jw_saved: () => 0, _jw_saved_size: () => SAVED,
  _jw_zoom() {}, _jw_pan() {}, _jw_mouse() {}, _jw_mods() {},
  _jw_menu_at: () => 0, _jw_typing: () => 0,
};
globalThis.createJwcad = () => Promise.resolve(Module);

vm.runInThisContext(script, { filename: 'index.html#script' });
await new Promise(r => setTimeout(r, 10));   // let createJwcad resolve

let bad = 0;
const ok = (cond, what) => {
  console.log((cond ? '  ok   ' : '  FAIL ') + what);
  if (!cond) bad++;
};
const fire = (k, a) => listeners.get(k)(a);

ok(els.pick.options.length > 0, 'the drawings that ship are offered');

/* アップロード: into the module's own filesystem, then opened by name. */
els.up.files = [{ name: 'mine.jwc', arrayBuffer: async () => new ArrayBuffer(6) }];
await (els.up.onchange({ target: els.up }) || Promise.resolve());
await new Promise(r => setTimeout(r, 10));
ok(Object.keys(fs).some(k => k === '/up/MINE.JWC'),
   'アップロード writes it into the module filesystem, upper case');
ok(els.pick.value === '/up/MINE.JWC', 'and it becomes the drawing on show');

/* ダウンロード. */
anchors.length = 0;
body.children.length = 0;
revoked = 0;
els.save.onclick();
ok(anchors.length === 1, 'ダウンロード makes an <a>');
ok(anchors[0].download === 'MINE.JWC', 'named after the drawing');
ok(body.children[0] === anchors[0],
   'put in the document before clicking (a detached one does nothing)');
ok(anchors[0].clicked === 1, 'and clicked');
ok(revoked === 0, 'the object URL is NOT revoked in the same turn');
await new Promise(r => setTimeout(r, 30));
ok(revoked === 0, 'nor a moment later -- the browser is still reading it');

process.exit(bad ? 1 : 0);
