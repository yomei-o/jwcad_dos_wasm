"""ビルド機（192.168.6.14）で本物をまとめて走らせる側（tools/rbatch.py が送ります）。

    python run.py jobs 16

jobs/<鍵>/ に script.txt と drawing.txt があり、ひとつずつ root を写して
dosemu を走らせます。台本の中の `shot sNNN.raw` はその仕事の場所に落ちます。
保存に成功したら（DRAWING.bak ができる）out.JWC に写します。終わった仕事には
done を置くので、途中で止めても続きから走ります。
"""
import os
import shutil
import subprocess
import sys
import time
from concurrent.futures import ThreadPoolExecutor

HERE = os.path.dirname(os.path.abspath(__file__))
EMU = os.path.join(HERE, 'dosemu.exe')
ORIG = os.path.join(HERE, 'orig')
FONT = os.path.join(HERE, 'font')
# tools/seqcheck.sh と同じく、解析で orig/ に落ちた図面は部屋から外します
# （入出力のファイル一覧の行がずれるため）。
DROP = ('QPICK.JWC', 'QBYTES.JWC', 'ONE2.JWC')


def one(job):
    if os.path.exists(os.path.join(job, 'done')):
        return 'skip'
    drawing = open(os.path.join(job, 'drawing.txt')).read().strip()
    root = os.path.join(job, 'root')
    shutil.rmtree(root, ignore_errors=True)
    shutil.copytree(ORIG, root)
    for f in DROP:
        try:
            os.remove(os.path.join(root, f))
        except FileNotFoundError:
            pass
    t = time.time()
    subprocess.run([EMU, '--root', 'root',
                    '--font-ank', os.path.join(FONT, 'JWANK16.FNT'),
                    '--font-kanji', os.path.join(FONT, 'JWKAN16.FNT'),
                    '--script', 'script.txt', 'root/JW_CADV.EXE',
                    drawing + '.JWC'],
                   cwd=job, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL,
                   timeout=1800)
    ok = os.path.exists(os.path.join(root, drawing + '.bak'))
    if ok:
        shutil.copy(os.path.join(root, drawing + '.JWC'),
                    os.path.join(job, 'out.JWC'))
    shutil.rmtree(root, ignore_errors=True)
    open(os.path.join(job, 'done'), 'w').write('%s %.1f\n' % (ok, time.time() - t))
    return 'ok' if ok else 'nosave'


def main():
    jobs = sys.argv[1]
    n = int(sys.argv[2]) if len(sys.argv) > 2 else 16
    todo = sorted(os.path.join(jobs, j) for j in os.listdir(jobs)
                  if os.path.isdir(os.path.join(jobs, j)))
    t = time.time()
    count = {}
    with ThreadPoolExecutor(n) as ex:
        for i, r in enumerate(ex.map(one, todo)):
            count[r] = count.get(r, 0) + 1
            if (i + 1) % 10 == 0 or i + 1 == len(todo):
                print('%d/%d %s %.0fs' % (i + 1, len(todo), count, time.time() - t),
                      flush=True)


if __name__ == '__main__':
    main()
