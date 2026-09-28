r"""Lift a stretch of code (tools/altlift.py) with how often each instruction
ran beside it -- the way 変形 ②包絡 was read on 2026-09-28.

    python tools/covlift.py --ovl 11 0x325e 0x2fc2 decomp/lift/ovl11_envelope.cov

The counts file is what a DOSEMU_TRACE run boils down to:

    DOSEMU_TRACE=lo-hi dosemu.exe ... 2>&1 | grep -a '^\[t\][0-9]* 2CC4:' \
        | awk '{print $2}' | sort | uniq -c | awk '{print $2, $1}' > x.cov

(one `2CC4:0000XXXX n` per line; 2CC4 is where overlays land in the
emulator, and XXXX is then the offset inside the overlay).  Keep the window
narrow -- a whole press takes tens of millions of instructions and the trace
of that runs past ten minutes.  A `.` in the first column means the
instruction never ran; es:-prefixed ones always show `.`, so read those by
their neighbours.
"""
import re
import subprocess
import sys
import os

HERE = os.path.dirname(os.path.abspath(__file__))


def main():
    args = sys.argv[1:]
    cov_path = args.pop()
    cov = {}
    for line in open(cov_path):
        m = re.match(r'2CC4:0*([0-9A-Fa-f]+) (\d+)', line)
        if m:
            cov[0x2ab80 + int(m.group(1), 16)] = int(m.group(2))
    out = subprocess.run([sys.executable, os.path.join(HERE, 'altlift.py')] + args,
                         capture_output=True, text=True).stdout
    for line in out.splitlines():
        m = re.match(r'([0-9a-f]{6})\s', line)
        if m:
            a = int(m.group(1), 16)
            c = cov.get(a) or cov.get(a - 1)
            print('%6s %s' % (c if c else '.', line))
        else:
            print('       ' + line)


if __name__ == '__main__':
    main()
