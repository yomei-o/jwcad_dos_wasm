"""案内文の文字列から、それを使っているオーバーレイの場所を引きます。

    python tools/strref.py 部分消去 範囲
(tmp/dis/ovlNN.dis を先に作っておくこと：tools/disasm.py --ovl N 0 0x10000)
"""
import glob
import os
import re
import sys

sys.stdout.reconfigure(encoding='utf-8')
HERE = os.path.dirname(os.path.abspath(__file__))
b = open(os.path.join(HERE, '..', 'decomp', 'JW_CADV.unp.exe'), 'rb').read()
hdr = int.from_bytes(b[8:10], 'little') * 16
base = hdr + 0x33750
offs = {}
for word in sys.argv[1:]:
    pat = word.encode('cp932')
    i = b.find(pat, base)
    while i >= 0 and i < base + 0x10000:
        j = i
        while b[j - 1] != 0:
            j -= 1
        offs[j - base] = b[j:b.find(b'\0', j)].decode('cp932', 'replace')
        i = b.find(pat, i + 1)
for o, t in sorted(offs.items()):
    print('DS:%04x %r' % (o, t[:60]))
    rx = re.compile(r'mov\s+ax, 0x%x\s*$' % o)
    for f in sorted(glob.glob(os.path.join(HERE, '..', 'tmp', 'dis', '*.dis'))):
        for line in open(f, encoding='utf-8', errors='replace'):
            if rx.search(line.rstrip()):
                print('    %s %s' % (os.path.basename(f)[:-4], line.split()[0]))
