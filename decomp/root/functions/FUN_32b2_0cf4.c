/* 32b2:0cf4 */

int FUN_32b2_0cf4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  for (uVar2 = 0x7a92; uVar2 <= *(uint *)0x7bd2; uVar2 = uVar2 + 8) {
    if ((*(byte *)(uVar2 + 6) & 0x83) != 0) {
      iVar1 = FUN_32b2_0c78(uVar2);
      if (iVar1 == -1) {
        local_4 = -1;
      }
      else {
        iVar3 = iVar3 + 1;
      }
    }
  }
  if (param_1 == 1) {
    local_4 = iVar3;
  }
  return local_4;
}


