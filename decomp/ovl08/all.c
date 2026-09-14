/* Ghidra decompilation of jw08.exe - machine output, not the original source. */

/* 3ab8:0008  FUN_3ab8_0008  346 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0008(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int iVar4;
  int iVar5;
  
  FUN_21f2_0ebc();
  iVar5 = 0;
  uVar1 = *(undefined2 *)0xb492;
  do {
    *(undefined1 *)(iVar5 * 8 + *(int *)0xb490) = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x100);
  iVar5 = 0;
  uVar1 = *(undefined2 *)0xc286;
  do {
    *(undefined1 *)(iVar5 * 0x10 + *(int *)0xc284) = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  iVar5 = 0;
  do {
    uVar1 = *(undefined2 *)0xb28;
    *(undefined2 *)(iVar5 * 4 + 0xb2a) = *(undefined2 *)0xb26;
    *(undefined2 *)(iVar5 * 4 + 0xb2c) = uVar1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  *(undefined2 *)0x14a = 0;
  *(undefined2 *)0x148 = 0;
  *(undefined2 *)0x14e = 0;
  *(undefined2 *)0x14c = 0;
  uVar1 = *(undefined2 *)0xbefc;
  *(undefined2 *)0xc0ac = *(undefined2 *)0xbefa;
  *(undefined2 *)0xc0ae = uVar1;
  *(undefined2 *)0x154 = 0;
  *(undefined2 *)0x152 = 0;
  *(undefined2 *)0x150 = 0;
  func_0x0001470b(0x22b2,0);
  *(undefined2 *)0xbc0 = 1;
  FUN_1885_3a20(0,1,1,1,1);
  *(undefined2 *)0x4c = 0;
  *(undefined2 *)0x11e = 0;
  *(undefined2 *)0xb310 = 0;
  for (iVar5 = 0; iVar5 < 0x10; iVar5 = iVar5 + 1) {
    *(undefined1 *)(iVar5 + 0xb7c) = 1;
    *(undefined1 *)(iVar5 + 0xb6c) = 1;
    *(char *)(iVar5 + 0xb8e) = (char)iVar5 << 4;
    for (iVar4 = 0; iVar4 < 0x10; iVar4 = iVar4 + 1) {
      iVar3 = iVar5 * 0x10 + iVar4;
      *(undefined1 *)(iVar3 + -0x4c78) = 1;
      *(undefined1 *)(iVar3 + -0x3e90) = 1;
    }
  }
  iVar5 = 0;
  do {
    uVar1 = *(undefined2 *)0x9808;
    uVar2 = *(undefined2 *)0x980a;
    iVar4 = iVar5 * 4;
    *(undefined2 *)(iVar4 + 0xc8c) = uVar1;
    *(undefined2 *)(iVar4 + 0xc8e) = uVar2;
    *(undefined2 *)(iVar4 + 0xc78) = uVar1;
    *(undefined2 *)(iVar4 + 0xc7a) = uVar2;
    *(undefined2 *)(iVar4 + 0xc64) = uVar1;
    *(undefined2 *)(iVar4 + 0xc66) = uVar2;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  func_0x0000b1d8(0x1bb4,1);
  func_0x0000abfa(0x885);
  return;
}



/* 3ab8:0162  FUN_3ab8_0162  278 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_0162(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 local_72 [4];
  undefined1 local_6e [4];
  int local_6a;
  undefined1 local_68 [2];
  undefined1 local_66 [86];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uVar1 = 0x22b2;
  puStack_6 = (undefined1 *)0xaced;
  FUN_21f2_0ebc();
  if (*(char *)0xd14 == '\0') {
    local_6a = 1;
  }
  else {
    do {
      puStack_4 = (undefined1 *)0x3a6;
      puStack_6 = local_66;
      puStack_a = (undefined1 *)0xad04;
      puStack_8 = (undefined1 *)uVar1;
      FUN_21f2_3454();
      puStack_4 = (undefined1 *)0x98a;
      puStack_6 = local_66;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xad13;
      FUN_21f2_2d26();
      puStack_4 = (undefined1 *)0x7f2;
      puStack_6 = local_66;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xad22;
      FUN_21f2_2d26();
      puStack_4 = (undefined1 *)0x98a;
      puStack_6 = local_66;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xad31;
      FUN_21f2_2d26();
      puStack_4 = (undefined1 *)0x7e6;
      puStack_6 = local_66;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xad40;
      FUN_21f2_2d26();
      puStack_4 = (undefined1 *)0x7ec;
      puStack_6 = local_66;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xad4f;
      FUN_21f2_2d26();
      puStack_4 = local_66;
      puStack_6 = (undefined1 *)0x3;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xad5e;
      FUN_1def_07a4();
      puStack_4 = local_68;
      puStack_6 = local_72;
      puStack_8 = local_6e;
      puStack_a = local_66;
      uStack_c = 1;
      uStack_e = 0x1bb4;
      uVar1 = 0x1bb4;
      uStack_10 = 0xad79;
      local_6a = FUN_1def_0904();
      if (*(int *)0x158 != 0) {
        return 0xfba9;
      }
      if (local_6a == 0xd) {
        local_6a = 1;
      }
      if (local_6a == -1) {
        return 0xffff;
      }
      if (local_6a == 2) {
        return 2;
      }
      if (local_6a == 3) {
        return 3;
      }
    } while (local_6a != 1);
  }
  if (local_6a == 1) {
    puStack_6 = (undefined1 *)0xadc6;
    puStack_4 = (undefined1 *)uVar1;
    FUN_3ab8_0008();
    puStack_4 = (undefined1 *)0xc134;
    puStack_8 = (undefined1 *)0xadcf;
    puStack_6 = (undefined1 *)uVar1;
    func_0x000257c0();
    *(undefined2 *)0x158 = 1;
    if (*(char *)0xb782 != '\0') {
      *(undefined2 *)0xa62 = 0x2774;
    }
    *(undefined1 *)0xcf6 = 0;
    *(undefined1 *)0xd14 = 0;
    *(undefined2 *)0xc08 = 1;
  }
  return 0xffff;
}



/* 3ab8:0278  FUN_3ab8_0278  2442 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0278(uint param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  long lVar13;
  undefined2 *puVar14;
  undefined2 local_d8 [16];
  undefined2 local_b8 [11];
  undefined1 local_a2 [4];
  undefined1 local_9e [4];
  undefined2 local_9a;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_7a;
  undefined2 local_78;
  int local_76;
  undefined4 local_74;
  undefined1 local_70 [4];
  undefined1 local_6c [2];
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  int local_62;
  int local_60;
  uint local_5e;
  uint local_5c;
  undefined1 local_5a [2];
  uint local_58;
  undefined1 local_52 [32];
  undefined2 uStack_32;
  undefined2 auStack_2e [9];
  undefined2 uStack_1c;
  int iStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 *puStack_12;
  undefined1 *puStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  
  FUN_21f2_0ebc();
  uVar5 = (int)*(uint *)0xc1c >> 0xf;
  local_60 = (*(uint *)0xc1c ^ uVar5) - uVar5;
  uVar12 = local_60 == 0;
  lVar13 = CONCAT22(local_74._2_2_,(undefined2)local_74);
LAB_3ab8_0290:
  do {
    while( true ) {
      local_74 = lVar13;
      func_0x000297e6();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar12) {
        local_6a = *(undefined2 *)0x980c;
        local_68 = *(undefined2 *)0x980e;
      }
      func_0x0001bb4e();
      local_8a = 0xf;
      puStack_c = (undefined1 *)0xae61;
      func_0x00012276();
      puStack_c = (undefined1 *)0x11f2;
      puStack_e = (undefined1 *)0xae6f;
      func_0x00024c86();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xae7e;
      func_0x00024c86();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xae9f;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xaeae;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xaebd;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xaecc;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xaedb;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xaeea;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xaef9;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x1;
      puStack_e = (undefined1 *)0x20;
      puStack_10 = local_52;
      puStack_12 = (undefined2 *)0x22b2;
      uStack_14 = 0xaf13;
      FUN_1000_02b5();
      if (*(int *)0xc22 == 0) {
        func_0x000297e6();
        func_0x00029d78();
        puStack_10 = (undefined1 *)0x22b2;
        puStack_12 = (undefined2 *)0xaf34;
        func_0x000299d1();
        puStack_10 = (undefined1 *)0x329a;
        puStack_12 = (undefined2 *)local_52;
        uStack_14 = 0x22b2;
        uStack_16 = 0xaf41;
        FUN_21f2_3454();
        puStack_c = (undefined1 *)0x2;
        puStack_e = (undefined1 *)0x32;
        puStack_10 = local_52;
        puStack_12 = (undefined2 *)0x22b2;
        uStack_14 = 0xaf5d;
        FUN_1000_02b5();
        if ((local_60 < 0x65) && (*(char *)0x124 != '\0')) {
          puStack_c = (undefined1 *)0x2;
          puStack_e = (undefined1 *)0x46;
          puStack_10 = (undefined1 *)0x32a3;
          puStack_12 = (undefined2 *)0xdef;
          uStack_14 = 0xaf86;
          FUN_1000_02b5();
        }
      }
      local_9a = *(undefined2 *)0xc1c;
      *(int *)0xc1c = local_60;
      *(undefined2 *)0xc1a = 0;
      if (*(char *)0x124 != '\0') {
        *(undefined2 *)0xc20 = 100;
      }
      puStack_c = local_a2;
      puStack_e = local_9e;
      puStack_10 = local_70;
      puStack_12 = &local_6a;
      uStack_14 = 0xdef;
      uStack_16 = 45000;
      local_5e = func_0x000021a4();
      *(undefined2 *)0xc1c = local_9a;
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xc1e = 0;
      puStack_c = (undefined1 *)0xad;
      puStack_e = (undefined1 *)0xafea;
      FUN_1000_0599();
      puVar9 = (undefined1 *)0xdef;
      func_0x00010526();
      if (*(int *)0x158 != 0) {
        return 0xfba9;
      }
      if (local_5e == 0xffff) {
        return 0xffff;
      }
      if (((0x41 < (int)local_5e) && ((int)local_5e < 0x51)) || (local_5e == 0x6200)) {
        puVar9 = (undefined1 *)0x885;
        func_0x0000c3ca();
        puStack_c = (undefined1 *)*(int *)0x9814;
        puStack_e = (undefined1 *)*(int *)0x9812;
        puStack_10 = (undefined1 *)*(int *)0x9810;
        puStack_12 = (undefined2 *)*(int *)0x9816;
        uStack_14 = *(undefined2 *)0x9814;
        uStack_16 = *(undefined2 *)0x9812;
        uStack_18 = *(undefined2 *)0x9810;
        iStack_1a = 0;
        uStack_1c = 0;
        pcVar3 = (code *)swi(0x3f);
        iVar4 = (*pcVar3)();
        local_74 = (long)iVar4;
        if (iVar4 == 1) {
          uVar11 = 0;
          lVar13 = 1;
          goto LAB_3ab8_04e5;
        }
        if (*(int *)0x158 != 0) {
          return 0xfba9;
        }
      }
      lVar13 = local_74;
      if (((local_5e == 0x65) || (local_5e == 0x66)) && (*(char *)0x124 != '\0')) break;
LAB_3ab8_0ba8:
      if ((local_5e == 0x65) || ((0x20 < (int)local_5e && ((int)local_5e < 0x2e)))) {
        if (param_1 != 1) {
          uVar10 = *(undefined2 *)0x980a;
          *param_2 = *(undefined2 *)0x9808;
          param_2[1] = uVar10;
        }
        return 0;
      }
      uVar11 = 0;
      if ((local_5e == 0) || (uVar11 = local_5e < 0x66, local_5e == 0x66)) goto LAB_3ab8_04e5;
      uVar12 = local_5e == 0x2d;
      if (0x2d < (int)local_5e) {
        uVar11 = local_5e < 0x41;
        uVar12 = local_5e == 0x41;
        if ((int)local_5e < 0x42) {
LAB_3ab8_04e5:
          while( true ) {
            local_74 = lVar13;
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar11) break;
            func_0x000297e6();
            puStack_c = (undefined1 *)0xb092;
            func_0x00029b55();
LAB_3ab8_0513:
            func_0x00029983();
            lVar13 = local_74;
          }
          while( true ) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar11) break;
            func_0x000297e6();
            puStack_c = (undefined1 *)0xb786;
            func_0x00029bb5();
            func_0x00029983();
          }
          *param_2 = local_6a;
          param_2[1] = local_68;
          return 1;
        }
      }
    }
    puStack_c = local_6c;
    puStack_e = local_5a;
    puStack_12 = (undefined2 *)0xb0cf;
    puStack_10 = puVar9;
    func_0x0000dcbd();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029b6d();
    FUN_28b3_0d8b();
    FUN_28b3_117c();
    FUN_28b3_0d8b();
    FUN_28b3_1168();
    func_0x00029d78();
    local_58 = FUN_28b3_0f51();
    uVar6 = (int)local_58 >> 0xf;
    uVar5 = local_58 ^ uVar6;
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029b6d();
    FUN_28b3_0d8b();
    FUN_28b3_1168();
    FUN_28b3_0d8b();
    FUN_28b3_1163();
    func_0x00029d78();
    local_5c = FUN_28b3_0f51();
    if ((int)((local_5c ^ (int)local_5c >> 0xf) - ((int)local_5c >> 0xf)) < (int)(uVar5 - uVar6)) {
      local_5c = 0;
    }
    else {
      local_58 = 0;
    }
    if (((int)local_58 <= local_60) && ((int)local_5c <= local_60)) {
      if (-local_58 != local_60 && (int)local_58 <= -local_60) {
        uVar11 = local_5e < 0x65;
        if (local_5e == 0x65) {
          func_0x000297e6();
          func_0x00029af6();
          goto LAB_3ab8_0513;
        }
        func_0x000297e6();
        FUN_28b3_100d();
        goto LAB_3ab8_0513;
      }
      lVar13 = local_74;
      if (-local_5c == local_60 || -local_60 < (int)local_5c) goto LAB_3ab8_0ba8;
      func_0x000297e6();
      func_0x00029d78();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xb246;
      func_0x000299d1();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xb24f;
      func_0x000297e6();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xb254;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      iStack_1a = 0xb25e;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      iStack_1a = -0x4d9d;
      lVar13 = FUN_13bf_39a0();
      uVar12 = lVar13 == 0;
      if (lVar13 == 0) goto LAB_3ab8_0290;
      uVar12 = (int)((ulong)lVar13 >> 0x10) == 0;
      local_74 = lVar13;
      if (-1 < lVar13) {
        puStack_c = (undefined1 *)0x11f2;
        puStack_e = (undefined1 *)0xb502;
        puVar14 = (undefined2 *)func_0x0000013f();
        puVar8 = (undefined2 *)puVar14;
        puVar7 = local_b8;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar1;
        }
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x0002996b();
        FUN_28b3_1181();
        if ((bool)uVar12) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar12) {
            puStack_c = (undefined1 *)0xb705;
            func_0x00012276();
            *(undefined2 *)0xc22 = 1;
            puStack_c = (undefined1 *)0x11f2;
            puStack_e = (undefined1 *)0xb719;
            FUN_1000_0599();
            puStack_c = (undefined1 *)0xb724;
            func_0x00012276();
            lVar13 = local_74;
            goto LAB_3ab8_0290;
          }
        }
        uVar12 = local_5e < 0x66;
        uVar11 = local_5e == 0x66;
        if ((bool)uVar11) {
          local_66 = local_7a;
          local_64 = local_78;
          func_0x000297e6();
          func_0x00029af6();
          func_0x00029983();
          local_88 = local_66;
          local_86 = local_64;
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar12 || (bool)uVar11) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar11) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar12 && !(bool)uVar11) goto LAB_3ab8_0a7d;
          }
        }
        else {
LAB_3ab8_0a7d:
          func_0x000297e6();
          func_0x00029af6();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029af6();
          func_0x00029983();
        }
        func_0x000297e6();
        func_0x00029d78();
        puStack_10 = (undefined1 *)0x22b2;
        puStack_12 = (undefined2 *)0xb640;
        func_0x000299d1();
        puStack_10 = (undefined1 *)0x22b2;
        puStack_12 = (undefined2 *)0xb649;
        func_0x000297e6();
        puStack_10 = (undefined1 *)0x22b2;
        puStack_12 = (undefined2 *)0xb64e;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        iStack_1a = 0xb658;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        iStack_1a = -0x49a3;
        func_0x0002a178();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029983();
        uVar11 = 0;
        lVar13 = local_74;
        if (*(int *)0xcb6 != 0) {
          uVar11 = param_1 < 10;
          uVar12 = param_1 == 10;
          if (!(bool)uVar12) {
            func_0x000297e6();
            func_0x000297e6();
            puStack_c = (undefined1 *)0xb6a6;
            func_0x00029b55();
            func_0x0002996b();
            FUN_28b3_1181();
            if (!(bool)uVar11 && !(bool)uVar12) {
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029983();
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            lVar13 = local_74;
            if (!(bool)uVar11) {
              func_0x000297e6();
              puStack_c = (undefined1 *)0xb6f9;
              func_0x00029bb5();
              goto LAB_3ab8_0513;
            }
          }
        }
        goto LAB_3ab8_04e5;
      }
      puStack_c = (undefined1 *)0x11f2;
      uVar10 = 0;
      puStack_e = (undefined1 *)0xb28d;
      puVar14 = (undefined2 *)func_0x00000271();
      puVar8 = (undefined2 *)puVar14;
      puVar7 = local_d8;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar1 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar1;
      }
      do {
        do {
          do {
            do {
              puStack_e = (undefined1 *)0xb2ad;
              puStack_c = (undefined1 *)uVar10;
              func_0x00024c86();
              puStack_c = (undefined1 *)0x22b2;
              puStack_e = (undefined1 *)0xb2bc;
              FUN_21f2_2d26();
              puStack_c = (undefined1 *)0x22b2;
              puStack_e = (undefined1 *)0xb2cb;
              FUN_21f2_2d26();
              *(undefined2 *)0xc1a = 0;
              *(undefined2 *)0xc20 = 0;
              puStack_c = local_9e;
              puStack_e = local_52;
              puStack_10 = (undefined1 *)0x1;
              puStack_12 = (undefined2 *)0x22b2;
              uVar10 = 0x1bb4;
              uStack_14 = 0xb2f0;
              local_62 = FUN_1def_0904();
              *(undefined2 *)0xc1a = 0;
              *(undefined2 *)0xc20 = 0;
              if (*(int *)0x158 != 0) {
                return 0xfba9;
              }
              if (local_62 == -1) {
                local_62 = 0;
                goto LAB_3ab8_0790;
              }
            } while ((local_62 != 0) || (local_76 == 0));
            puStack_c = (undefined1 *)local_76;
            puStack_e = (undefined1 *)0x1bb4;
            uVar10 = 0x11f2;
            puStack_10 = (undefined1 *)0xb33b;
            iVar4 = func_0x00015409();
          } while (iVar4 == 0);
          puStack_c = local_a2;
          puStack_e = local_9e;
          puVar8 = auStack_2e;
          puVar7 = local_d8;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar1 = puVar8;
            puVar8 = puVar8 + 1;
            puVar14 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar1 = *puVar14;
          }
          uVar10 = 0x1bb4;
          uStack_32 = 0xb36a;
          iVar4 = func_0x000210f8();
        } while (iVar4 == 0);
        func_0x000297e6();
        puStack_c = (undefined1 *)0xb386;
        func_0x00029b55();
        func_0x00029983();
        func_0x000297e6();
        puStack_c = (undefined1 *)0xb39f;
        func_0x00029b55();
        func_0x00029983();
        uVar12 = local_5e < 0x65;
        uVar11 = local_5e == 0x65;
        if ((bool)uVar11) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar12 && !(bool)uVar11) goto LAB_3ab8_08c2;
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar11) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar12 && !(bool)uVar11) goto LAB_3ab8_08c2;
          }
        }
        else {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar12) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar11) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar12) goto LAB_3ab8_08c2;
            }
            goto LAB_3ab8_08ee;
          }
LAB_3ab8_08c2:
          func_0x000297e6();
          func_0x00029af6();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029af6();
          func_0x00029983();
        }
LAB_3ab8_08ee:
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar11) break;
        func_0x000297e6();
        func_0x000297e6();
        uVar10 = 0x22b2;
        FUN_28b3_1181();
      } while ((bool)uVar11);
      func_0x000297e6();
      func_0x00029d78();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xb4b9;
      func_0x000299d1();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xb4c2;
      func_0x000297e6();
      puStack_10 = (undefined1 *)0x22b2;
      puStack_12 = (undefined2 *)0xb4c7;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      iStack_1a = 0xb4d1;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      iStack_1a = -0x4b2a;
      func_0x0002a178();
      func_0x00029834();
      func_0x00029c2c();
      func_0x00029983();
      local_62 = 1;
LAB_3ab8_0790:
      uVar11 = 0;
      lVar13 = local_74;
      if (local_62 != 0) goto LAB_3ab8_04e5;
      uVar12 = 1;
      goto LAB_3ab8_0290;
    }
    puStack_c = (undefined1 *)0xb191;
    func_0x000297e6();
    puStack_c = (undefined1 *)0xb196;
    func_0x00029d78();
    puStack_12 = (undefined2 *)0x22b2;
    uStack_14 = 0xb1a0;
    func_0x000299d1();
    puStack_12 = (undefined2 *)0x22b2;
    uStack_14 = 0xb1a9;
    func_0x000297e6();
    puStack_12 = (undefined2 *)0x22b2;
    uStack_14 = 0xb1ae;
    func_0x00029d78();
    iStack_1a = 0x22b2;
    uStack_1c = 0xb1b8;
    func_0x000299d1();
    iStack_1a = local_5e - 100;
    if ((int)local_5c < (int)local_58) {
      uStack_1c = 1;
    }
    else {
      uStack_1c = 2;
    }
    pcVar3 = (code *)swi(0x3f);
    iVar4 = (*pcVar3)();
    uVar11 = (undefined1 *)0xffe9 < &uStack_1c;
    lVar13 = local_74;
    if (iVar4 == 1) goto LAB_3ab8_04e5;
    uVar12 = 1;
    if (*(int *)0x158 != 0) {
      return 0xfba9;
    }
  } while( true );
}



/* 3ab8:0c3b  FUN_3ab8_0c3b  2514 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_0c3b(int param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 ****ppppuVar5;
  undefined2 ****ppppuVar6;
  undefined2 ***pppuVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar8;
  undefined2 ***local_5e [10];
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 auStack_42 [6];
  int local_36 [8];
  undefined2 ***local_26;
  undefined2 ****local_24;
  undefined2 ***local_22;
  int *local_20;
  int *local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  int *local_16;
  int ***local_14;
  undefined2 **local_12;
  int ***local_10;
  undefined2 *****local_e;
  undefined2 ***local_c;
  int ***local_a;
  undefined2 ****local_8;
  undefined2 uVar9;
  undefined2 uVar10;
  
  FUN_21f2_0ebc();
  local_16 = (int *)0x1;
  local_18 = (undefined2 ***)((uint)local_18._1_1_ << 8);
  if (param_2 < 10000) {
    if (*(char *)0xcc6 == '\x01') {
      local_8 = (undefined2 ****)0x22b2;
      local_a = (int ***)0xb7eb;
      func_0x000297e6();
      local_8 = (undefined2 ****)param_3;
      local_a = (int ***)0x22b2;
      local_c = (undefined2 ***)0xb7f4;
      func_0x00029b6d();
      local_8 = (undefined2 ****)0x22b2;
      local_a = (int ***)0xb7fa;
      func_0x00029983();
      local_8 = (undefined2 ****)0x22b2;
      local_a = (int ***)0xb803;
      func_0x000297e6();
      local_8 = (undefined2 ****)param_4;
      local_a = (int ***)0x22b2;
      local_c = (undefined2 ***)0xb80c;
      func_0x00029b6d();
      local_8 = (undefined2 ****)0x22b2;
      local_a = (int ***)0xb812;
      func_0x00029983();
    }
    if (*(char *)0xcc6 == '\x02') {
      local_8 = (undefined2 ****)0x22b2;
      local_a = (int ***)0xb822;
      func_0x000297e6();
      local_8 = (undefined2 ****)param_3;
      local_a = (int ***)0x22b2;
      local_c = (undefined2 ***)0xb82b;
      func_0x00029b9d();
      local_8 = (undefined2 ****)0x22b2;
      local_a = (int ***)0xb831;
      func_0x00029983();
      local_8 = (undefined2 ****)0x22b2;
      local_a = (int ***)0xb83a;
      func_0x000297e6();
      local_8 = (undefined2 ****)param_4;
      local_a = (int ***)0x22b2;
      local_c = (undefined2 ***)0xb843;
      func_0x00029b9d();
      local_8 = (undefined2 ****)0x22b2;
      local_a = (int ***)0xb849;
      func_0x00029983();
    }
    if ((5 < *(byte *)0x123) &&
       ((((*(int *)0xa62 == 1 || (*(int *)0xa62 == 0x10)) || (*(int *)0xa62 == 0x11)) ||
        (param_1 == 0x29)))) {
      local_18 = (undefined2 ***)CONCAT11(local_18._1_1_,1);
    }
  }
  local_8 = (undefined2 ****)0x0;
  local_a = (int ***)0x22b2;
  local_c = (undefined2 ***)0xb877;
  func_0x0000daa6();
  local_8 = (undefined2 ****)(*(int *)0xa5a + -1);
  local_a = (int ***)(*(int *)0x1b3e + -1);
  local_c = (undefined2 ***)(*(int *)0xa5e + 1);
  local_e = (undefined2 *****)(*(int *)0xa58 + 1);
  local_10 = (int ***)0x885;
  local_12 = (undefined2 **)0xb891;
  func_0x0000a76b();
  local_8 = (undefined2 ****)0x885;
  ppppuVar5 = (undefined2 ****)0x885;
  local_a = (int ***)0xb899;
  func_0x0000a799();
  if (*(int *)0xc08 == 0) {
    local_8 = (undefined2 ****)0x0;
    local_a = (int ***)0x885;
    local_c = (undefined2 ***)0xb8a8;
    func_0x0000daa6();
    local_8 = (undefined2 ****)0x885;
    local_a = (int ***)0xb8ae;
    func_0x0001bb8f();
    local_8 = (undefined2 ****)0x1bb4;
    local_a = (int ***)0xb8b3;
    func_0x0000ac64();
    local_8 = (undefined2 ****)0x885;
    ppppuVar5 = (undefined2 ****)0x1bb4;
    local_a = (int ***)0xb8b8;
    func_0x0001bba4();
  }
  local_8 = (undefined2 ****)0x0;
  local_c = (undefined2 ***)0xb8c0;
  local_a = (int ***)ppppuVar5;
  func_0x0000daa6();
  local_8 = (undefined2 ****)0x2;
  local_a = (int ***)0x11;
  local_c = (undefined2 ***)0x885;
  local_e = (undefined2 *****)0xb8ce;
  FUN_1000_0599();
  local_8 = (undefined2 ****)0xdef;
  local_a = (int ***)0xb8d5;
  func_0x00010526();
  local_22 = (undefined2 ***)0x0;
  do {
    local_8 = (undefined2 ****)0x0;
    local_a = (int ***)0xdef;
    local_c = (undefined2 ***)0xb8ed;
    func_0x000297e6();
    local_a = (int ***)0x22b2;
    local_c = (undefined2 ***)0xb8f2;
    func_0x00029d78();
    local_12 = (undefined2 **)0x22b2;
    local_14 = (int ***)0xb8fc;
    func_0x000299d1();
    local_12 = (undefined2 **)0x32b3;
    local_14 = (int ***)local_5e;
    local_16 = (int *)0x22b2;
    local_18 = (undefined2 ***)0xb909;
    FUN_21f2_3454();
    local_8 = (undefined2 ****)0xffff;
    local_a = (int ***)0x7;
    local_c = (undefined2 ***)0x2;
    local_e = (undefined2 *****)((int)local_22 * 10 + 0x12);
    local_10 = (int ***)local_5e;
    local_12 = (undefined2 **)0x22b2;
    local_14 = (int ***)0xb92b;
    FUN_1000_02b5();
    local_22 = (undefined2 ***)((int)local_22 + 1);
  } while ((int)local_22 < 6);
  local_10 = (int ***)0x0;
  do {
    local_8 = (undefined2 ****)0x0;
    local_a = (int ***)0x0;
    local_c = (undefined2 ***)0x0;
    local_e = (undefined2 *****)0x7;
    local_14 = (int ***)((int)local_10 * 0x20 + 0x38);
    local_12 = (undefined2 **)0x224;
    local_16 = (int *)0xa4;
    local_18 = (undefined2 ***)0xdef;
    local_1a = 0xb95e;
    local_10 = local_14;
    func_0x0000f350();
    local_10 = (int ***)((int)local_10 + 1);
  } while ((int)local_10 < 0xb);
  for (local_c = (undefined2 ***)0x0; (int)local_c < 7; local_c = (undefined2 ***)((int)local_c + 1)
      ) {
    if (((local_c == (undefined2 ***)0x1) || (local_c == (undefined2 ***)0x3)) ||
       (local_c == (undefined2 ***)0x4)) {
      local_5e[0] = (undefined2 ****)0xcccc;
    }
    else {
      local_5e[0] = (undefined2 ****)0xffff;
    }
    local_8 = (undefined2 ****)0x0;
    local_a = local_5e[0];
    local_c = (undefined2 ***)0x3;
    local_e = (undefined2 *****)0x7;
    local_10 = (int ***)0x178;
    local_16 = (int *)0x164;
    local_14 = (int ***)0x38;
    local_18 = (undefined2 ***)0xdef;
    pppuVar7 = (undefined2 ***)0xdef;
    local_1a = 0xb99d;
    local_12 = (undefined2 **)local_16;
    func_0x0000f350();
    if ((int)local_c < 6) {
      if (local_c == (undefined2 ***)0x0) {
        local_1c = *(undefined2 *)0x9834;
        local_1a = *(undefined2 *)0x9836;
      }
      if (local_c == (undefined2 ***)0x1) {
        local_1c = *(undefined2 *)0x9838;
        local_1a = *(undefined2 *)0x983a;
      }
      if (local_c == (undefined2 ***)0x2) {
        local_1c = *(undefined2 *)0x983c;
        local_1a = *(undefined2 *)0x983e;
      }
      if (local_c == (undefined2 ***)0x3) {
        local_1c = *(undefined2 *)0x9840;
        local_1a = *(undefined2 *)0x9842;
      }
      if (local_c == (undefined2 ***)0x4) {
        local_1c = *(undefined2 *)0x9844;
        local_1a = *(undefined2 *)0x9846;
      }
      if (local_c == (undefined2 ***)0x5) {
        local_1c = *(undefined2 *)0x9848;
        local_1a = *(undefined2 *)0x984a;
      }
      for (local_22 = (undefined2 ***)0x0; (int)local_22 < 10;
          local_22 = (undefined2 ***)((int)local_22 + 1)) {
        local_8 = (undefined2 ****)((int)local_22 * 2 + 5);
        local_a = (int ***)((int)local_c * 8 + 0x14);
        local_e = (undefined2 *****)0xba91;
        local_c = pppuVar7;
        FUN_1000_0599();
        if ((int)local_c < 5) {
          local_8 = (undefined2 ****)0xdef;
          local_a = (int ***)0xbaa1;
          FUN_28b3_0d8b();
          local_8 = (undefined2 ****)0x22b2;
          local_a = (int ***)0xbaa9;
          func_0x00029b6d();
          local_8 = (undefined2 ****)0x22b2;
          local_a = (int ***)0xbaae;
          func_0x00029d78();
          local_10 = (int ***)0x22b2;
          local_12 = (undefined2 **)0xbab8;
          func_0x000299d1();
          local_10 = (int ***)0x32ba;
        }
        else {
          local_8 = (undefined2 ****)0xdef;
          local_a = (int ***)0xba4c;
          FUN_28b3_0d8b();
          local_8 = (undefined2 ****)0x22b2;
          local_a = (int ***)0xba54;
          func_0x00029b6d();
          local_8 = (undefined2 ****)0x22b2;
          local_a = (int ***)0xba59;
          func_0x00029d78();
          local_10 = (int ***)0x22b2;
          local_12 = (undefined2 **)0xba63;
          func_0x000299d1();
          local_10 = (int ***)0x32c0;
        }
        local_12 = (undefined2 **)0x22b2;
        pppuVar7 = (undefined2 ***)0x11f2;
        local_14 = (int ***)0xba6c;
        func_0x00012276();
      }
      local_8 = (undefined2 ****)0x0;
      local_a = local_5e[0];
      local_c = (undefined2 ***)0x3;
      local_e = (undefined2 *****)0x7;
      local_10 = (int ***)0x178;
      local_16 = (int *)0x164;
      local_14 = (int ***)0x38;
      local_1a = 0xbae4;
      local_18 = pppuVar7;
      local_12 = (undefined2 **)local_16;
      func_0x0000f350();
    }
  }
  local_8 = (undefined2 ****)0x0;
  local_a = (int ***)0x0;
  local_c = (undefined2 ***)0x1;
  local_e = (undefined2 *****)0x7;
  local_10 = (int ***)0x178;
  local_12 = (undefined2 **)0xa4;
  local_14 = (int ***)0x38;
  local_16 = (int *)0x84;
  local_18 = (undefined2 ***)0xdef;
  local_1a = 0xbb0d;
  func_0x0000f350();
  local_8 = (undefined2 ****)0xe;
  local_a = (int ***)0x13;
  local_c = (undefined2 ***)0xdef;
  local_e = (undefined2 *****)0xbb1d;
  FUN_1000_0599();
  local_8 = (undefined2 ****)0x32c6;
  local_a = (int ***)0xdef;
  local_c = (undefined2 ***)0xbb28;
  func_0x00012276();
  local_8 = (undefined2 ****)0x0;
  local_a = (int ***)0x0;
  local_c = (undefined2 ***)0x1;
  local_e = (undefined2 *****)0x7;
  local_10 = (int ***)0x178;
  local_12 = (undefined2 **)0x262;
  local_14 = (int ***)0x38;
  local_16 = (int *)0x224;
  local_18 = (undefined2 ***)0x11f2;
  local_1a = 0xbb46;
  func_0x0000f350();
  local_8 = (undefined2 ****)0x9;
  local_a = (int ***)0x48;
  local_c = (undefined2 ***)0xdef;
  local_e = (undefined2 *****)0xbb56;
  FUN_1000_0599();
  local_8 = (undefined2 ****)0x32c9;
  local_a = (int ***)0xdef;
  local_c = (undefined2 ***)0xbb61;
  func_0x00012276();
  local_8 = (undefined2 ****)0x0;
  local_a = (int ***)0x0;
  local_c = (undefined2 ***)0x0;
  local_e = (undefined2 *****)0x7;
  local_10 = (int ***)0xd8;
  local_12 = (undefined2 **)0x262;
  local_14 = (int ***)0xd8;
  local_16 = (int *)0x224;
  local_18 = (undefined2 ***)0x11f2;
  local_1a = 0xbb7a;
  func_0x0000f350();
  local_8 = (undefined2 ****)0x13;
  local_a = (int ***)0x49;
  local_c = (undefined2 ***)0xdef;
  local_e = (undefined2 *****)0xbb8a;
  FUN_1000_0599();
  local_8 = (undefined2 ****)0x32cd;
  local_a = (int ***)0xdef;
  local_c = (undefined2 ***)0xbb95;
  func_0x00012276();
  local_8 = (undefined2 ****)0x3;
  local_a = (int ***)0x28;
  local_c = (undefined2 ***)0x11f2;
  local_e = (undefined2 *****)0xbba3;
  FUN_1000_0599();
  local_8 = (undefined2 ****)0x32cf;
  local_a = (int ***)0xdef;
  local_c = (undefined2 ***)0xbbae;
  func_0x00012276();
  if (*(char *)0x116a == '\x02') {
    local_8 = (undefined2 ****)0xb;
    local_a = (int ***)0x46;
    local_c = (undefined2 ***)0x11f2;
    local_e = (undefined2 *****)0xbbc3;
    FUN_1000_0599();
    local_8 = (undefined2 ****)0x32d1;
    local_a = (int ***)0xdef;
    local_c = (undefined2 ***)0xbbce;
    func_0x00012276();
    local_8 = (undefined2 ****)0xc;
    local_a = (int ***)0x46;
    local_c = (undefined2 ***)0x11f2;
    local_e = (undefined2 *****)0xbbdc;
    FUN_1000_0599();
    local_8 = (undefined2 ****)0x32d9;
    local_a = (int ***)0xdef;
    local_c = (undefined2 ***)0xbbe7;
    func_0x00012276();
  }
  if ((char)local_18 != '\0') {
    local_8 = (undefined2 ****)0x1;
    local_a = (int ***)0x23;
    local_c = (undefined2 ***)0x11f2;
    local_e = (undefined2 *****)0xbbfb;
    FUN_1000_0599();
    local_8 = (undefined2 ****)0x32e1;
    local_a = (int ***)0xdef;
    local_c = (undefined2 ***)0xbc06;
    func_0x00012276();
  }
  local_46 = *param_3;
  local_44 = param_3[1];
  uVar9 = *param_4;
  uVar10 = param_4[1];
  ppppuVar5 = (undefined2 ****)0x11f2;
LAB_3ab8_10a8:
  local_4a = *(undefined2 *)0x9844;
  local_48 = *(undefined2 *)0x9846;
  local_22 = (undefined2 ***)0x0;
  do {
    local_36[(int)local_22] = 0;
    local_22 = (undefined2 ***)((int)local_22 + 1);
  } while ((int)local_22 < 7);
  local_8 = (int ****)0x1;
  ppppuVar6 = (undefined2 ****)0x885;
  local_c = (undefined2 ***)0xbc56;
  local_a = (int ***)ppppuVar5;
  func_0x0000daa6();
  uVar1 = uVar9;
  uVar2 = uVar10;
LAB_3ab8_10d7:
  while( true ) {
    uVar10 = uVar2;
    uVar9 = uVar1;
    if ((int)local_8 < 2) {
      local_22 = (undefined2 ****)0x1a;
      local_1c = local_46;
      local_1a = local_44;
    }
    else {
      local_22 = (undefined2 ****)0x29;
      local_1c = uVar9;
      local_1a = uVar10;
    }
    local_8 = (undefined2 ****)0x3;
    local_a = local_22;
    local_e = (undefined2 *****)0xbc87;
    local_c = ppppuVar6;
    FUN_1000_0599();
    local_8 = (undefined2 ****)0xdef;
    local_a = (int ***)0xbc91;
    func_0x000297e6();
    local_8 = (undefined2 ****)0x22b2;
    local_a = (int ***)0xbc96;
    func_0x00029d78();
    local_10 = (int ***)0x22b2;
    local_12 = (undefined2 **)0xbca0;
    func_0x000299d1();
    local_10 = (int ***)0x32f7;
    local_12 = (undefined2 **)0x22b2;
    local_14 = (int ***)0xbca9;
    func_0x00012276();
    local_10 = (int ***)0x11f2;
    do {
      local_8 = &local_14;
      local_a = &local_12;
      local_c = (undefined2 ***)&local_20;
      local_e = &local_e;
      local_12 = (undefined2 **)0xbcc1;
      func_0x0000dcbd();
      if (*(int *)0x158 != 0) {
        return 0;
      }
    } while (((undefined2 ******)local_e == (undefined2 ******)0x0) &&
            (local_10 = (int ***)0x885, local_20 == (int *)0x0));
    do {
      do {
        local_8 = &local_10;
        local_a = (int ***)&local_c;
        local_c = (undefined2 ***)&local_1e;
        local_e = (undefined2 *****)&local_a;
        local_10 = (int ***)0x885;
        ppppuVar6 = (undefined2 ****)0x885;
        local_12 = (undefined2 **)0xbcf1;
        func_0x0000dcbd();
      } while ((undefined2 ****)local_a != (undefined2 ****)0x0);
    } while ((undefined2 **)local_1e != (undefined2 **)0x0);
    local_16 = (int *)0x1;
    uVar1 = uVar9;
    uVar2 = uVar10;
    if (((((int)local_12 < 2) || (0x77 < (int)local_12)) || ((int)local_14 < 0x12)) ||
       (0x2e < (int)local_14)) break;
    if (((*(char *)0x124 != '\0') && (*(char *)0xb782 == '\0')) && (param_2 < 10000)) {
      *(char *)0xcc6 = *(char *)0xcc6 + '\x01';
      if (2 < *(byte *)0xcc6) {
        *(undefined1 *)0xcc6 = 0;
      }
      local_8 = (int ****)0x885;
      ppppuVar6 = (undefined2 ****)0xad;
      local_a = (int ***)0xbd4d;
      func_0x0000205b();
    }
  }
  if ((int)local_14 < 0xf) {
    if ((int)local_12 < 0x28) {
      local_16 = (int *)0xffff;
      goto LAB_3ab8_15ba;
    }
LAB_3ab8_1316:
    if (local_8 != (int ****)0x0) {
      local_a = (int ***)0xbea4;
      local_8 = ppppuVar6;
      func_0x000297e6();
      local_8 = (undefined2 ****)0x22b2;
      local_a = (int ***)0xbeac;
      func_0x0002996b();
      local_8 = (int ****)0x22b2;
      ppppuVar6 = (undefined2 ****)0x22b2;
      local_a = (int ***)0xbeb4;
      func_0x00029983();
    }
    if (local_8 == (int ****)0x1) {
      uVar9 = param_3[1];
      *param_4 = *param_3;
      param_4[1] = uVar9;
    }
    if (local_8 == (int ****)0x2) {
      local_a = (int ***)0xbed8;
      local_8 = ppppuVar6;
      func_0x000297e6();
      local_8 = (undefined2 ****)0x22b2;
      local_a = (int ***)0xbee0;
      func_0x0002996b();
      local_8 = (int ****)0x22b2;
      ppppuVar6 = (undefined2 ****)0x22b2;
      local_a = (int ***)0xbee8;
      func_0x00029983();
    }
    if ((*(int *)0xa62 == 5) && ((char)local_18 == '\0')) goto LAB_3ab8_15ba;
    local_24 = local_8;
    goto LAB_3ab8_14fa;
  }
  if ((int)local_12 <= *(int *)0xa5c) goto LAB_3ab8_15ba;
  if ((0xe < (int)local_14) && ((int)local_14 < 0x23)) {
    if ((0x84 < (int)local_12) && ((int)local_12 < 0x262)) {
      local_24 = (undefined2 ****)((int)(local_12 + -0x42) / 0x50);
      if ((int)local_8 < 2) {
        local_8 = (int ****)0x1;
        local_46 = *(undefined2 *)((int)local_24 * 4 + 0xcc8);
        local_44 = *(undefined2 *)((int)local_24 * 4 + 0xcca);
      }
      else {
        uVar1 = *(undefined2 *)((int)local_24 * 4 + 0xcc8);
        uVar2 = *(undefined2 *)((int)local_24 * 4 + 0xcca);
      }
    }
    goto LAB_3ab8_10d7;
  }
  ppppuVar5 = ppppuVar6;
  if (((0x21 < (int)local_14) && ((int)local_14 < 0x39)) && ((int)local_8 < 2)) goto LAB_3ab8_10a8;
  if (((((int)local_12 < 0x85) || (0x261 < (int)local_12)) || ((int)local_14 < 0x39)) ||
     (0x177 < (int)local_14)) goto LAB_3ab8_10d7;
  uVar3 = (int)(local_14 + -0x1c) >> 0xf;
  local_10 = (int ***)(((int)(((uint)(local_14 + -0x1c) ^ uVar3) - uVar3) >> 5 ^ uVar3) - uVar3);
  uVar3 = (int)(local_12 + -0x52) >> 0xf;
  local_c = (undefined2 ***)
            (((int)(((uint)(local_12 + -0x52) ^ uVar3) - uVar3) >> 6 ^ uVar3) - uVar3);
  if (local_c == (undefined2 ***)0x6) {
    if ((-1 < (int)local_10) && ((int)local_10 < 5)) {
      if ((*(char *)0x116a == '\x02') && (local_20 != (int *)0x0)) {
        local_8 = (undefined2 ****)0x885;
        local_a = (int ***)0xbe6f;
        func_0x000297e6();
        local_8 = (undefined2 ****)&local_46;
        local_a = (int ***)0x22b2;
        local_c = (undefined2 ***)0xbe78;
        func_0x00029b6d();
        local_8 = (undefined2 ****)0x22b2;
        local_a = (int ***)0xbe7e;
        func_0x00029983();
        local_8 = (undefined2 ****)0x22b2;
        local_a = (int ***)0xbe87;
        func_0x000297e6();
        local_8 = (undefined2 ****)&stack0xfffa;
        local_a = (int ***)0x22b2;
        local_c = (undefined2 ***)0xbe90;
        func_0x00029b6d();
        local_8 = (int ****)0x22b2;
        ppppuVar6 = (undefined2 ****)0x22b2;
        local_a = (int ***)0xbe96;
        func_0x00029983();
      }
      goto LAB_3ab8_1316;
    }
    if (((4 < (int)local_10) && ((int)local_10 < 10)) && ((int)local_8 < 2)) goto LAB_3ab8_10a8;
  }
  if ((local_20 != (int *)0x0) && (*(char *)0x124 != '\0')) goto LAB_3ab8_1316;
  if ((int)local_12 < 0xa5) {
    local_8 = (undefined2 ****)0x885;
    local_a = (int ***)0xbf3c;
    func_0x000297e6();
    local_8 = (undefined2 ****)0x22b2;
    local_a = (int ***)0xbf41;
    func_0x00029af6();
    local_8 = (undefined2 ****)0x22b2;
    ppppuVar6 = (undefined2 ****)0x22b2;
    local_a = (int ***)0xbf49;
    func_0x00029983();
  }
  else {
    local_36[(int)local_c] = (int)local_10;
  }
  local_a = (int ***)0xbf51;
  local_8 = ppppuVar6;
  FUN_28b3_0d8b();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbf5a;
  func_0x00029c2c();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbf62;
  FUN_28b3_0d8b();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbf67;
  FUN_28b3_117c();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbf70;
  func_0x00029c2c();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbf78;
  FUN_28b3_0d8b();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbf7d;
  FUN_28b3_117c();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbf86;
  func_0x00029c2c();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbf8e;
  FUN_28b3_0d8b();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbf93;
  FUN_28b3_117c();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbf9c;
  func_0x00029c2c();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbfa4;
  FUN_28b3_0d8b();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbfad;
  func_0x00029c2c();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbfb2;
  FUN_28b3_117c();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbfba;
  FUN_28b3_0d8b();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbfbf;
  FUN_28b3_117c();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbfc7;
  func_0x00029b6d();
  local_8 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbfcf;
  func_0x0002996b();
  local_8 = (int ****)0x22b2;
  ppppuVar6 = (undefined2 ****)0x22b2;
  local_a = (int ***)0xbfd7;
  FUN_28b3_0ee9();
  uVar1 = local_1c;
  uVar2 = local_1a;
  if ((int)local_8 < 2) {
    local_8 = (undefined2 ****)0x22b2;
    local_a = (int ***)0xbfea;
    func_0x000297e6();
    local_8 = (int ****)0x22b2;
    ppppuVar6 = (undefined2 ****)0x22b2;
    local_a = (int ***)0xbff2;
    func_0x00029983();
    uVar1 = uVar9;
    uVar2 = uVar10;
  }
  goto LAB_3ab8_10d7;
LAB_3ab8_14fa:
  if ((int)local_24 < 1) {
    if (((int)local_14 < 0xf) && ((char)local_18 != '\0')) {
      if ((0x114 < (int)local_12) && ((int)local_12 < 0x13c)) {
        local_a = (int ***)0xc0b2;
        local_8 = ppppuVar6;
        func_0x000297e6();
        local_8 = (undefined2 ****)0x22b2;
        local_a = (int ***)0xc0b7;
        func_0x00029af6();
        local_8 = (undefined2 ****)0x22b2;
        ppppuVar6 = (undefined2 ****)0x22b2;
        local_a = (int ***)0xc0bf;
        func_0x00029983();
        uVar9 = *(undefined2 *)0x980a;
        *param_4 = *(undefined2 *)0x9808;
        param_4[1] = uVar9;
      }
      if ((0x13c < (int)local_12) && ((int)local_12 < 0x164)) {
        uVar9 = *(undefined2 *)0x980a;
        *param_3 = *(undefined2 *)0x9808;
        param_3[1] = uVar9;
      }
      if ((0x164 < (int)local_12) && ((int)local_12 < 0x18c)) {
        uVar9 = *(undefined2 *)0x980a;
        *param_3 = *(undefined2 *)0x9808;
        param_3[1] = uVar9;
        local_a = (int ***)0xc110;
        local_8 = ppppuVar6;
        func_0x000297e6();
        local_8 = (undefined2 ****)0x22b2;
        local_a = (int ***)0xc115;
        func_0x00029af6();
        local_8 = (undefined2 ****)0x22b2;
        ppppuVar6 = (undefined2 ****)0x22b2;
        local_a = (int ***)0xc11d;
        func_0x00029983();
      }
      if ((0x18c < (int)local_12) && ((int)local_12 < 0x1b4)) {
        uVar9 = *(undefined2 *)0x980a;
        *param_4 = *(undefined2 *)0x9808;
        param_4[1] = uVar9;
      }
    }
LAB_3ab8_15ba:
    local_8 = (undefined2 ****)0x0;
    local_c = (undefined2 ***)0xc142;
    local_a = (int ***)ppppuVar6;
    func_0x0000daa6();
    local_8 = (undefined2 ****)0x885;
    pppuVar7 = (undefined2 ***)0x885;
    local_a = (int ***)0xc148;
    func_0x0000c3ca();
    if (*(int *)0xc08 == 0) {
      local_8 = (undefined2 ****)0x885;
      pppuVar7 = (undefined2 ***)0x1bb4;
      local_a = (int ***)0xc154;
      func_0x0001bba4();
    }
    local_22 = (undefined2 ***)0x2;
    do {
      local_8 = (undefined2 ****)local_22;
      local_a = (int ***)0x11;
      local_e = (undefined2 *****)0xc165;
      local_c = pppuVar7;
      FUN_1000_0599();
      local_8 = (undefined2 ****)0xdef;
      pppuVar7 = (undefined2 ***)0xdef;
      local_a = (int ***)0xc16c;
      func_0x00010526();
      local_22 = (undefined2 ***)((int)local_22 + 1);
    } while ((int)local_22 < 0x19);
    *(undefined2 *)0xbc0 = 1;
    local_8 = (undefined2 ****)0x0;
    local_a = (int ***)0xdef;
    local_c = (undefined2 ***)0xc183;
    func_0x0001470b();
    return local_16;
  }
  local_26 = (undefined2 ****)0x5;
  for (local_22 = (undefined2 ****)0x0; (int)local_22 < 6;
      local_22 = (undefined2 ***)((int)local_22 + 1)) {
    local_a = (int ***)0xc01f;
    local_8 = ppppuVar6;
    func_0x000297e6();
    uVar8 = ((uint)local_24 & 0x3fff) == 0;
    local_8 = (undefined2 ****)0x22b2;
    local_a = (int ***)0xc02e;
    func_0x000297e6();
    local_8 = (undefined2 ****)0x22b2;
    ppppuVar6 = (undefined2 ****)0x22b2;
    local_a = (int ***)0xc033;
    FUN_28b3_1181();
    if ((bool)uVar8) {
      local_26 = local_22;
      break;
    }
  }
  for (local_22 = local_26; 0 < (int)local_22; local_22 = (undefined2 ****)((int)local_22 + -1)) {
    iVar4 = (int)local_22 * 4;
    uVar9 = *(undefined2 *)(iVar4 + 0xcc6);
    *(undefined2 *)(iVar4 + 0xcc8) = *(undefined2 *)(iVar4 + 0xcc4);
    *(undefined2 *)(iVar4 + 0xcca) = uVar9;
  }
  uVar9 = auStack_42[(int)local_24 * 2 + 1];
  *(undefined2 *)0xcc8 = auStack_42[(int)local_24 * 2];
  *(undefined2 *)0xcca = uVar9;
  local_24 = (int ****)((int)local_24 + -1);
  goto LAB_3ab8_14fa;
}



/* 3ab8:160d  FUN_3ab8_160d  583 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003c33d) */
/* WARNING: Removing unreachable block (ram,0x0003c2ef) */
/* WARNING: Removing unreachable block (ram,0x0003c2ff) */
/* WARNING: Removing unreachable block (ram,0x0003c305) */
/* WARNING: Removing unreachable block (ram,0x0003c2fc) */
/* WARNING: Removing unreachable block (ram,0x0003c3b7) */
/* WARNING: Removing unreachable block (ram,0x0003c3bd) */
/* WARNING: Removing unreachable block (ram,0x0003c3c0) */
/* WARNING: Removing unreachable block (ram,0x0003c3c6) */
/* WARNING: Removing unreachable block (ram,0x0003c3c9) */
/* WARNING: Removing unreachable block (ram,0x0003c35b) */

