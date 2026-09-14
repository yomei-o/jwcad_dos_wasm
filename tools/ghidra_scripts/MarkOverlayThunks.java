// Teach Ghidra what an `INT 3Fh` overlay call is, then seed the overlay's
// entry points.  Runs twice, once on each side of the auto-analysis:
//
//   -preScript  MarkOverlayThunks pre  <ovlSeg>
//   -postScript MarkOverlayThunks post <ovlSeg> [entriesFile] [residentOverlay]
//
// ovlSeg is 0 for the root analysed on its own, where the overlay hole is
// empty.  Pointing calls into it there is actively harmful: Ghidra makes a
// function at each target, each one starts a sea of zeroes that disassembles
// as one enormous basic block, and the decompiler turns a single byte into a
// megabyte of C.  The root's all.c went from 5.9 MB to 17 MB that way before
// this check existed.
//
// Two problems, both of which make the decompilation useless without this.
//
// The overlay call is a four-byte trap -- `cd 3f 1c f4 0e` is "call overlay
// 0x1c at offset 0x0ef4" -- so the three bytes after the interrupt are
// operands, not code.  Ghidra disassembles straight through them, and every
// function turns to noise from its first overlay call onward.  `main`'s raw
// output is the specimen: right after `swi(0x3f)` comes
// `*(int *)(&stack0x0059 + unaff_DI) = ... + in_BX;`, a calculation that exists
// nowhere in the program.
//
// The `pre` pass is what actually fixes it, and it has to run before the
// analysis rather than after: marking the operands as data first means the
// disassembler stops at them of its own accord.  Clearing and re-disassembling
// afterwards does not work -- `disassemble()` runs straight back into the
// operand bytes and recreates the instruction you just deleted, which shows up
// as 111 of these in the log:
//
//   thunk at 1000:0038: Conflicting instruction exists at address 1000:003a
//
// The `post` pass then overrides each trap's fall-through to `+5`, so the code
// after the call is reached, and points a call reference at the overlay.
//
// The other problem is that nothing inside an overlay says where its functions
// begin: they are reached only through those traps, which mostly live in the
// root and in *other* overlays -- neither of which is in the image being
// analysed.  So the entry offsets are collected from the whole file by
// tools/thunks.py and handed to the `post` pass, one hex offset per line.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;

import java.io.*;
import java.util.*;

public class MarkOverlayThunks extends GhidraScript {

    private static final int THUNK_LEN = 5;      // cd 3f nn oo oo

    // The overlay hole, in Ghidra's numbering (0x1000 segments above the link
    // addresses tools/overlays.py uses).  Fixed by the executable's layout.
    private static final int HOLE_SEG = 0x3ab8;
    private static final int HOLE_END = 0x4375;

    private Address seg(int segment, int offset) {
        AddressSpace sp = currentProgram.getAddressFactory().getDefaultAddressSpace();
        if (sp instanceof SegmentedAddressSpace) {
            return ((SegmentedAddressSpace) sp).getAddress(segment, offset);
        }
        return sp.getAddress(((long) segment << 4) + offset);
    }

