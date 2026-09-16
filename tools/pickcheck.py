"""Put what the original picked and what the port picked side by side.

    sh tools/pickcheck.sh

Both files are one line per press, ending in the entity's number counting from
one (or `nothing`).  The emulator writes its reports with CRLF, which is why
this strips rather than comparing the lines as they come.
"""
import sys


def read(path):
    out = []
    for line in open(path, encoding='latin-1'):
        line = line.strip()
        if not line:
            continue
        where = line.split('drawing ', 1)[1].split(' ->')[0]
        out.append((where, line.rsplit('-> ', 1)[1].strip()))
    return out


def main():
    a = read(sys.argv[1])           # the original
    b = dict(read(sys.argv[2]))     # the port, by the point it was asked about
    bad = 0
    # Matched on the point, not on the order: a press the original threw away
    # leaves no report, and counting lines would then pair every answer with
    # the wrong press.
    for where, ans in a:
        if where not in b:
            print('  MISSING %-16s original %s, the port was not asked'
                  % (where, ans))
            bad += 1
        elif b[where] == ans:
            print('  same    %-16s %s' % (where, ans))
        else:
            print('  DIFFER  %-16s original %s, port %s' % (where, ans, b[where]))
            bad += 1
    if bad:
        print('%d of the picks disagree' % bad, file=sys.stderr)
    return 1 if bad else 0


if __name__ == '__main__':
    sys.exit(main())