undefined2 __cdecl16far
FUN_3ab8_160d(int param_1,undefined2 param_2,undefined2 param_3,undefined2 *param_4,
             undefined2 *param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined2 *puVar8;
  undefined2 local_22 [4];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  *(undefined2 *)0xc18 = 0;
  *(undefined2 *)0xc1e = 0;
  func_0x000297e6();
  func_0x00029d78();
  local_10 = 0x22b2;
  local_12 = 0xc1b9;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0xc1c1;
  func_0x000297e6();
  local_10 = 0x22b2;
  local_12 = 0xc1c6;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0xc1d0;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uStack_1a = 0xc1d5;
  iVar4 = func_0x0001b204();
  if (iVar4 != 0) {
    uStack_c = 0xc1eb;
    puVar8 = (undefined2 *)func_0x00000398();
    puVar5 = (undefined2 *)puVar8;
    puVar6 = local_22;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    uStack_c = 0xbf48;
    uStack_e = 0;
    local_10 = 0xc20b;
    FUN_1885_0344();
    *(undefined1 *)0xbf98 = 0;
    uStack_c = 0xc221;
    iVar4 = func_0x00024ce4();
    iVar4 = iVar4 + -1;
    if (-1 < iVar4) {
      for (; (-1 < iVar4 && (*(char *)(iVar4 + -0x40b8) == ' ')); iVar4 = iVar4 + -1) {
        *(undefined1 *)(iVar4 + -0x40b8) = 0;
      }
      if (-1 < iVar4) {
        if ((0 < iVar4) &&
           (((*(char *)(iVar4 + -0x40b8) == 'm' || (*(char *)(iVar4 + -0x40b8) == -0x73)) &&
            (param_1 < 10000)))) {
          uStack_c = 0x22b2;
          uStack_e = 0xc2c6;
          func_0x0002aa38();
        }
        uStack_c = 0xc319;
        func_0x000228e3();
        func_0x00029834();
        func_0x00029983();
        uVar7 = param_1 == 10000;
        if ((param_1 < 10000) && (uVar7 = false, *(char *)0xcc6 == '\0')) {
          uVar7 = false;
        }
        uVar3 = param_4[1];
        *param_5 = *param_4;
        param_5[1] = uVar3;
        *(undefined2 *)0xca4 = 0;
        FUN_1000_0620();
        func_0x0000abfa();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar7) {
          return 99;
        }
        return 0;
      }
    }
  }
  return 0xffff;
}



