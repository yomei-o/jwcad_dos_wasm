/* 3ab8:7ce2 */

undefined2 __cdecl16far
FUN_3ab8_7ce2(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,char param_5,
             char param_6)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 extraout_DX;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  undefined1 local_da;
  byte local_d9;
  undefined2 *local_d6;
  undefined2 *local_c6;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  uint local_b4;
  int local_b2;
  int local_b0;
  int local_ae;
  int local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  uint local_92;
  int local_90;
  uint local_8e;
  int local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  int local_7e;
  undefined2 local_7c;
  undefined2 local_7a [8];
  undefined1 local_6a;
  undefined1 local_69;
  byte local_66;
  undefined2 local_64 [13];
  undefined1 local_4a;
  undefined1 local_49;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined1 local_34;
  byte local_33;
  undefined1 local_32;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uVar15;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_12;
  uint local_10;
  undefined4 local_e;
  
  FUN_21f2_0ebc();
  local_86 = *(undefined2 *)0x94a8;
  uStack_84 = *(undefined2 *)0x94aa;
  uStack_82 = *(undefined2 *)0x94ac;
  uStack_80 = *(undefined2 *)0x94ae;
  *(undefined1 *)0xb49c = 0;
  local_e._0_2_ = (undefined2 *)0x288c;
  local_e._2_2_ = 0x22b2;
  func_0x0000013f();
  FUN_28b3_0c98();
  func_0x00029d78();
  local_10 = 0x22b2;
  local_12 = 0x28a9;
  func_0x000299d1();
  local_10 = param_3;
  local_12 = param_2;
  bVar4 = 0x22;
  bVar1 = 0x22;
  local_18._2_2_ = 0x28b4;
  func_0x0000013f();
  local_10 = 0;
  local_12 = 0x28c2;
  FUN_28b3_0c98();
  local_10 = 0x22b2;
  local_12 = 0x28c7;
  func_0x00029d78();
  local_18._0_2_ = 0x22b2;
  local_1c._2_2_ = 0x28d1;
  func_0x000299d1();
  local_18._0_2_ = param_3;
  local_1c._2_2_ = param_2;
  local_1c._0_2_ = 0x22b2;
  uVar15 = 0x28dc;
  func_0x0000013f();
  local_18._0_2_ = 0;
  local_1c._2_2_ = 0x28ea;
  FUN_28b3_0c98();
  local_18._0_2_ = 0x22b2;
  local_1c._2_2_ = 0x28ef;
  func_0x00029d78();
  uStack_22 = 0x28f9;
  func_0x000299d1();
  uStack_22 = param_2;
  uStack_24 = 0x22b2;
  local_26 = 0x2904;
  func_0x0000013f();
  uStack_22 = 0x290f;
  FUN_28b3_0c98();
  uStack_22 = 0x2914;
  func_0x00029d78();
  local_2a = 0x291e;
  func_0x000299d1();
  local_2a = 0x2923;
  iVar6 = FUN_1def_043a();
  if (iVar6 == 0) {
    local_7c = 0;
  }
  else {
    local_7c = 0;
    local_b4 = *(uint *)0x148;
    local_b2 = *(int *)0x14a;
    local_8e = *(uint *)0x14c;
    local_8c = *(int *)0x14e;
    local_7e = *(int *)0x150;
    local_b0 = *(int *)0x152;
    local_92 = 1;
    local_90 = 0;
    local_e._2_2_ = 0x1bb4;
    while( true ) {
      if ((local_b2 < local_90) || ((local_b2 <= local_90 && (local_b4 < local_92)))) break;
      uVar11 = 0;
      local_e._0_2_ = (undefined2 *)0x2a10;
      puVar14 = (undefined2 *)func_0x0000013f();
      puVar8 = (undefined2 *)puVar14;
      puVar7 = local_7a;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar3;
      }
      if ((local_66 & 2) != 0) {
        puVar7 = &local_44;
        puVar8 = local_7a;
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar14 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar3 = *puVar14;
        }
        local_e._2_2_ = 0;
        local_e._0_2_ = (undefined2 *)0x2a41;
        local_32 = FUN_4375_b44b();
        if (local_33 < 0x5a) {
          if (param_5 != '\0') {
            local_33 = *(byte *)0xa6a;
          }
          if (param_6 != '\0') {
            local_34 = *(undefined1 *)0xa6c;
          }
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x2a79;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2a81;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2a8b;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2a94;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_8a = *puVar7;
          local_88 = puVar7[1];
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x2ab8;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2ac0;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2aca;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2ad3;
          func_0x0001e558();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          local_10 = 0x22b2;
          local_12 = 0x2b03;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2b0c;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2b16;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2b1e;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_44 = *puVar7;
          local_42 = puVar7[1];
          func_0x00029834();
          local_10 = 0x22b2;
          local_12 = 0x2b41;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2b4a;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2b54;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2b5c;
          puVar7 = (undefined2 *)func_0x0001e558();
          local_40 = *puVar7;
          local_3e = puVar7[1];
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x2b7e;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2b86;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2b90;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2b99;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_96 = *puVar7;
          local_94 = puVar7[1];
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x2bbd;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2bc5;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2bcf;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2bd8;
          func_0x0001e558();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          local_10 = 0x22b2;
          local_12 = 0x2c08;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2c11;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2c1b;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2c23;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_3c = *puVar7;
          local_3a = puVar7[1];
          func_0x00029834();
          local_10 = 0x22b2;
          local_12 = 0x2c46;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2c4f;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2c59;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          uVar11 = 0x1bb4;
          local_1c._0_2_ = 0x2c61;
          puVar7 = (undefined2 *)func_0x0001e558();
          local_38 = *puVar7;
          local_36 = puVar7[1];
        }
        else {
          *(undefined1 *)0xb49c = 1;
        }
        if (param_1 == 0) {
          if (local_33 < 0x5a) {
            local_69 = 0;
            local_6a = 1;
            puVar8 = (undefined2 *)&stack0xffe2;
            puVar7 = local_7a;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
            uStack_22 = 0x29b8;
            func_0x00018396();
            uVar11 = 0;
            local_e._0_2_ = (undefined2 *)0x29c8;
            local_e._2_2_ = 0x11f2;
            local_c6 = (undefined2 *)func_0x0000013f();
            puVar8 = (undefined2 *)local_c6;
            puVar7 = &local_44;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
            goto LAB_3ab8_7e5e;
          }
        }
        else {
          puVar9 = &local_1c;
          puVar7 = &local_44;
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar3 = (undefined2 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 2);
            puVar14 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar14;
          }
          iVar6 = FUN_4375_7430();
          uVar15 = uVar11;
          if (iVar6 != 0) {
LAB_3ab8_7e5e:
            local_7c = 1;
          }
        }
      }
      bVar12 = 0xfffe < local_92;
      local_92 = local_92 + 1;
      local_90 = local_90 + (uint)bVar12;
      local_e._2_2_ = uVar11;
    }
    local_90 = 0;
    for (local_92 = 1; (local_90 <= local_8c && ((local_90 < local_8c || (local_92 <= local_8e))));
        local_92 = local_92 + 1) {
      uVar11 = 0;
      local_e._0_2_ = (undefined2 *)0x2d49;
      puVar14 = (undefined2 *)func_0x00000271();
      puVar8 = (undefined2 *)puVar14;
      puVar7 = &local_2e;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar3;
      }
      if ((local_10 & 2) != 0) {
        puVar7 = local_64;
        puVar8 = &local_2e;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar14 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar3 = *puVar14;
        }
        local_e._2_2_ = 0;
        local_e._0_2_ = (undefined2 *)0x2d7a;
        uVar5 = FUN_4375_b44b();
        local_12 = CONCAT11(local_12._1_1_,uVar5);
        if (bVar1 < 0x5a) {
          if (param_5 != '\0') {
            bVar1 = *(byte *)0xa6a;
            bVar4 = bVar1;
          }
          if (param_6 != '\0') {
            bVar1 = bVar4;
          }
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x2db2;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2dba;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2dc4;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2dcd;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_8a = *puVar7;
          local_88 = puVar7[1];
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x2df1;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2df9;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2e03;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2e0c;
          func_0x0001e558();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          local_10 = 0x22b2;
          local_12 = 0x2e3c;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2e45;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2e4f;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2e57;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_2e = *puVar7;
          local_2c = puVar7[1];
          func_0x00029834();
          local_10 = 0x22b2;
          local_12 = 0x2e7a;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2e83;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2e8d;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2e95;
          puVar7 = (undefined2 *)func_0x0001e558();
          local_2a = *puVar7;
          local_b8 = 0;
          local_ba = 0;
          local_bc = local_18._2_2_;
          local_be = (undefined2)local_18;
          func_0x00029da5();
          func_0x00029c2c();
          func_0x000299b9();
          local_10 = 0x22b2;
          local_12 = 0x2ee4;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2ee9;
          func_0x0002a11e();
          func_0x00029834();
          func_0x00029b6d();
          func_0x00029bb5();
          func_0x00029983();
          func_0x00029834();
          local_10 = 0x22b2;
          local_12 = 0x2f20;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2f25;
          func_0x0002a10c();
          func_0x00029834();
          func_0x00029b6d();
          func_0x00029bb5();
          func_0x0002996b();
          func_0x00029d78();
          local_10 = 0x22b2;
          local_12 = 0x2f58;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2f61;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2f6b;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2f74;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_96 = *puVar7;
          local_94 = puVar7[1];
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x2f99;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2fa2;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2fac;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x2fb5;
          func_0x0001e558();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          local_10 = 0x22b2;
          local_12 = 0x2fe5;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x2fee;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x2ff8;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x3000;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_8a = *puVar7;
          local_88 = puVar7[1];
          func_0x00029834();
          local_10 = 0x22b2;
          local_12 = 0x3025;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x302e;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x3038;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x3040;
          puVar7 = (undefined2 *)func_0x0001e558();
          local_9a = *puVar7;
          local_98 = puVar7[1];
          func_0x000297e6();
          func_0x00029d78();
          local_10 = 0x22b2;
          local_12 = 0x306a;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x3073;
          func_0x000297e6();
          local_10 = 0x22b2;
          local_12 = 0x3078;
          func_0x00029d78();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x3082;
          func_0x000299d1();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x308b;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x3090;
          func_0x00029d78();
          uStack_22 = 0x309a;
          func_0x000299d1();
          uStack_22 = 0x30a3;
          func_0x000297e6();
          uStack_22 = 0x30a8;
          func_0x00029d78();
          local_2a = 0x30b2;
          func_0x000299d1();
          local_2a = 0x30b7;
          local_18 = FUN_1000_0718();
          local_a2 = 0x22b2;
          local_e = (undefined2 *)0xdef30e0;
          local_a0 = uVar15;
          func_0x00021eee();
          uVar11 = 0x1bb4;
          local_e._0_2_ = (undefined2 *)0x30fc;
          local_e._2_2_ = 0x1bb4;
          local_1c = func_0x00021eee();
          uVar15 = extraout_DX;
        }
        else {
          *(undefined1 *)0xb49c = 1;
        }
        if (param_1 == 0) {
          if (bVar1 < 0x5a) {
            local_49 = 0;
            local_4a = 1;
            puVar8 = &local_26;
            puVar7 = local_64;
            for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
            local_2a = 0x2cf1;
            FUN_12c1_0f1d();
            local_e._2_2_ = local_92;
            local_e._0_2_ = (undefined2 *)0x11f2;
            uVar11 = 0;
            local_10 = 0x2d01;
            local_d6 = (undefined2 *)func_0x00000271();
            puVar8 = (undefined2 *)local_d6;
            puVar7 = &local_2e;
            for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
            local_7c = 1;
          }
        }
        else {
          puVar8 = &local_26;
          puVar10 = &local_26;
          puVar7 = &local_2e;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar3 = puVar8;
            puVar8 = puVar8 + 1;
            puVar14 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar14;
          }
          uVar11 = 0x11f2;
          local_2a = 0x2ca2;
          iVar6 = FUN_13bf_01c1();
          if (iVar6 != 0) {
            local_7c = 1;
            puVar7 = &local_2e;
            for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar10;
              puVar10 = puVar10 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
            local_2a = *(undefined2 *)0x14c;
            local_2c = 0x11f2;
            uVar11 = 0x11f2;
            local_2e = 0x2cca;
            func_0x00018977();
          }
        }
      }
      local_90 = local_90 + (uint)(0xfffe < local_92);
      local_e._2_2_ = uVar11;
    }
    for (local_a4 = 1; local_a4 <= local_7e; local_a4 = local_a4 + 1) {
      local_e._2_2_ = 0x314b;
      uVar13 = func_0x00000398();
      if ((*(byte *)((int)uVar13 + 0x16) & 2) != 0) {
        local_e._2_2_ = 0x3160;
        uVar13 = func_0x00000398();
        if (*(byte *)((int)uVar13 + 0x14) < 0x5a) {
          local_e = (undefined2 *)CONCAT22(0x3174,(undefined2 *)local_e);
          func_0x0000daa6();
          local_e = (undefined2 *)0x8853180;
          FUN_3ab8_77bc();
          if (param_1 == 0) {
            local_e._2_2_ = 0x3118;
            local_d6 = (undefined2 *)func_0x00000398();
            puVar8 = (undefined2 *)local_d6;
            puVar7 = (undefined2 *)0xc3a0;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
          }
          else {
            local_e._2_2_ = 0x885;
            local_e._0_2_ = (undefined2 *)0x3196;
            uVar5 = FUN_4375_b44b();
            *(undefined1 *)0xc3b5 = uVar5;
            puVar8 = (undefined2 *)&stack0xffe2;
            puVar7 = (undefined2 *)0xc3a0;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
            uStack_22 = 0x31af;
            puVar7 = (undefined2 *)&stack0xffe2;
            iVar6 = func_0x0001b198();
            if (iVar6 == 0) goto LAB_3ab8_85b2;
            puVar8 = (undefined2 *)0xc3a0;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar7;
              puVar7 = puVar7 + 1;
              puVar14 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar3 = *puVar14;
            }
            uStack_22 = 0x18b3;
            uStack_24 = 0x31d1;
            func_0x00018a6b();
          }
          local_7c = 1;
        }
      }
