/* Ghidra decompilation of jw35.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  284 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0000(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  
  FUN_21f2_0ebc();
  uStack_8 = param_2;
  uStack_a = 0x22b2;
  uStack_c = 0xab95;
  iVar3 = func_0x00024ce4();
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uStack_8 = param_1;
    uStack_a = 0;
    uStack_c = param_2;
    uStack_e = 0x22b2;
    local_10 = 0xabae;
    func_0x00018eff();
    uVar5 = *(undefined2 *)0xb30e;
    *(undefined2 *)0xc3a0 = *(undefined2 *)0xb30c;
    *(undefined2 *)0xc3a2 = uVar5;
    uVar5 = *(undefined2 *)0xb380;
    *(undefined2 *)0xc3a4 = *(undefined2 *)0xb37e;
    *(undefined2 *)0xc3a6 = uVar5;
    *(undefined1 *)0xc3b4 = (undefined1)param_1;
    *(undefined1 *)0xc3b5 = *(undefined1 *)0xb310;
    uStack_8 = *(undefined2 *)0xa9ee;
    uStack_a = *(undefined2 *)0xa9ec;
    uStack_c = *(undefined2 *)0xa9ea;
    uStack_e = *(undefined2 *)0xa9e8;
    local_10 = 0x18b3;
    uStack_12 = 0xabfe;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xac08;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xac10;
    puVar4 = (undefined2 *)FUN_1def_05d1();
    uVar5 = puVar4[1];
    *(undefined2 *)0xc3a8 = *puVar4;
    *(undefined2 *)0xc3aa = uVar5;
    uStack_8 = *(undefined2 *)0xa9ee;
    uStack_a = *(undefined2 *)0xa9ec;
    uStack_c = *(undefined2 *)0xa9ea;
    uStack_e = *(undefined2 *)0xa9e8;
    local_10 = 0x1bb4;
    uStack_12 = 0xac39;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xac43;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    uStack_1c = 0xac4b;
    puVar4 = (undefined2 *)func_0x0001e558();
    uVar5 = puVar4[1];
    *(undefined2 *)0xc3ac = *puVar4;
    *(undefined2 *)0xc3ae = uVar5;
    uVar5 = *(undefined2 *)0xbc78;
    *(undefined2 *)0xc3b0 = param_2;
    *(undefined2 *)0xc3b2 = uVar5;
    *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
    uStack_8 = 0;
    uStack_a = 0x1bb4;
    uStack_c = 0xac76;
    func_0x0000daa6();
    puVar6 = &uStack_1e;
    puVar4 = (undefined2 *)0xc3a0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    func_0x0001b198(0x885);
    uStack_8 = 0x18b3;
    uStack_a = 0xac93;
    func_0x0000abfa();
    uVar5 = 1;
  }
  return uVar5;
}



/* 3ab8:011c  FUN_3ab8_011c  114 bytes, 1 callers */

void __cdecl16far FUN_3ab8_011c(void)

{
  undefined2 unaff_DS;
  int iVar1;
  
  FUN_21f2_0ebc();
  if (*(int *)0xc22 != 0) {
    *(undefined2 *)0xc22 = 0;
    func_0x0000daa6(0x22b2,0);
    func_0x0000def0(0x885,0,*(undefined2 *)0xa5e,*(undefined2 *)0x1b3e,*(undefined2 *)0xa5e,7,0xffff
                   );
    iVar1 = *(int *)0xa5e;
    while (iVar1 + 1 < 0x21) {
      iVar1 = -1;
      func_0x0000def0(0xdef,*(int *)0xa58 + 1,0xffff,*(int *)0x1b3e + -1,0xffff,0);
    }
  }
  return;
}



/* 3ab8:018e  FUN_3ab8_018e  3224 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x0003b5eb) */
/* WARNING: Removing unreachable block (ram,0x0003b25a) */
/* WARNING: Removing unreachable block (ram,0x0003b309) */

undefined2 __cdecl16far FUN_3ab8_018e(int param_1,int param_2,char *param_3)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int unaff_SI;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  uint unaff_DS;
  undefined1 uVar14;
  undefined1 uVar15;
  long lVar16;
  undefined2 *puVar17;
  undefined4 uVar18;
  int local_138;
  int local_136;
  char *local_132;
  undefined2 local_130;
  undefined2 local_12e;
  undefined2 local_12c;
  int local_12a;
  int local_128;
  int local_126;
  int local_124;
  int local_122;
  int local_120;
  undefined1 local_11e [51];
  undefined1 local_eb;
  undefined1 local_ea;
  undefined1 local_e9;
  char local_ba [44];
  int local_8e;
  char *local_8c;
  undefined2 local_8a;
  int local_88;
  undefined4 local_86;
  undefined2 local_82;
  undefined2 local_80;
  int local_7e [13];
  undefined2 local_64 [10];
  byte local_50;
  byte local_4f;
  byte local_4d;
  uint local_4a;
  undefined2 local_48;
  undefined2 local_3c [2];
  char *local_38;
  undefined2 local_36;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  char *local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 uStack_12;
  char *local_10;
  char *local_e;
  int *piStack_c;
  
  uVar12 = 0x22b2;
  FUN_21f2_0ebc();
  local_12a = 0;
  local_86 = CONCAT22(local_86._2_2_,(undefined2)local_86);
  if ((param_1 == 5) && (local_86 = CONCAT22(local_86._2_2_,(undefined2)local_86), param_2 == 0)) {
    uVar7 = *(uint *)0xb310;
    uVar9 = (int)uVar7 >> 0xf;
    local_136 = 0;
    local_ba[0] = '\0';
    for (local_138 = 1; local_138 <= *(int *)0x150; local_138 = local_138 + 1) {
      piStack_c = (int *)0xad84;
      puVar17 = (undefined2 *)func_0x00000398();
      puVar10 = (undefined2 *)puVar17;
      puVar11 = local_64;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar3 = puVar11;
        puVar11 = puVar11 + 1;
        puVar2 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar3 = *puVar2;
      }
      uVar14 = local_50 == 0x5a;
      if (local_50 < 0x5a) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar14) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((((bool)uVar14) && ((local_4d & 0x80) != 0)) &&
             ((uint)(local_4f >> 4) == ((int)((uVar7 ^ uVar9) - uVar9) >> 4 ^ uVar9) - uVar9)) {
            piStack_c = (int *)local_ba;
            local_e = (char *)0x22b2;
            local_10 = (char *)0xade3;
            FUN_1885_0344();
            local_136 = local_138;
          }
        }
      }
    }
    while( true ) {
      do {
        func_0x0001bb4e();
        piStack_c = (int *)0x1bb4;
        local_e = (char *)0xae04;
        func_0x00012276();
        piStack_c = (int *)0x11f2;
        local_e = (char *)0xae13;
        FUN_1000_0599();
        FUN_1000_060e();
        piStack_c = (int *)0x1b;
        local_e = local_ba;
        local_10 = (char *)0xdef;
        uStack_12 = 0xae30;
        local_126 = FUN_12c1_03d3();
        func_0x00002cc6();
        FUN_1000_0620();
        FUN_3ab8_011c();
        if (3 < *(byte *)0xb782) {
          pcVar4 = (code *)swi(0x3f);
          (*pcVar4)();
        }
        piStack_c = (int *)0xae5e;
        func_0x0000daa6();
        piStack_c = (int *)0x0;
        local_e = (char *)0x0;
        local_10 = (char *)0x885;
        uStack_12 = 0xae70;
        func_0x0000f1d8();
        piStack_c = (int *)0x1;
        local_e = (char *)0x7;
        local_10 = (char *)*(undefined2 *)0x1b40;
        uStack_12 = *(undefined2 *)0x1b3e;
        local_14 = *(undefined2 *)0xa5e;
        local_16 = 0;
        local_18 = (char *)0xdef;
        local_1a = 0xae95;
        func_0x0000f350();
        if (*(char *)0xb782 == '\0') {
          piStack_c = (int *)0x0;
          local_e = (char *)0x7;
          local_10 = (char *)*(undefined2 *)0xa5a;
          uStack_12 = *(undefined2 *)0xa58;
          local_14 = *(undefined2 *)0xa5e;
          local_16 = *(undefined2 *)0xa58;
          local_18 = (char *)0xdef;
          local_1a = 0xaebd;
          func_0x0000f350();
        }
        func_0x0000abfa();
        func_0x0000ac64();
        func_0x0000a799();
        local_48 = *(undefined2 *)0xc22;
        *(undefined2 *)0xc22 = 0;
        if (local_126 == -1) goto LAB_3ab8_0362;
        if (*(int *)0x158 != 0) goto LAB_3ab8_036e;
        do {
          do {
            piStack_c = local_7e;
            local_e = &stack0xfffa;
            local_10 = (char *)0x885;
            uStack_12 = 0xaf09;
            func_0x0000dcbd();
          } while (unaff_SI != 0);
        } while (local_7e[0] != 0);
        if (local_ba[0] == '\0') goto LAB_3ab8_0362;
        piStack_c = (int *)*(int *)0xa9ea;
        local_e = (char *)*(undefined2 *)0xa9e8;
        local_10 = local_ba;
        uStack_12 = 0x885;
        local_14 = 0xaf39;
        func_0x00000ad4();
        func_0x00029834();
        func_0x0002996b();
        func_0x00029d78();
        local_10 = (char *)0x22b2;
        uStack_12 = 0xaf5a;
        func_0x000299d1();
        local_10 = (char *)0x7692;
        uStack_12 = 0xbf48;
        local_14 = 0x22b2;
        local_16 = 0xaf67;
        FUN_21f2_3454();
      } while (*(int *)0xc22 != 0);
      piStack_c = (int *)0xaf7a;
      uVar7 = func_0x00024ce4();
      if (uVar7 < 0x29) break;
      *(undefined1 *)0xbf71 = 0;
      *(undefined1 *)0xbf72 = 0;
      *(undefined1 *)0xbf73 = 0;
      piStack_c = (int *)0x22b2;
      local_e = (char *)0xaf99;
      FUN_21f2_3454();
      *(undefined2 *)0xc22 = 1;
      piStack_c = (int *)0x22b2;
      local_e = (char *)0xafae;
      FUN_1000_0599();
      piStack_c = (int *)0xafb9;
      func_0x00012276();
    }
    *(undefined2 *)0xc22 = local_48;
    piStack_c = (int *)0x22b2;
    uVar12 = 0x22b2;
    local_e = (char *)0xafe3;
    FUN_21f2_3454();
    if (local_136 != 0) {
      piStack_c = (int *)0xaff4;
      func_0x0000daa6();
      uVar12 = 0x18b3;
      piStack_c = (int *)0xaffe;
      func_0x000190c7();
    }
    piStack_c = (int *)*(undefined2 *)0xa9ea;
    local_e = (char *)*(undefined2 *)0xa9e8;
    local_10 = (char *)*(undefined2 *)0xa9fa;
    uStack_12 = *(undefined2 *)0xa9f8;
    local_14 = *(undefined2 *)0xa9f6;
    local_16 = *(undefined2 *)0xa9f4;
    local_18 = (char *)*(undefined2 *)0xa9ee;
    local_1a = *(undefined2 *)0xa9ec;
    local_1c = *(undefined2 *)0xa9ea;
    uStack_1e = *(undefined2 *)0xa9e8;
    local_20 = *(undefined2 *)0xa9ee;
    uStack_22 = *(undefined2 *)0xa9ec;
    uStack_24 = *(undefined2 *)0xa9ea;
    uStack_26 = *(undefined2 *)0xa9e8;
    uStack_2a = 0xb044;
    uStack_28 = uVar12;
    FUN_1def_043a();
    piStack_c = (int *)0x1bb4;
    local_e = (char *)0xb054;
    iVar8 = FUN_3ab8_0000();
    if (iVar8 == 0) {
LAB_3ab8_0362:
      uVar12 = 0;
    }
    else {
      piStack_c = (int *)0xb066;
      uVar18 = func_0x00000398();
      pbVar1 = (byte *)((int)uVar18 + 0x17);
      *pbVar1 = *pbVar1 | 0x80;
LAB_3ab8_036e:
      uVar12 = 1;
    }
    return uVar12;
  }
  do {
    while( true ) {
      do {
        uVar13 = 0x22b2;
        local_e = (char *)0xb198;
        piStack_c = (int *)uVar12;
        FUN_21f2_3454();
        while( true ) {
          do {
            local_e = (char *)0xb1a8;
            piStack_c = (int *)uVar13;
            FUN_21f2_3454();
            if (local_12a == 0) {
              piStack_c = (int *)0x22b2;
              uVar12 = 0x22b2;
              local_e = (char *)0xb1c2;
              FUN_21f2_2d26();
              if (*param_3 != '\0') {
                piStack_c = (int *)0x22b2;
                uVar12 = 0x22b2;
                local_e = (char *)0xb1da;
                FUN_21f2_2d26();
                if (*(int *)0xc22 == 0) {
                  local_120 = 0x26;
                  piStack_c = (int *)0xb1f1;
                  uVar7 = func_0x00024ce4();
                  if (0x28 < uVar7) {
                    local_120 = 0x12;
                  }
                  piStack_c = (int *)0x2;
                  local_e = (char *)local_120;
                  local_10 = param_3;
                  uStack_12 = 0x22b2;
                  uVar12 = 0xdef;
                  local_14 = 0xb215;
                  FUN_1000_02b5();
                  *(undefined2 *)0xc22 = 1;
                }
              }
              local_e = (char *)0xb22c;
              piStack_c = (int *)uVar12;
              FUN_21f2_2d26();
              piStack_c = (int *)0x22b2;
              local_e = (char *)0xb23d;
              FUN_21f2_2d26();
            }
            else {
              piStack_c = (int *)0x22b2;
              local_e = (char *)0xb082;
              FUN_21f2_2d26();
              piStack_c = (int *)0x22b2;
              local_e = (char *)0xb092;
              FUN_21f2_2d26();
              piStack_c = (int *)0x22b2;
              local_e = (char *)0xb0a2;
              FUN_21f2_2d26();
            }
            piStack_c = (int *)0x22b2;
            local_e = (char *)0xb0b2;
            FUN_21f2_2d26();
            *(undefined2 *)0xc2c = 1;
            piStack_c = &local_12e;
            local_e = local_11e;
            local_10 = (char *)0x0;
            uStack_12 = 0x22b2;
            uVar13 = 0x1bb4;
            local_14 = 0xb0d6;
            local_126 = FUN_1def_0904();
            *(undefined2 *)0xc2c = 0;
            if (*(int *)0x158 != 0) goto LAB_3ab8_036e;
            if (local_126 == 0x14) {
              local_88 = 0;
              if (local_12a == 0) goto LAB_3ab8_036e;
              local_12a = 0;
            }
            if (local_126 == 1) {
              local_88 = 0;
              local_12a = 1;
            }
          } while (local_88 == 0);
          if ((((local_88 == 2) && (local_12a == 0)) && (*param_3 != '\0')) || (local_88 == 1))
          break;
          uVar13 = 0x11f2;
          piStack_c = (int *)0xb24e;
          func_0x00012276();
        }
        func_0x0000c3ca();
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (char *)0x22b2;
        uStack_12 = 0xb15b;
        func_0x000299d1();
        local_10 = (char *)0x22b2;
        uStack_12 = 0xb164;
        func_0x000297e6();
        local_10 = (char *)0x22b2;
        uStack_12 = 0xb169;
        func_0x00029d78();
        local_18 = (char *)0x22b2;
        local_1a = 0xb173;
        func_0x000299d1();
        local_18 = (char *)0x22b2;
        uVar12 = 0x11f2;
        local_1a = 0xb178;
        lVar16 = FUN_13bf_39a0();
        local_86 = lVar16;
      } while (lVar16 == 0);
      if (lVar16 < 1) {
        piStack_c = (int *)0x11f2;
        local_e = (char *)0xb291;
        puVar17 = (undefined2 *)func_0x00000271();
        puVar10 = (undefined2 *)puVar17;
        puVar11 = local_3c;
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = puVar11;
          puVar11 = puVar11 + 1;
          puVar2 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar3 = *puVar2;
        }
        bVar5 = (byte)local_20;
      }
      else {
        piStack_c = (int *)0x11f2;
        local_e = (char *)0xb268;
        puVar17 = (undefined2 *)func_0x0000013f();
        puVar10 = (undefined2 *)puVar17;
        puVar11 = &local_1c;
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = puVar11;
          puVar11 = puVar11 + 1;
          puVar2 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar3 = *puVar2;
        }
        bVar5 = (byte)unaff_SS;
      }
      local_4a = (uint)bVar5;
      if (local_4a == *(uint *)0xb310) break;
      piStack_c = (int *)0xb2bc;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      piStack_c = (int *)0x11f2;
      local_e = (char *)0xb2d0;
      FUN_1000_0599();
LAB_3ab8_0755:
      uVar12 = 0x11f2;
      piStack_c = (int *)0xb2db;
      func_0x00012276();
    }
    local_82 = local_12e;
    local_80 = local_12c;
    local_8c = local_132;
    local_8a = local_130;
    if (0 < local_86) {
      if ((unaff_DS & 0x40) == 0) {
        uVar14 = 0;
        uVar15 = (unaff_DS & 0x80) == 0;
        if ((bool)uVar15) {
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_117c();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_117c();
          FUN_28b3_1181();
          if (!(bool)uVar14 && !(bool)uVar15) {
            local_82 = local_1c;
            local_80 = local_1a;
            local_8c = local_18;
            local_8a = local_16;
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (char *)0x22b2;
            uStack_12 = 0xb3db;
            func_0x000299d1();
            local_10 = (char *)0x22b2;
            uStack_12 = 0xb3e3;
            func_0x000297e6();
            local_10 = (char *)0x22b2;
            uStack_12 = 0xb3e8;
            func_0x00029d78();
            local_18 = (char *)0x22b2;
            local_1a = 0xb3f2;
            func_0x000299d1();
            local_18 = (char *)0x22b2;
            local_1a = 0xb3fa;
            func_0x000297e6();
            local_18 = (char *)0x22b2;
            local_1a = 0xb3ff;
            func_0x00029d78();
            local_20 = 0x22b2;
            uStack_22 = 0xb409;
            func_0x000299d1();
            goto LAB_3ab8_095b;
          }
          local_8c = local_10;
          local_8a = local_e;
          func_0x000297e6();
          func_0x00029d78();
          local_10 = (char *)0x22b2;
          uStack_12 = 0xb434;
          func_0x000299d1();
          local_10 = (char *)0x22b2;
          uStack_12 = 0xb43c;
          func_0x000297e6();
          local_10 = (char *)0x22b2;
          uStack_12 = 0xb441;
          func_0x00029d78();
          local_18 = (char *)0x22b2;
          local_1a = 0xb44b;
          func_0x000299d1();
          local_18 = (char *)0x22b2;
          local_1a = 0xb453;
          func_0x000297e6();
          local_18 = (char *)0x22b2;
          local_1a = 0xb458;
          func_0x00029d78();
          local_20 = 0x22b2;
          uStack_22 = 0xb462;
          func_0x000299d1();
          local_20 = 0x22b2;
          uStack_22 = 0xb46a;
          func_0x000297e6();
          local_20 = 0x22b2;
          uStack_22 = 0xb472;
          func_0x0002996b();
          goto LAB_3ab8_0960;
        }
      }
      piStack_c = (int *)0xb328;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      piStack_c = (int *)0x11f2;
      local_e = (char *)0xb33c;
      FUN_1000_0599();
      goto LAB_3ab8_0755;
    }
    local_8c = local_38;
    local_8a = local_36;
    func_0x000297e6();
    func_0x00029d78();
    local_10 = (char *)0x22b2;
    uStack_12 = 0xb499;
    func_0x000299d1();
    local_10 = (char *)0x22b2;
    uStack_12 = 0xb4a1;
    func_0x000297e6();
    local_10 = (char *)0x22b2;
    uStack_12 = 0xb4a9;
    func_0x0002996b();
    local_10 = (char *)0x22b2;
    uStack_12 = 0xb4b2;
    func_0x00029bb5();
    local_10 = (char *)0x22b2;
    uStack_12 = 0xb4b7;
    func_0x00029d78();
    local_18 = (char *)0x22b2;
    local_1a = 0xb4c1;
    func_0x000299d1();
    local_18 = (char *)0x22b2;
    local_1a = 0xb4c9;
    func_0x000297e6();
    local_18 = (char *)0x22b2;
    local_1a = 0xb4ce;
    func_0x00029d78();
    local_20 = 0x22b2;
    uStack_22 = 0xb4d8;
    func_0x000299d1();
LAB_3ab8_095b:
    local_20 = 0x22b2;
    uStack_22 = 0xb4e0;
    func_0x000297e6();
LAB_3ab8_0960:
    local_20 = 0x22b2;
    uStack_22 = 0xb4e5;
    func_0x00029d78();
    uStack_28 = 0x22b2;
    uStack_2a = 0xb4ef;
    func_0x000299d1();
    uStack_28 = 0x22b2;
    uVar12 = 0x1bb4;
    uStack_2a = 0xb4f4;
    FUN_1def_043a();
    local_122 = 0;
    for (local_124 = 1; local_124 <= *(int *)0x150; local_124 = local_124 + 1) {
      uVar12 = 0;
      piStack_c = (int *)0xb5ab;
      puVar17 = (undefined2 *)func_0x00000398();
      puVar10 = (undefined2 *)puVar17;
      puVar11 = local_64;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar3 = puVar11;
        puVar11 = puVar11 + 1;
        puVar2 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar3 = *puVar2;
      }
      if (((local_50 < 0x5a) && ((local_4d & 0x80) != 0)) &&
         (uVar14 = (uint)local_4f < *(uint *)0xb310, (uint)local_4f == *(uint *)0xb310)) {
        func_0x00029834();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        FUN_28b3_117c();
        func_0x00029d78();
        uVar12 = 0x22b2;
        FUN_28b3_1181();
        if ((bool)uVar14) {
          if (local_88 == 1) {
            piStack_c = (int *)param_3;
            local_e = (char *)0x22b2;
            local_10 = (char *)0xb560;
            FUN_1885_0344();
            local_122 = 1;
          }
          piStack_c = (int *)0xb571;
          func_0x0000daa6();
          piStack_c = (int *)0xb57b;
          func_0x000190c7();
          func_0x0000abfa();
          uVar12 = 0x885;
          piStack_c = (int *)0xb58a;
          func_0x0000b1d8();
          break;
        }
      }
    }
    if (local_12a == 0) {
      if (local_88 == 1) {
LAB_3ab8_0a62:
        do {
          piStack_c = (int *)uVar12;
          if (local_86 < 1) {
            local_e = (char *)0xb638;
            FUN_21f2_3454();
          }
          else {
            local_e = (char *)0xb5ff;
            FUN_21f2_3454();
            piStack_c = (int *)0x22b2;
            local_e = (char *)0xb61a;
            FUN_21f2_2d26();
            piStack_c = (int *)0x22b2;
            local_e = (char *)0xb629;
            FUN_21f2_2d26();
          }
          piStack_c = (int *)0x22b2;
          local_e = (char *)0xb647;
          FUN_21f2_2d26();
          piStack_c = (int *)0x22b2;
          local_e = (char *)0xb653;
          FUN_1000_0599();
          piStack_c = (int *)0xb65e;
          func_0x00012276();
          uVar12 = 0xdef;
          func_0x00010526();
          if (local_122 != 0) {
            piStack_c = (int *)0xdef;
            local_e = (char *)0xb678;
            FUN_1000_0599();
            uVar12 = 0x11f2;
            piStack_c = (int *)0xb683;
            func_0x00012276();
          }
          if ((*(byte *)0x129 < 10) || (*(byte *)0xb782 < 4)) {
            func_0x0000c354();
            piStack_c = (int *)(*(int *)0xa5a + 1);
            local_e = (char *)0x0;
            local_10 = (char *)0x885;
            uStack_12 = 0xb6ac;
            func_0x0000a76b();
            uVar12 = 0x885;
            func_0x0000a799();
          }
          local_e = (char *)0xb6c1;
          piStack_c = (int *)uVar12;
          FUN_1000_0599();
          *(undefined2 *)0x16c = 0;
          if ((*(char *)0x124 != '\0') && (*(undefined2 *)0x16c = 0xffec, local_122 == 0)) {
            *param_3 = '\0';
          }
          FUN_1000_060e();
          piStack_c = (int *)0x12;
          local_e = param_3;
          local_10 = (char *)0xdef;
          uStack_12 = 0xb6fc;
          FUN_12c1_03d3();
          FUN_1000_0620();
          func_0x00002cc6();
          *(undefined2 *)0x16c = 0;
          piStack_c = (int *)0x2c1;
          local_e = (char *)0xb719;
          FUN_1000_0599();
          FUN_3ab8_011c();
          if (3 < *(byte *)0xb782) {
            pcVar4 = (code *)swi(0x3f);
            (*pcVar4)();
          }
          piStack_c = (int *)0xb738;
          func_0x0000daa6();
          piStack_c = (int *)0x0;
          local_e = (char *)0x0;
          local_10 = (char *)0x885;
          uStack_12 = 0xb74a;
          func_0x0000f1d8();
          piStack_c = (int *)0x1;
          local_e = (char *)0x7;
          local_10 = (char *)*(undefined2 *)0x1b40;
          uStack_12 = *(undefined2 *)0x1b3e;
          local_14 = *(undefined2 *)0xa5e;
          local_16 = 0;
          local_18 = (char *)0xdef;
          local_1a = 0xb76f;
          func_0x0000f350();
          if (*(char *)0xb782 == '\0') {
            piStack_c = (int *)0x0;
            local_e = (char *)0x7;
            local_10 = (char *)*(undefined2 *)0xa5a;
            uStack_12 = *(undefined2 *)0xa58;
            local_14 = *(undefined2 *)0xa5e;
            local_16 = *(undefined2 *)0xa58;
            local_18 = (char *)0xdef;
            local_1a = 46999;
            func_0x0000f350();
          }
          func_0x0000abfa();
          func_0x0000ac64();
          func_0x0000a799();
          local_48 = *(undefined2 *)0xc22;
          *(undefined2 *)0xc22 = 0;
          if (*(int *)0x158 != 0) goto LAB_3ab8_036e;
          do {
            do {
              piStack_c = local_7e;
              local_e = &stack0xfffa;
              local_10 = (char *)0x885;
              uStack_12 = 0xb7d4;
              func_0x0000dcbd();
            } while (unaff_SI != 0);
          } while (local_7e[0] != 0);
          local_11e[0] = 0;
          local_124 = 0;
          local_128 = 0;
          piStack_c = (int *)0x885;
          local_e = (char *)0xb7fe;
          puVar6 = (undefined1 *)func_0x00025a9a();
          if (puVar6 != (undefined1 *)0x0) {
            local_128 = 1;
            *puVar6 = 0;
          }
          piStack_c = (int *)0x22b2;
          local_e = (char *)0xb81e;
          puVar6 = (undefined1 *)func_0x00025a9a();
          if (puVar6 != (undefined1 *)0x0) {
            local_128 = 1;
            *puVar6 = 0;
          }
          while (param_3[local_124] != '\0') {
            piStack_c = (int *)*(undefined2 *)0xa9ea;
            local_e = (char *)*(undefined2 *)0xa9e8;
            local_10 = param_3 + local_124;
            uStack_12 = 0x22b2;
            local_14 = 0xb850;
            func_0x00000ad4();
            func_0x00029834();
            func_0x0002996b();
            func_0x00029d78();
            local_10 = (char *)0x22b2;
            uStack_12 = 0xb871;
            func_0x000299d1();
            local_10 = (char *)0x76f9;
            uStack_12 = 0xbf48;
            local_14 = 0x22b2;
            local_16 = 0xb87e;
            FUN_21f2_3454();
            if (0 < local_124) {
              piStack_c = (int *)0x22b2;
              local_e = (char *)0xb896;
              FUN_21f2_2d26();
            }
            piStack_c = (int *)0x22b2;
            local_e = (char *)0xb8a6;
            FUN_21f2_2d26();
            local_120 = -1;
            for (local_8e = local_124; param_3[local_8e] != '\0'; local_8e = local_8e + 1) {
              if ((param_3[local_8e] == ',') || (param_3[local_8e] == ';')) {
                local_120 = local_8e + 1;
                break;
              }
            }
            if (local_120 < 0) break;
            local_124 = local_120;
          }
          if (local_128 != 0) {
            piStack_c = (int *)0x22b2;
            local_e = (char *)0xb90e;
            FUN_21f2_2d26();
          }
          uVar12 = 0x22b2;
        } while (*(int *)0xc22 != 0);
        piStack_c = (int *)0xb924;
        uVar7 = func_0x00024ce4();
        if (0x32 < uVar7) {
          local_eb = 0;
          local_ea = 0;
          local_e9 = 0;
          piStack_c = (int *)0x22b2;
          local_e = (char *)0xb945;
          FUN_21f2_3454();
          *(undefined2 *)0xc22 = 1;
          piStack_c = (int *)0x22b2;
          local_e = (char *)0xb95a;
          FUN_1000_0599();
          uVar12 = 0x11f2;
          piStack_c = (int *)0xb965;
          func_0x00012276();
          goto LAB_3ab8_0a62;
        }
        *(undefined2 *)0xc22 = local_48;
        piStack_c = (int *)0x22b2;
        uVar12 = 0x22b2;
        local_e = (char *)0xb97c;
        FUN_21f2_3454();
      }
      local_e = (char *)0xb989;
      piStack_c = (int *)uVar12;
      iVar8 = FUN_3ab8_0000();
      if (iVar8 != 0) {
        uVar12 = 0;
        piStack_c = (int *)0xb99b;
        uVar18 = func_0x00000398();
        pbVar1 = (byte *)((int)uVar18 + 0x17);
        *pbVar1 = *pbVar1 | 0x80;
      }
    }
  } while( true );
}