/* 3ab8:1854  FUN_3ab8_1854  62 bytes, 2 callers */

void FUN_3ab8_1854(undefined2 param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  pcVar1 = (code *)swi(0x3f);
  (*pcVar1)();
  func_0x00027a10();
  FUN_21f2_5948();
  if (param_2 == 0) {
    FUN_1000_02b5();
  }
  iVar2 = func_0x00026ad8();
  FUN_1000_0599();
  func_0x00010526();
  FUN_1000_0599();
  iVar3 = FUN_21f2_5948();
  if (iVar3 != 0) {
    FUN_13bf_0a03();
  }
  pcVar1 = (code *)swi(0x3f);
  (*pcVar1)();
  if (iVar2 != 0) {
    FUN_13bf_0a03();
    *(undefined2 *)0xc22 = 1;
  }
  return;
}



/* 3ab8:199a  FUN_3ab8_199a  204 bytes, 2 callers */

void __cdecl16far FUN_3ab8_199a(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 ***local_8;
  undefined2 uStack_6;
  undefined2 ***local_4;
  
  local_4 = (undefined2 ***)0x3ab8;
  uStack_6 = 0xc525;
  FUN_21f2_0ebc();
  local_4 = (undefined2 ***)0x2e;
  uStack_6 = 0x3338;
  local_8 = (undefined2 ***)0x22b2;
  puVar1 = (undefined1 *)func_0x00025a9a();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  local_4 = (undefined2 ***)0x3e;
  uStack_6 = 0x3338;
  local_8 = (undefined2 ***)0x22b2;
  puVar1 = (undefined1 *)func_0x00025a9a();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  local_4 = (undefined2 ***)0x40;
  uStack_6 = 0x3338;
  local_8 = (undefined2 ***)0x22b2;
  puVar1 = (undefined1 *)func_0x00025a9a();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  local_4 = (undefined2 ***)0x3338;
  uStack_6 = 0x22b2;
  local_8 = (undefined2 ***)0xc57f;
  func_0x00024ce4();
  local_8 = &local_8;
  uStack_6 = 0x332d;
  local_4 = local_8;
  func_0x000253ce(0x22b2);
  iVar2 = ((int)local_8 / 10) * 10;
  *(undefined1 *)local_4 = 0;
  if (param_1 < 1) {
    local_8 = (undefined2 ***)(iVar2 + -10);
  }
  else {
    local_8 = (undefined2 ***)(iVar2 + 10);
  }
  local_4 = local_8;
  uStack_6 = 0x3338;
  local_8 = (undefined2 ***)0x3330;
  FUN_21f2_3454(0x3338);
  return;
}



/* 3ab8:1a66  FUN_3ab8_1a66  132 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_1a66(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  FUN_21f2_0ebc();
  FUN_3ab8_199a(1);
  *(undefined1 *)0xc168 = 1;
  *(undefined2 *)0x16c = 0;
  FUN_12c1_03d3(0x22b2,0x3338,0x40,0x17,0xe);
  FUN_1000_0599(0x11f2,0x40,0x17);
  func_0x00010526(0xdef);
  FUN_1000_0599(0xdef,1,1);
  uVar3 = 0xdef;
  uVar2 = 0xc64b;
  func_0x00002cc6();
  if (3 < *(byte *)0xb782) {
    uVar3 = 1;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
  }
  *(undefined2 *)0x16c = uVar3;
  *(undefined1 *)0xc168 = 0;
  return uVar2;
}



/* 3ab8:1aee  FUN_3ab8_1aee  200 bytes, 0 callers */

void __cdecl16far FUN_3ab8_1aee(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  iVar1 = FUN_3ab8_1a66();
  if (0 < iVar1) {
    uVar2 = 0x22b2;
    iVar1 = FUN_21f2_34ec(0x3356,0x180);
    if (iVar1 == -1) {
      iVar1 = 0x335e;
      uVar2 = 0x11f2;
      FUN_13bf_0a03(0x335e);
    }
    FUN_21f2_26c2(uVar2,iVar1);
    uVar2 = 0x22b2;
    iVar1 = func_0x00027724(0x22b2,0x336a,2,0xd12);
    if (iVar1 != 0) {
      uVar2 = 0x11f2;
      FUN_13bf_0a03(0x3372);
    }
    func_0x0000daa6(uVar2,1);
    func_0x00012835(0x885,0,0xa800,0x8000,1,0);
    func_0x00012835(0x11f2,0,0xa000,0x3ff0,0,0);
    func_0x000276be(0x11f2,*(undefined2 *)0xd12);
    *(undefined2 *)0xd12 = 0;
    FUN_3ab8_1854(0x22b2,0,0x3390,0x338c,0x3338,0x3384,0);
  }
  return;
}



/* 3ab8:1bb6  FUN_3ab8_1bb6  756 bytes, 0 callers */

void __cdecl16far FUN_3ab8_1bb6(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined1 local_c6 [44];
  int local_9a;
  undefined1 local_98 [50];
  undefined1 local_66 [14];
  undefined1 local_58 [50];
  undefined1 local_26 [14];
  int local_18;
  undefined2 local_16;
  uint local_14;
  int local_12;
  uint local_10;
  int local_e;
  uint local_c;
  uint local_a;
  undefined1 *local_8;
  undefined1 *local_6;
  uint *local_4;
  
  local_4 = (uint *)0x3ab8;
  local_6 = (undefined1 *)0xc741;
  FUN_21f2_0ebc();
  local_9a = 0;
  local_8 = (undefined1 *)0x0;
  local_a = 0;
  local_4 = (uint *)0x22b2;
  local_6 = (undefined1 *)0xc754;
  iVar2 = FUN_3ab8_1a66();
  if (iVar2 < 1) {
    return;
  }
  local_4 = (uint *)0x0;
  local_6 = (undefined1 *)0x22b2;
  local_8 = (undefined1 *)0xc763;
  func_0x0000daa6();
  local_4 = (uint *)0x40;
  local_6 = (undefined1 *)0x3338;
  local_8 = (undefined1 *)0x885;
  local_a = 0xc771;
  puVar3 = (undefined1 *)func_0x00025a9a();
  if (puVar3 == (undefined1 *)0x0) {
    local_4 = (uint *)0x3e;
    local_6 = (undefined1 *)0x3338;
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xc79e;
    iVar2 = func_0x00025a9a();
    if (iVar2 != 0) {
      local_4 = &local_a;
      local_6 = (undefined1 *)0x3392;
      local_8 = (undefined1 *)(iVar2 + 1);
      local_a = 0x22b2;
      local_c = 0xc7b6;
      func_0x000253ce();
      *(undefined1 *)local_4 = 0;
      local_9a = 1;
    }
  }
  else {
    *puVar3 = 0;
    local_18 = 0;
    if (puVar3[1] == '2') {
      local_18 = 2;
    }
  }
  local_4 = (uint *)0x3338;
  local_6 = local_58;
  local_8 = (undefined1 *)0x22b2;
  uVar4 = 0x22b2;
  local_a = 0xc7d2;
  FUN_21f2_3454();
  do {
    local_4 = (uint *)0x3338;
    local_6 = (undefined1 *)0x3396;
    local_8 = local_98;
    local_c = 0xc7e6;
    local_a = uVar4;
    FUN_21f2_3454();
    local_4 = (uint *)local_c6;
    local_6 = (undefined1 *)0x0;
    local_8 = local_98;
    local_a = 0x22b2;
    local_c = 0xc7fb;
    iVar2 = func_0x000276d7();
    if (iVar2 != 0) {
      if (local_9a == 0) {
        return;
      }
      local_4 = (uint *)local_58;
      local_6 = (undefined1 *)0x3338;
      local_8 = (undefined1 *)0x22b2;
      local_a = 0xc819;
      FUN_21f2_3454();
    }
    local_4 = (uint *)0x0;
    local_6 = (undefined1 *)0x3338;
    local_8 = (undefined1 *)0x339d;
    local_a = 0x33a1;
    local_c = 0x33a5;
    local_e = local_9a;
    local_10 = 0x22b2;
    local_12 = -0x37ca;
    FUN_3ab8_1854();
    local_4 = (uint *)0xd12;
    local_6 = (undefined1 *)0x2;
    local_8 = (undefined1 *)0x33a7;
    local_a = 0x22b2;
    uVar5 = 0x22b2;
    local_c = 0xc84a;
    iVar2 = func_0x00027724();
    if (iVar2 != 0) {
      local_4 = (uint *)0x33af;
      local_6 = (undefined1 *)0x22b2;
      uVar5 = 0x11f2;
      local_8 = (undefined1 *)0xc85a;
      FUN_13bf_0a03();
    }
    if (local_9a != 0) {
      local_4 = (uint *)0x0;
      local_8 = (undefined1 *)0xc86a;
      local_6 = (undefined1 *)uVar5;
      func_0x0000daa6();
      local_4 = (uint *)*(undefined2 *)0xcb4;
      local_6 = (undefined1 *)(1 - *(int *)0xcb2);
      local_8 = (undefined1 *)0x0;
      local_a = 3;
      local_c = 0x885;
      uVar5 = 0xdef;
      local_e = 0xc883;
      func_0x0000f2cb();
    }
    local_4 = (uint *)0x0;
    local_6 = (undefined1 *)0x1;
    local_8 = (undefined1 *)0x8000;
    local_a = 0xa800;
    local_c = 0;
    local_10 = 0xc89d;
    local_e = uVar5;
    func_0x000129e6();
    local_4 = (uint *)0x0;
    local_6 = (undefined1 *)0x0;
    local_8 = (undefined1 *)0x3ff0;
    local_a = 0xa000;
    local_c = 0;
    local_e = 0x11f2;
    local_10 = 0xc8b6;
    func_0x000129e6();
    local_4 = (uint *)*(int *)0xd12;
    local_6 = (undefined1 *)0x11f2;
    local_8 = (undefined1 *)0xc8c2;
    func_0x000276be();
    *(undefined2 *)0xd12 = 0;
    if (local_4 == (uint *)0x0) {
      return;
    }
    local_16 = 1;
    if (local_9a == 0) {
      local_4 = (uint *)0x22b2;
      local_6 = (undefined1 *)0xc98a;
      iVar2 = FUN_1000_0632();
      if (iVar2 == 0x1b) {
        return;
      }
      local_4 = (uint *)0x0;
      local_6 = (undefined1 *)0xdef;
      local_8 = (undefined1 *)0xc99a;
      func_0x0000daa6();
      local_4 = (uint *)0x3338;
      local_6 = (undefined1 *)0x33c0;
      local_8 = (undefined1 *)0x7ab2;
      local_a = 0x885;
      local_c = 0xc9ac;
      func_0x0002327e();
      local_4 = (uint *)0x33d1;
      local_6 = (undefined1 *)0x7ab2;
      local_8 = (undefined1 *)0x22b2;
      local_a = 0xc9bc;
      func_0x0002327e();
      local_4 = (uint *)0x7ab2;
      local_6 = (undefined1 *)0x22b2;
      local_8 = (undefined1 *)0xc9c7;
      FUN_21f2_1878();
      local_4 = (uint *)local_66;
      local_6 = local_26;
      local_8 = (undefined1 *)0x5;
      local_a = 0x22b2;
      uVar4 = 0x22b2;
      local_c = 0xc9d9;
      func_0x00024f9a();
      if (local_18 != 0) {
        if (local_6 == (undefined1 *)0x0) {
          local_4 = (uint *)0x33d8;
        }
        else {
          local_4 = (uint *)0x33d6;
        }
        local_6 = (undefined1 *)0x7ab2;
        local_8 = (undefined1 *)0x22b2;
        local_a = 0xca04;
        func_0x0002327e();
        local_4 = (uint *)0x7ab2;
        local_6 = (undefined1 *)0x22b2;
        uVar4 = 0x22b2;
        local_8 = (undefined1 *)0xca0f;
        FUN_21f2_1878();
      }
    }
    else {
      local_4 = &local_10;
      local_6 = (undefined1 *)0x22b2;
      local_8 = (undefined1 *)0xc8ea;
      func_0x000257c0();
      local_4 = (uint *)0x0;
      local_6 = (undefined1 *)0x22b2;
      local_8 = (undefined1 *)0xc8f3;
      func_0x0000daa6();
      iVar2 = *(int *)0xcb2;
      *(int *)0xcb2 = 1 - iVar2;
      local_4 = (uint *)((1 - iVar2) * 0x10 + 1);
      *(int *)0xcb4 = (int)local_4;
      local_6 = (undefined1 *)*(undefined2 *)0xcb2;
      local_8 = (undefined1 *)0x0;
      local_a = 3;
      local_c = 0x885;
      uVar4 = 0xdef;
      local_e = -0x36e9;
      func_0x0000f2cb();
      do {
        while( true ) {
          local_6 = (undefined1 *)0xc91f;
          local_4 = (uint *)uVar4;
          local_c = FUN_1000_0632();
          local_c = local_c & 0xff;
          do {
            local_4 = (uint *)0xdef;
            uVar4 = 0xdef;
            local_6 = (undefined1 *)0xc929;
            iVar2 = FUN_1000_0632();
          } while (iVar2 != 0);
          if (local_c == 0x1b) {
            do {
              local_4 = (uint *)0xdef;
              local_6 = (undefined1 *)0xca1f;
              local_4 = (uint *)FUN_1000_0632();
            } while (local_4 != (uint *)0x0);
            pcVar1 = (code *)swi(0x3f);
            (*pcVar1)();
            *(undefined2 *)0x158 = 1;
            return;
          }
          if (local_c == 0x2d) {
            local_16 = 0xffff;
            goto LAB_3ab8_1e90;
          }
          if ((int)local_8 < 0) break;
          local_4 = &local_14;
          local_6 = (undefined1 *)0xdef;
          uVar4 = 0x22b2;
          local_8 = (undefined1 *)0xc952;
          func_0x000257c0();
          iVar2 = (local_12 - local_e) - (uint)(local_14 < local_10);
          if (((int)local_8 < iVar2) ||
             ((((int)local_8 <= iVar2 && (local_a <= local_14 - local_10)) || (local_c == 0x20))))
          goto LAB_3ab8_1e90;
        }
      } while (local_c != 0x20);
    }
LAB_3ab8_1e90:
    local_4 = (uint *)local_16;
    local_8 = (undefined1 *)0xca17;
    local_6 = (undefined1 *)uVar4;
    FUN_3ab8_199a();
  } while( true );
}



/* 3ab8:1eb4  FUN_3ab8_1eb4  62 bytes, 0 callers */

void FUN_3ab8_1eb4(undefined2 param_1,char *param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  pcVar2 = (code *)swi(0x3f);
  (*pcVar2)();
  func_0x00027a10();
  if (*(int *)0xc11a == 0) {
    FUN_3ab8_0008();
    func_0x0002779c();
  }
  else {
    FUN_21f2_5948();
  }
  func_0x00002c55();
  func_0x0000daa6();
  pcVar2 = (code *)swi(0x3f);
  (*pcVar2)();
  FUN_1000_060e();
  iVar3 = FUN_21f2_2f8c();
  if (iVar3 == 0) {
    FUN_1000_0599();
    func_0x00012276();
  }
  if (*(int *)0xc62 != 0) {
    func_0x00004488();
  }
  if (*(byte *)0x120 < 10) {
    if (((*(byte *)0x120 & 1) == 0) || (*param_2 != '\0')) {
      func_0x0000f2cb();
      func_0x0000f2d3();
      func_0x0000f2cb();
      func_0x0000f2d3();
      FUN_1000_0606();
    }
    FUN_10ad_0569();
  }
  FUN_1000_0599();
  func_0x00026ab2();
  uVar1 = *(undefined2 *)0xa60;
  if (*(byte *)0x120 < 10) {
    func_0x00011063();
    FUN_3ab8_2fe2();
  }
  if (3 < *(byte *)0xb782) {
    *(undefined2 *)0xa60 = uVar1;
  }
  FUN_1000_0606();
  if (*(byte *)0x120 < 10) {
    func_0x0000f2cb();
    func_0x0000f2d3();
    func_0x0000f2cb();
    func_0x0000f2d3();
  }
  func_0x00002c1a();
  pcVar2 = (code *)swi(0x3f);
  (*pcVar2)();
  FUN_1000_0620();
  func_0x0000a799();
  if (*(int *)0xc11a != 0) {
    iVar3 = FUN_21f2_5948();
    if (iVar3 != 0) {
      FUN_13bf_0a03();
    }
    pcVar2 = (code *)swi(0x3f);
    (*pcVar2)();
    *(undefined2 *)0xc728 = 0xffff;
    *(undefined2 *)0xbee2 = 0xffff;
    func_0x0000a7c5();
    *(undefined2 *)0xbc0 = 1;
    func_0x0001470b();
  }
  if (*(byte *)0xb782 < 4) {
    *(undefined2 *)0x158 = 1;
  }
  else {
    *(undefined2 *)0x158 = 0x4e21;
  }
  return;
}



/* 3ab8:2129  FUN_3ab8_2129  49 bytes, 0 callers */

void FUN_3ab8_2129(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  code *pcVar8;
  undefined2 unaff_DS;
  undefined1 local_44 [56];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  uStack_6 = 0xccb4;
  FUN_21f2_0ebc();
  uStack_4 = 0xb2fe;
  uStack_6 = 0x90;
  puStack_8 = local_44;
  uStack_a = 0x22b2;
  uStack_c = 0xccc5;
  func_0x0001263c();
  uStack_4 = 0x90;
  uStack_6 = 0xbefe;
  puStack_8 = local_44;
  uStack_a = 1;
  pcVar8 = (code *)swi(0x3f);
  (*pcVar8)();
  *(undefined2 *)0xc11a = 0;
  if ((*(int *)0x4e != 0) && (*(int *)0xbed2 != 0)) {
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    param_2 = *(undefined2 *)0xc726;
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
  }
  uStack_4 = param_3;
  uStack_6 = param_2;
  puStack_8 = (undefined1 *)0x11f2;
  uStack_a = 0xcd18;
  FUN_3ab8_1eb4();
  *(undefined2 *)0x13e = 0;
  *(undefined2 *)0x13c = 0;
  *(undefined2 *)0x142 = 0;
  *(undefined2 *)0x140 = 0;
  *(undefined2 *)0x146 = 0;
  *(undefined2 *)0x144 = 0;
  *(undefined2 *)0x166 = 30000;
  if (*(int *)0x4e != 0) {
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
  }
  pcVar8 = (code *)swi(0x3f);
  (*pcVar8)();
  puStack_8 = (undefined1 *)*(undefined2 *)0xc60;
  uStack_6 = *(undefined2 *)0xc50;
  uStack_4 = *(undefined2 *)0xc52;
  uVar1 = *(undefined2 *)0xc54;
  uVar5 = *(undefined2 *)0xc56;
  uVar2 = *(undefined2 *)0xc58;
  uVar6 = *(undefined2 *)0xc5a;
  iVar3 = *(int *)0xc62;
  uVar4 = *(undefined2 *)0xc5c;
  uVar7 = *(undefined2 *)0xc5e;
  pcVar8 = (code *)swi(0x3f);
  (*pcVar8)();
  *(undefined2 *)0xc60 = puStack_8;
  *(undefined2 *)0xc50 = uStack_6;
  *(undefined2 *)0xc52 = uStack_4;
  *(undefined2 *)0xc54 = uVar1;
  *(undefined2 *)0xc56 = uVar5;
  *(undefined2 *)0xc58 = uVar2;
  *(undefined2 *)0xc5a = uVar6;
  *(int *)0xc62 = iVar3;
  *(undefined2 *)0xc5c = uVar4;
  *(undefined2 *)0xc5e = uVar7;
  if (iVar3 != 0) {
    func_0x00004624();
  }
  *(undefined1 *)0xd14 = 2;
  if (3 < *(byte *)0xb782) {
    *(undefined2 *)0x158 = 0x4e21;
  }
  return;
}



/* 3ab8:226f  FUN_3ab8_226f  495 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_226f(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
             int param_7,undefined2 param_8,int param_9,int param_10,int param_11)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = 0x22b2;
  FUN_21f2_0ebc();
  if (param_1 < 10) {
    if (*param_2 - param_7 < 2) {
      *param_4 = param_9;
      *param_6 = *param_6 + param_11;
    }
    if (*param_3 - param_7 < 2) {
      *param_5 = param_10;
    }
    if (*(int *)0x1b3e + -1 <= *param_2 + param_7) {
      *param_4 = -param_9;
      *param_6 = *param_6 + param_11;
    }
    if (*(int *)0x1b40 + -1 <= *param_3 + param_7) {
      *param_5 = -param_10;
    }
    if (7 < *param_6) {
      *param_6 = *param_6 + -7;
    }
  }
  if (-1 < *param_3 - param_7) {
    FUN_28b3_0d8b(0x22b2,0,0,*(undefined2 *)0x985c,*(undefined2 *)0x985e,*(undefined2 *)0x9860,
                  *(undefined2 *)0x9862,*(undefined2 *)0x9810,*(undefined2 *)0x9812,
                  *(undefined2 *)0x9814,*(undefined2 *)0x9816,*(undefined2 *)0x9810,
                  *(undefined2 *)0x9812,*(undefined2 *)0x9814,*(undefined2 *)0x9816,0,0);
    func_0x000299d1(0x22b2);
    FUN_28b3_0d8b(0x22b2);
    func_0x000299d1(0x22b2);
    FUN_28b3_0d8b(0x22b2);
    func_0x000299d1(0x22b2);
    uVar1 = 0xdef;
    func_0x0000fd9f(0x22b2);
  }
  *param_2 = *param_2 + *param_4;
  *param_3 = *param_3 + *param_5;
  if (param_1 != 0) {
    if (param_1 < 10) {
      *param_2 = *param_2 + (2 - param_1) * param_7 * 4;
      *param_3 = param_7 * param_1 * -4;
    }
    else {
      *param_2 = param_9;
      *param_3 = param_10;
    }
  }
  if (-1 < *param_3 - param_7) {
    FUN_28b3_0d8b(uVar1,*param_6,0,*(undefined2 *)0x985c,*(undefined2 *)0x985e,*(undefined2 *)0x9860
                  ,*(undefined2 *)0x9862,*(undefined2 *)0x9810,*(undefined2 *)0x9812,
                  *(undefined2 *)0x9814,*(undefined2 *)0x9816,*(undefined2 *)0x9810,
                  *(undefined2 *)0x9812,*(undefined2 *)0x9814,*(undefined2 *)0x9816,0,0);
    func_0x000299d1(0x22b2);
    FUN_28b3_0d8b(0x22b2);
    func_0x000299d1(0x22b2);
    FUN_28b3_0d8b(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x0000fd9f(0x22b2);
  }
  return;
}



/* 3ab8:245e  FUN_3ab8_245e  82 bytes, 0 callers */

