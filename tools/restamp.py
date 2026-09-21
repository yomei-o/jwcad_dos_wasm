# -*- coding: utf-8 -*-
"""Put the archive's dates back on the files in orig/.

    python tools/restamp.py            # say what would change
    python tools/restamp.py --write    # do it

orig/ was extracted before tools/lzh.py restored timestamps, so its files
carry the date they were unpacked.  JW_CAD shows a drawing's date in
入出力 → ①ﾌｧｲﾙ → ②読込, so that date has to be the distribution's, the way
a real lha leaves it.
"""
import os
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from lzh import stamps

when = stamps(open('orig/jwcv222h.lzh', 'rb').read())
write = '--write' in sys.argv
n = 0
for name, t in sorted(when.items()):
    path = os.path.join('orig', name)
    if not os.path.exists(path):
        continue
    if abs(os.path.getmtime(path) - t) < 2:
        continue
    n += 1
    print('%-16s %s -> %s' % (name,
                              time.strftime('%Y-%m-%d %H:%M',
                                            time.localtime(os.path.getmtime(path))),
                              time.strftime('%Y-%m-%d %H:%M', time.localtime(t))))
    if write:
        os.utime(path, (t, t))
print('%d file%s %s' % (n, '' if n == 1 else 's',
                        'restamped' if write else 'would change (--write to do it)'))
