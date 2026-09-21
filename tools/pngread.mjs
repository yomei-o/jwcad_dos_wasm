/* Read a PNG back, without src/png.c.
 *
 *     node tools/pngread.mjs tmp/plot.png
 *
 * src/png.c writes the deflate stream itself -- fixed Huffman, its own
 * matcher, its own hash chains -- and a PNG that a viewer refuses is exactly
 * the sort of thing the writer cannot notice.  Checking the signature and
 * the trailing IEND, which is all the plot check used to do, would have been
 * happy with a stream that emitted every byte twice; that bug was real, and
 * what found it was a file that looked fine and opened as noise.
 *
 * So this decodes the picture: the chunk CRCs, the zlib stream through
 * node's own inflate (nothing of ours), the scanline filters undone, and
 * then how many pixels are not the background.  Prints a JSON line and
 * exits 1 on anything wrong.
 */
import { readFileSync } from 'node:fs';
import { inflateSync } from 'node:zlib';

const path = process.argv[2];
if (!path) { console.error('usage: node tools/pngread.mjs <file.png>'); process.exit(2); }
const buf = readFileSync(path);
const die = (why) => { console.error('  pngread: ' + why); process.exit(1); };

const SIG = Buffer.from([137, 80, 78, 71, 13, 10, 26, 10]);
if (buf.length < 8 || !buf.subarray(0, 8).equals(SIG)) die('not a PNG signature');

/* CRC-32, the one PNG uses on every chunk.  A chunk whose CRC is wrong is a
   chunk a decoder is entitled to reject. */
const TABLE = (() => {
  const t = new Uint32Array(256);
  for (let n = 0; n < 256; n++) {
    let c = n;
    for (let k = 0; k < 8; k++) c = c & 1 ? 0xedb88320 ^ (c >>> 1) : c >>> 1;
    t[n] = c >>> 0;
  }
  return t;
})();
const crc32 = (b) => {
  let c = 0xffffffff;
  for (let i = 0; i < b.length; i++) c = TABLE[(c ^ b[i]) & 0xff] ^ (c >>> 8);
  return (c ^ 0xffffffff) >>> 0;
};

let at = 8;
const chunks = [];
const idat = [];
let ihdr = null;
let sawEnd = false;

while (at < buf.length) {
  if (at + 8 > buf.length) die('a chunk header runs off the end');
  const len = buf.readUInt32BE(at);
  const type = buf.toString('latin1', at + 4, at + 8);
  if (at + 12 + len > buf.length) die(type + ' says ' + len + ' bytes and the file is shorter');
  const data = buf.subarray(at + 8, at + 8 + len);
  const want = buf.readUInt32BE(at + 8 + len);
  const got = crc32(buf.subarray(at + 4, at + 8 + len));

  if (want !== got) die(type + "'s CRC is wrong");
  if (sawEnd) die('a chunk after IEND');
  chunks.push(type);
  if (type === 'IHDR') {
    if (len !== 13) die('IHDR is not 13 bytes');
    ihdr = {
      w: data.readUInt32BE(0), h: data.readUInt32BE(4),
      depth: data[8], colour: data[9],
      compression: data[10], filter: data[11], interlace: data[12],
    };
  } else if (type === 'IDAT') idat.push(data);
  else if (type === 'IEND') sawEnd = true;
  at += 12 + len;
}
if (!ihdr) die('no IHDR');
if (chunks[0] !== 'IHDR') die('IHDR is not the first chunk');
if (!sawEnd) die('no IEND');
if (!idat.length) die('no IDAT -- there is no picture in the file');
if (ihdr.depth !== 8) die('this reader takes 8 bits a sample, not ' + ihdr.depth);
if (ihdr.interlace) die('interlaced');
const CH = { 0: 1, 2: 3, 4: 2, 6: 4 }[ihdr.colour];
if (!CH) die('colour type ' + ihdr.colour);
if (!(ihdr.w > 0 && ihdr.h > 0)) die('the picture has no size');

/* node's zlib, not ours: the point is that something else can read it. */
let raw;
try {
  raw = inflateSync(Buffer.concat(idat));
} catch (err) {
  die('the deflate stream does not inflate (' + err.message + ')');
}
const stride = ihdr.w * CH;
if (raw.length !== (stride + 1) * ihdr.h)
  die('inflated to ' + raw.length + ' bytes, and ' + ihdr.h + ' rows of '
      + stride + ' need ' + (stride + 1) * ihdr.h);

/* Undo the per-row filters.  Getting this far means the bytes are there;
   getting the filters right means the picture is the one that was drawn. */
const px = Buffer.alloc(stride * ihdr.h);
for (let y = 0; y < ihdr.h; y++) {
  const f = raw[y * (stride + 1)];
  const row = raw.subarray(y * (stride + 1) + 1, (y + 1) * (stride + 1));
  const out = px.subarray(y * stride, (y + 1) * stride);
  const up = y ? px.subarray((y - 1) * stride, y * stride) : null;

  if (f > 4) die('row ' + y + ' has filter ' + f);
  for (let i = 0; i < stride; i++) {
    const a = i >= CH ? out[i - CH] : 0;
    const b = up ? up[i] : 0;
    const c = up && i >= CH ? up[i - CH] : 0;
    let v = row[i];

    if (f === 1) v += a;
    else if (f === 2) v += b;
    else if (f === 3) v += (a + b) >> 1;
    else if (f === 4) {
      const p = a + b - c;
      const pa = Math.abs(p - a), pb = Math.abs(p - b), pc = Math.abs(p - c);
      v += pa <= pb && pa <= pc ? a : pb <= pc ? b : c;
    }
    out[i] = v & 0xff;
  }
}

/* How much of it is not the background.  A PNG that decodes to one flat
   colour is a blank sheet, which is what a plot of nothing looks like. */
const bg = [px[0], px[1], px[2]];
let ink = 0;
for (let i = 0; i < px.length; i += CH) {
  if (px[i] !== bg[0] || px[i + 1] !== bg[1] || px[i + 2] !== bg[2]) ink++;
}
if (!ink) die('every pixel is the same colour -- the page is blank');

console.log(JSON.stringify({
  bytes: buf.length,
  size: [ihdr.w, ihdr.h],
  channels: CH,
  idat: idat.length,
  inflated: raw.length,
  ink,
}));
