/* 3a75:0366 */

uint __cdecl16far FUN_3a75_0366(uint param_1)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  uVar1 = 0;
  while( true ) {
    if (0x5e < uVar1) {
      if (param_1 < 0x8397) {
        param_1 = FUN_3a75_03d0();
      }
      return param_1;
    }
    if (*(uint *)(uVar1 * 2 + 0x7f0a) == param_1) break;
    uVar1 = uVar1 + 1;
  }
  return uVar1 + 0x20;
}


