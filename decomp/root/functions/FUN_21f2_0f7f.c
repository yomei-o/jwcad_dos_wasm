/* 21f2:0f7f */

void __cdecl16far
FUN_21f2_0f7f(int param_1,int param_2,int param_3,int param_4,int param_5,undefined2 param_6,
             undefined2 param_7)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_d2 [198];
  undefined2 uStack_c;
  undefined2 local_a;
  int local_8;
  undefined1 *local_6;
  
  local_6 = (undefined1 *)0x2eaa;
  FUN_32b2_02bc();
  local_6 = (undefined1 *)param_5;
  local_8 = param_4;
  local_a = 0x32b2;
  uStack_c = 0x2eb6;
  FUN_1def_26a9();
  *(undefined1 *)0x129 = 1;
  if (param_3 < 0x51) {
    local_6 = (undefined1 *)param_1;
    local_8 = 0x1de;
    local_a = 0x1def;
    uStack_c = 0x2f86;
    FUN_21f2_0356();
    if (*(int *)0x16c < 1) {
      for (param_3 = param_4 + param_3; param_3 <= param_4 + param_2; param_3 = param_3 + 1) {
        local_6 = (undefined1 *)0x1d46;
        local_8 = 0x1def;
        local_a = 0x2fbc;
        FUN_21f2_0356();
      }
      goto LAB_21f2_10ab;
    }
    if (param_3 < 0x50) {
      local_6 = (undefined1 *)0x1def;
      local_8 = 0x2f9a;
      FUN_1def_2636();
    }
    local_6 = (undefined1 *)(param_5 + 1);
    local_8 = param_4;
    local_a = 0x1def;
    uStack_c = 0x2fa7;
    FUN_1def_26a9();
  }
  else {
    local_6 = (undefined1 *)0x4f;
    local_8 = param_1;
    local_a = 0x1def;
    uVar3 = 0x3a75;
    uStack_c = 0x2edd;
    iVar2 = FUN_3a75_02e8();
    if (iVar2 == 1) {
      local_8 = 0x4f;
    }
    for (iVar2 = 0; iVar1 = local_8, iVar2 < local_8; iVar2 = iVar2 + 1) {
      local_d2[iVar2] = *(undefined1 *)(param_1 + iVar2);
    }
    local_d2[local_8] = 0;
    local_6 = local_d2;
    local_8 = 0x1de;
    local_a = 0x3a75;
    uStack_c = 0x2f19;
    FUN_21f2_0356();
    if (iVar1 < 0x50) {
      local_6 = (undefined1 *)0x3a75;
      uVar3 = 0x1def;
      local_8 = 0x2f25;
      FUN_1def_2636();
    }
    local_6 = (undefined1 *)0x0;
    for (iVar2 = local_8; iVar2 < param_3; iVar2 = iVar2 + 1) {
      local_d2[(int)local_6] = *(undefined1 *)(param_1 + iVar2);
      local_6 = (undefined1 *)((int)local_6 + 1);
    }
    local_d2[(int)local_6] = 0;
    local_6 = (undefined1 *)(param_5 + 1);
    local_8 = param_4;
    uStack_c = 0x2f63;
    local_a = uVar3;
    FUN_1def_26a9();
    local_6 = local_d2;
    local_8 = 0x1de;
    local_a = 0x1def;
    uStack_c = 0x2f72;
    FUN_21f2_0356();
  }
  local_6 = (undefined1 *)0x1def;
  local_8 = 0x2f79;
  FUN_1def_2636();
LAB_21f2_10ab:
  *(undefined1 *)0x129 = (undefined1)local_a;
  local_6 = (undefined1 *)param_7;
  local_8 = param_6;
  local_a = 0x1def;
  uStack_c = 0x2fdc;
  FUN_1def_26a9();
  return;
}


