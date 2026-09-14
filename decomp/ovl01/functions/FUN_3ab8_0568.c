/* 3ab8:0568 */

void __cdecl16far
FUN_3ab8_0568(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 **ppuVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 **ppuVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined2 in_stack_00000026;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  undefined2 in_stack_0000002c;
  undefined2 in_stack_0000002e;
  undefined2 in_stack_00000030;
  undefined2 in_stack_00000032;
  int local_42;
  int local_40;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 uStack_34;
  undefined2 local_32;
  undefined2 uStack_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_20;
  undefined2 uStack_1c;
  undefined2 *puStack_1a;
  undefined2 *local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 *local_a;
  
  uVar8 = 0x22b2;
  FUN_21f2_0ebc();
  puVar6 = &local_2e;
  puVar5 = param_1;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  ppuVar7 = &local_18;
  puVar6 = &local_2e;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    ppuVar3 = ppuVar7;
    ppuVar7 = ppuVar7 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *ppuVar3 = (undefined2 *)*puVar1;
  }
  if (*(char *)0xb1ea == '\x03') {
    for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
      local_42 = local_40 + 1;
      if (3 < local_42) {
        local_42 = 0;
      }
      iVar4 = local_40 * 4;
      local_18 = (undefined2 *)*(undefined2 *)(iVar4 + 0xbc4);
      local_16 = *(undefined2 *)(iVar4 + 0xbc6);
      local_14 = *(undefined2 *)(iVar4 + 0xbd4);
      local_12 = *(undefined2 *)(iVar4 + 0xbd6);
      local_42 = local_42 * 4;
      local_10 = *(undefined2 *)(local_42 + 0xbc4);
      local_e = *(undefined2 *)(local_42 + 0xbc6);
      local_c = *(undefined2 *)(local_42 + 0xbd4);
      local_a = (undefined2 *)*(undefined2 *)(local_42 + 0xbd6);
      puVar5 = &uStack_1c;
      puVar6 = &local_2e;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      puVar6 = &local_32;
      ppuVar7 = &local_18;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        ppuVar3 = ppuVar7;
        ppuVar7 = ppuVar7 + 1;
        *puVar1 = *ppuVar3;
      }
      uVar9 = 0x7a6;
      local_36 = 0xb1bc;
      uStack_34 = uVar8;
      iVar4 = func_0x000084eb();
      if (0 < iVar4) {
        local_a = &local_3a;
        puVar5 = &local_20;
        puVar6 = &local_2e;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        puVar6 = &local_36;
        ppuVar7 = &local_18;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          ppuVar3 = ppuVar7;
          ppuVar7 = ppuVar7 + 1;
          *puVar1 = *ppuVar3;
        }
        local_38 = 0x7a6;
        uVar9 = 0x1bb4;
        local_3a = 0xb1ef;
        iVar4 = FUN_1def_1921();
        uVar10 = 0;
        if (iVar4 != 0) {
          local_a = (undefined2 *)0xb202;
          func_0x000297e6();
          local_a = (undefined2 *)0xb20a;
          func_0x000297e6();
          local_a = (undefined2 *)0xb212;
          FUN_28b3_100d();
          local_a = (undefined2 *)0xb21a;
          func_0x000297e6();
          local_a = (undefined2 *)0xb222;
          FUN_28b3_100d();
          local_a = (undefined2 *)0xb227;
          func_0x00029c9d();
          local_a = (undefined2 *)0xb22f;
          func_0x000297e6();
          local_a = (undefined2 *)0xb237;
          FUN_28b3_100d();
          local_a = (undefined2 *)0xb23f;
          func_0x000297e6();
          local_a = (undefined2 *)0xb247;
          FUN_28b3_100d();
          local_a = (undefined2 *)0xb24c;
          func_0x00029c9d();
          local_a = (undefined2 *)0xb251;
          FUN_28b3_1163();
          uVar9 = 0x22b2;
          local_a = (undefined2 *)0xb256;
          FUN_28b3_1181();
          if ((bool)uVar10) {
            local_2e = local_3a;
            local_2c = local_38;
          }
          else {
            local_26 = local_3a;
            local_24 = local_38;
          }
        }
      }
      uVar8 = uVar9;
    }
    puStack_1a = (undefined2 *)((uint)puStack_1a & 0xfcff);
  }
  if (((uint)puStack_1a & 0x200) == 0) {
    local_a = (undefined2 *)in_stack_00000032;
    local_c = in_stack_00000030;
    local_e = in_stack_0000002e;
    local_10 = in_stack_0000002c;
    local_12 = in_stack_0000002a;
    local_14 = in_stack_00000028;
    local_16 = in_stack_00000026;
    local_18 = &local_36;
    puStack_1a = &local_32;
    uStack_1c = uVar8;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    func_0x00029d78();
    local_24 = 0x22b2;
    local_26 = 0xb2ba;
    func_0x000299d1();
    local_24 = 0x22b2;
    local_26 = 0xb2c2;
    func_0x000297e6();
    local_24 = 0x22b2;
    local_26 = 0xb2c7;
    func_0x00029d78();
    local_2c = 0x22b2;
    local_2e = 0xb2d1;
    func_0x000299d1();
    local_2c = param_9;
    local_2e = param_8;
    uStack_30 = param_7;
    local_32 = param_6;
    uStack_34 = param_5;
    local_36 = param_4;
    local_38 = param_3;
    local_3a = param_2;
    FUN_3ab8_04af();
    local_a = (undefined2 *)0xb2f8;
    func_0x000297e6();
    local_a = (undefined2 *)0xb2fd;
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xb307;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xb30f;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xb314;
    func_0x00029d78();
    local_18 = (undefined2 *)0x22b2;
    puStack_1a = (undefined2 *)0xb31e;
    func_0x000299d1();
    local_18 = (undefined2 *)0x0;
    puStack_1a = (undefined2 *)0x22b2;
    uStack_1c = 0xb326;
    FUN_1def_05d1();
    local_a = (undefined2 *)0xb330;
    func_0x000297e6();
    local_a = (undefined2 *)0xb335;
    func_0x00029d78();
    local_a = (undefined2 *)0xb33d;
    func_0x00029c74();
    local_a = (undefined2 *)0xb345;
    func_0x00029c74();
    local_a = (undefined2 *)0xb34d;
    func_0x00029983();
    local_a = (undefined2 *)0xb355;
    func_0x000297e6();
    local_a = (undefined2 *)0xb35a;
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xb364;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xb36c;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xb371;
    func_0x00029d78();
    local_18 = (undefined2 *)0x22b2;
    puStack_1a = (undefined2 *)0xb37b;
    func_0x000299d1();
    local_18 = (undefined2 *)0x0;
    puStack_1a = (undefined2 *)0x22b2;
    uStack_1c = 0xb383;
    func_0x0001e558();
    local_a = (undefined2 *)0xb38d;
    func_0x000297e6();
    local_a = (undefined2 *)0xb392;
    func_0x00029d78();
    local_a = (undefined2 *)0xb39a;
    func_0x00029c74();
    local_a = (undefined2 *)0xb3a2;
    func_0x00029c74();
    uVar8 = 0x22b2;
    local_a = (undefined2 *)0xb3aa;
    func_0x00029983();
  }
  if (((uint)puStack_1a & 0x100) == 0) {
    local_a = (undefined2 *)in_stack_00000032;
    local_c = in_stack_00000030;
    local_e = in_stack_0000002e;
    local_10 = in_stack_0000002c;
    local_12 = in_stack_0000002a;
    local_14 = in_stack_00000028;
    local_16 = in_stack_00000026;
    local_18 = &local_36;
    puStack_1a = &local_32;
    uStack_1c = uVar8;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    func_0x00029d78();
    local_24 = 0x22b2;
    local_26 = 0xb3ea;
    func_0x000299d1();
    local_24 = 0x22b2;
    local_26 = 0xb3f2;
    func_0x000297e6();
    local_24 = 0x22b2;
    local_26 = 0xb3f7;
    func_0x00029d78();
    local_2c = 0x22b2;
    local_2e = 0xb401;
    func_0x000299d1();
    local_2c = param_9;
    local_2e = param_8;
    uStack_30 = param_7;
    local_32 = param_6;
    uStack_34 = param_5;
    local_36 = param_4;
    local_38 = param_3;
    local_3a = param_2;
    FUN_3ab8_04af();
    local_a = (undefined2 *)0xb428;
    func_0x000297e6();
    local_a = (undefined2 *)0xb42d;
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xb437;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xb43f;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xb444;
    func_0x00029d78();
    local_18 = (undefined2 *)0x22b2;
    puStack_1a = (undefined2 *)0xb44e;
    func_0x000299d1();
    local_18 = (undefined2 *)0x0;
    puStack_1a = (undefined2 *)0x22b2;
    uStack_1c = 0xb456;
    FUN_1def_05d1();
    local_a = (undefined2 *)0xb460;
    func_0x000297e6();
    local_a = (undefined2 *)0xb465;
    func_0x00029d78();
    local_a = (undefined2 *)0xb46d;
    func_0x00029c74();
    local_a = (undefined2 *)0xb475;
    func_0x00029c74();
    local_a = (undefined2 *)0xb47d;
    func_0x00029983();
    local_a = (undefined2 *)0xb485;
    func_0x000297e6();
    local_a = (undefined2 *)0xb48a;
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xb494;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xb49c;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xb4a1;
    func_0x00029d78();
    local_18 = (undefined2 *)0x22b2;
    puStack_1a = (undefined2 *)0xb4ab;
    func_0x000299d1();
    local_18 = (undefined2 *)0x0;
    puStack_1a = (undefined2 *)0x22b2;
    uStack_1c = 0xb4b3;
    func_0x0001e558();
    local_a = (undefined2 *)0xb4bd;
    func_0x000297e6();
    local_a = (undefined2 *)0xb4c2;
    func_0x00029d78();
    local_a = (undefined2 *)0xb4ca;
    func_0x00029c74();
    local_a = (undefined2 *)0xb4d2;
    func_0x00029c74();
    local_a = (undefined2 *)0xb4da;
    func_0x00029983();
  }
  puVar6 = &local_2e;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


