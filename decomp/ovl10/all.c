/* Ghidra decompilation of jw10.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  190 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0000(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  uVar2 = 1;
  FUN_21f2_0ebc();
  func_0x00029834(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1181(0x22b2);
  if (!(bool)uVar1 && !(bool)uVar2) {
    func_0x00029834(0x22b2);
    func_0x00029983(0x22b2);
  }
  func_0x00029834(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1181(0x22b2);
  if (!(bool)uVar1 && !(bool)uVar2) {
    func_0x00029834(0x22b2);
    func_0x00029983(0x22b2);
  }
  func_0x00029834(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)uVar1) {
    func_0x00029834(0x22b2);
    func_0x00029983(0x22b2);
  }
  func_0x00029834(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)uVar1) {
    func_0x00029834(0x22b2);
    func_0x00029983(0x22b2);
  }
  return;
}



/* 3ab8:00be  FUN_3ab8_00be  114 bytes, 1 callers */

void __cdecl16far FUN_3ab8_00be(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  FUN_1000_0599(0x22b2,0x18,1);
  func_0x00010526(0xdef);
  FUN_1000_0599(0xdef,0x32,1);
  FUN_1000_02b5(0x784,0x32,1,*(undefined2 *)(param_1 * 2 + 0xa70),0xffff);
  FUN_1000_02b5(0x38f8,0x3a,1,*(undefined2 *)(param_1 * 2 + 0xa70),0xffff);
  return;
}



/* 3ab8:0130  FUN_3ab8_0130  222 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0130(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  
  FUN_21f2_0ebc();
  func_0x0000c340(0x22b2);
  func_0x00012276(0x885,0x1de,0x53a);
  func_0x00010526(0x11f2);
  func_0x00012276(0xdef,0x1dc);
  uVar2 = 0xdef;
  FUN_1000_0599(0x11f2,0x34,1);
  if (param_1 < 3) {
    uVar2 = 0x11f2;
    func_0x00012276(0xdef,0x3900,0x784);
  }
  func_0x00012276(uVar2,0x3907);
  if (param_1 == 1) {
    FUN_1000_02b5(0x764,0x1c,1,2,0xffff);
  }
  if (param_1 == 2) {
    FUN_1000_02b5(0x6b0,0x1c,1,2,0xffff);
  }
  if (param_1 == 3) {
    FUN_1000_02b5(0x396,0x1c,1,2,0xffff);
  }
  do {
    cVar1 = FUN_12c1_009c();
    if (cVar1 == '\x1b') {
      return 1;
    }
  } while (cVar1 != '\r');
  return 0;
}



/* 3ab8:020e  FUN_3ab8_020e  8969 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003bb9d) */
/* WARNING: Removing unreachable block (ram,0x0003bbc5) */
/* WARNING: Type propagation algorithm not settling */

undefined2
FUN_3ab8_020e(undefined2 param_1,undefined2 param_2,int param_3,int param_4,uint param_5,
             uint param_6,int param_7)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined2 *******pppppppuVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  code *pcVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined2 *******pppppppuVar13;
  undefined2 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined2 *puVar18;
  undefined2 *******pppppppuVar19;
  undefined2 ******ppppppuVar20;
  undefined2 unaff_SS;
  undefined2 *******unaff_DS;
  undefined1 uVar21;
  bool bVar22;
  undefined1 uVar23;
  undefined4 uVar24;
  undefined2 *puVar25;
  undefined4 local_82a;
  int local_80a;
  undefined4 local_808;
  int local_804;
  undefined2 *******local_802;
  undefined2 *******local_800;
  int local_7fe;
  undefined2 local_7fc;
  undefined2 local_7fa;
  undefined2 local_7f8;
  undefined2 local_7f6;
  undefined2 *******local_7f4;
  uint local_7f2;
  undefined2 *******local_7f0;
  uint local_7ee;
  uint local_7ec;
  uint local_7ea;
  undefined2 *******local_7e8;
  undefined2 local_7e6;
  undefined2 local_7e4;
  uint local_7da;
  undefined2 *******local_7d8;
  undefined2 ******local_7d6;
  uint local_7d4;
  undefined2 ******local_7d2;
  uint local_7d0;
  undefined2 *******local_7ca;
  uint local_7c8;
  undefined2 *******local_7c6;
  uint local_7c4;
  undefined2 ******local_7c2;
  uint local_7c0;
  undefined2 local_7be;
  undefined2 local_7bc;
  undefined2 *******local_7ba;
  uint local_7b8;
  undefined2 *******local_7b6;
  uint local_7b4;
  uint local_7b2;
  undefined2 ******local_7b0;
  undefined2 *******local_7ae;
  uint local_7ac;
  undefined2 *******local_7aa;
  uint local_7a8;
  undefined2 *****local_7a6 [10];
  int local_792;
  undefined4 local_790;
  undefined2 *******local_78c;
  uint local_78a;
  undefined2 *******local_788;
  uint local_786;
  undefined2 local_784;
  undefined2 local_782;
  undefined2 local_780;
  uint local_77e;
  uint local_77c;
  undefined2 *******local_77a;
  undefined2 *******local_778;
  uint local_776;
  undefined2 local_774;
  undefined2 local_772;
  undefined2 *local_770;
  undefined2 local_76e;
  undefined2 local_76c;
  undefined2 local_76a;
  undefined2 *******local_768;
  uint local_766;
  undefined2 *******local_764;
  uint local_762;
  undefined2 *******local_760;
  uint local_75e;
  undefined2 *******local_75c;
  uint local_75a;
  char local_754;
  uint local_752;
  undefined2 *******local_750;
  undefined2 *******local_74e;
  uint local_74c;
  undefined2 local_74a;
  undefined2 local_748;
  undefined2 local_746;
  undefined2 local_744;
  undefined2 local_742;
  undefined2 local_740;
  undefined2 *******local_73e;
  uint local_73c;
  undefined2 *******local_73a;
  uint local_738;
  undefined2 local_732;
  undefined2 local_730;
  undefined2 ******local_72e;
  uint local_72c;
  int local_72a;
  undefined2 local_728;
  undefined2 local_726;
  uint local_720;
  int local_71e;
  uint auStack_71c [406];
  undefined2 *******local_3f0;
  uint local_3ee;
  undefined2 *******local_3ec;
  uint local_3ea;
  undefined2 *******local_3e8;
  uint local_3e6;
  undefined2 *******local_3e4;
  uint local_3e2;
  undefined1 local_3e0;
  undefined1 local_3df;
  undefined1 local_3de;
  uint local_3d6;
  int local_3d4;
  undefined2 *******local_3d2;
  uint local_3d0;
  undefined2 *******local_3ce;
  uint local_3cc;
  undefined2 *******local_3ca;
  uint local_3c8;
  undefined2 *******local_3c6;
  uint local_3c4;
  undefined2 *******local_3c2;
  uint local_3c0;
  byte local_3b9;
  uint auStack_3b8 [404];
  undefined2 *******local_90;
  undefined2 *******local_8e;
  uint local_8c;
  undefined2 *******local_8a;
  undefined2 *******local_88;
  uint local_86;
  undefined2 *******local_84;
  uint local_82;
  undefined2 *******local_80;
  uint local_7e;
  undefined2 *******local_7c;
  uint local_7a;
  undefined2 *******local_78;
  uint local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 *******local_70;
  uint local_6e;
  int local_66;
  uint local_64;
  int local_62;
  undefined2 *******local_60;
  uint local_5e;
  undefined2 *******local_5c;
  uint local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 *******local_54;
  uint local_52;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  uint local_3c;
  int local_3a;
  uint local_38;
  int local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 *******local_2a;
  uint local_28;
  uint local_26;
  int local_24;
  int local_22;
  undefined2 uStack_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 *******local_14;
  uint local_12;
  undefined2 *******pppppppuStack_10;
  undefined2 *******local_e;
  undefined2 *******local_c;
  undefined2 *******local_8;
  
  FUN_21f2_0ebc();
  local_774 = *(undefined2 *)0x9904;
  local_772 = *(undefined2 *)0x9906;
  local_7ec = 200;
  local_72a = 1;
  local_770 = (undefined2 *)*(undefined2 *)0x9908;
  local_76e = *(undefined2 *)0x990a;
  local_7f8 = *(undefined2 *)0x9904;
  local_7f6 = *(undefined2 *)0x9906;
  local_64 = *(uint *)0x14c;
  local_62 = *(int *)0x14e;
  local_8c = local_64 + 1;
  local_8a = (undefined2 *******)(local_62 + (uint)(0xfffe < local_64));
  local_792 = 0;
  local_780 = 0;
  local_77e = 0;
  if (*(char *)(param_4 + 1) == 'h') {
    local_770 = (undefined2 *)*(undefined2 *)0x9904;
    local_76e = *(undefined2 *)0x9906;
  }
  if (*(char *)(param_4 + 1) == 'i') {
    local_770 = (undefined2 *)*(undefined2 *)0x990c;
    local_76e = *(undefined2 *)0x990e;
  }
  if (*(char *)(param_4 + 1) == 'j') {
    local_770 = (undefined2 *)*(undefined2 *)0x990c;
    local_76e = *(undefined2 *)0x990e;
  }
  local_c = (undefined2 *******)0xae67;
  local_76c = local_774;
  local_76a = local_772;
  local_746 = local_774;
  local_744 = local_772;
  local_7fe = func_0x00024ce4();
  if (2 < local_7fe) {
    local_800 = (undefined2 *******)0x0;
    local_c = (undefined2 *******)local_7a6;
    local_e = (undefined2 *******)0x22b2;
    pppppppuStack_10 = (undefined2 *******)0xae93;
    FUN_21f2_3454();
    local_8 = &local_800;
    local_c = (undefined2 *******)local_7a6;
    local_e = (undefined2 *******)0x22b2;
    pppppppuStack_10 = (undefined2 *******)0xaea9;
    iVar11 = func_0x000253ce();
    if (iVar11 != 0) {
      if (((int)local_800 < 1) || (local_802 = local_800, 6 < (int)local_800)) {
        if (((int)local_800 < 10) || (0xf < (int)local_800)) {
          if ((int)local_800 < 7) {
            return 0;
          }
          if (9 < (int)local_800) {
            return 0;
          }
          local_802 = local_800 + -3;
        }
        else {
          local_802 = (undefined2 *******)((int)local_800 - 9);
        }
      }
      if (((local_7fe < 4) || (*(byte *)(param_4 + 3) < 0x31)) || (0x38 < *(byte *)(param_4 + 3))) {
        local_72a = 1;
      }
      else {
        local_72a = *(byte *)(param_4 + 3) - 0x30;
      }
      if (4 < local_7fe) {
        local_c = (undefined2 *******)local_7a6;
        local_e = (undefined2 *******)0x22b2;
        pppppppuStack_10 = (undefined2 *******)0xaf45;
        FUN_21f2_3454();
        local_8 = &local_7b0;
        local_c = (undefined2 *******)local_7a6;
        local_e = (undefined2 *******)0x22b2;
        pppppppuStack_10 = (undefined2 *******)0xaf5b;
        func_0x000253ce();
        if (((int)local_7b0 < 1) || (0xf < (int)local_7b0)) {
          local_770 = (undefined2 *)*(undefined2 *)0x9908;
          local_76e = *(undefined2 *)0x990a;
        }
        else {
          FUN_28b3_0d8b();
          func_0x00029b6d();
          local_8 = (undefined2 *******)0x22b2;
          func_0x00029983();
        }
        if (*(char *)(param_4 + 4) == '0') {
          local_770 = (undefined2 *)*(undefined2 *)0x9914;
          local_76e = *(undefined2 *)0x9916;
        }
      }
      if (local_7fe < 6) {
        if (local_8 != (undefined2 *******)0x0) {
          local_7f8 = *(undefined2 *)0x991c;
          local_7f6 = *(undefined2 *)0x991e;
          local_770 = (undefined2 *)*(undefined2 *)0x9918;
          local_76e = *(undefined2 *)0x991a;
          local_76c = *(undefined2 *)0x990c;
          local_76a = *(undefined2 *)0x990e;
        }
      }
      else if (local_8 == (undefined2 *******)0x0) {
        local_c = (undefined2 *******)(param_4 + 5);
        local_e = (undefined2 *******)0x22b2;
        pppppppuStack_10 = (undefined2 *******)0xafd5;
        func_0x000253ce();
      }
      else {
        local_808 = (undefined2 *)
                    CONCAT22(*(undefined2 *)0x9906,(undefined2 *)*(undefined2 *)0x9904);
        local_c = (undefined2 *******)local_7a6;
        local_e = (undefined2 *******)0x22b2;
        pppppppuStack_10 = (undefined2 *******)0xb001;
        FUN_21f2_3454();
        local_c = (undefined2 *******)local_7a6;
        local_e = (undefined2 *******)0x22b2;
        pppppppuStack_10 = (undefined2 *******)0xb017;
        func_0x000253ce();
        local_80a = local_804 * 0xf;
        FUN_28b3_0d8b();
        func_0x00029983();
        local_c = (undefined2 *******)(param_4 + 6);
        local_e = (undefined2 *******)0x22b2;
        pppppppuStack_10 = (undefined2 *******)0xb04c;
        func_0x000253ce();
        uVar21 = (undefined1 *)0xfff9 < &local_c;
        func_0x000297e6();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0d8b();
        func_0x00029c9d();
        FUN_28b3_1181();
        if ((bool)uVar21) {
          local_770 = (undefined2 *)local_808;
          local_76e = local_808._2_2_;
        }
        else {
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029983();
        }
      }
      func_0x0000c340();
      local_c = (undefined2 *******)0xb0ee;
      func_0x00012276();
      func_0x00010526();
      local_c = (undefined2 *******)0xb0fc;
      FUN_3ab8_00be();
      local_7b0 = (undefined2 ******)0x1;
      while( true ) {
        ppppppuVar20 = (undefined2 ******)*(uint *)0x154;
        uVar21 = local_7b0 < ppppppuVar20;
        uVar23 = local_7b0 == ppppppuVar20;
        if ((int)ppppppuVar20 < (int)local_7b0) break;
        if (*(byte *)(local_7b0 + -0x1fa6) == param_5) {
          iVar11 = (int)local_7b0 * 4;
          local_746 = *(undefined2 *)(iVar11 + -0x3c10);
          local_744 = *(undefined2 *)(iVar11 + -0x3c0e);
          local_774 = *(undefined2 *)(iVar11 + -0x3a7c);
          local_772 = *(undefined2 *)(iVar11 + -0x3a7a);
        }
        local_7b0 = (undefined2 ******)((int)local_7b0 + 1);
      }
LAB_3ab8_05c5:
      local_74a = local_7f8;
      local_748 = local_7f6;
      while( true ) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar21) break;
        func_0x000297e6();
        local_c = (undefined2 *******)0xb16a;
        func_0x00029b55();
        func_0x00029983();
      }
      uVar21 = 1;
      while( true ) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar21) break;
        func_0x000297e6();
        local_c = (undefined2 *******)0xb19e;
        func_0x00029bb5();
        func_0x00029983();
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      local_7b2 = (uint)(!(bool)uVar21 && !(bool)uVar23);
      local_754 = '\x01';
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar23) {
        local_754 = '\0';
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar23) {
        local_754 = 'Z';
      }
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029c2c();
      func_0x0002996b();
      func_0x00029d78();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xb254;
      func_0x000299d1();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xb259;
      func_0x0002a11e();
      func_0x00029834();
      func_0x00029983();
      func_0x000297e6();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xb27f;
      func_0x000299d1();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xb284;
      func_0x0002a10c();
      func_0x00029834();
      func_0x00029983();
      if (local_754 == '\0') {
        uVar8 = *(undefined2 *)0x990e;
        *(undefined2 *)0xb76a = *(undefined2 *)0x990c;
        *(undefined2 *)0xb76c = uVar8;
        uVar8 = *(undefined2 *)0x9906;
        *(undefined2 *)0xb784 = *(undefined2 *)0x9904;
        *(undefined2 *)0xb786 = uVar8;
      }
      if (local_754 == 'Z') {
        uVar8 = *(undefined2 *)0x9906;
        *(undefined2 *)0xb76a = *(undefined2 *)0x9904;
        *(undefined2 *)0xb76c = uVar8;
        uVar8 = *(undefined2 *)0x990e;
        *(undefined2 *)0xb784 = *(undefined2 *)0x990c;
        *(undefined2 *)0xb786 = uVar8;
      }
      *(undefined2 *)0xb30c = local_746;
      *(undefined2 *)0xb30e = local_744;
      *(undefined2 *)0xb37e = local_774;
      *(undefined2 *)0xb380 = local_772;
      local_7da = *(uint *)0x148 + 1;
      local_7d8 = (undefined2 *******)(*(int *)0x14a + (uint)(0xfffe < *(uint *)0x148));
      local_77a = (undefined2 *******)0x0;
      pppppppuVar13 = (undefined2 *******)0x22b2;
      for (local_77c = 1;
          ((int)local_77a <= param_7 && (((int)local_77a < param_7 || (local_77c <= param_6))));
          local_77c = local_77c + 1) {
        pppppppuVar19 = (undefined2 *******)0x0;
        local_e = (undefined2 *******)0xb39c;
        local_c = pppppppuVar13;
        puVar25 = (undefined2 *)func_0x0000013f();
        puVar18 = (undefined2 *)puVar25;
        puVar14 = (undefined2 *)&stack0xffe0;
        for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
          puVar7 = puVar14;
          puVar14 = puVar14 + 1;
          puVar5 = puVar18;
          puVar18 = puVar18 + 1;
          *puVar7 = *puVar5;
        }
        if ((((uint)local_e & 0xff) == param_5) && (((uint)local_c & 0x20) == 0)) {
          uVar21 = local_754 == '\0';
          if ((bool)uVar21) {
            func_0x000297e6();
            func_0x000297e6();
            pppppppuVar19 = (undefined2 *******)0x22b2;
            FUN_28b3_1181();
            if ((bool)uVar21) goto LAB_3ab8_07eb;
          }
          uVar21 = local_754 == 'Z';
          pppppppuVar13 = pppppppuVar19;
          if ((bool)uVar21) {
            func_0x000297e6();
            func_0x000297e6();
            pppppppuVar19 = (undefined2 *******)0x22b2;
            FUN_28b3_1181();
            pppppppuVar13 = pppppppuVar19;
            if ((bool)uVar21) goto LAB_3ab8_07eb;
          }
          pppppppuVar19 = (undefined2 *******)0x11f2;
          local_e = (undefined2 *******)0xb409;
          local_c = pppppppuVar13;
          iVar11 = func_0x000185d3();
          if (iVar11 == 1) {
            local_c = (undefined2 *******)0x11f2;
            pppppppuVar19 = (undefined2 *******)0x0;
            local_e = (undefined2 *******)0xb421;
            uVar24 = func_0x0000013f();
            *(undefined1 *)((int)uVar24 + 0x10) = 9;
          }
          else if (iVar11 != 0) goto LAB_3ab8_07a4;
        }
