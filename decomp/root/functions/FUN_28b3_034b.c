/* 28b3:034b */

int __cdecl16far FUN_28b3_034b(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  iVar2 = FUN_32b2_21c4(param_1);
  iVar2 = iVar2 + -1;
  if ((3 < iVar2) && (iVar3 = FUN_3a75_02e8(param_1), iVar3 != 2)) {
    iVar2 = iVar2 + -1;
    iVar3 = FUN_3a75_02e8(param_1);
    if (iVar3 != 2) {
      bVar1 = *(byte *)(iVar2 + param_1);
      iVar3 = 0;
      if (((*(char *)(param_1 + iVar2 + -1) == '^') && (0x30 < bVar1)) && (bVar1 < 0x3a)) {
        iVar3 = bVar1 - 0x30;
      }
      if (1 < iVar2 - iVar3) {
        return iVar3;
      }
      return 0;
    }
  }
  return 0;
}


