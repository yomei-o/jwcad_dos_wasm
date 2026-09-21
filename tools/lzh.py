"""Read an LZH archive - list or extract.

    python tools/lzh.py <archive.lzh>            list
    python tools/lzh.py <archive.lzh> <outdir>   extract

Written because no lha/7z is installed here.  Handles header levels 0/1/2, the
-lh0- (stored) and -lh5-/-lh6-/-lh7- methods, and -lh1-, which is what archives
from the late eighties carry -- WXP for J-3100 (1990) is one.  The compressed methods are LHA's static-Huffman-per-block
LZSS: each block carries a Huffman table for the literal/length alphabet, a
second one for the match offsets, and a third that codes the first table's own
code lengths.
"""
import os
import time
import struct
import sys

# LHA's alphabet sizes.  NC covers 256 literals plus the match lengths
# (MAXMATCH - THRESHOLD + 1), NT codes the code lengths of that table.
NC = 510
NT = 19
CBIT = 9
TBIT = 5
THRESHOLD = 3

# method -> (dictionary bits, offset-table entries, bits for its length field)
METHODS = {
    b'-lh0-': None,                 # stored
    b'-lhd-': None,                 # directory
    b'-lh1-': 'dyn',                # the 1988 method: adaptive Huffman, 4 KB
    b'-lh5-': (13, 14, 4),
    b'-lh6-': (15, 16, 5),
    b'-lh7-': (17, 17, 5),
}


def crc16(data):
    """CRC-16/ARC, which is what LHA stores."""
    crc = 0
    for b in data:
        crc ^= b
        for _ in range(8):
            crc = (crc >> 1) ^ 0xA001 if crc & 1 else crc >> 1
    return crc


class Bits:
    def __init__(self, data):
        self.d = data
        self.pos = 0
        self.byte = 0
        self.left = 0

    def get(self, n):
        v = 0
        for _ in range(n):
            if self.left == 0:
                self.byte = self.d[self.pos] if self.pos < len(self.d) else 0
                self.pos += 1
                self.left = 8
            v = (v << 1) | ((self.byte >> (self.left - 1)) & 1)
            self.left -= 1
        return v


class Huff:
    """Canonical Huffman decoder, same code assignment as LHA's make_table."""

    def __init__(self, lengths):
        self.map = {}
        self.maxlen = max(lengths) if lengths else 0
        code = 0
        for ln in range(1, self.maxlen + 1):
            for sym, l in enumerate(lengths):
                if l == ln:
                    self.map[(ln, code)] = sym
                    code += 1
            code <<= 1

    def decode(self, br):
        code = 0
        for ln in range(1, self.maxlen + 1):
            code = (code << 1) | br.get(1)
            sym = self.map.get((ln, code))
            if sym is not None:
                return sym
        raise ValueError('bad Huffman code')


def read_pt_len(br, nn, nbit, i_special):
    """The offset table, and (with nn=NT) the table that codes c_len."""
    n = br.get(nbit)
    if n == 0:
        return None, br.get(nbit)       # every code is this one symbol
    ln = [0] * nn
    i = 0
    while i < n and i < nn:
        c = br.get(3)
        if c == 7:
            while br.get(1):
                c += 1
        ln[i] = c
        i += 1
        if i == i_special:
            c = br.get(2)
            while c > 0 and i < nn:
                ln[i] = 0
                i += 1
                c -= 1
    return Huff(ln), None


def read_c_len(br, pt, pt_single):
    n = br.get(CBIT)
    if n == 0:
        return None, br.get(CBIT)
    ln = [0] * NC
    i = 0
    while i < n and i < NC:
        c = pt_single if pt is None else pt.decode(br)
        if c <= 2:
            if c == 0:
                c = 1
            elif c == 1:
                c = br.get(4) + 3
            else:
                c = br.get(CBIT) + 20
            while c > 0 and i < NC:
                ln[i] = 0
                i += 1
                c -= 1
        else:
            ln[i] = c - 2
            i += 1
    return Huff(ln), None


