/* 21f2:34e9 */

undefined2 __cdecl16far FUN_21f2_34e9(int param_1,uint *param_2,uint *param_3)

{
  undefined2 *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  uint *puVar5;
  int *piVar6;
  undefined2 *puVar7;
  uint *puVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  undefined2 *puVar16;
  uint *puVar17;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar18;
  undefined1 uVar19;
  int local_fa [16];
  uint local_da;
  uint local_d8;
  undefined2 local_c4;
  undefined2 local_c2;
  uint local_c0;
  uint local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  uint local_b8;
  uint local_b6;
  uint local_b4 [2];
  int local_b0;
  uint local_ae;
  uint local_ac;
  uint local_aa;
  uint local_a8;
  uint local_a6;
  uint local_a4;
  uint local_a2;
  uint local_a0;
  int local_86;
  undefined2 local_84 [11];
  uint local_6e [23];
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  int aiStack_2a [2];
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  uint uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 *puStack_12;
  undefined2 *puStack_10;
  uint *puStack_e;
  uint *puStack_c;
  
  puVar17 = (uint *)0x32b2;
  FUN_32b2_02bc();
  if (param_1 < 1) {
    return 0;
  }
  if (2 < param_1) {
    return 0;
  }
  *(undefined1 *)0x1ebc = 1;
  if (*(int *)0xc1e == 1) {
    puStack_c = (uint *)0x32b2;
    puStack_e = (uint *)0x5440;
    iVar11 = FUN_21f2_3ef0();
    if (iVar11 == 0) {
      local_ae = *param_2;
      local_ac = param_2[1];
      local_b8 = *param_3;
      uVar12 = param_3[1];
      local_b6 = uVar12;
      if (*(int *)0xce4 == 0 && *(int *)0xce2 == 0) {
LAB_21f2_365a:
        *(undefined2 *)0xc22 = 1;
        puStack_e = (uint *)0x558d;
        puStack_c = puVar17;
        FUN_1def_26a9();
        puStack_c = (uint *)0x1def;
        puStack_e = (uint *)0x559b;
        FUN_21f2_0356();
        return 0;
      }
      if ((-1 < *(int *)0xce4) && ((0 < *(int *)0xce4 || (*(int *)0xce2 != 0)))) {
        puStack_c = (uint *)0x32b2;
        puStack_e = (uint *)0x55c2;
        puVar7 = (undefined2 *)FUN_1000_013f();
        puVar16 = local_84;
        for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
          puVar4 = puVar16;
          puVar16 = puVar16 + 1;
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar4 = *puVar1;
        }
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_7258();
        FUN_32b2_710c();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_718c();
        FUN_32b2_6e63();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_7258();
        FUN_32b2_710c();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_718c();
        FUN_32b2_6e63();
      }
      puVar17 = (uint *)0x32b2;
      if (*(int *)0xce4 < 0) {
        iVar14 = -(*(int *)0xce4 + (uint)(*(int *)0xce2 != 0));
        puStack_c = (uint *)0x32b2;
        puVar17 = (uint *)0x1000;
        puStack_e = (uint *)0x5666;
        puVar8 = (uint *)FUN_1000_0271();
        puVar9 = &local_a6;
        for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
          puVar5 = puVar9;
          puVar9 = puVar9 + 1;
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar5 = *puVar2;
        }
        *param_2 = local_a6;
        param_2[1] = local_a4;
        *param_3 = local_a2;
        param_3[1] = local_a0;
      }
    }
    else {
      local_ae = *param_2;
      local_ac = param_2[1];
      local_b8 = *param_3;
      local_b6 = param_3[1];
LAB_21f2_3549:
      do {
        puStack_c = local_6e;
        puStack_10 = (undefined2 *)0x547a;
        puStack_e = puVar17;
        FUN_32b2_2854();
        *(undefined2 *)0xc1a = 0;
        *(undefined2 *)0xc20 = 0;
        puStack_c = local_b4;
        puStack_e = local_6e;
        *(undefined2 *)0xcb8 = 1;
        puStack_10 = (undefined2 *)0x1;
        puStack_12 = (undefined2 *)0x32b2;
        puVar17 = (uint *)0x2bb4;
        uStack_14 = 0x54a4;
        local_86 = FUN_2bb4_2cb4();
        *(undefined2 *)0xcb8 = 0;
        if (*(int *)0x158 != 0) {
          return 0xfba9;
        }
        if (local_86 == -1) goto LAB_21f2_35a3;
        if (local_b0 == 2) {
          puStack_c = (uint *)0x2bb4;
          puStack_e = (uint *)0x54e3;
          iVar11 = FUN_21f2_3ef0();
          if (iVar11 == 0) goto LAB_21f2_3549;
        }
      } while (local_b0 == 0);
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_704d();
      FUN_32b2_7095();
      FUN_32b2_6e63();
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_704d();
      FUN_32b2_7095();
      puVar17 = (uint *)0x32b2;
      FUN_32b2_6e63();
    }
  }
  else {
    if ((*(int *)0xc1e == -1) || (*(int *)0xc1e == 2)) {
      local_aa = *param_2;
      local_a8 = param_2[1];
      local_c0 = *param_3;
      uVar12 = param_3[1];
      local_b0 = 0;
      if (2 < *(byte *)0x126) {
        *(undefined1 *)0xb8c = 1;
      }
      local_be = uVar12;
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      puStack_10 = (undefined2 *)0x32b2;
      puStack_12 = (undefined2 *)0x56f7;
      FUN_32b2_6eb1();
      puStack_10 = (undefined2 *)0x32b2;
      puStack_12 = (undefined2 *)0x5700;
      FUN_32b2_6cc6();
      puStack_10 = (undefined2 *)0x32b2;
      puStack_12 = (undefined2 *)0x5705;
      FUN_32b2_7258();
      uStack_18 = 0x32b2;
      puVar17 = (uint *)0x32b2;
      uStack_1a = 0x570f;
      FUN_32b2_6eb1();
      uStack_18 = 0x32b2;
      uStack_1a = 0x5713;
      local_a6 = FUN_21f2_5670();
      uVar13 = uVar12 | local_a6;
      if (uVar13 == 0) {
        *(undefined1 *)0xb8c = 0;
        return 0;
      }
      *(undefined1 *)0xb8c = 0;
      local_a4 = uVar12;
      if (*(int *)0xc1e == -1) {
LAB_21f2_3816:
        do {
          puStack_c = local_6e;
          puStack_10 = (undefined2 *)0x5747;
          puStack_e = puVar17;
          FUN_32b2_2854();
          *(undefined2 *)0xc1a = 0;
          *(undefined2 *)0xc20 = 0;
          puStack_c = &local_aa;
          puStack_e = local_6e;
          *(undefined2 *)0xcb8 = 1;
          puStack_10 = (undefined2 *)0x1;
          puStack_12 = (undefined2 *)0x32b2;
          puVar17 = (uint *)0x2bb4;
          uStack_14 = 0x5771;
          local_b8 = FUN_2bb4_2cb4();
          *(undefined2 *)0xcb8 = 0;
          if (*(int *)0x158 != 0) {
            return 0xfba9;
          }
          if (local_b8 == 0xffff) goto LAB_21f2_35a3;
          if (local_b0 == 2) {
            puStack_c = (uint *)0x2bb4;
            puStack_e = (uint *)0x57a5;
            iVar11 = FUN_21f2_3ef0();
            if (iVar11 == 0) goto LAB_21f2_3816;
          }
        } while (local_b0 == 0);
      }
      if ((-1 < (int)local_a4) && ((0 < (int)local_a4 || (local_a6 != 0)))) {
        if (*(int *)0xc1e == 2) {
          if (*(int *)0xce6 != 0) {
            return 1;
          }
          goto LAB_21f2_365a;
        }
        puStack_e = (uint *)0x57e9;
        puStack_c = puVar17;
        puVar9 = (uint *)FUN_1000_013f();
        puVar17 = &local_da;
        for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
          puVar5 = puVar17;
          puVar17 = puVar17 + 1;
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar5 = *puVar2;
        }
        puStack_c = (uint *)0x1000;
        puStack_e = (uint *)0x580f;
        FUN_32b2_6cc6();
        puStack_c = (uint *)0x32b2;
        puStack_e = (uint *)0x5814;
        FUN_32b2_7258();
        uStack_14 = 0x32b2;
        uStack_16 = 0x581e;
        FUN_32b2_6eb1();
        uStack_14 = 0x32b2;
        uStack_16 = 0x5827;
        FUN_32b2_6cc6();
        uStack_14 = 0x32b2;
        uStack_16 = 0x582c;
        FUN_32b2_7258();
        uStack_1c = 0x32b2;
        uStack_1e = 0x5836;
        FUN_32b2_6eb1();
        uStack_1c = 0x32b2;
        uStack_1e = 0x583f;
        FUN_32b2_6cc6();
        uStack_1c = 0x32b2;
        uStack_1e = 0x5844;
        FUN_32b2_7258();
        uStack_24 = 0x32b2;
        uStack_26 = 0x584e;
        FUN_32b2_6eb1();
        uStack_24 = 0x32b2;
        uStack_26 = 0x5857;
        FUN_32b2_6cc6();
        uStack_24 = 0x32b2;
        uStack_26 = 0x585c;
        FUN_32b2_7258();
        uStack_2e = 0x5866;
        FUN_32b2_6eb1();
        uStack_2e = 0x586b;
        iVar11 = FUN_2bb4_3ffd();
        if (iVar11 == 0) {
          puStack_c = (uint *)0x587a;
          FUN_21f2_0356();
          return 0;
        }
        puStack_c = (uint *)0x2bb4;
        puStack_e = (uint *)0x5891;
        FUN_32b2_6cc6();
        puStack_c = (uint *)0x32b2;
        puStack_e = (uint *)0x5896;
        FUN_32b2_7258();
        uStack_14 = 0x32b2;
        uStack_16 = 0x58a0;
        FUN_32b2_6eb1();
        uStack_14 = 0x32b2;
        uStack_16 = 0x58a9;
        FUN_32b2_6cc6();
        uStack_14 = 0x32b2;
        uStack_16 = 0x58ae;
        FUN_32b2_7258();
        uStack_1c = 0x32b2;
        uStack_1e = 0x58b8;
        FUN_32b2_6eb1();
        uStack_1c = 0x32b2;
        uStack_1e = 0x58c1;
        FUN_32b2_6cc6();
        uStack_24 = 0x32b2;
        uStack_26 = 0x58cb;
        FUN_32b2_6eb1();
        uStack_24 = 0x32b2;
        uStack_26 = 0x58d4;
        FUN_32b2_6cc6();
        uStack_2e = 0x58de;
        FUN_32b2_6eb1();
        uStack_2e = 0x58e7;
        FUN_32b2_6cc6();
        uStack_2e = 0x58ec;
        FUN_32b2_7258();
        uStack_34 = 0x32b2;
        uStack_36 = 0x58f6;
        FUN_32b2_6eb1();
        uStack_34 = 0x32b2;
        uStack_36 = 0x58ff;
        FUN_32b2_6cc6();
        uStack_34 = 0x32b2;
        uStack_36 = 0x5904;
        FUN_32b2_7258();
        uStack_3c = 0x32b2;
        uStack_3e = 0x590e;
        FUN_32b2_6eb1();
        uStack_3c = 1;
        uStack_3e = 0x32b2;
        uStack_40 = 0x5917;
        FUN_2bb4_40c9();
        puStack_c = (uint *)0x2bb4;
        puStack_e = (uint *)0x5929;
        FUN_32b2_6cc6();
        puStack_c = (uint *)0x32b2;
        puStack_e = (uint *)0x592e;
        FUN_32b2_7258();
        uStack_14 = 0x32b2;
        uStack_16 = 0x5938;
        FUN_32b2_6eb1();
        uStack_14 = 0x32b2;
        uStack_16 = 0x5941;
        FUN_32b2_6cc6();
        uStack_14 = 0x32b2;
        uStack_16 = 0x5946;
        FUN_32b2_7258();
        uStack_1c = 0x32b2;
        uStack_1e = 0x5950;
        FUN_32b2_6eb1();
        uStack_1c = 0x32b2;
        uStack_1e = 0x5959;
        FUN_32b2_6cc6();
        uStack_24 = 0x32b2;
        uStack_26 = 0x5963;
        FUN_32b2_6eb1();
        uStack_24 = 0x32b2;
        uStack_26 = 0x596c;
        FUN_32b2_6cc6();
        uStack_2e = 0x5976;
        FUN_32b2_6eb1();
        uStack_2e = *(undefined2 *)0x928c;
        uStack_30 = *(undefined2 *)0x928a;
        uStack_32 = *(undefined2 *)0x9288;
        uStack_34 = 0x32b2;
        uStack_36 = 0x598f;
        FUN_32b2_6cc6();
        uStack_34 = 0x32b2;
        uStack_36 = 0x5994;
        FUN_32b2_7258();
        uStack_3c = 0x32b2;
        uStack_3e = 0x599e;
        FUN_32b2_6eb1();
        uStack_3c = 0;
        uStack_3e = 0x32b2;
        puVar17 = (uint *)0x2bb4;
        uStack_40 = 0x59a6;
        FUN_2bb4_40c9();
      }
      if ((int)local_a4 < 0) {
        iVar14 = -(local_a4 + (local_a6 != 0));
        puStack_e = (uint *)0x59c9;
        puStack_c = puVar17;
        piVar10 = (int *)FUN_1000_0271();
        piVar15 = local_fa;
        for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
          piVar6 = piVar15;
          piVar15 = piVar15 + 1;
          piVar3 = piVar10;
          piVar10 = piVar10 + 1;
          *piVar6 = *piVar3;
        }
        if (*(int *)0xc1e == 2) {
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6e63();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6e63();
          puStack_c = (uint *)0x1;
          puStack_e = (uint *)0x32b2;
          puStack_10 = (undefined2 *)0x5a2d;
          FUN_2bb4_26e8();
          uVar18 = (undefined1 *)0xfff9 < &puStack_c;
          FUN_32b2_6cc6();
          FUN_32b2_6fc7();
          FUN_32b2_6cc6();
          FUN_32b2_6fc7();
          FUN_32b2_7191();
          if ((bool)uVar18) {
            local_c0 = *(uint *)0x92ac;
            local_be = *(uint *)0x92ae;
          }
          else {
            local_aa = *(uint *)0x92ac;
            local_a8 = *(uint *)0x92ae;
          }
          puStack_c = (uint *)0x0;
          puStack_e = (uint *)0x32b2;
          puStack_10 = (undefined2 *)0x5a85;
          FUN_2bb4_26e8();
          FUN_32b2_6cc6();
          puStack_c = (uint *)0x5a9b;
          FUN_32b2_7095();
          FUN_32b2_6e63();
          FUN_32b2_6cc6();
          puStack_c = (uint *)0x5ab4;
          FUN_32b2_7095();
          FUN_32b2_6e63();
        }
        piVar10 = aiStack_2a;
        piVar15 = local_fa;
        for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
          piVar6 = piVar10;
          piVar10 = piVar10 + 1;
          piVar3 = piVar15;
          piVar15 = piVar15 + 1;
          *piVar6 = *piVar3;
        }
        puVar17 = (uint *)0x2bb4;
        uStack_2e = 0x5ad9;
        iVar11 = FUN_2bb4_426f();
        if (iVar11 == 0) goto LAB_21f2_365a;
        *param_2 = local_aa;
        param_2[1] = local_a8;
        *param_3 = local_c0;
        param_3[1] = local_be;
      }
    }
    else if (param_1 == 2) {
      puStack_c = (uint *)0x32b2;
      puStack_e = (uint *)0x5b15;
      iVar11 = FUN_21f2_3ef0();
      if (iVar11 == 0) {
        return 0;
      }
    }
    if ((*(int *)0xc1e == -2) && (*(char *)0x15d == '\0')) {
      *(undefined1 *)0x15d = 1;
    }
  }
  do {
    while( true ) {
      if (*(char *)0x15d == '\0') goto LAB_21f2_3e36;
      local_da = *(uint *)0x92ac;
      local_d8 = *(uint *)0x92ae;
      local_c4 = *(undefined2 *)0x15e;
      local_c2 = *(undefined2 *)0x160;
      local_bc = *(undefined2 *)0x162;
      local_ba = *(undefined2 *)0x164;
      local_c0 = local_da;
      local_be = local_d8;
      if ((param_1 == 2) && (1 < *(byte *)0x123)) {
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        puStack_10 = (undefined2 *)0x32b2;
        puStack_12 = (undefined2 *)0x5b93;
        FUN_32b2_6eb1();
        puStack_10 = (undefined2 *)0x32b2;
        puStack_12 = (undefined2 *)0x5b9b;
        FUN_32b2_6cc6();
        puStack_10 = (undefined2 *)0x32b2;
        puStack_12 = (undefined2 *)0x5ba0;
        FUN_32b2_7258();
        uStack_18 = 0x32b2;
        uStack_1a = 0x5baa;
        FUN_32b2_6eb1();
        uStack_18 = (uint)*(byte *)0x1ebc;
        uStack_1a = 0x32b2;
        uStack_1c = 0x5bb4;
        FUN_21f2_23a2();
      }
      FUN_2bb4_000e();
      puStack_c = (uint *)0x5bc4;
      FUN_21f2_0356();
      puStack_c = (uint *)*(undefined2 *)0x160;
      puStack_e = (uint *)*(undefined2 *)0x15e;
      puStack_10 = (undefined2 *)0x31e;
      puStack_12 = (undefined2 *)0x1e92;
      uStack_14 = 0x1e93;
      uStack_16 = 0xbf48;
      uStack_18 = 0x2bb4;
      uStack_1a = 0x5be9;
      FUN_21f2_05a9();
      puStack_c = (uint *)0x2;
      puStack_e = (uint *)0x12;
      puStack_10 = (undefined2 *)0xbf48;
      puStack_12 = (undefined2 *)0x2bb4;
      uStack_14 = 0x5c05;
      FUN_1def_23c5();
      *(undefined2 *)0xc22 = 1;
      puStack_c = &local_c0;
      puStack_e = &local_da;
      puStack_10 = &local_bc;
      puStack_12 = &local_c4;
      uStack_14 = 0x1def;
      uStack_16 = 0x5c2c;
      local_fa[0] = FUN_10ad_16d4();
      *(undefined1 *)0x15a = 0;
      puStack_c = (uint *)0x10ad;
      puStack_e = (uint *)0x5c45;
      FUN_1def_26a9();
      FUN_1def_2636();
      uVar18 = 0;
      uVar19 = *(int *)0x158 == 0;
      if (!(bool)uVar19) {
        return 0xfba9;
      }
      FUN_32b2_6d14();
      FUN_32b2_6cc6();
      FUN_32b2_6fc7();
      FUN_32b2_7258();
      FUN_32b2_7191();
      if ((bool)uVar18 || (bool)uVar19) break;
LAB_21f2_3d7c:
      puVar17 = (uint *)0x32b2;
    }
    FUN_32b2_6d14();
    FUN_32b2_6cc6();
    FUN_32b2_6fc7();
    FUN_32b2_7258();
    puVar17 = (uint *)0x32b2;
    FUN_32b2_7191();
    if (!(bool)uVar18 && !(bool)uVar19) goto LAB_21f2_3d7c;
    if (local_fa[0] == -1) {
      if (*(char *)0x15d == '\x01') {
        *(undefined1 *)0x15d = 0;
        FUN_1885_2414();
      }
LAB_21f2_35a3:
      *(undefined2 *)0xce4 = 0;
      *(undefined2 *)0xce2 = 0;
      return 0;
    }
    if (local_fa[0] == 0x65) goto LAB_21f2_3e36;
  } while ((local_fa[0] != 0x66) && (local_fa[0] != 0));
  *(undefined2 *)0x162 = local_bc;
  *(undefined2 *)0x164 = local_ba;
  FUN_32b2_6cc6();
  FUN_32b2_6e4b();
  FUN_32b2_6cc6();
  FUN_32b2_704d();
  FUN_32b2_6e4b();
  FUN_32b2_7182();
  FUN_32b2_6e63();
  FUN_32b2_6cc6();
  FUN_32b2_7065();
  puVar17 = (uint *)0x32b2;
  FUN_32b2_6e63();
