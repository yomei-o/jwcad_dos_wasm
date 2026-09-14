/* Ghidra decompilation of jw30.exe - machine output, not the original source. */

/* 3ab8:0000  OVL_0000  4335 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far OVL_0000(int param_1,undefined2 *******param_2)

{
  undefined2 ******ppppppuVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 ******ppppppuVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 ****local_120;
  undefined2 *****local_11e [10];
  int local_10a;
  undefined2 *****local_102;
  undefined2 local_100;
  undefined2 ******local_fe;
  undefined2 local_fc;
  undefined2 local_fa;
  undefined2 local_f8;
  undefined2 ******local_f6;
  undefined2 local_f4;
  undefined2 ******local_f2;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined2 local_ec;
  undefined2 local_ea;
  undefined2 local_e8;
  int local_e6;
  undefined2 local_e2;
  undefined2 *****local_e0 [10];
  undefined2 *****local_cc [3];
  undefined1 local_c6;
  int local_68;
  int local_66;
  undefined4 local_64;
  undefined2 *******local_60;
  undefined2 *****local_5e;
  undefined2 local_5c;
  undefined2 ******local_5a;
  undefined2 *******local_58;
  undefined2 *****local_56;
  undefined2 *******local_54;
  undefined2 ******local_52;
  undefined2 local_50;
  undefined4 local_4e;
  undefined2 local_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  int local_3a;
  uint local_38;
  undefined2 ******local_36;
  undefined2 local_34;
  undefined2 ****local_32;
  undefined2 local_30;
  undefined2 uStack_2c;
  undefined2 local_2a;
  int local_26;
  int local_24;
  int local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *****pppppuStack_18;
  undefined2 *******local_16;
  undefined2 ******ppppppuStack_14;
  undefined2 uStack_12;
  undefined2 *******pppppppuStack_10;
  undefined2 *****local_e;
  undefined2 *******local_c;
  undefined2 *******local_a;
  
  FUN_21f2_0ebc();
  local_68 = 0;
  local_66 = 0;
  local_2a = 10000;
  local_26 = 0;
  local_22 = 0;
  local_24 = 0;
  local_1e = 0;
  local_20 = 0;
  local_1c = CONCAT11(*(undefined1 *)0xa6a,1);
  local_1a = CONCAT11(local_1a._1_1_,*(undefined1 *)0xb310);
  local_46 = *(undefined2 *)0xa64c;
  uStack_44 = *(undefined2 *)0xa64e;
  uStack_42 = *(undefined2 *)0xa650;
  uStack_40 = *(undefined2 *)0xa652;
  local_a = (undefined2 *******)local_e0;
  local_c = (undefined2 *******)0x22b2;
  local_e = (undefined2 *****)0xabd6;
  func_0x00024c86();
  if (param_1 == 0) {
    local_38 = *(uint *)0x6b86;
  }
  else {
    local_a = (undefined2 *******)0xabee;
    func_0x00029834();
    local_a = (undefined2 *******)0xabf7;
    func_0x00029983();
    local_a = (undefined2 *******)0xabff;
    func_0x00029834();
    local_a = (undefined2 *******)0xac08;
    func_0x00029983();
    local_a = &local_f2;
    local_c = param_2;
    local_e = (undefined2 *****)0x22b2;
    pppppppuStack_10 = (undefined2 *******)0xac1a;
    iVar3 = func_0x00015409();
    if (iVar3 == 0) {
      return 0;
    }
    local_38 = 2;
    local_e6 = 0;
    if (param_1 == 2) {
      local_e6 = 1;
      local_fe = local_f2;
      local_fc = local_f0;
      local_a = (undefined2 *******)0xac54;
      func_0x000297e6();
      local_a = (undefined2 *******)0xac5d;
      func_0x00029bb5();
      local_a = (undefined2 *******)0xac65;
      func_0x00029983();
    }
  }
LAB_3ab8_00e5:
  local_a = (undefined2 *******)0xac6a;
  func_0x00013e19();
  uVar6 = 0x1b6e;
  local_a = (undefined2 *******)0xac6f;
  FUN_1885_2ec3();
  if (param_1 == 0) {
    local_e6 = 0;
  }
  do {
    do {
      if (param_1 != 0) goto LAB_3ab8_028d;
      local_a = (undefined2 *******)local_cc;
      local_e = (undefined2 *****)0xac92;
      local_c = (undefined2 *******)uVar6;
      func_0x00024c86();
      local_c6 = 0;
      local_a = (undefined2 *******)local_cc;
      local_c = (undefined2 *******)0x22b2;
      local_e = (undefined2 *****)0xaca8;
      FUN_21f2_2d26();
      local_a = (undefined2 *******)local_cc;
      local_c = (undefined2 *******)0x22b2;
      local_e = (undefined2 *****)0xacb8;
      FUN_21f2_2d26();
      local_a = (undefined2 *******)local_cc;
      local_c = (undefined2 *******)0x22b2;
      local_e = (undefined2 *****)0xacc8;
      FUN_21f2_2d26();
      local_a = (undefined2 *******)local_cc;
      local_c = (undefined2 *******)0x22b2;
      local_e = (undefined2 *****)0xacd8;
      FUN_21f2_2d26();
      local_a = (undefined2 *******)local_cc;
      local_c = (undefined2 *******)0x22b2;
      local_e = (undefined2 *****)0xace8;
      FUN_21f2_2d26();
      local_a = (undefined2 *******)local_cc;
      local_c = (undefined2 *******)0x22b2;
      local_e = (undefined2 *****)0xacf8;
      FUN_21f2_2d26();
      if (local_38 == 0) {
        local_a = (undefined2 *******)local_cc;
        local_c = (undefined2 *******)0x22b2;
        local_e = (undefined2 *****)0xad0e;
        FUN_21f2_2d26();
      }
      if (local_38 == 1) {
        local_a = (undefined2 *******)local_cc;
        local_c = (undefined2 *******)0x22b2;
        local_e = (undefined2 *****)0xad24;
        FUN_21f2_2d26();
      }
      if (local_38 == 2) {
        local_a = (undefined2 *******)local_cc;
        local_c = (undefined2 *******)0x22b2;
        local_e = (undefined2 *****)0xad3a;
        FUN_21f2_2d26();
      }
      local_a = (undefined2 *******)local_cc;
      local_c = (undefined2 *******)0x22b2;
      local_e = (undefined2 *****)0xad4a;
      FUN_21f2_2d26();
      if (local_e6 == 0) {
        local_a = (undefined2 *******)local_cc;
        local_c = (undefined2 *******)0x22b2;
        local_e = (undefined2 *****)0xad61;
        FUN_21f2_2d26();
      }
      local_e2 = *(undefined2 *)0xc2c;
      *(undefined2 *)0xc2c = 0;
      local_a = (undefined2 *******)&local_102;
      local_c = &local_f2;
      local_e = local_cc;
      *(undefined2 *)0xc20 = 1;
      pppppppuStack_10 = (undefined2 *******)0x1;
      uStack_12 = 0x22b2;
      uVar6 = 0x1bb4;
      ppppppuStack_14 = (undefined2 ******)0xad8f;
      local_3a = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xc26 = 0;
      *(undefined2 *)0xc2c = local_e2;
      if (*(int *)0x158 != 0) {
        return 0xfba9;
      }
      if (local_3a == -1) {
        return 0xffff;
      }
      if (local_3a == 1) {
        local_58 = (undefined2 *******)0x0;
        *(int *)0x6b86 = *(int *)0x6b86 + 1;
        if (2 < *(int *)0x6b86) {
          *(undefined2 *)0x6b86 = 0;
        }
        local_38 = *(uint *)0x6b86;
      }
      if (local_3a == 2) {
        local_e6 = 1;
      }
    } while (local_58 == (undefined2 *******)0x0);
    local_a = &local_f2;
    local_c = local_58;
    local_e = (undefined2 *****)0x1bb4;
    uVar6 = 0x11f2;
    pppppppuStack_10 = (undefined2 *******)0xae03;
    iVar3 = func_0x00015409();
  } while (iVar3 == 0);
LAB_3ab8_028d:
  local_36 = local_f2;
  local_34 = local_f0;
  local_32 = local_102;
  local_30 = local_100;
LAB_3ab8_02a9:
  local_a = (undefined2 *******)0xae2e;
  func_0x00013e19();
  uVar6 = 0x1b6e;
  local_a = (undefined2 *******)0xae33;
  FUN_1885_2ec3();
  do {
    do {
      do {
        if ((local_e6 == 0) || (param_1 != 0)) goto LAB_3ab8_03af;
        *(undefined2 *)0xc20 = 1;
        local_e2 = *(undefined2 *)0xc2c;
        *(undefined2 *)0xc2c = 0;
        local_a = (undefined2 *******)local_cc;
        local_e = (undefined2 *****)0xae65;
        local_c = (undefined2 *******)uVar6;
        func_0x00024c86();
        local_a = (undefined2 *******)local_cc;
        local_c = (undefined2 *******)0x22b2;
        local_e = (undefined2 *****)0xae75;
        FUN_21f2_2d26();
        local_a = (undefined2 *******)local_cc;
        local_c = (undefined2 *******)0x22b2;
        local_e = (undefined2 *****)0xae85;
        FUN_21f2_2d26();
        local_a = (undefined2 *******)local_cc;
        local_c = (undefined2 *******)0x22b2;
        local_e = (undefined2 *****)0xae95;
        FUN_21f2_2d26();
        local_a = (undefined2 *******)&local_e;
        local_c = &local_fe;
        local_e = local_cc;
        pppppppuStack_10 = (undefined2 *******)0x1;
        uStack_12 = 0x22b2;
        uVar6 = 0x1bb4;
        ppppppuStack_14 = (undefined2 ******)0xaeb2;
        local_3a = FUN_1def_0904();
        *(undefined2 *)0xc20 = 0;
        *(undefined2 *)0xc26 = 0;
        *(undefined2 *)0xc2c = local_e2;
        if (*(int *)0x158 != 0) {
          return 0xfba9;
        }
        if (local_3a == -1) goto LAB_3ab8_00e5;
      } while (local_58 == (undefined2 *******)0x0);
      local_a = &local_fe;
      local_c = local_58;
      local_e = (undefined2 *****)0x1bb4;
      uVar6 = 0x11f2;
      pppppppuStack_10 = (undefined2 *******)0xaef1;
      iVar3 = func_0x00015409();
      uVar7 = iVar3 == 0;
    } while ((bool)uVar7);
    local_a = (undefined2 *******)0xaf04;
    func_0x000297e6();
    local_a = (undefined2 *******)0xaf0d;
    func_0x000297e6();
    local_a = (undefined2 *******)0xaf12;
    FUN_28b3_1181();
    if (!(bool)uVar7) break;
    local_a = (undefined2 *******)0xaf1d;
    func_0x000297e6();
    local_a = (undefined2 *******)0xaf25;
    func_0x000297e6();
    uVar6 = 0x22b2;
    local_a = (undefined2 *******)0xaf2a;
    FUN_28b3_1181();
  } while ((bool)uVar7);
LAB_3ab8_03af:
  local_66 = 0;
  local_f6 = local_fe;
  local_f4 = local_fc;
LAB_3ab8_03d0:
  do {
    local_ea = *(undefined2 *)0xa658;
    local_e8 = *(undefined2 *)0xa65a;
    if (local_e6 != 0) {
      local_a = (undefined2 *******)0xaf71;
      func_0x000297e6();
      local_a = (undefined2 *******)0xaf7a;
      FUN_28b3_100d();
      local_a = (undefined2 *******)0xaf7f;
      func_0x00029d78();
      local_a = (undefined2 *******)0xaf88;
      func_0x000299b9();
      local_a = (undefined2 *******)0xaf90;
      func_0x000299d1();
      local_a = (undefined2 *******)0xaf99;
      func_0x000297e6();
      local_a = (undefined2 *******)0xafa2;
      FUN_28b3_100d();
      local_a = (undefined2 *******)0xafa7;
      func_0x00029d78();
      local_a = (undefined2 *******)0xafaf;
      func_0x000299b9();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      uStack_12 = 0xafb9;
      func_0x000299d1();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      uStack_12 = 0xafc2;
      func_0x00029834();
      pppppuStack_18 = (undefined2 *****)0x22b2;
      local_1a = 0xafcc;
      func_0x000299d1();
      pppppuStack_18 = (undefined2 *****)0x22b2;
      local_1a = 0xafd1;
      func_0x0002a178();
      local_a = (undefined2 *******)0xafdb;
      func_0x00029834();
      local_a = (undefined2 *******)0xafe3;
      func_0x00029c44();
      local_a = (undefined2 *******)0xafec;
      func_0x00029983();
    }
    if ((((local_e6 == 0) || (param_1 != 0)) && (*(int *)0xb6a == 0)) && (*(int *)0xcb6 != 0)) {
      local_a = (undefined2 *******)0xb010;
      func_0x000297e6();
      local_a = (undefined2 *******)0x22b2;
      local_c = (undefined2 *******)0xb01a;
      func_0x00029bb5();
      local_a = (undefined2 *******)0xb020;
      func_0x00029983();
    }
    local_a = (undefined2 *******)0xb029;
    func_0x000297e6();
    local_a = (undefined2 *******)0xb02e;
    func_0x00029d78();
    local_a = (undefined2 *******)0xb036;
    func_0x00029c2c();
    local_a = (undefined2 *******)0xb03f;
    func_0x000299b9();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    uStack_12 = 0xb049;
    func_0x000299d1();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    uStack_12 = 0xb04e;
    func_0x0002a11e();
    local_a = (undefined2 *******)0xb058;
    func_0x00029834();
    local_a = (undefined2 *******)0xb061;
    func_0x00029c2c();
    local_a = (undefined2 *******)0xb06a;
    func_0x00029bb5();
    local_a = (undefined2 *******)0xb073;
    func_0x00029983();
    local_a = (undefined2 *******)0xb07c;
    func_0x00029834();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    uStack_12 = 0xb086;
    func_0x000299d1();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    uStack_12 = 0xb08b;
    func_0x0002a10c();
    local_a = (undefined2 *******)0xb095;
    func_0x00029834();
    local_a = (undefined2 *******)0xb09e;
    func_0x00029c2c();
    local_a = (undefined2 *******)0xb0a7;
    func_0x00029bb5();
    local_a = (undefined2 *******)0xb0af;
    func_0x00029983();
    local_a = (undefined2 *******)0xb0b4;
    func_0x00013e19();
    local_a = (undefined2 *******)0xb0b9;
    FUN_1885_2ec3();
    local_fa = *(undefined2 *)0xa664;
    local_f8 = *(undefined2 *)0xa666;
    local_a = (undefined2 *******)0xb0cd;
    func_0x0000c340();
    local_a = (undefined2 *******)0xb0d2;
    func_0x0001bb4e();
    if ((local_e6 == 0) || (param_1 != 0)) {
      local_a = (undefined2 *******)local_11e;
      local_c = (undefined2 *******)0x1bb4;
      local_e = (undefined2 *****)0xb0fb;
      func_0x00024c86();
      local_a = (undefined2 *******)local_11e;
      local_c = (undefined2 *******)0x22b2;
      local_e = (undefined2 *****)0xb10b;
      FUN_21f2_2d26();
      local_a = (undefined2 *******)0x22b2;
      local_c = (undefined2 *******)0xb117;
      func_0x00012276();
      local_a = (undefined2 *******)0x11f2;
      local_c = (undefined2 *******)0xb12c;
      func_0x00012276();
      local_a = (undefined2 *******)0x11f2;
      local_c = (undefined2 *******)0xb136;
      func_0x00012276();
      local_a = (undefined2 *******)0x11f2;
      local_c = (undefined2 *******)0xb140;
      func_0x00012276();
      local_a = (undefined2 *******)0x11f2;
      local_c = (undefined2 *******)0xb14a;
      func_0x00012276();
      local_a = (undefined2 *******)0x11f2;
      local_c = (undefined2 *******)0xb154;
      func_0x00012276();
      local_a = (undefined2 *******)0x11f2;
      local_c = (undefined2 *******)0xb15f;
      func_0x00012276();
    }
    else {
      local_a = (undefined2 *******)0x1bb4;
      local_c = (undefined2 *******)0xb17a;
      func_0x00012276();
      local_a = (undefined2 *******)0x11f2;
      local_c = (undefined2 *******)0xb184;
      func_0x00012276();
      local_a = (undefined2 *******)0x11f2;
      local_c = (undefined2 *******)0xb18e;
      func_0x00012276();
    }
    local_a = (undefined2 *******)0x11f2;
    local_c = (undefined2 *******)0xb198;
    func_0x00012276();
    local_68 = 0;
    uVar6 = 0x11f2;
    while( true ) {
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xa4a = 1;
      local_e2 = *(undefined2 *)0xc2c;
      local_10a = 0;
      *(undefined2 *)0xc2c = 0;
      local_a = &local_16;
      local_c = &local_a;
      local_e = &local_120;
      pppppppuStack_10 = (undefined2 *******)local_11e;
      ppppppuStack_14 = (undefined2 ******)0xb1d2;
      uStack_12 = uVar6;
      local_3a = func_0x00006608();
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xc26 = 0;
      *(undefined2 *)0xc2c = local_e2;
      if (*(int *)0x158 != 0) {
        local_a = (undefined2 *******)0xb1f6;
        func_0x00013e19();
        local_a = (undefined2 *******)0xb1fb;
        FUN_1885_2ec3();
        return 0xfba9;
      }
      if (local_3a == -1) {
        local_a = (undefined2 *******)0xb209;
        func_0x00013e19();
        local_a = (undefined2 *******)0xb20e;
        FUN_1885_2ec3();
        if (param_1 != 0) {
          return 0xffff;
        }
        if (local_e6 == 0) goto LAB_3ab8_00e5;
        goto LAB_3ab8_02a9;
      }
      if (local_3a == 99) goto LAB_3ab8_03d0;
      if (((local_3a == 0x31) ||
          (((local_58 != (undefined2 *******)0x0 && (400 < (int)local_11e[0])) &&
           (((int)local_11e[0] < 0x1e0 && ((int)local_120 < 0x10)))))) &&
         ((local_e6 == 0 || (param_1 != 0)))) break;
      if ((int)local_120 < 0x10) {
        local_fa = *(undefined2 *)0xa668;
        local_f8 = *(undefined2 *)0xa66a;
        uVar6 = 0x3bf;
        if (local_68 != 0) {
          local_68 = 0;
          local_a = (undefined2 *******)0xb29c;
          func_0x00013e19();
          local_a = (undefined2 *******)0xb2a1;
          FUN_1885_2ec3();
          uVar6 = 0x1b6e;
        }
      }
      else {
        uVar7 = local_58 == (undefined2 *******)0x0;
        if (!(bool)uVar7) {
          local_a = &local_a;
          local_c = local_58;
          local_e = (undefined2 *****)0x3bf;
          pppppppuStack_10 = (undefined2 *******)0xb2ba;
          iVar3 = func_0x00015409();
          uVar7 = iVar3 == 0;
          if (!(bool)uVar7) {
            local_a = (undefined2 *******)0xb2ca;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb2d2;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb2d7;
            FUN_28b3_1181();
            if ((bool)uVar7) {
              local_a = (undefined2 *******)0xb2e2;
              func_0x000297e6();
              local_a = (undefined2 *******)0xb2ea;
              func_0x000297e6();
              local_a = (undefined2 *******)0xb2ef;
              FUN_28b3_1181();
              if ((bool)uVar7) goto LAB_3ab8_0786;
            }
            local_fa = *(undefined2 *)0xa668;
            local_f8 = *(undefined2 *)0xa66a;
            local_10a = 1;
          }
        }
LAB_3ab8_0786:
        local_a = (undefined2 *******)0xb30e;
        func_0x000297e6();
        local_a = (undefined2 *******)0xb317;
        FUN_28b3_100d();
        local_a = (undefined2 *******)0xb31c;
        func_0x00029d78();
        local_a = (undefined2 *******)0xb324;
        func_0x000299b9();
        local_a = (undefined2 *******)0xb32c;
        FUN_28b3_0ee9();
        local_a = (undefined2 *******)0xb335;
        func_0x00029834();
        local_a = (undefined2 *******)0xb33d;
        func_0x000297e6();
        local_a = (undefined2 *******)0xb346;
        FUN_28b3_100d();
        local_a = (undefined2 *******)0xb34b;
        func_0x00029d78();
        local_a = (undefined2 *******)0xb353;
        func_0x000299b9();
        local_a = (undefined2 *******)0xb358;
        FUN_28b3_1181();
        if ((bool)uVar7) {
          local_a = (undefined2 *******)0xb363;
          func_0x00029834();
          local_a = (undefined2 *******)0xb36b;
          func_0x00029834();
          local_a = (undefined2 *******)0xb370;
          FUN_28b3_1181();
          if (!(bool)uVar7) goto LAB_3ab8_07f2;
          local_ee = local_ea;
          local_ec = local_e8;
        }
        else {
LAB_3ab8_07f2:
          local_a = (undefined2 *******)local_52;
          local_c = local_54;
          local_e = local_56;
          pppppppuStack_10 = (undefined2 *******)local_5a;
          uStack_12 = local_5c;
          ppppppuStack_14 = (undefined2 ******)local_5e;
          local_16 = local_60;
          pppppuStack_18 = (undefined2 *****)0x22b2;
          local_1a = 0xb38f;
          func_0x0002a178();
          local_a = (undefined2 *******)0xb399;
          func_0x00029834();
          local_a = (undefined2 *******)0xb3a2;
          func_0x00029c2c();
          local_a = (undefined2 *******)0xb3ab;
          func_0x00029983();
        }
        local_a = (undefined2 *******)0xb3c6;
        func_0x000297e6();
        local_a = (undefined2 *******)0xb3cf;
        FUN_28b3_100d();
        local_a = (undefined2 *******)0xb3d8;
        func_0x0002996b();
        local_a = (undefined2 *******)0xb3e0;
        func_0x00029983();
        if (local_58 == (undefined2 *******)0x2) {
          uVar7 = 0;
          uVar8 = 1;
        }
        else {
          if (local_38 == 1) {
            local_a = (undefined2 *******)0xb3f8;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb401;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb406;
            FUN_28b3_1181();
            local_a = (undefined2 *******)0xb417;
            func_0x00029834();
            local_a = (undefined2 *******)0xb420;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb425;
            func_0x00029d78();
            local_a = (undefined2 *******)0xb42a;
            FUN_28b3_117c();
            local_a = (undefined2 *******)0xb42f;
            FUN_28b3_0f51();
            local_a = (undefined2 *******)0xb43c;
            FUN_28b3_0d8b();
            local_a = (undefined2 *******)0xb444;
            func_0x00029983();
          }
          uVar7 = local_38 < 2;
          uVar8 = local_38 == 2;
          if ((bool)uVar8) {
            local_a = (undefined2 *******)0xb453;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb45b;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb460;
            FUN_28b3_1181();
            local_a = (undefined2 *******)0xb471;
            func_0x00029834();
            local_a = (undefined2 *******)0xb47b;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb484;
            func_0x00029b6d();
            local_a = (undefined2 *******)0xb489;
            func_0x00029d78();
            local_a = (undefined2 *******)0xb48e;
            FUN_28b3_117c();
            local_a = (undefined2 *******)0xb493;
            iVar3 = FUN_28b3_0f51();
            uVar7 = (long)(int)((long)iVar3 * 5) != (long)iVar3 * 5;
            local_a = (undefined2 *******)0xb4a5;
            FUN_28b3_0d8b();
            local_a = (undefined2 *******)0xb4ad;
            func_0x00029983();
          }
        }
        local_a = (undefined2 *******)0xb4b6;
        func_0x000297e6();
        local_a = (undefined2 *******)0xb4be;
        func_0x000297e6();
        local_a = (undefined2 *******)0xb4c3;
        FUN_28b3_1181();
        if (!(bool)uVar7 && !(bool)uVar8) {
          local_a = (undefined2 *******)0xb4ce;
          func_0x000297e6();
          local_a = (undefined2 *******)0x22b2;
          local_c = (undefined2 *******)0xb4d7;
          func_0x00029b55();
          local_a = (undefined2 *******)0xb4dd;
          func_0x00029983();
        }
        local_a = (undefined2 *******)0xb4e6;
        func_0x000297e6();
        local_a = (undefined2 *******)0xb4ee;
        func_0x000297e6();
        local_a = (undefined2 *******)0xb4f3;
        FUN_28b3_1181();
        if ((bool)uVar7 || (bool)uVar8) {
          local_a = (undefined2 *******)0xb4fe;
          func_0x000297e6();
          local_a = (undefined2 *******)0x22b2;
          local_c = (undefined2 *******)0xb507;
          func_0x00029bb5();
          local_a = (undefined2 *******)0xb50d;
          func_0x00029983();
        }
        local_a = (undefined2 *******)0xb516;
        func_0x000297e6();
        local_a = (undefined2 *******)0xb51e;
        func_0x000297e6();
        local_a = (undefined2 *******)0xb523;
        FUN_28b3_1181();
        uVar6 = 0x22b2;
        if (!(bool)uVar8) {
          local_a = (undefined2 *******)0xb530;
          func_0x000297e6();
          local_a = (undefined2 *******)0xb539;
          func_0x00029983();
          local_68 = 1;
          local_a = (undefined2 *******)0xb546;
          func_0x00029834();
          local_a = (undefined2 *******)0xb54e;
          func_0x00029c2c();
          local_a = (undefined2 *******)0xb556;
          func_0x00029834();
          local_a = (undefined2 *******)0xb55e;
          func_0x00029c2c();
          local_a = (undefined2 *******)0xb563;
          FUN_28b3_117c();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          uStack_12 = 0xb56d;
          func_0x000299d1();
          pppppppuStack_10 = (undefined2 *******)0x22b2;
          uStack_12 = 0xb572;
          FUN_28b3_1582();
          uVar7 = (undefined1 *)0xfff7 < &local_e;
          uVar8 = &stack0x0000 == (undefined1 *)0x6;
          local_a = (undefined2 *******)0xb57c;
          func_0x00029834();
          local_a = (undefined2 *******)0xb584;
          func_0x00029983();
          local_a = (undefined2 *******)0xb58d;
          func_0x000297e6();
          local_a = (undefined2 *******)0xb595;
          func_0x000297e6();
          local_a = (undefined2 *******)0xb59a;
          FUN_28b3_1181();
          if ((bool)uVar7 || (bool)uVar8) {
            local_a = (undefined2 *******)0xb61e;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb627;
            func_0x00029bb5();
            local_a = (undefined2 *******)0xb630;
            func_0x00029b6d();
            local_a = (undefined2 *******)0xb635;
            func_0x00029d78();
            local_a = (undefined2 *******)0xb63a;
            local_4e = FUN_28b3_0f51();
            local_a = (undefined2 *******)0xb649;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb652;
            func_0x00029b6d();
            local_a = (undefined2 *******)0xb657;
            func_0x00029d78();
            local_a = (undefined2 *******)0xb65c;
            local_64 = FUN_28b3_0f51();
            local_a = (undefined2 *******)0xb66b;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb674;
            func_0x00029bb5();
            local_a = (undefined2 *******)0xb67c;
            func_0x00029983();
            local_a = (undefined2 *******)0xb685;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb68e;
            func_0x00029bb5();
          }
          else {
            local_a = (undefined2 *******)0xb5a5;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb5ae;
            func_0x00029b6d();
            local_a = (undefined2 *******)0xb5b3;
            func_0x00029d78();
            local_a = (undefined2 *******)0xb5b8;
            local_4e = FUN_28b3_0f51();
            local_a = (undefined2 *******)0xb5c6;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb5cf;
            func_0x00029bb5();
            local_a = (undefined2 *******)0xb5d8;
            func_0x00029b6d();
            local_a = (undefined2 *******)0xb5dd;
            func_0x00029d78();
            local_a = (undefined2 *******)0xb5e2;
            local_64 = FUN_28b3_0f51();
            local_a = (undefined2 *******)0xb5f1;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb5fa;
            FUN_28b3_100d();
            local_a = (undefined2 *******)0xb602;
            func_0x00029983();
            local_a = (undefined2 *******)0xb60b;
            func_0x000297e6();
            local_a = (undefined2 *******)0xb614;
            FUN_28b3_100d();
          }
          local_a = (undefined2 *******)0xb696;
          func_0x00029983();
          for (; 0x167 < local_4e._2_2_; local_4e._2_2_ = local_4e._2_2_ + -0x168) {
          }
          for (; local_4e._2_2_ < 0; local_4e._2_2_ = local_4e._2_2_ + 0x168) {
          }
          for (; 0x167 < local_64._2_2_; local_64._2_2_ = local_64._2_2_ + -0x168) {
          }
          for (; local_64._2_2_ < 0; local_64._2_2_ = local_64._2_2_ + 0x168) {
          }
          local_a = (undefined2 *******)0xb6e1;
          func_0x00013e19();
          local_a = (undefined2 *******)0xb6e6;
          FUN_1885_2ec3();
          local_a = (undefined2 *******)0x1b6e;
          local_c = (undefined2 *******)0xb6f1;
          func_0x000297e6();
          local_a = (undefined2 *******)0x22b2;
          local_c = (undefined2 *******)0xb6f6;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          ppppppuStack_14 = (undefined2 ******)0xb700;
          func_0x000299d1();
          uStack_12 = 0x22b2;
          ppppppuStack_14 = (undefined2 ******)0xb709;
          func_0x000297e6();
          uStack_12 = 0x22b2;
          ppppppuStack_14 = (undefined2 ******)0xb70e;
          func_0x00029d78();
          local_1a = 0x22b2;
          local_1c = 0xb718;
          func_0x000299d1();
          local_1a = 0x22b2;
          local_1c = 0xb721;
          func_0x000297e6();
          local_1a = 0x22b2;
          local_1c = 0xb726;
          func_0x00029d78();
          local_22 = 0x22b2;
          local_24 = 0xb730;
          func_0x000299d1();
          local_22 = 0x22b2;
          local_24 = 0xb739;
          func_0x000297e6();
          local_22 = 0x22b2;
          local_24 = -0x48c2;
          func_0x00029d78();
          local_2a = 0x22b2;
          uStack_2c = 0xb748;
          func_0x000299d1();
          local_2a = 0x22b2;
          uStack_2c = 0xb74d;
          func_0x0001e18f();
          uVar7 = (undefined1 *)0xffdd < &stack0xffd8;
          local_a = (undefined2 *******)0xb759;
          func_0x00029834();
          local_a = (undefined2 *******)0xb761;
          func_0x000297e6();
          local_a = (undefined2 *******)0xb766;
          func_0x00029d78();
          local_a = (undefined2 *******)0xb76b;
          FUN_28b3_1181();
          uVar6 = 0x22b2;
          if (!(bool)uVar7) {
            uVar7 = (int)local_4e == (int)local_64;
            if (((bool)uVar7) && (uVar7 = local_4e._2_2_ == local_64._2_2_, (bool)uVar7)) {
LAB_3ab8_0c18:
              uVar6 = 0x22b2;
            }
            else {
              local_a = (undefined2 *******)0xb789;
              func_0x000297e6();
              local_a = (undefined2 *******)0xb791;
              func_0x000297e6();
              local_a = (undefined2 *******)0xb796;
              FUN_28b3_1181();
              if ((bool)uVar7) goto LAB_3ab8_0c18;
              local_a = (undefined2 *******)0xb7a3;
              func_0x000297e6();
              local_a = (undefined2 *******)0xb7ac;
              func_0x00029bb5();
              local_a = (undefined2 *******)0xb7b1;
              func_0x00029d78();
              local_a = (undefined2 *******)0xb7b9;
              func_0x00029c2c();
              local_a = (undefined2 *******)0xb7c2;
              func_0x0002996b();
              local_a = (undefined2 *******)0xb7cb;
              func_0x00029983();
              local_a = (undefined2 *******)0xb7d4;
              func_0x000297e6();
              local_a = (undefined2 *******)0xb7d9;
              func_0x00029d78();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              uStack_12 = 0xb7e3;
              func_0x000299d1();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              uStack_12 = 0xb7e8;
              func_0x0002a11e();
              local_a = (undefined2 *******)0xb7f2;
              func_0x00029834();
              local_a = (undefined2 *******)0xb7fa;
              func_0x00029b6d();
              local_a = (undefined2 *******)0xb803;
              func_0x00029bb5();
              local_a = (undefined2 *******)0xb80b;
              func_0x00029983();
              local_a = (undefined2 *******)0xb814;
              func_0x000297e6();
              local_a = (undefined2 *******)0xb819;
              func_0x00029d78();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              uStack_12 = 0xb823;
              func_0x000299d1();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              uStack_12 = 0xb828;
              func_0x0002a10c();
              local_a = (undefined2 *******)0xb832;
              func_0x00029834();
              local_a = (undefined2 *******)0xb83a;
              func_0x00029b6d();
              local_a = (undefined2 *******)0xb843;
              func_0x00029bb5();
              local_a = (undefined2 *******)0xb84b;
              func_0x00029983();
              local_a = (undefined2 *******)0x22b2;
              local_c = (undefined2 *******)0xb856;
              func_0x000297e6();
              local_a = (undefined2 *******)0x22b2;
              local_c = (undefined2 *******)0xb85b;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              ppppppuStack_14 = (undefined2 ******)0xb865;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              ppppppuStack_14 = (undefined2 ******)0xb86d;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              ppppppuStack_14 = (undefined2 ******)0xb872;
              func_0x00029d78();
              local_1a = 0x22b2;
              local_1c = 0xb87c;
              func_0x000299d1();
              local_1a = 0x22b2;
              local_1c = 0xb885;
              func_0x000297e6();
              local_1a = 0x22b2;
              local_1c = 0xb88a;
              func_0x00029d78();
              local_22 = 0x22b2;
              local_24 = 0xb894;
              func_0x000299d1();
              local_22 = 0x22b2;
              local_24 = 0xb89d;
              func_0x000297e6();
              local_22 = 0x22b2;
              local_24 = 0xb8a2;
              func_0x00029d78();
              local_2a = 0x22b2;
              uStack_2c = 0xb8ac;
              func_0x000299d1();
              local_2a = 0x22b2;
              uStack_2c = 0xb8b1;
              func_0x0001e18f();
              if (local_66 != 0) {
                uVar7 = 0;
                if ((*(int *)0xb6a == 0) && (uVar7 = 0, *(int *)0xcb6 != 0)) {
                  local_a = (undefined2 *******)0xb8f2;
                  func_0x000297e6();
                  local_a = (undefined2 *******)0x22b2;
                  local_c = (undefined2 *******)0xb8fc;
                  func_0x00029bb5();
                  local_a = (undefined2 *******)0xb902;
                  func_0x00029983();
                }
                local_a = (undefined2 *******)0xb90b;
                func_0x000297e6();
                local_a = (undefined2 *******)0xb914;
                func_0x00029bb5();
                local_a = (undefined2 *******)0xb91c;
                func_0x0002996b();
                local_a = (undefined2 *******)0xb924;
                FUN_28b3_0ee9();
                local_a = (undefined2 *******)0xb92d;
                func_0x000297e6();
                local_a = (undefined2 *******)0xb936;
                func_0x00029bb5();
                local_a = (undefined2 *******)0xb93e;
                func_0x0002996b();
                local_a = (undefined2 *******)0xb946;
                FUN_28b3_0ee9();
                local_a = (undefined2 *******)0xb94f;
                func_0x000297e6();
                local_a = (undefined2 *******)0xb957;
                func_0x000297e6();
                local_a = (undefined2 *******)0xb95c;
                FUN_28b3_1181();
                if ((bool)uVar7) {
                  local_a = (undefined2 *******)0xb966;
                  func_0x000297e6();
                  local_a = (undefined2 *******)0xb96f;
                  func_0x00029bb5();
                  local_a = (undefined2 *******)0xb977;
                  func_0x00029983();
                  local_a = (undefined2 *******)0xb97f;
                  func_0x000297e6();
                  local_a = (undefined2 *******)0xb988;
                  func_0x00029bb5();
                  local_a = (undefined2 *******)0xb990;
                  func_0x00029983();
                }
                local_a = (undefined2 *******)0xb999;
                func_0x000297e6();
                local_a = (undefined2 *******)0xb99e;
                func_0x00029d78();
                local_a = (undefined2 *******)0xb9a6;
                func_0x00029c2c();
                local_a = (undefined2 *******)0xb9af;
                func_0x000299b9();
                pppppppuStack_10 = (undefined2 *******)0x22b2;
                uStack_12 = 0xb9b9;
                func_0x000299d1();
                pppppppuStack_10 = (undefined2 *******)0x22b2;
                uStack_12 = 0xb9be;
                func_0x0002a11e();
                local_a = (undefined2 *******)0xb9c8;
                func_0x00029834();
                local_a = (undefined2 *******)0xb9d0;
                func_0x00029b6d();
                local_a = (undefined2 *******)0xb9d9;
                func_0x00029bb5();
                local_a = (undefined2 *******)0xb9e1;
                func_0x00029983();
                local_a = (undefined2 *******)0xb9ea;
                func_0x00029834();
                pppppppuStack_10 = (undefined2 *******)0x22b2;
                uStack_12 = 0xb9f4;
                func_0x000299d1();
                pppppppuStack_10 = (undefined2 *******)0x22b2;
                uStack_12 = 0xb9f9;
                func_0x0002a10c();
                local_a = (undefined2 *******)0xba03;
                func_0x00029834();
                local_a = (undefined2 *******)0xba0b;
                func_0x00029b6d();
                local_a = (undefined2 *******)0xba14;
                func_0x00029bb5();
                local_a = (undefined2 *******)0xba1c;
                func_0x00029983();
              }
              local_a = (undefined2 *******)0xba24;
              func_0x000297e6();
              local_a = (undefined2 *******)0xba29;
              func_0x00029d78();
              local_a = (undefined2 *******)0xba31;
              func_0x00029c2c();
              local_a = (undefined2 *******)0xba3a;
              func_0x000299b9();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              uStack_12 = 0xba44;
              func_0x000299d1();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              uStack_12 = 0xba49;
              func_0x0002a11e();
              local_a = (undefined2 *******)0xba53;
              func_0x00029834();
              local_a = (undefined2 *******)0xba5c;
              func_0x00029b85();
              local_a = (undefined2 *******)0xba65;
              func_0x00029c2c();
              local_a = (undefined2 *******)0xba6d;
              func_0x00029bb5();
              local_a = (undefined2 *******)0xba75;
              func_0x000299d1();
              local_a = (undefined2 *******)0xba7e;
              func_0x00029834();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              uStack_12 = 0xba88;
              func_0x000299d1();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              uStack_12 = 0xba8d;
              func_0x0002a10c();
              local_a = (undefined2 *******)0xba97;
              func_0x00029834();
              local_a = (undefined2 *******)0xbaa0;
              func_0x00029b85();
              local_a = (undefined2 *******)0xbaa9;
              func_0x00029c2c();
              local_a = (undefined2 *******)0xbab1;
              func_0x00029bb5();
              local_a = (undefined2 *******)0xbab9;
              func_0x000299d1();
              local_a = (undefined2 *******)local_5a;
              local_c = (undefined2 *******)local_5c;
              local_e = local_5e;
              pppppppuStack_10 = local_60;
              uStack_12 = local_50;
              ppppppuStack_14 = local_52;
              local_16 = local_54;
              pppppuStack_18 = local_56;
              local_1a = 0x22b2;
              local_1c = 0xbadc;
              func_0x000297e6();
              local_1a = 0x22b2;
              local_1c = 0xbae1;
              func_0x00029d78();
              local_22 = 0x22b2;
              local_24 = 0xbaeb;
              func_0x000299d1();
              local_22 = 0x22b2;
              local_24 = 0xbaf3;
              func_0x000297e6();
              local_22 = 0x22b2;
              local_24 = 0xbaf8;
              func_0x00029d78();
              local_2a = 0x22b2;
              uStack_2c = 0xbb02;
              func_0x000299d1();
              local_2a = 0x22b2;
              uStack_2c = 0xbb07;
              func_0x0001e18f();
              local_a = (undefined2 *******)0xbb12;
              func_0x000297e6();
              local_a = (undefined2 *******)0xbb17;
              func_0x00029d78();
              local_a = (undefined2 *******)0xbb1f;
              func_0x00029c2c();
              local_a = (undefined2 *******)0xbb28;
              func_0x000299b9();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              uStack_12 = 0xbb32;
              func_0x000299d1();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              uStack_12 = 0xbb37;
              func_0x0002a11e();
              local_a = (undefined2 *******)0xbb41;
              func_0x00029834();
              local_a = (undefined2 *******)0xbb4a;
              func_0x00029b85();
              local_a = (undefined2 *******)0xbb53;
              func_0x00029c2c();
              local_a = (undefined2 *******)0xbb5b;
              func_0x00029bb5();
              local_a = (undefined2 *******)0xbb63;
              func_0x000299d1();
              local_a = (undefined2 *******)0xbb6c;
              func_0x00029834();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              uStack_12 = 0xbb76;
              func_0x000299d1();
              pppppppuStack_10 = (undefined2 *******)0x22b2;
              uStack_12 = 0xbb7b;
              func_0x0002a10c();
              local_a = (undefined2 *******)0xbb85;
              func_0x00029834();
              local_a = (undefined2 *******)0xbb8e;
              func_0x00029b85();
              local_a = (undefined2 *******)0xbb97;
              func_0x00029c2c();
              local_a = (undefined2 *******)0xbb9f;
              func_0x00029bb5();
              local_a = (undefined2 *******)0xbba7;
              func_0x000299d1();
              local_a = (undefined2 *******)local_5a;
              local_c = (undefined2 *******)local_5c;
              local_e = local_5e;
              pppppppuStack_10 = local_60;
              uStack_12 = local_50;
              ppppppuStack_14 = local_52;
              local_16 = local_54;
              pppppuStack_18 = local_56;
              local_1a = 0x22b2;
              local_1c = 0xbbca;
              func_0x000297e6();
              local_1a = 0x22b2;
              local_1c = 0xbbcf;
              func_0x00029d78();
              local_22 = 0x22b2;
              local_24 = 0xbbd9;
              func_0x000299d1();
              local_22 = 0x22b2;
              local_24 = 0xbbe1;
              func_0x000297e6();
              local_22 = 0x22b2;
              local_24 = 0xbbe6;
              func_0x00029d78();
              local_2a = 0x22b2;
              uStack_2c = 0xbbf0;
              func_0x000299d1();
              local_2a = 0x22b2;
              uStack_2c = 0xbbf5;
              func_0x0001e18f();
              local_26 = local_4e._2_2_;
              local_24 = (int)local_64;
              local_22 = local_64._2_2_;
              local_1c = 0x901;
              piVar5 = &local_26;
              ppppppuVar4 = &local_36;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                puVar2 = piVar5;
                piVar5 = piVar5 + 1;
                ppppppuVar1 = ppppppuVar4;
                ppppppuVar4 = ppppppuVar4 + 1;
                *puVar2 = *ppppppuVar1;
              }
              uVar6 = 0x11f2;
              local_2a = 0xbc2c;
              func_0x00013e46();
            }
            if (local_10a != 0) {
              local_a = (undefined2 *******)0xbc3b;
              func_0x00013e19();
              uVar6 = 0x1b6e;
              local_a = (undefined2 *******)0xbc40;
              FUN_1885_2ec3();
            }
            if (local_66 != 0) {
              local_a = (undefined2 *******)0xbc4e;
              func_0x000297e6();
              local_a = (undefined2 *******)0xbc53;
              func_0x00029af6();
              uVar6 = 0x22b2;
              local_a = (undefined2 *******)0xbc5b;
              func_0x00029983();
            }
            local_a = (undefined2 *******)0x3e;
            local_e = (undefined2 *****)0xbc6a;
            local_c = (undefined2 *******)uVar6;
            FUN_1000_0599();
            local_a = (undefined2 *******)0xbc74;
            func_0x000297e6();
            local_a = (undefined2 *******)0xbc79;
            func_0x00029d78();
            pppppppuStack_10 = (undefined2 *******)0x22b2;
            uStack_12 = 0xbc83;
            func_0x000299d1();
            pppppppuStack_10 = (undefined2 *******)0x6b76;
            uStack_12 = 0x22b2;
            ppppppuStack_14 = (undefined2 ******)0xbc8c;
            func_0x00012276();
            uVar6 = 0x11f2;
            if (local_10a != 0) {
              *(undefined2 *)0xc22 = 1;
              local_a = (undefined2 *******)0xbca4;
              func_0x00013e19();
              local_a = (undefined2 *******)0xbca9;
              FUN_1885_2ec3();
              return 1;
            }
          }
        }
      }
    }
    if (local_66 == 0) {
      local_66 = 1;
    }
    else {
      local_66 = 0;
    }
  } while( true );
}



/* 3ab8:1132  FUN_3ab8_1132  91 bytes, 2 callers */

void __cdecl16far FUN_3ab8_1132(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  FUN_21f2_0ebc();
  func_0x0000c340(0x22b2);
  func_0x00010526(0x885);
  uVar1 = 0xdef;
  FUN_1000_0599(0xdef,0x11,1);
  if (param_1 == 0) {
    uVar1 = 0x11f2;
    func_0x00012276(0xdef,0x60a);
  }
  uVar2 = uVar1;
  if (param_1 == 1) {
    uVar2 = 0x11f2;
    func_0x00012276(uVar1,0x600);
  }
  func_0x00012276(uVar2,0x6b88);
  func_0x00012276(0x11f2,0x33c);
  return;
}



/* 3ab8:118d  FUN_3ab8_118d  869 bytes, 2 callers */

void __cdecl16far FUN_3ab8_118d(int param_1)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  undefined4 uVar10;
  undefined2 *puVar11;
  undefined1 local_6e [4];
  int local_6a;
  undefined2 local_68 [12];
  int local_50;
  uint local_4e;
  int local_4c;
  int local_4a;
  undefined2 local_48;
  undefined2 local_46 [13];
  undefined1 local_2b;
  undefined2 uStack_28;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 auStack_1e [2];
  undefined2 local_1a [3];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  int iVar12;
  
  FUN_21f2_0ebc();
  do {
    uVar8 = 0x885;
    puStack_c = (undefined1 *)0xbd22;
    func_0x0000daa6();
    if (param_1 == 0) {
      local_6a = *(int *)0xb310;
      iVar12 = 1;
    }
    else {
      uVar5 = (int)*(uint *)0xb310 >> 0xf;
      local_6a = ((int)((*(uint *)0xb310 ^ uVar5) - uVar5) >> 4 ^ uVar5) - uVar5;
      iVar12 = 0x10;
    }
    local_4e = 1;
    local_4c = 0;
    while( true ) {
      if ((*(int *)0x14a < local_4c) || ((*(int *)0x14a <= local_4c && (*(uint *)0x148 < local_4e)))
         ) break;
      uStack_e = 0xbd97;
      puStack_c = (undefined1 *)uVar8;
      uVar10 = func_0x0000013f();
      if ((int)((ulong)*(byte *)((int)uVar10 + 0x12) / (ulong)(long)iVar12) == local_6a) {
        puStack_c = (undefined1 *)0x0;
        uStack_e = 0xbdb7;
        uVar10 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar10 + 0x14);
        *pbVar1 = *pbVar1 | 2;
        puStack_c = (undefined1 *)0x0;
        uStack_e = 0xbdcd;
        puVar11 = (undefined2 *)func_0x0000013f();
        puVar6 = (undefined2 *)puVar11;
        puVar7 = local_1a;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
        puVar6 = auStack_1e;
        puVar7 = local_1a;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar11 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar11;
        }
        uStack_20 = 0;
        uVar8 = 0x11f2;
        uStack_22 = 0xbdf8;
        func_0x00018396();
      }
      else {
        puStack_c = (undefined1 *)0x0;
        uVar8 = 0;
        uStack_e = 0xbd66;
        uVar10 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar10 + 0x14);
        *pbVar1 = *pbVar1 & 0xfd;
      }
      bVar9 = 0xfffe < local_4e;
      local_4e = local_4e + 1;
      local_4c = local_4c + (uint)bVar9;
    }
    local_4c = 0;
    for (local_4e = 1;
        (local_4c <= *(int *)0x14e && ((local_4c < *(int *)0x14e || (local_4e <= *(uint *)0x14c))));
        local_4e = local_4e + 1) {
      uStack_e = 0xbe43;
      puStack_c = (undefined1 *)uVar8;
      uVar10 = func_0x00000271();
      if ((int)((ulong)*(byte *)((int)uVar10 + 0x1c) / (ulong)(long)iVar12) == local_6a) {
        puStack_c = (undefined1 *)0x0;
        uStack_e = 0xbe63;
        uVar10 = func_0x00000271();
        pbVar1 = (byte *)((int)uVar10 + 0x1e);
        *pbVar1 = *pbVar1 | 2;
        puStack_c = (undefined1 *)0x0;
        uStack_e = 0xbe79;
        puVar11 = (undefined2 *)func_0x00000271();
        puVar6 = (undefined2 *)puVar11;
        puVar7 = local_46;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
        local_2b = 7;
        puVar6 = &uStack_24;
        puVar7 = local_46;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar11 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar11;
        }
        local_26 = 0;
        uVar8 = 0x11f2;
        uStack_28 = 0xbea1;
        FUN_12c1_0f1d();
      }
      else {
        puStack_c = (undefined1 *)0x0;
        uVar8 = 0;
        uStack_e = 0xbe15;
        uVar10 = func_0x00000271();
        pbVar1 = (byte *)((int)uVar10 + 0x1e);
        *pbVar1 = *pbVar1 & 0xfd;
      }
      local_4c = local_4c + (uint)(0xfffe < local_4e);
    }
    for (local_50 = 1; local_50 <= *(int *)0x152; local_50 = local_50 + 1) {
      puStack_c = (undefined1 *)0xbed3;
      uVar10 = func_0x000003ef();
      if ((int)((ulong)*(byte *)((int)uVar10 + 8) / (ulong)(long)iVar12) == local_6a) {
        puStack_c = (undefined1 *)0xbeef;
        uVar10 = func_0x000003ef();
        pbVar1 = (byte *)((int)uVar10 + 10);
        *pbVar1 = *pbVar1 | 2;
        puStack_c = (undefined1 *)0xbf01;
        puVar11 = (undefined2 *)func_0x000003ef();
        puVar6 = (undefined2 *)puVar11;
        puVar7 = &local_26;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
        puStack_c = (undefined1 *)0x0;
        uStack_e = 0xbf1e;
        func_0x0001f185();
        uVar8 = 0x885;
        puStack_c = (undefined1 *)0xbf28;
        func_0x0000daa6();
      }
      else {
        uVar8 = 0;
        puStack_c = (undefined1 *)0xbeb6;
        uVar10 = func_0x000003ef();
        pbVar1 = (byte *)((int)uVar10 + 10);
        *pbVar1 = *pbVar1 & 0xfd;
      }
    }
    for (local_50 = 1; local_50 <= *(int *)0x150; local_50 = local_50 + 1) {
      puStack_c = (undefined1 *)0xbf5a;
      uVar10 = func_0x00000398();
      if ((int)((ulong)*(byte *)((int)uVar10 + 0x15) / (ulong)(long)iVar12) == local_6a) {
        puStack_c = (undefined1 *)0xbf76;
        uVar10 = func_0x00000398();
        pbVar1 = (byte *)((int)uVar10 + 0x16);
        *pbVar1 = *pbVar1 | 2;
        puStack_c = (undefined1 *)0xbf88;
        puVar11 = (undefined2 *)func_0x00000398();
        puVar6 = (undefined2 *)puVar11;
        puVar7 = local_68;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
        puVar6 = auStack_1e;
        puVar7 = local_68;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar11 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar11;
        }
        uStack_20 = 0xffff;
        uStack_22 = 0;
        uStack_24 = 0xbfaf;
        func_0x00019593();
        uVar8 = 0x885;
        puStack_c = (undefined1 *)0xbfba;
        func_0x0000daa6();
      }
      else {
        uVar8 = 0;
        puStack_c = (undefined1 *)0xbf3a;
        uVar10 = func_0x00000398();
        pbVar1 = (byte *)((int)uVar10 + 0x16);
        *pbVar1 = *pbVar1 & 0xfd;
      }
    }
    while( true ) {
      if (*(byte *)0x123 < 0x14) {
        return;
      }
      uStack_e = 0xbfca;
      puStack_c = (undefined1 *)uVar8;
      func_0x00024c86();
      puStack_c = (undefined1 *)0x22b2;
      uStack_e = 0xbfd9;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      uStack_e = 0xbfe8;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      uStack_e = 0xbff7;
      FUN_21f2_2d26();
      *(undefined1 *)0xbf5d = 0;
      puStack_c = (undefined1 *)0x22b2;
      uStack_e = 0xc00b;
      FUN_21f2_2d26();
      local_48 = *(undefined2 *)0xc2c;
      *(undefined2 *)0xc26 = 0;
      *(undefined2 *)0xc2c = 0;
      puStack_c = local_6e;
      uStack_e = 0xbf48;
      uStack_10 = 9999;
      uStack_12 = 0x22b2;
      uVar8 = 0x1bb4;
      uStack_14 = 0xc034;
      iVar12 = FUN_1def_0904();
      *(undefined2 *)0xc26 = 1;
      *(undefined2 *)0xc2c = local_48;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (iVar12 == 99) break;
      if ((iVar12 != 0) || (local_50 = 0, local_4a != 0)) {
        return;
      }
    }
    local_50 = 99;
  } while( true );
}



/* 3ab8:14f2  FUN_3ab8_14f2  1144 bytes, 4 callers */

undefined2 __cdecl16far FUN_3ab8_14f2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_240;
  undefined2 ****local_23e [10];
  int local_22a;
  int local_228;
  int local_226;
  int local_224;
  int local_222;
  undefined2 local_220;
  undefined2 local_21e;
  int local_21c;
  undefined2 local_21a;
  undefined2 local_218;
  int local_216;
  int local_214;
  int local_212;
  int local_210;
  undefined1 auStack_20e [256];
  int local_10e;
  undefined2 ****local_10c;
  int local_10a;
  undefined1 auStack_108 [240];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int *piStack_c;
  undefined2 ******ppppppuStack_a;
  undefined2 ******local_8;
  undefined2 ****local_6;
  
  local_6 = (undefined2 ****)0xc07d;
  FUN_21f2_0ebc();
  local_22a = 0;
  do {
    auStack_20e[local_22a] = *(undefined1 *)(local_22a + -0x4c78);
    auStack_108[local_22a] = *(undefined1 *)(local_22a + -0x3e90);
    *(undefined1 *)(local_22a + -0x4c78) = 0;
    *(undefined1 *)(local_22a + -0x3e90) = 0;
    local_22a = local_22a + 1;
  } while (local_22a < 0x100);
  uVar7 = *(undefined2 *)0xc32;
  local_21a = *(undefined2 *)0xc48;
  local_218 = *(undefined2 *)0xc4a;
  local_220 = *(undefined2 *)0xc4c;
  local_21e = *(undefined2 *)0xc4e;
  local_6 = (undefined2 ****)*(undefined2 *)0x1b40;
  local_8 = (undefined2 ******)(*(int *)0x1b3e + -1);
  ppppppuStack_a = (undefined2 ******)(*(int *)0xa5e + 1);
  piStack_c = (int *)(*(int *)0xa5c + 1);
  uStack_e = 0x22b2;
  uStack_10 = 0xc0f3;
  func_0x0000a76b();
  local_22a = 0x11;
  uStack_10 = 0x885;
  do {
    local_6 = (undefined2 ****)0x0;
    local_8 = (undefined2 ******)0x7;
    ppppppuStack_a = (undefined2 ******)*(undefined2 *)0x1b42;
    piStack_c = (int *)local_22a;
    uStack_e = 0x6b94;
    uStack_12 = 0xc114;
    FUN_1000_02b5();
    local_22a = local_22a + 1;
    uStack_10 = 0xdef;
  } while (local_22a < 0x51);
  local_6 = (undefined2 ****)0x0;
  local_8 = (undefined2 ******)0x0;
  ppppppuStack_a = (undefined2 ******)0x1;
  piStack_c = (int *)0x7;
  uStack_e = *(undefined2 *)0x1b40;
  uStack_10 = *(undefined2 *)0x1b3e;
  uStack_12 = *(undefined2 *)0xa5e;
  uStack_14 = 0;
  uStack_16 = 0xdef;
  uStack_18 = 0xc142;
  func_0x0000f350();
  uVar4 = (int)*(uint *)0xb310 >> 0xf;
  iVar1 = ((int)((*(uint *)0xb310 ^ uVar4) - uVar4) >> 4 ^ uVar4) - uVar4;
  *(undefined2 *)0xa60 = *(undefined2 *)0x1b40;
  uVar6 = *(undefined2 *)0xa6be;
  *(undefined2 *)0xc30 = *(undefined2 *)0xa6bc;
  *(undefined2 *)0xc32 = uVar6;
  uVar4 = *(int *)0x1b3e - *(int *)0xa58 >> 0xf;
  uVar4 = ((int)((*(int *)0x1b3e - *(int *)0xa58 ^ uVar4) - uVar4) >> 3 ^ uVar4) - uVar4;
  uVar5 = (int)uVar4 >> 0xf;
  local_212 = ((int)((uVar4 ^ uVar5) - uVar5) >> 2 ^ uVar5) - uVar5;
  local_222 = local_212 * 8;
  uVar4 = (int)(*(int *)0x1b42 - 1U) >> 0xf;
  local_214 = ((int)((*(int *)0x1b42 - 1U ^ uVar4) - uVar4) >> 2 ^ uVar4) - uVar4;
  local_228 = local_214 * 0x10;
  local_6 = (undefined2 ****)0xdef;
  local_8 = (undefined2 ******)0xc1cb;
  FUN_28b3_0d8b();
  local_6 = (undefined2 ****)0x22b2;
  local_8 = (undefined2 ******)0xc1df;
  FUN_28b3_0d8b();
  local_6 = (undefined2 ****)0x22b2;
  local_8 = (undefined2 ******)0xc1e4;
  FUN_28b3_1172();
  local_6 = (undefined2 ****)0x22b2;
  local_8 = (undefined2 ******)0xc1ed;
  func_0x00029983();
  local_6 = (undefined2 ****)0x22b2;
  uVar6 = 0x885;
  local_8 = (undefined2 ******)0xc1f2;
  func_0x0000a799();
  for (local_210 = 0; local_210 < 4; local_210 = local_210 + 1) {
    local_8 = (undefined2 ******)0xc34a;
    local_6 = (undefined2 ****)uVar6;
    FUN_28b3_0d8b();
    local_6 = (undefined2 ****)0x22b2;
    local_8 = (undefined2 ******)0xc353;
    func_0x00029b85();
    local_6 = (undefined2 ****)0x22b2;
    local_8 = (undefined2 ******)0xc35c;
    func_0x00029983();
    local_6 = (undefined2 ****)(local_210 * local_214 + 2);
    local_8 = (undefined2 ******)0x11;
    ppppppuStack_a = (undefined2 ******)0x22b2;
    piStack_c = (int *)0xc370;
    FUN_1000_0599();
    local_6 = (undefined2 ****)0xdef;
    uVar6 = 0xdef;
    local_8 = (undefined2 ******)0xc377;
    func_0x00010526();
    for (local_10e = 0; local_10e < 4; local_10e = local_10e + 1) {
      local_216 = local_210 * 4 + local_10e;
      local_21c = local_216 + iVar1 * 0x10;
      local_8 = (undefined2 ******)local_23e;
      piStack_c = (int *)0xc270;
      ppppppuStack_a = (undefined2 ******)uVar6;
      local_6 = (undefined2 ****)local_21c;
      FUN_10ad_20a9();
      local_6 = (undefined2 ****)(local_210 * local_214 + 2);
      local_8 = (undefined2 ******)(local_10e * local_212 + 0x11);
      ppppppuStack_a = (undefined2 ******)0x11f2;
      piStack_c = (int *)0xc28e;
      FUN_1000_0599();
      local_6 = local_23e;
      if (local_216 < 10) {
        iVar2 = 0;
      }
      else {
        iVar2 = 7;
      }
      local_8 = (undefined2 ******)(iVar2 + local_216 + 0x30);
      if (iVar1 < 10) {
        iVar2 = 0;
      }
      else {
        iVar2 = 7;
      }
      ppppppuStack_a = (undefined2 ******)(iVar2 + iVar1 + 0x30);
      piStack_c = (int *)0x6b96;
      uStack_e = 0xdef;
      uStack_10 = 0xc224;
      func_0x00012276();
      if ((*(char *)(local_21c + -0x4b5a) != '\0') || (*(char *)(local_21c + -0x4488) != '\0')) {
        local_6 = (undefined2 ****)0x11f2;
        local_8 = (undefined2 ******)0xc2c3;
        FUN_28b3_0d8b();
        local_6 = (undefined2 ****)0x22b2;
        local_8 = (undefined2 ******)0xc2cc;
        func_0x00029b85();
        local_6 = (undefined2 ****)0x22b2;
        local_8 = (undefined2 ******)0xc2d5;
        func_0x00029983();
        *(undefined1 *)(local_21c + -0x4c78) = 1;
        *(undefined1 *)(local_21c + -0x3e90) = 1;
        local_6 = (undefined2 ****)0x1;
        local_8 = (undefined2 ******)0x22b2;
        uVar6 = 0x11f2;
        ppppppuStack_a = (undefined2 ******)0xc2ec;
        local_240 = func_0x0001470b();
        *(undefined1 *)(local_21c + -0x4c78) = 0;
        *(undefined1 *)(local_21c + -0x3e90) = 0;
        if (local_240 == -1) break;
      }
      uVar6 = 0x11f2;
    }
    if (local_240 == -1) break;
  }
  if (*(char *)0xb782 == '\0') {
    *(undefined2 *)0xa5c = *(undefined2 *)0xa58;
    uVar3 = *(undefined2 *)0xa5a;
  }
  else {
    *(undefined2 *)0xa5c = *(undefined2 *)0xa6e;
    uVar3 = *(undefined2 *)0x1b40;
  }
  *(undefined2 *)0xa60 = uVar3;
  local_8 = (undefined2 ******)0xc391;
  local_6 = (undefined2 ****)uVar6;
  func_0x0000a799();
  local_22a = 0;
  do {
    *(undefined1 *)(local_22a + -0x4c78) = auStack_20e[local_22a];
    *(undefined1 *)(local_22a + -0x3e90) = auStack_108[local_22a];
    local_22a = local_22a + 1;
  } while (local_22a < 0x100);
  *(undefined2 *)0xc30 = local_6;
  *(undefined2 *)0xc32 = uVar7;
  *(undefined2 *)0xc48 = local_21a;
  *(undefined2 *)0xc4a = local_218;
  *(undefined2 *)0xc4c = local_220;
  *(undefined2 *)0xc4e = local_21e;
  if (param_1 != 0) {
    return 0xffff;
  }
  do {
    local_6 = (undefined2 ****)0x0;
    local_8 = (undefined2 ******)0x885;
    ppppppuStack_a = (undefined2 ******)0xc3f5;
    FUN_3ab8_1132();
    do {
      do {
        local_6 = &local_10c;
        local_8 = &local_8;
        ppppppuStack_a = (undefined2 ******)&local_226;
        piStack_c = &local_10a;
        uStack_e = 0x885;
        uVar7 = 0x885;
        uStack_10 = 0xc40e;
        func_0x0000dcbd();
        if ((*(int *)0x158 != 0) || (*(int *)0xa5c + 4 < (int)local_8)) {
          local_210 = 0;
          do {
            local_6 = (undefined2 ****)(local_210 * 6 + 2);
            local_8 = (undefined2 ******)0x11;
            piStack_c = (int *)0xc4c4;
            ppppppuStack_a = (undefined2 ******)uVar7;
            FUN_1000_0599();
            local_6 = (undefined2 ****)0xdef;
            uVar7 = 0xdef;
            local_8 = (undefined2 ******)0xc4cb;
            func_0x00010526();
            local_210 = local_210 + 1;
          } while (local_210 < 4);
          local_6 = (undefined2 ****)0x1;
          local_8 = (undefined2 ******)0x1;
          ppppppuStack_a = (undefined2 ******)0xdef;
          piStack_c = (int *)0xc4e0;
          FUN_1000_0599();
          return 1;
        }
        local_224 = local_226 + local_10a;
        iVar1 = local_224;
      } while (local_224 == 0);
      while (iVar1 != 0) {
        do {
          local_6 = &local_10c;
          local_8 = &local_8;
          ppppppuStack_a = (undefined2 ******)&local_226;
          piStack_c = &local_10a;
          uStack_e = 0x885;
          uStack_10 = 0xc455;
          func_0x0000dcbd();
          iVar1 = local_226;
        } while (local_10a != 0);
      }
    } while (((*(int *)0xa5c <= (int)local_8) || (*(int *)0xa60 <= (int)local_10c)) ||
            ((int)local_10c < 0x161));
    *(undefined2 *)0xb6a = 0xd8f1;
    local_6 = (undefined2 ****)&local_224;
    local_8 = (undefined2 ******)&local_10c;
    ppppppuStack_a = &local_8;
    piStack_c = (int *)0x1;
    uStack_e = 0x885;
    uStack_10 = 0xc49f;
    func_0x0000a3a5();
    *(undefined2 *)0xb6a = 1;
  } while( true );
}



/* 3ab8:196a  FUN_3ab8_196a  2875 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_196a(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  undefined2 uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar17;
  undefined1 uVar18;
  char local_292;
  int local_286;
  int local_284;
  int local_27e;
  undefined2 local_27c;
  undefined1 auStack_27a [16];
  int local_26a [10];
  int local_256;
  uint local_254;
  int local_252;
  int local_250;
  undefined1 auStack_24e [16];
  int local_23e;
  int local_23c;
  int local_23a;
  int local_238;
  undefined2 local_236;
  undefined2 local_234;
  undefined2 local_232;
  undefined2 local_230;
  int local_22c;
  int local_22a;
  uint local_228;
  int local_226;
  int local_224;
  uint local_222;
  undefined1 auStack_220 [256];
  int local_120;
  int local_11e;
  int local_11c;
  int local_11a;
  undefined1 auStack_118 [254];
  undefined2 uStack_1a;
  int *local_18;
  int *piStack_16;
  int *piStack_14;
  int iStack_12;
  int *piStack_10;
  int *piStack_e;
  int *piStack_c;
  int **ppiStack_a;
  int *piStack_8;
  
  FUN_21f2_0ebc();
  local_22a = 0;
  local_11a = *(int *)0xa5a;
  if (*(char *)0xb782 != '\0') {
    local_11a = *(int *)0xa5e + 0x10;
  }
  piStack_8 = &local_11c;
  ppiStack_a = &local_18;
  piStack_c = &local_23e;
  piStack_e = &local_11e;
  piStack_10 = (int *)0x22b2;
  iStack_12 = 0xc52d;
  func_0x0000dcbd();
  if (local_11a < local_11c) {
    local_22a = 1;
  }
  if (param_1 == 2) {
    local_22a = 0;
  }
  if (param_1 == 3) {
    local_22a = 1;
  }
  local_254 = 0;
  do {
    uVar9 = local_254;
    auStack_27a[local_254] = *(undefined1 *)(local_254 + 0xb7c);
    auStack_24e[uVar9] = *(undefined1 *)(uVar9 + 0xb6c);
    *(undefined1 *)(uVar9 + 0xb7c) = 0;
    *(undefined1 *)(uVar9 + 0xb6c) = 0;
    *(undefined1 *)((int)&piStack_16 + uVar9) = 0;
    local_254 = local_254 + 1;
  } while ((int)local_254 < 0x10);
  local_254 = 0;
  do {
    auStack_220[local_254] = *(undefined1 *)(local_254 + 0xb388);
    auStack_118[local_254] = *(undefined1 *)(local_254 + 0xc170);
    *(undefined1 *)(local_254 + 0xb388) = 1;
    *(undefined1 *)(local_254 + 0xc170) = 1;
    if ((*(char *)(local_254 + 0xb4a6) != '\0') || (*(char *)(local_254 + 0xbb78) != '\0')) {
      uVar9 = (int)local_254 >> 0xf;
      *(undefined1 *)
       ((int)&piStack_16 + (((int)((local_254 ^ uVar9) - uVar9) >> 4 ^ uVar9) - uVar9)) = 1;
    }
    local_254 = local_254 + 1;
  } while ((int)local_254 < 0x100);
  uVar2 = *(undefined2 *)0xc30;
  uVar4 = *(undefined2 *)0xc32;
  local_232 = *(undefined2 *)0xc48;
  local_230 = *(undefined2 *)0xc4a;
  local_236 = *(undefined2 *)0xc4c;
  local_234 = *(undefined2 *)0xc4e;
  piStack_8 = (int *)*(undefined2 *)0x1b40;
  ppiStack_a = (int **)(*(int *)0x1b3e + -1);
  piStack_c = (int *)(*(int *)0xa5e + 1);
  piStack_e = (int *)(*(int *)0xa5c + 1);
  piStack_10 = (int *)0x885;
  iStack_12 = 0xc627;
  func_0x0000a76b();
  piStack_8 = (int *)0x0;
  ppiStack_a = (int **)0x0;
  local_286 = 0;
  piStack_c = (int *)0x0;
  piStack_e = (int *)0x7;
  piStack_10 = (int *)*(undefined2 *)0x1b40;
  iStack_12 = *(undefined2 *)0x1b3e;
  piStack_14 = (int *)*(undefined2 *)0x1b40;
  piStack_16 = (int *)0x0;
  local_18 = (int *)0x885;
  uVar13 = 0xdef;
  uStack_1a = 0xc64b;
  func_0x0000f350();
  if (*(char *)0xb782 == '\0') {
    piStack_8 = (int *)0x14f;
    ppiStack_a = (int **)(*(int *)0xa58 + -1);
    piStack_c = (int *)0x141;
    piStack_e = (int *)0x1;
    piStack_10 = (int *)0xdef;
    iStack_12 = 0xc66b;
    func_0x0000a76b();
    piStack_8 = (int *)0x14;
    ppiStack_a = (int **)0x1;
    piStack_c = (int *)0x885;
    piStack_e = (int *)0xc67b;
    FUN_1000_0599();
    piStack_8 = (int *)0xdef;
    ppiStack_a = (int **)0xc682;
    func_0x00010526();
    piStack_8 = (int *)0x15;
    ppiStack_a = (int **)0x1;
    piStack_c = (int *)0xdef;
    piStack_e = (int *)0xc68f;
    FUN_1000_0599();
    piStack_8 = (int *)0xdef;
    ppiStack_a = (int **)0xc696;
    func_0x00010526();
    piStack_8 = (int *)0xdef;
    uVar13 = 0x885;
    ppiStack_a = (int **)0xc69b;
    func_0x0000c354();
  }
  *(undefined2 *)0xa60 = *(undefined2 *)0x1b40;
  uVar5 = *(undefined2 *)0xa6be;
  *(undefined2 *)0xc30 = *(undefined2 *)0xa6bc;
  *(undefined2 *)0xc32 = uVar5;
  uVar9 = *(int *)0x1b3e - *(int *)0xa58 >> 0xf;
  uVar9 = ((int)((*(int *)0x1b3e - *(int *)0xa58 ^ uVar9) - uVar9) >> 3 ^ uVar9) - uVar9;
  uVar10 = (int)uVar9 >> 0xf;
  local_226 = ((int)((uVar9 ^ uVar10) - uVar10) >> 2 ^ uVar10) - uVar10;
  local_238 = local_226 * 8;
  uVar9 = (int)(*(int *)0x1b42 - 1U) >> 0xf;
  local_22c = ((int)((*(int *)0x1b42 - 1U ^ uVar9) - uVar9) >> 2 ^ uVar9) - uVar9;
  local_250 = local_22c * 0x10;
  ppiStack_a = (int **)0xc70c;
  piStack_8 = (int *)uVar13;
  FUN_28b3_0d8b();
  piStack_8 = (int *)0x22b2;
  ppiStack_a = (int **)0xc720;
  FUN_28b3_0d8b();
  piStack_8 = (int *)0x22b2;
  ppiStack_a = (int **)0xc725;
  FUN_28b3_1172();
  piStack_8 = (int *)0x22b2;
  ppiStack_a = (int **)0xc72e;
  func_0x00029983();
  piStack_8 = (int *)0x0;
  ppiStack_a = (int **)0x0;
  piStack_c = (int *)0x0;
  piStack_e = (int *)0x7;
  piStack_10 = (int *)0x130;
  iStack_12 = *(undefined2 *)0xa5c;
  piStack_14 = (int *)0x130;
  piStack_16 = (int *)0x0;
  local_18 = (int *)0x22b2;
  uStack_1a = 0xc74a;
  func_0x0000f350();
  piStack_8 = (int *)0x0;
  ppiStack_a = (int **)0x0;
  piStack_c = (int *)0x1;
  piStack_e = (int *)0x7;
  piStack_10 = (int *)0x150;
  iStack_12 = *(int *)0xa5c;
  piStack_14 = (int *)0x131;
  piStack_16 = (int *)0x0;
  local_18 = (int *)0xdef;
  uStack_1a = 0xc76d;
  func_0x0000f350();
  piStack_8 = (int *)0xdef;
  uVar13 = 0x885;
  ppiStack_a = (int **)0xc775;
  func_0x0000a799();
  for (local_224 = 0; local_224 < 4; local_224 = local_224 + 1) {
    ppiStack_a = (int **)0xc9cf;
    piStack_8 = (int *)uVar13;
    FUN_28b3_0d8b();
    piStack_8 = (int *)0x22b2;
    ppiStack_a = (int **)0xc9d8;
    func_0x00029b85();
    piStack_8 = (int *)0x22b2;
    ppiStack_a = (int **)0xc9e1;
    func_0x00029983();
    local_11c = local_22c * local_224 + 2;
    ppiStack_a = (int **)0x11;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xc9f9;
    piStack_8 = (int *)local_11c;
    FUN_1000_0599();
    piStack_8 = (int *)0xdef;
    uVar13 = 0xdef;
    ppiStack_a = (int **)0xca00;
    func_0x00010526();
    for (local_120 = 0; local_120 < 4; local_120 = local_120 + 1) {
      local_18 = (int *)(local_120 * local_226 + 0x11);
      uVar9 = local_224 * 4 + local_120;
      if ((int)uVar9 < 10) {
        iVar6 = 0;
      }
      else {
        iVar6 = 7;
      }
      piStack_8 = (int *)(iVar6 + uVar9 + 0x30);
      ppiStack_a = (int **)0x6b9f;
      piStack_c = local_26a;
      piStack_10 = (int *)0xc796;
      piStack_e = (int *)uVar13;
      FUN_21f2_3454();
      piStack_8 = (int *)0xffff;
      ppiStack_a = (int **)0x7;
      piStack_c = (int *)local_11c;
      piStack_e = local_18;
      piStack_10 = local_26a;
      iStack_12 = 0x22b2;
      piStack_14 = (int *)0xc7b2;
      FUN_1000_02b5();
      piStack_8 = (int *)local_11c;
      ppiStack_a = (int **)((int)local_18 + 1);
      piStack_c = (int *)0xdef;
      piStack_e = (int *)0xc7c3;
      FUN_1000_0599();
      if (local_22a == 0) {
        ppiStack_a = (int **)local_26a;
        piStack_c = (int *)0xdef;
        uVar13 = 0x11f2;
        piStack_e = (int *)0xc7da;
        piStack_8 = (int *)uVar9;
        func_0x00012bf5();
        ppiStack_a = (int **)0x1de;
        piStack_8 = local_26a;
LAB_3ab8_1c64:
        piStack_e = (int *)0xc7ea;
        piStack_c = (int *)uVar13;
        func_0x00012276();
      }
      else {
        piStack_8 = (int *)0xdef;
        ppiStack_a = (int **)0xc7f8;
        func_0x00029834();
        uVar17 = (int)(uVar9 * 2) < 0;
        uVar18 = (uVar9 & 0x3fff) == 0;
        piStack_8 = (int *)0x22b2;
        ppiStack_a = (int **)0xc809;
        func_0x000297e6();
        piStack_8 = (int *)0x22b2;
        ppiStack_a = (int **)0xc812;
        func_0x0002996b();
        piStack_8 = (int *)0x22b2;
        ppiStack_a = (int **)0xc817;
        func_0x00029d78();
        piStack_8 = (int *)0x22b2;
        ppiStack_a = (int **)0xc81c;
        FUN_28b3_1181();
        if ((bool)uVar17 || (bool)uVar18) {
          piStack_8 = (int *)0x22b2;
          ppiStack_a = (int **)0xc87d;
          func_0x00029834();
          piStack_8 = (int *)0x22b2;
          ppiStack_a = (int **)0xc886;
          func_0x000297e6();
          piStack_8 = (int *)0x22b2;
          ppiStack_a = (int **)0xc88b;
          func_0x00029d78();
          piStack_8 = (int *)0x22b2;
          ppiStack_a = (int **)0xc890;
          FUN_28b3_1c08();
          piStack_8 = (int *)0x22b2;
          ppiStack_a = (int **)0xc895;
          FUN_28b3_1177();
          piStack_8 = (int *)0x22b2;
          ppiStack_a = (int **)0xc89e;
          func_0x0002996b();
          piStack_8 = (int *)0x22b2;
          ppiStack_a = (int **)0xc8a3;
          func_0x00029d78();
          piStack_8 = (int *)0x22b2;
          ppiStack_a = (int **)0xc8a8;
          FUN_28b3_1181();
          if ((bool)uVar17) {
            piStack_8 = (int *)0x22b2;
            ppiStack_a = (int **)0xc8b3;
            func_0x000297e6();
            piStack_10 = (int *)0x22b2;
            iStack_12 = 0xc8bd;
            func_0x000299d1();
            piStack_10 = (int *)0x6bb3;
          }
          else {
            piStack_8 = (int *)0x22b2;
            ppiStack_a = (int **)0xc8cb;
            func_0x000297e6();
            piStack_8 = (int *)0x22b2;
            ppiStack_a = (int **)0xc8d0;
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            iStack_12 = 0xc8da;
            func_0x000299d1();
            piStack_10 = (int *)0x6bbd;
          }
        }
        else {
          piStack_8 = (int *)0x22b2;
          ppiStack_a = (int **)0xc827;
          func_0x000297e6();
          piStack_8 = (int *)0x22b2;
          ppiStack_a = (int **)0xc830;
          func_0x00029c74();
          piStack_8 = (int *)0x22b2;
          ppiStack_a = (int **)0xc835;
          piVar14 = (int *)FUN_28b3_0f51();
          piStack_8 = (int *)0x22b2;
          ppiStack_a = (int **)0xc842;
          func_0x00029834();
          piStack_8 = (int *)0x22b2;
          ppiStack_a = (int **)0xc84b;
          func_0x000297e6();
          piStack_8 = (int *)0x22b2;
          uVar13 = 0x22b2;
          ppiStack_a = (int **)0xc850;
          FUN_28b3_1181();
          if (!(bool)uVar17) {
            ppiStack_a = (int **)0x6bac;
            piStack_8 = piVar14;
            goto LAB_3ab8_1c64;
          }
          piStack_8 = (int *)0x22b2;
          ppiStack_a = (int **)0xc85b;
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          iStack_12 = 0xc865;
          func_0x000299d1();
          piStack_10 = (int *)0x6ba2;
        }
        iStack_12 = 0x22b2;
        piStack_14 = (int *)0xc8e3;
        func_0x00012276();
      }
      if (*(char *)((int)&piStack_16 + uVar9) != '\0') {
        piStack_8 = (int *)0x11f2;
        ppiStack_a = (int **)0xc948;
        FUN_28b3_0d8b();
        piStack_8 = (int *)0x22b2;
        ppiStack_a = (int **)0xc951;
        func_0x00029b85();
        piStack_8 = (int *)0x22b2;
        ppiStack_a = (int **)0xc95a;
        func_0x00029983();
        *(undefined1 *)(uVar9 + 0xb7c) = 1;
        *(undefined1 *)(uVar9 + 0xb6c) = 1;
        piStack_8 = (int *)0x1;
        ppiStack_a = (int **)0x22b2;
        uVar13 = 0x11f2;
        piStack_c = (int *)0xc971;
        local_27e = func_0x0001470b();
        *(undefined1 *)(uVar9 + 0xb7c) = 0;
        *(undefined1 *)(uVar9 + 0xb6c) = 0;
        if (local_27e == -1) break;
      }
      uVar13 = 0x11f2;
    }
    if (local_27e == -1) break;
  }
  if (*(char *)0xb782 == '\0') {
    *(undefined2 *)0xa5c = *(undefined2 *)0xa58;
    uVar5 = *(undefined2 *)0xa5a;
  }
  else {
    *(undefined2 *)0xa5c = *(undefined2 *)0xa6e;
    uVar5 = *(undefined2 *)0x1b40;
  }
  *(undefined2 *)0xa60 = uVar5;
  piVar14 = (int *)0x885;
  ppiStack_a = (int **)0xca1a;
  piStack_8 = (int *)uVar13;
  func_0x0000a799();
  local_254 = 0;
  do {
    *(undefined1 *)(local_254 + -0x4c78) = auStack_220[local_254];
    *(undefined1 *)(local_254 + -0x3e90) = auStack_118[local_254];
    local_254 = local_254 + 1;
  } while ((int)local_254 < 0x100);
  local_254 = 0;
  do {
    *(undefined1 *)(local_254 + 0xb7c) = auStack_27a[local_254];
    *(undefined1 *)(local_254 + 0xb6c) = auStack_24e[local_254];
    local_254 = local_254 + 1;
  } while ((int)local_254 < 0x10);
  *(undefined2 *)0xc30 = uVar2;
  *(undefined2 *)0xc32 = uVar4;
  *(undefined2 *)0xc48 = local_232;
  *(undefined2 *)0xc4a = local_230;
  *(undefined2 *)0xc4c = local_236;
  *(undefined2 *)0xc4e = local_234;
  if (param_1 != 0) {
    return 0xffff;
  }
  do {
    piStack_8 = (int *)0x1;
    piStack_c = (int *)0xcaa4;
    ppiStack_a = (int **)piVar14;
    FUN_3ab8_1132();
    uVar9 = (int)*(uint *)0xb310 >> 0xf;
    iVar6 = ((int)((*(uint *)0xb310 ^ uVar9) - uVar9) >> 4 ^ uVar9) - uVar9;
    *(undefined1 *)(iVar6 + 0xb7c) = 1;
    *(undefined1 *)(iVar6 + 0xb6c) = 1;
    do {
      piStack_8 = &local_11c;
      ppiStack_a = &local_18;
      piStack_c = &local_23e;
      piStack_e = &local_11e;
      piVar15 = (int *)0x885;
      iStack_12 = -0x3522;
      piStack_10 = piVar14;
      func_0x0000dcbd();
      if ((*(int *)0x158 != 0) || (*(int *)0xa5c + 4 < (int)local_18)) {
        local_224 = 0;
        do {
          iVar6 = local_224 * 6;
          piStack_8 = (int *)(iVar6 + 2);
          ppiStack_a = (int **)0x11;
          piStack_e = (int *)0xcfe5;
          piStack_c = piVar15;
          FUN_1000_0599();
          piStack_8 = (int *)0xdef;
          ppiStack_a = (int **)0xcfec;
          func_0x00010526();
          piStack_8 = (int *)(iVar6 + 3);
          ppiStack_a = (int **)0x11;
          piStack_c = (int *)0xdef;
          piStack_e = (int *)0xcff9;
          FUN_1000_0599();
          piStack_8 = (int *)0xdef;
          piVar15 = (int *)0xdef;
          ppiStack_a = (int **)0xd000;
          func_0x00010526();
          local_224 = local_224 + 1;
        } while (local_224 < 4);
        piStack_8 = (int *)0x1;
        ppiStack_a = (int **)0x1;
        piStack_c = (int *)0xdef;
        piStack_e = (int *)0xd015;
        FUN_1000_0599();
        piStack_8 = (int *)0xdef;
        ppiStack_a = (int **)0xd01c;
        func_0x0000a799();
        return 1;
      }
      local_23c = local_23e + local_11e;
      piVar14 = piVar15;
      iVar8 = local_23c;
    } while (local_23c == 0);
    while (iVar8 != 0) {
      do {
        piStack_8 = &local_11c;
        ppiStack_a = &local_18;
        piStack_c = &local_23e;
        piStack_e = &local_11e;
        piStack_10 = (int *)0x885;
        iStack_12 = -0x34db;
        func_0x0000dcbd();
        iVar8 = local_23e;
      } while (local_11e != 0);
    }
    if ((((int)local_18 < *(int *)0xa5c) && (0x160 < local_11c)) && (local_11c < 0x181)) {
      if ((int)local_18 < 9) {
        local_286 = local_286 + 1;
        if (2 < local_286) {
          local_286 = 0;
        }
        if (local_23c == 2) {
          local_286 = 2;
        }
        for (local_254 = 0; (int)local_254 < 0x10; local_254 = local_254 + 1) {
          if ((*(byte *)(local_254 + 0xb6c) & 4) == 0) {
            *(char *)(local_254 + 0xb7c) = '\x01' - (local_286 == 0);
            *(char *)(local_254 + 0xb6c) = (local_286 == 2) + (*(byte *)(local_254 + 0xb6c) & 6);
          }
        }
      }
      else {
        if (local_11c < 0x171) {
          iVar8 = 0;
        }
        else {
          iVar8 = 8;
        }
        iVar8 = iVar8 + ((int)local_18 + -9) / 0xe;
        if (local_23c != 0) {
          piStack_8 = (int *)0x885;
          ppiStack_a = (int **)0xcbf3;
          uVar9 = func_0x0000db57();
          if ((((uVar9 & 4) != 0) && (iVar6 != iVar8)) && (*(char *)0x124 != '\0')) {
            piStack_8 = (int *)0x885;
            ppiStack_a = (int **)0xcc0f;
            uVar9 = func_0x0000db57();
            if ((uVar9 & 2) == 0) {
              if ((*(byte *)(iVar8 + 0xb6c) & 4) == 0) {
                if ((*(byte *)(iVar8 + 0xb6c) & 2) != 0) goto LAB_3ab8_20f4;
                *(byte *)(iVar8 + 0xb6c) = *(byte *)(iVar8 + 0xb6c) | 2;
              }
            }
            else if ((*(byte *)(iVar8 + 0xb6c) & 4) == 0) {
              *(byte *)(iVar8 + 0xb6c) = *(byte *)(iVar8 + 0xb6c) | 6;
            }
            else {
LAB_3ab8_20f4:
              *(byte *)(iVar8 + 0xb6c) = *(byte *)(iVar8 + 0xb6c) & 1;
            }
            goto LAB_3ab8_20a3;
          }
        }
        if (((local_23c == 1) && (iVar6 != iVar8)) && ((*(byte *)(iVar8 + 0xb6c) & 4) == 0)) {
          local_222 = (uint)*(byte *)(iVar8 + 0xb7c);
          bVar3 = *(byte *)(iVar8 + 0xb6c);
          local_228 = (uint)bVar3;
          *(bool *)(iVar8 + 0xb7c) = (bVar3 & 1) == 0;
          if ((local_222 == 0) || ((bVar3 & 1) != 0)) {
            local_292 = '\0';
          }
          else {
            local_292 = '\x01';
          }
          *(char *)(iVar8 + 0xb6c) = (bVar3 & 6) + local_292;
        }
        if (((local_23c == 2) && (iVar6 != iVar8)) && ((*(byte *)(iVar8 + 0xb6c) & 6) == 0)) {
          uVar2 = *(undefined2 *)(iVar8 * 4 + 0xb2c);
          *(undefined2 *)0xb26 = *(undefined2 *)(iVar8 * 4 + 0xb2a);
          *(undefined2 *)0xb28 = uVar2;
          uVar9 = (uint)*(byte *)(iVar8 + 0xb8e);
          *(uint *)0xb310 = uVar9;
          if (((int)uVar9 < iVar8 * 0x10) || ((iVar8 + 1) * 0x10 <= (int)uVar9)) {
            *(int *)0xb310 = iVar8 * 0x10;
          }
          iVar6 = *(int *)0xb310;
          if (*(char *)(iVar6 + -0x3d6e) != '\0') {
            *(uint *)0xa6c = (uint)*(byte *)(iVar6 + -0x3d6e);
          }
          if (*(char *)(iVar6 + -0x4996) != '\0') {
            *(uint *)0xa6a = (uint)*(byte *)(iVar6 + -0x4996);
          }
        }
      }
    }
    else if ((0x180 < local_11c) && (local_11c < 400)) {
      local_254 = 0;
      do {
        if ((*(byte *)(local_254 + 0xb6c) & 4) == 0) {
          *(undefined1 *)(local_254 + 0xb7c) = 1;
          *(char *)(local_254 + 0xb6c) = (*(byte *)(local_254 + 0xb6c) & 6) + 1;
        }
        local_254 = local_254 + 1;
      } while ((int)local_254 < 0x10);
      for (local_256 = 0; local_256 < 0x100; local_256 = local_256 + 1) {
        if ((*(byte *)(local_256 + -0x3e90) & 4) == 0) {
          *(undefined1 *)(local_256 + -0x4c78) = 1;
          *(char *)(local_256 + -0x3e90) = (*(byte *)(local_256 + -0x3e90) & 6) + 1;
        }
      }
    }
LAB_3ab8_20a3:
    piStack_8 = (int *)0x885;
    piVar14 = (int *)0x885;
    ppiStack_a = (int **)0xcc28;
    func_0x0000c3ca();
    uVar9 = (int)*(uint *)0xb310 >> 0xf;
    iVar6 = ((int)((*(uint *)0xb310 ^ uVar9) - uVar9) >> 4 ^ uVar9) - uVar9;
    *(undefined1 *)(iVar6 + 0xb7c) = 1;
    *(undefined1 *)(iVar6 + 0xb6c) = 1;
    local_23a = 9;
    local_252 = 0x160;
    local_284 = 0;
    for (local_254 = 0; (int)local_254 < 0x10; local_254 = local_254 + 1) {
      piVar15 = (int *)(local_252 + 0xf);
      iVar8 = local_23a + 0xd;
      piVar11 = (int *)(local_252 + 3);
      piVar12 = (int *)(local_23a + 1);
      piVar16 = (int *)0x885;
      iStack_12 = -0x3073;
      piStack_10 = piVar14;
      piStack_e = piVar12;
      piStack_c = piVar11;
      ppiStack_a = (int **)iVar8;
      piStack_8 = piVar15;
      func_0x0000a76b();
      if (iVar6 == local_254) {
        local_27c = 0;
        piStack_8 = (int *)0x0;
        ppiStack_a = (int **)0x0;
        piStack_c = (int *)0x2;
        local_256 = 5;
        piStack_e = (int *)0x5;
        local_18 = (int *)0x885;
        piVar16 = (int *)0xdef;
        uStack_1a = 0xcfc2;
        piStack_16 = piVar12;
        piStack_14 = piVar11;
        iStack_12 = iVar8;
        piStack_10 = piVar15;
        func_0x0000f350();
      }
      else {
        local_27c = 5;
        local_256 = 0;
      }
      piVar15 = piVar16;
      if (*(char *)(local_254 + 0xb7c) != '\0') {
        piStack_8 = (int *)local_256;
        ppiStack_a = (int **)local_27c;
        piStack_c = (int *)0x1;
        iVar8 = 0;
        piStack_e = (int *)0x0;
        if (9 < local_284) {
          iVar8 = 7;
        }
        piStack_10 = (int *)(iVar8 + local_284 + 0x130);
        iStack_12 = local_252 + 6;
        piStack_14 = (int *)(local_23a + 3);
        piVar15 = (int *)0xdef;
        local_18 = (int *)0xce2e;
        piStack_16 = piVar16;
        func_0x0000f581();
      }
      piVar14 = piVar15;
      if ((*(byte *)(local_254 + 0xb6c) & 1) != 0) {
        piStack_8 = (int *)0x0;
        ppiStack_a = (int **)0x0;
        piStack_c = (int *)0x1;
        piStack_e = (int *)0x7;
        piStack_10 = (int *)(local_252 + 0xe);
        iStack_12 = local_23a + 0xb;
        piStack_14 = (int *)(local_252 + 4);
        piStack_16 = (int *)(local_23a + 2);
        piVar14 = (int *)0xdef;
        uStack_1a = 0xce6c;
        local_18 = piVar15;
        func_0x0000f350();
      }
      if ((*(byte *)(local_254 + 0xb6c) & 6) != 0) {
        piStack_8 = (int *)0x0;
        ppiStack_a = (int **)0x0;
        piStack_c = (int *)0x0;
        piStack_e = (int *)0x2;
        iVar8 = local_252 + 4;
        iVar7 = local_23a + 0xd;
        iVar1 = local_252 + 0xf;
        piVar12 = (int *)(local_23a + 1);
        uStack_1a = 0xceb3;
        local_18 = piVar14;
        piStack_16 = piVar12;
        piStack_14 = (int *)iVar1;
        iStack_12 = iVar7;
        piStack_10 = (int *)iVar8;
        func_0x0000f350();
        piStack_8 = (int *)0x0;
        ppiStack_a = (int **)0x0;
        piStack_c = (int *)0x0;
        piStack_e = (int *)0x2;
        piVar15 = (int *)(local_252 + 3);
        piVar11 = (int *)(local_252 + 0xe);
        local_18 = (int *)0xdef;
        piVar14 = (int *)0xdef;
        uStack_1a = 0xcee5;
        piStack_16 = piVar12;
        piStack_14 = piVar11;
        iStack_12 = iVar7;
        piStack_10 = piVar15;
        func_0x0000f350();
        if ((*(byte *)(local_254 + 0xb6c) & 4) != 0) {
          piStack_8 = (int *)0x0;
          ppiStack_a = (int **)0x0;
          piStack_c = (int *)0x0;
          piStack_e = (int *)0x2;
          local_18 = (int *)0xdef;
          uStack_1a = 0xcf0f;
          piStack_16 = piVar12;
          piStack_14 = (int *)iVar8;
          iStack_12 = iVar7;
          piStack_10 = (int *)iVar1;
          func_0x0000f350();
          piStack_8 = (int *)0x0;
          ppiStack_a = (int **)0x0;
          piStack_c = (int *)0x0;
          piStack_e = (int *)0x2;
          local_18 = (int *)0xdef;
          piVar14 = (int *)0xdef;
          uStack_1a = 0xcf2d;
          piStack_16 = piVar12;
          piStack_14 = piVar15;
          iStack_12 = iVar7;
          piStack_10 = piVar11;
          func_0x0000f350();
        }
      }
      local_284 = local_284 + 1;
      local_23a = local_23a + 0xe;
      if (*(int *)0xa5c + -5 < local_23a) {
        local_23a = 9;
        local_252 = local_252 + 0x10;
      }
    }
  } while( true );
}



/* 3ab8:24a5  FUN_3ab8_24a5  858 bytes, 3 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 ******* __cdecl16far
FUN_3ab8_24a5(int param_1,undefined2 ******param_2,undefined2 ******param_3,undefined2 ******param_4
             )

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  code *pcVar4;
  undefined2 *****pppppuVar5;
  undefined2 *******pppppppuVar6;
  int iVar7;
  uint uVar8;
  undefined2 ******ppppppuVar9;
  undefined2 ******ppppppuVar10;
  undefined2 unaff_DS;
  int local_1e;
  undefined2 *****local_1a;
  undefined2 *****local_18;
  int ******local_16;
  undefined2 *****local_14;
  undefined2 *****local_12;
  undefined2 *******local_10;
  undefined2 ******local_e;
  undefined2 *******local_c;
  undefined2 ******local_a;
  uint *******local_8;
  int *******local_6;
  
  local_6 = (int *******)0xd030;
  FUN_21f2_0ebc();
  local_6 = (int *******)&local_10;
  local_8 = (uint *******)&local_c;
  local_a = &local_14;
  local_c = &local_e;
  local_e = &local_18;
  local_10 = &local_6;
  local_12 = (undefined2 *****)0x22b2;
  ppppppuVar9 = (undefined2 ******)0x3bf;
  local_14 = (undefined2 *****)0xd04e;
  local_a = (undefined2 ******)func_0x000063d0();
  pppppppuVar6 = local_c;
  *param_4 = (undefined2 *****)((int)local_18 + (int)local_6);
  *param_2 = local_e;
  *param_3 = local_14;
  pppppuVar5 = *param_4;
  while (ppppppuVar10 = ppppppuVar9, pppppuVar5 != (undefined2 *****)0x0) {
    do {
      local_6 = &local_16;
      local_8 = (uint *******)&local_12;
      local_a = &local_1a;
      local_c = &local_8;
      ppppppuVar9 = (undefined2 ******)0x885;
      local_10 = (undefined2 *******)0xd08f;
      local_e = ppppppuVar10;
      func_0x0000dcbd();
      ppppppuVar10 = ppppppuVar9;
    } while (local_8 != (uint *******)0x0);
    local_8 = (uint *******)0x0;
    pppppuVar5 = local_1a;
  }
  if ((((*(char *)0xb782 != '\0') && (*param_4 != (undefined2 *****)0x0)) &&
      ((int)*param_2 < *(int *)0xa58)) && (*(int *)0xa5e < (int)*param_3)) {
    uVar8 = (int)*param_3 >> 0xf;
    iVar7 = ((int)(((uint)*param_3 ^ uVar8) - uVar8) >> 4 ^ uVar8) - uVar8;
    if (*(int *)0xa5c <= (int)*param_2) {
      return (undefined2 *******)0x0;
    }
    if (((param_1 == 0) && (2 < iVar7)) && (iVar7 < 6)) {
      local_6 = (int *******)(iVar7 + 10);
      pcVar4 = (code *)swi(0x3f);
      (*pcVar4)();
      local_6 = (int *******)0xd10c;
      FUN_3ab8_14f2();
      return (undefined2 *******)0x63;
    }
    if ((param_1 == 1) && (iVar7 == 4)) {
      local_6 = (int *******)0xe;
      pcVar4 = (code *)swi(0x3f);
      (*pcVar4)();
      return (undefined2 *******)0x63;
    }
    if (iVar7 < 6) {
      return (undefined2 *******)0x63;
    }
    *(int *)0xa62 = iVar7 + 10000;
    *(undefined2 *)0x158 = 1;
    return (undefined2 *******)0xfba9;
  }
  if (*(int *)0x158 != 0) {
    return (undefined2 *******)0xff91;
  }
  if (local_a == (undefined2 ******)0xffff) {
    return (undefined2 *******)0xffff;
  }
  if (*(int *)0xca0 == 0) {
    if (pppppppuVar6 == (undefined2 *******)0x5f) {
      local_6 = (int *******)0x1;
    }
    else {
      if (pppppppuVar6 != (undefined2 *******)0x7c) goto LAB_3ab8_25fe;
      local_6 = (int *******)0x0;
    }
    local_a = (undefined2 ******)0xd17c;
    local_8 = (uint *******)ppppppuVar9;
    FUN_3ab8_402a();
  }
  else {
LAB_3ab8_25fe:
    if (*param_4 == (undefined2 *****)0x0) {
      return pppppppuVar6;
    }
    if (*(int *)0xa5c <= (int)*param_2) {
      return pppppppuVar6;
    }
    if ((int)*param_3 < 0x12f) {
      return pppppppuVar6;
    }
    if (0x180 < (int)*param_3) {
      return pppppppuVar6;
    }
    *(undefined2 *)0xb6a = 0xd8f1;
    if ((0x12e < (int)*param_3) && ((int)*param_3 < 0x141)) {
      if (param_1 == 2) {
        return (undefined2 *******)0x0;
      }
      if (param_1 == 1) {
        pcVar4 = (code *)swi(0x3f);
        (*pcVar4)();
        *(undefined1 *)0xd14 = 2;
        return (undefined2 *******)0x63;
      }
      local_6 = (int *******)0x1;
      local_a = (undefined2 ******)0xd1dc;
      local_8 = (uint *******)ppppppuVar9;
      func_0x00009304();
      local_6 = (int *******)0x885;
      local_8 = (uint *******)0xd1e2;
      func_0x0000bd93();
      local_6 = (int *******)0x885;
      ppppppuVar9 = (undefined2 ******)0x885;
      local_8 = (uint *******)0xd1e7;
      func_0x0000c053();
    }
    if ((0x140 < (int)*param_3) && ((int)*param_3 < 0x151)) {
      if (param_1 == 2) {
        return (undefined2 *******)0x0;
      }
      local_6 = (int *******)param_2;
      pcVar4 = (code *)swi(0x3f);
      (*pcVar4)();
      if (param_1 == 1) {
        return (undefined2 *******)0x63;
      }
      ppppppuVar9 = (undefined2 ******)0x885;
      func_0x0000b6ea();
      local_6 = (int *******)0x1;
      local_8 = (uint *******)0x885;
      local_a = (undefined2 ******)0xd21e;
      FUN_3ab8_14f2();
    }
    if ((0x150 < (int)*param_3) && ((int)*param_3 < 0x161)) {
      if (param_1 != 0) {
        return (undefined2 *******)0x0;
      }
      if ((int)*param_2 < 0x42) {
        pcVar4 = (code *)swi(0x3f);
        (*pcVar4)();
      }
      else {
        local_6 = (int *******)0x1;
        local_a = (undefined2 ******)0xd248;
        local_8 = (uint *******)ppppppuVar9;
        func_0x00009ec3();
        local_6 = (int *******)0x885;
        ppppppuVar9 = (undefined2 ******)0x885;
        local_8 = (uint *******)0xd24e;
        func_0x0000b6ea();
      }
      local_8 = (uint *******)0xd25a;
      local_6 = (int *******)ppppppuVar9;
      func_0x0000c354();
      local_6 = (int *******)0x885;
      ppppppuVar9 = (undefined2 ******)0x885;
      local_8 = (uint *******)0xd25f;
      func_0x0000b6ea();
      local_6 = (int *******)0x1;
      local_8 = (uint *******)0x885;
      local_a = (undefined2 ******)0xd267;
      FUN_3ab8_14f2();
    }
    if ((0x160 < (int)*param_3) && ((int)*param_3 < 0x181)) {
      if (param_1 != 0) {
        if ((int)*param_2 < 9) {
          *(char *)0x6bc7 = *(char *)0x6bc7 + '\x01';
          if (2 < *(byte *)0x6bc7) {
            *(undefined1 *)0x6bc7 = 0;
          }
          for (local_1e = 0; local_1e < 0x10; local_1e = local_1e + 1) {
            *(char *)(local_1e + 0xb7c) = '\x01' - (*(char *)0x6bc7 == '\0');
            *(bool *)(local_1e + 0xb6c) = *(char *)0x6bc7 == '\x02';
          }
        }
        else {
          if ((int)*param_3 < 0x171) {
            iVar7 = 0;
          }
          else {
            iVar7 = 8;
          }
          iVar7 = iVar7 + ((int)*param_2 + -9) / 0xe;
          if (*param_4 == (undefined2 *****)0x1) {
            cVar1 = *(char *)(iVar7 + 0xb7c);
            cVar2 = *(char *)(iVar7 + 0xb6c);
            *(bool *)(iVar7 + 0xb7c) = cVar2 == '\0';
            if ((cVar1 == '\0') || (cVar2 != '\0')) {
              *(undefined1 *)(iVar7 + 0xb6c) = 0;
            }
            else {
              *(undefined1 *)(iVar7 + 0xb6c) = 1;
            }
          }
          if (*param_4 == (undefined2 *****)0x2) {
            *(uint *)0xb310 = (uint)*(byte *)(iVar7 + 0xb8e);
            uVar3 = *(undefined2 *)(iVar7 * 4 + 0xb2c);
            *(undefined2 *)0xb26 = *(undefined2 *)(iVar7 * 4 + 0xb2a);
            *(undefined2 *)0xb28 = uVar3;
          }
        }
        uVar8 = (int)*(uint *)0xb310 >> 0xf;
        iVar7 = ((int)((*(uint *)0xb310 ^ uVar8) - uVar8) >> 4 ^ uVar8) - uVar8;
        *(undefined1 *)(iVar7 + 0xb7c) = 1;
        *(undefined1 *)(iVar7 + 0xb6c) = 1;
        return (undefined2 *******)0x62;
      }
      local_6 = (int *******)param_4;
      local_8 = (uint *******)param_3;
      local_a = param_2;
      local_c = (undefined2 *******)0x1;
      local_10 = (undefined2 *******)0xd399;
      local_e = ppppppuVar9;
      func_0x0000a3a5();
      ppppppuVar9 = (undefined2 ******)0x885;
    }
    local_8 = (uint *******)0xd3a1;
    local_6 = (int *******)ppppppuVar9;
    func_0x0000c3ca();
    *param_4 = (undefined2 *****)0x0;
    *(undefined2 *)0xc26 = 0;
    *(undefined2 *)0xb6a = 0;
  }
  return (undefined2 *******)0x63;
}



/* 3ab8:2839  FUN_3ab8_2839  270 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_2839(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined1 local_22 [20];
  undefined1 *local_e;
  undefined1 *local_c;
  int local_a;
  int local_8;
  undefined1 *local_6;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0x3ab8;
  iVar3 = 0x22b2;
  local_6 = (undefined1 *)0xd3c4;
  FUN_21f2_0ebc();
  uVar2 = (int)*(uint *)0xb310 >> 0xf;
  iVar1 = ((int)((*(uint *)0xb310 ^ uVar2) - uVar2) >> 4 ^ uVar2) - uVar2;
  uVar2 = (int)(*(int *)0x1b42 - 1U) >> 0xf;
  local_a = ((int)((*(int *)0x1b42 - 1U ^ uVar2) - uVar2) >> 2 ^ uVar2) - uVar2;
  for (local_6 = (undefined1 *)0x0; (int)local_6 < 4; local_6 = local_6 + 1) {
    local_4 = (undefined1 *)(local_a * (int)local_6 + 2);
    local_6 = (undefined1 *)0x11;
    local_a = -0x2b4d;
    local_8 = iVar3;
    FUN_1000_0599();
    local_4 = (undefined1 *)0xdef;
    iVar3 = 0xdef;
    local_6 = (undefined1 *)0xd4ba;
    func_0x00010526();
    for (local_4 = (undefined1 *)0x0; (int)local_4 < 4; local_4 = local_4 + 1) {
      local_c = local_4 + (int)local_6 * 4;
      local_e = local_c + iVar1 * 0x10;
      local_6 = local_22;
      local_a = -0x2b93;
      local_8 = iVar3;
      local_4 = local_e;
      FUN_10ad_20a9();
      local_4 = (undefined1 *)(local_a * (int)local_6 + 2);
      local_6 = (undefined1 *)(local_8 * (int)local_4 + 0x11);
      local_8 = 0x11f2;
      local_a = 0xd487;
      FUN_1000_0599();
      local_4 = local_22;
      if ((int)local_c < 10) {
        iVar3 = 0;
      }
      else {
        iVar3 = 7;
      }
      local_6 = local_c + iVar3 + 0x30;
      if (iVar1 < 10) {
        iVar3 = 0;
      }
      else {
        iVar3 = 7;
      }
      local_8 = iVar3 + iVar1 + 0x30;
      local_a = 0x6bc8;
      local_c = (undefined1 *)0xdef;
      iVar3 = 0x11f2;
      local_e = (undefined1 *)0xd43e;
      func_0x00012276();
    }
  }
  return 0;
}



/* 3ab8:2947  FUN_3ab8_2947  2031 bytes, 0 callers */

void __cdecl16far FUN_3ab8_2947(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 *****pppppuVar6;
  undefined2 *****pppppuVar7;
  undefined2 unaff_DS;
  undefined4 uVar8;
  undefined2 ***local_164 [5];
  undefined2 ***local_15a [6];
  undefined4 local_14e;
  undefined2 ***local_14a [15];
  undefined2 ***local_12c [10];
  int local_118;
  undefined2 ***local_116 [15];
  undefined2 **local_f8;
  undefined2 ***local_f6 [15];
  undefined2 ***local_d8 [50];
  undefined2 ****local_74;
  undefined2 **local_72;
  undefined2 *local_70;
  undefined2 ***local_6e [5];
  undefined2 ***local_64 [5];
  undefined4 local_5a;
  undefined1 local_56 [50];
  undefined2 ***local_24 [8];
  undefined2 uStack_14;
  undefined2 ****ppppuStack_12;
  undefined4 local_10;
  undefined2 ***local_c;
  undefined4 local_a;
  undefined2 *****local_6;
  undefined2 ***local_4;
  
  local_4 = (undefined2 ***)0x3ab8;
  uVar5 = 0x22b2;
  local_6 = (undefined2 *****)0xd4d2;
  FUN_21f2_0ebc();
  if (((*(char *)0x7e != '\0') && (*(char *)0xd14 != '\x04')) && (1 < *(byte *)0x84)) {
    local_4 = (undefined2 ***)0x22b2;
    local_6 = (undefined2 *****)0xd4f2;
    func_0x0000c3ca();
    local_4 = (undefined2 ***)0xb2fe;
    local_6 = (undefined2 *****)0x90;
    local_a = (undefined2 ****)CONCAT22(local_d8,0x885);
    uVar5 = 0x11f2;
    local_c = (undefined2 ***)0xd504;
    func_0x0001263c();
    local_4 = (undefined2 ***)0x90;
    local_6 = (undefined2 *****)0xbefe;
    local_a = (undefined2 ****)CONCAT22(local_d8,1);
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
    *(undefined1 *)0xd14 = 4;
  }
  local_4 = (undefined2 ***)0x6bd1;
  local_6 = (undefined2 *****)local_f6;
  local_a = (undefined2 ****)CONCAT22(uVar5,0xd533);
  FUN_21f2_3454();
  local_4 = (undefined2 ***)0x60a;
  local_6 = (undefined2 *****)0x6be0;
  local_a = (undefined2 ****)CONCAT22(local_116,0x22b2);
  local_c = (undefined2 ***)0xd547;
  FUN_21f2_3454();
  local_4 = (undefined2 ***)0x6bf0;
  local_6 = (undefined2 *****)local_14a;
  local_a = (undefined2 ****)0x22b2d558;
  FUN_21f2_3454();
  local_4 = (undefined2 ***)0x6bfb;
  local_6 = (undefined2 *****)local_64;
  local_a = (undefined2 ****)0x22b2d567;
  FUN_21f2_3454();
  local_4 = (undefined2 ***)0x6c01;
  local_6 = (undefined2 *****)local_164;
  local_a = (undefined2 ****)0x22b2d577;
  FUN_21f2_3454();
  local_4 = (undefined2 ***)0x6c07;
  local_6 = (undefined2 *****)local_6e;
  local_a = (undefined2 ****)0x22b2d586;
  FUN_21f2_3454();
  local_4 = (undefined2 ***)0x6c0d;
  local_6 = (undefined2 *****)local_24;
  local_a = (undefined2 ****)0x22b2d595;
  FUN_21f2_3454();
  local_4 = (undefined2 ***)0x6c18;
  local_6 = (undefined2 *****)local_12c;
  local_a = (undefined2 ****)0x22b2d5a5;
  FUN_21f2_3454();
  local_4 = (undefined2 ***)0x6c23;
  local_6 = (undefined2 *****)local_15a;
  local_a = (undefined2 ****)0x22b2d5b5;
  FUN_21f2_3454();
  local_4 = (undefined2 ***)0x6c25;
  local_6 = (undefined2 *****)0x1de;
  local_a = (undefined2 ****)CONCAT22(local_56,0x22b2);
  pppppuVar6 = (undefined2 *****)0x22b2;
  local_c = (undefined2 ***)0xd5c8;
  FUN_21f2_3454();
  bVar2 = false;
  if (*(char *)0x132 != '\0') {
    local_4 = (undefined2 ***)0xc3c4;
    local_6 = (undefined2 *****)0x0;
    local_a = (undefined2 ****)0x6c3422b2;
    pppppuVar6 = (undefined2 *****)0x22b2;
    local_c = (undefined2 ***)0xd5e8;
    iVar3 = func_0x000276d7();
    if (iVar3 == 0) {
      bVar2 = true;
    }
  }
  do {
    local_4 = (undefined2 ***)0x1;
    local_a = (undefined2 ****)CONCAT22(0xd5fd,(int)local_a);
    local_6 = pppppuVar6;
    FUN_3ab8_14f2();
    pppppuVar7 = pppppuVar6;
LAB_3ab8_2a7e:
    local_4 = (undefined2 ***)0x6c3a;
    local_6 = (undefined2 *****)local_d8;
    local_a = (undefined2 ****)CONCAT22(pppppuVar7,0xd60c);
    FUN_21f2_3454();
    local_4 = (undefined2 ***)0x60a;
    local_6 = (undefined2 *****)local_d8;
    local_a = (undefined2 ****)0x22b2d61c;
    FUN_21f2_2d26();
    local_4 = (undefined2 ***)0x6c4d;
    local_6 = (undefined2 *****)local_d8;
    local_a = (undefined2 ****)0x22b2d62c;
    FUN_21f2_2d26();
    local_4 = local_15a;
    local_6 = (undefined2 *****)local_d8;
    local_a = (undefined2 ****)0x22b2d63d;
    FUN_21f2_2d26();
    local_4 = local_64;
    local_6 = (undefined2 *****)local_d8;
    local_a = (undefined2 ****)0x22b2d64d;
    FUN_21f2_2d26();
    local_4 = local_15a;
    local_6 = (undefined2 *****)local_d8;
    local_a = (undefined2 ****)0x22b2d65e;
    FUN_21f2_2d26();
    local_4 = local_164;
    local_6 = (undefined2 *****)local_d8;
    local_a = (undefined2 ****)0x22b2d66f;
    FUN_21f2_2d26();
    local_4 = local_15a;
    local_6 = (undefined2 *****)local_d8;
    local_a = (undefined2 ****)0x22b2d680;
    FUN_21f2_2d26();
    local_4 = local_6e;
    local_6 = (undefined2 *****)local_d8;
    local_a = (undefined2 ****)0x22b2d690;
    FUN_21f2_2d26();
    local_4 = local_15a;
    local_6 = (undefined2 *****)local_d8;
    local_a = (undefined2 ****)0x22b2d6a1;
    FUN_21f2_2d26();
    if (bVar2) {
      local_4 = (undefined2 ***)0x6c55;
      local_6 = (undefined2 *****)local_d8;
      local_a = (undefined2 ****)0x22b2d6b8;
      FUN_21f2_2d26();
    }
    local_4 = (undefined2 ***)0x6c5c;
    local_6 = (undefined2 *****)local_d8;
    local_a = (undefined2 ****)0x22b2d6c8;
    FUN_21f2_2d26();
    local_4 = local_15a;
    local_6 = (undefined2 *****)local_d8;
    local_a = (undefined2 ****)0x22b2d6d9;
    FUN_21f2_2d26();
    local_4 = local_d8;
    local_6 = (undefined2 *****)0x5;
    local_a = (undefined2 ****)0x22b2d6e9;
    FUN_1def_07a4();
    local_4 = (undefined2 ***)0x1;
    local_6 = (undefined2 *****)0x1;
    local_a = (undefined2 ****)0x1bb4d6f5;
    FUN_1000_0599();
    local_4 = (undefined2 ***)0xdef;
    local_6 = (undefined2 *****)0xd6fc;
    func_0x00010526();
    local_4 = (undefined2 ***)0x1;
    local_6 = (undefined2 *****)0x8;
    local_a = (undefined2 ****)0xdefd709;
    FUN_1000_0599();
    local_4 = local_d8;
    local_6 = (undefined2 *****)0x1de;
    pppppuVar7 = (undefined2 *****)0x11f2;
    local_a = (undefined2 ****)0xdefd719;
    func_0x00012276();
LAB_3ab8_2b9b:
    local_4 = (undefined2 ***)&local_70;
    local_6 = &local_6;
    local_a._2_2_ = &local_4;
    local_a._0_2_ = 0;
    local_c = (undefined2 ***)0x11f2;
    local_10 = (undefined2 ****)CONCAT22(0xd72e,(undefined2 ****)local_10);
    local_118 = FUN_3ab8_24a5();
    if (*(int *)0x158 != 0) {
LAB_3ab8_30ed:
      uVar5 = 0x11f2;
      local_f8 = (undefined2 **)0x0;
      do {
        local_4 = (undefined2 ***)((int)local_f8 * 6 + 2);
        local_6 = (undefined2 *****)0x11;
        local_a = (undefined2 ****)CONCAT22(uVar5,0xdc86);
        FUN_1000_0599();
        local_4 = (undefined2 ***)0xdef;
        uVar5 = 0xdef;
        local_6 = (undefined2 *****)0xdc8d;
        func_0x00010526();
        local_f8 = (undefined2 **)((int)local_f8 + 1);
      } while ((int)local_f8 < 4);
      local_4 = (undefined2 ***)0x1;
      local_6 = (undefined2 *****)0x1;
      local_a = (undefined2 ****)0xdefdca2;
      FUN_1000_0599();
      local_4 = (undefined2 ***)0xdef;
      local_6 = (undefined2 *****)0xdca9;
      func_0x0000ac64();
      local_4 = (undefined2 ***)0x885;
      local_6 = (undefined2 *****)0xdcae;
      func_0x0000a799();
      *(undefined2 *)0xbc0 = 1;
      local_4 = (undefined2 ***)0x0;
      local_6 = (undefined2 *****)0x885;
      local_a = (undefined2 ****)CONCAT22(0xdcbc,(int)local_a);
      func_0x0001470b();
      return;
    }
    if (local_118 == 99) {
      local_4 = (undefined2 ***)0x11f2;
      local_6 = (undefined2 *****)0xd748;
      FUN_3ab8_2839();
      goto LAB_3ab8_2a7e;
    }
    if ((local_118 < 0x31) || (0x33 < local_118)) {
      if (((undefined2 **)local_70 != (undefined2 **)0x0) &&
         ((0x134 < (int)local_4 && ((int)local_6 < 0x10)))) {
        uVar4 = (int)(local_4 + -0x9a) >> 0xf;
        local_118 = (((int)(((uint)(local_4 + -0x9a) ^ uVar4) - uVar4) >> 6 ^ uVar4) - uVar4) + 1;
        if ((0 < local_118) && (local_118 < 4)) goto LAB_3ab8_2bd8;
      }
      if (((!bVar2) && ((local_118 == 0x34 || (local_118 == 4)))) ||
         ((bVar2 && ((local_118 == 0x35 || (local_118 == 5)))))) goto LAB_3ab8_30ed;
      if ((bVar2) && ((local_118 == 0x34 || (local_118 == 4)))) {
        local_4 = (undefined2 ***)0x11f2;
        local_6 = (undefined2 *****)0xd874;
        FUN_3ab8_4437();
        goto LAB_3ab8_30ed;
      }
      goto LAB_3ab8_2b9b;
    }
LAB_3ab8_2bd8:
    uVar4 = (int)*(uint *)0xb310 >> 0xf;
    local_c = (undefined2 ***)(((int)((*(uint *)0xb310 ^ uVar4) - uVar4) >> 4 ^ uVar4) - uVar4);
    if ((local_118 == 1) || (local_118 == 0x31)) {
      do {
        local_4 = local_14a;
        local_6 = (undefined2 *****)local_116;
        local_a = (undefined2 ****)CONCAT22(local_64,local_24);
        local_c = local_f6;
        local_10 = (undefined2 ****)CONCAT22(local_56,local_d8);
        ppppuStack_12 = (undefined2 *****)0x11f2;
        uStack_14 = 0xd7a2;
        FUN_21f2_3454();
        local_4 = (undefined2 ***)0x1;
        local_6 = (undefined2 *****)0x1;
        local_a = (undefined2 ****)0x22b2d7af;
        FUN_1000_0599();
        local_4 = (undefined2 ***)0xdef;
        local_6 = (undefined2 *****)0xd7b6;
        func_0x00010526();
        local_4 = (undefined2 ***)0x1;
        local_6 = (undefined2 *****)0x1;
        local_a = (undefined2 ****)0xdefd7c0;
        FUN_1000_0599();
        local_4 = local_d8;
        local_6 = (undefined2 *****)0x1de;
        pppppuVar7 = (undefined2 *****)0x11f2;
        local_a = (undefined2 ****)0xdefd7d0;
        func_0x00012276();
        while( true ) {
          local_4 = (undefined2 ***)&local_70;
          local_6 = &local_6;
          local_a._2_2_ = &local_4;
          local_a._0_2_ = 0;
          local_c = (undefined2 ***)0x11f2;
          local_10 = (undefined2 ****)CONCAT22(0xd7e5,(undefined2 ****)local_10);
          iVar3 = FUN_3ab8_24a5();
          if (iVar3 == -1) goto LAB_3ab8_2a7e;
          if (*(int *)0x158 != 0) goto LAB_3ab8_30ed;
          if (iVar3 == 99) break;
          if ((iVar3 == 0x31) ||
             (((((undefined2 **)local_70 != (undefined2 **)0x0 && (0x1a8 < (int)local_4)) &&
               ((int)local_4 < 0x1e8)) && ((int)local_6 < 0x10)))) {
            *(undefined1 *)0xd14 = 2;
            local_72 = (undefined2 ***)0x0;
            for (local_74 = (undefined2 *****)0x1;
                ((int)local_72 <= *(int *)0x14a &&
                (((int)local_72 < *(int *)0x14a || (local_74 <= (undefined2 *****)*(uint *)0x148))))
                ; local_74 = (undefined2 ****)((int)local_74 + 1)) {
              local_4 = (undefined2 ***)local_72;
              local_6 = (undefined2 *****)local_74;
              local_a = (undefined2 ****)CONCAT22(pppppuVar7,0xd8fb);
              uVar8 = func_0x0000013f();
              local_a._0_2_ = (int)uVar8;
              local_4 = (undefined2 ***)(uint)*(byte *)((int)local_a + 0x12);
              local_6 = (undefined2 *****)0x0;
              pppppuVar7 = (undefined2 *****)0x11f2;
              local_a._2_2_ = (undefined2 ****)0xd913;
              iVar3 = func_0x000125f1();
              if (((iVar3 != 0) &&
                  ((undefined2 ***)(uint)(*(byte *)((int)local_a + 0x12) >> 4) == local_c)) &&
                 (((uint)*(byte *)((int)local_a + 0x11) == *(uint *)0xa6a &&
                  ((uint)*(byte *)((int)local_a + 0x10) == *(uint *)0xa6c)))) {
                local_4 = (undefined2 ***)(uint)*(byte *)((int)local_a + 0x12);
                local_6 = (undefined2 *****)0x11f2;
                pppppuVar7 = (undefined2 *****)0x885;
                local_a._2_2_ = (undefined2 ****)0xd8d3;
                iVar3 = func_0x00008854();
                if (iVar3 == 0) {
                  *(undefined1 *)((int)local_a + 0x12) = *(undefined1 *)0xb310;
                }
              }
              local_72 = (undefined2 **)
                         ((int)local_72 + (uint)((undefined2 *****)0xfffe < local_74));
            }
            local_72 = (undefined2 ***)0x0;
            for (local_74 = (undefined2 *****)0x1;
                ((int)local_72 <= *(int *)0x14e &&
                (((int)local_72 < *(int *)0x14e || (local_74 <= (undefined2 *****)*(uint *)0x14c))))
                ; local_74 = (undefined2 ****)((int)local_74 + 1)) {
              local_4 = (undefined2 ***)local_72;
              local_6 = (undefined2 *****)local_74;
              local_a = (undefined2 ****)CONCAT22(pppppuVar7,0xd98c);
              local_5a = func_0x00000271();
              local_4 = (undefined2 ***)(uint)*(byte *)((int)local_5a + 0x1c);
              local_6 = (undefined2 *****)0x0;
              pppppuVar7 = (undefined2 *****)0x11f2;
              local_a._2_2_ = (undefined2 ****)0xd9a4;
              iVar3 = func_0x000125f1();
              if (iVar3 != 0) {
                uVar5 = (undefined2)((ulong)local_5a >> 0x10);
                iVar3 = (int)local_5a;
                if ((((undefined2 ***)(uint)(*(byte *)(iVar3 + 0x1c) >> 4) == local_c) &&
                    ((uint)*(byte *)(iVar3 + 0x1b) == *(uint *)0xa6a)) &&
                   ((uint)*(byte *)(iVar3 + 0x1a) == *(uint *)0xa6c)) {
                  local_4 = (undefined2 ***)(uint)*(byte *)(iVar3 + 0x1c);
                  local_6 = (undefined2 *****)0x11f2;
                  pppppuVar7 = (undefined2 *****)0x885;
                  local_a._2_2_ = (undefined2 ****)0xd964;
                  iVar3 = func_0x00008854();
                  if (iVar3 == 0) {
                    *(undefined1 *)((int)local_5a + 0x1c) = *(undefined1 *)0xb310;
                  }
                }
              }
              local_72 = (undefined2 **)
                         ((int)local_72 + (uint)((undefined2 *****)0xfffe < local_74));
            }
            goto LAB_3ab8_2e5d;
          }
        }
        local_4 = (undefined2 ***)0x11f2;
        local_6 = (undefined2 *****)0xd88c;
        FUN_3ab8_2839();
      } while( true );
    }
LAB_3ab8_2e5d:
    if ((local_118 == 2) || (local_118 == 0x32)) {
      do {
        local_4 = local_14a;
        local_6 = (undefined2 *****)local_116;
        local_a = (undefined2 ****)CONCAT22(local_164,local_12c);
        local_c = local_f6;
        local_10 = (undefined2 ****)CONCAT22(local_56,local_d8);
        uStack_14 = 0xda15;
        ppppuStack_12 = pppppuVar7;
        FUN_21f2_3454();
        local_4 = (undefined2 ***)0x1;
        local_6 = (undefined2 *****)0x1;
        local_a = (undefined2 ****)0x22b2da22;
        FUN_1000_0599();
        local_4 = (undefined2 ***)0xdef;
        local_6 = (undefined2 *****)0xda29;
        func_0x00010526();
        local_4 = (undefined2 ***)0x1;
        local_6 = (undefined2 *****)0x1;
        local_a = (undefined2 ****)0xdefda33;
        FUN_1000_0599();
        local_4 = local_d8;
        local_6 = (undefined2 *****)0x1de;
        pppppuVar7 = (undefined2 *****)0x11f2;
        local_a = (undefined2 ****)0xdefda43;
        func_0x00012276();
        while( true ) {
          local_4 = (undefined2 ***)&local_70;
          local_6 = &local_6;
          local_a._2_2_ = &local_4;
          local_a._0_2_ = 0;
          local_c = (undefined2 ***)0x11f2;
          local_10 = (undefined2 ****)CONCAT22(0xda58,(undefined2 ****)local_10);
          iVar3 = FUN_3ab8_24a5();
          if (iVar3 == -1) goto LAB_3ab8_2a7e;
          if (*(int *)0x158 != 0) goto LAB_3ab8_30ed;
          if (iVar3 == 99) break;
          if ((iVar3 == 0x31) ||
             (((((undefined2 **)local_70 != (undefined2 **)0x0 && (0x1a8 < (int)local_4)) &&
               ((int)local_4 < 0x1e8)) && ((int)local_6 < 0x10)))) {
            *(undefined1 *)0xd14 = 2;
            for (local_f8 = (undefined2 ***)0x1; (int)local_f8 <= *(int *)0x152;
                local_f8 = (undefined2 **)((int)local_f8 + 1)) {
              local_4 = (undefined2 ***)local_f8;
              local_a = (undefined2 ****)CONCAT22(0xdac1,(int)local_a);
              local_6 = pppppuVar7;
              local_10 = (undefined2 ****)func_0x000003ef();
              local_4 = (undefined2 ***)(uint)*(byte *)((int)local_10 + 8);
              local_6 = (undefined2 *****)0x0;
              pppppuVar7 = (undefined2 *****)0x11f2;
              local_a._2_2_ = (undefined2 ****)0xdad8;
              iVar3 = func_0x000125f1();
              if (iVar3 != 0) {
                uVar5 = (undefined2)((ulong)local_10 >> 0x10);
                iVar3 = (int)local_10;
                if (((undefined2 ***)(uint)(*(byte *)(iVar3 + 8) >> 4) == local_c) &&
                   ((uint)*(byte *)(iVar3 + 9) == *(uint *)0xa6a)) {
                  local_4 = (undefined2 ***)(uint)*(byte *)(iVar3 + 8);
                  local_6 = (undefined2 *****)0x11f2;
                  pppppuVar7 = (undefined2 *****)0x885;
                  local_a._2_2_ = (undefined2 ****)0xdb03;
                  iVar3 = func_0x00008854();
                  if (iVar3 == 0) {
                    *(undefined1 *)((int)local_10 + 8) = *(undefined1 *)0xb310;
                  }
                }
              }
            }
            goto LAB_3ab8_2f94;
          }
        }
        local_4 = (undefined2 ***)0x11f2;
        local_6 = (undefined2 *****)0xda7a;
        FUN_3ab8_2839();
      } while( true );
    }
LAB_3ab8_2f94:
    if ((local_118 == 3) || (local_118 == 0x33)) {
      do {
        local_4 = local_14a;
        local_6 = (undefined2 *****)local_116;
        local_a = (undefined2 ****)CONCAT22(local_6e,local_12c);
        local_c = local_f6;
        local_10 = (undefined2 ****)CONCAT22(local_56,local_d8);
        uStack_14 = 0xdb4b;
        ppppuStack_12 = pppppuVar7;
        FUN_21f2_3454();
        local_4 = (undefined2 ***)0x1;
        local_6 = (undefined2 *****)0x1;
        local_a = (undefined2 ****)0x22b2db58;
        FUN_1000_0599();
        local_4 = (undefined2 ***)0xdef;
        local_6 = (undefined2 *****)0xdb5f;
        func_0x00010526();
        local_4 = (undefined2 ***)0x1;
        local_6 = (undefined2 *****)0x1;
        local_a = (undefined2 ****)0xdefdb69;
        FUN_1000_0599();
        local_4 = local_d8;
        local_6 = (undefined2 *****)0x1de;
        pppppuVar7 = (undefined2 *****)0x11f2;
        local_a = (undefined2 ****)0xdefdb79;
        func_0x00012276();
        while( true ) {
          local_4 = (undefined2 ***)&local_70;
          local_6 = &local_6;
          local_a = (undefined2 ****)(ZEXT24(&local_4) << 0x10);
          local_c = (undefined2 ***)0x11f2;
          local_10 = (undefined2 ****)CONCAT22(0xdb8e,(undefined2 ****)local_10);
          iVar3 = FUN_3ab8_24a5();
          if (iVar3 == -1) goto LAB_3ab8_2a7e;
          if (*(int *)0x158 != 0) goto LAB_3ab8_30ed;
          if (iVar3 == 99) break;
          if ((iVar3 == 0x31) ||
             (((((undefined2 **)local_70 != (undefined2 **)0x0 && (0x1a8 < (int)local_4)) &&
               ((int)local_4 < 0x1e8)) && ((int)local_6 < 0x10)))) {
            *(undefined1 *)0xd14 = 2;
            for (local_f8 = (undefined2 ***)0x1; (int)local_f8 <= *(int *)0x150;
                local_f8 = (undefined2 **)((int)local_f8 + 1)) {
              local_4 = (undefined2 ***)local_f8;
              local_a = (undefined2 ****)CONCAT22(0xdbf7,(int)local_a);
              local_6 = pppppuVar7;
              local_14e = func_0x00000398();
              local_4 = (undefined2 ***)(uint)*(byte *)((int)local_14e + 0x15);
              local_6 = (undefined2 *****)0x0;
              pppppuVar7 = (undefined2 *****)0x11f2;
              local_a = (undefined2 ****)CONCAT22(0xdc10,(int)local_a);
              iVar3 = func_0x000125f1();
              if (iVar3 != 0) {
                uVar5 = (undefined2)((ulong)local_14e >> 0x10);
                iVar3 = (int)local_14e;
                if (((undefined2 ***)(uint)(*(byte *)(iVar3 + 0x15) >> 4) == local_c) &&
                   (*(int *)((uint)*(byte *)(iVar3 + 0x14) * 2 + 0x16c) == *(int *)0xa6a)) {
                  local_4 = (undefined2 ***)(uint)*(byte *)(iVar3 + 0x15);
                  local_6 = (undefined2 *****)0x11f2;
                  pppppuVar7 = (undefined2 *****)0x885;
                  local_a = (undefined2 ****)CONCAT22(0xdc49,(int)local_a);
                  iVar3 = func_0x00008854();
                  if (iVar3 == 0) {
                    *(undefined1 *)((int)local_14e + 0x15) = *(undefined1 *)0xb310;
                  }
                }
              }
            }
            goto LAB_3ab8_30db;
          }
        }
        local_4 = (undefined2 ***)0x11f2;
        local_6 = (undefined2 *****)0xdbb0;
        FUN_3ab8_2839();
      } while( true );
    }
LAB_3ab8_30db:
    *(undefined1 *)0xd14 = 2;
    local_4 = (undefined2 ***)0x1;
    pppppuVar6 = (undefined2 *****)0x885;
    local_a = (undefined2 ****)CONCAT22(0xdc69,(int)local_a);
    local_6 = pppppuVar7;
    func_0x0000b1d8();
  } while( true );
}



/* 3ab8:3141  FUN_3ab8_3141  319 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_3141(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  undefined1 local_38 [40];
  int local_10;
  int local_e;
  undefined1 *local_c;
  int local_a;
  undefined1 *local_8;
  undefined1 *local_6;
  int local_4;
  
  local_4 = 0x3ab8;
  uVar7 = 0x22b2;
  local_6 = (undefined1 *)0xdccc;
  FUN_21f2_0ebc();
  uVar1 = *(uint *)0xb310;
  uVar4 = (int)uVar1 >> 0xf;
  uVar5 = *(int *)0x1b3e - *(int *)0xa58 >> 0xf;
  uVar5 = ((int)((*(int *)0x1b3e - *(int *)0xa58 ^ uVar5) - uVar5) >> 3 ^ uVar5) - uVar5;
  uVar6 = (int)uVar5 >> 0xf;
  local_e = ((int)((uVar5 ^ uVar6) - uVar6) >> 2 ^ uVar6) - uVar6;
  uVar5 = (int)(*(int *)0x1b42 - 1U) >> 0xf;
  local_10 = ((int)((*(int *)0x1b42 - 1U ^ uVar5) - uVar5) >> 2 ^ uVar5) - uVar5;
  for (local_c = (undefined1 *)0x0; (int)local_c < 4; local_c = local_c + 1) {
    local_4 = (int)local_c * local_10 + 2;
    local_6 = (undefined1 *)0x11;
    local_a = 0xddec;
    local_8 = (undefined1 *)uVar7;
    FUN_1000_0599();
    local_4 = 0xdef;
    local_6 = (undefined1 *)0xddf3;
    func_0x00010526();
    for (local_8 = (undefined1 *)0x0; uVar7 = 0xdef, (int)local_8 < 4;
        local_8 = (undefined1 *)((int)local_8 + 1)) {
      iVar3 = (int)local_c * 4 + (int)local_8;
      if (iVar3 < 10) {
        iVar2 = 0;
      }
      else {
        iVar2 = 7;
      }
      local_4 = iVar2 + iVar3 + 0x30;
      local_6 = (undefined1 *)0x6c62;
      local_8 = local_38;
      local_a = 0xdef;
      local_c = (undefined1 *)0xdd35;
      FUN_21f2_3454();
      if (local_a == ((int)((uVar1 ^ uVar4) - uVar4) >> 4 ^ uVar4) - uVar4) {
        local_8 = (undefined1 *)0x5;
      }
      else if (local_a == param_1) {
        local_8 = (undefined1 *)0x2;
      }
      else {
        local_8 = (undefined1 *)0x7;
      }
      local_4 = 0xffff;
      local_a = 0xffff;
      local_c = local_38;
      local_e = 0x22b2;
      local_10 = 0xdd71;
      local_6 = local_8;
      FUN_1000_02b5();
      local_4 = local_a;
      local_6 = local_38;
      local_8 = (undefined1 *)0xdef;
      local_a = 0xdd80;
      func_0x00012bf5();
      local_6 = (undefined1 *)0x7;
      local_8 = (undefined1 *)0x7;
      local_a = 1;
      local_c = local_38;
      local_e = 0x11f2;
      local_10 = -0x2265;
      local_4 = local_a;
      FUN_1000_02b5();
    }
  }
  return 0;
}



/* 3ab8:3280  FUN_3ab8_3280  168 bytes, 1 callers */

int __cdecl16far FUN_3ab8_3280(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  uVar3 = (int)(*(int *)0x1b42 - 1U) >> 0xf;
  iVar1 = ((int)((*(int *)0x1b42 - 1U ^ uVar3) - uVar3) >> 2 ^ uVar3) - uVar3;
  uVar3 = *(int *)0x1b3e - *(int *)0xa58 >> 0xf;
  uVar3 = ((int)((*(int *)0x1b3e - *(int *)0xa58 ^ uVar3) - uVar3) >> 3 ^ uVar3) - uVar3;
  uVar4 = (int)uVar3 >> 0xf;
  iVar2 = ((int)((uVar3 ^ uVar4) - uVar4) >> 2 ^ uVar4) - uVar4;
  if ((((param_1 < 0x81) || (iVar2 * 0x20 + 0x7f <= param_1)) || (param_2 < 0x11)) ||
     (((iVar1 * 0x40 + 0xf <= param_2 ||
       (iVar1 = ((param_2 + -0x10) / (iVar1 * 0x10)) * 4 + (param_1 + -0x80) / (iVar2 * 8),
       iVar1 < 0)) || (0xf < iVar1)))) {
    iVar1 = -1;
  }
  return iVar1;
}



/* 3ab8:3328  FUN_3ab8_3328  3319 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_3328(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int unaff_DI;
  int *piVar10;
  undefined2 uVar11;
  uint uVar12;
  uint uVar13;
  uint unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined2 local_192 [14];
  undefined1 local_176;
  undefined2 local_172 [4];
  undefined1 local_16a;
  undefined2 local_162;
  undefined2 local_160;
  undefined1 local_15d;
  undefined2 *local_152;
  undefined2 *local_14e;
  undefined2 local_14a [9];
  undefined1 local_138;
  undefined2 local_134 [11];
  int local_11e;
  int local_116;
  uint local_10c;
  undefined2 local_10a;
  undefined1 local_108 [30];
  int local_ea;
  uint local_e8;
  undefined1 local_e6 [188];
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 auStack_26 [2];
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  uint local_1c;
  int local_1a;
  int local_18 [4];
  undefined1 *local_10;
  undefined1 *local_e;
  undefined1 *local_c;
  
  uVar11 = 0x22b2;
  FUN_21f2_0ebc();
  if (((*(char *)0x7e != '\0') && (*(char *)0xd14 != '\x04')) && (1 < *(byte *)0x84)) {
    func_0x0000c3ca();
    local_c = local_e6;
    local_e = (undefined1 *)0x885;
    uVar11 = 0x11f2;
    local_10 = (undefined1 *)0xdee1;
    func_0x0001263c();
    local_c = local_e6;
    local_e = (undefined1 *)0x1;
    pcVar3 = (code *)swi(0x3f);
    (*pcVar3)();
    *(undefined1 *)0xd14 = 4;
  }
  local_e = (undefined1 *)0xdf10;
  local_c = (undefined1 *)uVar11;
  FUN_21f2_3454();
  local_c = (undefined1 *)0x22b2;
  local_e = (undefined1 *)0xdf20;
  FUN_21f2_3454();
  local_c = (undefined1 *)0x22b2;
  uVar11 = 0x22b2;
  local_e = (undefined1 *)0xdf30;
  FUN_21f2_3454();
  local_ea = 0;
  local_10a = 0;
LAB_3ab8_33bc:
  local_c = (undefined1 *)0xdf44;
  FUN_3ab8_196a();
LAB_3ab8_33c5:
  if (*(char *)0xb782 == '\0') {
    func_0x0000b585();
    uVar11 = 0x885;
    func_0x00009a93();
  }
  if (*(char *)0xb782 == '\0') {
    *(undefined2 *)0xa5c = *(undefined2 *)0xa58;
    uVar4 = *(undefined2 *)0xa5a;
  }
  else {
    *(undefined2 *)0xa5c = *(undefined2 *)0xa6e;
    uVar4 = *(undefined2 *)0x1b40;
  }
  *(undefined2 *)0xa60 = uVar4;
LAB_3ab8_33f4:
  do {
    local_c = (undefined1 *)0xdf7c;
    FUN_3ab8_3141();
    *(undefined2 *)0xc22 = 1;
    local_e = (undefined1 *)0xdf9e;
    local_c = (undefined1 *)uVar11;
    FUN_1000_0599();
    func_0x00010526();
    local_c = (undefined1 *)0xdef;
    local_e = (undefined1 *)0xdfb2;
    FUN_1000_0599();
    local_c = (undefined1 *)0xdef;
    local_e = (undefined1 *)0xdfc1;
    func_0x00012276();
    local_c = (undefined1 *)0x6c8c;
    local_e = local_e6;
    local_10 = (undefined1 *)0x11f2;
    local_18[3] = 0xdfdb;
    FUN_21f2_3454();
    local_c = (undefined1 *)0x22b2;
    local_e = (undefined1 *)0xdfec;
    FUN_1def_07a4();
    local_c = (undefined1 *)0x1bb4;
    local_e = (undefined1 *)0xdffb;
    FUN_1000_0599();
    uVar11 = 0x11f2;
    local_c = (undefined1 *)0xe007;
    func_0x00012276();
    do {
      local_c = &stack0xfffc;
      local_e = (undefined1 *)0x1;
      local_10 = (undefined1 *)0x11f2;
      local_18[3] = 0xe01c;
      local_11e = FUN_3ab8_24a5();
      if ((*(int *)0x158 != 0) || (local_11e == -1)) goto LAB_3ab8_34aa;
      if (local_11e == 0x62) goto LAB_3ab8_33c5;
      if (local_11e == 99) goto LAB_3ab8_33bc;
      if ((local_11e == 0x31) ||
         (((local_18[0] != 0 && (0x140 < unaff_DI)) &&
          ((unaff_DI < 0x188 && ((int)local_18 < 0x10)))))) {
        local_ea = 0;
LAB_3ab8_3568:
        do {
          local_c = (undefined1 *)0xe0f0;
          FUN_3ab8_3141();
          local_c = local_108 + local_ea * 10;
          local_e = (undefined1 *)0x6c9d;
          local_10 = local_e6;
          local_18[2] = -0x1ed7;
          local_18[3] = uVar11;
          FUN_21f2_3454();
          local_c = (undefined1 *)0x22b2;
          local_e = (undefined1 *)0xe136;
          FUN_1000_0599();
          func_0x00010526();
          local_c = (undefined1 *)0xdef;
          local_e = (undefined1 *)0xe147;
          FUN_1000_0599();
          local_c = (undefined1 *)0xe152;
          func_0x00012276();
          local_c = (undefined1 *)0x11f2;
          local_e = (undefined1 *)0xe160;
          FUN_1000_0599();
          local_c = (undefined1 *)0xe16c;
          func_0x00012276();
          local_c = (undefined1 *)0x11f2;
          local_e = (undefined1 *)0xe17a;
          FUN_1000_0599();
          local_c = (undefined1 *)0x6cb2;
          local_e = (undefined1 *)0xdef;
          uVar11 = 0x11f2;
          local_10 = (undefined1 *)0xe1a1;
          func_0x00012276();
          do {
            local_c = &stack0xfffc;
            local_e = (undefined1 *)0x1;
            local_10 = (undefined1 *)0x11f2;
            local_18[3] = 0xe1b8;
            local_11e = FUN_3ab8_24a5();
            if (*(int *)0x158 != 0) goto LAB_3ab8_34aa;
            if (local_11e == -1) goto LAB_3ab8_33f4;
            if ((local_11e == 0x31) ||
               (((local_18[0] != 0 && (0x150 < unaff_DI)) &&
                ((unaff_DI < 0x1e0 && ((int)local_18 < 0x10)))))) {
              *(int *)0x6cec = *(int *)0x6cec + 1;
              if (2 < *(int *)0x6cec) {
                *(undefined2 *)0x6cec = 0;
              }
              break;
            }
            if ((local_11e == 0x32) ||
               (((local_18[0] != 0 && (0x1e8 < unaff_DI)) &&
                ((unaff_DI < 0x260 && ((int)local_18 < 0x10)))))) {
              *(int *)0x6cee = *(int *)0x6cee + 1;
              if (2 < *(int *)0x6cee) {
                *(undefined2 *)0x6cee = 0;
              }
              break;
            }
            if (local_11e == 0x62) {
LAB_3ab8_3557:
              if (*(char *)0xb782 == '\0') {
                func_0x0000b585();
                uVar11 = 0x885;
                func_0x00009a93();
              }
              break;
            }
            if (local_11e == 99) {
              local_c = (undefined1 *)0xe0ca;
              FUN_3ab8_196a();
              if (*(char *)0xb782 == '\0') {
                uVar11 = 0x885;
                func_0x0000b585();
              }
              goto LAB_3ab8_3557;
            }
            if (((local_18[0] != 0) && (*(int *)0xa58 < unaff_DI)) && (0x10 < (int)local_18)) {
              local_c = (undefined1 *)0x11f2;
              local_e = (undefined1 *)0xe273;
              local_10 = (undefined1 *)FUN_3ab8_3280();
              if (((-1 < (int)local_10) && ((int)local_10 < 0x10)) && (local_10 != local_e))
              goto LAB_3ab8_3706;
            }
          } while (local_11e == 0);
        } while( true );
      }
      if ((local_11e == 0x32) ||
         ((((local_18[0] != 0 && (400 < unaff_DI)) && (unaff_DI < 0x1d8)) && ((int)local_18 < 0x10))
         )) {
        local_ea = 1;
        goto LAB_3ab8_3568;
      }
      if ((local_11e == 0x33) ||
         ((((local_18[0] != 0 && (0x1e0 < unaff_DI)) && (unaff_DI < 0x228)) &&
          ((int)local_18 < 0x10)))) goto LAB_3ab8_34aa;
    } while (local_11e == 0);
  } while( true );
LAB_3ab8_3706:
  local_c = (undefined1 *)0xe28d;
  FUN_3ab8_3141();
  local_e = (undefined1 *)0xe2ac;
  local_c = (undefined1 *)uVar11;
  FUN_1000_0599();
  func_0x00010526();
  local_c = (undefined1 *)0xdef;
  local_e = (undefined1 *)0xe2bd;
  FUN_1000_0599();
  local_c = (undefined1 *)0xe2c8;
  func_0x00012276();
  local_c = (undefined1 *)0x1;
  local_e = (undefined1 *)0xc;
  local_10 = local_108 + local_ea * 10;
  local_18[3] = 0x11f2;
  local_18[2] = 0xe2eb;
  FUN_1000_02b5();
  local_c = local_e6;
  local_e = (undefined1 *)0xdef;
  local_10 = (undefined1 *)0xe31d;
  FUN_21f2_3454();
  local_c = (undefined1 *)0x1;
  local_e = (undefined1 *)0x14;
  local_10 = local_e6;
  local_18[3] = 0x22b2;
  local_18[2] = 0xe33a;
  FUN_1000_02b5();
  local_c = (undefined1 *)0xdef;
  local_e = (undefined1 *)0xe34a;
  FUN_1000_0599();
  local_c = (undefined1 *)0xdef;
  local_e = (undefined1 *)0xe359;
  func_0x00012276();
  local_c = local_e6;
  local_e = (undefined1 *)0x11f2;
  local_10 = (undefined1 *)0xe37d;
  FUN_21f2_3454();
  local_c = (undefined1 *)0x1;
  local_e = (undefined1 *)0x23;
  local_10 = local_e6;
  local_18[3] = 0x22b2;
  local_18[2] = -0x1c66;
  FUN_1000_02b5();
  local_c = (undefined1 *)0xdef;
  local_e = (undefined1 *)0xe3aa;
  FUN_1000_0599();
  local_c = (undefined1 *)0xe3b5;
  func_0x00012276();
  local_c = (undefined1 *)0x11f2;
  local_e = (undefined1 *)0xe3c3;
  FUN_1000_0599();
  uVar11 = 0x11f2;
  local_c = (undefined1 *)0xe3ce;
  func_0x00012276();
  while( true ) {
    local_c = &stack0xfffc;
    local_e = (undefined1 *)0x2;
    local_10 = (undefined1 *)0x11f2;
    local_18[3] = 0xe3e3;
    local_11e = FUN_3ab8_24a5();
    if (*(int *)0x158 != 0) goto LAB_3ab8_34aa;
    if (local_11e == -1) goto LAB_3ab8_3568;
    if (local_11e == 0x62) goto LAB_3ab8_3881;
    if ((local_11e == 0x31) ||
       (((local_18[0] != 0 && (400 < unaff_DI)) && ((unaff_DI < 0x1e8 && ((int)local_18 < 0x10))))))
    break;
    if ((local_11e == 0x32) ||
       ((((local_18[0] != 0 && (0x1f0 < unaff_DI)) && (unaff_DI < 0x248)) && ((int)local_18 < 0x10))
       )) goto LAB_3ab8_3568;
    if (((local_18[0] != 0) && (*(int *)0xa58 < unaff_DI)) && (0x10 < (int)local_18)) {
      if (local_18[0] == 1) break;
      goto LAB_3ab8_3568;
    }
    if (local_11e != 0) goto LAB_3ab8_3706;
  }
  func_0x000297e6();
  uVar14 = ((uint)local_10 & 0x3fff) == 0;
  func_0x000297e6();
  FUN_28b3_1181();
  if (!(bool)uVar14) {
    local_c = (undefined1 *)0xe45c;
    func_0x00012276();
    do {
      local_c = (undefined1 *)0x11f2;
      local_e = (undefined1 *)0xe467;
      FUN_1000_0599();
      func_0x00010526();
      local_c = (undefined1 *)0xdef;
      local_e = (undefined1 *)0xe478;
      FUN_1000_0599();
      local_c = (undefined1 *)0xe483;
      func_0x00012276();
      local_c = (undefined1 *)0x11f2;
      local_e = (undefined1 *)0xe491;
      FUN_1000_0599();
      local_c = (undefined1 *)0xe49c;
      func_0x00012276();
      local_c = (undefined1 *)0x11f2;
      local_e = (undefined1 *)0xe4aa;
      FUN_1000_0599();
      uVar11 = 0x11f2;
      local_c = (undefined1 *)0xe4b5;
      func_0x00012276();
      do {
        local_c = &stack0xfffc;
        local_e = (undefined1 *)0x2;
        local_10 = (undefined1 *)0x11f2;
        local_18[3] = 0xe4ca;
        local_11e = FUN_3ab8_24a5();
        if (*(int *)0x158 != 0) goto LAB_3ab8_34aa;
        if (local_11e == -1) goto LAB_3ab8_3568;
        if (local_11e == 0x62) {
          local_11e = 0x62;
          goto LAB_3ab8_3881;
        }
        if ((local_11e == 0x31) ||
           (((local_18[0] != 0 && (400 < unaff_DI)) &&
            ((unaff_DI < 0x1e8 && ((int)local_18 < 0x10)))))) goto LAB_3ab8_39dd;
        if ((local_11e == 0x32) ||
           ((((local_18[0] != 0 && (0x1f0 < unaff_DI)) && (unaff_DI < 0x248)) &&
            ((int)local_18 < 0x10)))) goto LAB_3ab8_3568;
        if (((local_18[0] != 0) && (*(int *)0xa58 < unaff_DI)) && (0x10 < (int)local_18)) {
          if (local_18[0] == 1) goto LAB_3ab8_39dd;
          goto LAB_3ab8_3568;
        }
      } while (local_11e == 0);
    } while( true );
  }
LAB_3ab8_39dd:
  func_0x0000c3ca();
  *(undefined1 *)0xd14 = 2;
  uVar6 = (int)*(uint *)0xb310 >> 0xf;
  local_e = (undefined1 *)(((int)((*(uint *)0xb310 ^ uVar6) - uVar6) >> 4 ^ uVar6) - uVar6);
  local_18[2] = (int)local_e * 0x10;
  local_c = (undefined1 *)*(uint *)0x148;
  local_1a = 0;
  uVar6 = 0x885;
  uVar7 = *(uint *)0x14a;
  for (local_1c = 1;
      (uVar13 = local_1c, local_1a <= (int)uVar7 &&
      ((local_1a < (int)uVar7 || (local_1c <= local_c)))); local_1c = local_1c + 1) {
    uVar7 = 0;
    local_e = (undefined1 *)0xe629;
    local_c = (undefined1 *)uVar6;
    local_14e = (undefined2 *)func_0x0000013f();
    uVar11 = (undefined2)((ulong)local_14e >> 0x10);
    puVar9 = (undefined2 *)local_14e;
    if ((*(byte *)((int)puVar9 + 0x11) < 0x5a) &&
       (local_e8 = (uint)(*(byte *)(puVar9 + 9) >> 4),
       (undefined1 *)(uint)(*(byte *)(puVar9 + 9) >> 4) == local_10)) {
      local_116 = (*(byte *)(puVar9 + 9) & 0xf) + local_18[2];
      if (local_ea == 0) {
        uVar13 = 0;
        uVar7 = 0x885;
        local_c = (undefined1 *)0xe5fa;
        iVar5 = func_0x00008854();
        if (iVar5 == 0) {
          *(undefined1 *)((undefined2 *)local_14e + 9) = (undefined1)local_116;
        }
      }
      else {
        puVar8 = local_134;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
        puVar9 = local_14a;
        puVar8 = local_134;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar1;
        }
        uVar13 = 0;
        local_c = (undefined1 *)0x0;
        uVar7 = 0x11f2;
        local_e = (undefined1 *)0xe693;
        iVar5 = func_0x000185d3();
        if (iVar5 != 0) {
          local_138 = (undefined1)local_116;
          uVar13 = *(uint *)0x148;
          local_c = (undefined1 *)0x11f2;
          uVar7 = 0;
          local_e = (undefined1 *)0xe6b1;
          local_152 = (undefined2 *)func_0x0000013f();
          puVar8 = (undefined2 *)local_152;
          puVar9 = local_14a;
          for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar2 = *puVar1;
          }
        }
      }
    }
    local_1a = local_1a + (uint)(0xfffe < local_1c);
    uVar6 = uVar7;
    uVar7 = uVar13;
  }
  local_c = (undefined1 *)*(uint *)0x14c;
  uVar7 = *(uint *)0x14e;
  local_1a = 0;
  for (local_1c = 1;
      (uVar13 = local_1c, local_1a <= (int)uVar7 &&
      ((local_1a < (int)uVar7 || (local_1c <= local_c)))); local_1c = local_1c + 1) {
    uVar12 = 0;
    local_e = (undefined1 *)0xe72e;
    local_c = (undefined1 *)uVar6;
    local_152 = (undefined2 *)func_0x00000271();
    uVar11 = (undefined2)((ulong)local_152 >> 0x10);
    puVar9 = (undefined2 *)local_152;
    uVar7 = uVar13;
    if ((*(byte *)((int)puVar9 + 0x1b) < 0x5a) &&
       (local_e8 = (uint)(*(byte *)(puVar9 + 0xe) >> 4),
       (undefined1 *)(uint)(*(byte *)(puVar9 + 0xe) >> 4) == local_10)) {
      local_116 = (*(byte *)(puVar9 + 0xe) & 0xf) + local_18[2];
      if (local_ea == 0) {
        uVar12 = 0x885;
        local_c = (undefined1 *)0xe6ff;
        iVar5 = func_0x00008854();
        uVar7 = 0;
        if (iVar5 == 0) {
          *(undefined1 *)((undefined2 *)local_152 + 0xe) = (undefined1)local_116;
        }
      }
      else {
        puVar8 = local_172;
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
        puVar9 = local_192;
        puVar8 = local_172;
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar1;
        }
        puVar8 = auStack_26;
        puVar9 = local_172;
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
        uStack_28 = 0;
        uVar12 = 0x11f2;
        uStack_2a = 0xe79e;
        iVar5 = func_0x00013c56();
        uVar7 = unaff_SS;
        if (iVar5 != 0) {
          local_176 = (undefined1)local_116;
          uVar7 = *(uint *)0x14c;
          local_c = (undefined1 *)0x11f2;
          uVar12 = 0;
          local_e = (undefined1 *)0xe7bd;
          local_14e = (undefined2 *)func_0x00000271();
          puVar8 = (undefined2 *)local_14e;
          puVar9 = local_192;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar2 = *puVar1;
          }
        }
      }
    }
    local_1a = local_1a + (uint)(0xfffe < local_1c);
    uVar6 = uVar12;
  }
  local_c = (undefined1 *)*(uint *)0x150;
  uVar7 = (int)local_c >> 0xf;
  for (local_10c = 1;
      ((int)local_10c >> 0xf <= (int)uVar7 &&
      (((int)local_10c >> 0xf < (int)uVar7 || (local_10c <= local_c)))); local_10c = local_10c + 1)
  {
    uVar13 = 0;
    local_c = (undefined1 *)0xe82d;
    local_152 = (undefined2 *)func_0x00000398();
    uVar11 = (undefined2)((ulong)local_152 >> 0x10);
    puVar9 = (undefined2 *)local_152;
    uVar7 = uVar6;
    if ((*(byte *)(puVar9 + 10) < 0x5a) &&
       (local_e8 = (uint)(*(byte *)((int)puVar9 + 0x15) >> 4), (undefined1 *)local_e8 == local_10))
    {
      local_116 = (*(byte *)((int)puVar9 + 0x15) & 0xf) + local_18[2];
      if (local_ea == 0) {
        uVar13 = 0x885;
        local_c = (undefined1 *)0xe804;
        iVar5 = func_0x00008854();
        uVar7 = 0;
        if (iVar5 == 0) {
          *(undefined1 *)((int)(undefined2 *)local_152 + 0x15) = (undefined1)local_116;
        }
      }
      else {
        puVar8 = local_192;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
        puVar9 = local_172;
        puVar8 = local_192;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar1;
        }
        puVar8 = &uStack_1e;
        puVar9 = local_192;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
        uStack_20 = 0;
        uVar13 = 0x18b3;
        uStack_22 = 0xe89c;
        iVar5 = func_0x0001b0b0();
        uVar7 = unaff_SS;
        if (iVar5 != 0) {
          local_15d = (undefined1)local_116;
          local_c = (undefined1 *)0xe8b7;
          uVar15 = func_0x00000398();
          uVar11 = (undefined2)((ulong)uVar15 >> 0x10);
          local_162 = *(undefined2 *)((int)uVar15 + 0x10);
          local_160 = *(undefined2 *)((int)uVar15 + 0x12);
          uVar13 = 0;
          local_c = (undefined1 *)0xe8d5;
          local_14e = (undefined2 *)func_0x00000398();
          puVar8 = (undefined2 *)local_14e;
          puVar9 = local_172;
          for (iVar5 = 0xc; uVar7 = 0, iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar2 = *puVar1;
          }
        }
      }
    }
    uVar6 = uVar13;
  }
  local_c = (undefined1 *)*(uint *)0x152;
  uVar7 = (int)local_c >> 0xf;
  for (local_10c = 1;
      ((int)local_10c >> 0xf <= (int)uVar7 &&
      (((int)local_10c >> 0xf < (int)uVar7 || (local_10c <= local_c)))); local_10c = local_10c + 1)
  {
    uVar13 = 0;
    local_c = (undefined1 *)0xe944;
    local_152 = (undefined2 *)func_0x000003ef();
    uVar11 = (undefined2)((ulong)local_152 >> 0x10);
    puVar9 = (undefined2 *)local_152;
    uVar7 = uVar6;
    if ((*(byte *)((int)puVar9 + 9) < 0x5a) &&
       (local_e8 = (uint)(*(byte *)(puVar9 + 4) >> 4),
       (undefined1 *)(uint)(*(byte *)(puVar9 + 4) >> 4) == local_10)) {
      local_116 = (*(byte *)(puVar9 + 4) & 0xf) + local_18[2];
      if (local_ea == 0) {
        uVar13 = 0x885;
        local_c = (undefined1 *)0xe91b;
        iVar5 = func_0x00008854();
        uVar7 = 0;
        if (iVar5 == 0) {
          *(undefined1 *)((undefined2 *)local_152 + 4) = (undefined1)local_116;
        }
      }
      else {
        puVar8 = local_192;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
        puVar9 = local_172;
        puVar8 = local_192;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar1;
        }
        piVar10 = local_18 + 3;
        puVar9 = local_192;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = piVar10;
          piVar10 = piVar10 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
        local_18[2] = 0;
        uVar13 = 0x1bb4;
        local_18[1] = 0xe9b3;
        iVar5 = func_0x0001efe0();
        uVar7 = unaff_SS;
        if (iVar5 != 0) {
          local_16a = (undefined1)local_116;
          uVar13 = 0;
          local_c = (undefined1 *)0xe9ce;
          local_14e = (undefined2 *)func_0x000003ef();
          puVar8 = (undefined2 *)local_14e;
          puVar9 = local_172;
          for (iVar5 = 6; uVar7 = 0x1bb4, iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar2 = *puVar1;
          }
        }
      }
    }
    uVar6 = uVar13;
  }
  *(undefined1 *)0xd14 = 2;
  uVar7 = uVar6;
  if (*(int *)0x6cec < 2) {
    uVar7 = 0x11f2;
    local_e = (undefined1 *)0xea0e;
    local_c = (undefined1 *)uVar6;
    func_0x00012bf5();
    if ((*(byte *)((int)local_e + 0xb6c) & 6) == 0) {
      local_c = (undefined1 *)0x11f2;
      uVar7 = 0x11f2;
      local_e = (undefined1 *)0xea36;
      FUN_12c1_0025();
      if ((*(int *)0x6cec == 0) && ((*(byte *)((int)local_10 + 0xb6c) & 6) == 0)) {
        *(undefined1 *)0xbf48 = 0;
        local_c = (undefined1 *)0x11f2;
        uVar7 = 0x11f2;
        local_e = (undefined1 *)0xea58;
        FUN_12c1_0025();
      }
    }
  }
  if (*(int *)0x6cee < 2) {
    for (local_10c = 0; (int)local_10c < 0x10; local_10c = local_10c + 1) {
      local_e = (undefined1 *)0xea7c;
      local_c = (undefined1 *)uVar7;
      FUN_10ad_20a9();
      uVar7 = 0x885;
      local_c = (undefined1 *)0xea8b;
      iVar5 = func_0x00008854();
      if (iVar5 == 0) {
        local_c = (undefined1 *)0x885;
        uVar7 = 0x11f2;
        local_e = (undefined1 *)0xeaa1;
        FUN_10ad_20e9();
        if (*(int *)0x6cee == 0) {
          uVar7 = 0x885;
          local_c = (undefined1 *)0xeabb;
          iVar5 = func_0x00008854();
          if (iVar5 == 0) {
            *(undefined1 *)0xbf48 = 0;
            local_c = (undefined1 *)0x885;
            uVar7 = 0x11f2;
            local_e = (undefined1 *)0xeada;
            FUN_10ad_20e9();
          }
        }
      }
    }
  }
  if (*(char *)0xb782 == '\0') {
    *(undefined2 *)0xa5c = *(undefined2 *)0xa58;
    uVar11 = *(undefined2 *)0xa5a;
  }
  else {
    *(undefined2 *)0xa5c = *(undefined2 *)0xa6e;
    uVar11 = *(undefined2 *)0x1b40;
  }
  *(undefined2 *)0xa60 = uVar11;
  func_0x0000c340();
  local_c = (undefined1 *)0xeb0a;
  func_0x0000b1d8();
  uVar11 = 0x885;
  func_0x0000abfa();
  goto LAB_3ab8_33bc;
LAB_3ab8_3881:
  func_0x0000b585();
  uVar11 = 0x885;
  func_0x00009a93();
  goto LAB_3ab8_3706;
LAB_3ab8_34aa:
  uVar11 = 0x11f2;
  for (local_10c = 0; local_c = (undefined1 *)uVar11, (int)local_10c < 4; local_10c = local_10c + 1)
  {
    local_e = (undefined1 *)0xeb31;
    FUN_1000_0599();
    uVar11 = 0xdef;
    func_0x00010526();
  }
  local_e = (undefined1 *)0xeb44;
  FUN_1000_0599();
  if (*(char *)0xb782 == '\0') {
    *(undefined2 *)0xa5c = *(undefined2 *)0xa58;
    uVar11 = *(undefined2 *)0xa5a;
  }
  else {
    *(undefined2 *)0xa5c = *(undefined2 *)0xa6e;
    uVar11 = *(undefined2 *)0x1b40;
  }
  *(undefined2 *)0xa60 = uVar11;
  *(undefined2 *)0xc26 = 0;
  *(undefined2 *)0xb6a = 0;
  if (*(char *)0xb782 == '\0') {
    func_0x0000b6ea();
  }
  local_c = (undefined1 *)0xeb80;
  func_0x0001470b();
  uVar11 = 0x885;
  func_0x0000a799();
  *(undefined2 *)0xbc0 = 1;
  if (*(int *)0x158 != 0) {
    return 0xff91;
  }
  if (local_11e != -1) {
    return 0;
  }
  goto LAB_3ab8_33bc;
}



/* 3ab8:402a  FUN_3ab8_402a  790 bytes, 2 callers */

void __cdecl16far FUN_3ab8_402a(int param_1)

{
  int iVar1;
  undefined2 ***pppuVar2;
  uint uVar3;
  int unaff_SI;
  undefined2 unaff_DS;
  bool bVar4;
  undefined2 **local_4e;
  undefined2 **local_4c;
  undefined1 local_4a [48];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined1 *puStack_14;
  undefined1 *local_12;
  undefined2 *local_10;
  undefined2 ***local_e;
  undefined2 **local_c;
  undefined1 ***local_a;
  undefined2 ***local_8;
  
  FUN_21f2_0ebc();
  local_8 = (undefined2 ***)0x0;
  local_a = (undefined1 ***)0x22b2;
  local_c = (undefined2 **)0xebbf;
  func_0x0000daa6();
  *(undefined2 *)0xc22 = 0;
  if (param_1 == 0) {
    local_8 = (undefined2 ***)0x885;
    local_a = (undefined1 ***)0xee8f;
    FUN_1885_2ec3();
    local_8 = (undefined2 ***)0x1b6e;
    local_a = (undefined1 ***)0xee94;
    func_0x00013e19();
    local_8 = (undefined2 ***)0x3;
    local_a = (undefined1 ***)0x11f2;
    local_c = (undefined2 **)0xee9d;
    func_0x0000f2d3();
    local_8 = (undefined2 ***)0xdef;
    local_a = (undefined1 ***)0xeea3;
    func_0x0000a7c5();
    local_8 = (undefined2 ***)0x0;
    local_a = (undefined1 ***)0x885;
    local_c = (undefined2 **)0xeeab;
    func_0x0001470b();
    *(undefined2 *)0xc08 = 0;
    *(undefined2 *)0xc04 = 0;
    *(undefined2 *)0xbc0 = 1;
  }
  else {
    local_8 = &local_e;
    local_a = (undefined1 ***)&local_c;
    local_c = &local_10;
    local_e = (undefined2 ***)&stack0xfffa;
    local_10 = (undefined2 *)0x885;
    local_12 = (undefined1 *)0xebe4;
    func_0x0000dcbd();
    if ((int)local_c < 1) {
      param_1 = 2;
      if (0x180 < (int)local_e) {
        param_1 = 3;
      }
      local_8 = (undefined2 ***)0x885;
      local_a = (undefined1 ***)0xec06;
      FUN_1000_060e();
      local_4a[0] = 0;
      local_8 = (undefined2 ***)0x32;
      local_a = (undefined1 ***)0x18;
      local_c = (undefined2 **)0x15;
      local_e = (undefined2 ***)local_4a;
      local_10 = (undefined2 *)0xdef;
      local_12 = (undefined1 *)0xec1f;
      iVar1 = FUN_12c1_03d3();
      if (iVar1 < 0) {
        local_4a[0] = 0;
      }
      local_8 = (undefined2 ***)0x11f2;
      local_a = (undefined1 ***)0xec2f;
      func_0x00002cc6();
      local_8 = (undefined2 ***)0x2c1;
      local_a = (undefined1 ***)0xec34;
      FUN_1000_0620();
      local_8 = (undefined2 ***)0x18;
      local_a = (undefined1 ***)0x15;
      local_c = (undefined2 **)0xdef;
      local_e = (undefined2 ***)0xec41;
      FUN_1000_0599();
      local_8 = (undefined2 ***)0xdef;
      local_a = (undefined1 ***)0xec48;
      func_0x00010526();
      local_8 = (undefined2 ***)0x1;
      local_a = (undefined1 ***)0x1;
      local_c = (undefined2 **)0xdef;
      local_e = (undefined2 ***)0xec52;
      FUN_1000_0599();
      local_10 = (undefined2 *)0xdef;
      do {
        local_8 = &local_e;
        local_a = (undefined1 ***)&local_c;
        local_c = &local_10;
        local_e = (undefined2 ***)&stack0xfffa;
        local_12 = (undefined1 *)0xec69;
        func_0x0000dcbd();
        if (unaff_SI != 0) break;
        bVar4 = local_10 == (undefined2 *)0x0;
        local_10 = (undefined2 *)0x885;
      } while (bVar4);
      do {
        local_8 = &local_8;
        local_a = (undefined1 ***)&stack0xfffc;
        local_c = (undefined2 **)&local_12;
        local_e = &local_a;
        local_10 = (undefined2 *)0x885;
        local_12 = (undefined1 *)0xec8d;
        func_0x0000dcbd();
        if ((local_a == (undefined1 ***)0x0) && ((undefined2 *)local_12 == (undefined2 *)0x0))
        break;
      } while ((local_a == (undefined1 ***)0x0) || ((undefined2 *)local_12 == (undefined2 *)0x0));
      local_4c = (undefined2 ***)0x0;
      local_4e = (undefined1 ***)0x7;
      if ((local_a != (undefined1 ***)0x0) && ((undefined2 *)local_12 != (undefined2 *)0x0)) {
        local_4e = (undefined1 ***)0x0;
        local_10 = (undefined2 *)0x0;
      }
      if (local_10 != (undefined2 *)0x0) {
        local_4c = (undefined2 ***)0xffff;
      }
      do {
        local_8 = &local_8;
        local_a = (undefined1 ***)&stack0xfffc;
        local_c = (undefined2 **)&local_12;
        local_e = &local_a;
        local_10 = (undefined2 *)0x885;
        local_12 = (undefined1 *)0xee15;
        func_0x0000dcbd();
        if (local_a == (undefined1 ***)0x0) break;
      } while ((undefined2 *)local_12 != (undefined2 *)0x0);
      if (param_1 == 1) {
        local_8 = (undefined2 ***)0x0;
        local_a = (undefined1 ***)0x885;
        local_c = (undefined2 **)0xee32;
        func_0x0000daa6();
        local_8 = (undefined2 ***)0x885;
        local_a = (undefined1 ***)0xee38;
        func_0x0000ac64();
        local_8 = (undefined2 ***)0x885;
        local_a = (undefined1 ***)0xee3d;
        func_0x0000a799();
      }
      uVar3 = (int)local_e >> 0xf;
      local_8 = (undefined2 ***)
                ((((int)(((uint)local_e ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3) + 1);
      uVar3 = (int)local_c >> 0xf;
      pppuVar2 = (undefined2 ***)
                 ((((int)(((uint)local_c ^ uVar3) - uVar3) >> 3 ^ uVar3) - uVar3) + 1);
      local_c = (undefined2 **)0x885;
      local_e = (undefined2 ***)0xee6e;
      local_a = (undefined1 ***)pppuVar2;
      FUN_1000_0599();
      local_8 = (undefined2 ***)local_4c;
      local_a = (undefined1 ***)local_4e;
      local_c = local_4c;
      local_10 = (undefined2 *)local_4a;
      local_12 = (undefined1 *)0xdef;
      puStack_14 = (undefined1 *)0xee85;
      local_e = pppuVar2;
      FUN_1000_02b5();
    }
    else {
      local_8 = (undefined2 ***)0x0;
      local_a = (undefined1 ***)0x885;
      local_c = (undefined2 **)0xecaf;
      func_0x0000daa6();
      local_8 = (undefined2 ***)0x0;
      local_a = (undefined1 ***)0x0;
      local_c = (undefined2 **)0x0;
      local_e = (undefined2 ***)0x7;
      local_10 = (undefined2 *)0x11;
      local_12 = (undefined1 *)0x0;
      puStack_14 = (undefined1 *)0x7;
      uStack_16 = 0;
      uStack_18 = 0x885;
      uStack_1a = 0xecd0;
      func_0x0000f350();
      local_8 = (undefined2 ***)0x0;
      local_a = (undefined1 ***)0x0;
      local_c = (undefined2 **)0x0;
      local_e = (undefined2 ***)0x7;
      local_10 = (undefined2 *)0x11;
      local_12 = (undefined1 *)0xa;
      puStack_14 = (undefined1 *)0x7;
      uStack_16 = 0;
      uStack_18 = 0xdef;
      uStack_1a = 0xecf5;
      func_0x0000f350();
      local_8 = (undefined2 ***)0x0;
      local_a = (undefined1 ***)0x0;
      local_c = (undefined2 **)0x0;
      local_e = (undefined2 ***)0x7;
      puStack_14 = (undefined1 *)0x11;
      local_12 = (undefined1 *)0x4;
      uStack_16 = 0;
      uStack_18 = 0xdef;
      uStack_1a = 0xed1a;
      local_10 = (undefined2 *)puStack_14;
      func_0x0000f350();
      local_8 = (undefined2 ***)0x0;
      local_a = (undefined1 ***)0x0;
      local_c = (undefined2 **)0x0;
      local_e = (undefined2 ***)0x7;
      puStack_14 = (undefined1 *)0x11;
      local_12 = (undefined1 *)0xa;
      uStack_16 = 6;
      uStack_18 = 0xdef;
      uStack_1a = 0xed42;
      local_10 = (undefined2 *)puStack_14;
      func_0x0000f350();
      local_8 = (undefined2 ***)0x0;
      local_a = (undefined1 ***)0x0;
      local_c = (undefined2 **)0x0;
      local_e = (undefined2 ***)0x7;
      local_10 = (undefined2 *)0x1b;
      local_12 = (undefined1 *)0x8;
      puStack_14 = (undefined1 *)0x11;
      uStack_16 = 4;
      uStack_18 = 0xdef;
      uStack_1a = 0xed6d;
      func_0x0000f350();
      local_8 = (undefined2 ***)0x0;
      local_a = (undefined1 ***)0x0;
      local_c = (undefined2 **)0x0;
      local_e = (undefined2 ***)0x7;
      local_10 = (undefined2 *)0x1b;
      local_12 = (undefined1 *)0xb;
      puStack_14 = (undefined1 *)0x11;
      uStack_16 = 6;
      uStack_18 = 0xdef;
      uStack_1a = 0xed98;
      func_0x0000f350();
      local_8 = (undefined2 ***)0x0;
      local_a = (undefined1 ***)0x0;
      local_c = (undefined2 **)0x0;
      local_e = (undefined2 ***)0x7;
      puStack_14 = (undefined1 *)0x1b;
      local_12 = (undefined1 *)0xb;
      uStack_16 = 8;
      uStack_18 = 0xdef;
      uStack_1a = 0xedbf;
      local_10 = (undefined2 *)puStack_14;
      func_0x0000f350();
    }
  }
  return;
}



/* 3ab8:4340  FUN_3ab8_4340  247 bytes, 2 callers */

void __cdecl16far FUN_3ab8_4340(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  bool bVar3;
  undefined4 uVar4;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  
  FUN_21f2_0ebc();
  local_12 = 1;
  local_10 = 0;
  uVar2 = 0x22b2;
  while( true ) {
    if ((*(int *)0x14a < local_10) || ((*(int *)0x14a <= local_10 && (*(uint *)0x148 < local_12))))
    break;
    uVar4 = func_0x0000013f(uVar2,local_12,local_10);
    uVar2 = (undefined2)((ulong)uVar4 >> 0x10);
    iVar1 = (int)uVar4;
    *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) & 0xfe;
    *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) & 0xfd;
    *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) & 0xfb;
    bVar3 = 0xfffe < local_12;
    local_12 = local_12 + 1;
    local_10 = local_10 + (uint)bVar3;
    uVar2 = 0;
  }
  local_12 = 1;
  local_10 = 0;
  while( true ) {
    if ((*(int *)0x14e < local_10) || ((*(int *)0x14e <= local_10 && (*(uint *)0x14c < local_12))))
    break;
    uVar4 = func_0x00000271(uVar2,local_12,local_10);
    uVar2 = (undefined2)((ulong)uVar4 >> 0x10);
    iVar1 = (int)uVar4;
    *(byte *)(iVar1 + 0x1e) = *(byte *)(iVar1 + 0x1e) & 0xfe;
    *(byte *)(iVar1 + 0x1e) = *(byte *)(iVar1 + 0x1e) & 0xfd;
    *(byte *)(iVar1 + 0x1e) = *(byte *)(iVar1 + 0x1e) & 0xfb;
    bVar3 = 0xfffe < local_12;
    local_12 = local_12 + 1;
    local_10 = local_10 + (uint)bVar3;
    uVar2 = 0;
  }
  for (local_14 = 1; local_14 <= *(int *)0x150; local_14 = local_14 + 1) {
    uVar4 = func_0x00000398(uVar2,local_14);
    uVar2 = (undefined2)((ulong)uVar4 >> 0x10);
    iVar1 = (int)uVar4;
    *(byte *)(iVar1 + 0x16) = *(byte *)(iVar1 + 0x16) & 0xfe;
    *(byte *)(iVar1 + 0x16) = *(byte *)(iVar1 + 0x16) & 0xfd;
    *(byte *)(iVar1 + 0x16) = *(byte *)(iVar1 + 0x16) & 0xfb;
    uVar2 = 0;
  }
  for (local_14 = 1; local_14 <= *(int *)0x152; local_14 = local_14 + 1) {
    uVar4 = func_0x000003ef(uVar2,local_14);
    uVar2 = (undefined2)((ulong)uVar4 >> 0x10);
    iVar1 = (int)uVar4;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfe;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfd;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    uVar2 = 0;
  }
  return;
}



/* 3ab8:4437  FUN_3ab8_4437  26 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003f133) */

void FUN_3ab8_4437(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_DS;
  bool bVar10;
  uint uStack_16c;
  uint uStack_16a;
  uint uStack_168;
  uint uStack_166;
  int iStack_164;
  char acStack_162 [4];
  undefined1 uStack_15e;
  char cStack_15d;
  char cStack_15c;
  undefined4 uStack_9a;
  int iStack_96;
  int iStack_94;
  int iStack_92;
  int iStack_90;
  int iStack_8e;
  int iStack_8c;
  uint uStack_88;
  uint uStack_86;
  uint uStack_84;
  uint uStack_82;
  int iStack_80;
  uint uStack_7e;
  int iStack_7c;
  uint uStack_7a;
  int aiStack_78 [11];
  int iStack_62;
  int iStack_60;
  int iStack_5e;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_56;
  int iStack_52;
  uint uStack_50;
  int iStack_4e;
  undefined4 uStack_4c;
  uint uStack_48;
  int iStack_46;
  int iStack_44;
  uint uStack_42;
  int local_40 [24];
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  undefined2 uStack_a;
  uint *puStack_8;
  uint *puStack_6;
  uint *puStack_4;
  
  puStack_4 = (uint *)0x3ab8;
  uVar5 = 0x22b2;
  puStack_6 = (uint *)0xefc2;
  FUN_21f2_0ebc();
LAB_3ab8_4442:
  puStack_6 = (uint *)0xefc7;
  puStack_4 = (uint *)uVar5;
  func_0x0000c3ca();
  puStack_4 = (uint *)0x7a4;
  puStack_6 = (uint *)local_40;
  pcVar1 = (code *)swi(0x3f);
  uStack_48 = (*pcVar1)();
  if (uStack_48 == 0) {
    if (*(int *)0x158 != 0) {
      FUN_3ab8_51c1();
      return;
    }
    func_0x0000ac64();
    uVar5 = 0x885;
    func_0x0000a799();
    *(undefined2 *)0xbc0 = 1;
    do {
      puStack_6 = (uint *)0xf005;
      puStack_4 = (uint *)uVar5;
      func_0x0000c3ca();
      puStack_4 = (uint *)0x1;
      puStack_6 = (uint *)0x885;
      puStack_8 = (uint *)0xf00d;
      FUN_3ab8_14f2();
      puStack_4 = (uint *)0x885;
      puStack_6 = (uint *)0xf013;
      func_0x0000c340();
      puStack_4 = (uint *)0x885;
      puStack_6 = (uint *)0xf018;
      func_0x00010526();
      puStack_4 = (uint *)0x1;
      puStack_6 = (uint *)0x8;
      puStack_8 = (uint *)0xdef;
      uStack_a = 0xf025;
      FUN_1000_0599();
      puStack_4 = (uint *)0x8f8;
      puStack_6 = (uint *)0xdef;
      puStack_8 = (uint *)0xf030;
      func_0x00012276();
      puStack_4 = (uint *)0x1;
      puStack_6 = (uint *)0x14;
      puStack_8 = (uint *)0x11f2;
      uStack_a = 0xf03e;
      FUN_1000_0599();
      puStack_4 = (uint *)0x522;
      puStack_6 = (uint *)0xdef;
      puStack_8 = (uint *)0xf049;
      func_0x00012276();
      puStack_4 = (uint *)0xa33;
      puStack_6 = (uint *)0x11f2;
      puStack_8 = (uint *)0xf053;
      func_0x00012276();
      puStack_4 = (uint *)0x860;
      puStack_6 = (uint *)0x11f2;
      puStack_8 = (uint *)0xf05d;
      func_0x00012276();
      puStack_4 = (uint *)0x6cf0;
      puStack_6 = (uint *)0x11f2;
      puStack_8 = (uint *)0xf067;
      func_0x00012276();
      puStack_4 = (uint *)0x6cf5;
      puStack_6 = (uint *)0x11f2;
      puStack_8 = (uint *)0xf071;
      func_0x00012276();
      if (*(char *)0x132 != '\0') {
        puStack_4 = (uint *)0x6cf7;
        puStack_6 = (uint *)0x11f2;
        puStack_8 = (uint *)0xf082;
        func_0x00012276();
      }
      puStack_4 = (uint *)0x1;
      puStack_6 = (uint *)0x3a;
      puStack_8 = (uint *)0x11f2;
      uStack_a = 0xf090;
      FUN_1000_0599();
      puStack_4 = (uint *)0x8e8;
      puStack_6 = (uint *)0xdef;
      uVar5 = 0x11f2;
      puStack_8 = (uint *)0xf09b;
      func_0x00012276();
      while( true ) {
        puStack_4 = (uint *)aiStack_78;
        puStack_6 = (uint *)&iStack_46;
        puStack_8 = (uint *)&iStack_44;
        uStack_a = 0;
        iStack_c = 0x11f2;
        uStack_e = 0xf0af;
        uStack_48 = FUN_3ab8_24a5();
        if (*(int *)0x158 != 0) {
          FUN_3ab8_446a();
          return;
        }
        if (uStack_48 == 99) break;
        if ((aiStack_78[0] == 0) || (0xf < iStack_46)) {
          if (aiStack_78[0] == 1) {
            uStack_48 = 0x31;
          }
          if (aiStack_78[0] == 2) {
            uStack_48 = 0x32;
          }
        }
        else {
          if ((0x9c < iStack_44) && (iStack_44 < 0xf4)) {
            uStack_48 = 0x31;
          }
          if ((0xf4 < iStack_44) && (iStack_44 < 0x142)) {
            uStack_48 = 0x32;
          }
          if ((0x142 < iStack_44) && (iStack_44 < 0x19a)) {
            uStack_48 = 0x33;
          }
        }
        if (uStack_48 == 0x31) {
          puStack_4 = (uint *)0x11f2;
          puStack_6 = (uint *)0xf13b;
          func_0x0000c3ca();
          FUN_3ab8_4340();
          puStack_4 = (uint *)0x885;
          puStack_6 = (uint *)0xf14c;
          iVar2 = FUN_21f2_1348();
          *(int *)0xd70 = iVar2;
          if (iVar2 != 0) {
            uStack_16a = (int)*(uint *)0xb310 >> 0xf;
            uStack_16a = ((int)((*(uint *)0xb310 ^ uStack_16a) - uStack_16a) >> 4 ^ uStack_16a) -
                         uStack_16a;
            iStack_60 = -1;
            iStack_96 = -1;
            iStack_164 = -1;
            iStack_58 = -1;
            puVar6 = (uint *)0x22b2;
            do {
              while( true ) {
                do {
                  do {
                    do {
                      do {
                        do {
                          puStack_4 = (uint *)acStack_162;
                          puStack_8 = (uint *)0xf190;
                          puStack_6 = puVar6;
                          iVar2 = func_0x0002509c();
                          if (((iVar2 == 0) || (acStack_162[0] == 'E')) || (acStack_162[0] == 'e'))
                          {
                            func_0x0002504e();
                            *(undefined2 *)0xd70 = 0;
                            if (iStack_58 < 0) {
                              FUN_3ab8_503a();
                              return;
                            }
                            iStack_7c = 0;
                            pcVar9 = (char *)0x22b2;
                            for (uStack_7e = 1;
                                (iStack_7c <= *(int *)0x14a &&
                                ((iStack_7c < *(int *)0x14a || (uStack_7e <= *(uint *)0x148))));
                                uStack_7e = uStack_7e + 1) {
                              pcVar8 = (char *)0x0;
                              puStack_6 = (uint *)0xfb79;
                              puStack_4 = (uint *)pcVar9;
                              uStack_4c = func_0x0000013f();
                              uVar5 = (undefined2)((ulong)uStack_4c >> 0x10);
                              uStack_48 = (uint)(*(byte *)((int)uStack_4c + 0x12) >> 4);
                              if ((uStack_48 == uStack_16a) &&
                                 (((uVar3 = *(uint *)((int)uStack_4c + 0x14), (uVar3 & 1) == 0 &&
                                   ((uVar3 & 2) == 0)) && ((uVar3 & 4) == 0)))) {
                                pcVar8 = (char *)0x885;
                                puStack_4 = (uint *)0xfb51;
                                iVar2 = func_0x00008854();
                                if (iVar2 == 0) {
                                  *(undefined1 *)((int)uStack_4c + 0x12) = (undefined1)iStack_58;
                                }
                              }
                              iStack_7c = iStack_7c + (uint)(0xfffe < uStack_7e);
                              pcVar9 = pcVar8;
                            }
                            if (-1 < iStack_164) {
                              iStack_7c = 0;
                              for (uStack_7e = 1;
                                  (iStack_7c <= *(int *)0x14e &&
                                  ((iStack_7c < *(int *)0x14e || (uStack_7e <= *(uint *)0x14c))));
                                  uStack_7e = uStack_7e + 1) {
                                pcVar8 = (char *)0x0;
                                puStack_6 = (uint *)0xfc04;
                                puStack_4 = (uint *)pcVar9;
                                uStack_5c = func_0x00000271();
                                uVar5 = (undefined2)((ulong)uStack_5c >> 0x10);
                                uStack_48 = (uint)(*(byte *)((int)uStack_5c + 0x1c) >> 4);
                                if ((uStack_48 == uStack_16a) &&
                                   (((uVar3 = *(uint *)((int)uStack_5c + 0x1e), (uVar3 & 1) == 0 &&
                                     ((uVar3 & 2) == 0)) && ((uVar3 & 4) == 0)))) {
                                  pcVar8 = (char *)0x885;
                                  puStack_4 = (uint *)0xfbdc;
                                  iVar2 = func_0x00008854();
                                  if (iVar2 == 0) {
                                    *(undefined1 *)((int)uStack_5c + 0x1c) = (undefined1)iStack_164;
                                  }
                                }
                                iStack_7c = iStack_7c + (uint)(0xfffe < uStack_7e);
                                pcVar9 = pcVar8;
                              }
                              if (-1 < iStack_96) {
                                for (iStack_90 = 1; iStack_90 <= *(int *)0x152;
                                    iStack_90 = iStack_90 + 1) {
                                  puStack_4 = (uint *)0xfc7c;
                                  uStack_56 = func_0x000003ef();
                                  uVar5 = (undefined2)((ulong)uStack_56 >> 0x10);
                                  uStack_48 = (uint)(*(byte *)((int)uStack_56 + 8) >> 4);
                                  if (((uStack_48 == uStack_16a) &&
                                      (uVar3 = *(uint *)((int)uStack_56 + 10), (uVar3 & 1) == 0)) &&
                                     ((uVar3 & 4) == 0)) {
                                    puStack_4 = (uint *)0xfc61;
                                    iVar2 = func_0x00008854();
                                    if (iVar2 == 0) {
                                      *(undefined1 *)((int)uStack_56 + 8) = (undefined1)iStack_96;
                                    }
                                  }
                                }
                              }
                              if (-1 < iStack_60) {
                                for (iStack_90 = 1; iStack_90 <= *(int *)0x150;
                                    iStack_90 = iStack_90 + 1) {
                                  puStack_4 = (uint *)0xfced;
                                  uStack_9a = func_0x00000398();
                                  uVar5 = (undefined2)((ulong)uStack_9a >> 0x10);
                                  uStack_48 = (uint)(*(byte *)((int)uStack_9a + 0x15) >> 4);
                                  if (((uStack_48 == uStack_16a) &&
                                      (uVar3 = *(uint *)((int)uStack_9a + 0x16), (uVar3 & 1) == 0))
                                     && ((uVar3 & 4) == 0)) {
                                    puStack_4 = (uint *)0xfcd2;
                                    iVar2 = func_0x00008854();
                                    if (iVar2 == 0) {
                                      *(undefined1 *)((int)uStack_9a + 0x15) = (undefined1)iStack_60
                                      ;
                                    }
                                  }
                                }
                              }
                              FUN_3ab8_4340();
                              *(undefined1 *)0xd14 = 2;
                              puStack_4 = (uint *)0xfd3d;
                              func_0x0000b1d8();
                              FUN_3ab8_4480();
                              return;
                            }
                            FUN_3ab8_50c6();
                            return;
                          }
                          puVar6 = (uint *)0x22b2;
                        } while (acStack_162[0] == '#');
                        puStack_4 = (uint *)0x22b2;
                        puVar6 = (uint *)0x11f2;
                        puStack_6 = (uint *)0xf232;
                        iVar2 = func_0x00012232();
                      } while (iVar2 == 0);
                      iStack_62 = -1;
                      puStack_4 = (uint *)&uStack_15e;
                      puStack_6 = (uint *)0x11f2;
                      puVar6 = (uint *)0x22b2;
                      puStack_8 = (uint *)0xf24f;
                      func_0x000253ce();
                    } while ((iStack_62 < 0) || (0xf < iStack_62));
                    puStack_4 = (uint *)0x22b2;
                    puVar6 = (uint *)0x22b2;
                    puStack_6 = (uint *)0xf26c;
                    iStack_4e = func_0x00025a9a();
                  } while (iStack_4e == 0);
                  puVar6 = (uint *)0x885;
                  puStack_4 = (uint *)0xf286;
                  uVar3 = func_0x00008854();
                } while (uVar3 != 0);
                iStack_4e = iStack_4e + 1;
                if ((cStack_15d != '_') || (cStack_15c != 'N')) break;
                puStack_4 = (uint *)0x885;
                puStack_6 = (uint *)0xf2ab;
                puVar4 = (undefined1 *)func_0x00025b06();
                if (puVar4 != (undefined1 *)0x0) {
                  *puVar4 = 0;
                }
                uVar5 = 0x22b2;
                puStack_4 = (uint *)0xf2c1;
                uVar3 = func_0x00024ce4();
                if (8 < uVar3) {
                  puStack_4 = (uint *)0x22b2;
                  uVar5 = 0x2a75;
                  puStack_6 = (uint *)&SUB_0000_f2d3;
                  iVar2 = func_0x0002aa38();
                  if (iVar2 == 2) {
                    *(undefined1 *)(iStack_4e + 7) = 0;
                  }
                  else {
                    *(undefined1 *)(iStack_4e + 8) = 0;
                  }
                }
                puStack_6 = (uint *)0xf2fe;
                puStack_4 = (uint *)uVar5;
                FUN_10ad_20e9();
                puVar6 = (uint *)0x11f2;
              }
              puStack_4 = &uStack_50;
              puStack_6 = &uStack_168;
              puStack_8 = &uStack_16c;
              uStack_a = 0x6d06;
              uStack_e = 0x885;
              puVar6 = (uint *)0x22b2;
              uStack_10 = 0xf348;
              uStack_16c = uVar3;
              uStack_168 = uVar3;
              uStack_166 = uVar3;
              uStack_88 = uVar3;
              uStack_86 = uVar3;
              uStack_84 = uVar3;
              uStack_7a = uVar3;
              uStack_50 = uVar3;
              uStack_42 = uVar3;
              iStack_c = iStack_4e;
              uStack_48 = func_0x000253ce();
              if ((int)uStack_48 < 1) {
                uStack_16c = 0;
              }
              if (((int)uStack_16c < 1) && (6 < (int)uStack_16c)) {
                uStack_16c = 0;
              }
              if ((int)uStack_48 < 2) {
                uStack_168 = 0;
              }
              if (((int)uStack_168 < 1) && (0x12 < (int)uStack_168)) {
                uStack_168 = 0;
              }
              if ((int)uStack_48 < 3) {
                uStack_50 = 0;
              }
              if (((int)uStack_50 < 1) && (6 < (int)uStack_50)) {
                uStack_50 = 0;
              }
              if ((int)uStack_48 < 4) {
                uStack_86 = 0;
              }
              if (((int)uStack_86 < 1) && (10 < (int)uStack_86)) {
                uStack_86 = 0;
              }
              if ((int)uStack_48 < 5) {
                uStack_88 = 0;
              }
              else {
                if (((int)uStack_88 < 1) || (4 < (int)uStack_88)) {
                  uStack_88 = 0;
                }
                if (uStack_88 == 1) {
                  uStack_166 = 1;
                }
                if (uStack_88 == 2) {
                  uStack_84 = 1;
                }
                if (uStack_88 == 3) {
                  uStack_42 = 1;
                }
                if (uStack_88 == 4) {
                  uStack_7a = 1;
                }
              }
              if (99 < (int)uStack_16c) {
                iStack_58 = uStack_16a * 0x10 + iStack_62;
                uStack_16c = 0;
              }
              if (99 < (int)uStack_168) {
                iStack_164 = uStack_16a * 0x10 + iStack_62;
                uStack_168 = 0;
              }
              if (99 < (int)uStack_50) {
                iStack_96 = uStack_16a * 0x10 + iStack_62;
                uStack_50 = 0;
              }
              if (99 < (int)uStack_86) {
                iStack_60 = uStack_16a * 0x10 + iStack_62;
                uStack_86 = 0;
              }
            } while (((((int)uStack_16c < 1) && ((int)uStack_168 < 1)) && ((int)uStack_50 < 1)) &&
                    (((int)uStack_86 < 1 && ((int)uStack_88 < 1))));
            iStack_5e = 0;
            if ((uStack_16c != 0) || (uStack_168 != 0)) {
              iStack_5e = 1;
            }
            iStack_52 = uStack_16a * 0x10 + iStack_62;
            if ((iStack_5e == 0) && ((int)uStack_88 < 1)) {
              FUN_3ab8_4d08();
              return;
            }
            uStack_7e = 1;
            iStack_7c = 0;
            do {
              if ((*(int *)0x14a < iStack_7c) ||
                 ((*(int *)0x14a <= iStack_7c && (*(uint *)0x148 < uStack_7e)))) {
                uStack_7e = 1;
                iStack_7c = 0;
                do {
                  if (*(int *)0x14e < iStack_7c) {
                    FUN_3ab8_4d08();
                    return;
                  }
                  if ((*(int *)0x14e <= iStack_7c) && (*(uint *)0x14c < uStack_7e)) {
                    FUN_3ab8_4d08();
                    return;
                  }
                  puStack_6 = (uint *)0xf6e9;
                  puStack_4 = puVar6;
                  uStack_5c = func_0x00000271();
                  uVar5 = (undefined2)((ulong)uStack_5c >> 0x10);
                  iVar2 = (int)uStack_5c;
                  uStack_48 = (uint)(*(byte *)(iVar2 + 0x1c) >> 4);
                  if (uStack_48 == uStack_16a) {
                    iStack_8c = 0;
                    iStack_80 = 0;
                    if (iStack_5e != 0) {
                      if ((uStack_16c == 0) && (*(byte *)(iVar2 + 0x1a) == uStack_168)) {
                        iStack_80 = 1;
                      }
                      if ((*(byte *)(iVar2 + 0x1b) == uStack_16c) && (uStack_168 == 0)) {
                        iStack_80 = 1;
                      }
                      if ((*(byte *)(iVar2 + 0x1b) == uStack_16c) &&
                         (*(byte *)(iVar2 + 0x1a) == uStack_168)) {
                        iStack_8c = 2;
                      }
                      if ((iStack_80 == 0) && (iStack_8c == 0)) goto code_r0x0003f6c0;
                    }
                    iStack_92 = 0;
                    if (uStack_88 == 0) {
LAB_3ab8_4c59:
                      iStack_94 = 0;
                      iStack_8e = 0;
                      uStack_82 = (uint)((*(byte *)(iVar2 + 0x1e) & 1) != 0);
                      if ((*(byte *)(iVar2 + 0x1e) & 2) != 0) {
                        iStack_8e = 2;
                      }
                      if ((*(byte *)(iVar2 + 0x1e) & 4) != 0) {
                        iStack_94 = 3;
                      }
                      if ((uint)(iStack_92 + iStack_8c + iStack_80) <
                          iStack_8e + uStack_82 + iStack_94) {
                        FUN_3ab8_4b40();
                        return;
                      }
                      puStack_4 = (uint *)0xf838;
                      iVar2 = func_0x00008854();
                      if (iVar2 != 0) {
                        FUN_3ab8_4b40();
                        return;
                      }
                      uVar5 = (undefined2)((ulong)uStack_5c >> 0x10);
                      iVar2 = (int)uStack_5c;
                      *(undefined1 *)(iVar2 + 0x1c) = (undefined1)iStack_52;
                      *(byte *)(iVar2 + 0x1e) = *(byte *)(iVar2 + 0x1e) & 0xfe;
                      if (iStack_80 != 0) {
                        *(byte *)(iVar2 + 0x1e) = *(byte *)(iVar2 + 0x1e) | 1;
                      }
                      *(byte *)(iVar2 + 0x1e) = *(byte *)(iVar2 + 0x1e) & 0xfd;
                      if (iStack_8c != 0) {
                        *(byte *)(iVar2 + 0x1e) = *(byte *)(iVar2 + 0x1e) | 2;
                      }
                      *(byte *)(iVar2 + 0x1e) = *(byte *)(iVar2 + 0x1e) & 0xfb;
                      if (iStack_92 != 0) {
                        *(byte *)(iVar2 + 0x1e) = *(byte *)(iVar2 + 0x1e) | 4;
                        FUN_3ab8_4b40();
                        return;
                      }
                      FUN_3ab8_4b40();
                      return;
                    }
                    if (((*(byte *)(iVar2 + 0x1e) & 0x10) != 0) && (uStack_84 != 0)) {
                      iStack_92 = 3;
                    }
                    if (((*(byte *)(iVar2 + 0x1e) & 0x40) != 0) && (uStack_42 != 0)) {
                      iStack_92 = 3;
                    }
                    if (((*(byte *)(iVar2 + 0x1e) & 0x80) != 0) && (uStack_7a != 0)) {
                      iStack_92 = 3;
                    }
                    if (((*(byte *)(iVar2 + 0x1e) & 0x20) != 0) && (uStack_166 != 0)) {
                      iStack_92 = 3;
                    }
                    if (iStack_92 != 0) goto LAB_3ab8_4c59;
                  }
code_r0x0003f6c0:
                  bVar10 = 0xfffe < uStack_7e;
                  uStack_7e = uStack_7e + 1;
                  iStack_7c = iStack_7c + (uint)bVar10;
                  puVar6 = (uint *)0x0;
                } while( true );
              }
              puVar7 = (uint *)0x0;
              puStack_6 = (uint *)0xf515;
              puStack_4 = puVar6;
              uStack_4c = func_0x0000013f();
              uVar5 = (undefined2)((ulong)uStack_4c >> 0x10);
              iVar2 = (int)uStack_4c;
              uStack_48 = (uint)(*(byte *)(iVar2 + 0x12) >> 4);
              if (uStack_48 == uStack_16a) {
                iStack_8c = 0;
                iStack_80 = 0;
                if (iStack_5e != 0) {
                  if ((uStack_16c == 0) && (*(byte *)(iVar2 + 0x10) == uStack_168)) {
                    iStack_80 = 1;
                  }
                  if ((*(byte *)(iVar2 + 0x11) == uStack_16c) && (uStack_168 == 0)) {
                    iStack_80 = 1;
                  }
                  if ((*(byte *)(iVar2 + 0x11) == uStack_16c) &&
                     (*(byte *)(iVar2 + 0x10) == uStack_168)) {
                    iStack_8c = 2;
                  }
                  if ((iStack_80 == 0) && (iStack_8c == 0)) goto LAB_3ab8_496c;
                }
                iStack_92 = 0;
                if (uStack_88 != 0) {
                  if (((*(byte *)(iVar2 + 0x15) & 8) != 0) && (uStack_84 != 0)) {
                    iStack_92 = 3;
                  }
                  if (((*(byte *)(iVar2 + 0x15) & 0x20) != 0) && (uStack_42 != 0)) {
                    iStack_92 = 3;
                  }
                  if (((*(byte *)(iVar2 + 0x15) & 0x10) != 0) && (uStack_7a != 0)) {
                    iStack_92 = 3;
                  }
                  if (((*(byte *)(iVar2 + 0x14) & 0x20) != 0) && (uStack_166 != 0)) {
                    iStack_92 = 3;
                  }
                  if (iStack_92 == 0) goto LAB_3ab8_496c;
                }
                iStack_94 = 0;
                iStack_8e = 0;
                uStack_82 = (uint)((*(byte *)(iVar2 + 0x14) & 1) != 0);
                if ((*(byte *)(iVar2 + 0x14) & 2) != 0) {
                  iStack_8e = 2;
                }
                if ((*(byte *)(iVar2 + 0x14) & 4) != 0) {
                  iStack_94 = 3;
                }
                if (iStack_8e + uStack_82 + iStack_94 <= (uint)(iStack_92 + iStack_8c + iStack_80))
                {
                  puVar7 = (uint *)0x885;
                  puStack_4 = (uint *)0xf664;
                  iVar2 = func_0x00008854();
                  if (iVar2 == 0) {
                    uVar5 = (undefined2)((ulong)uStack_4c >> 0x10);
                    iVar2 = (int)uStack_4c;
                    *(undefined1 *)(iVar2 + 0x12) = (undefined1)iStack_52;
                    *(byte *)(iVar2 + 0x14) = *(byte *)(iVar2 + 0x14) & 0xfe;
                    if (iStack_80 != 0) {
                      *(byte *)(iVar2 + 0x14) = *(byte *)(iVar2 + 0x14) | 1;
                    }
                    *(byte *)(iVar2 + 0x14) = *(byte *)(iVar2 + 0x14) & 0xfd;
                    if (iStack_8c != 0) {
                      *(byte *)(iVar2 + 0x14) = *(byte *)(iVar2 + 0x14) | 2;
                    }
                    *(byte *)(iVar2 + 0x14) = *(byte *)(iVar2 + 0x14) & 0xfb;
                    if (iStack_92 != 0) {
                      *(byte *)(iVar2 + 0x14) = *(byte *)(iVar2 + 0x14) | 4;
                    }
                  }
                }
              }
LAB_3ab8_496c:
              bVar10 = 0xfffe < uStack_7e;
              uStack_7e = uStack_7e + 1;
              iStack_7c = iStack_7c + (uint)bVar10;
              puVar6 = puVar7;
            } while( true );
          }
          goto LAB_3ab8_445d;
        }
        if (uStack_48 == 0x32) goto LAB_3ab8_463e;
        if (uStack_48 == 0x33) goto LAB_3ab8_4442;
        if ((uStack_48 == 0x34) && (*(char *)0x132 != '\0')) {
          puStack_4 = (uint *)0x6cfa;
          puStack_6 = (uint *)local_40;
          puStack_8 = (uint *)0x1078;
          uStack_a = 0x6cfb;
          pcVar1 = (code *)swi(0x3f);
          (*pcVar1)();
          FUN_1000_0620();
          if (*(byte *)0xb782 < 4) {
            *(undefined2 *)0x158 = 0;
            FUN_3ab8_4480();
            return;
          }
LAB_3ab8_463e:
          FUN_3ab8_51c1();
          return;
        }
      }
      puStack_4 = (uint *)0x11f2;
      puStack_6 = (uint *)0xf0c8;
      FUN_3ab8_2839();
    } while( true );
  }
LAB_3ab8_445d:
  FUN_3ab8_51c1();
  return;
}



/* 3ab8:446a  FUN_3ab8_446a  6 bytes, 1 callers */

void FUN_3ab8_446a(void)

{
  FUN_3ab8_51c1();
  return;
}



/* 3ab8:4480  FUN_3ab8_4480  1701 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003f133) */

void FUN_3ab8_4480(void)

{
  uint *puVar1;
  byte *pbVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  int unaff_BP;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar9;
  
  uVar7 = 0x3ab8;
code_r0x0003f000:
  do {
    func_0x0000c3ca(uVar7);
    FUN_3ab8_14f2(1);
    func_0x0000c340(0x885);
    func_0x00010526(0x885);
    FUN_1000_0599(0xdef,8,1);
    func_0x00012276(0xdef,0x8f8);
    FUN_1000_0599(0x11f2,0x14,1);
    func_0x00012276(0xdef,0x522);
    func_0x00012276(0x11f2,0xa33);
    func_0x00012276(0x11f2,0x860);
    func_0x00012276(0x11f2,0x6cf0);
    func_0x00012276(0x11f2,0x6cf5);
    if (*(char *)0x132 != '\0') {
      func_0x00012276(0x11f2,0x6cf7);
    }
    FUN_1000_0599(0x11f2,0x3a,1);
    uVar7 = 0x11f2;
    func_0x00012276(0xdef,0x8e8);
LAB_3ab8_451c:
    iVar4 = FUN_3ab8_24a5(0,unaff_BP + -0x42,unaff_BP + -0x44,unaff_BP + -0x76);
    *(int *)(unaff_BP + -0x46) = iVar4;
    if (*(int *)0x158 != 0) {
      FUN_3ab8_446a();
      return;
    }
    if (iVar4 == 99) {
      FUN_3ab8_2839();
      goto code_r0x0003f000;
    }
    if ((*(int *)(unaff_BP + -0x76) == 0) || (0xf < *(int *)(unaff_BP + -0x44))) {
      if (*(int *)(unaff_BP + -0x76) == 1) {
        *(undefined2 *)(unaff_BP + -0x46) = 0x31;
      }
      if (*(int *)(unaff_BP + -0x76) == 2) {
        *(undefined2 *)(unaff_BP + -0x46) = 0x32;
      }
    }
    else {
      if ((0x9c < *(int *)(unaff_BP + -0x42)) && (*(int *)(unaff_BP + -0x42) < 0xf4)) {
        *(undefined2 *)(unaff_BP + -0x46) = 0x31;
      }
      if ((0xf4 < *(int *)(unaff_BP + -0x42)) && (*(int *)(unaff_BP + -0x42) < 0x142)) {
        *(undefined2 *)(unaff_BP + -0x46) = 0x32;
      }
      if ((0x142 < *(int *)(unaff_BP + -0x42)) && (*(int *)(unaff_BP + -0x42) < 0x19a)) {
        *(undefined2 *)(unaff_BP + -0x46) = 0x33;
      }
    }
    if (*(int *)(unaff_BP + -0x46) == 0x31) {
      func_0x0000c3ca(0x11f2);
      FUN_3ab8_4340();
      iVar4 = FUN_21f2_1348();
      *(int *)0xd70 = iVar4;
      if (iVar4 != 0) {
        uVar6 = (int)*(uint *)0xb310 >> 0xf;
        *(int *)(unaff_BP + -0x168) =
             ((int)((*(uint *)0xb310 ^ uVar6) - uVar6) >> 4 ^ uVar6) - uVar6;
        *(undefined2 *)(unaff_BP + -0x5e) = 0xffff;
        *(undefined2 *)(unaff_BP + -0x94) = 0xffff;
        *(undefined2 *)(unaff_BP + -0x162) = 0xffff;
        *(undefined2 *)(unaff_BP + -0x56) = 0xffff;
        uVar7 = 0x22b2;
        do {
          while( true ) {
            do {
              do {
                do {
                  do {
                    do {
                      iVar4 = func_0x0002509c(uVar7,unaff_BP + -0x160);
                      if (((iVar4 == 0) || (*(char *)(unaff_BP + -0x160) == 'E')) ||
                         (*(char *)(unaff_BP + -0x160) == 'e')) {
                        func_0x0002504e();
                        *(undefined2 *)0xd70 = 0;
                        if (*(int *)(unaff_BP + -0x56) < 0) {
                          FUN_3ab8_503a();
                          return;
                        }
                        *(undefined2 *)(unaff_BP + -0x7c) = 1;
                        *(undefined2 *)(unaff_BP + -0x7a) = 0;
                        uVar7 = 0x22b2;
                        while( true ) {
                          if ((*(int *)0x14a < *(int *)(unaff_BP + -0x7a)) ||
                             ((*(int *)0x14a <= *(int *)(unaff_BP + -0x7a) &&
                              (*(uint *)0x148 < *(uint *)(unaff_BP + -0x7c))))) break;
                          uVar8 = 0;
                          uVar9 = func_0x0000013f(uVar7);
                          uVar7 = (undefined2)((ulong)uVar9 >> 0x10);
                          iVar4 = (int)uVar9;
                          *(int *)(unaff_BP + -0x4a) = iVar4;
                          *(undefined2 *)(unaff_BP + -0x48) = uVar7;
                          uVar6 = (uint)(*(byte *)(iVar4 + 0x12) >> 4);
                          *(uint *)(unaff_BP + -0x46) = uVar6;
                          if ((((uVar6 == *(uint *)(unaff_BP + -0x168)) &&
                               (uVar6 = *(uint *)(iVar4 + 0x14), (uVar6 & 1) == 0)) &&
                              ((uVar6 & 2) == 0)) && ((uVar6 & 4) == 0)) {
                            uVar8 = 0x885;
                            iVar4 = func_0x00008854();
                            if (iVar4 == 0) {
                              *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x4a) + 0x12) =
                                   *(undefined1 *)(unaff_BP + -0x56);
                            }
                          }
                          puVar1 = (uint *)(unaff_BP + -0x7c);
                          uVar6 = *puVar1;
                          *puVar1 = *puVar1 + 1;
                          *(int *)(unaff_BP + -0x7a) =
                               *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar6);
                          uVar7 = uVar8;
                        }
                        if (*(int *)(unaff_BP + -0x162) < 0) {
                          FUN_3ab8_50c6();
                          return;
                        }
                        *(undefined2 *)(unaff_BP + -0x7c) = 1;
                        *(undefined2 *)(unaff_BP + -0x7a) = 0;
                        while( true ) {
                          if ((*(int *)0x14e < *(int *)(unaff_BP + -0x7a)) ||
                             ((*(int *)0x14e <= *(int *)(unaff_BP + -0x7a) &&
                              (*(uint *)0x14c < *(uint *)(unaff_BP + -0x7c))))) break;
                          uVar8 = 0;
                          uVar9 = func_0x00000271(uVar7);
                          uVar7 = (undefined2)((ulong)uVar9 >> 0x10);
                          iVar4 = (int)uVar9;
                          *(int *)(unaff_BP + -0x5a) = iVar4;
                          *(undefined2 *)(unaff_BP + -0x58) = uVar7;
                          uVar6 = (uint)(*(byte *)(iVar4 + 0x1c) >> 4);
                          *(uint *)(unaff_BP + -0x46) = uVar6;
                          if (((uVar6 == *(uint *)(unaff_BP + -0x168)) &&
                              (uVar6 = *(uint *)(iVar4 + 0x1e), (uVar6 & 1) == 0)) &&
                             (((uVar6 & 2) == 0 && ((uVar6 & 4) == 0)))) {
                            uVar8 = 0x885;
                            iVar4 = func_0x00008854();
                            if (iVar4 == 0) {
                              *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x5a) + 0x1c) =
                                   *(undefined1 *)(unaff_BP + -0x162);
                            }
                          }
                          puVar1 = (uint *)(unaff_BP + -0x7c);
                          uVar6 = *puVar1;
                          *puVar1 = *puVar1 + 1;
                          *(int *)(unaff_BP + -0x7a) =
                               *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar6);
                          uVar7 = uVar8;
                        }
                        if (-1 < *(int *)(unaff_BP + -0x94)) {
                          *(undefined2 *)(unaff_BP + -0x8e) = 1;
                          while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x152) {
                            uVar9 = func_0x000003ef();
                            uVar7 = (undefined2)((ulong)uVar9 >> 0x10);
                            iVar4 = (int)uVar9;
                            *(int *)(unaff_BP + -0x54) = iVar4;
                            *(undefined2 *)(unaff_BP + -0x52) = uVar7;
                            uVar6 = (uint)(*(byte *)(iVar4 + 8) >> 4);
                            *(uint *)(unaff_BP + -0x46) = uVar6;
                            if ((((uVar6 == *(uint *)(unaff_BP + -0x168)) &&
                                 ((*(uint *)(iVar4 + 10) & 1) == 0)) &&
                                ((*(uint *)(iVar4 + 10) & 4) == 0)) &&
                               (iVar4 = func_0x00008854(), iVar4 == 0)) {
                              *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x54) + 8) =
                                   *(undefined1 *)(unaff_BP + -0x94);
                            }
                            *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
                          }
                        }
                        if (-1 < *(int *)(unaff_BP + -0x5e)) {
                          *(undefined2 *)(unaff_BP + -0x8e) = 1;
                          while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x150) {
                            uVar9 = func_0x00000398();
                            uVar7 = (undefined2)((ulong)uVar9 >> 0x10);
                            iVar4 = (int)uVar9;
                            *(int *)(unaff_BP + -0x98) = iVar4;
                            *(undefined2 *)(unaff_BP + -0x96) = uVar7;
                            uVar6 = (uint)(*(byte *)(iVar4 + 0x15) >> 4);
                            *(uint *)(unaff_BP + -0x46) = uVar6;
                            if (((uVar6 == *(uint *)(unaff_BP + -0x168)) &&
                                ((*(uint *)(iVar4 + 0x16) & 1) == 0)) &&
                               (((*(uint *)(iVar4 + 0x16) & 4) == 0 &&
                                (iVar4 = func_0x00008854(), iVar4 == 0)))) {
                              *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x98) + 0x15) =
                                   *(undefined1 *)(unaff_BP + -0x5e);
                            }
                            *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
                          }
                        }
                        FUN_3ab8_4340();
                        *(undefined1 *)0xd14 = 2;
                        func_0x0000b1d8();
                        FUN_3ab8_4480();
                        return;
                      }
                      uVar7 = 0x22b2;
                    } while (*(char *)(unaff_BP + -0x160) == '#');
                    uVar7 = 0x11f2;
                    iVar4 = func_0x00012232(0x22b2);
                  } while (iVar4 == 0);
                  *(undefined2 *)(unaff_BP + -0x60) = 0xffff;
                  uVar7 = 0x22b2;
                  func_0x000253ce(0x11f2,unaff_BP + -0x15c);
                } while ((*(int *)(unaff_BP + -0x60) < 0) || (0xf < *(int *)(unaff_BP + -0x60)));
                uVar7 = 0x22b2;
                iVar4 = func_0x00025a9a(0x22b2);
                *(int *)(unaff_BP + -0x4c) = iVar4;
              } while (iVar4 == 0);
              uVar7 = 0x885;
              iVar4 = func_0x00008854();
            } while (iVar4 != 0);
            *(int *)(unaff_BP + -0x4c) = *(int *)(unaff_BP + -0x4c) + 1;
            if ((*(char *)(unaff_BP + -0x15b) != '_') || (*(char *)(unaff_BP + -0x15a) != 'N'))
            break;
            puVar5 = (undefined1 *)func_0x00025b06(0x885);
            *(undefined2 *)(unaff_BP + -2) = puVar5;
            if (puVar5 != (undefined1 *)0x0) {
              *puVar5 = 0;
            }
            uVar7 = 0x22b2;
            uVar6 = func_0x00024ce4();
            if (8 < uVar6) {
              uVar7 = 0x2a75;
              iVar4 = func_0x0002aa38(0x22b2);
              if (iVar4 == 2) {
                *(undefined1 *)(*(int *)(unaff_BP + -0x4c) + 7) = 0;
              }
              else {
                *(undefined1 *)(*(int *)(unaff_BP + -0x4c) + 8) = 0;
              }
            }
            FUN_10ad_20e9(uVar7);
            uVar7 = 0x11f2;
          }
          *(undefined2 *)(unaff_BP + -0x86) = 0;
          *(undefined2 *)(unaff_BP + -0x164) = 0;
          *(undefined2 *)(unaff_BP + -0x40) = 0;
          *(undefined2 *)(unaff_BP + -0x78) = 0;
          *(undefined2 *)(unaff_BP + -0x82) = 0;
          *(undefined2 *)(unaff_BP + -0x84) = 0;
          *(undefined2 *)(unaff_BP + -0x4e) = 0;
          *(undefined2 *)(unaff_BP + -0x166) = 0;
          *(undefined2 *)(unaff_BP + -0x16a) = 0;
          uVar7 = 0x22b2;
          iVar4 = func_0x000253ce(0x885,*(undefined2 *)(unaff_BP + -0x4c),0x6d06,unaff_BP + -0x16a,
                                  unaff_BP + -0x166,unaff_BP + -0x4e);
          *(int *)(unaff_BP + -0x46) = iVar4;
          if (iVar4 < 1) {
            *(undefined2 *)(unaff_BP + -0x16a) = 0;
          }
          if ((*(int *)(unaff_BP + -0x16a) < 1) && (6 < *(int *)(unaff_BP + -0x16a))) {
            *(undefined2 *)(unaff_BP + -0x16a) = 0;
          }
          if (iVar4 < 2) {
            *(undefined2 *)(unaff_BP + -0x166) = 0;
          }
          if ((*(int *)(unaff_BP + -0x166) < 1) && (0x12 < *(int *)(unaff_BP + -0x166))) {
            *(undefined2 *)(unaff_BP + -0x166) = 0;
          }
          if (iVar4 < 3) {
            *(undefined2 *)(unaff_BP + -0x4e) = 0;
          }
          if ((*(int *)(unaff_BP + -0x4e) < 1) && (6 < *(int *)(unaff_BP + -0x4e))) {
            *(undefined2 *)(unaff_BP + -0x4e) = 0;
          }
          if (iVar4 < 4) {
            *(undefined2 *)(unaff_BP + -0x84) = 0;
          }
          if ((*(int *)(unaff_BP + -0x84) < 1) && (10 < *(int *)(unaff_BP + -0x84))) {
            *(undefined2 *)(unaff_BP + -0x84) = 0;
          }
          if (iVar4 < 5) {
            *(undefined2 *)(unaff_BP + -0x86) = 0;
          }
          else {
            if ((*(int *)(unaff_BP + -0x86) < 1) || (4 < *(int *)(unaff_BP + -0x86))) {
              *(undefined2 *)(unaff_BP + -0x86) = 0;
            }
            if (*(int *)(unaff_BP + -0x86) == 1) {
              *(undefined2 *)(unaff_BP + -0x164) = 1;
            }
            if (*(int *)(unaff_BP + -0x86) == 2) {
              *(undefined2 *)(unaff_BP + -0x82) = 1;
            }
            if (*(int *)(unaff_BP + -0x86) == 3) {
              *(undefined2 *)(unaff_BP + -0x40) = 1;
            }
            if (*(int *)(unaff_BP + -0x86) == 4) {
              *(undefined2 *)(unaff_BP + -0x78) = 1;
            }
          }
          if (99 < *(int *)(unaff_BP + -0x16a)) {
            *(int *)(unaff_BP + -0x56) =
                 *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
            *(undefined2 *)(unaff_BP + -0x16a) = 0;
          }
          if (99 < *(int *)(unaff_BP + -0x166)) {
            *(int *)(unaff_BP + -0x162) =
                 *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
            *(undefined2 *)(unaff_BP + -0x166) = 0;
          }
          if (99 < *(int *)(unaff_BP + -0x4e)) {
            *(int *)(unaff_BP + -0x94) =
                 *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
            *(undefined2 *)(unaff_BP + -0x4e) = 0;
          }
          if (99 < *(int *)(unaff_BP + -0x84)) {
            *(int *)(unaff_BP + -0x5e) =
                 *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
            *(undefined2 *)(unaff_BP + -0x84) = 0;
          }
        } while ((((*(int *)(unaff_BP + -0x16a) < 1) && (*(int *)(unaff_BP + -0x166) < 1)) &&
                 (*(int *)(unaff_BP + -0x4e) < 1)) &&
                ((*(int *)(unaff_BP + -0x84) < 1 && (*(int *)(unaff_BP + -0x86) < 1))));
        *(undefined2 *)(unaff_BP + -0x5c) = 0;
        if ((*(int *)(unaff_BP + -0x16a) != 0) || (*(int *)(unaff_BP + -0x166) != 0)) {
          *(undefined2 *)(unaff_BP + -0x5c) = 1;
        }
        *(int *)(unaff_BP + -0x50) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60)
        ;
        if ((*(int *)(unaff_BP + -0x5c) < 1) && (*(int *)(unaff_BP + -0x86) < 1)) {
          FUN_3ab8_4d08();
          return;
        }
        *(undefined2 *)(unaff_BP + -0x7c) = 1;
        *(undefined2 *)(unaff_BP + -0x7a) = 0;
        do {
          if ((*(int *)0x14a < *(int *)(unaff_BP + -0x7a)) ||
             ((*(int *)0x14a <= *(int *)(unaff_BP + -0x7a) &&
              (*(uint *)0x148 < *(uint *)(unaff_BP + -0x7c))))) {
            *(undefined2 *)(unaff_BP + -0x7c) = 1;
            *(undefined2 *)(unaff_BP + -0x7a) = 0;
            do {
              if (*(int *)0x14e < *(int *)(unaff_BP + -0x7a)) {
                FUN_3ab8_4d08();
                return;
              }
              if ((*(int *)0x14e <= *(int *)(unaff_BP + -0x7a)) &&
                 (*(uint *)0x14c < *(uint *)(unaff_BP + -0x7c))) {
                FUN_3ab8_4d08();
                return;
              }
              uVar9 = func_0x00000271(uVar7);
              uVar7 = (undefined2)((ulong)uVar9 >> 0x10);
              iVar4 = (int)uVar9;
              *(int *)(unaff_BP + -0x5a) = iVar4;
              *(undefined2 *)(unaff_BP + -0x58) = uVar7;
              uVar6 = (uint)(*(byte *)(iVar4 + 0x1c) >> 4);
              *(uint *)(unaff_BP + -0x46) = uVar6;
              if (uVar6 == *(uint *)(unaff_BP + -0x168)) {
                *(undefined2 *)(unaff_BP + -0x8a) = 0;
                *(undefined2 *)(unaff_BP + -0x7e) = 0;
                if (*(int *)(unaff_BP + -0x5c) != 0) {
                  if ((*(int *)(unaff_BP + -0x16a) == 0) &&
                     ((uint)*(byte *)(iVar4 + 0x1a) == *(uint *)(unaff_BP + -0x166))) {
                    *(undefined2 *)(unaff_BP + -0x7e) = 1;
                  }
                  if (((uint)*(byte *)(iVar4 + 0x1b) == *(uint *)(unaff_BP + -0x16a)) &&
                     (*(int *)(unaff_BP + -0x166) == 0)) {
                    *(undefined2 *)(unaff_BP + -0x7e) = 1;
                  }
                  if (((uint)*(byte *)(iVar4 + 0x1b) == *(uint *)(unaff_BP + -0x16a)) &&
                     ((uint)*(byte *)(iVar4 + 0x1a) == *(uint *)(unaff_BP + -0x166))) {
                    *(undefined2 *)(unaff_BP + -0x8a) = 2;
                  }
                  if ((*(int *)(unaff_BP + -0x7e) == 0) && (*(int *)(unaff_BP + -0x8a) == 0))
                  goto code_r0x0003f6c0;
                }
                *(undefined2 *)(unaff_BP + -0x90) = 0;
                if (*(int *)(unaff_BP + -0x86) == 0) {
LAB_3ab8_4c59:
                  *(undefined2 *)(unaff_BP + -0x92) = 0;
                  *(undefined2 *)(unaff_BP + -0x8c) = 0;
                  *(undefined2 *)(unaff_BP + -0x80) = 0;
                  uVar7 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
                  iVar4 = (int)*(undefined4 *)(unaff_BP + -0x5a);
                  if ((*(byte *)(iVar4 + 0x1e) & 1) != 0) {
                    *(undefined2 *)(unaff_BP + -0x80) = 1;
                  }
                  if ((*(byte *)(iVar4 + 0x1e) & 2) != 0) {
                    *(undefined2 *)(unaff_BP + -0x8c) = 2;
                  }
                  if ((*(byte *)(iVar4 + 0x1e) & 4) != 0) {
                    *(undefined2 *)(unaff_BP + -0x92) = 3;
                  }
                  if (*(int *)(unaff_BP + -0x90) + *(int *)(unaff_BP + -0x8a) +
                      *(int *)(unaff_BP + -0x7e) <
                      *(int *)(unaff_BP + -0x8c) + *(int *)(unaff_BP + -0x80) +
                      *(int *)(unaff_BP + -0x92)) {
                    FUN_3ab8_4b40();
                    return;
                  }
                  iVar4 = func_0x00008854();
                  if (iVar4 != 0) {
                    FUN_3ab8_4b40();
                    return;
                  }
                  uVar7 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
                  iVar4 = (int)*(undefined4 *)(unaff_BP + -0x5a);
                  *(undefined1 *)(iVar4 + 0x1c) = *(undefined1 *)(unaff_BP + -0x50);
                  *(byte *)(iVar4 + 0x1e) = *(byte *)(iVar4 + 0x1e) & 0xfe;
                  if (*(int *)(unaff_BP + -0x7e) != 0) {
                    *(byte *)(iVar4 + 0x1e) = *(byte *)(iVar4 + 0x1e) | 1;
                  }
                  uVar7 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
                  iVar4 = (int)*(undefined4 *)(unaff_BP + -0x5a);
                  pbVar2 = (byte *)(iVar4 + 0x1e);
                  *pbVar2 = *pbVar2 & 0xfd;
                  if (*(int *)(unaff_BP + -0x8a) != 0) {
                    pbVar2 = (byte *)(iVar4 + 0x1e);
                    *pbVar2 = *pbVar2 | 2;
                  }
                  uVar7 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
                  iVar4 = (int)*(undefined4 *)(unaff_BP + -0x5a);
                  pbVar2 = (byte *)(iVar4 + 0x1e);
                  *pbVar2 = *pbVar2 & 0xfb;
                  if (*(int *)(unaff_BP + -0x90) == 0) {
                    FUN_3ab8_4b40();
                    return;
                  }
                  pbVar2 = (byte *)(iVar4 + 0x1e);
                  *pbVar2 = *pbVar2 | 4;
                  FUN_3ab8_4b40();
                  return;
                }
                uVar7 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
                iVar4 = (int)*(undefined4 *)(unaff_BP + -0x5a);
                if (((*(byte *)(iVar4 + 0x1e) & 0x10) != 0) && (*(int *)(unaff_BP + -0x82) != 0)) {
                  *(undefined2 *)(unaff_BP + -0x90) = 3;
                }
                if (((*(byte *)(iVar4 + 0x1e) & 0x40) != 0) && (*(int *)(unaff_BP + -0x40) != 0)) {
                  *(undefined2 *)(unaff_BP + -0x90) = 3;
                }
                if (((*(byte *)(iVar4 + 0x1e) & 0x80) != 0) && (*(int *)(unaff_BP + -0x78) != 0)) {
                  *(undefined2 *)(unaff_BP + -0x90) = 3;
                }
                if (((*(byte *)(iVar4 + 0x1e) & 0x20) != 0) && (*(int *)(unaff_BP + -0x164) != 0)) {
                  *(undefined2 *)(unaff_BP + -0x90) = 3;
                }
                if (*(int *)(unaff_BP + -0x90) != 0) goto LAB_3ab8_4c59;
              }
code_r0x0003f6c0:
              puVar1 = (uint *)(unaff_BP + -0x7c);
              uVar6 = *puVar1;
              *puVar1 = *puVar1 + 1;
              *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar6);
              uVar7 = 0;
            } while( true );
          }
          uVar8 = 0;
          uVar9 = func_0x0000013f(uVar7);
          uVar7 = (undefined2)((ulong)uVar9 >> 0x10);
          iVar4 = (int)uVar9;
          *(int *)(unaff_BP + -0x4a) = iVar4;
          *(undefined2 *)(unaff_BP + -0x48) = uVar7;
          uVar6 = (uint)(*(byte *)(iVar4 + 0x12) >> 4);
          *(uint *)(unaff_BP + -0x46) = uVar6;
          if (uVar6 == *(uint *)(unaff_BP + -0x168)) {
            *(undefined2 *)(unaff_BP + -0x8a) = 0;
            *(undefined2 *)(unaff_BP + -0x7e) = 0;
            if (*(int *)(unaff_BP + -0x5c) != 0) {
              if ((*(int *)(unaff_BP + -0x16a) == 0) &&
                 ((uint)*(byte *)(iVar4 + 0x10) == *(uint *)(unaff_BP + -0x166))) {
                *(undefined2 *)(unaff_BP + -0x7e) = 1;
              }
              if (((uint)*(byte *)(iVar4 + 0x11) == *(uint *)(unaff_BP + -0x16a)) &&
                 (*(int *)(unaff_BP + -0x166) == 0)) {
                *(undefined2 *)(unaff_BP + -0x7e) = 1;
              }
              if (((uint)*(byte *)(iVar4 + 0x11) == *(uint *)(unaff_BP + -0x16a)) &&
                 ((uint)*(byte *)(iVar4 + 0x10) == *(uint *)(unaff_BP + -0x166))) {
                *(undefined2 *)(unaff_BP + -0x8a) = 2;
              }
              if ((*(int *)(unaff_BP + -0x7e) == 0) && (*(int *)(unaff_BP + -0x8a) == 0))
              goto LAB_3ab8_496c;
            }
            *(undefined2 *)(unaff_BP + -0x90) = 0;
            if (*(int *)(unaff_BP + -0x86) != 0) {
              uVar7 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
              iVar4 = (int)*(undefined4 *)(unaff_BP + -0x4a);
              if (((*(byte *)(iVar4 + 0x15) & 8) != 0) && (*(int *)(unaff_BP + -0x82) != 0)) {
                *(undefined2 *)(unaff_BP + -0x90) = 3;
              }
              if (((*(byte *)(iVar4 + 0x15) & 0x20) != 0) && (*(int *)(unaff_BP + -0x40) != 0)) {
                *(undefined2 *)(unaff_BP + -0x90) = 3;
              }
              if (((*(byte *)(iVar4 + 0x15) & 0x10) != 0) && (*(int *)(unaff_BP + -0x78) != 0)) {
                *(undefined2 *)(unaff_BP + -0x90) = 3;
              }
              if (((*(byte *)(iVar4 + 0x14) & 0x20) != 0) && (*(int *)(unaff_BP + -0x164) != 0)) {
                *(undefined2 *)(unaff_BP + -0x90) = 3;
              }
              if (*(int *)(unaff_BP + -0x90) == 0) goto LAB_3ab8_496c;
            }
            *(undefined2 *)(unaff_BP + -0x92) = 0;
            *(undefined2 *)(unaff_BP + -0x8c) = 0;
            *(undefined2 *)(unaff_BP + -0x80) = 0;
            uVar7 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
            iVar4 = (int)*(undefined4 *)(unaff_BP + -0x4a);
            if ((*(byte *)(iVar4 + 0x14) & 1) != 0) {
              *(undefined2 *)(unaff_BP + -0x80) = 1;
            }
            if ((*(byte *)(iVar4 + 0x14) & 2) != 0) {
              *(undefined2 *)(unaff_BP + -0x8c) = 2;
            }
            if ((*(byte *)(iVar4 + 0x14) & 4) != 0) {
              *(undefined2 *)(unaff_BP + -0x92) = 3;
            }
            if (*(int *)(unaff_BP + -0x8c) + *(int *)(unaff_BP + -0x80) + *(int *)(unaff_BP + -0x92)
                <= *(int *)(unaff_BP + -0x90) + *(int *)(unaff_BP + -0x8a) +
                   *(int *)(unaff_BP + -0x7e)) {
              uVar8 = 0x885;
              iVar4 = func_0x00008854();
              if (iVar4 == 0) {
                uVar7 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
                iVar4 = (int)*(undefined4 *)(unaff_BP + -0x4a);
                *(undefined1 *)(iVar4 + 0x12) = *(undefined1 *)(unaff_BP + -0x50);
                *(byte *)(iVar4 + 0x14) = *(byte *)(iVar4 + 0x14) & 0xfe;
                if (*(int *)(unaff_BP + -0x7e) != 0) {
                  *(byte *)(iVar4 + 0x14) = *(byte *)(iVar4 + 0x14) | 1;
                }
                uVar7 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
                iVar4 = (int)*(undefined4 *)(unaff_BP + -0x4a);
                pbVar2 = (byte *)(iVar4 + 0x14);
                *pbVar2 = *pbVar2 & 0xfd;
                if (*(int *)(unaff_BP + -0x8a) != 0) {
                  pbVar2 = (byte *)(iVar4 + 0x14);
                  *pbVar2 = *pbVar2 | 2;
                }
                uVar7 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
                iVar4 = (int)*(undefined4 *)(unaff_BP + -0x4a);
                pbVar2 = (byte *)(iVar4 + 0x14);
                *pbVar2 = *pbVar2 & 0xfb;
                if (*(int *)(unaff_BP + -0x90) != 0) {
                  pbVar2 = (byte *)(iVar4 + 0x14);
                  *pbVar2 = *pbVar2 | 4;
                }
              }
            }
          }
LAB_3ab8_496c:
          puVar1 = (uint *)(unaff_BP + -0x7c);
          uVar6 = *puVar1;
          *puVar1 = *puVar1 + 1;
          *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar6);
          uVar7 = uVar8;
        } while( true );
      }
      goto LAB_3ab8_445d;
    }
    if (*(int *)(unaff_BP + -0x46) == 0x32) goto LAB_3ab8_463e;
    if (*(int *)(unaff_BP + -0x46) != 0x33) {
      if ((*(int *)(unaff_BP + -0x46) == 0x34) && (*(char *)0x132 != '\0')) {
        pcVar3 = (code *)swi(0x3f);
        (*pcVar3)(0x1078,unaff_BP + -0x3e,0x6cfa);
        FUN_1000_0620();
        if (*(byte *)0xb782 < 4) {
          *(undefined2 *)0x158 = 0;
          FUN_3ab8_4480();
          return;
        }
LAB_3ab8_463e:
        FUN_3ab8_51c1();
        return;
      }
      goto LAB_3ab8_451c;
    }
    func_0x0000c3ca(0x11f2);
    pcVar3 = (code *)swi(0x3f);
    iVar4 = (*pcVar3)(0x7a4);
    *(int *)(unaff_BP + -0x46) = iVar4;
    if (iVar4 != 0) {
LAB_3ab8_445d:
      FUN_3ab8_51c1();
      return;
    }
    if (*(int *)0x158 != 0) {
      FUN_3ab8_51c1();
      return;
    }
    func_0x0000ac64();
    uVar7 = 0x885;
    func_0x0000a799();
    *(undefined2 *)0xbc0 = 1;
  } while( true );
}



/* 3ab8:4b40  FUN_3ab8_4b40  335 bytes, 1 callers */

void FUN_3ab8_4b40(void)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int unaff_BP;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar8;
  
  uVar6 = 0x3ab8;
code_r0x0003f6c0:
  do {
    do {
      puVar1 = (uint *)(unaff_BP + -0x7c);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + 1;
      *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar3);
      iVar4 = *(int *)(unaff_BP + -0x7a);
      if (*(int *)0x14e < iVar4) {
        FUN_3ab8_4d08();
        return;
      }
      if ((*(int *)0x14e <= iVar4) && (*(uint *)0x14c < *(uint *)(unaff_BP + -0x7c))) {
        FUN_3ab8_4d08();
        return;
      }
      uVar7 = 0;
      uVar8 = func_0x00000271(uVar6,*(uint *)(unaff_BP + -0x7c),iVar4);
      uVar5 = (undefined2)((ulong)uVar8 >> 0x10);
      iVar4 = (int)uVar8;
      *(int *)(unaff_BP + -0x5a) = iVar4;
      *(undefined2 *)(unaff_BP + -0x58) = uVar5;
      uVar3 = (uint)(*(byte *)(iVar4 + 0x1c) >> 4);
      *(uint *)(unaff_BP + -0x46) = uVar3;
      uVar6 = uVar7;
    } while (uVar3 != *(uint *)(unaff_BP + -0x168));
    *(undefined2 *)(unaff_BP + -0x8a) = 0;
    *(undefined2 *)(unaff_BP + -0x7e) = 0;
    if (*(int *)(unaff_BP + -0x5c) != 0) {
      if ((*(int *)(unaff_BP + -0x16a) == 0) &&
         ((uint)*(byte *)(iVar4 + 0x1a) == *(uint *)(unaff_BP + -0x166))) {
        *(undefined2 *)(unaff_BP + -0x7e) = 1;
      }
      if (((uint)*(byte *)(iVar4 + 0x1b) == *(uint *)(unaff_BP + -0x16a)) &&
         (*(int *)(unaff_BP + -0x166) == 0)) {
        *(undefined2 *)(unaff_BP + -0x7e) = 1;
      }
      if (((uint)*(byte *)(iVar4 + 0x1b) == *(uint *)(unaff_BP + -0x16a)) &&
         ((uint)*(byte *)(iVar4 + 0x1a) == *(uint *)(unaff_BP + -0x166))) {
        *(undefined2 *)(unaff_BP + -0x8a) = 2;
      }
      if ((*(int *)(unaff_BP + -0x7e) == 0) && (*(int *)(unaff_BP + -0x8a) == 0))
      goto code_r0x0003f6c0;
    }
    *(undefined2 *)(unaff_BP + -0x90) = 0;
    if (*(int *)(unaff_BP + -0x86) == 0) goto LAB_3ab8_4c59;
    uVar5 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
    iVar4 = (int)*(undefined4 *)(unaff_BP + -0x5a);
    if (((*(byte *)(iVar4 + 0x1e) & 0x10) != 0) && (*(int *)(unaff_BP + -0x82) != 0)) {
      *(undefined2 *)(unaff_BP + -0x90) = 3;
    }
    if (((*(byte *)(iVar4 + 0x1e) & 0x40) != 0) && (*(int *)(unaff_BP + -0x40) != 0)) {
      *(undefined2 *)(unaff_BP + -0x90) = 3;
    }
    if (((*(byte *)(iVar4 + 0x1e) & 0x80) != 0) && (*(int *)(unaff_BP + -0x78) != 0)) {
      *(undefined2 *)(unaff_BP + -0x90) = 3;
    }
    if (((*(byte *)(iVar4 + 0x1e) & 0x20) != 0) && (*(int *)(unaff_BP + -0x164) != 0)) {
      *(undefined2 *)(unaff_BP + -0x90) = 3;
    }
    if (*(int *)(unaff_BP + -0x90) != 0) {
LAB_3ab8_4c59:
      *(undefined2 *)(unaff_BP + -0x92) = 0;
      *(undefined2 *)(unaff_BP + -0x8c) = 0;
      *(undefined2 *)(unaff_BP + -0x80) = 0;
      uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
      iVar4 = (int)*(undefined4 *)(unaff_BP + -0x5a);
      if ((*(byte *)(iVar4 + 0x1e) & 1) != 0) {
        *(undefined2 *)(unaff_BP + -0x80) = 1;
      }
      if ((*(byte *)(iVar4 + 0x1e) & 2) != 0) {
        *(undefined2 *)(unaff_BP + -0x8c) = 2;
      }
      if ((*(byte *)(iVar4 + 0x1e) & 4) != 0) {
        *(undefined2 *)(unaff_BP + -0x92) = 3;
      }
      if (*(int *)(unaff_BP + -0x90) + *(int *)(unaff_BP + -0x8a) + *(int *)(unaff_BP + -0x7e) <
          *(int *)(unaff_BP + -0x8c) + *(int *)(unaff_BP + -0x80) + *(int *)(unaff_BP + -0x92)) {
        FUN_3ab8_4b40();
        return;
      }
      iVar4 = func_0x00008854(0,*(undefined1 *)(iVar4 + 0x1c));
      if (iVar4 != 0) {
        FUN_3ab8_4b40();
        return;
      }
      uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
      iVar4 = (int)*(undefined4 *)(unaff_BP + -0x5a);
      *(undefined1 *)(iVar4 + 0x1c) = *(undefined1 *)(unaff_BP + -0x50);
      *(byte *)(iVar4 + 0x1e) = *(byte *)(iVar4 + 0x1e) & 0xfe;
      if (*(int *)(unaff_BP + -0x7e) != 0) {
        *(byte *)(iVar4 + 0x1e) = *(byte *)(iVar4 + 0x1e) | 1;
      }
      uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
      iVar4 = (int)*(undefined4 *)(unaff_BP + -0x5a);
      pbVar2 = (byte *)(iVar4 + 0x1e);
      *pbVar2 = *pbVar2 & 0xfd;
      if (*(int *)(unaff_BP + -0x8a) != 0) {
        pbVar2 = (byte *)(iVar4 + 0x1e);
        *pbVar2 = *pbVar2 | 2;
      }
      uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
      iVar4 = (int)*(undefined4 *)(unaff_BP + -0x5a);
      pbVar2 = (byte *)(iVar4 + 0x1e);
      *pbVar2 = *pbVar2 & 0xfb;
      if (*(int *)(unaff_BP + -0x90) != 0) {
        pbVar2 = (byte *)(iVar4 + 0x1e);
        *pbVar2 = *pbVar2 | 4;
        FUN_3ab8_4b40();
        return;
      }
      FUN_3ab8_4b40();
      return;
    }
  } while( true );
}



/* 3ab8:4c91  FUN_3ab8_4c91  119 bytes, 1 callers */

/* WARNING: Instruction at (ram,0x0003f812) overlaps instruction at (ram,0x0003f811)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_3ab8_4c91(void)

{
  int *piVar1;
  byte *pbVar2;
  int in_AX;
  int iVar3;
  undefined2 in_DX;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool in_ZF;
  
  if (in_ZF) {
    *(int *)(unaff_BP + unaff_DI) = *(int *)(unaff_BP + unaff_DI) + 1;
    *(char *)(unaff_BP + unaff_DI) = *(char *)(unaff_BP + unaff_DI) + -0x7a;
    out(*(undefined1 *)(unaff_SI + 1),in_DX);
    piVar1 = (int *)(unaff_BP + unaff_DI + 0x708e);
    *piVar1 = *piVar1 + -1;
    *(int *)(unaff_BP + unaff_DI) = *(int *)(unaff_BP + unaff_DI) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(unaff_BP + -0x90) + *(int *)(unaff_BP + -0x8a) + *(int *)(unaff_BP + -0x7e) <
      in_AX + *(int *)(unaff_BP + -0x80) + *(int *)(unaff_BP + -0x92)) {
    FUN_3ab8_4b40();
    return;
  }
  iVar3 = func_0x00008854(0x3ab8,*(undefined1 *)(in_BX + 0x1c));
  if (iVar3 != 0) {
    FUN_3ab8_4b40();
    return;
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
  iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
  *(undefined1 *)(iVar3 + 0x1c) = *(undefined1 *)(unaff_BP + -0x50);
  *(byte *)(iVar3 + 0x1e) = *(byte *)(iVar3 + 0x1e) & 0xfe;
  if (*(int *)(unaff_BP + -0x7e) != 0) {
    *(byte *)(iVar3 + 0x1e) = *(byte *)(iVar3 + 0x1e) | 1;
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
  iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
  pbVar2 = (byte *)(iVar3 + 0x1e);
  *pbVar2 = *pbVar2 & 0xfd;
  if (*(int *)(unaff_BP + -0x8a) != 0) {
    pbVar2 = (byte *)(iVar3 + 0x1e);
    *pbVar2 = *pbVar2 | 2;
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
  iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
  pbVar2 = (byte *)(iVar3 + 0x1e);
  *pbVar2 = *pbVar2 & 0xfb;
  if (*(int *)(unaff_BP + -0x90) == 0) {
    FUN_3ab8_4b40();
    return;
  }
  pbVar2 = (byte *)(iVar3 + 0x1e);
  *pbVar2 = *pbVar2 | 4;
  FUN_3ab8_4b40();
  return;
}



/* 3ab8:4d08  FUN_3ab8_4d08  388 bytes, 2 callers */

void FUN_3ab8_4d08(void)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int unaff_BP;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar8;
  
  uVar6 = 0x3ab8;
  *(undefined2 *)(unaff_BP + -0x5c) = 0;
  if (*(int *)(unaff_BP + -0x4e) != 0) {
    *(undefined2 *)(unaff_BP + -0x5c) = 1;
  }
  if ((0 < *(int *)(unaff_BP + -0x5c)) || (0 < *(int *)(unaff_BP + -0x86))) {
    *(undefined2 *)(unaff_BP + -0x8e) = 1;
    while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x152) {
      uVar7 = 0;
      uVar8 = func_0x000003ef(uVar6,*(undefined2 *)(unaff_BP + -0x8e));
      uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
      iVar3 = (int)uVar8;
      *(int *)(unaff_BP + -0x54) = iVar3;
      *(undefined2 *)(unaff_BP + -0x52) = uVar6;
      uVar5 = (uint)(*(byte *)(iVar3 + 8) >> 4);
      *(uint *)(unaff_BP + -0x46) = uVar5;
      if (uVar5 == *(uint *)(unaff_BP + -0x168)) {
        *(undefined2 *)(unaff_BP + -0x7e) = 0;
        if (*(int *)(unaff_BP + -0x5c) != 0) {
          if ((uint)*(byte *)(iVar3 + 9) == *(uint *)(unaff_BP + -0x4e)) {
            *(undefined2 *)(unaff_BP + -0x7e) = 1;
          }
          if (*(int *)(unaff_BP + -0x7e) == 0) goto LAB_3ab8_4e52;
        }
        *(undefined2 *)(unaff_BP + -0x90) = 0;
        if (*(int *)(unaff_BP + -0x86) != 0) {
          if (((*(byte *)(iVar3 + 10) & 0x10) != 0) && (*(int *)(unaff_BP + -0x82) != 0)) {
            *(undefined2 *)(unaff_BP + -0x90) = 3;
          }
          if (((*(byte *)(iVar3 + 10) & 0x40) != 0) && (*(int *)(unaff_BP + -0x40) != 0)) {
            *(undefined2 *)(unaff_BP + -0x90) = 3;
          }
          if (((*(byte *)(iVar3 + 10) & 0x80) != 0) && (*(int *)(unaff_BP + -0x78) != 0)) {
            *(undefined2 *)(unaff_BP + -0x90) = 3;
          }
          if (((*(byte *)(iVar3 + 10) & 0x20) != 0) && (*(int *)(unaff_BP + -0x164) != 0)) {
            *(undefined2 *)(unaff_BP + -0x90) = 3;
          }
          if (*(int *)(unaff_BP + -0x90) == 0) goto LAB_3ab8_4e52;
        }
        *(undefined2 *)(unaff_BP + -0x92) = 0;
        *(undefined2 *)(unaff_BP + -0x80) = 0;
        if ((*(byte *)(iVar3 + 10) & 1) != 0) {
          *(undefined2 *)(unaff_BP + -0x80) = 1;
        }
        if ((*(byte *)(iVar3 + 10) & 4) != 0) {
          *(undefined2 *)(unaff_BP + -0x92) = 3;
        }
        if (*(int *)(unaff_BP + -0x80) + *(int *)(unaff_BP + -0x92) <=
            *(int *)(unaff_BP + -0x90) + *(int *)(unaff_BP + -0x7e)) {
          uVar7 = 0x885;
          iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 8));
          if (iVar3 == 0) {
            uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x54) >> 0x10);
            iVar3 = (int)*(undefined4 *)(unaff_BP + -0x54);
            *(undefined1 *)(iVar3 + 8) = *(undefined1 *)(unaff_BP + -0x50);
            *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfe;
            if (*(int *)(unaff_BP + -0x7e) != 0) {
              *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) | 1;
            }
            uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x54) >> 0x10);
            iVar3 = (int)*(undefined4 *)(unaff_BP + -0x54);
            pbVar2 = (byte *)(iVar3 + 10);
            *pbVar2 = *pbVar2 & 0xfb;
            if (*(int *)(unaff_BP + -0x90) != 0) {
              pbVar2 = (byte *)(iVar3 + 10);
              *pbVar2 = *pbVar2 | 4;
            }
          }
        }
      }
LAB_3ab8_4e52:
      *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
      uVar6 = uVar7;
    }
  }
  *(undefined2 *)(unaff_BP + -0x5c) = 0;
  if (*(int *)(unaff_BP + -0x84) != 0) {
    *(undefined2 *)(unaff_BP + -0x5c) = 1;
  }
  if (((0 < *(int *)(unaff_BP + -0x5c)) || (0 < *(int *)(unaff_BP + -0x86))) &&
     (*(undefined2 *)(unaff_BP + -0x8e) = 1, *(int *)(unaff_BP + -0x8e) <= *(int *)0x150)) {
    FUN_3ab8_4e8c();
    return;
  }
  do {
    while( true ) {
      do {
        do {
          do {
            do {
              do {
                iVar3 = func_0x0002509c(uVar6,unaff_BP + -0x160,0xbe,*(undefined2 *)0xd70);
                if (((iVar3 == 0) || (*(char *)(unaff_BP + -0x160) == 'E')) ||
                   (*(char *)(unaff_BP + -0x160) == 'e')) {
                  func_0x0002504e(0x22b2);
                  *(undefined2 *)0xd70 = 0;
                  if (*(int *)(unaff_BP + -0x56) < 0) {
                    FUN_3ab8_503a();
                    return;
                  }
                  *(undefined2 *)(unaff_BP + -0x7c) = 1;
                  *(undefined2 *)(unaff_BP + -0x7a) = 0;
                  uVar6 = 0x22b2;
                  while( true ) {
                    iVar3 = *(int *)(unaff_BP + -0x7a);
                    if ((*(int *)0x14a < iVar3) ||
                       ((*(int *)0x14a <= iVar3 && (*(uint *)0x148 < *(uint *)(unaff_BP + -0x7c)))))
                    break;
                    uVar7 = 0;
                    uVar8 = func_0x0000013f(uVar6,*(uint *)(unaff_BP + -0x7c),iVar3);
                    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
                    iVar3 = (int)uVar8;
                    *(int *)(unaff_BP + -0x4a) = iVar3;
                    *(undefined2 *)(unaff_BP + -0x48) = uVar6;
                    uVar5 = (uint)(*(byte *)(iVar3 + 0x12) >> 4);
                    *(uint *)(unaff_BP + -0x46) = uVar5;
                    if ((((uVar5 == *(uint *)(unaff_BP + -0x168)) &&
                         (uVar5 = *(uint *)(iVar3 + 0x14), (uVar5 & 1) == 0)) && ((uVar5 & 2) == 0))
                       && ((uVar5 & 4) == 0)) {
                      uVar7 = 0x885;
                      iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x12));
                      if (iVar3 == 0) {
                        *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x4a) + 0x12) =
                             *(undefined1 *)(unaff_BP + -0x56);
                      }
                    }
                    puVar1 = (uint *)(unaff_BP + -0x7c);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 + 1;
                    *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar5)
                    ;
                    uVar6 = uVar7;
                  }
                  if (-1 < *(int *)(unaff_BP + -0x162)) {
                    *(undefined2 *)(unaff_BP + -0x7c) = 1;
                    *(undefined2 *)(unaff_BP + -0x7a) = 0;
                    while( true ) {
                      iVar3 = *(int *)(unaff_BP + -0x7a);
                      if ((*(int *)0x14e < iVar3) ||
                         ((*(int *)0x14e <= iVar3 && (*(uint *)0x14c < *(uint *)(unaff_BP + -0x7c)))
                         )) break;
                      uVar7 = 0;
                      uVar8 = func_0x00000271(uVar6,*(uint *)(unaff_BP + -0x7c),iVar3);
                      uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
                      iVar3 = (int)uVar8;
                      *(int *)(unaff_BP + -0x5a) = iVar3;
                      *(undefined2 *)(unaff_BP + -0x58) = uVar6;
                      uVar5 = (uint)(*(byte *)(iVar3 + 0x1c) >> 4);
                      *(uint *)(unaff_BP + -0x46) = uVar5;
                      if (((uVar5 == *(uint *)(unaff_BP + -0x168)) &&
                          (uVar5 = *(uint *)(iVar3 + 0x1e), (uVar5 & 1) == 0)) &&
                         (((uVar5 & 2) == 0 && ((uVar5 & 4) == 0)))) {
                        uVar7 = 0x885;
                        iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x1c));
                        if (iVar3 == 0) {
                          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x5a) + 0x1c) =
                               *(undefined1 *)(unaff_BP + -0x162);
                        }
                      }
                      puVar1 = (uint *)(unaff_BP + -0x7c);
                      uVar5 = *puVar1;
                      *puVar1 = *puVar1 + 1;
                      *(int *)(unaff_BP + -0x7a) =
                           *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar5);
                      uVar6 = uVar7;
                    }
                    if (-1 < *(int *)(unaff_BP + -0x94)) {
                      *(undefined2 *)(unaff_BP + -0x8e) = 1;
                      while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x152) {
                        uVar7 = 0;
                        uVar8 = func_0x000003ef(uVar6,*(undefined2 *)(unaff_BP + -0x8e));
                        uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
                        iVar3 = (int)uVar8;
                        *(int *)(unaff_BP + -0x54) = iVar3;
                        *(undefined2 *)(unaff_BP + -0x52) = uVar6;
                        uVar5 = (uint)(*(byte *)(iVar3 + 8) >> 4);
                        *(uint *)(unaff_BP + -0x46) = uVar5;
                        if (((uVar5 == *(uint *)(unaff_BP + -0x168)) &&
                            ((*(uint *)(iVar3 + 10) & 1) == 0)) &&
                           ((*(uint *)(iVar3 + 10) & 4) == 0)) {
                          uVar7 = 0x885;
                          iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 8));
                          if (iVar3 == 0) {
                            *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x54) + 8) =
                                 *(undefined1 *)(unaff_BP + -0x94);
                          }
                        }
                        *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
                        uVar6 = uVar7;
                      }
                    }
                    if (-1 < *(int *)(unaff_BP + -0x5e)) {
                      *(undefined2 *)(unaff_BP + -0x8e) = 1;
                      while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x150) {
                        uVar7 = 0;
                        uVar8 = func_0x00000398(uVar6,*(undefined2 *)(unaff_BP + -0x8e));
                        uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
                        iVar3 = (int)uVar8;
                        *(int *)(unaff_BP + -0x98) = iVar3;
                        *(undefined2 *)(unaff_BP + -0x96) = uVar6;
                        uVar5 = (uint)(*(byte *)(iVar3 + 0x15) >> 4);
                        *(uint *)(unaff_BP + -0x46) = uVar5;
                        if (((uVar5 == *(uint *)(unaff_BP + -0x168)) &&
                            ((*(uint *)(iVar3 + 0x16) & 1) == 0)) &&
                           ((*(uint *)(iVar3 + 0x16) & 4) == 0)) {
                          uVar7 = 0x885;
                          iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x15));
                          if (iVar3 == 0) {
                            *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x98) + 0x15) =
                                 *(undefined1 *)(unaff_BP + -0x5e);
                          }
                        }
                        *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
                        uVar6 = uVar7;
                      }
                    }
                    FUN_3ab8_4340();
                    *(undefined1 *)0xd14 = 2;
                    func_0x0000b1d8(uVar6,1);
                    FUN_3ab8_4480();
                    return;
                  }
                  FUN_3ab8_50c6();
                  return;
                }
                uVar6 = 0x22b2;
              } while (*(char *)(unaff_BP + -0x160) == '#');
              iVar3 = func_0x00012232(0x22b2,unaff_BP + -0x160,0x6cfe);
              uVar6 = 0x11f2;
            } while (iVar3 == 0);
            *(undefined2 *)(unaff_BP + -0x60) = 0xffff;
            func_0x000253ce(0x11f2,unaff_BP + -0x15c,0x6d03,unaff_BP + -0x60);
            uVar6 = 0x22b2;
          } while ((*(int *)(unaff_BP + -0x60) < 0) || (0xf < *(int *)(unaff_BP + -0x60)));
          iVar3 = func_0x00025a9a(0x22b2,unaff_BP + -0x160,0x3d);
          *(int *)(unaff_BP + -0x4c) = iVar3;
          uVar6 = 0x22b2;
        } while (iVar3 == 0);
        iVar3 = func_0x00008854(0x22b2,*(int *)(unaff_BP + -0x168) * 0x10 +
                                       *(int *)(unaff_BP + -0x60));
        uVar6 = 0x885;
      } while (iVar3 != 0);
      *(int *)(unaff_BP + -0x4c) = *(int *)(unaff_BP + -0x4c) + 1;
      if ((*(char *)(unaff_BP + -0x15b) != '_') || (*(char *)(unaff_BP + -0x15a) != 'N')) break;
      puVar4 = (undefined1 *)func_0x00025b06(0x885,*(undefined2 *)(unaff_BP + -0x4c),10);
      *(undefined2 *)(unaff_BP + -2) = puVar4;
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
      uVar6 = 0x22b2;
      uVar5 = func_0x00024ce4(0x22b2,*(undefined2 *)(unaff_BP + -0x4c));
      if (8 < uVar5) {
        uVar6 = 0x2a75;
        iVar3 = func_0x0002aa38(0x22b2,*(undefined2 *)(unaff_BP + -0x4c),8);
        if (iVar3 == 2) {
          *(undefined1 *)(*(int *)(unaff_BP + -0x4c) + 7) = 0;
        }
        else {
          *(undefined1 *)(*(int *)(unaff_BP + -0x4c) + 8) = 0;
        }
      }
      FUN_10ad_20e9(uVar6,*(undefined2 *)(unaff_BP + -0x4c),
                    *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60));
      uVar6 = 0x11f2;
    }
    *(undefined2 *)(unaff_BP + -0x86) = 0;
    *(undefined2 *)(unaff_BP + -0x164) = 0;
    *(undefined2 *)(unaff_BP + -0x40) = 0;
    *(undefined2 *)(unaff_BP + -0x78) = 0;
    *(undefined2 *)(unaff_BP + -0x82) = 0;
    *(undefined2 *)(unaff_BP + -0x84) = 0;
    *(undefined2 *)(unaff_BP + -0x4e) = 0;
    *(undefined2 *)(unaff_BP + -0x166) = 0;
    *(undefined2 *)(unaff_BP + -0x16a) = 0;
    iVar3 = func_0x000253ce(0x885,*(undefined2 *)(unaff_BP + -0x4c),0x6d06,unaff_BP + -0x16a,
                            unaff_BP + -0x166,unaff_BP + -0x4e,unaff_BP + -0x84,unaff_BP + -0x86);
    *(int *)(unaff_BP + -0x46) = iVar3;
    if (iVar3 < 1) {
      *(undefined2 *)(unaff_BP + -0x16a) = 0;
    }
    if ((*(int *)(unaff_BP + -0x16a) < 1) && (6 < *(int *)(unaff_BP + -0x16a))) {
      *(undefined2 *)(unaff_BP + -0x16a) = 0;
    }
    if (iVar3 < 2) {
      *(undefined2 *)(unaff_BP + -0x166) = 0;
    }
    if ((*(int *)(unaff_BP + -0x166) < 1) && (0x12 < *(int *)(unaff_BP + -0x166))) {
      *(undefined2 *)(unaff_BP + -0x166) = 0;
    }
    if (iVar3 < 3) {
      *(undefined2 *)(unaff_BP + -0x4e) = 0;
    }
    if ((*(int *)(unaff_BP + -0x4e) < 1) && (6 < *(int *)(unaff_BP + -0x4e))) {
      *(undefined2 *)(unaff_BP + -0x4e) = 0;
    }
    if (iVar3 < 4) {
      *(undefined2 *)(unaff_BP + -0x84) = 0;
    }
    if ((*(int *)(unaff_BP + -0x84) < 1) && (10 < *(int *)(unaff_BP + -0x84))) {
      *(undefined2 *)(unaff_BP + -0x84) = 0;
    }
    if (iVar3 < 5) {
      *(undefined2 *)(unaff_BP + -0x86) = 0;
    }
    else {
      if ((*(int *)(unaff_BP + -0x86) < 1) || (4 < *(int *)(unaff_BP + -0x86))) {
        *(undefined2 *)(unaff_BP + -0x86) = 0;
      }
      if (*(int *)(unaff_BP + -0x86) == 1) {
        *(undefined2 *)(unaff_BP + -0x164) = 1;
      }
      if (*(int *)(unaff_BP + -0x86) == 2) {
        *(undefined2 *)(unaff_BP + -0x82) = 1;
      }
      if (*(int *)(unaff_BP + -0x86) == 3) {
        *(undefined2 *)(unaff_BP + -0x40) = 1;
      }
      if (*(int *)(unaff_BP + -0x86) == 4) {
        *(undefined2 *)(unaff_BP + -0x78) = 1;
      }
    }
    if (99 < *(int *)(unaff_BP + -0x16a)) {
      *(int *)(unaff_BP + -0x56) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x16a) = 0;
    }
    if (99 < *(int *)(unaff_BP + -0x166)) {
      *(int *)(unaff_BP + -0x162) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x166) = 0;
    }
    if (99 < *(int *)(unaff_BP + -0x4e)) {
      *(int *)(unaff_BP + -0x94) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x4e) = 0;
    }
    if (99 < *(int *)(unaff_BP + -0x84)) {
      *(int *)(unaff_BP + -0x5e) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x84) = 0;
    }
  } while ((((*(int *)(unaff_BP + -0x16a) < 1) && (*(int *)(unaff_BP + -0x166) < 1)) &&
           (*(int *)(unaff_BP + -0x4e) < 1)) &&
          ((*(int *)(unaff_BP + -0x84) < 1 && (uVar6 = 0x22b2, *(int *)(unaff_BP + -0x86) < 1))));
  *(undefined2 *)(unaff_BP + -0x5c) = 0;
  if ((*(int *)(unaff_BP + -0x16a) != 0) || (*(int *)(unaff_BP + -0x166) != 0)) {
    *(undefined2 *)(unaff_BP + -0x5c) = 1;
  }
  *(int *)(unaff_BP + -0x50) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
  if ((*(int *)(unaff_BP + -0x5c) < 1) && (*(int *)(unaff_BP + -0x86) < 1)) {
    FUN_3ab8_4d08();
    return;
  }
  *(undefined2 *)(unaff_BP + -0x7c) = 1;
  *(undefined2 *)(unaff_BP + -0x7a) = 0;
  uVar6 = 0x22b2;
  while( true ) {
    iVar3 = *(int *)(unaff_BP + -0x7a);
    if ((*(int *)0x14a < iVar3) ||
       ((*(int *)0x14a <= iVar3 && (*(uint *)0x148 < *(uint *)(unaff_BP + -0x7c))))) break;
    uVar7 = 0;
    uVar8 = func_0x0000013f(uVar6,*(uint *)(unaff_BP + -0x7c),iVar3);
    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar3 = (int)uVar8;
    *(int *)(unaff_BP + -0x4a) = iVar3;
    *(undefined2 *)(unaff_BP + -0x48) = uVar6;
    uVar5 = (uint)(*(byte *)(iVar3 + 0x12) >> 4);
    *(uint *)(unaff_BP + -0x46) = uVar5;
    if (uVar5 == *(uint *)(unaff_BP + -0x168)) {
      *(undefined2 *)(unaff_BP + -0x8a) = 0;
      *(undefined2 *)(unaff_BP + -0x7e) = 0;
      if (*(int *)(unaff_BP + -0x5c) != 0) {
        if ((*(int *)(unaff_BP + -0x16a) == 0) &&
           ((uint)*(byte *)(iVar3 + 0x10) == *(uint *)(unaff_BP + -0x166))) {
          *(undefined2 *)(unaff_BP + -0x7e) = 1;
        }
        if (((uint)*(byte *)(iVar3 + 0x11) == *(uint *)(unaff_BP + -0x16a)) &&
           (*(int *)(unaff_BP + -0x166) == 0)) {
          *(undefined2 *)(unaff_BP + -0x7e) = 1;
        }
        if (((uint)*(byte *)(iVar3 + 0x11) == *(uint *)(unaff_BP + -0x16a)) &&
           ((uint)*(byte *)(iVar3 + 0x10) == *(uint *)(unaff_BP + -0x166))) {
          *(undefined2 *)(unaff_BP + -0x8a) = 2;
        }
        if ((*(int *)(unaff_BP + -0x7e) == 0) && (*(int *)(unaff_BP + -0x8a) == 0))
        goto LAB_3ab8_496c;
      }
      *(undefined2 *)(unaff_BP + -0x90) = 0;
      if (*(int *)(unaff_BP + -0x86) != 0) {
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
        if (((*(byte *)(iVar3 + 0x15) & 8) != 0) && (*(int *)(unaff_BP + -0x82) != 0)) {
          *(undefined2 *)(unaff_BP + -0x90) = 3;
        }
        if (((*(byte *)(iVar3 + 0x15) & 0x20) != 0) && (*(int *)(unaff_BP + -0x40) != 0)) {
          *(undefined2 *)(unaff_BP + -0x90) = 3;
        }
        if (((*(byte *)(iVar3 + 0x15) & 0x10) != 0) && (*(int *)(unaff_BP + -0x78) != 0)) {
          *(undefined2 *)(unaff_BP + -0x90) = 3;
        }
        if (((*(byte *)(iVar3 + 0x14) & 0x20) != 0) && (*(int *)(unaff_BP + -0x164) != 0)) {
          *(undefined2 *)(unaff_BP + -0x90) = 3;
        }
        if (*(int *)(unaff_BP + -0x90) == 0) goto LAB_3ab8_496c;
      }
      *(undefined2 *)(unaff_BP + -0x92) = 0;
      *(undefined2 *)(unaff_BP + -0x8c) = 0;
      *(undefined2 *)(unaff_BP + -0x80) = 0;
      uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
      iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
      if ((*(byte *)(iVar3 + 0x14) & 1) != 0) {
        *(undefined2 *)(unaff_BP + -0x80) = 1;
      }
      if ((*(byte *)(iVar3 + 0x14) & 2) != 0) {
        *(undefined2 *)(unaff_BP + -0x8c) = 2;
      }
      if ((*(byte *)(iVar3 + 0x14) & 4) != 0) {
        *(undefined2 *)(unaff_BP + -0x92) = 3;
      }
      if (*(int *)(unaff_BP + -0x8c) + *(int *)(unaff_BP + -0x80) + *(int *)(unaff_BP + -0x92) <=
          *(int *)(unaff_BP + -0x90) + *(int *)(unaff_BP + -0x8a) + *(int *)(unaff_BP + -0x7e)) {
        uVar7 = 0x885;
        iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x12));
        if (iVar3 == 0) {
          uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
          iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
          *(undefined1 *)(iVar3 + 0x12) = *(undefined1 *)(unaff_BP + -0x50);
          *(byte *)(iVar3 + 0x14) = *(byte *)(iVar3 + 0x14) & 0xfe;
          if (*(int *)(unaff_BP + -0x7e) != 0) {
            *(byte *)(iVar3 + 0x14) = *(byte *)(iVar3 + 0x14) | 1;
          }
          uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
          iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
          pbVar2 = (byte *)(iVar3 + 0x14);
          *pbVar2 = *pbVar2 & 0xfd;
          if (*(int *)(unaff_BP + -0x8a) != 0) {
            pbVar2 = (byte *)(iVar3 + 0x14);
            *pbVar2 = *pbVar2 | 2;
          }
          uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
          iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
          pbVar2 = (byte *)(iVar3 + 0x14);
          *pbVar2 = *pbVar2 & 0xfb;
          if (*(int *)(unaff_BP + -0x90) != 0) {
            pbVar2 = (byte *)(iVar3 + 0x14);
            *pbVar2 = *pbVar2 | 4;
          }
        }
      }
    }
LAB_3ab8_496c:
    puVar1 = (uint *)(unaff_BP + -0x7c);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar5);
    uVar6 = uVar7;
  }
  *(undefined2 *)(unaff_BP + -0x7c) = 1;
  *(undefined2 *)(unaff_BP + -0x7a) = 0;
  do {
    iVar3 = *(int *)(unaff_BP + -0x7a);
    if (*(int *)0x14e < iVar3) {
      FUN_3ab8_4d08();
      return;
    }
    if ((*(int *)0x14e <= iVar3) && (*(uint *)0x14c < *(uint *)(unaff_BP + -0x7c))) {
      FUN_3ab8_4d08();
      return;
    }
    uVar8 = func_0x00000271(uVar6,*(uint *)(unaff_BP + -0x7c),iVar3);
    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar3 = (int)uVar8;
    *(int *)(unaff_BP + -0x5a) = iVar3;
    *(undefined2 *)(unaff_BP + -0x58) = uVar6;
    uVar5 = (uint)(*(byte *)(iVar3 + 0x1c) >> 4);
    *(uint *)(unaff_BP + -0x46) = uVar5;
    if (uVar5 == *(uint *)(unaff_BP + -0x168)) {
      *(undefined2 *)(unaff_BP + -0x8a) = 0;
      *(undefined2 *)(unaff_BP + -0x7e) = 0;
      if (*(int *)(unaff_BP + -0x5c) != 0) {
        if ((*(int *)(unaff_BP + -0x16a) == 0) &&
           ((uint)*(byte *)(iVar3 + 0x1a) == *(uint *)(unaff_BP + -0x166))) {
          *(undefined2 *)(unaff_BP + -0x7e) = 1;
        }
        if (((uint)*(byte *)(iVar3 + 0x1b) == *(uint *)(unaff_BP + -0x16a)) &&
           (*(int *)(unaff_BP + -0x166) == 0)) {
          *(undefined2 *)(unaff_BP + -0x7e) = 1;
        }
        if (((uint)*(byte *)(iVar3 + 0x1b) == *(uint *)(unaff_BP + -0x16a)) &&
           ((uint)*(byte *)(iVar3 + 0x1a) == *(uint *)(unaff_BP + -0x166))) {
          *(undefined2 *)(unaff_BP + -0x8a) = 2;
        }
        if ((*(int *)(unaff_BP + -0x7e) == 0) && (*(int *)(unaff_BP + -0x8a) == 0))
        goto code_r0x0003f6c0;
      }
      *(undefined2 *)(unaff_BP + -0x90) = 0;
      if (*(int *)(unaff_BP + -0x86) == 0) {
LAB_3ab8_4c59:
        *(undefined2 *)(unaff_BP + -0x92) = 0;
        *(undefined2 *)(unaff_BP + -0x8c) = 0;
        *(undefined2 *)(unaff_BP + -0x80) = 0;
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
        if ((*(byte *)(iVar3 + 0x1e) & 1) != 0) {
          *(undefined2 *)(unaff_BP + -0x80) = 1;
        }
        if ((*(byte *)(iVar3 + 0x1e) & 2) != 0) {
          *(undefined2 *)(unaff_BP + -0x8c) = 2;
        }
        if ((*(byte *)(iVar3 + 0x1e) & 4) != 0) {
          *(undefined2 *)(unaff_BP + -0x92) = 3;
        }
        if (*(int *)(unaff_BP + -0x90) + *(int *)(unaff_BP + -0x8a) + *(int *)(unaff_BP + -0x7e) <
            *(int *)(unaff_BP + -0x8c) + *(int *)(unaff_BP + -0x80) + *(int *)(unaff_BP + -0x92)) {
          FUN_3ab8_4b40();
          return;
        }
        iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x1c));
        if (iVar3 != 0) {
          FUN_3ab8_4b40();
          return;
        }
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
        *(undefined1 *)(iVar3 + 0x1c) = *(undefined1 *)(unaff_BP + -0x50);
        *(byte *)(iVar3 + 0x1e) = *(byte *)(iVar3 + 0x1e) & 0xfe;
        if (*(int *)(unaff_BP + -0x7e) != 0) {
          *(byte *)(iVar3 + 0x1e) = *(byte *)(iVar3 + 0x1e) | 1;
        }
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
        pbVar2 = (byte *)(iVar3 + 0x1e);
        *pbVar2 = *pbVar2 & 0xfd;
        if (*(int *)(unaff_BP + -0x8a) != 0) {
          pbVar2 = (byte *)(iVar3 + 0x1e);
          *pbVar2 = *pbVar2 | 2;
        }
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
        pbVar2 = (byte *)(iVar3 + 0x1e);
        *pbVar2 = *pbVar2 & 0xfb;
        if (*(int *)(unaff_BP + -0x90) != 0) {
          pbVar2 = (byte *)(iVar3 + 0x1e);
          *pbVar2 = *pbVar2 | 4;
          FUN_3ab8_4b40();
          return;
        }
        FUN_3ab8_4b40();
        return;
      }
      uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
      iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
      if (((*(byte *)(iVar3 + 0x1e) & 0x10) != 0) && (*(int *)(unaff_BP + -0x82) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      if (((*(byte *)(iVar3 + 0x1e) & 0x40) != 0) && (*(int *)(unaff_BP + -0x40) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      if (((*(byte *)(iVar3 + 0x1e) & 0x80) != 0) && (*(int *)(unaff_BP + -0x78) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      if (((*(byte *)(iVar3 + 0x1e) & 0x20) != 0) && (*(int *)(unaff_BP + -0x164) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      if (*(int *)(unaff_BP + -0x90) != 0) goto LAB_3ab8_4c59;
    }
code_r0x0003f6c0:
    puVar1 = (uint *)(unaff_BP + -0x7c);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar5);
    uVar6 = 0;
  } while( true );
}



/* 3ab8:4e8c  FUN_3ab8_4e8c  305 bytes, 1 callers */

void FUN_3ab8_4e8c(void)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int unaff_BP;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar8;
  
  uVar6 = 0;
  uVar8 = func_0x00000398(0x3ab8,*(undefined2 *)(unaff_BP + -0x8e));
  uVar7 = (undefined2)((ulong)uVar8 >> 0x10);
  iVar3 = (int)uVar8;
  *(int *)(unaff_BP + -0x98) = iVar3;
  *(undefined2 *)(unaff_BP + -0x96) = uVar7;
  uVar5 = (uint)(*(byte *)(iVar3 + 0x15) >> 4);
  *(uint *)(unaff_BP + -0x46) = uVar5;
  if (uVar5 == *(uint *)(unaff_BP + -0x168)) {
    *(undefined2 *)(unaff_BP + -0x7e) = 0;
    if (*(int *)(unaff_BP + -0x5c) != 0) {
      if ((uint)*(byte *)(iVar3 + 0x14) == *(uint *)(unaff_BP + -0x84)) {
        *(undefined2 *)(unaff_BP + -0x7e) = 1;
      }
      if (*(int *)(unaff_BP + -0x7e) == 0) goto LAB_3ab8_4fb2;
    }
    *(undefined2 *)(unaff_BP + -0x90) = 0;
    if (*(int *)(unaff_BP + -0x86) != 0) {
      if (((*(byte *)(iVar3 + 0x17) & 8) != 0) && (*(int *)(unaff_BP + -0x82) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      if ((((*(uint *)(iVar3 + 0x16) & 0x4000) != 0) || ((*(uint *)(iVar3 + 0x16) & 0x10) != 0)) &&
         (*(int *)(unaff_BP + -0x40) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      uVar8 = *(undefined4 *)(unaff_BP + -0x98);
      if (((*(byte *)((int)uVar8 + 0x17) & 0x20) != 0) && (*(int *)(unaff_BP + -0x78) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      if ((*(int *)(unaff_BP + -0x164) != 0) || (*(int *)(unaff_BP + -0x90) == 0))
      goto LAB_3ab8_4fb2;
    }
    uVar7 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar3 = (int)uVar8;
    *(undefined2 *)(unaff_BP + -0x92) = 0;
    *(undefined2 *)(unaff_BP + -0x80) = 0;
    if ((*(byte *)(iVar3 + 0x16) & 1) != 0) {
      *(undefined2 *)(unaff_BP + -0x80) = 1;
    }
    if ((*(byte *)(iVar3 + 0x16) & 4) != 0) {
      *(undefined2 *)(unaff_BP + -0x92) = 3;
    }
    if (*(int *)(unaff_BP + -0x80) + *(int *)(unaff_BP + -0x92) <=
        *(int *)(unaff_BP + -0x90) + *(int *)(unaff_BP + -0x7e)) {
      uVar6 = 0x885;
      iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x15));
      if (iVar3 == 0) {
        uVar7 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x98) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x98);
        *(undefined1 *)(iVar3 + 0x15) = *(undefined1 *)(unaff_BP + -0x50);
        *(byte *)(iVar3 + 0x16) = *(byte *)(iVar3 + 0x16) & 0xfe;
        if (*(int *)(unaff_BP + -0x7e) != 0) {
          *(byte *)(iVar3 + 0x16) = *(byte *)(iVar3 + 0x16) | 1;
        }
        uVar7 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x98) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x98);
        pbVar2 = (byte *)(iVar3 + 0x16);
        *pbVar2 = *pbVar2 & 0xfb;
        if (*(int *)(unaff_BP + -0x90) != 0) {
          pbVar2 = (byte *)(iVar3 + 0x16);
          *pbVar2 = *pbVar2 | 4;
        }
      }
    }
  }
LAB_3ab8_4fb2:
  *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
  if (*(int *)(unaff_BP + -0x8e) <= *(int *)0x150) {
    FUN_3ab8_4e8c();
    return;
  }
  do {
    while( true ) {
      do {
        do {
          do {
            do {
              do {
                iVar3 = func_0x0002509c(uVar6,unaff_BP + -0x160,0xbe,*(undefined2 *)0xd70);
                if (((iVar3 == 0) || (*(char *)(unaff_BP + -0x160) == 'E')) ||
                   (*(char *)(unaff_BP + -0x160) == 'e')) {
                  func_0x0002504e(0x22b2);
                  *(undefined2 *)0xd70 = 0;
                  if (*(int *)(unaff_BP + -0x56) < 0) {
                    FUN_3ab8_503a();
                    return;
                  }
                  *(undefined2 *)(unaff_BP + -0x7c) = 1;
                  *(undefined2 *)(unaff_BP + -0x7a) = 0;
                  uVar6 = 0x22b2;
                  while( true ) {
                    iVar3 = *(int *)(unaff_BP + -0x7a);
                    if ((*(int *)0x14a < iVar3) ||
                       ((*(int *)0x14a <= iVar3 && (*(uint *)0x148 < *(uint *)(unaff_BP + -0x7c)))))
                    break;
                    uVar7 = 0;
                    uVar8 = func_0x0000013f(uVar6,*(uint *)(unaff_BP + -0x7c),iVar3);
                    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
                    iVar3 = (int)uVar8;
                    *(int *)(unaff_BP + -0x4a) = iVar3;
                    *(undefined2 *)(unaff_BP + -0x48) = uVar6;
                    uVar5 = (uint)(*(byte *)(iVar3 + 0x12) >> 4);
                    *(uint *)(unaff_BP + -0x46) = uVar5;
                    if ((((uVar5 == *(uint *)(unaff_BP + -0x168)) &&
                         (uVar5 = *(uint *)(iVar3 + 0x14), (uVar5 & 1) == 0)) && ((uVar5 & 2) == 0))
                       && ((uVar5 & 4) == 0)) {
                      uVar7 = 0x885;
                      iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x12));
                      if (iVar3 == 0) {
                        *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x4a) + 0x12) =
                             *(undefined1 *)(unaff_BP + -0x56);
                      }
                    }
                    puVar1 = (uint *)(unaff_BP + -0x7c);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 + 1;
                    *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar5)
                    ;
                    uVar6 = uVar7;
                  }
                  if (-1 < *(int *)(unaff_BP + -0x162)) {
                    *(undefined2 *)(unaff_BP + -0x7c) = 1;
                    *(undefined2 *)(unaff_BP + -0x7a) = 0;
                    while( true ) {
                      iVar3 = *(int *)(unaff_BP + -0x7a);
                      if ((*(int *)0x14e < iVar3) ||
                         ((*(int *)0x14e <= iVar3 && (*(uint *)0x14c < *(uint *)(unaff_BP + -0x7c)))
                         )) break;
                      uVar7 = 0;
                      uVar8 = func_0x00000271(uVar6,*(uint *)(unaff_BP + -0x7c),iVar3);
                      uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
                      iVar3 = (int)uVar8;
                      *(int *)(unaff_BP + -0x5a) = iVar3;
                      *(undefined2 *)(unaff_BP + -0x58) = uVar6;
                      uVar5 = (uint)(*(byte *)(iVar3 + 0x1c) >> 4);
                      *(uint *)(unaff_BP + -0x46) = uVar5;
                      if (((uVar5 == *(uint *)(unaff_BP + -0x168)) &&
                          (uVar5 = *(uint *)(iVar3 + 0x1e), (uVar5 & 1) == 0)) &&
                         (((uVar5 & 2) == 0 && ((uVar5 & 4) == 0)))) {
                        uVar7 = 0x885;
                        iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x1c));
                        if (iVar3 == 0) {
                          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x5a) + 0x1c) =
                               *(undefined1 *)(unaff_BP + -0x162);
                        }
                      }
                      puVar1 = (uint *)(unaff_BP + -0x7c);
                      uVar5 = *puVar1;
                      *puVar1 = *puVar1 + 1;
                      *(int *)(unaff_BP + -0x7a) =
                           *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar5);
                      uVar6 = uVar7;
                    }
                    if (-1 < *(int *)(unaff_BP + -0x94)) {
                      *(undefined2 *)(unaff_BP + -0x8e) = 1;
                      while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x152) {
                        uVar7 = 0;
                        uVar8 = func_0x000003ef(uVar6,*(undefined2 *)(unaff_BP + -0x8e));
                        uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
                        iVar3 = (int)uVar8;
                        *(int *)(unaff_BP + -0x54) = iVar3;
                        *(undefined2 *)(unaff_BP + -0x52) = uVar6;
                        uVar5 = (uint)(*(byte *)(iVar3 + 8) >> 4);
                        *(uint *)(unaff_BP + -0x46) = uVar5;
                        if (((uVar5 == *(uint *)(unaff_BP + -0x168)) &&
                            ((*(uint *)(iVar3 + 10) & 1) == 0)) &&
                           ((*(uint *)(iVar3 + 10) & 4) == 0)) {
                          uVar7 = 0x885;
                          iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 8));
                          if (iVar3 == 0) {
                            *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x54) + 8) =
                                 *(undefined1 *)(unaff_BP + -0x94);
                          }
                        }
                        *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
                        uVar6 = uVar7;
                      }
                    }
                    if (-1 < *(int *)(unaff_BP + -0x5e)) {
                      *(undefined2 *)(unaff_BP + -0x8e) = 1;
                      while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x150) {
                        uVar7 = 0;
                        uVar8 = func_0x00000398(uVar6,*(undefined2 *)(unaff_BP + -0x8e));
                        uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
                        iVar3 = (int)uVar8;
                        *(int *)(unaff_BP + -0x98) = iVar3;
                        *(undefined2 *)(unaff_BP + -0x96) = uVar6;
                        uVar5 = (uint)(*(byte *)(iVar3 + 0x15) >> 4);
                        *(uint *)(unaff_BP + -0x46) = uVar5;
                        if (((uVar5 == *(uint *)(unaff_BP + -0x168)) &&
                            ((*(uint *)(iVar3 + 0x16) & 1) == 0)) &&
                           ((*(uint *)(iVar3 + 0x16) & 4) == 0)) {
                          uVar7 = 0x885;
                          iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x15));
                          if (iVar3 == 0) {
                            *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x98) + 0x15) =
                                 *(undefined1 *)(unaff_BP + -0x5e);
                          }
                        }
                        *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
                        uVar6 = uVar7;
                      }
                    }
                    FUN_3ab8_4340();
                    *(undefined1 *)0xd14 = 2;
                    func_0x0000b1d8(uVar6,1);
                    FUN_3ab8_4480();
                    return;
                  }
                  FUN_3ab8_50c6();
                  return;
                }
                uVar6 = 0x22b2;
              } while (*(char *)(unaff_BP + -0x160) == '#');
              iVar3 = func_0x00012232(0x22b2,unaff_BP + -0x160,0x6cfe);
              uVar6 = 0x11f2;
            } while (iVar3 == 0);
            *(undefined2 *)(unaff_BP + -0x60) = 0xffff;
            func_0x000253ce(0x11f2,unaff_BP + -0x15c,0x6d03,unaff_BP + -0x60);
            uVar6 = 0x22b2;
          } while ((*(int *)(unaff_BP + -0x60) < 0) || (0xf < *(int *)(unaff_BP + -0x60)));
          iVar3 = func_0x00025a9a(0x22b2,unaff_BP + -0x160,0x3d);
          *(int *)(unaff_BP + -0x4c) = iVar3;
          uVar6 = 0x22b2;
        } while (iVar3 == 0);
        iVar3 = func_0x00008854(0x22b2,*(int *)(unaff_BP + -0x168) * 0x10 +
                                       *(int *)(unaff_BP + -0x60));
        uVar6 = 0x885;
      } while (iVar3 != 0);
      *(int *)(unaff_BP + -0x4c) = *(int *)(unaff_BP + -0x4c) + 1;
      if ((*(char *)(unaff_BP + -0x15b) != '_') || (*(char *)(unaff_BP + -0x15a) != 'N')) break;
      puVar4 = (undefined1 *)func_0x00025b06(0x885,*(undefined2 *)(unaff_BP + -0x4c),10);
      *(undefined2 *)(unaff_BP + -2) = puVar4;
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
      uVar6 = 0x22b2;
      uVar5 = func_0x00024ce4(0x22b2,*(undefined2 *)(unaff_BP + -0x4c));
      if (8 < uVar5) {
        uVar6 = 0x2a75;
        iVar3 = func_0x0002aa38(0x22b2,*(undefined2 *)(unaff_BP + -0x4c),8);
        if (iVar3 == 2) {
          *(undefined1 *)(*(int *)(unaff_BP + -0x4c) + 7) = 0;
        }
        else {
          *(undefined1 *)(*(int *)(unaff_BP + -0x4c) + 8) = 0;
        }
      }
      FUN_10ad_20e9(uVar6,*(undefined2 *)(unaff_BP + -0x4c),
                    *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60));
      uVar6 = 0x11f2;
    }
    *(undefined2 *)(unaff_BP + -0x86) = 0;
    *(undefined2 *)(unaff_BP + -0x164) = 0;
    *(undefined2 *)(unaff_BP + -0x40) = 0;
    *(undefined2 *)(unaff_BP + -0x78) = 0;
    *(undefined2 *)(unaff_BP + -0x82) = 0;
    *(undefined2 *)(unaff_BP + -0x84) = 0;
    *(undefined2 *)(unaff_BP + -0x4e) = 0;
    *(undefined2 *)(unaff_BP + -0x166) = 0;
    *(undefined2 *)(unaff_BP + -0x16a) = 0;
    iVar3 = func_0x000253ce(0x885,*(undefined2 *)(unaff_BP + -0x4c),0x6d06,unaff_BP + -0x16a,
                            unaff_BP + -0x166,unaff_BP + -0x4e,unaff_BP + -0x84,unaff_BP + -0x86);
    *(int *)(unaff_BP + -0x46) = iVar3;
    if (iVar3 < 1) {
      *(undefined2 *)(unaff_BP + -0x16a) = 0;
    }
    if ((*(int *)(unaff_BP + -0x16a) < 1) && (6 < *(int *)(unaff_BP + -0x16a))) {
      *(undefined2 *)(unaff_BP + -0x16a) = 0;
    }
    if (iVar3 < 2) {
      *(undefined2 *)(unaff_BP + -0x166) = 0;
    }
    if ((*(int *)(unaff_BP + -0x166) < 1) && (0x12 < *(int *)(unaff_BP + -0x166))) {
      *(undefined2 *)(unaff_BP + -0x166) = 0;
    }
    if (iVar3 < 3) {
      *(undefined2 *)(unaff_BP + -0x4e) = 0;
    }
    if ((*(int *)(unaff_BP + -0x4e) < 1) && (6 < *(int *)(unaff_BP + -0x4e))) {
      *(undefined2 *)(unaff_BP + -0x4e) = 0;
    }
    if (iVar3 < 4) {
      *(undefined2 *)(unaff_BP + -0x84) = 0;
    }
    if ((*(int *)(unaff_BP + -0x84) < 1) && (10 < *(int *)(unaff_BP + -0x84))) {
      *(undefined2 *)(unaff_BP + -0x84) = 0;
    }
    if (iVar3 < 5) {
      *(undefined2 *)(unaff_BP + -0x86) = 0;
    }
    else {
      if ((*(int *)(unaff_BP + -0x86) < 1) || (4 < *(int *)(unaff_BP + -0x86))) {
        *(undefined2 *)(unaff_BP + -0x86) = 0;
      }
      if (*(int *)(unaff_BP + -0x86) == 1) {
        *(undefined2 *)(unaff_BP + -0x164) = 1;
      }
      if (*(int *)(unaff_BP + -0x86) == 2) {
        *(undefined2 *)(unaff_BP + -0x82) = 1;
      }
      if (*(int *)(unaff_BP + -0x86) == 3) {
        *(undefined2 *)(unaff_BP + -0x40) = 1;
      }
      if (*(int *)(unaff_BP + -0x86) == 4) {
        *(undefined2 *)(unaff_BP + -0x78) = 1;
      }
    }
    if (99 < *(int *)(unaff_BP + -0x16a)) {
      *(int *)(unaff_BP + -0x56) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x16a) = 0;
    }
    if (99 < *(int *)(unaff_BP + -0x166)) {
      *(int *)(unaff_BP + -0x162) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x166) = 0;
    }
    if (99 < *(int *)(unaff_BP + -0x4e)) {
      *(int *)(unaff_BP + -0x94) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x4e) = 0;
    }
    if (99 < *(int *)(unaff_BP + -0x84)) {
      *(int *)(unaff_BP + -0x5e) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x84) = 0;
    }
  } while ((((*(int *)(unaff_BP + -0x16a) < 1) && (*(int *)(unaff_BP + -0x166) < 1)) &&
           (*(int *)(unaff_BP + -0x4e) < 1)) &&
          ((*(int *)(unaff_BP + -0x84) < 1 && (uVar6 = 0x22b2, *(int *)(unaff_BP + -0x86) < 1))));
  *(undefined2 *)(unaff_BP + -0x5c) = 0;
  if ((*(int *)(unaff_BP + -0x16a) != 0) || (*(int *)(unaff_BP + -0x166) != 0)) {
    *(undefined2 *)(unaff_BP + -0x5c) = 1;
  }
  *(int *)(unaff_BP + -0x50) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
  if ((*(int *)(unaff_BP + -0x5c) < 1) && (*(int *)(unaff_BP + -0x86) < 1)) {
    FUN_3ab8_4d08();
    return;
  }
  *(undefined2 *)(unaff_BP + -0x7c) = 1;
  *(undefined2 *)(unaff_BP + -0x7a) = 0;
  uVar6 = 0x22b2;
  while( true ) {
    iVar3 = *(int *)(unaff_BP + -0x7a);
    if ((*(int *)0x14a < iVar3) ||
       ((*(int *)0x14a <= iVar3 && (*(uint *)0x148 < *(uint *)(unaff_BP + -0x7c))))) break;
    uVar7 = 0;
    uVar8 = func_0x0000013f(uVar6,*(uint *)(unaff_BP + -0x7c),iVar3);
    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar3 = (int)uVar8;
    *(int *)(unaff_BP + -0x4a) = iVar3;
    *(undefined2 *)(unaff_BP + -0x48) = uVar6;
    uVar5 = (uint)(*(byte *)(iVar3 + 0x12) >> 4);
    *(uint *)(unaff_BP + -0x46) = uVar5;
    if (uVar5 == *(uint *)(unaff_BP + -0x168)) {
      *(undefined2 *)(unaff_BP + -0x8a) = 0;
      *(undefined2 *)(unaff_BP + -0x7e) = 0;
      if (*(int *)(unaff_BP + -0x5c) != 0) {
        if ((*(int *)(unaff_BP + -0x16a) == 0) &&
           ((uint)*(byte *)(iVar3 + 0x10) == *(uint *)(unaff_BP + -0x166))) {
          *(undefined2 *)(unaff_BP + -0x7e) = 1;
        }
        if (((uint)*(byte *)(iVar3 + 0x11) == *(uint *)(unaff_BP + -0x16a)) &&
           (*(int *)(unaff_BP + -0x166) == 0)) {
          *(undefined2 *)(unaff_BP + -0x7e) = 1;
        }
        if (((uint)*(byte *)(iVar3 + 0x11) == *(uint *)(unaff_BP + -0x16a)) &&
           ((uint)*(byte *)(iVar3 + 0x10) == *(uint *)(unaff_BP + -0x166))) {
          *(undefined2 *)(unaff_BP + -0x8a) = 2;
        }
        if ((*(int *)(unaff_BP + -0x7e) == 0) && (*(int *)(unaff_BP + -0x8a) == 0))
        goto LAB_3ab8_496c;
      }
      *(undefined2 *)(unaff_BP + -0x90) = 0;
      if (*(int *)(unaff_BP + -0x86) != 0) {
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
        if (((*(byte *)(iVar3 + 0x15) & 8) != 0) && (*(int *)(unaff_BP + -0x82) != 0)) {
          *(undefined2 *)(unaff_BP + -0x90) = 3;
        }
        if (((*(byte *)(iVar3 + 0x15) & 0x20) != 0) && (*(int *)(unaff_BP + -0x40) != 0)) {
          *(undefined2 *)(unaff_BP + -0x90) = 3;
        }
        if (((*(byte *)(iVar3 + 0x15) & 0x10) != 0) && (*(int *)(unaff_BP + -0x78) != 0)) {
          *(undefined2 *)(unaff_BP + -0x90) = 3;
        }
        if (((*(byte *)(iVar3 + 0x14) & 0x20) != 0) && (*(int *)(unaff_BP + -0x164) != 0)) {
          *(undefined2 *)(unaff_BP + -0x90) = 3;
        }
        if (*(int *)(unaff_BP + -0x90) == 0) goto LAB_3ab8_496c;
      }
      *(undefined2 *)(unaff_BP + -0x92) = 0;
      *(undefined2 *)(unaff_BP + -0x8c) = 0;
      *(undefined2 *)(unaff_BP + -0x80) = 0;
      uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
      iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
      if ((*(byte *)(iVar3 + 0x14) & 1) != 0) {
        *(undefined2 *)(unaff_BP + -0x80) = 1;
      }
      if ((*(byte *)(iVar3 + 0x14) & 2) != 0) {
        *(undefined2 *)(unaff_BP + -0x8c) = 2;
      }
      if ((*(byte *)(iVar3 + 0x14) & 4) != 0) {
        *(undefined2 *)(unaff_BP + -0x92) = 3;
      }
      if (*(int *)(unaff_BP + -0x8c) + *(int *)(unaff_BP + -0x80) + *(int *)(unaff_BP + -0x92) <=
          *(int *)(unaff_BP + -0x90) + *(int *)(unaff_BP + -0x8a) + *(int *)(unaff_BP + -0x7e)) {
        uVar7 = 0x885;
        iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x12));
        if (iVar3 == 0) {
          uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
          iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
          *(undefined1 *)(iVar3 + 0x12) = *(undefined1 *)(unaff_BP + -0x50);
          *(byte *)(iVar3 + 0x14) = *(byte *)(iVar3 + 0x14) & 0xfe;
          if (*(int *)(unaff_BP + -0x7e) != 0) {
            *(byte *)(iVar3 + 0x14) = *(byte *)(iVar3 + 0x14) | 1;
          }
          uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
          iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
          pbVar2 = (byte *)(iVar3 + 0x14);
          *pbVar2 = *pbVar2 & 0xfd;
          if (*(int *)(unaff_BP + -0x8a) != 0) {
            pbVar2 = (byte *)(iVar3 + 0x14);
            *pbVar2 = *pbVar2 | 2;
          }
          uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
          iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
          pbVar2 = (byte *)(iVar3 + 0x14);
          *pbVar2 = *pbVar2 & 0xfb;
          if (*(int *)(unaff_BP + -0x90) != 0) {
            pbVar2 = (byte *)(iVar3 + 0x14);
            *pbVar2 = *pbVar2 | 4;
          }
        }
      }
    }
LAB_3ab8_496c:
    puVar1 = (uint *)(unaff_BP + -0x7c);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar5);
    uVar6 = uVar7;
  }
  *(undefined2 *)(unaff_BP + -0x7c) = 1;
  *(undefined2 *)(unaff_BP + -0x7a) = 0;
  do {
    iVar3 = *(int *)(unaff_BP + -0x7a);
    if (*(int *)0x14e < iVar3) {
      FUN_3ab8_4d08();
      return;
    }
    if ((*(int *)0x14e <= iVar3) && (*(uint *)0x14c < *(uint *)(unaff_BP + -0x7c))) {
      FUN_3ab8_4d08();
      return;
    }
    uVar8 = func_0x00000271(uVar6,*(uint *)(unaff_BP + -0x7c),iVar3);
    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar3 = (int)uVar8;
    *(int *)(unaff_BP + -0x5a) = iVar3;
    *(undefined2 *)(unaff_BP + -0x58) = uVar6;
    uVar5 = (uint)(*(byte *)(iVar3 + 0x1c) >> 4);
    *(uint *)(unaff_BP + -0x46) = uVar5;
    if (uVar5 == *(uint *)(unaff_BP + -0x168)) {
      *(undefined2 *)(unaff_BP + -0x8a) = 0;
      *(undefined2 *)(unaff_BP + -0x7e) = 0;
      if (*(int *)(unaff_BP + -0x5c) != 0) {
        if ((*(int *)(unaff_BP + -0x16a) == 0) &&
           ((uint)*(byte *)(iVar3 + 0x1a) == *(uint *)(unaff_BP + -0x166))) {
          *(undefined2 *)(unaff_BP + -0x7e) = 1;
        }
        if (((uint)*(byte *)(iVar3 + 0x1b) == *(uint *)(unaff_BP + -0x16a)) &&
           (*(int *)(unaff_BP + -0x166) == 0)) {
          *(undefined2 *)(unaff_BP + -0x7e) = 1;
        }
        if (((uint)*(byte *)(iVar3 + 0x1b) == *(uint *)(unaff_BP + -0x16a)) &&
           ((uint)*(byte *)(iVar3 + 0x1a) == *(uint *)(unaff_BP + -0x166))) {
          *(undefined2 *)(unaff_BP + -0x8a) = 2;
        }
        if ((*(int *)(unaff_BP + -0x7e) == 0) && (*(int *)(unaff_BP + -0x8a) == 0))
        goto code_r0x0003f6c0;
      }
      *(undefined2 *)(unaff_BP + -0x90) = 0;
      if (*(int *)(unaff_BP + -0x86) == 0) {
LAB_3ab8_4c59:
        *(undefined2 *)(unaff_BP + -0x92) = 0;
        *(undefined2 *)(unaff_BP + -0x8c) = 0;
        *(undefined2 *)(unaff_BP + -0x80) = 0;
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
        if ((*(byte *)(iVar3 + 0x1e) & 1) != 0) {
          *(undefined2 *)(unaff_BP + -0x80) = 1;
        }
        if ((*(byte *)(iVar3 + 0x1e) & 2) != 0) {
          *(undefined2 *)(unaff_BP + -0x8c) = 2;
        }
        if ((*(byte *)(iVar3 + 0x1e) & 4) != 0) {
          *(undefined2 *)(unaff_BP + -0x92) = 3;
        }
        if (*(int *)(unaff_BP + -0x90) + *(int *)(unaff_BP + -0x8a) + *(int *)(unaff_BP + -0x7e) <
            *(int *)(unaff_BP + -0x8c) + *(int *)(unaff_BP + -0x80) + *(int *)(unaff_BP + -0x92)) {
          FUN_3ab8_4b40();
          return;
        }
        iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x1c));
        if (iVar3 != 0) {
          FUN_3ab8_4b40();
          return;
        }
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
        *(undefined1 *)(iVar3 + 0x1c) = *(undefined1 *)(unaff_BP + -0x50);
        *(byte *)(iVar3 + 0x1e) = *(byte *)(iVar3 + 0x1e) & 0xfe;
        if (*(int *)(unaff_BP + -0x7e) != 0) {
          *(byte *)(iVar3 + 0x1e) = *(byte *)(iVar3 + 0x1e) | 1;
        }
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
        pbVar2 = (byte *)(iVar3 + 0x1e);
        *pbVar2 = *pbVar2 & 0xfd;
        if (*(int *)(unaff_BP + -0x8a) != 0) {
          pbVar2 = (byte *)(iVar3 + 0x1e);
          *pbVar2 = *pbVar2 | 2;
        }
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
        pbVar2 = (byte *)(iVar3 + 0x1e);
        *pbVar2 = *pbVar2 & 0xfb;
        if (*(int *)(unaff_BP + -0x90) != 0) {
          pbVar2 = (byte *)(iVar3 + 0x1e);
          *pbVar2 = *pbVar2 | 4;
          FUN_3ab8_4b40();
          return;
        }
        FUN_3ab8_4b40();
        return;
      }
      uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
      iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
      if (((*(byte *)(iVar3 + 0x1e) & 0x10) != 0) && (*(int *)(unaff_BP + -0x82) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      if (((*(byte *)(iVar3 + 0x1e) & 0x40) != 0) && (*(int *)(unaff_BP + -0x40) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      if (((*(byte *)(iVar3 + 0x1e) & 0x80) != 0) && (*(int *)(unaff_BP + -0x78) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      if (((*(byte *)(iVar3 + 0x1e) & 0x20) != 0) && (*(int *)(unaff_BP + -0x164) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      if (*(int *)(unaff_BP + -0x90) != 0) goto LAB_3ab8_4c59;
    }
code_r0x0003f6c0:
    puVar1 = (uint *)(unaff_BP + -0x7c);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar5);
    uVar6 = 0;
  } while( true );
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  125 bytes, 2 callers */

void FUN_3ab8_4fbd(void)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int unaff_BP;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined4 uVar8;
  
  uVar6 = 0x3ab8;
  if (in_ZF || in_OF != in_SF) {
    FUN_3ab8_4e8c();
    return;
  }
  do {
    while( true ) {
      do {
        do {
          do {
            do {
              do {
                iVar3 = func_0x0002509c(uVar6,unaff_BP + -0x160,0xbe,*(undefined2 *)0xd70);
                if (((iVar3 == 0) || (*(char *)(unaff_BP + -0x160) == 'E')) ||
                   (*(char *)(unaff_BP + -0x160) == 'e')) {
                  func_0x0002504e(0x22b2);
                  *(undefined2 *)0xd70 = 0;
                  if (*(int *)(unaff_BP + -0x56) < 0) {
                    FUN_3ab8_503a();
                    return;
                  }
                  *(undefined2 *)(unaff_BP + -0x7c) = 1;
                  *(undefined2 *)(unaff_BP + -0x7a) = 0;
                  uVar6 = 0x22b2;
                  while( true ) {
                    iVar3 = *(int *)(unaff_BP + -0x7a);
                    if ((*(int *)0x14a < iVar3) ||
                       ((*(int *)0x14a <= iVar3 && (*(uint *)0x148 < *(uint *)(unaff_BP + -0x7c)))))
                    break;
                    uVar7 = 0;
                    uVar8 = func_0x0000013f(uVar6,*(uint *)(unaff_BP + -0x7c),iVar3);
                    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
                    iVar3 = (int)uVar8;
                    *(int *)(unaff_BP + -0x4a) = iVar3;
                    *(undefined2 *)(unaff_BP + -0x48) = uVar6;
                    uVar5 = (uint)(*(byte *)(iVar3 + 0x12) >> 4);
                    *(uint *)(unaff_BP + -0x46) = uVar5;
                    if ((((uVar5 == *(uint *)(unaff_BP + -0x168)) &&
                         (uVar5 = *(uint *)(iVar3 + 0x14), (uVar5 & 1) == 0)) && ((uVar5 & 2) == 0))
                       && ((uVar5 & 4) == 0)) {
                      uVar7 = 0x885;
                      iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x12));
                      if (iVar3 == 0) {
                        *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x4a) + 0x12) =
                             *(undefined1 *)(unaff_BP + -0x56);
                      }
                    }
                    puVar1 = (uint *)(unaff_BP + -0x7c);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 + 1;
                    *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar5)
                    ;
                    uVar6 = uVar7;
                  }
                  if (-1 < *(int *)(unaff_BP + -0x162)) {
                    *(undefined2 *)(unaff_BP + -0x7c) = 1;
                    *(undefined2 *)(unaff_BP + -0x7a) = 0;
                    while( true ) {
                      iVar3 = *(int *)(unaff_BP + -0x7a);
                      if ((*(int *)0x14e < iVar3) ||
                         ((*(int *)0x14e <= iVar3 && (*(uint *)0x14c < *(uint *)(unaff_BP + -0x7c)))
                         )) break;
                      uVar7 = 0;
                      uVar8 = func_0x00000271(uVar6,*(uint *)(unaff_BP + -0x7c),iVar3);
                      uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
                      iVar3 = (int)uVar8;
                      *(int *)(unaff_BP + -0x5a) = iVar3;
                      *(undefined2 *)(unaff_BP + -0x58) = uVar6;
                      uVar5 = (uint)(*(byte *)(iVar3 + 0x1c) >> 4);
                      *(uint *)(unaff_BP + -0x46) = uVar5;
                      if (((uVar5 == *(uint *)(unaff_BP + -0x168)) &&
                          (uVar5 = *(uint *)(iVar3 + 0x1e), (uVar5 & 1) == 0)) &&
                         (((uVar5 & 2) == 0 && ((uVar5 & 4) == 0)))) {
                        uVar7 = 0x885;
                        iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x1c));
                        if (iVar3 == 0) {
                          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x5a) + 0x1c) =
                               *(undefined1 *)(unaff_BP + -0x162);
                        }
                      }
                      puVar1 = (uint *)(unaff_BP + -0x7c);
                      uVar5 = *puVar1;
                      *puVar1 = *puVar1 + 1;
                      *(int *)(unaff_BP + -0x7a) =
                           *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar5);
                      uVar6 = uVar7;
                    }
                    if (-1 < *(int *)(unaff_BP + -0x94)) {
                      *(undefined2 *)(unaff_BP + -0x8e) = 1;
                      while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x152) {
                        uVar7 = 0;
                        uVar8 = func_0x000003ef(uVar6,*(undefined2 *)(unaff_BP + -0x8e));
                        uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
                        iVar3 = (int)uVar8;
                        *(int *)(unaff_BP + -0x54) = iVar3;
                        *(undefined2 *)(unaff_BP + -0x52) = uVar6;
                        uVar5 = (uint)(*(byte *)(iVar3 + 8) >> 4);
                        *(uint *)(unaff_BP + -0x46) = uVar5;
                        if (((uVar5 == *(uint *)(unaff_BP + -0x168)) &&
                            ((*(uint *)(iVar3 + 10) & 1) == 0)) &&
                           ((*(uint *)(iVar3 + 10) & 4) == 0)) {
                          uVar7 = 0x885;
                          iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 8));
                          if (iVar3 == 0) {
                            *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x54) + 8) =
                                 *(undefined1 *)(unaff_BP + -0x94);
                          }
                        }
                        *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
                        uVar6 = uVar7;
                      }
                    }
                    if (-1 < *(int *)(unaff_BP + -0x5e)) {
                      *(undefined2 *)(unaff_BP + -0x8e) = 1;
                      while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x150) {
                        uVar7 = 0;
                        uVar8 = func_0x00000398(uVar6,*(undefined2 *)(unaff_BP + -0x8e));
                        uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
                        iVar3 = (int)uVar8;
                        *(int *)(unaff_BP + -0x98) = iVar3;
                        *(undefined2 *)(unaff_BP + -0x96) = uVar6;
                        uVar5 = (uint)(*(byte *)(iVar3 + 0x15) >> 4);
                        *(uint *)(unaff_BP + -0x46) = uVar5;
                        if (((uVar5 == *(uint *)(unaff_BP + -0x168)) &&
                            ((*(uint *)(iVar3 + 0x16) & 1) == 0)) &&
                           ((*(uint *)(iVar3 + 0x16) & 4) == 0)) {
                          uVar7 = 0x885;
                          iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x15));
                          if (iVar3 == 0) {
                            *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x98) + 0x15) =
                                 *(undefined1 *)(unaff_BP + -0x5e);
                          }
                        }
                        *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
                        uVar6 = uVar7;
                      }
                    }
                    FUN_3ab8_4340();
                    *(undefined1 *)0xd14 = 2;
                    func_0x0000b1d8(uVar6,1);
                    FUN_3ab8_4480();
                    return;
                  }
                  FUN_3ab8_50c6();
                  return;
                }
                uVar6 = 0x22b2;
              } while (*(char *)(unaff_BP + -0x160) == '#');
              iVar3 = func_0x00012232(0x22b2,unaff_BP + -0x160,0x6cfe);
              uVar6 = 0x11f2;
            } while (iVar3 == 0);
            *(undefined2 *)(unaff_BP + -0x60) = 0xffff;
            func_0x000253ce(0x11f2,unaff_BP + -0x15c,0x6d03,unaff_BP + -0x60);
            uVar6 = 0x22b2;
          } while ((*(int *)(unaff_BP + -0x60) < 0) || (0xf < *(int *)(unaff_BP + -0x60)));
          iVar3 = func_0x00025a9a(0x22b2,unaff_BP + -0x160,0x3d);
          *(int *)(unaff_BP + -0x4c) = iVar3;
          uVar6 = 0x22b2;
        } while (iVar3 == 0);
        iVar3 = func_0x00008854(0x22b2,*(int *)(unaff_BP + -0x168) * 0x10 +
                                       *(int *)(unaff_BP + -0x60));
        uVar6 = 0x885;
      } while (iVar3 != 0);
      *(int *)(unaff_BP + -0x4c) = *(int *)(unaff_BP + -0x4c) + 1;
      if ((*(char *)(unaff_BP + -0x15b) != '_') || (*(char *)(unaff_BP + -0x15a) != 'N')) break;
      puVar4 = (undefined1 *)func_0x00025b06(0x885,*(undefined2 *)(unaff_BP + -0x4c),10);
      *(undefined2 *)(unaff_BP + -2) = puVar4;
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
      uVar6 = 0x22b2;
      uVar5 = func_0x00024ce4(0x22b2,*(undefined2 *)(unaff_BP + -0x4c));
      if (8 < uVar5) {
        uVar6 = 0x2a75;
        iVar3 = func_0x0002aa38(0x22b2,*(undefined2 *)(unaff_BP + -0x4c),8);
        if (iVar3 == 2) {
          *(undefined1 *)(*(int *)(unaff_BP + -0x4c) + 7) = 0;
        }
        else {
          *(undefined1 *)(*(int *)(unaff_BP + -0x4c) + 8) = 0;
        }
      }
      FUN_10ad_20e9(uVar6,*(undefined2 *)(unaff_BP + -0x4c),
                    *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60));
      uVar6 = 0x11f2;
    }
    *(undefined2 *)(unaff_BP + -0x86) = 0;
    *(undefined2 *)(unaff_BP + -0x164) = 0;
    *(undefined2 *)(unaff_BP + -0x40) = 0;
    *(undefined2 *)(unaff_BP + -0x78) = 0;
    *(undefined2 *)(unaff_BP + -0x82) = 0;
    *(undefined2 *)(unaff_BP + -0x84) = 0;
    *(undefined2 *)(unaff_BP + -0x4e) = 0;
    *(undefined2 *)(unaff_BP + -0x166) = 0;
    *(undefined2 *)(unaff_BP + -0x16a) = 0;
    iVar3 = func_0x000253ce(0x885,*(undefined2 *)(unaff_BP + -0x4c),0x6d06,unaff_BP + -0x16a,
                            unaff_BP + -0x166,unaff_BP + -0x4e,unaff_BP + -0x84,unaff_BP + -0x86);
    *(int *)(unaff_BP + -0x46) = iVar3;
    if (iVar3 < 1) {
      *(undefined2 *)(unaff_BP + -0x16a) = 0;
    }
    if ((*(int *)(unaff_BP + -0x16a) < 1) && (6 < *(int *)(unaff_BP + -0x16a))) {
      *(undefined2 *)(unaff_BP + -0x16a) = 0;
    }
    if (iVar3 < 2) {
      *(undefined2 *)(unaff_BP + -0x166) = 0;
    }
    if ((*(int *)(unaff_BP + -0x166) < 1) && (0x12 < *(int *)(unaff_BP + -0x166))) {
      *(undefined2 *)(unaff_BP + -0x166) = 0;
    }
    if (iVar3 < 3) {
      *(undefined2 *)(unaff_BP + -0x4e) = 0;
    }
    if ((*(int *)(unaff_BP + -0x4e) < 1) && (6 < *(int *)(unaff_BP + -0x4e))) {
      *(undefined2 *)(unaff_BP + -0x4e) = 0;
    }
    if (iVar3 < 4) {
      *(undefined2 *)(unaff_BP + -0x84) = 0;
    }
    if ((*(int *)(unaff_BP + -0x84) < 1) && (10 < *(int *)(unaff_BP + -0x84))) {
      *(undefined2 *)(unaff_BP + -0x84) = 0;
    }
    if (iVar3 < 5) {
      *(undefined2 *)(unaff_BP + -0x86) = 0;
    }
    else {
      if ((*(int *)(unaff_BP + -0x86) < 1) || (4 < *(int *)(unaff_BP + -0x86))) {
        *(undefined2 *)(unaff_BP + -0x86) = 0;
      }
      if (*(int *)(unaff_BP + -0x86) == 1) {
        *(undefined2 *)(unaff_BP + -0x164) = 1;
      }
      if (*(int *)(unaff_BP + -0x86) == 2) {
        *(undefined2 *)(unaff_BP + -0x82) = 1;
      }
      if (*(int *)(unaff_BP + -0x86) == 3) {
        *(undefined2 *)(unaff_BP + -0x40) = 1;
      }
      if (*(int *)(unaff_BP + -0x86) == 4) {
        *(undefined2 *)(unaff_BP + -0x78) = 1;
      }
    }
    if (99 < *(int *)(unaff_BP + -0x16a)) {
      *(int *)(unaff_BP + -0x56) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x16a) = 0;
    }
    if (99 < *(int *)(unaff_BP + -0x166)) {
      *(int *)(unaff_BP + -0x162) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x166) = 0;
    }
    if (99 < *(int *)(unaff_BP + -0x4e)) {
      *(int *)(unaff_BP + -0x94) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x4e) = 0;
    }
    if (99 < *(int *)(unaff_BP + -0x84)) {
      *(int *)(unaff_BP + -0x5e) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x84) = 0;
    }
  } while ((((*(int *)(unaff_BP + -0x16a) < 1) && (*(int *)(unaff_BP + -0x166) < 1)) &&
           (*(int *)(unaff_BP + -0x4e) < 1)) &&
          ((*(int *)(unaff_BP + -0x84) < 1 && (uVar6 = 0x22b2, *(int *)(unaff_BP + -0x86) < 1))));
  *(undefined2 *)(unaff_BP + -0x5c) = 0;
  if ((*(int *)(unaff_BP + -0x16a) != 0) || (*(int *)(unaff_BP + -0x166) != 0)) {
    *(undefined2 *)(unaff_BP + -0x5c) = 1;
  }
  *(int *)(unaff_BP + -0x50) = *(int *)(unaff_BP + -0x168) * 0x10 + *(int *)(unaff_BP + -0x60);
  if ((*(int *)(unaff_BP + -0x5c) < 1) && (*(int *)(unaff_BP + -0x86) < 1)) {
    FUN_3ab8_4d08();
    return;
  }
  *(undefined2 *)(unaff_BP + -0x7c) = 1;
  *(undefined2 *)(unaff_BP + -0x7a) = 0;
  uVar6 = 0x22b2;
  while( true ) {
    iVar3 = *(int *)(unaff_BP + -0x7a);
    if ((*(int *)0x14a < iVar3) ||
       ((*(int *)0x14a <= iVar3 && (*(uint *)0x148 < *(uint *)(unaff_BP + -0x7c))))) break;
    uVar7 = 0;
    uVar8 = func_0x0000013f(uVar6,*(uint *)(unaff_BP + -0x7c),iVar3);
    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar3 = (int)uVar8;
    *(int *)(unaff_BP + -0x4a) = iVar3;
    *(undefined2 *)(unaff_BP + -0x48) = uVar6;
    uVar5 = (uint)(*(byte *)(iVar3 + 0x12) >> 4);
    *(uint *)(unaff_BP + -0x46) = uVar5;
    if (uVar5 == *(uint *)(unaff_BP + -0x168)) {
      *(undefined2 *)(unaff_BP + -0x8a) = 0;
      *(undefined2 *)(unaff_BP + -0x7e) = 0;
      if (*(int *)(unaff_BP + -0x5c) != 0) {
        if ((*(int *)(unaff_BP + -0x16a) == 0) &&
           ((uint)*(byte *)(iVar3 + 0x10) == *(uint *)(unaff_BP + -0x166))) {
          *(undefined2 *)(unaff_BP + -0x7e) = 1;
        }
        if (((uint)*(byte *)(iVar3 + 0x11) == *(uint *)(unaff_BP + -0x16a)) &&
           (*(int *)(unaff_BP + -0x166) == 0)) {
          *(undefined2 *)(unaff_BP + -0x7e) = 1;
        }
        if (((uint)*(byte *)(iVar3 + 0x11) == *(uint *)(unaff_BP + -0x16a)) &&
           ((uint)*(byte *)(iVar3 + 0x10) == *(uint *)(unaff_BP + -0x166))) {
          *(undefined2 *)(unaff_BP + -0x8a) = 2;
        }
        if ((*(int *)(unaff_BP + -0x7e) == 0) && (*(int *)(unaff_BP + -0x8a) == 0))
        goto LAB_3ab8_496c;
      }
      *(undefined2 *)(unaff_BP + -0x90) = 0;
      if (*(int *)(unaff_BP + -0x86) != 0) {
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
        if (((*(byte *)(iVar3 + 0x15) & 8) != 0) && (*(int *)(unaff_BP + -0x82) != 0)) {
          *(undefined2 *)(unaff_BP + -0x90) = 3;
        }
        if (((*(byte *)(iVar3 + 0x15) & 0x20) != 0) && (*(int *)(unaff_BP + -0x40) != 0)) {
          *(undefined2 *)(unaff_BP + -0x90) = 3;
        }
        if (((*(byte *)(iVar3 + 0x15) & 0x10) != 0) && (*(int *)(unaff_BP + -0x78) != 0)) {
          *(undefined2 *)(unaff_BP + -0x90) = 3;
        }
        if (((*(byte *)(iVar3 + 0x14) & 0x20) != 0) && (*(int *)(unaff_BP + -0x164) != 0)) {
          *(undefined2 *)(unaff_BP + -0x90) = 3;
        }
        if (*(int *)(unaff_BP + -0x90) == 0) goto LAB_3ab8_496c;
      }
      *(undefined2 *)(unaff_BP + -0x92) = 0;
      *(undefined2 *)(unaff_BP + -0x8c) = 0;
      *(undefined2 *)(unaff_BP + -0x80) = 0;
      uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
      iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
      if ((*(byte *)(iVar3 + 0x14) & 1) != 0) {
        *(undefined2 *)(unaff_BP + -0x80) = 1;
      }
      if ((*(byte *)(iVar3 + 0x14) & 2) != 0) {
        *(undefined2 *)(unaff_BP + -0x8c) = 2;
      }
      if ((*(byte *)(iVar3 + 0x14) & 4) != 0) {
        *(undefined2 *)(unaff_BP + -0x92) = 3;
      }
      if (*(int *)(unaff_BP + -0x8c) + *(int *)(unaff_BP + -0x80) + *(int *)(unaff_BP + -0x92) <=
          *(int *)(unaff_BP + -0x90) + *(int *)(unaff_BP + -0x8a) + *(int *)(unaff_BP + -0x7e)) {
        uVar7 = 0x885;
        iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x12));
        if (iVar3 == 0) {
          uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
          iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
          *(undefined1 *)(iVar3 + 0x12) = *(undefined1 *)(unaff_BP + -0x50);
          *(byte *)(iVar3 + 0x14) = *(byte *)(iVar3 + 0x14) & 0xfe;
          if (*(int *)(unaff_BP + -0x7e) != 0) {
            *(byte *)(iVar3 + 0x14) = *(byte *)(iVar3 + 0x14) | 1;
          }
          uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
          iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
          pbVar2 = (byte *)(iVar3 + 0x14);
          *pbVar2 = *pbVar2 & 0xfd;
          if (*(int *)(unaff_BP + -0x8a) != 0) {
            pbVar2 = (byte *)(iVar3 + 0x14);
            *pbVar2 = *pbVar2 | 2;
          }
          uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x4a) >> 0x10);
          iVar3 = (int)*(undefined4 *)(unaff_BP + -0x4a);
          pbVar2 = (byte *)(iVar3 + 0x14);
          *pbVar2 = *pbVar2 & 0xfb;
          if (*(int *)(unaff_BP + -0x90) != 0) {
            pbVar2 = (byte *)(iVar3 + 0x14);
            *pbVar2 = *pbVar2 | 4;
          }
        }
      }
    }
LAB_3ab8_496c:
    puVar1 = (uint *)(unaff_BP + -0x7c);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar5);
    uVar6 = uVar7;
  }
  *(undefined2 *)(unaff_BP + -0x7c) = 1;
  *(undefined2 *)(unaff_BP + -0x7a) = 0;
  do {
    iVar3 = *(int *)(unaff_BP + -0x7a);
    if (*(int *)0x14e < iVar3) {
      FUN_3ab8_4d08();
      return;
    }
    if ((*(int *)0x14e <= iVar3) && (*(uint *)0x14c < *(uint *)(unaff_BP + -0x7c))) {
      FUN_3ab8_4d08();
      return;
    }
    uVar8 = func_0x00000271(uVar6,*(uint *)(unaff_BP + -0x7c),iVar3);
    uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar3 = (int)uVar8;
    *(int *)(unaff_BP + -0x5a) = iVar3;
    *(undefined2 *)(unaff_BP + -0x58) = uVar6;
    uVar5 = (uint)(*(byte *)(iVar3 + 0x1c) >> 4);
    *(uint *)(unaff_BP + -0x46) = uVar5;
    if (uVar5 == *(uint *)(unaff_BP + -0x168)) {
      *(undefined2 *)(unaff_BP + -0x8a) = 0;
      *(undefined2 *)(unaff_BP + -0x7e) = 0;
      if (*(int *)(unaff_BP + -0x5c) != 0) {
        if ((*(int *)(unaff_BP + -0x16a) == 0) &&
           ((uint)*(byte *)(iVar3 + 0x1a) == *(uint *)(unaff_BP + -0x166))) {
          *(undefined2 *)(unaff_BP + -0x7e) = 1;
        }
        if (((uint)*(byte *)(iVar3 + 0x1b) == *(uint *)(unaff_BP + -0x16a)) &&
           (*(int *)(unaff_BP + -0x166) == 0)) {
          *(undefined2 *)(unaff_BP + -0x7e) = 1;
        }
        if (((uint)*(byte *)(iVar3 + 0x1b) == *(uint *)(unaff_BP + -0x16a)) &&
           ((uint)*(byte *)(iVar3 + 0x1a) == *(uint *)(unaff_BP + -0x166))) {
          *(undefined2 *)(unaff_BP + -0x8a) = 2;
        }
        if ((*(int *)(unaff_BP + -0x7e) == 0) && (*(int *)(unaff_BP + -0x8a) == 0))
        goto code_r0x0003f6c0;
      }
      *(undefined2 *)(unaff_BP + -0x90) = 0;
      if (*(int *)(unaff_BP + -0x86) == 0) {
LAB_3ab8_4c59:
        *(undefined2 *)(unaff_BP + -0x92) = 0;
        *(undefined2 *)(unaff_BP + -0x8c) = 0;
        *(undefined2 *)(unaff_BP + -0x80) = 0;
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
        if ((*(byte *)(iVar3 + 0x1e) & 1) != 0) {
          *(undefined2 *)(unaff_BP + -0x80) = 1;
        }
        if ((*(byte *)(iVar3 + 0x1e) & 2) != 0) {
          *(undefined2 *)(unaff_BP + -0x8c) = 2;
        }
        if ((*(byte *)(iVar3 + 0x1e) & 4) != 0) {
          *(undefined2 *)(unaff_BP + -0x92) = 3;
        }
        if (*(int *)(unaff_BP + -0x90) + *(int *)(unaff_BP + -0x8a) + *(int *)(unaff_BP + -0x7e) <
            *(int *)(unaff_BP + -0x8c) + *(int *)(unaff_BP + -0x80) + *(int *)(unaff_BP + -0x92)) {
          FUN_3ab8_4b40();
          return;
        }
        iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x1c));
        if (iVar3 != 0) {
          FUN_3ab8_4b40();
          return;
        }
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
        *(undefined1 *)(iVar3 + 0x1c) = *(undefined1 *)(unaff_BP + -0x50);
        *(byte *)(iVar3 + 0x1e) = *(byte *)(iVar3 + 0x1e) & 0xfe;
        if (*(int *)(unaff_BP + -0x7e) != 0) {
          *(byte *)(iVar3 + 0x1e) = *(byte *)(iVar3 + 0x1e) | 1;
        }
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
        pbVar2 = (byte *)(iVar3 + 0x1e);
        *pbVar2 = *pbVar2 & 0xfd;
        if (*(int *)(unaff_BP + -0x8a) != 0) {
          pbVar2 = (byte *)(iVar3 + 0x1e);
          *pbVar2 = *pbVar2 | 2;
        }
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
        pbVar2 = (byte *)(iVar3 + 0x1e);
        *pbVar2 = *pbVar2 & 0xfb;
        if (*(int *)(unaff_BP + -0x90) != 0) {
          pbVar2 = (byte *)(iVar3 + 0x1e);
          *pbVar2 = *pbVar2 | 4;
          FUN_3ab8_4b40();
          return;
        }
        FUN_3ab8_4b40();
        return;
      }
      uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x5a) >> 0x10);
      iVar3 = (int)*(undefined4 *)(unaff_BP + -0x5a);
      if (((*(byte *)(iVar3 + 0x1e) & 0x10) != 0) && (*(int *)(unaff_BP + -0x82) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      if (((*(byte *)(iVar3 + 0x1e) & 0x40) != 0) && (*(int *)(unaff_BP + -0x40) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      if (((*(byte *)(iVar3 + 0x1e) & 0x80) != 0) && (*(int *)(unaff_BP + -0x78) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      if (((*(byte *)(iVar3 + 0x1e) & 0x20) != 0) && (*(int *)(unaff_BP + -0x164) != 0)) {
        *(undefined2 *)(unaff_BP + -0x90) = 3;
      }
      if (*(int *)(unaff_BP + -0x90) != 0) goto LAB_3ab8_4c59;
    }
code_r0x0003f6c0:
    puVar1 = (uint *)(unaff_BP + -0x7c);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar5);
    uVar6 = 0;
  } while( true );
}



/* 3ab8:503a  FUN_3ab8_503a  54 bytes, 1 callers */

void FUN_3ab8_503a(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_BP;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar6;
  
  if (-1 < *(int *)(unaff_BP + -0x162)) {
    *(undefined2 *)(unaff_BP + -0x7c) = 1;
    *(undefined2 *)(unaff_BP + -0x7a) = 0;
    uVar5 = 0x3ab8;
    while( true ) {
      iVar2 = *(int *)(unaff_BP + -0x7a);
      if ((*(int *)0x14e < iVar2) ||
         ((*(int *)0x14e <= iVar2 && (*(uint *)0x14c < *(uint *)(unaff_BP + -0x7c))))) break;
      uVar4 = 0;
      uVar6 = func_0x00000271(uVar5,*(uint *)(unaff_BP + -0x7c),iVar2);
      uVar5 = (undefined2)((ulong)uVar6 >> 0x10);
      iVar2 = (int)uVar6;
      *(int *)(unaff_BP + -0x5a) = iVar2;
      *(undefined2 *)(unaff_BP + -0x58) = uVar5;
      uVar3 = (uint)(*(byte *)(iVar2 + 0x1c) >> 4);
      *(uint *)(unaff_BP + -0x46) = uVar3;
      if (((uVar3 == *(uint *)(unaff_BP + -0x168)) &&
          (uVar3 = *(uint *)(iVar2 + 0x1e), (uVar3 & 1) == 0)) &&
         (((uVar3 & 2) == 0 && ((uVar3 & 4) == 0)))) {
        uVar4 = 0x885;
        iVar2 = func_0x00008854(0,*(undefined1 *)(iVar2 + 0x1c));
        if (iVar2 == 0) {
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x5a) + 0x1c) =
               *(undefined1 *)(unaff_BP + -0x162);
        }
      }
      puVar1 = (uint *)(unaff_BP + -0x7c);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + 1;
      *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar3);
      uVar5 = uVar4;
    }
    if (-1 < *(int *)(unaff_BP + -0x94)) {
      *(undefined2 *)(unaff_BP + -0x8e) = 1;
      while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x152) {
        uVar4 = 0;
        uVar6 = func_0x000003ef(uVar5,*(undefined2 *)(unaff_BP + -0x8e));
        uVar5 = (undefined2)((ulong)uVar6 >> 0x10);
        iVar2 = (int)uVar6;
        *(int *)(unaff_BP + -0x54) = iVar2;
        *(undefined2 *)(unaff_BP + -0x52) = uVar5;
        uVar3 = (uint)(*(byte *)(iVar2 + 8) >> 4);
        *(uint *)(unaff_BP + -0x46) = uVar3;
        if (((uVar3 == *(uint *)(unaff_BP + -0x168)) && ((*(uint *)(iVar2 + 10) & 1) == 0)) &&
           ((*(uint *)(iVar2 + 10) & 4) == 0)) {
          uVar4 = 0x885;
          iVar2 = func_0x00008854(0,*(undefined1 *)(iVar2 + 8));
          if (iVar2 == 0) {
            *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x54) + 8) =
                 *(undefined1 *)(unaff_BP + -0x94);
          }
        }
        *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
        uVar5 = uVar4;
      }
    }
    if (-1 < *(int *)(unaff_BP + -0x5e)) {
      *(undefined2 *)(unaff_BP + -0x8e) = 1;
      while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x150) {
        uVar4 = 0;
        uVar6 = func_0x00000398(uVar5,*(undefined2 *)(unaff_BP + -0x8e));
        uVar5 = (undefined2)((ulong)uVar6 >> 0x10);
        iVar2 = (int)uVar6;
        *(int *)(unaff_BP + -0x98) = iVar2;
        *(undefined2 *)(unaff_BP + -0x96) = uVar5;
        uVar3 = (uint)(*(byte *)(iVar2 + 0x15) >> 4);
        *(uint *)(unaff_BP + -0x46) = uVar3;
        if (((uVar3 == *(uint *)(unaff_BP + -0x168)) && ((*(uint *)(iVar2 + 0x16) & 1) == 0)) &&
           ((*(uint *)(iVar2 + 0x16) & 4) == 0)) {
          uVar4 = 0x885;
          iVar2 = func_0x00008854(0,*(undefined1 *)(iVar2 + 0x15));
          if (iVar2 == 0) {
            *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x98) + 0x15) =
                 *(undefined1 *)(unaff_BP + -0x5e);
          }
        }
        *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
        uVar5 = uVar4;
      }
    }
    FUN_3ab8_4340();
    *(undefined1 *)0xd14 = 2;
    func_0x0000b1d8(uVar5,1);
    FUN_3ab8_4480();
    return;
  }
  FUN_3ab8_50c6();
  return;
}



/* 3ab8:5089  FUN_3ab8_5089  61 bytes, 3 callers */

void FUN_3ab8_5089(void)

{
  uint *puVar1;
  undefined2 in_AX;
  uint uVar2;
  int iVar3;
  undefined2 in_DX;
  int unaff_BP;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar6;
  
  uVar6 = CONCAT22(in_DX,in_AX);
  uVar4 = 0x3ab8;
  while( true ) {
    uVar5 = (undefined2)((ulong)uVar6 >> 0x10);
    iVar3 = (int)uVar6;
    *(undefined2 *)(unaff_BP + -0x58) = uVar5;
    uVar2 = (uint)(*(byte *)(iVar3 + 0x1c) >> 4);
    *(uint *)(unaff_BP + -0x46) = uVar2;
    if ((((uVar2 == *(uint *)(unaff_BP + -0x168)) &&
         (uVar2 = *(uint *)(iVar3 + 0x1e), (uVar2 & 1) == 0)) && ((uVar2 & 2) == 0)) &&
       ((uVar2 & 4) == 0)) {
      iVar3 = func_0x00008854(uVar4,*(undefined1 *)(iVar3 + 0x1c));
      uVar4 = 0x885;
      if (iVar3 == 0) {
        *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x5a) + 0x1c) =
             *(undefined1 *)(unaff_BP + -0x162);
      }
    }
    puVar1 = (uint *)(unaff_BP + -0x7c);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + (uint)(0xfffe < uVar2);
    iVar3 = *(int *)(unaff_BP + -0x7a);
    if ((*(int *)0x14e < iVar3) ||
       ((*(int *)0x14e <= iVar3 && (*(uint *)0x14c < *(uint *)(unaff_BP + -0x7c))))) break;
    uVar6 = func_0x00000271(uVar4,*(uint *)(unaff_BP + -0x7c),iVar3);
    *(undefined2 *)(unaff_BP + -0x5a) = (int)uVar6;
    uVar4 = 0;
  }
  if (-1 < *(int *)(unaff_BP + -0x94)) {
    *(undefined2 *)(unaff_BP + -0x8e) = 1;
    while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x152) {
      uVar5 = 0;
      uVar6 = func_0x000003ef(uVar4,*(undefined2 *)(unaff_BP + -0x8e));
      uVar4 = (undefined2)((ulong)uVar6 >> 0x10);
      iVar3 = (int)uVar6;
      *(int *)(unaff_BP + -0x54) = iVar3;
      *(undefined2 *)(unaff_BP + -0x52) = uVar4;
      uVar2 = (uint)(*(byte *)(iVar3 + 8) >> 4);
      *(uint *)(unaff_BP + -0x46) = uVar2;
      if (((uVar2 == *(uint *)(unaff_BP + -0x168)) && ((*(uint *)(iVar3 + 10) & 1) == 0)) &&
         ((*(uint *)(iVar3 + 10) & 4) == 0)) {
        uVar5 = 0x885;
        iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 8));
        if (iVar3 == 0) {
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x54) + 8) =
               *(undefined1 *)(unaff_BP + -0x94);
        }
      }
      *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
      uVar4 = uVar5;
    }
  }
  if (-1 < *(int *)(unaff_BP + -0x5e)) {
    *(undefined2 *)(unaff_BP + -0x8e) = 1;
    while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x150) {
      uVar5 = 0;
      uVar6 = func_0x00000398(uVar4,*(undefined2 *)(unaff_BP + -0x8e));
      uVar4 = (undefined2)((ulong)uVar6 >> 0x10);
      iVar3 = (int)uVar6;
      *(int *)(unaff_BP + -0x98) = iVar3;
      *(undefined2 *)(unaff_BP + -0x96) = uVar4;
      uVar2 = (uint)(*(byte *)(iVar3 + 0x15) >> 4);
      *(uint *)(unaff_BP + -0x46) = uVar2;
      if (((uVar2 == *(uint *)(unaff_BP + -0x168)) && ((*(uint *)(iVar3 + 0x16) & 1) == 0)) &&
         ((*(uint *)(iVar3 + 0x16) & 4) == 0)) {
        uVar5 = 0x885;
        iVar3 = func_0x00008854(0,*(undefined1 *)(iVar3 + 0x15));
        if (iVar3 == 0) {
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x98) + 0x15) =
               *(undefined1 *)(unaff_BP + -0x5e);
        }
      }
      *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
      uVar4 = uVar5;
    }
  }
  FUN_3ab8_4340();
  *(undefined1 *)0xd14 = 2;
  func_0x0000b1d8(uVar4,1);
  FUN_3ab8_4480();
  return;
}



/* 3ab8:50c6  FUN_3ab8_50c6  251 bytes, 1 callers */

void FUN_3ab8_50c6(void)

{
  int iVar1;
  uint uVar2;
  int unaff_BP;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar5;
  
  uVar3 = 0x3ab8;
  if (-1 < *(int *)(unaff_BP + -0x94)) {
    *(undefined2 *)(unaff_BP + -0x8e) = 1;
    while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x152) {
      uVar4 = 0;
      uVar5 = func_0x000003ef(uVar3,*(undefined2 *)(unaff_BP + -0x8e));
      uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
      iVar1 = (int)uVar5;
      *(int *)(unaff_BP + -0x54) = iVar1;
      *(undefined2 *)(unaff_BP + -0x52) = uVar3;
      uVar2 = (uint)(*(byte *)(iVar1 + 8) >> 4);
      *(uint *)(unaff_BP + -0x46) = uVar2;
      if (((uVar2 == *(uint *)(unaff_BP + -0x168)) && ((*(uint *)(iVar1 + 10) & 1) == 0)) &&
         ((*(uint *)(iVar1 + 10) & 4) == 0)) {
        uVar4 = 0x885;
        iVar1 = func_0x00008854(0,*(undefined1 *)(iVar1 + 8));
        if (iVar1 == 0) {
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x54) + 8) =
               *(undefined1 *)(unaff_BP + -0x94);
        }
      }
      *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
      uVar3 = uVar4;
    }
  }
  if (-1 < *(int *)(unaff_BP + -0x5e)) {
    *(undefined2 *)(unaff_BP + -0x8e) = 1;
    while (*(int *)(unaff_BP + -0x8e) <= *(int *)0x150) {
      uVar4 = 0;
      uVar5 = func_0x00000398(uVar3,*(undefined2 *)(unaff_BP + -0x8e));
      uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
      iVar1 = (int)uVar5;
      *(int *)(unaff_BP + -0x98) = iVar1;
      *(undefined2 *)(unaff_BP + -0x96) = uVar3;
      uVar2 = (uint)(*(byte *)(iVar1 + 0x15) >> 4);
      *(uint *)(unaff_BP + -0x46) = uVar2;
      if (((uVar2 == *(uint *)(unaff_BP + -0x168)) && ((*(uint *)(iVar1 + 0x16) & 1) == 0)) &&
         ((*(uint *)(iVar1 + 0x16) & 4) == 0)) {
        uVar4 = 0x885;
        iVar1 = func_0x00008854(0,*(undefined1 *)(iVar1 + 0x15));
        if (iVar1 == 0) {
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x98) + 0x15) =
               *(undefined1 *)(unaff_BP + -0x5e);
        }
      }
      *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
      uVar3 = uVar4;
    }
  }
  FUN_3ab8_4340();
  *(undefined1 *)0xd14 = 2;
  func_0x0000b1d8(uVar3,1);
  FUN_3ab8_4480();
  return;
}



/* 3ab8:51c1  FUN_3ab8_51c1  4 bytes, 2 callers */

void __cdecl16far FUN_3ab8_51c1(void)

{
  return;
}



/* 3ab8:51c5  FUN_3ab8_51c5  104 bytes, 0 callers */

/* WARNING: Instruction at (ram,0x000305e0) overlaps instruction at (ram,0x000305df)
    */
/* WARNING: Control flow encountered bad instruction data */

int __cdecl16far FUN_3ab8_51c5(uint param_1,uint param_2,undefined2 param_3,undefined2 param_4)

{
  uint *puVar1;
  undefined2 *puVar2;
  uint *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int extraout_DX;
  uint *unaff_SI;
  uint *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint *puVar9;
  uint unaff_DI;
  uint uVar10;
  uint uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  bool bVar13;
  undefined1 uVar14;
  uint *puVar15;
  undefined2 *puVar16;
  uint *in_stack_0000003a;
  undefined2 *in_stack_0000003c;
  uint *in_stack_0000003e;
  undefined2 *in_stack_00000040;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_66;
  uint uStack_64;
  uint uStack_62;
  uint local_5e;
  uint local_5c;
  uint uStack_5a;
  uint uStack_58;
  uint local_50;
  uint local_4e;
  uint uStack_4c;
  undefined2 uStack_4a;
  uint uStack_48;
  uint uStack_46;
  int iStack_44;
  uint uStack_42;
  uint uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  int iStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_26;
  uint *puStack_24;
  uint *puStack_22;
  uint uStack_1e;
  uint uStack_1c;
  uint uStack_1a;
  uint uStack_18;
  uint uStack_16;
  uint uStack_14;
  uint uStack_12;
  uint uStack_10;
  uint uStack_e;
  uint *puStack_c;
  
  FUN_21f2_0ebc();
  local_50 = *(uint *)0xa6d0;
  local_4e = *(uint *)0xa6d2;
  local_5e = *(uint *)0xa6d4;
  local_5c = *(uint *)0xa6d6;
  puStack_c = (uint *)0x22b2;
  uStack_e = 0xfd79;
  FUN_1000_0599();
  uVar10 = 0xdef;
  func_0x00010526();
  uVar12 = param_1 < 10;
  if (10 < (int)param_1) {
                    /* WARNING: Call to offcut address within same function */
    puStack_c = (uint *)0xfd8d;
    func_0x000305e2();
    iVar5 = extraout_DX;
    puVar9 = unaff_SI;
LAB_2bb4_4a9b_1:
    if ((bool)uVar12) {
      out((char)*puVar9,iVar5);
      FUN_32b2_710c();
      FUN_32b2_7154();
      FUN_32b2_6e99();
      FUN_32b2_6eb1();
      FUN_32b2_6d14();
      FUN_32b2_6eb1();
      puStack_c = (uint *)0x5db;
      FUN_32b2_6cc6();
      uVar10 = 0x32b2;
      puStack_c = (uint *)0x5e0;
      FUN_32b2_7258();
    }
    uStack_14 = 0x5ea;
    uStack_12 = uVar10;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    uStack_14 = 0x5f2;
    FUN_32b2_6cc6();
    uStack_12 = 0x32b2;
    uStack_14 = 0x5f7;
    FUN_32b2_7258();
    uStack_1a = 0x32b2;
    uStack_1c = 0x601;
    FUN_32b2_6eb1();
    uStack_1a = uStack_66;
    uStack_1c = uStack_68;
    uStack_1e = uStack_6c._2_2_;
    puStack_22 = (uint *)uStack_4a;
    puStack_24 = (uint *)uStack_4c;
    uStack_26 = local_4e;
    uStack_28 = local_50;
    uStack_2c = 0x622;
    FUN_32b2_6d14();
    uStack_32 = 0x32b2;
    uStack_34 = 0x62c;
    FUN_32b2_6eb1();
    uStack_32 = 0x32b2;
    uStack_34 = 0x635;
    FUN_32b2_6d14();
    uStack_3a = 0x32b2;
    uStack_3c = 0x63f;
    FUN_32b2_6eb1();
    uStack_3a = 0;
    uStack_3c = 0x32b2;
    uStack_3e = 0x646;
    FUN_3ab8_5089();
    puVar9 = &uStack_28;
    puVar8 = (undefined2 *)&stack0x001a;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar9;
      puVar9 = puVar9 + 1;
      puVar16 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = *puVar16;
    }
    uStack_2c = 0x684;
    iVar5 = FUN_3ab8_522f();
    uVar12 = 0;
    uVar14 = iVar5 == 0;
    if (!(bool)uVar14) {
      FUN_32b2_6d14();
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_6fc7();
      FUN_32b2_7258();
      FUN_32b2_7191();
      if ((bool)uVar12 || (bool)uVar14) {
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_6fc7();
        FUN_32b2_7258();
        FUN_32b2_7191();
        if ((bool)uVar12 || (bool)uVar14) {
          uStack_be = *(undefined2 *)0x93c0;
          uStack_bc = *(undefined2 *)0x93c2;
        }
      }
    }
    FUN_32b2_6d14();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_710c();
    FUN_32b2_7154();
    FUN_32b2_7191();
    if ((bool)uVar12) {
      iStack_38 = 0;
    }
    else {
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_6d14();
      FUN_32b2_710c();
      FUN_32b2_710c();
      FUN_32b2_7191();
      if (!(bool)uVar12) {
        uStack_be = *(undefined2 *)0x93c0;
        uStack_bc = *(undefined2 *)0x93c2;
      }
      puStack_c = (uint *)uStack_be;
      uStack_e = 0x32b2;
      uStack_10 = 0x774;
      FUN_32b2_7592();
      FUN_32b2_6d14();
      FUN_32b2_70dc();
      FUN_32b2_6d14();
      FUN_32b2_710c();
      FUN_32b2_7182();
      FUN_32b2_6e99();
      FUN_32b2_710c();
      FUN_32b2_7154();
      FUN_32b2_6e99();
      FUN_32b2_6eb1();
      puStack_c = (uint *)0x32b2;
      uStack_e = 0x7d9;
      FUN_32b2_6cc6();
      puStack_c = (uint *)0x32b2;
      uStack_e = 0x7de;
      FUN_32b2_7258();
      uStack_14 = 0x32b2;
      uStack_16 = 0x7e8;
      FUN_32b2_6eb1();
      uStack_14 = 0x32b2;
      uStack_16 = 0x7f0;
      FUN_32b2_6cc6();
      uStack_14 = 0x32b2;
      uStack_16 = 0x7f5;
      FUN_32b2_7258();
      uStack_1c = 0x32b2;
      uStack_1e = 0x7ff;
      FUN_32b2_6eb1();
      uStack_1c = uStack_66;
      uStack_1e = uStack_68;
      puStack_22 = (uint *)uStack_6c;
      puStack_24 = (uint *)uStack_4a;
      uStack_26 = uStack_4c;
      uStack_28 = local_4e;
      uStack_2c = 0x32b2;
      uStack_2e = 0x820;
      FUN_32b2_6d14();
      uStack_34 = 0x32b2;
      uStack_36 = 0x82a;
      FUN_32b2_6eb1();
      uStack_34 = 0x32b2;
      uStack_36 = 0x833;
      FUN_32b2_6d14();
      uStack_3c = 0x32b2;
      uStack_3e = 0x83d;
      FUN_32b2_6eb1();
      uStack_3c = 0;
      uStack_3e = 0x32b2;
      uStack_40 = 0x844;
      FUN_3ab8_5089();
      uVar12 = (undefined1 *)0xffc9 < &uStack_3c;
      uVar14 = &stack0x0000 == (undefined1 *)0x6;
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191();
      if ((bool)uVar14) {
        uStack_64 = param_1;
        uStack_62 = param_2;
      }
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191();
      if ((bool)uVar14) {
        uStack_8c = param_3;
        uStack_8a = param_4;
      }
      *in_stack_0000003a = uStack_64;
      in_stack_0000003a[1] = uStack_62;
      *in_stack_0000003c = uStack_8c;
      in_stack_0000003c[1] = uStack_8a;
      *in_stack_0000003e = uStack_64;
      in_stack_0000003e[1] = uStack_62;
      *in_stack_00000040 = uStack_8c;
      in_stack_00000040[1] = uStack_8a;
      iStack_38 = iStack_38 + 1;
      uVar14 = iStack_38 == 0;
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_7191();
      if (!(bool)uVar12 && !(bool)uVar14) {
        puStack_c = (uint *)uStack_bc;
        uStack_e = uStack_be;
        uStack_10 = 0x32b2;
        uStack_12 = 0x8ff;
        FUN_32b2_7592();
        puStack_c = (uint *)0x909;
        FUN_32b2_6d14();
        puStack_c = (uint *)0x911;
        FUN_32b2_7154();
        puStack_c = (uint *)0x916;
        FUN_32b2_6fd6();
        puStack_c = (uint *)0x91e;
        FUN_32b2_6d14();
        puStack_c = (uint *)0x927;
        FUN_32b2_710c();
        puStack_c = (uint *)0x92c;
        FUN_32b2_7182();
        puStack_c = (uint *)0x935;
        FUN_32b2_6e99();
        puStack_c = (uint *)0x93d;
        FUN_32b2_710c();
        puStack_c = (uint *)0x945;
        FUN_32b2_7154();
        puStack_c = (uint *)0x94e;
        FUN_32b2_6e99();
        puStack_c = (uint *)0x957;
        FUN_32b2_6eb1();
        puStack_c = &uStack_64;
        uStack_e = 0x32b2;
        uStack_10 = 0x969;
        FUN_32b2_6cc6();
        uStack_e = 0x32b2;
        uStack_10 = 0x96e;
        FUN_32b2_7258();
        uStack_16 = 0x32b2;
        uStack_18 = 0x978;
        FUN_32b2_6eb1();
        uStack_16 = 0x32b2;
        uStack_18 = 0x980;
        FUN_32b2_6cc6();
        uStack_16 = 0x32b2;
        uStack_18 = 0x985;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        FUN_32b2_6eb1();
        uStack_1e = uStack_66;
        puStack_22 = (uint *)uStack_6c._2_2_;
        puStack_24 = (uint *)uStack_6c;
        uStack_26 = uStack_4a;
        uStack_28 = uStack_4c;
        uStack_2c = local_50;
        uStack_2e = 0x32b2;
        uStack_30 = 0x9b0;
        FUN_32b2_6d14();
        uStack_36 = 0x32b2;
        iStack_38 = 0x9ba;
        FUN_32b2_6eb1();
        uStack_36 = 0x32b2;
        iStack_38 = 0x9c3;
        FUN_32b2_6d14();
        uStack_3e = 0x32b2;
        uStack_40 = 0x9cd;
        FUN_32b2_6eb1();
        uStack_3e = 0;
        uStack_40 = 0x32b2;
        uStack_42 = 0x9d4;
        FUN_3ab8_5089();
        uVar12 = &stack0x0000 == (undefined1 *)0x8;
        puStack_c = (uint *)0x9df;
        FUN_32b2_6cc6();
        puStack_c = (uint *)0x9e7;
        FUN_32b2_6cc6();
        puStack_c = (uint *)0x9ec;
        FUN_32b2_7191();
        if ((bool)uVar12) {
          uStack_64 = param_1;
          uStack_62 = param_2;
        }
        puStack_c = (uint *)0xa02;
        FUN_32b2_6cc6();
        puStack_c = (uint *)0xa0a;
        FUN_32b2_6cc6();
        puStack_c = (uint *)0xa0f;
        FUN_32b2_7191();
        if ((bool)uVar12) {
          uStack_8c = param_3;
          uStack_8a = param_4;
        }
        *in_stack_0000003e = uStack_64;
        in_stack_0000003e[1] = uStack_62;
        *in_stack_00000040 = uStack_8c;
        in_stack_00000040[1] = uStack_8a;
        iStack_38 = iStack_38 + 1;
      }
    }
    return iStack_38;
  }
  puStack_c = (uint *)0xdef;
  uStack_e = 0xfda1;
  FUN_1000_0599();
  puStack_c = (uint *)0xfdac;
  func_0x00012276();
  uStack_68 = (int)param_1 % 10 - 5;
  *(undefined2 *)0xbc0 = 1;
  puStack_c = (uint *)0xfdca;
  func_0x0000daa6();
  uStack_1a = *(int *)0x14a + (uint)(0xfffe < *(uint *)0x148);
  uStack_1c = *(uint *)0x148 + 1;
  uStack_1e = uStack_1a;
  puStack_24 = (uint *)*(uint *)0x148;
  puStack_22 = (uint *)*(int *)0x14a;
  iStack_44 = 0;
  uStack_66 = 1;
  uStack_64 = 0;
  uVar11 = 0x885;
  do {
    if ((*(int *)0x14a < (int)uStack_64) ||
       ((*(int *)0x14a <= (int)uStack_64 && (*(uint *)0x148 < uStack_66)))) {
      if (iStack_44 == 0) {
        (&stack0x6d12)[(int)unaff_SI] = (byte)(&stack0x6d12)[(int)unaff_SI] >> 1;
      }
      else {
        uStack_5a = uStack_1c;
        uStack_58 = uStack_1a;
        uStack_64 = uStack_1a;
        for (uStack_66 = uStack_1c;
            (bVar13 = SBORROW2(uStack_64,(int)puStack_22), (int)uStack_64 <= (int)puStack_22 &&
            (((int)uStack_64 < (int)puStack_22 ||
             (bVar13 = SBORROW2(uStack_66,(int)puStack_24), uStack_66 <= puStack_24))));
            uStack_66 = uStack_66 + 1) {
          uStack_e = 0xff99;
          puStack_c = (uint *)uVar11;
          puVar15 = (uint *)func_0x0000013f();
          puVar6 = (uint *)puVar15;
          puVar9 = &uStack_18;
          for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar3 = puVar9;
            puVar9 = puVar9 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar3 = *puVar1;
          }
          if (((unaff_DI & 0x40) != 0) || ((unaff_DI & 0x80) != 0)) {
            puStack_c = (uint *)0x0;
            uStack_e = 0xffc2;
            puVar16 = (undefined2 *)func_0x0000013f();
            puVar7 = (undefined2 *)puVar16;
            puVar8 = &uStack_3a;
            for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar4 = puVar8;
              puVar8 = puVar8 + 1;
              puVar2 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar4 = *puVar2;
            }
            puStack_c = (uint *)0x0;
            uStack_e = 0xffdf;
            puVar16 = (undefined2 *)func_0x0000013f();
            puVar7 = (undefined2 *)puVar16;
            puVar8 = &uStack_3a;
            for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar4 = puVar7;
              puVar7 = puVar7 + 1;
              puVar2 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar4 = *puVar2;
            }
            puStack_c = (uint *)0x0;
            uStack_e = 0xfffd;
            puVar15 = (uint *)func_0x0000013f();
            puVar6 = (uint *)puVar15;
            puVar9 = &uStack_18;
            for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar3 = puVar6;
              puVar6 = puVar6 + 1;
              puVar1 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar3 = *puVar1;
            }
            bVar13 = 0xfffe < uStack_5a;
            uStack_5a = uStack_5a + 1;
            uStack_58 = uStack_58 + bVar13;
            puVar6 = &uStack_1e;
            puVar9 = &uStack_18;
            for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar1 = puVar6;
              puVar6 = puVar6 + 1;
              puVar15 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar1 = *puVar15;
            }
            puStack_22 = (uint *)0x2f;
            func_0x00018396();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uStack_64 = uStack_64 + (0xfffe < uStack_66);
          uVar11 = 0;
        }
        if (bVar13) {
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_7173();
          FUN_32b2_7095();
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_718c();
          FUN_32b2_7095();
        }
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
      }
      FUN_32b2_6e63();
      FUN_32b2_6d14();
      FUN_32b2_6e63();
      return 1;
    }
    uVar10 = 0;
    uStack_e = 0xff02;
    puStack_c = (uint *)uVar11;
    puVar15 = (uint *)func_0x0000013f();
    puVar9 = (uint *)puVar15;
    puVar6 = &uStack_18;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar3 = *puVar1;
    }
    if ((unaff_DI & 2) != 0) {
      if (((unaff_DI & 0x40) != 0) || ((unaff_DI & 0x80) != 0)) {
        iStack_44 = 1;
      }
      iVar5 = *(int *)0x13e;
      uVar11 = (int)puStack_24 + 1;
      puStack_22 = (uint *)((int)puStack_22 + (uint)(0xfffe < puStack_24));
      puStack_24 = (uint *)uVar11;
      if ((iVar5 <= (int)puStack_22) && ((iVar5 < (int)puStack_22 || (*(uint *)0x13c < uVar11)))) {
        uVar12 = false;
        goto LAB_2bb4_4a9b_1;
      }
      puStack_c = (uint *)0x0;
      uStack_e = 0xfe0e;
      uStack_6c = (uint *)func_0x0000013f();
      puVar6 = (uint *)uStack_6c;
      puVar9 = &uStack_18;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        puVar15 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar1 = *puVar15;
      }
      uVar12 = 0;
      uVar14 = uStack_68 == 0;
      if ((bool)uVar14) {
        uStack_42 = uStack_18;
        uStack_40 = uStack_16;
        uStack_48 = uStack_10;
        uStack_46 = uStack_e;
      }
      else {
        uStack_42 = uStack_14;
        uStack_40 = uStack_12;
        uStack_48 = (uint)puStack_c;
        uStack_46 = uVar11;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar12) {
        local_50 = uStack_42;
        local_4e = uStack_40;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar12) {
        local_50 = uStack_48;
        local_4e = uStack_46;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar12 && !(bool)uVar14) {
        local_5e = uStack_42;
        local_5c = uStack_40;
      }
      func_0x000297e6();
      func_0x000297e6();
      uVar10 = 0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar12 && !(bool)uVar14) {
        local_5e = uStack_48;
        local_5c = uStack_46;
      }
    }
    bVar13 = 0xfffe < uStack_66;
    uStack_66 = uStack_66 + 1;
    uStack_64 = uStack_64 + bVar13;
    uVar11 = uVar10;
  } while( true );
}



/* 3ab8:522f  FUN_3ab8_522f  647 bytes, 2 callers */

/* WARNING: Instruction at (ram,0x000305e0) overlaps instruction at (ram,0x000305df)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00030591) */

undefined2 __cdecl16far FUN_3ab8_522f(void)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int in_AX;
  int iVar10;
  int iVar11;
  int unaff_BP;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int unaff_ES;
  undefined2 uVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar15;
  undefined1 uVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined2 *puVar19;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  
  *(int *)(unaff_BP + -0x66) = in_AX % 10 + -5;
  *(undefined2 *)0xbc0 = 1;
  iStack_8 = 0xfdca;
  func_0x0000daa6();
  iVar10 = *(uint *)0x148 + 1;
  iVar11 = *(int *)0x14a + (uint)(0xfffe < *(uint *)0x148);
  *(int *)(unaff_BP + -0x1a) = iVar10;
  *(int *)(unaff_BP + -0x18) = iVar11;
  *(int *)(unaff_BP + -0x1e) = iVar10;
  *(int *)(unaff_BP + -0x1c) = iVar11;
  uVar9 = *(undefined2 *)0x14a;
  *(undefined2 *)(unaff_BP + -0x22) = *(undefined2 *)0x148;
  *(undefined2 *)(unaff_BP + -0x20) = uVar9;
  *(undefined2 *)(unaff_BP + -0x42) = 0;
  *(undefined2 *)(unaff_BP + -100) = 1;
  *(undefined2 *)(unaff_BP + -0x62) = 0;
  uVar9 = 0x885;
  do {
    if ((*(int *)0x14a < *(int *)(unaff_BP + -0x62)) ||
       ((*(int *)0x14a <= *(int *)(unaff_BP + -0x62) &&
        (*(uint *)0x148 < *(uint *)(unaff_BP + -100))))) {
      if (*(int *)(unaff_BP + -0x42) == 0) {
        pbVar3 = (byte *)(unaff_BP + unaff_ES + 0x6d14);
        *pbVar3 = *pbVar3 >> 1;
      }
      else {
        uVar14 = *(undefined2 *)(unaff_BP + -0x1a);
        uVar8 = *(undefined2 *)(unaff_BP + -0x18);
        *(undefined2 *)(unaff_BP + -0x58) = uVar14;
        *(undefined2 *)(unaff_BP + -0x56) = uVar8;
        *(undefined2 *)(unaff_BP + -100) = uVar14;
        *(undefined2 *)(unaff_BP + -0x62) = uVar8;
        while( true ) {
          iVar10 = *(int *)(unaff_BP + -0x20);
          iVar11 = *(int *)(unaff_BP + -0x62);
          bVar17 = SBORROW2(iVar11,iVar10);
          if ((iVar10 < iVar11) ||
             ((iVar10 <= iVar11 &&
              (bVar17 = SBORROW2(*(uint *)(unaff_BP + -100),*(uint *)(unaff_BP + -0x22)),
              *(uint *)(unaff_BP + -0x22) < *(uint *)(unaff_BP + -100))))) break;
          uStack_a = 0xff99;
          iStack_8 = uVar9;
          puVar19 = (undefined2 *)func_0x0000013f();
          puVar13 = (undefined2 *)puVar19;
          puVar12 = (undefined2 *)(unaff_BP + -0x16);
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar7 = puVar12;
            puVar12 = puVar12 + 1;
            puVar6 = puVar13;
            puVar13 = puVar13 + 1;
            *puVar7 = *puVar6;
          }
          if (((*(byte *)(unaff_BP + -2) & 0x40) != 0) || ((*(byte *)(unaff_BP + -2) & 0x80) != 0))
          {
            iStack_8 = 0;
            uStack_a = 0xffc2;
            puVar19 = (undefined2 *)func_0x0000013f();
            puVar13 = (undefined2 *)puVar19;
            puVar12 = (undefined2 *)(unaff_BP + -0x38);
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar7 = puVar12;
              puVar12 = puVar12 + 1;
              puVar6 = puVar13;
              puVar13 = puVar13 + 1;
              *puVar7 = *puVar6;
            }
            iStack_8 = 0;
            uStack_a = 0xffdf;
            uVar18 = func_0x0000013f();
            *(undefined2 *)(unaff_BP + -0x6a) = (int)uVar18;
            *(undefined2 *)(unaff_BP + -0x68) = (int)((ulong)uVar18 >> 0x10);
            puVar12 = (undefined2 *)(unaff_BP + -0x38);
            puVar19 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x6a);
            puVar13 = (undefined2 *)puVar19;
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar7 = puVar13;
              puVar13 = puVar13 + 1;
              puVar6 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar7 = *puVar6;
            }
            iStack_8 = 0;
            uStack_a = 0xfffd;
            uVar18 = func_0x0000013f();
            *(undefined2 *)(unaff_BP + -0x6e) = (int)uVar18;
            *(undefined2 *)(unaff_BP + -0x6c) = (int)((ulong)uVar18 >> 0x10);
            puVar12 = (undefined2 *)(unaff_BP + -0x16);
            puVar19 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x6e);
            puVar13 = (undefined2 *)puVar19;
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar7 = puVar13;
              puVar13 = puVar13 + 1;
              puVar6 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar7 = *puVar6;
            }
            puVar2 = (uint *)(unaff_BP + -0x58);
            uVar4 = *puVar2;
            *puVar2 = *puVar2 + 1;
            *(int *)(unaff_BP + -0x56) = *(int *)(unaff_BP + -0x56) + (uint)(0xfffe < uVar4);
            puVar13 = &uStack_1a;
            puVar12 = (undefined2 *)(unaff_BP + -0x16);
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar6 = puVar13;
              puVar13 = puVar13 + 1;
              puVar19 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar6 = *puVar19;
            }
            uStack_1e = 0x2f;
            func_0x00018396();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          puVar2 = (uint *)(unaff_BP + -100);
          uVar4 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x62) = *(int *)(unaff_BP + -0x62) + (uint)(0xfffe < uVar4);
          uVar9 = 0;
        }
        if (bVar17) {
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_7173();
          FUN_32b2_7095();
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_718c();
          FUN_32b2_7095();
        }
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
      }
      FUN_32b2_6e63();
      FUN_32b2_6d14();
      FUN_32b2_6e63();
      return 1;
    }
    uVar14 = 0;
    uStack_a = 0xff02;
    iStack_8 = uVar9;
    puVar19 = (undefined2 *)func_0x0000013f();
    puVar13 = (undefined2 *)puVar19;
    puVar12 = (undefined2 *)(unaff_BP + -0x16);
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar7 = puVar12;
      puVar12 = puVar12 + 1;
      puVar6 = puVar13;
      puVar13 = puVar13 + 1;
      *puVar7 = *puVar6;
    }
    if ((*(byte *)(unaff_BP + -2) & 2) != 0) {
      if (((*(byte *)(unaff_BP + -2) & 0x40) != 0) || ((*(byte *)(unaff_BP + -2) & 0x80) != 0)) {
        *(undefined2 *)(unaff_BP + -0x42) = 1;
      }
      uVar5 = *(uint *)0x13c;
      iVar10 = *(int *)0x13e;
      puVar2 = (uint *)(unaff_BP + -0x22);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + 1;
      *(int *)(unaff_BP + -0x20) = *(int *)(unaff_BP + -0x20) + (uint)(0xfffe < uVar4);
      if ((iVar10 <= *(int *)(unaff_BP + -0x20)) &&
         ((iVar10 < *(int *)(unaff_BP + -0x20) || (uVar5 < *(uint *)(unaff_BP + -0x22))))) {
        uStack_e = 0;
        uStack_10 = 0x5ea;
        FUN_32b2_6eb1();
        uStack_e = 0x32b2;
        uStack_10 = 0x5f2;
        FUN_32b2_6cc6();
        uStack_e = 0x32b2;
        uStack_10 = 0x5f7;
        FUN_32b2_7258();
        uStack_16 = 0x32b2;
        uStack_18 = 0x601;
        FUN_32b2_6eb1();
        uStack_16 = *(undefined2 *)(unaff_BP + -100);
        uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
        uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
        uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
        uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
        uStack_22 = *(undefined2 *)(unaff_BP + -0x4c);
        uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
        uStack_28 = 0x622;
        FUN_32b2_6d14();
        uStack_2e = 0x32b2;
        uStack_30 = 0x62c;
        FUN_32b2_6eb1();
        uStack_2e = 0x32b2;
        uStack_30 = 0x635;
        FUN_32b2_6d14();
        uStack_36 = 0x32b2;
        uStack_38 = 0x63f;
        FUN_32b2_6eb1();
        uStack_36 = 0;
        uStack_38 = 0x32b2;
        FUN_3ab8_5089();
        uVar9 = *(undefined2 *)(unaff_BP + -0x60);
        *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
        *(undefined2 *)(unaff_BP + -0x84) = uVar9;
        uVar9 = *(undefined2 *)(unaff_BP + -0x88);
        *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
        *(undefined2 *)(unaff_BP + -0x9c) = uVar9;
        puVar13 = &uStack_24;
        puVar12 = (undefined2 *)(unaff_BP + 0x1c);
        for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar6 = puVar13;
          puVar13 = puVar13 + 1;
          puVar19 = puVar12;
          puVar12 = puVar12 + 1;
          *puVar6 = *puVar19;
        }
        uStack_28 = 0x684;
        iVar10 = FUN_3ab8_522f();
        uVar15 = 0;
        uVar16 = iVar10 == 0;
        if (!(bool)uVar16) {
          FUN_32b2_6d14();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_7258();
          FUN_32b2_7191();
          if ((bool)uVar15 || (bool)uVar16) {
            FUN_32b2_6d14();
            FUN_32b2_6cc6();
            FUN_32b2_701d();
            FUN_32b2_6fc7();
            FUN_32b2_7258();
            FUN_32b2_7191();
            if ((bool)uVar15 || (bool)uVar16) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
          }
        }
        FUN_32b2_6d14();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_7154();
        FUN_32b2_7191();
        if ((bool)uVar15) {
          uVar9 = 0;
        }
        else {
          FUN_32b2_6d14();
          FUN_32b2_6fc7();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_7191();
          if (!(bool)uVar15) {
            *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
            *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
            *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
            *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
          }
          iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
          uStack_a = 0x32b2;
          uStack_c = 0x774;
          FUN_32b2_7592();
          FUN_32b2_6d14();
          FUN_32b2_70dc();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_7182();
          FUN_32b2_6e99();
          FUN_32b2_710c();
          FUN_32b2_7154();
          FUN_32b2_6e99();
          FUN_32b2_6eb1();
          iStack_8 = 0x32b2;
          uStack_a = 0x7d9;
          FUN_32b2_6cc6();
          iStack_8 = 0x32b2;
          uStack_a = 0x7de;
          FUN_32b2_7258();
          uStack_10 = 0x32b2;
          uStack_12 = 0x7e8;
          FUN_32b2_6eb1();
          uStack_10 = 0x32b2;
          uStack_12 = 0x7f0;
          FUN_32b2_6cc6();
          uStack_10 = 0x32b2;
          uStack_12 = 0x7f5;
          FUN_32b2_7258();
          uStack_18 = 0x32b2;
          uStack_1a = 0x7ff;
          FUN_32b2_6eb1();
          uStack_18 = *(undefined2 *)(unaff_BP + -100);
          uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
          uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
          uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_24 = *(undefined2 *)(unaff_BP + -0x4c);
          uStack_28 = 0x32b2;
          uStack_2a = 0x820;
          FUN_32b2_6d14();
          uStack_30 = 0x32b2;
          uStack_32 = 0x82a;
          FUN_32b2_6eb1();
          uStack_30 = 0x32b2;
          uStack_32 = 0x833;
          FUN_32b2_6d14();
          uStack_38 = 0x32b2;
          FUN_32b2_6eb1();
          uStack_38 = 0;
          FUN_3ab8_5089(0x32b2);
          uVar15 = (undefined1 *)0xffc9 < &uStack_38;
          uVar16 = &stack0x0000 == (undefined1 *)0x2;
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          if ((bool)uVar16) {
            uVar9 = *(undefined2 *)(unaff_BP + 8);
            *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
            *(undefined2 *)(unaff_BP + -0x60) = uVar9;
          }
          FUN_32b2_6cc6();
          FUN_32b2_6cc6();
          FUN_32b2_7191();
          if ((bool)uVar16) {
            uVar9 = *(undefined2 *)(unaff_BP + 0xc);
            *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
            *(undefined2 *)(unaff_BP + -0x88) = uVar9;
          }
          uVar9 = *(undefined2 *)(unaff_BP + -0x60);
          puVar12 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
          *puVar12 = *(undefined2 *)(unaff_BP + -0x62);
          puVar12[1] = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x88);
          puVar12 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
          *puVar12 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar12[1] = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x60);
          puVar12 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
          *puVar12 = *(undefined2 *)(unaff_BP + -0x62);
          puVar12[1] = uVar9;
          uVar9 = *(undefined2 *)(unaff_BP + -0x88);
          puVar12 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
          *puVar12 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar12[1] = uVar9;
          piVar1 = (int *)(unaff_BP + -0x36);
          *piVar1 = *piVar1 + 1;
          uVar16 = *piVar1 == 0;
          FUN_32b2_6d14();
          FUN_32b2_6d14();
          FUN_32b2_7191();
          if (!(bool)uVar15 && !(bool)uVar16) {
            iStack_8 = *(undefined2 *)(unaff_BP + -0xba);
            uStack_a = *(undefined2 *)(unaff_BP + -0xbc);
            uStack_c = 0x32b2;
            uStack_e = 0x8ff;
            FUN_32b2_7592();
            iStack_8 = 0x909;
            FUN_32b2_6d14();
            iStack_8 = 0x911;
            FUN_32b2_7154();
            iStack_8 = 0x916;
            FUN_32b2_6fd6();
            iStack_8 = 0x91e;
            FUN_32b2_6d14();
            iStack_8 = 0x927;
            FUN_32b2_710c();
            iStack_8 = 0x92c;
            FUN_32b2_7182();
            iStack_8 = 0x935;
            FUN_32b2_6e99();
            iStack_8 = 0x93d;
            FUN_32b2_710c();
            iStack_8 = 0x945;
            FUN_32b2_7154();
            iStack_8 = 0x94e;
            FUN_32b2_6e99();
            iStack_8 = 0x957;
            FUN_32b2_6eb1();
            iStack_8 = unaff_BP + -0x62;
            uStack_a = 0x32b2;
            uStack_c = 0x969;
            FUN_32b2_6cc6();
            uStack_a = 0x32b2;
            uStack_c = 0x96e;
            FUN_32b2_7258();
            uStack_12 = 0x32b2;
            uStack_14 = 0x978;
            FUN_32b2_6eb1();
            uStack_12 = 0x32b2;
            uStack_14 = 0x980;
            FUN_32b2_6cc6();
            uStack_12 = 0x32b2;
            uStack_14 = 0x985;
            FUN_32b2_7258();
            uStack_1a = 0x32b2;
            FUN_32b2_6eb1();
            uStack_1a = *(undefined2 *)(unaff_BP + -100);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_22 = *(undefined2 *)(unaff_BP + -0x48);
            uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_28 = *(undefined2 *)(unaff_BP + -0x4e);
            uStack_2a = 0x32b2;
            uStack_2c = 0x9b0;
            FUN_32b2_6d14();
            uStack_32 = 0x32b2;
            uStack_34 = 0x9ba;
            FUN_32b2_6eb1();
            uStack_32 = 0x32b2;
            uStack_34 = 0x9c3;
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            FUN_3ab8_5089(0x32b2,0);
            uVar15 = &stack0x0000 == (undefined1 *)0x4;
            iStack_8 = 0x9df;
            FUN_32b2_6cc6();
            iStack_8 = 0x9e7;
            FUN_32b2_6cc6();
            iStack_8 = 0x9ec;
            FUN_32b2_7191();
            if ((bool)uVar15) {
              uVar9 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar9;
            }
            iStack_8 = 0xa02;
            FUN_32b2_6cc6();
            iStack_8 = 0xa0a;
            FUN_32b2_6cc6();
            iStack_8 = 0xa0f;
            FUN_32b2_7191();
            if ((bool)uVar15) {
              uVar9 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar9;
            }
            uVar9 = *(undefined2 *)(unaff_BP + -0x60);
            puVar12 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar12 = *(undefined2 *)(unaff_BP + -0x62);
            puVar12[1] = uVar9;
            uVar9 = *(undefined2 *)(unaff_BP + -0x88);
            puVar12 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar12 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar12[1] = uVar9;
            *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
          }
          uVar9 = *(undefined2 *)(unaff_BP + -0x36);
        }
        return uVar9;
      }
      iStack_8 = 0;
      uStack_a = 0xfe0e;
      uVar18 = func_0x0000013f();
      *(undefined2 *)(unaff_BP + -0x6a) = (int)uVar18;
      *(undefined2 *)(unaff_BP + -0x68) = (int)((ulong)uVar18 >> 0x10);
      puVar12 = (undefined2 *)(unaff_BP + -0x16);
      puVar19 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x6a);
      puVar13 = (undefined2 *)puVar19;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar7 = puVar13;
        puVar13 = puVar13 + 1;
        puVar6 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar7 = *puVar6;
      }
      uVar15 = 0;
      uVar16 = *(int *)(unaff_BP + -0x66) == 0;
      if ((bool)uVar16) {
        uVar9 = *(undefined2 *)(unaff_BP + -0x14);
        *(undefined2 *)(unaff_BP + -0x40) = *(undefined2 *)(unaff_BP + -0x16);
        *(undefined2 *)(unaff_BP + -0x3e) = uVar9;
        uVar9 = *(undefined2 *)(unaff_BP + -0xe);
        uVar14 = *(undefined2 *)(unaff_BP + -0xc);
      }
      else {
        uVar9 = *(undefined2 *)(unaff_BP + -0x10);
        *(undefined2 *)(unaff_BP + -0x40) = *(undefined2 *)(unaff_BP + -0x12);
        *(undefined2 *)(unaff_BP + -0x3e) = uVar9;
        uVar9 = *(undefined2 *)(unaff_BP + -10);
        uVar14 = *(undefined2 *)(unaff_BP + -8);
      }
      *(undefined2 *)(unaff_BP + -0x46) = uVar9;
      *(undefined2 *)(unaff_BP + -0x44) = uVar14;
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar15) {
        uVar9 = *(undefined2 *)(unaff_BP + -0x3e);
        *(undefined2 *)(unaff_BP + -0x4e) = *(undefined2 *)(unaff_BP + -0x40);
        *(undefined2 *)(unaff_BP + -0x4c) = uVar9;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar15) {
        uVar9 = *(undefined2 *)(unaff_BP + -0x44);
        *(undefined2 *)(unaff_BP + -0x4e) = *(undefined2 *)(unaff_BP + -0x46);
        *(undefined2 *)(unaff_BP + -0x4c) = uVar9;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar15 && !(bool)uVar16) {
        uVar9 = *(undefined2 *)(unaff_BP + -0x3e);
        *(undefined2 *)(unaff_BP + -0x5c) = *(undefined2 *)(unaff_BP + -0x40);
        *(undefined2 *)(unaff_BP + -0x5a) = uVar9;
      }
      func_0x000297e6();
      func_0x000297e6();
      uVar14 = 0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar15 && !(bool)uVar16) {
        uVar9 = *(undefined2 *)(unaff_BP + -0x44);
        *(undefined2 *)(unaff_BP + -0x5c) = *(undefined2 *)(unaff_BP + -0x46);
        *(undefined2 *)(unaff_BP + -0x5a) = uVar9;
      }
    }
    puVar2 = (uint *)(unaff_BP + -100);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0x62) = *(int *)(unaff_BP + -0x62) + (uint)(0xfffe < uVar4);
    uVar9 = uVar14;
  } while( true );
}



/* 3ab8:5a62  FUN_3ab8_5a62  895 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_5a62(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar6;
  uint local_628;
  uint auStack_626 [258];
  uint local_422;
  int local_420;
  int local_41e;
  int local_41c;
  uint local_41a;
  undefined1 local_418 [8];
  undefined1 local_410;
  uint local_404;
  undefined1 auStack_402 [256];
  int aiStack_302 [256];
  undefined1 auStack_102 [242];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int *piStack_8;
  int *piStack_6;
  
  piStack_6 = (int *)0x5ed;
  FUN_21f2_0ebc();
  piStack_6 = (int *)0x1;
  piStack_8 = (int *)0x12;
  uStack_a = 0x22b2;
  uStack_c = 0x5fb;
  FUN_1000_0599();
  piStack_6 = (int *)0xdef;
  piStack_8 = (int *)0x602;
  func_0x00010526();
  local_41a = 0;
  do {
    auStack_102[local_41a] = *(undefined1 *)(local_41a + -0x3e90);
    auStack_402[local_41a] = *(undefined1 *)(local_41a + -0x4c78);
    local_41a = local_41a + 1;
  } while ((int)local_41a < 0x100);
  piStack_6 = (int *)0xf4;
  piStack_8 = (int *)local_418;
  uStack_a = 0xdef;
  uStack_c = 0x638;
  func_0x00024c86();
  local_410 = 0x66;
  piStack_6 = (int *)0x254;
  piStack_8 = (int *)local_418;
  uStack_a = 0x22b2;
  uStack_c = 0x64d;
  iVar2 = FUN_21f2_1348();
  if (iVar2 == 0) {
    local_418[0] = 0;
    local_41a = 0;
    do {
      uVar4 = local_41a;
      auStack_626[local_41a] = local_41a;
      aiStack_302[uVar4] = 0;
      local_41a = local_41a + 1;
    } while ((int)local_41a < 0x100);
  }
  else {
    local_41a = 0;
    do {
      uVar4 = local_41a;
      auStack_626[local_41a] = 0xffff;
      aiStack_302[uVar4] = 0;
      local_41a = local_41a + 1;
    } while ((int)local_41a < 0x100);
    local_41e = 0;
    while( true ) {
      piStack_8 = (int *)0x64;
      uStack_a = 0xbf48;
      uStack_c = 0x22b2;
      uStack_e = 0x695;
      piStack_6 = (int *)iVar2;
      iVar3 = func_0x0002509c();
      if ((iVar3 == 0) || (0xff < local_41e)) break;
      if (*(char *)0xbf48 != '#') {
        local_628 = 0xffff;
        local_41c = 0;
        piStack_6 = &local_41c;
        piStack_8 = (int *)&local_628;
        uStack_a = 0x1f8;
        uStack_c = 0xbf48;
        uStack_e = 0x22b2;
        uStack_10 = 0x6d4;
        func_0x000253ce();
        if ((-1 < (int)local_628) && ((int)local_628 < 0x100)) {
          auStack_626[local_41e] = local_628;
        }
        if ((0 < local_41c) && (local_41c < 4)) {
          aiStack_302[local_41e] = local_41c;
        }
        local_41e = local_41e + 1;
      }
    }
  }
  piStack_6 = (int *)0x22b2;
  uVar5 = 0x22b2;
  piStack_8 = (int *)0x745;
  func_0x0002504e();
  for (local_41e = 0; local_41e < 0x100; local_41e = local_41e + 1) {
    local_404 = auStack_626[local_41e];
    if (((-1 < (int)local_404) && ((int)local_404 < 0x100)) &&
       (*(char *)(local_404 + 0xb4a6) != '\0')) {
      for (local_41a = 0; (int)local_41a < 0x100; local_41a = local_41a + 1) {
        if (local_404 == local_41a) {
          *(undefined1 *)(local_41a + 0xc170) = 1;
          *(undefined1 *)(local_41a + 0xb388) = 1;
        }
        else {
          *(undefined1 *)(local_41a + 0xc170) = 0;
          *(undefined1 *)(local_41a + 0xb388) = 0;
        }
      }
      local_420 = 0;
      for (local_422 = 1;
          (local_420 <= *(int *)0x14a &&
          ((local_420 < *(int *)0x14a || (local_422 <= *(uint *)0x148)))); local_422 = local_422 + 1
          ) {
        piStack_6 = (int *)local_420;
        piStack_8 = (int *)local_422;
        uStack_c = 0x80b;
        uStack_a = uVar5;
        uVar6 = func_0x0000013f();
        if (*(byte *)((int)uVar6 + 0x12) == local_404) {
          piStack_6 = (int *)local_420;
          piStack_8 = (int *)local_422;
          uStack_a = 0;
          uStack_c = 0x82a;
          uVar6 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar6 + 0x14);
          *pbVar1 = *pbVar1 | 2;
        }
        else {
          piStack_6 = (int *)local_420;
          piStack_8 = (int *)local_422;
          uStack_a = 0;
          uStack_c = 0x7d9;
          uVar6 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar6 + 0x14);
          *pbVar1 = *pbVar1 & 0xfd;
        }
        uVar5 = 0;
        local_420 = local_420 + (uint)(0xfffe < local_422);
      }
      *(undefined2 *)0xbc2 = 1;
      piStack_6 = (int *)0x0;
      uStack_a = 0x845;
      piStack_8 = (int *)uVar5;
      func_0x0001470b();
      piStack_6 = (int *)0x2;
      piStack_8 = (int *)0x14;
      uStack_a = 0x11f2;
      uStack_c = 0x853;
      FUN_1000_0599();
      piStack_6 = (int *)local_418;
      piStack_8 = (int *)0xdef;
      uStack_a = 0x85f;
      func_0x00012276();
      piStack_6 = (int *)0x2;
      piStack_8 = (int *)0x20;
      uStack_a = 0x11f2;
      uStack_c = 0x86d;
      FUN_1000_0599();
      piStack_6 = (int *)0x600;
      piStack_8 = (int *)0xdef;
      uStack_a = 0x878;
      func_0x00012276();
      piStack_6 = (int *)0x2;
      piStack_8 = (int *)0x2a;
      uStack_a = 0x11f2;
      uStack_c = 0x886;
      FUN_1000_0599();
      uVar4 = (int)local_404 >> 0xf;
      piStack_6 = (int *)(((int)((local_404 ^ uVar4) - uVar4) >> 4 ^ uVar4) - uVar4);
      piStack_8 = (int *)0x1f4;
      uStack_a = 0xdef;
      uStack_c = 0x8a4;
      func_0x00012276();
      piStack_6 = (int *)0x2;
      piStack_8 = (int *)0x32;
      uStack_a = 0x11f2;
      uStack_c = 0x8b3;
      FUN_1000_0599();
      piStack_6 = (int *)0x60a;
      piStack_8 = (int *)0xdef;
      uStack_a = 0x8be;
      func_0x00012276();
      piStack_6 = (int *)0x2;
      piStack_8 = (int *)0x3a;
      uStack_a = 0x11f2;
      uStack_c = 0x8cc;
      FUN_1000_0599();
      piStack_6 = (int *)((int)local_404 % 0x10);
      piStack_8 = (int *)0x1f4;
      uStack_a = 0xdef;
      uVar5 = 0x11f2;
      uStack_c = 0x8e6;
      func_0x00012276();
      if (aiStack_302[local_41e] == 0) {
        local_41c = param_1 % 10;
      }
      else {
        local_41c = aiStack_302[local_41e] + 4;
      }
      piStack_6 = (int *)local_41c;
      piStack_8 = (int *)0x11f2;
      uStack_a = 0x918;
      iVar2 = FUN_4375_c5f5();
      if (iVar2 == -1) break;
    }
  }
  piStack_6 = (int *)0x2;
  piStack_8 = (int *)0x14;
  uStack_c = 0x92c;
  uStack_a = uVar5;
  FUN_1000_0599();
  piStack_6 = (int *)0xdef;
  piStack_8 = (int *)0x933;
  func_0x00010526();
  local_41a = 0;
  do {
    *(undefined1 *)(local_41a + -0x3e90) = auStack_102[local_41a];
    *(undefined1 *)(local_41a + -0x4c78) = auStack_402[local_41a];
    local_41a = local_41a + 1;
  } while ((int)local_41a < 0x100);
  return 1;
}



/* 3ab8:5de1  FUN_3ab8_5de1  468 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_5de1(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  bool bVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 *local_10;
  undefined2 local_e;
  int local_c;
  int local_a;
  undefined2 *local_8;
  undefined2 **local_6;
  
  local_6 = (undefined2 **)0x96c;
  FUN_21f2_0ebc();
  bVar3 = false;
  local_6 = (undefined2 **)0x254;
  local_8 = (undefined2 *)0x1108;
  local_a = 0x22b2;
  local_c = 0x982;
  local_10 = (undefined2 *)FUN_21f2_1348();
  if ((undefined2 **)local_10 == (undefined2 **)0x0) {
    local_6 = (undefined2 **)0x22b2;
    local_8 = (undefined2 *)0x990;
    func_0x0002504e();
    local_e = 0;
  }
  else {
    uVar1 = *(undefined2 *)0xa658;
    uVar2 = *(undefined2 *)0xa65a;
    *(undefined2 *)0xc584 = uVar1;
    *(undefined2 *)0xc586 = uVar2;
    *(undefined2 *)0xc3f0 = uVar1;
    *(undefined2 *)0xc3f2 = uVar2;
LAB_3ab8_5e2f:
    local_6 = (undefined2 **)local_10;
    local_8 = (undefined2 *)0x50;
    local_a = 0xbf48;
    local_c = 0x22b2;
    local_e = 0x9bf;
    iVar4 = func_0x0002509c();
    if (iVar4 != 0) {
      if ((((*(char *)0xbf48 == 'R') || (*(char *)0xbf48 == 'r')) &&
          ((*(char *)0xbf49 == 'E' || (*(char *)0xbf49 == 'e')))) &&
         ((*(char *)0xbf4a == 'M' || (*(char *)0xbf4a == 'm')))) {
        local_c = 3;
        iVar4 = local_c;
        do {
          while( true ) {
            local_c = iVar4;
            if ((*(char *)(local_c + -0x40b8) != ' ') && (*(char *)(local_c + -0x40b8) != '#'))
            goto LAB_3ab8_5e2f;
            if (*(char *)(local_c + -0x40b8) == '#') break;
            iVar4 = local_c + 1;
            if (10 < local_c + 1) goto LAB_3ab8_5e2f;
          }
          if (*(char *)(local_c + -0x40b7) == '.') {
            iVar4 = local_c + 2;
            *(undefined1 *)(local_c + -0x40b3) = 0;
            local_a = 0;
            goto LAB_3ab8_5eb3;
          }
          iVar4 = local_c + 1;
        } while (*(char *)(local_c + -0x40b7) != 'p');
        local_14 = *(undefined2 *)0xa658;
        local_12 = *(undefined2 *)0xa65a;
        local_6 = &local_6;
        local_8 = &local_14;
        local_a = 0x6d15;
        local_c = local_c + -0x40b6;
        local_e = 0x22b2;
        local_10 = (undefined2 **)0xaa2;
        local_a = func_0x000253ce();
        if (1 < local_a) {
          local_6 = (undefined2 **)0x22b2;
          local_8 = (undefined2 *)0xab6;
          func_0x000297e6();
          local_6 = (undefined2 **)0x22b2;
          local_8 = (undefined2 *)0xabf;
          func_0x00029b6d();
          local_6 = (undefined2 **)0x22b2;
          local_8 = (undefined2 *)0xac7;
          func_0x0002996b();
          local_6 = (undefined2 **)0x22b2;
          local_8 = (undefined2 *)0xacf;
          func_0x00029b9d();
          local_6 = (undefined2 **)0x22b2;
          local_8 = (undefined2 *)0xad8;
          func_0x00029983();
          local_6 = (undefined2 **)0x22b2;
          local_8 = (undefined2 *)0xae0;
          func_0x000297e6();
          local_6 = (undefined2 **)0x22b2;
          local_8 = (undefined2 *)0xae8;
          func_0x00029b85();
          local_6 = (undefined2 **)0x22b2;
          local_8 = (undefined2 *)0xaf1;
          func_0x00029983();
        }
      }
      goto LAB_3ab8_5e2f;
    }
    local_6 = (undefined2 **)0x22b2;
    local_8 = (undefined2 *)0xb0d;
    func_0x0002504e();
    local_e = 0;
    if ((bVar3) && (local_e = 1, local_8 != (undefined2 *)0x0)) {
      local_e = 2;
    }
  }
  return local_e;
LAB_3ab8_5eb3:
  if (2 < local_a) goto LAB_3ab8_5ed2;
  if ((*(char *)(iVar4 + local_a + -0x40b8) == ' ') ||
     (*(char *)(iVar4 + local_a + -0x40b8) == '\n')) {
    *(undefined1 *)(iVar4 + local_a + -0x40b8) = 0;
    goto LAB_3ab8_5ed2;
  }
  local_a = local_a + 1;
  goto LAB_3ab8_5eb3;
LAB_3ab8_5ed2:
  local_6 = (undefined2 **)(local_c + -0x40b6);
  local_8 = (undefined2 *)0x10c;
  local_a = 0x22b2;
  local_c = 0xa62;
  func_0x00024c86();
  bVar3 = true;
  goto LAB_3ab8_5e2f;
}



/* 4000:0b35  FUN_4000_0b35  123 bytes, 0 callers */

undefined2 __cdecl16far FUN_4000_0b35(undefined2 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined1 local_70 [102];
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  puStack_6 = (undefined1 *)0xb40;
  FUN_21f2_0ebc();
  uStack_4 = 600;
  puStack_6 = (undefined1 *)0xca;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xb52;
  iVar2 = FUN_21f2_1348();
  if (iVar2 == 0) {
    uStack_4 = 0x22b2;
    puStack_6 = (undefined1 *)0xb60;
    func_0x0002504e();
  }
  else {
    uStack_4 = 0x22b2;
    puStack_6 = (undefined1 *)0xb6f;
    func_0x0002504e();
    uStack_4 = 0x1108;
    puStack_6 = local_70;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xb7c;
    func_0x00024c86();
    uStack_4 = 0x6d1a;
    puStack_6 = local_70;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xb8b;
    FUN_21f2_2d26();
    uStack_4 = param_1;
    puStack_6 = local_70;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xb99;
    FUN_21f2_2d26();
    uStack_4 = 0;
    puStack_6 = (undefined1 *)0x0;
    puStack_8 = local_70;
    uStack_a = 0x6d1c;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
    *(undefined2 *)0x158 = 0;
    uStack_4 = 0x22b2;
    puStack_6 = (undefined1 *)0xbc5;
    iVar2 = FUN_21f2_1348();
    if (iVar2 != 0) {
      *(undefined1 *)0xbf48 = 0;
      uStack_4 = 0xbf48;
      puStack_6 = (undefined1 *)0x22b2;
      puStack_8 = (undefined1 *)0xbed;
      func_0x0002509c();
      if ((*(char *)0xbf48 == '#') || (*(char *)0xbf48 == '\'')) {
        func_0x0002504e();
        return 1;
      }
    }
    func_0x0002504e();
  }
  return 0;
}


