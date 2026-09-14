/* 32b2:14b0 */

uint FUN_32b2_14b0(int *param_1)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar3 = FUN_32b2_08f4(param_1);
  }
  else {
    pbVar2 = (byte *)*param_1;
    *param_1 = *param_1 + 1;
    uVar3 = (uint)*pbVar2;
  }
  return uVar3;
}