undefined2 FUN_3ab8_245e(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int iStack_cc;
  undefined1 local_ca [100];
  undefined1 local_66 [32];
  undefined1 local_46 [56];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  int iStack_4;
  
  iStack_4 = 0x3ab8;
  uVar2 = 0x22b2;
  puStack_6 = (undefined1 *)0xcfe9;
  FUN_21f2_0ebc();
  do {
    iStack_4 = 0xd;
    puStack_6 = (undefined1 *)0x33f6;
    puStack_8 = (undefined1 *)0xd04;
    uStack_c = 0xcffa;
    uStack_a = uVar2;
    func_0x00024d00();
    iStack_4 = 0x20;
    puStack_6 = (undefined1 *)0xbefe;
    puStack_8 = local_66;
    uStack_a = 0x22b2;
    uStack_c = 0xd00e;
    func_0x00024d00();
    iStack_4 = 0x20;
    puStack_6 = (undefined1 *)0xbf1e;
    puStack_8 = local_46;
    uStack_a = 0x22b2;
    uStack_c = 0xd022;
    func_0x00024d00();
    iStack_4 = 0x902;
    puStack_6 = local_ca;
    pcVar1 = (code *)swi(0x3f);
    iStack_cc = (*pcVar1)();
    iStack_4 = 0xbefe;
    puStack_6 = (undefined1 *)0x22b2;
    puStack_8 = (undefined1 *)0xd04a;
    func_0x00024d00();
    iStack_4 = 0xbf1e;
    puStack_6 = (undefined1 *)0x22b2;
    puStack_8 = (undefined1 *)0xd05e;
    func_0x00024d00();
    *(undefined2 *)0xbc0 = 1;
    if (*(int *)0x158 != 0) goto LAB_3ab8_24ee;
    if (iStack_cc == -1) {
      return 0xffff;
    }
    uVar2 = 0x11f2;
    FUN_10ad_18a4();
    if (iStack_cc != 0) goto LAB_3ab8_25cd;
    func_0x0000c340();
    iStack_4 = 0xd09e;
    func_0x00012276();
    func_0x00010526();
    iStack_4 = 0xdef;
    puStack_6 = (undefined1 *)0xd0b2;
    FUN_21f2_2d26();
    if ((*(byte *)0x129 < 10) || (*(byte *)0xb782 < 4)) {
      func_0x0000c354();
      iStack_4 = *(int *)0xa5a + 1;
      puStack_6 = (undefined1 *)0x0;
      puStack_8 = (undefined1 *)0x885;
      uStack_a = 0xd0dc;
      func_0x0000a76b();
      func_0x0000a799();
    }
    FUN_1000_060e();
    iStack_4 = 0x15;
    puStack_6 = local_ca;
    puStack_8 = (undefined1 *)0xdef;
    uStack_a = 0xd0ff;
    iStack_cc = FUN_12c1_03d3();
    FUN_1000_0620();
    func_0x00002cc6();
    func_0x0000abfa();
    func_0x0000ac64();
    uVar2 = 0x885;
    func_0x0000a799();
    *(undefined2 *)0xbc0 = 1;
  } while (iStack_cc == -1);
  if (*(int *)0x158 == 0) {
    iStack_4 = 0;
    puStack_6 = (undefined1 *)0x0;
    puStack_8 = local_ca;
    uStack_a = 0x33f9;
    uStack_c = 0x885;
    uStack_e = 0xd14a;
    FUN_3ab8_2129();
LAB_3ab8_25cd:
    if (iStack_cc == 2) {
      iStack_4 = 0;
      puStack_6 = (undefined1 *)0x0;
      uStack_a = 0xd15e;
      puStack_8 = (undefined1 *)uVar2;
      FUN_3ab8_1eb4();
    }
    uVar2 = 0;
  }
  else {
LAB_3ab8_24ee:
    uVar2 = 0xfff5;
  }
  return uVar2;
}



/* 3ab8:25e4  FUN_3ab8_25e4  2009 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003d692) */
/* WARNING: Removing unreachable block (ram,0x0003d6e8) */
/* WARNING: Removing unreachable block (ram,0x0003d73e) */

undefined2 __cdecl16far FUN_3ab8_25e4(void)

{
  uint *puVar1;
  uint uVar2;
  undefined1 extraout_AH;
  int iVar3;
  undefined1 extraout_AH_00;
  uint uVar4;
  undefined2 ******ppppppuVar5;
  undefined2 *******pppppppuVar6;
  undefined2 *******pppppppuVar7;
  undefined2 uVar8;
  undefined2 *****pppppuVar9;
  undefined2 unaff_DS;
  bool bVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_100 [40];
  undefined4 local_d8;
  undefined2 ****local_d4;
  undefined2 *****local_d2;
  undefined2 local_d0;
  undefined2 *****local_ce;
  undefined4 local_cc;
  undefined2 ****local_c8;
  undefined2 *****local_c6;
  undefined2 ****local_c4;
  undefined2 *****local_c2;
  undefined4 local_c0;
  undefined2 ****local_bc;
  undefined2 ****local_ba;
  int local_b8;
  uint local_b6;
  int local_b4;
  char local_b2 [82];
  undefined2 *****local_60;
  undefined2 ***local_5e;
  undefined2 ****local_5c;
  int local_5a;
  undefined2 *****local_58;
  int local_56;
  undefined2 ****local_54;
  undefined2 ***local_52;
  undefined2 ***local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 ****local_4a;
  int local_48;
  undefined2 ****local_46;
  undefined2 ****local_44;
  undefined2 *****local_42;
  undefined2 ****local_40;
  int local_3e;
  undefined2 ******local_3c;
  undefined2 ******local_3a;
  undefined2 ******local_38;
  undefined2 ******local_36;
  undefined2 *****local_34;
  undefined2 *****local_32;
  undefined2 *****local_30;
  undefined2 *****local_2e;
  undefined2 ****local_2c;
  undefined2 ******local_2a;
  undefined2 ******local_28;
  undefined2 ******local_26;
  undefined2 ******local_24;
  undefined2 *****local_22;
  undefined2 ******local_20;
  undefined2 ******local_1e;
  undefined2 *****local_1c;
  undefined2 ******local_1a;
  undefined2 ******local_18;
  undefined2 *****local_16;
  undefined2 *****local_14;
  undefined2 *****local_12;
  undefined2 ******local_10;
  undefined2 ******local_e;
  undefined2 ******local_c;
  undefined2 ******local_a;
  undefined2 ******local_8;
  
  FUN_21f2_0ebc();
  local_2c = (undefined2 *****)0x0;
  local_2e = (undefined2 ******)0x0;
  local_1e = (undefined2 *******)0xc;
  local_54 = (undefined2 ****)0x2;
  local_d4 = (undefined2 *****)0x2;
  local_52 = (undefined2 ****)0xfffe;
  local_60 = (undefined2 ******)0xffff;
  local_24 = (undefined2 *******)0xe;
  local_c8 = (undefined2 *****)0x1;
  local_50 = (undefined2 ****)0x1;
  local_5e = (undefined2 ****)0x1;
  local_bc = (undefined2 *****)0x1;
  local_30 = (undefined2 ******)0x10;
  local_8 = (undefined2 ******)&local_44;
  local_a = (undefined2 ******)auStack_100;
  local_c = (undefined2 ******)0x22b2;
  local_e = (undefined2 ******)0xd1be;
  FUN_10ad_00ca();
  local_8 = (undefined2 ******)&local_c4;
  local_a = (undefined2 ******)CONCAT11((char)((uint)local_8 >> 8),7);
  local_c = (undefined2 ******)0x10a9;
  local_e = (undefined2 ******)0xd1cd;
  uVar2 = FUN_10ad_00ca();
  local_4e = 0;
  local_4c = (undefined2 ******)((uint)local_4c._1_1_ << 8);
  local_d0 = 0x3f3f;
  local_ce = (undefined2 *****)CONCAT11(local_ce._1_1_,0x3f);
  local_8 = local_4c;
  local_a = (undefined2 ******)0x0;
  local_c = (undefined2 ******)(uVar2 & 0xff00);
  local_e = (undefined2 ******)0x10a9;
  local_10 = (undefined2 ******)0xd1f6;
  func_0x00010b22();
  local_8 = (undefined2 ******)local_ce;
  local_a = (undefined2 ******)local_d0;
  local_c = (undefined2 ******)CONCAT11(extraout_AH,7);
  local_e = (undefined2 ******)0x10a9;
  local_10 = (undefined2 *******)0xd209;
  func_0x00010b22();
  local_8 = &local_3a;
  local_a = (undefined2 ******)0x10a9;
  local_c = (undefined2 ******)0xd215;
  func_0x000257c0();
  local_20 = (undefined2 ******)0x0;
  local_8 = (undefined2 ******)0x0;
  local_a = (undefined2 ******)0x22b2;
  ppppppuVar5 = (undefined2 ******)0x885;
  local_c = (undefined2 ******)0xd224;
  func_0x0000daa6();
  if (*(int *)0xc62 != 0) {
    local_8 = (undefined2 ******)0x0;
    local_a = (undefined2 ******)0x885;
    ppppppuVar5 = (undefined2 ******)0x3bf;
    local_c = (undefined2 ******)0xd234;
    func_0x00004488();
  }
  local_b2[0] = '\0';
  local_8 = (undefined2 ******)local_b2;
  local_a = (undefined2 ******)0x1e;
  pppppppuVar6 = (undefined2 *******)0x11f2;
  local_e = (undefined2 *******)0xd248;
  local_c = ppppppuVar5;
  iVar3 = func_0x00012038();
  local_d8 = CONCAT22(local_d8._2_2_,(undefined2)local_d8);
  local_cc = CONCAT22(local_cc._2_2_,(undefined2)local_cc);
  local_c0 = CONCAT22(local_c0._2_2_,(undefined2)local_c0);
  if (iVar3 == 0) {
    local_b2[0] = '\0';
    local_d8 = CONCAT22(local_d8._2_2_,(undefined2)local_d8);
    local_cc = CONCAT22(local_cc._2_2_,(undefined2)local_cc);
    local_c0 = CONCAT22(local_c0._2_2_,(undefined2)local_c0);
  }
LAB_3ab8_26d3:
  if (local_b2[0] != '\0') {
    local_8 = (undefined2 ******)0x0;
    local_c = (undefined2 ******)0xd265;
    local_a = pppppppuVar6;
    func_0x0000daa6();
    *(undefined2 *)0x156 = 0;
    *(byte *)0xc3be = *(byte *)0xc3be | 8;
    local_8 = &local_1a;
    local_a = &local_10;
    local_c = (undefined2 ******)&local_46;
    local_e = &local_12;
    local_10 = (undefined2 *******)0x885;
    pppppppuVar6 = (undefined2 *******)0x885;
    local_12 = (undefined2 ******)0xd286;
    func_0x0000dcbd();
    local_e = local_10;
    local_18 = local_1a;
    local_52 = (undefined2 ****)0x4;
    local_60 = (undefined2 ******)0x4;
    local_16 = (undefined2 *****)0x2;
    do {
      local_8 = (undefined2 ******)&local_5c;
      local_c = (undefined2 ******)0xd2ac;
      local_a = pppppppuVar6;
      func_0x000257c0();
      local_8 = (undefined2 ******)&local_ba;
      local_a = (undefined2 ******)0x22b2;
      local_c = (undefined2 ******)0xd2b7;
      func_0x000257c0();
      local_8 = (undefined2 ******)*(undefined2 *)0x1b40;
      local_a = (undefined2 ******)*(undefined2 *)0x1b3e;
      local_c = (undefined2 ******)0x0;
      local_e = (undefined2 ******)0x0;
      local_10 = (undefined2 ******)0x22b2;
      local_12 = (undefined2 ******)0xd2c9;
      func_0x0000a76b();
      local_8 = (undefined2 ******)0x3;
      local_a = (undefined2 ******)0x885;
      local_c = (undefined2 ******)0xd2d5;
      func_0x0000f2d3();
      local_8 = (undefined2 ******)0xffff;
      local_a = (undefined2 ******)0x7;
      local_c = (undefined2 ******)local_60;
      local_e = (undefined2 ******)local_52;
      local_10 = (undefined2 ******)local_b2;
      local_12 = (undefined2 ******)0xdef;
      local_14 = (undefined2 ******)0xd2ee;
      FUN_1000_02b5();
      local_8 = (undefined2 ******)0x14;
      local_a = (undefined2 ******)*(undefined2 *)0x1b3e;
      local_c = (undefined2 ******)0xa;
      local_e = (undefined2 *******)0x0;
      local_10 = (undefined2 *******)0xdef;
      pppppppuVar6 = (undefined2 *******)0x885;
      local_12 = (undefined2 ******)0xd305;
      func_0x0000a76b();
      while( true ) {
        iVar3 = local_5a + (uint)((undefined2 ****)0xfffd < local_5c);
        if ((iVar3 < local_b8) || ((iVar3 <= local_b8 && (local_5c + 1 < local_ba)))) break;
        local_8 = (undefined2 ******)&local_ba;
        local_c = (undefined2 ******)0xd332;
        local_a = pppppppuVar6;
        func_0x000257c0();
        local_8 = &local_1a;
        local_a = &local_10;
        local_c = (undefined2 ******)&local_46;
        local_e = &local_12;
        local_10 = (undefined2 *******)0x22b2;
        pppppppuVar6 = (undefined2 *******)0x885;
        local_12 = (undefined2 ******)0xd348;
        func_0x0000dcbd();
        if ((undefined2 *****)local_46 != (undefined2 *****)0x0) {
          local_e = local_10;
          local_18 = local_1a;
          if ((undefined2 *******)local_a == (undefined2 *******)0x0) {
            local_b2[0] = '\0';
            local_8 = (undefined2 ******)local_b2;
            local_a = (undefined2 ******)0x1e;
            local_c = (undefined2 ******)0x885;
            pppppppuVar6 = (undefined2 *******)0x11f2;
            local_e = (undefined2 *******)0xd379;
            func_0x000120ec();
            goto LAB_3ab8_27fb;
          }
        }
        uVar2 = (int)local_10 - (int)local_e >> 0xf;
        if (((10 < (int)(((int)local_10 - (int)local_e ^ uVar2) - uVar2)) ||
            (uVar2 = (int)local_1a - (int)local_18 >> 0xf,
            10 < (int)(((int)local_1a - (int)local_18 ^ uVar2) - uVar2))) ||
           ((undefined2 ******)local_12 != (undefined2 ******)0x0)) goto LAB_3ab8_29c2;
        local_8 = (undefined2 ******)0x885;
        pppppppuVar6 = (undefined2 *******)0xdef;
        local_a = (undefined2 ******)0xd5ba;
        iVar3 = FUN_1000_0632();
        if (iVar3 != 0) goto LAB_3ab8_29c2;
      }
      local_52 = local_52 + 0x14;
      if (0x32 < (int)local_52) {
        local_52 = (undefined2 ****)0x4;
      }
      local_60 = (undefined2 *****)((int)local_60 + (int)local_16);
      if (0x12 < (int)local_60) {
        local_60 = local_16 + 1;
        local_16 = (undefined2 *****)(3 - (int)local_16);
      }
    } while( true );
  }
LAB_3ab8_27fb:
  if (*(char *)0x128 == '\0') {
LAB_3ab8_29c2:
    local_8 = (undefined2 ******)0x3;
    local_c = (undefined2 ******)0xd54b;
    local_a = pppppppuVar6;
    uVar2 = func_0x0000f2d3();
    local_8 = (undefined2 ******)local_42;
    local_a = (undefined2 ******)local_44;
    local_c = (undefined2 ******)(uVar2 & 0xff00);
    local_e = (undefined2 ******)0xdef;
    local_10 = (undefined2 ******)0xd55a;
    func_0x00010b22();
    local_8 = (undefined2 ******)local_c2;
    local_a = (undefined2 ******)local_c4;
    local_c = (undefined2 ******)CONCAT11(extraout_AH_00,7);
    local_e = (undefined2 ******)0x10a9;
    local_10 = (undefined2 ******)0xd56d;
    func_0x00010b22();
    local_8 = (undefined2 ******)0x0;
    local_a = (undefined2 ******)0x10a9;
    local_c = (undefined2 ******)0xd578;
    func_0x0000daa6();
    *(byte *)0xc3be = *(byte *)0xc3be & 0xf7;
    local_8 = (undefined2 ******)0x1;
    local_a = (undefined2 ******)0x885;
    local_c = (undefined2 ******)0xd587;
    func_0x0000daa6();
    do {
      do {
        local_8 = &local_1a;
        local_a = &local_10;
        local_c = (undefined2 ******)&local_46;
        local_e = &local_12;
        local_10 = (undefined2 ******)0x885;
        uVar8 = 0x885;
        local_12 = (undefined2 ******)0xd59d;
        func_0x0000dcbd();
      } while ((undefined2 ******)local_12 != (undefined2 ******)0x0);
    } while ((undefined2 *****)local_46 != (undefined2 *****)0x0);
    if (*(char *)0x118 != '\n') {
      local_8 = (undefined2 ******)0x885;
      local_a = (undefined2 ******)0xd8cb;
      func_0x0000a7c5();
      *(undefined2 *)0xbc0 = 1;
      local_8 = (undefined2 ******)0x0;
      local_a = (undefined2 ******)0x885;
      uVar8 = 0x11f2;
      local_c = (undefined2 ******)0xd8d9;
      func_0x0001470b();
    }
    local_b6 = *(uint *)0x114;
    local_b4 = *(int *)0x116;
    if (*(char *)0x118 == '\x02') {
      local_b4 = 0;
      local_b6 = 0;
    }
    local_8 = (undefined2 ******)0xb5b6;
    local_c = (undefined2 ******)0xd903;
    local_a = (undefined2 ******)uVar8;
    func_0x000257c0();
    uVar2 = (int)*(uint *)0xb5b6 - (int)local_3a;
    uVar4 = uVar2 + local_b6;
    iVar3 = ((*(int *)0xb5b8 - (int)local_38) -
            (uint)((undefined2 *******)*(uint *)0xb5b6 < local_3a)) + local_b4 +
            (uint)CARRY2(uVar2,local_b6);
    puVar1 = (uint *)0xc134;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    *(int *)0xc136 = *(int *)0xc136 + iVar3 + (uint)CARRY2(uVar2,uVar4);
    puVar1 = (uint *)0xc0b0;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    *(int *)0xc0b2 = *(int *)0xc0b2 + iVar3 + (uint)CARRY2(uVar2,uVar4);
    *(undefined1 *)0x118 = 0;
    return 1;
  }
  local_e = (undefined2 ******)((int)local_24 + (int)local_1e);
  local_c = (undefined2 ******)((int)local_e >> 0xf);
  local_12 = (undefined2 ******)0xd395;
  local_10 = pppppppuVar6;
  local_a = local_e;
  local_8 = local_c;
  lVar11 = func_0x00027932();
  local_10 = (undefined2 ******)0x22b2;
  local_12 = (undefined2 ******)0xd3a5;
  local_c0 = lVar11;
  FUN_28b3_0d8b();
  local_10 = (undefined2 ******)0x22b2;
  local_12 = (undefined2 ******)0xd3ae;
  func_0x00029c2c();
  local_10 = (undefined2 ******)0x22b2;
  local_12 = (undefined2 ******)0xd3b3;
  local_26 = (undefined2 ******)FUN_28b3_0f51();
  local_16 = (undefined2 *****)((int)local_24 + (int)local_30);
  local_14 = (undefined2 *****)((int)local_16 >> 0xf);
  local_18 = (undefined2 ******)0x22b2;
  local_1a = (undefined2 ******)0xd3c6;
  local_12 = local_16;
  local_10 = (undefined2 ******)local_14;
  lVar11 = func_0x00027932();
  local_18 = (undefined2 ******)0x22b2;
  local_1a = (undefined2 ******)0xd3d6;
  local_d8 = lVar11;
  FUN_28b3_0d8b();
  local_18 = (undefined2 ******)0x22b2;
  local_1a = (undefined2 ******)0xd3df;
  func_0x00029c2c();
  local_18 = (undefined2 ******)0x22b2;
  local_1a = (undefined2 ******)0xd3e4;
  local_32 = (undefined2 *****)FUN_28b3_0f51();
  local_2a = (undefined2 ******)((int)local_1e + (int)local_30);
  local_28 = (undefined2 ******)((int)local_2a >> 0xf);
  local_20 = (undefined2 ******)0x22b2;
  local_22 = (undefined2 ******)0xd3fd;
  local_1e = local_2a;
  local_1c = local_28;
  local_1a = local_2a;
  local_18 = local_28;
  lVar11 = func_0x00027932();
  local_20 = (undefined2 ******)0x22b2;
  local_22 = (undefined2 ******)0xd40d;
  local_cc = lVar11;
  FUN_28b3_0d8b();
  local_20 = (undefined2 ******)0x22b2;
  local_22 = (undefined2 ******)0xd416;
  func_0x00029c2c();
  local_20 = (undefined2 ******)0x22b2;
  local_22 = (undefined2 ******)0xd41b;
  local_3c = (undefined2 ******)FUN_28b3_0f51();
  local_22 = (undefined2 *****)(*(int *)0x1b3e + (int)local_1e * -4);
  local_20 = (undefined2 ******)((int)local_22 >> 0xf);
  local_24 = local_38;
  local_26 = local_3a;
  local_28 = (undefined2 ******)0x22b2;
  local_2a = (undefined2 ******)0xd438;
  iVar3 = FUN_21f2_5a44();
  local_14 = (undefined2 *****)(iVar3 + (int)local_1e * 2);
  local_28 = (undefined2 ******)*(undefined2 *)0x1b40;
  local_2a = (undefined2 ******)*(undefined2 *)0x1b3e;
  local_22 = (undefined2 ******)0x0;
  local_1c = (undefined2 ******)0x0;
  local_16 = (undefined2 *****)0x0;
  local_2c = (undefined2 ****)0x0;
  local_2e = (undefined2 *****)0x0;
  local_30 = (undefined2 *****)0x22b2;
  local_32 = (undefined2 *****)0xd462;
  local_c = (undefined2 ******)local_14;
  local_8 = (undefined2 ******)local_14;
  func_0x0000a76b();
  local_28 = (undefined2 ******)0x3;
  local_2a = (undefined2 ******)0x885;
  local_2c = (undefined2 ****)0xd46e;
  func_0x0000f2d3();
  local_28 = (undefined2 ******)0xffff;
  local_2a = (undefined2 ******)0x4;
  local_2c = (undefined2 ****)0xc;
  local_2e = (undefined2 *****)0x1e;
  local_30 = (undefined2 *****)0x17bc;
  local_32 = (undefined2 *****)0xdef;
  local_34 = (undefined2 ******)0xd488;
  FUN_1000_02b5();
  local_28 = (undefined2 ******)0x0;
  local_2a = (undefined2 ******)0xdef;
  local_2c = (undefined2 ****)0xd493;
  func_0x0000daa6();
  *(undefined2 *)0x156 = 0;
  *(byte *)0xc3be = *(byte *)0xc3be | 8;
  local_2e = (undefined2 *****)0x0;
  local_28 = (undefined2 ******)&local_4a;
  local_2a = (undefined2 ******)0x885;
  local_2c = (undefined2 ****)0xd4b0;
  func_0x000257c0();
  bVar10 = (undefined2 *****)0xfffa < local_4a;
  local_4a = (undefined2 ****)((int)local_4a + 5);
  local_48 = local_48 + (uint)bVar10;
  local_28 = &local_1a;
  local_2a = &local_10;
  local_2c = &local_46;
  local_2e = &local_12;
  local_30 = (undefined2 ******)0x22b2;
  pppppppuVar6 = (undefined2 *******)0x885;
  local_32 = (undefined2 ******)0xd4ce;
  func_0x0000dcbd();
  local_18 = local_1a;
  while( true ) {
    local_8 = &local_1a;
    local_a = &local_10;
    local_c = (undefined2 ******)&local_46;
    local_e = &local_12;
    pppppppuVar7 = (undefined2 *******)0x885;
    local_12 = (undefined2 ******)0xd4f2;
    local_10 = pppppppuVar6;
    func_0x0000dcbd();
    if ((undefined2 *****)local_46 != (undefined2 *****)0x0) {
      local_e = local_10;
      local_18 = local_1a;
    }
    pppppppuVar6 = pppppppuVar7;
    if (((local_e != local_10) || (local_18 != local_1a)) ||
       ((undefined2 ******)local_12 != (undefined2 ******)0x0)) goto LAB_3ab8_29c2;
    local_8 = (undefined2 ******)&local_40;
    local_a = (undefined2 ******)0x885;
    local_c = (undefined2 ******)0xd5fc;
    func_0x000257c0();
    bVar10 = (undefined2 ******)0xfffe < local_2e;
    local_2e = (undefined2 *****)((int)local_2e + 1);
    local_2c = (undefined2 ****)((int)local_2c + (uint)bVar10);
    if ((local_48 <= local_3e) && ((local_48 < local_3e || (local_4a < local_40)))) break;
    local_8 = (undefined2 ******)0x22b2;
    pppppppuVar6 = (undefined2 *******)0xdef;
    local_a = (undefined2 ******)0xd7de;
    iVar3 = FUN_1000_0632();
    if (iVar3 != 0) goto LAB_3ab8_29c2;
  }
  local_8 = (undefined2 ******)0x0;
  local_a = (undefined2 ******)0xf0;
  local_c = &local_2e;
  local_e = (undefined2 ******)0x22b2;
  local_10 = (undefined2 ******)0xd62c;
  FUN_21f2_5afc();
  local_e = (undefined2 ******)0x3;
  local_10 = (undefined2 ******)0x22b2;
  pppppuVar9 = (undefined2 *****)0xdef;
  local_12 = (undefined2 ******)0xd635;
  func_0x0000f2d3();
LAB_3ab8_2ab6:
  local_c6 = (undefined2 ******)0x0;
  local_d2 = (undefined2 ******)0x0;
  ppppppuVar5 = (undefined2 ******)0x0;
  local_20 = (undefined2 ******)0x0;
  local_2a = (undefined2 ******)((int)local_8 - (int)local_c);
  local_28 = (undefined2 ******)((int)local_2a >> 0xf);
  local_36 = (undefined2 ******)((int)local_16 - (int)local_1c);
  local_34 = (undefined2 *****)((int)local_36 >> 0xf);
  local_18 = (undefined2 ******)0xd671;
  local_16 = pppppuVar9;
  local_14 = local_2a;
  local_12 = local_28;
  local_10 = local_2a;
  local_e = local_28;
  lVar11 = func_0x00027932();
  local_16 = local_34;
  local_18 = local_36;
  local_1a = (undefined2 ******)local_34;
  local_1c = local_36;
  local_1e = (undefined2 ******)0x22b2;
  local_20 = (undefined2 ******)0xd686;
  lVar12 = func_0x00027932();
  if (lVar11 + lVar12 <= local_c0) {
    local_d2 = (undefined2 ******)0x2;
    local_c6 = (undefined2 ******)0x1;
  }
  local_36 = (undefined2 ******)((int)local_22 - (int)local_1c);
  local_34 = (undefined2 *****)((int)local_36 >> 0xf);
  local_26 = (undefined2 ******)0x22b2;
  local_28 = (undefined2 ******)0xd6be;
  local_24 = local_36;
  local_22 = local_34;
  local_20 = local_36;
  local_1e = (undefined2 ******)local_34;
  lVar11 = func_0x00027932();
  local_2c = (undefined2 ****)((int)local_14 - (int)local_c);
  local_2a = (undefined2 ******)((int)local_2c >> 0xf);
  local_2e = (undefined2 *****)0x22b2;
  local_30 = (undefined2 *****)0xd6dc;
  local_28 = (undefined2 ******)local_2c;
  local_26 = local_2a;
  lVar12 = func_0x00027932();
  if (lVar11 + lVar12 <= local_d8) {
    ppppppuVar5 = (undefined2 ******)0x3;
    local_d2 = (undefined2 ******)0x2;
    local_20 = (undefined2 *******)0x1;
  }
  local_34 = (undefined2 *****)((int)local_22 - (int)local_16);
  local_32 = (undefined2 *****)((int)local_34 >> 0xf);
  local_36 = (undefined2 ******)0x22b2;
  local_38 = (undefined2 ******)0xd714;
  local_30 = local_34;
  local_2e = local_32;
  lVar11 = func_0x00027932();
  local_3c = (undefined2 ******)((int)local_14 - (int)local_8);
  local_3a = (undefined2 ******)((int)local_3c >> 0xf);
  local_3e = 0x22b2;
  pppppppuVar6 = (undefined2 *******)0x22b2;
  local_40 = (undefined2 *****)0xd732;
  local_38 = local_3c;
  local_36 = local_3a;
  local_2a = local_3c;
  local_28 = local_3a;
  lVar12 = func_0x00027932();
  if (lVar11 + lVar12 <= local_cc) {
    ppppppuVar5 = (undefined2 ******)0x3;
    local_c6 = (undefined2 ******)0x1;
  }
  local_8 = (undefined2 ******)0x1;
  local_a = (undefined2 ******)0x2;
  local_c = (undefined2 ******)0x1;
  local_e = local_26;
  local_10 = local_1e;
  local_12 = &local_c8;
  local_14 = &local_54;
  local_16 = (undefined2 *****)&local_50;
  local_18 = &local_16;
  local_1a = &local_8;
  local_1c = local_c6;
  local_1e = (undefined2 ******)0x22b2;
  local_20 = (undefined2 ******)0xd77f;
  FUN_3ab8_226f();
  local_8 = (undefined2 ******)0x2;
  local_a = (undefined2 ******)0x1;
  local_c = (undefined2 ******)0x2;
  local_e = (undefined2 ******)local_32;
  local_10 = local_24;
  local_12 = &local_d4;
  local_14 = &local_60;
  local_16 = (undefined2 *****)&local_52;
  local_18 = &local_1c;
  local_1a = &local_c;
  local_1c = local_d2;
  local_1e = (undefined2 *******)0x22b2;
  local_20 = (undefined2 ******)0xd7ae;
  FUN_3ab8_226f();
  if ((undefined2 *****)local_46 == (undefined2 *****)0x0) {
    local_a = (undefined2 *******)0x1;
    local_c = (undefined2 *******)0x1;
    local_1c = ppppppuVar5;
  }
  else {
    if (local_20 != (undefined2 ******)0x0) {
      local_a = (undefined2 ******)((int)local_a + 1);
    }
    if (0x14 < (int)local_a) goto code_r0x0003d7c6;
    local_a = local_1a;
    local_c = local_10;
    local_1c = (undefined2 ******)0xa;
  }
  local_12 = (undefined2 *****)&stack0xfffa;
  local_14 = &local_bc;
  local_16 = (undefined2 *****)&local_5e;
  local_18 = &local_22;
  local_1a = &local_14;
  local_8 = (undefined2 ******)0x3;
  local_e = local_3c;
  local_10 = (undefined2 ******)local_30;
  local_1e = (undefined2 *******)0x22b2;
  local_20 = (undefined2 ******)0xd83e;
  FUN_3ab8_226f();
  local_56 = 0;
  local_58 = (undefined2 ******)0x0;
  while( true ) {
    local_8 = &local_1a;
    local_a = &local_10;
    local_c = (undefined2 ******)&local_46;
    local_e = &local_12;
    pppppppuVar7 = (undefined2 *******)0x885;
    local_12 = (undefined2 ******)0xd85e;
    local_10 = pppppppuVar6;
    func_0x0000dcbd();
    if ((undefined2 *****)local_46 != (undefined2 *****)0x0) {
      local_e = local_10;
      local_18 = local_1a;
    }
    pppppppuVar6 = pppppppuVar7;
    if (((local_e != local_10) || (local_18 != local_1a)) ||
       ((undefined2 ******)local_12 != (undefined2 ******)0x0)) goto LAB_3ab8_29c2;
    local_8 = (undefined2 ******)&local_40;
    local_a = (undefined2 ******)0x885;
    pppppuVar9 = (undefined2 *****)0x22b2;
    local_c = (undefined2 ******)0xd895;
    func_0x000257c0();
    bVar10 = (undefined2 ******)0xfffe < local_58;
    local_58 = (undefined2 *****)((int)local_58 + 1);
    local_56 = local_56 + (uint)bVar10;
    if (((int)local_2c <= local_56) && (((int)local_2c < local_56 || (local_2e < local_58)))) break;
    local_e = (undefined2 *******)0x22b2;
    pppppppuVar6 = (undefined2 *******)0xdef;
    local_10 = (undefined2 *******)0xd8b8;
    iVar3 = FUN_1000_0632();
    if (iVar3 != 0) goto LAB_3ab8_29c2;
  }
  goto LAB_3ab8_2ab6;
code_r0x0003d7c6:
  local_8 = (undefined2 ******)0x33fc;
  local_a = (undefined2 ******)local_b2;
  local_c = (undefined2 ******)0x22b2;
  pppppppuVar6 = (undefined2 *******)0x22b2;
  local_e = (undefined2 *******)0xd7d4;
  func_0x00024c86();
  goto LAB_3ab8_26d3;
}



