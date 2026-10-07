"""描ききる手順のランダム生成（ESC では抜けない。項目・数値・左右の押しを混ぜて最後まで描く）。

    python tools/drawfuzz.py N SEED OUT.txt [コマンド鍵…]

1 行 = `dfz_<鍵>_<通し番号>|SAMPLE0|type <鍵>|<手>…`。本物と比べる道：
    python tools/rbatch.py OUT.txt && python tools/stepfast.py OUT.txt
手の種類：項目（type 1〜9）、数値（type 30 など）、Enter、図面の左押し・右押し、矢の移動。
SAMPLE0 の線・円の上、四隅、空き地を混ぜた点を使う（読み取りも効くように）。
"""
import random
import sys

N = int(sys.argv[1])
SEED = int(sys.argv[2])
OUT = sys.argv[3]
KEYS = sys.argv[4:] or list('chxbftvrwdeanCHXBFTVRWDENA')
random.seed(SEED)

# SAMPLE0 の枠は x 162..598、y 140..420 あたり。線の上、角、中、外れを混ぜる。
PTS = [(400, 140), (162, 250), (598, 300), (300, 250), (450, 330), (350, 350), (250, 200),
       (500, 200), (162, 140), (598, 140), (162, 420), (598, 420), (380, 200), (300, 350),
       (200, 300), (550, 250), (430, 180), (280, 160)]
NUMS = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '30', '45', '12', '5', '100', '1000', '0']


def act(first):
    r = random.random()
    if first:
        # 最初は項目を選ぶ（1〜2 回）か、いきなり押す
        if r < 0.55:
            return 'type %d' % random.randint(1, 9)
        return '%d %d %s' % (*random.choice(PTS), random.choice(['left', 'left', 'right']))
    if r < 0.50:
        x, y = random.choice(PTS)
        return '%d %d %s' % (x, y, random.choice(['left', 'left', 'left', 'right']))
    if r < 0.70:
        return 'type %d' % random.randint(1, 9)
    if r < 0.82:
        return 'type ' + random.choice(NUMS)
    if r < 0.92:
        return 'key enter'
    x, y = random.choice(PTS)
    return 'move %d %d' % (x, y)


lines = []
for key in KEYS:
    for i in range(N):
        steps = ['type ' + key]
        n = random.randint(4, 11)
        for k in range(n):
            steps.append(act(k == 0))
        lines.append('dfz_%s_%d|SAMPLE0|%s' % (key, i, '|'.join(steps)))
open(OUT, 'w', newline='\n').write('\n'.join(lines) + '\n')
print(len(lines), 'cases ->', OUT)