LAB_3ab8_07eb:
        local_77a = (undefined2 *******)((int)local_77a + (uint)(0xfffe < local_77c));
        pppppppuVar13 = pppppppuVar19;
      }
      local_7ea = *(uint *)0x148;
      local_7e8 = (undefined2 *******)*(uint *)0x14a;
      do {
        local_790._2_2_ = 0;
        local_790._0_2_ = 0;
        local_77c = 1;
        local_77a = (undefined2 *******)0x0;
LAB_3ab8_094f:
        if ((local_62 < (int)local_77a) || ((local_62 <= (int)local_77a && (local_64 < local_77c))))
        goto LAB_3ab8_09f4;
        local_e = (undefined2 *******)0xb4f6;
        local_c = pppppppuVar13;
        uVar24 = func_0x00000271();
        if (*(byte *)((int)uVar24 + 0x1c) != param_5) {
LAB_3ab8_0945:
          pppppppuVar13 = (undefined2 *******)0x0;
          bVar22 = 0xfffe < local_77c;
          local_77c = local_77c + 1;
          local_77a = (undefined2 *******)((int)local_77a + (uint)bVar22);
          goto LAB_3ab8_094f;
        }
        pppppppuVar13 = (undefined2 *******)(*(uint *)0x14c + 2);
        pppppppuVar19 = (undefined2 *******)(*(int *)0x14e + (uint)(0xfffd < *(uint *)0x14c));
        if (((int)pppppppuVar19 < *(int *)0x142) ||
           (((int)pppppppuVar19 <= *(int *)0x142 &&
            (pppppppuVar13 <= (undefined2 *******)*(uint *)0x140)))) {
          bVar22 = 0xfffe < (uint)local_790;
          local_790._0_2_ = (uint)local_790 + 1;
          local_790._2_2_ = local_790._2_2_ + (uint)bVar22;
          if ((local_790._2_2_ < (int)local_7ec >> 0xf) ||
             ((local_790 = CONCAT22(local_790._2_2_,(uint)local_790),
              local_790._2_2_ <= (int)local_7ec >> 0xf &&
              (local_790 = CONCAT22(local_790._2_2_,(uint)local_790), (uint)local_790 <= local_7ec))
             )) {
            puVar1 = (uint *)0x14c;
            uVar12 = *puVar1;
            *puVar1 = *puVar1 + 1;
            *(int *)0x14e = *(int *)0x14e + (uint)(0xfffe < uVar12);
            local_c = (undefined2 *******)0x0;
            local_e = (undefined2 *******)0xb48e;
            puVar25 = (undefined2 *)func_0x00000271();
            puVar14 = (undefined2 *)puVar25;
            puVar17 = &local_82a;
            for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
              puVar6 = puVar17;
              puVar17 = (undefined4 *)((int)puVar17 + 2);
              puVar5 = puVar14;
              puVar14 = puVar14 + 1;
              *(undefined2 *)puVar6 = *puVar5;
            }
            local_c = (undefined2 *******)0x0;
            local_e = (undefined2 *******)0xb4ae;
            local_808 = (undefined2 *)func_0x00000271();
            puVar14 = (undefined2 *)local_808;
            puVar17 = &local_82a;
            for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
              puVar25 = puVar14;
              puVar14 = puVar14 + 1;
              puVar6 = puVar17;
              puVar17 = (undefined4 *)((int)puVar17 + 2);
              *puVar25 = *(undefined2 *)puVar6;
            }
            goto LAB_3ab8_0945;
          }
          goto LAB_3ab8_07a4;
        }
        *(uint *)0x14c = local_64;
        *(int *)0x14e = local_62;
        pppppppuStack_10 = (undefined2 *******)*(uint *)0x14a;
        local_12 = *(uint *)0x148;
        local_14 = (undefined2 *******)(*(int *)0xc0ac - *(int *)0xbefa);
        pcVar9 = (code *)swi(0x3f);
        local_90 = pppppppuVar13;
        local_8e = pppppppuVar19;
        local_e = pppppppuVar13;
        local_c = pppppppuVar19;
        iVar11 = (*pcVar9)();
        pppppppuVar13 = (undefined2 *******)0x0;
        if (iVar11 == -1) goto LAB_3ab8_09eb;
      } while( true );
    }
  }
  return 0;
