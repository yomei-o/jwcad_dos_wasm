"""The lines, arcs and texts one drawing has that another does not.

    python tools/whatsnew.py orig/SAMPLE0.JWC tmp/sroot/SAMPLE0.JWC

Used after driving the original through a command that makes entities: what it
appended is the answer, and reading it off by eye from two full dumps is
error-prone.  Records are matched by their four coordinates rounded to a
thousandth, so a record that only moved counts as new.
"""
import sys

import arcdump
import linedump
import textdump


def key(r):
    return tuple(round(r[c], 3) for c in ('x0', 'y0', 'x1', 'y1'))


def main():
    old, new = sys.argv[1], sys.argv[2]
    was = set(key(t) for t in linedump.lines(old))
    for t in linedump.lines(new):
        if key(t) not in was:
            print('line %4d (%8.3f,%8.3f)-(%8.3f,%8.3f) type=%d pen=%d lay=%02x'
                  % (t['k'], t['x0'], t['y0'], t['x1'], t['y1'],
                     t['type'], t['pen'], t['layer']))
    was = set((round(a['cx'], 3), round(a['cy'], 3), round(a['r'], 3))
              for a in arcdump.arcs(old)[1])
    for a in arcdump.arcs(new)[1]:
        if (round(a['cx'], 3), round(a['cy'], 3), round(a['r'], 3)) not in was:
            print('arc  %4d c=(%8.3f,%8.3f) r=%8.3f %.4f..%.4f flat=%d tilt=%.4f'
                  % (a['k'], a['cx'], a['cy'], a['r'], a['start'], a['end'],
                     a['flat'], a['tilt']))
    was = set(key(t) for t in textdump.texts(old))
    for t in textdump.texts(new):
        if key(t) not in was:
            print('text %4d (%8.3f,%8.3f)-(%8.3f,%8.3f) size=%d lay=%02x %s'
                  % (t['k'], t['x0'], t['y0'], t['x1'], t['y1'],
                     t['size'], t['layer'], t['text']))


if __name__ == '__main__':
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')
    main()
