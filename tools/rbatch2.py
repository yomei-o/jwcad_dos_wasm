"""本物の実行をビルド機でまとめて走らせ、手元のキャッシュを埋めます。

    python tools/rbatch.py tools/cases/func_draw.txt ...     # 送って、走らせて、受け取る
    python tools/rbatch.py --dry tools/cases/func_draw.txt   # 何件走らせるかだけ

一覧は tools/funccases.sh と同じ `名前|図面|手順|...`。1 件につき本物を 1 回だけ
走らせ、**手順の 1 段ごとに画面を撮って**、最後に保存させます。受け取った物は

  * 保存した図面 → tmp/funccache/<鍵>.JWC    （tools/functest.sh の鍵）
  * k 段目の画面 → tmp/origcache/<鍵>.raw     （tools/seqcheck.sh の k 段目までの鍵）

に置くので、あとの functest・seqcheck・funccases は本物を走らせずに済みます
（1 件 20〜30 秒 → 移植だけの 1 秒）。台本と鍵の作り方は二つのシェルと
**1 バイトも違わないように**写してあります——違えば鍵が外れて手元で走り直すだけ
ですが、同じ鍵で違う台本の絵を置くと、別の絵と比べることになります。
"""
import hashlib
import os
import subprocess
import sys
import tarfile

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
HOST = 'yomei@192.168.6.14'
KEY = os.path.expanduser('~/.claude/keys/ort_build_key')
REMOTE = 'C:/jwrun2'
BOOT = '40000000'
WAIT = '26000000'
PAR = int(os.environ.get('PAR', '18'))


def chunk(step):
    """tools/seqcheck.sh / functest.sh が 1 段を台本に直すのと同じ。"""
    if step.startswith('type '):
        out = ''
        for ch in step[5:]:
            # fold -w1 | while read -r ch：read は空白だけの行を空にするので飛ぶ
            if ch.strip() == '':
                continue
            out += 'type %s\nwait 8000000\n' % ch
        return out + 'wait %s\n' % WAIT
    if step.startswith('move '):
        return 'mouse %s\nwait %s\n' % (step[5:], WAIT)
    if step.startswith('key '):
        return 'key %s\nwait %s\n' % (step[4:], WAIT)
    sx, rest = step.split(' ', 1) if ' ' in step else (step, step)
    if ' ' in rest:
        sy, sb = rest.split(' ', 1)
    else:
        sy, sb = rest, 'left'
    return ('mouse %s %s\nwait 3000000\ndown %s\nwait 3000000\nup %s\nwait %s\n'
            % (sx, sy, sb, sb, WAIT))


P = 'mouse %d %d\nwait 3000000\ndown left\nwait 3000000\nup left\nwait %s\n'


def save_tail():
    """tools/save.sh の保存の道（PRE のあと）。"""
    s = 'mouse 30 296\nwait 2000000\nclick left\nwait 24000000\n'
    s += P % (110, 8, '40000000')
    s += P % (100, 8, '90000000')
    s += P % (200, 8, '90000000')
    s += 'key enter\nwait 30000000\n' * 8
    s += 'wait 60000000\n'
    s += P % (280, 8, '90000000')
    s += P % (210, 8, '400000000')
    return s


def md5(b):
    return hashlib.md5(b).hexdigest()


def cases(paths):
    for p in paths:
        for line in open(p, encoding='latin-1', newline=''):
            line = line.rstrip('\r\n')
            if not line.strip() or line.startswith('#'):
                continue
            name, drawing, rest = line.split('|', 2)
            yield name, drawing, rest.split('|')


def plan(paths):
    jobs = []
    for name, drawing, steps in cases(paths):
        chunks = [chunk(s) for s in steps]
        pre = ''.join(chunks) + 'mouse 400 250\nwait %s\n' % WAIT
        fkey = md5(('%s|%s|%s|' % (drawing, BOOT, WAIT)).encode('latin-1') + pre.encode('latin-1'))
        skeys = [md5(('%s|%s|%s|%s' % (drawing, BOOT, WAIT, ' '.join(steps[:k + 1])))
                     .encode('latin-1')) for k in range(len(steps))]
        have_f = os.path.exists(os.path.join(ROOT, 'tmp/funccache', fkey + '.JWC'))
        have_s = all(os.path.exists(os.path.join(ROOT, 'tmp/origcache', k + '.raw'))
                     for k in skeys)
        if have_f and have_s:
            continue
        script = 'wait %s\n' % BOOT
        for k, c in enumerate(chunks):
            script += c + 'shot s%03d.raw\n' % k
        script += 'mouse 400 250\nwait %s\n' % WAIT + save_tail() + 'shot final.raw\n'
        jobs.append((name, drawing, fkey, skeys, script))
    return jobs


