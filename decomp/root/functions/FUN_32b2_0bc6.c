/* 32b2:0bc6 */

undefined2 __cdecl16near FUN_32b2_0bc6(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0x7bd4;
  if ((((param_1 == (int *)0x7a9a) || (piVar3 = (int *)0x7bd6, param_1 == (int *)0x7aa2)) ||
      (piVar3 = (int *)0x7bd8, param_1 == (int *)0x7ab2)) &&
     (((*(byte *)(param_1 + 3) & 0xc) == 0 && ((*(byte *)(param_1 + 0x50) & 1) == 0)))) {
    iVar2 = *piVar3;
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_32b2_1f83(0x200);
      if (iVar2 == 0) goto LAB_32b2_0c33;
      *piVar3 = iVar2;
    }
    param_1[2] = iVar2;
    *param_1 = iVar2;
    param_1[1] = 0x200;
    param_1[0x51] = 0x200;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 2;
    *(byte *)(param_1 + 0x50) = 0x11;
    uVar1 = 1;
  }
  else {
LAB_32b2_0c33:
    uVar1 = 0;
  }
  return uVar1;
}


