#!/bin/sh
# Run Ghidra headless over one of the images in decomp/ and write the
# decompilation under decomp/<name>/.
#
#   sh tools/ghidra.sh root              # decomp/JW_CADV.unp.exe -> decomp/root/
#   sh tools/ghidra.sh 07                # decomp/ovl/jw07.exe    -> decomp/ovl07/
#   sh tools/ghidra.sh all               # the root and all 36 overlays
#
# Every merged overlay image contains the whole root as well, so analysing one
# costs the root over again.  That is deliberate: an overlay's code calls back
# into the root and reads DGROUP, and Ghidra can only follow that if the root is
# laid out at the same addresses.  The duplicate root functions are dropped
# later by tools/merge_decomp.py, which keeps the root's own copy.
#
# Ghidra is greedy with cores, so this goes through tools/lowpri.sh like every
# other long job in this repository.
set -e
HERE=$(cd "$(dirname "$0")" && pwd)
ROOT=$(dirname "$HERE")
GHIDRA=/c/prog/ghidra/ghidra_12.1.3_PUBLIC
JAVA_HOME=/c/prog/ghidra/jdk-21.0.12.1+1
export JAVA_HOME
PROJDIR="$ROOT/decomp/ghidra_proj"
mkdir -p "$PROJDIR"

# The overlay hole, as Ghidra addresses it.  tools/overlays.py calls it
# 2ab8..3375 because that is how the file is linked; Ghidra's MZ loader puts the
# image base at segment 0x1000, so everything it prints is 0x1000 higher --
# main() is linked at 0000:0446 and Ghidra calls it 1000:0446.
OVL_SEG=3ab8
OVL_RANGE="$OVL_SEG 4375"

run_one() {
    name=$1; exe=$2; range=$3; entries=$4; ovlseg=${5:-$OVL_SEG}; resident=${6:-0}
    out="$ROOT/decomp/$name"
    mkdir -p "$out"
    echo "=== $name: $exe"
    rm -rf "$PROJDIR/$name.rep" "$PROJDIR/$name.gpr"
    ent=""
    [ -n "$entries" ] && [ -f "$entries" ] && ent="$(cygpath -w "$entries")"
    LOWPRI=BELOWNORMAL sh "$HERE/lowpri.sh" \
        "$GHIDRA/support/analyzeHeadless.bat" \
        "$(cygpath -w "$PROJDIR")" "$name" \
        -import "$(cygpath -w "$exe")" \
        -processor "x86:LE:16:Real Mode" \
        -scriptPath "$(cygpath -w "$HERE/ghidra_scripts")" \
        -preScript MarkOverlayThunks pre $ovlseg \
        -postScript MarkOverlayThunks post $ovlseg "$ent" $resident \
        -postScript DecompileAll "$(cygpath -w "$out")" $range \
        -deleteProject \
        > "$out/ghidra.log" 2>&1
    tail -3 "$out/ghidra.log"
    echo "--- $name: $(wc -l < "$out/index.csv") lines in index.csv"
}

case "$1" in
  root) run_one root "$ROOT/decomp/JW_CADV.unp.exe" "" "" 0 ;;
  all)
    run_one root "$ROOT/decomp/JW_CADV.unp.exe" "" "" 0
    for n in $(seq -w 1 36); do
        run_one "ovl$n" "$ROOT/decomp/ovl/jw$n.exe" "$OVL_RANGE" \
                "$ROOT/decomp/entries/$n.txt" "$OVL_SEG" "$((10#$n))"
    done
    ;;
  *)
    n=$(printf '%02d' "$1")
    run_one "ovl$n" "$ROOT/decomp/ovl/jw$n.exe" "$OVL_RANGE" \
            "$ROOT/decomp/entries/$n.txt" "$OVL_SEG" "$((10#$n))"
    ;;
esac
