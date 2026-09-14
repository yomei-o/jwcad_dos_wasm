/* 2bb4:4f09 */

int __cdecl16far
FUN_2bb4_4f09(int param_1,int param_2,int param_3,int param_4,undefined2 *param_5,
             undefined2 *param_6,undefined2 *param_7,undefined2 *param_8)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int in_DX;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  undefined2 local_da;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined2 local_cc;
  undefined2 local_c2;
  int local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 *local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e [16];
  int local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  int local_60;
  undefined2 local_4c [2];
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 local_36;
  undefined2 uStack_34;
  undefined2 local_32;
  undefined2 local_2e;
  undefined2 uStack_2c;
  int local_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_18;
  undefined2 local_16;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 *local_e;
  undefined2 **ppuStack_c;
  
  uVar10 = 0x32b2;
  FUN_32b2_02bc();
  local_6e = 0;
  if (((param_2 < 0) && (-1 < param_4)) || ((-1 < param_2 && (param_4 < 0)))) {
    if (param_2 < 0) {
      in_DX = -(param_2 + (uint)(param_1 != 0));
      ppuStack_c = (undefined2 **)0x32b2;
      local_e = (undefined2 *)0xa90;
      puVar4 = (undefined2 *)FUN_1000_0271();
      puVar6 = local_8e;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      ppuStack_c = (undefined2 **)0x1000;
      uVar10 = 0x1000;
      local_e = (undefined2 *)0xaae;
      puVar4 = (undefined2 *)FUN_1000_013f();
      puVar6 = local_4c;
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
    }
    if (-1 < param_2) {
      local_e = (undefined2 *)0xad1;
      ppuStack_c = (undefined2 **)uVar10;
      puVar4 = (undefined2 *)FUN_1000_013f();
      puVar6 = local_4c;
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      if ((param_3 != -10000) || (param_4 != -1)) {
        in_DX = -(param_4 + (uint)(param_3 != 0));
      }
      ppuStack_c = (undefined2 **)0x1000;
      uVar10 = 0x1000;
      local_e = (undefined2 *)0xb09;
      puVar4 = (undefined2 *)FUN_1000_0271();
      puVar6 = local_8e;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
    }
    ppuStack_c = (undefined2 **)param_6;
    local_e = param_5;
    puVar4 = &local_2e;
    puVar6 = local_8e;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    puVar4 = &uStack_44;
    puVar6 = local_4c;
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    uStack_48 = 0xb49;
    uStack_46 = uVar10;
    local_6e = FUN_2bb4_4529();
  }
  else if ((param_2 < 0) && (param_4 < 0)) {
    bVar3 = false;
    iVar8 = -(param_2 + (uint)(param_1 != 0));
    ppuStack_c = (undefined2 **)0x32b2;
    local_e = (undefined2 *)0xb7b;
    puVar4 = (undefined2 *)FUN_1000_0271();
    puVar6 = &local_36;
    for (iVar7 = 0x10; iVar5 = param_3, iVar9 = param_4, iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    while( true ) {
      iVar8 = -(iVar9 + (uint)(iVar5 != 0));
      ppuStack_c = (undefined2 **)0x1000;
      local_e = (undefined2 *)0xba1;
      puVar4 = (undefined2 *)FUN_1000_0271();
      puVar6 = &local_6c;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      local_e2 = local_6c;
      local_e0 = local_6a;
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      if ((local_2a != 10000) || (uVar11 = local_60 == 10000, !(bool)uVar11)) {
        return -1;
      }
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_70dc();
      FUN_32b2_6e99();
      FUN_32b2_6ef9();
      FUN_32b2_6d14();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_70dc();
      FUN_32b2_6e99();
      FUN_32b2_7191();
      if ((bool)uVar11) {
        FUN_32b2_6d14();
        FUN_32b2_6d14();
        FUN_32b2_7191();
        if ((bool)uVar11) {
          return 0;
        }
      }
      FUN_32b2_6d14();
      FUN_32b2_710c();
      FUN_32b2_6d14();
      FUN_32b2_710c();
      FUN_32b2_718c();
      uStack_10 = 0x32b2;
      uStack_12 = 0xce2;
      FUN_32b2_6eb1();
      uStack_10 = 0x32b2;
      uStack_12 = 0xce7;
      puVar6 = (undefined2 *)FUN_32b2_7592();
      local_96 = (undefined2 *)*puVar6;
      local_94 = puVar6[1];
      local_92 = puVar6[2];
      local_90 = puVar6[3];
      ppuStack_c = &local_e;
      local_e = (undefined2 *)0x32b2;
      uStack_10 = 0xd08;
      FUN_32b2_6cc6();
      local_e = (undefined2 *)0x32b2;
      uStack_10 = 0xd0d;
      FUN_32b2_7258();
      local_16 = 0x32b2;
      uStack_18 = 0xd17;
      FUN_32b2_6eb1();
      local_16 = 0x32b2;
      uStack_18 = 0xd20;
      FUN_32b2_6cc6();
      local_16 = 0x32b2;
      uStack_18 = 0xd25;
      FUN_32b2_7258();
      uStack_1e = 0x32b2;
      uStack_20 = 0xd2f;
      FUN_32b2_6eb1();
      uStack_1e = local_d8;
      uStack_20 = local_da;
      uStack_22 = local_dc;
      uStack_24 = local_de;
      uStack_26 = local_bc;
      uStack_28 = local_be;
      local_2a = local_c0;
      uStack_2c = local_c2;
      local_2e = 0x32b2;
      iVar7 = FUN_3ab8_4fbd();
      if (iVar7 == 0) break;
      ppuStack_c = (undefined2 **)0xd66;
      FUN_32b2_6d14();
      ppuStack_c = (undefined2 **)0xd6f;
      FUN_32b2_6e99();
      ppuStack_c = (undefined2 **)0xd77;
      FUN_32b2_6ef9();
      ppuStack_c = (undefined2 **)&local_e2;
      local_e = (undefined2 *)0x32b2;
      uStack_10 = 0xd8a;
      FUN_32b2_6cc6();
      local_e = (undefined2 *)0x32b2;
      uStack_10 = 0xd8f;
      FUN_32b2_7258();
      local_16 = 0x32b2;
      uStack_18 = 0xd99;
      FUN_32b2_6eb1();
      local_16 = 0x32b2;
      uStack_18 = 0xda1;
      FUN_32b2_6cc6();
      local_16 = 0x32b2;
      uStack_18 = 0xda6;
      FUN_32b2_7258();
      uStack_1e = 0x32b2;
      uStack_20 = 0xdb0;
      FUN_32b2_6eb1();
      uStack_1e = 0x32b2;
      uStack_20 = 0xdb9;
      FUN_32b2_6d14();
      uStack_26 = 0x32b2;
      uStack_28 = 0xdc3;
      FUN_32b2_6eb1();
      uStack_26 = 0x32b2;
      uStack_28 = 0xdcc;
      FUN_32b2_6d14();
      uStack_26 = 0x32b2;
      uStack_28 = 0xdd5;
      FUN_32b2_6e99();
      local_2e = 0x32b2;
      FUN_32b2_6eb1();
      local_2e = 0x32b2;
      FUN_32b2_6cc6();
      local_2e = 0x32b2;
      FUN_32b2_7258();
      local_36 = 0x32b2;
      uStack_38 = 0xdf7;
      FUN_32b2_6eb1();
      local_36 = 0x32b2;
      uStack_38 = 0xe00;
      FUN_32b2_6cc6();
      local_36 = 0x32b2;
      uStack_38 = 0xe05;
      FUN_32b2_7258();
      uStack_3e = 0x32b2;
      uStack_40 = 0xe0f;
      FUN_32b2_6eb1();
      uStack_3e = 1;
      uStack_40 = 0x32b2;
      uStack_42 = 0xe17;
      FUN_3ab8_5089();
      uVar11 = (undefined1 *)0xffc9 < &uStack_3e;
      ppuStack_c = (undefined2 **)0xe32;
      FUN_32b2_6cc6();
      ppuStack_c = (undefined2 **)0xe3b;
      FUN_32b2_704d();
      ppuStack_c = (undefined2 **)0xe40;
      FUN_32b2_7258();
      ppuStack_c = (undefined2 **)0xe48;
      FUN_32b2_6d14();
      ppuStack_c = (undefined2 **)0xe50;
      FUN_32b2_710c();
      ppuStack_c = (undefined2 **)0xe55;
      FUN_32b2_7173();
      ppuStack_c = (undefined2 **)0xe5d;
      FUN_32b2_6d14();
      ppuStack_c = (undefined2 **)0xe65;
      FUN_32b2_710c();
      ppuStack_c = (undefined2 **)0xe6e;
      FUN_32b2_6e99();
      ppuStack_c = (undefined2 **)0xe73;
      FUN_32b2_718c();
      ppuStack_c = (undefined2 **)0xe7c;
      FUN_32b2_6cc6();
      ppuStack_c = (undefined2 **)0xe81;
      FUN_32b2_7258();
      ppuStack_c = (undefined2 **)0xe86;
      FUN_32b2_7182();
      ppuStack_c = (undefined2 **)0xe8f;
      FUN_32b2_710c();
      ppuStack_c = (undefined2 **)0xe98;
      FUN_32b2_6e99();
      ppuStack_c = (undefined2 **)0xea0;
      FUN_32b2_6ef9();
      ppuStack_c = (undefined2 **)0xea9;
      FUN_32b2_6d14();
      ppuStack_c = (undefined2 **)0xeb2;
      FUN_32b2_6d14();
      ppuStack_c = (undefined2 **)0xebb;
      FUN_32b2_710c();
      ppuStack_c = (undefined2 **)0xec4;
      FUN_32b2_70f4();
      ppuStack_c = (undefined2 **)0xecd;
      FUN_32b2_6e99();
      ppuStack_c = (undefined2 **)0xed2;
      FUN_32b2_7191();
      if (!(bool)uVar11) {
        FUN_32b2_6d14();
        FUN_32b2_6d14();
        FUN_32b2_6fc7();
        FUN_32b2_7191();
        if ((bool)uVar11) {
          local_96 = (undefined2 *)*(undefined2 *)0x93c0;
          local_94 = *(undefined2 *)0x93c2;
          local_92 = *(undefined2 *)0x93c4;
          local_90 = *(undefined2 *)0x93c6;
        }
        ppuStack_c = (undefined2 **)local_94;
        local_e = local_96;
        uStack_10 = 0x32b2;
        uStack_12 = 0xf53;
        puVar6 = (undefined2 *)FUN_32b2_7592();
        local_d6 = *puVar6;
        local_d4 = puVar6[1];
        local_d2 = puVar6[2];
        local_d0 = puVar6[3];
        ppuStack_c = (undefined2 **)&local_aa;
        local_e = (undefined2 *)0x32b2;
        uStack_10 = 0xf75;
        FUN_32b2_6cc6();
        local_e = (undefined2 *)0x32b2;
        uStack_10 = 0xf7a;
        FUN_32b2_7258();
        local_16 = 0x32b2;
        uStack_18 = 0xf84;
        FUN_32b2_6eb1();
        local_16 = 0x32b2;
        uStack_18 = 0xf8c;
        FUN_32b2_6cc6();
        local_16 = 0x32b2;
        uStack_18 = 0xf91;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        uStack_20 = 0xf9b;
        FUN_32b2_6eb1();
        uStack_1e = local_ac;
        uStack_20 = local_ae;
        uStack_22 = local_b0;
        uStack_24 = local_b2;
        uStack_26 = local_98;
        uStack_28 = local_9a;
        local_2a = local_9c;
        uStack_2c = local_9e;
        local_2e = local_d0;
        local_32 = local_d4;
        uStack_34 = local_d6;
        local_36 = local_b4;
        uStack_38 = local_b6;
        uStack_3a = local_b8;
        uStack_3c = local_ba;
        uStack_3e = 0;
        uStack_40 = 0x32b2;
        uStack_42 = 0xfe2;
        FUN_3ab8_5089();
        uVar11 = (undefined1 *)0xffc9 < &uStack_3e;
        *param_5 = local_aa;
        param_5[1] = local_a8;
        *param_6 = local_ce;
        param_6[1] = local_cc;
        *param_7 = local_aa;
        param_7[1] = local_a8;
        *param_8 = local_ce;
        param_8[1] = local_cc;
        local_6e = local_6e + 1;
        ppuStack_c = (undefined2 **)0x1031;
        FUN_32b2_6d14();
        ppuStack_c = (undefined2 **)0x103a;
        FUN_32b2_6d14();
        ppuStack_c = (undefined2 **)0x103f;
        FUN_32b2_7191();
        if ((bool)uVar11) {
          ppuStack_c = (undefined2 **)&local_aa;
          local_e = (undefined2 *)0x32b2;
          uStack_10 = 0x1057;
          FUN_32b2_6cc6();
          local_e = (undefined2 *)0x32b2;
          uStack_10 = 0x105c;
          FUN_32b2_7258();
          local_16 = 0x32b2;
          uStack_18 = 0x1066;
          FUN_32b2_6eb1();
          local_16 = 0x32b2;
          uStack_18 = 0x106e;
          FUN_32b2_6cc6();
          local_16 = 0x32b2;
          uStack_18 = 0x1073;
          FUN_32b2_7258();
          uStack_1e = 0x32b2;
          uStack_20 = 0x107d;
          FUN_32b2_6eb1();
          uStack_1e = local_ac;
          uStack_20 = local_ae;
          uStack_22 = local_b0;
          uStack_24 = local_b2;
          uStack_26 = local_98;
          uStack_28 = local_9a;
          local_2a = local_9c;
          uStack_2c = local_9e;
          local_2e = 0x32b2;
          FUN_32b2_6d14();
          local_2e = 0x32b2;
          FUN_32b2_6fd6();
          local_36 = 0x32b2;
          uStack_38 = 0x10b5;
          FUN_32b2_6eb1();
          local_36 = local_b4;
          uStack_38 = local_b6;
          uStack_3a = local_b8;
          uStack_3c = local_ba;
          uStack_3e = 0;
          uStack_40 = 0x32b2;
          uStack_42 = 0x10cc;
          FUN_3ab8_5089();
          *param_7 = local_aa;
          param_7[1] = local_a8;
          *param_8 = local_ce;
          param_8[1] = local_cc;
          return local_6e + 1;
        }
        return local_6e;
      }
      if (bVar3) {
        return 0;
      }
      bVar3 = true;
      iVar8 = -(param_4 + (uint)(param_3 != 0));
      ppuStack_c = (undefined2 **)0x32b2;
      local_e = (undefined2 *)0xef8;
      puVar4 = (undefined2 *)FUN_1000_0271();
      puVar6 = &local_36;
      for (iVar7 = 0x10; iVar5 = param_1, iVar9 = param_2, iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
    }
    return 0;
  }
  return local_6e;
}


