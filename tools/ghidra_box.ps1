# Decompile the 36 overlays on the build machine, several at a time.
#
# One overlay takes about five minutes, so doing all 36 on the laptop is a
# three-hour job that makes the laptop unusable while it runs.  The build box is
# 20 native cores with nothing else to do, so it runs six at once and finishes
# in well under an hour.
#
# Expects, under $Work:  ovl\jw01..36.exe, entries\01..36.txt, ghidra_scripts\
# Leaves the decompilation in $Work\out\ovlNN\ and zips it up at the end.
#
#   powershell -ExecutionPolicy Bypass -File C:\prog\jwcad\ghidra_box.ps1 [-Jobs 6] [-Only 7]
param(
    [int]$Jobs = 6,
    [int]$Only = 0,
    [string]$Work = 'C:\prog\jwcad'
)
$ErrorActionPreference = 'Stop'
$ghidra = 'C:\prog\ghidra\ghidra_12.1.3_PUBLIC\support\analyzeHeadless.bat'
$env:JAVA_HOME = 'C:\prog\ghidra\jdk21'

# Ghidra addresses the image 0x1000 segments above where it is linked, so the
# overlay hole that tools/overlays.py calls 2ab8..3375 is 3ab8..4375 here.
$ovlSeg = '3ab8'
$ovlLo = '3ab8'
$ovlHi = '4375'

$proj = Join-Path $Work 'proj'
$out = Join-Path $Work 'out'
New-Item -ItemType Directory -Force -Path $proj, $out | Out-Null

$todo = @()
foreach ($n in 1..36) {
    if ($Only -ne 0 -and $n -ne $Only) { continue }
    $nn = '{0:d2}' -f $n
    $todo += [pscustomobject]@{
        Num  = $n            # which overlay is in the hole, for MarkOverlayThunks
        Name = "ovl$nn"
        Exe  = Join-Path $Work "ovl\jw$nn.exe"
        Ent  = Join-Path $Work "entries\$nn.txt"
        Out  = Join-Path $out "ovl$nn"
    }
}

$running = @()
$started = 0
foreach ($t in $todo) {
    while ($running.Count -ge $Jobs) {
        $running = @($running | Where-Object { -not $_.HasExited })
        Start-Sleep -Seconds 5
    }
    New-Item -ItemType Directory -Force -Path $t.Out | Out-Null
    $log = Join-Path $t.Out 'ghidra.log'
    $argv = @(
        $proj, $t.Name,
        '-import', $t.Exe,
        # Quoted inside the string: -ArgumentList splits on spaces, so a bare
        # x86:LE:16:Real Mode arrives as two arguments and Ghidra answers
        # "Bad argument: Mode".
        '-processor', '"x86:LE:16:Real Mode"',
        '-scriptPath', (Join-Path $Work 'ghidra_scripts'),
        '-preScript', 'MarkOverlayThunks', 'pre', $ovlSeg,
        '-postScript', 'MarkOverlayThunks', 'post', $ovlSeg, $t.Ent, $t.Num,
        '-postScript', 'DecompileAll', $t.Out, $ovlLo, $ovlHi,
        '-deleteProject'
    )
    $p = Start-Process -FilePath $ghidra -ArgumentList $argv -NoNewWindow -PassThru `
                       -RedirectStandardOutput $log -RedirectStandardError "$log.err"
    $p.PriorityClass = 'BelowNormal'
    $running += $p
    $started++
    Write-Host ("started {0}  ({1}/{2}, {3} running)" -f $t.Name, $started, $todo.Count, $running.Count)
}
while ($running.Count -gt 0) {
    $running = @($running | Where-Object { -not $_.HasExited })
    if ($running.Count -gt 0) { Start-Sleep -Seconds 10 }
}

Write-Host ''
Write-Host 'name    functions  all.c bytes'
foreach ($t in $todo) {
    $idx = Join-Path $t.Out 'index.csv'
    $ac = Join-Path $t.Out 'all.c'
    $n = if (Test-Path $idx) { (Get-Content $idx).Count - 1 } else { -1 }
    $sz = if (Test-Path $ac) { (Get-Item $ac).Length } else { 0 }
    Write-Host ("{0,-8}{1,9}{2,13}" -f $t.Name, $n, $sz)
}

# functions/ is one small file per function and all.c already has the same text,
# so it is dropped rather than carried back over the LAN.  Zipping the tree (not
# a file list) keeps the ovlNN directories, which a flat list would collide on.
Get-ChildItem $out -Recurse -Directory -Filter 'functions' |
    Remove-Item -Recurse -Force
# tar, not Compress-Archive: the latter writes backslashes as the path
# separator and unzip on the other end refuses the archive with
# "appears to use backslashes as path separators".
$tarball = Join-Path $Work 'decomp_ovl.tgz'
Remove-Item $tarball -Force -ErrorAction SilentlyContinue
& tar.exe -czf $tarball -C $out .
Write-Host ''
Write-Host ("packed {0} ({1:n0} bytes)" -f $tarball, (Get-Item $tarball).Length)
Write-Host 'DONE'
