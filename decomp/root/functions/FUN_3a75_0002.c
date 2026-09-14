/* 3a75:0002 */

undefined2 __cdecl16far FUN_3a75_0002(byte param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = FUN_32b2_3134(0x3a75,param_1);
    if (iVar1 != 0) {
      return 2;
    }
  }
  else {
    iVar1 = FUN_32b2_312f(0x3a75,param_1);
    if (iVar1 != 0) {
      return 1;
    }
    if (((0x1f < param_1) && (param_1 < 0x7f)) || ((0xa0 < param_1 && (param_1 < 0xe0)))) {
      return 0;
    }
  }
  return 0xffff;
}