LAB_3ab8_09f4:
  if (((int)local_7e8 <= (int)local_7d8) &&
     (((((int)local_7e8 < (int)local_7d8 || (local_7ea < local_7da)) && (*(uint *)0x14c == local_64)
       ) && (*(int *)0x14e == local_62)))) {
    return 0;
  }
  local_7d6 = (undefined2 ******)*(uint *)0x9938;
  local_7d4 = *(uint *)0x993a;
  local_7fc = *(undefined2 *)0x993c;
  local_7fa = *(undefined2 *)0x993e;
  local_77a = local_7d8;
  local_7e6 = local_7fc;
  local_7e4 = local_7fa;
  local_7c2 = local_7d6;
  local_7c0 = local_7d4;
  for (local_77c = local_7da;
      ((int)local_77a <= (int)local_7e8 &&
      (((int)local_77a < (int)local_7e8 || (local_77c <= local_7ea)))); local_77c = local_77c + 1) {
    local_e = (undefined2 *******)0xb60c;
    local_c = pppppppuVar13;
    puVar25 = (undefined2 *)func_0x0000013f();
    puVar18 = (undefined2 *)puVar25;
    puVar14 = (undefined2 *)&stack0xffe0;
    for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
      puVar7 = puVar14;
      puVar14 = puVar14 + 1;
      puVar5 = puVar18;
      puVar18 = puVar18 + 1;
      *puVar7 = *puVar5;
    }
    local_778 = (undefined2 *******)local_1c;
    local_776 = local_1a;
    func_0x000297e6();
    func_0x00029d78();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    local_12 = 0xb643;
    func_0x000299d1();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    local_12 = 0xb64b;
    func_0x000297e6();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    local_12 = 0xb654;
    func_0x0002996b();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    local_12 = 0xb659;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 0xb663;
    func_0x000299d1();
    local_18 = 1;
    local_1a = 0x22b2;
    local_1c = 0xb66c;
    puVar14 = (undefined2 *)FUN_1def_05d1();
    local_7be = *puVar14;
    local_7bc = puVar14[1];
    local_c = &local_7d6;
    local_e = &local_7c2;
    pppppppuStack_10 = (undefined2 *******)0x1bb4;
    local_12 = 0xb69b;
    func_0x000297e6();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    local_12 = 0xb6a0;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 0xb6aa;
    func_0x000299d1();
    local_18 = 0x22b2;
    local_1a = 0xb6b3;
    func_0x000297e6();
    local_18 = 0x22b2;
    local_1a = 0xb6b8;
    func_0x00029d78();
    local_22 = 0xb6c2;
    func_0x000299d1();
    local_22 = 0x22b2;
    local_24 = 0xb6cb;
    func_0x0001e558();
    pppppppuStack_10 = (undefined2 *******)0x1bb4;
    local_12 = 0xb6d5;
    func_0x000297e6();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    local_12 = 0xb6de;
    func_0x0002996b();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    local_12 = 0xb6e3;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 0xb6ed;
    func_0x000299d1();
    local_18 = 0x22b2;
    local_1a = 0xb6f6;
    func_0x000297e6();
    local_18 = 0x22b2;
    local_1a = 0xb6fb;
    func_0x00029d78();
    local_22 = 0xb705;
    func_0x000299d1();
    local_22 = 0xb709;
    FUN_3ab8_0000();
    local_778 = local_14;
    local_776 = local_12;
    func_0x000297e6();
    func_0x00029d78();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    local_12 = 0xb731;
    func_0x000299d1();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    local_12 = 0xb739;
    func_0x000297e6();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    local_12 = 0xb742;
    func_0x0002996b();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    local_12 = 0xb747;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 0xb751;
    func_0x000299d1();
    local_18 = 1;
    local_1a = 0x22b2;
    local_1c = 0xb75a;
    puVar14 = (undefined2 *)FUN_1def_05d1();
    local_7be = *puVar14;
    local_7bc = puVar14[1];
    local_c = &local_7d6;
    local_e = &local_7c2;
    pppppppuStack_10 = (undefined2 *******)0x1bb4;
    local_12 = 0xb789;
    func_0x000297e6();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    local_12 = 0xb78e;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 47000;
    func_0x000299d1();
    local_18 = 0x22b2;
    local_1a = 0xb7a1;
    func_0x000297e6();
    local_18 = 0x22b2;
    local_1a = 0xb7a6;
    func_0x00029d78();
    local_22 = 0xb7b0;
    func_0x000299d1();
    local_22 = 0x22b2;
    local_24 = -0x4847;
    func_0x0001e558();
    pppppppuStack_10 = (undefined2 *******)0x1bb4;
    local_12 = 0xb7c3;
    func_0x000297e6();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    local_12 = 0xb7cc;
    func_0x0002996b();
    pppppppuStack_10 = (undefined2 *******)0x22b2;
    local_12 = 0xb7d1;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 0xb7db;
    func_0x000299d1();
    local_18 = 0x22b2;
    local_1a = 0xb7e4;
    func_0x000297e6();
    local_18 = 0x22b2;
    local_1a = 0xb7e9;
    func_0x00029d78();
    pppppppuVar13 = (undefined2 *******)0x22b2;
    local_22 = 0xb7f3;
    func_0x000299d1();
    local_22 = -0x4809;
    FUN_3ab8_0000();
    local_77a = (undefined2 *******)((int)local_77a + (uint)(0xfffe < local_77c));
  }
  local_77a = local_8a;
  for (local_77c = local_8c;
      ((int)local_77a <= *(int *)0x14e &&
      (((int)local_77a < *(int *)0x14e || (local_77c <= *(uint *)0x14c))));
      local_77c = local_77c + 1) {
    local_790._0_2_ = local_77c - local_64;
    local_790._2_2_ = (int)local_77a + (-(uint)(local_77c < local_64) - local_62);
    local_c = &local_788;
    local_e = &local_75c;
    pppppppuStack_10 = local_77a;
    local_12 = local_77c;
    pppppppuVar19 = (undefined2 *******)0x1bb4;
    uStack_16 = 0xbaa0;
    local_14 = pppppppuVar13;
    FUN_20a9_0f84();
    uVar12 = *(uint *)0x9940;
    uVar16 = *(uint *)0x9942;
    if ((int)uVar16 < 0) {
      bVar22 = uVar12 != 0;
      uVar12 = -uVar12;
      uVar16 = -((uVar16 & 0x7fff) + (uint)bVar22);
    }
    auStack_3b8[(uint)local_790 * 2] = uVar12;
    auStack_3b8[(uint)local_790 * 2 + 1] = uVar16;
    local_778 = (undefined2 *******)*(uint *)0x9944;
    local_776 = *(uint *)0x9946;
    pppppppuVar13 = local_778;
    uVar12 = local_776;
    if ((int)local_776 < 0) {
      pppppppuVar13 = (undefined2 *******)-(int)local_778;
      uVar12 = -((local_776 & 0x7fff) + (uint)(local_778 != (undefined2 *******)0x0));
    }
    auStack_71c[(uint)local_790 * 2] = (uint)pppppppuVar13;
    auStack_71c[(uint)local_790 * 2 + 1] = uVar12;
    for (local_7b0 = (undefined2 ******)0x1; (int)local_7b0 < 5;
        local_7b0 = (undefined2 ******)((int)local_7b0 + 1)) {
      local_2a = local_788;
      local_28 = local_786;
      if ((local_7b0 != (undefined2 ******)0x1) && (local_7b0 != (undefined2 ******)0x4)) {
        local_2a = local_7ae;
        local_28 = local_7ac;
      }
      func_0x000297e6();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xb8ae;
      func_0x000299d1();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xb8b6;
      func_0x000297e6();
      local_18 = 0x22b2;
      local_1a = 0xb8c0;
      func_0x000299d1();
      local_18 = 1;
      local_1a = 0x22b2;
      local_1c = 0xb8c9;
      puVar14 = (undefined2 *)FUN_1def_05d1();
      local_7be = *puVar14;
      local_7bc = puVar14[1];
      local_c = &local_7d6;
      local_e = &local_7c2;
      pppppppuStack_10 = (undefined2 *******)0x1bb4;
      local_12 = 0xb8f7;
      func_0x000297e6();
      local_18 = 0x22b2;
      local_1a = 0xb901;
      func_0x000299d1();
      local_18 = 0x22b2;
      local_1a = 0xb909;
      func_0x000297e6();
      local_22 = 0xb913;
      func_0x000299d1();
      local_22 = 0x22b2;
      local_24 = -0x46e4;
      func_0x0001e558();
      pppppppuStack_10 = (undefined2 *******)0x1bb4;
      local_12 = 0xb926;
      func_0x000297e6();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xb92f;
      func_0x0002996b();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xb934;
      func_0x00029d78();
      local_18 = 0x22b2;
      local_1a = 0xb93e;
      func_0x000299d1();
      local_18 = 0x22b2;
      local_1a = 0xb947;
      func_0x000297e6();
      local_18 = 0x22b2;
      local_1a = 0xb94c;
      func_0x00029d78();
      local_22 = 0xb956;
      func_0x000299d1();
      local_22 = -0x46a6;
      FUN_3ab8_0000();
      func_0x000297e6();
      func_0x00029bfc();
      func_0x00029983();
      local_3d2 = local_778;
      local_3d0 = local_776;
      if ((int)local_776 < 0) {
        local_3d2 = (undefined2 *******)-(int)local_778;
        local_3d0 = -((local_776 & 0x7fff) + (uint)(local_778 != (undefined2 *******)0x0));
      }
      if (((int)local_3d0 <= (int)auStack_3b8[(uint)local_790 * 2 + 1]) &&
         (((int)local_3d0 < (int)auStack_3b8[(uint)local_790 * 2 + 1] ||
          (local_3d2 < (undefined2 *******)auStack_3b8[(uint)local_790 * 2])))) {
        auStack_3b8[(uint)local_790 * 2] = (uint)local_3d2;
        auStack_3b8[(uint)local_790 * 2 + 1] = local_3d0;
      }
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029c74();
      pppppppuVar19 = (undefined2 *******)0x22b2;
      func_0x00029983();
      local_3d2 = local_778;
      uVar12 = local_776;
      if ((int)local_776 < 0) {
        local_3d2 = (undefined2 *******)-(int)local_778;
        uVar12 = -((local_776 & 0x7fff) + (uint)(local_778 != (undefined2 *******)0x0));
      }
      local_3d0 = uVar12;
      if (((int)auStack_71c[(uint)local_790 * 2 + 1] <= (int)uVar12) &&
         (((int)auStack_71c[(uint)local_790 * 2 + 1] < (int)uVar12 ||
          ((undefined2 *******)auStack_71c[(uint)local_790 * 2] < local_3d2)))) {
        auStack_71c[(uint)local_790 * 2] = (uint)local_3d2;
        auStack_71c[(uint)local_790 * 2 + 1] = uVar12;
      }
    }
    local_77a = (undefined2 *******)((int)local_77a + (uint)(0xfffe < local_77c));
    pppppppuVar13 = pppppppuVar19;
  }
  func_0x000297e6();
  local_c = (undefined2 *******)0xbacf;
  func_0x00029b55();
  func_0x00029983();
  func_0x000297e6();
  local_c = (undefined2 *******)0xbae8;
  func_0x00029bb5();
  func_0x00029983();
  local_7d2 = local_7d6;
  local_7d0 = local_7d4;
  func_0x000297e6();
  func_0x00029b85();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x00029b85();
  func_0x00029d78();
  local_790 = FUN_28b3_0f51();
  local_82a = (undefined2 *)
              CONCAT22((int)((ulong)local_790 >> 0x10) - (uint)((uint)local_790 < 4),
                       (undefined2 *)((uint)local_790 - 4));
  func_0x000298b4();
  func_0x00029b6d();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029b85();
  func_0x0002996b();
  FUN_28b3_0ee9();
  ppppppuVar20 = (undefined2 ******)0x22b2;
  local_77a = local_7d8;
  for (local_77c = local_7da;
      (uVar21 = local_7e8 == local_77a, (int)local_77a <= (int)local_7e8 &&
      (((int)local_77a < (int)local_7e8 || (uVar21 = local_7ea == local_77c, local_77c <= local_7ea)
       ))); local_77c = local_77c + 1) {
    local_e = (undefined2 *******)0xbcb7;
    local_c = (undefined2 *******)ppppppuVar20;
    func_0x0000013f();
    FUN_28b3_0c98();
    local_c = (undefined2 *******)0x22b2;
    local_e = (undefined2 *******)0xbccf;
    func_0x0000013f();
    FUN_28b3_0c98();
    FUN_28b3_1181();
    if ((bool)uVar21) {
      local_c = (undefined2 *******)0x22b2;
      local_e = (undefined2 *******)0xbcf4;
      uVar24 = func_0x0000013f();
      pbVar2 = (byte *)((int)uVar24 + 0x15);
      *pbVar2 = *pbVar2 | 1;
      bVar3 = *pbVar2;
    }
    else {
      local_c = (undefined2 *******)0x22b2;
      local_e = (undefined2 *******)0xbbfe;
      uVar24 = func_0x0000013f();
      pbVar2 = (byte *)((int)uVar24 + 0x15);
      *pbVar2 = *pbVar2 & 0xfe;
      bVar3 = *pbVar2;
    }
    uVar21 = bVar3 == 0;
    local_c = (undefined2 *******)0x0;
    local_e = (undefined2 *******)0xbc16;
    func_0x0000013f();
    FUN_28b3_0c98();
    local_c = (undefined2 *******)0x22b2;
    local_e = (undefined2 *******)0xbc31;
    func_0x0000013f();
    FUN_28b3_0c98();
    FUN_28b3_1181();
    if ((bool)uVar21) {
      local_c = (undefined2 *******)0x22b2;
      local_e = (undefined2 *******)0xbc53;
      uVar24 = func_0x0000013f();
      pbVar2 = (byte *)((int)uVar24 + 0x15);
      *pbVar2 = *pbVar2 | 2;
    }
    else {
      local_c = (undefined2 *******)0x22b2;
      local_e = (undefined2 *******)0xbc6d;
      uVar24 = func_0x0000013f();
      pbVar2 = (byte *)((int)uVar24 + 0x15);
      *pbVar2 = *pbVar2 & 0xfd;
    }
    local_c = (undefined2 *******)0x0;
    ppppppuVar20 = (undefined2 ******)0x0;
    local_e = (undefined2 *******)0xbc85;
    uVar24 = func_0x0000013f();
    pbVar2 = (byte *)((int)uVar24 + 0x14);
    *pbVar2 = *pbVar2 & 0xfd;
    local_77a = (undefined2 *******)((int)local_77a + (uint)(0xfffe < local_77c));
  }
  local_8 = (undefined2 *******)0x0;
  local_c = (undefined2 *******)0xbd0a;
  func_0x0000daa6();
  local_66 = 1;
  while( true ) {
    if ((int)local_8 < 2) {
      func_0x000297e6();
      local_c = (undefined2 *******)0xbd29;
      func_0x00029bb5();
      func_0x00029983();
    }
    else if (local_66 < (int)local_8) {
      func_0x000297e6();
      local_c = (undefined2 *******)0xbd4c;
      func_0x00029bb5();
      func_0x00029983();
      local_66 = local_66 + 1;
    }
    else {
      if (local_8 == (undefined2 *******)0x2) {
        func_0x000297e6();
      }
      else {
        func_0x000297e6();
        func_0x00029b6d();
      }
      func_0x00029b55();
      local_c = (undefined2 *******)0xbd8c;
      func_0x00029bb5();
      func_0x00029983();
      local_66 = 1;
    }
    uVar21 = false;
    local_72e = local_7d6;
    local_72c = local_7d4;
    if ((int)local_7d4 < 0) {
      iVar11 = (local_7d4 & 0x7fff) + (uint)(local_7d6 != (undefined2 ******)0x0);
      uVar21 = iVar11 != 0;
      local_72e = (undefined2 ******)-(int)local_7d6;
      local_72c = -iVar11;
    }
    uVar23 = local_72c == 0;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar21) break;
    func_0x000297e6();
    func_0x000297e6();
    local_8 = (undefined2 *******)0x22b2;
    FUN_28b3_1181();
    if ((bool)uVar21 || (bool)uVar23) {
      func_0x000297e6();
      func_0x00029d78();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xbe47;
      func_0x000299d1();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xbe50;
      func_0x000297e6();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xbe55;
      func_0x00029d78();
      local_18 = 0x22b2;
      local_1a = 0xbe5f;
      func_0x000299d1();
      local_18 = 0;
      local_1a = 0x22b2;
      local_1c = 0xbe67;
      puVar15 = (uint *)FUN_1def_05d1();
      local_75c = (undefined2 *******)*puVar15;
      local_75a = puVar15[1];
      func_0x000297e6();
      func_0x00029d78();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xbe91;
      func_0x000299d1();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xbe9a;
      func_0x000297e6();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xbe9f;
      func_0x00029d78();
      local_18 = 0x22b2;
      local_1a = 0xbea9;
      func_0x000299d1();
      local_18 = 0;
      local_1a = 0x22b2;
      local_1c = 0xbeb1;
      puVar15 = (uint *)func_0x0001e558();
      local_788 = (undefined2 *******)*puVar15;
      local_786 = puVar15[1];
      func_0x000297e6();
      func_0x00029d78();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xbedb;
      func_0x000299d1();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xbee4;
      func_0x000297e6();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xbee9;
      func_0x00029d78();
      local_18 = 0x22b2;
      local_1a = 0xbef3;
      func_0x000299d1();
      local_18 = 0;
      local_1a = 0x22b2;
      local_1c = 0xbefb;
      puVar14 = (undefined2 *)FUN_1def_05d1();
      local_784 = *puVar14;
      local_782 = puVar14[1];
      func_0x000297e6();
      func_0x00029d78();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xbf25;
      func_0x000299d1();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xbf2e;
      func_0x000297e6();
      pppppppuStack_10 = (undefined2 *******)0x22b2;
      local_12 = 0xbf33;
      func_0x00029d78();
      local_18 = 0x22b2;
      local_1a = 0xbf3d;
      func_0x000299d1();
      local_18 = 0;
      local_1a = 0x22b2;
      local_1c = 0xbf45;
      puVar15 = (uint *)func_0x0001e558();
      local_7ae = (undefined2 *******)*puVar15;
      local_7ac = puVar15[1];
      local_22 = 0;
      local_750 = (undefined2 *******)0x0;
      local_752 = 0;
      local_84 = (undefined2 *******)*(uint *)0x9944;
      local_82 = *(uint *)0x9946;
      local_7c = local_75c;
      local_7a = local_75a;
      local_78 = local_788;
      local_76 = local_786;
      local_74 = local_784;
      local_72 = local_782;
      local_60 = local_75c;
      local_5e = local_75a;
      local_5c = local_788;
      local_5a = local_786;
      local_58 = local_784;
      local_56 = local_782;
      local_c = (undefined2 *******)0x1bb4;
      local_e = (undefined2 *******)0xbfed;
      local_70 = local_7ae;
      local_6e = local_7ac;
      local_54 = local_7ae;
      local_52 = local_7ac;
      local_82a = (undefined2 *)func_0x0000013f();
      puVar14 = (undefined2 *)local_82a;
      pppppppuVar13 = &local_60;
      for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
        puVar25 = puVar14;
        puVar14 = puVar14 + 1;
        pppppppuVar4 = pppppppuVar13;
        pppppppuVar13 = pppppppuVar13 + 1;
        *puVar25 = *pppppppuVar4;
      }
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      if ((local_754 == '\0') && (local_7ca = local_788, local_7c8 = local_786, (int)local_786 < 0))
      {
        local_7ca = (undefined2 *******)-(int)local_788;
        local_7c8 = -((local_786 & 0x7fff) + (uint)(local_788 != (undefined2 *******)0x0));
      }
      if ((local_754 == 'Z') && (local_7ca = local_75c, local_7c8 = local_75a, (int)local_75a < 0))
      {
        local_7ca = (undefined2 *******)-(int)local_75c;
        local_7c8 = -((local_75a & 0x7fff) + (uint)(local_75c != (undefined2 *******)0x0));
      }
      local_77a = local_7d8;
      local_8 = (undefined2 *******)0x22b2;
      for (local_77c = local_7da;
          ((int)local_77a <= (int)local_7e8 &&
          (((int)local_77a < (int)local_7e8 || (local_77c <= local_7ea))));
          local_77c = local_77c + 1) {
        local_e = (undefined2 *******)0xc0da;
        local_c = local_8;
        uVar24 = func_0x0000013f();
        pbVar2 = (byte *)((int)uVar24 + 0x14);
        *pbVar2 = *pbVar2 & 0xfe;
        local_77a = (undefined2 *******)((int)local_77a + (uint)(0xfffe < local_77c));
        local_8 = (undefined2 *******)0x0;
      }