def run(cmd, **kw):
    print('+', ' '.join(cmd) if isinstance(cmd, list) else cmd, flush=True)
    subprocess.run(cmd, check=True, **kw)


def main():
    args = sys.argv[1:]
    dry = '--dry' in args
    args = [a for a in args if a != '--dry']
    jobs = plan(args)
    print('%d jobs to run' % len(jobs), flush=True)
    if dry or not jobs:
        return
    stage = os.path.join(ROOT, 'tmp/rbatch')
    os.makedirs(stage, exist_ok=True)
    tgz = os.path.join(stage, 'jobs.tgz')
    with tarfile.open(tgz, 'w:gz') as t:
        for name, drawing, fkey, skeys, script in jobs:
            for fn, data in (('script.txt', script), ('drawing.txt', drawing + '\n')):
                p = os.path.join(stage, 'x')
                open(p, 'wb').write(data.encode('latin-1'))
                t.add(p, 'jobs/%s/%s' % (fkey, fn))
    ssh = ['ssh', '-i', KEY, HOST]
    run(ssh + ['cd /d C:\\jwrun && if exist jobs rmdir /s /q jobs'])
    run(['scp', '-q', '-i', KEY, tgz, HOST + ':' + REMOTE + '/jobs.tgz'])
    run(['scp', '-q', '-i', KEY, os.path.join(HERE, 'remote/run.py'),
         HOST + ':' + REMOTE + '/run.py'])
    run(ssh + ['cd /d C:\\jwrun && tar xzf jobs.tgz && '
               '"C:\\Program Files\\Python312\\python.exe" run.py jobs %d' % PAR])
    run(ssh + ['cd /d C:\\jwrun && tar czf out.tgz --exclude=script.txt '
               '--exclude=drawing.txt jobs'])
    out = os.path.join(stage, 'out.tgz')
    run(['scp', '-q', '-i', KEY, HOST + ':' + REMOTE + '/out.tgz', out])
    got_f = got_s = bad = agree = disagree = 0
    byname = {j[2]: j for j in jobs}
    with tarfile.open(out) as t:
        for m in t.getmembers():
            parts = m.name.split('/')
            if len(parts) != 3 or not m.isfile():
                continue
            fkey, fn = parts[1], parts[2]
            job = byname.get(fkey)
            if not job:
                continue
            data = t.extractfile(m).read()
            if fn == 'out.JWC':
                dst = os.path.join(ROOT, 'tmp/funccache', fkey + '.JWC')
                if os.path.exists(dst):
                    if open(dst, 'rb').read() == data:
                        agree += 1
                    else:
                        disagree += 1
                        print('  DIFFERENT drawing from local:', job[0])
                    continue
                open(dst, 'wb').write(data)
                got_f += 1
            elif fn.startswith('s') and fn.endswith('.raw'):
                k = int(fn[1:4])
                dst = os.path.join(ROOT, 'tmp/origcache', job[3][k] + '.raw')
                if os.path.exists(dst):
                    # 手元で撮った絵がもうある：ビルド機の絵と同じか確かめるだけ
                    if open(dst, 'rb').read() == data:
                        agree += 1
                    else:
                        disagree += 1
                        print('  DIFFERENT from local:', job[0], 'step', k + 1)
                    continue
                open(dst, 'wb').write(data)
                got_s += 1
            elif fn == 'done' and not data.startswith(b'True'):
                bad += 1
                print('  no save:', job[0])
    print('saved drawings %d, step screens %d, failed saves %d' % (got_f, got_s, bad))
    print('screens already here: %d the same, %d different' % (agree, disagree))


if __name__ == '__main__':
    main()