# ---------------------------------------------------------------- -lh1-
#
# The old method, and a different animal from -lh5-: instead of a Huffman table
# per block, the tree *moves* -- every symbol decoded bumps its own frequency and
# the tree is rearranged to stay Huffman. Encoder and decoder do the same thing
# to the same tree, so nothing about it is transmitted; get one step wrong and
# everything after it is noise. The match offsets are the other half: a fixed
# canonical table for the top six bits and six raw bits for the rest.
#
# Transcribed from LHa for UNIX (dhuf.c, shuf.c, slide.c), which is the reading
# of the format that everything else agrees with. The CRC in each header says
# whether the transcription is right.
N_CHAR_DYN = 256 + 60 - 3 + 1       # 314: literals, then match lengths
TREESIZE_C = N_CHAR_DYN * 2
TREESIZE = TREESIZE_C + 128 * 2
ROOT_C = 0


class Dyn:
    """The moving tree, as LHa keeps it: children in pairs, blocks of equal
    frequency, and a leader per block so a swap is O(1)."""

    def __init__(self):
        self.child = [0] * TREESIZE
        self.parent = [0] * TREESIZE
        self.block = [0] * TREESIZE
        self.edge = [0] * TREESIZE
        self.stock = [0] * TREESIZE
        self.node = [0] * (TREESIZE // 2)
        self.freq = [0] * TREESIZE
        n_max = N_CHAR_DYN
        for i in range(TREESIZE_C):
            self.stock[i] = i
            self.block[i] = 0
        j = n_max * 2 - 2
        for i in range(n_max):
            self.freq[j] = 1
            self.child[j] = ~i
            self.node[i] = j
            self.block[j] = 1
            j -= 1
        self.avail = 2
        self.edge[1] = n_max - 1
        i = n_max * 2 - 2
        while j >= 0:
            f = self.freq[i] + self.freq[i - 1]
            self.freq[j] = f
            self.child[j] = i
            self.parent[i] = self.parent[i - 1] = j
            if f == self.freq[j + 1]:
                self.block[j] = self.block[j + 1]
                self.edge[self.block[j]] = j
            else:
                self.block[j] = self.stock[self.avail]
                self.avail += 1
                self.edge[self.block[j]] = j
            i -= 2
            j -= 1

    def reconst(self, start, end):
        """Halve every frequency and rebuild -- what happens when the root
        reaches 0x8000 and the counts would overflow."""
        child, freq, block, edge, stock, node, parent = (
            self.child, self.freq, self.block, self.edge, self.stock,
            self.node, self.parent)
        j = start
        for i in range(start, end):
            k = child[i]
            if k < 0:
                freq[j] = (freq[i] + 1) // 2
                child[j] = k
                j += 1
            b = block[i]
            if edge[b] == i:
                self.avail -= 1
                stock[self.avail] = b
        j -= 1
        i = end - 1
        l = end - 2
        while i >= start:
            while i >= l:
                freq[i] = freq[j]
                child[i] = child[j]
                i -= 1
                j -= 1
            f = freq[l] + freq[l + 1]
            k = start
            while f < freq[k]:
                k += 1
            while j >= k:
                freq[i] = freq[j]
                child[i] = child[j]
                i -= 1
                j -= 1
            freq[i] = f
            child[i] = l + 1
            i -= 1
            l -= 2
        f = 0
        b = 0
        for i in range(start, end):
            j = child[i]
            if j < 0:
                node[~j] = i
            else:
                parent[j] = parent[j - 1] = i
            g = freq[i]
            if g == f:
                block[i] = b
            else:
                b = block[i] = stock[self.avail]
                self.avail += 1
                edge[b] = i
                f = g

    def swap_inc(self, p):
        child, freq, block, edge, stock, node, parent = (
            self.child, self.freq, self.block, self.edge, self.stock,
            self.node, self.parent)
        b = block[p]
        q = edge[b]
        adjust = False
        if q != p:                       # swap with the block's leader
            r = child[p]
            t = child[q]
            child[p] = t
            child[q] = r
            if r >= 0:
                parent[r] = parent[r - 1] = q
            else:
                node[~r] = q
            if t >= 0:
                parent[t] = parent[t - 1] = p
            else:
                node[~t] = p
            p = q
            adjust = True
        elif b == block[p + 1]:
            adjust = True
        if adjust:
            edge[b] += 1
            freq[p] += 1
            if freq[p] == freq[p - 1]:
                block[p] = block[p - 1]
            else:
                block[p] = stock[self.avail]
                self.avail += 1
                edge[block[p]] = p
        else:
            freq[p] += 1
            if freq[p] == freq[p - 1]:
                self.avail -= 1
                stock[self.avail] = b
                block[p] = block[p - 1]
        return parent[p]

    def update(self, p):
        if self.freq[ROOT_C] == 0x8000:
            self.reconst(0, N_CHAR_DYN * 2 - 1)
        self.freq[ROOT_C] += 1
        q = self.node[p]
        while True:
            q = self.swap_inc(q)
            if q == ROOT_C:
                break

    def decode(self, br):
        c = self.child[ROOT_C]
        while c > 0:
            c = self.child[c - br.get(1)]
        c = ~c
        self.update(c)
        return c


def lh1_position_table():
    """The fixed offset code: lengths 3,4,5,6,7,8 over 64 symbols, from LHa's
    `fixed[0] = {3, 0x01, 0x04, 0x0c, 0x18, 0x30, 0}`."""
    tbl = [0x01, 0x04, 0x0c, 0x18, 0x30, 0]
    ln = [0] * 64
    j = 3
    at = 0
    for i in range(64):
        while at < len(tbl) and tbl[at] == i:
            j += 1
            at += 1
        ln[i] = j
    return Huff(ln)


def unpack_lh1(data, size):
    br = Bits(data)
    tree = Dyn()
    pos_code = lh1_position_table()
    text = bytearray(b' ' * 4096)        # LHa fills the window with spaces
    loc = 0
    out = bytearray()
    while len(out) < size:
        c = tree.decode(br)
        if c < 256:
            out.append(c)
            text[loc] = c
            loc = (loc + 1) & 0xFFF
        else:
            n = c - (256 - 3)            # THRESHOLD = 3
            at = (loc - ((pos_code.decode(br) << 6) + br.get(6)) - 1) & 0xFFF
            for k in range(n):
                b = text[(at + k) & 0xFFF]
                out.append(b)
                text[loc] = b
                loc = (loc + 1) & 0xFFF
    return bytes(out[:size])


def unpack(data, size, method):
    if METHODS[method] == 'dyn':
        return unpack_lh1(data, size)
    dicbit, np, pbit = METHODS[method]
    br = Bits(data)
    out = bytearray()
    blocksize = 0
    ct = cs = pt2 = ps2 = None

    while len(out) < size:
        if blocksize == 0:
            blocksize = br.get(16)
            if blocksize == 0:
                break
            pt, ps = read_pt_len(br, NT, TBIT, 3)
            ct, cs = read_c_len(br, pt, ps)
            pt2, ps2 = read_pt_len(br, np, pbit, -1)
        blocksize -= 1
        c = cs if ct is None else ct.decode(br)
        if c < 256:
            out.append(c)
            continue
        length = c - 256 + THRESHOLD
        j = ps2 if pt2 is None else pt2.decode(br)
        off = 0 if j == 0 else (1 << (j - 1)) | br.get(j - 1)
        start = len(out) - off - 1
        if start < 0:
            raise ValueError('match before start of output')
        for k in range(length):
            out.append(out[start + k])
            if len(out) >= size:
                break
    return bytes(out[:size])


def entries(data):
    o = 0
    while o < len(data):
        hsize = data[o]
        if hsize == 0:
            break
        method = data[o + 2:o + 7]
        packed, original = struct.unpack_from('<II', data, o + 7)
        level = data[o + 20]

        if level in (0, 1):
            nlen = data[o + 21]
            name = data[o + 22:o + 22 + nlen].decode('shift_jis', 'replace')
            crc, = struct.unpack_from('<H', data, o + 22 + nlen)
            base_end = o + 2 + hsize
            if level == 0:
                body = base_end
                skip = packed
            else:
                # Level 1 keeps extended headers between the base header and the
                # body, and `packed` counts both, so walk them to find the body.
                p = base_end
                total_ext = 0
                while True:
                    nxt, = struct.unpack_from('<H', data, p - 2)
                    if nxt == 0:
                        break
                    total_ext += nxt
                    p += nxt
                body = p
                skip = packed - total_ext
            yield name, method, body, skip, original, crc
            o = body + skip
        elif level == 2:
            total, = struct.unpack_from('<H', data, o)
            crc, = struct.unpack_from('<H', data, o + 21)
            name = ''
            p = o + 24
            while True:
                nxt, = struct.unpack_from('<H', data, p)
                if nxt == 0:
                    break
                kind = data[p + 2]
                if kind == 1:
                    name = data[p + 3:p + nxt].decode('shift_jis', 'replace')
                p += nxt
            yield name, method, o + total, packed, original, crc
            o = o + total + packed
        else:
            raise ValueError('header level %d' % level)


def stamps(data):
    """{name: unix time} out of the headers.

    A real lha puts the archive's own date back on each file it writes, and
    JW_CAD shows it: 入出力 → ①ﾌｧｲﾙ → ②読込 lists every drawing with its
    date.  Extracting without it gives them all the date they were unpacked,
    which is not what the distribution says.

    MS-DOS keeps it as two words at offset 15 of a level-0/1 header: the
    time in two-second steps, then the date counted from 1980.
    """
    out = {}
    o = 0
    while o < len(data):
        hsize = data[o]
        if hsize == 0:
            break
        packed, = struct.unpack_from('<I', data, o + 7)
        raw, = struct.unpack_from('<I', data, o + 15)
        level = data[o + 20]
        if level not in (0, 1):
            break
        nlen = data[o + 21]
        name = data[o + 22:o + 22 + nlen].decode('shift_jis', 'replace')
        base_end = o + 2 + hsize
        if level == 0:
            body, skip = base_end, packed
        else:
            q = base_end
            total = 0
            while True:
                nxt, = struct.unpack_from('<H', data, q - 2)
                if nxt == 0:
                    break
                total += nxt
                q += nxt
            body, skip = q, packed - total
        t, d = raw & 0xFFFF, raw >> 16
        try:
            key = os.path.basename(name.replace('\\', '/')).upper()
            out[key] = time.mktime((1980 + (d >> 9), (d >> 5) & 15, d & 31,
                                    t >> 11, (t >> 5) & 63, (t & 31) * 2,
                                    0, 0, -1))
        except (ValueError, OverflowError):
            pass
        o = body + skip
    return out


def main():
    path = sys.argv[1]
    outdir = sys.argv[2] if len(sys.argv) > 2 else None
    data = open(path, 'rb').read()

    if outdir:
        os.makedirs(outdir, exist_ok=True)
    when = stamps(data)
    print('%-16s %-7s %9s %9s  %s' % ('name', 'method', 'packed', 'size', 'crc'))
    for name, method, body, packed, original, crc in entries(data):
        raw = data[body:body + packed]
        if METHODS.get(method) is None:
            plain = raw[:original]
        else:
            plain = unpack(raw, original, method)
        ok = 'ok' if crc16(plain) == crc else 'CRC MISMATCH'
        print('%-16s %-7s %9d %9d  %04x %s' %
              (name, method.decode(), packed, original, crc, ok))
        if outdir:
            base = os.path.basename(name.replace('\\', '/'))
            out = os.path.join(outdir, base)
            open(out, 'wb').write(plain)
            if base.upper() in when:
                os.utime(out, (when[base.upper()], when[base.upper()]))


if __name__ == '__main__':
    main()