/* 3ab8:0e2e  FUN_3ab8_0e2e  1586 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_0e2e(undefined2 param_1,int param_2,int param_3,uint *param_4,undefined2 param_5,
             undefined2 param_6,int param_7,undefined2 param_8,undefined2 param_9,
             undefined2 param_10,undefined2 param_11,undefined2 param_12)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  code *pcVar6;
  undefined2 *puVar7;
  int *piVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined2 *puVar14;
  undefined2 in_stack_00000062;
  undefined2 in_stack_00000064;
  undefined2 local_58 [13];
  undefined2 local_3e;
  undefined2 local_3c;
  int local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_26;
  undefined2 local_24;
  int local_22;
  uint local_20;
  int local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  int local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  uint local_a;
  
  FUN_21f2_0ebc();
  local_26 = *(undefined2 *)0xaa08;
  local_24 = *(undefined2 *)0xaa0a;
  local_2e = param_5;
  local_2c = param_6;
  local_3a = param_7;
  local_38 = param_8;
  local_36 = param_9;
  local_34 = param_10;
  local_3e = param_11;
  local_3c = param_12;
  puVar7 = &local_18;
  puVar10 = &param_5;
  for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    puVar14 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar3 = *puVar14;
  }
  puVar7 = local_58;
  puVar10 = &param_5;
  for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    puVar14 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar3 = *puVar14;
  }
  if (param_3 == 0 && param_2 == 0) {
    local_18 = local_2e;
    local_16 = local_2c;
    local_14 = local_3a;
    local_12 = local_38;
    local_10 = local_36;
    local_e = local_34;
    local_c = local_3e;
    local_a = 0xbedc;
    func_0x00029834();
    local_a = 0xbee4;
    func_0x00029c74();
    local_a = 0xbeec;
    func_0x00029983();
    local_a = 0xbef4;
    func_0x00029834();
    goto LAB_3ab8_1377;
  }
  local_a = param_1;
  local_c = 0x22b2;
  local_e = 0xba27;
  iVar9 = func_0x00025a9a();
  uVar13 = iVar9 == 0;
  if ((bool)uVar13) {
    local_a = param_1;
    local_c = 0x22b2;
    local_e = 0xba39;
    iVar9 = func_0x00025a9a();
    uVar13 = iVar9 == 0;
    if (!(bool)uVar13) goto LAB_3ab8_0ebf;
    local_22 = 0;
  }
  else {
LAB_3ab8_0ebf:
    local_22 = 1;
  }
  uVar12 = 0;
  local_a = 0xba53;
  func_0x000297e6();
  local_a = 0xba58;
  func_0x00029d78();
  local_a = 0xba60;
  func_0x00029bfc();
  local_a = 0xba68;
  func_0x00029983();
  local_a = 0xba70;
  func_0x000297e6();
  local_a = 0xba75;
  func_0x00029d78();
  local_a = 0xba7d;
  func_0x00029bfc();
  local_a = 0xba85;
  func_0x00029983();
  local_a = 0xba8d;
  func_0x00029834();
  local_a = 0xba95;
  func_0x00029983();
  local_a = 0xba9d;
  func_0x00029834();
  local_a = 0xbaa5;
  func_0x00029983();
  local_a = 0xbaad;
  func_0x000297e6();
  local_a = 0xbab2;
  func_0x00029d78();
  local_a = 0xbaba;
  func_0x00029bfc();
  local_a = 0xbac2;
  func_0x0002996b();
  local_a = 0xbac7;
  func_0x00029d78();
  local_a = 0xbacf;
  func_0x00029bfc();
  local_a = 0xbad7;
  func_0x0002996b();
  local_a = 0xbadf;
  func_0x00029983();
  local_a = 0xbae7;
  func_0x000297e6();
  local_a = 0xbaec;
  func_0x00029d78();
  local_a = 0xbaf4;
  func_0x00029bfc();
  local_a = 0xbafc;
  func_0x0002996b();
  local_a = 0xbb01;
  func_0x00029d78();
  local_a = 0xbb09;
  func_0x00029bfc();
  local_a = 0xbb11;
  func_0x0002996b();
  local_a = 0xbb19;
  FUN_28b3_0ee9();
  local_a = 0xbb21;
  func_0x000297e6();
  local_a = 0xbb29;
  func_0x000297e6();
  local_a = 0xbb2e;
  FUN_28b3_1181();
  if ((bool)uVar12 || (bool)uVar13) {
    local_a = 0xbb39;
    func_0x000297e6();
    local_a = 0xbb41;
    func_0x000297e6();
    local_a = 0xbb49;
    func_0x00029bb5();
    local_a = 0xbb4e;
    FUN_28b3_1181();
    if (!(bool)uVar12 && !(bool)uVar13) {
      local_a = 0xbb59;
      func_0x000297e6();
      local_a = 0xbb61;
      func_0x000297e6();
      local_a = 0xbb69;
      func_0x00029bb5();
      local_a = 0xbb6e;
      FUN_28b3_1181();
      if (!(bool)uVar12 && !(bool)uVar13) goto LAB_3ab8_0ff3;
    }
    local_a = 0xbc43;
    func_0x00029834();
    local_a = 0xbc48;
    func_0x00029af6();
  }
  else {
LAB_3ab8_0ff3:
    uVar12 = 0;
    uVar13 = local_22 == 0;
    if ((bool)uVar13) {
      local_a = 0xbbde;
      func_0x00029834();
      local_a = 0xbbe6;
      func_0x00029834();
      local_a = 0xbbeb;
      func_0x00029ae7();
      local_a = 0xbbf0;
      FUN_28b3_1181();
      if ((bool)uVar12) {
        return 0;
      }
      local_a = 0xbbff;
      func_0x000297e6();
      local_a = 0xbc04;
      func_0x00029d78();
      local_a = 0xbc0c;
      func_0x00029c44();
      local_a = 0xbc14;
      func_0x00029c2c();
      local_a = 0xbc1c;
      func_0x00029bfc();
    }
    else {
      local_a = 0xbb81;
      func_0x000297e6();
      local_a = 0xbb89;
      func_0x00029c2c();
      local_a = 0xbb91;
      func_0x00029834();
      local_a = 0xbb99;
      func_0x00029c2c();
      local_a = 0xbb9e;
      FUN_28b3_117c();
      local_a = 0xbba6;
      func_0x00029c74();
      local_a = 0xbbae;
      func_0x00029983();
      local_a = 0xbbb6;
      func_0x000297e6();
      local_a = 0xbbbe;
      func_0x00029c2c();
      local_a = 0xbbc6;
      func_0x00029834();
      local_a = 0xbbce;
      func_0x00029c2c();
      local_a = 0xbbd3;
      FUN_28b3_1163();
    }
    local_a = 0xbc24;
    func_0x00029983();
    local_a = 0xbc2c;
    func_0x000297e6();
    local_a = 0xbc31;
    func_0x00029d78();
    local_a = 0xbc39;
    func_0x00029c74();
  }
  local_a = 0xbc50;
  func_0x00029983();
  local_a = 0xbc58;
  func_0x000297e6();
  local_a = 0xbc60;
  func_0x000297e6();
  local_a = 0xbc65;
  FUN_28b3_1181();
  if ((bool)uVar12 || (bool)uVar13) {
    local_a = 0xbc70;
    func_0x000297e6();
    local_a = 0xbc78;
    func_0x000297e6();
    local_a = 0xbc80;
    func_0x00029bb5();
    local_a = 0xbc85;
    FUN_28b3_1181();
    if (!(bool)uVar12 && !(bool)uVar13) {
      local_a = 0xbc90;
      func_0x000297e6();
      local_a = 0xbc98;
      func_0x000297e6();
      local_a = 0xbca0;
      func_0x00029bb5();
      local_a = 0xbca5;
      FUN_28b3_1181();
      if (!(bool)uVar12 && !(bool)uVar13) goto LAB_3ab8_112a;
    }
    local_a = 0xbd78;
    func_0x00029834();
    local_a = 0xbd7d;
    func_0x00029af6();
  }
  else {
LAB_3ab8_112a:
    uVar13 = 0;
    if (local_22 == 0) {
      local_a = 0xbd15;
      func_0x00029834();
      local_a = 0xbd1d;
      func_0x00029834();
      local_a = 0xbd22;
      func_0x00029ae7();
      local_a = 0xbd27;
      FUN_28b3_1181();
      if ((bool)uVar13) {
        return 0;
      }
      local_a = 0xbd34;
      func_0x000297e6();
      local_a = 0xbd39;
      func_0x00029d78();
      local_a = 0xbd41;
      func_0x00029c44();
      local_a = 0xbd49;
      func_0x00029c2c();
      local_a = 0xbd51;
      func_0x00029bfc();
    }
    else {
      local_a = 0xbcb8;
      func_0x000297e6();
      local_a = 0xbcc0;
      func_0x00029c2c();
      local_a = 0xbcc8;
      func_0x00029834();
      local_a = 0xbcd0;
      func_0x00029c2c();
      local_a = 0xbcd5;
      FUN_28b3_117c();
      local_a = 0xbcdd;
      func_0x00029c74();
      local_a = 0xbce5;
      func_0x00029983();
      local_a = 0xbced;
      func_0x000297e6();
      local_a = 0xbcf5;
      func_0x00029c2c();
      local_a = 0xbcfd;
      func_0x00029834();
      local_a = 0xbd05;
      func_0x00029c2c();
      local_a = 0xbd0a;
      FUN_28b3_1163();
    }
    local_a = 0xbd59;
    func_0x00029983();
    local_a = 0xbd61;
    func_0x000297e6();
    local_a = 0xbd66;
    func_0x00029d78();
    local_a = 0xbd6e;
    func_0x00029c74();
  }
  local_a = 0xbd85;
  func_0x00029983();
  local_a = 0xbd8d;
  func_0x000297e6();
  local_10 = 0x22b2;
  local_12 = 0xbd97;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0xbd9f;
  func_0x000297e6();
  local_18 = 0x22b2;
  local_1a = 0xbda9;
  func_0x000299d1();
  local_18 = 0;
  local_1a = 0x22b2;
  local_1c = 0xbdb1;
  puVar7 = (undefined2 *)FUN_1def_05d1();
  local_18 = *puVar7;
  local_16 = puVar7[1];
  local_a = 0xbdc9;
  func_0x000297e6();
  local_10 = 0x22b2;
  local_12 = 0xbdd3;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0xbddb;
  func_0x000297e6();
  local_18 = 0x22b2;
  local_1a = 0xbde5;
  func_0x000299d1();
  local_18 = 0;
  local_1a = 0x22b2;
  local_1c = 0xbded;
  piVar8 = (int *)func_0x0001e558();
  local_14 = *piVar8;
  local_12 = piVar8[1];
  local_a = 0xbe05;
  func_0x000297e6();
  local_10 = 0x22b2;
  local_12 = 0xbe0f;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0xbe17;
  func_0x000297e6();
  local_18 = 0x22b2;
  local_1a = 0xbe21;
  func_0x000299d1();
  local_18 = 0;
  local_1a = 0x22b2;
  local_1c = 0xbe29;
  puVar7 = (undefined2 *)FUN_1def_05d1();
  local_10 = *puVar7;
  local_e = puVar7[1];
  local_a = 0xbe41;
  func_0x000297e6();
  local_10 = 0x22b2;
  local_12 = 0xbe4b;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0xbe53;
  func_0x000297e6();
  local_18 = 0x22b2;
  local_1a = 0xbe5d;
  func_0x000299d1();
  local_18 = 0;
  local_1a = 0x22b2;
  local_1c = 0xbe65;
  puVar7 = (undefined2 *)func_0x0001e558();
  local_c = *puVar7;
  local_a = 0xbe7d;
  func_0x000297e6();
  local_a = 0xbe82;
  func_0x00029d78();
  local_a = 0xbe8a;
  func_0x00029c74();
  local_a = 0xbe92;
  func_0x00029983();
  local_a = 0xbe9a;
  func_0x000297e6();
  local_a = 0xbe9f;
  func_0x00029d78();
LAB_3ab8_1377:
  local_a = 0xbefc;
  func_0x00029c74();
  uVar11 = 0x22b2;
  local_a = 0xbf04;
  func_0x00029983();
  puVar1 = param_4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  param_4[1] = param_4[1] + (uint)(0xfffe < uVar2);
  uVar2 = *param_4;
  local_20 = uVar2 * 3 + *(uint *)0x148;
  local_1e = (param_4[1] << 1 | (uint)((int)uVar2 < 0)) + param_4[1] + (uint)CARRY2(uVar2 * 2,uVar2)
             + *(int *)0x14a + (uint)CARRY2(uVar2 * 3,*(uint *)0x148);
  iVar9 = local_1e + (uint)(0xfff5 < local_20);
  if ((*(int *)0x13e <= iVar9) && ((*(int *)0x13e < iVar9 || (*(uint *)0x13c <= local_20 + 10)))) {
    uVar11 = *(undefined2 *)0x148;
    uVar5 = *(undefined2 *)0x14a;
    local_1c = *(undefined2 *)0x14c;
    local_1a = *(undefined2 *)0x14e;
    *(uint *)0x148 = local_20 + 10;
    *(int *)0x14a = iVar9;
    *(undefined2 *)0x14c = in_stack_00000062;
    *(undefined2 *)0x14e = in_stack_00000064;
    local_a = *(undefined2 *)0x152;
    local_c = in_stack_00000064;
    local_e = in_stack_00000062;
    local_10 = *(undefined2 *)0x14a;
    local_12 = *(undefined2 *)0x148;
    local_14 = *(int *)0xc0ac - *(int *)0xbefa;
    pcVar6 = (code *)swi(0x3f);
    iVar9 = (*pcVar6)();
    if (iVar9 != 0) {
      *(undefined2 *)0x148 = uVar11;
      *(undefined2 *)0x14a = uVar5;
      *(undefined2 *)0x14c = local_1c;
      *(undefined2 *)0x14e = local_1a;
      func_0x0000abfa();
      return 0xffff;
    }
    *(undefined2 *)0x148 = uVar11;
    *(undefined2 *)0x14a = uVar5;
    *(undefined2 *)0x14c = local_1c;
    *(undefined2 *)0x14e = local_1a;
    uVar11 = 0x885;
    func_0x0000abfa();
  }
  local_a = local_20;
  local_e = 0xbfeb;
  local_c = uVar11;
  puVar14 = (undefined2 *)func_0x0000013f();
  puVar10 = (undefined2 *)puVar14;
  puVar7 = &local_18;
  for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar4 = puVar10;
    puVar10 = puVar10 + 1;
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar4 = *puVar3;
  }
  local_a = local_20 + 1;
  local_c = 0;
  local_e = 0xc011;
  puVar14 = (undefined2 *)func_0x0000013f();
  puVar10 = (undefined2 *)puVar14;
  puVar7 = local_58;
  for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar4 = puVar10;
    puVar10 = puVar10 + 1;
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar4 = *puVar3;
  }
  return 0;
}



/* 3ab8:14ad  FUN_3ab8_14ad  1246 bytes, 1 callers */

int __cdecl16far FUN_3ab8_14ad(uint param_1)

{
  undefined2 *puVar1;
  undefined2 **ppuVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 **ppuVar6;
  undefined2 unaff_SS;
  int unaff_DS;
  bool bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 *puVar10;
  uint *in_stack_00000016;
  undefined2 *in_stack_00000018;
  undefined2 *in_stack_0000001a;
  undefined2 *in_stack_0000001c;
  undefined2 *in_stack_0000001e;
  undefined2 *in_stack_00000020;
  undefined2 *in_stack_00000022;
  undefined2 *in_stack_00000024;
  undefined2 *in_stack_00000026;
  undefined2 *in_stack_00000028;
  int *in_stack_0000002a;
  undefined2 *local_a0;
  undefined2 *local_9e;
  undefined2 *local_9c;
  undefined2 *local_9a;
  uint local_98;
  undefined2 local_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined2 local_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined1 local_86 [8];
  undefined2 local_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  int local_76;
  undefined2 local_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  int local_6c;
  undefined2 local_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 local_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 local_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 *local_52;
  undefined2 *local_50;
  undefined2 local_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 *local_3e;
  undefined2 *local_3c;
  undefined2 *local_3a;
  undefined2 *local_38;
  byte local_2a;
  byte local_29;
  byte local_28;
  byte local_27;
  undefined2 *local_26;
  undefined2 *local_24;
  undefined2 *local_22;
  undefined2 *local_20;
  undefined2 local_1e;
  undefined2 *puStack_1c;
  undefined2 *puStack_1a;
  undefined1 *puStack_18;
  undefined2 *local_16;
  undefined2 *local_14;
  undefined2 *local_12;
  undefined2 *local_10;
  undefined2 *local_e;
  undefined2 *local_c;
  undefined2 *puVar11;
  int iVar12;
  
  FUN_21f2_0ebc();
  func_0x00029834();
  func_0x00029bfc();
  func_0x00029983();
  func_0x00029834();
  func_0x00029bfc();
  func_0x00029983();
  local_12 = local_9c;
  local_10 = local_9a;
  if ((int)local_9a < 0) {
    local_12 = (undefined2 *)-(int)local_9c;
    local_10 = (undefined2 *)-(((uint)local_9a & 0x7fff) + (uint)(local_9c != (undefined2 *)0x0));
  }
  local_26 = local_a0;
  local_24 = local_9e;
  if ((int)local_9e < 0) {
    local_26 = (undefined2 *)-(int)local_a0;
    local_24 = (undefined2 *)-(((uint)local_9e & 0x7fff) + (uint)(local_a0 != (undefined2 *)0x0));
  }
  func_0x00029834();
  func_0x00029c74();
  func_0x00029983();
  func_0x00029834();
  func_0x00029c74();
  func_0x00029983();
  if ((int)local_9a < 0) {
    bVar7 = local_9c != (undefined2 *)0x0;
    local_9c = (undefined2 *)-(int)local_9c;
    local_9a = (undefined2 *)-(((uint)local_9a & 0x7fff) + (uint)bVar7);
  }
  if ((int)local_9e < 0) {
    bVar7 = local_a0 != (undefined2 *)0x0;
    local_a0 = (undefined2 *)-(int)local_a0;
    local_9e = (undefined2 *)-(((uint)local_9e & 0x7fff) + (uint)bVar7);
  }
  local_6c = 0;
  local_52 = local_a0;
  local_50 = local_9e;
  local_22 = local_9c;
  local_20 = local_9a;
  for (local_76 = 1; local_76 <= *(int *)0x150; local_76 = local_76 + 1) {
    local_c = (undefined2 *)0xc1ed;
    puVar10 = (undefined2 *)func_0x00000398();
    puVar11 = (undefined2 *)puVar10;
    ppuVar6 = &local_3e;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      ppuVar2 = ppuVar6;
      ppuVar6 = ppuVar6 + 1;
      puVar1 = puVar11;
      puVar11 = puVar11 + 1;
      *ppuVar2 = (undefined2 *)*puVar1;
    }
    if (((local_2a < 0x5a) && (local_29 == param_1)) &&
       (((local_28 & 0x80) != 0 || ((local_27 & 0x80) != 0)))) {
      local_e = local_3e;
      local_c = local_3c;
      if ((int)local_3c < 0) {
        local_e = (undefined2 *)-(int)local_3e;
        local_c = (undefined2 *)-(((uint)local_3c & 0x7fff) + (uint)(local_3e != (undefined2 *)0x0))
        ;
      }
      local_16 = local_3a;
      local_14 = local_38;
      if ((int)local_38 < 0) {
        local_16 = (undefined2 *)-(int)local_3a;
        local_14 = (undefined2 *)
                   -(((uint)local_38 & 0x7fff) + (uint)(local_3a != (undefined2 *)0x0));
      }
      if ((((((int)local_10 <= (int)local_c) &&
            (((((int)local_10 < (int)local_c || (local_12 <= local_e)) &&
              ((int)local_24 <= (int)local_14)) &&
             (((int)local_24 < (int)local_14 || (local_26 <= local_16)))))) &&
           ((int)local_c <= (int)local_20)) &&
          (((int)local_c < (int)local_20 || (local_e <= local_22)))) &&
         ((uVar8 = local_50 < local_14, (int)local_14 < (int)local_50 ||
          (((int)local_14 <= (int)local_50 && (uVar8 = local_52 < local_16, !(bool)uVar8)))))) {
        func_0x00029834();
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029bfc();
        func_0x00029ae7();
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029bfc();
        func_0x00029ae7();
        FUN_28b3_117c();
        FUN_28b3_1181();
        if ((bool)uVar8) {
          local_6c = local_76;
        }
      }
    }
  }
  local_98 = 0;
  *(undefined1 *)0xbf48 = 0;
  puVar11 = (undefined2 *)*(int *)0xa9e8;
  iVar4 = *(int *)0xa9ec;
  iVar12 = *(int *)0xa9ee;
  local_8e = *(undefined2 *)0xa9e8;
  uStack_8c = *(undefined2 *)0xa9ea;
  uStack_8a = *(undefined2 *)0xa9ec;
  uStack_88 = *(undefined2 *)0xa9ee;
  local_96 = *(undefined2 *)0xa9e8;
  uStack_94 = *(undefined2 *)0xa9ea;
  uStack_92 = *(undefined2 *)0xa9ec;
  uStack_90 = *(undefined2 *)0xa9ee;
  local_7e = *(undefined2 *)0xa9e8;
  uStack_7c = *(undefined2 *)0xa9ea;
  uStack_7a = *(undefined2 *)0xa9ec;
  uStack_78 = *(undefined2 *)0xa9ee;
  local_74 = *(undefined2 *)0xa9e8;
  uStack_72 = *(undefined2 *)0xa9ea;
  uStack_70 = *(undefined2 *)0xa9ec;
  uStack_6e = *(undefined2 *)0xa9ee;
  local_6a = *(undefined2 *)0xa9e8;
  uStack_68 = *(undefined2 *)0xa9ea;
  uStack_66 = *(undefined2 *)0xa9ec;
  uStack_64 = *(undefined2 *)0xa9ee;
  local_62 = *(undefined2 *)0xa9e8;
  uStack_60 = *(undefined2 *)0xa9ea;
  uStack_5e = *(undefined2 *)0xa9ec;
  uStack_5c = *(undefined2 *)0xa9ee;
  local_5a = *(undefined2 *)0xa9e8;
  uStack_58 = *(undefined2 *)0xa9ea;
  uStack_56 = *(undefined2 *)0xa9ec;
  uStack_54 = *(undefined2 *)0xa9ee;
  local_4e = *(undefined2 *)0xa9e8;
  uStack_4c = *(undefined2 *)0xa9ea;
  uStack_4a = *(undefined2 *)0xa9ec;
  uStack_48 = *(undefined2 *)0xa9ee;
  local_1e = *(undefined2 *)0xa9e8;
  puStack_1c = (undefined2 *)*(int *)0xa9ea;
  puStack_1a = (undefined2 *)*(int *)0xa9ec;
  puStack_18 = (undefined1 *)*(int *)0xa9ee;
  if (local_6c != 0) {
    local_c = (undefined2 *)0xc2fb;
    puVar10 = (undefined2 *)func_0x00000398();
    puVar11 = (undefined2 *)puVar10;
    ppuVar6 = &local_3e;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      ppuVar2 = ppuVar6;
      ppuVar6 = ppuVar6 + 1;
      puVar1 = puVar11;
      puVar11 = puVar11 + 1;
      *ppuVar2 = (undefined2 *)*puVar1;
    }
    local_c = (undefined2 *)0xbf48;
    local_e = (undefined2 *)0x0;
    local_10 = (undefined2 *)0xc31b;
    FUN_1885_0344();
    puVar11 = &local_8e;
    local_c = &local_96;
    local_e = &local_7e;
    local_10 = &local_74;
    local_12 = &local_6a;
    local_14 = &local_62;
    local_16 = &local_5a;
    puStack_18 = local_86;
    puStack_1a = &local_4e;
    puStack_1c = &local_1e;
    local_1e = 0x7700;
    local_20 = (undefined2 *)0xbf48;
    local_22 = (undefined2 *)0x18b3;
    local_24 = (undefined2 *)0xc35a;
    local_98 = func_0x000253ce();
    if ((local_98 == 1) && (uVar8 = 0, (local_28 & 0x80) != 0)) {
      func_0x00029834();
      func_0x00029834();
      FUN_28b3_1181();
      if ((bool)uVar8) {
        local_98 = 2;
      }
      func_0x00029834();
      func_0x00029ae7();
      puVar11 = (undefined2 *)0xc39d;
      func_0x000299d1();
      local_4e = *(undefined2 *)0xa9e8;
      uStack_4c = *(undefined2 *)0xa9ea;
      uStack_4a = *(undefined2 *)0xa9ec;
      uStack_48 = *(undefined2 *)0xa9ee;
    }
    if (local_98 == 0) {
      local_8e = *(undefined2 *)0xa9e8;
      uStack_8c = *(undefined2 *)0xa9ea;
      uStack_8a = *(undefined2 *)0xa9ec;
      uStack_88 = *(undefined2 *)0xa9ee;
      local_96 = *(undefined2 *)0xa9e8;
      uStack_94 = *(undefined2 *)0xa9ea;
      uStack_92 = *(undefined2 *)0xa9ec;
      uStack_90 = *(undefined2 *)0xa9ee;
      local_7e = *(undefined2 *)0xa9e8;
      uStack_7c = *(undefined2 *)0xa9ea;
      uStack_7a = *(undefined2 *)0xa9ec;
      uStack_78 = *(undefined2 *)0xa9ee;
      local_74 = *(undefined2 *)0xa9e8;
      uStack_72 = *(undefined2 *)0xa9ea;
      uStack_70 = *(undefined2 *)0xa9ec;
      uStack_6e = *(undefined2 *)0xa9ee;
      local_6a = *(undefined2 *)0xa9e8;
      uStack_68 = *(undefined2 *)0xa9ea;
      uStack_66 = *(undefined2 *)0xa9ec;
      uStack_64 = *(undefined2 *)0xa9ee;
      local_62 = *(undefined2 *)0xa9e8;
      uStack_60 = *(undefined2 *)0xa9ea;
      uStack_5e = *(undefined2 *)0xa9ec;
      uStack_5c = *(undefined2 *)0xa9ee;
      local_5a = *(undefined2 *)0xa9e8;
      uStack_58 = *(undefined2 *)0xa9ea;
      uStack_56 = *(undefined2 *)0xa9ec;
      uStack_54 = *(undefined2 *)0xa9ee;
      local_4e = *(undefined2 *)0xa9e8;
      uStack_4c = *(undefined2 *)0xa9ea;
      uStack_4a = *(undefined2 *)0xa9ec;
      uStack_48 = *(undefined2 *)0xa9ee;
      local_1e = *(undefined2 *)0xa9e8;
      puStack_1c = (undefined2 *)*(int *)0xa9ea;
      puStack_1a = (undefined2 *)*(int *)0xa9ec;
      puStack_18 = (undefined1 *)*(int *)0xa9ee;
      puVar11 = (undefined2 *)*(int *)0xa9e8;
      iVar4 = *(int *)0xa9ec;
      iVar12 = *(int *)0xa9ee;
    }
  }
  uVar3 = *(undefined2 *)0xaa16;
  *(undefined2 *)0x11e6 = *(undefined2 *)0xaa14;
  *(undefined2 *)0x11e8 = uVar3;
  uVar8 = local_98 < 3;
  if (2 < (int)local_98) {
    local_98 = local_98 - 1;
    uVar9 = local_98 == 0;
    func_0x00029834();
    func_0x00029ae7();
    func_0x000299b9();
    FUN_28b3_0ee9();
    func_0x00029834();
    func_0x00029834();
    puVar11 = (undefined2 *)0xc465;
    FUN_28b3_1181();
    if (!(bool)uVar8) {
      func_0x00029834();
      func_0x00029834();
      puVar11 = (undefined2 *)0xc47d;
      FUN_28b3_1181();
      if ((bool)uVar8 || (bool)uVar9) {
        func_0x00029834();
        puVar11 = (undefined2 *)0xc491;
        func_0x00029983();
      }
    }
  }
  *in_stack_00000016 = local_98;
  *in_stack_00000018 = local_1e;
  in_stack_00000018[1] = puStack_1c;
  in_stack_00000018[2] = puStack_1a;
  in_stack_00000018[3] = puStack_18;
  *in_stack_0000001a = local_4e;
  in_stack_0000001a[1] = uStack_4c;
  in_stack_0000001a[2] = uStack_4a;
  in_stack_0000001a[3] = uStack_48;
  *in_stack_0000001c = local_5a;
  in_stack_0000001c[1] = uStack_58;
  in_stack_0000001c[2] = uStack_56;
  in_stack_0000001c[3] = uStack_54;
  *in_stack_0000001e = local_62;
  in_stack_0000001e[1] = uStack_60;
  in_stack_0000001e[2] = uStack_5e;
  in_stack_0000001e[3] = uStack_5c;
  *in_stack_00000020 = local_6a;
  in_stack_00000020[1] = uStack_68;
  in_stack_00000020[2] = uStack_66;
  in_stack_00000020[3] = uStack_64;
  *in_stack_00000022 = local_74;
  in_stack_00000022[1] = uStack_72;
  in_stack_00000022[2] = uStack_70;
  in_stack_00000022[3] = uStack_6e;
  *in_stack_00000024 = local_7e;
  in_stack_00000024[1] = uStack_7c;
  in_stack_00000024[2] = uStack_7a;
  in_stack_00000024[3] = uStack_78;
  *in_stack_00000026 = local_96;
  in_stack_00000026[1] = uStack_94;
  in_stack_00000026[2] = uStack_92;
  in_stack_00000026[3] = uStack_90;
  *in_stack_00000028 = local_8e;
  in_stack_00000028[1] = uStack_8c;
  in_stack_00000028[2] = uStack_8a;
  in_stack_00000028[3] = uStack_88;
  *in_stack_0000002a = (int)puVar11;
  in_stack_0000002a[1] = unaff_DS;
  in_stack_0000002a[2] = iVar4;
  in_stack_0000002a[3] = iVar12;
  return local_6c;
}



/* 3ab8:198b  FUN_3ab8_198b  666 bytes, 1 callers */

undefined2 FUN_3ab8_198b(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar9;
  undefined2 in_stack_00000024;
  undefined2 in_stack_00000026;
  int in_stack_00000028;
  int in_stack_0000002a;
  uint *in_stack_00000044;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined1 local_86;
  undefined2 local_82;
  undefined2 local_80;
  uint local_2e;
  uint local_2c;
  uint local_2a;
  int local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  uint uStack_e;
  int iStack_c;
  uint uStack_a;
  
  uVar8 = 0x22b2;
  FUN_21f2_0ebc();
  local_82 = *(undefined2 *)0x148;
  local_80 = *(undefined2 *)0x14a;
  local_26 = *(undefined2 *)0x14c;
  local_24 = *(undefined2 *)0x14e;
  puVar5 = &local_22;
  puVar7 = (undefined2 *)&stack0x0004;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    puVar9 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar1 = *puVar9;
  }
  puVar7 = &local_a2;
  puVar5 = &local_22;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = *puVar9;
  }
  local_2e = *in_stack_00000044 + 1;
  local_2c = in_stack_00000044[1] + (uint)(0xfffe < *in_stack_00000044);
  *in_stack_00000044 = local_2e;
  in_stack_00000044[1] = local_2c;
  local_2a = local_2e * 3 + *(uint *)0x14c;
  local_28 = (local_2c * 2 | (uint)((int)local_2e < 0)) + local_2c +
             (uint)CARRY2(local_2e * 2,local_2e) + *(int *)0x14e +
             (uint)CARRY2(local_2e * 3,*(uint *)0x14c);
  uVar4 = local_2a + 10;
  iVar6 = local_28 + (uint)(0xfff5 < local_2a);
  if ((*(int *)0x142 <= iVar6) && ((*(int *)0x142 < iVar6 || (*(uint *)0x140 <= uVar4)))) {
    uStack_a = *(undefined2 *)0x152;
    *(uint *)0x14c = uVar4;
    *(int *)0x14e = iVar6;
    *(undefined2 *)0x148 = in_stack_00000024;
    *(undefined2 *)0x14a = in_stack_00000026;
    uStack_10 = in_stack_00000026;
    uStack_12 = in_stack_00000024;
    iStack_14 = *(int *)0xc0ac - *(int *)0xbefa;
    pcVar3 = (code *)swi(0x3f);
    uStack_e = uVar4;
    iStack_c = iVar6;
    iVar6 = (*pcVar3)();
    if (iVar6 != 0) {
      *(undefined2 *)0x148 = local_82;
      *(undefined2 *)0x14a = local_80;
      *(undefined2 *)0x14c = local_26;
      *(undefined2 *)0x14e = local_24;
      func_0x0000abfa();
      return 0xffff;
    }
    *(undefined2 *)0x148 = local_82;
    *(undefined2 *)0x14a = local_80;
    *(undefined2 *)0x14c = local_26;
    *(undefined2 *)0x14e = local_24;
    uVar8 = 0x885;
    func_0x0000abfa();
  }
  if (in_stack_0000002a == 0 && in_stack_00000028 == 0) {
    uStack_a = local_2a;
    uStack_e = 0xc78c;
    iStack_c = uVar8;
    puVar9 = (undefined2 *)func_0x00000271();
    puVar7 = (undefined2 *)puVar9;
    puVar5 = &local_22;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    local_a2 = *(undefined2 *)0xa9f0;
    local_a0 = *(undefined2 *)0xa9f2;
    uStack_a = 0xc7b9;
    func_0x00029834();
    uStack_a = 0xc7c2;
    func_0x00029983();
    local_86 = 0;
    uStack_a = local_2a + 1;
    iStack_c = 0x22b2;
    uStack_e = 0xc7da;
    puVar9 = (undefined2 *)func_0x00000271();
  }
  else {
    uStack_a = 0xc626;
    func_0x000297e6();
    uStack_a = 0xc62b;
    func_0x00029d78();
    uStack_a = 0xc633;
    func_0x00029bfc();
    uStack_a = 0xc63b;
    func_0x00029983();
    uStack_a = *(undefined2 *)0xa9ec;
    iStack_c = *(undefined2 *)0xa9ea;
    uStack_e = *(undefined2 *)0xa9e8;
    uStack_10 = 0x22b2;
    uStack_12 = 0xc653;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc658;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc660;
    func_0x00029bfc();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc668;
    func_0x0002996b();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc66d;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc677;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    local_1c = 0xc67f;
    puVar5 = (undefined2 *)FUN_1def_05d1();
    local_22 = *puVar5;
    local_20 = puVar5[1];
    uStack_a = *(undefined2 *)0xa9ec;
    iStack_c = *(undefined2 *)0xa9ea;
    uStack_e = *(undefined2 *)0xa9e8;
    uStack_10 = 0x1bb4;
    uStack_12 = 0xc6a7;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc6ac;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc6b6;
    func_0x000299d1();
    uStack_18 = 0;
    uStack_1a = 0x22b2;
    local_1c = 0xc6be;
    puVar5 = (undefined2 *)func_0x0001e558();
    local_1e = *puVar5;
    local_1c = puVar5[1];
    uStack_a = local_2a;
    iStack_c = 0x1bb4;
    uStack_e = 0xc6d9;
    puVar9 = (undefined2 *)func_0x00000271();
    puVar7 = (undefined2 *)puVar9;
    puVar5 = &local_22;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    uStack_a = 0xc6f8;
    func_0x000297e6();
    uStack_a = 0xc6fd;
    func_0x00029d78();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc707;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc710;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    uStack_12 = 0xc715;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc71f;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xc724;
    func_0x0002a178();
    uStack_a = 0xc72e;
    func_0x00029834();
    uStack_a = 50999;
    func_0x00029983();
    uStack_a = 0xc73f;
    func_0x000297e6();
    uStack_a = 0xc744;
    func_0x00029d78();
    uStack_a = 0xc74c;
    func_0x00029c74();
    uStack_a = 0xc755;
    func_0x00029983();
    local_86 = 1;
    uStack_a = local_2a + 1;
    iStack_c = 0x22b2;
    uStack_e = 0xc76d;
    puVar9 = (undefined2 *)func_0x00000271();
  }
  puVar7 = (undefined2 *)puVar9;
  puVar5 = &local_a2;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return 0;
}



/* 3ab8:1c79  FUN_3ab8_1c79  491 bytes, 1 callers */

