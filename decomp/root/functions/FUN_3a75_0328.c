/* 3a75:0328 */

uint __cdecl16far FUN_3a75_0328(uint param_1)

{
  undefined2 unaff_DS;
  
  if ((0x1f < param_1) && (param_1 < 0x7f)) {
    param_1 = *(uint *)(param_1 * 2 + 0x7eca);
  }
  if (param_1 == 0xdc) {
    param_1 = 0x838f;
  }
  else if ((0xa0 < param_1) && (param_1 < 0xe0)) {
    param_1 = FUN_3a75_039e();
  }
  return param_1;
}