LAB_3ab8_2452:
      pppppppuVar13 = (undefined2 *******)0x11f2;
      cVar10 = FUN_12c1_009c();
      if (cVar10 == '\x1b') {
LAB_3ab8_245e:
        *(uint *)0x14c = local_64;
        *(int *)0x14e = local_62;
        *(uint *)0x148 = param_6;
        *(int *)0x14a = param_7;
        if (param_3 == 0) {
          return 0xffff;
        }
        FUN_1885_2ec3();
        local_c = (undefined2 *******)0xd00b;
        func_0x0001470b();
        return 0xffff;
      }
      local_750 = (undefined2 *******)0x0;
      local_752 = 0;
      local_88 = (undefined2 *******)*(uint *)0x9940;
      local_86 = *(uint *)0x9942;
      local_7f4 = local_84;
      local_7f2 = local_82;
      if ((int)local_82 < 0) {
        local_7f4 = (undefined2 *******)-(int)local_84;
        local_7f2 = -((local_82 & 0x7fff) + (uint)(local_84 != (undefined2 *******)0x0));
      }
      if (local_754 == '\0') {
        local_77a = local_7d8;
        for (local_77c = local_7da;
            ((int)local_77a <= (int)local_7e8 &&
            (((int)local_77a < (int)local_7e8 || (local_77c <= local_7ea))));
            local_77c = local_77c + 1) {
          local_8 = local_77a;
          pppppppuVar19 = (undefined2 *******)0x0;
          local_e = (undefined2 *******)0xc227;
          local_c = pppppppuVar13;
          uVar24 = func_0x0000013f();
          if ((*(byte *)((int)uVar24 + 0x14) & 1) == 0) {
            local_8 = local_77a;
            local_c = (undefined2 *******)0x0;
            pppppppuVar19 = (undefined2 *******)0x0;
            local_e = (undefined2 *******)0xc241;
            uVar24 = func_0x0000013f();
            if ((*(byte *)((int)uVar24 + 0x14) & 2) == 0) {
              local_c = (undefined2 *******)0x0;
              pppppppuVar19 = (undefined2 *******)0x0;
              local_e = (undefined2 *******)0xc152;
              puVar25 = (undefined2 *)func_0x0000013f();
              puVar14 = (undefined2 *)puVar25;
              pppppppuVar13 = &local_3ce;
              for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
                pppppppuVar4 = pppppppuVar13;
                pppppppuVar13 = pppppppuVar13 + 1;
                puVar5 = puVar14;
                puVar14 = puVar14 + 1;
                *pppppppuVar4 = (undefined2 ******)*puVar5;
              }
              local_7b6 = local_3ca;
              local_7b4 = local_3c8;
              if ((int)local_3c8 < 0) {
                local_7b6 = (undefined2 *******)-(int)local_3ca;
                local_7b4 = -((local_3c8 & 0x7fff) + (uint)(local_3ca != (undefined2 *******)0x0));
              }
              local_7c6 = local_3c2;
              local_7c4 = local_3c0;
              if ((int)local_3c0 < 0) {
                local_7c6 = (undefined2 *******)-(int)local_3c2;
                local_7c4 = -((local_3c0 & 0x7fff) + (uint)(local_3c2 != (undefined2 *******)0x0));
              }
              if ((((int)local_7c8 < (int)local_7b4) ||
                  ((((int)local_7c8 <= (int)local_7b4 && (local_7ca < local_7b6)) ||
                   ((int)local_7c8 < (int)local_7c4)))) ||
                 (((int)local_7c8 <= (int)local_7c4 && (local_7ca < local_7c6)))) {
                if (((int)local_7b4 < (int)local_7c8) ||
                   ((((int)local_7b4 <= (int)local_7c8 && (local_7b6 <= local_7ca)) ||
                    (((int)local_7c4 < (int)local_7c8 ||
                     ((local_8 = unaff_DS, (int)local_7c4 <= (int)local_7c8 &&
                      (local_7c6 <= local_7ca)))))))) {
                  uVar21 = 0;
                  uVar23 = (local_3b9 & 1) == 0;
                  if ((bool)uVar23) {
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029b6d();
                    func_0x0002996b();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029b6d();
                    func_0x0002996b();
                    FUN_28b3_1181();
                    if ((bool)uVar21 || (bool)uVar23) {
                      func_0x000297e6();
                      func_0x000297e6();
                      local_8 = (undefined2 *******)0x22b2;
                      pppppppuVar19 = (undefined2 *******)0x22b2;
                      FUN_28b3_1181();
                      if ((bool)uVar21 || (bool)uVar23) goto LAB_3ab8_167a;
                    }
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if ((bool)uVar21) {
                      func_0x000297e6();
                      func_0x000297e6();
                      local_8 = (undefined2 *******)0x22b2;
                      pppppppuVar19 = (undefined2 *******)0x22b2;
                      FUN_28b3_1181();
                      if ((bool)uVar21) goto LAB_3ab8_167a;
                    }
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029b9d();
                    func_0x0002996b();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029c9d();
                    func_0x00029bb5();
                    local_8 = (undefined2 *******)0x22b2;
                    pppppppuVar19 = (undefined2 *******)0x22b2;
                    func_0x00029983();
                  }
                  else {
                    local_74e = local_3ce;
                    local_74c = local_3cc;
                    local_8 = unaff_DS;
                  }
                  local_7f0 = local_88;
                  local_7ee = local_86;
                  if ((int)local_86 < 0) {
                    local_7f0 = (undefined2 *******)-(int)local_88;
                    local_7ee = -((local_86 & 0x7fff) + (uint)(local_88 != (undefined2 *******)0x0))
                    ;
                  }
                  local_80 = local_74e;
                  local_7e = local_74c;
                  if ((int)local_74c < 0) {
                    local_80 = (undefined2 *******)-(int)local_74e;
                    local_7e = -((local_74c & 0x7fff) + (uint)(local_74e != (undefined2 *******)0x0)
                                );
                  }
                  if ((((int)local_7f2 <= (int)local_7e) &&
                      ((((int)local_7f2 < (int)local_7e || (local_7f4 <= local_80)) &&
                       ((int)local_7e <= (int)local_7ee)))) &&
                     (((int)local_7e < (int)local_7ee || (local_80 < local_7f0)))) {
                    func_0x000297e6();
                    func_0x0002996b();
                    local_8 = (undefined2 *******)0x22b2;
                    pppppppuVar19 = (undefined2 *******)0x22b2;
                    func_0x00029983();
                    local_752 = local_77c;
                    local_750 = local_77a;
                  }
                }
              }
              else {
                local_8 = local_77a;
                local_c = (undefined2 *******)0x0;
                pppppppuVar19 = (undefined2 *******)0x0;
                local_e = (undefined2 *******)0xc1ef;
                uVar24 = func_0x0000013f();
                pbVar2 = (byte *)((int)uVar24 + 0x14);
                *pbVar2 = *pbVar2 | 2;
              }
            }
          }
LAB_3ab8_167a:
          local_77a = (undefined2 *******)((int)local_77a + (uint)(0xfffe < local_77c));
          pppppppuVar13 = pppppppuVar19;
        }
        local_760 = local_5c;
        local_75e = local_5a;
      }
      else if (local_754 == 'Z') {
        local_77a = local_7d8;
        for (local_77c = local_7da;
            ((int)local_77a <= (int)local_7e8 &&
            (((int)local_77a < (int)local_7e8 || (local_77c <= local_7ea))));
            local_77c = local_77c + 1) {
          local_8 = local_77a;
          pppppppuVar19 = (undefined2 *******)0x0;
          local_e = (undefined2 *******)0xc537;
          local_c = pppppppuVar13;
          uVar24 = func_0x0000013f();
          if ((*(byte *)((int)uVar24 + 0x14) & 1) == 0) {
            local_8 = local_77a;
            local_c = (undefined2 *******)0x0;
            pppppppuVar19 = (undefined2 *******)0x0;
            local_e = (undefined2 *******)0xc551;
            uVar24 = func_0x0000013f();
            if ((*(byte *)((int)uVar24 + 0x14) & 2) == 0) {
              local_c = (undefined2 *******)0x0;
              pppppppuVar19 = (undefined2 *******)0x0;
              local_e = (undefined2 *******)0xc47d;
              puVar25 = (undefined2 *)func_0x0000013f();
              puVar14 = (undefined2 *)puVar25;
              pppppppuVar13 = &local_3ce;
              for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
                pppppppuVar4 = pppppppuVar13;
                pppppppuVar13 = pppppppuVar13 + 1;
                puVar5 = puVar14;
                puVar14 = puVar14 + 1;
                *pppppppuVar4 = (undefined2 ******)*puVar5;
              }
              local_7b6 = local_3ce;
              local_7b4 = local_3cc;
              if ((int)local_3cc < 0) {
                local_7b6 = (undefined2 *******)-(int)local_3ce;
                local_7b4 = -((local_3cc & 0x7fff) + (uint)(local_3ce != (undefined2 *******)0x0));
              }
              local_7c6 = local_3c6;
              local_7c4 = local_3c4;
              if ((int)local_3c4 < 0) {
                local_7c6 = (undefined2 *******)-(int)local_3c6;
                local_7c4 = -((local_3c4 & 0x7fff) + (uint)(local_3c6 != (undefined2 *******)0x0));
              }
              if (((int)local_7c8 < (int)local_7b4) ||
                 (((((int)local_7c8 <= (int)local_7b4 && (local_7ca <= local_7b6)) ||
                   ((int)local_7c8 < (int)local_7c4)) ||
                  ((local_8 = unaff_DS, (int)local_7c8 <= (int)local_7c4 && (local_7ca <= local_7c6)
                   ))))) {
                if (((int)local_7b4 < (int)local_7c8) ||
                   ((((int)local_7b4 <= (int)local_7c8 && (local_7b6 < local_7ca)) ||
                    (((int)local_7c4 < (int)local_7c8 ||
                     (((int)local_7c4 <= (int)local_7c8 && (local_7c6 < local_7ca)))))))) {
                  uVar21 = 0;
                  uVar23 = (local_3b9 & 2) == 0;
                  if ((bool)uVar23) {
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029b6d();
                    func_0x00029af6();
                    func_0x0002996b();
                    FUN_28b3_0ee9();
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029b6d();
                    func_0x00029af6();
                    func_0x0002996b();
                    FUN_28b3_1181();
                    if ((bool)uVar21 || (bool)uVar23) {
                      func_0x000297e6();
                      func_0x000297e6();
                      local_8 = (undefined2 *******)0x22b2;
                      pppppppuVar19 = (undefined2 *******)0x22b2;
                      FUN_28b3_1181();
                      if ((bool)uVar21 || (bool)uVar23) goto LAB_3ab8_198a;
                    }
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if ((bool)uVar21) {
                      func_0x000297e6();
                      func_0x000297e6();
                      local_8 = (undefined2 *******)0x22b2;
                      pppppppuVar19 = (undefined2 *******)0x22b2;
                      FUN_28b3_1181();
                      if ((bool)uVar21) goto LAB_3ab8_198a;
                    }
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029b9d();
                    func_0x0002996b();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029c9d();
                    func_0x00029bb5();
                    local_8 = (undefined2 *******)0x22b2;
                    pppppppuVar19 = (undefined2 *******)0x22b2;
                    func_0x00029983();
                  }
                  else {
                    local_778 = local_3ca;
                    local_776 = local_3c8;
                    local_8 = unaff_DS;
                  }
                  local_7f0 = local_88;
                  local_7ee = local_86;
                  if ((int)local_86 < 0) {
                    local_7f0 = (undefined2 *******)-(int)local_88;
                    local_7ee = -((local_86 & 0x7fff) + (uint)(local_88 != (undefined2 *******)0x0))
                    ;
                  }
                  local_3d2 = local_778;
                  local_3d0 = local_776;
                  if ((int)local_776 < 0) {
                    local_3d2 = (undefined2 *******)-(int)local_778;
                    local_3d0 = -((local_776 & 0x7fff) +
                                 (uint)(local_778 != (undefined2 *******)0x0));
                  }
                  if ((((int)local_7f2 <= (int)local_3d0) &&
                      ((((int)local_7f2 < (int)local_3d0 || (local_7f4 <= local_3d2)) &&
                       ((int)local_3d0 <= (int)local_7ee)))) &&
                     (((int)local_3d0 < (int)local_7ee || (local_3d2 < local_7f0)))) {
                    func_0x000297e6();
                    func_0x0002996b();
                    local_8 = (undefined2 *******)0x22b2;
                    pppppppuVar19 = (undefined2 *******)0x22b2;
                    func_0x00029983();
                    local_752 = local_77c;
                    local_750 = local_77a;
                  }
                }
                else {
                  local_8 = local_77a;
                  local_c = (undefined2 *******)0x0;
                  pppppppuVar19 = (undefined2 *******)0x0;
                  local_e = (undefined2 *******)0xc594;
                  uVar24 = func_0x0000013f();
                  pbVar2 = (byte *)((int)uVar24 + 0x14);
                  *pbVar2 = *pbVar2 | 2;
                }
              }
            }
          }
LAB_3ab8_198a:
          local_77a = (undefined2 *******)((int)local_77a + (uint)(0xfffe < local_77c));
          pppppppuVar13 = pppppppuVar19;
        }
        local_73a = local_60;
        local_738 = local_5e;
      }
      else {
        local_77a = local_7d8;
        for (local_77c = local_7da;
            ((int)local_77a <= (int)local_7e8 &&
            (((int)local_77a < (int)local_7e8 || (local_77c <= local_7ea))));
            local_77c = local_77c + 1) {
          local_8 = local_77a;
          pppppppuVar19 = (undefined2 *******)0x0;
          local_e = (undefined2 *******)0xc8a6;
          local_c = pppppppuVar13;
          uVar24 = func_0x0000013f();
          if ((*(byte *)((int)uVar24 + 0x14) & 1) == 0) {
            local_8 = local_77a;
            local_c = (undefined2 *******)0x0;
            pppppppuVar19 = (undefined2 *******)0x0;
            local_e = (undefined2 *******)0xc8c0;
            uVar24 = func_0x0000013f();
            uVar21 = 0;
            uVar23 = (*(byte *)((int)uVar24 + 0x14) & 2) == 0;
            if ((bool)uVar23) {
              local_c = (undefined2 *******)0x0;
              local_e = (undefined2 *******)0xc79a;
              puVar25 = (undefined2 *)func_0x0000013f();
              puVar14 = (undefined2 *)puVar25;
              pppppppuVar13 = &local_3ce;
              for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
                pppppppuVar4 = pppppppuVar13;
                pppppppuVar13 = pppppppuVar13 + 1;
                puVar5 = puVar14;
                puVar14 = puVar14 + 1;
                *pppppppuVar4 = (undefined2 ******)*puVar5;
              }
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029b6d();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029b6d();
              FUN_28b3_1163();
              func_0x0002996b();
              FUN_28b3_0ee9();
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029b6d();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029b6d();
              FUN_28b3_1163();
              func_0x0002996b();
              FUN_28b3_1181();
              if ((bool)uVar21 || (bool)uVar23) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar21 || (bool)uVar23) {
                  local_8 = local_77a;
                  local_c = (undefined2 *******)0x22b2;
                  pppppppuVar19 = (undefined2 *******)0x0;
                  local_e = (undefined2 *******)0xc86e;
                  uVar24 = func_0x0000013f();
                  pbVar2 = (byte *)((int)uVar24 + 0x14);
                  *pbVar2 = *pbVar2 | 2;
                  goto LAB_3ab8_1cf9;
                }
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar21) {
                func_0x000297e6();
                func_0x000297e6();
                local_8 = (undefined2 *******)0x22b2;
                pppppppuVar19 = (undefined2 *******)0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar21) goto LAB_3ab8_1cf9;
              }
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029b9d();
              func_0x0002996b();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029c9d();
              func_0x00029bb5();
              func_0x0002996b();
              FUN_28b3_0ee9();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029b6d();
              func_0x00029bb5();
              func_0x0002996b();
              FUN_28b3_0ee9();
              uVar21 = 0;
              uVar23 = local_7b2 == 0;
              if ((bool)uVar23) {
                func_0x000297e6();
                func_0x000297e6();
                local_8 = (undefined2 *******)0x22b2;
                pppppppuVar19 = (undefined2 *******)0x22b2;
                FUN_28b3_1181();
                if (!(bool)uVar21) {
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if (!(bool)uVar21) goto LAB_3ab8_1ec8;
                  func_0x000297e6();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029983();
LAB_3ab8_1e83:
                  local_8 = (undefined2 *******)0x22b2;
                  pppppppuVar19 = (undefined2 *******)0x22b2;
                  local_752 = local_77c;
                  local_750 = local_77a;
                }
              }
              else {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar21 || (bool)uVar23) {
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if (!(bool)uVar21 && !(bool)uVar23) {
                    local_88 = local_778;
                    local_86 = local_776;
                    local_73a = local_74e;
                    local_738 = local_74c;
                    local_760 = local_778;
                    local_75e = local_776;
                    goto LAB_3ab8_1e83;
                  }
                }
