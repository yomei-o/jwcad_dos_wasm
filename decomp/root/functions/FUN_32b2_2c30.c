/* 32b2:2c30 */

int __cdecl16far FUN_32b2_2c30(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  bool bVar3;
  uint local_6;
  int local_4;
  
  FUN_32b2_2cf4();
  local_6 = *param_1 - *(uint *)0x7dc0;
  local_4 = (param_1[1] - *(int *)0x7dc2) - (uint)(*param_1 < *(uint *)0x7dc0);
  iVar1 = FUN_32b2_2a86(&local_6);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else if ((*(int *)0x7dc4 != 0) && (iVar2 = FUN_32b2_2dae(iVar1), iVar2 != 0)) {
    bVar3 = 0xf1ef < local_6;
    local_6 = local_6 + 0xe10;
    local_4 = local_4 + (uint)bVar3;
    iVar1 = FUN_32b2_2a86(&local_6);
    *(undefined2 *)(iVar1 + 0x10) = 1;
  }
  return iVar1;
}


