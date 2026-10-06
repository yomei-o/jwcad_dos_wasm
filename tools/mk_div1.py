"""probe 用の円・楕円だけの図面 tmp/DIV1.JWC を作る（SAMPLE6 の線・文字・点・弧を画面外へ飛ばし、弧 0..3 を書き換える）。
    python tools/mk_div1.py tmp/DIV1.JWC
    scp -i ~/.claude/keys/ort_build_key tmp/DIV1.JWC yomei@192.168.6.14:C:/jwrun/orig/DIV1.JWC   # 測定のあいだだけ置く
弧 0 = 円 中心(250,250) r60／1 = 楕円 (480,250) rx70 ry42／2 = 弧 30..150度 (250,400) r50／3 = 傾き30度の楕円 (500,400) rx60 ry30（座標は画面）。
"""
import sys,struct
sys.path.insert(0,'tools')
from onlykind import Jwc
j=Jwc('orig/SAMPLE6.JWC')
for k in ('lines','texts','points'): j.banish(k)
# arcs: banish all, then rewrite 0..3
j.banish('arcs')
def put(k,sx,sy,r,flat,s,e,tilt):
    p=j.arcs_at+k*32
    struct.pack_into('<fff',j.d,p,sx-121.0,463.0-sy,r)
    struct.pack_into('<h',j.d,p+12,flat)
    struct.pack_into('<ii',j.d,p+14,int(s*65536),int(e*65536))
    struct.pack_into('<i',j.d,p+22,int(tilt*65536))
put(0,250,250,60.0,10000,0,0,0)        # full circle
put(1,480,250,70.0,6000,0,0,0)         # full ellipse, axis aligned
put(2,250,400,50.0,10000,30,150,0)     # arc 30..150
put(3,500,400,60.0,5000,0,0,30)        # tilted ellipse (30 deg)
open(sys.argv[1],'wb').write(bytes(j.d))
