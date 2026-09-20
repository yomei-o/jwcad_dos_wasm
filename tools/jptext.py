"""The emulator script lines that type a Japanese string, and the same string
as raw Shift-JIS for the port's own test driver.

    STR=あいう python tools/jptext.py          # key x82 / key xA0 / ...
    STR=あいう python tools/jptext.py --hex    # the bytes as hex, for -H

The two bytes of a double-byte character go out back to back with no `wait`
between them: the original reads them as two ordinary keys, but only if they
arrive together (RESUME.md 4.17).
"""
import os
import sys


def main():
    s = os.environ.get('STR', '')
    b = s.encode('cp932')
    if '--hex' in sys.argv:
        sys.stdout.write(b.hex() + chr(10))
        return
    out = []
    i = 0
    while i < len(b):
        two = 0x81 <= b[i] <= 0x9f or 0xe0 <= b[i] <= 0xfc
        n = 2 if two and i + 1 < len(b) else 1
        for k in range(n):
            out.append('key x%02X' % b[i + k])
        out.append('wait 10000000')
        i += n
    sys.stdout.write('\n'.join(out) + '\n')


if __name__ == '__main__':
    main()
