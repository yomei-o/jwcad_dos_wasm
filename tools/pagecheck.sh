#!/bin/sh
# index.html's own controls, driven headlessly (tools/pagecheck.mjs).
#
#     sh tools/pagecheck.sh
#
# Upload a drawing, download the one on the screen.  The download is what
# this is for: a detached <a> does not download in every browser, and
# revoking the object URL in the same turn as the click cancels the download
# where the browser has not started reading yet.  Both were wrong here, and
# neither shows up on the machine it was written on.
set -e
cd "$(dirname "$0")/.."
NODE="${NODE:-}"
if [ -z "$NODE" ]; then
    command -v node > /dev/null 2>&1 && NODE=node
fi
if [ -z "$NODE" ]; then
    NODE=$(ls /c/prog/emsdk/emsdk/node/*/bin/node.exe 2>/dev/null | head -1)
fi
[ -n "$NODE" ] || { echo "no node (set NODE)" >&2; exit 2; }
"$NODE" tools/pagecheck.mjs
