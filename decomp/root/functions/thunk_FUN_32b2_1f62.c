/* 32b2:1f5c */

void __cdecl16far thunk_FUN_32b2_1f62(uint param_1)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if (*(uint *)0x7a06 < param_1) {
    pbVar1 = (byte *)(param_1 - 2);
    *pbVar1 = *pbVar1 | 1;
    if (pbVar1 < (byte *)*(undefined2 *)0x7a08) {
      *(undefined2 *)0x7a08 = pbVar1;
    }
  }
  return;
}


