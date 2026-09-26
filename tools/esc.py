# -*- coding: utf-8 -*-
"""CP932 の文字列を C の文字列リテラルにします（16 進のあとが英数なら区切る）。"""
import sys

HEX = '0123456789abcdefABCDEF'


def lit(s):
    b = s.encode('cp932')
    out = []
    prev_hex = False
    for c in b:
        ch = chr(c)
        if 32 <= c < 127 and ch not in '"' + chr(92) + '?':
            if prev_hex and ch in HEX:
                out.append('" "')
            out.append(ch)
            prev_hex = False
        else:
            out.append(chr(92) + 'x%02x' % c)
            prev_hex = True
    return '"' + ''.join(out) + '"'


for a in sys.argv[1:]:
    print(a, '->', lit(a))