void __cdecl16far FUN_3ab8_1c79(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_21f2_0ebc();
  func_0x000298b4(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x000299b9(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x00029da5(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x000299b9(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x00029da5(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x000299b9(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x00029834(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x0002a11e(0x22b2);
  func_0x00029834(0x22b2);
  func_0x000299d1(0x22b2);
  iVar1 = func_0x0002a10c(0x22b2);
  uVar2 = *(undefined2 *)(iVar1 + 4);
  uVar3 = *(undefined2 *)(iVar1 + 6);
  uVar4 = 0xc8ee;
  func_0x00029834(0x22b2);
  func_0x000299d1(0x22b2,uVar2,uVar3,uVar4);
  func_0x0002a11e(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x000299b9(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x00029834(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x000299b9(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x00029834(0x22b2);
  func_0x00029c2c(0x22b2);
  uVar4 = 0xc96b;
  func_0x00029834(0x22b2);
  func_0x000299d1(0x22b2,uVar2,uVar3,uVar4);
  func_0x0002a10c(0x22b2);
  func_0x00029834(0x22b2);
  func_0x000299b9(0x22b2);
  func_0x00029c2c(0x22b2);
  FUN_28b3_1163(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029983(0x22b2);
  func_0x00029834(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x00029834(0x22b2);
  func_0x00029c2c(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029983(0x22b2);
  return;
}



/* 3ab8:1e64  FUN_3ab8_1e64  11821 bytes, 0 callers */

undefined2
FUN_3ab8_1e64(undefined2 param_1,int param_2,int param_3,uint *param_4,undefined2 *param_5,
             undefined2 *param_6,uint *param_7,undefined2 *param_8)

{
  byte *pbVar1;
  int *piVar2;
  uint **ppuVar3;
  undefined2 *puVar4;
  int *piVar5;
  uint *puVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  int iVar16;
  undefined2 *puVar17;
  uint **ppuVar18;
  int *piVar19;
  undefined2 **ppuVar20;
  undefined2 **ppuVar21;
  int *piVar22;
  undefined2 *puVar23;
  undefined2 *puVar24;
  uint *puVar25;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar26;
  bool bVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined2 *puVar30;
  undefined4 uVar31;
  undefined2 *puVar32;
  undefined4 uVar33;
  int *piVar34;
  uint local_342;
  int local_340;
  uint *local_33a;
  undefined2 *local_338;
  uint *local_336;
  undefined2 *local_334;
  uint *local_326;
  undefined2 *local_324;
  uint *local_322;
  undefined2 *local_320;
  uint *local_316;
  undefined2 *local_314;
  uint local_312;
  int local_310;
  uint *local_302;
  undefined2 *local_300;
  undefined2 local_2ea;
  undefined2 local_2e8;
  undefined4 local_2e2;
  uint *local_2de;
  undefined2 *puStack_2dc;
  uint *local_2da;
  undefined2 *local_2d8;
  uint local_2d6;
  int local_2d4;
  int local_2d0;
  uint local_2ce;
  int local_2cc;
  int local_2ca;
  undefined2 local_2c8;
  undefined2 local_2c6;
  undefined1 **local_2c4;
  int local_2c2;
  undefined1 **local_2c0;
  int local_2be;
  undefined1 **local_2bc;
  int local_2ba;
  undefined2 local_294;
  int iStack_292;
  undefined1 **ppuStack_290;
  undefined1 local_28e [8];
  undefined2 *local_286;
  undefined2 local_284;
  undefined2 local_282;
  undefined2 local_280;
  undefined2 local_27e;
  int iStack_27c;
  undefined1 **ppuStack_27a;
  undefined2 local_278;
  undefined2 local_276;
  undefined1 local_274 [16];
  undefined2 local_264 [2];
  undefined2 local_260;
  undefined2 uStack_25e;
  undefined2 local_258;
  undefined2 uStack_256;
  undefined2 local_24e;
  undefined2 local_24c;
  undefined1 *local_24a;
  undefined1 *local_248;
  byte abStack_246 [16];
  undefined2 local_236;
  undefined2 local_234;
  int iStack_232;
  undefined1 **ppuStack_230;
  undefined2 local_22e;
  undefined2 *local_22c;
  uint local_226;
  undefined2 local_224;
  undefined2 local_222;
  int iStack_21c;
  undefined1 **ppuStack_21a;
  undefined2 auStack_218 [32];
  int local_1d8;
  undefined1 *local_1d6;
  undefined1 *local_1d4;
  char local_1d2;
  byte local_1d1;
  byte local_1d0;
  undefined2 local_1cf [22];
  uint local_1a2 [4];
  uint *local_19a;
  undefined2 *local_198;
  int local_196;
  int local_194;
  undefined1 **local_192;
  int local_190;
  int local_18e;
  int local_18c;
  uint *local_18a;
  undefined2 *local_188;
  undefined2 local_17a [2];
  undefined2 local_176;
  undefined2 *local_174;
  byte local_164;
  uint *local_162;
  undefined2 *local_160;
  undefined1 local_15e [8];
  undefined1 local_156 [16];
  undefined2 local_146 [4];
  undefined2 local_13e;
  undefined2 local_13c;
  undefined2 local_126 [2];
  undefined2 local_122;
  undefined2 *local_120;
  byte local_110;
  undefined2 local_10e;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined2 uStack_108;
  undefined2 local_106 [4];
  undefined1 local_fe [8];
  undefined2 local_f6 [6];
  undefined2 local_ea;
  undefined2 local_d6 [10];
  byte local_c2;
  byte local_c1;
  byte local_bf;
  uint local_be;
  uint local_bc;
  undefined2 local_ba;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  int local_b2;
  int local_b0;
  undefined2 local_8a;
  undefined2 local_88;
  uint uStack_86;
  uint uStack_84;
  uint local_7e;
  int local_7c;
  int local_7a;
  int iStack_78;
  undefined1 **ppuStack_76;
  int iStack_74;
  undefined1 **ppuStack_72;
  int iStack_70;
  undefined1 **ppuStack_6e;
  int iStack_6c;
  undefined1 **in_stack_0000ff96;
  undefined2 auStack_68 [3];
  uint *local_62;
  undefined2 *local_60;
  uint *local_5e;
  undefined2 *local_5c;
  uint local_56;
  uint *local_54;
  undefined2 *local_52;
  uint *local_50;
  undefined2 *local_4e;
  undefined4 local_4c;
  byte local_48;
  byte local_47;
  uint local_46;
  undefined2 uStack_44;
  uint local_42;
  uint uStack_40;
  uint uStack_3e;
  undefined2 local_3c;
  undefined2 uStack_38;
  undefined2 uStack_36;
  uint *local_34;
  undefined2 *local_32;
  uint *in_stack_0000ffd0;
  undefined2 *local_2e;
  undefined2 local_2c;
  undefined2 uStack_2a;
  uint *local_28;
  undefined2 *local_26;
  uint *local_24;
  undefined2 *local_22;
  uint *local_20;
  undefined2 *local_1e;
  uint *local_1c;
  undefined2 *local_1a;
  undefined2 local_18;
  undefined1 *local_16;
  undefined1 *puStack_14;
  undefined1 *local_12;
  undefined1 *local_10;
  uint *local_e;
  undefined2 *puStack_c;
  
  FUN_21f2_0ebc();
  local_42 = 0;
  puStack_c = (undefined2 *)0xc9fc;
  func_0x0000b1d8();
  func_0x0000c3ca();
  puStack_c = (undefined2 *)0xca0a;
  func_0x0000daa6();
  puStack_c = (undefined2 *)0x885;
  local_e = (uint *)0xca18;
  FUN_1000_0599();
  puStack_c = (undefined2 *)0xca23;
  func_0x00012276();
  puStack_c = (undefined2 *)0x11f2;
  local_e = (uint *)0xca31;
  FUN_1000_0599();
  puStack_c = (undefined2 *)0xca3c;
  func_0x00012276();
  local_190 = 0;
  puStack_c = (undefined2 *)0x11f2;
  for (local_192 = (undefined1 **)0x1;
      (local_190 <= *(int *)0x14a && ((local_190 < *(int *)0x14a || (local_192 <= *(uint *)0x148))))
      ; local_192 = (undefined1 **)((int)local_192 + 1)) {
    puVar23 = (undefined2 *)0x0;
    local_e = (uint *)0xca78;
    puVar30 = (undefined2 *)func_0x0000013f();
    puVar24 = (undefined2 *)puVar30;
    ppuVar18 = &local_28;
    for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
      ppuVar3 = ppuVar18;
      ppuVar18 = ppuVar18 + 1;
      puVar32 = puVar24;
      puVar24 = puVar24 + 1;
      *ppuVar3 = (uint *)*puVar32;
    }
    if ((local_18._1_1_ < 0x5a) && ((byte)local_18 != '\t')) {
      puVar23 = (undefined2 *)0x11f2;
      puStack_c = (undefined2 *)0xcaa1;
      func_0x000125f1();
    }
    local_190 = local_190 + (uint)(0xfffe < local_192);
    puStack_c = puVar23;
  }
  local_190 = 0;
  for (local_192 = (undefined1 **)0x1;
      (local_190 <= *(int *)0x14e && ((local_190 < *(int *)0x14e || (local_192 <= *(uint *)0x14c))))
      ; local_192 = (undefined1 **)((int)local_192 + 1)) {
    puVar23 = (undefined2 *)0x0;
    local_e = (uint *)0xcae5;
    puVar30 = (undefined2 *)func_0x00000271();
    puVar24 = (undefined2 *)puVar30;
    ppuVar18 = &local_62;
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
      ppuVar3 = ppuVar18;
      ppuVar18 = ppuVar18 + 1;
      puVar32 = puVar24;
      puVar24 = puVar24 + 1;
      *ppuVar3 = (uint *)*puVar32;
    }
    if ((local_47 < 0x5a) && (local_48 != 9)) {
      puVar23 = (undefined2 *)0x11f2;
      puStack_c = (undefined2 *)0xcb0e;
      func_0x000125f1();
    }
    local_190 = local_190 + (uint)(0xfffe < local_192);
    puStack_c = puVar23;
  }
  local_e = (uint *)0xcb2a;
  FUN_1000_0599();
  puStack_c = (undefined2 *)0x7735;
  local_e = (uint *)0xdef;
  local_10 = (undefined1 *)0xcb3b;
  func_0x00012276();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029d78();
  FUN_28b3_1c08();
  FUN_28b3_1177();
  func_0x0002996b();
  FUN_28b3_0ee9();
  if (*(int *)0x11ea != 0) {
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029c2c();
    func_0x00029983();
  }
  puVar24 = (undefined2 *)0x22b2;
  *(undefined2 *)0xbc0 = 1;
  local_18c = 0;
  local_18e = 0;
  local_284 = *(undefined2 *)0x148;
  local_282 = *(undefined2 *)0x14a;
  local_8a = *(undefined2 *)0x14c;
  local_88 = *(undefined2 *)0x14e;
  local_7e = 0;
  do {
    uVar9 = local_7e;
    uVar11 = *(undefined2 *)0xa9f2;
    auStack_218[local_7e * 2] = *(undefined2 *)0xa9f0;
    auStack_218[uVar9 * 2 + 1] = uVar11;
    abStack_246[local_7e] = 0;
    local_7e = local_7e + 1;
  } while ((int)local_7e < 0x10);
  for (local_226 = 1; (int)local_226 <= *(int *)0x150; local_226 = local_226 + 1) {
    puVar24 = (undefined2 *)0x0;
    puStack_c = (undefined2 *)0xcc72;
    puVar30 = (undefined2 *)func_0x00000398();
    puVar17 = (undefined2 *)puVar30;
    puVar23 = local_d6;
    for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
      puVar4 = puVar23;
      puVar23 = puVar23 + 1;
      puVar32 = puVar17;
      puVar17 = puVar17 + 1;
      *puVar4 = *puVar32;
    }
    uVar28 = local_c2 == 0x5a;
    if (local_c2 < 0x5a) {
      func_0x000297e6();
      func_0x000297e6();
      puVar24 = (undefined2 *)0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar28) {
        func_0x000297e6();
        func_0x000297e6();
        puVar24 = (undefined2 *)0x22b2;
        FUN_28b3_1181();
        if (((bool)uVar28) && ((local_bf & 0x80) != 0)) {
          puStack_c = (undefined2 *)0xbf48;
          local_e = (uint *)0x22b2;
          local_10 = (undefined1 *)0xcc0a;
          FUN_1885_0344();
          puStack_c = (undefined2 *)0xbf48;
          local_e = (uint *)0x18b3;
          puVar24 = (undefined2 *)0x22b2;
          local_10 = (undefined1 *)0xcc1f;
          local_1d8 = func_0x000253ce();
          if (local_1d8 == 1) {
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            local_7e = (uint)(local_c1 >> 4);
            puVar24 = (undefined2 *)0x22b2;
            func_0x00029983();
          }
        }
      }
    }
  }
  local_7e = 0;
  puStack_c = puVar24;
  do {
    puVar24 = (undefined2 *)0x11f2;
    local_e = (uint *)0xccdb;
    func_0x00012bf5();
    if (local_1d2 == '#') {
      if ((local_1d1 == 0x6c) && (local_1d0 == 0x76)) {
        puStack_c = local_1cf;
        local_e = (uint *)0x11f2;
        local_10 = (undefined1 *)0xcd05;
        func_0x000253ce();
        func_0x000297e6();
        func_0x00029b6d();
        puVar24 = (undefined2 *)0x22b2;
        func_0x00029983();
      }
      if (local_1d1 == 0x6b) {
        abStack_246[local_7e] = 1;
      }
    }
    local_7e = local_7e + 1;
    puStack_c = puVar24;
  } while ((int)local_7e < 0x10);
  param_8[1] = 0;
  *param_8 = 0;
  local_10 = (undefined1 *)0x0;
  local_12 = (undefined1 *)0x0;
  param_7[1] = 0;
  *param_7 = 0;
  local_bc = 0;
  local_be = 0;
  for (local_286 = (undefined2 *)0x0; (int)local_286 < 0x100;
      local_286 = (undefined2 *)((int)local_286 + 1)) {
    bVar27 = false;
    local_2c8 = *(undefined2 *)0xa9f0;
    local_2c6 = *(undefined2 *)0xa9f2;
    local_2c2 = 0;
    local_2c4 = (undefined1 **)0x0;
    local_2be = 0;
    local_2c0 = (undefined1 **)0x0;
    local_2ba = 0;
    local_2bc = (undefined1 **)0x0;
    puStack_c = (undefined2 *)0xf789;
    iVar12 = func_0x000125f1();
    if ((iVar12 != 0) && (*(char *)(local_286 + -0x25ad) != '\0')) {
      local_7e = (int)local_286 >> 0xf;
      local_7e = ((int)(((uint)local_286 ^ local_7e) - local_7e) >> 4 ^ local_7e) - local_7e;
      func_0x000297e6();
      func_0x00029d78();
      func_0x000299d1();
      local_280 = *(undefined2 *)0xa9f0;
      local_27e = *(undefined2 *)0xa9f2;
      if (*(char *)0x11d6 == '\0') {
        bVar7 = abStack_246[local_7e];
      }
      else {
        bVar7 = *(byte *)0x11d6;
      }
      local_42 = (uint)bVar7;
      puStack_c = (undefined2 *)0x22b2;
      puVar25 = (uint *)0x11f2;
      local_e = (uint *)0xcd83;
      FUN_10ad_20a9();
      if (local_1d2 == '#') {
        if ((local_1d1 == 0x6c) && (local_1d0 == 0x76)) {
          puStack_c = local_1cf;
          local_e = (uint *)0x11f2;
          puVar25 = (uint *)0x22b2;
          local_10 = (undefined1 *)0xcdad;
          func_0x000253ce();
        }
        uVar28 = local_1d1 < 0x6c;
        if ((local_1d1 == 0x6c) && (uVar28 = local_1d0 < 0x68, local_1d0 == 0x68)) {
          puStack_c = local_1cf;
          local_10 = (undefined1 *)0xcdd1;
          local_e = puVar25;
          func_0x000253ce();
          uVar28 = (undefined1 *)0xfff9 < &puStack_c;
        }
        func_0x00029834();
        func_0x000297e6();
        func_0x00029ae7();
        func_0x00029d78();
        FUN_28b3_1181();
        if (!(bool)uVar28) {
          bVar27 = true;
        }
      }
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029d78();
      puStack_c = (undefined2 *)0xce1e;
      func_0x00029c74();
      func_0x000299d1();
      uVar9 = local_be * 3 + *(uint *)0x14c;
      local_24a = (undefined1 *)(uVar9 + 10);
      local_248 = (undefined1 *)
                  ((local_bc << 1 | (uint)((int)local_be < 0)) + local_bc +
                   (uint)CARRY2(local_be * 2,local_be) + *(int *)0x14e +
                   (uint)CARRY2(local_be * 3,*(uint *)0x14c) + (uint)(0xfff5 < uVar9));
      local_190 = 0;
      puVar24 = (undefined2 *)0x22b2;
      for (local_192 = (undefined1 **)0x1;
          (local_190 <= *(int *)0x14a &&
          ((local_190 < *(int *)0x14a || (local_192 <= (undefined1 **)*(uint *)0x148))));
          local_192 = (undefined1 **)((int)local_192 + 1)) {
        local_e = (uint *)0xce89;
        puStack_c = puVar24;
        puVar30 = (undefined2 *)func_0x0000013f();
        puVar24 = (undefined2 *)puVar30;
        ppuVar18 = &local_28;
        for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
          ppuVar3 = ppuVar18;
          ppuVar18 = ppuVar18 + 1;
          puVar32 = puVar24;
          puVar24 = puVar24 + 1;
          *ppuVar3 = (uint *)*puVar32;
        }
        if ((local_18._1_1_ < 0x5a) && ((undefined2 *)((uint)local_16 & 0xff) == local_286)) {
          if (((byte)local_18 == '\t') && (local_18._1_1_ == 5)) {
            local_2c4 = local_192;
            local_2c2 = local_190;
          }
          if (((byte)local_18 == '\t') && (local_18._1_1_ == 6)) {
            local_2c0 = local_192;
            local_2be = local_190;
          }
          if ((local_42 != 0) && ((byte)local_18 == '\t')) {
            local_2c4 = local_192;
            local_2c2 = local_190;
          }
        }
        local_190 = local_190 + (uint)((undefined1 **)0xfffe < local_192);
        puVar24 = (undefined2 *)0x0;
      }
      if (local_2c2 == 0 && local_2c4 == (undefined1 **)0x0) {
        local_42 = 0;
      }
      local_278 = *(undefined2 *)0xaa48;
      local_276 = *(undefined2 *)0xaa4a;
      local_22e = *(undefined2 *)0xa9f0;
      local_2d8 = (undefined2 *)*(uint *)0xa9f2;
      local_22c = local_2d8;
      if (local_2c2 != 0 || local_2c4 != (undefined1 **)0x0) {
        local_2d4 = 0;
        local_2d6 = 0;
        local_2e2 = 0;
        local_2da = (uint *)*(uint *)0xa9f0;
        local_e = (uint *)0xcf7d;
        puStack_c = puVar24;
        puVar30 = (undefined2 *)func_0x0000013f();
        puVar24 = (undefined2 *)puVar30;
        ppuVar18 = &local_28;
        for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
          ppuVar3 = ppuVar18;
          ppuVar18 = ppuVar18 + 1;
          puVar32 = puVar24;
          puVar24 = puVar24 + 1;
          *ppuVar3 = (uint *)*puVar32;
        }
        local_226 = 1;
        local_2de = local_2da;
        puStack_2dc = local_2d8;
        while( true ) {
          uVar9 = *(uint *)0x152;
          uVar28 = local_226 < uVar9;
          uVar29 = local_226 == uVar9;
          if (!(bool)uVar29 && (int)uVar9 <= (int)local_226) break;
          puStack_c = (undefined2 *)0xcfa1;
          puVar30 = (undefined2 *)func_0x000003ef();
          puVar24 = (undefined2 *)puVar30;
          ppuVar18 = &local_34;
          for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
            ppuVar3 = ppuVar18;
            ppuVar18 = ppuVar18 + 1;
            puVar32 = puVar24;
            puVar24 = puVar24 + 1;
            *ppuVar3 = (uint *)*puVar32;
          }
          if ((local_2c._1_1_ < 0x5a) && ((undefined2 *)(local_2c & 0xff) == local_286)) {
            if (local_2c._1_1_ == 5) {
              local_2da = local_34;
              local_2d8 = local_32;
              puStack_2dc = local_2e;
              local_2d6 = local_226;
              local_2d4 = (int)local_226 >> 0xf;
              local_2de = in_stack_0000ffd0;
            }
            if (local_2c._1_1_ == 6) {
              local_162 = local_34;
              local_160 = local_32;
              local_188 = local_2e;
              local_2e2 = (long)(int)local_226;
              local_18a = in_stack_0000ffd0;
            }
          }
          local_226 = local_226 + 1;
        }
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        FUN_28b3_1163();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        FUN_28b3_117c();
        FUN_28b3_1181();
        if ((bool)uVar28 || (bool)uVar29) {
          func_0x000297e6();
          func_0x00029d78();
          local_10 = (undefined1 *)0x22b2;
          local_12 = (undefined1 *)0xd0b1;
          func_0x000299d1();
          local_10 = (undefined1 *)0x22b2;
          local_12 = (undefined1 *)0xd0b9;
          func_0x000297e6();
          local_10 = (undefined1 *)0x22b2;
          local_12 = (undefined1 *)0xd0be;
          func_0x00029d78();
          local_18 = (undefined2 *)0x22b2;
          local_1a = (undefined2 *)0xd0c8;
          func_0x000299d1();
          local_18 = (undefined2 *)0x22b2;
          local_1a = (undefined2 *)0xd0d0;
          func_0x000297e6();
          local_18 = (undefined2 *)0x22b2;
          local_1a = (undefined2 *)0xd0d5;
          func_0x00029d78();
          local_20 = (uint *)0x22b2;
          local_22 = (undefined2 *)0xd0df;
          func_0x000299d1();
        }
        else {
          func_0x000297e6();
          func_0x00029d78();
          local_10 = (undefined1 *)0x22b2;
          local_12 = (undefined1 *)0xd0fb;
          func_0x000299d1();
          local_10 = (undefined1 *)0x22b2;
          local_12 = (undefined1 *)0xd103;
          func_0x000297e6();
          local_10 = (undefined1 *)0x22b2;
          local_12 = (undefined1 *)0xd108;
          func_0x00029d78();
          local_18 = (undefined2 *)0x22b2;
          local_1a = (undefined2 *)0xd112;
          func_0x000299d1();
          local_18 = (undefined2 *)0x22b2;
          local_1a = (undefined2 *)0xd11a;
          func_0x000297e6();
          local_18 = (undefined2 *)0x22b2;
          local_1a = (undefined2 *)0xd11f;
          func_0x00029d78();
          local_20 = (uint *)0x22b2;
          local_22 = (undefined2 *)0xd129;
          func_0x000299d1();
        }
        local_20 = (uint *)0x22b2;
        local_22 = (undefined2 *)0xd131;
        func_0x000297e6();
        local_20 = (uint *)0x22b2;
        local_22 = (undefined2 *)0xd136;
        func_0x00029d78();
        local_28 = (uint *)0x22b2;
        uStack_2a = 0xd140;
        func_0x000299d1();
        local_28 = (uint *)0x22b2;
        uStack_2a = 0xd145;
        FUN_1def_043a();
        if (local_2d4 != 0 || local_2d6 != 0) {
          *(uint *)0xb30c = (uint)local_2da;
          *(uint *)0xb30e = (uint)local_2d8;
          *(uint *)0xb37e = (uint)local_2de;
          *(uint *)0xb380 = (uint)puStack_2dc;
        }
        if ((local_2e2._2_2_ == 0 && (int)local_2e2 == 0) && (local_42 != 0)) {
          if (local_2d4 == 0 && local_2d6 == 0) {
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd1a4;
            func_0x000299d1();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd1ac;
            func_0x000297e6();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd1b1;
            func_0x00029d78();
            local_18 = (undefined2 *)0x22b2;
            local_1a = (undefined2 *)0xd1bb;
            func_0x000299d1();
            local_18 = (undefined2 *)0x22b2;
            local_1a = (undefined2 *)0xd1c3;
            func_0x000297e6();
            local_18 = (undefined2 *)0x22b2;
            local_1a = (undefined2 *)0xd1c8;
            func_0x00029d78();
            local_20 = (uint *)0x22b2;
            local_22 = (undefined2 *)0xd1d2;
            func_0x000299d1();
            local_20 = (uint *)0x22b2;
            local_22 = (undefined2 *)0xd1da;
            func_0x000297e6();
            local_20 = (uint *)0x22b2;
            local_22 = (undefined2 *)0xd1df;
            func_0x00029d78();
            local_28 = (uint *)0x22b2;
            uStack_2a = 0xd1e9;
            func_0x000299d1();
            local_28 = (uint *)0x22b2;
            uStack_2a = 0xd1ee;
            FUN_1def_043a();
          }
          local_2e2 = 1;
          local_162 = (uint *)*(uint *)0xb30c;
          local_160 = (undefined2 *)*(uint *)0xb30e;
          local_18a = (uint *)*(uint *)0xb37e;
          local_188 = (undefined2 *)*(uint *)0xb380;
          if (local_2d4 != 0 || local_2d6 != 0) {
            local_162 = local_2da;
            local_160 = local_2d8;
            local_18a = local_2de;
            local_188 = puStack_2dc;
          }
        }
        puVar24 = (undefined2 *)0x1bb4;
        if (local_2e2._2_2_ == 0 && (int)local_2e2 == 0) {
          local_18a = (uint *)*(uint *)0xaa4c;
          local_188 = (undefined2 *)*(uint *)0xaa4e;
          local_190 = 0;
          local_162 = local_18a;
          local_160 = local_188;
          for (local_192 = (undefined1 **)0x1;
              (local_190 <= *(int *)0x14a &&
              ((local_190 < *(int *)0x14a || (local_192 <= *(uint *)0x148))));
              local_192 = (undefined1 **)((int)local_192 + 1)) {
            puVar23 = (undefined2 *)0x0;
            local_e = (uint *)0xd337;
            puStack_c = puVar24;
            puVar30 = (undefined2 *)func_0x0000013f();
            puVar24 = (undefined2 *)puVar30;
            ppuVar18 = &local_28;
            for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
              ppuVar3 = ppuVar18;
              ppuVar18 = ppuVar18 + 1;
              puVar32 = puVar24;
              puVar24 = puVar24 + 1;
              *ppuVar3 = (uint *)*puVar32;
            }
            if ((local_18._1_1_ < 0x5a) && ((undefined2 *)((uint)local_16 & 0xff) == local_286)) {
              uVar28 = (byte)local_18 < 9;
              if ((byte)local_18 != 9) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar28) {
                  local_162 = local_28;
                  local_160 = local_26;
                }
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar28) {
                  local_18a = local_24;
                  local_188 = local_22;
                }
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar28) {
                  local_162 = local_20;
                  local_160 = local_1e;
                }
                func_0x000297e6();
                func_0x000297e6();
                puVar23 = (undefined2 *)0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar28) {
                  local_18a = local_1c;
                  local_188 = local_1a;
                }
              }
            }
            local_190 = local_190 + (uint)(0xfffe < local_192);
            puVar24 = puVar23;
          }
          local_190 = 0;
          for (local_192 = (undefined1 **)0x1;
              (local_190 <= *(int *)0x14e &&
              ((local_190 < *(int *)0x14e || (local_192 <= (undefined1 **)*(uint *)0x14c))));
              local_192 = (undefined1 **)((int)local_192 + 1)) {
            puVar23 = (undefined2 *)0x0;
            local_e = (uint *)0xd3e6;
            puStack_c = puVar24;
            puVar30 = (undefined2 *)func_0x00000271();
            puVar24 = (undefined2 *)puVar30;
            ppuVar18 = &local_62;
            for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
              ppuVar3 = ppuVar18;
              ppuVar18 = ppuVar18 + 1;
              puVar32 = puVar24;
              puVar24 = puVar24 + 1;
              *ppuVar3 = (uint *)*puVar32;
            }
            if (((local_47 < 0x5a) && ((undefined2 *)(local_46 & 0xff) == local_286)) &&
               (uVar28 = local_48 < 9, local_48 != 9)) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar28) {
                local_162 = local_62;
                local_160 = local_60;
              }
              func_0x000297e6();
              func_0x000297e6();
              puVar23 = (undefined2 *)0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar28) {
                local_18a = local_5e;
                local_188 = local_5c;
              }
            }
            local_190 = local_190 + (uint)((undefined1 **)0xfffe < local_192);
            puVar24 = puVar23;
          }
        }
        local_278 = *(undefined2 *)0xaa48;
        local_276 = *(undefined2 *)0xaa4a;
        local_22e = *(undefined2 *)0xa9f0;
        local_22c = (undefined2 *)*(uint *)0xa9f2;
        uVar28 = 0;
        if (local_2be != 0 || local_2c0 != (undefined1 **)0x0) {
          local_e = (uint *)0xd44c;
          puStack_c = puVar24;
          puVar30 = (undefined2 *)func_0x0000013f();
          puVar23 = (undefined2 *)puVar30;
          puVar24 = local_264;
          for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
            puVar4 = puVar24;
            puVar24 = puVar24 + 1;
            puVar32 = puVar23;
            puVar23 = puVar23 + 1;
            *puVar4 = *puVar32;
          }
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029d78();
          func_0x000299b9();
          FUN_28b3_0ee9();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029d78();
          func_0x000299b9();
          func_0x00029c2c();
          func_0x00029834();
          func_0x00029c2c();
          FUN_28b3_117c();
          func_0x000299b9();
          FUN_28b3_0ee9();
          func_0x00029834();
          func_0x00029834();
          puVar24 = (undefined2 *)0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar28) {
            local_2be = 0;
            local_2c0 = (undefined1 **)0x0;
          }
          else {
            puStack_c = local_300;
            local_e = local_302;
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd519;
            puVar25 = (uint *)FUN_28b3_1582();
            uVar28 = (undefined1 *)0xfff7 < &local_e;
            uVar29 = &stack0x0000 == (undefined1 *)0x6;
            local_302 = (uint *)*puVar25;
            local_300 = (undefined2 *)puVar25[1];
            func_0x00029834();
            func_0x00029834();
            func_0x00029ae7();
            FUN_28b3_1181();
            if ((bool)uVar28 || (bool)uVar29) {
              func_0x00029834();
              func_0x00029834();
              FUN_28b3_1181();
              if (!(bool)uVar28 && !(bool)uVar29) goto LAB_3ab8_29df;
LAB_3ab8_2a01:
              puVar24 = (undefined2 *)0xaa50;
            }
            else {
              func_0x00029834();
              func_0x00029834();
              FUN_28b3_1181();
              if ((bool)uVar28 || (bool)uVar29) goto LAB_3ab8_2a01;
LAB_3ab8_29df:
              puVar24 = (undefined2 *)0xaa18;
            }
            local_2ea = *puVar24;
            local_2e8 = puVar24[1];
            func_0x00029834();
            func_0x00029834();
            FUN_28b3_1181();
            if ((bool)uVar28 || (bool)uVar29) {
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029983();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029983();
              func_0x00029834();
              func_0x00029c44();
              func_0x00029af6();
              func_0x00029983();
              func_0x00029834();
              func_0x00029c44();
              func_0x00029af6();
            }
            else {
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029983();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029983();
              func_0x00029834();
              func_0x00029c44();
              func_0x00029983();
              func_0x00029834();
              func_0x00029c44();
            }
            puVar24 = (undefined2 *)0x22b2;
            func_0x00029983();
          }
        }
      }
      for (local_226 = 1; (int)local_226 <= *(int *)0x150; local_226 = local_226 + 1) {
        puVar24 = (undefined2 *)0x0;
        puStack_c = (undefined2 *)0xd69b;
        uVar31 = func_0x00000398();
        pbVar1 = (byte *)((int)uVar31 + 0x16);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      local_2bc = local_2c4;
      local_2ba = local_2c2;
      local_190 = 0;
      for (local_192 = (undefined1 **)0x1;
          (local_190 <= *(int *)0x14a &&
          ((local_190 < *(int *)0x14a || (local_192 <= *(uint *)0x148))));
          local_192 = (undefined1 **)((int)local_192 + 1)) {
        puVar23 = (undefined2 *)0x0;
        local_e = (uint *)0xe19a;
        puStack_c = puVar24;
        puVar30 = (undefined2 *)func_0x0000013f();
        puVar24 = (undefined2 *)puVar30;
        ppuVar18 = &local_28;
        for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
          ppuVar3 = ppuVar18;
          ppuVar18 = ppuVar18 + 1;
          puVar32 = puVar24;
          puVar24 = puVar24 + 1;
          *ppuVar3 = (uint *)*puVar32;
        }
        if ((local_18._1_1_ < 0x5a) && ((undefined2 *)((uint)local_16 & 0xff) == local_286)) {
          local_2c4 = local_2bc;
          local_2c2 = local_2ba;
          if (local_42 == 0) {
            if ((byte)local_18 == '\t') goto LAB_3ab8_35f3;
          }
          else if (((uint)puStack_14 & 0x4000) == 0) {
            func_0x000297e6();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd6eb;
            func_0x000299d1();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd6f3;
            func_0x000297e6();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd6fc;
            func_0x0002996b();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd701;
            func_0x00029d78();
            local_18 = (undefined2 *)0x22b2;
            local_1a = (undefined2 *)0xd70b;
            func_0x000299d1();
            local_18 = (undefined2 *)0x1;
            local_1a = (undefined2 *)0x22b2;
            local_1c = (uint *)0xd714;
            FUN_1def_05d1();
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd741;
            func_0x000299d1();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd74a;
            func_0x000297e6();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd74f;
            func_0x00029d78();
            local_18 = (undefined2 *)0x22b2;
            local_1a = (undefined2 *)0xd759;
            func_0x000299d1();
            local_18 = (undefined2 *)0x1;
            local_1a = (undefined2 *)0x22b2;
            local_1c = (uint *)0xd762;
            func_0x0001e558();
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
            local_302 = local_20;
            local_300 = local_1e;
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd7b0;
            func_0x000299d1();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd7b8;
            func_0x000297e6();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd7bd;
            func_0x00029d78();
            local_18 = (undefined2 *)0x22b2;
            local_1a = (undefined2 *)0xd7c7;
            func_0x000299d1();
            local_18 = (undefined2 *)0x1;
            local_1a = (undefined2 *)0x22b2;
            local_1c = (uint *)0xd7d0;
            FUN_1def_05d1();
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd802;
            func_0x000299d1();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd80b;
            func_0x000297e6();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xd810;
            func_0x00029d78();
            local_18 = (undefined2 *)0x22b2;
            local_1a = (undefined2 *)0xd81a;
            func_0x000299d1();
            local_18 = (undefined2 *)0x1;
            local_1a = (undefined2 *)0x22b2;
            local_1c = (uint *)0xd823;
            func_0x0001e558();
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
          }
          else {
            local_2c2 = 0;
            local_2c4 = (undefined1 **)0x0;
          }
          cVar8 = FUN_12c1_009c();
          if (cVar8 == '\x1b') goto LAB_3ab8_2cc7;
          puStack_c = (undefined2 *)0x11f2;
          local_e = (uint *)0xd85a;
          FUN_1000_0599();
          puStack_c = (undefined2 *)0x7745;
          local_e = (uint *)0xdef;
          local_10 = (undefined1 *)0xd86b;
          func_0x00012276();
          puStack_c = &local_3c;
          local_e = local_1a2;
          puStack_14 = local_28e;
          local_16 = local_274;
          local_18 = &local_10e;
          local_1a = &local_ba;
          local_1c = &local_2ce;
          local_1e = (undefined2 *)0x11f2;
          local_20 = (uint *)0xd8b3;
          local_12 = local_fe;
          local_10 = local_156;
          func_0x000297e6();
          local_1e = (undefined2 *)0x22b2;
          local_20 = (uint *)0xd8b8;
          func_0x00029d78();
          local_26 = (undefined2 *)0x22b2;
          local_28 = (uint *)0xd8c2;
          func_0x000299d1();
          local_26 = (undefined2 *)0x22b2;
          local_28 = (uint *)0xd8ca;
          func_0x000297e6();
          local_26 = (undefined2 *)0x22b2;
          local_28 = (uint *)0xd8cf;
          func_0x00029d78();
          local_2e = (undefined2 *)0x22b2;
          func_0x000299d1();
          local_2e = local_286;
          local_32 = (undefined2 *)0xd8e1;
          local_2ca = FUN_3ab8_14ad();
          puStack_c = &local_3c;
          local_e = local_1a2;
          puStack_14 = local_28e;
          local_16 = local_274;
          local_18 = (undefined2 *)local_15e;
          local_1a = local_106;
          local_1c = (uint *)&local_2d0;
          local_1e = (undefined2 *)0x22b2;
          local_20 = (uint *)0xd91d;
          local_12 = local_fe;
          local_10 = local_156;
          func_0x000297e6();
          local_1e = (undefined2 *)0x22b2;
          local_20 = (uint *)0xd922;
          func_0x00029d78();
          local_26 = (undefined2 *)0x22b2;
          local_28 = (uint *)0xd92c;
          func_0x000299d1();
          local_26 = (undefined2 *)0x22b2;
          local_28 = (uint *)0xd934;
          func_0x000297e6();
          local_26 = (undefined2 *)0x22b2;
          local_28 = (uint *)0xd939;
          func_0x00029d78();
          local_2e = (undefined2 *)0x22b2;
          func_0x000299d1();
          local_2e = local_286;
          in_stack_0000ffd0 = (uint *)0x22b2;
          local_32 = (undefined2 *)0xd94b;
          local_2cc = FUN_3ab8_14ad();
          func_0x000297e6();
          func_0x00029c2c();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029c2c();
          func_0x00029983();
          if (((*(char *)0x11d6 != '\0') || (local_42 != 0)) && (((uint)puStack_14 & 0x4000) != 0))
          {
            local_236 = *(undefined2 *)0xa9f0;
            local_234 = *(undefined2 *)0xa9f2;
            local_224 = local_236;
            local_222 = local_234;
          }
          local_294 = 0;
          puStack_c = local_198;
          local_e = local_19a;
          local_10 = local_248;
          local_12 = local_24a;
          puStack_14 = (undefined1 *)0x22b2;
          local_16 = (undefined1 *)0xd9d9;
          func_0x000297e6();
          puStack_14 = (undefined1 *)0x22b2;
          local_16 = (undefined1 *)0xd9de;
          func_0x00029d78();
          local_1c = (uint *)0x22b2;
          local_1e = (undefined2 *)0xd9e8;
          func_0x000299d1();
          local_1c = (uint *)0x22b2;
          local_1e = (undefined2 *)0xd9f1;
          func_0x000297e6();
          local_1c = (uint *)0x22b2;
          local_1e = (undefined2 *)0xd9f6;
          func_0x00029d78();
          local_24 = (uint *)0x22b2;
          local_26 = (undefined2 *)0xda00;
          func_0x000299d1();
          local_24 = (uint *)0x22b2;
          local_26 = (undefined2 *)0xda09;
          func_0x000297e6();
          local_24 = (uint *)0x22b2;
          local_26 = (undefined2 *)0xda0e;
          func_0x00029d78();
          local_2c = 0x22b2;
          local_2e = (undefined2 *)0xda18;
          func_0x000299d1();
          local_2c = 0x22b2;
          local_2e = (undefined2 *)0xda21;
          func_0x000297e6();
          local_2c = 0x22b2;
          local_2e = (undefined2 *)0xda26;
          func_0x00029d78();
          local_34 = (uint *)0x22b2;
          uStack_36 = 0xda30;
          func_0x000299d1();
          local_34 = (uint *)0x22b2;
          uStack_36 = 0xda39;
          func_0x000297e6();
          local_34 = (uint *)0x22b2;
          uStack_36 = 0xda3e;
          func_0x00029d78();
          local_3c = 0x22b2;
          uStack_3e = 0xda48;
          func_0x000299d1();
          local_3c = 0x22b2;
          uStack_3e = 0xda51;
          func_0x000297e6();
          local_3c = 0x22b2;
          uStack_3e = 0xda56;
          func_0x00029d78();
          uStack_44 = 0x22b2;
          local_46 = 0xda60;
          func_0x000299d1();
          uStack_44 = 0x22b2;
          local_46 = 0xda69;
          func_0x000297e6();
          uStack_44 = 0x22b2;
          local_46 = 0xda6e;
          func_0x00029d78();
          local_4c._0_2_ = 0x22b2;
          local_4e = (undefined2 *)0xda78;
          func_0x000299d1();
          local_4c._0_2_ = 0x22b2;
          local_4e = (undefined2 *)0xda81;
          func_0x000297e6();
          local_4c._0_2_ = 0x22b2;
          local_4e = (undefined2 *)0xda86;
          func_0x00029d78();
          local_54 = (uint *)0x22b2;
          puVar23 = (undefined2 *)0x22b2;
          local_56 = 0xda90;
          func_0x000299d1();
          puVar24 = auStack_68;
          ppuVar18 = &local_28;
          for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
            puVar30 = puVar24;
            puVar24 = puVar24 + 1;
            ppuVar3 = ppuVar18;
            ppuVar18 = ppuVar18 + 1;
            *puVar30 = *ppuVar3;
          }
          in_stack_0000ff96 = &local_12;
          iStack_6c = local_2c2;
          ppuStack_6e = local_2c4;
          iStack_70 = -0x40b8;
          ppuStack_72 = (undefined1 **)0x22b2;
          iStack_74 = -0x254d;
          local_7c = FUN_3ab8_0e2e();
          local_7a = local_7c >> 0xf;
          if (local_7a < 0) goto LAB_3ab8_2f41;
          if (((local_2ce == 0) && (local_2d0 == 0)) && (bVar27)) {
            local_2ce = 2;
            local_2d0 = 2;
            func_0x000297e6();
            func_0x000299d1();
            func_0x000297e6();
            func_0x000299d1();
            local_2ca = *(int *)0x150 + 1;
            local_2cc = *(int *)0x150 + 2;
            puStack_c = (undefined2 *)0xdb80;
            uVar31 = func_0x00000398();
            pbVar1 = (byte *)((int)uVar31 + 0x16);
            *pbVar1 = *pbVar1 & 0xfe;
            puStack_c = (undefined2 *)0xdb93;
            puVar30 = (undefined2 *)func_0x00000398();
            puStack_c = (undefined2 *)0x0;
            local_e = (uint *)0xdba9;
            puVar32 = (undefined2 *)func_0x0000013f();
            uVar11 = ((undefined2 *)puVar32)[1];
            *puVar30 = *puVar32;
            ((undefined2 *)puVar30)[1] = uVar11;
            puStack_c = (undefined2 *)0xdbca;
            uVar31 = func_0x00000398();
            uVar14 = (undefined2)((ulong)uVar31 >> 0x10);
            puStack_c = (undefined2 *)0x0;
            local_e = (uint *)0xdbe0;
            uVar33 = func_0x0000013f();
            uVar15 = (undefined2)((ulong)uVar33 >> 0x10);
            uVar11 = *(undefined2 *)((int)uVar33 + 6);
            *(undefined2 *)((int)uVar31 + 4) = *(undefined2 *)((int)uVar33 + 4);
            *(undefined2 *)((int)uVar31 + 6) = uVar11;
            puStack_c = (undefined2 *)0xdc03;
            uVar31 = func_0x00000398();
            pbVar1 = (byte *)((int)uVar31 + 0x16);
            *pbVar1 = *pbVar1 & 0xfe;
            puStack_c = (undefined2 *)0xdc16;
            puVar30 = (undefined2 *)func_0x00000398();
            puStack_c = (undefined2 *)0x0;
            local_e = (uint *)0xdc2c;
            uVar31 = func_0x0000013f();
            uVar14 = (undefined2)((ulong)uVar31 >> 0x10);
            uVar11 = *(undefined2 *)((int)uVar31 + 10);
            *puVar30 = *(undefined2 *)((int)uVar31 + 8);
            ((undefined2 *)puVar30)[1] = uVar11;
            puStack_c = (undefined2 *)0xdc4e;
            uVar31 = func_0x00000398();
            uVar14 = (undefined2)((ulong)uVar31 >> 0x10);
            puStack_c = (undefined2 *)0x0;
            puVar23 = (undefined2 *)0x0;
            local_e = (uint *)0xdc64;
            uVar33 = func_0x0000013f();
            uVar15 = (undefined2)((ulong)uVar33 >> 0x10);
            uVar11 = *(undefined2 *)((int)uVar33 + 0xe);
            *(undefined2 *)((int)uVar31 + 4) = *(undefined2 *)((int)uVar33 + 0xc);
            *(undefined2 *)((int)uVar31 + 6) = uVar11;
          }
          if ((1 < (int)local_2ce) && (1 < local_2d0)) {
            func_0x000297e6();
            func_0x00029c2c();
            func_0x0002996b();
            func_0x00029983();
            local_294 = 0;
            puStack_c = local_198;
            local_e = local_19a;
            local_10 = local_248;
            local_12 = local_24a;
            puStack_14 = (undefined1 *)0x22b2;
            local_16 = (undefined1 *)0xdcda;
            func_0x000297e6();
            puStack_14 = (undefined1 *)0x22b2;
            local_16 = (undefined1 *)0xdcdf;
            func_0x00029d78();
            local_1c = (uint *)0x22b2;
            local_1e = (undefined2 *)0xdce9;
            func_0x000299d1();
            local_1c = (uint *)0x22b2;
            local_1e = (undefined2 *)0xdcf2;
            func_0x000297e6();
            local_1c = (uint *)0x22b2;
            local_1e = (undefined2 *)0xdcfb;
            func_0x00029c2c();
            local_1c = (uint *)0x22b2;
            local_1e = (undefined2 *)0xdd04;
            func_0x0002996b();
            local_1c = (uint *)0x22b2;
            local_1e = (undefined2 *)0xdd09;
            func_0x00029d78();
            local_24 = (uint *)0x22b2;
            local_26 = (undefined2 *)0xdd13;
            func_0x000299d1();
            local_24 = (uint *)0x22b2;
            local_26 = (undefined2 *)0xdd1c;
            func_0x000297e6();
            local_24 = (uint *)0x22b2;
            local_26 = (undefined2 *)0xdd21;
            func_0x00029d78();
            local_2c = 0x22b2;
            local_2e = (undefined2 *)0xdd2b;
            func_0x000299d1();
            local_2c = 0x22b2;
            local_2e = (undefined2 *)0xdd34;
            func_0x000297e6();
            local_2c = 0x22b2;
            local_2e = (undefined2 *)0xdd39;
            func_0x00029d78();
            local_34 = (uint *)0x22b2;
            uStack_36 = 0xdd43;
            func_0x000299d1();
            local_34 = (uint *)0x22b2;
            uStack_36 = 0xdd4c;
            func_0x000297e6();
            local_34 = (uint *)0x22b2;
            uStack_36 = 0xdd51;
            func_0x00029d78();
            local_3c = 0x22b2;
            uStack_3e = 0xdd5b;
            func_0x000299d1();
            local_3c = 0x22b2;
            uStack_3e = 0xdd64;
            func_0x000297e6();
            local_3c = 0x22b2;
            uStack_3e = 0xdd69;
            func_0x00029d78();
            uStack_44 = 0x22b2;
            local_46 = 0xdd73;
            func_0x000299d1();
            uStack_44 = 0x22b2;
            local_46 = 0xdd7c;
            func_0x000297e6();
            uStack_44 = 0x22b2;
            local_46 = 0xdd81;
            func_0x00029d78();
            local_4c._0_2_ = 0x22b2;
            local_4e = (undefined2 *)0xdd8b;
            func_0x000299d1();
            local_4c._0_2_ = 0x22b2;
            local_4e = (undefined2 *)0xdd94;
            func_0x000297e6();
            local_4c._0_2_ = 0x22b2;
            local_4e = (undefined2 *)0xdd99;
            func_0x00029d78();
            local_54 = (uint *)0x22b2;
            puVar23 = (undefined2 *)0x22b2;
            local_56 = 0xdda3;
            func_0x000299d1();
            puVar24 = auStack_68;
            ppuVar18 = &local_28;
            for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
              puVar30 = puVar24;
              puVar24 = puVar24 + 1;
              ppuVar3 = ppuVar18;
              ppuVar18 = ppuVar18 + 1;
              *puVar30 = *ppuVar3;
            }
            in_stack_0000ff96 = &local_12;
            iStack_6c = local_2c2;
            ppuStack_6e = local_2c4;
            iStack_70 = -0x40b8;
            ppuStack_72 = (undefined1 **)0x22b2;
            iStack_74 = -0x223a;
            local_7c = FUN_3ab8_0e2e();
            local_7a = local_7c >> 0xf;
            if (local_7a < 0) goto LAB_3ab8_2f41;
          }
          if (1 < (int)local_2ce) {
            puVar23 = (undefined2 *)0x0;
            puStack_c = (undefined2 *)0xdde7;
            puVar30 = (undefined2 *)func_0x00000398();
            puVar17 = (undefined2 *)puVar30;
            puVar24 = local_126;
            for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
              puVar4 = puVar24;
              puVar24 = puVar24 + 1;
              puVar32 = puVar17;
              puVar17 = puVar17 + 1;
              *puVar4 = *puVar32;
            }
            if ((local_110 & 1) == 0) {
              puStack_c = (undefined2 *)0xde0c;
              uVar31 = func_0x00000398();
              pbVar1 = (byte *)((int)uVar31 + 0x16);
              *pbVar1 = *pbVar1 | 1;
              local_24 = (uint *)local_122;
              local_22 = local_120;
              func_0x000297e6();
              func_0x00029c2c();
              func_0x0002996b();
              func_0x00029983();
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029983();
              local_1c = (uint *)local_122;
              local_1a = local_120;
              func_0x000297e6();
              func_0x00029c2c();
              func_0x0002996b();
              func_0x00029983();
              local_294 = 0;
              puStack_c = local_198;
              local_e = local_19a;
              local_10 = local_248;
              local_12 = local_24a;
              puStack_14 = (undefined1 *)0x22b2;
              local_16 = (undefined1 *)0xdeba;
              func_0x000297e6();
              puStack_14 = (undefined1 *)0x22b2;
              local_16 = (undefined1 *)0xdebf;
              func_0x00029d78();
              local_1c = (uint *)0x22b2;
              local_1e = (undefined2 *)0xdec9;
              func_0x000299d1();
              local_1c = (uint *)0x22b2;
              local_1e = (undefined2 *)0xded2;
              func_0x000297e6();
              local_1c = (uint *)0x22b2;
              local_1e = (undefined2 *)0xded7;
              func_0x00029d78();
              local_24 = (uint *)0x22b2;
              local_26 = (undefined2 *)0xdee1;
              func_0x000299d1();
              local_24 = (uint *)0x22b2;
              local_26 = (undefined2 *)0xdeea;
              func_0x000297e6();
              local_24 = (uint *)0x22b2;
              local_26 = (undefined2 *)0xdeef;
              func_0x00029d78();
              local_2c = 0x22b2;
              local_2e = (undefined2 *)0xdef9;
              func_0x000299d1();
              local_2c = 0x22b2;
              local_2e = (undefined2 *)0xdf02;
              func_0x000297e6();
              local_2c = 0x22b2;
              local_2e = (undefined2 *)0xdf07;
              func_0x00029d78();
              local_34 = (uint *)0x22b2;
              uStack_36 = 0xdf11;
              func_0x000299d1();
              local_34 = (uint *)0x22b2;
              uStack_36 = 0xdf1a;
              func_0x000297e6();
              local_34 = (uint *)0x22b2;
              uStack_36 = 0xdf1f;
              func_0x00029d78();
              local_3c = 0x22b2;
              uStack_3e = 0xdf29;
              func_0x000299d1();
              local_3c = 0x22b2;
              uStack_3e = 0xdf32;
              func_0x000297e6();
              local_3c = 0x22b2;
              uStack_3e = 0xdf37;
              func_0x00029d78();
              uStack_44 = 0x22b2;
              local_46 = 0xdf41;
              func_0x000299d1();
              uStack_44 = 0x22b2;
              local_46 = 0xdf4a;
              func_0x000297e6();
              uStack_44 = 0x22b2;
              local_46 = 0xdf4f;
              func_0x00029d78();
              local_4c._0_2_ = 0x22b2;
              local_4e = (undefined2 *)0xdf59;
              func_0x000299d1();
              local_4c._0_2_ = 0x22b2;
              local_4e = (undefined2 *)0xdf62;
              func_0x000297e6();
              local_4c._0_2_ = 0x22b2;
              local_4e = (undefined2 *)0xdf67;
              func_0x00029d78();
              local_54 = (uint *)0x22b2;
              puVar23 = (undefined2 *)0x22b2;
              local_56 = 0xdf71;
              func_0x000299d1();
              puVar24 = auStack_68;
              ppuVar18 = &local_28;
              for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
                puVar30 = puVar24;
                puVar24 = puVar24 + 1;
                ppuVar3 = ppuVar18;
                ppuVar18 = ppuVar18 + 1;
                *puVar30 = *ppuVar3;
              }
              in_stack_0000ff96 = &local_12;
              iStack_6c = local_2c2;
              ppuStack_6e = local_2c4;
              iStack_70 = -0x40b8;
              ppuStack_72 = (undefined1 **)0x22b2;
              iStack_74 = -0x206c;
              local_7c = FUN_3ab8_0e2e();
              local_7a = local_7c >> 0xf;
              if (local_7a < 0) goto LAB_3ab8_2f41;
            }
          }
          in_stack_0000ff96 = &local_12;
          if (1 < local_2d0) {
            puVar23 = (undefined2 *)0x0;
            puStack_c = (undefined2 *)0xdfb5;
            puVar30 = (undefined2 *)func_0x00000398();
            puVar17 = (undefined2 *)puVar30;
            puVar24 = local_17a;
            for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
              puVar4 = puVar24;
              puVar24 = puVar24 + 1;
              puVar32 = puVar17;
              puVar17 = puVar17 + 1;
              *puVar4 = *puVar32;
            }
            if ((local_164 & 1) == 0) {
              puStack_c = (undefined2 *)0xdfda;
              uVar31 = func_0x00000398();
              pbVar1 = (byte *)((int)uVar31 + 0x16);
              *pbVar1 = *pbVar1 | 1;
              local_24 = (uint *)local_176;
              local_22 = local_174;
              func_0x000297e6();
              func_0x00029c2c();
              func_0x0002996b();
              func_0x00029983();
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029983();
              local_1c = (uint *)local_176;
              local_1a = local_174;
              func_0x000297e6();
              func_0x00029c2c();
              func_0x0002996b();
              func_0x00029983();
              local_294 = 0;
              puStack_c = local_198;
              local_e = local_19a;
              local_10 = local_248;
              local_12 = local_24a;
              puStack_14 = (undefined1 *)0x22b2;
              local_16 = (undefined1 *)0xe088;
              func_0x000297e6();
              puStack_14 = (undefined1 *)0x22b2;
              local_16 = (undefined1 *)0xe08d;
              func_0x00029d78();
              local_1c = (uint *)0x22b2;
              local_1e = (undefined2 *)0xe097;
              func_0x000299d1();
              local_1c = (uint *)0x22b2;
              local_1e = (undefined2 *)0xe0a0;
              func_0x000297e6();
              local_1c = (uint *)0x22b2;
              local_1e = (undefined2 *)0xe0a5;
              func_0x00029d78();
              local_24 = (uint *)0x22b2;
              local_26 = (undefined2 *)0xe0af;
              func_0x000299d1();
              local_24 = (uint *)0x22b2;
              local_26 = (undefined2 *)0xe0b8;
              func_0x000297e6();
              local_24 = (uint *)0x22b2;
              local_26 = (undefined2 *)0xe0bd;
              func_0x00029d78();
              local_2c = 0x22b2;
              local_2e = (undefined2 *)0xe0c7;
              func_0x000299d1();
              local_2c = 0x22b2;
              local_2e = (undefined2 *)0xe0d0;
              func_0x000297e6();
              local_2c = 0x22b2;
              local_2e = (undefined2 *)0xe0d5;
              func_0x00029d78();
              local_34 = (uint *)0x22b2;
              uStack_36 = 0xe0df;
              func_0x000299d1();
              local_34 = (uint *)0x22b2;
              uStack_36 = 0xe0e8;
              func_0x000297e6();
              local_34 = (uint *)0x22b2;
              uStack_36 = 0xe0ed;
              func_0x00029d78();
              local_3c = 0x22b2;
              uStack_3e = 0xe0f7;
              func_0x000299d1();
              local_3c = 0x22b2;
              uStack_3e = 0xe100;
              func_0x000297e6();
              local_3c = 0x22b2;
              uStack_3e = 0xe105;
              func_0x00029d78();
              uStack_44 = 0x22b2;
              local_46 = 0xe10f;
              func_0x000299d1();
              uStack_44 = 0x22b2;
              local_46 = 0xe118;
              func_0x000297e6();
              uStack_44 = 0x22b2;
              local_46 = 0xe11d;
              func_0x00029d78();
              local_4c._0_2_ = 0x22b2;
              local_4e = (undefined2 *)0xe127;
              func_0x000299d1();
              local_4c._0_2_ = 0x22b2;
              local_4e = (undefined2 *)0xe130;
              func_0x000297e6();
              local_4c._0_2_ = 0x22b2;
              local_4e = (undefined2 *)0xe135;
              func_0x00029d78();
              local_54 = (uint *)0x22b2;
              puVar23 = (undefined2 *)0x22b2;
              local_56 = 0xe13f;
              func_0x000299d1();
              puVar24 = auStack_68;
              ppuVar18 = &local_28;
              for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
                puVar30 = puVar24;
                puVar24 = puVar24 + 1;
                ppuVar3 = ppuVar18;
                ppuVar18 = ppuVar18 + 1;
                *puVar30 = *ppuVar3;
              }
              in_stack_0000ff96 = &local_12;
              iStack_6c = local_2c2;
              ppuStack_6e = local_2c4;
              iStack_70 = -0x40b8;
              ppuStack_72 = (undefined1 **)0x22b2;
              iStack_74 = -0x1e9e;
              local_7c = FUN_3ab8_0e2e();
              local_7a = local_7c >> 0xf;
              if (local_7a < 0) goto LAB_3ab8_2f41;
            }
          }
        }