LAB_3ab8_1ec8:
                local_8 = (undefined2 *******)0x22b2;
                pppppppuVar19 = (undefined2 *******)0x22b2;
              }
            }
          }
LAB_3ab8_1cf9:
          local_77a = (undefined2 *******)((int)local_77a + (uint)(0xfffe < local_77c));
          pppppppuVar13 = pppppppuVar19;
        }
      }
      local_77a = local_8a;
      for (local_77c = local_8c;
          ((int)local_77a <= *(int *)0x14e &&
          (((int)local_77a < *(int *)0x14e || (local_77c <= *(uint *)0x14c))));
          local_77c = local_77c + 1) {
        local_790._0_2_ = local_77c - local_64;
        local_790._2_2_ = (int)local_77a + (-(uint)(local_77c < local_64) - local_62);
        if ((((int)auStack_3b8[(uint)local_790 * 2 + 1] < (int)local_72c) ||
            (((int)auStack_3b8[(uint)local_790 * 2 + 1] <= (int)local_72c &&
             ((undefined2 ******)auStack_3b8[(uint)local_790 * 2] <= local_72e)))) &&
           (((int)local_72c < (int)auStack_71c[(uint)local_790 * 2 + 1] ||
            (((int)local_72c <= (int)auStack_71c[(uint)local_790 * 2 + 1] &&
             (local_72e <= (undefined2 ******)auStack_71c[(uint)local_790 * 2])))))) {
          local_e = (undefined2 *******)0xcaf2;
          local_c = pppppppuVar13;
          puVar25 = (undefined2 *)func_0x00000271();
          puVar18 = (undefined2 *)puVar25;
          puVar14 = &local_4a;
          for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
            puVar7 = puVar14;
            puVar14 = puVar14 + 1;
            puVar5 = puVar18;
            puVar18 = puVar18 + 1;
            *puVar7 = *puVar5;
          }
          local_c = (undefined2 *******)0x0;
          local_e = (undefined2 *******)0xcb0d;
          local_82a = (undefined2 *)func_0x00000271();
          puVar18 = (undefined2 *)local_82a;
          puVar14 = &local_4a;
          for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
            puVar5 = puVar18;
            puVar18 = puVar18 + 1;
            puVar25 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar5 = *puVar25;
          }
          local_8 = &local_78c;
          local_c = &local_768;
          local_e = &local_73e;
          pppppppuStack_10 = (undefined2 *******)0xffff;
          local_12 = 0xd8f0;
          local_14 = (undefined2 *******)0x0;
          uStack_16 = 0;
          local_18 = 0;
          pppppppuVar13 = (undefined2 *******)0x1bb4;
          local_1a = 0xcb46;
          iVar11 = FUN_1def_2b59();
          if (1 < iVar11) {
            if ((local_3c != local_38) || (local_3a != local_36)) {
              local_3d6 = local_3c;
              local_3d4 = local_3a;
              local_720 = local_38;
              local_71e = local_36;
              local_728 = local_4a;
              local_726 = local_48;
              local_742 = local_46;
              local_740 = local_44;
              local_732 = local_34;
              local_730 = local_32;
              local_c = (undefined2 *******)0xcbb1;
              func_0x000297e6();
              local_c = (undefined2 *******)0xcbb6;
              func_0x00029d78();
              local_12 = 0x22b2;
              local_14 = (undefined2 *******)0xcbc0;
              func_0x000299d1();
              local_12 = 0x22b2;
              local_14 = (undefined2 *******)0xcbc9;
              func_0x000297e6();
              local_12 = 0x22b2;
              local_14 = (undefined2 *******)0xcbce;
              func_0x00029d78();
              local_1a = 0x22b2;
              local_1c = 0xcbd8;
              func_0x000299d1();
              local_1a = 0;
              local_1c = 0;
              uStack_1e = 0x22b2;
              FUN_20a9_1260();
              if (local_24 < 0) {
                local_24 = local_24 + 0x168;
              }
              if ((local_71e < local_3d4) || ((local_71e <= local_3d4 && (local_720 <= local_3d6))))
              {
                if ((local_24 <= local_3d4) && ((local_24 < local_3d4 || (local_26 < local_3d6))))
                goto LAB_3ab8_20b1;
              }
              else {
                if ((local_3d4 <= local_24) && ((local_3d4 < local_24 || (local_3d6 <= local_26))))
                {
LAB_3ab8_20b1:
                  if ((local_24 < local_71e) || ((local_24 <= local_71e && (local_26 < local_720))))
                  goto LAB_3ab8_20d6;
                }
                local_768 = (undefined2 *******)*(uint *)0x9958;
                local_766 = *(uint *)0x995a;
                local_73e = local_768;
                local_73c = local_766;
              }
LAB_3ab8_20d6:
              local_c = (undefined2 *******)0xcc63;
              func_0x000297e6();
              local_c = (undefined2 *******)0xcc68;
              func_0x00029d78();
              local_12 = 0x22b2;
              local_14 = (undefined2 *******)0xcc72;
              func_0x000299d1();
              local_12 = 0x22b2;
              local_14 = (undefined2 *******)0xcc7b;
              func_0x000297e6();
              local_12 = 0x22b2;
              local_14 = (undefined2 *******)0xcc80;
              func_0x00029d78();
              local_1a = 0x22b2;
              local_1c = 0xcc8a;
              func_0x000299d1();
              local_1a = 0;
              local_1c = 0;
              uStack_1e = 0x22b2;
              FUN_20a9_1260();
              if (local_24 < 0) {
                local_24 = local_24 + 0x168;
              }
              if ((local_71e < local_3d4) || ((local_71e <= local_3d4 && (local_720 <= local_3d6))))
              {
                if ((local_24 <= local_3d4) && ((local_24 < local_3d4 || (local_26 < local_3d6))))
                goto LAB_3ab8_2163;
              }
              else {
                if ((local_3d4 <= local_24) && ((local_3d4 < local_24 || (local_3d6 <= local_26))))
                {
LAB_3ab8_2163:
                  if ((local_24 < local_71e) || ((local_24 <= local_71e && (local_26 < local_720))))
                  goto LAB_3ab8_2188;
                }
                local_78c = (undefined2 *******)*(uint *)0x9958;
                local_78a = *(uint *)0x995a;
                local_764 = local_78c;
                local_762 = local_78a;
              }
            }
LAB_3ab8_2188:
            uVar21 = 0;
            uVar23 = local_7b2 == 0;
            if ((bool)uVar23) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar21) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if (!(bool)uVar21 && !(bool)uVar23) {
                  local_88 = local_73e;
                  local_86 = local_73c;
                  local_73a = local_73e;
                  local_738 = local_73c;
                  local_760 = local_768;
                  local_75e = local_766;
                  local_752 = -local_77c;
                  iVar11 = (int)local_77a + (uint)(local_77c != 0);
                  uVar21 = iVar11 != 0;
                  local_750 = (undefined2 *******)-iVar11;
                  uVar23 = local_750 == (undefined2 *******)0x0;
                }
              }
              func_0x000297e6();
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              pppppppuVar13 = (undefined2 *******)0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar21) {
                func_0x000297e6();
                func_0x000297e6();
                local_8 = (undefined2 *******)0x22b2;
                pppppppuVar13 = (undefined2 *******)0x22b2;
                FUN_28b3_1181();
                if (!(bool)uVar21 && !(bool)uVar23) {
                  local_88 = local_764;
                  local_86 = local_762;
                  goto LAB_3ab8_224b;
                }
              }
            }
            else {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar21) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if (!(bool)uVar21 && !(bool)uVar23) {
                  local_88 = local_768;
                  local_86 = local_766;
                  local_73a = local_73e;
                  local_738 = local_73c;
                  local_760 = local_768;
                  local_75e = local_766;
                  local_752 = -local_77c;
                  iVar11 = (int)local_77a + (uint)(local_77c != 0);
                  uVar21 = iVar11 != 0;
                  local_750 = (undefined2 *******)-iVar11;
                  uVar23 = local_750 == (undefined2 *******)0x0;
                }
              }
              func_0x000297e6();
              func_0x000297e6();
              local_8 = (undefined2 *******)0x22b2;
              pppppppuVar13 = (undefined2 *******)0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar21) {
                func_0x000297e6();
                func_0x000297e6();
                local_8 = (undefined2 *******)0x22b2;
                pppppppuVar13 = (undefined2 *******)0x22b2;
                FUN_28b3_1181();
                if (!(bool)uVar21 && !(bool)uVar23) {
                  local_88 = local_78c;
                  local_86 = local_78a;
LAB_3ab8_224b:
                  local_8 = (undefined2 *******)0x22b2;
                  pppppppuVar13 = (undefined2 *******)0x22b2;
                  local_73a = local_764;
                  local_738 = local_762;
                  local_760 = local_78c;
                  local_75e = local_78a;
                  local_752 = -local_77c;
                  local_750 = (undefined2 *******)-((int)local_77a + (uint)(local_77c != 0));
                }
              }
            }
          }
        }
        local_77a = (undefined2 *******)((int)local_77a + (uint)(0xfffe < local_77c));
      }
      if (local_750 != (undefined2 *******)0x0 || local_752 != 0) {
        local_8 = pppppppuVar13;
        if ((-1 < (int)local_750) && ((0 < (int)local_750 || (local_752 != 0)))) {
          local_8 = (undefined2 *******)0x0;
          local_e = (undefined2 *******)0xcef3;
          local_c = pppppppuVar13;
          uVar24 = func_0x0000013f();
          pbVar2 = (byte *)((int)uVar24 + 0x14);
          *pbVar2 = *pbVar2 | 1;
        }
        local_84 = local_760;
        local_82 = local_75e;
        if (local_7b2 == 0) {
          local_84 = local_73a;
          local_82 = local_738;
        }
        if (local_22 == 0) {
          local_22 = 1;
          local_7aa = local_73a;
          local_7a8 = local_738;
          local_7ba = local_760;
          local_7b8 = local_75e;
          local_77e = local_77e + 1;
          if ((*(int *)0x13e <= (int)local_77e >> 0xf) &&
             ((*(int *)0x13e < (int)local_77e >> 0xf || (*(uint *)0x13c < local_77e)))) {
            local_780 = 3;
            goto LAB_3ab8_07aa;
          }
        }
        else {
          local_22 = 0;
          local_3df = local_802._0_1_;
          local_3e0 = (undefined1)local_72a;
          local_3de = (undefined1)param_5;
          local_3f0 = local_7aa;
          local_3ee = local_7a8;
          local_3ec = local_7ba;
          local_3ea = local_7b8;
          local_3e8 = local_73a;
          local_3e6 = local_738;
          local_3e4 = local_760;
          local_3e2 = local_75e;
          local_e = (undefined2 *******)0xcf91;
          local_c = local_8;
          iVar11 = func_0x000185d3();
          if (iVar11 == 1) {
            local_c = (undefined2 *******)0x11f2;
            local_e = (undefined2 *******)0xcfa6;
            uVar24 = func_0x0000013f();
            pbVar2 = (byte *)((int)uVar24 + 0x14);
            *pbVar2 = *pbVar2 | 0x20;
            local_8 = (undefined2 *******)0x0;
            if (param_3 != 0) {
              puVar14 = &uStack_1e;
              pppppppuVar13 = &local_3f0;
              for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
                puVar25 = puVar14;
                puVar14 = puVar14 + 1;
                pppppppuVar4 = pppppppuVar13;
                pppppppuVar13 = pppppppuVar13 + 1;
                *puVar25 = *pppppppuVar4;
              }
              local_22 = -0x3031;
              func_0x00018396();
              local_8 = (undefined2 *******)0x11f2;
            }
          }
          else {
            local_8 = (undefined2 *******)0x11f2;
            if (iVar11 != 0) goto LAB_3ab8_09eb;
          }
        }
        goto LAB_3ab8_2452;
      }
      if ((local_22 != 0) && (local_792 == 0)) {
        local_c = (undefined2 *******)0xd080;
        iVar11 = FUN_3ab8_0130();
        if (iVar11 != 0) goto LAB_3ab8_245e;
        local_792 = 1;
        local_8 = local_802;
        local_c = (undefined2 *******)0xd096;
        FUN_3ab8_00be();
      }
    }
  }
  *(uint *)0x14c = local_64;
  *(int *)0x14e = local_62;
  if ((int)local_800 < 10) {
    return 1;
  }
  func_0x000297e6();
  local_c = (undefined2 *******)0xbe05;
  func_0x00029bb5();
  func_0x00029983();
  uVar21 = local_800 < (undefined2 *******)0x9;
  local_800 = (undefined2 *******)((int)local_800 - 9);
  uVar23 = local_800 == (undefined2 *******)0x0;
  goto LAB_3ab8_05c5;
