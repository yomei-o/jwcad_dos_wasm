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
import { readdirSync, readFileSync } from 'node:fs';
import vm from 'node:vm';

const html = readFileSync('index.html', 'utf8');
/* The page's own code is the **last** <script> in the file; the ones before
   it are the build stamp and the module. */
const script = html.slice(html.lastIndexOf('<script>') + 8,
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
for (const id of ['screen', 'status', 'pick', 'up', 'save', 'pdf', 'png',
                  'ime']) els[id] = el(id);

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
for (const n of readdirSync('orig').filter(n => /^(SAMPLE|TEST)\d+\.JWC$/i.test(n))) {
  fs['orig/' + n] = new Uint8Array(8);
}
const Module = {
  HEAPU8: new Uint8Array(640 * 480 * 4 + 65536),
  FS: {
    mkdir() { throw new Error('exists'); },
    writeFile(p, b) { fs[p] = b; },
    readFile(p) { return fs[p]; },
    /* The disk the page lists: the drawings that ship are on it before the
       page starts, the way --embed-file puts them there. */
    readdir(dir) {
      return Object.keys(fs).filter(k => k.startsWith(dir + '/'))
                            .map(k => k.slice(dir.length + 1));
    },
  },
  lengthBytesUTF8: sIn => sIn.length + 1,
  stringToUTF8() {},
  UTF8ToString: () => 'status',
  _malloc: () => 1, _free() {},
  _jw_init() {}, _jw_open: () => 1,
  _jw_width: () => 640, _jw_height: () => 480, _jw_framebuffer: () => 0,
  _jw_status: () => 0,
  _jw_save: () => 1, _jw_saved: () => 0, _jw_saved_size: () => SAVED,
  _jw_plot: () => 1,
  _jw_zoom() {}, _jw_pan() {}, _jw_mouse() {}, _jw_mods() {},
  _jw_menu_at: () => 0, _jw_typing: () => 0,
};
globalThis.createJwcad = () => Promise.resolve(Module);
/* The stamp the build writes into the page, so the .wasm is fetched
   under a name that changes when it changes. */
globalThis.JW_BUILD = 'test';

vm.runInThisContext(script, { filename: 'index.html#script' });
await new Promise(r => setTimeout(r, 10));   // let createJwcad resolve

let bad = 0;
const ok = (cond, what) => {
  console.log((cond ? '  ok   ' : '  FAIL ') + what);
  if (!cond) bad++;
};
const fire = (k, a) => listeners.get(k)(a);

/* **All fourteen**, and every one of them really in the .wasm.  The page
   offered eight for a long time, which is not a bug anything would catch:
   the list is hand written, the six that were missing were simply never
   typed, and four of the eight labels described the wrong drawing. */
const offered = els.pick.options.map(o => o.value).filter(Boolean);
const shipped = readdirSync('orig').filter(n => /^(SAMPLE|TEST)\d+\.JWC$/i.test(n))
                                   .map(n => 'orig/' + n).sort();

ok(offered.length === 14, 'all fourteen drawings are offered (' + offered.length + ')');
ok(String([...offered].sort()) === String(shipped),
   'and they are the disk, not a list written beside it');
ok(offered.every(v => els.pick.options.find(o => o.value === v)
                        .textContent.startsWith(v.replace(/^orig[/]/, ''))),
   'each one is listed by its file name as well as its title');

/* **Picking a name opens nothing.**  The list moves files about; opening a
   drawing is ＪＷ＿ＣＡＤ's 入出力 → ①ﾌｧｲﾙ → ②読込 (tools/loadcheck.mjs).
   A page that opened one here would throw away what was being drawn, and
   this page did exactly that until a visitor said so. */
let opened = 0;
Module._jw_open = () => { opened++; return 1; };
els.pick.value = 'orig/TEST1.JWC';
els.pick.onchange();
ok(opened === 0, 'picking a name in the list opens nothing');

/* アップロード: onto the disk, under a name DOS could have written, and it
   does not open it either. */
els.up.files = [{ name: 'my drawing.jwc', arrayBuffer: async () => new ArrayBuffer(6) }];
await (els.up.onchange({ target: els.up }) || Promise.resolve());
await new Promise(r => setTimeout(r, 10));
ok(fs['orig/MY_DRAWI.JWC'] !== undefined,
   'アップロード writes it onto the disk, 8.3 and upper case');
ok(opened === 0, 'and does not open it either');
ok(els.pick.options.some(o => o.value === 'orig/MY_DRAWI.JWC'),
   'and it turns up in the list');

/* ダウンロード. */
anchors.length = 0;
body.children.length = 0;
revoked = 0;
els.save.onclick();
ok(anchors.length === 1, 'ダウンロード makes an <a>');
ok(anchors[0].download === 'MY_DRAWI.JWC',
   'named after the file the list has picked (' + anchors[0].download + ')');
ok(body.children[0] === anchors[0],
   'put in the document before clicking (a detached one does nothing)');
ok(anchors[0].clicked === 1, 'and clicked');
ok(revoked === 0, 'the object URL is NOT revoked in the same turn');
await new Promise(r => setTimeout(r, 30));
ok(revoked === 0, 'nor a moment later -- the browser is still reading it');

/* プロッタ出力: the same two things a plotter's paper is for. */
for (const [id, ext] of [['pdf', '.pdf'], ['png', '.png']]) {
  anchors.length = 0;
  body.children.length = 0;
  els[id].onclick();
  ok(anchors.length === 1 && /\.(pdf|png)$/.test(anchors[0].download),
     id.toUpperCase() + ' hands over ' + anchors[0].download);
  ok(body.children[0] === anchors[0] && anchors[0].clicked === 1,
     '  in the document and clicked');
}

process.exit(bad ? 1 : 0);
