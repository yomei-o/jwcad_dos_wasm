// Decompile every function to C, one file per function plus one combined file,
// and a CSV index of what was found.  Run through analyzeHeadless -postScript.
//
//   -postScript DecompileAll <outDir> [loSeg hiSeg]
//
// The optional segment range exists because of the overlays.  Each merged
// overlay image carries the whole root as well, so without a filter the root's
// 627 functions would come out 36 times over.  Passing the overlay hole
// (2ab8 3375) keeps only what actually belongs to that overlay.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.util.task.ConsoleTaskMonitor;

import java.io.*;
import java.util.*;

public class DecompileAll extends GhidraScript {

    /** Cap on one function's C, so a runaway decompilation cannot bloat all.c. */
    private static final int MAX_C = 128 * 1024;

    /** Linear address of a real-mode seg:off, so it can be range-checked. */
    private static long linear(Address a) {
        if (a instanceof SegmentedAddress) {
            SegmentedAddress s = (SegmentedAddress) a;
            return ((long) s.getSegment() << 4) + s.getSegmentOffset();
        }
        return a.getOffset();
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args.length > 0 ? args[0] : "decomp";
        long lo = 0, hi = Long.MAX_VALUE;
        if (args.length >= 3) {
            lo = Long.parseLong(args[1], 16) << 4;
            hi = Long.parseLong(args[2], 16) << 4;
        }
        new File(outDir).mkdirs();
        new File(outDir + "/functions").mkdirs();

        DecompInterface decomp = new DecompInterface();
        DecompileOptions options = new DecompileOptions();
        decomp.setOptions(options);
        decomp.toggleCCode(true);
        decomp.toggleSyntaxTree(true);
        decomp.setSimplificationStyle("decompile");
        if (!decomp.openProgram(currentProgram)) {
            println("decompiler failed to open: " + decomp.getLastMessage());
            return;
        }

        PrintWriter all = new PrintWriter(
            new BufferedWriter(new FileWriter(outDir + "/all.c")));
        PrintWriter index = new PrintWriter(
            new BufferedWriter(new FileWriter(outDir + "/index.csv")));
        index.println("address,name,size,calls,called_by,decompiled");

        all.println("/* Ghidra decompilation of " +
                    currentProgram.getName() + " - machine output, not the "
                    + "original source. */");

        int ok = 0, fail = 0;
        FunctionIterator it = currentProgram.getFunctionManager()
                                            .getFunctions(true);
        ConsoleTaskMonitor monitor = new ConsoleTaskMonitor();
        while (it.hasNext() && !monitor.isCancelled()) {
            Function f = it.next();
            long at = linear(f.getEntryPoint());
            if (at < lo || at >= hi) {
                continue;
            }
            String addr = f.getEntryPoint().toString();
            String name = f.getName();
            long size = f.getBody().getNumAddresses();
            int calls = f.getCalledFunctions(monitor).size();
            int callers = f.getCallingFunctions(monitor).size();

            DecompileResults res = decomp.decompileFunction(f, 120, monitor);
            boolean good = res != null && res.decompileCompleted()
                           && res.getDecompiledFunction() != null;
            if (good) {
                String c = res.getDecompiledFunction().getC();
                if (c.length() > MAX_C) {
                    // Ghidra occasionally explodes on a big switch-heavy
                    // function: the C runtime's scanf came out as 2 MB from
                    // 504 bytes of code.  Nothing in JW_CAD's own code is
                    // anywhere near this -- its largest function is under
                    // 7 KB of machine code -- so a blob this size is the
                    // runtime, which the port does not reimplement anyway.
                    c = c.substring(0, MAX_C)
                        + "\n/* ... truncated: the decompiler produced "
                        + c.length() + " bytes for this function. */\n";
                }
                all.println();
                all.println("/* " + addr + "  " + name + "  " + size
                            + " bytes, " + callers + " callers */");
                all.println(c);
                PrintWriter one = new PrintWriter(new FileWriter(
                    outDir + "/functions/" + name + ".c"));
                one.println("/* " + addr + " */");
                one.println(c);
                one.close();
                ok++;
            } else {
                fail++;
            }
            index.println(addr + "," + name + "," + size + "," + calls + ","
                          + callers + "," + (good ? 1 : 0));
        }
        all.close();
        index.close();
        decomp.dispose();
        println("decompiled " + ok + " functions, " + fail + " failed");
    }
}