LAB_3ab8_35f3:
        local_190 = local_190 + (uint)(0xfffe < local_192);
        puVar24 = puVar23;
      }
      for (local_226 = 1; (int)local_226 <= *(int *)0x150; local_226 = local_226 + 1) {
        puStack_c = (undefined2 *)0xe1f2;
        uVar31 = func_0x00000398();
        pbVar1 = (byte *)((int)uVar31 + 0x16);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      uVar9 = (int)local_12 * 3 + *(uint *)0x148;
      local_1d6 = (undefined1 *)(uVar9 + 0x14);
      local_1d4 = local_10 +
                  (uint)(0xffeb < uVar9) +
                  (uint)CARRY2((int)local_12 * 3,*(uint *)0x148) +
                  *(int *)0x14a +
                  (uint)CARRY2((int)local_12 * 2,(uint)local_12) +
                  ((int)local_10 << 1 | (uint)((int)local_12 < 0));
      local_24e = 1;
      local_24c = 0;
      local_190 = 0;
      for (local_192 = (undefined1 **)0x1;
          (local_190 <= *(int *)0x14e &&
          ((local_190 < *(int *)0x14e || (local_192 <= *(uint *)0x14c))));
          local_192 = (undefined1 **)((int)local_192 + 1)) {
        cVar8 = FUN_12c1_009c();
        if (cVar8 == '\x1b') goto LAB_3ab8_2cc7;
        puStack_c = (undefined2 *)0x11f2;
        local_e = (uint *)0xea27;
        puVar30 = (undefined2 *)func_0x00000271();
        puVar24 = (undefined2 *)puVar30;
        ppuVar18 = &local_62;
        for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
          ppuVar3 = ppuVar18;
          ppuVar18 = ppuVar18 + 1;
          puVar32 = puVar24;
          puVar24 = puVar24 + 1;
          *ppuVar3 = (uint *)*puVar32;
        }
        if (((local_47 < 0x5a) && ((undefined2 *)(local_46 & 0xff) == local_286)) && (local_48 != 9)
           ) {
          puStack_c = (undefined2 *)0x0;
          local_e = (uint *)0xe255;
          FUN_1000_0599();
          puStack_c = (undefined2 *)0x774a;
          local_e = (uint *)0xdef;
          puVar24 = (undefined2 *)0x11f2;
          local_10 = (undefined1 *)0xe266;
          func_0x00012276();
          if (local_42 != 0) {
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xe29f;
            func_0x000299d1();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xe2a7;
            func_0x000297e6();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xe2b0;
            func_0x0002996b();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xe2b5;
            func_0x00029d78();
            local_18 = (undefined2 *)0x22b2;
            local_1a = (undefined2 *)0xe2bf;
            func_0x000299d1();
            local_18 = (undefined2 *)0x1;
            local_1a = (undefined2 *)0x22b2;
            local_1c = (uint *)0xe2c8;
            FUN_1def_05d1();
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xe2fa;
            func_0x000299d1();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xe303;
            func_0x000297e6();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xe308;
            func_0x00029d78();
            local_18 = (undefined2 *)0x22b2;
            local_1a = (undefined2 *)0xe312;
            func_0x000299d1();
            local_18 = (undefined2 *)0x1;
            local_1a = (undefined2 *)0x22b2;
            local_1c = (uint *)0xe31b;
            func_0x0001e558();
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xe34e;
            func_0x000299d1();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xe357;
            func_0x000297e6();
            local_10 = (undefined1 *)0x22b2;
            local_12 = (undefined1 *)0xe35c;
            func_0x00029d78();
            local_18 = (undefined2 *)0x22b2;
            local_1a = (undefined2 *)0xe366;
            func_0x000299d1();
            local_18 = (undefined2 *)*(undefined2 *)0xa9ee;
            local_1a = (undefined2 *)*(undefined2 *)0xa9ec;
            local_1c = (uint *)*(undefined2 *)0xa9ea;
            local_1e = (undefined2 *)*(undefined2 *)0xa9e8;
            local_20 = (uint *)*(undefined2 *)0xa9ee;
            local_22 = (undefined2 *)*(uint *)0xa9ec;
            local_24 = (uint *)*(uint *)0xa9ea;
            local_26 = (undefined2 *)*(uint *)0xa9e8;
            local_28 = (uint *)0x22b2;
            uStack_2a = 0xe38b;
            FUN_1000_0718();
            puStack_c = (undefined2 *)0xdef;
            puVar24 = (undefined2 *)0x1bb4;
            local_e = (uint *)0xe3a7;
            uVar31 = func_0x00021eee();
            local_4c = uVar31;
          }
          puStack_c = &local_3c;
          local_e = local_1a2;
          local_10 = local_156;
          local_12 = local_fe;
          puStack_14 = local_28e;
          local_16 = local_274;
          local_18 = &local_10e;
          local_1a = &local_ba;
          local_1c = &local_2ce;
          local_20 = (uint *)0xe3ec;
          local_1e = puVar24;
          func_0x000297e6();
          local_26 = (undefined2 *)0x22b2;
          local_28 = (uint *)0xe3f6;
          func_0x000299d1();
          local_26 = (undefined2 *)0x22b2;
          local_28 = (uint *)0xe3fe;
          func_0x000297e6();
          local_26 = (undefined2 *)0x22b2;
          local_28 = (uint *)0xe403;
          func_0x00029d78();
          local_2e = (undefined2 *)0x22b2;
          func_0x000299d1();
          local_2e = local_286;
          in_stack_0000ffd0 = (uint *)0x22b2;
          local_32 = (undefined2 *)0xe415;
          local_2ca = FUN_3ab8_14ad();
          local_2c4 = local_2bc;
          local_2c2 = local_2ba;
          if ((local_2ba == 0 && local_2bc == (undefined1 **)0x0) &&
             (uVar28 = local_56 < 0x3e9, local_56 < 0x3ea)) {
            func_0x00029834();
            func_0x00029834();
            func_0x00029ae7();
            FUN_28b3_1181();
            if (!(bool)uVar28) {
              local_2c4 = (undefined1 **)0x1;
              local_2c2 = 0;
              local_56 = 10000;
              func_0x00029da5();
              func_0x00029d78();
              func_0x00029c2c();
              func_0x0002996b();
              func_0x00029d78();
              local_10 = (undefined1 *)0x22b2;
              local_12 = (undefined1 *)0xe4b5;
              func_0x000299d1();
              local_10 = (undefined1 *)0x22b2;
              local_12 = (undefined1 *)0xe4ba;
              func_0x0002a10c();
              func_0x00029834();
              func_0x00029c2c();
              func_0x00029bb5();
              local_10 = (undefined1 *)0x22b2;
              local_12 = (undefined1 *)0xe4df;
              func_0x000299d1();
              local_10 = (undefined1 *)0x22b2;
              local_12 = (undefined1 *)0xe4e8;
              func_0x000297e6();
              local_18 = (undefined2 *)0x22b2;
              local_1a = (undefined2 *)0xe4f2;
              func_0x000299d1();
              local_18 = (undefined2 *)0x22b2;
              local_1a = (undefined2 *)0xe4f7;
              func_0x0002a11e();
              local_10 = (undefined1 *)0x22b2;
              local_12 = (undefined1 *)0xe501;
              func_0x00029834();
              local_10 = (undefined1 *)0x22b2;
              local_12 = (undefined1 *)0xe50a;
              func_0x00029c2c();
              local_10 = (undefined1 *)0x22b2;
              local_12 = (undefined1 *)0xe512;
              func_0x000297e6();
              local_10 = (undefined1 *)0x22b2;
              local_12 = (undefined1 *)0xe517;
              func_0x00029d78();
              local_10 = (undefined1 *)0x22b2;
              local_12 = (undefined1 *)0xe51c;
              FUN_28b3_117c();
              local_18 = (undefined2 *)0x22b2;
              local_1a = (undefined2 *)0xe526;
              func_0x000299d1();
              local_18 = (undefined2 *)0x22b2;
              local_1a = (undefined2 *)0xe52e;
              func_0x000297e6();
              local_20 = (uint *)0x22b2;
              local_22 = (undefined2 *)0xe538;
              func_0x000299d1();
              local_20 = (uint *)0x22b2;
              local_22 = (undefined2 *)0xe540;
              func_0x000297e6();
              local_20 = (uint *)0x22b2;
              local_22 = (undefined2 *)0xe545;
              func_0x00029d78();
              local_28 = (uint *)0x22b2;
              uStack_2a = 0xe54f;
              func_0x000299d1();
              local_28 = (uint *)0x22b2;
              uStack_2a = 0xe554;
              FUN_1def_043a();
              uVar28 = (undefined1 *)0xffdf < &local_26;
              uVar29 = &stack0x0000 == (undefined1 *)0x6;
              local_162 = local_62;
              local_160 = local_60;
              func_0x00029834();
              func_0x00029834();
              FUN_28b3_1181();
              if ((bool)uVar28 || (bool)uVar29) {
                func_0x00029834();
                puStack_c = (undefined2 *)0xe5a6;
                func_0x00029c74();
              }
              else {
                func_0x00029834();
                puStack_c = (undefined2 *)0xe591;
                FUN_28b3_10e4();
              }
              func_0x000299d1();
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c2c();
              func_0x00029b55();
              func_0x00029983();
              local_ba = *(undefined2 *)0xa9e8;
              uStack_b8 = *(undefined2 *)0xa9ea;
              uStack_b6 = *(undefined2 *)0xa9ec;
              uStack_b4 = *(undefined2 *)0xa9ee;
            }
          }
          if ((local_2ca == 0) && (bVar27)) {
            local_2ca = 1;
            local_2ce = 2;
            local_ba = *(undefined2 *)0xa9e8;
            uStack_b8 = *(undefined2 *)0xa9ea;
            uStack_b6 = *(undefined2 *)0xa9ec;
            uStack_b4 = *(undefined2 *)0xa9ee;
            func_0x000297e6();
            func_0x00029d78();
            func_0x000299d1();
          }
          puVar24 = local_f6;
          ppuVar18 = &local_62;
          for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
            puVar30 = puVar24;
            puVar24 = puVar24 + 1;
            ppuVar3 = ppuVar18;
            ppuVar18 = ppuVar18 + 1;
            *puVar30 = *ppuVar3;
          }
          puVar24 = local_146;
          ppuVar18 = &local_62;
          for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
            puVar30 = puVar24;
            puVar24 = puVar24 + 1;
            ppuVar3 = ppuVar18;
            ppuVar18 = ppuVar18 + 1;
            *puVar30 = *ppuVar3;
          }
          func_0x000297e6();
          puStack_c = (undefined2 *)0xe64c;
          func_0x00029c2c();
          func_0x000299d1();
          func_0x000297e6();
          func_0x00029ae7();
          func_0x0002996b();
          func_0x00029d78();
          param_4 = (uint *)FUN_28b3_0f51();
          local_324 = local_4e;
          puVar6 = local_50;
          local_314 = local_52;
          puVar25 = local_54;
          local_316 = local_54;
          local_326 = local_50;
          if (2 < (int)local_2ce) {
            func_0x000297e6();
            func_0x00029c2c();
            func_0x00029bb5();
            param_3 = -0x193a;
            func_0x00029983();
            if (3 < (int)local_2ce) {
              func_0x000297e6();
              func_0x00029c2c();
              func_0x00029bb5();
              param_3 = -0x1910;
              func_0x00029983();
            }
            if (4 < (int)local_2ce) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c2c();
              param_3 = -0x18e9;
              func_0x00029983();
            }
            uVar28 = local_2ce < 6;
            uVar29 = local_2ce == 6;
            if (5 < (int)local_2ce) {
              func_0x00029834();
              func_0x00029834();
              param_3 = -0x18cb;
              FUN_28b3_1181();
              if (!(bool)uVar29) {
                func_0x000297e6();
                func_0x00029834();
                func_0x00029c44();
                func_0x00029ae7();
                func_0x0002996b();
                param_3 = -0x189b;
                FUN_28b3_1181();
                if ((bool)uVar28 || (bool)uVar29) {
                  func_0x000297e6();
                  func_0x00029b6d();
                  func_0x00029d78();
                  param_3 = -0x187d;
                  local_ea = FUN_28b3_0f51();
                }
                else {
                  local_ea = 60000;
                }
              }
            }
            uVar28 = local_2ce < 7;
            uVar29 = local_2ce == 7;
            if (6 < (int)local_2ce) {
              func_0x000297e6();
              func_0x00029834();
              func_0x00029ae7();
              func_0x0002996b();
              FUN_28b3_1181();
              if ((bool)uVar28) {
                local_2ce = 6;
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar28 || (bool)uVar29) {
                func_0x000297e6();
                func_0x00029d78();
                local_300 = (undefined2 *)FUN_28b3_0f51();
              }
              else {
                local_300 = (undefined2 *)0x4650;
              }
              local_302 = (uint *)0x0;
              func_0x00029834();
              func_0x00029834();
              param_3 = -0x17df;
              FUN_28b3_1181();
              if (!(bool)uVar28 && !(bool)uVar29) {
                ppuVar18 = &local_62;
                puVar24 = local_f6;
                for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
                  ppuVar3 = ppuVar18;
                  ppuVar18 = ppuVar18 + 1;
                  puVar30 = puVar24;
                  puVar24 = puVar24 + 1;
                  *ppuVar3 = (uint *)*puVar30;
                }
                puVar24 = local_f6;
                puVar23 = local_146;
                for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
                  puVar32 = puVar24;
                  puVar24 = puVar24 + 1;
                  puVar30 = puVar23;
                  puVar23 = puVar23 + 1;
                  *puVar32 = *puVar30;
                }
                puVar24 = local_146;
                ppuVar18 = &local_62;
                for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
                  puVar30 = puVar24;
                  puVar24 = puVar24 + 1;
                  ppuVar3 = ppuVar18;
                  ppuVar18 = ppuVar18 + 1;
                  *puVar30 = *ppuVar3;
                }
                func_0x00029834();
                func_0x00029983();
                local_ba = local_10e;
                uStack_b8 = uStack_10c;
                uStack_b6 = uStack_10a;
                uStack_b4 = uStack_108;
                func_0x000297e6();
                func_0x00029d78();
                func_0x000299d1();
                param_3 = 0;
                param_2 = -0x168;
                FUN_21f2_5978();
                uVar31 = func_0x00027932();
                uVar9 = -(int)uVar31;
                local_316 = (uint *)((int)puVar25 + uVar9);
                local_314 = (undefined2 *)
                            ((int)local_314 +
                            (uint)CARRY2((uint)puVar25,uVar9) +
                            ((0x168 - ((int)((ulong)uVar31 >> 0x10) + (int)local_300)) -
                            (uint)((int)uVar31 != 0)));
              }
            }
            uVar28 = local_2ce < 8;
            if (7 < (int)local_2ce) {
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029d78();
              param_2 = -0x1712;
              func_0x00029c2c();
              func_0x000299b9();
              func_0x00029bb5();
              func_0x0002996b();
              param_3 = -0x16f5;
              FUN_28b3_1181();
              if ((bool)uVar28) {
                local_13e = *(undefined2 *)0xa9f0;
                local_13c = *(undefined2 *)0xa9f2;
              }
            }
            local_310 = 0;
            local_312 = 0;
            if (9 < (int)local_2ce) {
              func_0x00029834();
              func_0x0002996b();
              func_0x00029d78();
              param_3 = -0x16b8;
              local_310 = FUN_28b3_0f51();
              local_312 = 0;
            }
          }
          if (((param_2 == 3) && (param_3 == 0)) &&
             (uVar28 = 0, local_2c2 != 0 || local_2c4 != (undefined1 **)0x0)) {
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029bb5();
            FUN_28b3_100d();
            param_3 = -0x1671;
            FUN_28b3_1181();
            if ((!(bool)uVar28) || (local_2ca != 0)) goto LAB_3ab8_3e18;
            param_3 = local_194;
            param_2 = local_196;
            func_0x000297e6();
            func_0x00029d78();
            puStack_c = (undefined2 *)0xe9c8;
            func_0x000299d1();
            puStack_c = (undefined2 *)0xe9d1;
            func_0x000297e6();
            puStack_c = (undefined2 *)0xe9d6;
            func_0x00029d78();
            local_12 = (undefined1 *)0x22b2;
            puStack_14 = (undefined1 *)0xe9e0;
            func_0x000299d1();
            puStack_14 = (undefined1 *)0x1;
            local_12 = (undefined1 *)0x0;
          }
          else {
LAB_3ab8_3e18:
            if (((param_2 != 3) ||
                ((param_3 != 0 || (local_2c2 != 0 || local_2c4 != (undefined1 **)0x0)))) ||
               (1 < (int)local_2ce)) {
              if ((int)local_2ce < 7) {
                if (((int)local_324 <= (int)local_314) &&
                   (((int)local_324 < (int)local_314 || (puVar6 <= local_316)))) {
                  local_324 = local_324 + 0xb4;
                }
              }
              else {
                local_326 = (uint *)((int)local_302 + (int)local_316);
                local_324 = (undefined2 *)
                            ((int)local_300 + (int)local_314 +
                            (uint)CARRY2((uint)local_302,(uint)local_316));
              }
              param_3 = 1;
              param_2 = (int)local_324 + (-(uint)(local_326 < local_316) - (int)local_314);
              iVar12 = param_2;
              uVar9 = FUN_21f2_5978();
              iVar12 = iVar12 + (uint)(0xfffe < uVar9);
              iVar16 = iVar12;
              uVar10 = FUN_21f2_5978();
              local_18 = (undefined2 *)CONCAT11(local_47,local_48);
              local_16 = (undefined1 *)CONCAT11(local_16._1_1_,(undefined1)local_46);
              local_33a = local_316;
              local_338 = local_314;
              puStack_c = local_314;
              local_e = local_316;
              ppuVar20 = &local_2e;
              ppuVar21 = &local_2e;
              ppuVar18 = &local_62;
              for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
                puVar30 = ppuVar20;
                ppuVar20 = ppuVar20 + 1;
                ppuVar3 = ppuVar18;
                ppuVar18 = ppuVar18 + 1;
                *puVar30 = *ppuVar3;
              }
              local_32 = (undefined2 *)0xebce;
              FUN_3ab8_1c79();
              if ((2 < (int)local_2ce) && ((int)local_2ce < 7)) {
                puStack_c = local_314;
                local_e = local_316;
                puVar24 = local_f6;
                for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
                  puVar32 = ppuVar21;
                  ppuVar21 = ppuVar21 + 1;
                  puVar30 = puVar24;
                  puVar24 = puVar24 + 1;
                  *puVar32 = *puVar30;
                }
                local_32 = (undefined2 *)0xec25;
                FUN_3ab8_1c79();
              }
              if (7 < (int)local_2ce) {
                puStack_c = (undefined2 *)
                            ((int)local_314 + (uint)CARRY2(local_312,(uint)local_316) + local_310);
                local_e = (uint *)(local_312 + (int)local_316);
                ppuVar20 = &local_2e;
                puVar24 = local_146;
                for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
                  puVar32 = ppuVar20;
                  ppuVar20 = ppuVar20 + 1;
                  puVar30 = puVar24;
                  puVar24 = puVar24 + 1;
                  *puVar32 = *puVar30;
                }
                local_32 = (undefined2 *)0xec5f;
                FUN_3ab8_1c79();
              }
              if ((((1 < (int)local_2ce) && ((int)local_2ce < 7)) &&
                  ((local_50 != local_54 || (local_4e != local_52)))) || (7 < (int)local_2ce)) {
                local_28 = local_322;
                local_22 = local_334;
                func_0x000297e6();
                func_0x00029c2c();
                func_0x00029983();
                func_0x000297e6();
                func_0x0002996b();
                FUN_28b3_0ee9();
                func_0x000297e6();
                func_0x0002996b();
                FUN_28b3_0ee9();
                func_0x000297e6();
                func_0x00029c2c();
                func_0x00029983();
                if (2 < (int)local_2ce) {
                  func_0x000297e6();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029983();
                }
                if (7 < (int)local_2ce) {
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029c74();
                  func_0x00029983();
                }
                local_294 = 0;
                puStack_c = local_198;
                local_e = local_19a;
                local_10 = local_248;
                local_12 = local_24a;
                puStack_14 = (undefined1 *)0x22b2;
                local_16 = (undefined1 *)0xed83;
                func_0x000297e6();
                puStack_14 = (undefined1 *)0x22b2;
                local_16 = (undefined1 *)0xed88;
                func_0x00029d78();
                local_1c = (uint *)0x22b2;
                local_1e = (undefined2 *)0xed92;
                func_0x000299d1();
                local_1c = (uint *)0x22b2;
                local_1e = (undefined2 *)0xed9b;
                func_0x000297e6();
                local_1c = (uint *)0x22b2;
                local_1e = (undefined2 *)0xeda0;
                func_0x00029d78();
                local_24 = (uint *)0x22b2;
                local_26 = (undefined2 *)0xedaa;
                func_0x000299d1();
                local_24 = (uint *)0x22b2;
                local_26 = (undefined2 *)0xedb3;
                func_0x000297e6();
                local_24 = (uint *)0x22b2;
                local_26 = (undefined2 *)0xedb8;
                func_0x00029d78();
                local_2c = 0x22b2;
                local_2e = (undefined2 *)0xedc2;
                func_0x000299d1();
                local_2c = 0x22b2;
                local_2e = (undefined2 *)0xedcb;
                func_0x000297e6();
                local_2c = 0x22b2;
                local_2e = (undefined2 *)0xedd0;
                func_0x00029d78();
                local_34 = (uint *)0x22b2;
                uStack_36 = 0xedda;
                func_0x000299d1();
                local_34 = (uint *)0x22b2;
                uStack_36 = 0xede3;
                func_0x000297e6();
                local_34 = (uint *)0x22b2;
                uStack_36 = 0xede8;
                func_0x00029d78();
                local_3c = 0x22b2;
                uStack_3e = 0xedf2;
                func_0x000299d1();
                local_3c = 0x22b2;
                uStack_3e = 0xedfb;
                func_0x000297e6();
                local_3c = 0x22b2;
                uStack_3e = 0xee00;
                func_0x00029d78();
                uStack_44 = 0x22b2;
                local_46 = 0xee0a;
                func_0x000299d1();
                uStack_44 = 0x22b2;
                local_46 = 0xee13;
                func_0x000297e6();
                uStack_44 = 0x22b2;
                local_46 = 0xee18;
                func_0x00029d78();
                local_4c._0_2_ = 0x22b2;
                local_4e = (undefined2 *)0xee22;
                func_0x000299d1();
                local_4c._0_2_ = 0x22b2;
                local_4e = (undefined2 *)0xee2b;
                func_0x000297e6();
                local_4c._0_2_ = 0x22b2;
                local_4e = (undefined2 *)0xee30;
                func_0x00029d78();
                local_54 = (uint *)0x22b2;
                local_56 = 0xee3a;
                func_0x000299d1();
                puVar24 = auStack_68;
                ppuVar18 = &local_28;
                for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
                  puVar30 = puVar24;
                  puVar24 = puVar24 + 1;
                  ppuVar3 = ppuVar18;
                  ppuVar18 = ppuVar18 + 1;
                  *puVar30 = *ppuVar3;
                }
                in_stack_0000ff96 = &local_12;
                iStack_6c = local_2c2;
                ppuStack_6e = local_2c4;
                iStack_70 = -0x40b8;
                ppuStack_72 = (undefined1 **)0x22b2;
                iStack_74 = -0x11a3;
                local_7c = FUN_3ab8_0e2e();
                local_7a = local_7c >> 0xf;
                if (local_7a < 0) goto LAB_3ab8_2f41;
              }
              if (6 < (int)local_2ce) {
                func_0x000297e6();
                func_0x00029d78();
                func_0x00029c2c();
                func_0x00029983();
                func_0x00029da5();
                func_0x00029983();
              }
              local_340 = 0;
              for (local_342 = 1;
                  (in_stack_0000ffd0 = (uint *)0x22b2, local_340 <= iVar12 &&
                  ((local_340 < iVar12 || (local_342 <= uVar9 + 1)))); local_342 = local_342 + 1) {
                bVar26 = CARRY2((uint)local_33a,uVar10);
                local_33a = (uint *)((int)local_33a + uVar10);
                local_338 = (undefined2 *)((int)local_338 + (uint)bVar26 + iVar16);
                if ((int)local_2ce < 7) {
                  local_28 = local_322;
                  local_26 = local_320;
                  local_24 = local_336;
                  local_22 = local_334;
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029c2c();
                  func_0x0002996b();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029983();
                }
                else {
                  local_28 = local_322;
                  local_26 = local_320;
                  local_24 = local_336;
                  local_22 = local_334;
                  func_0x000298b4();
                  func_0x000298b4();
                  FUN_28b3_1172();
                  func_0x00029d78();
                  func_0x000299b9();
                  FUN_28b3_0ee9();
                  func_0x00029834();
                  func_0x00029bfc();
                  func_0x00029c2c();
                  func_0x00029c74();
                  func_0x00029b6d();
                  func_0x0002996b();
                  FUN_28b3_0ee9();
                  local_224 = local_2ea;
                  local_222 = local_2e8;
                  func_0x000297e6();
                  func_0x00029983();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029d78();
                  func_0x00029c2c();
                  func_0x000297e6();
                  func_0x00029d78();
                  FUN_28b3_117c();
                  func_0x00029983();
                  func_0x00029da5();
                  FUN_28b3_100d();
                  func_0x00029d78();
                  func_0x00029c2c();
                  func_0x000297e6();
                  func_0x00029d78();
                  FUN_28b3_117c();
                  local_56 = FUN_28b3_0f51();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029d78();
                  func_0x00029c2c();
                  func_0x000297e6();
                  func_0x00029d78();
                  FUN_28b3_117c();
                  func_0x00029983();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029d78();
                  func_0x00029c2c();
                  func_0x000297e6();
                  func_0x00029d78();
                  FUN_28b3_117c();
                  func_0x00029983();
                  uVar28 = local_2ce < 8;
                  if (7 < (int)local_2ce) {
                    puVar24 = local_146;
                    ppuVar18 = &local_62;
                    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
                      puVar30 = puVar24;
                      puVar24 = puVar24 + 1;
                      ppuVar3 = ppuVar18;
                      ppuVar18 = ppuVar18 + 1;
                      *puVar30 = *ppuVar3;
                    }
                    func_0x000297e6();
                    func_0x000297e6();
                    func_0x00029d78();
                    func_0x00029c74();
                    func_0x0002996b();
                    FUN_28b3_1181();
                    if ((bool)uVar28) {
                      local_13e = *(undefined2 *)0xa9f0;
                      local_13c = *(undefined2 *)0xa9f2;
                    }
                  }
                }
                puStack_c = local_338;
                local_e = local_33a;
                ppuVar20 = &local_2e;
                ppuVar18 = &local_62;
                for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
                  puVar30 = ppuVar20;
                  ppuVar20 = ppuVar20 + 1;
                  ppuVar3 = ppuVar18;
                  ppuVar18 = ppuVar18 + 1;
                  *puVar30 = *ppuVar3;
                }
                local_32 = (undefined2 *)0xf127;
                FUN_3ab8_1c79();
                uVar28 = (undefined1 *)0xffd7 < &local_2e;
                local_20 = local_322;
                local_1e = local_320;
                local_1c = local_336;
                local_1a = local_334;
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if (((bool)uVar28) || (local_2ce == 7)) {
                  local_294 = 0;
                  puStack_c = local_198;
                  local_e = local_19a;
                  local_10 = local_248;
                  local_12 = local_24a;
                  puStack_14 = (undefined1 *)0x22b2;
                  local_16 = (undefined1 *)0xf190;
                  func_0x000297e6();
                  puStack_14 = (undefined1 *)0x22b2;
                  local_16 = (undefined1 *)0xf195;
                  func_0x00029d78();
                  local_1c = (uint *)0x22b2;
                  local_1e = (undefined2 *)0xf19f;
                  func_0x000299d1();
                  local_1c = (uint *)0x22b2;
                  local_1e = (undefined2 *)0xf1a8;
                  func_0x000297e6();
                  local_1c = (uint *)0x22b2;
                  local_1e = (undefined2 *)0xf1ad;
                  func_0x00029d78();
                  local_24 = (uint *)0x22b2;
                  local_26 = (undefined2 *)0xf1b7;
                  func_0x000299d1();
                  local_24 = (uint *)0x22b2;
                  local_26 = (undefined2 *)0xf1c0;
                  func_0x000297e6();
                  local_24 = (uint *)0x22b2;
                  local_26 = (undefined2 *)0xf1c5;
                  func_0x00029d78();
                  local_2c = 0x22b2;
                  local_2e = (undefined2 *)0xf1cf;
                  func_0x000299d1();
                  local_2c = 0x22b2;
                  local_2e = (undefined2 *)&SUB_0000_f1d8;
                  func_0x000297e6();
                  local_2c = 0x22b2;
                  local_2e = (undefined2 *)0xf1dd;
                  func_0x00029d78();
                  local_34 = (uint *)0x22b2;
                  uStack_36 = 0xf1e7;
                  func_0x000299d1();
                  local_34 = (uint *)0x22b2;
                  uStack_36 = 0xf1f0;
                  func_0x000297e6();
                  local_34 = (uint *)0x22b2;
                  uStack_36 = 0xf1f5;
                  func_0x00029d78();
                  local_3c = 0x22b2;
                  uStack_3e = 0xf1ff;
                  func_0x000299d1();
                  local_3c = 0x22b2;
                  uStack_3e = 0xf208;
                  func_0x000297e6();
                  local_3c = 0x22b2;
                  uStack_3e = 0xf20d;
                  func_0x00029d78();
                  uStack_44 = 0x22b2;
                  local_46 = 0xf217;
                  func_0x000299d1();
                  uStack_44 = 0x22b2;
                  local_46 = 0xf220;
                  func_0x000297e6();
                  uStack_44 = 0x22b2;
                  local_46 = 0xf225;
                  func_0x00029d78();
                  local_4c._0_2_ = 0x22b2;
                  local_4e = (undefined2 *)0xf22f;
                  func_0x000299d1();
                  local_4c._0_2_ = 0x22b2;
                  local_4e = (undefined2 *)0xf238;
                  func_0x000297e6();
                  local_4c._0_2_ = 0x22b2;
                  local_4e = (undefined2 *)0xf23d;
                  func_0x00029d78();
                  local_54 = (uint *)0x22b2;
                  local_56 = 0xf247;
                  func_0x000299d1();
                  puVar24 = auStack_68;
                  ppuVar18 = &local_28;
                  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
                    puVar30 = puVar24;
                    puVar24 = puVar24 + 1;
                    ppuVar3 = ppuVar18;
                    ppuVar18 = ppuVar18 + 1;
                    *puVar30 = *ppuVar3;
                  }
                  in_stack_0000ff96 = &local_12;
                  iStack_6c = local_2c2;
                  ppuStack_6e = local_2c4;
                  iStack_70 = -0x40b8;
                  ppuStack_72 = (undefined1 **)0x22b2;
                  iStack_74 = -0xd96;
                  local_7c = FUN_3ab8_0e2e();
                  local_7a = local_7c >> 0xf;
                  if (local_7a < 0) goto LAB_3ab8_2f41;
                }
                if ((1 < (int)local_2ce) && (local_2ce != 7)) {
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029c2c();
                  func_0x0002996b();
                  func_0x00029983();
                  uVar28 = local_2ce < 3;
                  if (2 < (int)local_2ce) {
                    local_28 = local_322;
                    local_26 = local_320;
                    local_24 = local_336;
                    local_22 = local_334;
                    puStack_c = local_338;
                    local_e = local_33a;
                    ppuVar20 = &local_2e;
                    ppuVar21 = &local_2e;
                    puVar24 = local_f6;
                    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
                      puVar32 = ppuVar20;
                      ppuVar20 = ppuVar20 + 1;
                      puVar30 = puVar24;
                      puVar24 = puVar24 + 1;
                      *puVar32 = *puVar30;
                    }
                    local_32 = (undefined2 *)0xf39b;
                    FUN_3ab8_1c79();
                    uVar28 = local_2ce < 8;
                    if (7 < (int)local_2ce) {
                      puStack_c = (undefined2 *)
                                  ((int)local_338 +
                                  (uint)CARRY2(local_312,(uint)local_33a) + local_310);
                      local_e = (uint *)(local_312 + (int)local_33a);
                      puVar24 = local_146;
                      for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
                        puVar32 = ppuVar21;
                        ppuVar21 = ppuVar21 + 1;
                        puVar30 = puVar24;
                        puVar24 = puVar24 + 1;
                        *puVar32 = *puVar30;
                      }
                      local_32 = (undefined2 *)0xf3d5;
                      FUN_3ab8_1c79();
                      uVar28 = (undefined1 *)0xffd7 < &local_2e;
                      func_0x000297e6();
                      func_0x00029d78();
                      func_0x00029c74();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029d78();
                      func_0x00029c74();
                      func_0x00029983();
                    }
                    local_20 = local_322;
                    local_1e = local_320;
                    local_1c = local_336;
                    local_1a = local_334;
                  }
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if ((bool)uVar28) {
                    local_294 = 0;
                    puStack_c = local_198;
                    local_e = local_19a;
                    local_10 = local_248;
                    local_12 = local_24a;
                    puStack_14 = (undefined1 *)0x22b2;
                    local_16 = (undefined1 *)0xf477;
                    func_0x000297e6();
                    puStack_14 = (undefined1 *)0x22b2;
                    local_16 = (undefined1 *)0xf47c;
                    func_0x00029d78();
                    local_1c = (uint *)0x22b2;
                    local_1e = (undefined2 *)0xf486;
                    func_0x000299d1();
                    local_1c = (uint *)0x22b2;
                    local_1e = (undefined2 *)0xf48f;
                    func_0x000297e6();
                    local_1c = (uint *)0x22b2;
                    local_1e = (undefined2 *)0xf494;
                    func_0x00029d78();
                    local_24 = (uint *)0x22b2;
                    local_26 = (undefined2 *)0xf49e;
                    func_0x000299d1();
                    local_24 = (uint *)0x22b2;
                    local_26 = (undefined2 *)0xf4a7;
                    func_0x000297e6();
                    local_24 = (uint *)0x22b2;
                    local_26 = (undefined2 *)0xf4ac;
                    func_0x00029d78();
                    local_2c = 0x22b2;
                    local_2e = (undefined2 *)0xf4b6;
                    func_0x000299d1();
                    local_2c = 0x22b2;
                    local_2e = (undefined2 *)0xf4bf;
                    func_0x000297e6();
                    local_2c = 0x22b2;
                    local_2e = (undefined2 *)0xf4c4;
                    func_0x00029d78();
                    local_34 = (uint *)0x22b2;
                    uStack_36 = 0xf4ce;
                    func_0x000299d1();
                    local_34 = (uint *)0x22b2;
                    uStack_36 = 0xf4d7;
                    func_0x000297e6();
                    local_34 = (uint *)0x22b2;
                    uStack_36 = 0xf4dc;
                    func_0x00029d78();
                    local_3c = 0x22b2;
                    uStack_3e = 0xf4e6;
                    func_0x000299d1();
                    local_3c = 0x22b2;
                    uStack_3e = 0xf4ef;
                    func_0x000297e6();
                    local_3c = 0x22b2;
                    uStack_3e = 0xf4f4;
                    func_0x00029d78();
                    uStack_44 = 0x22b2;
                    local_46 = 0xf4fe;
                    func_0x000299d1();
                    uStack_44 = 0x22b2;
                    local_46 = 0xf507;
                    func_0x000297e6();
                    uStack_44 = 0x22b2;
                    local_46 = 0xf50c;
                    func_0x00029d78();
                    local_4c._0_2_ = 0x22b2;
                    local_4e = (undefined2 *)0xf516;
                    func_0x000299d1();
                    local_4c._0_2_ = 0x22b2;
                    local_4e = (undefined2 *)0xf51f;
                    func_0x000297e6();
                    local_4c._0_2_ = 0x22b2;
                    local_4e = (undefined2 *)0xf524;
                    func_0x00029d78();
                    local_54 = (uint *)0x22b2;
                    local_56 = 0xf52e;
                    func_0x000299d1();
                    puVar24 = auStack_68;
                    ppuVar18 = &local_28;
                    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
                      puVar30 = puVar24;
                      puVar24 = puVar24 + 1;
                      ppuVar3 = ppuVar18;
                      ppuVar18 = ppuVar18 + 1;
                      *puVar30 = *ppuVar3;
                    }
                    in_stack_0000ff96 = &local_12;
                    iStack_6c = local_2c2;
                    ppuStack_6e = local_2c4;
                    iStack_70 = -0x40b8;
                    ppuStack_72 = (undefined1 **)0x22b2;
                    iStack_74 = -0xaaf;
                    local_7c = FUN_3ab8_0e2e();
                    local_7a = local_7c >> 0xf;
                    if (local_7a < 0) goto LAB_3ab8_2f41;
                  }
                  func_0x000297e6();
                  func_0x0002996b();
                  FUN_28b3_0ee9();
                  func_0x000297e6();
                  func_0x00029c2c();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x0002996b();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029c2c();
                  func_0x00029983();
                  if (2 < (int)local_2ce) {
                    local_20 = local_322;
                    local_1e = local_320;
                    local_1c = local_336;
                    local_1a = local_334;
                  }
                  if (7 < (int)local_2ce) {
                    func_0x000297e6();
                    func_0x0002996b();
                    func_0x00029d78();
                    func_0x00029c74();
                    func_0x00029983();
                  }
                  local_294 = 0;
                  puStack_c = local_198;
                  local_e = local_19a;
                  local_10 = local_248;
                  local_12 = local_24a;
                  puStack_14 = (undefined1 *)0x22b2;
                  local_16 = (undefined1 *)0xf654;
                  func_0x000297e6();
                  puStack_14 = (undefined1 *)0x22b2;
                  local_16 = (undefined1 *)0xf659;
                  func_0x00029d78();
                  local_1c = (uint *)0x22b2;
                  local_1e = (undefined2 *)0xf663;
                  func_0x000299d1();
                  local_1c = (uint *)0x22b2;
                  local_1e = (undefined2 *)0xf66c;
                  func_0x000297e6();
                  local_1c = (uint *)0x22b2;
                  local_1e = (undefined2 *)0xf671;
                  func_0x00029d78();
                  local_24 = (uint *)0x22b2;
                  local_26 = (undefined2 *)0xf67b;
                  func_0x000299d1();
                  local_24 = (uint *)0x22b2;
                  local_26 = (undefined2 *)0xf684;
                  func_0x000297e6();
                  local_24 = (uint *)0x22b2;
                  local_26 = (undefined2 *)0xf689;
                  func_0x00029d78();
                  local_2c = 0x22b2;
                  local_2e = (undefined2 *)0xf693;
                  func_0x000299d1();
                  local_2c = 0x22b2;
                  local_2e = (undefined2 *)0xf69c;
                  func_0x000297e6();
                  local_2c = 0x22b2;
                  local_2e = (undefined2 *)0xf6a1;
                  func_0x00029d78();
                  local_34 = (uint *)0x22b2;
                  uStack_36 = 0xf6ab;
                  func_0x000299d1();
                  local_34 = (uint *)0x22b2;
                  uStack_36 = 0xf6b4;
                  func_0x000297e6();
                  local_34 = (uint *)0x22b2;
                  uStack_36 = 0xf6b9;
                  func_0x00029d78();
                  local_3c = 0x22b2;
                  uStack_3e = 0xf6c3;
                  func_0x000299d1();
                  local_3c = 0x22b2;
                  uStack_3e = 0xf6cc;
                  func_0x000297e6();
                  local_3c = 0x22b2;
                  uStack_3e = 0xf6d1;
                  func_0x00029d78();
                  uStack_44 = 0x22b2;
                  local_46 = 0xf6db;
                  func_0x000299d1();
                  uStack_44 = 0x22b2;
                  local_46 = 0xf6e4;
                  func_0x000297e6();
                  uStack_44 = 0x22b2;
                  local_46 = 0xf6e9;
                  func_0x00029d78();
                  local_4c._0_2_ = 0x22b2;
                  local_4e = (undefined2 *)0xf6f3;
                  func_0x000299d1();
                  local_4c._0_2_ = 0x22b2;
                  local_4e = (undefined2 *)0xf6fc;
                  func_0x000297e6();
                  local_4c._0_2_ = 0x22b2;
                  local_4e = (undefined2 *)0xf701;
                  func_0x00029d78();
                  local_54 = (uint *)0x22b2;
                  local_56 = 0xf70b;
                  func_0x000299d1();
                  puVar24 = auStack_68;
                  ppuVar18 = &local_28;
                  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
                    puVar30 = puVar24;
                    puVar24 = puVar24 + 1;
                    ppuVar3 = ppuVar18;
                    ppuVar18 = ppuVar18 + 1;
                    *puVar30 = *ppuVar3;
                  }
                  in_stack_0000ff96 = &local_12;
                  iStack_6c = local_2c2;
                  ppuStack_6e = local_2c4;
                  iStack_70 = -0x40b8;
                  ppuStack_72 = (undefined1 **)0x22b2;
                  iStack_74 = -0x8d2;
                  local_7c = FUN_3ab8_0e2e();
                  local_7a = local_7c >> 0xf;
                  if (local_7a < 0) goto LAB_3ab8_2f41;
                }
                local_340 = local_340 + (uint)(0xfffe < local_342);
              }
              goto LAB_3ab8_3e68;
            }
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            param_3 = 0x22b2;
            param_2 = -0x1566;
            func_0x00029c74();
            func_0x000299d1();
            func_0x000297e6();
            func_0x00029d78();
            puStack_c = (undefined2 *)0xeabc;
            func_0x000299d1();
            puStack_c = (undefined2 *)0xeac5;
            func_0x000297e6();
            puStack_c = (undefined2 *)0xeaca;
            func_0x00029d78();
            local_12 = (undefined1 *)0x22b2;
            puStack_14 = (undefined1 *)0xead4;
            func_0x000299d1();
            puStack_14 = (undefined1 *)0x0;
            local_12 = (undefined1 *)0x0;
          }
          param_4 = &local_be;
          local_12 = (undefined1 *)0x0;
          local_16 = local_1d4;
          local_18 = (undefined2 *)local_1d6;
          puVar24 = &uStack_38;
          ppuVar18 = &local_62;
          for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
            puVar30 = puVar24;
            puVar24 = puVar24 + 1;
            ppuVar3 = ppuVar18;
            ppuVar18 = ppuVar18 + 1;
            *puVar30 = *ppuVar3;
          }
          local_3c = 0xeaf3;
          local_b2 = FUN_3ab8_198b();
          local_b0 = local_b2 >> 0xf;
          if (local_b0 < 0) goto LAB_3ab8_2f41;
        }
