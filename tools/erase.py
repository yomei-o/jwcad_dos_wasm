"""What tools/erase.sh's three presses did: the colours, and the top line."""
import collections
import sys

W = 640
sys.stdout.reconfigure(encoding='utf-8', errors='replace')


def shot(name):
    return open('tmp/erase/%s.raw' % name, 'rb').read()


def counts(a, b):
    c = collections.Counter()
    for y in range(17, 463):
        for x in range(122, 639):
            i = (y * W + x) * 4
            if a[i:i + 3] != b[i:i + 3]:
                c[(a[i:i + 3].hex(), b[i:i + 3].hex())] += 1
    return c


before, fixed, after = shot('b'), shot('s'), shot('a')
print('  range fixed:   ', counts(before, fixed).most_common(4))
print('  carried out:   ', counts(fixed, after).most_common(4))
print('  net, start to end:', counts(before, after).most_common(4))
seen = []
for line in open('tmp/erase/str.txt', encoding='latin-1'):
    f = line.split()
    if len(f) < 15 or f[0] != '[bp]' or line.count('"') < 2:
        continue
    if int(f[3]) < 60_000_000:
        continue
    s = line[line.index('"') + 1:line.rindex('"')].encode('latin-1')
    key = (int(f[8], 16), int(f[9], 16), s)
    if key in seen or not s.strip():
        continue
    seen.append(key)
    print('   col=%-3d row=%-3d %s'
          % (key[0], key[1], s.decode('cp932', 'replace')))
