"""Read a stretch of code that does its floating point through Microsoft C's
software library (the calls into the runtime segment 22b2), as expressions.

    python tools/altlift.py --ovl 11 0x3290 0x400      # overlay 11
    python tools/altlift.py 0x1a2f0 0x100             # the root, linear

JW_CAD has no x87 code at all: every float operation is a far call into the
runtime with BX pointing at the operand, and Ghidra turns that into pages of
FUN_32b2_6cc6() with nothing in them.  This keeps the disassembly as it is and
replaces each of those calls with what it does to a small symbolic stack, so a
run of them reads as `[bp-0x1c] = (([bp-0x212] - [bp-0x3a]) * [0x0c30])`.

What each entry does was read off the runtime (tools/disasm.py on 22b2:xxxx)
and checked against the values the emulator shows going in and out
(DOSEMU_BPPTR=bx): the loads and stores by the width they copy, the
arithmetic by the operation code each entry puts in AX (the float and double
forms of add, subtract, multiply, divide) and the stack forms by the code in BX.
The ones not pinned down are printed as `?name`.

The stack is not tracked across jumps -- a label resets it and says so -- so
read it a basic block at a time.
"""
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))

LOAD = {'6cc6': 'f32', '6ca8': 'f32es', '6d14': 'f64', '6d9b': 'i16',
        '6d94': 'i32'}
STORE = {'6e4b': ('f32', False), '6e63': ('f32', True),
         '6e67': ('f32es', True), '6e99': ('f64', False),
         '6eb1': ('f64arg', True), '6ef9': ('f32', True)}
# st0 op= [bx]
MEMOP = {'7095': '+', '7035': 'r-', '701d': '-', '704d': '*', '7065': '/',
         '7154': '+', '70dc': '-', '710c': '*', '713c': 'r/',
         '7016': '?7016', '707d': 'r/', '70f4': 'r-', '7124': '/'}
# st1 op st0, pop
STKOP = {'718c': '+', '7173': '-', '7178': 'r-', '717d': '*', '7182': '/',
         '7187': 'r/', '7191': 'cmp', '7196': '?7196'}
UNARY = {'6fc7': 'abs', '7258': None, '6f61': 'ftol', '7592': 'sqrt',
         '75ec': '?75ec', '75fe': '?75fe'}


def disasm(args):
    out = subprocess.run([sys.executable, os.path.join(HERE, 'disasm.py')]
                         + args, capture_output=True, text=True)
    return out.stdout.splitlines()


def main():
    lines = disasm(sys.argv[1:])
    stack = []
    last_bx = '?'
    targets = set()
    for ln in lines:
        mt = re.search(r'j[a-z]+\s+0x([0-9a-f]+)', ln)
        if mt:
            targets.add(int(mt.group(1), 16))
    for ln in lines:
        m = re.match(r'\s*([0-9a-f]+)\s+[0-9a-f]+\s+(.*)$', ln)
        if not m:
            continue
        addr, ins = m.group(1), m.group(2).strip()
        if int(addr, 16) in targets:
            if stack:
                print('        ; (stack left: %s)' % ' | '.join(stack))
            stack = []
            print('L_%s:' % addr)
        ins = re.sub(r'\s+DS:0x.*$', '', ins)
        mb = re.match(r'lea\s+bx, (\[.*\])', ins)
        if mb:
            last_bx = mb.group(1)
        mb = re.match(r'mov\s+bx, (0x[0-9a-f]+)$', ins)
        if mb:
            last_bx = '[%s]' % mb.group(1)
        mb = re.match(r'mov\s+bx, sp$', ins)
        if mb:
            last_bx = '<arg>'
        mb = re.match(r'mov\s+bx, ([a-d]x|si|di|bp)$', ins)
        if mb:
            last_bx = '[*%s]' % mb.group(1)
        mb = re.match(r'(?:mov|les)\s+bx, (?:word )?ptr (\[.*\])$', ins)
        if mb:
            last_bx = '[*%s]' % mb.group(1)
        mc = re.match(r'lcall\s+0x22b2, 0x([0-9a-f]+)', ins)
        if not mc:
            if re.match(r'j[a-z]+\s', ins) or ins.startswith('ret'):
                print('%s  %s' % (addr, ins))
                if stack and (ins.startswith('jmp') or ins.startswith('ret')):
                    print('        ; (stack left: %s)' % ' | '.join(stack))
                    stack = []
            elif not ins.startswith(('push', 'pop', 'lea     bx')):
                print('%s  %s' % (addr, ins))
            continue
        e = mc.group(1)
        if e in LOAD:
            stack.append('%s%s' % (last_bx, '' if LOAD[e] == 'f32' else ':' + LOAD[e]))
        elif e in STORE:
            kind, pop = STORE[e]
            top = stack[-1] if stack else '?'
            print('%s    %s = %s   (%s%s)' % (addr, last_bx, top, kind, '' if pop else ', keep'))
            if pop and stack:
                stack.pop()
        elif e in MEMOP:
            op = MEMOP[e]
            top = stack.pop() if stack else '?'
            if op.startswith('r'):
                stack.append('(%s %s %s)' % (last_bx, op[1:], top))
            else:
                stack.append('(%s %s %s)' % (top, op, last_bx))
        elif e in STKOP:
            op = STKOP[e]
            b = stack.pop() if stack else '?'
            a = stack.pop() if stack else '?'
            if op == 'cmp':
                print('%s    compare %s : %s' % (addr, a, b))
            elif op.startswith('r'):
                stack.append('(%s %s %s)' % (b, op[1:], a))
            else:
                stack.append('(%s %s %s)' % (a, op, b))
        elif e in UNARY:
            op = UNARY[e]
            if op is None:
                continue
            if op == 'ftol':
                top = stack.pop() if stack else '?'
                print('%s    dx:ax = trunc(%s)' % (addr, top))
            else:
                top = stack.pop() if stack else '?'
                stack.append('%s(%s)' % (op, top))
        else:
            print('%s    ?call 22b2:%s  (bx %s)  stack: %s'
                  % (addr, e, last_bx, ' | '.join(stack)))


if __name__ == '__main__':
    main()
