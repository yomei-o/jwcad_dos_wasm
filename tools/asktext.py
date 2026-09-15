"""Ask the original a question by changing one field of a drawing's first line.

    python tools/asktext.py 9 200        # a copy of SAMPLE0 with 縮尺 1/200

Writes orig/ASK.JWC, which is the drawing with that field replaced.  The line
is a fixed 200 bytes, so it is padded back to the same length; nothing else
moves, because everything after the four text lines is a memory image and its
offsets are absolute.

Used to find rules that only show up across drawings -- the number of decimals
the panel shows, for one.
"""
import sys

src = sys.argv[3] if len(sys.argv) > 3 else 'orig/SAMPLE0.JWC'
n, value = int(sys.argv[1]), sys.argv[2]
b = bytearray(open(src, 'rb').read())
line = bytes(b[200:400])
end = line.index(b'\n')
text = line[:end].rstrip(b'\x00 ').decode('latin-1')
fields = text.split(',')
fields[n] = value
out = ','.join(fields).encode('latin-1')
if len(out) > end:
    sys.exit('field %d = %s makes the line too long' % (n, value))
# The original's own line ends with a NUL before the padding; keep that.
b[200:200 + end] = out + bytes([0]) + b' ' * (end - len(out) - 1)
open('orig/ASK.JWC', 'wb').write(bytes(b))
print('orig/ASK.JWC: field %d is now %s' % (n, value))
