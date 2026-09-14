/* 32b2:0a9a */

void __cdecl16near FUN_32b2_0a9a(int *param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = thunk_FUN_32b2_1f83(0x200);
  if (iVar1 == 0) {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 4;
    param_1[0x51] = 1;
    iVar1 = (int)param_1 + 0xa1;
  }
  else {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 8;
    param_1[0x51] = 0x200;
  }
  *param_1 = iVar1;
  param_1[2] = iVar1;
  param_1[1] = 0;
  return;
}


