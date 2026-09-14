/* 3ab8:19b2 */

void __cdecl16far
FUN_3ab8_19b2(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 unaff_SI;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined2 in_stack_00000026;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  undefined2 in_stack_0000002c;
  undefined2 in_stack_0000002e;
  uint in_stack_00000030;
  uint in_stack_00000032;
  undefined2 local_3a;
  undefined2 local_36;
  undefined2 uStack_34;
  undefined4 local_32;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined4 local_2a;
  int local_26;
  int local_24;
  undefined2 local_22 [2];
  undefined2 local_1e;
  undefined2 uStack_1c;
  undefined2 *puStack_1a;
  undefined2 *puStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 *local_c;
  uint local_a;
  
  uVar6 = 0x22b2;
  FUN_21f2_0ebc();
  local_24 = 1;
  puVar2 = param_1 + 0x10;
  puVar4 = param_1;
  puVar5 = puVar2;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    puVar9 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar1 = *puVar9;
  }
  puVar4 = local_22;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar2;
    puVar2 = puVar2 + 1;
    *puVar1 = *puVar9;
  }
  if ((char)((uint)unaff_SI >> 8) != '\0') {
    local_a = 0xbc4;
    local_c = param_1;
    uStack_e = 0;
    uStack_10 = 0x22b2;
    uStack_12 = 0xc57d;
    local_24 = FUN_3ab8_0e4a();
  }
  for (local_26 = 1; local_26 <= local_24; local_26 = local_26 + 1) {
    puVar2 = local_22;
    puVar4 = param_1 + local_26 * 0x10;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar2;
      puVar2 = puVar2 + 1;
      puVar9 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar1 = *puVar9;
    }
    local_a = in_stack_00000032;
    local_c = (undefined2 *)in_stack_00000030;
    uStack_e = in_stack_0000002e;
    uStack_10 = in_stack_0000002c;
    uStack_12 = in_stack_0000002a;
    uStack_14 = in_stack_00000028;
    uStack_16 = in_stack_00000026;
    puStack_18 = &local_3a;
    puStack_1a = &local_36;
    local_1e = 0xc6af;
    uStack_1c = uVar6;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    local_1e = 0xc6b4;
    func_0x00029d78();
    local_24 = 0x22b2;
    local_26 = 0xc6be;
    func_0x000299d1();
    local_24 = 0x22b2;
    local_26 = 0xc6c6;
    func_0x000297e6();
    local_24 = 0x22b2;
    local_26 = -0x3935;
    func_0x00029d78();
    uStack_2c = 0x22b2;
    uStack_2e = 0xc6d5;
    func_0x000299d1();
    uStack_2c = param_9;
    uStack_2e = param_8;
    local_32._2_2_ = param_7;
    local_32._0_2_ = param_6;
    uStack_34 = param_5;
    local_36 = param_4;
    local_3a = param_2;
    FUN_3ab8_04af();
    local_a = 0xc6fc;
    func_0x000297e6();
    local_a = 0xc701;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc70b;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc713;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc718;
    func_0x00029d78();
    puStack_18 = (undefined2 *)0x22b2;
    puStack_1a = (undefined2 *)0xc722;
    func_0x000299d1();
    puStack_18 = (undefined2 *)0x0;
    puStack_1a = (undefined2 *)0x22b2;
    uStack_1c = 0xc72a;
    FUN_1def_05d1();
    local_a = 0xc734;
    func_0x000297e6();
    local_a = 0xc739;
    func_0x00029d78();
    local_a = 0xc741;
    func_0x00029c74();
    local_a = 0xc749;
    func_0x00029c74();
    local_a = 0xc751;
    func_0x00029983();
    local_a = 0xc759;
    func_0x000297e6();
    local_a = 0xc75e;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc768;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc770;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc775;
    func_0x00029d78();
    puStack_18 = (undefined2 *)0x22b2;
    puStack_1a = (undefined2 *)0xc77f;
    func_0x000299d1();
    puStack_18 = (undefined2 *)0x0;
    puStack_1a = (undefined2 *)0x22b2;
    uStack_1c = 0xc787;
    func_0x0001e558();
    local_a = 0xc791;
    func_0x000297e6();
    local_a = 0xc796;
    func_0x00029d78();
    local_a = 0xc79e;
    func_0x00029c74();
    local_a = 0xc7a6;
    func_0x00029c74();
    local_a = 0xc7ae;
    func_0x00029983();
    local_a = 0xc7b7;
    func_0x000297e6();
    local_a = 0xc7c0;
    func_0x00029b6d();
    local_a = 0xc7c5;
    func_0x00029d78();
    local_a = -0x3836;
    local_32 = FUN_28b3_0f51();
    if (*(int *)0xcb6 != 0) {
      local_2a._0_2_ = (int)local_c - (uint)local_32;
      local_2a._2_2_ = (local_a - (int)((ulong)local_32 >> 0x10)) - (uint)(local_c < (uint)local_32)
      ;
      local_c = (undefined2 *)0x22b2;
      uStack_e = 0xc7ee;
      local_a = (int)local_2a;
      func_0x00021eee();
    }
    local_a = in_stack_00000032;
    local_c = (undefined2 *)in_stack_00000030;
    uStack_e = in_stack_0000002e;
    uStack_10 = in_stack_0000002c;
    uStack_12 = in_stack_0000002a;
    uStack_14 = in_stack_00000028;
    uStack_16 = in_stack_00000026;
    puVar2 = &local_36;
    puVar4 = local_22;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar2;
      puVar2 = puVar2 + 1;
      puVar9 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar1 = *puVar9;
    }
    local_3a = 0xc822;
    puVar2 = (undefined2 *)FUN_21f2_001a();
    puVar4 = local_22;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar2;
      puVar2 = puVar2 + 1;
      *puVar1 = *puVar9;
    }
    uVar7 = 0;
    if (*(int *)0xcb6 != 0) {
      local_2a._0_2_ = (int)local_c + (uint)local_32;
      uVar7 = CARRY2(local_a,local_32._2_2_) ||
              CARRY2(local_a + local_32._2_2_,(uint)CARRY2((uint)local_c,(uint)local_32));
      local_2a._2_2_ = local_a + local_32._2_2_ + (uint)CARRY2((uint)local_c,(uint)local_32);
      local_c = (undefined2 *)0x1bb4;
      uStack_e = 0xc854;
      local_a = (int)local_2a;
      local_c = (undefined2 *)func_0x00021eee();
    }
    while( true ) {
      local_a = 0xc5ab;
      func_0x00029834();
      local_a = 0xc5b4;
      func_0x00029834();
      local_a = 0xc5b9;
      FUN_28b3_1181();
      if (!(bool)uVar7) break;
      local_a = 0xc594;
      func_0x00029834();
      local_a = 0x22b2;
      local_c = (undefined2 *)0xc59d;
      FUN_28b3_10e4();
      local_a = 0xc5a3;
      func_0x000299d1();
    }
    while( true ) {
      local_a = 0xc5de;
      func_0x00029834();
      local_a = 0xc5e6;
      func_0x00029834();
      local_a = 0xc5eb;
      FUN_28b3_1181();
      if (!(bool)uVar7) break;
      local_a = 0xc5c6;
      func_0x00029834();
      local_a = 0x22b2;
      local_c = (undefined2 *)0xc5cf;
      func_0x00029c74();
      local_a = 0xc5d5;
      func_0x000299d1();
    }
    local_a = 0xc5f5;
    func_0x00029834();
    local_a = 0xc5fe;
    func_0x00029c2c();
    local_a = 0xc61c;
    func_0x00029da5();
    local_a = 0xc621;
    FUN_28b3_117c();
    local_a = 0xc626;
    uVar8 = FUN_28b3_0f51();
    local_a = (uint)uVar8;
    local_c = (undefined2 *)0x22b2;
    uVar6 = 0x1bb4;
    uStack_e = 0xc633;
    local_2a = uVar8;
    puVar9 = (undefined2 *)func_0x00021eee();
    local_a = (uint)((ulong)puVar9 >> 0x10);
    local_c = (undefined2 *)puVar9;
    if ((undefined2 *)0x167ffff < puVar9) {
      local_a = local_a + -0x168;
    }
    puVar4 = param_1 + local_26 * 0x10;
    puVar2 = local_22;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar2;
      puVar2 = puVar2 + 1;
      *puVar1 = *puVar9;
    }
  }
  FUN_3ab8_1cdf();
  return;
}


