"""tools/funccases.sh の速い版：本物の記録は tmp/funccache から（tools/rbatch.py が
埋めたもの）、移植の記録は tools/portrec.mjs を並べて走らせて、生のレコードを
比べます。1 件 9 秒 → 1 秒足らず。

    python tools/funcfast.py tools/cases/func_all.txt          # ぜんぶ
    python tools/funcfast.py tools/cases/func_all.txt box_     # 名前に box_ が入るもの
    PORTREC=tmp/snap/tools/portrec.mjs python tools/funcfast.py ...

出力は funccases と同じく ok / DIFF / EMPTY（本物も記録が変わらなかった）/ ?
（本物の記録が無い）。DIFF には違う種類（L 線・A 円弧・T 文字・P 点）と数。
"""
import os
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)
import rbatch  # noqa: E402
from onlykind import Jwc  # noqa: E402

NODE = os.environ.get('NODE', 'node')
PORTREC = os.environ.get('PORTREC', os.path.join(HERE, 'portrec.mjs'))
PAR = int(os.environ.get('PAR', '4'))


MASK = os.environ.get('MASK')


def masked(r, at):
    """MASK=1 のとき、rest[2] の下 2 ビット（読取の印・範囲の印）を伏せる。"""
    if not MASK:
        return r
    r = bytearray(r)
    r[at] &= 0xfc
    return bytes(r)


def records(path):
    j = Jwc(path)
    d = bytes(j.d)
    out = []
    for k in range(j.n_lines):
        p = j.at + 22 * k
        out.append('L%4d %s' % (k, masked(d[p:p + 22], 0x14).hex()))
    for k in range(j.n_arcs):
        p = j.arcs_at + 32 * k
        out.append('A%4d %s' % (k, masked(d[p:p + 32], 0x1e).hex()))
    for k in range(j.n_texts):
        p = j.texts_at + 24 * k
        r = masked(d[p:p + 24], 22)
        off = int.from_bytes(r[16:18], 'little')
        s = d[j.pool_at + off:j.pool_at + off + 80].split(b'\0')[0]
        out.append('T%4d %s %s|%s' % (k, r[:16].hex(), r[20:].hex(), s.hex()))
    p = j.points_at
    for k in range(j.n_points):
        out.append('P%4d %s' % (k, masked(d[p + 12 * k:p + 12 * k + 12], 0xa).hex()))
    return out


def one(case):
    name, drawing, steps = case
    pre = ''.join(rbatch.chunk(s) for s in steps) + 'mouse 400 250\nwait %s\n' % rbatch.WAIT
    key = rbatch.md5(('%s|%s|%s|' % (drawing, rbatch.BOOT, rbatch.WAIT)).encode('latin-1')
                     + pre.encode('latin-1'))
    orig = os.path.join(ROOT, 'tmp/funccache', key + '.JWC')
    if not os.path.exists(orig):
        return name, '?', 'no original record'
    out = os.path.join(ROOT, 'tmp/funcfast', name + '.JWC')
    if os.path.exists(out):
        os.remove(out)
    subprocess.run([NODE, PORTREC, 'orig/%s.JWC' % drawing] + steps + ['move 400 250'],
                   cwd=ROOT, env=dict(os.environ, OUT=out),
                   stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    if not os.path.exists(out):
        return name, 'DIFF', 'port wrote nothing'
    try:
        a, b = records(orig), records(out)
    except BaseException as e:  # 壊れた図面（読み込みは sys.exit で抜ける）
        return name, 'BAD', 'unreadable: %s' % e
    base = records(os.path.join(ROOT, 'orig/%s.JWC' % drawing))
    if a == b:
        if a == base:
            return name, 'EMPTY', ''
        return name, 'ok', ''
    kinds = {}
    sa, sb = set(a), set(b)
    for r in (sa ^ sb):
        kinds[r[0]] = kinds.get(r[0], 0) + 1
    note = ' '.join('%s%d' % kv for kv in sorted(kinds.items()))
    if len(a) != len(b):
        note += '  (%d vs %d records)' % (len(a), len(b))
    return name, 'DIFF', note


def main():
    lists = [a for a in sys.argv[1:] if os.path.exists(a)]
    only = [a for a in sys.argv[1:] if not os.path.exists(a)]
    os.makedirs(os.path.join(ROOT, 'tmp/funcfast'), exist_ok=True)
    todo = [c for c in rbatch.cases(lists) if not only or any(o in c[0] for o in only)]
    count = {}
    with ThreadPoolExecutor(PAR) as ex:
        for name, st, note in ex.map(one, todo):
            count[st] = count.get(st, 0) + 1
            print('  %-5s %-28s %s' % (st, name, note), flush=True)
    print(' / '.join('%s %d' % kv for kv in sorted(count.items())))


if __name__ == '__main__':
    main()
