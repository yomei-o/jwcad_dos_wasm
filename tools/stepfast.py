"""tools/stepcheck.py の速い版。出力の形は同じ（ok / DIFF / ? と最後の合計）。

    python tools/stepfast.py tools/cases/func_steps.txt          # ぜんぶ
    python tools/stepfast.py tools/cases/func_steps.txt box_     # 名前に box_ が入るもの
    ALL=1 python tools/stepfast.py ...    # 最初の差で止めず、段ごとの画素数を全部
    JOBS=4 python tools/stepfast.py ...   # 並べる数（既定は CPU 数）

速い理由：(1) 件ごとに node を起こさず、1 つの node が何件も回す、(2) 画素の比較は node の
中（画面を書き出して python で読み直さない）、(3) 最初の差の段で止める（ALL=1 で全段）、
(4) 作業者を CPU 数だけ並べる。差のあった段の画面だけ STEPOUT（既定 tmp/stepcheck）に
`<件名>.NNN.raw` で残すので、tmp/shot.py などの見比べはそのまま使えます。
段の解釈は tools/stepcore.mjs（tools/stepshots.mjs と共通）。
"""
import json
import os
import subprocess
import sys
import tempfile

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)
import rbatch  # noqa: E402

NODE = os.environ.get('NODE', 'node')


def main():
    lists = [a for a in sys.argv[1:] if os.path.exists(a)]
    only = [a for a in sys.argv[1:] if not os.path.exists(a)]
    out = os.path.join(ROOT, os.environ.get('STEPOUT', 'tmp/stepcheck'))
    os.makedirs(out, exist_ok=True)
    jobs = []
    for name, drawing, steps in rbatch.cases(lists):
        if only and not any(o in name for o in only):
            continue
        for f in os.listdir(out):
            if f.startswith(name + '.'):
                os.remove(os.path.join(out, f))
        origs = []
        for k in range(len(steps)):
            key = rbatch.md5(('%s|%s|%s|%s' % (drawing, rbatch.BOOT, rbatch.WAIT,
                                               ' '.join(steps[:k + 1])))
                             .encode('latin-1'))
            p = os.path.join(ROOT, 'tmp/origcache', key + '.raw')
            origs.append(p if os.path.exists(p) else None)
        jobs.append({'name': name, 'path': 'orig/%s.JWC' % drawing, 'steps': steps,
                     'origs': origs, 'dump': os.path.join(out, name)})
    n = max(1, min(int(os.environ.get('JOBS', os.cpu_count() or 4)), len(jobs) or 1))
    tmp = tempfile.mkdtemp(prefix='stepfast')
    procs = []
    for w in range(n):
        # 長い手順の件が一つの作業者に固まらないよう、交互に配る。
        part = jobs[w::n]
        jp, rp = os.path.join(tmp, 'j%d.json' % w), os.path.join(tmp, 'r%d.json' % w)
        with open(jp, 'w') as f:
            json.dump(part, f)
        procs.append((subprocess.Popen(
            [NODE, os.path.join(HERE, 'stepfast.mjs'), jp, rp], cwd=ROOT), rp))
    res = {}
    for p, rp in procs:
        p.wait()
        if os.path.exists(rp):
            for r in json.load(open(rp)):
                res[r['name']] = r
    same = diff = unknown = 0
    for j in jobs:
        name, steps = j['name'], j['steps']
        r = res.get(name)
        if r is None or r.get('error'):
            unknown += 1
            print('  ERR   %-28s %s' % (name, (r or {}).get('error', 'worker died')))
            continue
        counts, first = r['counts'], r['first']
        if first is None and None in counts:
            unknown += 1
            print('  ?     %-28s (some steps have no original screen)' % name)
        elif first is None:
            same += 1
            print('  ok    %-28s all %d steps 0' % (name, len(steps)))
        else:
            diff += 1
            print('  DIFF  %-28s step %d [%s]: %d px' % (
                name, first + 1, steps[first].strip(), counts[first]))
        if os.environ.get('ALL'):
            print('        ' + ' '.join('?' if c is None else str(c) for c in counts))
    print('same %d / different %d / unknown %d' % (same, diff, unknown))


if __name__ == '__main__':
    main()
