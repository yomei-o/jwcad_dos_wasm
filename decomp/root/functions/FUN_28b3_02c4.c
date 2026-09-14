/* 28b3:02c4 */

int __cdecl16far FUN_28b3_02c4(undefined2 param_1,int param_2)

{
  int iVar1;
  int local_6;
  int local_4;
  
  FUN_32b2_02bc();
  local_4 = param_2;
  if (0 < param_2) {
    for (local_6 = 0; local_6 <= param_2; local_6 = local_6 + 1) {
      local_4 = local_6 >> 0xf;
      iVar1 = FUN_28b3_0126(param_1);
      if (iVar1 != 0) {
        if (local_6 < param_2) {
          local_4 = local_4 + -1;
        }
        if (local_6 < param_2 + -1) {
          local_4 = local_4 + -1;
        }
        if (3 < iVar1 % 10) {
          local_4 = local_4 + -1;
        }
        if ((local_6 < param_2 + -1) && (10 < iVar1)) {
          local_4 = local_4 + -1;
        }
      }
    }
    param_2 = local_4;
    if (local_4 < 0) {
      local_4 = 0;
      param_2 = local_4;
    }
  }
  return param_2;
}