LAB_3ab8_3e68:
        local_190 = local_190 + (uint)(0xfffe < local_192);
      }
    }
  }
LAB_3ab8_2f4d:
  puStack_c = (undefined2 *)0xdad6;
  func_0x000257c0();
  if (local_18c == 0 && local_18e == 0) {
    *param_7 = local_be;
    param_7[1] = local_bc;
    *param_8 = local_12;
    param_8[1] = local_10;
    if (local_10 + CARRY2(local_be,(uint)local_12) + local_bc == (undefined1 *)0x0 &&
        local_12 + local_be == (undefined1 *)0x0) {
      uVar11 = 0;
    }
    else {
      uStack_3e = 0;
      uStack_40 = 0;
      iStack_232 = *(int *)0xaa4c;
      ppuStack_230 = (undefined1 **)*(int *)0xaa4e;
      iStack_27c = *(int *)0xaa70;
      ppuStack_27a = (undefined1 **)*(int *)0xaa72;
      iStack_292 = *(int *)0xaa74;
      ppuStack_290 = (undefined1 **)*(int *)0xaa76;
      uVar11 = *(undefined2 *)0xa9f2;
      *param_6 = *(undefined2 *)0xa9f0;
      param_6[1] = uVar11;
      local_190 = 0;
      iStack_21c = iStack_232;
      ppuStack_21a = ppuStack_230;
      for (local_192 = (undefined1 **)0x1;
          (local_190 <= (int)local_10 && ((local_190 < (int)local_10 || (local_192 <= local_12))));
          local_192 = (undefined1 **)((int)local_192 + 1)) {
        uStack_86 = (int)local_192 * 3 + *(uint *)0x148;
        uStack_84 = (local_190 << 1 | (uint)((int)local_192 < 0)) + local_190 +
                    (uint)CARRY2((int)local_192 * 2,(uint)local_192) + *(int *)0x14a +
                    (uint)CARRY2((int)local_192 * 3,*(uint *)0x148);
        uVar28 = CARRY2(uStack_84,(uint)(0xfffe < uStack_86));
        puStack_c = (undefined2 *)0x22b2;
        local_e = (uint *)0xf8cc;
        puVar30 = (undefined2 *)func_0x0000013f();
        puVar23 = (undefined2 *)puVar30;
        puVar24 = local_264;
        for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
          puVar4 = puVar24;
          puVar24 = puVar24 + 1;
          puVar32 = puVar23;
          puVar23 = puVar23 + 1;
          *puVar4 = *puVar32;
        }
        func_0x00029834();
        func_0x000297e6();
        func_0x00029d78();
        FUN_28b3_1181();
        if ((bool)uVar28) {
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1181();
          if (!(bool)uVar28) goto LAB_3ab8_4d9e;
        }
        else {
LAB_3ab8_4d9e:
          bVar27 = 0xfffe < uStack_40;
          uStack_40 = uStack_40 + 1;
          uVar28 = CARRY2(uStack_3e,(uint)bVar27);
          uStack_3e = uStack_3e + bVar27;
          uVar29 = uStack_3e == 0;
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar28) {
            *param_6 = local_260;
            param_6[1] = uStack_25e;
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar28) {
            *param_6 = local_258;
            param_6[1] = uStack_256;
          }
          puStack_c = (undefined2 *)0x22b2;
          local_e = (uint *)0xf983;
          piVar34 = (int *)func_0x0000013f();
          piVar19 = (int *)piVar34;
          piVar22 = &iStack_78;
          for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
            piVar5 = piVar22;
            piVar22 = piVar22 + 1;
            piVar2 = piVar19;
            piVar19 = piVar19 + 1;
            *piVar5 = *piVar2;
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar28) {
            iStack_21c = iStack_78;
            ppuStack_21a = ppuStack_76;
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar28 && !(bool)uVar29) {
            iStack_27c = iStack_78;
            ppuStack_27a = ppuStack_76;
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar28) {
            iStack_21c = iStack_70;
            ppuStack_21a = ppuStack_6e;
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar28 && !(bool)uVar29) {
            iStack_27c = iStack_70;
            ppuStack_27a = ppuStack_6e;
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar28) {
            iStack_232 = iStack_74;
            ppuStack_230 = ppuStack_72;
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar28 && !(bool)uVar29) {
            iStack_292 = iStack_74;
            ppuStack_290 = ppuStack_72;
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar28) {
            iStack_232 = iStack_6c;
            ppuStack_230 = in_stack_0000ff96;
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar28 && !(bool)uVar29) {
            iStack_292 = iStack_6c;
            ppuStack_290 = in_stack_0000ff96;
          }
        }
        local_190 = local_190 + (uint)((undefined1 *)0xfffe < local_192);
      }
      uVar9 = *(uint *)0xaa7a;
      *param_4 = *(uint *)0xaa78;
      param_4[1] = uVar9;
      uVar11 = *(undefined2 *)0xaa7e;
      *param_5 = *(undefined2 *)0xaa7c;
      param_5[1] = uVar11;
      if (uStack_3e != 0 || uStack_40 != 0) {
        func_0x000297e6();
        func_0x00029bb5();
        func_0x00029b6d();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029bb5();
        func_0x00029b6d();
        func_0x00029983();
      }
      uVar11 = 1;
    }
  }
  else {
    puStack_c = (undefined2 *)0xdaec;
    func_0x0001470b();
    puStack_c = (undefined2 *)0x11f2;
    local_e = (uint *)0xdafa;
    func_0x0000c35c();
    *(undefined2 *)0xc22 = 1;
    puStack_c = (undefined2 *)0x885;
    local_e = (uint *)0xdb0f;
    FUN_1000_0599();
    puStack_c = (undefined2 *)0xdb1a;
    func_0x00012276();
LAB_3ab8_2cc7:
    uVar11 = 0xffff;
  }
  return uVar11;
LAB_3ab8_2f41:
  local_18e = 1;
  local_18c = 0;
  goto LAB_3ab8_2f4d;
}



/* 3ab8:4c91  FUN_3ab8_4c91  812 bytes, 1 callers */

