"""Press HELP in the original after picking each menu item (and with a drawing
open) and say which page of JW_CADV.HLP it opens.   python tools/helpscan.py"""
import subprocess, sys, os
sys.path.insert(0, 'tools')
from helprender import *

EMU = '../dosv_emu_cpp/dosemu.exe'
def run(name, pre, post, drawing=None):
    s = 'wait 26000000\n' + pre + 'mouse 620 470\nwait 2000000\nclick L\nwait 4000000\n' + post
    s += 'shot tmp/hs/%s.png\n' % name
    os.makedirs('tmp/hs', exist_ok=True)
    open('tmp/hs/%s.txt' % name, 'w').write(s)
    args = [EMU, '--root', '../dosv_emu_cpp/tmp/root', '--font-ank', 'font/JWANK16.FNT', '--font-kanji', 'font/JWKAN16.FNT',
            '--script', 'tmp/hs/%s.txt' % name, '../dosv_emu_cpp/tmp/root/JW_CADV.EXE']
    if drawing: args.append(drawing)
    subprocess.run(args, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    return name

def match(name):
    shot = Image.open('tmp/hs/%s.png' % name).convert('RGB')
    return sorted((same(shot, cached(k)), k) for k in range(160))[0]


if __name__ == '__main__':
    names = []
    for item in range(1, 31):
        row = (item - 16) if item >= 16 else item - 1
        x = 100 if item < 16 else 30
        y = 64 + 16 * row + 8
        pre = 'mouse %d %d\nwait 1000000\nclick L\nwait 3000000\n' % (x, y)
        names.append((item, run('m%d' % item, pre, '')))
    for item, n in names:
        print(item, match(n), flush=True)