/* 3ab8:2dbd  FUN_3ab8_2dbd  226 bytes, 0 callers */

void __cdecl16far FUN_3ab8_2dbd(void)

{
  undefined2 unaff_DS;
  undefined1 local_a2 [80];
  undefined1 local_52 [66];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xd948;
  FUN_21f2_0ebc();
  if (*(char *)0x124 != '\0') {
    puStack_4 = (undefined1 *)0x10ca;
    puStack_6 = local_52;
    uStack_8 = 0x22b2;
    puStack_a = (undefined1 *)0xd95f;
    FUN_21f2_3454();
    puStack_4 = (undefined1 *)0x100;
    puStack_6 = (undefined1 *)0x10ca;
    uStack_8 = 0x22b2;
    puStack_a = (undefined1 *)0xd96e;
    FUN_21f2_3454();
    *(undefined1 *)0x10d3 = 0x78;
    *(undefined1 *)0x10d2 = 0x74;
    *(undefined1 *)0x10d4 = 0x74;
    puStack_4 = (undefined1 *)0x1;
    puStack_6 = (undefined1 *)0x22b2;
    uStack_8 = 0xd986;
    func_0x00012004();
    puStack_4 = (undefined1 *)0x11f2;
    puStack_6 = (undefined1 *)0xd98c;
    func_0x0000c340();
    puStack_4 = (undefined1 *)0x885;
    puStack_6 = (undefined1 *)0xd991;
    func_0x00010526();
    local_a2[0] = 0;
    puStack_4 = local_a2;
    puStack_6 = (undefined1 *)0x1e;
    uStack_8 = 0xdef;
    puStack_a = (undefined1 *)0xd9a4;
    func_0x00012038();
    puStack_4 = (undefined1 *)0x0;
    puStack_6 = (undefined1 *)0x7;
    uStack_8 = 1;
    puStack_a = (undefined1 *)0x14;
    uStack_c = 0x3405;
    uStack_e = 0x11f2;
    uStack_10 = 0xd9be;
    FUN_1000_02b5();
    puStack_4 = (undefined1 *)0xdef;
    puStack_6 = (undefined1 *)0xd9c6;
    FUN_1000_060e();
    puStack_4 = (undefined1 *)0x28;
    puStack_6 = (undefined1 *)0x1;
    uStack_8 = 0x26;
    puStack_a = local_a2;
    uStack_c = 0xdef;
    uStack_e = 0xd9dc;
    FUN_12c1_03d3();
    puStack_4 = (undefined1 *)0x0;
    puStack_6 = (undefined1 *)0x11f2;
    uStack_8 = 0xd9eb;
    func_0x00012004();
    puStack_4 = (undefined1 *)0x11f2;
    puStack_6 = (undefined1 *)0xd9f1;
    FUN_1000_0620();
    puStack_4 = local_52;
    puStack_6 = (undefined1 *)0x10ca;
    uStack_8 = 0xdef;
    puStack_a = (undefined1 *)0xd9fe;
    FUN_21f2_3454();
    puStack_4 = local_a2;
    puStack_6 = (undefined1 *)0x1e;
    uStack_8 = 0x22b2;
    puStack_a = (undefined1 *)0xda0e;
    func_0x000120ec();
    *(undefined1 *)0x118 = 2;
    *(undefined2 *)0x158 = 1;
  }
  return;
}



/* 3ab8:2e9f  FUN_3ab8_2e9f  108 bytes, 1 callers */

void __cdecl16far FUN_3ab8_2e9f(void)

{
  undefined2 unaff_DS;
  undefined1 local_1e [14];
  int local_10 [2];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 uStack_8;
  int *piStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  piStack_6 = (int *)0xda2a;
  FUN_21f2_0ebc();
  local_10[0] = (-(uint)(*(int *)0xb780 == 0) & 9) + 7;
  puStack_4 = local_1e;
  piStack_6 = local_10;
  uStack_8 = 0x33;
  local_a = 0x22b2;
  local_c = 0xda57;
  func_0x00024f9a();
  local_10[0] = (-(uint)(*(int *)0xb780 == 0) & 9) + 8;
  puStack_4 = local_1e;
  piStack_6 = local_10;
  uStack_8 = 0x33;
  local_a = 0x22b2;
  local_c = 0xda87;
  func_0x00024f9a();
  return;
}



/* 3ab8:2f0b  FUN_3ab8_2f0b  70 bytes, 1 callers */

void __cdecl16far FUN_3ab8_2f0b(int param_1)

{
  undefined2 unaff_DS;
  undefined1 local_1e [14];
  int local_10;
  int local_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int *piStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  piStack_6 = (int *)0xda96;
  FUN_21f2_0ebc();
  local_10 = (-(uint)(*(int *)0xb780 == 0) & 0xff13) + 0xff;
  if (*(int *)0xb780 != 0) {
    param_1 = 1 << ((byte)param_1 & 0x1f);
  }
  puStack_4 = local_1e;
  piStack_6 = &local_10;
  uStack_8 = 0x33;
  uStack_a = 0x22b2;
  uStack_c = 0xdacd;
  local_e = param_1;
  func_0x00024f9a();
  return;
}



/* 3ab8:2f51  FUN_3ab8_2f51  145 bytes, 1 callers */

void __cdecl16far FUN_3ab8_2f51(void)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  *(undefined2 *)0x1afc = 0xffff;
  *(undefined2 *)0x1afe = 0xffff;
  *(undefined2 *)0x1b00 = 0xffff;
  *(undefined2 *)0x1b02 = 0xffff;
  *(undefined2 *)0x1b04 = 0xffff;
  *(undefined2 *)0x1b06 = 0xffff;
  *(undefined2 *)0x1b08 = 0xffff;
  *(undefined2 *)0x1b0a = 0xffff;
  *(undefined2 *)0x1b0c = 0xffff;
  *(undefined2 *)0x1b0e = 0xffff;
  *(undefined2 *)0x1b10 = 0xffff;
  *(undefined2 *)0x1b12 = 0xffff;
  *(undefined2 *)0x1b14 = 0xffff;
  *(undefined2 *)0x1b16 = 0xffff;
  *(undefined2 *)0x1b18 = 0xffff;
  *(undefined2 *)0x1b1a = 0xffff;
  *(undefined2 *)0x1b1e = 0x4000;
  *(undefined2 *)0x1b20 = 0x6000;
  *(undefined2 *)0x1b22 = 0x7000;
  *(undefined2 *)0x1b24 = 0x7800;
  *(undefined2 *)0x1b28 = 0x7e00;
  *(undefined2 *)0x1b2a = 0x7f00;
  *(undefined2 *)0x1b2c = 0x7f80;
  *(undefined2 *)0x1b26 = 0x7c00;
  *(undefined2 *)0x1b2e = 0x7c00;
  *(undefined2 *)0x1b30 = 0x6c00;
  *(undefined2 *)0x1b32 = 0x4600;
  *(undefined2 *)0x1b34 = 0x600;
  *(undefined2 *)0x1b36 = 0x300;
  *(undefined2 *)0x1b38 = 0x300;
  *(undefined2 *)0x1b1c = 0;
  *(undefined2 *)0x1b3a = 0;
  return;
}



/* 3ab8:317a  FUN_3ab8_317a  45 bytes, 0 callers */

uint __cdecl16far FUN_3ab8_317a(void)

{
  uint local_1e [7];
  undefined1 local_10 [4];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  uint *puStack_4;
  
  puStack_4 = (uint *)0x3ab8;
  puStack_6 = (undefined1 *)0xdd05;
  FUN_21f2_0ebc();
  puStack_4 = local_1e;
  puStack_6 = local_10;
  uStack_8 = 0x11;
  uStack_a = 0x22b2;
  uStack_c = 0xdd16;
  func_0x00024f9a();
  return (local_1e[0] & 0xe00) >> 9;
}



/* 3ab8:31a7  FUN_3ab8_31a7  92 bytes, 1 callers */

bool __cdecl16far
FUN_3ab8_31a7(undefined2 param_1,char param_2,byte param_3,uint param_4,byte param_5)

{
  undefined1 local_1e;
  byte local_1d;
  byte local_10 [4];
  undefined2 uStack_c;
  undefined2 local_a;
  undefined2 uStack_8;
  byte *pbStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  pbStack_6 = (byte *)0xdd32;
  FUN_21f2_0ebc();
  local_10[1] = 0;
  local_10[0] = (param_2 << 2 | param_3) << 3 | param_4 < 2 | param_5;
  puStack_4 = &local_1e;
  pbStack_6 = local_10;
  uStack_8 = 0x14;
  local_a = 0x22b2;
  uStack_c = 0xdd6f;
  func_0x00024f9a();
  return (local_1d & 0x80) != 0;
}



/* 3ab8:3203  FUN_3ab8_3203  393 bytes, 1 callers */

void __cdecl16far FUN_3ab8_3203(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int local_1a;
  undefined1 local_18 [8];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  uint local_4;
  
  local_4 = 0x3ab8;
  puStack_6 = (undefined1 *)0xdd8e;
  FUN_21f2_0ebc();
  *(undefined2 *)0xc22 = 2;
  local_4 = *(int *)0xce8 + 1;
  puStack_6 = (undefined1 *)0x3440;
  puStack_8 = local_18;
  uStack_a = 0x22b2;
  puStack_c = (undefined1 *)0xdda6;
  FUN_21f2_3454();
  local_4 = 0xffff;
  puStack_6 = (undefined1 *)0x6;
  puStack_8 = (undefined1 *)0x2;
  uStack_a = 0x15;
  puStack_c = local_18;
  uStack_e = 0x22b2;
  uStack_10 = 0xddc2;
  FUN_1000_02b5();
  local_1a = 0x4b;
  for (local_4 = 0; local_4 < *(uint *)0xcea; local_4 = local_4 + 1) {
    local_1a = local_1a << 1;
  }
  local_4 = local_1a;
  puStack_6 = (undefined1 *)0x3448;
  puStack_8 = local_18;
  uStack_a = 0xdef;
  puStack_c = (undefined1 *)0xddef;
  FUN_21f2_3454();
  local_4 = 0xffff;
  puStack_6 = (undefined1 *)0x6;
  puStack_8 = (undefined1 *)0x2;
  uStack_a = 0x20;
  puStack_c = local_18;
  uStack_e = 0x22b2;
  uStack_10 = 0xde0b;
  FUN_1000_02b5();
  local_4 = *(int *)0xcf0 + 5;
  puStack_6 = (undefined1 *)0x3450;
  puStack_8 = local_18;
  uStack_a = 0xdef;
  puStack_c = (undefined1 *)0xde22;
  FUN_21f2_3454();
  local_4 = 0xffff;
  puStack_6 = (undefined1 *)0x6;
  puStack_8 = (undefined1 *)0x2;
  uStack_a = 0x2b;
  puStack_c = local_18;
  uStack_e = 0x22b2;
  uStack_10 = 0xde3e;
  FUN_1000_02b5();
  local_4 = *(int *)0xcee + 1;
  puStack_6 = (undefined1 *)0x3458;
  puStack_8 = local_18;
  uStack_a = 0xdef;
  puStack_c = (undefined1 *)0xde53;
  FUN_21f2_3454();
  if (*(int *)0xcee != 0) {
    local_4 = 0x345f;
    puStack_6 = local_18;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xde6a;
    FUN_21f2_2d26();
  }
  local_4 = 0xffff;
  puStack_6 = (undefined1 *)0x6;
  puStack_8 = (undefined1 *)0x2;
  uStack_a = 0x34;
  puStack_c = local_18;
  uStack_e = 0x22b2;
  uVar2 = 0xdef;
  uStack_10 = 0xde85;
  FUN_1000_02b5();
  iVar1 = *(int *)0xcec;
  if (iVar1 == 0) {
    local_4 = 0x3461;
LAB_3ab8_331b:
    puStack_6 = local_18;
    puStack_8 = (undefined1 *)0xdef;
    uVar2 = 0x22b2;
    uStack_a = 0xdea5;
    FUN_21f2_3454();
  }
  else {
    if (iVar1 == 1) {
      local_4 = 0x3466;
      goto LAB_3ab8_331b;
    }
    if (iVar1 == 3) {
      local_4 = 0x346b;
      goto LAB_3ab8_331b;
    }
  }
  local_4 = 0xffff;
  puStack_6 = (undefined1 *)0x6;
  puStack_8 = (undefined1 *)0x2;
  uStack_a = 0x40;
  puStack_c = local_18;
  uVar3 = 0xdef;
  uStack_10 = 0xdec0;
  uStack_e = uVar2;
  FUN_1000_02b5();
  if (*(int *)0xcf2 == 0) {
    local_4 = 0x3470;
  }
  else {
    if (*(int *)0xcf2 != 1) goto LAB_3ab8_336f;
    local_4 = 0x3478;
  }
  puStack_6 = local_18;
  puStack_8 = (undefined1 *)0xdef;
  uVar3 = 0x22b2;
  uStack_a = 0xdedf;
  FUN_21f2_3454();
LAB_3ab8_336f:
  local_4 = 0xffff;
  puStack_6 = (undefined1 *)0x6;
  puStack_8 = (undefined1 *)0x2;
  uStack_a = 0x48;
  puStack_c = local_18;
  uStack_10 = 0xdf08;
  uStack_e = uVar3;
  FUN_1000_02b5();
  return;
}



/* 3ab8:338c  FUN_3ab8_338c  212 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00043943) overlaps instruction at (ram,0x00043941)
    */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x00043789) */
/* WARNING: Removing unreachable block (ram,0x000437ac) */
/* WARNING: Removing unreachable block (ram,0x0004378c) */
/* WARNING: Removing unreachable block (ram,0x00043790) */
/* WARNING: Removing unreachable block (ram,0x000437dd) */
/* WARNING: Removing unreachable block (ram,0x000437e4) */
/* WARNING: Removing unreachable block (ram,0x000437eb) */

uint __cdecl16far FUN_3ab8_338c(void)

