"""Line up the port's turned text boxes with the original's own line calls.

    python tools/qbox.py TEST7

A string too small to draw becomes a box, and a box is five calls to the line
routine.  The port prints its own with JW_TRACE=1 and the original's come out
of the emulator (DOSEMU_BP on the line routine), so the two can be matched by
their near corner and the rest compared.  `XX` marks a box that differs -- or
one the original never drew, which is what an off-paper box looks like.
"""
import subprocess, sys, os
sys.path.insert(0,'tools')
from lr import calls

name = sys.argv[1]
only = 'orig/%sTEXT.JWC' % name[:2]
subprocess.check_call([sys.executable,'tools/onlykind.py','orig/%s.JWC'%name,'texts',only],
                      stdout=subprocess.DEVNULL)
open('tmp/ask/script.txt','w').write('wait 60000000'+chr(10)+'quit'+chr(10))
env=dict(os.environ, DOSEMU_BP='+0DEF:17BB', DOSEMU_BPN='8', DOSEMU_BPPTR='2,3,4,5',
         DOSEMU_BPPTRAT='0', DOSEMU_BPPTRN='4')
log='tmp/work/lr_%s.txt'%name
with open(log,'w') as f:
    subprocess.check_call(['../dosv_emu_cpp/dosemu.exe','--root','orig',
        '--font-ank','font/JWANK16.FNT','--font-kanji','font/JWKAN16.FNT',
        '--script','tmp/ask/script.txt','orig/JW_CADV.EXE',os.path.basename(only)],
        stdout=f, stderr=subprocess.DEVNULL, env=env)
out=subprocess.check_output(['./tests/drawing.exe','-o',only,'tmp/work/box.raw'],
                            env=dict(os.environ, JW_TRACE='1')).decode()
os.remove(only)

seq=[tuple(int(round(v)) for v in c) for c in calls(log)]
boxes=[]
for l in out.splitlines():
    if l.startswith('box'):
        head=l[4:l.index(' u=')]
        a,b=head.split(')-(')
        x0,y0=[float(v) for v in a[1:].split(',')]
        x1,y1=[float(v) for v in b[:-1].split(',')]
        u=l[l.index('u=(')+3:l.index(') h=')]
        ux,uy=[float(v) for v in u.split(',')]
        rest=l[l.index(' h=')+3:].split()
        h=int(rest[0]); pts=[tuple(int(v) for v in p.split(',')) for p in rest[1:]]
        boxes.append((x0,y0,x1,y1,ux,uy,h,pts))
print('%d boxes traced' % len(boxes))
for (x0,y0,x1,y1,ux,uy,h,pts) in boxes:
    a,b,c,d = pts
    # the original's box: find a run of five calls starting at the same near edge
    hit=None
    for i in range(len(seq)-4):
        if seq[i][:2]==a and seq[i][2:]==b:
            hit=seq[i:i+5]; break
    ok = hit and hit[1][2:]==c and hit[2][2:]==d
    print('%s (%11.5f,%11.5f)-(%11.5f,%11.5f) n=(%+.7f,%+.7f) h=%d' %
          ('  ' if ok else 'XX', x0,y0,x1,y1, uy, -ux, h))
    print('      port %s' % (pts,))
    print('      orig %s' % (hit,))
