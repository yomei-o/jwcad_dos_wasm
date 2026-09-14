// Teach Ghidra what an `INT 3Fh` overlay call is, then seed the overlay's
// entry points.  Runs twice, once on each side of the auto-analysis:
//
//   -preScript  MarkOverlayThunks pre  <ovlSeg>
//   -postScript MarkOverlayThunks post <ovlSeg> [entriesFile]
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

    private void post(List<Address> traps, int ovlSeg, String entriesFile)
            throws Exception {
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
        if (entriesFile != null && new File(entriesFile).exists()) {
            BufferedReader r = new BufferedReader(new FileReader(entriesFile));
            String line;
            while ((line = r.readLine()) != null) {
                line = line.trim();
                if (line.isEmpty()) {
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
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String phase = args.length > 0 ? args[0] : "post";
        int ovlSeg = args.length > 1 ? Integer.parseInt(args[1], 16) : 0x3ab8;
        String entriesFile = args.length > 2 ? args[2] : null;

        List<Address> traps = findTraps();
        println("cd 3f sites: " + traps.size());
        if (phase.equals("pre")) {
            pre(traps);
        } else {
            post(traps, ovlSeg, entriesFile);
        }
    }
}