undefined2 FUN_3ab8_4c91(void)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  int in_AX;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  int in_DX;
  uint uVar9;
  int unaff_BP;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte in_CF;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined2 *puVar14;
  
  uVar6 = 0x3ab8;
  if (in_DX + *(int *)(unaff_BP + -0xe) + (uint)in_CF == 0 && in_AX == 0) {
    uVar6 = 0;
  }
  else {
    *(undefined2 *)(unaff_BP + -0x3c) = 0;
    *(undefined2 *)(unaff_BP + -0x3e) = 0;
    uVar2 = *(undefined2 *)0xaa4c;
    uVar5 = *(undefined2 *)0xaa4e;
    *(undefined2 *)(unaff_BP + -0x21a) = uVar2;
    *(undefined2 *)(unaff_BP + -0x218) = uVar5;
    *(undefined2 *)(unaff_BP + -0x230) = uVar2;
    *(undefined2 *)(unaff_BP + -0x22e) = uVar5;
    uVar2 = *(undefined2 *)0xaa72;
    *(undefined2 *)(unaff_BP + -0x27a) = *(undefined2 *)0xaa70;
    *(undefined2 *)(unaff_BP + -0x278) = uVar2;
    uVar2 = *(undefined2 *)0xaa76;
    *(undefined2 *)(unaff_BP + -0x290) = *(undefined2 *)0xaa74;
    *(undefined2 *)(unaff_BP + -0x28e) = uVar2;
    uVar2 = *(undefined2 *)0xa9f2;
    puVar11 = (undefined2 *)*(undefined2 *)(unaff_BP + 0xe);
    *puVar11 = *(undefined2 *)0xa9f0;
    puVar11[1] = uVar2;
    *(undefined2 *)(unaff_BP + -400) = 1;
    *(undefined2 *)(unaff_BP + -0x18e) = 0;
    while( true ) {
      if ((*(int *)(unaff_BP + -0xe) < *(int *)(unaff_BP + -0x18e)) ||
         ((*(int *)(unaff_BP + -0xe) <= *(int *)(unaff_BP + -0x18e) &&
          (*(uint *)(unaff_BP + -0x10) < *(uint *)(unaff_BP + -400))))) break;
      uVar9 = *(uint *)(unaff_BP + -400);
      uVar7 = uVar9 * 3 + *(uint *)0x148;
      uVar9 = (*(int *)(unaff_BP + -0x18e) << 1 | (uint)((int)uVar9 < 0)) +
              *(int *)(unaff_BP + -0x18e) + (uint)CARRY2(uVar9 * 2,uVar9) + *(int *)0x14a +
              (uint)CARRY2(uVar9 * 3,*(uint *)0x148);
      *(uint *)(unaff_BP + -0x84) = uVar7;
      *(uint *)(unaff_BP + -0x82) = uVar9;
      uVar12 = CARRY2(uVar9,(uint)(0xfffe < uVar7));
      puVar14 = (undefined2 *)func_0x0000013f(uVar6,uVar7 + 1,uVar9 + (0xfffe < uVar7));
      puVar10 = (undefined2 *)puVar14;
      puVar11 = (undefined2 *)(unaff_BP + -0x262);
      for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar4 = puVar11;
        puVar11 = puVar11 + 1;
        puVar3 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar4 = *puVar3;
      }
      func_0x00029834(0);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar12) {
        func_0x00029834(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar12) goto LAB_3ab8_4d9e;
      }
      else {
LAB_3ab8_4d9e:
        puVar1 = (uint *)(unaff_BP + -0x3e);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 + 1;
        puVar1 = (uint *)(unaff_BP + -0x3c);
        uVar12 = CARRY2(*puVar1,(uint)(0xfffe < uVar9));
        *puVar1 = *puVar1 + (uint)(0xfffe < uVar9);
        uVar13 = *puVar1 == 0;
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar12) {
          uVar6 = *(undefined2 *)(unaff_BP + -0x25c);
          puVar11 = (undefined2 *)*(undefined2 *)(unaff_BP + 0xe);
          *puVar11 = *(undefined2 *)(unaff_BP + -0x25e);
          puVar11[1] = uVar6;
        }
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar12) {
          uVar6 = *(undefined2 *)(unaff_BP + -0x254);
          puVar11 = (undefined2 *)*(undefined2 *)(unaff_BP + 0xe);
          *puVar11 = *(undefined2 *)(unaff_BP + -0x256);
          puVar11[1] = uVar6;
        }
        puVar14 = (undefined2 *)
                  func_0x0000013f(0x22b2,*(undefined2 *)(unaff_BP + -0x84),
                                  *(undefined2 *)(unaff_BP + -0x82));
        puVar10 = (undefined2 *)puVar14;
        puVar11 = (undefined2 *)(unaff_BP + -0x76);
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar4 = puVar11;
          puVar11 = puVar11 + 1;
          puVar3 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar4 = *puVar3;
        }
        func_0x000297e6(0);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar12) {
          uVar6 = *(undefined2 *)(unaff_BP + -0x74);
          *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)(unaff_BP + -0x76);
          *(undefined2 *)(unaff_BP + -0x218) = uVar6;
        }
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar12 && !(bool)uVar13) {
          uVar6 = *(undefined2 *)(unaff_BP + -0x74);
          *(undefined2 *)(unaff_BP + -0x27a) = *(undefined2 *)(unaff_BP + -0x76);
          *(undefined2 *)(unaff_BP + -0x278) = uVar6;
        }
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar12) {
          uVar6 = *(undefined2 *)(unaff_BP + -0x6c);
          *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)(unaff_BP + -0x6e);
          *(undefined2 *)(unaff_BP + -0x218) = uVar6;
        }
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar12 && !(bool)uVar13) {
          uVar6 = *(undefined2 *)(unaff_BP + -0x6c);
          *(undefined2 *)(unaff_BP + -0x27a) = *(undefined2 *)(unaff_BP + -0x6e);
          *(undefined2 *)(unaff_BP + -0x278) = uVar6;
        }
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar12) {
          uVar6 = *(undefined2 *)(unaff_BP + -0x70);
          *(undefined2 *)(unaff_BP + -0x230) = *(undefined2 *)(unaff_BP + -0x72);
          *(undefined2 *)(unaff_BP + -0x22e) = uVar6;
        }
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar12 && !(bool)uVar13) {
          uVar6 = *(undefined2 *)(unaff_BP + -0x70);
          *(undefined2 *)(unaff_BP + -0x290) = *(undefined2 *)(unaff_BP + -0x72);
          *(undefined2 *)(unaff_BP + -0x28e) = uVar6;
        }
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar12) {
          uVar6 = *(undefined2 *)(unaff_BP + -0x68);
          *(undefined2 *)(unaff_BP + -0x230) = *(undefined2 *)(unaff_BP + -0x6a);
          *(undefined2 *)(unaff_BP + -0x22e) = uVar6;
        }
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar12 && !(bool)uVar13) {
          uVar6 = *(undefined2 *)(unaff_BP + -0x68);
          *(undefined2 *)(unaff_BP + -0x290) = *(undefined2 *)(unaff_BP + -0x6a);
          *(undefined2 *)(unaff_BP + -0x28e) = uVar6;
        }
      }
      uVar6 = 0x22b2;
      puVar1 = (uint *)(unaff_BP + -400);
      uVar9 = *puVar1;
      *puVar1 = *puVar1 + 1;
      *(int *)(unaff_BP + -0x18e) = *(int *)(unaff_BP + -0x18e) + (uint)(0xfffe < uVar9);
    }
    uVar2 = *(undefined2 *)0xaa7a;
    puVar11 = (undefined2 *)*(undefined2 *)(unaff_BP + 10);
    *puVar11 = *(undefined2 *)0xaa78;
    puVar11[1] = uVar2;
    uVar2 = *(undefined2 *)0xaa7e;
    puVar11 = (undefined2 *)*(undefined2 *)(unaff_BP + 0xc);
    *puVar11 = *(undefined2 *)0xaa7c;
    puVar11[1] = uVar2;
    if (*(int *)(unaff_BP + -0x3c) != 0 || *(int *)(unaff_BP + -0x3e) != 0) {
      func_0x000297e6(uVar6);
      func_0x00029bb5(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029bb5(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029983(0x22b2);
    }
    uVar6 = 1;
  }
  return uVar6;
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  2 bytes, 2 callers */

void __cdecl16far FUN_3ab8_4fbd(void)

{
  return;
}



/* 3ab8:4fbf  FUN_3ab8_4fbf  446 bytes, 0 callers */

/* WARNING: Control flow encountered bad instruction data */

undefined2 __cdecl16far FUN_3ab8_4fbf(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uStackY_28;
  
  FUN_21f2_0ebc();
  FUN_28b3_0d8b(0x22b2);
  func_0x0002996b(0x22b2);
  func_0x00029983(0x22b2);
  uVar1 = *(uint *)0xa60 < *(uint *)0xa5e;
  uVar3 = *(uint *)0xa60 == *(uint *)0xa5e;
  FUN_28b3_0d8b(0x22b2);
  func_0x0002996b(0x22b2);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x0002996b(0x22b2);
  FUN_28b3_1181(0x22b2);
  uVar2 = uVar1;
  if ((bool)uVar1 || (bool)uVar3) {
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar1) {
      uVar2 = 1;
    }
    else {
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      uVar2 = 1;
      if (!(bool)uVar1) {
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        uVar2 = 1;
        if (!(bool)uVar1) {
          func_0x000297e6(0x22b2);
          func_0x000297e6(0x22b2);
          FUN_28b3_1181(0x22b2);
          uVar2 = 1;
          if (!(bool)uVar1) {
            func_0x000297e6(0x22b2);
            func_0x000297e6(0x22b2);
            FUN_28b3_1181(0x22b2);
            uVar2 = 1;
            if (!(bool)uVar1) {
              func_0x000297e6(0x22b2);
              func_0x000297e6(0x22b2);
              FUN_28b3_1181(0x22b2);
              uVar2 = 1;
              if (!(bool)uVar1) {
                func_0x000297e6(0x22b2);
                func_0x000297e6(0x22b2);
                FUN_28b3_1181(0x22b2);
                uVar2 = 1;
                if (!(bool)uVar1) goto LAB_2bb4_44de_3;
              }
            }
          }
        }
      }
    }
  }
  func_0x000297e6(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)uVar2) {
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar2) goto LAB_2bb4_44de_3;
  }
  uVar2 = 0;
  func_0x000297e6(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)uVar2) {
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar2) goto LAB_2bb4_44de_3;
  }
  uVar2 = 0;
  func_0x000297e6(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_1181(0x22b2);
  if (!(bool)uVar2 && !(bool)uVar3) {
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)uVar2 && !(bool)uVar3) goto LAB_2bb4_44de_3;
  }
  func_0x000297e6(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_1181(0x22b2);
  if (!(bool)uVar2 && !(bool)uVar3) {
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)uVar2 && !(bool)uVar3) goto LAB_2bb4_44de_3;
  }
  for (uStackY_28 = 1; (int)uStackY_28 < 5; uStackY_28 = uStackY_28 + 1) {
    uVar2 = uStackY_28 < 4;
    uVar1 = uStackY_28 == 4;
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x0002996b(0x22b2);
    FUN_28b3_0ee9(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029c9d(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_1163(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_1163(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar2) {
LAB_3ab8_5340:
      uVar2 = 1;
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar2) {
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar2) break;
      }
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar1) break;
      func_0x000297e6(0x22b2);
      FUN_28b3_100d(0x22b2);
      func_0x00029b9d(0x22b2);
      func_0x0002996b(0x22b2);
      FUN_28b3_0ee9(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_100d(0x22b2);
      func_0x0002996b(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_100d(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar2 && !(bool)uVar1) {
        func_0x000297e6(0x22b2);
        func_0x00029b6d(0x22b2);
        func_0x00029bb5(0x22b2,param_1);
        func_0x00029983(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029b6d(0x22b2);
        func_0x00029bb5(0x22b2,param_2);
        func_0x00029983(0x22b2);
      }
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar2 && !(bool)uVar1) {
        func_0x000297e6(0x22b2);
        func_0x00029b6d(0x22b2);
        func_0x00029bb5(0x22b2);
        func_0x00029983(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029b6d(0x22b2);
        func_0x00029bb5(0x22b2);
        func_0x00029983(0x22b2);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar2) goto LAB_3ab8_5340;
    }
  }
LAB_2bb4_44de_3:
  FUN_32b2_710c();
  FUN_32b2_718c();
  FUN_32b2_7095();
  FUN_32b2_6eb1();
  FUN_32b2_6d14();
  FUN_32b2_6e63(0x32b2);
  FUN_32b2_6d14();
  FUN_32b2_6e63(0x32b2);
  return 1;
}



/* 3ab8:517f  FUN_3ab8_517f  801 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */

undefined2 __cdecl16far FUN_3ab8_517f(void)

{
  undefined2 uVar1;
  undefined2 in_DX;
  int unaff_BP;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined1 in_CF;
  undefined1 uVar2;
  undefined1 in_ZF;
  undefined1 uVar3;
  
  uVar2 = in(in_DX);
  *unaff_DI = uVar2;
  func_0x000297e6(0x3ab8);
  FUN_28b3_1181(0x22b2);
  if (!(bool)in_CF && !(bool)in_ZF) {
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)in_CF && !(bool)in_ZF) goto LAB_2bb4_44de_3;
  }
  *(undefined2 *)(unaff_BP + -0x26) = 1;
  while (*(int *)(unaff_BP + -0x26) < 5) {
    if (*(int *)(unaff_BP + -0x26) == 1) {
      uVar1 = *(undefined2 *)(unaff_BP + -0x28);
      *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0x2a);
      *(undefined2 *)(unaff_BP + -2) = uVar1;
      uVar1 = *(undefined2 *)(unaff_BP + -0x2c);
      *(undefined2 *)(unaff_BP + -0x14) = *(undefined2 *)(unaff_BP + -0x2e);
      *(undefined2 *)(unaff_BP + -0x12) = uVar1;
      uVar1 = *(undefined2 *)(unaff_BP + -0x30);
      *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)(unaff_BP + -0x32);
      *(undefined2 *)(unaff_BP + -10) = uVar1;
      uVar1 = *(undefined2 *)(unaff_BP + -0x2c);
      *(undefined2 *)(unaff_BP + -0x1c) = *(undefined2 *)(unaff_BP + -0x2e);
      *(undefined2 *)(unaff_BP + -0x1a) = uVar1;
    }
    if (*(int *)(unaff_BP + -0x26) == 2) {
      uVar1 = *(undefined2 *)(unaff_BP + -0x30);
      *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0x32);
      *(undefined2 *)(unaff_BP + -2) = uVar1;
      uVar1 = *(undefined2 *)(unaff_BP + -0x34);
      *(undefined2 *)(unaff_BP + -0x1c) = *(undefined2 *)(unaff_BP + -0x36);
      *(undefined2 *)(unaff_BP + -0x1a) = uVar1;
    }
    if (*(int *)(unaff_BP + -0x26) == 3) {
      uVar1 = *(undefined2 *)(unaff_BP + -0x34);
      *(undefined2 *)(unaff_BP + -0x14) = *(undefined2 *)(unaff_BP + -0x36);
      *(undefined2 *)(unaff_BP + -0x12) = uVar1;
      uVar1 = *(undefined2 *)(unaff_BP + -0x28);
      *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)(unaff_BP + -0x2a);
      *(undefined2 *)(unaff_BP + -10) = uVar1;
    }
    uVar2 = *(uint *)(unaff_BP + -0x26) < 4;
    uVar3 = *(uint *)(unaff_BP + -0x26) == 4;
    if ((bool)uVar3) {
      uVar1 = *(undefined2 *)(unaff_BP + -0x28);
      *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0x2a);
      *(undefined2 *)(unaff_BP + -2) = uVar1;
      uVar1 = *(undefined2 *)(unaff_BP + -0x2c);
      *(undefined2 *)(unaff_BP + -0x1c) = *(undefined2 *)(unaff_BP + -0x2e);
      *(undefined2 *)(unaff_BP + -0x1a) = uVar1;
    }
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x0002996b(0x22b2);
    FUN_28b3_0ee9(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029c9d(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_1163(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_1163(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar2) {
LAB_3ab8_5340:
      uVar2 = 1;
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar2) {
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar2) break;
      }
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar3) break;
      func_0x000297e6(0x22b2);
      FUN_28b3_100d(0x22b2);
      func_0x00029b9d(0x22b2);
      func_0x0002996b(0x22b2);
      FUN_28b3_0ee9(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_100d(0x22b2);
      func_0x0002996b(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_100d(0x22b2);
      func_0x00029983(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar2 && !(bool)uVar3) {
        func_0x000297e6(0x22b2);
        func_0x00029b6d(0x22b2);
        func_0x00029bb5(0x22b2,*(undefined2 *)(unaff_BP + 6));
        func_0x00029983(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029b6d(0x22b2);
        func_0x00029bb5(0x22b2,*(undefined2 *)(unaff_BP + 8));
        func_0x00029983(0x22b2);
      }
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar2 && !(bool)uVar3) {
        func_0x000297e6(0x22b2);
        func_0x00029b6d(0x22b2);
        func_0x00029bb5(0x22b2);
        func_0x00029983(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029b6d(0x22b2);
        func_0x00029bb5(0x22b2);
        func_0x00029983(0x22b2);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar2) goto LAB_3ab8_5340;
    }
    *(int *)(unaff_BP + -0x26) = *(int *)(unaff_BP + -0x26) + 1;
  }
LAB_2bb4_44de_3:
  FUN_32b2_710c();
  FUN_32b2_718c();
  FUN_32b2_7095();
  FUN_32b2_6eb1();
  FUN_32b2_6d14();
  FUN_32b2_6e63(0x32b2);
  FUN_32b2_6d14();
  FUN_32b2_6e63(0x32b2);
  return 1;
}



/* 3ab8:54a5  FUN_3ab8_54a5  837 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_54a5(void)

{
  undefined2 uVar1;
  undefined1 in_CF;
  
  FUN_21f2_0ebc();
  func_0x00029834(0x22b2);
  func_0x00029bfc(0x22b2);
  func_0x0002996b(0x22b2);
  FUN_28b3_0ee9(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029834(0x22b2);
  func_0x00029bfc(0x22b2);
  func_0x0002996b(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)in_CF) {
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)in_CF) goto LAB_3ab8_5515;
LAB_3ab8_5510:
    uVar1 = 0;
  }
  else {
LAB_3ab8_5515:
    func_0x00029834(0x22b2);
    func_0x00029983(0x22b2);
    func_0x00029834(0x22b2);
    func_0x00029983(0x22b2);
    func_0x00029834(0x22b2);
    func_0x00029983(0x22b2);
    func_0x00029834(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)in_CF) {
      func_0x000297e6(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029bfc(0x22b2);
      func_0x0002996b(0x22b2);
      func_0x00029ae7(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)in_CF) goto LAB_3ab8_5510;
      func_0x00029834(0x22b2);
      func_0x00029bfc(0x22b2);
      func_0x00029c74(0x22b2);
      func_0x00029b85(0x22b2);
      func_0x0002996b(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029bfc(0x22b2);
      func_0x00029c9d(0x22b2);
      func_0x00029c74(0x22b2);
      func_0x00029983(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029bfc(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029c74(0x22b2);
      func_0x00029983(0x22b2);
    }
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)in_CF) {
      func_0x000297e6(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029bfc(0x22b2);
      func_0x0002996b(0x22b2);
      func_0x00029ae7(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)in_CF) goto LAB_3ab8_5510;
      func_0x00029834(0x22b2);
      func_0x00029bfc(0x22b2);
      func_0x00029c74(0x22b2);
      func_0x00029b85(0x22b2);
      func_0x0002996b(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029bfc(0x22b2);
      func_0x00029c9d(0x22b2);
      func_0x00029c74(0x22b2);
      func_0x00029983(0x22b2);
      func_0x00029834(0x22b2);
      func_0x00029bfc(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029c74(0x22b2);
      func_0x00029983(0x22b2);
    }
    func_0x00029834(0x22b2);
    func_0x00029b85(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x00029bfc(0x22b2);
    func_0x00029c9d(0x22b2);
    func_0x00029c74(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x00029bfc(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029c74(0x22b2);
    func_0x00029983(0x22b2);
    func_0x00029834(0x22b2);
    func_0x00029b85(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x00029bfc(0x22b2);
    func_0x00029c9d(0x22b2);
    func_0x00029c74(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x00029bfc(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x00029c74(0x22b2);
    func_0x00029983(0x22b2);
    uVar1 = 1;
  }
  return uVar1;
}



/* 3ab8:57ea  FUN_3ab8_57ea  979 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_57ea(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined2 in_stack_00000034;
  undefined2 in_stack_00000036;
  undefined2 in_stack_00000038;
  undefined2 in_stack_0000003a;
  undefined2 in_stack_0000003c;
  undefined2 in_stack_0000003e;
  undefined2 in_stack_00000040;
  undefined2 in_stack_00000042;
  undefined2 in_stack_0000004c;
  undefined2 in_stack_0000004e;
  undefined2 in_stack_00000050;
  undefined2 in_stack_00000052;
  undefined2 in_stack_00000054;
  undefined2 in_stack_00000056;
  undefined2 in_stack_00000058;
  undefined2 in_stack_0000005a;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 uStack_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 *local_4;
  
  local_4 = (undefined2 *)0x3ab8;
  local_6 = 0x375;
  FUN_21f2_0ebc();
  local_4 = (undefined2 *)in_stack_00000042;
  local_6 = in_stack_00000040;
  local_8 = in_stack_0000003e;
  local_a = in_stack_0000003c;
  uStack_c = in_stack_0000003a;
  local_e = in_stack_00000038;
  uStack_10 = in_stack_00000036;
  local_12 = in_stack_00000034;
  local_14 = 1;
  local_16 = 0x22b2;
  uStack_18 = 0x396;
  FUN_1def_05d1();
  local_4 = (undefined2 *)in_stack_00000042;
  local_6 = in_stack_00000040;
  local_8 = in_stack_0000003e;
  local_a = in_stack_0000003c;
  uStack_c = in_stack_0000003a;
  local_e = in_stack_00000038;
  uStack_10 = in_stack_00000036;
  local_12 = in_stack_00000034;
  local_14 = 1;
  local_16 = 0x1bb4;
  uStack_18 = 0x3c7;
  puVar1 = (undefined2 *)func_0x0001e558();
  local_22 = *puVar1;
  local_20 = puVar1[1];
  local_4 = (undefined2 *)in_stack_0000005a;
  local_6 = in_stack_00000058;
  local_8 = in_stack_00000056;
  local_a = in_stack_00000054;
  uStack_c = in_stack_00000052;
  local_e = in_stack_00000050;
  uStack_10 = in_stack_0000004e;
  local_12 = in_stack_0000004c;
  local_14 = 1;
  local_16 = 0x1bb4;
  uStack_18 = 0x3f8;
  puVar1 = (undefined2 *)FUN_1def_05d1();
  local_1e = *puVar1;
  local_1c = puVar1[1];
  local_4 = (undefined2 *)in_stack_0000005a;
  local_6 = in_stack_00000058;
  local_8 = in_stack_00000056;
  local_a = in_stack_00000054;
  uStack_c = in_stack_00000052;
  local_e = in_stack_00000050;
  uStack_10 = in_stack_0000004e;
  local_12 = in_stack_0000004c;
  local_14 = 1;
  local_16 = 0x1bb4;
  uStack_18 = 0x429;
  puVar1 = (undefined2 *)func_0x0001e558();
  uVar3 = (undefined1 *)0xffed < &local_14;
  local_26 = *puVar1;
  local_24 = puVar1[1];
  local_4 = (undefined2 *)0x1bb4;
  local_6 = 0x441;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0x446;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0x44e;
  func_0x00029bfc();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0x456;
  func_0x0002996b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0x45e;
  FUN_28b3_0ee9();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0x466;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0x46b;
  func_0x00029d78();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0x473;
  func_0x00029bfc();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0x47b;
  func_0x0002996b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0x483;
  FUN_28b3_0ee9();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0x48c;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0x494;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0x499;
  FUN_28b3_1181();
  if ((bool)uVar3) {
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x4a4;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x4ac;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x4b1;
    FUN_28b3_1181();
    if (!(bool)uVar3) goto LAB_3ab8_5938;
LAB_3ab8_5933:
    uVar2 = 0;
  }
  else {
LAB_3ab8_5938:
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x4c0;
    func_0x00029834();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x4c8;
    func_0x00029983();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x4d0;
    func_0x00029834();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x4d8;
    func_0x00029983();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x4e1;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x4e9;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x4ee;
    FUN_28b3_1181();
    if ((bool)uVar3) {
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x4fc;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x504;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x50c;
      FUN_28b3_100d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x514;
      func_0x0002996b();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x519;
      func_0x00029ae7();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x51e;
      FUN_28b3_1181();
      if ((bool)uVar3) goto LAB_3ab8_5933;
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x528;
      func_0x00029834();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x530;
      FUN_28b3_100d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x539;
      func_0x00029c74();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x541;
      func_0x00029b85();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x549;
      func_0x0002996b();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x54e;
      func_0x00029d78();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x556;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x55b;
      func_0x00029d78();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x563;
      func_0x00029bfc();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x568;
      func_0x00029c9d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x570;
      func_0x00029bb5();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x578;
      func_0x00029983();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x580;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x588;
      FUN_28b3_100d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x590;
      func_0x00029b6d();
      local_4 = &local_22;
      local_6 = 0x22b2;
      local_8 = 0x599;
      func_0x00029bb5();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x59f;
      func_0x00029983();
    }
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x5b5;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x5bd;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x5c2;
    FUN_28b3_1181();
    if ((bool)uVar3) {
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x5d0;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x5d8;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x5e0;
      FUN_28b3_100d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x5e8;
      func_0x0002996b();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x5ed;
      func_0x00029ae7();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x5f2;
      FUN_28b3_1181();
      if ((bool)uVar3) goto LAB_3ab8_5933;
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x5ff;
      func_0x00029834();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x607;
      FUN_28b3_100d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x610;
      func_0x00029c74();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x618;
      func_0x00029b85();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x620;
      func_0x0002996b();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x628;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x630;
      FUN_28b3_100d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x635;
      func_0x00029c9d();
      local_4 = &local_12;
      local_6 = 0x22b2;
      local_8 = 0x63e;
      func_0x00029bb5();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x644;
      func_0x00029983();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x64c;
      func_0x000297e6();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x654;
      FUN_28b3_100d();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x65c;
      func_0x00029b6d();
      local_4 = &local_26;
      local_6 = 0x22b2;
      local_8 = 0x665;
      func_0x00029bb5();
      local_4 = (undefined2 *)0x22b2;
      local_6 = 0x66b;
      func_0x00029983();
      local_a = *(undefined2 *)0xaa68;
      local_8 = *(undefined2 *)0xaa6a;
    }
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x680;
    func_0x00029834();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x688;
    func_0x00029b85();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x690;
    func_0x0002996b();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x695;
    func_0x00029d78();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x69d;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x6a2;
    func_0x00029d78();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x6aa;
    func_0x00029bfc();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x6af;
    func_0x00029c9d();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x6b7;
    func_0x00029c74();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x6bf;
    func_0x00029983();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x6c7;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x6cf;
    func_0x00029b6d();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x6d7;
    func_0x00029983();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x6df;
    func_0x00029834();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x6e7;
    func_0x00029b85();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x6ef;
    func_0x0002996b();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x6f4;
    func_0x00029d78();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x6fc;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x701;
    func_0x00029d78();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x709;
    func_0x00029bfc();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x70e;
    func_0x00029c9d();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x716;
    func_0x00029c74();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x71e;
    func_0x00029983();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x726;
    func_0x000297e6();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x72e;
    func_0x00029b6d();
    local_4 = (undefined2 *)0x22b2;
    local_6 = 0x736;
    func_0x00029983();
    uVar2 = 1;
  }
  return uVar2;
}



/* 3ab8:5bbd  FUN_3ab8_5bbd  152 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_5bbd(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  undefined2 in_stack_00000034;
  undefined2 in_stack_00000036;
  undefined2 in_stack_00000038;
  undefined2 in_stack_0000003a;
  undefined2 in_stack_0000003c;
  undefined2 in_stack_0000003e;
  undefined2 in_stack_00000040;
  undefined2 in_stack_00000042;
  undefined2 in_stack_0000004c;
  undefined2 in_stack_0000004e;
  undefined2 in_stack_00000050;
  undefined2 in_stack_00000052;
  undefined2 in_stack_00000054;
  undefined2 in_stack_00000056;
  undefined2 in_stack_00000058;
  undefined2 in_stack_0000005a;
  undefined2 *in_stack_0000005e;
  undefined2 *in_stack_00000062;
  
  FUN_21f2_0ebc();
  puVar2 = (undefined2 *)
           func_0x0001e558(0x22b2,1,in_stack_00000034,in_stack_00000036,in_stack_00000038,
                           in_stack_0000003a,in_stack_0000003c,in_stack_0000003e,in_stack_00000040,
                           in_stack_00000042);
  uVar1 = puVar2[1];
  *in_stack_0000005e = *puVar2;
  in_stack_0000005e[1] = uVar1;
  func_0x00029834(0x1bb4);
  func_0x00029983(0x22b2);
  puVar2 = (undefined2 *)
           func_0x0001e558(0x22b2,1,in_stack_0000004c,in_stack_0000004e,in_stack_00000050,
                           in_stack_00000052,in_stack_00000054,in_stack_00000056,in_stack_00000058,
                           in_stack_0000005a);
  uVar1 = puVar2[1];
  *in_stack_00000062 = *puVar2;
  in_stack_00000062[1] = uVar1;
  func_0x00029834(0x1bb4);
  func_0x00029983(0x22b2);
  return 1;
}



/* 4000:07d5  FUN_4000_07d5  11452 bytes, 0 callers */

undefined2 FUN_4000_07d5(undefined2 param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 **ppuVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined2 *puVar15;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar16;
  bool bVar17;
  undefined1 uVar18;
  undefined2 *puVar19;
  undefined2 **ppuVar20;
  undefined4 uVar21;
  int local_6b2;
  undefined2 **local_6aa;
  int local_6a8;
  undefined1 local_6a2 [8];
  undefined2 **local_69a;
  int local_698;
  int local_696;
  int local_694;
  undefined2 local_692;
  undefined2 **local_690;
  undefined2 local_68e;
  undefined2 local_68c;
  undefined2 *local_68a [8];
  undefined2 local_67a;
  undefined2 uStack_678;
  undefined2 uStack_676;
  undefined2 uStack_674;
  undefined2 **local_672;
  int local_670;
  int local_66e;
  int local_66c;
  undefined2 **local_66a;
  int local_668;
  int local_666;
  int local_664;
  undefined2 local_662;
  undefined2 local_660;
  undefined2 local_65e;
  undefined2 local_65c;
  undefined2 local_65a;
  undefined2 local_658;
  undefined2 *local_656;
  undefined2 local_654;
  undefined2 local_652;
  undefined2 local_650;
  undefined2 local_64e;
  undefined2 local_64c;
  undefined2 local_64a;
  undefined2 local_648;
  undefined4 local_646;
  undefined2 local_642;
  undefined2 local_640;
  undefined4 local_63e;
  undefined2 *local_63a;
  undefined2 *local_634 [2];
  undefined1 local_630 [8];
  undefined2 local_628 [14];
  char local_60c;
  undefined1 local_604 [4];
  undefined2 local_600 [2];
  undefined2 local_5fc;
  undefined2 local_5fa;
  undefined2 local_5f4;
  undefined2 local_5f2;
  undefined2 local_5f0;
  undefined2 local_5ee;
  undefined2 *local_5e8;
  uint local_5e6;
  int local_5e4;
  undefined2 local_5e2;
  undefined2 local_5e0;
  undefined2 local_5de [11];
  int local_5c8;
  int local_5c6;
  int local_5c4;
  uint local_5c2;
  int local_5c0;
  undefined2 local_5be;
  undefined2 local_5bc;
  undefined2 local_5ba;
  undefined2 local_5b8;
  int local_5b6;
  int local_5b4;
  int local_5b2;
  uint local_5b0;
  int local_5ae;
  undefined2 local_5ac;
  undefined2 local_5aa;
  undefined2 *local_5a0 [50];
  uint local_53c;
  int local_53a;
  int local_538;
  int aiStack_52e [512];
  undefined2 local_12e;
  undefined2 local_12c;
  undefined2 local_12a;
  undefined2 uStack_128;
  undefined2 uStack_126;
  undefined2 uStack_124;
  int local_122;
  int local_120;
  uint local_11e;
  int local_11c;
  undefined2 local_116 [11];
  undefined4 local_100;
  undefined2 local_f6;
  int local_f4;
  int local_f2;
  undefined2 local_ec [2];
  undefined2 local_e8;
  undefined2 local_e6;
  undefined4 local_d6;
  undefined1 local_d0;
  undefined2 **local_cc;
  undefined1 *local_ca;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined2 local_c4 [8];
  undefined1 local_b4;
  undefined1 local_b3;
  int local_8e;
  int local_8c;
  undefined2 local_86 [2];
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7a;
  undefined2 local_78;
  int local_70;
  int local_6e;
  undefined1 local_6c [2];
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5a;
  undefined2 *local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined1 local_46;
  undefined2 local_44;
  uint local_42;
  int local_40;
  undefined1 local_3e;
  undefined2 uStack_3a;
  undefined2 auStack_36 [2];
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 **ppuStack_14;
  undefined2 **ppuStack_12;
  undefined2 **ppuStack_10;
  undefined2 **ppuStack_e;
  undefined2 ***pppuStack_c;
  
  FUN_21f2_0ebc();
  local_42 = 1;
  local_40 = 0;
  local_5ac = *(undefined2 *)0xaa78;
  local_5aa = *(undefined2 *)0xaa7a;
  bVar4 = func_0x0000db57();
  if ((bVar4 & 0xe) == 2) {
    *(undefined1 *)0x11d6 = 1;
  }
  uVar16 = 0;
  uVar18 = *(int *)0x11ea == 0;
  if (*(int *)0x11ea < 0) {
    *(undefined2 *)0x11ea = 1;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar16 || (bool)uVar18) {
      *(undefined2 *)0x11ea = 0;
    }
  }
  if (param_2 != 0) {
    local_f6 = *(undefined2 *)0x11ea;
    *(undefined2 *)0x11ea = 1;
  }
  local_12a = *(undefined2 *)0xaa84;
  uStack_128 = *(undefined2 *)0xaa86;
  uStack_126 = *(undefined2 *)0xaa88;
  uStack_124 = *(undefined2 *)0xaa8a;
  local_63a = (undefined2 *)((*(int *)0x1b3e - *(int *)0xa5c) / 2);
  FUN_28b3_0d8b();
  func_0x00029983();
  local_63a = (undefined2 *)((*(int *)0xa60 - *(int *)0xa5e) / 2);
  FUN_28b3_0d8b();
  func_0x00029983();
  local_44 = 0;
  local_120 = 0;
  local_122 = 0;
  local_5b0 = *(uint *)0x148;
  local_5ae = *(int *)0x14a;
  local_5c2 = *(uint *)0x14c;
  local_5c0 = *(int *)0x14e;
  do {
    local_5b2 = 0;
    local_5b4 = 0;
    local_3e = 0;
    if (param_2 != 0) {
      local_cc = (undefined2 **)0x3;
      local_ca = (undefined1 *)0x0;
    }
    while (param_2 == 0) {
      pppuStack_c = (undefined2 ***)0x8f6;
      func_0x0000daa6();
      uVar8 = (int)*(uint *)0xb310 >> 0xf;
      local_5c8 = ((int)((*(uint *)0xb310 ^ uVar8) - uVar8) >> 4 ^ uVar8) - uVar8;
      pppuStack_c = (undefined2 ***)local_5a0;
      ppuStack_e = (undefined2 **)0x885;
      ppuStack_10 = (undefined2 **)0x92e;
      FUN_21f2_3454();
      pppuStack_c = (undefined2 ***)0x22b2;
      ppuStack_e = (undefined2 **)0x93f;
      FUN_1def_07a4();
      if (*(int *)0x11ea == 0) {
        pppuStack_c = (undefined2 ***)0x2;
        ppuStack_e = (undefined2 **)0x43;
        ppuStack_10 = (undefined2 **)0x778a;
        ppuStack_12 = (undefined2 **)0x1bb4;
        ppuStack_14 = (undefined2 **)0x986;
        FUN_1000_02b5();
        local_12e = *(undefined2 *)0xaa68;
        local_12c = *(undefined2 *)0xaa6a;
      }
      else {
        pppuStack_c = (undefined2 ***)0x2;
        ppuStack_e = (undefined2 **)0x43;
        ppuStack_10 = (undefined2 **)0x7785;
        ppuStack_12 = (undefined2 **)0x1bb4;
        ppuStack_14 = (undefined2 **)0x961;
        FUN_1000_02b5();
        local_12e = *(undefined2 *)0xaa8c;
        local_12c = *(undefined2 *)0xaa8e;
      }
      *(undefined2 *)0xc22 = 1;
      if (local_120 == 0 && local_122 == 0) {
        local_63a = (undefined2 *)0x2710;
      }
      else {
        local_63a = (undefined2 *)0x270f;
      }
      *(undefined2 *)0xc2c = 1;
      pppuStack_c = (undefined2 ***)local_604;
      ppuStack_e = local_5a0;
      ppuStack_10 = (undefined2 **)local_63a;
      ppuStack_12 = (undefined2 **)0xdef;
      ppuVar10 = (undefined2 **)0x1bb4;
      ppuStack_14 = (undefined2 **)0x9d9;
      local_cc = (undefined2 **)FUN_1def_0904();
      local_ca = (undefined1 *)((int)local_cc >> 0xf);
      *(undefined2 *)0xc2c = 0;
      if (*(int *)0x158 != 0) goto LAB_3ab8_5e72;
      if (local_cc == (undefined2 **)0xffff) {
        local_538 = 0;
        *(uint *)0x148 = local_5b0;
        *(int *)0x14a = local_5ae;
        *(uint *)0x14c = local_5c2;
        *(int *)0x14e = local_5c0;
        pppuStack_c = (undefined2 ***)0xa7a;
        func_0x0000b1d8();
        func_0x0000abfa();
        local_120 = 0;
        local_122 = 0;
        ppuVar10 = (undefined2 **)0x11f2;
        pppuStack_c = (undefined2 ***)0xa90;
        func_0x0001470b();
        *(undefined2 *)0xbc0 = 1;
      }
      if ((local_cc == (undefined2 **)0x14) && (local_ca == (undefined1 *)0x0)) goto LAB_3ab8_5e72;
      if ((((local_cc == (undefined2 **)0x1) && (local_ca == (undefined1 *)0x0)) ||
          ((local_cc == (undefined2 **)0x2 && (local_ca == (undefined1 *)0x0)))) ||
         ((local_cc == (undefined2 **)0x3 && (local_ca == (undefined1 *)0x0)))) break;
      if (((local_cc == (undefined2 **)0x4) && (local_ca == (undefined1 *)0x0)) ||
         ((local_cc == (undefined2 **)0x5 && (local_ca == (undefined1 *)0x0)))) {
        pppuStack_c = (undefined2 ***)local_cc;
        ppuStack_10 = (undefined2 **)0xb52;
        ppuStack_e = ppuVar10;
        FUN_4375_75be();
      }
      if ((local_cc == (undefined2 **)0x6) && (local_ca == (undefined1 *)0x0)) {
        if (*(int *)0x11ea == 0) {
          *(undefined2 *)0x11ea = 1;
        }
        else {
          *(undefined2 *)0x11ea = 0;
        }
      }
      if (*(int *)0x158 != 0) goto LAB_3ab8_5e72;
    }
    pppuStack_c = (undefined2 ***)0xada;
    func_0x0000daa6();
    *(undefined2 *)0x11c = 0x1e;
    *(undefined2 *)0xbc0 = 1;
    bVar4 = func_0x0000db57();
    if ((bVar4 & 0xe) == 2) {
      *(undefined1 *)0x11d6 = 1;
    }
    pppuStack_c = (undefined2 ***)local_630;
    ppuStack_e = local_634;
    ppuStack_10 = (undefined2 **)local_600;
    ppuStack_12 = (undefined2 **)local_ca;
    ppuStack_14 = local_cc;
    uStack_16 = 0x885;
    uStack_18 = 0xb1c;
    iVar5 = FUN_4375_9294();
    if (0 < iVar5) {
      if ((local_cc == (undefined2 **)0x1) && (local_ca == (undefined1 *)0x0)) {
        local_5e2 = local_5ac;
        local_5e0 = local_5aa;
        func_0x000297e6();
        func_0x00029b6d();
        func_0x000297e6();
        func_0x00029b6d();
        FUN_28b3_1172();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029983();
        local_5f0 = *(undefined2 *)0xaa94;
        local_5ee = *(undefined2 *)0xaa96;
      }
      if (((local_cc == (undefined2 **)0x2) && (local_ca == (undefined1 *)0x0)) ||
         ((local_cc == (undefined2 **)0x3 && (local_ca == (undefined1 *)0x0)))) {
        local_5e2 = local_5ac;
        local_5e0 = local_5aa;
        local_5f4 = *(undefined2 *)0xa9f0;
        local_5f2 = *(undefined2 *)0xa9f2;
        local_5ba = *(undefined2 *)0xaa98;
        local_5b8 = *(undefined2 *)0xaa9a;
        local_5f0 = *(undefined2 *)0xaa7c;
        local_5ee = *(undefined2 *)0xaa7e;
      }
      if (local_cc == (undefined2 **)0x3) {
        uVar16 = 0;
        uVar18 = local_ca == (undefined1 *)0x0;
        if ((bool)uVar18) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar16) {
            uVar11 = *(undefined2 *)0xaa9e;
            *(undefined2 *)0x7860 = *(undefined2 *)0xaa9c;
            *(undefined2 *)0x7862 = uVar11;
          }
          func_0x000297e6();
          func_0x000297e6();
          func_0x00029ae7();
          FUN_28b3_1181();
          if (!(bool)uVar16 && !(bool)uVar18) {
            uVar11 = *(undefined2 *)0xaa16;
            *(undefined2 *)0x7864 = *(undefined2 *)0xaa14;
            *(undefined2 *)0x7866 = uVar11;
          }
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029d78();
          ppuStack_10 = (undefined2 **)0x22b2;
          ppuStack_12 = (undefined2 **)0xd00;
          func_0x000299d1();
          ppuStack_10 = (undefined2 **)0x22b2;
          ppuStack_12 = (undefined2 **)0xd05;
          func_0x0002a10c();
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          ppuStack_10 = (undefined2 **)0x22b2;
          ppuStack_12 = (undefined2 **)0xd27;
          func_0x000299d1();
          ppuStack_10 = (undefined2 **)0x22b2;
          ppuStack_12 = (undefined2 **)0xd2c;
          func_0x0002a11e();
          func_0x00029c44();
          func_0x000297e6();
          func_0x00029af6();
          func_0x00029d78();
          func_0x00029c9d();
          func_0x00029983();
          local_5f4 = *(undefined2 *)0xa9f0;
          local_5f2 = *(undefined2 *)0xa9f2;
        }
      }
      local_120 = 0;
      local_122 = 0;
      local_5b0 = *(uint *)0x148;
      local_5ae = *(int *)0x14a;
      local_5c2 = *(uint *)0x14c;
      local_5c0 = *(int *)0x14e;
LAB_3ab8_620e:
      pppuStack_c = (undefined2 ***)0xd96;
      func_0x0000daa6();
      func_0x0000c3ca();
      local_5be = *(undefined2 *)0xaa4c;
      local_5bc = *(undefined2 *)0xaa4e;
      local_5fc = *(undefined2 *)0xaa70;
      local_5fa = *(undefined2 *)0xaa72;
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029c2c();
      func_0x000299b9();
      func_0x000299d1();
      func_0x00029834();
      ppuStack_10 = (undefined2 **)0x22b2;
      ppuStack_12 = (undefined2 **)0xdf6;
      func_0x000299d1();
      ppuStack_10 = (undefined2 **)0x22b2;
      ppuStack_12 = (undefined2 **)0xdfb;
      func_0x0002a10c();
      func_0x00029834();
      func_0x00029c2c();
      func_0x00029bb5();
      ppuStack_10 = (undefined2 **)0x22b2;
      ppuStack_12 = (undefined2 **)0xe21;
      func_0x000299d1();
      ppuStack_10 = (undefined2 **)0x22b2;
      ppuStack_12 = (undefined2 **)0xe2a;
      func_0x00029834();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe34;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe39;
      func_0x0002a11e();
      ppuStack_10 = (undefined2 **)0x22b2;
      ppuStack_12 = (undefined2 **)0xe43;
      func_0x00029834();
      ppuStack_10 = (undefined2 **)0x22b2;
      ppuStack_12 = (undefined2 **)0xe4c;
      func_0x00029c2c();
      ppuStack_10 = (undefined2 **)0x22b2;
      ppuStack_12 = (undefined2 **)0xe55;
      func_0x00029bb5();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe5f;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xe68;
      func_0x000297e6();
      uStack_22 = 0xe72;
      func_0x000299d1();
      uStack_22 = 0xe7b;
      func_0x000297e6();
      uStack_28 = 0x22b2;
      uStack_2a = 0xe85;
      func_0x000299d1();
      uStack_28 = 0x22b2;
      uVar11 = 0x1bb4;
      uStack_2a = 0xe8a;
      FUN_1def_043a();
      local_53a = 0;
      for (local_53c = 1;
          (local_53a <= local_5e4 && ((local_53a < local_5e4 || (local_53c <= local_5e6))));
          local_53c = local_53c + 1) {
        local_f4 = local_53c * 3 + *(uint *)0x148;
        local_f2 = (local_53a << 1 | (uint)((int)local_53c < 0)) + local_53a +
                   (uint)CARRY2(local_53c * 2,local_53c) + *(int *)0x14a +
                   (uint)CARRY2(local_53c * 3,*(uint *)0x148);
        ppuStack_e = (undefined2 **)0xee4;
        pppuStack_c = (undefined2 ***)uVar11;
        puVar19 = (undefined2 *)func_0x0000013f();
        puVar7 = (undefined2 *)puVar19;
        puVar15 = local_c4;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar15;
          puVar15 = puVar15 + 1;
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar1;
        }
        func_0x000297e6();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0xf0a;
        func_0x000299d1();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0xf13;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xf1d;
        func_0x000299d1();
        uStack_18 = 1;
        uStack_1a = 0x22b2;
        uStack_1c = 0xf26;
        FUN_1def_05d1();
        func_0x000297e6();
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0xf55;
        func_0x000299d1();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0xf5e;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xf68;
        func_0x000299d1();
        uStack_18 = 1;
        uStack_1a = 0x22b2;
        uStack_1c = 0xf71;
        puVar15 = (undefined2 *)func_0x0001e558();
        local_82 = *puVar15;
        local_80 = puVar15[1];
        func_0x000297e6();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0xf94;
        func_0x000299d1();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0xf9d;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xfa7;
        func_0x000299d1();
        uStack_18 = 1;
        uStack_1a = 0x22b2;
        uStack_1c = 0xfb0;
        FUN_1def_05d1();
        func_0x000297e6();
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0xfde;
        func_0x000299d1();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0xfe7;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xff1;
        func_0x000299d1();
        uStack_18 = 1;
        uStack_1a = 0x22b2;
        uStack_1c = 0xffa;
        puVar15 = (undefined2 *)func_0x0001e558();
        uVar16 = (undefined1 *)0xffed < &uStack_18;
        uVar18 = &stack0x0000 == (undefined1 *)0x6;
        local_7a = *puVar15;
        local_78 = puVar15[1];
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar16 && !(bool)uVar18) {
          local_5be = local_82;
          local_5bc = local_80;
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar16) {
          local_5fc = local_82;
          local_5fa = local_80;
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar16 && !(bool)uVar18) {
          local_5be = local_7a;
          local_5bc = local_78;
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar16) {
          local_5fc = local_7a;
          local_5fa = local_78;
        }
        pppuStack_c = (undefined2 ***)0x22b2;
        uVar11 = 0;
        ppuStack_e = (undefined2 **)0x10b7;
        local_646 = (undefined2 **)func_0x0000013f();
        puVar7 = (undefined2 *)local_646;
        puVar15 = local_86;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          puVar19 = puVar15;
          puVar15 = puVar15 + 1;
          *puVar1 = *puVar19;
        }
        local_53a = local_53a + (uint)(0xfffe < local_53c);
      }
      if ((local_cc == (undefined2 **)0x3) && (local_ca == (undefined1 *)0x0)) {
        local_53a = 0;
        for (local_53c = 1;
            (local_53a <= local_11c && ((local_53a < local_11c || (local_53c <= local_11e))));
            local_53c = local_53c + 1) {
          local_f4 = local_53c * 3 + *(uint *)0x14c;
          local_f2 = (local_53a << 1 | (uint)((int)local_53c < 0)) + local_53a +
                     (uint)CARRY2(local_53c * 2,local_53c) + *(int *)0x14e +
                     (uint)CARRY2(local_53c * 3,*(uint *)0x14c);
          ppuStack_e = (undefined2 **)0x1136;
          pppuStack_c = (undefined2 ***)uVar11;
          puVar19 = (undefined2 *)func_0x00000271();
          puVar7 = (undefined2 *)puVar19;
          puVar15 = local_116;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar15;
            puVar15 = puVar15 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          puVar15 = local_ec;
          puVar7 = local_116;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar15;
            puVar15 = puVar15 + 1;
            puVar19 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar1 = *puVar19;
          }
          pppuStack_c = (undefined2 ***)0x0;
          ppuStack_e = (undefined2 **)0x116b;
          puVar19 = (undefined2 *)func_0x00000271();
          puVar7 = (undefined2 *)puVar19;
          puVar15 = local_628;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar15;
            puVar15 = puVar15 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          func_0x000297e6();
          ppuStack_10 = (undefined2 **)0x22b2;
          ppuStack_12 = (undefined2 **)0x1191;
          func_0x000299d1();
          ppuStack_10 = (undefined2 **)0x22b2;
          ppuStack_12 = (undefined2 **)0x119a;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          uStack_1a = 0x11a4;
          func_0x000299d1();
          uStack_18 = 1;
          uStack_1a = 0x22b2;
          uStack_1c = 0x11ad;
          FUN_1def_05d1();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          func_0x000297e6();
          ppuStack_10 = (undefined2 **)0x22b2;
          ppuStack_12 = (undefined2 **)0x11e5;
          func_0x000299d1();
          ppuStack_10 = (undefined2 **)0x22b2;
          ppuStack_12 = (undefined2 **)0x11ee;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          uStack_1a = 0x11f8;
          func_0x000299d1();
          uStack_18 = 1;
          uStack_1a = 0x22b2;
          uStack_1c = 0x1201;
          func_0x0001e558();
          uVar16 = (undefined1 *)0xffed < &uStack_18;
          uVar18 = &stack0x0000 == (undefined1 *)0x6;
          func_0x000297e6();
          func_0x0002996b();
          FUN_28b3_100d();
          func_0x0002996b();
          FUN_28b3_1181();
          if ((bool)uVar16) {
            func_0x000297e6();
            func_0x00029983();
          }
          func_0x000297e6();
          func_0x000297e6();
          func_0x00029bb5();
          func_0x0002996b();
          FUN_28b3_1181();
          uVar21 = local_d6;
          if (!(bool)uVar16 && !(bool)uVar18) {
            func_0x000297e6();
            func_0x00029983();
            uVar21 = local_d6;
          }
          uVar12 = 0x22b2;
          if (local_60c == '\0') {
            local_d6 = uVar21;
            func_0x000297e6();
            func_0x00029d78();
            iVar5 = FUN_28b3_0f51();
            local_646 = (undefined2 **)CONCAT22(local_100._2_2_ - iVar5,(undefined2 **)local_100);
            pppuStack_c = (undefined2 ***)0x22b2;
            uVar12 = 0x1bb4;
            ppuStack_e = (undefined2 **)0x12b3;
            uVar21 = func_0x00021eee();
          }
          uVar11 = 0;
          ppuStack_e = (undefined2 **)0x12d2;
          pppuStack_c = (undefined2 ***)uVar12;
          local_d6 = uVar21;
          local_63e = (undefined2 *)func_0x00000271();
          puVar7 = (undefined2 *)local_63e;
          puVar15 = local_ec;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            puVar19 = puVar15;
            puVar15 = puVar15 + 1;
            *puVar1 = *puVar19;
          }
          local_53a = local_53a + (uint)(0xfffe < local_53c);
        }
      }
