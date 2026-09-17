"""src/span.h -- what 消去 writes along the top once ③指定範囲 is picked.

The data selection 複写 and 移動 use.  Captured the way src/typed.h was: drive
the original, keep every string it wrote into the top line in the window for
each step, and print them in src/stage.h's shape.

    python tools/span_table.py            # writes src/span.h

The three runs it needs are made here, so it can be run again from a clean
tree.  Stages, as src/ui.c replays them:

    0  the line ③指定範囲 puts up, before any point is taken
    1  after the first point -- two spellings, one per button
    3  after the second, the 追加･除外 line (stage 2 is 復活出来ません, which
       is the same as 範囲内消去's and stays in src/stage.h)
"""
import os
import re
import subprocess
import sys

B = chr(92)
EMU = '../dosv_emu_cpp/dosemu.exe'
PRESS = ('mouse %d %d' + chr(10) + 'wait 3000000' + chr(10) + 'down %s' + chr(10)
         + 'wait 3000000' + chr(10) + 'up %s' + chr(10) + 'wait 30000000' + chr(10))


def run(script, out):
    open(out + '.txt', 'w').write(script)
    env = dict(os.environ, DOSEMU_BP='+0DEF:23C5', DOSEMU_BPSTR='2',
               DOSEMU_BPN='20000')
    with open(out + '.log', 'wb') as f:
        subprocess.run([EMU, '--root', 'orig', '--font-ank', 'font/JWANK16.FNT',
                        '--font-kanji', 'font/JWKAN16.FNT', '--script',
                        out + '.txt', 'orig/JW_CADV.EXE', 'SAMPLE0.JWC'],
                       check=True, stdout=f, stderr=subprocess.DEVNULL,
                       env=env)


# the "please wait" flash, which is gone by the time the screen settles
WAIT = bytes([0x81, 0x96, 0x82, 0xa8, 0x91, 0xd2, 0x82, 0xbf,
              0x89, 0xba, 0x82, 0xb3, 0x82, 0xa2, 0x81, 0x96])


def strings(log, lo, hi):
    """The last write to each cell in the window, in the order they came."""
    out = []
    for line in open(log, encoding='latin-1'):
        f = line.split()
        if len(f) < 15 or f[0] != '[bp]' or line.count('"') < 2:
            continue
        t = int(f[3])
        if t < lo or t >= hi:
            continue
        s = line[line.index('"') + 1:line.rindex('"')].encode('latin-1')
        if not s.strip() or s == WAIT:
            continue
        k = (int(f[8], 16), int(f[9], 16), int(f[10], 16), int(f[11], 16), s)
        if k not in out:
            out.append(k)
    return [k for k in out if k[1] == 1]         # the top line only


def escape(s):
    """The bytes as C string chunks.  A run of plain ASCII becomes one
    quoted chunk and every other byte its own hex escape: the two must not
    be joined, because C reads a hex escape followed by a hex digit as one
    escape, and 0x87 followed by "A" is then out of range."""
    out = []
    run = ''
    for ch in s:
        if 0x20 <= ch < 0x7f and chr(ch) not in '"' + B:
            run += chr(ch)
            continue
        if run:
            out.append('"%s"' % run)
            run = ''
        out.append('"' + B + 'x%02x"' % ch)
    if run:
        out.append('"%s"' % run)
    return ' '.join(out) if out else '""'


def rows(items, stage):
    for col, row, fg, bg, s in items:
        yield ('    { 25, %d, %2d, %d, %d, 0x%04x, 0, 0, { 0, 0 }, 0, %s },'
               % (stage, col, row, fg, bg, escape(s)))


def main():
    os.makedirs('tmp/span', exist_ok=True)
    head = ('wait 40000000' + chr(10) + 'mouse 30 216' + chr(10)
            + 'wait 2000000' + chr(10) + 'click left' + chr(10)
            + 'wait 24000000' + chr(10))
    pick = PRESS % (470, 8, 'left', 'left')     # ③指定範囲, columns 55..64
    # one run per button on the first point; the second run goes on to the
    # 追加･除外 line, which is the same either way
    run(head + pick, 'tmp/span/open')
    run(head + pick + (PRESS % (150, 130, 'left', 'left')), 'tmp/span/left')
    run(head + pick + (PRESS % (150, 130, 'right', 'right'))
        + (PRESS % (245, 170, 'left', 'left')), 'tmp/span/both')
    # the windows: 40M to start, 26M for the menu, then 36M a press
    open_items = strings('tmp/span/open.log', 66_000_000, 1 << 62)
    left_items = strings('tmp/span/left.log', 102_000_000, 1 << 62)
    both = 'tmp/span/both.log'
    right_items = strings(both, 102_000_000, 138_000_000)
    add_items = strings(both, 138_000_000, 1 << 62)
    out = [__doc__.split('\n')[0]]
    text = ['/* ' + __doc__.rstrip() + '\n */',
            '#ifndef JW_SPAN_H', '#define JW_SPAN_H', '',
            '#include "stage.h"', '',
            'static const JwStage JW_SPAN[] = {',
            '    /* stage 0: the line ③指定範囲 puts up */']
    text += list(rows(open_items, 0))
    text += ['    /* stage 1, the first point taken with the **right** button:',
             '     * 線･円･文字, and the top line offers ③文字種 as well */']
    text += list(rows(right_items, 1))
    text += ['    /* stage 1 with the **left** button: <線･円>, and no ③文字種.',
             '     * src/ui.c picks between the two on JwUi.with_text. */']
    text += list(rows(left_items, 11))
    text += ['    /* stage 3: 追加･除外, with 指定範囲 in front of it */']
    text += list(rows(add_items, 3))
    text += ['    { 0, 0, 0, 0, 0, 0, 0, 0, { 0, 0 }, 0, 0 },', '};', '',
             '#endif', '']
    open('src/span.h', 'w', encoding='utf-8', newline='').write('\n'.join(text))
    print('wrote src/span.h')
    _ = out


if __name__ == '__main__':
    main()
