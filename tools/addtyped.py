"""src/typed.h に手で測った段の字を足します（STR で読んだ行を C の文字列に）。

    python tools/addtyped.py "見出し" "命令,段,桁,行,前景,背景,文字" ...

桁・行は 1 から（STR の col/row を 10 進に直したもの）。
"""
import sys


def cesc(t):
    b = t.encode('cp932')
    out = ''
    prev_hex = False
    for ch in b:
        if 0x20 <= ch < 0x7f and ch not in (0x22, 0x5c):
            c = chr(ch)
            if prev_hex and c in '0123456789abcdefABCDEF':
                out += '" "'
            out += c
            prev_hex = False
        else:
            out += '\\x%02x' % ch
            prev_hex = True
    return '"' + out + '"'


def main():
    title = sys.argv[1]
    lines = []
    for spec in sys.argv[2:]:
        c, st, col, row, fg, bg, t = spec.split(',', 6)
        lines.append('    { %2d, %d, %2d, %d, %d, 0x%04x, 0, 0, { 0, 0 }, 0, %s },'
                     % (int(c), int(st), int(col), int(row), int(fg), int(bg, 0),
                        cesc(t)))
    p = 'src/typed.h'
    s = open(p, encoding='latin-1').read()
    anchor = 'static const JwStage JW_TYPED[] = {\n'
    assert anchor in s
    s = s.replace(anchor, anchor + '    /* ' + title + ' */\n'
                  + '\n'.join(lines) + '\n', 1)
    open(p, 'w', encoding='latin-1').write(s)


if __name__ == '__main__':
    main()
