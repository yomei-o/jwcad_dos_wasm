"""一覧の各件を**1 段ずつ**本物の画面と比べます（本物は tools/rbatch.py が埋めた
tmp/origcache から。無い段は「?」）。

    python tools/stepcheck.py tools/cases/func_steps.txt          # ぜんぶ
    python tools/stepcheck.py tools/cases/func_steps.txt box_     # 名前に box_ が入るもの
    ALL=1 python tools/stepcheck.py ...                           # 段ごとの画素数を全部

1 件につき移植を 1 回だけ走らせ（tools/stepshots.mjs）、最初に画面が違った段と
その手順を出します。画素の数え方は tools/fulldiff.py と同じ（RGB が違う画素）。
"""
import os
import subprocess
import sys

import numpy as np

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)
import rbatch  # noqa: E402

NODE = os.environ.get('NODE', 'node')


def raw(p):
    return np.fromfile(p, np.uint8).reshape(480, 640, 4)[:, :, :3]


def main():
    lists = [a for a in sys.argv[1:] if os.path.exists(a)]
    only = [a for a in sys.argv[1:] if not os.path.exists(a)]
    out = os.path.join(ROOT, 'tmp/stepcheck')
    os.makedirs(out, exist_ok=True)
    same = diff = unknown = 0
    for name, drawing, steps in rbatch.cases(lists):
        if only and not any(o in name for o in only):
            continue
        base = os.path.join(out, name)
        for f in os.listdir(out):
            if f.startswith(name + '.'):
                os.remove(os.path.join(out, f))
        subprocess.run([NODE, os.path.join(HERE, 'stepshots.mjs'),
                        'orig/%s.JWC' % drawing, base] + steps,
                       cwd=ROOT, check=True)
        first = None
        counts = []
        for k in range(len(steps)):
            key = rbatch.md5(('%s|%s|%s|%s' % (drawing, rbatch.BOOT, rbatch.WAIT,
                                               ' '.join(steps[:k + 1])))
                             .encode('latin-1'))
            o = os.path.join(ROOT, 'tmp/origcache', key + '.raw')
            p = '%s.%03d.raw' % (base, k)
            if not os.path.exists(o) or not os.path.exists(p):
                counts.append(None)
                continue
            n = int((raw(o) != raw(p)).any(axis=2).sum())
            counts.append(n)
            if n and first is None:
                first = k
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