LAB_3ab8_85b2:
    }
    for (local_a4 = 1; local_a4 <= local_b0; local_a4 = local_a4 + 1) {
      local_e = (undefined2 *)CONCAT22(0x32a0,(undefined2 *)local_e);
      puVar14 = (undefined2 *)func_0x000003ef();
      uVar15 = (undefined2)((ulong)puVar14 >> 0x10);
      local_e._0_2_ = (undefined2 *)puVar14;
      if ((*(byte *)((undefined2 *)local_e + 5) & 2) != 0) {
        puVar7 = &local_e2;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar14 = (undefined2 *)local_e;
          local_e._0_2_ = (undefined2 *)local_e + 1;
          *puVar3 = *puVar14;
        }
        local_e = (undefined2 *)0x32d4;
        local_da = FUN_4375_b44b();
        if (local_d9 < 0x5a) {
          if (param_5 != '\0') {
            local_d9 = *(byte *)0x1d0;
          }
          FUN_28b3_0c98();
          func_0x00029d78();
          local_10 = 0x22b2;
          local_12 = 0x330f;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x3317;
          FUN_28b3_0c98();
          local_10 = 0x22b2;
          local_12 = 0x331c;
          func_0x00029d78();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x3326;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x332f;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_8a = *puVar7;
          local_88 = puVar7[1];
          FUN_28b3_0c98();
          func_0x00029d78();
          local_10 = 0x22b2;
          local_12 = 0x3359;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x3361;
          FUN_28b3_0c98();
          local_10 = 0x22b2;
          local_12 = 0x3366;
          func_0x00029d78();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x3370;
          func_0x000299d1();
          local_18._0_2_ = 1;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x3379;
          func_0x0001e558();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          local_10 = 0x22b2;
          local_12 = 0x33a9;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x33b2;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x33bc;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x33c4;
          puVar7 = (undefined2 *)FUN_1def_05d1();
          local_e2 = *puVar7;
          local_e0 = puVar7[1];
          func_0x00029834();
          local_10 = 0x22b2;
          local_12 = 0x33e9;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x33f2;
          func_0x000297e6();
          local_18._0_2_ = 0x22b2;
          local_1c._2_2_ = 0x33fc;
          func_0x000299d1();
          local_18._0_2_ = 0;
          local_1c._2_2_ = 0x22b2;
          local_1c._0_2_ = 0x3404;
          puVar7 = (undefined2 *)func_0x0001e558();
          local_de = *puVar7;
          local_dc = puVar7[1];
        }
        else {
          *(undefined1 *)0xb49c = 1;
        }
        local_e._2_2_ = 0x31ed;
        func_0x0000daa6();
        if (param_1 == 0) {
          if (local_d9 < 0x5a) {
            local_e._0_2_ = (undefined2 *)0x3273;
            local_e._2_2_ = 0x885;
            func_0x0001f185();
            puVar7 = &local_e2;
            puVar8 = (undefined2 *)local_e;
            for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              puVar14 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar3 = *puVar14;
            }
            goto LAB_3ab8_8701;
          }
        }
        else {
          puVar8 = &local_12;
          puVar7 = &local_e2;
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar3 = puVar8;
            puVar8 = puVar8 + 1;
            puVar14 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar14;
          }
          local_18._2_2_ = 0x3209;
          puVar7 = &local_12;
          iVar6 = func_0x0001efe0();
          if (iVar6 != 0) {
            puVar8 = &local_e2;
            for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar7;
              puVar7 = puVar7 + 1;
              puVar14 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar3 = *puVar14;
            }
            local_18._2_2_ = 0x1bb4;
            uVar15 = 0x11f2;
            local_18._0_2_ = 0x3229;
            func_0x000189f5();
            if (*(char *)(local_ae + -0x4b5a) == '\0') {
              *(undefined1 *)(local_ae + -0x4b5a) = 1;
              local_e = (undefined2 *)CONCAT22(0x3245,(undefined2 *)local_e);
              func_0x0000b1d8();
              uVar15 = 0x885;
              local_e = (undefined2 *)CONCAT22(0x324e,(undefined2 *)local_e);
              func_0x0000daa6();
            }
            local_e._0_2_ = (undefined2 *)0x325c;
            local_e._2_2_ = uVar15;
            func_0x0001f185();
LAB_3ab8_8701:
            local_7c = 1;
          }
        }
      }
    }
  }
  return local_7c;
}