LAB_3ab8_07a4:
  local_780 = 1;
  goto LAB_3ab8_07aa;
LAB_3ab8_09eb:
  local_780 = 2;
LAB_3ab8_07aa:
  *(uint *)0x14c = local_64;
  *(int *)0x14e = local_62;
  *(uint *)0x148 = param_6;
  *(int *)0x14a = param_7;
  if (param_3 != 0) {
    FUN_1885_2ec3();
    local_c = (undefined2 *******)0xb357;
    func_0x0001470b();
  }
  local_c = (undefined2 *******)0xb360;
  iVar11 = FUN_3ab8_0130();
  if (iVar11 == 0) {
    return 0;
  }
  return 0xffff;
}



/* 3ab8:2523  FUN_3ab8_2523  872 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_2523(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar10;
  undefined4 uVar11;
  undefined2 *puVar12;
  undefined1 local_a0 [4];
  uint local_9c;
  int local_9a;
  int local_98;
  undefined1 local_96 [100];
  uint local_32;
  int local_30;
  char local_2c [14];
  uint local_1e;
  int local_1c;
  undefined2 local_1a [2];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  char *pcStack_10;
  char *pcStack_e;
  undefined1 *puStack_c;
  
  FUN_21f2_0ebc();
  bVar3 = false;
  local_9c = *(uint *)0x148;
  local_9a = *(int *)0x14a;
  local_2c[0] = '\0';
  if (param_1 == 1) {
    puStack_c = (undefined1 *)0x22b2;
    pcStack_e = (char *)0xd0db;
    func_0x00012038();
  }
  else {
    puStack_c = (undefined1 *)0x22b2;
    pcStack_e = (char *)0xd0f5;
    func_0x00012038();
  }
  uVar9 = 0x11f2;
  if (local_2c[0] != '#') {
    puStack_c = (undefined1 *)0x11f2;
    uVar9 = 0x22b2;
    pcStack_e = (char *)0xd10a;
    func_0x00024c86();
  }
  while( true ) {
    pcStack_e = (char *)0xd11a;
    puStack_c = (undefined1 *)uVar9;
    func_0x00024c86();
    puStack_c = (undefined1 *)0x22b2;
    pcStack_e = (char *)0xd12a;
    FUN_21f2_2d26();
    puStack_c = (undefined1 *)0x22b2;
    pcStack_e = (char *)0xd13a;
    FUN_21f2_2d26();
    puStack_c = (undefined1 *)0x22b2;
    pcStack_e = (char *)0xd14a;
    FUN_21f2_2d26();
    puStack_c = (undefined1 *)0x22b2;
    pcStack_e = (char *)0xd15a;
    FUN_21f2_2d26();
    puStack_c = (undefined1 *)0x22b2;
    pcStack_e = (char *)0xd16a;
    FUN_21f2_2d26();
    puStack_c = (undefined1 *)0x22b2;
    pcStack_e = (char *)0xd17a;
    FUN_21f2_2d26();
    puStack_c = (undefined1 *)0x22b2;
    pcStack_e = (char *)0xd18a;
    FUN_1def_07a4();
    puStack_c = (undefined1 *)0x2;
    pcStack_e = (char *)0x2c;
    pcStack_10 = local_2c;
    uStack_12 = 0x1bb4;
    uStack_14 = 0xd1a5;
    FUN_1000_02b5();
    puStack_c = local_a0;
    pcStack_e = local_96;
    *(undefined2 *)0xc22 = 1;
    *(undefined2 *)0xc2c = 1;
    pcStack_10 = (char *)0x1;
    uStack_12 = 0xdef;
    uVar9 = 0x1bb4;
    uStack_14 = 0xd1ca;
    iVar5 = FUN_1def_0904();
    *(undefined2 *)0xc2c = 0;
    if (iVar5 != 2) {
      uVar9 = 0x885;
      func_0x0000c3ca();
    }
    if (*(int *)0x158 != 0) break;
    if ((iVar5 == -1) && (!bVar3)) {
      return 0;
    }
    if ((iVar5 == -1) && (bVar3)) {
      *(uint *)0x148 = local_9c;
      *(int *)0x14a = local_9a;
      bVar3 = false;
      puStack_c = (undefined1 *)0xd227;
      func_0x0001470b();
      uVar9 = 0x885;
      func_0x0000abfa();
      *(undefined2 *)0xbc0 = 1;
    }
    else {
      if (iVar5 == 0x14) {
        return 0;
      }
      if ((iVar5 == 1) || (iVar5 == 2)) {
        if (iVar5 == 2) {
          pcStack_e = (char *)0xd265;
          puStack_c = (undefined1 *)uVar9;
          func_0x00024c86();
          uVar9 = *(undefined2 *)0xfda;
          *(undefined2 *)0xfda = 0;
          puStack_c = (undefined1 *)0x2c;
          pcStack_e = (char *)0xbf48;
          pcStack_10 = (char *)0x22b2;
          uStack_12 = 0xd289;
          local_98 = FUN_12c1_03d3();
          func_0x00002cc6();
          FUN_1000_0620();
          *(undefined2 *)0xfda = uVar9;
          uVar9 = 0x885;
          func_0x0000c3ca();
          if (*(int *)0x158 != 0) {
            return 0xff91;
          }
          if (local_98 != -1) {
            uVar9 = 0x22b2;
            puStack_c = (undefined1 *)0xd2c0;
            uVar6 = func_0x00024ce4();
            if (2 < uVar6) {
              puStack_c = (undefined1 *)0x22b2;
              pcStack_e = (char *)0xd2d6;
              func_0x00024c86();
              puStack_c = (undefined1 *)0x22b2;
              uVar9 = 0x11f2;
              pcStack_e = (char *)0xd2f4;
              func_0x000120ec();
            }
          }
        }
        else {
          local_9c = *(uint *)0x148;
          local_9a = *(int *)0x14a;
          puStack_c = (undefined1 *)*(undefined2 *)0xb310;
          pcStack_e = local_2c;
          pcStack_10 = (char *)0x1;
          uStack_12 = 1;
          uStack_16 = 0xd319;
          uStack_14 = uVar9;
          FUN_3ab8_020e();
          *(undefined2 *)0xbc0 = 1;
          local_1e = local_9c;
          local_1c = local_9a;
          local_30 = local_9a + (uint)(0xfffe < local_9c);
          local_32 = local_9c;
          while( true ) {
            local_32 = local_32 + 1;
            if ((*(int *)0x14a < local_30) ||
               ((*(int *)0x14a <= local_30 && (*(uint *)0x148 < local_32)))) break;
            pcStack_e = (char *)0xd364;
            puStack_c = (undefined1 *)uVar9;
            uVar11 = func_0x0000013f();
            if (*(char *)((int)uVar11 + 0x10) != '\t') {
              bVar10 = 0xfffe < local_1e;
              local_1e = local_1e + 1;
              local_1c = local_1c + (uint)bVar10;
              if ((local_32 != local_1e) || (local_30 != local_1c)) {
                puStack_c = (undefined1 *)0x0;
                pcStack_e = (char *)0xd394;
                puVar12 = (undefined2 *)func_0x0000013f();
                puVar7 = (undefined2 *)puVar12;
                puVar8 = local_1a;
                for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
                  puVar2 = puVar8;
                  puVar8 = puVar8 + 1;
                  puVar1 = puVar7;
                  puVar7 = puVar7 + 1;
                  *puVar2 = *puVar1;
                }
                puStack_c = (undefined1 *)0x0;
                pcStack_e = (char *)0xd3b1;
                puVar12 = (undefined2 *)func_0x0000013f();
                puVar7 = (undefined2 *)puVar12;
                puVar8 = local_1a;
                for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
                  puVar2 = puVar7;
                  puVar7 = puVar7 + 1;
                  puVar1 = puVar8;
                  puVar8 = puVar8 + 1;
                  *puVar2 = *puVar1;
                }
              }
            }
            uVar9 = 0;
            local_30 = local_30 + (uint)(0xfffe < local_32);
          }
          *(uint *)0x148 = local_1e;
          *(int *)0x14a = local_1c;
          func_0x0000abfa();
          if ((local_9a <= *(int *)0x14a) &&
             ((local_9a < *(int *)0x14a || (local_9c < *(uint *)0x148)))) {
            bVar3 = true;
          }
          do {
            uVar9 = 0x11f2;
            cVar4 = FUN_12c1_009c();
          } while (cVar4 != '\0');
        }
      }
    }
  }
  return 0xff91;
}



/* 3000:d40b  FUN_3000_d40b  1069 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far FUN_3000_d40b(undefined2 *param_1,undefined2 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 ******ppppppuVar3;
  undefined2 ******ppppppuVar4;
  undefined2 unaff_DS;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 *****local_2c;
  undefined2 uStack_2a;
  int local_28;
  undefined2 ******local_26;
  undefined2 uStack_24;
  int local_22;
  int local_20;
  undefined2 local_1e;
  undefined2 uStack_1c;
  int local_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 ******local_e;
  undefined2 *******local_c;
  undefined2 *******local_a;
  undefined2 *******local_8;
  undefined2 ******local_6;
  undefined2 *******local_4;
  
  local_4 = (undefined2 *******)0x3ab8;
  ppppppuVar3 = (undefined2 ******)0x22b2;
  local_6 = (undefined2 ******)0xd416;
  FUN_21f2_0ebc();
  local_28 = 2;
LAB_3ab8_289b:
  do {
    local_6 = (undefined2 ******)0xd420;
    local_4 = (undefined2 *******)ppppppuVar3;
    FUN_1885_2ec3();
    local_1a = 0;
    if ((*(int *)0x395e < 1) || (3 < *(int *)0x395e)) {
      iVar8 = 0;
    }
    else {
      iVar8 = -1;
    }
    if ((*(int *)0x395e < 5) || (7 < *(int *)0x395e)) {
      iVar7 = 0;
    }
    else {
      iVar7 = 1;
    }
    local_22 = iVar8 + iVar7;
    *(undefined2 *)0xc24 = 1;
    local_4 = (undefined2 *******)(*(int *)0xa5e + -1);
    local_6 = (undefined2 ******)*(undefined2 *)0x1b3e;
    local_8 = (undefined2 *******)0x0;
    local_a = (undefined2 *******)0x0;
    local_c = (undefined2 *******)0x1b6e;
    local_e = (undefined2 ******)0xd4b2;
    func_0x0000a76b();
    local_4 = (undefined2 *******)0x885;
    local_6 = (undefined2 ******)0xd4ba;
    func_0x0001bb4e();
    local_4 = (undefined2 *******)0x3959;
    local_6 = (undefined2 ******)0x1bb4;
    local_8 = (undefined2 *******)0xd4c3;
    func_0x00012276();
    local_4 = (undefined2 *******)0x804;
    local_6 = (undefined2 ******)0x11f2;
    local_8 = (undefined2 *******)0xd4cd;
    func_0x00012276();
    local_4 = (undefined2 *******)0x302;
    local_6 = (undefined2 ******)0x11f2;
    local_8 = (undefined2 *******)0xd4d7;
    func_0x00012276();
    local_4 = (undefined2 *******)0x2f0;
    local_6 = (undefined2 ******)0x11f2;
    local_8 = (undefined2 *******)0xd4e1;
    func_0x00012276();
    local_4 = (undefined2 *******)0x1;
    local_6 = (undefined2 ******)0x3d;
    local_8 = (undefined2 *******)0x11f2;
    local_a = (undefined2 *******)0xd4ef;
    FUN_1000_0599();
    local_4 = (undefined2 *******)0x98a;
    local_6 = (undefined2 ******)0xdef;
    local_8 = (undefined2 *******)0xd4fa;
    func_0x00012276();
    local_4 = (undefined2 *******)0xa2d;
    local_6 = (undefined2 ******)0x11f2;
    local_8 = (undefined2 *******)0xd504;
    func_0x00012276();
    local_4 = (undefined2 *******)0x8de;
    local_6 = (undefined2 ******)0x11f2;
    local_8 = (undefined2 *******)0xd50e;
    func_0x00012276();
    local_4 = (undefined2 *******)0x1;
    local_6 = (undefined2 ******)0x4c;
    local_8 = (undefined2 *******)0x11f2;
    local_a = (undefined2 *******)0xd51c;
    FUN_1000_0599();
    local_4 = (undefined2 *******)0x98a;
    local_6 = (undefined2 ******)0xdef;
    local_8 = (undefined2 *******)0xd527;
    func_0x00012276();
    local_4 = (undefined2 *******)0x0;
    local_6 = (undefined2 ******)0x0;
    local_8 = (undefined2 *******)0x1;
    local_a = (undefined2 *******)0x7;
    local_c = (undefined2 *******)0xd;
    local_e = (undefined2 ******)0x24e;
    local_10 = 3;
    local_12 = 0x244;
    local_14 = 0x11f2;
    uStack_16 = 0xd54b;
    func_0x0000f350();
    local_4 = (undefined2 *******)0x0;
    local_6 = (undefined2 ******)local_28;
    local_8 = (undefined2 *******)*(undefined2 *)0x9962;
    local_a = (undefined2 *******)*(undefined2 *)0x9960;
    local_c = (undefined2 *******)*(undefined2 *)0x995e;
    local_e = (undefined2 ******)*(undefined2 *)0x995c;
    local_10 = *(undefined2 *)0x9962;
    local_12 = *(undefined2 *)0x9960;
    local_14 = *(undefined2 *)0x995e;
    uStack_16 = *(undefined2 *)0x995c;
    local_18 = *(undefined2 *)0x996a;
    local_1a = *(int *)0x9968;
    uStack_1c = *(undefined2 *)0x9966;
    local_1e = *(undefined2 *)0x9964;
    local_20 = 3;
    local_22 = local_28;
    uStack_24 = *(undefined2 *)0x9972;
    local_26 = (undefined2 ******)*(undefined2 *)0x9970;
    uStack_2a = *(undefined2 *)0x996c;
    iVar2 = -(local_28 * 5 + -8);
    local_2c = (undefined2 *****)0xdef;
    uVar9 = 0xd5b1;
    local_28 = *(int *)0x996e;
    FUN_28b3_0d8b();
    iVar6 = 0x22b2;
    iVar5 = -0x2a45;
    func_0x000299d1(0x22b2,iVar7,iVar8,uVar9);
    local_20 = -(iVar6 + iVar5);
    iVar8 = (local_20 + 0x75) * 5;
    uVar9 = 0xd5d9;
    FUN_28b3_0d8b(0x22b2);
    func_0x000299d1(0x22b2,iVar8,iVar2,uVar9);
    func_0x0000fd9f(0x22b2);
    local_4 = (undefined2 *******)0xdef;
    ppppppuVar4 = (undefined2 ******)0x885;
    local_6 = (undefined2 ******)0xd5f0;
    func_0x0000a799();
    while( true ) {
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xa4a = 1;
      local_4 = &local_c;
      local_6 = &local_2c;
      local_8 = &local_26;
      local_a = &local_8;
      local_c = &local_4;
      ppppppuVar3 = (undefined2 ******)0x3bf;
      local_10 = 0xd612;
      local_e = ppppppuVar4;
      iVar8 = func_0x00006608();
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xa4a = 0;
      if (*(int *)0x158 != 0) {
        local_4 = (undefined2 *******)0x3bf;
        local_6 = (undefined2 ******)0xd62b;
        FUN_1885_2ec3();
        return 0xff91;
      }
      if (iVar8 == -1) {
        local_4 = (undefined2 *******)0x3bf;
        local_6 = (undefined2 ******)0xd63c;
        FUN_1885_2ec3();
        return 0xffff;
      }
      if (iVar8 == 99) goto LAB_3ab8_289b;
      if (local_c != (undefined2 *******)0x0) {
        local_4 = (undefined2 *******)0x3bf;
        ppppppuVar3 = (undefined2 ******)0x1b6e;
        local_6 = (undefined2 ******)0xd655;
        FUN_1885_2ec3();
        if (*(int *)0xa5e < (int)local_8) {
          local_4 = (undefined2 *******)&local_2c;
          local_6 = &local_26;
          local_8 = local_c;
          local_a = (undefined2 *******)0x1b6e;
          ppppppuVar3 = (undefined2 ******)0x11f2;
          local_c = (undefined2 *******)0xd68a;
          iVar7 = func_0x00015409();
          if (iVar7 != 0) {
            local_1a = 1;
          }
        }
        else if (((int)local_4 < 0x1e5) || (0x25b < (int)local_4)) {
          iVar8 = 99;
        }
        else {
          iVar8 = 0x31;
        }
      }
      if (iVar8 == 0x31) break;
      if (((local_c != (undefined2 *******)0x0) && (iVar8 != 0)) && (local_1a == 0))
      goto LAB_3ab8_289b;
      local_6 = (undefined2 ******)0xd6ed;
      local_4 = (undefined2 *******)ppppppuVar3;
      FUN_28b3_0d8b();
      local_4 = (undefined2 *******)0x22b2;
      local_6 = (undefined2 ******)0xd6f6;
      func_0x00029c2c();
      local_4 = (undefined2 *******)0x22b2;
      local_6 = (undefined2 ******)0xd6fe;
      func_0x00029c2c();
      local_4 = (undefined2 *******)0x22b2;
      local_6 = (undefined2 ******)0xd706;
      func_0x00029bb5();
      local_4 = (undefined2 *******)0x22b2;
      local_6 = (undefined2 ******)0xd70e;
      func_0x00029983();
      local_4 = (undefined2 *******)0x22b2;
      local_6 = (undefined2 ******)0xd71d;
      FUN_28b3_0d8b();
      local_4 = (undefined2 *******)0x22b2;
      local_6 = (undefined2 ******)0xd725;
      func_0x00029c2c();
      local_4 = (undefined2 *******)0x22b2;
      local_6 = (undefined2 ******)0xd72e;
      func_0x00029c2c();
      local_4 = (undefined2 *******)0x22b2;
      local_6 = (undefined2 ******)0xd736;
      func_0x00029bb5();
      local_4 = (undefined2 *******)0x22b2;
      ppppppuVar4 = (undefined2 ******)0x22b2;
      local_6 = (undefined2 ******)0xd73e;
      func_0x00029983();
      if (((undefined2 *******)local_6 != local_4) || (local_a != local_8)) {
        local_a = local_8;
        local_4 = (undefined2 *******)0x22b2;
        local_6 = (undefined2 ******)0xd765;
        func_0x000297e6();
        local_4 = (undefined2 *******)0x22b2;
        local_6 = (undefined2 ******)0xd76d;
        func_0x00029c74();
        local_4 = (undefined2 *******)0x22b2;
        local_6 = (undefined2 ******)0xd775;
        func_0x0002996b();
        local_4 = (undefined2 *******)0x22b2;
        local_6 = (undefined2 ******)0xd77d;
        func_0x00029983();
        local_4 = (undefined2 *******)0x22b2;
        local_6 = (undefined2 ******)0xd785;
        func_0x000297e6();
        local_4 = (undefined2 *******)0x22b2;
        local_6 = (undefined2 ******)0xd78d;
        func_0x00029c74();
        local_4 = (undefined2 *******)0x22b2;
        local_6 = (undefined2 ******)0xd795;
        func_0x0002996b();
        local_4 = (undefined2 *******)0x22b2;
        local_6 = (undefined2 ******)0xd79d;
        func_0x00029983();
        local_4 = (undefined2 *******)0x2;
        local_6 = (undefined2 ******)0x22b2;
        local_8 = (undefined2 *******)0xd7a9;
        func_0x000297e6();
        local_6 = (undefined2 ******)0x22b2;
        local_8 = (undefined2 *******)0xd7ae;
        func_0x00029d78();
        local_e = (undefined2 ******)0x22b2;
        local_10 = 0xd7b8;
        func_0x000299d1();
        local_e = (undefined2 ******)0x22b2;
        local_10 = 0xd7c0;
        func_0x000297e6();
        local_e = (undefined2 ******)0x22b2;
        local_10 = 0xd7c5;
        func_0x00029d78();
        uStack_16 = 0x22b2;
        local_18 = 0xd7cf;
        func_0x000299d1();
        uStack_16 = 0x22b2;
        local_18 = 0xd7d7;
        func_0x000297e6();
        local_1e = 0x22b2;
        local_20 = 0xd7e1;
        func_0x000299d1();
        local_1e = 0x22b2;
        local_20 = -0x2817;
        func_0x000297e6();
        local_26 = (undefined2 ******)0x22b2;
        local_28 = 0xd7f3;
        func_0x000299d1();
        local_26 = (undefined2 ******)0x22b2;
        ppppppuVar4 = (undefined2 ******)0x1bb4;
        local_28 = -0x2808;
        FUN_1885_5284();
      }
      if (local_1a != 0) {
        local_6 = (undefined2 ******)0xd809;
        local_4 = (undefined2 *******)ppppppuVar4;
        FUN_1885_2ec3();
        *param_1 = local_10;
        param_1[1] = local_e;
        *param_2 = local_14;
        param_2[1] = local_12;
        if (*(char *)0xd14 == '\0') {
          *(undefined1 *)0xd14 = 0x16;
        }
        return 1;
      }
    }
    if (*(char *)0x15b == '\x02') {
      piVar1 = (int *)0x395e;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        *(undefined2 *)0x395e = 8;
      }
    }
    else {
      *(int *)0x395e = *(int *)0x395e + 1;
      if (8 < *(int *)0x395e) {
        *(undefined2 *)0x395e = 0;
      }
    }
  } while( true );
}


