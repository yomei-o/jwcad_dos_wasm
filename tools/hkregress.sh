# ⑤日影図の保存結果の検査を全部（本物の結果は tmp/funccache にあれば撮り直さない）。sh tools/hkregress.sh
cd "$(dirname "$0")/.."
export NODE=/c/prog/emsdk/emsdk/node/24.19.0_64bit/node.exe
L=tools/cases/probe_opt5.txt
for g in hk_in hk_chg hk_del hk_dlg hk_nth hk_s1 hk_s2 hk_s3_ hk_del_old; do
  sh tools/funccases.sh $L $g 2>&1 | cut -c1-110 | grep -a "same [0-9]\|DIFF"
done
for g in hk_s3i_ hk_s3x_ hk_s3y_ hk_s3z_; do
  WAIT=600000000 sh tools/funccases.sh $L $g 2>&1 | cut -c1-110 | grep -a "same [0-9]\|DIFF"
done
sh tools/funccases.sh $L hk_s3r_ 2>&1 | cut -c1-110 | grep -a "same [0-9]\|DIFF"
for g in hk_s4_ hk_s4x_; do
  WAIT=250000000 sh tools/funccases.sh $L $g 2>&1 | cut -c1-110 | grep -a "same [0-9]\|DIFF"
done
