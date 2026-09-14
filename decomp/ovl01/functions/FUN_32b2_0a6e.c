/* 32b2:0a6e */

void __cdecl16near FUN_32b2_0a6e(undefined2 *param_1)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_1 + 3) & 0x83) != 0) && ((*(byte *)(param_1 + 3) & 8) != 0)) {
    thunk_FUN_32b2_1f62(param_1[2]);
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf7;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


