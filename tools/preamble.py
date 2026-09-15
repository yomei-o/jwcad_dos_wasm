"""Field n of a drawing's first line, the way src/jwc.c splits it (commas)."""
import sys

d = open(sys.argv[1], 'rb').read()
line = d[:d.index(b'\n')]
parts = line.split(b',')
n = int(sys.argv[2])
sys.stdout.write(parts[n].decode('latin-1', 'replace') if n < len(parts) else '')
