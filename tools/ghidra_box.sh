#!/bin/sh
# Decompile the 36 overlays on the build machine and bring the results home.
#
#   sh tools/ghidra_box.sh          # all 36
#   sh tools/ghidra_box.sh 7        # just overlay 7
#
# Locally this is a three-hour job that makes the laptop unusable while it runs;
# the build box is 20 native cores, runs six at a time, and is done in well
# under an hour.  Ghidra 12.1.3 and Temurin JDK 21 were put there by
# tools/build_box_setup.ps1 -- the same versions as here, so the output matches.
#
# What goes over: the merged overlay images, the entry-point lists, and the
# Ghidra scripts.  What comes back: all.c, index.csv and the log per overlay.
set -e
HERE=$(cd "$(dirname "$0")" && pwd)
ROOT=$(dirname "$HERE")
BOX=yomei@192.168.6.14
KEY=~/.claude/keys/ort_build_key
WORK=C:/prog/jwcad
ONLY=${1:-0}

sshx() { ssh -i "$KEY" -o StrictHostKeyChecking=no "$BOX" "$@"; }
scpx() { scp -i "$KEY" -o StrictHostKeyChecking=no "$@"; }

[ -f "$ROOT/decomp/ovl/jw01.exe" ] || { echo "run: python tools/overlays.py --merge" >&2; exit 2; }
[ -f "$ROOT/decomp/entries/01.txt" ] || { echo "run: python tools/thunks.py --write" >&2; exit 2; }

echo "--- sending"
# Through cmd, `if not exist ... & if not exist ...` comes back as a syntax
# error, so the directories are made from PowerShell instead.
sshx "powershell -NoProfile -Command \"New-Item -ItemType Directory -Force -Path '$WORK/ovl','$WORK/entries','$WORK/ghidra_scripts' | Out-Null\""
scpx -q "$ROOT"/decomp/ovl/jw*.exe          "$BOX:$WORK/ovl/"
scpx -q "$ROOT"/decomp/entries/*.txt        "$BOX:$WORK/entries/"
scpx -q "$HERE"/ghidra_scripts/*.java       "$BOX:$WORK/ghidra_scripts/"
scpx -q "$HERE/ghidra_box.ps1"              "$BOX:$WORK/"

echo "--- running (this is the long part)"
sshx "powershell -NoProfile -ExecutionPolicy Bypass -File $WORK/ghidra_box.ps1 -Only $ONLY"

echo "--- fetching"
scpx -q "$BOX:$WORK/decomp_ovl.tgz" "$ROOT/decomp/"
tar -xzf "$ROOT/decomp/decomp_ovl.tgz" -C "$ROOT/decomp"
rm -f "$ROOT/decomp/decomp_ovl.tgz"
for d in decomp/ovl[0-9][0-9]; do
    [ -f "$d/index.csv" ] || continue
    printf '%-10s %5d functions\n' "$(basename "$d")" "$(( $(grep -c . "$d/index.csv") - 1 ))"
done
