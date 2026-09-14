/* 1885:3647 */

undefined2 __cdecl16far FUN_1885_3647(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 *local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_4 = 0x1885;
  local_6 = 0xbea2;
  FUN_32b2_02bc();
  if ((param_2 < 1) || (0x1e < param_2)) {
    uVar1 = 0;
  }
  else {
    local_c = (undefined2 *)0x0;
    if (param_1 < 0) {
      local_c = (undefined2 *)0xffff;
    }
    if (param_2 < 0x10) {
      local_a = param_2 + 4;
    }
    else {
      local_a = param_2 + -0xb;
    }
    if (*(char *)0xb782 == '\0') {
      local_4 = (int)local_c;
      local_6 = (int)local_c;
      local_c = (undefined2 *)(param_2 * 7 + 0xf00);
      uStack_e = 0x32b2;
      local_10 = 0xbf23;
      local_8 = local_a;
      FUN_1def_23c5();
      if (-1 < param_1) {
        local_4 = (int)local_c;
        local_6 = (int)local_c;
        local_8 = (int)local_c;
        local_c = &local_10;
        uStack_e = 0x1def;
        local_10 = 0xbf41;
        FUN_1def_23c5();
      }
      if (param_2 < 0x10) {
        uStack_e = 0x6f;
      }
      else {
        uStack_e = 0x37;
      }
      local_4 = 0x5555;
      local_6 = 7;
      local_8 = 0x130;
      local_c = (undefined2 *)0x40;
      local_10 = 0x1def;
      local_a = uStack_e;
      FUN_1def_0000();
    }
    uVar1 = 1;
  }
  return uVar1;
}