LAB_3ab8_8843:
      pppuStack_c = (undefined2 ***)0x33cb;
      func_0x0000daa6();
      func_0x0000c3ca();
      pppuStack_c = (undefined2 ***)0x885;
      ppuStack_e = (undefined2 **)0x33de;
      FUN_1000_0599();
      pppuStack_c = (undefined2 ***)0x33e9;
      func_0x00012276();
      pppuStack_c = (undefined2 ***)(*(int *)0xa5e + 1);
      ppuStack_e = (undefined2 **)(*(int *)0xa5c + 1);
      ppuStack_10 = (undefined2 **)0x11f2;
      ppuStack_12 = (undefined2 **)0x3403;
      func_0x0000a76b();
      func_0x0000a799();
      puVar15 = (undefined2 *)0x885;
      pppuStack_c = (undefined2 ***)0x3413;
      func_0x0000daa6();
      if (local_cc == (undefined2 **)0x1) {
        uVar16 = 0;
        uVar18 = local_ca == (undefined1 *)0x0;
        if ((bool)uVar18) {
          local_5ac = local_5e2;
          local_5aa = local_5e0;
          local_5ba = local_5f4;
          local_5b8 = local_5f2;
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar16 && !(bool)uVar18) {
            *(undefined2 *)0x7860 = local_5fc;
            *(undefined2 *)0x7862 = local_5fa;
          }
          uVar16 = 0;
          uVar18 = local_40 == 0 && local_42 == 0;
          if (local_40 == 0 && local_42 == 0) {
            func_0x000297e6();
            func_0x00029af6();
          }
          else {
            func_0x000297e6();
            func_0x00029bb5();
          }
          func_0x00029983();
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_100d();
          puVar15 = (undefined2 *)0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar16 && !(bool)uVar18) {
            func_0x000297e6();
            func_0x00029bb5();
            puVar15 = (undefined2 *)0x22b2;
            func_0x00029983();
          }
        }
      }
      if (((local_cc == (undefined2 **)0x2) && (local_ca == (undefined1 *)0x0)) ||
         ((local_cc == (undefined2 **)0x3 && (local_ca == (undefined1 *)0x0)))) {
        uVar18 = local_ca == (undefined1 *)0x0;
        uVar16 = 0;
        local_5ac = local_5e2;
        local_5aa = local_5e0;
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar16 && !(bool)uVar18) {
          *(undefined2 *)0x7860 = local_5fc;
          *(undefined2 *)0x7862 = local_5fa;
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar16) {
LAB_3ab8_6849:
          local_5f4 = *(undefined2 *)0x7860;
          local_5f2 = *(undefined2 *)0x7862;
        }
        else {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar16) goto LAB_3ab8_6849;
        }
        func_0x00029834();
        func_0x000297e6();
        func_0x00029af6();
        func_0x0002996b();
        func_0x00029b55();
        func_0x00029ae7();
        func_0x00029d78();
        FUN_28b3_1181();
        if ((bool)uVar16) {
          func_0x00029834();
          func_0x000297e6();
          func_0x00029ae7();
          func_0x00029d78();
          FUN_28b3_1181();
          if ((bool)uVar16) {
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
          }
        }
        func_0x000297e6();
        func_0x00029af6();
        func_0x00029d78();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0x146d;
        func_0x000299d1();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0x1476;
        func_0x000297e6();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0x147b;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0x1485;
        func_0x000299d1();
        uStack_18 = *(undefined2 *)0xa9ee;
        uStack_1a = *(undefined2 *)0xa9ec;
        uStack_1c = *(undefined2 *)0xa9ea;
        uStack_1e = *(undefined2 *)0xa9e8;
        uStack_22 = 0x149e;
        func_0x000297e6();
        uStack_22 = 0x14a3;
        func_0x00029d78();
        uStack_28 = 0x22b2;
        uStack_2a = 0x14ad;
        func_0x000299d1();
        uStack_28 = 0x22b2;
        uStack_2a = 0x14b2;
        FUN_1def_043a();
        func_0x000297e6();
        func_0x00029d78();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0x14cd;
        func_0x000299d1();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0x14d6;
        func_0x000297e6();
        ppuStack_10 = (undefined2 **)0x22b2;
        ppuStack_12 = (undefined2 **)0x14db;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0x14e5;
        func_0x000299d1();
        uStack_18 = 1;
        uStack_1a = 0x22b2;
        uStack_1c = 0x14ee;
        puVar15 = (undefined2 *)FUN_1def_05d1();
        local_c8 = *puVar15;
        local_c6 = puVar15[1];
        uVar16 = 0;
        uVar18 = local_40 == 0 && local_42 == 0;
        if ((bool)uVar18) {
          func_0x000297e6();
          func_0x00029af6();
        }
        else {
          func_0x000297e6();
          func_0x00029bb5();
        }
        func_0x00029983();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_100d();
        puVar15 = (undefined2 *)0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar16 && !(bool)uVar18) {
          func_0x000297e6();
          func_0x00029bb5();
          puVar15 = (undefined2 *)0x22b2;
          func_0x00029983();
        }
      }
      local_5b0 = *(uint *)0x148;
      local_5ae = *(int *)0x14a;
      local_53a = 0;
      for (local_53c = 1;
          (local_53a <= local_5e4 && ((local_53a < local_5e4 || (local_53c <= local_5e6))));
          local_53c = local_53c + 1) {
        if ((local_53c & 0xf) == 0) {
          puVar15 = (undefined2 *)0x885;
          iVar5 = func_0x0000db7a();
          if (iVar5 != 0) break;
        }
        local_f4 = local_53c * 3 + local_5b0;
        local_f2 = (local_53a << 1 | (uint)((int)local_53c < 0)) + local_53a +
                   (uint)CARRY2(local_53c * 2,local_53c) + local_5ae +
                   (uint)CARRY2(local_53c * 3,local_5b0);
        ppuStack_e = (undefined2 **)0x15b9;
        pppuStack_c = (undefined2 ***)puVar15;
        puVar19 = (undefined2 *)func_0x0000013f();
        puVar7 = (undefined2 *)puVar19;
        puVar15 = local_c4;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar15;
          puVar15 = puVar15 + 1;
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar1;
        }
        pppuStack_c = (undefined2 ***)0x0;
        ppuStack_e = (undefined2 **)0x15e1;
        puVar19 = (undefined2 *)func_0x0000013f();
        puVar7 = (undefined2 *)puVar19;
        puVar15 = local_5de;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar15;
          puVar15 = puVar15 + 1;
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar1;
        }
        pppuStack_c = (undefined2 ***)0x0;
        puVar15 = (undefined2 *)0x0;
        ppuStack_e = (undefined2 **)0x1609;
        puVar19 = (undefined2 *)func_0x0000013f();
        puVar9 = (undefined2 *)puVar19;
        puVar7 = local_86;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
        if ((local_cc == (undefined2 **)0x1) && (local_ca == (undefined1 *)0x0)) {
          pppuStack_c = (undefined2 ***)&local_64e;
          ppuStack_e = (undefined2 **)&local_63e;
          ppuStack_10 = (undefined2 **)0x0;
          ppuStack_12 = (undefined2 **)0x164d;
          func_0x000297e6();
          ppuStack_10 = (undefined2 **)0x22b2;
          ppuStack_12 = (undefined2 **)0x1652;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0x165c;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          uStack_1a = 0x1664;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          uStack_1a = 0x1669;
          func_0x00029d78();
          uStack_22 = 0x1673;
          func_0x000299d1();
          uStack_22 = 0x167b;
          func_0x000297e6();
          uStack_22 = 0x1680;
          func_0x00029d78();
          uStack_28 = 0x22b2;
          uStack_2a = 0x168a;
          func_0x000299d1();
          uStack_28 = 0x22b2;
          uStack_2a = 0x1693;
          func_0x000297e6();
          uStack_28 = 0x22b2;
          uStack_2a = 0x1698;
          func_0x00029d78();
          uStack_30 = 0x22b2;
          uStack_32 = 0x16a2;
          func_0x000299d1();
          uStack_30 = 0x22b2;
          uStack_32 = 0x16aa;
          func_0x000297e6();
          uStack_30 = 0x22b2;
          uStack_32 = 0x16af;
          func_0x00029d78();
          uStack_3a = 0x16b9;
          func_0x000299d1();
          uStack_3a = 0x16c2;
          func_0x000297e6();
          uStack_3a = 0x16c7;
          func_0x00029d78();
          local_40 = 0x22b2;
          local_42 = 0x16d1;
          func_0x000299d1();
          local_40 = 0x22b2;
          local_42 = 0x16da;
          func_0x000297e6();
          local_40 = 0x22b2;
          local_42 = 0x16df;
          func_0x00029d78();
          local_48 = 0x22b2;
          local_4a = 0x16e9;
          func_0x000299d1();
          local_48 = 0x22b2;
          local_4a = 0x16f2;
          func_0x000297e6();
          local_48 = 0x22b2;
          local_4a = 0x16f7;
          func_0x00029d78();
          local_50 = 0x22b2;
          local_52 = 0x1701;
          func_0x000299d1();
          local_50 = 0x22b2;
          local_52 = 0x170a;
          func_0x000297e6();
          local_50 = 0x22b2;
          local_52 = 0x170f;
          func_0x00029d78();
          local_58 = (undefined2 *)0x22b2;
          uStack_5a = 0x1719;
          func_0x000299d1();
          local_58 = (undefined2 *)0x22b2;
          uStack_5a = 0x1722;
          func_0x000297e6();
          local_58 = (undefined2 *)0x22b2;
          uStack_5a = 0x1727;
          func_0x00029d78();
          uStack_60 = 0x22b2;
          uStack_62 = 0x1731;
          func_0x000299d1();
          uStack_60 = 0x22b2;
          uStack_62 = 0x1735;
          iVar5 = FUN_3ab8_54a5();
          local_646 = (undefined2 **)(long)iVar5;
          func_0x000297e6();
          pppuStack_c = (undefined2 ***)0x1754;
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          pppuStack_c = (undefined2 ***)0x176d;
          func_0x00029bb5();
          puVar15 = (undefined2 *)0x22b2;
          func_0x00029983();
        }
        if ((local_cc == (undefined2 **)0x2) && (local_ca == (undefined1 *)0x0)) {
          pppuStack_c = (undefined2 ***)&local_64e;
          ppuStack_e = (undefined2 **)&local_63e;
          ppuStack_12 = (undefined2 **)0x17a4;
          ppuStack_10 = (undefined2 **)puVar15;
          func_0x000297e6();
          ppuStack_10 = (undefined2 **)0x22b2;
          ppuStack_12 = (undefined2 **)0x17a9;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0x17b3;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          uStack_1a = 0x17bb;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          uStack_1a = 0x17c0;
          func_0x00029d78();
          uStack_22 = 0x17ca;
          func_0x000299d1();
          uStack_22 = 0x17d2;
          func_0x000297e6();
          uStack_22 = 0x17d7;
          func_0x00029d78();
          uStack_28 = 0x22b2;
          uStack_2a = 0x17e1;
          func_0x000299d1();
          uStack_28 = 0x22b2;
          uStack_2a = 0x17ea;
          func_0x000297e6();
          uStack_28 = 0x22b2;
          uStack_2a = 0x17ef;
          func_0x00029d78();
          uStack_30 = 0x22b2;
          uStack_32 = 0x17f9;
          func_0x000299d1();
          uStack_30 = 0x22b2;
          uStack_32 = 0x1801;
          func_0x000297e6();
          uStack_30 = 0x22b2;
          uStack_32 = 0x1806;
          func_0x00029d78();
          uStack_3a = 0x1810;
          func_0x000299d1();
          uStack_3a = 0x1819;
          func_0x000297e6();
          uStack_3a = 0x181e;
          func_0x00029d78();
          local_40 = 0x22b2;
          local_42 = 0x1828;
          func_0x000299d1();
          local_40 = 0x22b2;
          local_42 = 0x1831;
          func_0x000297e6();
          local_40 = 0x22b2;
          local_42 = 0x1836;
          func_0x00029d78();
          local_48 = 0x22b2;
          local_4a = 0x1840;
          func_0x000299d1();
          local_48 = 0x22b2;
          local_4a = 0x1849;
          func_0x000297e6();
          local_48 = 0x22b2;
          local_4a = 0x184e;
          func_0x00029d78();
          local_50 = 0x22b2;
          local_52 = 0x1858;
          func_0x000299d1();
          local_50 = 0x22b2;
          local_52 = 0x1861;
          func_0x000297e6();
          local_50 = 0x22b2;
          local_52 = 0x1866;
          func_0x00029d78();
          local_58 = (undefined2 *)0x22b2;
          uStack_5a = 0x1870;
          func_0x000299d1();
          local_58 = (undefined2 *)0x22b2;
          uStack_5a = 0x1879;
          func_0x000297e6();
          local_58 = (undefined2 *)0x22b2;
          uStack_5a = 0x187e;
          func_0x00029d78();
          uStack_60 = 0x22b2;
          uStack_62 = 0x1888;
          func_0x000299d1();
          uStack_60 = 0x22b2;
          uStack_62 = 0x1891;
          func_0x000297e6();
          uStack_60 = 0x22b2;
          uStack_62 = 0x1896;
          func_0x00029d78();
          uStack_68 = 0x22b2;
          uStack_6a = 0x18a0;
          func_0x000299d1();
          uStack_68 = 0x22b2;
          uStack_6a = 0x18a4;
          iVar5 = FUN_3ab8_57ea();
          local_646 = (undefined2 **)(long)iVar5;
          func_0x000297e6();
          pppuStack_c = (undefined2 ***)0x18c3;
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          pppuStack_c = (undefined2 ***)0x18dc;
          func_0x00029bb5();
          puVar15 = (undefined2 *)0x22b2;
          func_0x00029983();
        }
        if ((local_cc == (undefined2 **)0x3) && (local_ca == (undefined1 *)0x0)) {
          pppuStack_c = (undefined2 ***)&local_64e;
          ppuStack_e = (undefined2 **)&local_63e;
          ppuStack_12 = (undefined2 **)0x1913;
          ppuStack_10 = (undefined2 **)puVar15;
          func_0x000297e6();
          ppuStack_10 = (undefined2 **)0x22b2;
          ppuStack_12 = (undefined2 **)0x1918;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0x1922;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          uStack_1a = 0x192a;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          uStack_1a = 0x192f;
          func_0x00029d78();
          uStack_22 = 0x1939;
          func_0x000299d1();
          uStack_22 = 0x1941;
          func_0x000297e6();
          uStack_22 = 0x1946;
          func_0x00029d78();
          uStack_28 = 0x22b2;
          uStack_2a = 0x1950;
          func_0x000299d1();
          uStack_28 = 0x22b2;
          uStack_2a = 0x1959;
          func_0x000297e6();
          uStack_28 = 0x22b2;
          uStack_2a = 0x195e;
          func_0x00029d78();
          uStack_30 = 0x22b2;
          uStack_32 = 0x1968;
          func_0x000299d1();
          uStack_30 = 0x22b2;
          uStack_32 = 0x1970;
          func_0x000297e6();
          uStack_30 = 0x22b2;
          uStack_32 = 0x1975;
          func_0x00029d78();
          uStack_3a = 0x197f;
          func_0x000299d1();
          uStack_3a = 0x1988;
          func_0x000297e6();
          uStack_3a = 0x198d;
          func_0x00029d78();
          local_40 = 0x22b2;
          local_42 = 0x1997;
          func_0x000299d1();
          local_40 = 0x22b2;
          local_42 = 0x19a0;
          func_0x000297e6();
          local_40 = 0x22b2;
          local_42 = 0x19a5;
          func_0x00029d78();
          local_48 = 0x22b2;
          local_4a = 0x19af;
          func_0x000299d1();
          local_48 = 0x22b2;
          local_4a = 0x19b8;
          func_0x000297e6();
          local_48 = 0x22b2;
          local_4a = 0x19bd;
          func_0x00029d78();
          local_50 = 0x22b2;
          local_52 = 0x19c7;
          func_0x000299d1();
          local_50 = 0x22b2;
          local_52 = 0x19d0;
          func_0x000297e6();
          local_50 = 0x22b2;
          local_52 = 0x19d5;
          func_0x00029d78();
          local_58 = (undefined2 *)0x22b2;
          uStack_5a = 0x19df;
          func_0x000299d1();
          local_58 = (undefined2 *)0x22b2;
          uStack_5a = 0x19e8;
          func_0x000297e6();
          local_58 = (undefined2 *)0x22b2;
          uStack_5a = 0x19ed;
          func_0x00029d78();
          uStack_60 = 0x22b2;
          uStack_62 = 0x19f7;
          func_0x000299d1();
          uStack_60 = 0x22b2;
          uStack_62 = 0x1a00;
          func_0x000297e6();
          uStack_60 = 0x22b2;
          uStack_62 = 0x1a05;
          func_0x00029d78();
          uStack_68 = 0x22b2;
          uStack_6a = 0x1a0f;
          func_0x000299d1();
          uStack_68 = 0x22b2;
          uStack_6a = 0x1a13;
          iVar5 = FUN_3ab8_5bbd();
          local_646 = (undefined2 **)(long)iVar5;
          func_0x000297e6();
          pppuStack_c = (undefined2 ***)0x1a32;
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          pppuStack_c = (undefined2 ***)0x1a4b;
          func_0x00029bb5();
          puVar15 = (undefined2 *)0x22b2;
          func_0x00029983();
        }
        if (local_646._2_2_ != 0 || (undefined2 **)local_646 != (undefined2 **)0x0) {
          if (*(int *)0xcb6 == 0) {
            local_58 = (undefined2 *)local_63e;
            local_56 = local_63e._2_2_;
            local_54 = local_64e;
            local_52 = local_64c;
            local_50 = local_64a;
            local_4e = local_648;
            local_4c = local_652;
            local_4a = local_650;
          }
          else {
            func_0x000297e6();
            pppuStack_c = (undefined2 ***)0x1add;
            func_0x00029b55();
            func_0x00029983();
            func_0x000297e6();
            pppuStack_c = (undefined2 ***)0x1af6;
            func_0x00029b55();
            func_0x00029983();
            pppuStack_c = (undefined2 ***)0x0;
            ppuStack_e = (undefined2 **)0x22b2;
            ppuStack_10 = (undefined2 **)0x1b0e;
            FUN_1def_0338();
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            pppuStack_c = (undefined2 ***)0x1b58;
            func_0x00029b55();
            func_0x00029983();
            func_0x000297e6();
            pppuStack_c = (undefined2 ***)0x1b71;
            func_0x00029b55();
            func_0x00029983();
            pppuStack_c = (undefined2 ***)0x0;
            ppuStack_e = (undefined2 **)0x22b2;
            ppuStack_10 = (undefined2 **)0x1b89;
            FUN_1def_0338();
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029bb5();
            puVar15 = (undefined2 *)0x22b2;
            func_0x00029983();
          }
          local_48 = CONCAT11(local_b3,local_b4);
          local_46 = *(undefined1 *)0xb310;
          if ((local_5b4 == 1) && (local_5b2 == 0)) {
            local_656 = local_58;
            local_654 = local_56;
            local_65e = local_54;
            local_65c = local_52;
            local_65a = local_50;
            local_658 = local_4e;
            local_662 = local_4c;
            local_660 = local_4a;
            pppuStack_c = (undefined2 ***)&local_65e;
            ppuStack_e = &local_656;
            ppuStack_12 = (undefined2 **)0x1c6f;
            ppuStack_10 = (undefined2 **)puVar15;
            iVar5 = FUN_4375_c3ef();
            if (iVar5 == 0) goto LAB_3ab8_6edb;
            local_58 = local_656;
            local_56 = local_654;
            local_54 = local_65e;
            local_52 = local_65c;
            local_50 = local_65a;
            local_4e = local_658;
            local_4c = local_662;
            local_4a = local_660;
            ppuStack_e = (undefined2 **)0x1cbd;
            pppuStack_c = (undefined2 ***)puVar15;
            func_0x000185d3();
          }
          puVar15 = &uStack_1e;
          ppuVar10 = &local_58;
          for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar19 = puVar15;
            puVar15 = puVar15 + 1;
            ppuVar20 = ppuVar10;
            ppuVar10 = ppuVar10 + 1;
            *puVar19 = *ppuVar20;
          }
          puVar15 = (undefined2 *)0x11f2;
          uStack_22 = 0x1cd6;
          func_0x00018396();
        }