    /** Every address in initialised memory whose bytes are cd 3f. */
    private List<Address> findTraps() throws Exception {
        List<Address> out = new ArrayList<>();
        for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
            if (!b.isInitialized()) {
                continue;
            }
            int len = (int) b.getSize();
            byte[] buf = new byte[len];
            b.getBytes(b.getStart(), buf, 0, len);
            for (int i = 0; i + THUNK_LEN <= len; i++) {
                if (buf[i] == (byte) 0xcd && buf[i + 1] == (byte) 0x3f) {
                    out.add(b.getStart().add(i));
                }
            }
        }
        return out;
    }

    private void pre(List<Address> traps) {
        DataType three = new ArrayDataType(ByteDataType.dataType, 3, 1);
        int marked = 0;
        for (Address at : traps) {
            try {
                Address ops = at.add(2);
                clearListing(at, at.add(THUNK_LEN - 1));
                createData(ops, three);
                marked++;
            } catch (Exception e) {
                println("thunk at " + at + ": " + e.getMessage());
            }
        }
        println("overlay trap operands marked as data: " + marked
                + " of " + traps.size());
    }

    private void post(List<Address> traps, int ovlSeg, String entriesFile,
                      int resident) throws Exception {
        ReferenceManager refs = currentProgram.getReferenceManager();
        int fixed = 0, called = 0;
        for (Address at : traps) {
            try {
                Address after = at.add(THUNK_LEN);
                Instruction insn = getInstructionAt(at);
                if (insn == null) {
                    disassemble(at);
                    insn = getInstructionAt(at);
                }
                if (insn == null || !insn.getMnemonicString().equalsIgnoreCase("INT")) {
                    continue;                     // cd 3f inside data, not a call
                }
                insn.setFallThrough(after);
                disassemble(after);
                fixed++;

                int ovl = getByte(at.add(2)) & 0xff;
                int off = (getByte(at.add(3)) & 0xff) | ((getByte(at.add(4)) & 0xff) << 8);
                setEOLComment(at, String.format("overlay %d : %04x", ovl, off));
                if (ovlSeg == 0 || (resident != 0 && ovl != resident)) {
                    // Either nothing is in the hole (the root on its own), or
                    // this call is for a different overlay than the one loaded.
                    // Pointing at the hole anyway lands mid-instruction in
                    // whichever overlay *is* there and fragments real functions.
                    continue;
                }
                Address target = seg(ovlSeg, off);
                if (getMemoryBlock(target) != null) {
                    refs.addMemoryReference(at, target, RefType.UNCONDITIONAL_CALL,
                                            SourceType.USER_DEFINED, 0);
                    called++;
                }
            } catch (Exception e) {
                println("thunk at " + at + ": " + e.getMessage());
            }
        }
        println("overlay traps given a fall-through: " + fixed
                + ", references added: " + called);

        int seeded = 0;
        int used = 0;                 // how much of the hole this overlay fills
        if (entriesFile != null && new File(entriesFile).exists()) {
            BufferedReader r = new BufferedReader(new FileReader(entriesFile));
            String line;
            while ((line = r.readLine()) != null) {
                line = line.trim();
                if (line.startsWith("#len ")) {
                    used = Integer.parseInt(line.substring(5).trim());
                    continue;
                }
                if (line.isEmpty() || line.startsWith("#")) {
                    continue;
                }
                Address a = seg(ovlSeg, Integer.parseInt(line, 16));
                if (getMemoryBlock(a) == null) {
                    continue;
                }
                try {
                    disassemble(a);
                    if (getFunctionAt(a) == null) {
                        createFunction(a, "OVL_" + line);
                    }
                    seeded++;
                } catch (Exception e) {
                    println("entry " + a + ": " + e.getMessage());
                }
            }
            r.close();
        }
        println("overlay entry points seeded: " + seeded);

        // New code and new references only pay off if the analysers see them.
        analyzeChanges(currentProgram);

        // Whatever the hole holds past the resident overlay is zeroes, and so
        // is the whole hole when the root is analysed on its own.  With an
        // overlay loaded but no "#len" to say how long it is, clearing from 0
        // would erase the overlay itself, so leave it alone instead.
        if (ovlSeg == 0) {
            clearHole(0);
        } else if (used > 0) {
            clearHole(used);
        } else {
            println("overlay length unknown: the hole's tail is left as is");
        }
    }

    /**
     * Wipe the part of the overlay hole that holds nothing -- everything past
     * `from`, which is the resident overlay's length, or the whole hole when
     * the root is analysed on its own.
     *
     * Even with no references of ours pointing there, Ghidra finds a handful of
     * "functions" among the zeroes, and now that the traps fall through
     * correctly the flow reaches them.  Each one is a few dozen bytes that
     * decompiles into some 450 KB of C -- and because the hole is sized to the
     * largest overlay, every smaller one leaves such a tail.  Clearing it after
     * the analysis settles is simpler than trying to stop every path in.
     */
    private void clearHole(int from) throws Exception {
        if (from >= (HOLE_END - HOLE_SEG) * 16) {
            return;                   // the overlay fills the hole exactly
        }
        Address lo = seg(HOLE_SEG + (from >> 4), from & 0xf);
        Address hi = seg(HOLE_END - 1, 0xf);
        int removed = 0;
        for (Function f : currentProgram.getFunctionManager()
                                        .getFunctions(lo, true)) {
            if (f.getEntryPoint().compareTo(hi) > 0) {
                break;
            }
            removeFunction(f);
            removed++;
        }
        clearListing(lo, hi);
        println("overlay hole cleared: " + removed + " stray functions");
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String phase = args.length > 0 ? args[0] : "post";
        int ovlSeg = args.length > 1 ? Integer.parseInt(args[1], 16) : 0x3ab8;
        String entriesFile = args.length > 2 ? args[2] : null;
        if ("-".equals(entriesFile)) {
            entriesFile = null;          // the runner's "no entries" placeholder
        }
        // Which overlay is sitting in the hole, so calls meant for a different
        // one can be left alone.  0 means "do not filter".
        int resident = args.length > 3 ? Integer.parseInt(args[3]) : 0;

        List<Address> traps = findTraps();
        println("cd 3f sites: " + traps.size());
        if (phase.equals("pre")) {
            pre(traps);
        } else {
            post(traps, ovlSeg, entriesFile, resident);
        }
    }
}
