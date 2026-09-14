/* 32b2:0c39 */

void __cdecl16near FUN_32b2_0c39(int param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_2 + 0x50) & 0x10) != 0) &&
     ((*(byte *)(*(byte *)((int)param_2 + 7) + 0x7a43) & 0x40) != 0)) {
    FUN_32b2_0c78(param_2);
    if (param_1 != 0) {
      *(byte *)(param_2 + 0x50) = 0;
      param_2[0x51] = 0;
      *param_2 = 0;
      param_2[2] = 0;
    }
  }
  return;
}


