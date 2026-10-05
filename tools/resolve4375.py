"""Resolve a Ghidra `FUN_4375_xxxx` placeholder to its real address.

Background (found 2026-10-06, see RESUME.md "segment 4375"): there is no
segment `4375` anywhere in this binary.  It is a name Ghidra's x86-16
real-mode analyzer invents, per-project, for a call target it could not
classify.  Two completely different situations produce it, and both are
ordinary, already-present code once you know where to look:

  (a) a genuine cross-overlay call, done through the `int 3Fh` software
      thunk (`tools/disasm.py` already decodes this as
      `OVERLAY N -> 2ab8:OFF`).  The real code is OFF bytes into overlay N's
      *own* Ghidra project (decomp/ovlNN/index.csv, under the `3ab8:` column,
      since Ghidra's convention is ghidra_seg = link_seg + 0x1000 and
      OVL_SEG=0x2ab8 + 0x1000 = 0x3ab8).  If nothing starts at exactly OFF,
      the bytes are still there -- raw-disassemble with
      `--ovl N OFF <len>` and read until a `retf`.

  (b) a plain near call (`call rel16`, sometimes preceded by `push cs` as
      part of MSC's far-call-via-near-call idiom) *within the same overlay*
      that Ghidra's decompiler, for whatever reason, still prints as a call
      to an external `FUN_4375_*` instead of the real local function.  The
      real target is simply `capstone_target - OVL_SEG*16`, looked up in the
      SAME overlay's own index.csv.  (Ghidra's own "N callers" counts in the
      header comment undercount exactly this style of call -- the real
      caller doesn't show as a caller.)

Usage:

    python tools/resolve4375.py --ovl 31 3ab8:76b3 285

`3ab8:76b3` is the Ghidra address of the CALLING function (as printed in
decomp/ovlNN/index.csv / all.c), 285 is its byte size (also from index.csv;
omit to default to 0x400 and just look for the first few call targets).
This disassembles that function and prints, in order, every `int 3fh`
overlay-thunk target and every near-call target, resolved against the
relevant index.csv -- in the same order the decompiled C's `FUN_4375_*`
calls appear, so you can match them positionally.
"""
import csv
import os
import re
import sys

import capstone

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)

import disasm as D

OVL_SEG = D.OVL_SEG


def load_index(ovl):
    path = os.path.join(ROOT, 'decomp', 'ovl%02d' % ovl, 'index.csv')
    out = {}
    if not os.path.exists(path):
        return out
    with open(path, newline='') as f:
        r = csv.reader(f)
        next(r)
        for row in r:
            seg, off = row[0].split(':')
            out[(seg, int(off, 16))] = row
    return out


def ghidra_to_link(seg):
    """decomp/*/index.csv segments are link segments + 0x1000."""
    return seg - 0x1000


def main():
    args = sys.argv[1:]
    if '--ovl' not in args:
        raise SystemExit(__doc__)
    i = args.index('--ovl')
    ovl = int(args[i + 1], 0)
    del args[i:i + 2]
    seg, off = args[0].split(':')
    start = int(seg, 16) * 16 + int(off, 16)
    # index.csv addresses are ghidra addresses (link + 0x1000); disasm.py
    # wants link addresses, so if this looks like a ghidra 3ab8/4000-style
    # segment, drop the 0x1000.
    ghidra_seg = int(seg, 16)
    if ghidra_seg >= 0x3000:
        start -= 0x1000 * 16
    length = int(args[1], 0) if len(args) > 1 else 0x400

    img = D.load(ovl)
    if start < OVL_SEG * 16:
        start += OVL_SEG * 16

    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_16)
    own_index = load_index(ovl)
    pos, end = start, start + length
    n = 0
    while pos < end:
        stepped = False
        for ins in md.disasm(img[pos:end], pos):
            stepped = True
            pos = ins.address + ins.size
            if ins.mnemonic == 'int' and ins.op_str == '0x3f':
                t = img[ins.address + 2:ins.address + 5]
                target_ovl, target_off = t[0], t[1] | (t[2] << 8)
                n += 1
                tgt_idx = load_index(target_ovl)
                hit = tgt_idx.get(('3ab8', target_off))
                print('  call #%d  %06x  int 3fh -> OVERLAY %d, offset 0x%x'
                      % (n, ins.address, target_ovl, target_off))
                if hit:
                    print('      ovl%02d index.csv: %s  (%s bytes, %s callers, decompiled=%s)'
                          % (target_ovl, hit[1], hit[2], hit[4], hit[5]))
                else:
                    print('      not in ovl%02d/index.csv -- raw-disassemble with:'
                          ' python tools/disasm.py --ovl %d 0x%x <len>'
                          % (target_ovl, target_ovl, target_off))
                pos += 3
                break
            if ins.mnemonic in ('call', 'lcall') and '0x' in ins.op_str:
                nums = re.findall(r'0x[0-9a-f]+', ins.op_str)
                tgt = int(nums[-1], 16)
                if ins.mnemonic == 'lcall':
                    # far call: segment, offset -- not a 4375-style target.
                    continue
                off_in_ovl = tgt - OVL_SEG * 16
                n += 1
                hit = own_index.get(('3ab8', off_in_ovl))
                print('  call #%d  %06x  near call -> link 0x%05x (overlay-relative 0x%x)'
                      % (n, ins.address, tgt, off_in_ovl))
                if hit:
                    print('      SAME ovl%02d index.csv: %s  (%s bytes, %s callers, decompiled=%s)'
                          % (ovl, hit[1], hit[2], hit[4], hit[5]))
                else:
                    print('      not in ovl%02d/index.csv at that offset' % ovl)
        if not stepped:
            pos += 1


if __name__ == '__main__':
    main()
