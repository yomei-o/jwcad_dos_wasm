# -*- coding: utf-8 -*-
"""The dates jwcv222h.lzh carries for each file.

    python tools/lzhdates.py                 # all of them
    python tools/lzhdates.py --c             # as a C table

入出力 → ①ﾌｧｲﾙ → ②読込 lists each drawing with its date, and the date the
original shows is the one the file carries -- `93/08/19 12:00` for SAMPLE0.
The port's copies were written when they were extracted, so they cannot say
that by themselves; the archive can, and it is the distribution.

MS-DOS keeps it in two words: the time (2-second steps) then the date, from
1980.  They sit at offset 15 of a level-0/1 LZH header.
"""
import struct
import sys

def dates(data):
    out = []
    o = 0
    while o < len(data):
        hsize = data[o]
        if hsize == 0:
            break
        packed, = struct.unpack_from('<I', data, o + 7)
        stamp, = struct.unpack_from('<I', data, o + 15)
        level = data[o + 20]
        if level not in (0, 1):
            break
        nlen = data[o + 21]
        name = data[o + 22:o + 22 + nlen].decode('shift_jis', 'replace')
        base_end = o + 2 + hsize
        if level == 0:
            body, skip = base_end, packed
        else:
            p = base_end
            total = 0
            while True:
                nxt, = struct.unpack_from('<H', data, p - 2)
                if nxt == 0:
                    break
                total += nxt
                p += nxt
            body, skip = p, packed - total
        t, d = stamp & 0xFFFF, stamp >> 16
        out.append((name.replace('\\', '/').split('/')[-1],
                    1980 + (d >> 9), (d >> 5) & 15, d & 31,
                    t >> 11, (t >> 5) & 63, (t & 31) * 2))
        o = body + skip
    return out

if __name__ == '__main__':
    rows = dates(open('orig/jwcv222h.lzh', 'rb').read())
    if '--c' in sys.argv:
        print('/* The dates jwcv222h.lzh carries, for the port to show in')
        print(' * the file list.  Written by tools/lzhdates.py --c.')
        print(' *')
        print(' * A drawing has no date of its own inside it, and the copies')
        print(' * baked into the .wasm carry the time the build ran -- so the')
        print(' * distribution is the only place the real ones are. */')
        print('static const struct {')
        print('    const char *name;')
        print('    const char *when;    /* as the list shows it */')
        print('    unsigned long stamp; /* DOS date<<16 | time, for the order */')
        print('} JW_FILE_DATE[] = {')
        for n, Y, M, D, h, m, sec in rows:
            if not n.upper().endswith('.JWC'):
                continue
            stamp = ((((Y - 1980) << 9) | (M << 5) | D) << 16) \
                    | ((h << 11) | (m << 5) | (sec // 2))
            # years since 1900, the way the original prints it
            print('    { "%s", "%02d/%02d/%02d %02d:%02d", 0x%08lXul },'
                  % (n.upper(), Y - 1900, M, D, h, m, stamp))
        print('    { 0, 0, 0 },')
        print('};')
    else:
        for n, Y, M, D, h, m, s in rows:
            print('%-14s %02d/%02d/%02d %02d:%02d:%02d' % (n, Y % 100, M, D, h, m, s))
