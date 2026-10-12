"""手順を 1 手ずつ延ばしながら、本物と移植の**その時点の画面**を突き合わせる（tools/seqcheck.sh の連打）。

    python tools/seqprefix.py 3 "type s" "type 4" "type 1" "300 402 left" ...
    DRAWING=SAMPLE3 SPONLY=6,7 python tools/seqprefix.py 4 ...      # 6・7 手めだけ
    SEQCHECK=tmp/l_seqcheck.sh python tools/seqprefix.py ...        # 別の seqcheck（worktree 用の写し）

最初の引数は何手めから比べるか。出力は `prefix N (その手): DRAWING: 画素の違い数`。
差が出た手の画面は tmp/sp/o<N>.raw（本物）・p<N>.raw（移植）に残る（python tools/rawpng.py で見られる）。
オプション ④一括処理 ①②（src/optbatch.c）の画面を 1 手ずつ 0 画素差にするのに使った。
"""
import os
import shutil
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
os.chdir(ROOT)
os.makedirs('tmp/sp', exist_ok=True)
frm = int(sys.argv[1])
steps = sys.argv[2:]
only = os.environ.get('SPONLY')
script = os.environ.get('SEQCHECK', 'tools/seqcheck.sh')
for k in range(frm, len(steps) + 1):
    if only and str(k) not in only.split(','):
        continue
    r = subprocess.run(['sh', script] + steps[:k], capture_output=True, text=True)
    out = (r.stdout + r.stderr).strip().splitlines()
    for a, b in (('orig', 'o'), ('port', 'p')):
        src = 'tmp/seq/%s.raw' % a
        if os.path.exists(src):
            shutil.copy(src, 'tmp/sp/%s%d.raw' % (b, k))
    print('prefix %d (%s): %s' % (k, steps[k - 1], out[-1] if out else '?'))
    sys.stdout.flush()
