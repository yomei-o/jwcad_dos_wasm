# Install Ghidra and a JDK on the build machine (192.168.6.14).
#
# Analysing the 36 overlays means running Ghidra 36 times over a 255 KB root
# plus one overlay each.  That is a couple of hours on the laptop and it makes
# the laptop unusable while it runs, so it goes to the build box, which is
# 20 native cores and has nothing else to do.  Ghidra is not installed there, and
# the box has internet, so it fetches its own copy rather than waiting on a
# 1.2 GB LAN transfer.
#
#   scp tools/build_box_setup.ps1 yomei@192.168.6.14:C:/prog/
#   ssh yomei@192.168.6.14 powershell -ExecutionPolicy Bypass -File C:\prog\build_box_setup.ps1
$ErrorActionPreference = 'Stop'
$ProgressPreference = 'SilentlyContinue'
$root = 'C:\prog\ghidra'
New-Item -ItemType Directory -Force -Path $root | Out-Null

# Same Ghidra version as the laptop, so the two produce the same output.
$want = '12.1.3'
$rel = Invoke-RestMethod "https://api.github.com/repos/NationalSecurityAgency/ghidra/releases?per_page=40"
$asset = $null
foreach ($r in $rel) {
    foreach ($a in $r.assets) {
        if ($a.name -like "ghidra_${want}_PUBLIC_*.zip") { $asset = $a; break }
    }
    if ($asset) { break }
}
if (-not $asset) { throw "no Ghidra $want asset found" }

$zip = Join-Path $env:TEMP $asset.name
if (-not (Test-Path "$root\ghidra_${want}_PUBLIC\support\analyzeHeadless.bat")) {
    Write-Host "downloading $($asset.name) ($([int]($asset.size/1MB)) MB)"
    Invoke-WebRequest -Uri $asset.browser_download_url -OutFile $zip -UseBasicParsing
    Expand-Archive -Path $zip -DestinationPath $root -Force
    Remove-Item $zip -Force
}
Write-Host "ghidra: $root\ghidra_${want}_PUBLIC"

# Temurin JDK 21, the same major version the laptop's Ghidra runs on.
$jdkDir = Join-Path $root 'jdk21'
if (-not (Test-Path "$jdkDir\bin\java.exe")) {
    $jzip = Join-Path $env:TEMP 'jdk21.zip'
    Write-Host "downloading Temurin JDK 21"
    Invoke-WebRequest -UseBasicParsing -OutFile $jzip `
        -Uri 'https://api.adoptium.net/v3/binary/latest/21/ga/windows/x64/jdk/hotspot/normal/eclipse'
    $tmp = Join-Path $env:TEMP 'jdk21x'
    Remove-Item -Recurse -Force $tmp -ErrorAction SilentlyContinue
    Expand-Archive -Path $jzip -DestinationPath $tmp -Force
    $inner = Get-ChildItem $tmp -Directory | Select-Object -First 1
    Move-Item $inner.FullName $jdkDir
    Remove-Item $jzip, $tmp -Recurse -Force -ErrorAction SilentlyContinue
}
& "$jdkDir\bin\java.exe" -version 2>&1 | Select-Object -First 1
Write-Host "jdk: $jdkDir"
Write-Host "READY"
