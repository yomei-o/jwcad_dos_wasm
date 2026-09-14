/* 21f2:3ef0 */

/* WARNING: Removing unreachable block (ram,0x0002612f) */

undefined2 __cdecl16far FUN_21f2_3ef0(int *param_1,int *param_2)

{
  uint *puVar1;
  undefined2 *puVar2;
  int *piVar3;
  uint *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  undefined2 *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint extraout_DX;
  uint extraout_DX_00;
  uint extraout_DX_01;
  int unaff_SI;
  int unaff_DI;
  uint *puVar15;
  undefined2 *puVar16;
  uint uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar20;
  bool bVar21;
  undefined1 uVar22;
  int local_11e;
  int local_11c;
  int local_11a;
  int local_118;
  int local_116;
  int local_114;
  int local_112;
  int local_110;
  int local_106;
  undefined2 local_104;
  undefined2 local_102;
  int local_fc;
  uint local_fa;
  uint local_f8;
  undefined2 local_f2;
  int local_ec;
  int local_ea;
  int local_e8;
  int local_e6;
  int local_d8;
  int local_d6;
  int local_c8;
  int local_c6;
  int local_c4;
  int local_c2;
  uint local_ae;
  uint local_ac;
  int local_aa;
  int local_a8;
  int local_a6;
  int local_a4;
  int local_8a;
  uint local_88;
  uint local_86;
  int local_84;
  int local_82;
  undefined1 local_78 [8];
  int local_70;
  uint local_6e;
  int local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  uint local_66;
  uint local_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined2 local_50 [7];
  uint local_42;
  uint local_40;
  uint local_3e;
  uint local_3c;
  int local_30;
  int local_2e;
  undefined2 uStack_26;
  undefined2 local_24;
  uint uStack_22;
  int local_20;
  uint uStack_1e;
  uint local_1c;
  uint uStack_1a;
  undefined2 local_18;
  uint uStack_16;
  int local_14;
  uint uStack_12;
  uint local_10;
  int *piStack_e;
  
  FUN_32b2_02bc();
  FUN_32b2_6cc6();
  FUN_32b2_7065();
  FUN_32b2_6e4b();
  FUN_32b2_7258();
  FUN_32b2_710c();
  FUN_32b2_6e4b();
  FUN_32b2_6ef9();
  FUN_32b2_6cc6();
  FUN_32b2_6e63();
  *(undefined1 *)0x1ebc = 1;
  uVar20 = 0;
  uVar22 = *(int *)0x116c == 0;
  if (0 < *(int *)0x116c) {
    FUN_32b2_6cc6();
    FUN_32b2_6d9b();
    FUN_32b2_7191();
    if ((bool)uVar20 || (bool)uVar22) {
      local_84 = *param_1;
      local_82 = param_1[1];
      local_aa = *param_2;
      local_a8 = param_2[1];
      piStack_e = (int *)0x5eb8;
      local_8a = FUN_21f2_548c();
      if (local_8a != 0) {
        *param_1 = local_84;
        param_1[1] = local_82;
        goto LAB_21f2_3fb9;
      }
    }
  }
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_6eb1();
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_6eb1();
  piStack_e = (int *)0x5f1d;
  local_8a = FUN_2bb4_337d();
  if (local_8a != 0) {
LAB_21f2_4007:
    FUN_32b2_6d14();
    FUN_32b2_6e63();
    FUN_32b2_6d14();
    FUN_32b2_6e63();
    return 1;
  }
  if (2 < *(byte *)0x126) {
    *(undefined1 *)0xb8c = 1;
  }
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_6eb1();
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_6eb1();
  piStack_e = (int *)0x5f8f;
  local_8a = FUN_2bb4_3aea();
  *(undefined1 *)0xb8c = 0;
  if (local_8a != 0) goto LAB_21f2_4007;
  local_84 = *param_1;
  local_82 = param_1[1];
  local_aa = *param_2;
  iVar12 = param_2[1];
  if (2 < *(byte *)0x126) {
    *(undefined1 *)0xb8c = 1;
  }
  *(undefined2 *)0x1eba = 1;
  local_a8 = iVar12;
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  local_10 = 0x32b2;
  uStack_12 = 0x5fe7;
  FUN_32b2_6eb1();
  local_10 = 0x32b2;
  uStack_12 = 0x5ff0;
  FUN_32b2_6cc6();
  local_10 = 0x32b2;
  uStack_12 = 0x5ff5;
  FUN_32b2_7258();
  local_18 = 0x32b2;
  uStack_1a = 0x5fff;
  FUN_32b2_6eb1();
  local_18 = 0x32b2;
  uStack_1a = 0x6003;
  local_6e = FUN_21f2_573f();
  *(undefined1 *)0xb8c = 0;
  piStack_e = (int *)0x12;
  local_10 = 0x1ebd;
  uStack_12 = 0x32b2;
  uVar19 = 0x1def;
  local_14 = 0x602a;
  local_6c = iVar12;
  FUN_1def_23c5();
  if ((-1 < local_6c) && ((0 < local_6c || (local_6e != 0)))) {
    piStack_e = (int *)0x604c;
    puVar7 = (uint *)FUN_1000_013f();
    puVar15 = &local_1c;
    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar4 = puVar15;
      puVar15 = puVar15 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar4 = *puVar1;
    }
    FUN_32b2_6cc6();
    FUN_32b2_6e4b();
    FUN_32b2_6e63();
    FUN_32b2_6cc6();
    FUN_32b2_6e63();
    FUN_32b2_6cc6();
    FUN_32b2_6e4b();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_6e63();
    FUN_32b2_6cc6();
    FUN_32b2_6e63();
    FUN_32b2_6cc6();
    FUN_32b2_6e4b();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_6e4b();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_701d();
    FUN_32b2_6e63();
    FUN_32b2_6cc6();
    FUN_32b2_701d();
    uVar19 = 0x32b2;
    FUN_32b2_6e63();
    local_f2 = 1;
    if (*(int *)0x1eba == 0) {
      local_66 = *(uint *)0x148;
      local_64 = *(int *)0x14a;
    }
    else {
      local_66 = *(int *)0x1eba - 1;
      local_64 = (int)local_66 >> 0xf;
    }
    local_86 = 0;
    for (local_88 = 1;
        ((int)local_86 <= (int)local_64 &&
        (((int)local_86 < (int)local_64 || (local_88 <= local_66)))); local_88 = local_88 + 1) {
      if (*(int *)0x1eba == 0) {
        uVar19 = 0x1000;
        piStack_e = (int *)0x616e;
        uVar10 = local_86;
        iVar12 = FUN_1000_013f();
        uVar20 = (*(byte *)(iVar12 + 0x14) & 1) == 0;
joined_r0x00026666:
        if (!(bool)uVar20) {
LAB_21f2_4266:
          uVar22 = 0;
          piStack_e = (int *)0x618b;
          piVar8 = (int *)FUN_1000_013f();
          local_54 = (int *)CONCAT22(uVar10,piVar8);
          local_a6 = *local_54;
          local_a4 = piVar8[1];
          local_c8 = piVar8[2];
          local_c6 = piVar8[3];
          local_c4 = piVar8[4];
          local_c2 = piVar8[5];
          local_d8 = piVar8[6];
          local_d6 = piVar8[7];
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_718c();
          FUN_32b2_6e4b();
          FUN_32b2_6ef9();
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          iVar13 = local_a4;
          iVar12 = local_a6;
          if ((bool)uVar22) {
            *(undefined1 *)0x1ebc = 1;
            uVar20 = false;
            if ((((int *)local_54)[10] & 0x40U) == 0) {
              uVar22 = 0;
              uVar20 = (((int *)local_54)[10] & 0x80U) == 0;
              if ((bool)uVar20) {
                local_30 = local_c8;
                local_2e = local_c6;
                FUN_32b2_6cc6();
                FUN_32b2_6e63();
                goto LAB_21f2_43ae;
              }
            }
            uVar22 = 0;
            FUN_32b2_6cc6();
            FUN_32b2_6cc6();
            FUN_32b2_7191();
            iVar12 = unaff_SI;
            iVar13 = unaff_DI;
            if (!(bool)uVar22 && !(bool)uVar20) {
              FUN_32b2_6cc6();
              FUN_32b2_6cc6();
              FUN_32b2_7191();
              if ((bool)uVar22 || (bool)uVar20) {
                local_30 = local_c8;
                local_2e = local_c6;
                local_6a = local_58;
                local_68 = local_56;
                iVar12 = local_a6;
                iVar13 = local_a4;
              }
            }
          }
          else {
            uVar22 = 0;
            iVar12 = unaff_SI;
            iVar13 = unaff_DI;
          }
LAB_21f2_43ae:
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_718c();
          FUN_32b2_6e4b();
          FUN_32b2_7191();
          unaff_DI = local_c2;
          unaff_SI = local_c4;
          if ((bool)uVar22) {
            *(undefined1 *)0x1ebc = 1;
            uVar20 = false;
            if ((((int *)local_54)[10] & 0x40U) == 0) {
              uVar22 = 0;
              uVar20 = (((int *)local_54)[10] & 0x80U) == 0;
              if ((bool)uVar20) {
                local_30 = local_d8;
                local_2e = local_d6;
                FUN_32b2_6cc6();
                FUN_32b2_6e63();
                goto LAB_21f2_4497;
              }
            }
            uVar22 = 0;
            FUN_32b2_6cc6();
            FUN_32b2_6cc6();
            FUN_32b2_7191();
            unaff_SI = iVar12;
            unaff_DI = iVar13;
            if (!(bool)uVar22 && !(bool)uVar20) {
              FUN_32b2_6cc6();
              FUN_32b2_6cc6();
              FUN_32b2_7191();
              if ((bool)uVar22 || (bool)uVar20) {
                local_30 = local_d8;
                local_2e = local_d6;
                local_6a = local_58;
                local_68 = local_56;
                unaff_SI = local_c4;
                unaff_DI = local_c2;
              }
            }
          }
          else {
            uVar22 = 0;
            unaff_SI = iVar12;
            unaff_DI = iVar13;
          }
LAB_21f2_4497:
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6e4b();
          FUN_32b2_6ef9();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6e4b();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_717d();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_704d();
          FUN_32b2_7173();
          FUN_32b2_6e63();
          FUN_32b2_6cc6();
          FUN_32b2_704d();
          FUN_32b2_6cc6();
          FUN_32b2_704d();
          FUN_32b2_7173();
          FUN_32b2_6e4b();
          FUN_32b2_6ef9();
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          uVar19 = 0x32b2;
          FUN_32b2_7191();
          if (!(bool)uVar20) {
            FUN_32b2_6cc6();
            FUN_32b2_6cc6();
            FUN_32b2_704d();
            FUN_32b2_7191();
            if (!(bool)uVar22) {
              FUN_32b2_6cc6();
              FUN_32b2_6fc7();
              FUN_32b2_6cc6();
              FUN_32b2_6fc7();
              FUN_32b2_7191();
              if (!(bool)uVar22) {
                FUN_32b2_6cc6();
                FUN_32b2_7065();
                FUN_32b2_6e4b();
                FUN_32b2_704d();
                FUN_32b2_7095();
                FUN_32b2_6e4b();
                FUN_32b2_6ef9();
                FUN_32b2_6cc6();
                FUN_32b2_704d();
                FUN_32b2_7095();
                FUN_32b2_6e4b();
                FUN_32b2_6ef9();
                FUN_32b2_6cc6();
                FUN_32b2_701d();
                FUN_32b2_6fc7();
                FUN_32b2_6cc6();
                FUN_32b2_701d();
                FUN_32b2_6fc7();
                FUN_32b2_718c();
                FUN_32b2_6e4b();
                FUN_32b2_6ef9();
                FUN_32b2_6cc6();
                FUN_32b2_6cc6();
                FUN_32b2_7191();
                if ((bool)uVar22) {
                  FUN_32b2_6cc6();
                  FUN_32b2_70dc();
                  FUN_32b2_6e63();
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7154();
                  FUN_32b2_6e4b();
                  FUN_32b2_7191();
                  if ((bool)uVar22) {
                    FUN_32b2_6cc6();
                    FUN_32b2_6cc6();
                    uVar19 = 0x32b2;
                    FUN_32b2_7191();
                    if ((bool)uVar22) goto LAB_21f2_46fa;
                  }
                  uVar22 = 0;
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7191();
                  if ((bool)uVar22) {
                    FUN_32b2_6cc6();
                    FUN_32b2_6cc6();
                    uVar19 = 0x32b2;
                    FUN_32b2_7191();
                    if ((bool)uVar22) goto LAB_21f2_46fa;
                  }
                  uVar22 = 0;
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7191();
                  if ((bool)uVar22) {
                    FUN_32b2_6cc6();
                    FUN_32b2_6cc6();
                    uVar19 = 0x32b2;
                    FUN_32b2_7191();
                    if ((bool)uVar22) goto LAB_21f2_46fa;
                  }
                  uVar22 = 0;
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7191();
                  if (!(bool)uVar22 && !(bool)uVar20) {
                    FUN_32b2_6cc6();
                    FUN_32b2_6cc6();
                    uVar19 = 0x32b2;
                    FUN_32b2_7191();
                    if (!(bool)uVar22 && !(bool)uVar20) goto LAB_21f2_46fa;
                  }
                  FUN_32b2_6cc6();
                  FUN_32b2_70dc();
                  FUN_32b2_6e63();
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7154();
                  FUN_32b2_6e4b();
                  FUN_32b2_7191();
                  if ((bool)uVar22) {
                    FUN_32b2_6cc6();
                    FUN_32b2_6cc6();
                    uVar19 = 0x32b2;
                    FUN_32b2_7191();
                    if ((bool)uVar22) goto LAB_21f2_46fa;
                  }
                  uVar22 = 0;
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7191();
                  if ((bool)uVar22) {
                    FUN_32b2_6cc6();
                    FUN_32b2_6cc6();
                    uVar19 = 0x32b2;
                    FUN_32b2_7191();
                    if ((bool)uVar22) goto LAB_21f2_46fa;
                  }
                  uVar22 = 0;
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7191();
                  if ((bool)uVar22) {
                    FUN_32b2_6cc6();
                    FUN_32b2_6cc6();
                    uVar19 = 0x32b2;
                    FUN_32b2_7191();
                    if (!(bool)uVar22 && !(bool)uVar20) goto LAB_21f2_46fa;
                  }
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7191();
                  if (!(bool)uVar22 && !(bool)uVar20) {
                    FUN_32b2_6cc6();
                    FUN_32b2_6cc6();
                    uVar19 = 0x32b2;
                    FUN_32b2_7191();
                    if (!(bool)uVar22 && !(bool)uVar20) goto LAB_21f2_46fa;
                  }
                  uVar19 = 0x32b2;
                  *(undefined1 *)0x1ebc = 2;
                  uVar20 = (((int *)local_54)[10] & 0x40U) == 0;
                  if (((bool)uVar20) &&
                     (uVar20 = (((int *)local_54)[10] & 0x80U) == 0, (bool)uVar20)) {
                    local_30 = local_ec;
                    local_2e = local_ea;
                    local_5c = local_58;
                    local_5a = local_56;
                    unaff_SI = local_e8;
                    unaff_DI = local_e6;
                  }
                  else {
                    uVar22 = 0;
                    FUN_32b2_6cc6();
                    FUN_32b2_6cc6();
                    uVar19 = 0x32b2;
                    FUN_32b2_7191();
                    if (!(bool)uVar22 && !(bool)uVar20) {
                      FUN_32b2_6cc6();
                      FUN_32b2_6cc6();
                      uVar19 = 0x32b2;
                      FUN_32b2_7191();
                      if ((bool)uVar22 || (bool)uVar20) {
                        local_30 = local_ec;
                        local_2e = local_ea;
                        local_6a = local_58;
                        local_68 = local_56;
                        unaff_SI = local_e8;
                        unaff_DI = local_e6;
                      }
                    }
                  }
                  goto LAB_21f2_46fa;
                }
              }
            }
            uVar19 = 0x32b2;
          }
        }
      }
      else {
        local_ae = *(uint *)(local_88 * 4 + -0x4ce6);
        uVar10 = *(uint *)(local_88 * 4 + -0x4ce4);
        uVar20 = uVar10 == 0;
        local_ac = uVar10;
        if (-1 < (int)uVar10) {
          if ((int)uVar10 < 1) {
            uVar20 = local_ae == 0;
            goto joined_r0x00026666;
          }
          goto LAB_21f2_4266;
        }
      }
LAB_21f2_46fa:
      local_86 = local_86 + (0xfffe < local_88);
    }
  }
  if (*(int *)0x1eba == 0) {
    local_66 = *(uint *)0x14c;
    local_64 = *(uint *)0x14e;
  }
  else {
    local_66 = *(int *)0x1eba - 1;
    local_64 = (int)local_66 >> 0xf;
  }
  uVar20 = false;
  uVar22 = local_6c == 0 && local_6e == 0;
  if (local_6c != 0 || local_6e != 0) {
    local_86 = 0;
    for (local_88 = 1;
        ((int)local_86 <= (int)local_64 &&
        (((int)local_86 < (int)local_64 || (local_88 <= local_66)))); local_88 = local_88 + 1) {
      if (*(int *)0x1eba == 0) {
        uVar19 = 0x1000;
        piStack_e = (int *)0x68a8;
        uVar17 = local_86;
        iVar12 = FUN_1000_0271();
        uVar10 = local_88;
        uVar14 = local_86;
        if ((*(byte *)(iVar12 + 0x1e) & 1) != 0) goto LAB_21f2_499d;
      }
      else {
        iVar12 = local_88 * 4;
        if (*(int *)(iVar12 + -0x4ce4) < 0) {
          uVar10 = -*(int *)(iVar12 + -0x4ce6);
          uVar14 = -(*(int *)(iVar12 + -0x4ce4) + (uint)(*(int *)(iVar12 + -0x4ce6) != 0));
LAB_21f2_499d:
          uVar19 = 0x1000;
          piStack_e = (int *)0x68cc;
          local_ae = uVar10;
          local_ac = uVar14;
          iVar12 = FUN_1000_0271();
          local_60 = CONCAT22(uVar14,iVar12);
          if ((*(int *)(iVar12 + 0xe) != *(int *)(iVar12 + 0x12)) ||
             (*(int *)(iVar12 + 0x10) != *(int *)(iVar12 + 0x14))) {
            piStack_e = (int *)local_78;
            local_10 = local_ac;
            uStack_12 = local_ae;
            local_14 = 0x1000;
            uStack_16 = 0x6954;
            FUN_2bb4_5bf3();
            uVar20 = (undefined1 *)0xfff3 < &uStack_12;
            FUN_32b2_6cc6();
            FUN_32b2_6d14();
            FUN_32b2_701d();
            FUN_32b2_6fc7();
            FUN_32b2_6d14();
            FUN_32b2_701d();
            FUN_32b2_6fc7();
            FUN_32b2_718c();
            FUN_32b2_6e4b();
            FUN_32b2_7191();
            if ((bool)uVar20) {
              *(undefined1 *)0x1ebc = 1;
              FUN_32b2_6d14();
              FUN_32b2_6e63();
              FUN_32b2_6d14();
              FUN_32b2_6e63();
              FUN_32b2_6cc6();
              FUN_32b2_6e63();
            }
            FUN_32b2_6cc6();
            FUN_32b2_6d14();
            FUN_32b2_701d();
            FUN_32b2_6fc7();
            FUN_32b2_6d14();
            FUN_32b2_701d();
            FUN_32b2_6fc7();
            FUN_32b2_718c();
            FUN_32b2_6e4b();
            uVar19 = 0x32b2;
            FUN_32b2_7191();
            if ((bool)uVar20) {
              *(undefined1 *)0x1ebc = 1;
              FUN_32b2_6d14();
              FUN_32b2_6e63();
              FUN_32b2_6d14();
              FUN_32b2_6e63();
              FUN_32b2_6cc6();
              uVar19 = 0x32b2;
              FUN_32b2_6e63();
            }
          }
        }
      }
      local_86 = local_86 + (0xfffe < local_88);
    }
    local_fc = 0;
    if (local_6c < 0) {
      iVar13 = -(local_6c + (uint)(local_6e != 0));
      uVar19 = 0x1000;
      piStack_e = (int *)0x6a7d;
      puVar9 = (undefined2 *)FUN_1000_0271();
      puVar16 = local_50;
      for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
        puVar5 = puVar16;
        puVar16 = puVar16 + 1;
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar5 = *puVar2;
      }
      if ((local_42 != local_3e) || (local_40 != local_3c)) {
        local_fc = 1;
      }
    }
    local_88 = 1;
    local_86 = 0;
    while( true ) {
      uVar20 = local_64 < local_86;
      uVar22 = local_64 == local_86;
      if ((int)local_64 < (int)local_86) break;
      if (((int)local_64 <= (int)local_86) && (uVar22 = local_66 == local_88, local_66 < local_88))
      {
        uVar20 = true;
        break;
      }
      if (*(int *)0x1eba == 0) {
        uVar19 = 0x1000;
        piStack_e = (int *)0x6aba;
        uVar17 = local_86;
        iVar12 = FUN_1000_0271();
        uVar10 = local_88;
        uVar14 = local_86;
        if ((*(byte *)(iVar12 + 0x1e) & 1) != 0) goto LAB_21f2_4baf;
      }
      else {
        iVar12 = local_88 * 4;
        if (*(int *)(iVar12 + -0x4ce4) < 0) {
          uVar10 = -*(int *)(iVar12 + -0x4ce6);
          uVar14 = -(*(int *)(iVar12 + -0x4ce4) + (uint)(*(int *)(iVar12 + -0x4ce6) != 0));
LAB_21f2_4baf:
          local_ae = uVar10;
          local_ac = uVar14;
          if (uVar14 + local_6c + (uint)CARRY2(uVar10,local_6e) != 0 || uVar10 + local_6e != 0) {
            piStack_e = &local_a6;
            uVar17 = -(uVar14 + (uVar10 != 0));
            local_14 = local_6c;
            uStack_16 = local_6e;
            uStack_1a = 0x6b5a;
            local_18 = uVar19;
            uStack_12 = -uVar10;
            local_10 = uVar17;
            local_106 = FUN_2bb4_4f09();
            if (local_106 == -1) {
              piStack_e = (int *)0x6b77;
              FUN_32b2_6cc6();
              piStack_e = (int *)0x6b7c;
              FUN_32b2_7258();
              local_14 = 0x32b2;
              uStack_16 = 0x6b86;
              FUN_32b2_6eb1();
              local_14 = 0x32b2;
              uStack_16 = 0x6b8f;
              FUN_32b2_6cc6();
              local_14 = 0x32b2;
              uStack_16 = 0x6b94;
              FUN_32b2_7258();
              local_1c = 0x32b2;
              uStack_1e = 0x6b9e;
              FUN_32b2_6eb1();
              local_20 = local_6c;
              uStack_22 = local_6e;
              local_24 = 0x32b2;
              uStack_26 = 0x6bab;
              uStack_1e = -uVar10;
              local_1c = uVar17;
              local_106 = FUN_2bb4_5883();
              local_c4 = local_a6;
              local_c2 = local_a4;
              local_d8 = local_c8;
              local_d6 = local_c6;
            }
            uVar19 = 0x2bb4;
            uVar20 = 0;
            if (local_106 != 0) {
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_6fc7();
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_6fc7();
              FUN_32b2_718c();
              FUN_32b2_6e4b();
              FUN_32b2_6ef9();
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_6fc7();
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_6fc7();
              FUN_32b2_718c();
              FUN_32b2_6e4b();
              FUN_32b2_6cc6();
              FUN_32b2_7191();
              if ((bool)uVar20) {
                local_58 = local_104;
                local_56 = local_102;
                local_a6 = local_c4;
                local_a4 = local_c2;
                local_c8 = local_d8;
                local_c6 = local_d6;
              }
              else {
                FUN_32b2_6cc6();
                FUN_32b2_6e63();
              }
              FUN_32b2_6cc6();
              FUN_32b2_6cc6();
              uVar19 = 0x32b2;
              FUN_32b2_7191();
              if ((bool)uVar20) {
                uVar10 = extraout_DX;
                if ((-1 < local_6c) && ((0 < local_6c || (local_6e != 0)))) {
                  uVar20 = 0;
                  FUN_32b2_6cc6();
                  FUN_32b2_70dc();
                  FUN_32b2_6e63();
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7154();
                  FUN_32b2_6e4b();
                  FUN_32b2_7191();
                  if ((bool)uVar20) {
                    FUN_32b2_6cc6();
                    FUN_32b2_6cc6();
                    uVar19 = 0x32b2;
                    FUN_32b2_7191();
                    if ((bool)uVar20) goto LAB_21f2_4bc1;
                  }
                  uVar20 = 0;
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7191();
                  if ((bool)uVar20) {
                    FUN_32b2_6cc6();
                    FUN_32b2_6cc6();
                    uVar19 = 0x32b2;
                    FUN_32b2_7191();
                    if ((bool)uVar20) goto LAB_21f2_4bc1;
                  }
                  uVar20 = 0;
                  FUN_32b2_6cc6();
                  FUN_32b2_70dc();
                  FUN_32b2_6e63();
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7154();
                  FUN_32b2_6e4b();
                  FUN_32b2_7191();
                  if ((bool)uVar20) {
                    FUN_32b2_6cc6();
                    FUN_32b2_6cc6();
                    uVar19 = 0x32b2;
                    FUN_32b2_7191();
                    if ((bool)uVar20) goto LAB_21f2_4bc1;
                  }
                  uVar20 = 0;
                  FUN_32b2_6cc6();
                  FUN_32b2_6cc6();
                  FUN_32b2_7191();
                  uVar10 = extraout_DX_00;
                  if ((bool)uVar20) {
                    FUN_32b2_6cc6();
                    FUN_32b2_6cc6();
                    uVar19 = 0x32b2;
                    FUN_32b2_7191();
                    uVar10 = extraout_DX_01;
                    if ((bool)uVar20) goto LAB_21f2_4bc1;
                  }
                }
                if ((local_6c < 0) && (local_fc != 0)) {
                  FUN_32b2_6cc6();
                  FUN_32b2_7258();
                  uStack_12 = 0x32b2;
                  local_14 = 0x6e2f;
                  FUN_32b2_6eb1();
                  uStack_12 = 0x32b2;
                  local_14 = 0x6e38;
                  FUN_32b2_6cc6();
                  uStack_12 = 0x32b2;
                  local_14 = 0x6e3d;
                  FUN_32b2_7258();
                  uStack_1a = 0x32b2;
                  local_1c = 0x6e47;
                  FUN_32b2_6eb1();
                  local_1c = -local_6e;
                  uStack_1a = -(local_6c + (uint)(local_6e != 0));
                  uStack_1e = 0x32b2;
                  uVar19 = 0x2bb4;
                  local_20 = 0x6e5b;
                  FUN_2bb4_61b0();
                  if ((((local_40 <= local_3c) && ((local_40 < local_3c || (local_42 < local_3e))))
                      && ((local_f8 < local_40 ||
                          (((local_f8 <= local_40 && (local_fa < local_42)) ||
                           ((local_3c <= local_f8 &&
                            ((local_f8 != local_3c || (local_3e < local_fa)))))))))) ||
                     ((uVar10 = local_3c, local_3c <= local_40 &&
                      (((((local_40 != local_3c || (local_3e < local_42)) && (local_f8 <= local_40))
                        && ((local_f8 < local_40 || (local_fa < local_42)))) &&
                       ((local_3c <= local_f8 && ((local_3c < local_f8 || (local_3e < local_fa))))))
                      )))) goto LAB_21f2_4bc1;
                }
                uVar19 = 0x1000;
                piStack_e = (int *)0x6ee2;
                iVar12 = FUN_1000_0271();
                local_60 = CONCAT22(uVar10,iVar12);
                if ((*(int *)(iVar12 + 0xe) == *(int *)(iVar12 + 0x12)) &&
                   (*(int *)(iVar12 + 0x10) == *(int *)(iVar12 + 0x14))) {
LAB_21f2_50aa:
                  *(undefined1 *)0x1ebc = 2;
                  local_30 = local_c8;
                  local_2e = local_c6;
                  local_5c = local_58;
                  local_5a = local_56;
                  unaff_SI = local_a6;
                  unaff_DI = local_a4;
                }
                else {
                  FUN_32b2_6cc6();
                  FUN_32b2_7258();
                  uStack_12 = 0x32b2;
                  local_14 = 0x6f21;
                  FUN_32b2_6eb1();
                  uStack_12 = 0x32b2;
                  local_14 = 0x6f2a;
                  FUN_32b2_6cc6();
                  uStack_12 = 0x32b2;
                  local_14 = 0x6f2f;
                  FUN_32b2_7258();
                  uStack_1a = 0x32b2;
                  local_1c = 0x6f39;
                  FUN_32b2_6eb1();
                  uStack_1a = local_ac;
                  local_1c = local_ae;
                  uStack_1e = 0x32b2;
                  uVar19 = 0x2bb4;
                  local_20 = 0x6f46;
                  FUN_2bb4_61b0();
                  uVar18 = (undefined2)((ulong)local_60 >> 0x10);
                  iVar12 = (int)local_60;
                  uVar10 = *(uint *)(iVar12 + 0x14);
                  if (((uVar10 < *(uint *)(iVar12 + 0x10)) ||
                      ((uVar10 <= *(uint *)(iVar12 + 0x10) &&
                       (*(uint *)(iVar12 + 0x12) <= *(uint *)(iVar12 + 0xe))))) ||
                     ((*(uint *)(iVar12 + 0x10) <= local_f8 &&
                      (((*(uint *)(iVar12 + 0x10) < local_f8 ||
                        (*(uint *)(iVar12 + 0xe) <= local_fa)) &&
                       ((local_f8 < uVar10 ||
                        ((local_f8 <= uVar10 && (local_fa <= *(uint *)(iVar12 + 0x12))))))))))) {
                    uVar10 = *(uint *)(iVar12 + 0x14);
                    if ((*(uint *)(iVar12 + 0x10) < uVar10) ||
                       ((((*(uint *)(iVar12 + 0x10) == uVar10 &&
                          (*(uint *)(iVar12 + 0xe) <= *(uint *)(iVar12 + 0x12))) ||
                         (*(uint *)(iVar12 + 0x10) < local_f8)) ||
                        (((*(uint *)(iVar12 + 0x10) == local_f8 &&
                          (*(uint *)(iVar12 + 0xe) <= local_fa)) ||
                         ((local_f8 < uVar10 ||
                          ((local_f8 <= uVar10 && (local_fa <= *(uint *)(iVar12 + 0x12)))))))))))
                    goto LAB_21f2_50aa;
                  }
                }
              }
            }
          }
        }
      }
LAB_21f2_4bc1:
      bVar21 = 0xfffe < local_88;
      local_88 = local_88 + 1;
      local_86 = local_86 + bVar21;
    }
  }
  piStack_e = (int *)0x7007;
  FUN_1def_26a9();
  FUN_1def_2636();
  FUN_32b2_6cc6();
  FUN_32b2_6cc6();
  FUN_32b2_7191();
  if ((bool)uVar20 || (bool)uVar22) {
    FUN_32b2_6cc6();
    FUN_32b2_6cc6();
    FUN_32b2_7191();
    if (!(bool)uVar20) {
      if (2 < *(byte *)0x126) {
        *(undefined1 *)0xb8c = 1;
      }
      local_84 = *param_1;
      local_82 = param_1[1];
      local_aa = *param_2;
      iVar12 = param_2[1];
      local_a8 = iVar12;
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      local_10 = 0x32b2;
      uStack_12 = 0x70a0;
      FUN_32b2_6eb1();
      local_10 = 0x32b2;
      uStack_12 = 0x70a9;
      FUN_32b2_6cc6();
      local_10 = 0x32b2;
      uStack_12 = 0x70ae;
      FUN_32b2_7258();
      local_18 = 0x32b2;
      uStack_1a = 0x70b8;
      FUN_32b2_6eb1();
      local_18 = 0x32b2;
      uStack_1a = 0x70bd;
      local_70 = FUN_28b3_2730();
      *(undefined1 *)0x1ebc = 1;
      *(undefined1 *)0xb8c = 0;
      uVar20 = 0;
      if (local_70 != 0) {
        piVar11 = (int *)FUN_1000_0398();
        piVar8 = &local_11e;
        for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
          piVar6 = piVar8;
          piVar8 = piVar8 + 1;
          piVar3 = piVar11;
          piVar11 = piVar11 + 1;
          *piVar6 = *piVar3;
        }
        FUN_32b2_6cc6();
        FUN_32b2_704d();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_6fc7();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_6fc7();
        FUN_32b2_718c();
        FUN_32b2_7191();
        if ((bool)uVar20) {
          *param_1 = local_11e;
          param_1[1] = local_11c;
          local_aa = local_11a;
          local_a8 = local_118;
LAB_21f2_3fb9:
          *param_2 = local_aa;
          param_2[1] = local_a8;
          return 1;
        }
        FUN_32b2_6cc6();
        FUN_32b2_704d();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_6fc7();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_6fc7();
        FUN_32b2_718c();
        FUN_32b2_7191();
        if ((bool)uVar20) {
          *param_1 = local_116;
          param_1[1] = local_114;
          local_30 = local_112;
          local_2e = local_110;
          goto LAB_21f2_5132;
        }
      }
      local_11e = *(int *)0x1b3e - *(int *)0xa58;
      FUN_32b2_6d9b();
      FUN_32b2_6e4b();
      FUN_32b2_6ef9();
      local_11e = *(int *)0xa5a - *(int *)0xa5e;
      FUN_32b2_6d9b();
      FUN_32b2_6e63();
      FUN_32b2_6cc6();
      FUN_32b2_6fc7();
      FUN_32b2_6e63();
      FUN_32b2_6cc6();
      FUN_32b2_6fc7();
      FUN_32b2_6e63();
      uVar20 = 0;
      if (*(char *)0x130 != '\0') {
        uVar20 = 0x27f < *(uint *)0xa58;
        local_11e = 0x27f - *(uint *)0xa58;
        FUN_32b2_6d9b();
        FUN_32b2_707d();
        FUN_32b2_704d();
        FUN_32b2_6e63();
      }
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_6fc7();
      FUN_32b2_6e63();
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_6fc7();
      FUN_32b2_6e63();
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7095();
      FUN_32b2_7191();
      if ((bool)uVar20) {
        local_c4 = *(int *)0x92ac;
        local_c2 = *(int *)0x92ae;
LAB_21f2_53a9:
        *param_1 = local_c4;
        param_1[1] = local_c2;
        local_30 = *(int *)0x92ac;
        local_2e = *(int *)0x92ae;
      }
      else {
        FUN_32b2_6cc6();
        FUN_32b2_6cc6();
        FUN_32b2_7095();
        FUN_32b2_7191();
        if ((bool)uVar20) {
          local_c4 = *(int *)0x92ac;
          local_c2 = *(int *)0x92ae;
        }
        else {
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7095();
          FUN_32b2_7191();
          if (!(bool)uVar20) {
            FUN_32b2_6cc6();
            FUN_32b2_6cc6();
            FUN_32b2_7095();
            FUN_32b2_7191();
            if (!(bool)uVar20) {
              if ((*(int *)0xc1e != 1) && (*(int *)0xce6 == 0)) {
                *(undefined2 *)0xc22 = 1;
                piStack_e = (int *)0x7394;
                FUN_1def_26a9();
                piStack_e = (int *)0x73a2;
                FUN_21f2_0356();
              }
              return 0;
            }
            goto LAB_21f2_53a9;
          }
        }
        *param_1 = local_c4;
        param_1[1] = local_c2;
        local_30 = local_d8;
        local_2e = local_d6;
      }
      goto LAB_21f2_5132;
    }
  }
  *param_1 = unaff_SI;
  param_1[1] = unaff_DI;
LAB_21f2_5132:
  *param_2 = local_30;
  param_2[1] = local_2e;
  return 1;
}


