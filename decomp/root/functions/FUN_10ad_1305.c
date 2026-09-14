/* 10ad:1305 */

undefined2 __cdecl16far
FUN_10ad_1305(int param_1,int param_2,undefined2 param_3,int *param_4,undefined2 *param_5)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 uVar5;
  int local_32 [2];
  undefined1 local_2e [4];
  int local_2a;
  int local_28;
  int *local_26;
  undefined2 local_24;
  int local_22 [8];
  undefined2 uStack_12;
  undefined2 uStack_10;
  int *local_e;
  undefined2 *local_c;
  undefined1 *local_a;
  int *local_8;
  undefined2 *local_6;
  int *local_4;
  
  local_4 = (int *)0x10ad;
  local_6 = (undefined2 *)0x1de0;
  FUN_32b2_02bc();
  local_e = (int *)*param_4;
  local_c = (undefined2 *)param_4[1];
  local_26 = (int *)*param_5;
  local_24 = param_5[1];
  local_2a = param_1 % 10;
  local_a = (undefined1 *)0x1;
  local_8 = (int *)*(undefined2 *)0x9070;
  if ((9999 < param_1) && (local_a = (undefined1 *)0x2711, param_1 < 20000)) {
    local_8 = (int *)*(undefined2 *)0x9074;
  }
  while( true ) {
    local_4 = (int *)0x32b2;
    local_6 = (undefined2 *)0x1e3f;
    FUN_1885_3af0();
    local_4 = (int *)param_3;
    local_6 = (undefined2 *)0x12b1;
    local_8 = (int *)0x1885;
    local_a = (undefined1 *)0x1e4b;
    FUN_21f2_0356();
    local_4 = (int *)0x21f2;
    local_6 = (undefined2 *)0x1e52;
    FUN_1def_2636();
    local_4 = (int *)0x1;
    local_6 = (undefined2 *)0x26;
    local_8 = (int *)0x1def;
    local_a = (undefined1 *)0x1e5f;
    FUN_1def_26a9();
    local_4 = (int *)0x31e;
    local_6 = (undefined2 *)0x1def;
    local_8 = (int *)0x1e6a;
    FUN_21f2_0356();
    if (0 < local_2a) {
      if (param_2 == 3) {
        local_4 = (int *)0x21f2;
        local_6 = (undefined2 *)0x1e7f;
        FUN_32b2_6cc6();
        local_4 = (int *)0x32b2;
        local_6 = (undefined2 *)0x1e84;
        FUN_32b2_7258();
        local_c = (undefined2 *)0x32b2;
        local_e = (int *)0x1e8e;
        FUN_32b2_6eb1();
        local_c = (undefined2 *)0x12bc;
        local_e = (int *)0x32b2;
        uStack_10 = 0x1e97;
        FUN_21f2_0356();
      }
      else {
        local_4 = (int *)*(undefined2 *)0x9072;
        local_6 = (undefined2 *)*(undefined2 *)0x9070;
        local_8 = (int *)param_4[1];
        local_a = (undefined1 *)*param_4;
        local_c = (undefined2 *)0x12c4;
        local_e = local_22;
        uStack_10 = 0x21f2;
        uStack_12 = 0x1eb9;
        FUN_21f2_04d8();
        local_4 = local_22;
        local_6 = (undefined2 *)0x21f2;
        local_8 = (int *)0x1ec5;
        FUN_21f2_0356();
      }
    }
    local_4 = (int *)0x1;
    local_6 = (undefined2 *)0x43;
    local_8 = (int *)0x21f2;
    uVar3 = 0x1def;
    local_a = (undefined1 *)0x1ed3;
    FUN_1def_26a9();
    if (local_2a == 2) {
      if (param_2 == 3) {
        local_4 = (int *)0x1def;
        local_6 = (undefined2 *)0x1ee9;
        FUN_32b2_6cc6();
        local_4 = (int *)0x32b2;
        local_6 = (undefined2 *)0x1eee;
        FUN_32b2_7258();
        local_c = (undefined2 *)0x32b2;
        local_e = (int *)0x1ef8;
        FUN_32b2_6eb1();
        local_c = (undefined2 *)0x12cc;
        local_e = (int *)0x32b2;
        uVar3 = 0x21f2;
        uStack_10 = 0x1f01;
        FUN_21f2_0356();
      }
      else {
        local_4 = (int *)*(undefined2 *)0x9072;
        local_6 = (undefined2 *)*(undefined2 *)0x9070;
        local_8 = (int *)param_5[1];
        local_a = (undefined1 *)*param_5;
        local_c = (undefined2 *)0x12d4;
        local_e = local_22;
        uStack_10 = 0x1def;
        uStack_12 = 0x1f23;
        FUN_21f2_04d8();
        local_4 = local_22;
        local_6 = (undefined2 *)0x21f2;
        uVar3 = 0x21f2;
        local_8 = (int *)0x1f2f;
        FUN_21f2_0356();
      }
    }
    uVar4 = uVar3;
    if (param_1 < 10000) {
      local_4 = (int *)0x12dc;
      uVar4 = 0x21f2;
      local_8 = (int *)0x1f40;
      local_6 = (undefined2 *)uVar3;
      FUN_21f2_0356();
    }
    local_4 = (int *)0x12df;
    local_8 = (int *)0x1f4a;
    local_6 = (undefined2 *)uVar4;
    FUN_21f2_0356();
    local_4 = (int *)local_a;
    local_6 = (undefined2 *)param_3;
    local_8 = (int *)0x21f2;
    local_a = (undefined1 *)0x1f56;
    iVar1 = FUN_32b2_21c4();
    local_6 = (undefined2 *)(iVar1 + 10);
    local_8 = local_32;
    local_a = local_2e;
    local_c = param_5;
    local_e = param_4;
    uStack_10 = 0x32b2;
    uStack_12 = 0x1f6d;
    local_4 = (int *)FUN_10ad_16d4();
    if (*(int *)0x158 != 0) {
      return 0xfba9;
    }
    if (local_4 == (int *)0xffff) {
      return 0xffff;
    }
    if (local_4 == (int *)0x0) break;
    if (local_4 == (int *)0x66) {
      return 0x66;
    }
    local_28 = ((uint)local_4 ^ (int)local_4 >> 0xf) - ((int)local_4 >> 0xf);
    if ((0x3a < local_28) && (local_28 < 0x45)) {
      if (0 < (int)local_4) {
        local_4 = (int *)0x32b2;
        local_6 = (undefined2 *)0x1fb4;
        FUN_32b2_6cc6();
        local_4 = (int *)0x32b2;
        local_6 = (undefined2 *)0x1fb9;
        FUN_32b2_6fd6();
        local_4 = (int *)0x32b2;
        local_6 = (undefined2 *)0x1fc1;
        FUN_32b2_6e63();
      }
      uVar5 = local_4 == (int *)0x0;
      if ((int)local_4 < 0) {
        local_4 = (int *)0x32b2;
        local_6 = (undefined2 *)0x1fcf;
        FUN_32b2_6cc6();
        local_4 = (int *)0x32b2;
        local_6 = (undefined2 *)0x1fd7;
        FUN_32b2_6cc6();
        local_4 = (int *)0x32b2;
        local_6 = (undefined2 *)0x1fdc;
        FUN_32b2_7191();
        piVar2 = local_8;
        if ((bool)uVar5) {
          piVar2 = local_e;
          local_6 = local_c;
        }
        *param_4 = (int)piVar2;
        param_4[1] = (int)local_6;
      }
    }
    if ((0x45 < local_28) && (local_28 < 0x50)) {
      if (0 < (int)local_4) {
        local_4 = (int *)0x32b2;
        local_6 = (undefined2 *)0x2011;
        FUN_32b2_6cc6();
        local_4 = (int *)0x32b2;
        local_6 = (undefined2 *)0x2016;
        FUN_32b2_6fd6();
        local_4 = (int *)0x32b2;
        local_6 = (undefined2 *)0x201e;
        FUN_32b2_6e63();
      }
      uVar5 = local_4 == (int *)0x0;
      if ((int)local_4 < 0) {
        local_4 = (int *)0x32b2;
        local_6 = (undefined2 *)0x202f;
        FUN_32b2_6cc6();
        local_4 = (int *)0x32b2;
        local_6 = (undefined2 *)0x2037;
        FUN_32b2_6cc6();
        local_4 = (int *)0x32b2;
        local_6 = (undefined2 *)0x203c;
        FUN_32b2_7191();
        piVar2 = local_8;
        if ((bool)uVar5) {
          piVar2 = local_26;
          local_6 = (undefined2 *)local_24;
        }
        *param_5 = piVar2;
        param_5[1] = local_6;
      }
    }
  }
  return 0;
}