LAB_21f2_3e36:
  if (*(char *)0x15d != '\0') {
    puStack_c = (uint *)0x1;
    puStack_10 = (undefined2 *)0x5d6c;
    puStack_e = puVar17;
    FUN_2bb4_26e8();
    FUN_32b2_6cc6();
    puStack_c = (uint *)0x5d80;
    FUN_32b2_7095();
    FUN_32b2_6e63();
    FUN_32b2_6cc6();
    puStack_c = (uint *)0x5d97;
    FUN_32b2_7095();
    FUN_32b2_6e63();
    puStack_c = (uint *)0x0;
    puStack_e = (uint *)0x32b2;
    puStack_10 = (undefined2 *)0x5dab;
    FUN_2bb4_26e8();
    if (*(char *)0x15d == '\x01') {
      *(undefined1 *)0x15d = 0;
      FUN_1885_2414();
    }
  }
  if ((param_1 == 2) && (1 < *(byte *)0x123)) {
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    puStack_10 = (undefined2 *)0x32b2;
    puStack_12 = (undefined2 *)0x5de3;
    FUN_32b2_6eb1();
    puStack_10 = (undefined2 *)0x32b2;
    puStack_12 = (undefined2 *)0x5deb;
    FUN_32b2_6cc6();
    puStack_10 = (undefined2 *)0x32b2;
    puStack_12 = (undefined2 *)0x5df0;
    FUN_32b2_7258();
    uStack_18 = 0x32b2;
    uStack_1a = 0x5dfa;
    FUN_32b2_6eb1();
    uStack_18 = (uint)*(byte *)0x1ebc;
    uStack_1a = 0x32b2;
    uStack_1c = 0x5e04;
    FUN_21f2_23a2();
  }
  return 1;
}