{
  uint *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  byte *pbVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  char cVar15;
  char *pcVar14;
  int iVar16;
  byte bVar17;
  byte bVar18;
  byte bVar20;
  undefined2 uVar19;
  char cVar21;
  uint uVar22;
  char cVar23;
  undefined2 *puVar24;
  int iVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  int *piVar29;
  int *piVar30;
  undefined1 *puVar31;
  undefined2 *puVar32;
  int *piVar33;
  int *piVar34;
  undefined2 *puVar35;
  undefined1 *puVar36;
  undefined2 *puVar37;
  undefined4 in_ESP;
  undefined2 unaff_BP;
  char *pcVar39;
  char *pcVar40;
  undefined1 *unaff_SI;
  byte *pbVar41;
  undefined2 *unaff_DI;
  char *pcVar42;
  undefined2 unaff_ES;
  undefined2 uVar43;
  undefined2 uVar44;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  bool bVar45;
  bool bVar46;
  undefined4 uVar47;
  ulong uVar48;
  int iVar13;
  undefined1 *puVar38;
  
  iVar25 = (int)in_ESP;
  uVar19 = (undefined2)((ulong)in_ESP >> 0x10);
  pcVar39 = (char *)(iVar25 + -2);
  pcVar40 = (char *)(iVar25 + -2);
  pcVar14 = (char *)(iVar25 + -2);
  *(undefined2 *)(iVar25 + -2) = unaff_BP;
  *(undefined2 *)(iVar25 + -4) = 0x3ab8;
  uVar44 = 0x22b2;
  puVar26 = (undefined1 *)(iVar25 + -6);
  *(undefined2 *)(iVar25 + -6) = 0xdf17;
  uVar10 = FUN_21f2_0ebc();
  puVar38 = (undefined1 *)CONCAT22(uVar19,puVar26 + 4);
  do {
    if (*(int *)0x158 != 0) {
      return uVar10;
    }
    puVar27 = (undefined1 *)puVar38;
    uVar19 = (undefined2)((ulong)puVar38 >> 0x10);
    *(undefined2 *)(puVar27 + -2) = 0x354c;
    *(undefined2 *)(puVar27 + -4) = 0x3546;
    *(undefined2 *)(puVar27 + -6) = 0x353c;
    *(undefined2 *)(puVar27 + -8) = 0x3534;
    *(undefined2 *)(puVar27 + -10) = 0x352a;
    *(undefined2 *)(puVar27 + -0xc) = 0x3520;
    *(undefined2 *)(puVar27 + -0xe) = 0x3480;
    *(int *)(puVar27 + -0x10) = iVar25 + -0x90;
    *(undefined2 *)(puVar27 + -0x12) = uVar44;
    puVar28 = puVar27 + -0x14;
    *(undefined2 *)(puVar27 + -0x14) = 0xdf40;
    FUN_21f2_3454();
    *(int *)(puVar28 + 0x12) = iVar25 + -0x90;
    iVar16 = 7;
    *(undefined2 *)(puVar28 + 0x10) = 7;
    *(undefined2 *)(puVar28 + 0xe) = 0x22b2;
    piVar29 = (int *)(puVar28 + 0xc);
    *(undefined2 *)(puVar28 + 0xc) = 0xdf51;
    FUN_1def_07a4();
    uVar22 = piVar29[1];
    piVar29[1] = 0x1bb4;
    *piVar29 = 0xdf57;
    FUN_3ab8_3203();
    piVar29[1] = iVar25 + -0xe;
    *piVar29 = iVar25 + -0xa2;
    piVar29[-1] = iVar25 + -0x9e;
    piVar29[-2] = iVar25 + -0x90;
    piVar29[-3] = 0;
    piVar29[-4] = 0x1bb4;
    piVar30 = piVar29 + -5;
    piVar29[-5] = 0xdf72;
    uVar10 = FUN_1def_0904();
    *(uint *)(iVar25 + -0xc) = uVar10;
    if (*(int *)0x158 != 0) {
      return uVar10;
    }
    *(undefined2 *)((int)piVar30 + 8) = 0x1bb4;
    uVar44 = 0x885;
    puVar38 = (undefined1 *)CONCAT22(uVar19,(undefined1 *)((int)piVar30 + 6));
    *(undefined2 *)((int)piVar30 + 6) = 0xdf84;
    uVar47 = func_0x0000c3ca();
    uVar19 = (undefined2)((ulong)uVar47 >> 0x10);
    uVar10 = (uint)uVar47;
    if (*(int *)(iVar25 + -0xe) != 0) {
      return uVar10;
    }
    if (*(int *)(iVar25 + -0xc) == -1) {
      return uVar10;
    }
    if (*(int *)(iVar25 + -0xc) == 1) {
      return uVar10;
    }
    uVar10 = *(int *)(iVar25 + -0xc) - 2;
  } while (5 < uVar10);
  pbVar11 = (byte *)(uVar10 * 2);
  uVar44 = 0x3000;
  puVar31 = (undefined1 *)puVar38;
  bVar8 = (byte)iVar16;
  switch(uVar10) {
  case 0:
    return uVar22;
  case 1:
    *(int *)(puVar31 + -2) = iVar25 + -2;
    *(undefined1 **)(puVar31 + -4) = unaff_SI;
    *(undefined2 **)(puVar31 + -6) = unaff_DI;
    bVar45 = *(uint *)(puVar31 + 4) < 0xffe8;
    if (*(uint *)(puVar31 + 4) < 0xffe9) {
      puVar24 = (undefined2 *)(puVar31 + -8);
      *(undefined2 *)(puVar31 + -8) = 0x4ab6;
      uVar10 = FUN_32b2_1fac();
      if (!bVar45) {
        return uVar10;
      }
      *puVar24 = 0x4abb;
      FUN_32b2_2028();
      if (!bVar45) {
        *puVar24 = 0x4ac0;
        uVar10 = FUN_32b2_1fac();
        if (!bVar45) {
          return uVar10;
        }
      }
    }
    return 0;
  case 3:
    *(undefined2 *)(puVar31 + -2) = 0xc7fe;
    LOCK();
    *(undefined1 *)(iVar25 + 0xfc) = (char)((uint)pbVar11 >> 8);
    UNLOCK();
    *(char *)((int)unaff_DI + iVar25 + 0x6a84) = *(char *)((int)unaff_DI + iVar25 + 0x6a84) + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
    *(undefined2 **)(puVar31 + -2) = unaff_DI;
    return uVar22;
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar15 = (char)uVar22;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[(int)unaff_SI] + cVar15;
  pbVar11[(int)unaff_SI] = pbVar11[
/* ... truncated: the decompiler produced 462970 bytes for this function. */


/* 3ab8:371f  FUN_3ab8_371f  188 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_371f(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 local_4a [4];
  undefined1 local_46 [4];
  undefined1 local_42 [50];
  undefined2 uStack_10;
  int local_e;
  int local_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  int *piStack_4;
  
  piStack_4 = (int *)0x3ab8;
  uVar1 = 0x22b2;
  puStack_6 = (undefined1 *)0xe2aa;
  FUN_21f2_0ebc();
  do {
    if (*(int *)0x158 != 0) {
      return 0;
    }
    piStack_4 = (int *)0x3554;
    puStack_6 = local_42;
    puStack_a = (undefined1 *)0xe2ba;
    puStack_8 = (undefined1 *)uVar1;
    FUN_21f2_3454();
    piStack_4 = (int *)local_42;
    puStack_6 = (undefined1 *)0x2;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xe2c9;
    FUN_1def_07a4();
    piStack_4 = &local_e;
    puStack_6 = local_4a;
    puStack_8 = local_46;
    puStack_a = local_42;
    local_c = 1;
    local_e = 0x1bb4;
    uStack_10 = 0xe2e4;
    local_c = FUN_1def_0904();
    if (*(int *)0x158 != 0) {
      return 0xffff;
    }
    piStack_4 = (int *)0x1bb4;
    uVar1 = 0x885;
    puStack_6 = (undefined1 *)0xe2fb;
    func_0x0000c3ca();
    if (local_e == 1) {
      local_c = 1;
    }
    if (local_e == 2) {
      local_c = 2;
    }
    if (local_c == -1) {
      return 0xffff;
    }
    if (local_c == 1) {
      piStack_4 = (int *)*(undefined2 *)0xcf0;
      puStack_6 = (undefined1 *)*(undefined2 *)0xcee;
      puStack_8 = (undefined1 *)*(undefined2 *)0xcec;
      puStack_a = (undefined1 *)*(undefined2 *)0xcea;
      local_c = *(undefined2 *)0xce8;
      local_e = 0x885;
      uStack_10 = 0xe335;
      FUN_3ab8_31a7();
      return 0;
    }
    if (local_c == 2) {
      piStack_4 = (int *)0x885;
      puStack_6 = (undefined1 *)0xe344;
      FUN_3ab8_338c();
    }
  } while (*(int *)0x158 == 0);
  return 0xffff;
}



/* 3ab8:37db  FUN_3ab8_37db  58 bytes, 3 callers */

void __cdecl16far FUN_3ab8_37db(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  func_0x00024c86(0x22b2,param_1,0xd8);
  if (*(int *)0xa62 == 0x1b) {
    *(undefined1 *)(param_1 + 7) = 0x5a;
  }
  else if (*(char *)0x326c != '\0') {
    *(undefined1 *)(param_1 + 7) = 0x54;
  }
  return;
}



/* 3ab8:3815  FUN_3ab8_3815  123 bytes, 2 callers */

void __cdecl16far FUN_3ab8_3815(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  FUN_21f2_3454(param_1,0xd18);
  iVar1 = func_0x00024ce4(0x22b2,param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    FUN_21f2_2d26(0x22b2,param_1,0x356f);
    iVar1 = 1;
  }
  uVar3 = 0x2a75;
  iVar2 = func_0x0002aa38(0x22b2,param_1,iVar1);
  if ((iVar2 != 0) || (*(char *)(param_1 + iVar1) != '\\')) {
    uVar3 = 0x22b2;
    FUN_21f2_2d26(0x2a75,param_1,0x3571);
  }
  FUN_21f2_2d26(uVar3,param_1,0xcf6);
  return;
}



/* 3ab8:3890  FUN_3ab8_3890  505 bytes, 1 callers */

int __cdecl16far FUN_3ab8_3890(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined1 local_154 [44];
  int local_128;
  int local_126;
  int local_124;
  undefined1 local_120 [76];
  undefined1 local_d4 [76];
  undefined1 local_88 [7];
  undefined1 local_81;
  undefined1 local_46 [58];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xe41b;
  FUN_21f2_0ebc();
  bVar1 = false;
  local_128 = 0;
  if (((*(int *)0xa62 == 0x1b) && (*(char *)0xd74 != '\0')) ||
     ((*(char *)0xcf6 == '\0' && (-1 < param_1)))) {
    local_128 = 0;
  }
  else {
    puStack_4 = local_46;
    puStack_6 = (undefined1 *)0x22b2;
    puStack_8 = (undefined1 *)0xe454;
    FUN_3ab8_37db();
    puStack_4 = (undefined1 *)0xd8;
    puStack_6 = local_88;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xe463;
    FUN_21f2_3454();
    local_81 = 0x31;
    puStack_4 = local_154;
    puStack_6 = (undefined1 *)0x0;
    puStack_8 = local_46;
    uStack_a = 0x22b2;
    puVar4 = (undefined1 *)0x22b2;
    uStack_c = 0xe47a;
    iVar2 = func_0x000276d7();
    if (iVar2 == 0) {
      puStack_4 = (undefined1 *)0x254;
      puStack_6 = local_46;
      puStack_8 = (undefined1 *)0x22b2;
      puVar4 = (undefined1 *)0x22b2;
      uStack_a = 0xe496;
      iVar2 = FUN_21f2_1348();
      *(int *)0xd70 = iVar2;
      if (iVar2 == 0) {
        puStack_4 = (undefined1 *)0x552;
        puStack_6 = (undefined1 *)0x22b2;
        puVar4 = (undefined1 *)0x11f2;
        puStack_8 = (undefined1 *)0xe4a8;
        FUN_13bf_0a03();
      }
    }
    else {
      bVar1 = true;
    }
    puStack_4 = (undefined1 *)0x258;
    puStack_6 = local_88;
    uVar5 = 0x22b2;
    uStack_a = 0xe4b7;
    puStack_8 = puVar4;
    iVar2 = FUN_21f2_1348();
    if (iVar2 == 0) {
      puStack_4 = (undefined1 *)0x552;
      puStack_6 = (undefined1 *)0x22b2;
      uVar5 = 0x11f2;
      puStack_8 = (undefined1 *)0xe4ca;
      FUN_13bf_0a03();
    }
    if (-1 < param_1) {
      *(undefined1 *)0xcfe = 0;
      if (*(int *)0xa62 != 0x1b) {
        puStack_8 = (undefined1 *)uVar5;
        for (local_126 = 0; uVar5 = puStack_8, local_126 < 8; local_126 = local_126 + 1) {
          puStack_4 = (undefined1 *)local_126;
          puStack_6 = (undefined1 *)0xcf6;
          uVar5 = 0x2a75;
          uStack_a = 0xe4fd;
          iVar3 = func_0x0002aa38();
          if ((iVar3 == 0) && (*(char *)(local_126 + 0xcf6) == '.')) {
            *(undefined1 *)(local_126 + 0xcf6) = 0;
            break;
          }
          puStack_8 = (undefined1 *)uVar5;
        }
      }
      puStack_4 = local_120;
      puStack_8 = (undefined1 *)0xe51c;
      puStack_6 = (undefined1 *)uVar5;
      FUN_3ab8_3815();
      puStack_4 = (undefined1 *)0x3573;
      puStack_6 = local_120;
      uStack_a = 0xe52b;
      puStack_8 = (undefined1 *)uVar5;
      FUN_21f2_2d26();
      puStack_4 = local_120;
      puStack_8 = (undefined1 *)0x22b2;
      uVar5 = 0x22b2;
      uStack_a = 0xe53b;
      puStack_6 = (undefined1 *)iVar2;
      func_0x0002327e();
      local_128 = local_128 + 1;
    }
    uVar6 = uVar5;
    if (!bVar1) {
      for (local_124 = 1; uVar6 = uVar5, local_124 <= *(int *)0x11f0; local_124 = local_124 + 1) {
        puStack_4 = (undefined1 *)*(undefined2 *)0xd70;
        puStack_6 = (undefined1 *)0x41;
        puStack_8 = local_d4;
        uVar6 = 0x22b2;
        uStack_c = 0xe562;
        uStack_a = uVar5;
        iVar3 = func_0x0002509c();
        if (iVar3 == 0) break;
        if ((-1 < param_1) || (local_124 + param_1 != 0)) {
          puStack_4 = local_120;
          puStack_6 = local_d4;
          puStack_8 = (undefined1 *)0x22b2;
          uStack_a = 0xe587;
          iVar3 = func_0x00024cb8();
          if (iVar3 != 0) {
            puStack_4 = local_d4;
            puStack_8 = (undefined1 *)0x22b2;
            uVar6 = 0x22b2;
            uStack_a = 0xe59b;
            puStack_6 = (undefined1 *)iVar2;
            func_0x0002327e();
            local_128 = local_128 + 1;
            if (*(int *)0x11f0 <= local_128) break;
          }
        }
        uVar5 = 0x22b2;
      }
    }
    uVar5 = 0x22b2;
    puStack_6 = (undefined1 *)0xe5bc;
    puStack_4 = (undefined1 *)uVar6;
    func_0x0002504e();
    *(undefined2 *)0xd70 = 0;
    if (!bVar1) {
      puStack_4 = local_46;
      puStack_6 = (undefined1 *)0x22b2;
      uVar5 = 0x22b2;
      puStack_8 = (undefined1 *)0xe5d4;
      iVar2 = func_0x00027698();
      if (iVar2 != 0) {
        puStack_4 = (undefined1 *)0x3575;
        puStack_6 = (undefined1 *)0x22b2;
        uVar5 = 0x11f2;
        puStack_8 = (undefined1 *)0xe5e2;
        FUN_13bf_0a03();
      }
    }
    puStack_4 = local_46;
    puStack_6 = local_88;
    uStack_a = 0xe5f1;
    puStack_8 = (undefined1 *)uVar5;
    iVar2 = func_0x000270f0();
    if (iVar2 != 0) {
      puStack_4 = (undefined1 *)0x3577;
      puStack_6 = (undefined1 *)0x22b2;
      puStack_8 = (undefined1 *)0xe600;
      FUN_13bf_0a03();
    }
  }
  return local_128;
}



/* 3ab8:3a89  FUN_3ab8_3a89  372 bytes, 1 callers */

int __cdecl16far FUN_3ab8_3a89(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_bc [43];
  char acStack_91 [71];
  int local_4a;
  int local_48;
  int local_46;
  undefined1 local_44 [54];
  undefined2 uStack_e;
  undefined2 uStack_c;
  char *pcStack_a;
  char *pcStack_8;
  char *pcStack_6;
  
  pcStack_6 = (char *)0xe614;
  FUN_21f2_0ebc();
  local_4a = (param_1 ^ (int)param_1 >> 0xf) - ((int)param_1 >> 0xf);
  pcStack_6 = local_44;
  pcStack_8 = (char *)0x22b2;
  pcStack_a = (char *)0xe628;
  FUN_3ab8_37db();
  pcStack_6 = local_bc;
  pcStack_8 = (char *)0x0;
  pcStack_a = local_44;
  uStack_c = 0x22b2;
  uStack_e = 0xe63a;
  iVar1 = func_0x000276d7();
  if (iVar1 != 0) {
    return 0;
  }
  pcStack_6 = (char *)0x254;
  pcStack_8 = local_44;
  pcStack_a = (char *)0x22b2;
  uVar3 = 0x22b2;
  uStack_c = 0xe653;
  iVar1 = FUN_21f2_1348();
  *(int *)0xd70 = iVar1;
  if (iVar1 == 0) {
    pcStack_6 = (char *)0x552;
    pcStack_8 = (char *)0x22b2;
    uVar3 = 0x11f2;
    pcStack_a = (char *)0xe665;
    FUN_13bf_0a03();
  }
  pcStack_6 = (char *)uVar3;
  for (local_46 = 1; local_46 <= local_4a; local_46 = local_46 + 1) {
    pcStack_8 = (char *)0x41;
    pcStack_a = acStack_91 + 1;
    uStack_e = 0xe68a;
    uStack_c = pcStack_6;
    pcStack_6 = (char *)*(undefined2 *)0xd70;
    iVar1 = func_0x0002509c();
    if (iVar1 == 0) {
      pcStack_6 = (char *)0x22b2;
      pcStack_8 = (char *)0xe696;
      func_0x0002504e();
      *(undefined2 *)0xd70 = 0;
      if (local_4a != 9999) {
        return 0;
      }
      return local_46 + -1;
    }
    pcStack_6 = (char *)0x22b2;
  }
  pcStack_8 = (char *)0xe6b4;
  func_0x0002504e();
  *(undefined2 *)0xd70 = 0;
  pcStack_6 = acStack_91 + 1;
  pcStack_8 = (char *)0x22b2;
  pcStack_a = (char *)0xe6c4;
  iVar1 = func_0x00024ce4();
  acStack_91[iVar1] = '\0';
  local_48 = iVar1 + -2;
  pcStack_a = (char *)0x22b2;
  do {
    iVar1 = local_48;
    uVar3 = pcStack_a;
    if (acStack_91[local_48 + 1] == '\0') goto LAB_3ab8_3b78;
    pcStack_6 = (char *)local_48;
    pcStack_8 = acStack_91 + 1;
    uVar3 = 0x2a75;
    uStack_c = 0xe6eb;
    iVar2 = func_0x0002aa38();
    if ((iVar2 == 0) && ((acStack_91[iVar1 + 1] == '\\' || (acStack_91[local_48 + 1] == ':'))))
    goto LAB_3ab8_3b78;
    local_48 = local_48 + -1;
    pcStack_a = (char *)uVar3;
  } while (-1 < local_48);
  local_48 = 0;
LAB_3ab8_3b78:
  iVar1 = local_48;
  if ((int)param_1 < 0) {
    pcStack_8 = (char *)0xbf48;
  }
  else {
    pcStack_a = (char *)uVar3;
    if (*(int *)0xa62 == 0x1b) {
      pcStack_6 = acStack_91 + local_48 + 2;
      pcStack_8 = (char *)0x10;
      uStack_c = 0xe736;
      func_0x000120ec();
      acStack_91[iVar1 + 1] = '\0';
      pcStack_6 = acStack_91 + 1;
      pcStack_8 = (char *)0xf;
      pcStack_a = (char *)0x11f2;
      uStack_c = 0xe74b;
      func_0x000120ec();
      return 1;
    }
    pcStack_6 = acStack_91 + local_48 + 2;
    pcStack_8 = (char *)0xcf6;
    uVar3 = 0x22b2;
    uStack_c = 0xe75e;
    FUN_21f2_3454();
    acStack_91[iVar1 + 1] = '\0';
    pcStack_8 = (char *)0xd18;
  }
  pcStack_6 = acStack_91 + 1;
  uStack_c = 0xe773;
  pcStack_a = (char *)uVar3;
  FUN_21f2_3454();
  return 1;
}



/* 3ab8:3bfd  FUN_3ab8_3bfd  106 bytes, 1 callers */

void __cdecl16far FUN_3ab8_3bfd(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_21f2_0ebc();
  func_0x0000c3ca(0x22b2);
  uVar1 = 0x885;
  func_0x0000daa6(0x885,0);
  for (iVar2 = 2; iVar2 <= *(int *)0x1b42 + -1; iVar2 = iVar2 + 1) {
    FUN_1000_0599(uVar1,0x11,iVar2);
    iVar2 = 0xdef;
    uVar1 = 0xdef;
    func_0x00010526();
  }
  func_0x0000a76b(uVar1,*(int *)0xa5c + 1,*(int *)0xa5e + 1,*(int *)0x1b3e + -1,*(int *)0xa60 + -1);
  func_0x0000a799(0x885);
  *(undefined2 *)0xbc0 = 1;
  return;
}



/* 3ab8:3c67  FUN_3ab8_3c67  55 bytes, 1 callers */

void __cdecl16far FUN_3ab8_3c67(void)

{
  undefined1 local_16 [12];
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xe7f2;
  FUN_21f2_0ebc();
  puStack_4 = (undefined1 *)0x99e;
  puStack_6 = local_16;
  uStack_8 = 0x22b2;
  uStack_a = 0xe7ff;
  FUN_21f2_3454();
  puStack_4 = (undefined1 *)0x3579;
  puStack_6 = local_16;
  uStack_8 = 0x22b2;
  uStack_a = 0xe80e;
  FUN_21f2_2d26();
  puStack_4 = local_16;
  puStack_6 = (undefined1 *)0x22b2;
  uStack_8 = 0xe819;
  FUN_13bf_0a03();
  return;
}



/* 3ab8:3c9e  FUN_3ab8_3c9e  3679 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_3c9e(char *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 uVar10;
  undefined2 unaff_DS;
  char local_1a0;
  undefined1 local_19e [4];
  int local_19a;
  int local_198;
  undefined2 local_196;
  int local_194;
  undefined1 local_192 [4];
  undefined1 local_18e;
  undefined1 local_188 [4];
  int local_184;
  undefined1 local_182 [10];
  undefined1 local_178 [44];
  int local_14c;
  undefined2 local_14a;
  int local_148;
  uint local_146;
  undefined2 local_144;
  int local_142;
  undefined1 local_140 [12];
  undefined1 local_134;
  undefined1 local_12c;
  undefined1 local_f0 [10];
  int local_e6;
  int local_e4;
  undefined1 local_e2 [100];
  int local_7e;
  int local_7c;
  int local_7a;
  int local_78;
  int local_76;
  undefined1 local_74 [10];
  undefined2 local_6a;
  int local_68;
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  int local_58;
  uint local_56;
  undefined1 local_54 [60];
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int local_12;
  undefined1 *puStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  int *piStack_6;
  
  uVar7 = 0x22b2;
  piStack_6 = (int *)0xe829;
  FUN_21f2_0ebc();
  local_6a = 0;
  local_142 = 0;
  local_148 = 0;
  local_194 = 0;
  if (*(int *)0xa62 != 0x1b) {
    if (*(char *)0xcf6 != '\0') {
      piStack_6 = (int *)0xffff;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe854;
      iVar4 = FUN_3ab8_3a89();
      if (iVar4 == 0) {
        return 0;
      }
      piStack_6 = (int *)local_140;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe867;
      FUN_3ab8_3815();
      piStack_6 = (int *)0xbf48;
      puStack_8 = local_140;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0xe876;
      iVar4 = func_0x00024cb8();
      if (iVar4 != 0) {
        local_194 = 1;
      }
    }
    piStack_6 = (int *)0x0;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xe88a;
    func_0x0000daa6();
    piStack_6 = (int *)0x885;
    puStack_8 = (undefined1 *)0xe890;
    func_0x0000c3ca();
    piStack_6 = (int *)0xd18;
    puStack_8 = (undefined1 *)0x26;
    puStack_a = (undefined1 *)0x885;
    puStack_c = (undefined1 *)0xe89d;
    func_0x000120ec();
    piStack_6 = (int *)0xcf6;
    puStack_8 = (undefined1 *)0x27;
    puStack_a = (undefined1 *)0x11f2;
    puStack_c = (undefined1 *)0xe8ac;
    func_0x000120ec();
    piStack_6 = (int *)0x7e6;
    puStack_8 = local_192;
    puStack_a = (undefined1 *)0x11f2;
    puStack_c = (undefined1 *)0xe8bc;
    func_0x00024c86();
    local_18e = 0;
    piStack_6 = (int *)0x357e;
    puStack_8 = local_182;
    puStack_a = (undefined1 *)0x22b2;
    puStack_c = (undefined1 *)0xe8d1;
    func_0x00024c86();
    piStack_6 = (int *)0x3583;
    puStack_8 = local_74;
    puStack_a = (undefined1 *)0x22b2;
    puStack_c = (undefined1 *)0xe8e0;
    func_0x00024c86();
    piStack_6 = (int *)0x358a;
    puStack_8 = local_f0;
    puStack_a = (undefined1 *)0x22b2;
    puStack_c = (undefined1 *)0xe8f0;
    func_0x00024c86();
    piStack_6 = (int *)0x22b2;
    uVar7 = 0x885;
    puStack_8 = (undefined1 *)0xe8f7;
    func_0x0000c3ca();
    local_184 = 0;
    if (*(char *)0xd14 != '\0') {
      local_184 = 0;
      if ((*(char *)0xcf6 != '\0') && (local_194 == 0)) {
        piStack_6 = (int *)local_140;
        puStack_8 = (undefined1 *)0x885;
        puStack_a = (undefined1 *)0xe924;
        FUN_3ab8_3815();
        piStack_6 = (int *)0x3590;
        puStack_8 = local_140;
        puStack_a = (undefined1 *)0x885;
        puStack_c = (undefined1 *)0xe933;
        FUN_21f2_2d26();
        piStack_6 = (int *)0x2;
        puStack_8 = local_140;
        puStack_a = (undefined1 *)0x22b2;
        uVar7 = 0x22b2;
        puStack_c = (undefined1 *)0xe943;
        iVar4 = func_0x00026f7a();
        if ((iVar4 != 0) && (*(int *)0x7a34 == 0xd)) {
          local_184 = 1;
        }
      }
      if (((*(char *)0xcf6 == '\0') || (local_194 != 0)) || (local_184 != 0)) {
        do {
          if (*(char *)0xd14 == '\x16') break;
          puStack_a = (undefined1 *)uVar7;
          if (*(char *)0xcf6 == '\0') {
            piStack_6 = (int *)0x7f2;
            puStack_8 = local_e2;
            puStack_c = (undefined1 *)0xeb22;
            FUN_21f2_3454();
            piStack_6 = (int *)0x35a1;
            puStack_8 = local_e2;
            puStack_a = (undefined1 *)0x22b2;
            puStack_c = (undefined1 *)0xeb32;
            FUN_21f2_2d26();
            piStack_6 = (int *)local_f0;
          }
          else {
            piStack_6 = (int *)0x3a6;
            puStack_8 = local_140;
            puStack_c = (undefined1 *)0xeb49;
            func_0x00024c86();
            local_134 = 0;
            piStack_6 = (int *)local_140;
            puStack_8 = local_e2;
            puStack_a = (undefined1 *)0x22b2;
            puStack_c = (undefined1 *)0xeb5f;
            func_0x00024c86();
            piStack_6 = (int *)0x35a8;
            puStack_8 = local_e2;
            puStack_a = (undefined1 *)0x22b2;
            puStack_c = (undefined1 *)0xeb6f;
            FUN_21f2_2d26();
            if (local_184 == 0) {
              piStack_6 = (int *)0x640;
              puStack_8 = local_e2;
              puStack_a = (undefined1 *)0x22b2;
              puStack_c = (undefined1 *)0xeb9b;
              FUN_21f2_2d26();
              piStack_6 = (int *)0x6a4;
            }
            else {
              piStack_6 = (int *)0x584;
              puStack_8 = local_e2;
              puStack_a = (undefined1 *)0x22b2;
              puStack_c = (undefined1 *)0xeb86;
              FUN_21f2_2d26();
              piStack_6 = (int *)0x860;
            }
            puStack_8 = local_e2;
            puStack_a = (undefined1 *)0x22b2;
            puStack_c = (undefined1 *)0xebab;
            FUN_21f2_2d26();
            piStack_6 = (int *)local_f0;
            puStack_8 = local_e2;
            puStack_a = (undefined1 *)0x22b2;
            puStack_c = (undefined1 *)0xebbc;
            FUN_21f2_2d26();
            piStack_6 = (int *)local_182;
          }
          puStack_8 = local_e2;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xebcd;
          FUN_21f2_2d26();
          piStack_6 = (int *)local_192;
          puStack_8 = local_e2;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xebde;
          FUN_21f2_2d26();
          piStack_6 = (int *)0x35ab;
          puStack_8 = local_e2;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xebee;
          FUN_21f2_2d26();
          piStack_6 = (int *)local_74;
          puStack_8 = local_e2;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xebfe;
          FUN_21f2_2d26();
          piStack_6 = (int *)local_e2;
          puStack_8 = (undefined1 *)0x2;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xec0e;
          FUN_1def_07a4();
          piStack_6 = &local_7c;
          puStack_8 = local_19e;
          puStack_a = local_188;
          puStack_c = local_e2;
          puStack_e = (undefined1 *)0x1;
          puStack_10 = (undefined1 *)0x1bb4;
          uVar7 = 0x1bb4;
          local_12 = -0x13d4;
          local_14a = FUN_1def_0904();
          if (*(int *)0x158 != 0) {
            return 0xfff5;
          }
          if (local_14a == -1) {
            return 0xffff;
          }
          if (local_14a == 1) {
            return 0xff9c;
          }
          if (local_7c == 1) {
            return 0xff9c;
          }
        } while (local_14a != 2);
      }
      else {
        do {
          if ((*(char *)0xd14 == '\x16') || ((param_2 != 0 && (5 < *(byte *)0x123)))) {
LAB_3ab8_3e05:
            puStack_8 = (undefined1 *)0xe98a;
            piStack_6 = (int *)uVar7;
            func_0x0000c3ca();
            piStack_6 = (int *)local_140;
            puStack_8 = (undefined1 *)0x885;
            puStack_a = (undefined1 *)0xe993;
            FUN_3ab8_3815();
            piStack_6 = (int *)0x359c;
            puStack_8 = local_140;
            puStack_a = (undefined1 *)0x885;
            uVar7 = 0x22b2;
            puStack_c = (undefined1 *)0xe9a2;
            FUN_21f2_2d26();
            piStack_6 = (int *)0xd18;
            puStack_8 = (undefined1 *)0xbefe;
            puStack_a = local_140;
            puStack_c = (undefined1 *)0x0;
            pcVar2 = (code *)swi(0x3f);
            (*pcVar2)();
            *(undefined1 *)0xd14 = 0;
            break;
          }
          *(undefined2 *)0xc22 = 1;
          piStack_6 = (int *)0xffff;
          puStack_8 = (undefined1 *)0x6;
          puStack_a = (undefined1 *)0x2;
          puStack_c = (undefined1 *)0x11;
          puStack_e = local_140;
          local_12 = 0xe9e4;
          puStack_10 = (undefined1 *)uVar7;
          FUN_1000_02b5();
          piStack_6 = (int *)0x860;
          puStack_8 = local_e2;
          puStack_a = (undefined1 *)0xdef;
          puStack_c = (undefined1 *)0xe9f5;
          FUN_21f2_3454();
          piStack_6 = (int *)0x652;
          puStack_8 = local_e2;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xea05;
          FUN_21f2_2d26();
          piStack_6 = (int *)0x3595;
          puStack_8 = local_e2;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xea15;
          FUN_21f2_2d26();
          piStack_6 = (int *)0x43a;
          puStack_8 = local_140;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xea25;
          FUN_21f2_3454();
          local_12c = 0;
          piStack_6 = (int *)local_140;
          puStack_8 = local_e2;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xea3b;
          FUN_21f2_2d26();
          piStack_6 = (int *)local_182;
          puStack_8 = local_e2;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xea4c;
          FUN_21f2_2d26();
          piStack_6 = (int *)local_192;
          puStack_8 = local_e2;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xea5d;
          FUN_21f2_2d26();
          piStack_6 = (int *)0x3597;
          puStack_8 = local_e2;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xea6d;
          FUN_21f2_2d26();
          piStack_6 = (int *)0xa33;
          puStack_8 = local_e2;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xea7d;
          FUN_21f2_2d26();
          piStack_6 = (int *)local_74;
          puStack_8 = local_e2;
          puStack_a = (undefined1 *)0x22b2;
          puStack_c = (undefined1 *)0xea8d;
          FUN_21f2_2d26();
          piStack_6 = &local_7c;
          puStack_8 = local_19e;
          puStack_a = local_188;
          puStack_c = local_e2;
          *(undefined2 *)0xc2c = 1;
          puStack_e = (undefined1 *)0x1;
          puStack_10 = (undefined1 *)0x22b2;
          uVar7 = 0x1bb4;
          local_12 = -0x1552;
          local_14a = FUN_1def_0904();
          *(undefined2 *)0xc2c = 0;
          if (*(int *)0x158 != 0) {
            return 0xfff5;
          }
          if ((local_14a == -1) || (local_7c == 0x14)) {
            return 0xffff;
          }
          if ((local_14a == 1) || (local_7c == 1)) goto LAB_3ab8_3e05;
          if ((local_14a == 2) || (local_7c == 2)) {
            return 0xff9c;
          }
        } while (local_14a != 3);
      }
    }
  }
LAB_3ab8_40db:
  if ((((*(char *)0x7e != '\0') && (*(char *)0xd14 != '\x04')) && (*(char *)0xd14 != '\0')) &&
     (1 < *(byte *)0x84)) {
    puStack_8 = (undefined1 *)0xec7c;
    piStack_6 = (int *)uVar7;
    func_0x0000c3ca();
    piStack_6 = (int *)0xb2fe;
    puStack_8 = (undefined1 *)0x90;
    puStack_a = local_e2;
    puStack_c = (undefined1 *)0x885;
    uVar7 = 0x11f2;
    puStack_e = (undefined1 *)0xec8e;
    func_0x0001263c();
    piStack_6 = (int *)0x90;
    puStack_8 = (undefined1 *)0xbefe;
    puStack_a = local_e2;
    puStack_c = (undefined1 *)0x1;
    pcVar2 = (code *)swi(0x3f);
    (*pcVar2)();
    *(undefined1 *)0xd14 = 4;
  }
  puStack_8 = (undefined1 *)0xecb4;
  piStack_6 = (int *)uVar7;
  func_0x0000c3ca();
  if (param_2 != 0) {
    return 0;
  }
  piStack_6 = (int *)0x35b0;
  puStack_8 = local_64;
  puStack_a = (undefined1 *)0x885;
  puStack_c = (undefined1 *)0xecca;
  FUN_21f2_3454();
  piStack_6 = (int *)0x35b1;
  puStack_8 = local_60;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0xecd9;
  FUN_21f2_3454();
  piStack_6 = (int *)0x35b3;
  puStack_8 = local_5c;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0xece8;
  FUN_21f2_3454();
  local_e4 = *(int *)0x1b42 + -5;
  piStack_6 = (int *)0x22b2;
  puStack_8 = (undefined1 *)0xecf8;
  FUN_3ab8_3bfd();
  piStack_6 = (int *)0x0;
  puStack_8 = (undefined1 *)0x0;
  puStack_a = (undefined1 *)0x2;
  puStack_c = (undefined1 *)0x6;
  puStack_e = (undefined1 *)0x2f;
  puStack_10 = (undefined1 *)(*(int *)0x1b3e + -1);
  local_12 = 0x20;
  iStack_14 = *(int *)0xa5c + 1;
  uStack_16 = 0x22b2;
  uStack_18 = 0xed1f;
  func_0x0000f350();
  piStack_6 = (int *)0x0;
  puStack_8 = (undefined1 *)0x0;
  puStack_a = (undefined1 *)0x2;
  puStack_c = (undefined1 *)0x6;
  puStack_e = (undefined1 *)(*(int *)0xa5a + -1);
  puStack_10 = (undefined1 *)(*(int *)0x1b3e + -1);
  local_12 = (2 - *(int *)0x1b42) * -0x10;
  iStack_14 = *(int *)0xa5c + 1;
  uStack_16 = 0xdef;
  uStack_18 = 0xed52;
  func_0x0000f350();
  piStack_6 = (int *)0x0;
  puStack_8 = (undefined1 *)0x0;
  puStack_a = (undefined1 *)0x3;
  puStack_c = (undefined1 *)0x14;
  puStack_e = (undefined1 *)0x35b5;
  puStack_10 = (undefined1 *)0xdef;
  local_12 = 0xed6a;
  FUN_1000_02b5();
  piStack_6 = (int *)0x0;
  puStack_8 = (undefined1 *)0x0;
  puStack_a = (undefined1 *)0x3;
  puStack_c = (undefined1 *)0x4b;
  puStack_e = (undefined1 *)0x35b8;
  puStack_10 = (undefined1 *)0xdef;
  local_12 = 0xed82;
  FUN_1000_02b5();
  piStack_6 = (int *)0x0;
  puStack_8 = (undefined1 *)0x0;
  puStack_a = (undefined1 *)(*(int *)0x1b42 + -1);
  puStack_c = (undefined1 *)0x14;
  puStack_e = (undefined1 *)0x35bb;
  puStack_10 = (undefined1 *)0xdef;
  local_12 = 0xed9c;
  FUN_1000_02b5();
  piStack_6 = (int *)0x0;
  puStack_8 = (undefined1 *)0x0;
  puStack_a = (undefined1 *)(*(int *)0x1b42 + -1);
  puStack_c = (undefined1 *)0x4b;
  puStack_e = (undefined1 *)0x35be;
  puStack_10 = (undefined1 *)0xdef;
  local_12 = 0xedb6;
  FUN_1000_02b5();
  piStack_6 = (int *)0x0;
  puStack_8 = (undefined1 *)0x0;
  puStack_a = (undefined1 *)0x0;
  puStack_c = (undefined1 *)0x7;
  puStack_e = (undefined1 *)*(undefined2 *)0xa5a;
  puStack_10 = (undefined1 *)*(int *)0x1b3e;
  local_12 = *(int *)0xa5a;
  iStack_14 = *(undefined2 *)0xa5c;
  uStack_16 = 0xdef;
  puVar8 = (undefined1 *)0xdef;
  uStack_18 = 0xedd7;
  func_0x0000f350();
  if ((*(char *)0x326c != '\0') && (*(int *)0xa62 != 0x1b)) {
    piStack_6 = (int *)0x0;
    puStack_8 = (undefined1 *)0x0;
    puStack_a = (undefined1 *)0x3;
    puStack_c = (undefined1 *)0x16;
    puStack_e = (undefined1 *)0xd18;
    puStack_10 = (undefined1 *)0xdef;
    puVar8 = (undefined1 *)0xdef;
    local_12 = -0x1203;
    FUN_1000_02b5();
  }
LAB_3ab8_4280:
  puVar9 = (undefined1 *)0x885;
  puStack_8 = (undefined1 *)0xee05;
  piStack_6 = (int *)puVar8;
  func_0x0000c3ca();
  piStack_6 = (int *)0x270f;
  puStack_8 = (undefined1 *)0x885;
  puStack_a = (undefined1 *)0xee0d;
  local_78 = FUN_3ab8_3a89();
  if (local_78 < 1) {
LAB_3ab8_4b65:
    puStack_8 = (undefined1 *)0xf6e9;
    piStack_6 = (int *)puVar9;
    FUN_3ab8_3bfd();
    piStack_6 = (int *)0x0;
    puStack_a = (undefined1 *)0xf6f1;
    puStack_8 = puVar9;
    func_0x0001470b();
    if (*param_1 == '\0') {
      *param_1 = (char)local_148 * '\n' + (char)local_142;
      return local_6a;
    }
    return local_6a;
  }
  local_12 = 1;
  local_198 = 1;
  local_68 = local_78 + -0x13;
  puVar8 = puVar9;
  if (local_68 < 1) {
    local_68 = 1;
  }
LAB_3ab8_42b5:
  local_e2[0] = 0;
  piStack_6 = (int *)local_54;
  puStack_a = (undefined1 *)0xee42;
  puStack_8 = puVar8;
  FUN_3ab8_37db();
  piStack_6 = (int *)local_178;
  puStack_8 = (undefined1 *)0x0;
  puStack_a = local_54;
  puStack_e = (undefined1 *)0xee54;
  puStack_c = puVar8;
  iVar4 = func_0x000276d7();
  if (iVar4 == 0) {
    piStack_6 = (int *)0x254;
    puStack_8 = local_54;
    puStack_a = (undefined1 *)0x22b2;
    uVar7 = 0x22b2;
    puStack_c = (undefined1 *)0xee70;
    iVar4 = FUN_21f2_1348();
    *(int *)0xd70 = iVar4;
    if (iVar4 == 0) {
      piStack_6 = (int *)0x552;
      puStack_8 = (undefined1 *)0x22b2;
      uVar7 = 0x11f2;
      puStack_a = (undefined1 *)0xee82;
      FUN_13bf_0a03();
    }
    piStack_6 = (int *)0x2;
    puStack_8 = (undefined1 *)0x11;
    puStack_c = (undefined1 *)0xee90;
    puStack_a = (undefined1 *)uVar7;
    FUN_1000_0599();
    piStack_6 = (int *)0xdef;
    puStack_8 = (undefined1 *)0xee97;
    func_0x00010526();
    piStack_6 = (int *)0x2;
    puStack_8 = (undefined1 *)0x16;
    puStack_a = (undefined1 *)0xdef;
    puStack_c = (undefined1 *)0xeea4;
    FUN_1000_0599();
    piStack_6 = (int *)local_78;
    puStack_8 = (undefined1 *)local_198;
    puStack_a = (undefined1 *)0x860;
    puStack_c = (undefined1 *)0x35c1;
    puStack_e = (undefined1 *)0xdef;
    puStack_10 = (undefined1 *)0xeeba;
    func_0x00012276();
    piStack_6 = (int *)0x2;
    puStack_8 = (undefined1 *)0x46;
    puStack_a = (undefined1 *)0x11f2;
    puStack_c = (undefined1 *)0xeeca;
    FUN_1000_0599();
    piStack_6 = (int *)*(undefined2 *)0x11f0;
    puStack_8 = (undefined1 *)0x35ca;
    puStack_a = (undefined1 *)0xdef;
    puStack_c = (undefined1 *)0xeed9;
    func_0x00012276();
    local_58 = local_12 + -1;
    local_7a = 0;
    local_19a = 0;
    local_14c = 0;
    local_7e = 1;
    do {
      if (param_1[local_7e] != '\0') {
        local_7a = local_7a + 1;
      }
      local_7e = local_7e + 1;
    } while (local_7e < 0xc9);
    piStack_6 = (int *)0x2;
    puStack_8 = (undefined1 *)0x28;
    puStack_a = (undefined1 *)0x11f2;
    puStack_c = (undefined1 *)0xef19;
    FUN_1000_0599();
    piStack_6 = (int *)local_7a;
    puStack_8 = (undefined1 *)0x35d1;
    puStack_a = (undefined1 *)0xdef;
    puStack_c = (undefined1 *)0xef27;
    func_0x00012276();
    puVar8 = (undefined1 *)0x11f2;
    do {
      do {
        piStack_6 = (int *)*(undefined2 *)0xd70;
        puStack_8 = (undefined1 *)0x41;
        puStack_a = (undefined1 *)0xbf48;
        puVar9 = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xef3a;
        puStack_c = puVar8;
        iVar4 = func_0x0002509c();
        if (iVar4 == 0) goto LAB_3ab8_43c1;
        local_14c = local_14c + 1;
        puVar8 = puVar9;
      } while (local_14c < local_12);
      piStack_6 = (int *)0xbf48;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xef6e;
      iVar4 = func_0x00024ce4();
      local_e6 = iVar4 + -1;
      if (-1 < local_e6) {
        *(undefined1 *)(iVar4 + -0x40b9) = 0;
      }
      local_144 = 0;
      local_58 = local_58 + 1;
      if (local_58 == local_198) {
        local_144 = 0xffff;
      }
      local_196 = 7;
      if (((local_58 == 1) && (*(char *)0xcf6 != '\0')) &&
         ((local_194 == 0 && (*(int *)0xa62 != 0x1b)))) {
        local_196 = 5;
      }
      piStack_6 = (int *)(local_19a + 4);
      puStack_8 = (undefined1 *)0x11;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0xefd3;
      local_19a = local_19a + 1;
      FUN_1000_0599();
      piStack_6 = (int *)0xdef;
      puStack_8 = (undefined1 *)0xefda;
      func_0x00010526();
      local_146 = (uint)(byte)param_1[local_58];
      if (2 < (byte)param_1[local_58]) {
        local_146 = 1;
      }
      if ((local_146 != 0) && (*param_1 != '\0')) {
        local_146 = 1;
      }
      piStack_6 = (int *)0x0;
      puStack_8 = (undefined1 *)0x6;
      puVar8 = (undefined1 *)(local_19a + 3);
      puStack_c = (undefined1 *)0x14;
      puStack_e = local_64 + local_146 * 4;
      puStack_10 = (undefined1 *)0xdef;
      local_12 = 0xf031;
      puStack_a = puVar8;
      FUN_1000_02b5();
      piStack_6 = (int *)local_144;
      puStack_8 = (undefined1 *)local_196;
      puStack_c = (undefined1 *)0x16;
      puStack_e = (undefined1 *)0xbf48;
      puStack_10 = (undefined1 *)0xdef;
      puVar9 = (undefined1 *)0xdef;
      local_12 = -0xfb6;
      puStack_a = puVar8;
      FUN_1000_02b5();
      puVar8 = puVar9;
    } while (local_19a < local_e4);
LAB_3ab8_43c1:
    puVar8 = (undefined1 *)0x22b2;
    puStack_8 = (undefined1 *)0xef46;
    piStack_6 = (int *)puVar9;
    func_0x0002504e();
    *(undefined2 *)0xd70 = 0;
    if (local_58 != 0) {
      for (local_7e = local_19a + 4; local_7e <= *(int *)0x1b42 + -2; local_7e = local_7e + 1) {
        piStack_6 = (int *)local_7e;
        puStack_8 = (undefined1 *)0x11;
        puStack_c = (undefined1 *)0xf075;
        puStack_a = puVar8;
        FUN_1000_0599();
        piStack_6 = (int *)0xdef;
        puVar8 = (undefined1 *)0xdef;
        puStack_8 = (undefined1 *)0xf07c;
        func_0x00010526();
      }
LAB_3ab8_4509:
      puStack_a = puVar8;
      if (*param_1 == '\0') {
        piStack_6 = (int *)0x35d8;
        puStack_8 = local_e2;
        puStack_c = (undefined1 *)0xf09f;
        FUN_21f2_3454();
        piStack_6 = (int *)0x518;
        puStack_8 = local_e2;
        puStack_a = (undefined1 *)0x22b2;
        puStack_c = (undefined1 *)0xf0af;
        FUN_21f2_2d26();
        piStack_6 = (int *)0x35db;
        puStack_8 = local_e2;
        puStack_a = (undefined1 *)0x22b2;
        puStack_c = (undefined1 *)0xf0bf;
        FUN_21f2_2d26();
        piStack_6 = (int *)0x7ec;
      }
      else {
        piStack_6 = (int *)0x35de;
        puStack_8 = local_e2;
        puStack_c = (undefined1 *)0xf0d4;
        FUN_21f2_3454();
        piStack_6 = (int *)0x42e;
        puStack_8 = local_e2;
        puStack_a = (undefined1 *)0x22b2;
        puStack_c = (undefined1 *)0xf0e4;
        FUN_21f2_2d26();
        piStack_6 = (int *)0x35e3;
        puStack_8 = local_e2;
        puStack_a = (undefined1 *)0x22b2;
        puStack_c = (undefined1 *)0xf0f4;
        FUN_21f2_2d26();
        piStack_6 = (int *)0x302;
        puStack_8 = local_e2;
        puStack_a = (undefined1 *)0x22b2;
        puStack_c = (undefined1 *)0xf104;
        FUN_21f2_2d26();
        piStack_6 = (int *)0x35e6;
        puStack_8 = local_e2;
        puStack_a = (undefined1 *)0x22b2;
        puStack_c = (undefined1 *)0xf114;
        FUN_21f2_2d26();
        piStack_6 = (int *)0x99e;
        puStack_8 = local_e2;
        puStack_a = (undefined1 *)0x22b2;
        puStack_c = (undefined1 *)0xf124;
        FUN_21f2_2d26();
        piStack_6 = (int *)0x35ec;
      }
      puStack_8 = local_e2;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0xf134;
      FUN_21f2_2d26();
      piStack_6 = (int *)0x35f2;
      puStack_8 = local_e2;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0xf144;
      FUN_21f2_2d26();
      piStack_6 = (int *)local_e2;
      puStack_8 = (undefined1 *)0x2;
      puStack_a = (undefined1 *)0x22b2;
      uVar7 = 0x1bb4;
      puStack_c = (undefined1 *)0xf154;
      FUN_1def_07a4();
      piStack_6 = (int *)uVar7;
      if (*param_1 == '\0') {
        if ((local_142 != 0) || (local_148 != 0)) {
          piStack_6 = (int *)0x3604;
          puStack_8 = local_e2;
          puStack_a = (undefined1 *)0x1bb4;
          uVar7 = 0x22b2;
          puStack_c = (undefined1 *)0xf17a;
          FUN_21f2_2d26();
        }
        uVar10 = uVar7;
        if (local_142 != 0) {
          piStack_6 = (int *)0x60a;
          puStack_8 = local_e2;
          uVar10 = 0x22b2;
          puStack_c = (undefined1 *)0xf191;
          puStack_a = (undefined1 *)uVar7;
          FUN_21f2_2d26();
        }
        piStack_6 = (int *)uVar10;
        if (local_148 != 0) {
          piStack_6 = (int *)0x804;
          puStack_8 = local_e2;
          puStack_c = (undefined1 *)0xf1a8;
          puStack_a = (undefined1 *)uVar10;
          FUN_21f2_2d26();
          piStack_6 = (int *)0x22b2;
        }
      }
      do {
        puStack_8 = (undefined1 *)0xf1af;
        iVar4 = FUN_1000_0632();
        piStack_6 = (int *)0xdef;
      } while (iVar4 != 0);
      *(undefined2 *)0xb6a = 0;
      *(undefined2 *)0xc26 = 0x20;
      *(undefined2 *)0xc2c = 1;
      *(undefined2 *)0xc28 = 1;
      piStack_6 = &local_7c;
      puStack_8 = local_19e;
      puStack_a = local_188;
      puStack_c = local_e2;
      puStack_e = (undefined1 *)0x270f;
      puStack_10 = (undefined1 *)0xdef;
      puVar8 = (undefined1 *)0x1bb4;
      local_12 = -0xe1f;
      local_14a = FUN_1def_0904();
      *(undefined2 *)0xb6a = 0;
      *(undefined2 *)0xc26 = 0;
      *(undefined2 *)0xc28 = 0;
      *(undefined2 *)0xc2c = 0;
      puVar9 = puVar8;
      if (*(int *)0x158 != 0) goto LAB_3ab8_4b65;
      if ((*param_1 == '\0') && (*(char *)0x326c != '\0')) {
        if (local_14a == 0x6200) {
          if (local_142 == 0) {
            local_142 = 1;
          }
          else {
            local_142 = 0;
          }
          goto LAB_3ab8_4509;
        }
        if (local_14a == 0x6300) {
          if (local_148 == 0) {
            local_148 = 1;
          }
          else {
            local_148 = 0;
          }
          goto LAB_3ab8_4509;
        }
      }
      if ((local_7c == 1) && (*(int *)0xa62 != 0x1b)) {
        piStack_6 = (int *)0x1bb4;
        puVar8 = (undefined1 *)0x885;
        puStack_8 = (undefined1 *)0xf25c;
        bVar3 = func_0x0000db57();
        if ((bVar3 & 0xe) == 6) goto code_r0x0003f262;
      }
      if ((local_7c != 0) || (local_14a == 0xd)) {
        puStack_8 = (undefined1 *)0xf2e4;
        piStack_6 = (int *)puVar8;
        func_0x000297e6();
        piStack_6 = (int *)0x22b2;
        puStack_8 = (undefined1 *)0xf2ed;
        FUN_28b3_100d();
        piStack_6 = (int *)0x22b2;
        puStack_8 = (undefined1 *)0xf2f6;
        func_0x00029b6d();
        piStack_6 = (int *)0x22b2;
        puStack_8 = (undefined1 *)0xf2ff;
        FUN_28b3_0d8b();
        piStack_6 = (int *)0x22b2;
        puStack_8 = (undefined1 *)0xf304;
        FUN_28b3_1168();
        piStack_6 = (int *)0x22b2;
        puStack_8 = (undefined1 *)0xf309;
        func_0x00029d78();
        piStack_6 = (int *)0x22b2;
        puVar8 = (undefined1 *)0x22b2;
        puStack_8 = (undefined1 *)0xf30e;
        uVar5 = FUN_28b3_0f51();
        uVar6 = (int)uVar5 >> 0xf;
        local_76 = (((int)((uVar5 ^ uVar6) - uVar6) >> 4 ^ uVar6) - uVar6) + -2;
        if (((0 < local_76) && (local_76 <= local_e4)) || (local_14a == 0xd)) {
          local_76 = local_76 + local_12 + -1;
          if (((local_7c == 1) && (local_76 == local_198)) || (local_14a == 0xd)) {
            piStack_6 = (int *)0x22b2;
            puStack_8 = (undefined1 *)0xf35a;
            FUN_3ab8_3bfd();
            *(undefined1 *)0xcf4 = 4;
            piStack_6 = (int *)local_198;
            puStack_8 = (undefined1 *)0x22b2;
            puStack_a = (undefined1 *)0xf367;
            iVar4 = FUN_3ab8_3a89();
            if (iVar4 != 1) {
              piStack_6 = (int *)0x22b2;
              puStack_8 = (undefined1 *)0xf36f;
              FUN_3ab8_3c67();
            }
            if (*(int *)0xa62 != 0x1b) {
              if ((*(char *)0x7e != '\0') && (*(byte *)0x7e < 10)) {
                *(char *)0x7e = *(char *)0x7e + '\n';
              }
              piStack_6 = (int *)0x4;
              pcVar2 = (code *)swi(0x3f);
              iVar4 = (*pcVar2)();
              if (iVar4 != 1) {
                FUN_3ab8_3c67();
              }
              piStack_6 = (int *)0xf3ac;
              iVar4 = FUN_3ab8_3890();
              if (iVar4 == 0) {
                FUN_3ab8_3c67();
              }
              *(undefined1 *)0xcf4 = 0;
              cVar1 = param_1[local_198];
              for (local_7e = local_198; 1 < local_7e; local_7e = local_7e + -1) {
                param_1[local_7e] = (param_1 + local_7e)[-1];
              }
              param_1[1] = cVar1;
              return 0xfffe;
            }
            *(undefined1 *)0xcf4 = 0;
            return 10;
          }
          if ((0 < local_76) && (local_76 <= local_78)) {
            local_198 = local_76;
          }
          if (local_7c == 1) goto LAB_3ab8_42b5;
        }
        if (local_76 < 1) {
          local_14a = 0x3600;
        }
        if (local_e4 < local_76) {
          local_14a = 0x3700;
        }
      }
      piStack_6 = (int *)puVar8;
      if (local_14a._1_1_ != '>') {
        if (local_7c == 2) {
          local_14a = 0x20;
        }
        if ((local_14a == 0x3d00) || (local_14a == 0x20)) {
          puVar8 = (undefined1 *)0x885;
          puStack_8 = (undefined1 *)0xf4ac;
          bVar3 = func_0x0000db57();
          if ((bVar3 & 0xe) == 2) {
            local_14a = 0x47;
          }
          if (local_14a != 0x3d00) {
            local_56 = (uint)(byte)param_1[local_198];
            if (local_56 == 0) {
              if (local_14a == 0x47) {
LAB_3ab8_4984:
                param_1[local_198] = '\x02';
              }
              else {
                param_1[local_198] = '\x01';
              }
            }
            else {
              if (local_14a == 0x20) {
                if (local_56 == 1) {
                  param_1[local_198] = '\0';
                }
                else {
                  param_1[local_198] = '\x01';
                }
              }
              if (local_14a == 0x47) {
                if (local_56 != 2) goto LAB_3ab8_4984;
                param_1[local_198] = '\0';
              }
            }
            if (local_7c == 2) goto LAB_3ab8_42b5;
          }
          local_198 = local_198 + 1;
          if (local_78 < local_198) {
            local_198 = local_78;
          }
          if (local_58 < local_198) {
            iVar4 = (local_198 - local_e4) + 1;
LAB_3ab8_49be:
            local_12 = iVar4;
          }
          goto LAB_3ab8_42b5;
        }
        if (local_14a == 0x3a00) {
          iVar4 = local_198 + -1;
          local_198 = iVar4;
          if (iVar4 < 1) {
            local_198 = 1;
            iVar4 = local_198;
          }
LAB_3ab8_49e1:
          if (iVar4 < local_12) goto LAB_3ab8_49be;
          goto LAB_3ab8_42b5;
        }
        if (local_14a == 0x3700) {
          local_198 = local_198 + local_e4;
          if (local_78 < local_198) {
            local_198 = local_78;
          }
          local_12 = local_12 + local_e4;
          iVar4 = local_78;
          goto LAB_3ab8_49e1;
        }
        if (local_14a == 0x3600) {
          local_198 = local_198 - local_e4;
          if (local_198 < 1) {
            local_198 = 1;
          }
          local_12 = local_12 - local_e4;
          if (local_12 < 1) {
            local_12 = 1;
          }
          goto LAB_3ab8_42b5;
        }
        puVar9 = puVar8;
        if (((local_14a == -1) || (local_14a == 2)) || (local_14a == 0x14)) {
          local_6a = 0xffff;
          goto LAB_3ab8_4b65;
        }
        if ((local_14a == 1) && (*param_1 != '\0')) {
          local_14a = 3;
        }
        if (local_14a == 1) {
          local_6a = 1;
          if (local_7a < 1) {
            param_1[local_198] = '\x01';
          }
          goto LAB_3ab8_4b65;
        }
        if (local_14a == 3) goto LAB_3ab8_4a9c;
        goto LAB_3ab8_4509;
      }
      local_1a0 = '\x01';
      puStack_8 = (undefined1 *)0xf439;
      bVar3 = func_0x0000db57();
      if ((bVar3 & 0xe) == 2) {
        local_1a0 = '\x02';
      }
      puVar8 = (undefined1 *)0x885;
      if (local_7a == 0) {
        for (local_7e = local_78; 0 < local_7e; local_7e = local_7e + -1) {
          param_1[local_7e] = local_1a0;
        }
      }
      else {
        for (local_7e = 200; 0 < local_7e; local_7e = local_7e + -1) {
          param_1[local_7e] = '\0';
        }
      }
      goto LAB_3ab8_42b5;
    }
  }
  local_6a = 0;
  puVar9 = (undefined1 *)0x22b2;
  goto LAB_3ab8_4b65;
code_r0x0003f262:
  if (*(char *)0x326c == '\0') {
    *(undefined1 *)0x326c = 1;
  }
  else {
    *(undefined1 *)0x326c = 0;
  }
  piStack_6 = (int *)0x885;
  uVar7 = 0x885;
  puStack_8 = (undefined1 *)0xf27a;
  func_0x0000c3ca();
  local_7e = 200;
  do {
    param_1[local_7e] = '\0';
    local_7e = local_7e + -1;
  } while (0 < local_7e);
  if ((*(char *)0x326c != '\0') && (*(int *)0xa62 != 0x1b)) {
    pcVar2 = (code *)swi(0x3f);
    iVar4 = (*pcVar2)();
    if (iVar4 == 0) {
      *(undefined1 *)0x326c = 0;
    }
    else if (local_194 == 0) {
      piStack_6 = (int *)0x0;
      puStack_8 = (undefined1 *)0x885;
      puStack_a = (undefined1 *)0xf2bf;
      FUN_3ab8_3890();
    }
  }
  goto LAB_3ab8_40db;
LAB_3ab8_4a9c:
  *(undefined2 *)0xb6a = 0;
  *(undefined2 *)0xc26 = 1;
  *(undefined2 *)0xc28 = 1;
  piStack_6 = &local_7c;
  puStack_8 = local_19e;
  puStack_a = local_188;
  puStack_c = (undefined1 *)0x482;
  puStack_e = (undefined1 *)0x270f;
  puVar9 = (undefined1 *)0x1bb4;
  local_12 = -0x9ba;
  puStack_10 = puVar8;
  local_146 = FUN_1def_0904();
  *(undefined2 *)0xb6a = 0;
  *(undefined2 *)0xc26 = 0;
  *(undefined2 *)0xc28 = 0;
  if (*(int *)0x158 != 0) goto LAB_3ab8_4b65;
  piStack_6 = (int *)0x1bb4;
  puVar8 = (undefined1 *)0x885;
  puStack_8 = (undefined1 *)0xf666;
  func_0x0000c3ca();
  if (local_146 == 1) goto LAB_3ab8_4af0;
  goto LAB_3ab8_42b5;
LAB_3ab8_4af0:
  if (local_7a < 1) {
    param_1[local_198] = '\x01';
  }
  if (*(char *)0xcf6 != '\0') {
    param_1[1] = '\0';
  }
  for (local_7e = 200; 0 < local_7e; local_7e = local_7e + -1) {
    puVar9 = puVar8;
    if (param_1[local_7e] != '\0') {
      piStack_6 = (int *)0x1;
      puStack_8 = (undefined1 *)0x2c;
      puVar9 = (undefined1 *)0xdef;
      puStack_c = (undefined1 *)0xf6b9;
      puStack_a = puVar8;
      FUN_1000_0599();
      if (0 < local_7a) {
        piStack_6 = (int *)local_7e;
        puStack_8 = (undefined1 *)0x360b;
        puStack_a = (undefined1 *)0xdef;
        puVar9 = (undefined1 *)0x11f2;
        puStack_c = (undefined1 *)0xf6cd;
        func_0x00012276();
      }
      piStack_6 = (int *)-local_7e;
      puStack_a = (undefined1 *)0xf6d9;
      puStack_8 = puVar9;
      FUN_3ab8_3890();
      param_1[local_7e] = '\0';
    }
    puVar8 = puVar9;
  }
  goto LAB_3ab8_4280;
}



/* 3ab8:4b8e  FUN_3ab8_4b8e  112 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_4b8e(undefined2 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_d2 [198];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  int local_6;
  
  uVar3 = 0x22b2;
  local_6 = 0xf719;
  FUN_21f2_0ebc();
  while( true ) {
    local_6 = 1;
    do {
      local_d2[local_6] = 0;
      local_6 = local_6 + 1;
    } while (local_6 < 0xcb);
    puStack_8 = (undefined1 *)0xf736;
    local_6 = uVar3;
    func_0x0000c3ca();
    local_d2[0] = 1;
    local_6 = 0;
    puStack_8 = local_d2;
    uStack_a = 0x885;
    uStack_c = 0xf747;
    iVar2 = FUN_3ab8_3c9e();
    if (*(int *)0x158 != 0) {
      return 0xfff5;
    }
    if (iVar2 == -1) {
      return 0xffff;
    }
    if (iVar2 != -100) break;
    local_6 = 0x885;
    puStack_8 = (undefined1 *)0xf767;
    func_0x0000c3ca();
    *(undefined1 *)0xd15 = 1;
    local_6 = param_1;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
    *(undefined1 *)0xd15 = 0;
    if (*(int *)0x158 != 0) {
      return 0xfff5;
    }
    local_6 = 0x885;
    puStack_8 = (undefined1 *)0xf78e;
    FUN_1000_0599();
    uVar3 = 0xdef;
    func_0x00010526();
    if (*(char *)0xd14 != '\0') {
      return 0;
    }
  }
  return 0;
}



/* 3000:f7ac  FUN_3000_f7ac  100 bytes, 0 callers */

int __cdecl16far FUN_3000_f7ac(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar9;
  undefined2 local_142 [12];
  undefined1 auStack_12a [204];
  int iStack_5e;
  int iStack_5c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puVar10;
  
  FUN_21f2_0ebc();
  func_0x0000c3ca();
  func_0x000297e6();
  func_0x00029d78();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf7d5;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf7dd;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xf7e2;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0xf7ec;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uStack_1a = 0xf7f1;
  iVar4 = func_0x0001b204();
  if (iVar4 < 1) {
    return -1;
  }
  uStack_c = 0xf804;
  puVar9 = (undefined2 *)func_0x00000398();
  puVar6 = (undefined2 *)puVar9;
  puVar7 = local_142;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  uStack_c = 0xbf48;
  uStack_e = 0;
  uStack_10 = 0xf827;
  FUN_1885_0344();
  uStack_c = 0xf833;
  iVar4 = func_0x00024ce4();
  iStack_5e = iVar4 + -1;
  if ((((iStack_5e < 5) ||
       ((*(char *)(iVar4 + -0x40b9) != 'C' && (*(char *)(iVar4 + -0x40b9) != 'c')))) ||
      ((*(char *)(iVar4 + -0x40ba) != 'W' && (*(char *)(iVar4 + -0x40ba) != 'w')))) ||
     (((*(char *)(iVar4 + -0x40bb) != 'J' && (*(char *)(iVar4 + -0x40bb) != 'j')) ||
      (*(char *)(iVar4 + -0x40bc) != '.')))) {
LAB_3ab8_4cf0:
    *(undefined2 *)0xc22 = 1;
    uStack_c = 2;
    uStack_e = 0x28;
    uStack_10 = 0x4a4;
    uStack_12 = 0x22b2;
    uStack_14 = 0xf88f;
    FUN_1000_02b5();
  }
  else {
    uStack_c = 0x22b2;
    for (iStack_5c = 0; iStack_5c <= iStack_5e; iStack_5c = iStack_5c + 1) {
      pbVar5 = (byte *)(iStack_5c + -0x40b8);
      uVar8 = uStack_c;
      if ((0x60 < *pbVar5) && (*pbVar5 < 0x7b)) {
        uVar8 = 0x2a75;
        uStack_e = 0xf8bf;
        iVar4 = func_0x0002aa38();
        if (iVar4 == 0) {
          *pbVar5 = *pbVar5 - 0x20;
        }
      }
      uStack_c = uVar8;
    }
    puVar10 = (undefined1 *)0x0;
    for (iStack_5e = iStack_5e + -4; uVar8 = uStack_c, 0 < iStack_5e; iStack_5e = iStack_5e + -1) {
      if (*(char *)(iStack_5e + -0x40b8) == '\\') {
        uVar8 = 0x2a75;
        uStack_e = 0xf8f9;
        iVar4 = func_0x0002aa38();
        if (iVar4 == 0) {
          puVar10 = (undefined1 *)(iStack_5e + -0x40b8);
          break;
        }
      }
      uStack_c = uVar8;
    }
    uStack_c = uVar8;
    if (puVar10 == (undefined1 *)0x0) {
      uStack_e = 0xf991;
      func_0x00024c86();
LAB_3ab8_4e16:
      uStack_c = 0x22b2;
      uStack_e = 0xf9a0;
      func_0x00024c86();
      uStack_c = 0x22b2;
      uStack_e = 0xf9af;
      func_0x00024c86();
      uStack_c = 0xf9ba;
      iVar4 = func_0x00024ce4();
      iStack_5e = iVar4 + -1;
      uStack_c = 0x22b2;
      if (*(char *)(iVar4 + -0x40b9) == '\\') {
        uStack_c = 0x22b2;
        uVar8 = 0x2a75;
        uStack_e = 0xf9d2;
        iVar4 = func_0x0002aa38();
        uStack_c = uVar8;
        if (iVar4 != 0) goto LAB_3ab8_4e58;
      }
      else {
LAB_3ab8_4e58:
        uVar8 = 0x22b2;
        uStack_e = 0xf9e5;
        FUN_21f2_2d26();
      }
      uStack_e = 0xf9f4;
      uStack_c = uVar8;
      FUN_21f2_2d26();
      if (*(char *)0xbf48 == '\0') goto LAB_3ab8_4cf0;
      uStack_c = 0xbf48;
      uStack_e = 0x22b2;
      uVar8 = 0x22b2;
      uStack_10 = 0xfa11;
      iVar4 = func_0x000276d7();
      if (iVar4 == 0) {
        uStack_c = 0x22b2;
        uStack_e = 0xfa4a;
        puVar10 = (undefined1 *)func_0x00025b06();
        if (puVar10 != (undefined1 *)0x0) {
          *puVar10 = 0;
        }
        if (*(int *)0xa62 == 0x1b) {
          uStack_c = 0x22b2;
          uStack_e = 0xfa6c;
          func_0x000120ec();
          uStack_c = 0x11f2;
          uStack_e = 0xfa7b;
          func_0x000120ec();
          return 0;
        }
        do {
          iStack_5c = 1;
          do {
            auStack_12a[iStack_5c] = 0;
            iStack_5c = iStack_5c + 1;
          } while (iStack_5c < 0xcb);
          uVar8 = 0x885;
          func_0x0000c3ca();
          auStack_12a[0] = 1;
          uStack_c = 0x885;
          uStack_e = 0xfab0;
          iVar4 = FUN_3ab8_3c9e();
          if (*(int *)0x158 != 0) {
            return -0xb;
          }
          if (iVar4 == -1) goto LAB_3ab8_4f8e;
          if (iVar4 != -100) break;
          func_0x0000c3ca();
          *(undefined1 *)0xd15 = 1;
          pcVar3 = (code *)swi(0x3f);
          (*pcVar3)();
          *(undefined1 *)0xd15 = 0;
          if (*(int *)0x158 != 0) {
            return -0xb;
          }
          FUN_1000_0599();
          uVar8 = 0xdef;
          func_0x00010526();
        } while (*(char *)0xd14 == '\0');
        iVar4 = 0;
LAB_3ab8_4f8e:
        if (iVar4 == 0) {
          uStack_e = 0xfb21;
          uStack_c = uVar8;
          FUN_21f2_3454();
          uStack_c = 0x22b2;
          uStack_e = 0xfb30;
          func_0x00024c86();
          if ((*(char *)0x7e != '\0') && (*(byte *)0x7e < 10)) {
            *(char *)0x7e = *(char *)0x7e + '\n';
          }
          pcVar3 = (code *)swi(0x3f);
          (*pcVar3)();
          FUN_3ab8_3890();
          return 0x22b2;
        }
        return iVar4;
      }
      uStack_e = 0x28;
      uStack_10 = 900;
    }
    else {
      if (*(char *)0xbf49 == ':') {
        uStack_e = 0xf977;
        func_0x00024c86();
        *puVar10 = 0;
        goto LAB_3ab8_4e16;
      }
      uStack_c = 2;
      uStack_e = 0x1e;
      uStack_10 = 0x396;
      uStack_14 = 0xf92e;
      uStack_12 = uVar8;
      FUN_1000_02b5();
      uStack_c = 2;
      uStack_e = 0x30;
      uStack_10 = 0x640;
      uStack_12 = 0xdef;
      uVar8 = 0xdef;
      uStack_14 = 0xf94a;
      FUN_1000_02b5();
      uStack_e = 0x38;
      uStack_10 = 0x360f;
    }
    uStack_c = 2;
    uStack_14 = 0xfa31;
    uStack_12 = uVar8;
    FUN_1000_02b5();
    *(undefined2 *)0xc22 = 1;
  }
  return -1;
}



/* 3ab8:4c91  FUN_3ab8_4c91  788 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_4c91(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  int in_CX;
  undefined2 uVar6;
  byte *pbVar7;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  for (; in_CX != 0; in_CX = in_CX + -1) {
    puVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar2 = *puVar1;
  }
  FUN_1885_0344(0xbf48,*(undefined2 *)(unaff_BP + -0x130));
  iVar4 = func_0x00024ce4(0x18b3);
  *(int *)(unaff_BP + -0x5c) = iVar4 + -1;
  if ((((iVar4 + -1 < 5) ||
       ((*(char *)(iVar4 + -0x40b9) != 'C' && (*(char *)(iVar4 + -0x40b9) != 'c')))) ||
      ((*(char *)(iVar4 + -0x40ba) != 'W' && (*(char *)(iVar4 + -0x40ba) != 'w')))) ||
     (((*(char *)(iVar4 + -0x40bb) != 'J' && (*(char *)(iVar4 + -0x40bb) != 'j')) ||
      (*(char *)(iVar4 + -0x40bc) != '.')))) {
LAB_3ab8_4cf0:
    *(undefined2 *)0xc22 = 1;
    FUN_1000_02b5(0x4a4,0x28,2,6);
  }
  else {
    *(undefined2 *)(unaff_BP + -0x5a) = 0;
    uVar6 = 0x22b2;
    while (*(int *)(unaff_BP + -0x5a) <= *(int *)(unaff_BP + -0x5c)) {
      pbVar7 = (byte *)(*(int *)(unaff_BP + -0x5a) + -0x40b8);
      *(undefined2 *)(unaff_BP + -2) = pbVar7;
      uVar8 = uVar6;
      if ((0x60 < *pbVar7) && (*pbVar7 < 0x7b)) {
        uVar8 = 0x2a75;
        iVar4 = func_0x0002aa38(uVar6,0xbf48);
        if (iVar4 == 0) {
          *(char *)*(undefined2 *)(unaff_BP + -2) = *(char *)*(undefined2 *)(unaff_BP + -2) + -0x20;
        }
      }
      *(int *)(unaff_BP + -0x5a) = *(int *)(unaff_BP + -0x5a) + 1;
      uVar6 = uVar8;
    }
    *(int *)(unaff_BP + -0x5c) = *(int *)(unaff_BP + -0x5c) + -4;
    *(undefined2 *)(unaff_BP + -2) = 0;
    while (uVar8 = uVar6, 0 < *(int *)(unaff_BP + -0x5c)) {
      if (*(char *)(*(int *)(unaff_BP + -0x5c) + -0x40b8) == '\\') {
        uVar8 = 0x2a75;
        iVar4 = func_0x0002aa38(uVar6,0xbf48);
        if (iVar4 == 0) {
          *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -0x5c) + -0x40b8;
          break;
        }
      }
      *(int *)(unaff_BP + -0x5c) = *(int *)(unaff_BP + -0x5c) + -1;
      uVar6 = uVar8;
    }
    if (*(int *)(unaff_BP + -2) == 0) {
      func_0x00024c86(uVar8,unaff_BP + -0x1a);
LAB_3ab8_4e16:
      func_0x00024c86(0x22b2,unaff_BP + -0x58);
      func_0x00024c86(0x22b2,0xbf48);
      iVar4 = func_0x00024ce4(0x22b2);
      *(int *)(unaff_BP + -0x5c) = iVar4 + -1;
      uVar6 = 0x22b2;
      if (*(char *)(iVar4 + -0x40b9) == '\\') {
        uVar8 = 0x2a75;
        iVar4 = func_0x0002aa38(0x22b2,0xbf48);
        uVar6 = uVar8;
        if (iVar4 != 0) goto LAB_3ab8_4e58;
      }
      else {
LAB_3ab8_4e58:
        uVar8 = 0x22b2;
        FUN_21f2_2d26(uVar6,0xbf48);
      }
      FUN_21f2_2d26(uVar8,0xbf48);
      if (*(char *)0xbf48 == '\0') goto LAB_3ab8_4cf0;
      iVar4 = func_0x000276d7(0x22b2,0xbf48,0);
      if (iVar4 == 0) {
        puVar5 = (undefined1 *)func_0x00025b06(0x22b2,unaff_BP + -0x1a);
        *(undefined2 *)(unaff_BP + -2) = puVar5;
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
        if (*(int *)0xa62 == 0x1b) {
          func_0x000120ec(0x22b2,0xf);
          func_0x000120ec(0x11f2,0x10);
          return 0;
        }
        do {
          *(undefined2 *)(unaff_BP + -0x5a) = 1;
          do {
            *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x5a) + -0x128) = 0;
            *(int *)(unaff_BP + -0x5a) = *(int *)(unaff_BP + -0x5a) + 1;
          } while (*(int *)(unaff_BP + -0x5a) < 0xcb);
          func_0x0000c3ca();
          *(undefined1 *)(unaff_BP + -0x128) = 1;
          iVar4 = FUN_3ab8_3c9e(unaff_BP + -0x128);
          *(int *)(unaff_BP + -4) = iVar4;
          if (*(int *)0x158 != 0) {
            return 0xfff5;
          }
          if (iVar4 == -1) goto LAB_3ab8_4f8e;
          if (iVar4 != -100) break;
          func_0x0000c3ca();
          *(undefined1 *)0xd15 = 1;
          pcVar3 = (code *)swi(0x3f);
          (*pcVar3)();
          *(undefined1 *)0xd15 = 0;
          if (*(int *)0x158 != 0) {
            return 0xfff5;
          }
          FUN_1000_0599();
          func_0x00010526();
        } while (*(char *)0xd14 == '\0');
        *(undefined2 *)(unaff_BP + -4) = 0;
LAB_3ab8_4f8e:
        if (*(int *)(unaff_BP + -4) == 0) {
          FUN_21f2_3454(0xcf6);
          func_0x00024c86(0x22b2,0xd18);
          if ((*(char *)0x7e != '\0') && (*(byte *)0x7e < 10)) {
            *(char *)0x7e = *(char *)0x7e + '\n';
          }
          pcVar3 = (code *)swi(0x3f);
          (*pcVar3)();
          FUN_3ab8_3890();
        }
        return *(undefined2 *)(unaff_BP + -4);
      }
      uVar8 = 0x28;
      uVar6 = 900;
    }
    else {
      if (*(char *)0xbf49 == ':') {
        func_0x00024c86(uVar8,unaff_BP + -0x1a);
        *(undefined1 *)*(undefined2 *)(unaff_BP + -2) = 0;
        goto LAB_3ab8_4e16;
      }
      FUN_1000_02b5(0x396,0x1e,2,6);
      FUN_1000_02b5(0x640,0x30,2,6);
      uVar8 = 0x38;
      uVar6 = 0x360f;
    }
    FUN_1000_02b5(uVar6,uVar8,2,6);
    *(undefined2 *)0xc22 = 1;
  }
  return 0xffff;
}