LAB_3ab8_6edb:
        local_53a = local_53a + (uint)(0xfffe < local_53c);
      }
      local_5c2 = *(uint *)0x14c;
      local_5c0 = *(int *)0x14e;
      if ((local_cc == (undefined2 **)0x3) && (local_ca == (undefined1 *)0x0)) {
        local_53a = 0;
        for (local_53c = 1;
            (local_53a <= local_11c && ((local_53a < local_11c || (local_53c <= local_11e))));
            local_53c = local_53c + 1) {
          local_f4 = local_53c * 3 + local_5c2;
          local_f2 = (local_53a << 1 | (uint)((int)local_53c < 0)) + local_53a +
                     (uint)CARRY2(local_53c * 2,local_53c) + local_5c0 +
                     (uint)CARRY2(local_53c * 3,local_5c2);
          ppuStack_e = (undefined2 **)0x1f15;
          pppuStack_c = (undefined2 ***)puVar15;
          puVar19 = (undefined2 *)func_0x00000271();
          puVar7 = (undefined2 *)puVar19;
          puVar15 = local_116;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar15;
            puVar15 = puVar15 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          puVar15 = local_ec;
          puVar7 = local_116;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar1 = puVar15;
            puVar15 = puVar15 + 1;
            puVar19 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar1 = *puVar19;
          }
          pppuStack_c = (undefined2 ***)0x0;
          ppuStack_e = (undefined2 **)0x1f4a;
          puVar19 = (undefined2 *)func_0x00000271();
          puVar7 = (undefined2 *)puVar19;
          puVar15 = local_628;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar15;
            puVar15 = puVar15 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          local_692 = *(undefined2 *)0xaa18;
          local_690 = (undefined2 **)*(int *)0xaa1a;
          local_68e = *(undefined2 *)0xaa1c;
          local_68c = *(undefined2 *)0xaa1e;
          local_69a = (undefined2 **)*(int *)0xaa18;
          local_698 = *(int *)0xaa1a;
          local_696 = *(int *)0xaa1c;
          local_694 = *(int *)0xaa1e;
          uVar16 = 0;
          if (local_60c == '\0') {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029af6();
            func_0x00029d78();
            func_0x000299b9();
            func_0x00029ae7();
            puVar15 = (undefined2 *)0x22b2;
            FUN_28b3_1181();
            if (!(bool)uVar16) {
              pppuStack_c = (undefined2 ***)local_698;
              ppuStack_e = local_69a;
              ppuStack_10 = (undefined2 **)local_68c;
              ppuStack_12 = (undefined2 **)local_68e;
              ppuStack_14 = local_690;
              uStack_16 = local_692;
              puVar7 = auStack_36;
              puVar15 = local_116;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar1 = puVar7;
                puVar7 = puVar7 + 1;
                puVar19 = puVar15;
                puVar15 = puVar15 + 1;
                *puVar1 = *puVar19;
              }
              uStack_3a = 0x2180;
              puVar7 = (undefined2 *)FUN_21f2_001a();
              puVar15 = local_ec;
              uVar21 = local_d6;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar1 = puVar15;
                puVar15 = puVar15 + 1;
                puVar19 = puVar7;
                puVar7 = puVar7 + 1;
                local_d6 = uVar21;
                *puVar1 = *puVar19;
                uVar21 = local_d6;
              }
LAB_3ab8_7610:
              local_d6 = uVar21;
              func_0x000297e6();
              func_0x00029d78();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0x21a8;
              func_0x000299d1();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0x21b1;
              func_0x000297e6();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0x21b6;
              func_0x00029d78();
              uStack_18 = 0x22b2;
              uStack_1a = 0x21c0;
              func_0x000299d1();
              uStack_18 = 1;
              uStack_1a = 0x22b2;
              uStack_1c = 0x21c9;
              puVar15 = (undefined2 *)func_0x0001e558();
              local_e8 = *puVar15;
              local_e6 = puVar15[1];
              func_0x000297e6();
              pppuStack_c = (undefined2 ***)0x21ee;
              func_0x00029bb5();
              func_0x00029983();
              local_d0 = *(undefined1 *)0xb310;
              if (*(int *)0xcb6 != 0) {
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029983();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029983();
                pppuStack_c = (undefined2 ***)0x22b2;
                ppuStack_e = (undefined2 **)0x224d;
                FUN_1def_0338();
                func_0x000297e6();
                func_0x00029bb5();
                func_0x00029983();
                func_0x000297e6();
                func_0x00029bb5();
                func_0x00029983();
                func_0x000297e6();
                func_0x00029d78();
                FUN_28b3_0f51();
                pppuStack_c = (undefined2 ***)0x22aa;
                uVar21 = func_0x00021eee();
                local_d6 = uVar21;
              }
              if ((local_5b4 == 1) && (local_5b2 == 0)) {
                puVar7 = &uStack_24;
                puVar15 = local_ec;
                for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                  puVar1 = puVar7;
                  puVar7 = puVar7 + 1;
                  puVar19 = puVar15;
                  puVar15 = puVar15 + 1;
                  *puVar1 = *puVar19;
                }
                uStack_28 = 0x22d7;
                func_0x00013c56();
              }
              puVar7 = &uStack_24;
              puVar15 = local_ec;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar1 = puVar7;
                puVar7 = puVar7 + 1;
                puVar19 = puVar15;
                puVar15 = puVar15 + 1;
                *puVar1 = *puVar19;
              }
              puVar15 = (undefined2 *)0x11f2;
              uStack_28 = 0x22ef;
              FUN_12c1_0f1d();
            }
          }
          else {
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c2c();
            func_0x00029b55();
            func_0x000299b9();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0x1fb0;
            func_0x000299d1();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0x1fb5;
            puVar15 = (undefined2 *)func_0x0002a10c();
            local_67a = *puVar15;
            uStack_678 = puVar15[1];
            uStack_676 = puVar15[2];
            uStack_674 = puVar15[3];
            pppuStack_c = (undefined2 ***)local_6a8;
            ppuStack_e = local_6aa;
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0x1fd9;
            piVar6 = (int *)func_0x0002a11e();
            uVar16 = (undefined1 *)0xfff7 < &ppuStack_e;
            local_672 = (undefined2 **)*piVar6;
            local_670 = piVar6[1];
            local_66e = piVar6[2];
            local_66c = piVar6[3];
            func_0x000297e6();
            func_0x00029d78();
            func_0x000299b9();
            FUN_28b3_0ee9();
            func_0x000297e6();
            func_0x00029af6();
            func_0x00029d78();
            func_0x000299d1();
            local_646 = (undefined2 **)
                        CONCAT22(*(undefined2 *)0xa9ea,(undefined2 **)*(undefined2 *)0xa9e8);
            local_642 = *(undefined2 *)0xa9ec;
            local_640 = *(undefined2 *)0xa9ee;
            local_66a = (undefined2 **)*(int *)0xa9e8;
            local_668 = *(int *)0xa9ea;
            local_666 = *(int *)0xa9ec;
            local_664 = *(int *)0xa9ee;
            func_0x00029834();
            func_0x00029834();
            func_0x00029ae7();
            FUN_28b3_1181();
            if ((bool)uVar16) {
              func_0x00029834();
LAB_3ab8_730d:
              func_0x000299d1();
            }
            else {
              func_0x00029834();
              func_0x00029834();
              func_0x00029ae7();
              FUN_28b3_1181();
              if ((bool)uVar16) {
                piVar6 = (int *)0xa9e8;
              }
              else {
                func_0x00029834();
                func_0x00029834();
                func_0x00029ae7();
                FUN_28b3_1181();
                if ((bool)uVar16) {
                  func_0x00029834();
                  func_0x00029c2c();
                  func_0x000299b9();
                  func_0x000299d1();
                }
                else {
                  pppuStack_c = (undefined2 ***)local_670;
                  ppuStack_e = local_672;
                  ppuStack_10 = (undefined2 **)0x22b2;
                  ppuStack_12 = (undefined2 **)0x1d62;
                  func_0x00029834();
                  ppuStack_10 = (undefined2 **)0x22b2;
                  ppuStack_12 = (undefined2 **)0x1d6b;
                  func_0x00029c44();
                  ppuStack_10 = (undefined2 **)0x22b2;
                  ppuStack_12 = (undefined2 **)0x1d74;
                  func_0x000299b9();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0x1d7e;
                  func_0x000299d1();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0x1d83;
                  puVar15 = (undefined2 *)func_0x0002a178();
                  local_646 = (undefined2 **)CONCAT22(puVar15[1],(undefined2 **)*puVar15);
                  local_642 = puVar15[2];
                  local_640 = puVar15[3];
                  pppuStack_c = (undefined2 ***)*(int *)0xaa1a;
                  ppuStack_e = (undefined2 **)*(int *)0xaa18;
                  ppuStack_10 = (undefined2 **)0x22b2;
                  ppuStack_12 = (undefined2 **)0x1dab;
                  func_0x00029834();
                  ppuStack_10 = (undefined2 **)0x22b2;
                  ppuStack_12 = (undefined2 **)0x1db4;
                  func_0x00029c2c();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0x1dbe;
                  func_0x000299d1();
                  uStack_18 = 0x22b2;
                  uStack_1a = 0x1dc3;
                  piVar6 = (int *)func_0x0002a178();
                  local_66a = (undefined2 **)*piVar6;
                  local_668 = piVar6[1];
                  local_666 = piVar6[2];
                  local_664 = piVar6[3];
                }
                func_0x00029834();
                func_0x00029c2c();
                pppuStack_c = (undefined2 ***)local_646._2_2_;
                ppuStack_e = (undefined2 **)local_646;
                ppuStack_10 = (undefined2 **)0x22b2;
                ppuStack_12 = (undefined2 **)0x1df9;
                func_0x0002a11e();
                func_0x00029c2c();
                pppuStack_c = (undefined2 ***)local_646._2_2_;
                ppuStack_e = (undefined2 **)local_646;
                ppuStack_10 = (undefined2 **)0x22b2;
                ppuStack_12 = (undefined2 **)0x1e18;
                func_0x0002a10c();
                func_0x00029834();
                func_0x00029c2c();
                FUN_28b3_1163();
                func_0x00029af6();
                func_0x000299d1();
                func_0x00029834();
                pppuStack_c = (undefined2 ***)local_668;
                ppuStack_e = local_66a;
                ppuStack_10 = (undefined2 **)0x22b2;
                ppuStack_12 = (undefined2 **)0x1e5c;
                func_0x0002a10c();
                uVar16 = (undefined1 *)0xfff7 < &ppuStack_e;
                uVar18 = &stack0x0000 == (undefined1 *)0x6;
                func_0x00029834();
                func_0x000299b9();
                func_0x00029ae7();
                FUN_28b3_1181();
                if (!(bool)uVar16 && !(bool)uVar18) {
                  func_0x00029834();
                  func_0x00029c44();
                  goto LAB_3ab8_730d;
                }
                piVar6 = (int *)0xaa18;
              }
              local_69a = (undefined2 **)*piVar6;
              local_698 = piVar6[1];
              local_696 = piVar6[2];
              local_694 = piVar6[3];
            }
            func_0x00029834();
            func_0x00029834();
            func_0x00029ae7();
            puVar15 = (undefined2 *)0x22b2;
            FUN_28b3_1181();
            if (!(bool)uVar16) {
              func_0x00029834();
              func_0x00029c44();
              FUN_28b3_0f51();
              pppuStack_c = (undefined2 ***)0x22b2;
              ppuStack_e = (undefined2 **)0x2094;
              ppuVar20 = (undefined2 **)func_0x00021eee();
              local_100 = ppuVar20;
              pppuStack_c = (undefined2 ***)local_698;
              ppuStack_e = local_69a;
              ppuStack_10 = (undefined2 **)local_68c;
              ppuStack_12 = (undefined2 **)local_68e;
              ppuStack_14 = local_690;
              uStack_16 = local_692;
              puVar7 = auStack_36;
              puVar15 = local_116;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar1 = puVar7;
                puVar7 = puVar7 + 1;
                puVar19 = puVar15;
                puVar15 = puVar15 + 1;
                *puVar1 = *puVar19;
              }
              uStack_3a = 0x20d3;
              puVar7 = (undefined2 *)FUN_21f2_001a();
              puVar15 = local_ec;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar1 = puVar15;
                puVar15 = puVar15 + 1;
                puVar19 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar1 = *puVar19;
              }
              func_0x00029834();
              func_0x00029c44();
              FUN_28b3_0f51();
              pppuStack_c = (undefined2 ***)0x22b2;
              ppuStack_e = (undefined2 **)0x210b;
              uVar21 = func_0x00021eee();
              goto LAB_3ab8_7610;
            }
          }
          local_53a = local_53a + (uint)(0xfffe < local_53c);
        }
      }
      if ((local_5b4 != 1) || (local_5b2 != 0)) {
LAB_3ab8_82ff:
        pppuStack_c = (undefined2 ***)0x0;
        ppuStack_e = (undefined2 **)0x3;
        ppuStack_12 = (undefined2 **)0x2e93;
        ppuStack_10 = (undefined2 **)puVar15;
        func_0x0000f2cb();
        func_0x0000a799();
        FUN_1885_2ec3();
        local_8e = *(int *)0xa6c;
        local_8c = local_8e >> 0xf;
        *(undefined2 *)0xa6c = 9;
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029983();
        pppuStack_c = (undefined2 ***)0x0;
        ppuStack_e = (undefined2 **)0x22b2;
        ppuStack_10 = (undefined2 **)0x2f03;
        FUN_1def_0338();
        func_0x000297e6();
        pppuStack_c = (undefined2 ***)0x2f19;
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        pppuStack_c = (undefined2 ***)0x2f32;
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029983();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029983();
        pppuStack_c = (undefined2 ***)0x0;
        ppuStack_e = (undefined2 **)0x22b2;
        ppuStack_10 = (undefined2 **)0x2f77;
        FUN_1def_0338();
        pppuStack_c = (undefined2 ***)0x2f87;
        func_0x000297e6();
        pppuStack_c = (undefined2 ***)0x22b2;
        ppuStack_e = (undefined2 **)0x2f91;
        func_0x00029bb5();
        pppuStack_c = (undefined2 ***)0x2f97;
        func_0x0002996b();
        pppuStack_c = (undefined2 ***)0x2f9c;
        func_0x00029d78();
        ppuStack_12 = (undefined2 **)0x22b2;
        ppuStack_14 = (undefined2 **)0x2fa6;
        func_0x000299d1();
        ppuStack_12 = (undefined2 **)0x22b2;
        ppuStack_14 = (undefined2 **)0x2faf;
        func_0x000297e6();
        ppuStack_12 = (undefined2 **)local_6a2;
        ppuStack_14 = (undefined2 **)0x22b2;
        uStack_16 = 0x2fb9;
        func_0x00029bb5();
        ppuStack_12 = (undefined2 **)0x22b2;
        ppuStack_14 = (undefined2 **)0x2fbf;
        func_0x0002996b();
        ppuStack_12 = (undefined2 **)0x22b2;
        ppuStack_14 = (undefined2 **)0x2fc4;
        func_0x00029d78();
        uStack_1a = 0x22b2;
        uStack_1c = 0x2fce;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        uStack_1c = 0x2fd7;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        uStack_1c = 0x2fdc;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        uStack_24 = 0x2fe6;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        uStack_24 = 0x2fef;
        func_0x000297e6();
        uStack_22 = 0x22b2;
        uStack_24 = 0x2ff4;
        func_0x00029d78();
        uStack_2a = 0x22b2;
        uStack_2c = 0x2ffe;
        func_0x000299d1();
        uStack_2a = 0x22b2;
        uStack_2c = 0x3003;
        func_0x0001e18f();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029983();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029bb5();
        func_0x0002996b();
        func_0x00029983();
        pppuStack_c = (undefined2 ***)0x0;
        ppuStack_e = (undefined2 **)0x22b2;
        ppuStack_10 = (undefined2 **)0x3060;
        FUN_1def_0338();
        func_0x000297e6();
        pppuStack_c = (undefined2 ***)0x3076;
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        pppuStack_c = (undefined2 ***)0x308f;
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029983();
        pppuStack_c = (undefined2 ***)0x0;
        ppuStack_e = (undefined2 **)0x22b2;
        ppuStack_10 = (undefined2 **)0x30d4;
        FUN_1def_0338();
        pppuStack_c = (undefined2 ***)0x30e4;
        func_0x000297e6();
        pppuStack_c = (undefined2 ***)0x22b2;
        ppuStack_e = (undefined2 **)0x30ee;
        func_0x00029bb5();
        pppuStack_c = (undefined2 ***)0x30f4;
        func_0x0002996b();
        pppuStack_c = (undefined2 ***)0x30f9;
        func_0x00029d78();
        ppuStack_12 = (undefined2 **)0x22b2;
        ppuStack_14 = (undefined2 **)0x3103;
        func_0x000299d1();
        ppuStack_12 = (undefined2 **)0x22b2;
        ppuStack_14 = (undefined2 **)0x310c;
        func_0x000297e6();
        ppuStack_12 = (undefined2 **)local_6a2;
        ppuStack_14 = (undefined2 **)0x22b2;
        uStack_16 = 0x3116;
        func_0x00029bb5();
        ppuStack_12 = (undefined2 **)0x22b2;
        ppuStack_14 = (undefined2 **)0x311c;
        func_0x0002996b();
        ppuStack_12 = (undefined2 **)0x22b2;
        ppuStack_14 = (undefined2 **)0x3121;
        func_0x00029d78();
        uStack_1a = 0x22b2;
        uStack_1c = 0x312b;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        uStack_1c = 0x3134;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        uStack_1c = 0x3139;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        uStack_24 = 0x3143;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        uStack_24 = 0x314c;
        func_0x000297e6();
        uStack_22 = 0x22b2;
        uStack_24 = 0x3151;
        func_0x00029d78();
        uStack_2a = 0x22b2;
        uStack_2c = 0x315b;
        func_0x000299d1();
        uStack_2a = 0x22b2;
        puVar13 = (undefined1 *)0x1bb4;
        uStack_2c = 0x3160;
        func_0x0001e18f();
        *(int *)0xa6c = local_8e;
        if ((local_cc == (undefined2 **)0x2) && (uVar16 = 0, local_ca == (undefined1 *)0x0)) {
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029bb5();
          func_0x00029b6d();
          FUN_28b3_0d8b();
          FUN_28b3_1168();
          func_0x0002996b();
          FUN_28b3_0ee9();
          local_672 = (undefined2 **)(*(int *)0xa5c + 2);
          uVar18 = local_672 == (undefined2 **)0x0;
          FUN_28b3_0d8b();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029b6d();
          FUN_28b3_0d8b();
          FUN_28b3_117c();
          func_0x0002996b();
          puVar13 = (undefined1 *)0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar16 && !(bool)uVar18) {
            local_672 = (undefined2 **)(*(int *)0x1b3e + -1);
            FUN_28b3_0d8b();
            func_0x000297e6();
            puVar13 = (undefined1 *)0x22b2;
            FUN_28b3_1181();
            if ((bool)uVar16) {
              local_672 = (undefined2 **)(*(int *)0xa5e + 2);
              uVar18 = local_672 == (undefined2 **)0x0;
              FUN_28b3_0d8b();
              func_0x000297e6();
              puVar13 = (undefined1 *)0x22b2;
              FUN_28b3_1181();
              if (!(bool)uVar16 && !(bool)uVar18) {
                local_672 = (undefined2 **)(*(int *)0xa60 + -2);
                FUN_28b3_0d8b();
                func_0x000297e6();
                puVar13 = (undefined1 *)0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar16) {
                  pppuStack_c = (undefined2 ***)*(undefined2 *)0xa9ee;
                  ppuStack_e = (undefined2 **)*(undefined2 *)0xa9ec;
                  ppuStack_10 = (undefined2 **)*(int *)0xa9ea;
                  ppuStack_12 = (undefined2 **)*(undefined2 *)0xa9e8;
                  ppuStack_14 = (undefined2 **)*(undefined2 *)0xa9ee;
                  uStack_16 = *(undefined2 *)0xa9ec;
                  uStack_18 = *(undefined2 *)0xa9ea;
                  uStack_1a = *(undefined2 *)0xa9e8;
                  uStack_1c = *(undefined2 *)0xaa1e;
                  uStack_1e = *(undefined2 *)0xaa1c;
                  uStack_22 = *(undefined2 *)0xaa18;
                  uStack_24 = 0;
                  local_68a[0] = (undefined2 *)0x2;
                  uStack_28 = *(undefined2 *)0xaac2;
                  uStack_2a = *(undefined2 *)0xaac0;
                  uStack_2c = *(undefined2 *)0xaabe;
                  uStack_2e = *(undefined2 *)0xaabc;
                  uStack_30 = 0x22b2;
                  uStack_32 = 0x32ca;
                  func_0x000297e6();
                  uStack_30 = 0x22b2;
                  uStack_32 = 0x32cf;
                  func_0x00029d78();
                  uStack_3a = 0x32d9;
                  func_0x000299d1();
                  uStack_3a = 0x32e2;
                  func_0x000297e6();
                  uStack_3a = 0x32e7;
                  func_0x00029d78();
                  local_40 = 0x22b2;
                  local_42 = 0x32f1;
                  func_0x000299d1();
                  local_40 = 0x22b2;
                  puVar13 = (undefined1 *)0xdef;
                  local_42 = 0x32f6;
                  func_0x0000fd9f();
                }
              }
            }
          }
        }
        puVar14 = puVar13;
        if (*(char *)0x124 == '\0') {
LAB_3ab8_87ad:
          ppuStack_e = (undefined2 **)0x333a;
          pppuStack_c = (undefined2 ***)puVar14;
          func_0x0000c35c();
          func_0x000297e6();
          func_0x00029d78();
          ppuStack_10 = (undefined2 **)0x22b2;
          ppuStack_12 = (undefined2 **)0x3354;
          func_0x000299d1();
          ppuStack_10 = (undefined2 **)0x7796;
          ppuStack_12 = local_5a0;
          ppuStack_14 = (undefined2 **)0x22b2;
          uStack_16 = 0x3362;
          FUN_21f2_3454();
          if (((int)local_ca < 1) && (((int)local_ca < 0 || (local_cc < (undefined2 **)0x3)))) {
            func_0x000297e6();
            func_0x00029d78();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0x3393;
            func_0x000299d1();
            ppuStack_10 = (undefined2 **)0x779d;
            ppuStack_12 = (undefined2 **)local_6c;
            ppuStack_14 = (undefined2 **)0x22b2;
            uStack_16 = 0x33a0;
            FUN_21f2_3454();
            pppuStack_c = (undefined2 ***)0x22b2;
            ppuStack_e = (undefined2 **)0x33b1;
            FUN_21f2_2d26();
            pppuStack_c = (undefined2 ***)0x22b2;
            ppuStack_e = (undefined2 **)0x235e;
            FUN_21f2_2d26();
            ppuStack_e = (undefined2 **)0x11;
          }
          else {
            ppuStack_e = (undefined2 **)0x14;
          }
          pppuStack_c = (undefined2 ***)0x2;
          ppuStack_10 = local_5a0;
          ppuStack_12 = (undefined2 **)0x22b2;
          ppuStack_14 = (undefined2 **)0x238b;
          FUN_1000_02b5();
          func_0x000297e6();
          func_0x00029d78();
          ppuStack_10 = (undefined2 **)0x22b2;
          ppuStack_12 = (undefined2 **)0x23a6;
          func_0x000299d1();
          ppuStack_10 = (undefined2 **)0x77aa;
          ppuStack_12 = local_5a0;
          ppuStack_14 = (undefined2 **)0x22b2;
          uStack_16 = 0x23b4;
          FUN_21f2_3454();
          pppuStack_c = (undefined2 ***)0x2;
          ppuStack_e = (undefined2 **)0x21;
          ppuStack_10 = local_5a0;
          ppuStack_12 = (undefined2 **)0x22b2;
          ppuStack_14 = (undefined2 **)0x23d1;
          FUN_1000_02b5();
          if (((local_cc == (undefined2 **)0x1) && (local_ca == (undefined1 *)0x0)) ||
             ((local_cc == (undefined2 **)0x2 && (local_ca == (undefined1 *)0x0)))) {
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029b85();
            func_0x00029b6d();
            func_0x00029d78();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0x2426;
            func_0x000299d1();
            ppuStack_10 = (undefined2 **)0x77b3;
            ppuStack_12 = local_5a0;
            ppuStack_14 = (undefined2 **)0x22b2;
            uStack_16 = 0x2434;
            FUN_21f2_3454();
            pppuStack_c = (undefined2 ***)0x22b2;
            ppuStack_e = (undefined2 **)0x2451;
            FUN_21f2_2d26();
            pppuStack_c = (undefined2 ***)0x2;
            ppuStack_e = (undefined2 **)0x30;
            ppuStack_10 = local_5a0;
            ppuStack_12 = (undefined2 **)0x22b2;
            ppuStack_14 = (undefined2 **)0x246d;
            FUN_1000_02b5();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029b85();
            func_0x00029b6d();
            func_0x00029af6();
            func_0x00029d78();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0x24a8;
            func_0x000299d1();
            ppuStack_10 = (undefined2 **)0x77c1;
            ppuStack_12 = local_5a0;
            ppuStack_14 = (undefined2 **)0x22b2;
            uStack_16 = 0x24b6;
            FUN_21f2_3454();
            pppuStack_c = (undefined2 ***)0x22b2;
            ppuStack_e = (undefined2 **)0x24d3;
            FUN_21f2_2d26();
            pppuStack_c = (undefined2 ***)0x2;
            ppuStack_e = (undefined2 **)0x3e;
            ppuStack_10 = local_5a0;
            ppuStack_12 = (undefined2 **)0x22b2;
            ppuStack_14 = (undefined2 **)0x24ef;
            FUN_1000_02b5();
            if (local_40 == 0 && local_42 == 0) {
              ppuStack_10 = (undefined2 **)0x77d4;
            }
            else {
              ppuStack_10 = (undefined2 **)0x77cf;
            }
            pppuStack_c = (undefined2 ***)0x2;
            ppuStack_e = (undefined2 **)0x4c;
            ppuStack_12 = (undefined2 **)0xdef;
            ppuStack_14 = (undefined2 **)0x2528;
            FUN_1000_02b5();
          }
          if ((local_cc == (undefined2 **)0x3) && (local_ca == (undefined1 *)0x0)) {
            func_0x000297e6();
            func_0x00029d78();
            ppuStack_10 = (undefined2 **)0x22b2;
            ppuStack_12 = (undefined2 **)0x2551;
            func_0x000299d1();
            ppuStack_10 = (undefined2 **)0x77d9;
            ppuStack_12 = local_5a0;
            ppuStack_14 = (undefined2 **)0x22b2;
            uStack_16 = 0x255f;
            FUN_21f2_3454();
            pppuStack_c = (undefined2 ***)0x2;
            ppuStack_e = (undefined2 **)0x30;
            ppuStack_10 = local_5a0;
            ppuStack_12 = (undefined2 **)0x22b2;
            ppuStack_14 = (undefined2 **)0x257c;
            FUN_1000_02b5();
          }
          if (*(byte *)0xb782 < 4) {
            local_6b2 = 0x11;
            do {
              pppuStack_c = (undefined2 ***)local_6b2;
              ppuStack_e = (undefined2 **)(*(int *)0xa58 + -1);
              ppuStack_10 = (undefined2 **)local_6b2;
              ppuStack_12 = (undefined2 **)0x1;
              ppuStack_14 = (undefined2 **)0xdef;
              uStack_16 = 0x25aa;
              func_0x0000def0();
              local_6b2 = local_6b2 + 1;
            } while (local_6b2 < 0x30);
            pppuStack_c = (undefined2 ***)0x2;
            ppuStack_e = (undefined2 **)0x4;
            ppuStack_10 = (undefined2 **)0x77e2;
            ppuStack_12 = (undefined2 **)0xdef;
            ppuStack_14 = (undefined2 **)0x25cd;
            FUN_1000_02b5();
            pppuStack_c = (undefined2 ***)0x3;
            ppuStack_e = (undefined2 **)0x4;
            ppuStack_10 = (undefined2 **)0x302;
            ppuStack_12 = (undefined2 **)0xdef;
            ppuStack_14 = (undefined2 **)0x25e5;
            FUN_1000_02b5();
          }
          *(undefined2 *)0xc22 = 1;
          pppuStack_c = (undefined2 ***)0xdef;
          ppuStack_e = (undefined2 **)0x2607;
          FUN_21f2_3454();
          pppuStack_c = (undefined2 ***)0x22b2;
          ppuStack_e = (undefined2 **)0x2617;
          FUN_21f2_2d26();
          if (((local_cc == (undefined2 **)0x1) && (local_ca == (undefined1 *)0x0)) ||
             ((local_cc == (undefined2 **)0x2 && (local_ca == (undefined1 *)0x0)))) {
            pppuStack_c = (undefined2 ***)0x22b2;
            ppuStack_e = (undefined2 **)0x2643;
            FUN_21f2_2d26();
          }
          if ((local_cc == (undefined2 **)0x3) && (local_ca == (undefined1 *)0x0)) {
            pppuStack_c = (undefined2 ***)0x22b2;
            ppuStack_e = (undefined2 **)0x2661;
            FUN_21f2_2d26();
          }
          pppuStack_c = (undefined2 ***)0x22b2;
          ppuStack_e = (undefined2 **)0x2671;
          FUN_1def_07a4();
          local_70 = *(int *)0xb310;
          local_6e = local_70 >> 0xf;
          local_5b6 = 0;
          do {
            puVar14 = (undefined1 *)0x11f2;
            pppuStack_c = (undefined2 ***)0x268c;
            iVar5 = func_0x000125f1();
            aiStack_52e[local_5b6 * 2] = iVar5;
            aiStack_52e[local_5b6 * 2 + 1] = iVar5 >> 0xf;
            local_5b6 = local_5b6 + 1;
          } while (local_5b6 < 0x100);
        }
        else {
          pppuStack_c = &local_672;
          ppuStack_e = local_68a;
          puVar14 = (undefined1 *)0x885;
          ppuStack_12 = (undefined2 **)0x3319;
          ppuStack_10 = (undefined2 **)puVar13;
          func_0x0000dcbd();
          if ((local_68a[0] == (undefined2 *)0x0) || (local_672 == (undefined2 **)0x0))
          goto LAB_3ab8_87ad;
        }
        *(undefined1 *)0xc0f = 1;
        pppuStack_c = (undefined2 ***)local_604;
        ppuStack_e = local_5a0;
        ppuStack_10 = (undefined2 **)0x270f;
        ppuStack_14 = (undefined2 **)0x26cc;
        ppuStack_12 = (undefined2 **)puVar14;
        local_5b4 = FUN_1def_0904();
        local_5b2 = local_5b4 >> 0xf;
        *(undefined1 *)0xc0f = 0;
        if (*(char *)0x118 != '\0') {
          *(undefined2 *)0x158 = 0;
          *(undefined1 *)0x118 = 0;
          pppuStack_c = (undefined2 ***)0x26f8;
          func_0x000257c0();
        }
        FUN_1885_2ec3();
        func_0x0000a9df();
        if ((*(int *)0x158 != 0) || ((local_5b4 == -1 && (local_5b2 == -1)))) goto LAB_3ab8_5e72;
        if ((local_5b4 == 1) && (local_5b2 == 0)) {
          if (param_2 != 0) goto LAB_3ab8_5e72;
          local_68a[0] = (undefined2 *)(*(int *)0xb310 % 0x10);
          uVar8 = (int)*(uint *)0xb310 >> 0xf;
          local_5c8 = ((int)((*(uint *)0xb310 ^ uVar8) - uVar8) >> 4 ^ uVar8) - uVar8;
          if (local_5c8 < 10) {
            iVar5 = 0;
          }
          else {
            iVar5 = 7;
          }
          pppuStack_c = (undefined2 ***)(iVar5 + local_5c8 + 0x30);
          ppuStack_e = (undefined2 **)0x60a;
          ppuStack_10 = (undefined2 **)0x783a;
          ppuStack_12 = local_5a0;
          ppuStack_14 = (undefined2 **)0x885;
          uStack_16 = 0x279c;
          local_5e8 = local_68a[0];
          FUN_21f2_3454();
          pppuStack_c = (undefined2 ***)local_604;
          ppuStack_e = local_5a0;
          ppuStack_10 = (undefined2 **)0x270f;
          ppuStack_12 = (undefined2 **)0x22b2;
          puVar15 = (undefined2 *)0x1bb4;
          ppuStack_14 = (undefined2 **)0x27bc;
          local_5c6 = FUN_1def_0904();
          local_5c4 = local_5c6 >> 0xf;
          if (*(char *)0x118 != '\0') {
            *(undefined2 *)0x158 = 0;
            *(undefined1 *)0x118 = 0;
            puVar15 = (undefined2 *)0x22b2;
            pppuStack_c = (undefined2 ***)0x27e3;
            func_0x000257c0();
          }
          if (*(int *)0x158 != 0) goto LAB_3ab8_5e72;
          if (((local_5c6 == 1) && (local_5c4 == 0)) || (local_538 == 1)) {
            local_122 = 1;
            local_120 = 0;
          }
          else {
            local_5b2 = 0;
            local_5b4 = 0;
            if ((local_5c6 != 99) || (local_5c4 != 0)) goto LAB_3ab8_82ff;
            local_5b4 = 99;
          }
        }
        else {
          if ((local_5b4 == 2) && (local_5b2 == 0)) {
            func_0x0000c3ca();
            *(undefined1 *)0xc0f = 1;
            pppuStack_c = (undefined2 ***)local_ca;
            ppuStack_e = local_cc;
            pcVar3 = (code *)swi(0x3f);
            local_8e = (*pcVar3)();
            local_8c = local_8e >> 0xf;
            *(undefined1 *)0xc0f = 0;
            if (*(int *)0x158 != 0) goto LAB_3ab8_5e72;
            if (local_8e == 99) {
              local_5b4 = 99;
              local_5b2 = 0;
            }
          }
          if ((local_5b4 == 99) && (local_5b2 == 0)) {
            puVar15 = (undefined2 *)0x885;
            func_0x0000ac64();
          }
          else {
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029b9d();
            func_0x00029b6d();
            puVar15 = (undefined2 *)0x22b2;
            func_0x00029983();
            if ((local_5b4 == 3) && (uVar16 = 0, local_5b2 == 0)) {
              func_0x000297e6();
              func_0x000297e6();
              pppuStack_c = (undefined2 ***)0x2911;
              func_0x00029b55();
              func_0x0002996b();
              FUN_28b3_1181();
              if ((bool)uVar16) {
                func_0x000297e6();
                func_0x00029bb5();
LAB_3ab8_7db3:
                func_0x00029983();
              }
              goto LAB_3ab8_620e;
            }
            if (local_5b4 == 4) {
              uVar16 = 0;
              uVar18 = local_5b2 == 0;
              if ((bool)uVar18) {
                func_0x000297e6();
                func_0x000297e6();
                pppuStack_c = (undefined2 ***)0x2969;
                func_0x00029bb5();
                func_0x0002996b();
                FUN_28b3_1181();
                if (!(bool)uVar16 && !(bool)uVar18) {
                  func_0x000297e6();
                  FUN_28b3_100d();
                  goto LAB_3ab8_7db3;
                }
                goto LAB_3ab8_620e;
              }
            }
            if ((local_5b4 == 5) && (local_5b2 == 0)) {
              if (local_cc != (undefined2 **)0x3) {
LAB_3ab8_7e92:
                func_0x000297e6();
                pppuStack_c = (undefined2 ***)0x2a25;
                func_0x00029bb5();
                goto LAB_3ab8_7ea5;
              }
              uVar16 = 0;
              uVar18 = local_ca == (undefined1 *)0x0;
              if (!(bool)uVar18) goto LAB_3ab8_7e92;
              func_0x000297e6();
              pppuStack_c = (undefined2 ***)0x29bf;
              func_0x00029bb5();
              func_0x00029983();
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar16) {
                uVar11 = *(undefined2 *)0xaa9e;
                *(undefined2 *)0x7860 = *(undefined2 *)0xaa9c;
                *(undefined2 *)0x7862 = uVar11;
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar16 && !(bool)uVar18) {
                uVar11 = *(undefined2 *)0xaacc;
                uVar12 = *(undefined2 *)0xaace;
LAB_3ab8_7f5a:
                *(undefined2 *)0x7864 = uVar11;
                *(undefined2 *)0x7866 = uVar12;
              }
LAB_3ab8_7f61:
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c2c();
              func_0x0002996b();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029d78();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0x2b22;
              func_0x000299d1();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0x2b27;
              func_0x0002a10c();
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0x2b49;
              func_0x000299d1();
              ppuStack_10 = (undefined2 **)0x22b2;
              ppuStack_12 = (undefined2 **)0x2b4e;
              func_0x0002a11e();
              func_0x00029c44();
              func_0x000297e6();
              func_0x00029af6();
              func_0x00029d78();
              func_0x00029c9d();
              func_0x00029983();
LAB_3ab8_7ff9:
              uVar11 = *(undefined2 *)0xa9f0;
              uVar12 = *(undefined2 *)0xa9f2;
            }
            else {
              if ((local_5b4 != 6) || (local_5b2 != 0)) {
                if (((local_cc == (undefined2 **)0x3) && (local_ca == (undefined1 *)0x0)) &&
                   (((local_5b4 == 7 && (local_5b2 == 0)) || ((local_5b4 == 8 && (local_5b2 == 0))))
                   )) {
                  uVar16 = 0;
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if ((bool)uVar16) {
                    uVar11 = *(undefined2 *)0xaa9e;
                    *(undefined2 *)0x7860 = *(undefined2 *)0xaa9c;
                    *(undefined2 *)0x7862 = uVar11;
                  }
                  if ((local_5b4 == 7) && (local_5b2 == 0)) {
                    local_5f4 = *(undefined2 *)0xa9f0;
                    local_5f2 = *(undefined2 *)0xa9f2;
                    *(undefined2 *)0x7854 = local_5f4;
                    *(undefined2 *)0x7856 = local_5f2;
                    *(undefined2 *)0x7864 = local_5f4;
                    *(undefined2 *)0x7866 = local_5f2;
                    local_5ba = local_5f4;
                    local_5b8 = local_5f2;
                  }
                  if ((local_5b4 == 8) && (local_5b2 == 0)) {
                    uVar11 = *(undefined2 *)0xaad6;
                    *(undefined2 *)0x7854 = *(undefined2 *)0xaad4;
                    *(undefined2 *)0x7856 = uVar11;
                    uVar11 = *(undefined2 *)0xaada;
                    *(undefined2 *)0x7864 = *(undefined2 *)0xaad8;
                    *(undefined2 *)0x7866 = uVar11;
                    func_0x00029834();
                    func_0x00029c2c();
                    func_0x0002996b();
                    func_0x00029983();
                    func_0x000297e6();
                    func_0x00029d78();
                    ppuStack_10 = (undefined2 **)0x22b2;
                    ppuStack_12 = (undefined2 **)0x2c95;
                    func_0x000299d1();
                    ppuStack_10 = (undefined2 **)0x22b2;
                    ppuStack_12 = (undefined2 **)0x2c9a;
                    func_0x0002a10c();
                    func_0x00029834();
                    func_0x000297e6();
                    func_0x00029d78();
                    ppuStack_10 = (undefined2 **)0x22b2;
                    ppuStack_12 = (undefined2 **)0x2cbc;
                    func_0x000299d1();
                    ppuStack_10 = (undefined2 **)0x22b2;
                    ppuStack_12 = (undefined2 **)0x2cc1;
                    func_0x0002a11e();
                    func_0x00029c44();
                    func_0x000297e6();
                    func_0x00029af6();
                    func_0x00029d78();
                    func_0x00029c9d();
                    func_0x00029983();
                    local_5f4 = *(undefined2 *)0xa9f0;
                    local_5f2 = *(undefined2 *)0xa9f2;
                  }
                  goto LAB_3ab8_620e;
                }
                if ((local_5b4 == 7) && (local_5b2 == 0)) {
                  func_0x000297e6();
                  pppuStack_c = (undefined2 ***)0x2d1f;
                  func_0x00029bb5();
                }
                else {
                  if ((local_5b4 != 8) || (local_5b2 != 0)) {
                    if ((local_5b4 == 9) && (local_5b2 == 0)) {
                      bVar17 = 1 < local_42;
                      local_42 = 1 - local_42;
                      local_40 = -(uint)bVar17 - local_40;
                      goto LAB_3ab8_7c8f;
                    }
                    if (local_538 == 0) goto LAB_3ab8_82ff;
                    func_0x000297e6();
                    pppuStack_c = (undefined2 ***)0x2d89;
                    func_0x00029b55();
                    func_0x00029983();
                    func_0x000297e6();
                    pppuStack_c = (undefined2 ***)0x2da2;
                    func_0x00029b55();
                    func_0x00029983();
                    pppuStack_c = (undefined2 ***)0x1;
                    ppuStack_e = (undefined2 **)0x22b2;
                    ppuStack_10 = (undefined2 **)0x2dbb;
                    FUN_1def_0338();
                    func_0x000297e6();
                    func_0x00029bb5();
                    func_0x00029983();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029bb5();
                    puVar15 = (undefined2 *)0x22b2;
                    func_0x00029983();
                    if ((local_cc == (undefined2 **)0x3) && (local_ca == (undefined1 *)0x0))
                    goto LAB_3ab8_7ff9;
                    goto LAB_3ab8_7c8f;
                  }
                  func_0x000297e6();
                  pppuStack_c = (undefined2 ***)0x2d49;
                  func_0x00029b55();
                }
                puVar15 = (undefined2 *)0x22b2;
                func_0x00029983();
                goto LAB_3ab8_7c8f;
              }
              if ((local_cc == (undefined2 **)0x3) && (uVar16 = 0, local_ca == (undefined1 *)0x0)) {
                func_0x000297e6();
                pppuStack_c = (undefined2 ***)0x2a8d;
                func_0x00029b55();
                func_0x00029983();
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar16) {
                  uVar11 = *(undefined2 *)0xaa9e;
                  *(undefined2 *)0x7860 = *(undefined2 *)0xaa9c;
                  *(undefined2 *)0x7862 = uVar11;
                }
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar16) {
                  uVar11 = *(undefined2 *)0xaad0;
                  uVar12 = *(undefined2 *)0xaad2;
                  goto LAB_3ab8_7f5a;
                }
                goto LAB_3ab8_7f61;
              }
              func_0x000297e6();
              pppuStack_c = (undefined2 ***)0x2b96;
              func_0x00029b55();
LAB_3ab8_7ea5:
              puVar15 = (undefined2 *)0x22b2;
              func_0x00029983();
              if ((local_cc != (undefined2 **)0x1) ||
                 (uVar11 = local_5ba, uVar12 = local_5b8, local_ca != (undefined1 *)0x0))
              goto LAB_3ab8_7c8f;
            }
            puVar15 = (undefined2 *)0x22b2;
            local_5f4 = uVar11;
            local_5f2 = uVar12;
          }
        }
LAB_3ab8_7c8f:
        if ((local_5b4 != 99) || (local_5b2 != 0)) goto LAB_3ab8_8843;
        for (local_5b6 = 0; local_5b6 < 0x100; local_5b6 = local_5b6 + 1) {
          puVar15 = (undefined2 *)0x11f2;
          pppuStack_c = (undefined2 ***)0x2e26;
          iVar5 = func_0x000125f1();
          if ((aiStack_52e[local_5b6 * 2] != iVar5) ||
             (aiStack_52e[local_5b6 * 2 + 1] != iVar5 >> 0xf)) {
            pppuStack_c = (undefined2 ***)local_630;
            ppuStack_e = local_634;
            ppuStack_10 = (undefined2 **)local_600;
            ppuStack_12 = (undefined2 **)local_ca;
            ppuStack_14 = local_cc;
            uStack_16 = 0x11f2;
            uStack_18 = 0x2e61;
            iVar5 = FUN_4375_9294();
            if (0 < iVar5) goto LAB_3ab8_620e;
            goto LAB_3ab8_77c1;
          }
        }
        if ((*(int *)0xb310 == local_70) && (*(int *)0xb310 >> 0xf == local_6e)) goto LAB_3ab8_8843;
        goto LAB_3ab8_82ff;
      }
      local_122 = 1;
      local_120 = 0;
      pppuStack_c = (undefined2 ***)0x231d;
      func_0x0000daa6();
      if (*(char *)(*(int *)0xb310 + -0x4b5a) == '\0') {
        *(undefined1 *)(*(int *)0xb310 + -0x4b5a) = 1;
        pppuStack_c = (undefined2 ***)0x2337;
        func_0x0000b1d8();
        pppuStack_c = (undefined2 ***)0x2340;
        func_0x0000daa6();
      }
    }
LAB_3ab8_77c1:
    local_5b4 = -1;
    local_5b2 = -1;
LAB_3ab8_5e72:
    pppuStack_c = (undefined2 ***)0x9fa;
    func_0x0000daa6();
    *(undefined2 *)0x11c = 1;
    func_0x0000a7c5();
    pppuStack_c = (undefined2 ***)0xa0e;
    func_0x0000daa6();
    *(undefined2 *)0xbc0 = 1;
    *(undefined2 *)0xc08 = 0;
    pppuStack_c = (undefined2 ***)0xa20;
    func_0x0001470b();
    *(undefined2 *)0xbc0 = 1;
    if (param_2 != 0) {
      *(undefined2 *)0x11ea = local_f6;
    }
    if (*(int *)0x158 != 0) {
      return 0xfba9;
    }
    if ((param_2 != 0) ||
       (((local_5b4 != -1 || (local_5b2 != -1)) && ((local_5b4 != 1 || (local_5b2 != 0)))))) {
      return 1;
    }
  } while( true );
}


