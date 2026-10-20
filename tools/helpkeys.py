"""Drive HELP in the original with a list of steps and say which page each shot
shows.   python tools/helpkeys.py START_MENU_ITEM step step ...
step: a key name (1, esc, pgdn ...), or  mouse:X:Y  (a left press)."""
import subprocess, sys, os
sys.path.insert(0, 'tools')
from helprender import *
EMU = '../dosv_emu_cpp/dosemu.exe'
os.makedirs('tmp/hk', exist_ok=True)
item = int(sys.argv[1]); steps = sys.argv[2:]
row = (item - 16) if item >= 16 else item - 1
x = 100 if item < 16 else 30
y = 64 + 16 * row + 8
s = 'wait 26000000\nmouse %d %d\nwait 1000000\nclick L\nwait 14000000\n' % (x, y)
s += 'mouse 620 470\nwait 2000000\nclick L\nwait 4000000\nshot tmp/hk/0.png\n'
for i, st in enumerate(steps, 1):
    if st.startswith('mouse:'):
        _, a, b = st.split(':')
        s += 'mouse %s %s\nwait 1000000\nclick L\nwait 14000000\n' % (a, b)
    elif st.startswith('rmouse:'):
        _, a, b = st.split(':')
        s += 'mouse %s %s\nwait 1000000\nclick R\nwait 14000000\n' % (a, b)
    else:
        s += 'key %s\nwait 14000000\n' % st
    s += 'shot tmp/hk/%d.png\n' % i
open('tmp/hk/s.txt', 'w').write(s)
subprocess.run([EMU, '--root', '../dosv_emu_cpp/tmp/root', '--font-ank', 'font/JWANK16.FNT', '--font-kanji', 'font/JWKAN16.FNT',
                '--script', 'tmp/hk/s.txt', '../dosv_emu_cpp/tmp/root/JW_CADV.EXE'], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
for i in range(len(steps) + 1):
    shot = Image.open('tmp/hk/%d.png' % i).convert('RGB')
    r = sorted((same(shot, cached(k)), k) for k in range(160))[:1]
    print(i, steps[i - 1] if i else 'open', r, flush=True)
