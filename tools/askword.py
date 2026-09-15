"""Ask the original a question by changing one 16-bit word of a drawing.

    python tools/askword.py 0x705 200        # a copy of SAMPLE0 scaled 1/200

Writes orig/ASK.JWC.  The .JWC past its four text lines is a memory image, so a
word at a fixed offset is a variable: 0x705 is the first of sixteen, the scale
of each layer group (SAMPLE6 has 50,50,100,100,... and its panel says S=1/50).

**The text lines are not read back.**  Field 9 of the first line says the scale
too, and the original writes it there when it saves, but changing it does
nothing -- what it reads is this word.  Both agree in every drawing that ships.
"""
import struct
import sys

src = sys.argv[3] if len(sys.argv) > 3 else 'orig/SAMPLE0.JWC'
at, value = int(sys.argv[1], 0), int(sys.argv[2], 0)
b = bytearray(open(src, 'rb').read())
b[at:at + 2] = struct.pack('<H', value)
open('orig/ASK.JWC', 'wb').write(bytes(b))
print('orig/ASK.JWC: word at 0x%04x is now %d' % (at, value))
