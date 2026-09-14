/* Ghidra decompilation of jw13.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  101 bytes, 1 callers */

void FUN_3ab8_0000(void)

{
  undefined2 unaff_DS;
  undefined1 local_1a4 [70];
  undefined1 local_15e [34];
  undefined2 local_13c;
  undefined1 auStack_132 [102];
  undefined1 auStack_cc [16];
  undefined1 auStack_bc [2];
  undefined2 local_ba;
  undefined2 local_b8;
  undefined1 auStack_b6 [26];
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 uStack_40;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  
  FUN_21f2_0ebc();
  local_b8 = 0;
  local_ba = 0;
  local_13c = 100;
  puStack_8 = (undefined1 *)0x3ba8;
  puStack_a = local_15e;
  puStack_c = (undefined1 *)0x22b2;
  puStack_e = (undefined1 *)0xabab;
  func_0x00024c86();
  puStack_8 = (undefined1 *)0x3bb1;
  puStack_a = local_1a4;
  puStack_c = (undefined1 *)0x22b2;
  puStack_e = (undefined1 *)0xabbb;
  func_0x00024c86();
  local_9a = 0;
  local_9c = 0;
  puStack_8 = local_15e;
  puStack_a = auStack_132;
  puStack_c = (undefined1 *)0x22b2;
  puStack_e = (undefined1 *)0xc656;
  func_0x00024c86();
  puStack_8 = (undefined1 *)0x2dc;
  puStack_a = auStack_132;
  puStack_c = (undefined1 *)0x22b2;
  puStack_e = (undefined1 *)0xc666;
  FUN_21f2_2d26();
  puStack_8 = (undefined1 *)0x2f0;
  puStack_a = auStack_132;
  puStack_c = (undefined1 *)0x22b2;
  puStack_e = (undefined1 *)0xc676;
  FUN_21f2_2d26();
  puStack_8 = (undefined1 *)0x98a;
  puStack_a = auStack_132;
  puStack_c = (undefined1 *)0x22b2;
  puStack_e = (undefined1 *)0xc686;
  FUN_21f2_2d26();
  puStack_8 = local_1a4;
  puStack_a = auStack_132;
  puStack_c = (undefined1 *)0x22b2;
  puStack_e = (undefined1 *)0xc697;
  FUN_21f2_2d26();
  puStack_8 = (undefined1 *)0x98a;
  puStack_a = auStack_132;
  puStack_c = (undefined1 *)0x22b2;
  puStack_e = (undefined1 *)0xc6a7;
  FUN_21f2_2d26();
  puStack_8 = auStack_132;
  puStack_a = (undefined1 *)0x1;
  puStack_c = (undefined1 *)0x22b2;
  puStack_e = (undefined1 *)0xc6b7;
  FUN_1def_07a4();
  *(undefined2 *)0xc2c = 1;
  *(undefined2 *)0xc20 = 1;
  puStack_8 = auStack_bc;
  puStack_a = auStack_cc;
  puStack_c = auStack_b6;
  puStack_e = auStack_132;
  uStack_10 = local_9c;
  uStack_12 = 0x1bb4;
  uStack_14 = 0xc6df;
  uStack_40 = FUN_1def_0904();
  *(undefined2 *)0xc2c = 0;
  *(undefined2 *)0xc20 = 0;
  if (*(int *)0x158 == 0) {
    FUN_3ab8_0065();
    return;
  }
  return;
}



/* 3ab8:0065  FUN_3ab8_0065  4808 bytes, 1 callers */

void FUN_3ab8_0065(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  int in_AX;
  undefined2 uVar7;
  undefined2 *puVar8;
  int unaff_BP;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined2 *puVar14;
  undefined4 uVar15;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  iVar10 = 0x3ab8;
  if (*(int *)(unaff_BP + -0x3e) == -1) goto LAB_3ab8_0d86;
  if (*(int *)(unaff_BP + -0x3e) == 1) {
    *(undefined2 *)(unaff_BP + -0x98) = 1;
LAB_3ab8_007a:
    *(undefined2 *)(unaff_BP + -0x9a) = 0;
LAB_3ab8_0080:
    if (*(int *)(unaff_BP + -0x98) != 0) {
      uVar12 = false;
      goto LAB_3ab8_015c;
    }
    iStack_6 = 0x3bc2;
    iStack_8 = unaff_BP + -0x130;
    iStack_c = 0xac21;
    iStack_a = iVar10;
    FUN_21f2_3454();
    iStack_6 = unaff_BP + -0x142;
    iStack_8 = unaff_BP + -0x130;
    *(undefined2 *)0xc20 = 1;
    iStack_a = 1;
    iStack_c = 0x22b2;
    iVar10 = 0x1bb4;
    uStack_e = 0xac44;
    iVar11 = FUN_1def_0904();
    *(int *)(unaff_BP + -0xcc) = iVar11;
    *(undefined2 *)0xc20 = 0;
    if (*(int *)0x158 != 0) {
      FUN_3ab8_1b76();
      return;
    }
    if (iVar11 != -1) goto LAB_3ab8_0138;
    goto LAB_3ab8_1ac7;
  }
  if (*(int *)(unaff_BP + -0x3e) == 0x14) {
    FUN_3ab8_1b76();
    return;
  }
  if (*(int *)(unaff_BP + -0xba) != in_AX) {
    iStack_6 = *(int *)(unaff_BP + -0xba);
    iStack_8 = 0x3ab8;
    iVar10 = 0x11f2;
    iStack_a = -0x5380;
    iVar11 = func_0x00015409();
    if (iVar11 != 0) {
      *(undefined2 *)(unaff_BP + -0x98) = 0;
      uVar7 = *(undefined2 *)(unaff_BP + -0xb2);
      *(undefined2 *)(unaff_BP + -0xc6) = *(undefined2 *)(unaff_BP + -0xb4);
      *(undefined2 *)(unaff_BP + -0xc4) = uVar7;
      uVar7 = *(undefined2 *)(unaff_BP + -200);
      *(undefined2 *)(unaff_BP + -0x146) = *(undefined2 *)(unaff_BP + -0xca);
      *(undefined2 *)(unaff_BP + -0x144) = uVar7;
      goto LAB_3ab8_007a;
    }
  }
LAB_3ab8_1ac7:
  iStack_8 = -0x39aa;
  iStack_6 = iVar10;
  func_0x00024c86();
  iStack_6 = 0x22b2;
  iStack_8 = -0x399a;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x398a;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x397a;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x3969;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x3959;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x3949;
  FUN_1def_07a4();
  *(undefined2 *)0xc2c = 1;
  *(undefined2 *)0xc20 = 1;
  iStack_6 = unaff_BP + -0xb4;
  iStack_8 = unaff_BP + -0x130;
  iStack_a = *(undefined2 *)(unaff_BP + -0x9a);
  iStack_c = 0x1bb4;
  uStack_e = 0xc6df;
  uVar7 = FUN_1def_0904();
  *(undefined2 *)(unaff_BP + -0x3e) = uVar7;
  *(undefined2 *)0xc2c = 0;
  *(undefined2 *)0xc20 = 0;
  if (*(int *)0x158 == 0) {
    FUN_3ab8_0065();
    return;
  }
  return;
LAB_3ab8_0138:
  if (*(int *)(unaff_BP + -0xba) != 0) {
    iStack_6 = *(int *)(unaff_BP + -0xba);
    iStack_8 = 0x1bb4;
    iVar10 = 0x11f2;
    iStack_a = -0x532e;
    iVar11 = func_0x00015409();
    uVar12 = iVar11 == 0;
    if (!(bool)uVar12) {
LAB_3ab8_015c:
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar12) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar12) {
          iVar10 = 0x11f2;
          iStack_6 = -0x52e6;
          func_0x00012276();
          goto LAB_3ab8_0080;
        }
      }
LAB_3ab8_103d:
      do {
        func_0x0001bb4e();
        iStack_6 = unaff_BP + -0x15c;
        iStack_8 = 0x3bd0;
        iStack_a = 0x1bb4;
        iVar10 = 0x11f2;
        iStack_c = -0x4428;
        func_0x00012276();
        *(undefined2 *)(unaff_BP + -0x2a) = 0xd8f1;
        while (*(int *)(unaff_BP + -0x98) == 0) {
          *(undefined2 *)0xc20 = 1;
          *(undefined2 *)0xa4a = 1;
          iStack_6 = unaff_BP + -0x174;
          iStack_8 = unaff_BP + -0x3c;
          iStack_a = unaff_BP + -0x2c;
          uStack_e = 0xbc0f;
          iStack_c = iVar10;
          uVar7 = func_0x00006608();
          *(undefined2 *)(unaff_BP + -0xcc) = uVar7;
          *(undefined2 *)0xc20 = 0;
          *(undefined2 *)0xa4a = 0;
          if (*(int *)0x158 != 0) {
LAB_3ab8_10a7:
            FUN_1885_2ec3();
            func_0x00013e19();
            iStack_6 = 0xbc39;
            func_0x0000daa6();
            func_0x0000abfa();
            FUN_3ab8_1b76();
            return;
          }
          if (*(int *)(unaff_BP + -0xcc) == -1) {
            FUN_1885_2ec3();
            iVar10 = 0x11f2;
            func_0x00013e19();
            goto LAB_3ab8_0080;
          }
          if (*(int *)(unaff_BP + -0xcc) == 99) goto LAB_3ab8_103d;
          *(undefined2 *)(unaff_BP + -0xb0) = 0;
          iVar10 = 0x3bf;
          if ((*(int *)(unaff_BP + -0xba) != 0) && (*(int *)(unaff_BP + -0xcc) == 100)) {
            iStack_6 = *(int *)(unaff_BP + -0xba);
            iStack_8 = 0x3bf;
            iVar10 = 0x11f2;
            iStack_a = -0x52a0;
            iVar11 = func_0x00015409();
            if (iVar11 != 0) {
              *(undefined2 *)(unaff_BP + -0xb0) = 1;
              *(undefined2 *)(unaff_BP + -0x2a) = 0xd8f1;
            }
          }
          if ((*(int *)(unaff_BP + -0x2a) != *(int *)(unaff_BP + -0x2c)) ||
             (*(int *)(unaff_BP + -0x3a) != *(int *)(unaff_BP + -0x3c))) {
            *(undefined2 *)(unaff_BP + -0x2a) = *(undefined2 *)(unaff_BP + -0x2c);
            *(undefined2 *)(unaff_BP + -0x3a) = *(undefined2 *)(unaff_BP + -0x3c);
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0xada9;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0xadb2;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0xadb7;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0xadc1;
            func_0x000299d1();
            uStack_12 = 0x22b2;
            uStack_14 = 0xadca;
            func_0x000297e6();
            uStack_12 = 0x22b2;
            uStack_14 = 0xadcf;
            func_0x00029d78();
            uStack_1a = 0x22b2;
            uStack_1c = 0xadd9;
            func_0x000299d1();
            uStack_1a = 0x22b2;
            uStack_1c = 0xade2;
            func_0x000297e6();
            uStack_1a = 0x22b2;
            uStack_1c = 0xade7;
            func_0x00029d78();
            func_0x000299d1(0x22b2);
            FUN_1def_043a(0x22b2);
            uVar7 = *(undefined2 *)(unaff_BP + -0x140);
            *(undefined2 *)(unaff_BP + -0x168) = *(undefined2 *)(unaff_BP + -0x142);
            *(undefined2 *)(unaff_BP + -0x166) = uVar7;
            uVar7 = *(undefined2 *)(unaff_BP + -0x176);
            *(undefined2 *)(unaff_BP + -0x1b2) = *(undefined2 *)(unaff_BP + -0x178);
            *(undefined2 *)(unaff_BP + -0x1b0) = uVar7;
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0xae31;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0xae3a;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0xae3f;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0xae49;
            func_0x000299d1();
            uStack_12 = 1;
            uStack_14 = 0x22b2;
            uStack_16 = 0xae52;
            puVar8 = (undefined2 *)FUN_1def_05d1();
            uVar7 = puVar8[1];
            *(undefined2 *)(unaff_BP + -0x164) = *puVar8;
            *(undefined2 *)(unaff_BP + -0x162) = uVar7;
            uVar7 = *(undefined2 *)0x9a42;
            *(undefined2 *)(unaff_BP + -0x1ae) = *(undefined2 *)0x9a40;
            *(undefined2 *)(unaff_BP + -0x1ac) = uVar7;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0xae86;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0xae8f;
            func_0x000297e6();
            uStack_12 = 0x22b2;
            uStack_14 = 0xae99;
            func_0x000299d1();
            uStack_12 = 1;
            uStack_14 = 0x22b2;
            uStack_16 = 0xaea2;
            puVar8 = (undefined2 *)FUN_1def_05d1();
            uVar7 = puVar8[1];
            *(undefined2 *)(unaff_BP + -0x1aa) = *puVar8;
            *(undefined2 *)(unaff_BP + -0x1a8) = uVar7;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0xaec7;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = -0x5130;
            func_0x000297e6();
            uStack_12 = 0x22b2;
            uStack_14 = 0xaeda;
            func_0x000299d1();
            uStack_12 = 1;
            uStack_14 = 0x22b2;
            uStack_16 = 0xaee3;
            puVar8 = (undefined2 *)func_0x0001e558();
            uVar12 = (undefined1 *)0xffed < &uStack_12;
            uVar13 = &stack0x0000 == (undefined1 *)0x0;
            uVar7 = puVar8[1];
            *(undefined2 *)(unaff_BP + -0x434) = *puVar8;
            *(undefined2 *)(unaff_BP + -0x432) = uVar7;
            FUN_1885_2ec3();
            func_0x00013e19();
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar13) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar13) goto LAB_3ab8_03b1;
LAB_3ab8_03e3:
              iVar10 = 0x22b2;
              if (*(int *)(unaff_BP + -0xb0) != 0) {
                iVar10 = 0x11f2;
                iStack_6 = -0x508a;
                func_0x00012276();
              }
            }
            else {
LAB_3ab8_03b1:
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar13) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar13) goto LAB_3ab8_03e3;
              }
              func_0x00029834();
              func_0x000297e6();
              func_0x00029ae7();
              func_0x00029d78();
              iVar10 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar12) {
                *(undefined2 *)(unaff_BP + -6) = 1;
                if (*(int *)(unaff_BP + -0xb0) != 0) {
                  *(undefined2 *)(unaff_BP + -0xa0) = 1;
                  break;
                }
                iStack_6 = 0xb05c;
                func_0x000297e6();
                iStack_6 = -0x4f9f;
                func_0x00029d78();
                iStack_c = 0x22b2;
                uStack_e = 0xb06b;
                func_0x000299d1();
                iStack_c = 0x22b2;
                uStack_e = 0xb074;
                func_0x000297e6();
                iStack_c = 0x22b2;
                uStack_e = 0xb079;
                func_0x00029d78();
                uStack_14 = 0x22b2;
                uStack_16 = 0xb083;
                func_0x000299d1();
                uStack_14 = 0x22b2;
                uStack_16 = 0xb08c;
                func_0x000297e6();
                uStack_14 = 0x22b2;
                uStack_16 = 0xb091;
                func_0x00029d78();
                uStack_1c = 0x22b2;
                uStack_1e = 0xb09b;
                func_0x000299d1();
                uStack_1c = 0x22b2;
                uStack_1e = 0xb0a4;
                func_0x000297e6();
                uStack_1c = 0x22b2;
                uStack_1e = 0xb0a9;
                func_0x00029d78();
                func_0x000299d1(0x22b2);
                iVar10 = 0x1bb4;
                func_0x0001e18f(0x22b2);
              }
              else {
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029b6d();
                func_0x000297e6();
                func_0x00029b6d();
                FUN_28b3_117c();
                func_0x000297e6();
                func_0x00029b6d();
                FUN_28b3_1172();
                func_0x0002996b();
                func_0x00029983();
                func_0x000297e6();
                func_0x00029d78();
                iStack_a = 0x22b2;
                iStack_c = 0xb131;
                func_0x000299d1();
                iStack_a = 0x22b2;
                iStack_c = 0xb13a;
                func_0x000297e6();
                iStack_a = 0x22b2;
                iStack_c = 0xb13f;
                func_0x00029d78();
                iStack_a = 0x22b2;
                iStack_c = 0xb148;
                func_0x00029c2c();
                iStack_a = 0x22b2;
                iStack_c = 0xb151;
                func_0x0002996b();
                iStack_a = 0x22b2;
                iStack_c = 0xb156;
                func_0x00029d78();
                uStack_12 = 0x22b2;
                uStack_14 = 0xb160;
                func_0x000299d1();
                uStack_12 = 0;
                uStack_14 = 0x22b2;
                uStack_16 = 0xb168;
                puVar8 = (undefined2 *)FUN_1def_05d1();
                uVar7 = puVar8[1];
                *(undefined2 *)(unaff_BP + -4) = *puVar8;
                *(undefined2 *)(unaff_BP + -2) = uVar7;
                func_0x000297e6();
                func_0x00029d78();
                iStack_a = 0x22b2;
                iStack_c = 0xb190;
                func_0x000299d1();
                iStack_a = 0x22b2;
                iStack_c = 0xb199;
                func_0x000297e6();
                iStack_a = 0x22b2;
                iStack_c = 0xb19e;
                func_0x00029d78();
                uStack_12 = 0x22b2;
                uStack_14 = 0xb1a8;
                func_0x000299d1();
                uStack_12 = 0;
                uStack_14 = 0x22b2;
                uStack_16 = 0xb1b0;
                puVar8 = (undefined2 *)func_0x0001e558();
                uVar7 = puVar8[1];
                *(undefined2 *)(unaff_BP + -0x38) = *puVar8;
                *(undefined2 *)(unaff_BP + -0x36) = uVar7;
                func_0x00029834();
                func_0x000297e6();
                func_0x00029b6d();
                func_0x000297e6();
                func_0x00029b6d();
                FUN_28b3_117c();
                func_0x00029d78();
                iStack_a = 0x22b2;
                iStack_c = 0xb201;
                func_0x000299d1();
                iStack_a = 0x22b2;
                iStack_c = -0x4dfa;
                FUN_28b3_1582();
                uVar12 = (undefined1 *)0xfff7 < &iStack_8;
                uVar13 = &stack0x0000 == (undefined1 *)0x0;
                func_0x00029834();
                func_0x0002996b();
                func_0x00029d78();
                iVar10 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar12 || (bool)uVar13) {
                  func_0x000297e6();
                  func_0x0002996b();
                  FUN_28b3_0ee9();
                  uVar7 = *(undefined2 *)(unaff_BP + -0x74);
                  *(undefined2 *)(unaff_BP + -0x5e) = *(undefined2 *)(unaff_BP + -0x76);
                  *(undefined2 *)(unaff_BP + -0x5c) = uVar7;
                  func_0x000297e6();
                  func_0x00029d78();
                  iStack_a = 0x22b2;
                  iStack_c = 0xb27a;
                  func_0x000299d1();
                  iStack_a = 0x22b2;
                  iStack_c = 0xb283;
                  func_0x000297e6();
                  iStack_a = 0x22b2;
                  iStack_c = 0xb288;
                  func_0x00029d78();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xb292;
                  func_0x000299d1();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xb29a;
                  func_0x000297e6();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xb29f;
                  func_0x00029d78();
                  uStack_1a = 0x22b2;
                  uStack_1c = 0xb2a9;
                  func_0x000299d1();
                  uStack_1a = 0x22b2;
                  uStack_1c = 0xb2b1;
                  func_0x000297e6();
                  uStack_1a = 0x22b2;
                  uStack_1c = 0xb2b9;
                  func_0x0002996b();
                  uStack_1a = 0x22b2;
                  uStack_1c = 0xb2be;
                  func_0x00029d78();
                  func_0x000299d1(0x22b2);
                  uVar15 = FUN_1000_0718(0x22b2);
                  *(undefined2 *)(unaff_BP + -0xa4) = (int)uVar15;
                  *(undefined2 *)(unaff_BP + -0xa2) = (int)((ulong)uVar15 >> 0x10);
                  func_0x000297e6();
                  func_0x00029d78();
                  iStack_a = 0x22b2;
                  iStack_c = 0xb2f0;
                  func_0x000299d1();
                  iStack_a = 0x22b2;
                  iStack_c = 0xb2f9;
                  func_0x000297e6();
                  iStack_a = 0x22b2;
                  iStack_c = 0xb2fe;
                  func_0x00029d78();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xb308;
                  func_0x000299d1();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xb310;
                  func_0x000297e6();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xb315;
                  func_0x00029d78();
                  uStack_1a = 0x22b2;
                  uStack_1c = 0xb31f;
                  func_0x000299d1();
                  uStack_1a = 0x22b2;
                  uStack_1c = 0xb327;
                  func_0x000297e6();
                  func_0x000299d1(0x22b2);
                  uVar15 = FUN_1000_0718(0x22b2);
                  *(undefined2 *)(unaff_BP + -0xbe) = (int)uVar15;
                  *(undefined2 *)(unaff_BP + -0xbc) = (int)((ulong)uVar15 >> 0x10);
                  func_0x000297e6();
                  func_0x00029d78();
                  iStack_a = 0x22b2;
                  iStack_c = 0xb359;
                  func_0x000299d1();
                  iStack_a = 0x22b2;
                  iStack_c = 0xb362;
                  func_0x000297e6();
                  iStack_a = 0x22b2;
                  iStack_c = -0x4c99;
                  func_0x00029d78();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xb371;
                  func_0x000299d1();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xb379;
                  func_0x000297e6();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xb37e;
                  func_0x00029d78();
                  uStack_1a = 0x22b2;
                  uStack_1c = 0xb388;
                  func_0x000299d1();
                  uStack_1a = 0x22b2;
                  uStack_1c = 0xb390;
                  func_0x000297e6();
                  func_0x000299d1(0x22b2);
                  iVar10 = 0xdef;
                  puVar8 = &uStack_20;
                  uVar15 = FUN_1000_0718(0x22b2);
                  *(undefined2 *)(unaff_BP + -0x72) = (int)uVar15;
                  *(undefined2 *)(unaff_BP + -0x70) = (int)((ulong)uVar15 >> 0x10);
                  uVar3 = *(uint *)(unaff_BP + -0xa4);
                  iVar11 = *(int *)(unaff_BP + -0xa2);
                  *(uint *)(unaff_BP + -0x58) = uVar3;
                  *(int *)(unaff_BP + -0x56) = iVar11;
                  uVar4 = *(uint *)(unaff_BP + -0xbe);
                  iVar5 = *(int *)(unaff_BP + -0xbc);
                  *(uint *)(unaff_BP + -0x54) = uVar4;
                  *(int *)(unaff_BP + -0x52) = iVar5;
                  *(undefined2 *)(unaff_BP + -0x4e) = 0;
                  *(undefined2 *)(unaff_BP + -0x50) = 0;
                  *(undefined2 *)(unaff_BP + -0x5a) = 10000;
                  *(undefined2 *)(unaff_BP + -6) = 0;
                  if (((iVar11 <= iVar5) && ((iVar11 < iVar5 || (uVar3 < uVar4)))) &&
                     ((*(int *)(unaff_BP + -0x70) < iVar11 ||
                      (((*(int *)(unaff_BP + -0x70) <= iVar11 &&
                        (*(uint *)(unaff_BP + -0x72) < uVar3)) ||
                       ((iVar5 <= *(int *)(unaff_BP + -0x70) &&
                        ((iVar5 < *(int *)(unaff_BP + -0x70) ||
                         (uVar4 < *(uint *)(unaff_BP + -0x72))))))))))) {
                    *(uint *)(unaff_BP + -0x58) = uVar4;
                    *(int *)(unaff_BP + -0x56) = iVar5;
                    uVar7 = *(undefined2 *)(unaff_BP + -0xa2);
                    *(undefined2 *)(unaff_BP + -0x54) = *(undefined2 *)(unaff_BP + -0xa4);
                    *(undefined2 *)(unaff_BP + -0x52) = uVar7;
                    *(undefined2 *)(unaff_BP + -6) = 1;
                  }
                  uVar3 = *(uint *)(unaff_BP + -0xa4);
                  iVar11 = *(int *)(unaff_BP + -0xa2);
                  if ((*(int *)(unaff_BP + -0xbc) <= iVar11) &&
                     ((((*(int *)(unaff_BP + -0xbc) < iVar11 ||
                        (*(uint *)(unaff_BP + -0xbe) < uVar3)) &&
                       (*(int *)(unaff_BP + -0x70) <= iVar11)) &&
                      ((*(int *)(unaff_BP + -0x70) < iVar11 || (*(uint *)(unaff_BP + -0x72) < uVar3)
                       ))))) {
                    iVar5 = *(int *)(unaff_BP + -0xbc);
                    if ((iVar5 <= *(int *)(unaff_BP + -0x70)) &&
                       ((iVar5 < *(int *)(unaff_BP + -0x70) ||
                        (*(uint *)(unaff_BP + -0xbe) < *(uint *)(unaff_BP + -0x72))))) {
                      *(uint *)(unaff_BP + -0x58) = *(uint *)(unaff_BP + -0xbe);
                      *(int *)(unaff_BP + -0x56) = iVar5;
                      *(uint *)(unaff_BP + -0x54) = uVar3;
                      *(int *)(unaff_BP + -0x52) = iVar11;
                      *(undefined2 *)(unaff_BP + -6) = 1;
                    }
                  }
                  if (*(int *)(unaff_BP + -0xb0) != 0) {
                    *(undefined2 *)(unaff_BP + -0xa0) = 0;
                    break;
                  }
                  *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xa6c;
                  *(undefined1 *)(unaff_BP + -0x4b) = 9;
                  puVar9 = (undefined2 *)(unaff_BP + -0x66);
                  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
                    puVar2 = puVar8;
                    puVar8 = puVar8 + 1;
                    puVar14 = puVar9;
                    puVar9 = puVar9 + 1;
                    *puVar2 = *puVar14;
                  }
                  iVar10 = 0x11f2;
                  func_0x00013e46(0xdef);
                }
                else {
                  if (*(int *)(unaff_BP + -0xb0) != 0) {
                    iVar10 = 0x11f2;
                    iStack_6 = -0x4dcc;
                    func_0x00012276();
                  }
                  *(undefined2 *)(unaff_BP + -0xb0) = 0;
                }
              }
            }
          }
        }
        if (*(int *)(unaff_BP + -0x98) != 0) goto LAB_3ab8_0951;
        iStack_6 = -0x5039;
        func_0x0000daa6();
        if (*(int *)(unaff_BP + -0xa0) == 0) {
          *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xa6c;
          *(undefined1 *)(unaff_BP + -0x4b) = *(undefined1 *)0xa6a;
          *(undefined1 *)(unaff_BP + -0x4a) = *(undefined1 *)0xb310;
          puVar9 = &uStack_20;
          puVar8 = (undefined2 *)(unaff_BP + -0x66);
          for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            puVar14 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar14;
          }
          iVar10 = 0x11f2;
          iVar11 = FUN_13bf_01c1();
          if (iVar11 != 0) {
            *(undefined2 *)(unaff_BP + -0x9a) = 1;
            *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x9a) * 2 + -0x428) =
                 *(undefined2 *)(unaff_BP + -6);
            goto LAB_3ab8_0951;
          }
          goto LAB_3ab8_103d;
        }
        uVar7 = *(undefined2 *)(unaff_BP + -0xc4);
        *(undefined2 *)(unaff_BP + -0x24) = *(undefined2 *)(unaff_BP + -0xc6);
        *(undefined2 *)(unaff_BP + -0x22) = uVar7;
        uVar7 = *(undefined2 *)(unaff_BP + -0x144);
        *(undefined2 *)(unaff_BP + -0x20) = *(undefined2 *)(unaff_BP + -0x146);
        *(undefined2 *)(unaff_BP + -0x1e) = uVar7;
        uVar7 = *(undefined2 *)(unaff_BP + -0x172);
        *(undefined2 *)(unaff_BP + -0x1c) = *(undefined2 *)(unaff_BP + -0x174);
        *(undefined2 *)(unaff_BP + -0x1a) = uVar7;
        uVar7 = *(undefined2 *)(unaff_BP + -0x42a);
        *(undefined2 *)(unaff_BP + -0x18) = *(undefined2 *)(unaff_BP + -0x42c);
        *(undefined2 *)(unaff_BP + -0x16) = uVar7;
        *(undefined1 *)(unaff_BP + -0x13) = *(undefined1 *)0xa6a;
        *(undefined1 *)(unaff_BP + -0x14) = *(undefined1 *)0xa6c;
        *(undefined1 *)(unaff_BP + -0x12) = *(undefined1 *)0xb310;
        puVar9 = &uStack_16;
        puVar8 = (undefined2 *)(unaff_BP + -0x24);
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar2 = puVar9;
          puVar9 = puVar9 + 1;
          puVar14 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar14;
        }
        iVar10 = 0x11f2;
        uStack_1a = 0xb030;
        iVar11 = FUN_17a6_0cba();
        if (iVar11 != 0) {
          *(undefined2 *)(unaff_BP + -0x9a) = 1;
          *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x9a) * 2 + -0x428) = 0xffff;
LAB_3ab8_0951:
          uVar7 = *(undefined2 *)0x9a40;
          uVar6 = *(undefined2 *)0x9a42;
          *(undefined2 *)(unaff_BP + -0x5f2) = uVar7;
          *(undefined2 *)(unaff_BP + -0x5f0) = uVar6;
          *(undefined2 *)(unaff_BP + -0x5e0) = uVar7;
          *(undefined2 *)(unaff_BP + -0x5de) = uVar6;
          do {
            if (*(int *)(unaff_BP + -0x98) != 1) break;
            iStack_8 = -0x4b00;
            iStack_6 = iVar10;
            func_0x00024c86();
            iStack_6 = 0x22b2;
            iStack_8 = -0x4aef;
            FUN_21f2_2d26();
            iStack_6 = 0x22b2;
            iStack_8 = -0x4adf;
            FUN_21f2_2d26();
            iStack_6 = 0x22b2;
            iStack_8 = -0x4acf;
            FUN_21f2_2d26();
            iStack_6 = unaff_BP + -0x5e0;
            iStack_8 = unaff_BP + -0x130;
            iStack_a = 1;
            iStack_c = 0x22b2;
            iVar10 = 0x1bb4;
            uStack_e = 0xb550;
            iVar11 = FUN_1def_0904();
            *(int *)(unaff_BP + -0xcc) = iVar11;
            if (*(int *)0x158 != 0) {
              FUN_3ab8_1b76();
              return;
            }
            if (iVar11 == -1) goto LAB_3ab8_1ac7;
            if (*(int *)(unaff_BP + -0xba) != 0) {
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xb588;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xb591;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = -0x4a6a;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb5a0;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              iVar10 = 0x11f2;
              uStack_14 = 0xb5a5;
              uVar15 = FUN_13bf_39a0();
              *(undefined2 *)(unaff_BP + -0xb8) = (int)uVar15;
              *(undefined2 *)(unaff_BP + -0xb6) = (int)((ulong)uVar15 >> 0x10);
            }
          } while (*(int *)(unaff_BP + -0xb6) == 0 && *(int *)(unaff_BP + -0xb8) == 0);
LAB_3ab8_0a3d:
          if ((*(int *)(unaff_BP + -0x98) == 1) &&
             (*(int *)(unaff_BP + -0xb6) != 0 || *(int *)(unaff_BP + -0xb8) != 0)) {
            if ((-1 < *(int *)(unaff_BP + -0xb6)) &&
               ((0 < *(int *)(unaff_BP + -0xb6) || (*(int *)(unaff_BP + -0xb8) != 0)))) {
              iStack_8 = -0x4a0c;
              iStack_6 = iVar10;
              puVar14 = (undefined2 *)func_0x0000013f();
              puVar9 = (undefined2 *)puVar14;
              puVar8 = (undefined2 *)(unaff_BP + -0x24);
              for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
                puVar1 = puVar8;
                puVar8 = puVar8 + 1;
                puVar2 = puVar9;
                puVar9 = puVar9 + 1;
                *puVar1 = *puVar2;
              }
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xb61d;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xb625;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = -0x49d6;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb634;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb63c;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb641;
              func_0x00029d78();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb64b;
              func_0x000299d1();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb653;
              func_0x000297e6();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb658;
              func_0x00029d78();
              func_0x000299d1(0x22b2);
              iVar10 = 0x1bb4;
              iVar11 = FUN_1def_043a(0x22b2);
              if (iVar11 == 0) goto LAB_3ab8_0951;
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xb689;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xb692;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = -0x4969;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb6a1;
              func_0x000299d1();
              uStack_12 = 1;
              uStack_14 = 0x22b2;
              uStack_16 = 0xb6aa;
              puVar8 = (undefined2 *)FUN_1def_05d1();
              uVar12 = (undefined1 *)0xffed < &uStack_12;
              uVar13 = &stack0x0000 == (undefined1 *)0x0;
              uVar7 = puVar8[1];
              *(undefined2 *)(unaff_BP + -4) = *puVar8;
              *(undefined2 *)(unaff_BP + -2) = uVar7;
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029b6d();
              iVar10 = 0x22b2;
              FUN_28b3_1181();
              if (!(bool)uVar12 && !(bool)uVar13) {
                uVar7 = *(undefined2 *)(unaff_BP + -0x22);
                *(undefined2 *)(unaff_BP + -0xac) = *(undefined2 *)(unaff_BP + -0x24);
                *(undefined2 *)(unaff_BP + -0xaa) = uVar7;
                uVar7 = *(undefined2 *)(unaff_BP + -0x1a);
                *(undefined2 *)(unaff_BP + -0x24) = *(undefined2 *)(unaff_BP + -0x1c);
                *(undefined2 *)(unaff_BP + -0x22) = uVar7;
                uVar7 = *(undefined2 *)(unaff_BP + -0xaa);
                *(undefined2 *)(unaff_BP + -0x1c) = *(undefined2 *)(unaff_BP + -0xac);
                *(undefined2 *)(unaff_BP + -0x1a) = uVar7;
                uVar7 = *(undefined2 *)(unaff_BP + -0x1e);
                *(undefined2 *)(unaff_BP + -0xac) = *(undefined2 *)(unaff_BP + -0x20);
                *(undefined2 *)(unaff_BP + -0xaa) = uVar7;
                uVar7 = *(undefined2 *)(unaff_BP + -0x16);
                *(undefined2 *)(unaff_BP + -0x20) = *(undefined2 *)(unaff_BP + -0x18);
                *(undefined2 *)(unaff_BP + -0x1e) = uVar7;
                uVar7 = *(undefined2 *)(unaff_BP + -0xaa);
                *(undefined2 *)(unaff_BP + -0x18) = *(undefined2 *)(unaff_BP + -0xac);
                *(undefined2 *)(unaff_BP + -0x16) = uVar7;
              }
              uVar7 = *(undefined2 *)(unaff_BP + -0x1a);
              *(undefined2 *)(unaff_BP + -0x174) = *(undefined2 *)(unaff_BP + -0x1c);
              *(undefined2 *)(unaff_BP + -0x172) = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x16);
              *(undefined2 *)(unaff_BP + -0x42c) = *(undefined2 *)(unaff_BP + -0x18);
              *(undefined2 *)(unaff_BP + -0x42a) = uVar7;
              *(undefined2 *)(unaff_BP + -0xa0) = 1;
              *(undefined2 *)(unaff_BP + -6) = 1;
              *(undefined2 *)(unaff_BP + -0x9a) = 1;
              *(undefined2 *)(unaff_BP + -0x426) = 0xffff;
            }
            if (*(int *)(unaff_BP + -0xb6) < 0) {
              iStack_8 = -0x4885;
              iStack_6 = iVar10;
              puVar14 = (undefined2 *)func_0x00000271();
              puVar9 = (undefined2 *)puVar14;
              puVar8 = (undefined2 *)(unaff_BP + -0x66);
              for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
                puVar1 = puVar8;
                puVar8 = puVar8 + 1;
                puVar2 = puVar9;
                puVar9 = puVar9 + 1;
                *puVar1 = *puVar2;
              }
              if ((*(int *)(unaff_BP + -0x58) == *(int *)(unaff_BP + -0x54)) &&
                 (*(int *)(unaff_BP + -0x56) == *(int *)(unaff_BP + -0x52))) {
                iVar10 = 0x11f2;
                iStack_6 = -0x485a;
                func_0x00012276();
                goto LAB_3ab8_0951;
              }
              iStack_6 = unaff_BP + -0x46;
              iStack_8 = unaff_BP + -0xe;
              iStack_c = -*(int *)(unaff_BP + -0xb8);
              iStack_a = -(*(int *)(unaff_BP + -0xb6) + (uint)(*(int *)(unaff_BP + -0xb8) != 0));
              uStack_e = 0;
              uStack_10 = 0xb7d0;
              FUN_20a9_0ca3();
              uVar12 = (undefined1 *)0xfff3 < &uStack_e;
              uVar13 = &stack0x0000 == (undefined1 *)0x2;
              iStack_6 = 0xb7db;
              func_0x00029834();
              iStack_6 = 0xb7e4;
              FUN_28b3_100d();
              iStack_6 = 0xb7e9;
              func_0x00029ae7();
              iStack_6 = 0xb7f1;
              func_0x00029834();
              iStack_6 = 0xb7fa;
              FUN_28b3_100d();
              iStack_6 = 0xb7ff;
              func_0x00029ae7();
              iStack_6 = 0xb804;
              FUN_28b3_117c();
              iStack_6 = 0xb80c;
              func_0x0002996b();
              iStack_6 = 0xb814;
              FUN_28b3_0ee9();
              iStack_6 = 0xb81c;
              func_0x00029834();
              iStack_6 = 0xb825;
              FUN_28b3_100d();
              iStack_6 = 0xb82a;
              func_0x00029ae7();
              iStack_6 = 0xb832;
              func_0x00029834();
              iStack_6 = 0xb83b;
              FUN_28b3_100d();
              iStack_6 = 0xb840;
              func_0x00029ae7();
              iStack_6 = 0xb845;
              FUN_28b3_117c();
              iStack_6 = 0xb84d;
              func_0x0002996b();
              iStack_6 = 0xb855;
              func_0x000297e6();
              iStack_6 = 0xb85a;
              FUN_28b3_1181();
              if ((bool)uVar12 || (bool)uVar13) {
                *(undefined2 *)(unaff_BP + -6) = 0;
                iStack_6 = 0xb884;
                func_0x00029834();
                iStack_6 = 0xb88d;
                func_0x00029983();
              }
              else {
                *(undefined2 *)(unaff_BP + -6) = 1;
                iStack_6 = 0xb869;
                func_0x00029834();
                iStack_6 = 0xb872;
                func_0x00029983();
              }
              iStack_6 = 0xb895;
              func_0x00029834();
              iStack_6 = -0x4762;
              func_0x00029983();
              *(undefined2 *)(unaff_BP + -0xa0) = 0;
              *(undefined2 *)(unaff_BP + -0x9a) = 1;
              *(undefined2 *)(unaff_BP + -0x426) = *(undefined2 *)(unaff_BP + -6);
            }
          }
          func_0x0000abfa();
          *(undefined2 *)(unaff_BP + -0xae) = *(undefined2 *)(unaff_BP + -0xa0);
          uVar7 = *(undefined2 *)(unaff_BP + -0x172);
          *(undefined2 *)(unaff_BP + -0x1a6) = *(undefined2 *)(unaff_BP + -0x174);
          *(undefined2 *)(unaff_BP + -0x1a4) = uVar7;
          uVar7 = *(undefined2 *)(unaff_BP + -0x42a);
          *(undefined2 *)(unaff_BP + -0x430) = *(undefined2 *)(unaff_BP + -0x42c);
          *(undefined2 *)(unaff_BP + -0x42e) = uVar7;
          uVar7 = *(undefined2 *)(unaff_BP + -0x172);
          iVar10 = *(int *)(unaff_BP + -0x9a) * 4;
          *(undefined2 *)(unaff_BP + iVar10 + -0x356) = *(undefined2 *)(unaff_BP + -0x174);
          *(undefined2 *)(unaff_BP + iVar10 + -0x354) = uVar7;
          uVar7 = *(undefined2 *)(unaff_BP + -0x42a);
          *(undefined2 *)(unaff_BP + iVar10 + -0x5d8) = *(undefined2 *)(unaff_BP + -0x42c);
          *(undefined2 *)(unaff_BP + iVar10 + -0x5d6) = uVar7;
LAB_3ab8_0d86:
          do {
            *(undefined2 *)(unaff_BP + -0x5ea) = 0;
            *(undefined2 *)(unaff_BP + -0x5f8) = 0;
            *(undefined2 *)(unaff_BP + -0x26) = 0;
LAB_3ab8_0d93:
            if (*(int *)(unaff_BP + -0xae) == 0) {
              uVar7 = *(undefined2 *)(unaff_BP + -0x60);
              *(undefined2 *)(unaff_BP + -0x170) = *(undefined2 *)(unaff_BP + -0x62);
              *(undefined2 *)(unaff_BP + -0x16e) = uVar7;
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xb9a6;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xb9ae;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0xb9b7;
              func_0x0002996b();
              iStack_a = 0x22b2;
              iStack_c = -0x4644;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb9c6;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb9cf;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb9d4;
              func_0x00029d78();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb9de;
              func_0x000299d1();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb9e7;
              func_0x000297e6();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb9ec;
              func_0x00029d78();
              func_0x000299d1(0x22b2);
              FUN_1def_043a(0x22b2);
              uVar7 = *(undefined2 *)0xb76c;
              *(undefined2 *)(unaff_BP + -0xac) = *(undefined2 *)0xb76a;
              *(undefined2 *)(unaff_BP + -0xaa) = uVar7;
              uVar7 = *(undefined2 *)0xb786;
              *(undefined2 *)0xb76a = *(undefined2 *)0xb784;
              *(undefined2 *)0xb76c = uVar7;
              func_0x000297e6();
              func_0x00029af6();
              func_0x00029983();
            }
            else {
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xb931;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xb939;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = -0x46c2;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb948;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb950;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb955;
              func_0x00029d78();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb95f;
              func_0x000299d1();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb967;
              func_0x000297e6();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb96c;
              func_0x00029d78();
              func_0x000299d1(0x22b2);
              FUN_1def_043a(0x22b2);
            }
LAB_3ab8_0eb2:
            func_0x0001bb4e();
            iStack_6 = 0xba3f;
            func_0x00012276();
            iStack_6 = 0xba49;
            func_0x00012276();
            iStack_6 = 0xba53;
            func_0x00012276();
            iStack_6 = 0xba5d;
            func_0x00012276();
            iStack_6 = 0x11f2;
            iStack_8 = -0x4595;
            FUN_1000_0599();
            iStack_6 = 0xba76;
            func_0x00012276();
            iStack_6 = 0xba80;
            func_0x00012276();
            iStack_6 = 0xba8a;
            func_0x00012276();
            iStack_6 = 0xba94;
            func_0x00012276();
            iStack_6 = 0xba9e;
            func_0x00012276();
            iStack_6 = 0xbaa8;
            func_0x00012276();
            iStack_6 = 0xbab2;
            func_0x00012276();
            iStack_6 = 0xbabc;
            func_0x00012276();
            iStack_6 = 0xbac6;
            func_0x00012276();
            iStack_6 = 0xbad0;
            func_0x00012276();
            iStack_6 = 0xbae5;
            func_0x00012276();
            iVar10 = 0x11f2;
            iStack_6 = 0xbaef;
            func_0x00012276();
            *(undefined2 *)(unaff_BP + -0x2a) = 0xd8f1;
LAB_3ab8_0f75:
            *(undefined2 *)0xc20 = 1;
            *(undefined2 *)0xa4a = 1;
            iStack_6 = unaff_BP + -0x5e4;
            iStack_8 = unaff_BP + -0x3c;
            iStack_a = unaff_BP + -0x2c;
            iVar11 = 0x3bf;
            uStack_e = 0xbb1a;
            iStack_c = iVar10;
            uVar7 = func_0x00006608();
            *(undefined2 *)(unaff_BP + -0xcc) = uVar7;
            *(undefined2 *)0xc20 = 0;
            *(undefined2 *)0xa4a = 0;
            if (*(int *)0x158 != 0) goto LAB_3ab8_10a7;
            if ((*(int *)(unaff_BP + -0xcc) != -1) &&
               (*(int *)(unaff_BP + -0x9a) < *(int *)(unaff_BP + -0x13a))) {
              if (*(int *)(unaff_BP + -0xcc) == 99) goto LAB_3ab8_0eb2;
              if ((*(int *)(unaff_BP + -0xba) != 0) && (*(int *)(unaff_BP + -0x3c) < *(int *)0xa5e))
              {
                *(undefined2 *)(unaff_BP + -0xba) = 0;
                if (0x18c < *(int *)(unaff_BP + -0x2c)) {
                  *(undefined2 *)(unaff_BP + -0xcc) = 0x31;
                }
                if (0x1c4 < *(int *)(unaff_BP + -0x2c)) {
                  *(undefined2 *)(unaff_BP + -0xcc) = 0x32;
                }
                if (0x20c < *(int *)(unaff_BP + -0x2c)) {
                  *(undefined2 *)(unaff_BP + -0xcc) = 0x33;
                }
                if (0x244 < *(int *)(unaff_BP + -0x2c)) {
                  *(undefined2 *)(unaff_BP + -0xcc) = 0x34;
                }
              }
              if (*(int *)(unaff_BP + -0xcc) == 0x31) {
                FUN_1885_2ec3();
                iVar10 = 0x11f2;
                func_0x00013e19();
                goto LAB_3ab8_1ac7;
              }
              if (*(int *)(unaff_BP + -0xcc) == 0x32) {
                *(int *)(unaff_BP + -0x5ea) = 1 - *(int *)(unaff_BP + -0x5ea);
                *(undefined2 *)(unaff_BP + -0x2a) = 0xd8f1;
              }
              while (*(int *)(unaff_BP + -0xcc) == 0x33) {
                FUN_1885_2ec3();
                func_0x00013e19();
                *(undefined2 *)(unaff_BP + -0x2a) = 0xd8f1;
                uVar7 = *(undefined2 *)0x3c26;
                uVar6 = *(undefined2 *)0x3c28;
                *(undefined2 *)(unaff_BP + -0x5dc) = uVar7;
                *(undefined2 *)(unaff_BP + -0x5da) = uVar6;
                *(undefined2 *)(unaff_BP + -0x5ee) = uVar7;
                *(undefined2 *)(unaff_BP + -0x5ec) = uVar6;
                func_0x0001bb4e();
                iStack_6 = 0xbdb4;
                func_0x00012276();
                iStack_6 = 0x11f2;
                iStack_8 = -0x423e;
                FUN_1000_0599();
                func_0x000297e6();
                func_0x00029d78();
                iStack_a = 0x22b2;
                iStack_c = 0xbddc;
                func_0x000299d1();
                iStack_a = 0x31e;
                iStack_c = 0x3c01;
                uStack_e = 0x22b2;
                uStack_10 = 0xbde9;
                func_0x00012276();
                iStack_6 = unaff_BP + -0x5f6;
                iStack_8 = unaff_BP + -0x5e4;
                iStack_a = unaff_BP + -0x5ee;
                iStack_c = unaff_BP + -0x5dc;
                uStack_e = 0x11f2;
                iVar11 = 0xad;
                uStack_10 = 0xbe0d;
                iVar10 = func_0x000021a4();
                *(int *)(unaff_BP + -0x148) = iVar10;
                if (*(int *)0x158 != 0) {
                  FUN_3ab8_1b76();
                  return;
                }
                if (iVar10 == -1) goto LAB_3ab8_0eb2;
                if (iVar10 == 0x65) {
                  *(undefined2 *)(unaff_BP + -0x5f8) = 0;
                  goto LAB_3ab8_0eb2;
                }
                if (iVar10 == 0x66) {
                  *(undefined2 *)(unaff_BP + -0x5f8) = 1;
                  goto LAB_3ab8_0eb2;
                }
                uVar12 = 0;
                uVar13 = iVar10 == 0;
                if ((bool)uVar13) {
                  func_0x00029834();
                  func_0x000297e6();
                  func_0x00029d78();
                  FUN_28b3_1181();
                  if (!(bool)uVar12 && !(bool)uVar13) {
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if (!(bool)uVar12) {
                      *(undefined2 *)(unaff_BP + -0x5f8) = 1;
                      uVar7 = *(undefined2 *)(unaff_BP + -0x5da);
                      *(undefined2 *)0x3c26 = *(undefined2 *)(unaff_BP + -0x5dc);
                      *(undefined2 *)0x3c28 = uVar7;
                      goto LAB_3ab8_0eb2;
                    }
                  }
                  iVar11 = 0x22b2;
                }
              }
              if (*(int *)(unaff_BP + -0xcc) == 0x34) goto LAB_3ab8_11f4;
              *(undefined2 *)(unaff_BP + -0xb0) = 0;
              iVar10 = iVar11;
              if ((*(int *)(unaff_BP + -0xba) != 0) && (*(int *)(unaff_BP + -0xcc) == 100)) {
                iStack_6 = *(int *)(unaff_BP + -0xba);
                iVar10 = 0x11f2;
                iStack_a = -0x413e;
                iStack_8 = iVar11;
                iVar11 = func_0x00015409();
                if (iVar11 != 0) {
                  *(undefined2 *)(unaff_BP + -0xb0) = 1;
                  *(undefined2 *)(unaff_BP + -0x2a) = 0xd8f1;
                }
              }
              if ((*(int *)(unaff_BP + -0x2a) == *(int *)(unaff_BP + -0x2c)) &&
                 (*(int *)(unaff_BP + -0x3a) == *(int *)(unaff_BP + -0x3c))) goto LAB_3ab8_0f75;
              *(undefined2 *)(unaff_BP + -0x2a) = *(undefined2 *)(unaff_BP + -0x2c);
              *(undefined2 *)(unaff_BP + -0x3a) = *(undefined2 *)(unaff_BP + -0x3c);
              FUN_1885_2ec3();
              iVar10 = 0x11f2;
              func_0x00013e19();
              if ((*(int *)(unaff_BP + -0x2c) < *(int *)0xa5c) ||
                 ((*(int *)(unaff_BP + -0x3c) < *(int *)0xa5e ||
                  (*(int *)0xa60 < *(int *)(unaff_BP + -0x3c))))) goto LAB_3ab8_0f75;
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xbf2d;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xbf36;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0xbf3b;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0xbf45;
              func_0x000299d1();
              uStack_12 = 1;
              uStack_14 = 0x22b2;
              uStack_16 = 0xbf4e;
              puVar8 = (undefined2 *)FUN_1def_05d1();
              uVar7 = puVar8[1];
              *(undefined2 *)(unaff_BP + -0x1aa) = *puVar8;
              *(undefined2 *)(unaff_BP + -0x1a8) = uVar7;
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xbf81;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xbf8a;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = -0x4071;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0xbf99;
              func_0x000299d1();
              uStack_12 = 1;
              uStack_14 = 0x22b2;
              uStack_16 = 0xbfa2;
              func_0x0001e558();
              uVar12 = (undefined1 *)0xffed < &uStack_12;
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029ae7();
              func_0x00029d78();
              FUN_28b3_1181();
              if (((bool)uVar12) || (*(int *)(unaff_BP + -0x26) == 1)) {
                if (*(int *)(unaff_BP + -0x26) != 0) {
                  iStack_6 = *(undefined2 *)0x9a72;
                  iStack_8 = *(int *)0x9a70;
                  iStack_a = 0x22b2;
                  iStack_c = 0xbfee;
                  func_0x000297e6();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xbff8;
                  func_0x000299d1();
                  uStack_12 = 0;
                  uStack_14 = 0x22b2;
                  uStack_16 = 0xc000;
                  puVar8 = (undefined2 *)FUN_1def_05d1();
                  uVar7 = puVar8[1];
                  *(undefined2 *)(unaff_BP + -0x5e4) = *puVar8;
                  *(undefined2 *)(unaff_BP + -0x5e2) = uVar7;
                  iStack_6 = *(undefined2 *)0x9a72;
                  iStack_8 = *(int *)0x9a70;
                  iStack_a = 0x1bb4;
                  iStack_c = -0x3fd5;
                  func_0x000297e6();
                  uStack_12 = 0x22b2;
                  uStack_14 = 0xc035;
                  func_0x000299d1();
                  uStack_12 = 0;
                  uStack_14 = 0x22b2;
                  uStack_16 = 0xc03d;
                  puVar8 = (undefined2 *)func_0x0001e558();
                  uVar7 = puVar8[1];
                  *(undefined2 *)(unaff_BP + -0x5f6) = *puVar8;
                  *(undefined2 *)(unaff_BP + -0x5f4) = uVar7;
                }
                if (*(int *)(unaff_BP + -0xb0) != 0) {
                  *(undefined2 *)(unaff_BP + -0x28) = 1;
                  *(undefined2 *)(unaff_BP + -0xae) = 1;
                  goto LAB_3ab8_14e3;
                }
                iStack_6 = 0xc0fe;
                func_0x000297e6();
                iStack_6 = 0xc103;
                func_0x00029d78();
                iStack_c = 0x22b2;
                uStack_e = 0xc10d;
                func_0x000299d1();
                iStack_c = 0x22b2;
                uStack_e = 0xc116;
                func_0x000297e6();
                iStack_c = 0x22b2;
                uStack_e = 0xc11b;
                func_0x00029d78();
                uStack_14 = 0x22b2;
                uStack_16 = 0xc125;
                func_0x000299d1();
                uStack_14 = 0x22b2;
                uStack_16 = 0xc12e;
                func_0x000297e6();
                uStack_14 = 0x22b2;
                uStack_16 = 0xc133;
                func_0x00029d78();
                uStack_1c = 0x22b2;
                uStack_1e = 0xc13d;
                func_0x000299d1();
                uStack_1c = 0x22b2;
                uStack_1e = 0xc146;
                func_0x000297e6();
                uStack_1c = 0x22b2;
                uStack_1e = 0xc14b;
                func_0x00029d78();
                func_0x000299d1(0x22b2);
                iVar10 = 0x1bb4;
                func_0x0001e18f(0x22b2);
                goto LAB_3ab8_0f75;
              }
              uVar12 = 0;
              uVar13 = *(int *)(unaff_BP + -0x5f8) == 0;
              if ((bool)uVar13) {
                func_0x000297e6();
                func_0x00029b85();
                func_0x00029af6();
                func_0x0002996b();
                func_0x00029b6d();
                func_0x00029b55();
                func_0x00029b6d();
LAB_3ab8_1677:
                func_0x00029983();
              }
              else {
                func_0x000297e6();
                func_0x00029b6d();
                func_0x00029b9d();
                func_0x0002996b();
                FUN_28b3_0ee9();
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if (!(bool)uVar12 && !(bool)uVar13) {
                  func_0x000297e6();
                  func_0x00029af6();
                  goto LAB_3ab8_1677;
                }
              }
              uVar7 = *(undefined2 *)0x9a42;
              *(undefined2 *)(unaff_BP + -0x5dc) = *(undefined2 *)0x9a40;
              *(undefined2 *)(unaff_BP + -0x5da) = uVar7;
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xc227;
              func_0x000299d1();
              iStack_a = *(undefined2 *)0x9a76;
              iStack_c = *(undefined2 *)0x9a74;
              uStack_e = *(undefined2 *)0x9a72;
              uStack_10 = *(undefined2 *)0x9a70;
              uStack_12 = 0;
              uStack_14 = 0x22b2;
              uStack_16 = 0xc23f;
              puVar8 = (undefined2 *)FUN_1def_05d1();
              uVar7 = puVar8[1];
              *(undefined2 *)(unaff_BP + -4) = *puVar8;
              *(undefined2 *)(unaff_BP + -2) = uVar7;
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xc267;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xc270;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0xc275;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0xc27f;
              func_0x000299d1();
              uStack_12 = 0;
              uStack_14 = 0x22b2;
              uStack_16 = 0xc287;
              puVar8 = (undefined2 *)func_0x0001e558();
              uVar12 = (undefined1 *)0xffed < &uStack_12;
              uVar13 = &stack0x0000 == (undefined1 *)0x0;
              uVar7 = puVar8[1];
              *(undefined2 *)(unaff_BP + -0x38) = *puVar8;
              *(undefined2 *)(unaff_BP + -0x36) = uVar7;
              func_0x000297e6();
              func_0x00029ae7();
              func_0x0002996b();
              FUN_28b3_0ee9();
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              iVar10 = 0x22b2;
              FUN_28b3_1181();
              if (!(bool)uVar12 && !(bool)uVar13) {
                if (*(int *)(unaff_BP + -0xb0) != 0) {
                  iVar10 = 0x11f2;
                  iStack_6 = 0xc2e2;
                  func_0x00012276();
                }
                *(undefined2 *)(unaff_BP + -0xb0) = 0;
                goto LAB_3ab8_0f75;
              }
              func_0x000297e6();
              func_0x0002996b();
              FUN_28b3_0ee9();
              uVar7 = *(undefined2 *)(unaff_BP + -0x74);
              *(undefined2 *)(unaff_BP + -0x8e) = *(undefined2 *)(unaff_BP + -0x76);
              *(undefined2 *)(unaff_BP + -0x8c) = uVar7;
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xc32b;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xc334;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0xc339;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0xc343;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              uStack_14 = 0xc34c;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              uStack_14 = 0xc351;
              func_0x00029d78();
              uStack_1a = 0x22b2;
              uStack_1c = 0xc35b;
              func_0x000299d1();
              uStack_1a = 0x22b2;
              uStack_1c = 0xc363;
              func_0x000297e6();
              uStack_1a = 0x22b2;
              uStack_1c = 0xc36c;
              func_0x0002996b();
              uStack_1a = 0x22b2;
              uStack_1c = 0xc371;
              func_0x00029d78();
              func_0x000299d1(0x22b2);
              uVar15 = FUN_1000_0718(0x22b2);
              uVar7 = (undefined2)((ulong)uVar15 >> 0x10);
              *(undefined2 *)(unaff_BP + -0xa4) = (int)uVar15;
              *(undefined2 *)(unaff_BP + -0xa2) = uVar7;
              *(undefined2 *)(unaff_BP + -0x88) = (int)uVar15;
              *(undefined2 *)(unaff_BP + -0x86) = uVar7;
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xc3ab;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xc3b4;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = -0x3c47;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0xc3c3;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              uStack_14 = 0xc3cc;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              uStack_14 = 0xc3d1;
              func_0x00029d78();
              uStack_1a = 0x22b2;
              uStack_1c = 0xc3db;
              func_0x000299d1();
              uStack_1a = 0x22b2;
              uStack_1c = 0xc3e4;
              func_0x000297e6();
              func_0x000299d1(0x22b2);
              uVar15 = FUN_1000_0718(0x22b2);
              uVar7 = (undefined2)((ulong)uVar15 >> 0x10);
              *(undefined2 *)(unaff_BP + -0xbe) = (int)uVar15;
              *(undefined2 *)(unaff_BP + -0xbc) = uVar7;
              *(undefined2 *)(unaff_BP + -0x84) = (int)uVar15;
              *(undefined2 *)(unaff_BP + -0x82) = uVar7;
              uVar12 = 0;
              uVar13 = 1;
              *(undefined2 *)(unaff_BP + -0x7e) = 0;
              *(undefined2 *)(unaff_BP + -0x80) = 0;
              *(undefined2 *)(unaff_BP + -0x8a) = 10000;
              *(undefined2 *)(unaff_BP + -0x28) = 0;
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (((bool)uVar12 || (bool)uVar13) || (uVar12 = 0, *(int *)(unaff_BP + -6) != 0)) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if (((bool)uVar12) && (*(int *)(unaff_BP + -6) != 0)) goto LAB_3ab8_18d5;
              }
              else {
LAB_3ab8_18d5:
                uVar7 = *(undefined2 *)(unaff_BP + -0xbc);
                *(undefined2 *)(unaff_BP + -0x88) = *(undefined2 *)(unaff_BP + -0xbe);
                *(undefined2 *)(unaff_BP + -0x86) = uVar7;
                uVar7 = *(undefined2 *)(unaff_BP + -0xa2);
                *(undefined2 *)(unaff_BP + -0x84) = *(undefined2 *)(unaff_BP + -0xa4);
                *(undefined2 *)(unaff_BP + -0x82) = uVar7;
                *(undefined2 *)(unaff_BP + -0x28) = 1;
              }
              if (*(int *)(unaff_BP + -0x5ea) != 0) {
                uVar7 = *(undefined2 *)(unaff_BP + -0x86);
                *(undefined2 *)(unaff_BP + -0x160) = *(undefined2 *)(unaff_BP + -0x88);
                *(undefined2 *)(unaff_BP + -0x15e) = uVar7;
                uVar7 = *(undefined2 *)(unaff_BP + -0x82);
                *(undefined2 *)(unaff_BP + -0x88) = *(undefined2 *)(unaff_BP + -0x84);
                *(undefined2 *)(unaff_BP + -0x86) = uVar7;
                uVar7 = *(undefined2 *)(unaff_BP + -0x15e);
                *(undefined2 *)(unaff_BP + -0x84) = *(undefined2 *)(unaff_BP + -0x160);
                *(undefined2 *)(unaff_BP + -0x82) = uVar7;
                *(int *)(unaff_BP + -0x28) = 1 - *(int *)(unaff_BP + -0x28);
              }
              if (*(int *)(unaff_BP + -0xb0) == 0) {
                *(undefined1 *)(unaff_BP + -0x7c) = *(undefined1 *)0xa6c;
                *(undefined1 *)(unaff_BP + -0x7b) = 9;
                puVar9 = &uStack_20;
                puVar8 = (undefined2 *)(unaff_BP + -0x96);
                for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
                  puVar2 = puVar9;
                  puVar9 = puVar9 + 1;
                  puVar14 = puVar8;
                  puVar8 = puVar8 + 1;
                  *puVar2 = *puVar14;
                }
                iVar10 = 0x11f2;
                func_0x00013e46(0x22b2);
                goto LAB_3ab8_0f75;
              }
              puVar8 = (undefined2 *)(unaff_BP + -0x66);
              puVar9 = (undefined2 *)(unaff_BP + -0x96);
              for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
                puVar2 = puVar8;
                puVar8 = puVar8 + 1;
                puVar14 = puVar9;
                puVar9 = puVar9 + 1;
                *puVar2 = *puVar14;
              }
              *(undefined2 *)(unaff_BP + -0xae) = 0;
LAB_3ab8_14e3:
              iStack_6 = -0x3f95;
              func_0x0000daa6();
              if (*(int *)(unaff_BP + -0xae) == 0) {
                *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xa6c;
                *(undefined1 *)(unaff_BP + -0x4b) = *(undefined1 *)0xa6a;
                *(undefined1 *)(unaff_BP + -0x4a) = *(undefined1 *)0xb310;
                puVar9 = &uStack_20;
                puVar8 = (undefined2 *)(unaff_BP + -0x66);
                for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
                  puVar2 = puVar9;
                  puVar9 = puVar9 + 1;
                  puVar14 = puVar8;
                  puVar8 = puVar8 + 1;
                  *puVar2 = *puVar14;
                }
                iVar10 = FUN_13bf_01c1();
                if (iVar10 != 0) {
                  *(int *)(unaff_BP + -0x9a) = *(int *)(unaff_BP + -0x9a) + 1;
                  iVar10 = *(int *)(unaff_BP + -0x28);
                  *(int *)(unaff_BP + *(int *)(unaff_BP + -0x9a) * 2 + -0x428) = iVar10;
                  if (*(int *)(unaff_BP + -0x5f8) != 0) {
                    iStack_6 = unaff_BP + -0x46;
                    iStack_8 = unaff_BP + -0xe;
                    iStack_a = *(int *)0x14e;
                    iStack_c = *(int *)0x14c;
                    uStack_e = 0x11f2;
                    uStack_10 = 0xc564;
                    FUN_20a9_0ca3();
                    if (iVar10 == 0) {
                      iStack_6 = 0xc589;
                      func_0x00029834();
                      iStack_6 = 0xc592;
                      func_0x00029983();
                    }
                    else {
                      iStack_6 = 0xc573;
                      func_0x00029834();
                      iStack_6 = 0xc57c;
                      func_0x00029983();
                    }
                    iStack_6 = 0xc59a;
                    func_0x00029834();
                    iStack_6 = -0x3a5d;
                    func_0x00029983();
                  }
                  goto LAB_3ab8_1a23;
                }
                goto LAB_3ab8_0d93;
              }
              uVar7 = *(undefined2 *)(unaff_BP + -0x1a4);
              *(undefined2 *)(unaff_BP + -0x24) = *(undefined2 *)(unaff_BP + -0x1a6);
              *(undefined2 *)(unaff_BP + -0x22) = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x42e);
              *(undefined2 *)(unaff_BP + -0x20) = *(undefined2 *)(unaff_BP + -0x430);
              *(undefined2 *)(unaff_BP + -0x1e) = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x5e2);
              *(undefined2 *)(unaff_BP + -0x1c) = *(undefined2 *)(unaff_BP + -0x5e4);
              *(undefined2 *)(unaff_BP + -0x1a) = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x5f4);
              *(undefined2 *)(unaff_BP + -0x18) = *(undefined2 *)(unaff_BP + -0x5f6);
              *(undefined2 *)(unaff_BP + -0x16) = uVar7;
              *(undefined1 *)(unaff_BP + -0x13) = *(undefined1 *)0xa6a;
              *(undefined1 *)(unaff_BP + -0x14) = *(undefined1 *)0xa6c;
              *(undefined1 *)(unaff_BP + -0x12) = *(undefined1 *)0xb310;
              puVar9 = &uStack_16;
              puVar8 = (undefined2 *)(unaff_BP + -0x24);
              for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
                puVar2 = puVar9;
                puVar9 = puVar9 + 1;
                puVar14 = puVar8;
                puVar8 = puVar8 + 1;
                *puVar2 = *puVar14;
              }
              uStack_1a = 0xc0d4;
              iVar10 = FUN_17a6_0cba();
              if (iVar10 != 0) goto LAB_3ab8_155e;
              goto LAB_3ab8_0d93;
            }
            FUN_1885_2ec3();
            func_0x00013e19();
            iVar10 = 0x885;
            iStack_6 = -0x44a8;
            func_0x0000daa6();
            if ((*(int *)(unaff_BP + -0x98) != 0) && (*(int *)(unaff_BP + -0x9a) < 2)) {
              *(undefined2 *)(unaff_BP + -0x9a) = 0;
              goto LAB_3ab8_0951;
            }
            if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0x9a) * 2 + -0x428) < 0) {
              uVar7 = *(undefined2 *)0x14a;
              *(undefined2 *)(unaff_BP + -0x5e8) = *(undefined2 *)0x148;
              *(undefined2 *)(unaff_BP + -0x5e6) = uVar7;
              iStack_6 = 0x885;
              iStack_8 = -0x446d;
              func_0x00018779();
            }
            else {
              uVar7 = *(undefined2 *)0x14e;
              *(undefined2 *)(unaff_BP + -0x5e8) = *(undefined2 *)0x14c;
              *(undefined2 *)(unaff_BP + -0x5e6) = uVar7;
              iStack_6 = 0x885;
              iStack_8 = -0x4455;
              FUN_13bf_0327();
            }
            if (*(int *)(unaff_BP + -0x9a) < 2) {
              *(undefined2 *)(unaff_BP + -0x9a) = 0;
              goto LAB_3ab8_103d;
            }
            *(int *)(unaff_BP + -0x9a) = *(int *)(unaff_BP + -0x9a) + -1;
            iVar10 = *(int *)(unaff_BP + *(int *)(unaff_BP + -0x9a) * 2 + -0x428);
            *(int *)(unaff_BP + -6) = iVar10;
            if (iVar10 < 0) {
              *(undefined2 *)(unaff_BP + -0xae) = 1;
              *(undefined2 *)(unaff_BP + -6) = 1;
              iStack_6 = 0x11f2;
              iStack_8 = -0x4392;
              puVar14 = (undefined2 *)func_0x0000013f();
              puVar8 = (undefined2 *)(unaff_BP + -0x24);
              iVar10 = 0xb;
            }
            else {
              *(undefined2 *)(unaff_BP + -0xae) = 0;
              iStack_6 = 0x11f2;
              iStack_8 = -0x436e;
              puVar14 = (undefined2 *)func_0x00000271();
              puVar8 = (undefined2 *)(unaff_BP + -0x66);
              iVar10 = 0x10;
            }
            while( true ) {
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              puVar2 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar2 = *puVar14;
              puVar14 = (undefined2 *)
                        CONCAT22((int)((ulong)puVar14 >> 0x10),(undefined2 *)puVar14 + 1);
            }
            iVar10 = *(int *)(unaff_BP + -0x9a) * 4;
            uVar7 = *(undefined2 *)(unaff_BP + iVar10 + -0x354);
            *(undefined2 *)(unaff_BP + -0x1a6) = *(undefined2 *)(unaff_BP + iVar10 + -0x356);
            *(undefined2 *)(unaff_BP + -0x1a4) = uVar7;
            uVar7 = *(undefined2 *)(unaff_BP + iVar10 + -0x5d6);
            *(undefined2 *)(unaff_BP + -0x430) = *(undefined2 *)(unaff_BP + iVar10 + -0x5d8);
            *(undefined2 *)(unaff_BP + -0x42e) = uVar7;
            iVar10 = 0x885;
            func_0x0000abfa();
          } while ((*(int *)(unaff_BP + -0x9a) != 1) || (*(int *)(unaff_BP + -0x98) == 0));
          goto LAB_3ab8_0a3d;
        }
      } while( true );
    }
  }
  goto LAB_3ab8_0080;
LAB_3ab8_11f4:
  *(int *)(unaff_BP + -0x26) = 1 - *(int *)(unaff_BP + -0x26);
  goto LAB_3ab8_0eb2;
LAB_3ab8_155e:
  *(int *)(unaff_BP + -0x9a) = *(int *)(unaff_BP + -0x9a) + 1;
  *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x9a) * 2 + -0x428) = 0xffff;
LAB_3ab8_1a23:
  func_0x0000abfa();
  *(undefined2 *)(unaff_BP + -6) = *(undefined2 *)(unaff_BP + -0x28);
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029983();
  if (*(int *)(unaff_BP + -0x13a) <= *(int *)(unaff_BP + -0x9a)) {
    iStack_6 = 0xc624;
    func_0x00012276();
    *(undefined2 *)0xc22 = 1;
    iStack_6 = 2;
    iStack_8 = 0x14;
    iStack_a = 0x3c1a;
    iStack_c = 0x11f2;
    iVar10 = 0xdef;
    uStack_e = 0xc644;
    FUN_1000_02b5();
    goto LAB_3ab8_1ac7;
  }
  goto LAB_3ab8_0d86;
}



/* 3ab8:132e  FUN_3ab8_132e  2120 bytes, 1 callers */

/* WARNING: Instruction at (ram,0x0003beaf) overlaps instruction at (ram,0x0003beae)
    */

void FUN_3ab8_132e(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  int iVar9;
  int unaff_BP;
  undefined2 *puVar10;
  int iVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined2 *puVar15;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  iVar9 = 0x3ab8;
code_r0x0003beb3:
  iStack_6 = *(int *)(unaff_BP + -0xba);
  iStack_a = -0x413e;
  iStack_8 = iVar9;
  iVar9 = func_0x00015409();
  iVar11 = 0x11f2;
  if (iVar9 != 0) {
    *(undefined2 *)(unaff_BP + -0xb0) = 1;
    *(undefined2 *)(unaff_BP + -0x2a) = 0xd8f1;
  }
LAB_3ab8_1354:
  if ((*(int *)(unaff_BP + -0x2a) == *(int *)(unaff_BP + -0x2c)) &&
     (*(int *)(unaff_BP + -0x3a) == *(int *)(unaff_BP + -0x3c))) goto LAB_3ab8_0f75;
  *(undefined2 *)(unaff_BP + -0x2a) = *(undefined2 *)(unaff_BP + -0x2c);
  *(undefined2 *)(unaff_BP + -0x3a) = *(undefined2 *)(unaff_BP + -0x3c);
  FUN_1885_2ec3();
  iVar11 = 0x11f2;
  func_0x00013e19();
  if (*(int *)(unaff_BP + -0x2c) < *(int *)0xa5c) goto LAB_3ab8_0f75;
  if (*(int *)(unaff_BP + -0x3c) < *(int *)0xa5e) goto LAB_3ab8_0f75;
  if (*(int *)0xa60 < *(int *)(unaff_BP + -0x3c)) goto LAB_3ab8_0f75;
  func_0x000297e6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0xbf2d;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xbf36;
  func_0x000297e6();
  iStack_a = 0x22b2;
  iStack_c = 0xbf3b;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xbf45;
  func_0x000299d1();
  uStack_12 = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0xbf4e;
  puVar7 = (undefined2 *)FUN_1def_05d1();
  uVar8 = puVar7[1];
  *(undefined2 *)(unaff_BP + -0x1aa) = *puVar7;
  *(undefined2 *)(unaff_BP + -0x1a8) = uVar8;
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0xbf81;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xbf8a;
  func_0x000297e6();
  iStack_a = 0x22b2;
  iStack_c = -0x4071;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xbf99;
  func_0x000299d1();
  uStack_12 = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0xbfa2;
  func_0x0001e558();
  uVar12 = (undefined1 *)0xffed < &uStack_12;
  func_0x000297e6();
  func_0x0002996b();
  func_0x00029ae7();
  func_0x00029d78();
  FUN_28b3_1181();
  if (((bool)uVar12) || (*(int *)(unaff_BP + -0x26) == 1)) {
    if (*(int *)(unaff_BP + -0x26) != 0) {
      iStack_6 = *(undefined2 *)0x9a72;
      iStack_8 = *(int *)0x9a70;
      iStack_a = 0x22b2;
      iStack_c = 0xbfee;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0xbff8;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0xc000;
      puVar7 = (undefined2 *)FUN_1def_05d1();
      uVar8 = puVar7[1];
      *(undefined2 *)(unaff_BP + -0x5e4) = *puVar7;
      *(undefined2 *)(unaff_BP + -0x5e2) = uVar8;
      iStack_6 = *(undefined2 *)0x9a72;
      iStack_8 = *(int *)0x9a70;
      iStack_a = 0x1bb4;
      iStack_c = -0x3fd5;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0xc035;
      func_0x000299d1();
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0xc03d;
      puVar7 = (undefined2 *)func_0x0001e558();
      uVar8 = puVar7[1];
      *(undefined2 *)(unaff_BP + -0x5f6) = *puVar7;
      *(undefined2 *)(unaff_BP + -0x5f4) = uVar8;
    }
    if (*(int *)(unaff_BP + -0xb0) == 0) {
      iStack_6 = 0xc0fe;
      func_0x000297e6();
      iStack_6 = 0xc103;
      func_0x00029d78();
      iStack_c = 0x22b2;
      uStack_e = 0xc10d;
      func_0x000299d1();
      iStack_c = 0x22b2;
      uStack_e = 0xc116;
      func_0x000297e6();
      iStack_c = 0x22b2;
      uStack_e = 0xc11b;
      func_0x00029d78();
      uStack_14 = 0x22b2;
      uStack_16 = 0xc125;
      func_0x000299d1();
      uStack_14 = 0x22b2;
      uStack_16 = 0xc12e;
      func_0x000297e6();
      uStack_14 = 0x22b2;
      uStack_16 = 0xc133;
      func_0x00029d78();
      uStack_1c = 0x22b2;
      uStack_1e = 0xc13d;
      func_0x000299d1();
      uStack_1c = 0x22b2;
      uStack_1e = 0xc146;
      func_0x000297e6();
      uStack_1c = 0x22b2;
      uStack_1e = 0xc14b;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      iVar11 = 0x1bb4;
      func_0x0001e18f(0x22b2);
      goto LAB_3ab8_0f75;
    }
    *(undefined2 *)(unaff_BP + -0x28) = 1;
    *(undefined2 *)(unaff_BP + -0xae) = 1;
  }
  else {
    uVar12 = 0;
    uVar13 = *(int *)(unaff_BP + -0x5f8) == 0;
    if ((bool)uVar13) {
      func_0x000297e6();
      func_0x00029b85();
      func_0x00029af6();
      func_0x0002996b();
      func_0x00029b6d();
      func_0x00029b55();
      func_0x00029b6d();
LAB_3ab8_1677:
      func_0x00029983();
    }
    else {
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b9d();
      func_0x0002996b();
      FUN_28b3_0ee9();
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar12 && !(bool)uVar13) {
        func_0x000297e6();
        func_0x00029af6();
        goto LAB_3ab8_1677;
      }
    }
    uVar8 = *(undefined2 *)0x9a42;
    *(undefined2 *)(unaff_BP + -0x5dc) = *(undefined2 *)0x9a40;
    *(undefined2 *)(unaff_BP + -0x5da) = uVar8;
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0xc227;
    func_0x000299d1();
    iStack_a = *(undefined2 *)0x9a76;
    iStack_c = *(undefined2 *)0x9a74;
    uStack_e = *(undefined2 *)0x9a72;
    uStack_10 = *(undefined2 *)0x9a70;
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xc23f;
    puVar7 = (undefined2 *)FUN_1def_05d1();
    uVar8 = puVar7[1];
    *(undefined2 *)(unaff_BP + -4) = *puVar7;
    *(undefined2 *)(unaff_BP + -2) = uVar8;
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0xc267;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0xc270;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = 0xc275;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xc27f;
    func_0x000299d1();
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xc287;
    puVar7 = (undefined2 *)func_0x0001e558();
    uVar12 = (undefined1 *)0xffed < &uStack_12;
    uVar13 = &stack0x0000 == (undefined1 *)0x0;
    uVar8 = puVar7[1];
    *(undefined2 *)(unaff_BP + -0x38) = *puVar7;
    *(undefined2 *)(unaff_BP + -0x36) = uVar8;
    func_0x000297e6();
    func_0x00029ae7();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    iVar11 = 0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar12 && !(bool)uVar13) {
      if (*(int *)(unaff_BP + -0xb0) != 0) {
        iVar11 = 0x11f2;
        iStack_6 = 0xc2e2;
        func_0x00012276();
      }
      *(undefined2 *)(unaff_BP + -0xb0) = 0;
      goto LAB_3ab8_0f75;
    }
    func_0x000297e6();
    func_0x0002996b();
    FUN_28b3_0ee9();
    uVar8 = *(undefined2 *)(unaff_BP + -0x74);
    *(undefined2 *)(unaff_BP + -0x8e) = *(undefined2 *)(unaff_BP + -0x76);
    *(undefined2 *)(unaff_BP + -0x8c) = uVar8;
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0xc32b;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0xc334;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = 0xc339;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xc343;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xc34c;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xc351;
    func_0x00029d78();
    uStack_1a = 0x22b2;
    uStack_1c = 0xc35b;
    func_0x000299d1();
    uStack_1a = 0x22b2;
    uStack_1c = 0xc363;
    func_0x000297e6();
    uStack_1a = 0x22b2;
    uStack_1c = 0xc36c;
    func_0x0002996b();
    uStack_1a = 0x22b2;
    uStack_1c = 0xc371;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    uVar14 = FUN_1000_0718(0x22b2);
    uVar8 = (undefined2)((ulong)uVar14 >> 0x10);
    *(undefined2 *)(unaff_BP + -0xa4) = (int)uVar14;
    *(undefined2 *)(unaff_BP + -0xa2) = uVar8;
    *(undefined2 *)(unaff_BP + -0x88) = (int)uVar14;
    *(undefined2 *)(unaff_BP + -0x86) = uVar8;
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0xc3ab;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0xc3b4;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = -0x3c47;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xc3c3;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xc3cc;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xc3d1;
    func_0x00029d78();
    uStack_1a = 0x22b2;
    uStack_1c = 0xc3db;
    func_0x000299d1();
    uStack_1a = 0x22b2;
    uStack_1c = 0xc3e4;
    func_0x000297e6();
    func_0x000299d1(0x22b2);
    uVar14 = FUN_1000_0718(0x22b2);
    uVar8 = (undefined2)((ulong)uVar14 >> 0x10);
    *(undefined2 *)(unaff_BP + -0xbe) = (int)uVar14;
    *(undefined2 *)(unaff_BP + -0xbc) = uVar8;
    *(undefined2 *)(unaff_BP + -0x84) = (int)uVar14;
    *(undefined2 *)(unaff_BP + -0x82) = uVar8;
    uVar12 = 0;
    uVar13 = 1;
    *(undefined2 *)(unaff_BP + -0x7e) = 0;
    *(undefined2 *)(unaff_BP + -0x80) = 0;
    *(undefined2 *)(unaff_BP + -0x8a) = 10000;
    *(undefined2 *)(unaff_BP + -0x28) = 0;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (((bool)uVar12 || (bool)uVar13) || (uVar12 = 0, *(int *)(unaff_BP + -6) != 0)) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (((bool)uVar12) && (*(int *)(unaff_BP + -6) != 0)) goto LAB_3ab8_18d5;
    }
    else {
LAB_3ab8_18d5:
      uVar8 = *(undefined2 *)(unaff_BP + -0xbc);
      *(undefined2 *)(unaff_BP + -0x88) = *(undefined2 *)(unaff_BP + -0xbe);
      *(undefined2 *)(unaff_BP + -0x86) = uVar8;
      uVar8 = *(undefined2 *)(unaff_BP + -0xa2);
      *(undefined2 *)(unaff_BP + -0x84) = *(undefined2 *)(unaff_BP + -0xa4);
      *(undefined2 *)(unaff_BP + -0x82) = uVar8;
      *(undefined2 *)(unaff_BP + -0x28) = 1;
    }
    if (*(int *)(unaff_BP + -0x5ea) != 0) {
      uVar8 = *(undefined2 *)(unaff_BP + -0x86);
      *(undefined2 *)(unaff_BP + -0x160) = *(undefined2 *)(unaff_BP + -0x88);
      *(undefined2 *)(unaff_BP + -0x15e) = uVar8;
      uVar8 = *(undefined2 *)(unaff_BP + -0x82);
      *(undefined2 *)(unaff_BP + -0x88) = *(undefined2 *)(unaff_BP + -0x84);
      *(undefined2 *)(unaff_BP + -0x86) = uVar8;
      uVar8 = *(undefined2 *)(unaff_BP + -0x15e);
      *(undefined2 *)(unaff_BP + -0x84) = *(undefined2 *)(unaff_BP + -0x160);
      *(undefined2 *)(unaff_BP + -0x82) = uVar8;
      *(int *)(unaff_BP + -0x28) = 1 - *(int *)(unaff_BP + -0x28);
    }
    if (*(int *)(unaff_BP + -0xb0) == 0) {
      *(undefined1 *)(unaff_BP + -0x7c) = *(undefined1 *)0xa6c;
      *(undefined1 *)(unaff_BP + -0x7b) = 9;
      puVar10 = &uStack_20;
      puVar7 = (undefined2 *)(unaff_BP + -0x96);
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar1 = puVar10;
        puVar10 = puVar10 + 1;
        puVar15 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar1 = *puVar15;
      }
      iVar11 = 0x11f2;
      func_0x00013e46(0x22b2);
      goto LAB_3ab8_0f75;
    }
    puVar7 = (undefined2 *)(unaff_BP + -0x66);
    puVar10 = (undefined2 *)(unaff_BP + -0x96);
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      puVar15 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar1 = *puVar15;
    }
    *(undefined2 *)(unaff_BP + -0xae) = 0;
  }
  iStack_6 = -0x3f95;
  func_0x0000daa6();
  if (*(int *)(unaff_BP + -0xae) == 0) {
    *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xa6c;
    *(undefined1 *)(unaff_BP + -0x4b) = *(undefined1 *)0xa6a;
    *(undefined1 *)(unaff_BP + -0x4a) = *(undefined1 *)0xb310;
    puVar10 = &uStack_20;
    puVar7 = (undefined2 *)(unaff_BP + -0x66);
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar1 = puVar10;
      puVar10 = puVar10 + 1;
      puVar15 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar1 = *puVar15;
    }
    iVar9 = FUN_13bf_01c1();
    if (iVar9 == 0) goto LAB_3ab8_0d93;
    *(int *)(unaff_BP + -0x9a) = *(int *)(unaff_BP + -0x9a) + 1;
    iVar9 = *(int *)(unaff_BP + -0x28);
    *(int *)(unaff_BP + *(int *)(unaff_BP + -0x9a) * 2 + -0x428) = iVar9;
    if (*(int *)(unaff_BP + -0x5f8) != 0) {
      iStack_6 = unaff_BP + -0x46;
      iStack_8 = unaff_BP + -0xe;
      iStack_a = *(int *)0x14e;
      iStack_c = *(int *)0x14c;
      uStack_e = 0x11f2;
      uStack_10 = 0xc564;
      FUN_20a9_0ca3();
      if (iVar9 == 0) {
        iStack_6 = 0xc589;
        func_0x00029834();
        iStack_6 = 0xc592;
        func_0x00029983();
      }
      else {
        iStack_6 = 0xc573;
        func_0x00029834();
        iStack_6 = 0xc57c;
        func_0x00029983();
      }
      iStack_6 = 0xc59a;
      func_0x00029834();
      iStack_6 = -0x3a5d;
      func_0x00029983();
    }
  }
  else {
    uVar8 = *(undefined2 *)(unaff_BP + -0x1a4);
    *(undefined2 *)(unaff_BP + -0x24) = *(undefined2 *)(unaff_BP + -0x1a6);
    *(undefined2 *)(unaff_BP + -0x22) = uVar8;
    uVar8 = *(undefined2 *)(unaff_BP + -0x42e);
    *(undefined2 *)(unaff_BP + -0x20) = *(undefined2 *)(unaff_BP + -0x430);
    *(undefined2 *)(unaff_BP + -0x1e) = uVar8;
    uVar8 = *(undefined2 *)(unaff_BP + -0x5e2);
    *(undefined2 *)(unaff_BP + -0x1c) = *(undefined2 *)(unaff_BP + -0x5e4);
    *(undefined2 *)(unaff_BP + -0x1a) = uVar8;
    uVar8 = *(undefined2 *)(unaff_BP + -0x5f4);
    *(undefined2 *)(unaff_BP + -0x18) = *(undefined2 *)(unaff_BP + -0x5f6);
    *(undefined2 *)(unaff_BP + -0x16) = uVar8;
    *(undefined1 *)(unaff_BP + -0x13) = *(undefined1 *)0xa6a;
    *(undefined1 *)(unaff_BP + -0x14) = *(undefined1 *)0xa6c;
    *(undefined1 *)(unaff_BP + -0x12) = *(undefined1 *)0xb310;
    puVar10 = &uStack_16;
    puVar7 = (undefined2 *)(unaff_BP + -0x24);
    for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar1 = puVar10;
      puVar10 = puVar10 + 1;
      puVar15 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar1 = *puVar15;
    }
    uStack_1a = 0xc0d4;
    iVar9 = FUN_17a6_0cba();
    if (iVar9 == 0) goto LAB_3ab8_0d93;
    *(int *)(unaff_BP + -0x9a) = *(int *)(unaff_BP + -0x9a) + 1;
    *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x9a) * 2 + -0x428) = 0xffff;
  }
  func_0x0000abfa();
  *(undefined2 *)(unaff_BP + -6) = *(undefined2 *)(unaff_BP + -0x28);
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029983();
  if (*(int *)(unaff_BP + -0x9a) < *(int *)(unaff_BP + -0x13a)) {
LAB_3ab8_0d86:
    *(undefined2 *)(unaff_BP + -0x5ea) = 0;
    *(undefined2 *)(unaff_BP + -0x5f8) = 0;
    *(undefined2 *)(unaff_BP + -0x26) = 0;
LAB_3ab8_0d93:
    if (*(int *)(unaff_BP + -0xae) == 0) {
      uVar8 = *(undefined2 *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x170) = *(undefined2 *)(unaff_BP + -0x62);
      *(undefined2 *)(unaff_BP + -0x16e) = uVar8;
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xb9a6;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xb9ae;
      func_0x000297e6();
      iStack_a = 0x22b2;
      iStack_c = 0xb9b7;
      func_0x0002996b();
      iStack_a = 0x22b2;
      iStack_c = -0x4644;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xb9c6;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uStack_14 = 0xb9cf;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0xb9d4;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      uStack_1c = 0xb9de;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      uStack_1c = 0xb9e7;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      uStack_1c = 0xb9ec;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      FUN_1def_043a(0x22b2);
      uVar8 = *(undefined2 *)0xb76c;
      *(undefined2 *)(unaff_BP + -0xac) = *(undefined2 *)0xb76a;
      *(undefined2 *)(unaff_BP + -0xaa) = uVar8;
      uVar8 = *(undefined2 *)0xb786;
      *(undefined2 *)0xb76a = *(undefined2 *)0xb784;
      *(undefined2 *)0xb76c = uVar8;
      func_0x000297e6();
      func_0x00029af6();
      func_0x00029983();
    }
    else {
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xb931;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xb939;
      func_0x000297e6();
      iStack_a = 0x22b2;
      iStack_c = -0x46c2;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xb948;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uStack_14 = 0xb950;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0xb955;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      uStack_1c = 0xb95f;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      uStack_1c = 0xb967;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      uStack_1c = 0xb96c;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      FUN_1def_043a(0x22b2);
    }
LAB_3ab8_0eb2:
    do {
      func_0x0001bb4e();
      iStack_6 = 0xba3f;
      func_0x00012276();
      iStack_6 = 0xba49;
      func_0x00012276();
      iStack_6 = 0xba53;
      func_0x00012276();
      iStack_6 = 0xba5d;
      func_0x00012276();
      iStack_6 = 0x11f2;
      iStack_8 = -0x4595;
      FUN_1000_0599();
      iStack_6 = 0xba76;
      func_0x00012276();
      iStack_6 = 0xba80;
      func_0x00012276();
      iStack_6 = 0xba8a;
      func_0x00012276();
      iStack_6 = 0xba94;
      func_0x00012276();
      iStack_6 = 0xba9e;
      func_0x00012276();
      iStack_6 = 0xbaa8;
      func_0x00012276();
      iStack_6 = 0xbab2;
      func_0x00012276();
      iStack_6 = 0xbabc;
      func_0x00012276();
      iStack_6 = 0xbac6;
      func_0x00012276();
      iStack_6 = 0xbad0;
      func_0x00012276();
      iStack_6 = 0xbae5;
      func_0x00012276();
      iVar11 = 0x11f2;
      iStack_6 = 0xbaef;
      func_0x00012276();
      *(undefined2 *)(unaff_BP + -0x2a) = 0xd8f1;
LAB_3ab8_0f75:
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xa4a = 1;
      iStack_6 = unaff_BP + -0x5e4;
      iStack_8 = unaff_BP + -0x3c;
      iStack_a = unaff_BP + -0x2c;
      iVar9 = 0x3bf;
      uStack_e = 0xbb1a;
      iStack_c = iVar11;
      uVar8 = func_0x00006608();
      *(undefined2 *)(unaff_BP + -0xcc) = uVar8;
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xa4a = 0;
      if (*(int *)0x158 != 0) goto LAB_3ab8_10a7;
      if ((*(int *)(unaff_BP + -0xcc) == -1) ||
         (*(int *)(unaff_BP + -0x13a) <= *(int *)(unaff_BP + -0x9a))) goto LAB_3ab8_0fc6;
      if (*(int *)(unaff_BP + -0xcc) != 99) {
        if ((*(int *)(unaff_BP + -0xba) != 0) && (*(int *)(unaff_BP + -0x3c) < *(int *)0xa5e)) {
          *(undefined2 *)(unaff_BP + -0xba) = 0;
          if (0x18c < *(int *)(unaff_BP + -0x2c)) {
            *(undefined2 *)(unaff_BP + -0xcc) = 0x31;
          }
          if (0x1c4 < *(int *)(unaff_BP + -0x2c)) {
            *(undefined2 *)(unaff_BP + -0xcc) = 0x32;
          }
          if (0x20c < *(int *)(unaff_BP + -0x2c)) {
            *(undefined2 *)(unaff_BP + -0xcc) = 0x33;
          }
          if (0x244 < *(int *)(unaff_BP + -0x2c)) {
            *(undefined2 *)(unaff_BP + -0xcc) = 0x34;
          }
        }
        if (*(int *)(unaff_BP + -0xcc) == 0x31) {
          FUN_1885_2ec3();
          iVar9 = 0x11f2;
          func_0x00013e19();
          goto LAB_3ab8_1ac7;
        }
        if (*(int *)(unaff_BP + -0xcc) == 0x32) {
          *(int *)(unaff_BP + -0x5ea) = 1 - *(int *)(unaff_BP + -0x5ea);
          *(undefined2 *)(unaff_BP + -0x2a) = 0xd8f1;
        }
        while (*(int *)(unaff_BP + -0xcc) == 0x33) {
          FUN_1885_2ec3();
          func_0x00013e19();
          *(undefined2 *)(unaff_BP + -0x2a) = 0xd8f1;
          uVar8 = *(undefined2 *)0x3c26;
          uVar6 = *(undefined2 *)0x3c28;
          *(undefined2 *)(unaff_BP + -0x5dc) = uVar8;
          *(undefined2 *)(unaff_BP + -0x5da) = uVar6;
          *(undefined2 *)(unaff_BP + -0x5ee) = uVar8;
          *(undefined2 *)(unaff_BP + -0x5ec) = uVar6;
          func_0x0001bb4e();
          iStack_6 = 0xbdb4;
          func_0x00012276();
          iStack_6 = 0x11f2;
          iStack_8 = -0x423e;
          FUN_1000_0599();
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          iStack_c = 0xbddc;
          func_0x000299d1();
          iStack_a = 0x31e;
          iStack_c = 0x3c01;
          uStack_e = 0x22b2;
          uStack_10 = 0xbde9;
          func_0x00012276();
          iStack_6 = unaff_BP + -0x5f6;
          iStack_8 = unaff_BP + -0x5e4;
          iStack_a = unaff_BP + -0x5ee;
          iStack_c = unaff_BP + -0x5dc;
          uStack_e = 0x11f2;
          iVar9 = 0xad;
          uStack_10 = 0xbe0d;
          iVar11 = func_0x000021a4();
          *(int *)(unaff_BP + -0x148) = iVar11;
          if (*(int *)0x158 != 0) {
            FUN_3ab8_1b76();
            return;
          }
          if (iVar11 == -1) goto LAB_3ab8_0eb2;
          if (iVar11 == 0x65) {
            *(undefined2 *)(unaff_BP + -0x5f8) = 0;
            goto LAB_3ab8_0eb2;
          }
          if (iVar11 == 0x66) {
            *(undefined2 *)(unaff_BP + -0x5f8) = 1;
            goto LAB_3ab8_0eb2;
          }
          uVar12 = 0;
          uVar13 = iVar11 == 0;
          if ((bool)uVar13) {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if (!(bool)uVar12 && !(bool)uVar13) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar12) {
                *(undefined2 *)(unaff_BP + -0x5f8) = 1;
                uVar8 = *(undefined2 *)(unaff_BP + -0x5da);
                *(undefined2 *)0x3c26 = *(undefined2 *)(unaff_BP + -0x5dc);
                *(undefined2 *)0x3c28 = uVar8;
                goto LAB_3ab8_0eb2;
              }
            }
            iVar9 = 0x22b2;
          }
        }
        if (*(int *)(unaff_BP + -0xcc) != 0x34) {
          *(undefined2 *)(unaff_BP + -0xb0) = 0;
          iVar11 = iVar9;
          if ((*(int *)(unaff_BP + -0xba) == 0) || (*(int *)(unaff_BP + -0xcc) != 100))
          goto LAB_3ab8_1354;
          goto code_r0x0003beb3;
        }
        *(int *)(unaff_BP + -0x26) = 1 - *(int *)(unaff_BP + -0x26);
      }
    } while( true );
  }
  iStack_6 = 0xc624;
  func_0x00012276();
  *(undefined2 *)0xc22 = 1;
  iStack_6 = 2;
  iStack_8 = 0x14;
  iStack_a = 0x3c1a;
  iStack_c = 0x11f2;
  iVar9 = 0xdef;
  uStack_e = 0xc644;
  FUN_1000_02b5();
LAB_3ab8_1ac7:
  iStack_8 = -0x39aa;
  iStack_6 = iVar9;
  func_0x00024c86();
  iStack_6 = 0x22b2;
  iStack_8 = -0x399a;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x398a;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x397a;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x3969;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x3959;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x3949;
  FUN_1def_07a4();
  *(undefined2 *)0xc2c = 1;
  *(undefined2 *)0xc20 = 1;
  iStack_6 = unaff_BP + -0xb4;
  iStack_8 = unaff_BP + -0x130;
  iStack_a = *(undefined2 *)(unaff_BP + -0x9a);
  iStack_c = 0x1bb4;
  uStack_e = 0xc6df;
  uVar8 = FUN_1def_0904();
  *(undefined2 *)(unaff_BP + -0x3e) = uVar8;
  *(undefined2 *)0xc2c = 0;
  *(undefined2 *)0xc20 = 0;
  if (*(int *)0x158 != 0) {
    return;
  }
  FUN_3ab8_0065();
  return;
LAB_3ab8_0fc6:
  FUN_1885_2ec3();
  func_0x00013e19();
  iVar9 = 0x885;
  iStack_6 = -0x44a8;
  func_0x0000daa6();
  if ((*(int *)(unaff_BP + -0x98) != 0) && (*(int *)(unaff_BP + -0x9a) < 2)) {
    *(undefined2 *)(unaff_BP + -0x9a) = 0;
    goto LAB_3ab8_0951;
  }
  if (*(int *)(unaff_BP + *(int *)(unaff_BP + -0x9a) * 2 + -0x428) < 0) {
    uVar8 = *(undefined2 *)0x14a;
    *(undefined2 *)(unaff_BP + -0x5e8) = *(undefined2 *)0x148;
    *(undefined2 *)(unaff_BP + -0x5e6) = uVar8;
    iStack_6 = 0x885;
    iStack_8 = -0x446d;
    func_0x00018779();
  }
  else {
    uVar8 = *(undefined2 *)0x14e;
    *(undefined2 *)(unaff_BP + -0x5e8) = *(undefined2 *)0x14c;
    *(undefined2 *)(unaff_BP + -0x5e6) = uVar8;
    iStack_6 = 0x885;
    iStack_8 = -0x4455;
    FUN_13bf_0327();
  }
  if (*(int *)(unaff_BP + -0x9a) < 2) {
    *(undefined2 *)(unaff_BP + -0x9a) = 0;
    goto LAB_3ab8_103d;
  }
  *(int *)(unaff_BP + -0x9a) = *(int *)(unaff_BP + -0x9a) + -1;
  iVar9 = *(int *)(unaff_BP + *(int *)(unaff_BP + -0x9a) * 2 + -0x428);
  *(int *)(unaff_BP + -6) = iVar9;
  if (iVar9 < 0) {
    *(undefined2 *)(unaff_BP + -0xae) = 1;
    *(undefined2 *)(unaff_BP + -6) = 1;
    iStack_6 = 0x11f2;
    iStack_8 = -0x4392;
    puVar15 = (undefined2 *)func_0x0000013f();
    puVar7 = (undefined2 *)(unaff_BP + -0x24);
    iVar9 = 0xb;
  }
  else {
    *(undefined2 *)(unaff_BP + -0xae) = 0;
    iStack_6 = 0x11f2;
    iStack_8 = -0x436e;
    puVar15 = (undefined2 *)func_0x00000271();
    puVar7 = (undefined2 *)(unaff_BP + -0x66);
    iVar9 = 0x10;
  }
  while( true ) {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar1 = *puVar15;
    puVar15 = (undefined2 *)CONCAT22((int)((ulong)puVar15 >> 0x10),(undefined2 *)puVar15 + 1);
  }
  iVar9 = *(int *)(unaff_BP + -0x9a) * 4;
  uVar8 = *(undefined2 *)(unaff_BP + iVar9 + -0x354);
  *(undefined2 *)(unaff_BP + -0x1a6) = *(undefined2 *)(unaff_BP + iVar9 + -0x356);
  *(undefined2 *)(unaff_BP + -0x1a4) = uVar8;
  uVar8 = *(undefined2 *)(unaff_BP + iVar9 + -0x5d6);
  *(undefined2 *)(unaff_BP + -0x430) = *(undefined2 *)(unaff_BP + iVar9 + -0x5d8);
  *(undefined2 *)(unaff_BP + -0x42e) = uVar8;
  iVar9 = 0x885;
  func_0x0000abfa();
  if ((*(int *)(unaff_BP + -0x9a) == 1) && (*(int *)(unaff_BP + -0x98) != 0)) {
LAB_3ab8_0a3d:
    if ((*(int *)(unaff_BP + -0x98) != 1) ||
       (*(int *)(unaff_BP + -0xb6) == 0 && *(int *)(unaff_BP + -0xb8) == 0)) goto LAB_3ab8_0d31;
    if ((*(int *)(unaff_BP + -0xb6) < 0) ||
       ((*(int *)(unaff_BP + -0xb6) < 1 && (*(int *)(unaff_BP + -0xb8) == 0)))) {
LAB_3ab8_0bdb:
      if (-1 < *(int *)(unaff_BP + -0xb6)) goto LAB_3ab8_0d31;
      iStack_8 = -0x4885;
      iStack_6 = iVar9;
      puVar15 = (undefined2 *)func_0x00000271();
      puVar10 = (undefined2 *)puVar15;
      puVar7 = (undefined2 *)(unaff_BP + -0x66);
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar1 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar2 = *puVar1;
      }
      if ((*(int *)(unaff_BP + -0x58) != *(int *)(unaff_BP + -0x54)) ||
         (*(int *)(unaff_BP + -0x56) != *(int *)(unaff_BP + -0x52))) {
        iStack_6 = unaff_BP + -0x46;
        iStack_8 = unaff_BP + -0xe;
        iStack_c = -*(int *)(unaff_BP + -0xb8);
        iStack_a = -(*(int *)(unaff_BP + -0xb6) + (uint)(*(int *)(unaff_BP + -0xb8) != 0));
        uStack_e = 0;
        uStack_10 = 0xb7d0;
        FUN_20a9_0ca3();
        uVar12 = (undefined1 *)0xfff3 < &uStack_e;
        uVar13 = &stack0x0000 == (undefined1 *)0x2;
        iStack_6 = 0xb7db;
        func_0x00029834();
        iStack_6 = 0xb7e4;
        FUN_28b3_100d();
        iStack_6 = 0xb7e9;
        func_0x00029ae7();
        iStack_6 = 0xb7f1;
        func_0x00029834();
        iStack_6 = 0xb7fa;
        FUN_28b3_100d();
        iStack_6 = 0xb7ff;
        func_0x00029ae7();
        iStack_6 = 0xb804;
        FUN_28b3_117c();
        iStack_6 = 0xb80c;
        func_0x0002996b();
        iStack_6 = 0xb814;
        FUN_28b3_0ee9();
        iStack_6 = 0xb81c;
        func_0x00029834();
        iStack_6 = 0xb825;
        FUN_28b3_100d();
        iStack_6 = 0xb82a;
        func_0x00029ae7();
        iStack_6 = 0xb832;
        func_0x00029834();
        iStack_6 = 0xb83b;
        FUN_28b3_100d();
        iStack_6 = 0xb840;
        func_0x00029ae7();
        iStack_6 = 0xb845;
        FUN_28b3_117c();
        iStack_6 = 0xb84d;
        func_0x0002996b();
        iStack_6 = 0xb855;
        func_0x000297e6();
        iStack_6 = 0xb85a;
        FUN_28b3_1181();
        if ((bool)uVar12 || (bool)uVar13) {
          *(undefined2 *)(unaff_BP + -6) = 0;
          iStack_6 = 0xb884;
          func_0x00029834();
          iStack_6 = 0xb88d;
          func_0x00029983();
        }
        else {
          *(undefined2 *)(unaff_BP + -6) = 1;
          iStack_6 = 0xb869;
          func_0x00029834();
          iStack_6 = 0xb872;
          func_0x00029983();
        }
        iStack_6 = 0xb895;
        func_0x00029834();
        iStack_6 = -0x4762;
        func_0x00029983();
        *(undefined2 *)(unaff_BP + -0xa0) = 0;
        *(undefined2 *)(unaff_BP + -0x9a) = 1;
        *(undefined2 *)(unaff_BP + -0x426) = *(undefined2 *)(unaff_BP + -6);
LAB_3ab8_0d31:
        func_0x0000abfa();
        *(undefined2 *)(unaff_BP + -0xae) = *(undefined2 *)(unaff_BP + -0xa0);
        uVar8 = *(undefined2 *)(unaff_BP + -0x172);
        *(undefined2 *)(unaff_BP + -0x1a6) = *(undefined2 *)(unaff_BP + -0x174);
        *(undefined2 *)(unaff_BP + -0x1a4) = uVar8;
        uVar8 = *(undefined2 *)(unaff_BP + -0x42a);
        *(undefined2 *)(unaff_BP + -0x430) = *(undefined2 *)(unaff_BP + -0x42c);
        *(undefined2 *)(unaff_BP + -0x42e) = uVar8;
        uVar8 = *(undefined2 *)(unaff_BP + -0x172);
        iVar9 = *(int *)(unaff_BP + -0x9a) * 4;
        *(undefined2 *)(unaff_BP + iVar9 + -0x356) = *(undefined2 *)(unaff_BP + -0x174);
        *(undefined2 *)(unaff_BP + iVar9 + -0x354) = uVar8;
        uVar8 = *(undefined2 *)(unaff_BP + -0x42a);
        *(undefined2 *)(unaff_BP + iVar9 + -0x5d8) = *(undefined2 *)(unaff_BP + -0x42c);
        *(undefined2 *)(unaff_BP + iVar9 + -0x5d6) = uVar8;
        goto LAB_3ab8_0d86;
      }
      iVar9 = 0x11f2;
      iStack_6 = -0x485a;
      func_0x00012276();
    }
    else {
      iStack_8 = -0x4a0c;
      iStack_6 = iVar9;
      puVar15 = (undefined2 *)func_0x0000013f();
      puVar10 = (undefined2 *)puVar15;
      puVar7 = (undefined2 *)(unaff_BP + -0x24);
      for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar1 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar2 = *puVar1;
      }
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xb61d;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xb625;
      func_0x000297e6();
      iStack_a = 0x22b2;
      iStack_c = -0x49d6;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xb634;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uStack_14 = 0xb63c;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0xb641;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      uStack_1c = 0xb64b;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      uStack_1c = 0xb653;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      uStack_1c = 0xb658;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      iVar9 = 0x1bb4;
      iVar11 = FUN_1def_043a(0x22b2);
      if (iVar11 != 0) {
        func_0x000297e6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0xb689;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xb692;
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = -0x4969;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xb6a1;
        func_0x000299d1();
        uStack_12 = 1;
        uStack_14 = 0x22b2;
        uStack_16 = 0xb6aa;
        puVar7 = (undefined2 *)FUN_1def_05d1();
        uVar12 = (undefined1 *)0xffed < &uStack_12;
        uVar13 = &stack0x0000 == (undefined1 *)0x0;
        uVar8 = puVar7[1];
        *(undefined2 *)(unaff_BP + -4) = *puVar7;
        *(undefined2 *)(unaff_BP + -2) = uVar8;
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029b6d();
        iVar9 = 0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar12 && !(bool)uVar13) {
          uVar8 = *(undefined2 *)(unaff_BP + -0x22);
          *(undefined2 *)(unaff_BP + -0xac) = *(undefined2 *)(unaff_BP + -0x24);
          *(undefined2 *)(unaff_BP + -0xaa) = uVar8;
          uVar8 = *(undefined2 *)(unaff_BP + -0x1a);
          *(undefined2 *)(unaff_BP + -0x24) = *(undefined2 *)(unaff_BP + -0x1c);
          *(undefined2 *)(unaff_BP + -0x22) = uVar8;
          uVar8 = *(undefined2 *)(unaff_BP + -0xaa);
          *(undefined2 *)(unaff_BP + -0x1c) = *(undefined2 *)(unaff_BP + -0xac);
          *(undefined2 *)(unaff_BP + -0x1a) = uVar8;
          uVar8 = *(undefined2 *)(unaff_BP + -0x1e);
          *(undefined2 *)(unaff_BP + -0xac) = *(undefined2 *)(unaff_BP + -0x20);
          *(undefined2 *)(unaff_BP + -0xaa) = uVar8;
          uVar8 = *(undefined2 *)(unaff_BP + -0x16);
          *(undefined2 *)(unaff_BP + -0x20) = *(undefined2 *)(unaff_BP + -0x18);
          *(undefined2 *)(unaff_BP + -0x1e) = uVar8;
          uVar8 = *(undefined2 *)(unaff_BP + -0xaa);
          *(undefined2 *)(unaff_BP + -0x18) = *(undefined2 *)(unaff_BP + -0xac);
          *(undefined2 *)(unaff_BP + -0x16) = uVar8;
        }
        uVar8 = *(undefined2 *)(unaff_BP + -0x1a);
        *(undefined2 *)(unaff_BP + -0x174) = *(undefined2 *)(unaff_BP + -0x1c);
        *(undefined2 *)(unaff_BP + -0x172) = uVar8;
        uVar8 = *(undefined2 *)(unaff_BP + -0x16);
        *(undefined2 *)(unaff_BP + -0x42c) = *(undefined2 *)(unaff_BP + -0x18);
        *(undefined2 *)(unaff_BP + -0x42a) = uVar8;
        *(undefined2 *)(unaff_BP + -0xa0) = 1;
        *(undefined2 *)(unaff_BP + -6) = 1;
        *(undefined2 *)(unaff_BP + -0x9a) = 1;
        *(undefined2 *)(unaff_BP + -0x426) = 0xffff;
        goto LAB_3ab8_0bdb;
      }
    }
LAB_3ab8_0951:
    uVar8 = *(undefined2 *)0x9a40;
    uVar6 = *(undefined2 *)0x9a42;
    *(undefined2 *)(unaff_BP + -0x5f2) = uVar8;
    *(undefined2 *)(unaff_BP + -0x5f0) = uVar6;
    *(undefined2 *)(unaff_BP + -0x5e0) = uVar8;
    *(undefined2 *)(unaff_BP + -0x5de) = uVar6;
    do {
      if (*(int *)(unaff_BP + -0x98) != 1) break;
      iStack_8 = -0x4b00;
      iStack_6 = iVar9;
      func_0x00024c86();
      iStack_6 = 0x22b2;
      iStack_8 = -0x4aef;
      FUN_21f2_2d26();
      iStack_6 = 0x22b2;
      iStack_8 = -0x4adf;
      FUN_21f2_2d26();
      iStack_6 = 0x22b2;
      iStack_8 = -0x4acf;
      FUN_21f2_2d26();
      iStack_6 = unaff_BP + -0x5e0;
      iStack_8 = unaff_BP + -0x130;
      iStack_a = 1;
      iStack_c = 0x22b2;
      iVar9 = 0x1bb4;
      uStack_e = 0xb550;
      iVar11 = FUN_1def_0904();
      *(int *)(unaff_BP + -0xcc) = iVar11;
      if (*(int *)0x158 != 0) {
        FUN_3ab8_1b76();
        return;
      }
      if (iVar11 == -1) goto LAB_3ab8_1ac7;
      if (*(int *)(unaff_BP + -0xba) != 0) {
        func_0x000297e6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0xb588;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xb591;
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = -0x4a6a;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xb5a0;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        iVar9 = 0x11f2;
        uStack_14 = 0xb5a5;
        uVar14 = FUN_13bf_39a0();
        *(undefined2 *)(unaff_BP + -0xb8) = (int)uVar14;
        *(undefined2 *)(unaff_BP + -0xb6) = (int)((ulong)uVar14 >> 0x10);
      }
    } while (*(int *)(unaff_BP + -0xb6) == 0 && *(int *)(unaff_BP + -0xb8) == 0);
    goto LAB_3ab8_0a3d;
  }
  goto LAB_3ab8_0d86;
LAB_3ab8_103d:
  do {
    func_0x0001bb4e();
    iStack_6 = unaff_BP + -0x15c;
    iStack_8 = 0x3bd0;
    iStack_a = 0x1bb4;
    iVar9 = 0x11f2;
    iStack_c = -0x4428;
    func_0x00012276();
    *(undefined2 *)(unaff_BP + -0x2a) = 0xd8f1;
    while (*(int *)(unaff_BP + -0x98) == 0) {
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xa4a = 1;
      iStack_6 = unaff_BP + -0x174;
      iStack_8 = unaff_BP + -0x3c;
      iStack_a = unaff_BP + -0x2c;
      uStack_e = 0xbc0f;
      iStack_c = iVar9;
      uVar8 = func_0x00006608();
      *(undefined2 *)(unaff_BP + -0xcc) = uVar8;
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xa4a = 0;
      if (*(int *)0x158 != 0) {
LAB_3ab8_10a7:
        FUN_1885_2ec3();
        func_0x00013e19();
        iStack_6 = 0xbc39;
        func_0x0000daa6();
        func_0x0000abfa();
        FUN_3ab8_1b76();
        return;
      }
      if (*(int *)(unaff_BP + -0xcc) == -1) {
        FUN_1885_2ec3();
        iVar9 = 0x11f2;
        func_0x00013e19();
        goto LAB_3ab8_0080;
      }
      if (*(int *)(unaff_BP + -0xcc) == 99) goto LAB_3ab8_103d;
      *(undefined2 *)(unaff_BP + -0xb0) = 0;
      iVar9 = 0x3bf;
      if ((*(int *)(unaff_BP + -0xba) != 0) && (*(int *)(unaff_BP + -0xcc) == 100)) {
        iStack_6 = *(int *)(unaff_BP + -0xba);
        iStack_8 = 0x3bf;
        iVar9 = 0x11f2;
        iStack_a = -0x52a0;
        iVar11 = func_0x00015409();
        if (iVar11 != 0) {
          *(undefined2 *)(unaff_BP + -0xb0) = 1;
          *(undefined2 *)(unaff_BP + -0x2a) = 0xd8f1;
        }
      }
      if ((*(int *)(unaff_BP + -0x2a) != *(int *)(unaff_BP + -0x2c)) ||
         (*(int *)(unaff_BP + -0x3a) != *(int *)(unaff_BP + -0x3c))) {
        *(undefined2 *)(unaff_BP + -0x2a) = *(undefined2 *)(unaff_BP + -0x2c);
        *(undefined2 *)(unaff_BP + -0x3a) = *(undefined2 *)(unaff_BP + -0x3c);
        func_0x000297e6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0xada9;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xadb2;
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = 0xadb7;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xadc1;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        uStack_14 = 0xadca;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xadcf;
        func_0x00029d78();
        uStack_1a = 0x22b2;
        uStack_1c = 0xadd9;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        uStack_1c = 0xade2;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        uStack_1c = 0xade7;
        func_0x00029d78();
        func_0x000299d1(0x22b2);
        FUN_1def_043a(0x22b2);
        uVar8 = *(undefined2 *)(unaff_BP + -0x140);
        *(undefined2 *)(unaff_BP + -0x168) = *(undefined2 *)(unaff_BP + -0x142);
        *(undefined2 *)(unaff_BP + -0x166) = uVar8;
        uVar8 = *(undefined2 *)(unaff_BP + -0x176);
        *(undefined2 *)(unaff_BP + -0x1b2) = *(undefined2 *)(unaff_BP + -0x178);
        *(undefined2 *)(unaff_BP + -0x1b0) = uVar8;
        func_0x000297e6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0xae31;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xae3a;
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = 0xae3f;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xae49;
        func_0x000299d1();
        uStack_12 = 1;
        uStack_14 = 0x22b2;
        uStack_16 = 0xae52;
        puVar7 = (undefined2 *)FUN_1def_05d1();
        uVar8 = puVar7[1];
        *(undefined2 *)(unaff_BP + -0x164) = *puVar7;
        *(undefined2 *)(unaff_BP + -0x162) = uVar8;
        uVar8 = *(undefined2 *)0x9a42;
        *(undefined2 *)(unaff_BP + -0x1ae) = *(undefined2 *)0x9a40;
        *(undefined2 *)(unaff_BP + -0x1ac) = uVar8;
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = 0xae86;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xae8f;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xae99;
        func_0x000299d1();
        uStack_12 = 1;
        uStack_14 = 0x22b2;
        uStack_16 = 0xaea2;
        puVar7 = (undefined2 *)FUN_1def_05d1();
        uVar8 = puVar7[1];
        *(undefined2 *)(unaff_BP + -0x1aa) = *puVar7;
        *(undefined2 *)(unaff_BP + -0x1a8) = uVar8;
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = 0xaec7;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = -0x5130;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xaeda;
        func_0x000299d1();
        uStack_12 = 1;
        uStack_14 = 0x22b2;
        uStack_16 = 0xaee3;
        puVar7 = (undefined2 *)func_0x0001e558();
        uVar12 = (undefined1 *)0xffed < &uStack_12;
        uVar13 = &stack0x0000 == (undefined1 *)0x0;
        uVar8 = puVar7[1];
        *(undefined2 *)(unaff_BP + -0x434) = *puVar7;
        *(undefined2 *)(unaff_BP + -0x432) = uVar8;
        FUN_1885_2ec3();
        func_0x00013e19();
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar13) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if (!(bool)uVar13) goto LAB_3ab8_03b1;
LAB_3ab8_03e3:
          iVar9 = 0x22b2;
          if (*(int *)(unaff_BP + -0xb0) != 0) {
            iVar9 = 0x11f2;
            iStack_6 = -0x508a;
            func_0x00012276();
          }
        }
        else {
LAB_3ab8_03b1:
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar13) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar13) goto LAB_3ab8_03e3;
          }
          func_0x00029834();
          func_0x000297e6();
          func_0x00029ae7();
          func_0x00029d78();
          iVar9 = 0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar12) {
            *(undefined2 *)(unaff_BP + -6) = 1;
            if (*(int *)(unaff_BP + -0xb0) != 0) {
              *(undefined2 *)(unaff_BP + -0xa0) = 1;
              break;
            }
            iStack_6 = 0xb05c;
            func_0x000297e6();
            iStack_6 = -0x4f9f;
            func_0x00029d78();
            iStack_c = 0x22b2;
            uStack_e = 0xb06b;
            func_0x000299d1();
            iStack_c = 0x22b2;
            uStack_e = 0xb074;
            func_0x000297e6();
            iStack_c = 0x22b2;
            uStack_e = 0xb079;
            func_0x00029d78();
            uStack_14 = 0x22b2;
            uStack_16 = 0xb083;
            func_0x000299d1();
            uStack_14 = 0x22b2;
            uStack_16 = 0xb08c;
            func_0x000297e6();
            uStack_14 = 0x22b2;
            uStack_16 = 0xb091;
            func_0x00029d78();
            uStack_1c = 0x22b2;
            uStack_1e = 0xb09b;
            func_0x000299d1();
            uStack_1c = 0x22b2;
            uStack_1e = 0xb0a4;
            func_0x000297e6();
            uStack_1c = 0x22b2;
            uStack_1e = 0xb0a9;
            func_0x00029d78();
            func_0x000299d1(0x22b2);
            iVar9 = 0x1bb4;
            func_0x0001e18f(0x22b2);
          }
          else {
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029b6d();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_117c();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_1172();
            func_0x0002996b();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0xb131;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0xb13a;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0xb13f;
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0xb148;
            func_0x00029c2c();
            iStack_a = 0x22b2;
            iStack_c = 0xb151;
            func_0x0002996b();
            iStack_a = 0x22b2;
            iStack_c = 0xb156;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0xb160;
            func_0x000299d1();
            uStack_12 = 0;
            uStack_14 = 0x22b2;
            uStack_16 = 0xb168;
            puVar7 = (undefined2 *)FUN_1def_05d1();
            uVar8 = puVar7[1];
            *(undefined2 *)(unaff_BP + -4) = *puVar7;
            *(undefined2 *)(unaff_BP + -2) = uVar8;
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0xb190;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0xb199;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0xb19e;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0xb1a8;
            func_0x000299d1();
            uStack_12 = 0;
            uStack_14 = 0x22b2;
            uStack_16 = 0xb1b0;
            puVar7 = (undefined2 *)func_0x0001e558();
            uVar8 = puVar7[1];
            *(undefined2 *)(unaff_BP + -0x38) = *puVar7;
            *(undefined2 *)(unaff_BP + -0x36) = uVar8;
            func_0x00029834();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x000297e6();
            func_0x00029b6d();
            FUN_28b3_117c();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0xb201;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = -0x4dfa;
            FUN_28b3_1582();
            uVar12 = (undefined1 *)0xfff7 < &iStack_8;
            uVar13 = &stack0x0000 == (undefined1 *)0x0;
            func_0x00029834();
            func_0x0002996b();
            func_0x00029d78();
            iVar9 = 0x22b2;
            FUN_28b3_1181();
            if ((bool)uVar12 || (bool)uVar13) {
              func_0x000297e6();
              func_0x0002996b();
              FUN_28b3_0ee9();
              uVar8 = *(undefined2 *)(unaff_BP + -0x74);
              *(undefined2 *)(unaff_BP + -0x5e) = *(undefined2 *)(unaff_BP + -0x76);
              *(undefined2 *)(unaff_BP + -0x5c) = uVar8;
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xb27a;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xb283;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0xb288;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb292;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb29a;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb29f;
              func_0x00029d78();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb2a9;
              func_0x000299d1();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb2b1;
              func_0x000297e6();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb2b9;
              func_0x0002996b();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb2be;
              func_0x00029d78();
              func_0x000299d1(0x22b2);
              uVar14 = FUN_1000_0718(0x22b2);
              *(undefined2 *)(unaff_BP + -0xa4) = (int)uVar14;
              *(undefined2 *)(unaff_BP + -0xa2) = (int)((ulong)uVar14 >> 0x10);
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xb2f0;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xb2f9;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0xb2fe;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb308;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb310;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb315;
              func_0x00029d78();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb31f;
              func_0x000299d1();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb327;
              func_0x000297e6();
              func_0x000299d1(0x22b2);
              uVar14 = FUN_1000_0718(0x22b2);
              *(undefined2 *)(unaff_BP + -0xbe) = (int)uVar14;
              *(undefined2 *)(unaff_BP + -0xbc) = (int)((ulong)uVar14 >> 0x10);
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0xb359;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0xb362;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = -0x4c99;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb371;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb379;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              uStack_14 = 0xb37e;
              func_0x00029d78();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb388;
              func_0x000299d1();
              uStack_1a = 0x22b2;
              uStack_1c = 0xb390;
              func_0x000297e6();
              func_0x000299d1(0x22b2);
              iVar9 = 0xdef;
              puVar7 = &uStack_20;
              uVar14 = FUN_1000_0718(0x22b2);
              *(undefined2 *)(unaff_BP + -0x72) = (int)uVar14;
              *(undefined2 *)(unaff_BP + -0x70) = (int)((ulong)uVar14 >> 0x10);
              uVar3 = *(uint *)(unaff_BP + -0xa4);
              iVar11 = *(int *)(unaff_BP + -0xa2);
              *(uint *)(unaff_BP + -0x58) = uVar3;
              *(int *)(unaff_BP + -0x56) = iVar11;
              uVar4 = *(uint *)(unaff_BP + -0xbe);
              iVar5 = *(int *)(unaff_BP + -0xbc);
              *(uint *)(unaff_BP + -0x54) = uVar4;
              *(int *)(unaff_BP + -0x52) = iVar5;
              *(undefined2 *)(unaff_BP + -0x4e) = 0;
              *(undefined2 *)(unaff_BP + -0x50) = 0;
              *(undefined2 *)(unaff_BP + -0x5a) = 10000;
              *(undefined2 *)(unaff_BP + -6) = 0;
              if (((iVar11 <= iVar5) && ((iVar11 < iVar5 || (uVar3 < uVar4)))) &&
                 ((*(int *)(unaff_BP + -0x70) < iVar11 ||
                  (((*(int *)(unaff_BP + -0x70) <= iVar11 && (*(uint *)(unaff_BP + -0x72) < uVar3))
                   || ((iVar5 <= *(int *)(unaff_BP + -0x70) &&
                       ((iVar5 < *(int *)(unaff_BP + -0x70) || (uVar4 < *(uint *)(unaff_BP + -0x72))
                        ))))))))) {
                *(uint *)(unaff_BP + -0x58) = uVar4;
                *(int *)(unaff_BP + -0x56) = iVar5;
                uVar8 = *(undefined2 *)(unaff_BP + -0xa2);
                *(undefined2 *)(unaff_BP + -0x54) = *(undefined2 *)(unaff_BP + -0xa4);
                *(undefined2 *)(unaff_BP + -0x52) = uVar8;
                *(undefined2 *)(unaff_BP + -6) = 1;
              }
              uVar3 = *(uint *)(unaff_BP + -0xa4);
              iVar11 = *(int *)(unaff_BP + -0xa2);
              if ((*(int *)(unaff_BP + -0xbc) <= iVar11) &&
                 ((((*(int *)(unaff_BP + -0xbc) < iVar11 || (*(uint *)(unaff_BP + -0xbe) < uVar3))
                   && (*(int *)(unaff_BP + -0x70) <= iVar11)) &&
                  ((*(int *)(unaff_BP + -0x70) < iVar11 || (*(uint *)(unaff_BP + -0x72) < uVar3)))))
                 ) {
                iVar5 = *(int *)(unaff_BP + -0xbc);
                if ((iVar5 <= *(int *)(unaff_BP + -0x70)) &&
                   ((iVar5 < *(int *)(unaff_BP + -0x70) ||
                    (*(uint *)(unaff_BP + -0xbe) < *(uint *)(unaff_BP + -0x72))))) {
                  *(uint *)(unaff_BP + -0x58) = *(uint *)(unaff_BP + -0xbe);
                  *(int *)(unaff_BP + -0x56) = iVar5;
                  *(uint *)(unaff_BP + -0x54) = uVar3;
                  *(int *)(unaff_BP + -0x52) = iVar11;
                  *(undefined2 *)(unaff_BP + -6) = 1;
                }
              }
              if (*(int *)(unaff_BP + -0xb0) != 0) {
                *(undefined2 *)(unaff_BP + -0xa0) = 0;
                break;
              }
              *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xa6c;
              *(undefined1 *)(unaff_BP + -0x4b) = 9;
              puVar10 = (undefined2 *)(unaff_BP + -0x66);
              for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
                puVar1 = puVar7;
                puVar7 = puVar7 + 1;
                puVar15 = puVar10;
                puVar10 = puVar10 + 1;
                *puVar1 = *puVar15;
              }
              iVar9 = 0x11f2;
              func_0x00013e46(0xdef);
            }
            else {
              if (*(int *)(unaff_BP + -0xb0) != 0) {
                iVar9 = 0x11f2;
                iStack_6 = -0x4dcc;
                func_0x00012276();
              }
              *(undefined2 *)(unaff_BP + -0xb0) = 0;
            }
          }
        }
      }
    }
    if (*(int *)(unaff_BP + -0x98) != 0) goto LAB_3ab8_0951;
    iStack_6 = -0x5039;
    func_0x0000daa6();
    if (*(int *)(unaff_BP + -0xa0) == 0) {
      *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xa6c;
      *(undefined1 *)(unaff_BP + -0x4b) = *(undefined1 *)0xa6a;
      *(undefined1 *)(unaff_BP + -0x4a) = *(undefined1 *)0xb310;
      puVar10 = &uStack_20;
      puVar7 = (undefined2 *)(unaff_BP + -0x66);
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar1 = puVar10;
        puVar10 = puVar10 + 1;
        puVar15 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar1 = *puVar15;
      }
      iVar9 = 0x11f2;
      iVar11 = FUN_13bf_01c1();
      if (iVar11 != 0) {
        *(undefined2 *)(unaff_BP + -0x9a) = 1;
        *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x9a) * 2 + -0x428) =
             *(undefined2 *)(unaff_BP + -6);
        goto LAB_3ab8_0951;
      }
    }
    else {
      uVar8 = *(undefined2 *)(unaff_BP + -0xc4);
      *(undefined2 *)(unaff_BP + -0x24) = *(undefined2 *)(unaff_BP + -0xc6);
      *(undefined2 *)(unaff_BP + -0x22) = uVar8;
      uVar8 = *(undefined2 *)(unaff_BP + -0x144);
      *(undefined2 *)(unaff_BP + -0x20) = *(undefined2 *)(unaff_BP + -0x146);
      *(undefined2 *)(unaff_BP + -0x1e) = uVar8;
      uVar8 = *(undefined2 *)(unaff_BP + -0x172);
      *(undefined2 *)(unaff_BP + -0x1c) = *(undefined2 *)(unaff_BP + -0x174);
      *(undefined2 *)(unaff_BP + -0x1a) = uVar8;
      uVar8 = *(undefined2 *)(unaff_BP + -0x42a);
      *(undefined2 *)(unaff_BP + -0x18) = *(undefined2 *)(unaff_BP + -0x42c);
      *(undefined2 *)(unaff_BP + -0x16) = uVar8;
      *(undefined1 *)(unaff_BP + -0x13) = *(undefined1 *)0xa6a;
      *(undefined1 *)(unaff_BP + -0x14) = *(undefined1 *)0xa6c;
      *(undefined1 *)(unaff_BP + -0x12) = *(undefined1 *)0xb310;
      puVar10 = &uStack_16;
      puVar7 = (undefined2 *)(unaff_BP + -0x24);
      for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar1 = puVar10;
        puVar10 = puVar10 + 1;
        puVar15 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar1 = *puVar15;
      }
      iVar9 = 0x11f2;
      uStack_1a = 0xb030;
      iVar11 = FUN_17a6_0cba();
      if (iVar11 != 0) {
        *(undefined2 *)(unaff_BP + -0x9a) = 1;
        *(undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x9a) * 2 + -0x428) = 0xffff;
        goto LAB_3ab8_0951;
      }
    }
  } while( true );
LAB_3ab8_0080:
  if (*(int *)(unaff_BP + -0x98) != 0) goto LAB_3ab8_015c;
  iStack_6 = 0x3bc2;
  iStack_8 = unaff_BP + -0x130;
  iStack_c = 0xac21;
  iStack_a = iVar9;
  FUN_21f2_3454();
  iStack_6 = unaff_BP + -0x142;
  iStack_8 = unaff_BP + -0x130;
  *(undefined2 *)0xc20 = 1;
  iStack_a = 1;
  iStack_c = 0x22b2;
  iVar9 = 0x1bb4;
  uStack_e = 0xac44;
  iVar11 = FUN_1def_0904();
  *(int *)(unaff_BP + -0xcc) = iVar11;
  *(undefined2 *)0xc20 = 0;
  if (*(int *)0x158 != 0) {
    FUN_3ab8_1b76();
    return;
  }
  if (iVar11 != -1) goto LAB_3ab8_0138;
  goto LAB_3ab8_1ac7;
LAB_3ab8_0138:
  if (*(int *)(unaff_BP + -0xba) != 0) {
    iStack_6 = *(int *)(unaff_BP + -0xba);
    iStack_8 = 0x1bb4;
    iVar9 = 0x11f2;
    iStack_a = -0x532e;
    iVar11 = func_0x00015409();
    if (iVar11 == 0) goto LAB_3ab8_0080;
LAB_3ab8_015c:
    uVar12 = 0;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar12) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar12) goto LAB_3ab8_103d;
      iVar9 = 0x11f2;
      iStack_6 = -0x52e6;
      func_0x00012276();
      goto LAB_3ab8_0080;
    }
    goto LAB_3ab8_103d;
  }
  goto LAB_3ab8_0080;
}



/* 3ab8:1b76  FUN_3ab8_1b76  6 bytes, 1 callers */

void __cdecl16far FUN_3ab8_1b76(void)

{
  return;
}



/* 3ab8:1b7c  FUN_3ab8_1b7c  431 bytes, 0 callers */

void __cdecl16far FUN_3ab8_1b7c(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 local_7c [100];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined2 *local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined2 *puStack_6;
  undefined2 *puStack_4;
  
  puStack_4 = (undefined2 *)0x3ab8;
  puStack_6 = (undefined2 *)0xc707;
  FUN_21f2_0ebc();
  puStack_4 = (undefined2 *)0x3c2a;
  puStack_6 = &local_c;
  puStack_8 = (undefined1 *)0x22b2;
  uVar2 = 0x22b2;
  puStack_a = (undefined1 *)0xc714;
  func_0x00024c86();
  do {
    do {
      puStack_4 = (undefined2 *)0x98a;
      puStack_6 = (undefined2 *)local_7c;
      puStack_a = (undefined1 *)0xc7ae;
      puStack_8 = (undefined1 *)uVar2;
      func_0x00024c86();
      puStack_4 = (undefined2 *)0x5e0;
      puStack_6 = (undefined2 *)local_7c;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xc7bd;
      FUN_21f2_2d26();
      puStack_4 = (undefined2 *)0x98a;
      puStack_6 = (undefined2 *)local_7c;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xc7cc;
      FUN_21f2_2d26();
      puStack_4 = (undefined2 *)0x5e8;
      puStack_6 = (undefined2 *)local_7c;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xc7db;
      FUN_21f2_2d26();
      puStack_4 = (undefined2 *)0x98a;
      puStack_6 = (undefined2 *)local_7c;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xc7ea;
      FUN_21f2_2d26();
      puStack_4 = (undefined2 *)0x5f2;
      puStack_6 = (undefined2 *)local_7c;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xc7f9;
      FUN_21f2_2d26();
      puStack_4 = (undefined2 *)0x98a;
      puStack_6 = (undefined2 *)local_7c;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xc808;
      FUN_21f2_2d26();
      puStack_4 = (undefined2 *)0x5fa;
      puStack_6 = (undefined2 *)local_7c;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xc817;
      FUN_21f2_2d26();
      puStack_4 = (undefined2 *)0x98a;
      puStack_6 = (undefined2 *)local_7c;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xc826;
      FUN_21f2_2d26();
      puStack_4 = (undefined2 *)0x3c31;
      puStack_6 = (undefined2 *)local_7c;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xc835;
      FUN_21f2_2d26();
      puStack_4 = (undefined2 *)0x98a;
      puStack_6 = (undefined2 *)local_7c;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xc844;
      FUN_21f2_2d26();
      puStack_4 = &local_c;
      puStack_6 = (undefined2 *)local_7c;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xc853;
      FUN_21f2_2d26();
      puStack_4 = (undefined2 *)0x98a;
      puStack_6 = (undefined2 *)local_7c;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xc862;
      FUN_21f2_2d26();
      puStack_4 = (undefined2 *)0x3c38;
      puStack_6 = (undefined2 *)local_7c;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xc871;
      FUN_21f2_2d26();
      puStack_4 = (undefined2 *)local_7c;
      puStack_6 = (undefined2 *)0x8;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xc880;
      FUN_1def_07a4();
      puStack_4 = &local_e;
      puStack_6 = (undefined2 *)local_18;
      puStack_8 = local_14;
      puStack_a = local_7c;
      local_c = 0;
      local_e = 0x1bb4;
      uVar2 = 0x1bb4;
      local_10 = (undefined2 *)0xc89a;
      local_10 = (undefined2 *)FUN_1def_0904();
      if (*(int *)0x158 != 0) {
        return;
      }
    } while (((int)local_10 < 1) || (9 < (int)local_10));
    puStack_4 = (undefined2 *)0x1bb4;
    puStack_6 = (undefined2 *)0xc72a;
    func_0x0000c3ca();
    if (local_10 == (undefined2 *)0x1) {
      puStack_4 = local_10;
      puStack_6 = (undefined2 *)0x885;
      puStack_8 = (undefined1 *)0xc737;
      FUN_3ab8_4fac();
    }
    if (local_10 == (undefined2 *)0x2) {
      puStack_4 = local_10;
      puStack_6 = (undefined2 *)0x885;
      puStack_8 = (undefined1 *)0xc745;
      FUN_3ab8_4fac();
    }
    if (local_10 == (undefined2 *)0x3) {
      puStack_4 = (undefined2 *)0x1;
      puStack_6 = (undefined2 *)0x885;
      puStack_8 = (undefined1 *)0xc754;
      FUN_3ab8_36e0();
    }
    if (local_10 == (undefined2 *)0x4) {
      puStack_4 = (undefined2 *)0x2;
      puStack_6 = (undefined2 *)0x885;
      puStack_8 = (undefined1 *)0xc763;
      FUN_3ab8_36e0();
    }
    if (local_10 == (undefined2 *)0x5) {
      puStack_4 = (undefined2 *)0x885;
      puStack_6 = (undefined2 *)0xc76e;
      FUN_3ab8_1f71();
    }
    if (local_10 == (undefined2 *)0x6) {
      puStack_4 = &local_c;
      puStack_6 = (undefined2 *)0x885;
      puStack_8 = (undefined1 *)0xc77c;
      FUN_3ab8_0000();
    }
    if (local_10 == (undefined2 *)0x7) {
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    if (local_10 == (undefined2 *)0x8) {
      puStack_4 = (undefined2 *)0x885;
      puStack_6 = (undefined2 *)0xc792;
      FUN_3ab8_24c6();
    }
    puStack_4 = (undefined2 *)0x885;
    uVar2 = 0x1b6e;
    puStack_6 = (undefined2 *)0xc797;
    FUN_1885_2ec3();
  } while (*(int *)0x158 == 0);
  return;
}



/* 3ab8:1d2e  FUN_3ab8_1d2e  365 bytes, 2 callers */

void __cdecl16far FUN_3ab8_1d2e(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 uVar2;
  undefined1 in_ZF;
  
  FUN_21f2_0ebc();
  func_0x00029834(0x22b2);
  FUN_28b3_100d(0x22b2);
  func_0x00029b6d(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_1168(0x22b2);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029834(0x22b2);
  FUN_28b3_100d(0x22b2);
  func_0x00029b6d(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x0002996b(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)in_CF) {
LAB_3ab8_1dd5:
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)in_CF) {
      *param_1 = 0;
    }
    func_0x000297e6(0x22b2);
    FUN_28b3_0d8b(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)in_CF) {
      uVar1 = *(undefined2 *)0x1b3e;
      goto LAB_3ab8_1e0f;
    }
  }
  else {
    FUN_28b3_0d8b(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)in_CF && !(bool)in_ZF) goto LAB_3ab8_1dd5;
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    uVar1 = FUN_28b3_0f51(0x22b2);
LAB_3ab8_1e0f:
    *param_1 = uVar1;
  }
  func_0x000297e6(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_1181(0x22b2);
  uVar2 = in_CF;
  if ((bool)in_CF || (bool)in_ZF) {
    func_0x000297e6(0x22b2);
    FUN_28b3_0d8b(0x22b2);
    FUN_28b3_1181(0x22b2);
    uVar2 = 1;
    if (!(bool)in_CF) {
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      uVar1 = FUN_28b3_0f51(0x22b2);
      goto LAB_3ab8_1e92;
    }
  }
  func_0x000297e6(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_1181(0x22b2);
  if (!(bool)uVar2 && !(bool)in_ZF) {
    *param_2 = 0;
  }
  func_0x000297e6(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_1181(0x22b2);
  if (!(bool)uVar2) {
    return;
  }
  uVar1 = *(undefined2 *)0x1b40;
LAB_3ab8_1e92:
  *param_2 = uVar1;
  return;
}



/* 3ab8:1e9b  FUN_3ab8_1e9b  214 bytes, 1 callers */

void __cdecl16far FUN_3ab8_1e9b(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = 0x3ab8;
  local_6 = 0xca26;
  FUN_21f2_0ebc();
  uVar1 = *(undefined2 *)0x148;
  uVar2 = *(undefined2 *)0x14a;
  local_8 = 0x22b2;
  local_a = 0xca3a;
  local_6 = uVar1;
  local_4 = uVar2;
  func_0x0000013f();
  local_8 = 0;
  local_a = 0xca58;
  local_6 = uVar1;
  local_4 = uVar2;
  uVar3 = func_0x0000013f();
  local_a = *(undefined2 *)((int)uVar3 + 4);
  local_4 = 0;
  local_6 = 0;
  local_8 = 0xca74;
  func_0x0000daa6();
  local_8 = 0x885;
  local_a = 0xca80;
  local_6 = uVar1;
  local_4 = uVar2;
  func_0x00018779();
  local_4 = 0x11f2;
  local_6 = 0xca8a;
  func_0x000297e6();
  local_4 = 0x22b2;
  local_6 = 0xca8f;
  func_0x00029d78();
  local_c = 0x22b2;
  local_e = 0xca99;
  func_0x000299d1();
  local_c = 0x22b2;
  local_e = 0xcaa1;
  func_0x000297e6();
  local_c = 0x22b2;
  local_e = 0xcaa6;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  FUN_3ab8_1d2e(&local_c,&local_e);
  *param_1 = local_6;
  param_1[1] = local_4;
  *param_2 = local_a;
  param_2[1] = local_8;
  local_4 = local_e;
  local_6 = local_c;
  local_8 = 0x22b2;
  local_a = 0xcae6;
  func_0x0000c44a();
  local_4 = 0x885;
  local_6 = 0xcaed;
  func_0x0000a9df();
  return;
}



/* 3ab8:1f71  FUN_3ab8_1f71  1365 bytes, 1 callers */

void __cdecl16far FUN_3ab8_1f71(void)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  int *piVar8;
  int *piVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  int *piVar11;
  undefined4 uVar12;
  int *local_c0;
  undefined2 local_be;
  int local_b8;
  int *local_b6;
  int local_b4;
  int local_b2 [2];
  int *local_ae;
  undefined2 local_ac;
  int local_aa;
  int *local_a8;
  undefined2 local_a6;
  int local_a4;
  int *local_a2;
  undefined1 local_a0 [100];
  int local_3c;
  int local_3a;
  int *local_38;
  int *local_36;
  int local_34;
  undefined2 local_32;
  undefined2 local_30;
  int *local_2e;
  int local_2c;
  uint local_2a;
  uint local_28;
  int *local_26;
  undefined2 local_24;
  int local_22 [2];
  int local_1c;
  int *local_1a;
  int *local_18;
  undefined2 local_16;
  int local_14;
  int *local_12;
  int *local_10;
  int *local_e;
  int *local_c;
  int **local_a;
  int **ppiStack_8;
  
  uVar7 = 0x22b2;
  FUN_21f2_0ebc();
  local_2a = *(uint *)0x148;
  local_28 = *(uint *)0x14a;
LAB_3ab8_1f8b:
  ppiStack_8 = (int **)0x0;
  local_c = (int *)0xcb13;
  local_a = (int **)uVar7;
  func_0x0000daa6();
  ppiStack_8 = (int **)0x885;
  piVar8 = (int *)0x885;
  local_a = (int **)0xcb19;
  func_0x0000a9df();
  local_2e = (int *)(*(int *)0x148 - local_2a);
  do {
    do {
      ppiStack_8 = (int **)0x2dc;
      local_a = (int **)local_a0;
      local_e = (int *)0xcb30;
      local_c = piVar8;
      func_0x00024c86();
      ppiStack_8 = (int **)0x2f0;
      local_a = (int **)local_a0;
      local_c = (int *)0x22b2;
      local_e = (int *)0xcb40;
      FUN_21f2_2d26();
      *(undefined2 *)0xc2c = 1;
      ppiStack_8 = &local_36;
      local_a = &local_c0;
      local_c = &local_b8;
      local_e = (int *)local_a0;
      local_10 = local_2e;
      local_12 = (int *)0x22b2;
      piVar8 = (int *)0x1bb4;
      local_14 = -0x349d;
      local_3c = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_3c == -1) goto LAB_3ab8_1ffe;
      if (local_3c == 0x14) {
        return;
      }
    } while (local_36 == (int *)0x0);
    ppiStack_8 = &local_c0;
    local_a = (int **)&local_b8;
    local_c = local_36;
    local_e = (int *)0x1bb4;
    piVar8 = (int *)0x11f2;
    local_10 = (int *)0xcbaf;
    iVar4 = func_0x00015409();
  } while (iVar4 == 0);
  local_3a = local_b8;
  local_38 = local_b6;
  local_a8 = local_c0;
  local_a6 = local_be;
  local_2a = *(uint *)0x148;
  local_28 = *(uint *)0x14a;
  local_2e = (int *)0x0;
LAB_3ab8_2069:
  do {
    local_a = (int **)0xcbee;
    ppiStack_8 = (int **)piVar8;
    func_0x0001bb4e();
    ppiStack_8 = (int **)0x2e6;
    local_a = (int **)0x1bb4;
    local_c = (int *)0xcbf7;
    func_0x00012276();
    ppiStack_8 = (int **)0x2f0;
    local_a = (int **)0x11f2;
    local_c = (int *)0xcc01;
    func_0x00012276();
    ppiStack_8 = (int **)*(undefined2 *)0x3c62;
    local_a = (int **)0x3c43;
    local_c = (int *)0x11f2;
    local_e = (int *)0xcc0f;
    func_0x00012276();
    ppiStack_8 = (int **)0x11f2;
    local_a = (int **)0xcc1a;
    func_0x000297e6();
    ppiStack_8 = (int **)0x22b2;
    local_a = (int **)0xcc1f;
    func_0x00029d78();
    local_10 = (int *)0x22b2;
    local_12 = (int *)0xcc29;
    func_0x000299d1();
    local_10 = (int *)0x22b2;
    local_12 = (int *)0xcc31;
    func_0x000297e6();
    local_10 = (int *)0x22b2;
    local_12 = (int *)0xcc36;
    func_0x00029d78();
    local_18 = (int *)0x22b2;
    piVar9 = (int *)0x22b2;
    local_1a = (int *)0xcc40;
    func_0x000299d1();
    local_18 = &local_b4;
    local_1a = local_b2;
    local_1c = 0x22b2;
    FUN_3ab8_1d2e();
    while( true ) {
      *(undefined2 *)0xb6a = 0xffff;
      *(undefined2 *)0xa4a = 1;
      ppiStack_8 = &local_36;
      local_a = &local_c0;
      local_c = &local_b8;
      local_e = &local_2c;
      local_10 = local_22;
      piVar8 = (int *)0x3bf;
      local_14 = -0x3376;
      local_12 = piVar9;
      local_aa = func_0x00006608();
      *(undefined2 *)0xb6a = 0;
      *(undefined2 *)0xa4a = 0;
      if (*(int *)0x158 != 0) {
        *(uint *)0x148 = local_2a;
        *(uint *)0x14a = local_28;
        ppiStack_8 = (int **)0x0;
        local_a = (int **)0x3bf;
        local_c = (int *)0xccb4;
        func_0x0001470b();
        *(undefined2 *)0xbc0 = 1;
        ppiStack_8 = (int **)0x11f2;
        local_a = (int **)0xccc0;
        func_0x0000a9df();
        return;
      }
      if (local_aa == -1) {
        local_2e = (int *)(*(int *)0x148 - local_2a);
        if (0 < (int)local_2e) goto LAB_3ab8_1ffe;
        local_2e = (int *)0x0;
        ppiStack_8 = (int **)0x1;
        local_a = (int **)0x3bf;
        uVar7 = 0x885;
        local_c = (int *)0xcce8;
        func_0x0000b1d8();
        goto LAB_3ab8_1f8b;
      }
      if (local_aa == 99) {
        ppiStack_8 = (int **)0x3bf;
        local_a = (int **)0xccfc;
        func_0x000297e6();
        ppiStack_8 = (int **)0x22b2;
        local_a = (int **)0xcd01;
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        local_12 = (int *)0xcd0b;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        local_12 = (int *)0xcd13;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        local_12 = (int *)0xcd18;
        func_0x00029d78();
        local_18 = (int *)0x22b2;
        local_1a = (int *)0xcd22;
        func_0x000299d1();
        local_18 = &local_b4;
        local_1a = local_b2;
        local_1c = 0x22b2;
        FUN_3ab8_1d2e();
        ppiStack_8 = (int **)local_b4;
        local_a = (int **)local_b2[0];
        local_c = (int *)0x22b2;
        piVar8 = (int *)0x885;
        local_e = (int *)0xcd40;
        func_0x0000c44a();
        goto LAB_3ab8_2069;
      }
      if ((0x61ff < local_aa) && (local_aa < 0x6b01)) break;
      local_34 = 0;
      piVar9 = piVar8;
      if ((local_36 != (int *)0x0) && (local_aa == 100)) {
        if (((local_36 == (int *)0x2) && ((int)local_28 <= *(int *)0x14a)) &&
           (((int)local_28 < *(int *)0x14a || (local_2a < *(uint *)0x148)))) {
          iVar3 = local_2a + 1;
          uVar10 = CARRY2(local_28,(uint)(0xfffe < local_2a));
          iVar6 = local_28 + (0xfffe < local_2a);
          local_c = (int *)0x3bf;
          local_e = (int *)0xcdb7;
          local_a = (int **)iVar3;
          ppiStack_8 = (int **)iVar6;
          piVar11 = (int *)func_0x0000013f();
          iVar4 = *piVar11;
          piVar9 = (int *)((int *)piVar11)[1];
          local_c = (int *)0x0;
          local_e = (int *)0xcdd1;
          local_a = (int **)iVar3;
          ppiStack_8 = (int **)iVar6;
          uVar12 = func_0x0000013f();
          uVar7 = (undefined2)((ulong)uVar12 >> 0x10);
          local_26 = (int *)*(int *)((int)uVar12 + 4);
          local_24 = *(undefined2 *)((int)uVar12 + 6);
          ppiStack_8 = (int **)0x0;
          local_a = (int **)0xcded;
          func_0x000297e6();
          ppiStack_8 = (int **)0x22b2;
          local_a = (int **)0xcdf6;
          FUN_28b3_100d();
          ppiStack_8 = (int **)0x22b2;
          local_a = (int **)0xcdfb;
          func_0x00029ae7();
          ppiStack_8 = (int **)0x22b2;
          local_a = (int **)0xce03;
          func_0x000297e6();
          ppiStack_8 = (int **)0x22b2;
          local_a = (int **)0xce0c;
          FUN_28b3_100d();
          ppiStack_8 = (int **)0x22b2;
          local_a = (int **)0xce11;
          func_0x00029ae7();
          ppiStack_8 = (int **)0x22b2;
          local_a = (int **)0xce16;
          FUN_28b3_117c();
          ppiStack_8 = (int **)0x22b2;
          local_a = (int **)0xce1e;
          func_0x0002996b();
          ppiStack_8 = (int **)0x22b2;
          local_a = (int **)0xce26;
          FUN_28b3_0ee9();
          ppiStack_8 = (int **)0x22b2;
          local_a = (int **)0xce2f;
          func_0x00029834();
          ppiStack_8 = (int **)0x22b2;
          local_a = (int **)0xce38;
          func_0x00029b85();
          ppiStack_8 = (int **)0x22b2;
          local_a = (int **)0xce40;
          func_0x000297e6();
          ppiStack_8 = (int **)0x22b2;
          local_a = (int **)0xce45;
          func_0x00029d78();
          ppiStack_8 = (int **)0x22b2;
          piVar8 = (int *)0x22b2;
          local_a = (int **)0xce4a;
          FUN_28b3_1181();
          if ((bool)uVar10) {
            local_34 = 1;
            local_c0 = local_26;
            local_be = local_24;
            local_b8 = iVar4;
            local_b6 = piVar9;
          }
        }
        piVar9 = piVar8;
        if (local_34 == 0) {
          local_32 = *(undefined2 *)0x148;
          local_30 = *(undefined2 *)0x14a;
          *(uint *)0x148 = local_2a;
          *(uint *)0x14a = local_28;
          ppiStack_8 = &local_c0;
          local_a = (int **)&local_b8;
          local_c = local_36;
          local_10 = (int *)0xce9f;
          local_e = piVar8;
          iVar4 = func_0x00015409();
          if (iVar4 != 0) {
            local_34 = 1;
          }
          *(undefined2 *)0x148 = local_32;
          *(undefined2 *)0x14a = local_30;
          piVar9 = (int *)0x11f2;
        }
      }
      uVar5 = local_22[0] - local_b2[0] >> 0xf;
      if (((*(int *)0x3c62 <= (int)((local_22[0] - local_b2[0] ^ uVar5) - uVar5)) ||
          (uVar5 = local_2c - local_b4 >> 0xf,
          *(int *)0x3c62 < (int)((local_2c - local_b4 ^ uVar5) - uVar5))) || (local_34 != 0)) {
        local_b2[0] = local_22[0];
        local_b4 = local_2c;
        local_a4 = local_b8;
        local_a2 = local_b6;
        local_ae = local_c0;
        local_ac = local_be;
        local_1c = local_3a;
        local_1a = local_38;
        local_18 = local_a8;
        local_16 = local_a6;
        local_14 = local_b8;
        local_12 = local_b6;
        local_10 = local_c0;
        local_e = (int *)local_be;
        ppiStack_8 = (int **)0x0;
        local_c = (int *)0xcf51;
        local_a = (int **)piVar9;
        func_0x0000daa6();
        piVar9 = &local_1c;
        piVar8 = &local_1c;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          piVar2 = piVar9;
          piVar9 = piVar9 + 1;
          piVar11 = piVar8;
          piVar8 = piVar8 + 1;
          *piVar2 = *piVar11;
        }
        uVar7 = 0x11f2;
        local_22[1] = 0xcf66;
        iVar4 = FUN_17a6_0cba();
        if (iVar4 != 0) {
          local_2e = (int *)(*(int *)0x148 - local_2a);
          if (local_2e == (int *)0x1) {
            ppiStack_8 = (int **)*(undefined2 *)0x14a;
            local_a = (int **)*(undefined2 *)0x148;
            local_c = (int *)0x11f2;
            local_e = (int *)0xcf86;
            uVar12 = func_0x0000013f();
            pbVar1 = (byte *)((int)uVar12 + 0x14);
            *pbVar1 = *pbVar1 | 0x40;
            ppiStack_8 = (int **)*(undefined2 *)0x14a;
            local_a = (int **)*(undefined2 *)0x148;
            local_c = (int *)0x0;
            uVar7 = 0;
            local_e = (int *)0xcf9e;
            uVar12 = func_0x0000013f();
            pbVar1 = (byte *)((int)uVar12 + 0x14);
            *pbVar1 = *pbVar1 & 0x7f;
          }
          else {
            ppiStack_8 = (int **)*(undefined2 *)0x14a;
            local_a = (int **)*(undefined2 *)0x148;
            local_c = (int *)0x11f2;
            local_e = (int *)0xcfb8;
            uVar12 = func_0x0000013f();
            pbVar1 = (byte *)((int)uVar12 + 0x14);
            *pbVar1 = *pbVar1 & 0xbf;
            ppiStack_8 = (int **)*(undefined2 *)0x14a;
            local_a = (int **)*(undefined2 *)0x148;
            local_c = (int *)0x0;
            uVar7 = 0;
            local_e = (int *)0xcfd0;
            uVar12 = func_0x0000013f();
            pbVar1 = (byte *)((int)uVar12 + 0x14);
            *pbVar1 = *pbVar1 | 0x80;
          }
        }
        piVar9 = (int *)0x885;
        local_a = (int **)0xcfe0;
        ppiStack_8 = (int **)uVar7;
        func_0x0000a9df();
        *(undefined2 *)0xbc0 = 1;
        if (local_34 != 0) {
          ppiStack_8 = (int **)*(undefined2 *)0x14a;
          local_a = (int **)*(undefined2 *)0x148;
          local_c = (int *)0x885;
          local_e = (int *)0xcff9;
          uVar12 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar12 + 0x14);
          *pbVar1 = *pbVar1 | 0x40;
          ppiStack_8 = (int **)*(undefined2 *)0x14a;
          local_a = (int **)*(undefined2 *)0x148;
          local_c = (int *)0x0;
          uVar7 = 0;
          local_e = (int *)0xd011;
          uVar12 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar12 + 0x14);
          *pbVar1 = *pbVar1 | 0x80;
          goto LAB_3ab8_1f8b;
        }
        local_3a = local_a4;
        local_38 = local_a2;
        local_a8 = local_ae;
        local_a6 = local_ac;
      }
    }
    uVar5 = (int)(local_aa + 0x9f00U) >> 0xf;
    *(int *)0x3c62 = ((int)((local_aa + 0x9f00U ^ uVar5) - uVar5) >> 8 ^ uVar5) - uVar5;
  } while( true );
LAB_3ab8_1ffe:
  ppiStack_8 = &local_a8;
  local_a = (int **)&local_3a;
  local_e = (int *)0xcb8b;
  local_c = piVar8;
  FUN_3ab8_1e9b();
  goto LAB_3ab8_2069;
}



/* 3ab8:24c6  FUN_3ab8_24c6  937 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003d243) */

void __cdecl16far FUN_3ab8_24c6(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint unaff_DI;
  undefined1 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  long lVar8;
  undefined2 *puVar9;
  undefined4 uVar10;
  undefined1 local_9e [4];
  uint local_9a;
  int local_98;
  undefined1 local_96 [100];
  int local_32;
  undefined4 local_30;
  undefined2 local_2c;
  uint local_2a;
  int local_28;
  int local_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  uint local_1c;
  int local_1a;
  undefined2 local_18 [2];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 uStack_e;
  
  puVar7 = (undefined1 *)0x22b2;
  FUN_21f2_0ebc();
  do {
    local_2c = 0;
    while( true ) {
      do {
        uStack_e._0_2_ = (undefined1 *)0xd3a0;
        uStack_e._2_2_ = puVar7;
        func_0x00024c86();
        uStack_e._2_2_ = (undefined1 *)0x22b2;
        uStack_e._0_2_ = (undefined1 *)0xd3b0;
        FUN_21f2_2d26();
        *(undefined2 *)0xc2c = 1;
        uStack_e._2_2_ = local_9e;
        uStack_e._0_2_ = local_96;
        uStack_10 = local_2c;
        uStack_12 = 0x22b2;
        uStack_14 = 0xd3d3;
        local_22 = FUN_1def_0904();
        *(undefined2 *)0xc2c = 0;
        if ((*(int *)0x158 != 0) || (local_22 == 0x14)) {
          return;
        }
        puVar7 = (undefined1 *)0x885;
        func_0x0000c3ca();
        if (local_22 == -1) {
          local_98 = local_1a;
          for (local_9a = local_1c;
              (local_98 <= local_28 && ((local_98 < local_28 || (local_9a <= local_2a))));
              local_9a = local_9a + 1) {
            uStack_e._2_2_ = puVar7;
            if ((local_1c == local_9a) && (local_1a == local_98)) {
              uStack_e._0_2_ = (undefined1 *)0xd15b;
              uVar10 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar10 + 0x14);
              *pbVar1 = *pbVar1 | 0x40;
              uStack_e._2_2_ = (undefined1 *)0x0;
              uStack_e._0_2_ = (undefined1 *)0xd173;
              uVar10 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar10 + 0x14);
              *pbVar1 = *pbVar1 & 0x7f;
            }
            else {
              uStack_e._0_2_ = (undefined1 *)0xd08f;
              uVar10 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar10 + 0x14);
              *pbVar1 = *pbVar1 & 0xbf;
              uStack_e._2_2_ = (undefined1 *)0x0;
              uStack_e._0_2_ = (undefined1 *)0xd0a7;
              uVar10 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar10 + 0x14);
              *pbVar1 = *pbVar1 | 0x80;
            }
            if ((local_2a == local_9a) && (local_28 == local_98)) {
              uStack_e._2_2_ = (undefined1 *)0x0;
              uStack_e._0_2_ = (undefined1 *)0xd0cb;
              uVar10 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar10 + 0x14);
              *pbVar1 = *pbVar1 | 0x40;
              uStack_e._2_2_ = (undefined1 *)0x0;
              uStack_e._0_2_ = (undefined1 *)0xd0e3;
              uVar10 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar10 + 0x14);
              *pbVar1 = *pbVar1 | 0x80;
            }
            uStack_e._2_2_ = (undefined1 *)0x0;
            uStack_e._0_2_ = (undefined1 *)0xd0fb;
            puVar9 = (undefined2 *)func_0x0000013f();
            puVar5 = (undefined2 *)puVar9;
            puVar6 = local_18;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar3 = puVar6;
              puVar6 = puVar6 + 1;
              puVar2 = puVar5;
              puVar5 = puVar5 + 1;
              *puVar3 = *puVar2;
            }
            puVar5 = &uStack_1e;
            puVar6 = local_18;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar5;
              puVar5 = puVar5 + 1;
              puVar9 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar2 = *puVar9;
            }
            uStack_20 = 0;
            puVar7 = (undefined1 *)0x11f2;
            local_22 = -0x2eda;
            func_0x00018396();
            local_98 = local_98 + (uint)(0xfffe < local_9a);
          }
          local_98 = local_1a;
          for (local_9a = local_1c;
              (local_98 <= local_28 && ((local_98 < local_28 || (local_9a <= local_2a))));
              local_9a = local_9a + 1) {
            uStack_e._0_2_ = (undefined1 *)0xd1b6;
            uStack_e._2_2_ = puVar7;
            puVar9 = (undefined2 *)func_0x0000013f();
            puVar5 = (undefined2 *)puVar9;
            puVar6 = local_18;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar3 = puVar6;
              puVar6 = puVar6 + 1;
              puVar2 = puVar5;
              puVar5 = puVar5 + 1;
              *puVar3 = *puVar2;
            }
            puVar5 = &uStack_1e;
            puVar6 = local_18;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar5;
              puVar5 = puVar5 + 1;
              puVar9 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar2 = *puVar9;
            }
            uStack_20 = 0;
            puVar7 = (undefined1 *)0x11f2;
            local_22 = -0x2e23;
            func_0x00018396();
            local_98 = local_98 + (uint)(0xfffe < local_9a);
          }
          local_2c = 0;
          local_32 = 0;
        }
      } while (local_32 == 0);
      *(undefined2 *)0x1150 = 1;
      func_0x000297e6();
      func_0x00029d78();
      uStack_10 = 0x22b2;
      uStack_12 = 0xd211;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xd21a;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xd21f;
      func_0x00029d78();
      local_18[0] = 0x22b2;
      local_1a = 0xd229;
      func_0x000299d1();
      local_18[0] = 0x22b2;
      local_1a = -0x2dd2;
      lVar8 = FUN_13bf_39a0();
      *(undefined2 *)0x1150 = 0;
      local_30 = lVar8;
      if (lVar8 < 1) break;
      uStack_e._2_2_ = (undefined1 *)0x11f2;
      uStack_e._0_2_ = (undefined1 *)0xd25b;
      puVar9 = (undefined2 *)func_0x0000013f();
      puVar5 = (undefined2 *)puVar9;
      puVar6 = local_18;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar3 = puVar6;
        puVar6 = puVar6 + 1;
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar3 = *puVar2;
      }
      if ((unaff_DI & 0xc0) == 0) {
        puVar7 = (undefined1 *)0x11f2;
        uStack_e._2_2_ = (undefined1 *)0xd27c;
        func_0x00012276();
      }
      else {
        local_2c = 1;
        uStack_10 = 0;
        puVar7 = (undefined1 *)0x7a6;
        uStack_12 = 0xd298;
        uStack_e = local_30;
        func_0x00007be8();
        local_98 = local_1a;
        for (local_9a = local_1c;
            (local_98 <= local_28 && ((local_98 < local_28 || (local_9a <= local_2a))));
            local_9a = local_9a + 1) {
          uStack_e._0_2_ = (undefined1 *)0xd2d0;
          uStack_e._2_2_ = puVar7;
          uVar10 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar10 + 0x14);
          *pbVar1 = *pbVar1 & 0xbf;
          uStack_e._2_2_ = (undefined1 *)0x0;
          uStack_e._0_2_ = (undefined1 *)0xd2e8;
          uVar10 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar10 + 0x14);
          *pbVar1 = *pbVar1 & 0x7f;
          uStack_e._2_2_ = (undefined1 *)0x0;
          uStack_e._0_2_ = (undefined1 *)0xd300;
          puVar9 = (undefined2 *)func_0x0000013f();
          puVar5 = (undefined2 *)puVar9;
          puVar6 = local_18;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar3 = puVar6;
            puVar6 = puVar6 + 1;
            puVar2 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar3 = *puVar2;
          }
          puVar5 = &uStack_1e;
          puVar6 = local_18;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar5;
            puVar5 = puVar5 + 1;
            puVar9 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar9;
          }
          uStack_20 = 0;
          puVar7 = (undefined1 *)0x11f2;
          local_22 = -0x2cd5;
          func_0x00018396();
          local_98 = local_98 + (uint)(0xfffe < local_9a);
        }
        local_98 = local_1a;
        for (local_9a = local_1c;
            (local_98 <= local_28 && ((local_98 < local_28 || (local_9a <= local_2a))));
            local_9a = local_9a + 1) {
          uStack_e._0_2_ = (undefined1 *)0xd366;
          uStack_e._2_2_ = puVar7;
          puVar9 = (undefined2 *)func_0x0000013f();
          puVar5 = (undefined2 *)puVar9;
          puVar6 = local_18;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar3 = puVar6;
            puVar6 = puVar6 + 1;
            puVar2 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar3 = *puVar2;
          }
          puVar5 = &uStack_1e;
          puVar6 = local_18;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar5;
            puVar5 = puVar5 + 1;
            puVar9 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar9;
          }
          uStack_20 = 0;
          puVar7 = (undefined1 *)0x11f2;
          local_22 = -0x2c73;
          func_0x00018396();
          local_98 = local_98 + (uint)(0xfffe < local_9a);
        }
      }
    }
    puVar7 = (undefined1 *)0x11f2;
    uStack_e._2_2_ = (undefined1 *)0xd250;
    func_0x00012276();
  } while( true );
}



/* 3ab8:286f  FUN_3ab8_286f  3697 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003d636) */

undefined2 __cdecl16far FUN_3ab8_286f(int *param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined1 uVar11;
  long lVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  undefined2 *local_8f0 [50];
  undefined2 *local_88c;
  undefined1 local_88a;
  int local_868;
  uint local_83a;
  undefined1 local_838 [20];
  undefined2 auStack_824 [4];
  undefined2 local_81c;
  undefined2 uStack_81a;
  undefined2 uStack_818;
  undefined2 uStack_816;
  undefined2 auStack_74c [4];
  undefined2 local_744;
  undefined2 uStack_742;
  undefined2 uStack_740;
  undefined2 uStack_73e;
  uint local_690;
  undefined2 auStack_686 [4];
  undefined2 local_67e;
  undefined2 uStack_67c;
  undefined2 uStack_67a;
  undefined2 uStack_678;
  undefined2 local_5e6;
  undefined2 uStack_5e4;
  undefined2 uStack_5e2;
  undefined2 uStack_5e0;
  undefined2 auStack_5ce [4];
  undefined2 local_5c6;
  undefined2 uStack_5c4;
  undefined2 uStack_5c2;
  undefined2 uStack_5c0;
  undefined2 local_52e;
  undefined2 uStack_52c;
  undefined2 uStack_52a;
  undefined2 uStack_528;
  undefined2 local_526;
  undefined2 uStack_524;
  undefined2 uStack_522;
  undefined2 uStack_520;
  undefined4 local_51c;
  undefined1 local_518 [16];
  undefined2 local_508;
  undefined2 uStack_506;
  undefined2 uStack_504;
  undefined2 uStack_502;
  int local_500;
  undefined2 auStack_4fa [80];
  undefined2 local_45a;
  undefined2 uStack_458;
  undefined2 uStack_456;
  undefined2 uStack_454;
  undefined2 local_446;
  undefined2 local_444;
  undefined2 local_2ea;
  undefined2 local_2e8;
  undefined2 local_2e6;
  undefined2 local_2e4;
  undefined2 local_2e2;
  undefined2 local_2e0;
  undefined2 local_2de;
  undefined2 local_2dc;
  undefined1 local_2da;
  undefined1 local_2d9;
  undefined1 local_2d8;
  undefined2 local_2d4 [6];
  uint local_2c8;
  int local_2b4;
  int local_2aa;
  undefined2 local_2a8;
  undefined2 uStack_2a6;
  undefined2 uStack_2a4;
  undefined2 uStack_2a2;
  undefined2 auStack_2a0 [16];
  undefined2 local_280;
  undefined2 uStack_27e;
  undefined2 uStack_27c;
  undefined2 uStack_27a;
  undefined2 local_278;
  undefined2 uStack_276;
  undefined2 uStack_274;
  undefined2 uStack_272;
  undefined2 local_270;
  undefined2 uStack_26e;
  undefined2 uStack_26c;
  undefined2 uStack_26a;
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  int iStack_10;
  undefined2 **ppuStack_e;
  undefined1 *puStack_c;
  
  FUN_21f2_0ebc();
  FUN_1885_2ec3();
  uVar9 = 0x885;
  func_0x0000c3ca();
  for (local_690 = 1; (int)local_690 <= param_4 + -1; local_690 = local_690 + 1) {
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029d78();
    func_0x000299b9();
    uVar4 = local_690;
    func_0x000299d1();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029d78();
    func_0x000299b9();
    func_0x000299d1();
    func_0x00029834();
    func_0x00029c2c();
    func_0x00029834();
    func_0x00029c2c();
    FUN_28b3_117c();
    iStack_10 = 0x22b2;
    uStack_12 = 0xd4ac;
    func_0x000299d1();
    iStack_10 = 0x22b2;
    uVar9 = 0x22b2;
    uStack_12 = 0xd4b1;
    puVar6 = (undefined2 *)FUN_28b3_1582();
    auStack_4fa[uVar4 * 4] = *puVar6;
    auStack_4fa[uVar4 * 4 + 1] = puVar6[1];
    auStack_4fa[uVar4 * 4 + 2] = puVar6[2];
    auStack_4fa[uVar4 * 4 + 3] = puVar6[3];
  }
  local_2aa = 0;
  lVar12 = CONCAT22(local_51c._2_2_,(int)local_51c);
LAB_3ab8_2957:
  do {
    do {
      ppuStack_e = (undefined2 **)0xd4e5;
      puStack_c = (undefined1 *)uVar9;
      local_51c = lVar12;
      FUN_21f2_3454();
      puStack_c = (undefined1 *)0x22b2;
      ppuStack_e = (undefined2 **)0xd4f5;
      FUN_21f2_3454();
      local_88a = 0;
      if (local_2aa == 0) {
        puStack_c = (undefined1 *)0x22b2;
        ppuStack_e = (undefined2 **)0xd517;
        FUN_21f2_3454();
      }
      else {
        puStack_c = (undefined1 *)0x22b2;
        ppuStack_e = (undefined2 **)0xd527;
        FUN_21f2_3454();
        puStack_c = (undefined1 *)0x22b2;
        ppuStack_e = (undefined2 **)0xd538;
        FUN_21f2_2d26();
      }
      puStack_c = (undefined1 *)0x22b2;
      ppuStack_e = (undefined2 **)0xd548;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      ppuStack_e = (undefined2 **)0xd558;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      ppuStack_e = (undefined2 **)0xd568;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x22b2;
      ppuStack_e = (undefined2 **)0xd578;
      FUN_21f2_2d26();
      puStack_c = local_838;
      ppuStack_e = local_8f0;
      iStack_10 = 1;
      uStack_12 = 0x22b2;
      uVar9 = 0x1bb4;
      local_14 = 0xd597;
      local_2b4 = FUN_1def_0904();
      if (*(int *)0x158 != 0) {
        return 0xff91;
      }
      if (local_2b4 == -1) {
        if (local_2aa < 1) {
          return 0xffff;
        }
        local_2aa = local_2aa + -1;
        local_500 = 0;
      }
      lVar12 = local_51c;
    } while (local_500 == 0);
    func_0x0000c3ca();
    *(undefined2 *)0x1150 = 1;
    func_0x000297e6();
    func_0x00029d78();
    iStack_10 = 0x22b2;
    uStack_12 = 0xd5ee;
    func_0x000299d1();
    iStack_10 = 0x22b2;
    uStack_12 = 0xd5f7;
    func_0x000297e6();
    iStack_10 = 0x22b2;
    uStack_12 = 0xd5fc;
    func_0x00029d78();
    local_18 = 0x22b2;
    uStack_1a = 0xd606;
    func_0x000299d1();
    local_18 = 0x22b2;
    uVar9 = 0x11f2;
    uStack_1a = 0xd60b;
    lVar12 = FUN_13bf_39a0();
    *(undefined2 *)0x1150 = 0;
  } while (lVar12 == 0);
  local_51c = lVar12;
  if (lVar12 < 1) {
    puStack_c = local_518;
    iStack_10 = -(int)lVar12;
    ppuStack_e = (undefined2 **)-((int)((ulong)lVar12 >> 0x10) + (uint)((int)lVar12 != 0));
    uStack_12 = 0x11f2;
    uVar9 = 0x1bb4;
    local_14 = 0xd757;
    iVar7 = FUN_20a9_0ca3();
    lVar12 = local_51c;
    if (iVar7 == 0) goto LAB_3ab8_2957;
    uVar10 = local_51c._2_2_ + (uint)((int)local_51c != 0) != 0;
    puStack_c = (undefined1 *)0x1bb4;
    ppuStack_e = (undefined2 **)0xd777;
    puVar13 = (undefined2 *)func_0x00000271();
    puVar8 = (undefined2 *)puVar13;
    puVar6 = local_2d4;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar3 = puVar6;
      puVar6 = puVar6 + 1;
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = *puVar2;
    }
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    uVar9 = 0x22b2;
    FUN_28b3_1181();
    lVar12 = local_51c;
    if (((bool)uVar10) || (local_2c8 < 0x270c)) goto LAB_3ab8_2957;
    uVar10 = local_2c8 < 0x2714;
    uVar11 = local_2c8 == 0x2714;
    if (0x2714 < local_2c8) goto LAB_3ab8_2957;
    func_0x00029834();
    FUN_28b3_100d();
    func_0x00029ae7();
    func_0x00029834();
    FUN_28b3_100d();
    func_0x00029ae7();
    FUN_28b3_117c();
    func_0x00029834();
    FUN_28b3_100d();
    func_0x00029ae7();
    func_0x00029834();
    FUN_28b3_100d();
    func_0x00029ae7();
    FUN_28b3_117c();
    FUN_28b3_1181();
    if ((bool)uVar10 || (bool)uVar11) {
      func_0x00029834();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x00029834();
      FUN_28b3_100d();
      goto LAB_3ab8_2d09;
    }
    func_0x00029834();
    FUN_28b3_100d();
    func_0x00029af6();
    func_0x00029983();
    func_0x00029834();
    FUN_28b3_100d();
LAB_3ab8_2d0e:
    func_0x00029983();
  }
  else {
    uVar10 = 0;
    puStack_c = (undefined1 *)0xd64a;
    puVar13 = (undefined2 *)func_0x0000013f();
    puVar8 = (undefined2 *)puVar13;
    puVar6 = &local_20;
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar3 = puVar6;
      puVar6 = puVar6 + 1;
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = *puVar2;
    }
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x0002996b();
    FUN_28b3_0ee9();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x0002996b();
    FUN_28b3_0ee9();
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
    if ((bool)uVar10) {
      func_0x000297e6();
      func_0x00029af6();
      func_0x00029983();
      func_0x000297e6();
LAB_3ab8_2d09:
      func_0x00029af6();
      goto LAB_3ab8_2d0e;
    }
  }
  uVar10 = 0;
  uVar11 = local_2aa == 0;
  if ((bool)uVar11) {
    func_0x000297e6();
    func_0x00029af6();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029af6();
    func_0x00029983();
  }
  func_0x00029834();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x000297e6();
  func_0x00029b6d();
  FUN_28b3_117c();
  func_0x0002996b();
  func_0x00029d78();
  uVar9 = 0x22b2;
  FUN_28b3_1181();
  lVar12 = local_51c;
  if (!(bool)uVar10 && !(bool)uVar11) {
    func_0x000297e6();
    func_0x00029d78();
    iStack_10 = 0x22b2;
    uStack_12 = 0xd92e;
    func_0x000299d1();
    iStack_10 = 0x22b2;
    uStack_12 = 0xd933;
    FUN_28b3_1582();
    func_0x00029834();
    func_0x0002996b();
    func_0x00029b9d();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b85();
    func_0x0002996b();
    FUN_28b3_0ee9();
    local_2aa = local_2aa + 1;
    if (local_2aa == 1) {
      func_0x000297e6();
      func_0x00029d78();
      func_0x000299d1();
      func_0x000297e6();
      func_0x00029d78();
    }
    else {
      func_0x000297e6();
      func_0x00029d78();
      func_0x000299d1();
      func_0x000297e6();
      func_0x00029d78();
    }
    uVar9 = 0x22b2;
    func_0x000299d1();
    lVar12 = local_51c;
    if (1 < local_2aa) {
      local_446 = *(undefined2 *)0x9a88;
      local_444 = *(undefined2 *)0x9a8a;
      func_0x0000c3ca();
      local_278 = *(undefined2 *)0x9a8c;
      uStack_276 = *(undefined2 *)0x9a8e;
      uStack_274 = *(undefined2 *)0x9a90;
      uStack_272 = *(undefined2 *)0x9a92;
      local_270 = *(undefined2 *)0x9a70;
      uStack_26e = *(undefined2 *)0x9a72;
      uStack_26c = *(undefined2 *)0x9a74;
      uStack_26a = *(undefined2 *)0x9a76;
      local_280 = *(undefined2 *)0x9a8c;
      uStack_27e = *(undefined2 *)0x9a8e;
      uStack_27c = *(undefined2 *)0x9a90;
      uStack_27a = *(undefined2 *)0x9a92;
      local_744 = local_508;
      uStack_742 = uStack_506;
      uStack_740 = uStack_504;
      uStack_73e = uStack_502;
      local_5c6 = local_508;
      uStack_5c4 = uStack_506;
      uStack_5c2 = uStack_504;
      uStack_5c0 = uStack_502;
      local_81c = local_52e;
      uStack_81a = uStack_52c;
      uStack_818 = uStack_52a;
      uStack_816 = uStack_528;
      local_67e = local_52e;
      uStack_67c = uStack_52c;
      uStack_67a = uStack_52a;
      uStack_678 = uStack_528;
      auStack_2a0[param_4 * 0x10] = *(undefined2 *)0x9a70;
      auStack_2a0[param_4 * 0x10 + 1] = *(undefined2 *)0x9a72;
      auStack_2a0[param_4 * 0x10 + 2] = *(undefined2 *)0x9a74;
      auStack_2a0[param_4 * 0x10 + 3] = *(undefined2 *)0x9a76;
      auStack_2a0[param_4 * 0x10 + 4] = *(undefined2 *)0x9a8c;
      auStack_2a0[param_4 * 0x10 + 5] = *(undefined2 *)0x9a8e;
      auStack_2a0[param_4 * 0x10 + 6] = *(undefined2 *)0x9a90;
      auStack_2a0[param_4 * 0x10 + 7] = *(undefined2 *)0x9a92;
      auStack_2a0[param_4 * 0x10 + 8] = *(undefined2 *)0x9a8c;
      auStack_2a0[param_4 * 0x10 + 9] = *(undefined2 *)0x9a8e;
      auStack_2a0[param_4 * 0x10 + 10] = *(undefined2 *)0x9a90;
      auStack_2a0[param_4 * 0x10 + 0xb] = *(undefined2 *)0x9a92;
      auStack_74c[param_4 * 4] = local_526;
      auStack_74c[param_4 * 4 + 1] = uStack_524;
      auStack_74c[param_4 * 4 + 2] = uStack_522;
      auStack_74c[param_4 * 4 + 3] = uStack_520;
      auStack_5ce[param_4 * 4] = local_526;
      auStack_5ce[param_4 * 4 + 1] = uStack_524;
      auStack_5ce[param_4 * 4 + 2] = uStack_522;
      auStack_5ce[param_4 * 4 + 3] = uStack_520;
      auStack_824[param_4 * 4] = local_5e6;
      auStack_824[param_4 * 4 + 1] = uStack_5e4;
      auStack_824[param_4 * 4 + 2] = uStack_5e2;
      auStack_824[param_4 * 4 + 3] = uStack_5e0;
      auStack_686[param_4 * 4] = local_5e6;
      auStack_686[param_4 * 4 + 1] = uStack_5e4;
      auStack_686[param_4 * 4 + 2] = uStack_5e2;
      auStack_686[param_4 * 4 + 3] = uStack_5e0;
      for (local_690 = 2; (int)local_690 <= param_4 + -1; local_690 = local_690 + 1) {
        func_0x00029834();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x000299b9();
        func_0x00029c74();
        func_0x00029c2c();
        func_0x000299d1();
        func_0x00029834();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c44();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c44();
        func_0x00029c2c();
        FUN_28b3_117c();
        func_0x00029c2c();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c44();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c44();
        func_0x00029c2c();
        FUN_28b3_117c();
        func_0x00029c2c();
        func_0x000299d1();
      }
      for (local_690 = 2; uVar4 = local_690, (int)local_690 <= param_4 + -1;
          local_690 = local_690 + 1) {
        func_0x00029834();
        func_0x00029c44();
        func_0x000299d1();
        auStack_2a0[uVar4 * 0x10] = *(undefined2 *)0x9a70;
        auStack_2a0[uVar4 * 0x10 + 1] = *(undefined2 *)0x9a72;
        auStack_2a0[uVar4 * 0x10 + 2] = *(undefined2 *)0x9a74;
        auStack_2a0[uVar4 * 0x10 + 3] = *(undefined2 *)0x9a76;
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029bfc();
        func_0x000299d1();
        func_0x00029834();
        puStack_c = (undefined1 *)0xdc54;
        func_0x00029c2c();
        func_0x000299d1();
        uVar5 = local_690;
        local_8f0[0] = auStack_5ce + local_690 * 4;
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029bfc();
        func_0x000299d1();
        local_88c = auStack_686 + uVar5 * 4;
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029bfc();
        func_0x000299d1();
        local_2a8 = auStack_2a0[uVar4 * 0x10 + 4];
        uStack_2a6 = auStack_2a0[uVar4 * 0x10 + 5];
        uStack_2a4 = auStack_2a0[uVar4 * 0x10 + 6];
        uStack_2a2 = auStack_2a0[uVar4 * 0x10 + 7];
        auStack_2a0[uVar4 * 0x10 + 4] = *(undefined2 *)0x9a8c;
        auStack_2a0[uVar4 * 0x10 + 5] = *(undefined2 *)0x9a8e;
        auStack_2a0[uVar4 * 0x10 + 6] = *(undefined2 *)0x9a90;
        auStack_2a0[uVar4 * 0x10 + 7] = *(undefined2 *)0x9a92;
        func_0x00029834();
        puStack_c = (undefined1 *)0xdcea;
        FUN_28b3_112c();
        func_0x000299d1();
        func_0x00029834();
        puStack_c = (undefined1 *)0xdd03;
        FUN_28b3_112c();
        func_0x000299d1();
        func_0x00029834();
        puStack_c = (undefined1 *)0xdd1c;
        FUN_28b3_112c();
        func_0x000299d1();
      }
      auStack_74c[param_4 * 4] = auStack_5ce[param_4 * 4];
      auStack_74c[param_4 * 4 + 1] = auStack_5ce[param_4 * 4 + 1];
      auStack_74c[param_4 * 4 + 2] = auStack_5ce[param_4 * 4 + 2];
      auStack_74c[param_4 * 4 + 3] = auStack_5ce[param_4 * 4 + 3];
      auStack_824[param_4 * 4] = auStack_686[param_4 * 4];
      auStack_824[param_4 * 4 + 1] = auStack_686[param_4 * 4 + 1];
      auStack_824[param_4 * 4 + 2] = auStack_686[param_4 * 4 + 2];
      auStack_824[param_4 * 4 + 3] = auStack_686[param_4 * 4 + 3];
      local_690 = param_4;
      while (local_690 = local_690 + -1, 0 < (int)local_690) {
        func_0x00029834();
        func_0x00029834();
        func_0x00029834();
        func_0x000299b9();
        func_0x00029c9d();
        FUN_28b3_1163();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_1163();
        func_0x000299d1();
      }
      local_2d9 = *(undefined1 *)0xa6a;
      local_2da = *(undefined1 *)0xa6c;
      local_2d8 = *(undefined1 *)0xb310;
      uVar9 = 0x885;
      puStack_c = (undefined1 *)0xddf8;
      func_0x0000daa6();
      local_868 = param_4 + -1;
      local_2ea = *(undefined2 *)(param_2 + 4);
      local_2e8 = *(undefined2 *)(param_2 + 6);
      local_2e6 = *(undefined2 *)(param_3 + 4);
      local_2e4 = *(undefined2 *)(param_3 + 6);
      local_83a = 1;
      for (local_690 = 1; (int)local_690 <= local_868; local_690 = local_690 + 1) {
        func_0x000297e6();
        func_0x00029d78();
        func_0x000299d1();
        func_0x000297e6();
        func_0x00029d78();
        func_0x000299d1();
        uVar11 = (int)(local_690 << 2) < 0;
        uVar10 = (local_690 & 0x1fff) == 0;
        func_0x00029834();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029834();
        func_0x000299b9();
        FUN_28b3_1172();
        func_0x000299b9();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_1163();
        func_0x00029834();
        func_0x000299b9();
        FUN_28b3_1163();
        func_0x00029c44();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c44();
        func_0x000299b9();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_1163();
        func_0x00029834();
        func_0x000299b9();
        FUN_28b3_1163();
        func_0x00029c44();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029c74();
        func_0x00029c74();
        func_0x00029834();
        func_0x00029c2c();
        func_0x000299b9();
        FUN_28b3_1172();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029c74();
        func_0x00029c74();
        func_0x00029c44();
        func_0x000299d1();
        FUN_28b3_0d8b();
        func_0x000299d1();
        func_0x00029834();
        FUN_28b3_0d8b();
        FUN_28b3_1172();
        func_0x000299d1();
        local_45a = *(undefined2 *)0x9a70;
        uStack_458 = *(undefined2 *)0x9a72;
        uStack_456 = *(undefined2 *)0x9a74;
        uStack_454 = *(undefined2 *)0x9a76;
        local_2b4 = 1;
        while( true ) {
          func_0x00029834();
          FUN_28b3_0d8b();
          uVar9 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar11 && !(bool)uVar10) break;
          func_0x00029834();
          puStack_c = (undefined1 *)0xdf13;
          func_0x00029c74();
          func_0x000299d1();
          func_0x00029834();
          FUN_28b3_0d8b();
          FUN_28b3_1181();
          if ((bool)uVar10) {
            iVar7 = local_690 * 4;
            local_2e2 = *(undefined2 *)(param_2 + iVar7 + 4);
            local_2e0 = *(undefined2 *)(param_2 + iVar7 + 6);
            local_2de = *(undefined2 *)(param_3 + iVar7 + 4);
            local_2dc = *(undefined2 *)(param_3 + iVar7 + 6);
          }
          else {
            func_0x00029834();
            func_0x00029c2c();
            func_0x00029c74();
            func_0x00029c2c();
            func_0x00029c74();
            func_0x00029c2c();
            func_0x00029c74();
            func_0x00029983();
            func_0x00029834();
            func_0x00029c2c();
            func_0x00029c74();
            func_0x00029c2c();
            func_0x00029c74();
            func_0x00029c2c();
            func_0x00029c74();
            func_0x00029983();
          }
          puVar8 = &local_1c;
          puVar6 = &local_2ea;
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar13 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar13;
          }
          local_20 = 0xded6;
          iVar7 = FUN_17a6_0cba();
          if (iVar7 != 0) {
            if ((local_690 == local_83a) && (local_2b4 == 1)) {
              puStack_c = (undefined1 *)0x11f2;
              ppuStack_e = (undefined2 **)0xdf80;
              uVar14 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar14 + 0x14);
              *pbVar1 = *pbVar1 | 0x40;
              puStack_c = (undefined1 *)0x0;
              ppuStack_e = (undefined2 **)0xdf98;
              uVar14 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar14 + 0x14);
              *pbVar1 = *pbVar1 & 0x7f;
            }
            else {
              puStack_c = (undefined1 *)0x11f2;
              ppuStack_e = (undefined2 **)0xdfb2;
              uVar14 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar14 + 0x14);
              *pbVar1 = *pbVar1 & 0xbf;
              puStack_c = (undefined1 *)0x0;
              ppuStack_e = (undefined2 **)0xdfca;
              uVar14 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar14 + 0x14);
              *pbVar1 = *pbVar1 | 0x80;
            }
            *param_1 = *param_1 + 1;
            local_2ea = local_2e2;
            local_2e8 = local_2e0;
            local_2e6 = local_2de;
            local_2e4 = local_2dc;
          }
          uVar11 = 0;
          local_2b4 = local_2b4 + 1;
          uVar10 = local_2b4 == 0;
        }
      }
      ppuStack_e = (undefined2 **)0xe234;
      puStack_c = (undefined1 *)uVar9;
      uVar14 = func_0x0000013f();
      pbVar1 = (byte *)((int)uVar14 + 0x14);
      *pbVar1 = *pbVar1 | 0x40;
      puStack_c = (undefined1 *)0x0;
      ppuStack_e = (undefined2 **)0xe24c;
      uVar14 = func_0x0000013f();
      pbVar1 = (byte *)((int)uVar14 + 0x14);
      *pbVar1 = *pbVar1 | 0x80;
      return 1;
    }
  }
  goto LAB_3ab8_2957;
}



/* 3ab8:36e0  FUN_3ab8_36e0  2624 bytes, 1 callers */

void FUN_3ab8_36e0(undefined2 param_1,int param_2)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  undefined2 *puVar4;
  byte bVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined2 uVar11;
  int *piVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  int aiStack_16e0 [244];
  int aiStack_14f8 [228];
  int aiStack_1330 [228];
  undefined2 auStack_1168 [228];
  undefined2 auStack_fa0 [684];
  undefined2 auStack_a48 [16];
  undefined2 uStack_a28;
  undefined2 uStack_a26;
  undefined2 uStack_a24;
  undefined2 uStack_a22;
  undefined2 uStack_a20;
  undefined2 uStack_a1e;
  undefined2 uStack_a1c;
  undefined2 uStack_a1a;
  undefined2 uStack_a18;
  undefined2 uStack_a16;
  undefined2 uStack_a14;
  undefined2 uStack_a12;
  undefined2 *local_328;
  int local_324;
  int local_322;
  undefined2 local_320;
  undefined2 uStack_31e;
  undefined2 uStack_31c;
  undefined2 uStack_31a;
  undefined1 local_30c [20];
  int iStack_2f8;
  int local_2f6;
  int local_2f4;
  int iStack_2f2;
  undefined2 local_2f0;
  undefined2 local_2ee;
  int local_2ec;
  int local_2ea;
  int local_2e6;
  int local_2e4;
  int local_2e2;
  int local_2e0;
  undefined2 *local_2de;
  int local_2dc;
  int iStack_2da;
  int local_2d8;
  int local_2d6 [46];
  int aiStack_27a [4];
  int local_272;
  undefined2 local_270;
  int local_26e;
  int iStack_26c;
  int local_26a;
  int iStack_268;
  int iStack_262;
  int iStack_260;
  int iStack_25e;
  int iStack_25c;
  int local_18e;
  int *local_18c;
  int aiStack_18a [4];
  int local_182;
  undefined2 local_180;
  int local_17e;
  int iStack_17c;
  int local_17a;
  int iStack_178;
  int iStack_172;
  int iStack_170;
  int iStack_16e;
  int iStack_16c;
  undefined2 *local_9e;
  int local_9c;
  int aiStack_96 [2];
  undefined2 *local_92;
  int local_90;
  undefined2 *puStack_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  int iStack_88;
  int iStack_86;
  int iStack_84;
  int iStack_82;
  int iStack_80;
  int iStack_7e;
  int iStack_7c;
  int iStack_7a;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  int *local_72;
  undefined2 *local_70;
  int local_6e;
  int local_6c [3];
  undefined1 local_66 [58];
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  int aiStack_1c [3];
  undefined2 uStack_16;
  undefined2 uStack_14;
  int *piStack_12;
  int *piStack_10;
  int *piStack_e;
  int *piStack_c;
  
  FUN_21f2_0ebc();
  local_2d8 = 0x32;
  local_272 = *(undefined2 *)0x9aac;
  local_270 = *(undefined2 *)0x9aae;
  local_9e = (int *)0x0;
  local_18e = 0;
  local_90 = 0;
  local_182 = local_272;
  local_180 = local_270;
LAB_3ab8_371c:
  local_92 = (int *)0x0;
LAB_3ab8_3722:
  uVar11 = 0x1b6e;
  FUN_1885_2ec3();
  local_18c = (int *)0x0;
  for (local_2de = (int *)0x2; (int)local_2de <= (int)local_92;
      local_2de = (undefined2 *)((int)local_2de + 1)) {
    piStack_c = (int *)0xe2c8;
    func_0x000297e6();
    piStack_c = (int *)0xe2cd;
    func_0x00029d78();
    piStack_12 = (int *)0x22b2;
    uStack_14 = 0xe2d7;
    func_0x000299d1();
    piStack_12 = (int *)0x22b2;
    uStack_14 = 0xe2e0;
    func_0x000297e6();
    piStack_12 = (int *)0x22b2;
    uStack_14 = 0xe2e5;
    func_0x00029d78();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x1d11;
    func_0x000299d1();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x1d08;
    func_0x000297e6();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x1d03;
    func_0x00029d78();
    uStack_22 = 0x22b2;
    uStack_24 = 0xe307;
    func_0x000299d1();
    uStack_22 = 0x22b2;
    uStack_24 = 0xe310;
    func_0x000297e6();
    uStack_22 = 0x22b2;
    uStack_24 = 0xe315;
    func_0x00029d78();
    uStack_2a = 0x22b2;
    uStack_2c = 0xe31f;
    func_0x000299d1();
    uStack_2a = 0x22b2;
    uVar11 = 0x1bb4;
    uStack_2c = 0xe324;
    func_0x0001e18f();
  }
LAB_3ab8_37b8:
  piStack_c = (int *)uVar11;
  if ((int)local_92 < 3) {
    piStack_e = (int *)0xe358;
    FUN_21f2_3454();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xe368;
    FUN_21f2_2d26();
  }
  else {
    piStack_e = (int *)0xe378;
    FUN_21f2_3454();
  }
  if (local_92 == (int *)0x0) {
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xe38e;
    FUN_21f2_3454();
  }
  if (local_92 == (int *)0x1) {
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xe3a4;
    FUN_21f2_3454();
  }
  if (1 < (int)local_92) {
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xe3ba;
    FUN_21f2_3454();
  }
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xe3ca;
  FUN_21f2_2d26();
  piStack_c = (int *)0x3cc2;
  piStack_e = (int *)local_66;
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xe3e6;
  FUN_21f2_3454();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xe3f7;
  FUN_21f2_2d26();
  if ((int)local_92 + local_18e < 1) {
    local_72 = (int *)0x2710;
  }
  else {
    local_72 = (int *)0x270f;
  }
  if (local_92 == (int *)0x0) {
    *(undefined2 *)0xc2c = 1;
    *(undefined2 *)0xc20 = 1;
    piStack_c = &local_2ec;
    piStack_e = local_2d6;
    piStack_10 = local_72;
    piStack_12 = (int *)0x22b2;
    piVar12 = (int *)0x1bb4;
    uStack_14 = 0xe43d;
    local_2dc = FUN_1def_0904();
    *(undefined2 *)0xc2c = 0;
    *(undefined2 *)0xc20 = 0;
    if ((*(int *)0x158 != 0) || (local_2dc == 0x14)) goto LAB_3ab8_38d2;
  }
  else {
    func_0x0000c340();
    piStack_c = (int *)0x885;
    piStack_e = (int *)0xe476;
    func_0x00012276();
    piVar10 = (int *)0xdef;
    func_0x00010526();
    local_2e6 = *(int *)0x9ab0;
    local_2e4 = *(int *)0x9ab2;
    local_9c = 0;
    local_2e2 = local_2e6;
    local_2e0 = local_2e4;
    do {
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xa4a = 1;
      piStack_c = &local_2ec;
      piStack_e = &local_6e;
      piStack_10 = local_6c;
      uStack_14 = 0xe4bf;
      piStack_12 = piVar10;
      local_2dc = func_0x00006608();
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xa4a = 0;
      uVar14 = *(int *)0x158 == 0;
      if (!(bool)uVar14) goto LAB_3ab8_38d2;
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar14) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar14) goto LAB_3ab8_3989;
LAB_3ab8_3993:
        piVar10 = (int *)0x22b2;
      }
      else {
LAB_3ab8_3989:
        if (local_2d8 <= (int)local_92) goto LAB_3ab8_3993;
        if (local_9c != 0) {
          piStack_c = (int *)0x1;
          piStack_e = (int *)0x1;
          piStack_10 = (int *)0x1;
          piStack_12 = (int *)0x22b2;
          uStack_14 = 0xe52d;
          func_0x0001b911();
        }
        func_0x000297e6();
        uVar14 = ((uint)local_9e & 0x3fff) == 0;
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar14) {
          func_0x000297e6();
          func_0x000297e6();
          piVar10 = (int *)0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar14) goto LAB_3ab8_39f2;
          local_9c = 0;
        }
        else {
LAB_3ab8_39f2:
          piStack_c = (int *)0xe57f;
          func_0x000297e6();
          piStack_c = (int *)0xe584;
          func_0x00029d78();
          piStack_12 = (int *)0x22b2;
          uStack_14 = 0xe58e;
          func_0x000299d1();
          piStack_12 = (int *)0x22b2;
          uStack_14 = 0xe597;
          func_0x000297e6();
          piStack_12 = (int *)0x22b2;
          uStack_14 = 0xe59c;
          func_0x00029d78();
          aiStack_1c[1] = 0x22b2;
          aiStack_1c[0] = -0x1a5a;
          func_0x000299d1();
          aiStack_1c[1] = 0x22b2;
          aiStack_1c[0] = -0x1a49;
          func_0x000297e6();
          aiStack_1c[1] = 0x22b2;
          aiStack_1c[0] = -0x1a44;
          func_0x00029d78();
          uStack_22 = 0x22b2;
          uStack_24 = 0xe5c6;
          func_0x000299d1();
          uStack_22 = 0x22b2;
          uStack_24 = 0xe5cf;
          func_0x000297e6();
          uStack_22 = 0x22b2;
          uStack_24 = 0xe5d4;
          func_0x00029d78();
          uStack_2a = 0x22b2;
          uStack_2c = 0xe5de;
          func_0x000299d1();
          uStack_2a = 0x22b2;
          piVar10 = (int *)0x1bb4;
          uStack_2c = 0xe5e3;
          func_0x0001e18f();
          local_9c = 1;
        }
        local_2e2 = local_2ec;
        local_2e0 = local_2ea;
        local_2e6 = local_2f6;
        local_2e4 = local_2f4;
      }
      if ((local_2dc == -1) || (local_2dc == 99)) goto LAB_3ab8_3a9a;
      if (local_18c != (int *)0x0) {
        if (*(int *)0xa5e < local_6e) goto LAB_3ab8_3a9a;
        if (((0x32 < local_6c[0]) && (local_6c[0] < 0xaa)) && (2 < (int)local_92)) break;
      }
    } while (((int)local_92 < 3) || (local_2dc != 0x31));
    local_2dc = 1;
LAB_3ab8_3a9a:
    piVar12 = piVar10;
    if (local_9c != 0) {
      piStack_c = (int *)0x1;
      piStack_e = (int *)0x1;
      piStack_10 = (int *)0x1;
      piVar12 = (int *)0x1b6e;
      uStack_14 = 0xe631;
      piStack_12 = piVar10;
      func_0x0001b911();
    }
  }
  if (*(int *)0x158 != 0) goto LAB_3ab8_38d2;
  if ((2 < (int)local_92) && (local_2dc == 1)) goto LAB_3ab8_3b0d;
  if ((local_2dc != -1) || (local_18e < 1)) {
    if ((local_2dc == -1) && (0 < (int)local_92)) {
      local_18c = (int *)0x0;
      local_9e = (undefined2 *)((int)local_92 + -1);
      local_92 = local_9e;
    }
    if (local_2dc == 99) {
      local_18c = (int *)0x0;
    }
    if ((local_18c == (int *)0x2) && (2 < (int)local_92)) {
      local_8c = *(undefined2 *)0x9ab4;
      local_8a = *(undefined2 *)0x9ab6;
      local_70 = (int *)0x0;
      local_2de = (int *)0x1;
      while( true ) {
        uVar14 = local_92 < local_2de;
        uVar13 = local_92 == local_2de;
        if ((int)local_92 < (int)local_2de) break;
        func_0x000297e6();
        uVar14 = (int)local_2de << 1 < 0;
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        FUN_28b3_117c();
        func_0x0002996b();
        FUN_28b3_1181();
        if ((bool)uVar14) {
          local_70 = local_2de;
          func_0x000297e6();
          func_0x00029983();
        }
        local_2de = (undefined2 *)((int)local_2de + 1);
      }
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029834();
      func_0x00029b85();
      piVar12 = (int *)0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar14 && !(bool)uVar13) {
        local_2ec = aiStack_18a[(int)local_70 * 2 + 4];
        local_2ea = aiStack_18a[(int)local_70 * 2 + 5];
        local_2f6 = aiStack_27a[(int)local_70 * 2 + 4];
        local_2f4 = aiStack_27a[(int)local_70 * 2 + 5];
        local_18c = (int *)0x1;
      }
    }
    if (local_18c != (int *)0x0) {
      piStack_c = local_18c;
      piStack_10 = (int *)0xe8a7;
      piStack_e = piVar12;
      iVar6 = func_0x00015409();
      if (iVar6 == 0) {
        local_18c = (int *)0x0;
      }
    }
    if (local_18c != (int *)0x0) {
      local_18e = 0;
      if ((int)local_92 < local_2d8) {
        func_0x00029834();
        uVar14 = (int)local_9e << 1 < 0;
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        func_0x00029d78();
        FUN_28b3_1181();
        if ((bool)uVar14) {
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          FUN_28b3_1181();
          if (!(bool)uVar14) goto LAB_3ab8_3e0e;
          piStack_c = (int *)0xe96b;
          func_0x00012276();
          *(undefined2 *)0xc22 = 1;
          piStack_c = (int *)0x11f2;
          piStack_e = (int *)0xe97f;
          FUN_1000_0599();
          uVar11 = 0x11f2;
          piStack_c = (int *)0xe98a;
          func_0x00012276();
        }
        else {
LAB_3ab8_3e0e:
          uVar11 = 0x22b2;
          piVar10 = (int *)((int)local_92 + 1);
          local_9e = piVar10;
          local_92 = piVar10;
          aiStack_18a[(int)piVar10 * 2 + 4] = local_2ec;
          aiStack_18a[(int)piVar10 * 2 + 5] = local_2ea;
          aiStack_27a[(int)piVar10 * 2 + 4] = local_2f6;
          aiStack_27a[(int)piVar10 * 2 + 5] = local_2f4;
          if (1 < (int)piVar10) {
            piStack_c = (int *)0xe9d5;
            func_0x000297e6();
            piStack_c = (int *)0xe9da;
            func_0x00029d78();
            piStack_12 = (int *)0x22b2;
            uStack_14 = 0xe9e4;
            func_0x000299d1();
            piStack_12 = (int *)0x22b2;
            uStack_14 = 0xe9ed;
            func_0x000297e6();
            piStack_12 = (int *)0x22b2;
            uStack_14 = 0xe9f2;
            func_0x00029d78();
            aiStack_1c[1] = 0x22b2;
            aiStack_1c[0] = -0x1604;
            func_0x000299d1();
            aiStack_1c[1] = 0x22b2;
            aiStack_1c[0] = -0x15fb;
            func_0x000297e6();
            aiStack_1c[1] = 0x22b2;
            aiStack_1c[0] = -0x15f6;
            func_0x00029d78();
            uStack_22 = 0x22b2;
            uStack_24 = 0xea14;
            func_0x000299d1();
            uStack_22 = 0x22b2;
            uStack_24 = 0xea1d;
            func_0x000297e6();
            uStack_22 = 0x22b2;
            uStack_24 = 0xea22;
            func_0x00029d78();
            uStack_2a = 0x22b2;
            uStack_2c = 0xea2c;
            func_0x000299d1();
            uStack_2a = 0x22b2;
            uVar11 = 0x1bb4;
            uStack_2c = 0xea31;
            func_0x0001e18f();
          }
        }
      }
      else {
        piStack_c = (int *)0xe8d5;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
        piStack_c = (int *)0x11f2;
        piStack_e = (int *)0xe8e9;
        FUN_1000_0599();
        piStack_c = (int *)0x3cdd;
        piStack_e = (int *)0xdef;
        uVar11 = 0x11f2;
        piStack_10 = (int *)0xe8fc;
        func_0x00012276();
      }
      goto LAB_3ab8_37b8;
    }
    goto LAB_3ab8_3722;
  }
  piStack_c = (int *)0xe6d3;
  func_0x0000daa6();
  func_0x0000c3ca();
  uVar11 = 0x885;
  for (; 0 < local_18e; local_18e = local_18e + -1) {
    local_2f0 = *(undefined2 *)0x148;
    local_2ee = *(undefined2 *)0x14a;
    piStack_e = (int *)0xe6f1;
    piStack_c = (int *)uVar11;
    func_0x00018779();
    uVar11 = 0x11f2;
  }
  if (local_90 == 1) {
    local_9e = local_9e + -2;
    for (local_2de = (int *)0x1; (int)local_2de <= (int)local_9e;
        local_2de = (int *)((int)local_2de + 1)) {
      iVar6 = aiStack_18a[(int)local_2de * 2 + 9];
      aiStack_18a[(int)local_2de * 2 + 4] = aiStack_18a[(int)local_2de * 2 + 8];
      aiStack_18a[(int)local_2de * 2 + 5] = iVar6;
      iVar6 = aiStack_27a[(int)local_2de * 2 + 9];
      aiStack_27a[(int)local_2de * 2 + 4] = aiStack_27a[(int)local_2de * 2 + 8];
      aiStack_27a[(int)local_2de * 2 + 5] = iVar6;
    }
  }
  local_18e = 0;
  local_92 = local_9e;
  func_0x0000abfa();
  piVar12 = (int *)0x885;
  piStack_c = (int *)0xe762;
  func_0x0000b1d8();
LAB_3ab8_3b0d:
  local_18e = 0;
LAB_3ab8_3b13:
  piStack_e = (int *)0xe6a1;
  piStack_c = piVar12;
  func_0x00024c86();
  uVar11 = 0x1b6e;
  FUN_1885_2ec3();
  local_18c = (int *)0x0;
  for (local_2de = (int *)0x2; (int)local_2de <= (int)local_9e;
      local_2de = (undefined2 *)((int)local_2de + 1)) {
    piStack_c = (int *)0xea58;
    func_0x000297e6();
    piStack_c = (int *)0xea5d;
    func_0x00029d78();
    piStack_12 = (int *)0x22b2;
    uStack_14 = 0xea67;
    func_0x000299d1();
    piStack_12 = (int *)0x22b2;
    uStack_14 = 0xea70;
    func_0x000297e6();
    piStack_12 = (int *)0x22b2;
    uStack_14 = 0xea75;
    func_0x00029d78();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x1581;
    func_0x000299d1();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x1578;
    func_0x000297e6();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x1573;
    func_0x00029d78();
    uStack_22 = 0x22b2;
    uStack_24 = 0xea97;
    func_0x000299d1();
    uStack_22 = 0x22b2;
    uStack_24 = 0xeaa0;
    func_0x000297e6();
    uStack_22 = 0x22b2;
    uStack_24 = 0xeaa5;
    func_0x00029d78();
    uStack_2a = 0x22b2;
    uStack_2c = 0xeaaf;
    func_0x000299d1();
    uStack_2a = 0x22b2;
    uVar11 = 0x1bb4;
    uStack_2c = 0xeab4;
    func_0x0001e18f();
  }
  piStack_e = (int *)0xead3;
  piStack_c = (int *)uVar11;
  func_0x00024c86();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xeae3;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xeaf3;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xeb03;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xeb13;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xeb24;
  FUN_21f2_2d26();
  piStack_c = (int *)local_30c;
  piStack_e = (int *)0x22b2;
  piStack_10 = (int *)0xeb38;
  FUN_21f2_3454();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xeb4a;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xeb5a;
  FUN_21f2_2d26();
  if (param_2 == 1) {
    func_0x000297e6();
    uVar14 = ((uint)local_9e & 0x3fff) == 0;
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar14) goto LAB_3ab8_4061;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar14) goto LAB_3ab8_4061;
    local_90 = *(int *)0x114e;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xebb1;
    FUN_21f2_2d26();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xebcd;
    FUN_21f2_2d26();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xebdd;
    FUN_21f2_2d26();
  }
  else {
LAB_3ab8_4061:
    local_90 = 0;
  }
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xebf5;
  FUN_1def_07a4();
  piStack_c = &local_2ec;
  piStack_e = local_2d6;
  piStack_10 = (int *)0x270f;
  piStack_12 = (int *)0x1bb4;
  piVar12 = (int *)0x1bb4;
  uStack_14 = 0xec14;
  local_2dc = FUN_1def_0904();
  if (*(int *)0x158 != 0) goto LAB_3ab8_38d2;
  if (((param_2 == 1) && (local_18c != (int *)0x0)) && (0x13 < *(byte *)0x123)) {
    piStack_c = &local_324;
    piStack_e = &local_322;
    piStack_10 = (int *)0x1bb4;
    piStack_12 = (int *)0xec52;
    func_0x0000dcbd();
    bVar5 = func_0x0000db57();
    if ((bVar5 & 0xe) != 4) {
      piVar12 = (int *)0x885;
      bVar5 = func_0x0000db57();
      if ((bVar5 & 0xe) != 2) goto LAB_3ab8_4128;
    }
    piVar12 = (int *)0x885;
    if ((int)local_328 < 0xe) goto code_r0x0003ec72;
  }
LAB_3ab8_4128:
  if (local_2dc == -1) goto LAB_3ab8_3722;
  if (local_2dc == 1) {
    FUN_1885_2ec3();
    func_0x0000c3ca();
    if (param_2 == 1) {
      if (local_90 == 1) {
        for (local_2de = local_9e; puVar4 = local_9e, 0 < (int)local_2de;
            local_2de = (int *)((int)local_2de + -1)) {
          iVar6 = aiStack_18a[(int)local_2de * 2 + 5];
          aiStack_18a[(int)local_2de * 2 + 8] = aiStack_18a[(int)local_2de * 2 + 4];
          aiStack_18a[(int)local_2de * 2 + 9] = iVar6;
          iVar6 = aiStack_27a[(int)local_2de * 2 + 5];
          aiStack_27a[(int)local_2de * 2 + 8] = aiStack_27a[(int)local_2de * 2 + 4];
          aiStack_27a[(int)local_2de * 2 + 9] = iVar6;
        }
        local_9e = local_9e + 1;
        local_17e = aiStack_18a[(int)local_9e * 2];
        iStack_17c = aiStack_18a[(int)local_9e * 2 + 1];
        local_26e = aiStack_27a[(int)local_9e * 2];
        iStack_26c = aiStack_27a[(int)local_9e * 2 + 1];
        local_17a = aiStack_18a[(int)local_9e * 2 + 2];
        iStack_178 = aiStack_18a[(int)local_9e * 2 + 3];
        local_26a = aiStack_27a[(int)local_9e * 2 + 2];
        iStack_268 = aiStack_27a[(int)local_9e * 2 + 3];
        iVar6 = (int)puVar4 + 3;
        local_9e = (undefined2 *)iVar6;
        aiStack_18a[iVar6 * 2 + 4] = iStack_172;
        aiStack_18a[iVar6 * 2 + 5] = iStack_170;
        aiStack_27a[iVar6 * 2 + 4] = iStack_262;
        aiStack_27a[iVar6 * 2 + 5] = iStack_260;
        piVar10 = (int *)((int)local_9e + 1);
        local_9e = piVar10;
        aiStack_18a[(int)piVar10 * 2 + 4] = iStack_16e;
        aiStack_18a[(int)piVar10 * 2 + 5] = iStack_16c;
        aiStack_27a[(int)piVar10 * 2 + 4] = iStack_25e;
        aiStack_27a[(int)piVar10 * 2 + 5] = iStack_25c;
      }
      for (local_2de = (undefined2 *)0x1; puVar4 = local_9e, (int)local_2de <= (int)local_9e + -1;
          local_2de = (undefined2 *)((int)local_2de + 1)) {
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        puVar4 = local_2de;
        func_0x000299d1();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299b9();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_117c();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xefb5;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xefba;
        puVar7 = (undefined2 *)FUN_28b3_1582();
        auStack_fa0[(int)puVar4 * 4] = *puVar7;
        auStack_fa0[(int)puVar4 * 4 + 1] = puVar7[1];
        auStack_fa0[(int)puVar4 * 4 + 2] = puVar7[2];
        auStack_fa0[(int)puVar4 * 4 + 3] = puVar7[3];
      }
      uStack_a20 = *(undefined2 *)0x9a8c;
      uStack_a1e = *(undefined2 *)0x9a8e;
      uStack_a1c = *(undefined2 *)0x9a90;
      uStack_a1a = *(undefined2 *)0x9a92;
      uStack_a18 = *(undefined2 *)0x9a50;
      uStack_a16 = *(undefined2 *)0x9a52;
      uStack_a14 = *(undefined2 *)0x9a54;
      uStack_a12 = *(undefined2 *)0x9a56;
      uStack_a28 = *(undefined2 *)0x9a8c;
      uStack_a26 = *(undefined2 *)0x9a8e;
      uStack_a24 = *(undefined2 *)0x9a90;
      uStack_a22 = *(undefined2 *)0x9a92;
      iVar6 = (int)local_9e * 0x10;
      auStack_a48[(int)local_9e * 0x10] = *(undefined2 *)0x9a8c;
      auStack_a48[iVar6 + 1] = *(undefined2 *)0x9a8e;
      auStack_a48[(int)puVar4 * 0x10 + 2] = *(undefined2 *)0x9a90;
      auStack_a48[(int)puVar4 * 0x10 + 3] = *(undefined2 *)0x9a92;
      auStack_a48[(int)puVar4 * 0x10 + 4] = *(undefined2 *)0x9a94;
      auStack_a48[(int)puVar4 * 0x10 + 5] = *(undefined2 *)0x9a96;
      auStack_a48[(int)puVar4 * 0x10 + 6] = *(undefined2 *)0x9a98;
      auStack_a48[(int)puVar4 * 0x10 + 7] = *(undefined2 *)0x9a9a;
      auStack_a48[(int)puVar4 * 0x10 + 8] = *(undefined2 *)0x9a8c;
      auStack_a48[(int)puVar4 * 0x10 + 9] = *(undefined2 *)0x9a8e;
      auStack_a48[(int)puVar4 * 0x10 + 10] = *(undefined2 *)0x9a90;
      auStack_a48[(int)puVar4 * 0x10 + 0xb] = *(undefined2 *)0x9a92;
      func_0x00029834();
      func_0x00029c44();
      func_0x00029c2c();
      func_0x000299d1();
      func_0x00029834();
      func_0x00029c44();
      func_0x00029c2c();
      func_0x000299d1();
      func_0x00029834();
      func_0x00029834();
      func_0x000299b9();
      FUN_28b3_1172();
      func_0x00029c2c();
      func_0x000299d1();
      func_0x00029834();
      func_0x00029c44();
      func_0x00029c2c();
      func_0x000299d1();
      for (local_2de = (undefined2 *)0x2; (int)local_2de <= (int)local_9e + -1;
          local_2de = (undefined2 *)((int)local_2de + 1)) {
        func_0x00029834();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x000299b9();
        func_0x00029c74();
        func_0x00029c2c();
        func_0x000299d1();
        func_0x00029834();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c44();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c44();
        func_0x00029c2c();
        FUN_28b3_117c();
        func_0x00029c2c();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c44();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c44();
        func_0x00029c2c();
        FUN_28b3_117c();
        func_0x00029c2c();
        func_0x000299d1();
      }
      for (local_2de = (undefined2 *)0x2; puVar4 = local_2de, (int)local_2de <= (int)local_9e;
          local_2de = (undefined2 *)((int)local_2de + 1)) {
        func_0x00029834();
        func_0x00029c44();
        func_0x000299d1();
        auStack_a48[(int)puVar4 * 0x10] = *(undefined2 *)0x9a70;
        auStack_a48[(int)puVar4 * 0x10 + 1] = *(undefined2 *)0x9a72;
        auStack_a48[(int)puVar4 * 0x10 + 2] = *(undefined2 *)0x9a74;
        auStack_a48[(int)puVar4 * 0x10 + 3] = *(undefined2 *)0x9a76;
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029bfc();
        func_0x000299d1();
        func_0x00029834();
        piStack_c = (int *)0xf262;
        func_0x00029c2c();
        func_0x000299d1();
        puVar7 = local_2de;
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029bfc();
        func_0x000299d1();
        local_328 = aiStack_1330 + (int)puVar7 * 4;
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029bfc();
        func_0x000299d1();
        local_320 = auStack_a48[(int)puVar4 * 0x10 + 4];
        uStack_31e = auStack_a48[(int)puVar4 * 0x10 + 5];
        uStack_31c = auStack_a48[(int)puVar4 * 0x10 + 6];
        uStack_31a = auStack_a48[(int)puVar4 * 0x10 + 7];
        auStack_a48[(int)puVar4 * 0x10 + 4] = *(undefined2 *)0x9a8c;
        auStack_a48[(int)puVar4 * 0x10 + 5] = *(undefined2 *)0x9a8e;
        auStack_a48[(int)puVar4 * 0x10 + 6] = *(undefined2 *)0x9a90;
        auStack_a48[(int)puVar4 * 0x10 + 7] = *(undefined2 *)0x9a92;
        func_0x00029834();
        piStack_c = (int *)0xf2f8;
        FUN_28b3_112c();
        func_0x000299d1();
        func_0x00029834();
        piStack_c = (int *)0xf311;
        FUN_28b3_112c();
        func_0x000299d1();
        func_0x00029834();
        piStack_c = (int *)0xf32a;
        FUN_28b3_112c();
        func_0x000299d1();
      }
      aiStack_14f8[(int)local_9e * 4] = auStack_1168[(int)local_9e * 4];
      aiStack_14f8[(int)local_9e * 4 + 1] = auStack_1168[(int)local_9e * 4 + 1];
      aiStack_14f8[(int)local_9e * 4 + 2] = auStack_1168[(int)local_9e * 4 + 2];
      aiStack_14f8[(int)local_9e * 4 + 3] = auStack_1168[(int)local_9e * 4 + 3];
      aiStack_16e0[(int)local_9e * 4] = aiStack_1330[(int)local_9e * 4];
      aiStack_16e0[(int)local_9e * 4 + 1] = aiStack_1330[(int)local_9e * 4 + 1];
      aiStack_16e0[(int)local_9e * 4 + 2] = aiStack_1330[(int)local_9e * 4 + 2];
      aiStack_16e0[(int)local_9e * 4 + 3] = aiStack_1330[(int)local_9e * 4 + 3];
      local_2de = local_9e;
      while (local_2de = (undefined2 *)((int)local_2de + -1), 0 < (int)local_2de) {
        func_0x00029834();
        func_0x00029834();
        func_0x00029834();
        func_0x000299b9();
        func_0x00029c9d();
        FUN_28b3_1163();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_1163();
        func_0x000299d1();
      }
      uStack_77 = *(undefined1 *)0xa6a;
      uStack_78 = *(undefined1 *)0xa6c;
      uStack_76 = *(undefined1 *)0xb310;
      piStack_c = (int *)0xf405;
      func_0x0000daa6();
      if (local_90 == 0) {
        iStack_2f2 = 1;
        iStack_2f8 = (int)local_9e + -1;
      }
      else {
        iStack_2f2 = 3;
        iStack_2f8 = (int)local_9e + -3;
      }
      iStack_88 = aiStack_18a[iStack_2f2 * 2 + 4];
      iStack_86 = aiStack_18a[iStack_2f2 * 2 + 5];
      iStack_84 = aiStack_27a[iStack_2f2 * 2 + 4];
      iStack_82 = aiStack_27a[iStack_2f2 * 2 + 5];
      for (local_2de = (undefined2 *)iStack_2f2; (int)local_2de <= iStack_2f8;
          local_2de = (undefined2 *)((int)local_2de + 1)) {
        func_0x000297e6();
        func_0x00029d78();
        func_0x000299d1();
        func_0x000297e6();
        func_0x00029d78();
        func_0x000299d1();
        func_0x00029834();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029834();
        func_0x000299b9();
        FUN_28b3_1172();
        func_0x000299b9();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_1163();
        func_0x00029834();
        func_0x000299b9();
        FUN_28b3_1163();
        func_0x00029c44();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c44();
        func_0x000299b9();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_1163();
        func_0x00029834();
        func_0x000299b9();
        FUN_28b3_1163();
        func_0x00029c44();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029c74();
        func_0x00029c74();
        func_0x00029834();
        func_0x00029c2c();
        func_0x000299b9();
        FUN_28b3_1172();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029c74();
        func_0x00029c74();
        func_0x00029c44();
        func_0x000299d1();
        local_328 = (undefined2 *)*(int *)0x114c;
        puStack_8e = local_328;
        FUN_28b3_0d8b();
        func_0x00029d78();
        func_0x00029bfc();
        FUN_28b3_112c();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029af6();
        func_0x00029d78();
        func_0x00029c2c();
        func_0x00029983();
        for (local_70 = (int *)0x1; (int)local_70 <= (int)puStack_8e;
            local_70 = (undefined2 *)((int)local_70 + 1)) {
          func_0x000297e6();
          piStack_c = (int *)0xf529;
          func_0x00029bb5();
          func_0x00029983();
          if (puStack_8e == local_70) {
            iStack_80 = aiStack_18a[(int)local_2de * 2 + 6];
            iStack_7e = aiStack_18a[(int)local_2de * 2 + 7];
            iStack_7c = aiStack_27a[(int)local_2de * 2 + 6];
            iStack_7a = aiStack_27a[(int)local_2de * 2 + 7];
          }
          else {
            func_0x000297e6();
            func_0x00029c2c();
            func_0x00029c74();
            func_0x00029b6d();
            func_0x00029c74();
            func_0x00029b6d();
            func_0x00029c74();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029c2c();
            func_0x00029c74();
            func_0x00029b6d();
            func_0x00029c74();
            func_0x00029b6d();
            func_0x00029c74();
            func_0x00029983();
          }
          piVar12 = aiStack_1c;
          piVar10 = &iStack_88;
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            piVar3 = piVar12;
            piVar12 = piVar12 + 1;
            piVar2 = piVar10;
            piVar10 = piVar10 + 1;
            *piVar3 = *piVar2;
          }
          uStack_20 = 0xf500;
          iVar6 = FUN_17a6_0cba();
          if (iVar6 != 0) {
            if (((undefined2 *)iStack_2f2 == local_2de) && (local_70 == (int *)0x1)) {
              piStack_c = (int *)0x11f2;
              piStack_e = (int *)0xf57e;
              uVar15 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar15 + 0x14);
              *pbVar1 = *pbVar1 | 0x40;
              piStack_c = (int *)0x0;
              piStack_e = (int *)0xf596;
              uVar15 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar15 + 0x14);
              *pbVar1 = *pbVar1 & 0x7f;
            }
            else {
              piStack_c = (int *)0x11f2;
              piStack_e = (int *)0xf5b0;
              uVar15 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar15 + 0x14);
              *pbVar1 = *pbVar1 & 0xbf;
              piStack_c = (int *)0x0;
              piStack_e = (int *)0xf5c8;
              uVar15 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar15 + 0x14);
              *pbVar1 = *pbVar1 | 0x80;
            }
            local_18e = local_18e + 1;
            iStack_88 = iStack_80;
            iStack_86 = iStack_7e;
            iStack_84 = iStack_7c;
            iStack_82 = iStack_7a;
          }
        }
      }
      FUN_3ab8_4cbb();
      return;
    }
    if (param_2 != 2) {
      FUN_3ab8_4120();
      return;
    }
    uStack_77 = *(undefined1 *)0xa6a;
    uStack_78 = *(undefined1 *)0xa6c;
    uStack_76 = *(undefined1 *)0xb310;
    local_18e = 0;
    piStack_c = (int *)0xf892;
    func_0x0000daa6();
    iStack_88 = local_17e;
    iStack_86 = iStack_17c;
    iStack_84 = local_26e;
    iStack_82 = iStack_26c;
    iVar8 = (int)local_9e + -1;
    iVar6 = *(int *)0x114c;
    FUN_28b3_0d8b();
    FUN_28b3_1c08();
    FUN_28b3_1177();
    uVar11 = 0x22b2;
    func_0x00029983();
    for (local_70 = (undefined2 *)0x1; (int)local_70 < iVar8 * iVar6;
        local_70 = (undefined2 *)((int)local_70 + 1)) {
      FUN_28b3_0d8b();
      func_0x00029b6d();
      func_0x00029983();
      for (iStack_2da = 1; iStack_2da <= (int)local_9e; iStack_2da = iStack_2da + 1) {
        iVar9 = aiStack_18a[iStack_2da * 2 + 5];
        aiStack_16e0[iStack_2da * 2] = aiStack_18a[iStack_2da * 2 + 4];
        aiStack_16e0[iStack_2da * 2 + 1] = iVar9;
        iVar9 = aiStack_27a[iStack_2da * 2 + 5];
        aiStack_14f8[iStack_2da * 2] = aiStack_27a[iStack_2da * 2 + 4];
        aiStack_14f8[iStack_2da * 2 + 1] = iVar9;
      }
      for (iStack_2da = 1; iStack_2da < (int)local_9e; iStack_2da = iStack_2da + 1) {
        for (local_2de = (int *)0x1; (int)local_2de <= (int)local_9e - iStack_2da;
            local_2de = (int *)((int)local_2de + 1)) {
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1163();
          func_0x000299b9();
          func_0x00029c9d();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029d78();
          FUN_28b3_117c();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029d78();
          FUN_28b3_117c();
          func_0x00029983();
        }
      }
      iStack_80 = aiStack_16e0[2];
      iStack_7e = aiStack_16e0[3];
      iStack_7c = aiStack_14f8[2];
      iStack_7a = aiStack_14f8[3];
      piVar12 = aiStack_1c;
      piVar10 = &iStack_88;
      for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
        piVar3 = piVar12;
        piVar12 = piVar12 + 1;
        piVar2 = piVar10;
        piVar10 = piVar10 + 1;
        *piVar3 = *piVar2;
      }
      uVar11 = 0x11f2;
      uStack_20 = 0xfa2a;
      iVar9 = FUN_17a6_0cba();
      if (iVar9 != 0) {
        if (local_18e == 0) {
          piStack_c = (int *)0x11f2;
          piStack_e = (int *)0xfa7c;
          uVar15 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar15 + 0x14);
          *pbVar1 = *pbVar1 | 0x40;
          piStack_c = (int *)0x0;
          piStack_e = (int *)0xfa94;
          uVar15 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar15 + 0x14);
          *pbVar1 = *pbVar1 & 0x7f;
        }
        else {
          piStack_c = (int *)0x11f2;
          piStack_e = (int *)0xfaae;
          uVar15 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar15 + 0x14);
          *pbVar1 = *pbVar1 & 0xbf;
          piStack_c = (int *)0x0;
          piStack_e = (int *)0xfac6;
          uVar15 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar15 + 0x14);
          *pbVar1 = *pbVar1 | 0x80;
        }
        uVar11 = 0;
        local_18e = local_18e + 1;
        iStack_88 = iStack_80;
        iStack_86 = iStack_7e;
        iStack_84 = iStack_7c;
        iStack_82 = iStack_7a;
      }
    }
    piStack_e = (int *)0xfb00;
    piStack_c = (int *)uVar11;
    uVar15 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar15 + 0x14);
    *pbVar1 = *pbVar1 | 0x40;
    piStack_c = (int *)0x0;
    piStack_e = (int *)0xfb18;
    uVar15 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar15 + 0x14);
    *pbVar1 = *pbVar1 | 0x80;
    FUN_3ab8_4120();
    return;
  }
LAB_3ab8_41d7:
  while( true ) {
    if (local_2dc != 2) goto LAB_3ab8_426f;
    FUN_28b3_0d8b();
    func_0x00029c74();
    func_0x0002996b();
    func_0x00029983();
    func_0x0001bb4e();
    piStack_c = (int *)0xed94;
    func_0x00012276();
    piStack_c = (int *)0xed9e;
    func_0x00012276();
    piStack_c = (int *)0x11f2;
    piStack_e = (int *)0xedac;
    FUN_1000_0599();
    piStack_c = (int *)0x3d28;
    piStack_e = (int *)0xdef;
    piStack_10 = (int *)0xedbf;
    func_0x00012276();
    piStack_c = &local_2f6;
    piStack_e = &local_2ec;
    piStack_10 = aiStack_18a + 2;
    piStack_12 = aiStack_96;
    uStack_14 = 0x11f2;
    piVar12 = (int *)0xad;
    uStack_16 = 0xede3;
    local_70 = (undefined2 *)func_0x000021a4();
    if (local_70 == (int *)0xffff) goto LAB_3ab8_426f;
    uVar14 = 0;
    if (*(int *)0x158 != 0) goto LAB_3ab8_38d2;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar14) break;
LAB_3ab8_41a3:
    piStack_c = (int *)0xed2c;
    func_0x00012276();
    *(undefined2 *)0xc22 = 1;
    piStack_c = (int *)0x11f2;
    piStack_e = (int *)0xed40;
    FUN_1000_0599();
    piStack_c = (int *)0xed4c;
    func_0x00012276();
    piVar12 = (int *)0x11f2;
    piStack_c = (int *)0xed56;
    func_0x00012276();
  }
  func_0x000297e6();
  func_0x000297e6();
  piVar12 = (int *)0x22b2;
  FUN_28b3_1181();
  if ((bool)uVar14) goto LAB_3ab8_41a3;
  if (local_70 != (int *)0x0) {
    if ((local_70 == (int *)0x65) || (local_70 == (int *)0x66)) goto LAB_3ab8_42ab;
    goto LAB_3ab8_41d7;
  }
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c74();
  uVar11 = FUN_28b3_0f51();
  *(undefined2 *)0x114c = uVar11;
LAB_3ab8_42ab:
  piVar12 = (int *)0x22b2;
  local_18c = (int *)0x0;
LAB_3ab8_426f:
  if (local_2dc == 3) {
    *(int *)0x114e = 1 - *(int *)0x114e;
  }
  goto LAB_3ab8_3b13;
code_r0x0003ec72:
  piStack_c = aiStack_27a + 4;
  piStack_e = aiStack_18a + 4;
  piStack_10 = &local_18e;
  piStack_12 = (int *)0x885;
  uStack_14 = 0xec8d;
  iVar6 = FUN_3ab8_286f();
  if (iVar6 != -1) {
    if (*(int *)0x158 != 0) {
LAB_3ab8_38d2:
      FUN_3ab8_4fa6();
      return;
    }
    func_0x0000abfa();
    goto LAB_3ab8_371c;
  }
  goto LAB_3ab8_3b0d;
}



/* 3ab8:4120  FUN_3ab8_4120  2514 bytes, 1 callers */

void FUN_3ab8_4120(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  byte bVar7;
  int iVar8;
  undefined2 *puVar9;
  int unaff_BP;
  int iVar10;
  undefined2 *puVar11;
  undefined2 uVar12;
  int iVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
LAB_3ab8_371c:
  func_0x0000abfa();
  *(undefined2 *)(unaff_BP + -0x90) = 0;
LAB_3ab8_3722:
  uVar12 = 0x1b6e;
  FUN_1885_2ec3();
  *(undefined2 *)(unaff_BP + -0x18a) = 0;
  *(undefined2 *)(unaff_BP + -0x2dc) = 2;
  while (*(int *)(unaff_BP + -0x2dc) <= *(int *)(unaff_BP + -0x90)) {
    iStack_6 = 0xe2c8;
    func_0x000297e6();
    iStack_6 = 0xe2cd;
    func_0x00029d78();
    iStack_c = 0x22b2;
    uStack_e = 0xe2d7;
    func_0x000299d1();
    iStack_c = 0x22b2;
    uStack_e = 0xe2e0;
    func_0x000297e6();
    iStack_c = 0x22b2;
    uStack_e = 0xe2e5;
    func_0x00029d78();
    uStack_14 = 0x22b2;
    uStack_16 = 0xe2ef;
    func_0x000299d1();
    uStack_14 = 0x22b2;
    uStack_16 = 0xe2f8;
    func_0x000297e6();
    uStack_14 = 0x22b2;
    uStack_16 = 0xe2fd;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    uVar12 = 0x1bb4;
    func_0x0001e18f(0x22b2);
    *(int *)(unaff_BP + -0x2dc) = *(int *)(unaff_BP + -0x2dc) + 1;
  }
LAB_3ab8_37b8:
  iStack_6 = uVar12;
  if (*(int *)(unaff_BP + -0x90) < 3) {
    iStack_8 = 0xe358;
    FUN_21f2_3454();
    iStack_6 = 0x22b2;
    iStack_8 = 0xe368;
    FUN_21f2_2d26();
  }
  else {
    iStack_8 = 0xe378;
    FUN_21f2_3454();
  }
  if (*(int *)(unaff_BP + -0x90) == 0) {
    iStack_6 = 0x22b2;
    iStack_8 = 0xe38e;
    FUN_21f2_3454();
  }
  if (*(int *)(unaff_BP + -0x90) == 1) {
    iStack_6 = 0x22b2;
    iStack_8 = 0xe3a4;
    FUN_21f2_3454();
  }
  if (1 < *(int *)(unaff_BP + -0x90)) {
    iStack_6 = 0x22b2;
    iStack_8 = 0xe3ba;
    FUN_21f2_3454();
  }
  iStack_6 = 0x22b2;
  iStack_8 = 0xe3ca;
  FUN_21f2_2d26();
  iStack_6 = 0x3cc2;
  iStack_8 = unaff_BP + -100;
  iStack_a = 0x22b2;
  iStack_c = 0xe3e6;
  FUN_21f2_3454();
  iStack_6 = 0x22b2;
  iStack_8 = 0xe3f7;
  FUN_21f2_2d26();
  if (*(int *)(unaff_BP + -0x18c) + *(int *)(unaff_BP + -0x90) < 1) {
    *(undefined2 *)(unaff_BP + -0x70) = 10000;
  }
  else {
    *(undefined2 *)(unaff_BP + -0x70) = 9999;
  }
  if (*(int *)(unaff_BP + -0x90) == 0) {
    *(undefined2 *)0xc2c = 1;
    *(undefined2 *)0xc20 = 1;
    iStack_6 = unaff_BP + -0x2ea;
    iStack_8 = unaff_BP + -0x2d4;
    iStack_a = *(int *)(unaff_BP + -0x70);
    iStack_c = 0x22b2;
    iVar13 = 0x1bb4;
    uStack_e = 0xe43d;
    uVar12 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0x2da) = uVar12;
    *(undefined2 *)0xc2c = 0;
    *(undefined2 *)0xc20 = 0;
    if ((*(int *)0x158 != 0) || (*(int *)(unaff_BP + -0x2da) == 0x14)) goto LAB_3ab8_38d2;
  }
  else {
    func_0x0000c340();
    iStack_6 = 0x885;
    iStack_8 = 0xe476;
    func_0x00012276();
    iVar8 = 0xdef;
    func_0x00010526();
    uVar12 = *(undefined2 *)0x9ab0;
    uVar6 = *(undefined2 *)0x9ab2;
    *(undefined2 *)(unaff_BP + -0x2e0) = uVar12;
    *(undefined2 *)(unaff_BP + -0x2de) = uVar6;
    *(undefined2 *)(unaff_BP + -0x2e4) = uVar12;
    *(undefined2 *)(unaff_BP + -0x2e2) = uVar6;
    *(undefined2 *)(unaff_BP + -0x9a) = 0;
    do {
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xa4a = 1;
      iStack_6 = unaff_BP + -0x2ea;
      iStack_8 = unaff_BP + -0x6c;
      iStack_a = unaff_BP + -0x6a;
      uStack_e = 0xe4bf;
      iStack_c = iVar8;
      uVar12 = func_0x00006608();
      *(undefined2 *)(unaff_BP + -0x2da) = uVar12;
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xa4a = 0;
      uVar15 = *(int *)0x158 == 0;
      if (!(bool)uVar15) goto LAB_3ab8_38d2;
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar15) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if (!(bool)uVar15) goto LAB_3ab8_3989;
LAB_3ab8_3993:
        iVar8 = 0x22b2;
      }
      else {
LAB_3ab8_3989:
        if (*(int *)(unaff_BP + -0x2d6) <= *(int *)(unaff_BP + -0x90)) goto LAB_3ab8_3993;
        if (*(int *)(unaff_BP + -0x9a) != 0) {
          iStack_6 = 1;
          iStack_8 = 1;
          iStack_a = 1;
          iStack_c = 0x22b2;
          uStack_e = 0xe52d;
          func_0x0001b911();
        }
        func_0x000297e6();
        uVar15 = (*(uint *)(unaff_BP + -0x9c) & 0x3fff) == 0;
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar15) {
          func_0x000297e6();
          func_0x000297e6();
          iVar8 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar15) goto LAB_3ab8_39f2;
          *(undefined2 *)(unaff_BP + -0x9a) = 0;
        }
        else {
LAB_3ab8_39f2:
          iStack_6 = 0xe57f;
          func_0x000297e6();
          iStack_6 = -0x1a7c;
          func_0x00029d78();
          iStack_c = 0x22b2;
          uStack_e = 0xe58e;
          func_0x000299d1();
          iStack_c = 0x22b2;
          uStack_e = 0xe597;
          func_0x000297e6();
          iStack_c = 0x22b2;
          uStack_e = 0xe59c;
          func_0x00029d78();
          uStack_14 = 0x22b2;
          uStack_16 = 0xe5a6;
          func_0x000299d1();
          uStack_14 = 0x22b2;
          uStack_16 = 0xe5b7;
          func_0x000297e6();
          uStack_14 = 0x22b2;
          uStack_16 = 0xe5bc;
          func_0x00029d78();
          func_0x000299d1(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029d78(0x22b2);
          func_0x000299d1(0x22b2);
          iVar8 = 0x1bb4;
          func_0x0001e18f(0x22b2);
          *(undefined2 *)(unaff_BP + -0x9a) = 1;
        }
        uVar12 = *(undefined2 *)(unaff_BP + -0x2e8);
        *(undefined2 *)(unaff_BP + -0x2e0) = *(undefined2 *)(unaff_BP + -0x2ea);
        *(undefined2 *)(unaff_BP + -0x2de) = uVar12;
        uVar12 = *(undefined2 *)(unaff_BP + -0x2f2);
        *(undefined2 *)(unaff_BP + -0x2e4) = *(undefined2 *)(unaff_BP + -0x2f4);
        *(undefined2 *)(unaff_BP + -0x2e2) = uVar12;
      }
      if ((*(int *)(unaff_BP + -0x2da) == -1) || (*(int *)(unaff_BP + -0x2da) == 99))
      goto LAB_3ab8_3a9a;
      if (*(int *)(unaff_BP + -0x18a) != 0) {
        if (*(int *)0xa5e < *(int *)(unaff_BP + -0x6c)) goto LAB_3ab8_3a9a;
        if (((0x32 < *(int *)(unaff_BP + -0x6a)) && (*(int *)(unaff_BP + -0x6a) < 0xaa)) &&
           (2 < *(int *)(unaff_BP + -0x90))) break;
      }
    } while ((*(int *)(unaff_BP + -0x90) < 3) || (*(int *)(unaff_BP + -0x2da) != 0x31));
    *(undefined2 *)(unaff_BP + -0x2da) = 1;
LAB_3ab8_3a9a:
    iVar13 = iVar8;
    if (*(int *)(unaff_BP + -0x9a) != 0) {
      iStack_6 = 1;
      iStack_8 = 1;
      iStack_a = 1;
      iVar13 = 0x1b6e;
      uStack_e = 0xe631;
      iStack_c = iVar8;
      func_0x0001b911();
    }
  }
  if (*(int *)0x158 != 0) goto LAB_3ab8_38d2;
  if ((2 < *(int *)(unaff_BP + -0x90)) && (*(int *)(unaff_BP + -0x2da) == 1)) goto LAB_3ab8_3b0d;
  if ((*(int *)(unaff_BP + -0x2da) != -1) || (*(int *)(unaff_BP + -0x18c) < 1)) {
    if ((*(int *)(unaff_BP + -0x2da) == -1) && (0 < *(int *)(unaff_BP + -0x90))) {
      *(undefined2 *)(unaff_BP + -0x18a) = 0;
      *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + -1;
      *(undefined2 *)(unaff_BP + -0x9c) = *(undefined2 *)(unaff_BP + -0x90);
    }
    if (*(int *)(unaff_BP + -0x2da) == 99) {
      *(undefined2 *)(unaff_BP + -0x18a) = 0;
    }
    if ((*(int *)(unaff_BP + -0x18a) == 2) && (2 < *(int *)(unaff_BP + -0x90))) {
      uVar12 = *(undefined2 *)0x9ab6;
      *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)0x9ab4;
      *(undefined2 *)(unaff_BP + -0x88) = uVar12;
      *(undefined2 *)(unaff_BP + -0x6e) = 0;
      *(undefined2 *)(unaff_BP + -0x2dc) = 1;
      while( true ) {
        uVar4 = *(uint *)(unaff_BP + -0x2dc);
        uVar5 = *(uint *)(unaff_BP + -0x90);
        uVar15 = uVar5 < uVar4;
        uVar14 = uVar5 == uVar4;
        if ((int)uVar5 < (int)uVar4) break;
        func_0x000297e6();
        uVar15 = *(int *)(unaff_BP + -0x2dc) << 1 < 0;
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        FUN_28b3_117c();
        func_0x0002996b();
        FUN_28b3_1181();
        if ((bool)uVar15) {
          *(undefined2 *)(unaff_BP + -0x6e) = *(undefined2 *)(unaff_BP + -0x2dc);
          func_0x000297e6();
          func_0x00029983();
        }
        *(int *)(unaff_BP + -0x2dc) = *(int *)(unaff_BP + -0x2dc) + 1;
      }
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029834();
      func_0x00029b85();
      iVar13 = 0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar15 && !(bool)uVar14) {
        iVar8 = *(int *)(unaff_BP + -0x6e) * 4;
        uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x17e);
        *(undefined2 *)(unaff_BP + -0x2ea) = *(undefined2 *)(unaff_BP + iVar8 + -0x180);
        *(undefined2 *)(unaff_BP + -0x2e8) = uVar12;
        uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x26e);
        *(undefined2 *)(unaff_BP + -0x2f4) = *(undefined2 *)(unaff_BP + iVar8 + -0x270);
        *(undefined2 *)(unaff_BP + -0x2f2) = uVar12;
        *(undefined2 *)(unaff_BP + -0x18a) = 1;
      }
    }
    if (*(int *)(unaff_BP + -0x18a) != 0) {
      iStack_6 = *(int *)(unaff_BP + -0x18a);
      iStack_a = -0x1759;
      iStack_8 = iVar13;
      iVar8 = func_0x00015409();
      if (iVar8 == 0) {
        *(undefined2 *)(unaff_BP + -0x18a) = 0;
      }
    }
    if (*(int *)(unaff_BP + -0x18a) != 0) {
      *(undefined2 *)(unaff_BP + -0x18c) = 0;
      if (*(int *)(unaff_BP + -0x90) < *(int *)(unaff_BP + -0x2d6)) {
        func_0x00029834();
        uVar15 = *(int *)(unaff_BP + -0x9c) << 1 < 0;
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        func_0x00029d78();
        FUN_28b3_1181();
        if ((bool)uVar15) {
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          FUN_28b3_1181();
          if (!(bool)uVar15) goto LAB_3ab8_3e0e;
          iStack_6 = 0xe96b;
          func_0x00012276();
          *(undefined2 *)0xc22 = 1;
          iStack_6 = 0x11f2;
          iStack_8 = 0xe97f;
          FUN_1000_0599();
          uVar12 = 0x11f2;
          iStack_6 = 0xe98a;
          func_0x00012276();
        }
        else {
LAB_3ab8_3e0e:
          uVar12 = 0x22b2;
          *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + 1;
          iVar8 = *(int *)(unaff_BP + -0x90);
          *(int *)(unaff_BP + -0x9c) = iVar8;
          iVar13 = iVar8 * 4;
          uVar6 = *(undefined2 *)(unaff_BP + -0x2e8);
          *(undefined2 *)(unaff_BP + iVar13 + -0x180) = *(undefined2 *)(unaff_BP + -0x2ea);
          *(undefined2 *)(unaff_BP + iVar13 + -0x17e) = uVar6;
          uVar6 = *(undefined2 *)(unaff_BP + -0x2f2);
          *(undefined2 *)(unaff_BP + iVar13 + -0x270) = *(undefined2 *)(unaff_BP + -0x2f4);
          *(undefined2 *)(unaff_BP + iVar13 + -0x26e) = uVar6;
          if (1 < iVar8) {
            iStack_6 = 0xe9d5;
            func_0x000297e6();
            iStack_6 = 0xe9da;
            func_0x00029d78();
            iStack_c = 0x22b2;
            uStack_e = 0xe9e4;
            func_0x000299d1();
            iStack_c = 0x22b2;
            uStack_e = 0xe9ed;
            func_0x000297e6();
            iStack_c = 0x22b2;
            uStack_e = 0xe9f2;
            func_0x00029d78();
            uStack_14 = 0x22b2;
            uStack_16 = 0xe9fc;
            func_0x000299d1();
            uStack_14 = 0x22b2;
            uStack_16 = 0xea05;
            func_0x000297e6();
            uStack_14 = 0x22b2;
            uStack_16 = 0xea0a;
            func_0x00029d78();
            func_0x000299d1(0x22b2);
            func_0x000297e6(0x22b2);
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2);
            uVar12 = 0x1bb4;
            func_0x0001e18f(0x22b2);
          }
        }
      }
      else {
        iStack_6 = 0xe8d5;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
        iStack_6 = 0x11f2;
        iStack_8 = 0xe8e9;
        FUN_1000_0599();
        iStack_6 = 0x3cdd;
        iStack_8 = 0xdef;
        uVar12 = 0x11f2;
        iStack_a = -0x1704;
        func_0x00012276();
      }
      goto LAB_3ab8_37b8;
    }
    goto LAB_3ab8_3722;
  }
  iStack_6 = 0xe6d3;
  func_0x0000daa6();
  func_0x0000c3ca();
  uVar12 = 0x885;
  while (0 < *(int *)(unaff_BP + -0x18c)) {
    uVar6 = *(undefined2 *)0x14a;
    *(undefined2 *)(unaff_BP + -0x2ee) = *(undefined2 *)0x148;
    *(undefined2 *)(unaff_BP + -0x2ec) = uVar6;
    iStack_8 = -0x190f;
    iStack_6 = uVar12;
    func_0x00018779();
    *(int *)(unaff_BP + -0x18c) = *(int *)(unaff_BP + -0x18c) + -1;
    uVar12 = 0x11f2;
  }
  if (*(int *)(unaff_BP + -0x8e) == 1) {
    *(int *)(unaff_BP + -0x9c) = *(int *)(unaff_BP + -0x9c) + -4;
    *(undefined2 *)(unaff_BP + -0x2dc) = 1;
    while (*(int *)(unaff_BP + -0x2dc) <= *(int *)(unaff_BP + -0x9c)) {
      iVar8 = *(int *)(unaff_BP + -0x2dc) * 4;
      uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x176);
      *(undefined2 *)(unaff_BP + iVar8 + -0x180) = *(undefined2 *)(unaff_BP + iVar8 + -0x178);
      *(undefined2 *)(unaff_BP + iVar8 + -0x17e) = uVar12;
      uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x266);
      *(undefined2 *)(unaff_BP + iVar8 + -0x270) = *(undefined2 *)(unaff_BP + iVar8 + -0x268);
      *(undefined2 *)(unaff_BP + iVar8 + -0x26e) = uVar12;
      *(int *)(unaff_BP + -0x2dc) = *(int *)(unaff_BP + -0x2dc) + 1;
    }
  }
  *(undefined2 *)(unaff_BP + -0x18c) = 0;
  *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)(unaff_BP + -0x9c);
  func_0x0000abfa();
  iVar13 = 0x885;
  iStack_6 = 0xe762;
  func_0x0000b1d8();
LAB_3ab8_3b0d:
  *(undefined2 *)(unaff_BP + -0x18c) = 0;
LAB_3ab8_3b13:
  iStack_8 = 0xe6a1;
  iStack_6 = iVar13;
  func_0x00024c86();
  uVar12 = 0x1b6e;
  FUN_1885_2ec3();
  *(undefined2 *)(unaff_BP + -0x18a) = 0;
  *(undefined2 *)(unaff_BP + -0x2dc) = 2;
  while (*(int *)(unaff_BP + -0x2dc) <= *(int *)(unaff_BP + -0x9c)) {
    iStack_6 = 0xea58;
    func_0x000297e6();
    iStack_6 = 0xea5d;
    func_0x00029d78();
    iStack_c = 0x22b2;
    uStack_e = 0xea67;
    func_0x000299d1();
    iStack_c = 0x22b2;
    uStack_e = 0xea70;
    func_0x000297e6();
    iStack_c = 0x22b2;
    uStack_e = 0xea75;
    func_0x00029d78();
    uStack_14 = 0x22b2;
    uStack_16 = 0xea7f;
    func_0x000299d1();
    uStack_14 = 0x22b2;
    uStack_16 = 0xea88;
    func_0x000297e6();
    uStack_14 = 0x22b2;
    uStack_16 = 0xea8d;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    uVar12 = 0x1bb4;
    func_0x0001e18f(0x22b2);
    *(int *)(unaff_BP + -0x2dc) = *(int *)(unaff_BP + -0x2dc) + 1;
  }
  iStack_8 = 0xead3;
  iStack_6 = uVar12;
  func_0x00024c86();
  iStack_6 = 0x22b2;
  iStack_8 = 0xeae3;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = 0xeaf3;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = 0xeb03;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = 0xeb13;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = 0xeb24;
  FUN_21f2_2d26();
  iStack_6 = unaff_BP + -0x30a;
  iStack_8 = 0x22b2;
  iStack_a = 0xeb38;
  FUN_21f2_3454();
  iStack_6 = 0x22b2;
  iStack_8 = 0xeb4a;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = 0xeb5a;
  FUN_21f2_2d26();
  if (*(int *)(unaff_BP + 6) == 1) {
    func_0x000297e6();
    uVar15 = (*(uint *)(unaff_BP + -0x9c) & 0x3fff) == 0;
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar15) goto LAB_3ab8_4061;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar15) goto LAB_3ab8_4061;
    *(undefined2 *)(unaff_BP + -0x8e) = *(undefined2 *)0x114e;
    iStack_6 = 0x22b2;
    iStack_8 = 0xebb1;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xebcd;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xebdd;
    FUN_21f2_2d26();
  }
  else {
LAB_3ab8_4061:
    *(undefined2 *)(unaff_BP + -0x8e) = 0;
  }
  iStack_6 = 0x22b2;
  iStack_8 = 0xebf5;
  FUN_1def_07a4();
  iStack_6 = unaff_BP + -0x2ea;
  iStack_8 = unaff_BP + -0x2d4;
  iStack_a = 9999;
  iStack_c = 0x1bb4;
  iVar13 = 0x1bb4;
  uStack_e = 0xec14;
  uVar12 = FUN_1def_0904();
  *(undefined2 *)(unaff_BP + -0x2da) = uVar12;
  if (*(int *)0x158 != 0) goto LAB_3ab8_38d2;
  if (((*(int *)(unaff_BP + 6) == 1) && (*(int *)(unaff_BP + -0x18a) != 0)) &&
     (0x13 < *(byte *)0x123)) {
    iStack_6 = unaff_BP + -0x322;
    iStack_8 = unaff_BP + -800;
    iStack_a = 0x1bb4;
    iStack_c = -0x13ae;
    func_0x0000dcbd();
    bVar7 = func_0x0000db57();
    if ((bVar7 & 0xe) != 4) {
      iVar13 = 0x885;
      bVar7 = func_0x0000db57();
      if ((bVar7 & 0xe) != 2) goto LAB_3ab8_4128;
    }
    iVar13 = 0x885;
    if (*(int *)(unaff_BP + -0x326) < 0xe) goto code_r0x0003ec72;
  }
LAB_3ab8_4128:
  if (*(int *)(unaff_BP + -0x2da) == -1) goto LAB_3ab8_3722;
  if (*(int *)(unaff_BP + -0x2da) == 1) {
    FUN_1885_2ec3();
    func_0x0000c3ca();
    if (*(int *)(unaff_BP + 6) == 1) {
      if (*(int *)(unaff_BP + -0x8e) == 1) {
        *(undefined2 *)(unaff_BP + -0x2dc) = *(undefined2 *)(unaff_BP + -0x9c);
        while (0 < *(int *)(unaff_BP + -0x2dc)) {
          iVar8 = *(int *)(unaff_BP + -0x2dc) * 4;
          uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x17e);
          *(undefined2 *)(unaff_BP + iVar8 + -0x178) = *(undefined2 *)(unaff_BP + iVar8 + -0x180);
          *(undefined2 *)(unaff_BP + iVar8 + -0x176) = uVar12;
          uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x26e);
          *(undefined2 *)(unaff_BP + iVar8 + -0x268) = *(undefined2 *)(unaff_BP + iVar8 + -0x270);
          *(undefined2 *)(unaff_BP + iVar8 + -0x266) = uVar12;
          *(int *)(unaff_BP + -0x2dc) = *(int *)(unaff_BP + -0x2dc) + -1;
        }
        *(int *)(unaff_BP + -0x9c) = *(int *)(unaff_BP + -0x9c) + 2;
        iVar8 = *(int *)(unaff_BP + -0x9c) * 4;
        uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x186);
        *(undefined2 *)(unaff_BP + -0x17c) = *(undefined2 *)(unaff_BP + iVar8 + -0x188);
        *(undefined2 *)(unaff_BP + -0x17a) = uVar12;
        uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x276);
        *(undefined2 *)(unaff_BP + -0x26c) = *(undefined2 *)(unaff_BP + iVar8 + -0x278);
        *(undefined2 *)(unaff_BP + -0x26a) = uVar12;
        uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x182);
        *(undefined2 *)(unaff_BP + -0x178) = *(undefined2 *)(unaff_BP + iVar8 + -0x184);
        *(undefined2 *)(unaff_BP + -0x176) = uVar12;
        uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x272);
        *(undefined2 *)(unaff_BP + -0x268) = *(undefined2 *)(unaff_BP + iVar8 + -0x274);
        *(undefined2 *)(unaff_BP + -0x266) = uVar12;
        uVar12 = *(undefined2 *)(unaff_BP + -0x170);
        uVar6 = *(undefined2 *)(unaff_BP + -0x16e);
        iVar8 = *(int *)(unaff_BP + -0x9c) + 1;
        *(int *)(unaff_BP + -0x9c) = iVar8;
        iVar8 = iVar8 * 4;
        *(undefined2 *)(unaff_BP + iVar8 + -0x180) = uVar12;
        *(undefined2 *)(unaff_BP + iVar8 + -0x17e) = uVar6;
        uVar12 = *(undefined2 *)(unaff_BP + -0x25e);
        *(undefined2 *)(unaff_BP + iVar8 + -0x270) = *(undefined2 *)(unaff_BP + -0x260);
        *(undefined2 *)(unaff_BP + iVar8 + -0x26e) = uVar12;
        uVar12 = *(undefined2 *)(unaff_BP + -0x16c);
        uVar6 = *(undefined2 *)(unaff_BP + -0x16a);
        iVar8 = *(int *)(unaff_BP + -0x9c) + 1;
        *(int *)(unaff_BP + -0x9c) = iVar8;
        iVar8 = iVar8 * 4;
        *(undefined2 *)(unaff_BP + iVar8 + -0x180) = uVar12;
        *(undefined2 *)(unaff_BP + iVar8 + -0x17e) = uVar6;
        uVar12 = *(undefined2 *)(unaff_BP + -0x25a);
        *(undefined2 *)(unaff_BP + iVar8 + -0x270) = *(undefined2 *)(unaff_BP + -0x25c);
        *(undefined2 *)(unaff_BP + iVar8 + -0x26e) = uVar12;
      }
      *(undefined2 *)(unaff_BP + -0x2dc) = 1;
      while (*(int *)(unaff_BP + -0x2dc) <= *(int *)(unaff_BP + -0x9c) + -1) {
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        iVar8 = *(int *)(unaff_BP + -0x2dc);
        func_0x000299d1();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299b9();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_117c();
        iStack_a = 0x22b2;
        iStack_c = 0xefb5;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = -0x1046;
        puVar9 = (undefined2 *)FUN_28b3_1582();
        iVar8 = unaff_BP + iVar8 * 8;
        *(undefined2 *)(iVar8 + -0xf9e) = *puVar9;
        *(undefined2 *)(iVar8 + -0xf9c) = puVar9[1];
        *(undefined2 *)(iVar8 + -0xf9a) = puVar9[2];
        *(undefined2 *)(iVar8 + -0xf98) = puVar9[3];
        *(int *)(unaff_BP + -0x2dc) = *(int *)(unaff_BP + -0x2dc) + 1;
      }
      *(undefined2 *)(unaff_BP + -0xa1e) = *(undefined2 *)0x9a8c;
      *(undefined2 *)(unaff_BP + -0xa1c) = *(undefined2 *)0x9a8e;
      *(undefined2 *)(unaff_BP + -0xa1a) = *(undefined2 *)0x9a90;
      *(undefined2 *)(unaff_BP + -0xa18) = *(undefined2 *)0x9a92;
      *(undefined2 *)(unaff_BP + -0xa16) = *(undefined2 *)0x9a50;
      *(undefined2 *)(unaff_BP + -0xa14) = *(undefined2 *)0x9a52;
      *(undefined2 *)(unaff_BP + -0xa12) = *(undefined2 *)0x9a54;
      *(undefined2 *)(unaff_BP + -0xa10) = *(undefined2 *)0x9a56;
      *(undefined2 *)(unaff_BP + -0xa26) = *(undefined2 *)0x9a8c;
      *(undefined2 *)(unaff_BP + -0xa24) = *(undefined2 *)0x9a8e;
      *(undefined2 *)(unaff_BP + -0xa22) = *(undefined2 *)0x9a90;
      *(undefined2 *)(unaff_BP + -0xa20) = *(undefined2 *)0x9a92;
      iVar13 = *(int *)(unaff_BP + -0x9c) * 0x20;
      iVar8 = unaff_BP + iVar13;
      *(undefined2 *)(iVar8 + -0xa46) = *(undefined2 *)0x9a8c;
      *(undefined2 *)(iVar8 + -0xa44) = *(undefined2 *)0x9a8e;
      *(undefined2 *)(iVar8 + -0xa42) = *(undefined2 *)0x9a90;
      *(undefined2 *)(iVar8 + -0xa40) = *(undefined2 *)0x9a92;
      iVar8 = unaff_BP + iVar13;
      *(undefined2 *)(iVar8 + -0xa3e) = *(undefined2 *)0x9a94;
      *(undefined2 *)(iVar8 + -0xa3c) = *(undefined2 *)0x9a96;
      *(undefined2 *)(iVar8 + -0xa3a) = *(undefined2 *)0x9a98;
      *(undefined2 *)(iVar8 + -0xa38) = *(undefined2 *)0x9a9a;
      iVar13 = unaff_BP + iVar13;
      *(undefined2 *)(iVar13 + -0xa36) = *(undefined2 *)0x9a8c;
      *(undefined2 *)(iVar13 + -0xa34) = *(undefined2 *)0x9a8e;
      *(undefined2 *)(iVar13 + -0xa32) = *(undefined2 *)0x9a90;
      *(undefined2 *)(iVar13 + -0xa30) = *(undefined2 *)0x9a92;
      func_0x00029834();
      func_0x00029c44();
      func_0x00029c2c();
      func_0x000299d1();
      func_0x00029834();
      func_0x00029c44();
      func_0x00029c2c();
      func_0x000299d1();
      func_0x00029834();
      func_0x00029834();
      func_0x000299b9();
      FUN_28b3_1172();
      func_0x00029c2c();
      func_0x000299d1();
      func_0x00029834();
      func_0x00029c44();
      func_0x00029c2c();
      func_0x000299d1();
      *(undefined2 *)(unaff_BP + -0x2dc) = 2;
      while (*(int *)(unaff_BP + -0x2dc) <= *(int *)(unaff_BP + -0x9c) + -1) {
        func_0x00029834();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x000299b9();
        func_0x00029c74();
        func_0x00029c2c();
        func_0x000299d1();
        func_0x00029834();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c44();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c44();
        func_0x00029c2c();
        FUN_28b3_117c();
        func_0x00029c2c();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c44();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c44();
        func_0x00029c2c();
        FUN_28b3_117c();
        func_0x00029c2c();
        func_0x000299d1();
        *(int *)(unaff_BP + -0x2dc) = *(int *)(unaff_BP + -0x2dc) + 1;
      }
      *(undefined2 *)(unaff_BP + -0x2dc) = 2;
      while (*(int *)(unaff_BP + -0x2dc) <= *(int *)(unaff_BP + -0x9c)) {
        iVar13 = *(int *)(unaff_BP + -0x2dc) * 0x20;
        func_0x00029834();
        iVar8 = unaff_BP + iVar13;
        func_0x00029c44();
        func_0x000299d1();
        *(undefined2 *)(iVar8 + -0xa46) = *(undefined2 *)0x9a70;
        *(undefined2 *)(iVar8 + -0xa44) = *(undefined2 *)0x9a72;
        *(undefined2 *)(iVar8 + -0xa42) = *(undefined2 *)0x9a74;
        *(undefined2 *)(iVar8 + -0xa40) = *(undefined2 *)0x9a76;
        iVar8 = unaff_BP + iVar13;
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029bfc();
        func_0x000299d1();
        func_0x00029834();
        iStack_6 = 0xf262;
        func_0x00029c2c();
        func_0x000299d1();
        iVar10 = *(int *)(unaff_BP + -0x2dc) * 8;
        *(int *)(unaff_BP + -0x170e) = iVar13;
        *(int *)(unaff_BP + -0x1706) = unaff_BP + iVar10 + -0x1166;
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029bfc();
        func_0x000299d1();
        *(int *)(unaff_BP + -0x326) = unaff_BP + iVar10 + -0x132e;
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029bfc();
        func_0x000299d1();
        *(undefined2 *)(unaff_BP + -0x31e) = *(undefined2 *)(iVar8 + -0xa3e);
        *(undefined2 *)(unaff_BP + -0x31c) = *(undefined2 *)(iVar8 + -0xa3c);
        *(undefined2 *)(unaff_BP + -0x31a) = *(undefined2 *)(iVar8 + -0xa3a);
        *(undefined2 *)(unaff_BP + -0x318) = *(undefined2 *)(iVar8 + -0xa38);
        *(undefined2 *)(iVar8 + -0xa3e) = *(undefined2 *)0x9a8c;
        *(undefined2 *)(iVar8 + -0xa3c) = *(undefined2 *)0x9a8e;
        *(undefined2 *)(iVar8 + -0xa3a) = *(undefined2 *)0x9a90;
        *(undefined2 *)(iVar8 + -0xa38) = *(undefined2 *)0x9a92;
        func_0x00029834();
        iStack_6 = 0xf2f8;
        FUN_28b3_112c();
        func_0x000299d1();
        func_0x00029834();
        iStack_6 = 0xf311;
        FUN_28b3_112c();
        func_0x000299d1();
        func_0x00029834();
        iStack_6 = -0xcd6;
        FUN_28b3_112c();
        func_0x000299d1();
        *(int *)(unaff_BP + -0x2dc) = *(int *)(unaff_BP + -0x2dc) + 1;
      }
      iVar10 = *(int *)(unaff_BP + -0x9c) * 8;
      iVar8 = unaff_BP + iVar10;
      iVar13 = unaff_BP + iVar10;
      *(undefined2 *)(iVar8 + -0x14f6) = *(undefined2 *)(iVar13 + -0x1166);
      *(undefined2 *)(iVar8 + -0x14f4) = *(undefined2 *)(iVar13 + -0x1164);
      *(undefined2 *)(iVar8 + -0x14f2) = *(undefined2 *)(iVar13 + -0x1162);
      *(undefined2 *)(iVar8 + -0x14f0) = *(undefined2 *)(iVar13 + -0x1160);
      iVar8 = unaff_BP + iVar10;
      iVar10 = unaff_BP + iVar10;
      *(undefined2 *)(iVar8 + -0x16de) = *(undefined2 *)(iVar10 + -0x132e);
      *(undefined2 *)(iVar8 + -0x16dc) = *(undefined2 *)(iVar10 + -0x132c);
      *(undefined2 *)(iVar8 + -0x16da) = *(undefined2 *)(iVar10 + -0x132a);
      *(undefined2 *)(iVar8 + -0x16d8) = *(undefined2 *)(iVar10 + -0x1328);
      *(int *)(unaff_BP + -0x2dc) = *(int *)(unaff_BP + -0x9c) + -1;
      while (0 < *(int *)(unaff_BP + -0x2dc)) {
        func_0x00029834();
        func_0x00029834();
        func_0x00029834();
        func_0x000299b9();
        func_0x00029c9d();
        FUN_28b3_1163();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_1163();
        func_0x000299d1();
        *(int *)(unaff_BP + -0x2dc) = *(int *)(unaff_BP + -0x2dc) + -1;
      }
      *(undefined1 *)(unaff_BP + -0x75) = *(undefined1 *)0xa6a;
      *(undefined1 *)(unaff_BP + -0x76) = *(undefined1 *)0xa6c;
      *(undefined1 *)(unaff_BP + -0x74) = *(undefined1 *)0xb310;
      iStack_6 = 0xf405;
      func_0x0000daa6();
      if (*(int *)(unaff_BP + -0x8e) == 0) {
        *(undefined2 *)(unaff_BP + -0x2f0) = 1;
        iVar8 = *(int *)(unaff_BP + -0x9c) + -1;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x2f0) = 3;
        iVar8 = *(int *)(unaff_BP + -0x9c) + -3;
      }
      *(int *)(unaff_BP + -0x2f6) = iVar8;
      iVar8 = *(int *)(unaff_BP + -0x2f0) * 4;
      uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x17e);
      *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + iVar8 + -0x180);
      *(undefined2 *)(unaff_BP + -0x84) = uVar12;
      uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x26e);
      *(undefined2 *)(unaff_BP + -0x82) = *(undefined2 *)(unaff_BP + iVar8 + -0x270);
      *(undefined2 *)(unaff_BP + -0x80) = uVar12;
      *(undefined2 *)(unaff_BP + -0x2dc) = *(undefined2 *)(unaff_BP + -0x2f0);
      while (*(int *)(unaff_BP + -0x2dc) <= *(int *)(unaff_BP + -0x2f6)) {
        func_0x000297e6();
        func_0x00029d78();
        func_0x000299d1();
        func_0x000297e6();
        func_0x00029d78();
        func_0x000299d1();
        func_0x00029834();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029834();
        func_0x000299b9();
        FUN_28b3_1172();
        func_0x000299b9();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_1163();
        func_0x00029834();
        func_0x000299b9();
        FUN_28b3_1163();
        func_0x00029c44();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c44();
        func_0x000299b9();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_1163();
        func_0x00029834();
        func_0x000299b9();
        FUN_28b3_1163();
        func_0x00029c44();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029c74();
        func_0x00029c74();
        func_0x00029834();
        func_0x00029c2c();
        func_0x000299b9();
        FUN_28b3_1172();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029c74();
        func_0x00029c74();
        func_0x00029c44();
        func_0x000299d1();
        uVar12 = *(undefined2 *)0x114c;
        *(undefined2 *)(unaff_BP + -0x8c) = uVar12;
        *(undefined2 *)(unaff_BP + -0x326) = uVar12;
        FUN_28b3_0d8b();
        func_0x00029d78();
        func_0x00029bfc();
        FUN_28b3_112c();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029af6();
        func_0x00029d78();
        func_0x00029c2c();
        func_0x00029983();
        *(undefined2 *)(unaff_BP + -0x6e) = 1;
        while (*(int *)(unaff_BP + -0x6e) <= *(int *)(unaff_BP + -0x8c)) {
          func_0x000297e6();
          iStack_6 = 0xf529;
          func_0x00029bb5();
          func_0x00029983();
          if (*(int *)(unaff_BP + -0x8c) == *(int *)(unaff_BP + -0x6e)) {
            iVar8 = *(int *)(unaff_BP + -0x2dc) * 4;
            uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x17a);
            *(undefined2 *)(unaff_BP + -0x7e) = *(undefined2 *)(unaff_BP + iVar8 + -0x17c);
            *(undefined2 *)(unaff_BP + -0x7c) = uVar12;
            uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x26a);
            *(undefined2 *)(unaff_BP + -0x7a) = *(undefined2 *)(unaff_BP + iVar8 + -0x26c);
            *(undefined2 *)(unaff_BP + -0x78) = uVar12;
          }
          else {
            func_0x000297e6();
            func_0x00029c2c();
            func_0x00029c74();
            func_0x00029b6d();
            func_0x00029c74();
            func_0x00029b6d();
            func_0x00029c74();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029c2c();
            func_0x00029c74();
            func_0x00029b6d();
            func_0x00029c74();
            func_0x00029b6d();
            func_0x00029c74();
            func_0x00029983();
          }
          puVar11 = &uStack_16;
          puVar9 = (undefined2 *)(unaff_BP + -0x86);
          for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar3 = puVar11;
            puVar11 = puVar11 + 1;
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar3 = *puVar2;
          }
          iVar8 = FUN_17a6_0cba();
          if (iVar8 != 0) {
            if ((*(int *)(unaff_BP + -0x2f0) == *(int *)(unaff_BP + -0x2dc)) &&
               (*(int *)(unaff_BP + -0x6e) == 1)) {
              iStack_6 = 0x11f2;
              iStack_8 = 0xf57e;
              uVar16 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar16 + 0x14);
              *pbVar1 = *pbVar1 | 0x40;
              iStack_6 = 0;
              iStack_8 = -0xa6a;
              uVar16 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar16 + 0x14);
              *pbVar1 = *pbVar1 & 0x7f;
            }
            else {
              iStack_6 = 0x11f2;
              iStack_8 = 0xf5b0;
              uVar16 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar16 + 0x14);
              *pbVar1 = *pbVar1 & 0xbf;
              iStack_6 = 0;
              iStack_8 = -0xa38;
              uVar16 = func_0x0000013f();
              pbVar1 = (byte *)((int)uVar16 + 0x14);
              *pbVar1 = *pbVar1 | 0x80;
            }
            *(int *)(unaff_BP + -0x18c) = *(int *)(unaff_BP + -0x18c) + 1;
            uVar12 = *(undefined2 *)(unaff_BP + -0x7c);
            *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x7e);
            *(undefined2 *)(unaff_BP + -0x84) = uVar12;
            uVar12 = *(undefined2 *)(unaff_BP + -0x78);
            *(undefined2 *)(unaff_BP + -0x82) = *(undefined2 *)(unaff_BP + -0x7a);
            *(undefined2 *)(unaff_BP + -0x80) = uVar12;
          }
          *(int *)(unaff_BP + -0x6e) = *(int *)(unaff_BP + -0x6e) + 1;
        }
        *(int *)(unaff_BP + -0x2dc) = *(int *)(unaff_BP + -0x2dc) + 1;
      }
      FUN_3ab8_4cbb();
      return;
    }
    if (*(int *)(unaff_BP + 6) != 2) {
      FUN_3ab8_4120();
      return;
    }
    *(undefined1 *)(unaff_BP + -0x75) = *(undefined1 *)0xa6a;
    *(undefined1 *)(unaff_BP + -0x76) = *(undefined1 *)0xa6c;
    *(undefined1 *)(unaff_BP + -0x74) = *(undefined1 *)0xb310;
    *(undefined2 *)(unaff_BP + -0x18c) = 0;
    iStack_6 = 0xf892;
    func_0x0000daa6();
    uVar12 = *(undefined2 *)(unaff_BP + -0x17a);
    *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x17c);
    *(undefined2 *)(unaff_BP + -0x84) = uVar12;
    uVar12 = *(undefined2 *)(unaff_BP + -0x26a);
    *(undefined2 *)(unaff_BP + -0x82) = *(undefined2 *)(unaff_BP + -0x26c);
    *(undefined2 *)(unaff_BP + -0x80) = uVar12;
    iVar8 = (*(int *)(unaff_BP + -0x9c) + -1) * *(int *)0x114c;
    *(int *)(unaff_BP + -0x1742) = iVar8;
    *(int *)(unaff_BP + -0x172e) = iVar8 + -1;
    FUN_28b3_0d8b();
    FUN_28b3_1c08();
    FUN_28b3_1177();
    uVar12 = 0x22b2;
    func_0x00029983();
    *(undefined2 *)(unaff_BP + -0x6e) = 1;
    while (*(int *)(unaff_BP + -0x6e) < *(int *)(unaff_BP + -0x1742)) {
      *(int *)(unaff_BP + -0x172e) = *(int *)(unaff_BP + -0x6e);
      FUN_28b3_0d8b();
      func_0x00029b6d();
      func_0x00029983();
      *(undefined2 *)(unaff_BP + -0x2d8) = 1;
      while (*(int *)(unaff_BP + -0x2d8) <= *(int *)(unaff_BP + -0x9c)) {
        iVar8 = *(int *)(unaff_BP + -0x2d8) * 4;
        uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x17e);
        *(undefined2 *)(unaff_BP + iVar8 + -0x16de) = *(undefined2 *)(unaff_BP + iVar8 + -0x180);
        *(undefined2 *)(unaff_BP + iVar8 + -0x16dc) = uVar12;
        uVar12 = *(undefined2 *)(unaff_BP + iVar8 + -0x26e);
        *(undefined2 *)(unaff_BP + iVar8 + -0x14f6) = *(undefined2 *)(unaff_BP + iVar8 + -0x270);
        *(undefined2 *)(unaff_BP + iVar8 + -0x14f4) = uVar12;
        *(int *)(unaff_BP + -0x2d8) = *(int *)(unaff_BP + -0x2d8) + 1;
      }
      *(undefined2 *)(unaff_BP + -0x2d8) = 1;
      while (*(int *)(unaff_BP + -0x2d8) < *(int *)(unaff_BP + -0x9c)) {
        *(undefined2 *)(unaff_BP + -0x2dc) = 1;
        while (*(int *)(unaff_BP + -0x2dc) <=
               *(int *)(unaff_BP + -0x9c) - *(int *)(unaff_BP + -0x2d8)) {
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1163();
          func_0x000299b9();
          func_0x00029c9d();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029d78();
          FUN_28b3_117c();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029d78();
          FUN_28b3_117c();
          func_0x00029983();
          *(int *)(unaff_BP + -0x2dc) = *(int *)(unaff_BP + -0x2dc) + 1;
        }
        *(int *)(unaff_BP + -0x2d8) = *(int *)(unaff_BP + -0x2d8) + 1;
      }
      uVar12 = *(undefined2 *)(unaff_BP + -0x16d8);
      *(undefined2 *)(unaff_BP + -0x7e) = *(undefined2 *)(unaff_BP + -0x16da);
      *(undefined2 *)(unaff_BP + -0x7c) = uVar12;
      uVar12 = *(undefined2 *)(unaff_BP + -0x14f0);
      *(undefined2 *)(unaff_BP + -0x7a) = *(undefined2 *)(unaff_BP + -0x14f2);
      *(undefined2 *)(unaff_BP + -0x78) = uVar12;
      puVar11 = &uStack_16;
      puVar9 = (undefined2 *)(unaff_BP + -0x86);
      for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar3 = puVar11;
        puVar11 = puVar11 + 1;
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar3 = *puVar2;
      }
      uVar12 = 0x11f2;
      iVar8 = FUN_17a6_0cba();
      if (iVar8 != 0) {
        if (*(int *)(unaff_BP + -0x18c) == 0) {
          iStack_6 = 0x11f2;
          iStack_8 = 0xfa7c;
          uVar16 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar16 + 0x14);
          *pbVar1 = *pbVar1 | 0x40;
          iStack_6 = 0;
          iStack_8 = -0x56c;
          uVar16 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar16 + 0x14);
          *pbVar1 = *pbVar1 & 0x7f;
        }
        else {
          iStack_6 = 0x11f2;
          iStack_8 = 0xfaae;
          uVar16 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar16 + 0x14);
          *pbVar1 = *pbVar1 & 0xbf;
          iStack_6 = 0;
          iStack_8 = -0x53a;
          uVar16 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar16 + 0x14);
          *pbVar1 = *pbVar1 | 0x80;
        }
        uVar12 = 0;
        *(int *)(unaff_BP + -0x18c) = *(int *)(unaff_BP + -0x18c) + 1;
        uVar6 = *(undefined2 *)(unaff_BP + -0x7c);
        *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x7e);
        *(undefined2 *)(unaff_BP + -0x84) = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x78);
        *(undefined2 *)(unaff_BP + -0x82) = *(undefined2 *)(unaff_BP + -0x7a);
        *(undefined2 *)(unaff_BP + -0x80) = uVar6;
      }
      *(int *)(unaff_BP + -0x6e) = *(int *)(unaff_BP + -0x6e) + 1;
    }
    iStack_8 = 0xfb00;
    iStack_6 = uVar12;
    uVar16 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar16 + 0x14);
    *pbVar1 = *pbVar1 | 0x40;
    iStack_6 = 0;
    iStack_8 = 0xfb18;
    uVar16 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar16 + 0x14);
    *pbVar1 = *pbVar1 | 0x80;
    FUN_3ab8_4120();
    return;
  }
LAB_3ab8_41d7:
  while( true ) {
    if (*(int *)(unaff_BP + -0x2da) != 2) goto LAB_3ab8_426f;
    FUN_28b3_0d8b();
    func_0x00029c74();
    func_0x0002996b();
    func_0x00029983();
    func_0x0001bb4e();
    iStack_6 = 0xed94;
    func_0x00012276();
    iStack_6 = 0xed9e;
    func_0x00012276();
    iStack_6 = 0x11f2;
    iStack_8 = 0xedac;
    FUN_1000_0599();
    iStack_6 = 0x3d28;
    iStack_8 = 0xdef;
    iStack_a = 0xedbf;
    func_0x00012276();
    iStack_6 = unaff_BP + -0x2f4;
    iStack_8 = unaff_BP + -0x2ea;
    iStack_a = unaff_BP + -0x184;
    iStack_c = unaff_BP + -0x94;
    uStack_e = 0x11f2;
    iVar13 = 0xad;
    uStack_10 = 0xede3;
    iVar8 = func_0x000021a4();
    *(int *)(unaff_BP + -0x6e) = iVar8;
    if (iVar8 == -1) goto LAB_3ab8_426f;
    uVar15 = 0;
    if (*(int *)0x158 != 0) goto LAB_3ab8_38d2;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar15) break;
LAB_3ab8_41a3:
    iStack_6 = 0xed2c;
    func_0x00012276();
    *(undefined2 *)0xc22 = 1;
    iStack_6 = 0x11f2;
    iStack_8 = -0x12c0;
    FUN_1000_0599();
    iStack_6 = 0xed4c;
    func_0x00012276();
    iVar13 = 0x11f2;
    iStack_6 = -0x12aa;
    func_0x00012276();
  }
  func_0x000297e6();
  func_0x000297e6();
  iVar13 = 0x22b2;
  FUN_28b3_1181();
  if ((bool)uVar15) goto LAB_3ab8_41a3;
  if (*(int *)(unaff_BP + -0x6e) != 0) {
    if ((*(int *)(unaff_BP + -0x6e) == 0x65) || (*(int *)(unaff_BP + -0x6e) == 0x66))
    goto LAB_3ab8_42ab;
    goto LAB_3ab8_41d7;
  }
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c74();
  uVar12 = FUN_28b3_0f51();
  *(undefined2 *)0x114c = uVar12;
LAB_3ab8_42ab:
  iVar13 = 0x22b2;
  *(undefined2 *)(unaff_BP + -0x18a) = 0;
LAB_3ab8_426f:
  if (*(int *)(unaff_BP + -0x2da) == 3) {
    *(int *)0x114e = 1 - *(int *)0x114e;
  }
  goto LAB_3ab8_3b13;
code_r0x0003ec72:
  iStack_6 = unaff_BP + -0x270;
  iStack_8 = unaff_BP + -0x180;
  iStack_a = unaff_BP + -0x18c;
  iStack_c = 0x885;
  uStack_e = 0xec8d;
  iVar8 = FUN_3ab8_286f();
  if (iVar8 != -1) {
    if (*(int *)0x158 != 0) {
LAB_3ab8_38d2:
      FUN_3ab8_4fa6();
      return;
    }
    goto LAB_3ab8_371c;
  }
  goto LAB_3ab8_3b0d;
}



/* 3ab8:4c91  FUN_3ab8_4c91  454 bytes, 1 callers */

/* WARNING: Instruction at (ram,0x0003f812) overlaps instruction at (ram,0x0003f811)
    */

void FUN_3ab8_4c91(void)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 extraout_DX;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar9;
  undefined2 auStack_14 [7];
  undefined2 uStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_2 = 0xf814;
  FUN_3ab8_132e();
  uVar4 = in(extraout_DX);
  *unaff_DI = uVar4;
  while( true ) {
    uStack_2 = 0xf81c;
    func_0x00029af6();
    uStack_2 = 0xf821;
    func_0x00029d78();
    uStack_2 = 0xf82a;
    func_0x00029c2c();
    uStack_2 = 0xf833;
    func_0x00029983();
    *(undefined2 *)(unaff_BP + -0x6e) = 1;
    while (*(int *)(unaff_BP + -0x6e) <= *(int *)(unaff_BP + -0x8c)) {
      uStack_2 = 0xf51f;
      func_0x000297e6();
      uStack_2 = 0x22b2;
      uStack_4 = 0xf529;
      func_0x00029bb5();
      uStack_2 = 0xf52f;
      func_0x00029983();
      if (*(int *)(unaff_BP + -0x8c) == *(int *)(unaff_BP + -0x6e)) {
        iVar6 = *(int *)(unaff_BP + -0x2dc) * 4;
        uVar2 = *(undefined2 *)(unaff_BP + iVar6 + -0x17a);
        *(undefined2 *)(unaff_BP + -0x7e) = *(undefined2 *)(unaff_BP + iVar6 + -0x17c);
        *(undefined2 *)(unaff_BP + -0x7c) = uVar2;
        uVar2 = *(undefined2 *)(unaff_BP + iVar6 + -0x26a);
        *(undefined2 *)(unaff_BP + -0x7a) = *(undefined2 *)(unaff_BP + iVar6 + -0x26c);
        *(undefined2 *)(unaff_BP + -0x78) = uVar2;
      }
      else {
        uStack_2 = 0xf466;
        func_0x000297e6();
        uStack_2 = 0xf46f;
        func_0x00029c2c();
        uStack_2 = 0xf478;
        func_0x00029c74();
        uStack_2 = 0xf481;
        func_0x00029b6d();
        uStack_2 = 0xf48a;
        func_0x00029c74();
        uStack_2 = 0xf493;
        func_0x00029b6d();
        uStack_2 = 0xf49c;
        func_0x00029c74();
        uStack_2 = 0xf4a4;
        func_0x00029983();
        uStack_2 = 0xf4ad;
        func_0x000297e6();
        uStack_2 = 0xf4b6;
        func_0x00029c2c();
        uStack_2 = 0xf4bf;
        func_0x00029c74();
        uStack_2 = 0xf4c8;
        func_0x00029b6d();
        uStack_2 = 0xf4d1;
        func_0x00029c74();
        uStack_2 = 0xf4da;
        func_0x00029b6d();
        uStack_2 = 0xf4e3;
        func_0x00029c74();
        uStack_2 = 0xf4eb;
        func_0x00029983();
      }
      puVar8 = auStack_14;
      puVar7 = (undefined2 *)(unaff_BP + -0x86);
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar5 = puVar8;
        puVar8 = puVar8 + 1;
        puVar3 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = *puVar3;
      }
      iVar6 = FUN_17a6_0cba();
      if (iVar6 != 0) {
        if ((*(int *)(unaff_BP + -0x2f0) == *(int *)(unaff_BP + -0x2dc)) &&
           (*(int *)(unaff_BP + -0x6e) == 1)) {
          uStack_2 = *(undefined2 *)0x148;
          uStack_4 = 0x11f2;
          uStack_6 = 0xf57e;
          uVar9 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar9 + 0x14);
          *pbVar1 = *pbVar1 | 0x40;
          uStack_2 = *(undefined2 *)0x148;
          uStack_4 = 0;
          uStack_6 = 0xf596;
          uVar9 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar9 + 0x14);
          *pbVar1 = *pbVar1 & 0x7f;
        }
        else {
          uStack_2 = *(undefined2 *)0x148;
          uStack_4 = 0x11f2;
          uStack_6 = 0xf5b0;
          uVar9 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar9 + 0x14);
          *pbVar1 = *pbVar1 & 0xbf;
          uStack_2 = *(undefined2 *)0x148;
          uStack_4 = 0;
          uStack_6 = 0xf5c8;
          uVar9 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar9 + 0x14);
          *pbVar1 = *pbVar1 | 0x80;
        }
        *(int *)(unaff_BP + -0x18c) = *(int *)(unaff_BP + -0x18c) + 1;
        uVar2 = *(undefined2 *)(unaff_BP + -0x7c);
        *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x7e);
        *(undefined2 *)(unaff_BP + -0x84) = uVar2;
        uVar2 = *(undefined2 *)(unaff_BP + -0x78);
        *(undefined2 *)(unaff_BP + -0x82) = *(undefined2 *)(unaff_BP + -0x7a);
        *(undefined2 *)(unaff_BP + -0x80) = uVar2;
      }
      *(int *)(unaff_BP + -0x6e) = *(int *)(unaff_BP + -0x6e) + 1;
    }
    *(int *)(unaff_BP + -0x2dc) = *(int *)(unaff_BP + -0x2dc) + 1;
    if (*(int *)(unaff_BP + -0x2f6) < *(int *)(unaff_BP + -0x2dc)) break;
    uStack_2 = 0xf615;
    func_0x000297e6();
    uStack_2 = 0xf61a;
    func_0x00029d78();
    uStack_2 = 0xf623;
    func_0x000299d1();
    uStack_2 = 0xf62c;
    func_0x000297e6();
    uStack_2 = 0xf631;
    func_0x00029d78();
    uStack_2 = 0xf63a;
    func_0x000299d1();
    uStack_2 = 0xf64b;
    func_0x00029834();
    uStack_2 = 0xf654;
    func_0x000299b9();
    uStack_2 = 0xf65d;
    func_0x000299d1();
    uStack_2 = 0xf666;
    func_0x00029834();
    uStack_2 = 0xf66f;
    func_0x000299b9();
    uStack_2 = 0xf678;
    func_0x000299d1();
    uStack_2 = 0xf681;
    func_0x00029834();
    uStack_2 = 0xf68a;
    func_0x00029834();
    uStack_2 = 0xf693;
    func_0x000299b9();
    uStack_2 = 0xf698;
    FUN_28b3_1172();
    uStack_2 = 0xf6a1;
    func_0x000299b9();
    uStack_2 = 0xf6aa;
    func_0x00029c2c();
    uStack_2 = 0xf6b3;
    func_0x00029834();
    uStack_2 = 0xf6bc;
    func_0x00029c2c();
    uStack_2 = 0xf6c1;
    FUN_28b3_1163();
    uStack_2 = 0xf6ca;
    func_0x00029834();
    uStack_2 = 0xf6d3;
    func_0x000299b9();
    uStack_2 = 0xf6d8;
    FUN_28b3_1163();
    uStack_2 = 0xf6e1;
    func_0x00029c44();
    uStack_2 = 0xf6ea;
    func_0x000299d1();
    uStack_2 = 0xf6f3;
    func_0x00029834();
    uStack_2 = 0xf6fc;
    func_0x00029c44();
    uStack_2 = 0xf705;
    func_0x000299b9();
    uStack_2 = 0xf70e;
    func_0x00029c2c();
    uStack_2 = 0xf717;
    func_0x00029834();
    uStack_2 = 0xf720;
    func_0x00029c2c();
    uStack_2 = 0xf725;
    FUN_28b3_1163();
    uStack_2 = 0xf72e;
    func_0x00029834();
    uStack_2 = 0xf737;
    func_0x000299b9();
    uStack_2 = 0xf73c;
    FUN_28b3_1163();
    uStack_2 = 0xf745;
    func_0x00029c44();
    uStack_2 = 0xf74e;
    func_0x000299d1();
    uStack_2 = 0xf757;
    func_0x00029834();
    uStack_2 = 0xf760;
    func_0x00029c2c();
    uStack_2 = 0xf769;
    func_0x00029c74();
    uStack_2 = 0xf772;
    func_0x00029c74();
    uStack_2 = 0xf77b;
    func_0x00029834();
    uStack_2 = 0xf784;
    func_0x00029c2c();
    uStack_2 = 0xf78d;
    func_0x000299b9();
    uStack_2 = 0xf792;
    FUN_28b3_1172();
    uStack_2 = 0xf79b;
    func_0x000299d1();
    uStack_2 = 0xf7a4;
    func_0x00029834();
    uStack_2 = 0xf7ad;
    func_0x00029c2c();
    uStack_2 = 0xf7b6;
    func_0x00029c74();
    uStack_2 = 0xf7bf;
    func_0x00029c74();
    uStack_2 = 0xf7c8;
    func_0x00029c44();
    uStack_2 = 0xf7d1;
    func_0x000299d1();
    uVar2 = *(undefined2 *)0x114c;
    *(undefined2 *)(unaff_BP + -0x8c) = uVar2;
    *(undefined2 *)(unaff_BP + -0x326) = uVar2;
    uStack_2 = 0xf7e5;
    FUN_28b3_0d8b();
    uStack_2 = 0xf7ea;
    func_0x00029d78();
    uStack_2 = 0xf7f3;
    func_0x00029bfc();
    uStack_2 = 0xf7fc;
    FUN_28b3_112c();
    uStack_2 = 0xf805;
    func_0x0002996b();
    uStack_2 = 0xf80e;
    func_0x00029983();
    uStack_2 = 0xf817;
    func_0x000297e6();
  }
  FUN_3ab8_4cbb();
  return;
}



/* 3ab8:4cbb  FUN_3ab8_4cbb  747 bytes, 1 callers */

void FUN_3ab8_4cbb(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iVar5;
  int unaff_BP;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar9;
  undefined2 auStack_16 [7];
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_2 = *(undefined2 *)0x14a;
  uStack_4 = *(undefined2 *)0x148;
  uStack_6 = 0x3ab8;
  uStack_8 = 0xf848;
  uVar9 = func_0x0000013f();
  pbVar1 = (byte *)((int)uVar9 + 0x14);
  *pbVar1 = *pbVar1 | 0x40;
  uStack_2 = *(undefined2 *)0x14a;
  uStack_4 = *(undefined2 *)0x148;
  uStack_6 = 0;
  uStack_8 = 0xf860;
  uVar9 = func_0x0000013f();
  pbVar1 = (byte *)((int)uVar9 + 0x14);
  *pbVar1 = *pbVar1 | 0x80;
  if (*(int *)(unaff_BP + 6) != 2) {
    FUN_3ab8_4120();
    return;
  }
  *(undefined1 *)(unaff_BP + -0x75) = *(undefined1 *)0xa6a;
  *(undefined1 *)(unaff_BP + -0x76) = *(undefined1 *)0xa6c;
  *(undefined1 *)(unaff_BP + -0x74) = *(undefined1 *)0xb310;
  *(undefined2 *)(unaff_BP + -0x18c) = 0;
  uStack_2 = 0;
  uStack_4 = 0;
  uStack_6 = 0xf892;
  func_0x0000daa6();
  uVar8 = *(undefined2 *)(unaff_BP + -0x17a);
  *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x17c);
  *(undefined2 *)(unaff_BP + -0x84) = uVar8;
  uVar8 = *(undefined2 *)(unaff_BP + -0x26a);
  *(undefined2 *)(unaff_BP + -0x82) = *(undefined2 *)(unaff_BP + -0x26c);
  *(undefined2 *)(unaff_BP + -0x80) = uVar8;
  iVar5 = (*(int *)(unaff_BP + -0x9c) + -1) * *(int *)0x114c;
  *(int *)(unaff_BP + -0x1742) = iVar5;
  *(int *)(unaff_BP + -0x172e) = iVar5 + -1;
  uStack_2 = 0x885;
  uStack_4 = 0xf8cd;
  FUN_28b3_0d8b();
  uStack_2 = 0x22b2;
  uStack_4 = 0xf8d2;
  FUN_28b3_1c08();
  uStack_2 = 0x22b2;
  uStack_4 = 0xf8d7;
  FUN_28b3_1177();
  uStack_2 = 0x22b2;
  uVar8 = 0x22b2;
  uStack_4 = 0xf8e0;
  func_0x00029983();
  *(undefined2 *)(unaff_BP + -0x6e) = 1;
  while (*(int *)(unaff_BP + -0x6e) < *(int *)(unaff_BP + -0x1742)) {
    *(int *)(unaff_BP + -0x172e) = *(int *)(unaff_BP + -0x6e);
    uStack_4 = 0xfa4d;
    uStack_2 = uVar8;
    FUN_28b3_0d8b();
    uStack_2 = 0x22b2;
    uStack_4 = 0xfa56;
    func_0x00029b6d();
    uStack_2 = 0x22b2;
    uStack_4 = 0xfa5f;
    func_0x00029983();
    *(undefined2 *)(unaff_BP + -0x2d8) = 1;
    while (*(int *)(unaff_BP + -0x2d8) <= *(int *)(unaff_BP + -0x9c)) {
      iVar5 = *(int *)(unaff_BP + -0x2d8) * 4;
      uVar8 = *(undefined2 *)(unaff_BP + iVar5 + -0x17e);
      *(undefined2 *)(unaff_BP + iVar5 + -0x16de) = *(undefined2 *)(unaff_BP + iVar5 + -0x180);
      *(undefined2 *)(unaff_BP + iVar5 + -0x16dc) = uVar8;
      uVar8 = *(undefined2 *)(unaff_BP + iVar5 + -0x26e);
      *(undefined2 *)(unaff_BP + iVar5 + -0x14f6) = *(undefined2 *)(unaff_BP + iVar5 + -0x270);
      *(undefined2 *)(unaff_BP + iVar5 + -0x14f4) = uVar8;
      *(int *)(unaff_BP + -0x2d8) = *(int *)(unaff_BP + -0x2d8) + 1;
    }
    *(undefined2 *)(unaff_BP + -0x2d8) = 1;
    while (*(int *)(unaff_BP + -0x2d8) < *(int *)(unaff_BP + -0x9c)) {
      *(undefined2 *)(unaff_BP + -0x2dc) = 1;
      while (*(int *)(unaff_BP + -0x2dc) <= *(int *)(unaff_BP + -0x9c) - *(int *)(unaff_BP + -0x2d8)
            ) {
        uStack_2 = 0x22b2;
        uStack_4 = 0xf94f;
        func_0x000297e6();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf954;
        func_0x00029d78();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf95d;
        func_0x00029834();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf966;
        func_0x000297e6();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf96b;
        func_0x00029d78();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf970;
        FUN_28b3_1163();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf979;
        func_0x000299b9();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf97e;
        func_0x00029c9d();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf987;
        func_0x000297e6();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf990;
        func_0x00029b6d();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf995;
        func_0x00029d78();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf99a;
        FUN_28b3_117c();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf9a1;
        func_0x00029983();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf9ae;
        func_0x000297e6();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf9b3;
        func_0x00029d78();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf9bc;
        func_0x00029c2c();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf9c5;
        func_0x000297e6();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf9ce;
        func_0x00029b6d();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf9d3;
        func_0x00029d78();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf9d8;
        FUN_28b3_117c();
        uStack_2 = 0x22b2;
        uStack_4 = 0xf9df;
        func_0x00029983();
        *(int *)(unaff_BP + -0x2dc) = *(int *)(unaff_BP + -0x2dc) + 1;
      }
      *(int *)(unaff_BP + -0x2d8) = *(int *)(unaff_BP + -0x2d8) + 1;
    }
    uVar8 = *(undefined2 *)(unaff_BP + -0x16d8);
    *(undefined2 *)(unaff_BP + -0x7e) = *(undefined2 *)(unaff_BP + -0x16da);
    *(undefined2 *)(unaff_BP + -0x7c) = uVar8;
    uVar8 = *(undefined2 *)(unaff_BP + -0x14f0);
    *(undefined2 *)(unaff_BP + -0x7a) = *(undefined2 *)(unaff_BP + -0x14f2);
    *(undefined2 *)(unaff_BP + -0x78) = uVar8;
    puVar7 = auStack_16;
    puVar6 = (undefined2 *)(unaff_BP + -0x86);
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar2;
    }
    uVar8 = 0x11f2;
    iVar5 = FUN_17a6_0cba();
    if (iVar5 != 0) {
      if (*(int *)(unaff_BP + -0x18c) == 0) {
        uStack_2 = *(undefined2 *)0x14a;
        uStack_4 = *(undefined2 *)0x148;
        uStack_6 = 0x11f2;
        uStack_8 = 0xfa7c;
        uVar9 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar9 + 0x14);
        *pbVar1 = *pbVar1 | 0x40;
        uStack_2 = *(undefined2 *)0x14a;
        uStack_4 = *(undefined2 *)0x148;
        uStack_6 = 0;
        uStack_8 = 0xfa94;
        uVar9 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar9 + 0x14);
        *pbVar1 = *pbVar1 & 0x7f;
      }
      else {
        uStack_2 = *(undefined2 *)0x14a;
        uStack_4 = *(undefined2 *)0x148;
        uStack_6 = 0x11f2;
        uStack_8 = 0xfaae;
        uVar9 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar9 + 0x14);
        *pbVar1 = *pbVar1 & 0xbf;
        uStack_2 = *(undefined2 *)0x14a;
        uStack_4 = *(undefined2 *)0x148;
        uStack_6 = 0;
        uStack_8 = 0xfac6;
        uVar9 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar9 + 0x14);
        *pbVar1 = *pbVar1 | 0x80;
      }
      uVar8 = 0;
      *(int *)(unaff_BP + -0x18c) = *(int *)(unaff_BP + -0x18c) + 1;
      uVar4 = *(undefined2 *)(unaff_BP + -0x7c);
      *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x7e);
      *(undefined2 *)(unaff_BP + -0x84) = uVar4;
      uVar4 = *(undefined2 *)(unaff_BP + -0x78);
      *(undefined2 *)(unaff_BP + -0x82) = *(undefined2 *)(unaff_BP + -0x7a);
      *(undefined2 *)(unaff_BP + -0x80) = uVar4;
    }
    *(int *)(unaff_BP + -0x6e) = *(int *)(unaff_BP + -0x6e) + 1;
  }
  uStack_2 = *(undefined2 *)0x14a;
  uStack_4 = *(undefined2 *)0x148;
  uStack_8 = 0xfb00;
  uStack_6 = uVar8;
  uVar9 = func_0x0000013f();
  pbVar1 = (byte *)((int)uVar9 + 0x14);
  *pbVar1 = *pbVar1 | 0x40;
  uStack_2 = *(undefined2 *)0x14a;
  uStack_4 = *(undefined2 *)0x148;
  uStack_6 = 0;
  uStack_8 = 0xfb18;
  uVar9 = func_0x0000013f();
  pbVar1 = (byte *)((int)uVar9 + 0x14);
  *pbVar1 = *pbVar1 | 0x80;
  FUN_3ab8_4120();
  return;
}



/* 3ab8:4fa6  FUN_3ab8_4fa6  6 bytes, 1 callers */

void __cdecl16far FUN_3ab8_4fa6(void)

{
  return;
}



/* 3ab8:4fac  FUN_3ab8_4fac  17 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000402a0) */
/* WARNING: Removing unreachable block (ram,0x00040128) */
/* WARNING: Removing unreachable block (ram,0x000401e5) */
/* WARNING: Removing unreachable block (ram,0x0004020b) */
/* WARNING: Removing unreachable block (ram,0x00040208) */
/* WARNING: Removing unreachable block (ram,0x0004006c) */
/* WARNING: Removing unreachable block (ram,0x000400f0) */
/* WARNING: Removing unreachable block (ram,0x000400f3) */
/* WARNING: Removing unreachable block (ram,0x000400f8) */
/* WARNING: Removing unreachable block (ram,0x000400fb) */
/* WARNING: Removing unreachable block (ram,0x00040102) */
/* WARNING: Removing unreachable block (ram,0x0004011c) */
/* WARNING: Removing unreachable block (ram,0x00040829) */
/* WARNING: Removing unreachable block (ram,0x00040904) */
/* WARNING: Removing unreachable block (ram,0x0003fc74) */
/* WARNING: Type propagation algorithm not settling */

int FUN_3ab8_4fac(undefined2 param_1,int param_2,int param_3,int param_4,int param_5,
                 undefined2 *param_6,undefined2 *param_7,undefined2 *param_8,undefined2 *param_9)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  int ***pppiVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  long lVar13;
  undefined4 uVar14;
  int ***pppiStack_140;
  undefined2 uStack_13e;
  int ***pppiStack_13c;
  undefined2 uStack_13a;
  int **ppiStack_138;
  undefined2 uStack_136;
  undefined2 uStack_130;
  undefined2 uStack_12e;
  int **ppiStack_12c;
  undefined2 uStack_12a;
  undefined2 uStack_128;
  undefined2 uStack_126;
  undefined2 uStack_124;
  undefined2 uStack_122;
  int iStack_120;
  undefined2 uStack_11e;
  undefined2 uStack_11c;
  uint uStack_11a;
  undefined2 uStack_118;
  undefined2 uStack_116;
  uint uStack_114;
  undefined2 uStack_112;
  undefined2 uStack_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined1 auStack_108 [4];
  undefined2 ***apppuStack_104 [12];
  int iStack_ec;
  undefined2 uStack_e6;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined2 uStack_d6;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined2 uStack_cc;
  undefined2 uStack_c2;
  int iStack_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 ***pppuStack_ba;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  undefined2 uStack_aa;
  undefined2 uStack_a8;
  uint uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  int ***pppiStack_96;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined2 uStack_88;
  undefined2 uStack_86;
  int ***pppiStack_80;
  undefined2 uStack_7e;
  undefined2 ***pppuStack_7c;
  int iStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  int iStack_60;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined2 uStack_42;
  int ***pppiStack_40;
  undefined2 uStack_3e;
  int ***pppiStack_3c;
  undefined2 uStack_3a;
  int **ppiStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  int iStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined4 uStack_22;
  undefined2 uStack_1c;
  undefined4 uStack_1a;
  undefined2 uStack_16;
  undefined2 ****ppppuStack_14;
  undefined4 uStack_12;
  undefined2 ****ppppuStack_e;
  int ****ppppiStack_c;
  
  FUN_21f2_0ebc();
  if (param_2 == 1) {
    ppppiStack_c = (int ****)0x22b2;
    ppppuStack_e = (undefined2 ****)0xfb4c;
    FUN_21f2_3454();
  }
  if (param_2 == 2) {
    ppppiStack_c = (int ****)0x22b2;
    ppppuStack_e = (undefined2 ****)0xfb61;
    FUN_21f2_3454();
  }
  uVar10 = 0x22b2;
  pppuStack_7c = (undefined2 ***)0x0;
  uStack_94 = CONCAT22(uStack_94._2_2_,(undefined2)uStack_94);
LAB_3ab8_4fe8:
  do {
    do {
      ppppuStack_e = (undefined2 ****)0xfb76;
      ppppiStack_c = (int ****)uVar10;
      FUN_21f2_3454();
      ppppiStack_c = (int ****)0x22b2;
      ppppuStack_e = (undefined2 ****)0xfb86;
      FUN_21f2_2d26();
      ppppiStack_c = (int ****)0x22b2;
      ppppuStack_e = (undefined2 ****)0xfb96;
      FUN_21f2_2d26();
      *(undefined2 *)0xc2c = 1;
      ppppiStack_c = (int ****)&ppiStack_12c;
      ppppuStack_e = apppuStack_104;
      uStack_12._2_2_ = pppuStack_7c;
      uStack_12._0_2_ = (undefined2 *)0x22b2;
      uVar10 = 0x1bb4;
      ppppuStack_14 = (undefined2 ****)0xfbba;
      uStack_114 = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      if ((*(int *)0x158 != 0) || (uStack_114 == 0x14)) {
code_r0x00030c25:
        while( true ) {
          if ((iStack_2a != 10000) || (uVar11 = iStack_60 == 10000, !(bool)uVar11)) {
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
          uStack_12._2_2_ = (undefined2 ***)0x32b2;
          uStack_12._0_2_ = (undefined2 *)0xce2;
          FUN_32b2_6eb1();
          uStack_12._2_2_ = (undefined2 ***)0x32b2;
          uStack_12._0_2_ = (undefined2 *)0xce7;
          puVar5 = (undefined2 *)FUN_32b2_7592();
          pppiStack_96 = (int ***)*puVar5;
          uStack_94._0_2_ = puVar5[1];
          uStack_94._2_2_ = puVar5[2];
          uStack_90 = puVar5[3];
          ppppiStack_c = (int ****)&ppppuStack_e;
          ppppuStack_e = (undefined2 ****)0x32b2;
          uStack_12._2_2_ = (undefined2 ***)0xd08;
          FUN_32b2_6cc6();
          ppppuStack_e = (undefined2 ****)0x32b2;
          uStack_12._2_2_ = (undefined2 ***)0xd0d;
          FUN_32b2_7258();
          uStack_16 = 0x32b2;
          uStack_1a._2_2_ = 0xd17;
          FUN_32b2_6eb1();
          uStack_16 = 0x32b2;
          uStack_1a._2_2_ = 0xd20;
          FUN_32b2_6cc6();
          uStack_16 = 0x32b2;
          uStack_1a._2_2_ = 0xd25;
          FUN_32b2_7258();
          uStack_22._2_2_ = 0xd2f;
          FUN_32b2_6eb1();
          uStack_22._2_2_ = uStack_da;
          uStack_22._0_2_ = uStack_dc;
          uStack_24 = uStack_de;
          uStack_26 = uStack_bc;
          uStack_28 = uStack_be;
          iStack_2a = iStack_c0;
          uStack_2c = uStack_c2;
          uStack_2e = 0x32b2;
          uStack_30 = 0xd53;
          iVar6 = FUN_3ab8_4fbd();
          if (iVar6 == 0) break;
          ppppiStack_c = (int ****)0xd66;
          FUN_32b2_6d14();
          ppppiStack_c = (int ****)0xd6f;
          FUN_32b2_6e99();
          ppppiStack_c = (int ****)0xd77;
          FUN_32b2_6ef9();
          ppppiStack_c = (int ****)&uStack_e2;
          ppppuStack_e = (undefined2 ****)0x32b2;
          uStack_12._2_2_ = (undefined2 ***)0xd8a;
          FUN_32b2_6cc6();
          ppppuStack_e = (undefined2 ****)0x32b2;
          uStack_12._2_2_ = (undefined2 ***)0xd8f;
          FUN_32b2_7258();
          uStack_16 = 0x32b2;
          uStack_1a._2_2_ = 0xd99;
          FUN_32b2_6eb1();
          uStack_16 = 0x32b2;
          uStack_1a._2_2_ = 0xda1;
          FUN_32b2_6cc6();
          uStack_16 = 0x32b2;
          uStack_1a._2_2_ = 0xda6;
          FUN_32b2_7258();
          uStack_22._2_2_ = 0xdb0;
          FUN_32b2_6eb1();
          uStack_22._2_2_ = 0xdb9;
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
          uStack_2e = 0x32b2;
          uStack_30 = 0xddf;
          FUN_32b2_6eb1();
          uStack_2e = 0x32b2;
          uStack_30 = 0xde8;
          FUN_32b2_6cc6();
          uStack_2e = 0x32b2;
          uStack_30 = 0xded;
          FUN_32b2_7258();
          uStack_36 = 0x32b2;
          ppiStack_38 = (int **)0xdf7;
          FUN_32b2_6eb1();
          uStack_36 = 0x32b2;
          ppiStack_38 = (int **)0xe00;
          FUN_32b2_6cc6();
          uStack_36 = 0x32b2;
          ppiStack_38 = (int **)0xe05;
          FUN_32b2_7258();
          uStack_3e = 0x32b2;
          pppiStack_40 = (int ***)0xe0f;
          FUN_32b2_6eb1();
          uStack_3e = 1;
          pppiStack_40 = (int ***)0x32b2;
                    /* WARNING: Call to offcut address within same function */
          uStack_42 = 0xe17;
          func_0x0003fc09();
          uVar11 = (undefined1 *)0xffc9 < &pppiStack_3c;
          uStack_e6 = *(undefined2 *)0x9380;
          uStack_e4 = *(undefined2 *)0x9382;
          FUN_32b2_6cc6();
          FUN_32b2_704d();
          FUN_32b2_7258();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_7173();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_6e99();
          FUN_32b2_718c();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_7182();
          FUN_32b2_710c();
          FUN_32b2_6e99();
          FUN_32b2_6ef9();
          FUN_32b2_6d14();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_70f4();
          FUN_32b2_6e99();
          FUN_32b2_7191();
          if (!(bool)uVar11) {
            FUN_32b2_6d14();
            FUN_32b2_6d14();
            FUN_32b2_6fc7();
            FUN_32b2_7191();
            if ((bool)uVar11) {
              pppiStack_96 = (int ***)*(undefined2 *)0x93c0;
              uStack_94._0_2_ = *(undefined2 *)0x93c2;
              uStack_94._2_2_ = *(undefined2 *)0x93c4;
              uStack_90 = *(undefined2 *)0x93c6;
            }
            ppppiStack_c = (int ****)(undefined2)uStack_94;
            ppppuStack_e = (undefined2 ****)pppiStack_96;
            uStack_12._2_2_ = (undefined2 ***)0x32b2;
            uStack_12._0_2_ = (undefined2 *)0xf53;
            puVar5 = (undefined2 *)FUN_32b2_7592();
            uStack_d6 = *puVar5;
            uStack_d4 = puVar5[1];
            uStack_d2 = puVar5[2];
            uStack_d0 = puVar5[3];
            ppppiStack_c = (int ****)&uStack_aa;
            ppppuStack_e = (undefined2 ****)0x32b2;
            uStack_12._2_2_ = (undefined2 ***)0xf75;
            FUN_32b2_6cc6();
            ppppuStack_e = (undefined2 ****)0x32b2;
            uStack_12._2_2_ = (undefined2 ***)0xf7a;
            FUN_32b2_7258();
            uStack_16 = 0x32b2;
            uStack_1a._2_2_ = 0xf84;
            FUN_32b2_6eb1();
            uStack_16 = 0x32b2;
            uStack_1a._2_2_ = 0xf8c;
            FUN_32b2_6cc6();
            uStack_16 = 0x32b2;
            uStack_1a._2_2_ = 0xf91;
            FUN_32b2_7258();
            uStack_22._2_2_ = 0xf9b;
            FUN_32b2_6eb1();
            uStack_22._2_2_ = uStack_ae;
            uStack_22._0_2_ = uStack_b0;
            uStack_24 = uStack_b2;
            uStack_26 = uStack_98;
            uStack_28 = uStack_9a;
            iStack_2a = uStack_9c;
            uStack_2c = uStack_9e;
            uStack_2e = uStack_d0;
            uStack_30 = uStack_d2;
            uStack_32 = uStack_d4;
            uStack_34 = uStack_d6;
            uStack_36 = uStack_b4;
            ppiStack_38 = (int **)uStack_b6;
            uStack_3a = uStack_b8;
            pppiStack_3c = pppuStack_ba;
            uStack_3e = 0;
            pppiStack_40 = (int ***)0x32b2;
                    /* WARNING: Call to offcut address within same function */
            uStack_42 = 0xfe2;
            func_0x0003fc09();
            uVar11 = (undefined1 *)0xffc9 < &uStack_3e;
            *param_6 = uStack_aa;
            param_6[1] = uStack_a8;
            *param_7 = uStack_ce;
            param_7[1] = uStack_cc;
            *param_8 = uStack_aa;
            param_8[1] = uStack_a8;
            *param_9 = uStack_ce;
            param_9[1] = uStack_cc;
            iStack_6e = iStack_6e + 1;
            ppppiStack_c = (int ****)0x1031;
            FUN_32b2_6d14();
            ppppiStack_c = (int ****)0x103a;
            FUN_32b2_6d14();
            ppppiStack_c = (int ****)0x103f;
            FUN_32b2_7191();
            if ((bool)uVar11) {
              ppppiStack_c = (int ****)&uStack_aa;
              ppppuStack_e = (undefined2 ****)0x32b2;
              uStack_12._2_2_ = (undefined2 ***)0x1057;
              FUN_32b2_6cc6();
              ppppuStack_e = (undefined2 ****)0x32b2;
              uStack_12._2_2_ = (undefined2 ***)0x105c;
              FUN_32b2_7258();
              uStack_16 = 0x32b2;
              uStack_1a._2_2_ = 0x1066;
              FUN_32b2_6eb1();
              uStack_16 = 0x32b2;
              uStack_1a._2_2_ = 0x106e;
              FUN_32b2_6cc6();
              uStack_16 = 0x32b2;
              uStack_1a._2_2_ = 0x1073;
              FUN_32b2_7258();
              uStack_22._2_2_ = 0x107d;
              FUN_32b2_6eb1();
              uStack_22._2_2_ = uStack_ae;
              uStack_22._0_2_ = uStack_b0;
              uStack_24 = uStack_b2;
              uStack_26 = uStack_98;
              uStack_28 = uStack_9a;
              iStack_2a = uStack_9c;
              uStack_2c = uStack_9e;
              uStack_2e = 0x32b2;
              uStack_30 = 0x10a6;
              FUN_32b2_6d14();
              uStack_2e = 0x32b2;
              uStack_30 = 0x10ab;
              FUN_32b2_6fd6();
              uStack_36 = 0x32b2;
              ppiStack_38 = (int **)0x10b5;
              FUN_32b2_6eb1();
              uStack_36 = uStack_b4;
              ppiStack_38 = (int **)uStack_b6;
              uStack_3a = uStack_b8;
              pppiStack_3c = pppuStack_ba;
              uStack_3e = 0;
              pppiStack_40 = (int ***)0x32b2;
                    /* WARNING: Call to offcut address within same function */
              uStack_42 = 0x10cc;
              func_0x0003fc09();
              *param_8 = uStack_aa;
              param_8[1] = uStack_a8;
              *param_9 = uStack_ce;
              param_9[1] = uStack_cc;
              return iStack_6e + 1;
            }
            return iStack_6e;
          }
          if (iStack_ec != 0) {
            return 0;
          }
          iStack_ec = 1;
          iVar9 = -(param_5 + (uint)(param_4 != 0));
          ppppiStack_c = (int ****)0x32b2;
          ppppuStack_e = (undefined2 ****)0xef8;
          puVar7 = (undefined2 *)FUN_1000_0271();
          puVar5 = &uStack_36;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar3 = puVar5;
            puVar5 = puVar5 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar2;
          }
          iVar9 = -(param_3 + (uint)(param_2 != 0));
          ppppiStack_c = (int ****)0x1000;
          ppppuStack_e = (undefined2 ****)0xba1;
          puVar7 = (undefined2 *)FUN_1000_0271();
          puVar5 = &uStack_6c;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar3 = puVar5;
            puVar5 = puVar5 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar2;
          }
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          uStack_e2 = uStack_6c;
          uStack_e0 = uStack_6a;
          uStack_e6 = uStack_68;
          uStack_e4 = uStack_66;
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6eb1();
        }
        return 0;
      }
      if (uStack_114 == 0xffff) {
        ppppiStack_c = (int ****)0xfbe5;
        func_0x0000daa6();
        func_0x0000c3ca();
        ppppiStack_c = (int ****)0x885;
        for (; 0 < (int)pppuStack_7c; pppuStack_7c = (undefined2 ***)((int)pppuStack_7c + -1)) {
          uStack_130 = *(undefined2 *)0x148;
          uStack_12e = *(undefined2 *)0x14a;
          ppppuStack_e = (undefined2 ****)0xfc03;
          func_0x00018779();
          ppppiStack_c = (int ****)0x11f2;
        }
        pppuStack_7c = (undefined2 ***)0x0;
        pppiStack_96 = (int ***)0x0;
        uVar10 = 0x885;
        ppppiStack_c = (int ****)0xfc20;
        func_0x0000b1d8();
      }
    } while (pppiStack_96 == (int ***)0x0);
    func_0x000297e6();
    func_0x00029d78();
    uStack_12._2_2_ = (undefined2 ***)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xfc43;
    func_0x000299d1();
    uStack_12._2_2_ = (undefined2 ***)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xfc4c;
    func_0x000297e6();
    uStack_12._2_2_ = (undefined2 ***)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xfc51;
    func_0x00029d78();
    uStack_1a._2_2_ = 0x22b2;
    uStack_1a._0_2_ = 0xfc5b;
    func_0x000299d1();
    uStack_1a._2_2_ = 0x22b2;
    uVar10 = 0x11f2;
    uStack_1a._0_2_ = 0xfc60;
    lVar13 = FUN_13bf_39a0();
    if (0 < lVar13) {
      ppppiStack_c = (int ****)0x11f2;
      ppppuStack_e = (undefined2 ****)0xfc82;
      uStack_94 = lVar13;
      func_0x0000013f();
      FUN_28b3_0c98();
      func_0x00029d78();
      uStack_12._2_2_ = (undefined2 ***)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xfc9f;
      func_0x000299d1();
      ppppuStack_14 = (undefined2 ****)0x22b2;
      uStack_16 = 0xfcac;
      uStack_12 = uStack_94;
      func_0x0000013f();
      uStack_12._2_2_ = (undefined2 ***)0x0;
      uStack_12._0_2_ = (undefined2 *)0xfcba;
      FUN_28b3_0c98();
      uStack_12._2_2_ = (undefined2 ***)0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xfcbf;
      func_0x00029d78();
      uStack_1a._2_2_ = 0x22b2;
      uStack_1a._0_2_ = 0xfcc9;
      func_0x000299d1();
      uStack_1c = 0x22b2;
      uStack_1a = uStack_94;
      func_0x0000013f();
      uStack_1a._2_2_ = 0;
      uStack_1a._0_2_ = 0xfce4;
      FUN_28b3_0c98();
      uStack_1a._2_2_ = 0x22b2;
      uStack_1a._0_2_ = 0xfce9;
      func_0x00029d78();
      uStack_22._2_2_ = 0x22b2;
      uStack_22._0_2_ = 0xfcf3;
      func_0x000299d1();
      uStack_24 = 0x22b2;
      uStack_26 = 0xfd00;
      uStack_22 = uStack_94;
      func_0x0000013f();
      uStack_22._2_2_ = 0;
      uStack_22._0_2_ = 0xfd0b;
      FUN_28b3_0c98();
      uStack_22._2_2_ = 0x22b2;
      uStack_22._0_2_ = 0xfd10;
      func_0x00029d78();
      uStack_28 = 0x22b2;
      iStack_2a = 0xfd1a;
      func_0x000299d1();
      uStack_28 = 0x22b2;
      uVar10 = 0x1bb4;
      iStack_2a = -0x2e1;
      iVar6 = FUN_1def_043a();
      lVar13 = uStack_94;
      if (iVar6 == 0) goto LAB_3ab8_5240;
LAB_3ab8_51a9:
      ppppuStack_e = (undefined2 ****)0xfd37;
      ppppiStack_c = (int ****)uVar10;
      FUN_21f2_3454();
      ppppiStack_c = (int ****)0x22b2;
      ppppuStack_e = (undefined2 ****)0xfd47;
      FUN_21f2_2d26();
      ppppiStack_c = (int ****)0x22b2;
      ppppuStack_e = (undefined2 ****)0xfd57;
      FUN_21f2_2d26();
      ppppiStack_c = (int ****)0x22b2;
      ppppuStack_e = (undefined2 ****)0xfd67;
      FUN_21f2_2d26();
      ppppiStack_c = (int ****)0x22b2;
      ppppuStack_e = (undefined2 ****)0xfd77;
      FUN_21f2_2d26();
      ppppiStack_c = (int ****)0x22b2;
      ppppuStack_e = (undefined2 ****)0xfd87;
      FUN_21f2_2d26();
      ppppiStack_c = (int ****)&ppiStack_12c;
      ppppuStack_e = apppuStack_104;
      *(undefined2 *)0xc20 = 1;
      uStack_12._2_2_ = (undefined2 ***)0x1;
      uStack_12._0_2_ = (undefined2 *)0x22b2;
      uVar10 = 0x1bb4;
      ppppuStack_14 = (undefined2 ****)0xfda9;
      uStack_114 = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) goto code_r0x00030c25;
      if (uStack_114 != 0xffff) {
        if (pppiStack_96 != (int ***)0x0) {
          ppppiStack_c = (int ****)pppiStack_96;
          ppppuStack_e = (undefined2 ****)0x1bb4;
          uVar10 = 0x11f2;
          uStack_12._2_2_ = (undefined2 ***)0xfe15;
          iVar6 = func_0x00015409();
          if (iVar6 != 0) {
            pppiStack_13c = pppiStack_140;
            uStack_13a = uStack_13e;
            func_0x000297e6();
            func_0x0002996b();
            func_0x00029983();
            *(int *)0xb37e = (int)pppiStack_140;
            *(undefined2 *)0xb380 = uStack_13e;
            pppiVar8 = pppiStack_140;
LAB_3ab8_52d9:
            if (param_2 != 1) goto LAB_3ab8_53de;
            func_0x000297e6();
            func_0x0002996b();
            func_0x00029983();
            func_0x0001bb4e();
            ppppiStack_c = (int ****)0xfe8a;
            func_0x00012276();
            ppppiStack_c = (int ****)0x11f2;
            ppppuStack_e = (undefined2 ****)0xfe98;
            FUN_1000_0599();
            ppppiStack_c = (int ****)0xfea3;
            func_0x00012276();
            ppppiStack_c = (int ****)uStack_7e;
            ppppuStack_e = (undefined2 ****)pppiStack_80;
            uStack_12._2_2_ = (undefined2 ***)0x3d55;
            uStack_12._0_2_ = &uStack_34;
            ppppuStack_14 = (undefined2 ****)0x11f2;
            uStack_16 = 0xfebf;
            FUN_10ad_1928();
            ppppiStack_c = (int ****)0x11f2;
            ppppuStack_e = (undefined2 ****)0xfecb;
            func_0x00012276();
            ppppiStack_c = (int ****)0x16;
            ppppuStack_e = &pppiStack_140;
            uStack_12._2_2_ = &ppiStack_12c;
            uStack_12._0_2_ = (undefined2 *)auStack_108;
            ppppuStack_14 = &pppiStack_80;
            uStack_16 = 0x11f2;
            uVar10 = 0xad;
            uStack_1a._2_2_ = 0xfeec;
            uStack_114 = func_0x000021a4();
            pppiVar8 = (int ***)(uStack_114 + 1);
            if (pppiVar8 != (int ***)0x0) {
              if (*(int *)0x158 == 0) {
                uVar12 = false;
                uVar11 = uStack_114 == 0;
                if (!(bool)uVar11) break;
                goto LAB_3ab8_5394;
              }
              goto code_r0x00030c25;
            }
          }
        }
        goto LAB_3ab8_51a9;
      }
      goto LAB_3ab8_4fe8;
    }
LAB_3ab8_5240:
    uStack_94 = lVar13;
    if (lVar13 < 0) {
      ppppiStack_c = (int ****)0xfdd0;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      ppppiStack_c = (int ****)0x11f2;
      ppppuStack_e = (undefined2 ****)0xfde4;
      FUN_1000_0599();
      uVar10 = 0x11f2;
      ppppiStack_c = (int ****)0xfdef;
      func_0x00012276();
    }
  } while( true );
  uVar12 = uStack_114 < 0x66;
  uVar11 = true;
  if (uStack_114 == 0x66) {
LAB_3ab8_5394:
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    pppiVar8 = (int ***)FUN_28b3_1181();
    if (!(bool)uVar12 && !(bool)uVar11) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      pppiVar8 = (int ***)FUN_28b3_1181();
      if ((bool)uVar12 || (bool)uVar11) {
        *(int *)0x3d98 = (int)pppiStack_80;
        *(undefined2 *)0x3d9a = uStack_7e;
        pppiVar8 = pppiStack_80;
LAB_3ab8_53de:
        if (param_2 != 1) {
          return (int)pppiVar8;
        }
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029983();
        func_0x0001bb4e();
        ppppiStack_c = (int ****)0xff8f;
        func_0x00012276();
        ppppiStack_c = (int ****)0x11f2;
        ppppuStack_e = (undefined2 ****)0xff9d;
        FUN_1000_0599();
        ppppiStack_c = (int ****)0xffa8;
        func_0x00012276();
        ppppiStack_c = (int ****)uStack_7e;
        ppppuStack_e = (undefined2 ****)pppiStack_80;
        uStack_12._2_2_ = (undefined2 ***)0x3d6b;
        uStack_12._0_2_ = &uStack_34;
        ppppuStack_14 = (undefined2 ****)0x11f2;
        uStack_16 = 0xffc4;
        FUN_10ad_1928();
        ppppiStack_c = (int ****)0x11f2;
        ppppuStack_e = (undefined2 ****)0xffd0;
        func_0x00012276();
        ppppiStack_c = (int ****)0x14;
        ppppuStack_e = &pppiStack_140;
        uStack_12._2_2_ = &ppiStack_12c;
        uStack_12._0_2_ = (undefined2 *)auStack_108;
        ppppuStack_14 = &pppiStack_80;
        uStack_16 = 0x11f2;
        uStack_1a._2_2_ = 0xfff1;
        uStack_114 = func_0x000021a4();
        if (uStack_114 != 0xffff) {
          if (*(int *)0x158 != 0) {
            halt_baddata();
          }
          uVar11 = false;
          uVar12 = uStack_114 == 0;
          if (!(bool)uVar12) {
            uVar11 = uStack_114 < 0x66;
            uVar12 = uStack_114 == 0x66;
            if (!(bool)uVar12) {
              halt_baddata();
            }
          }
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1181();
          if ((bool)uVar11 || (bool)uVar12) {
            halt_baddata();
          }
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1181();
          if (!(bool)uVar11 && !(bool)uVar12) {
            halt_baddata();
          }
          *(int *)0x3d9c = (int)pppiStack_80;
          *(undefined2 *)0x3d9e = uStack_7e;
          uVar10 = 0x22b2;
          goto LAB_3ab8_56ae;
        }
        pppiVar8 = (int ***)0x0;
        uStack_114 = 0xffff;
      }
    }
  }
  goto LAB_3ab8_52d9;
LAB_3ab8_56ae:
  do {
    do {
      ppppuStack_e = (undefined2 ****)0x23c;
      ppppiStack_c = (int ****)uVar10;
      FUN_21f2_3454();
      ppppiStack_c = (int ****)0x22b2;
      ppppuStack_e = (undefined2 ****)0x24c;
      FUN_21f2_2d26();
      ppppiStack_c = (int ****)0x22b2;
      ppppuStack_e = (undefined2 ****)0x25c;
      FUN_21f2_2d26();
      ppppiStack_c = (int ****)&ppiStack_12c;
      ppppuStack_e = apppuStack_104;
      *(undefined2 *)0xc20 = 1;
      uStack_12._2_2_ = (undefined2 ***)0x1;
      uStack_12._0_2_ = (undefined2 *)0x22b2;
      uVar10 = 0x1bb4;
      ppppuStack_14 = (undefined2 ****)0x27e;
      uStack_114 = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uStack_114 == 0xffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    } while (pppiStack_96 == (int ***)0x0);
    ppppiStack_c = (int ****)pppiStack_96;
    ppppuStack_e = (undefined2 ****)0x1bb4;
    uVar10 = 0x11f2;
    uStack_12._2_2_ = (undefined2 ***)0x2c0;
    iVar6 = func_0x00015409();
  } while (iVar6 == 0);
  ppiStack_138 = ppiStack_12c;
  uStack_136 = uStack_12a;
  pppiStack_3c = pppiStack_140;
  uStack_3a = uStack_13e;
  while( true ) {
    ppppuStack_e = (undefined2 ****)0x2f6;
    ppppiStack_c = (int ****)uVar10;
    FUN_21f2_3454();
    ppppiStack_c = (int ****)0x22b2;
    ppppuStack_e = (undefined2 ****)0x306;
    FUN_21f2_2d26();
    ppppiStack_c = (int ****)&ppiStack_12c;
    ppppuStack_e = apppuStack_104;
    *(undefined2 *)0xc20 = 1;
    uStack_12._2_2_ = (undefined2 ***)0x1;
    uStack_12._0_2_ = (undefined2 *)0x22b2;
    uVar10 = 0x1bb4;
    ppppuStack_14 = (undefined2 ****)0x328;
    uStack_114 = FUN_1def_0904();
    *(undefined2 *)0xc20 = 0;
    if (*(int *)0x158 != 0) {
      halt_baddata();
    }
    if (uStack_114 == 0xffff) break;
    if (pppiStack_96 != (int ***)0x0) {
      ppppiStack_c = (int ****)pppiStack_96;
      ppppuStack_e = (undefined2 ****)0x1bb4;
      uVar10 = 0x11f2;
      uStack_12._2_2_ = (undefined2 ***)0x361;
      iVar6 = func_0x00015409();
      if (iVar6 != 0) {
        ppiStack_38 = ppiStack_12c;
        uStack_36 = uStack_12a;
        pppiStack_40 = pppiStack_140;
        uStack_3e = uStack_13e;
LAB_3ab8_5807:
        FUN_28b3_0d8b();
        func_0x0002996b();
        func_0x00029983();
        func_0x0001bb4e();
        ppppiStack_c = (int ****)0x3af;
        func_0x00012276();
        ppppiStack_c = (int ****)0x11f2;
        ppppuStack_e = (undefined2 ****)0x3bd;
        FUN_1000_0599();
        ppppiStack_c = (int ****)0x3c8;
        func_0x00012276();
        ppppiStack_c = (int ****)uStack_7e;
        ppppuStack_e = (undefined2 ****)pppiStack_80;
        uStack_12._2_2_ = (undefined2 ***)0x3d8b;
        uStack_12._0_2_ = &uStack_34;
        ppppuStack_14 = (undefined2 ****)0x11f2;
        uStack_16 = 0x3e4;
        FUN_10ad_1928();
        ppppiStack_c = (int ****)0x11f2;
        ppppuStack_e = (undefined2 ****)0x3f0;
        func_0x00012276();
        ppppiStack_c = (int ****)0x14;
        ppppuStack_e = &pppiStack_140;
        uStack_12._2_2_ = &ppiStack_12c;
        uStack_12._0_2_ = (undefined2 *)auStack_108;
        ppppuStack_14 = &pppiStack_80;
        uStack_16 = 0x11f2;
        uVar10 = 0xad;
        uStack_1a._2_2_ = 0x411;
        uStack_114 = func_0x000021a4();
        if (uStack_114 != 0xffff) {
          if (*(int *)0x158 != 0) {
            halt_baddata();
          }
          uVar12 = false;
          uVar11 = uStack_114 == 0;
          if (!(bool)uVar11) goto code_r0x0004042f;
          goto LAB_3ab8_58b9;
        }
      }
    }
  }
  uStack_114 = 0xffff;
  goto LAB_3ab8_56ae;
code_r0x0004042f:
  uVar12 = uStack_114 < 0x66;
  uVar11 = true;
  if (uStack_114 == 0x66) {
LAB_3ab8_58b9:
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar12 || (bool)uVar11) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if ((bool)uVar12 || (bool)uVar11) {
        func_0x000297e6();
        func_0x00029d78();
        uVar10 = FUN_28b3_0f51();
        *(undefined2 *)0x3d96 = uVar10;
        pppuStack_7c = (undefined2 ***)0x0;
        func_0x0000c3ca();
        *(undefined2 *)0xb30c = uStack_128;
        *(undefined2 *)0xb30e = uStack_126;
        *(int *)0xb37e = (int)pppiStack_13c;
        *(undefined2 *)0xb380 = uStack_13a;
        func_0x000297e6();
        func_0x00029d78();
        uStack_12._2_2_ = (undefined2 ***)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0x4c5;
        func_0x000299d1();
        uStack_12._2_2_ = (undefined2 ***)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0x4ce;
        func_0x000297e6();
        uStack_12._2_2_ = (undefined2 ***)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0x4d3;
        func_0x00029d78();
        uStack_1a._2_2_ = 0x22b2;
        uStack_1a._0_2_ = 0x4dd;
        func_0x000299d1();
        uStack_1a._2_2_ = 1;
        uStack_1a._0_2_ = 0x22b2;
        uStack_1c = 0x4e6;
        puVar5 = (undefined2 *)FUN_1def_05d1();
        uStack_9a = *puVar5;
        uStack_98 = puVar5[1];
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029d78();
        uStack_12._2_2_ = (undefined2 ***)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0x518;
        func_0x000299d1();
        uStack_12._2_2_ = (undefined2 ***)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0x520;
        func_0x000297e6();
        uStack_12._2_2_ = (undefined2 ***)0x22b2;
        uStack_12._0_2_ = (undefined2 *)0x525;
        func_0x00029d78();
        uStack_1a._2_2_ = 0x22b2;
        uStack_1a._0_2_ = 0x52f;
        func_0x000299d1();
        uStack_1a._2_2_ = 1;
        uStack_1a._0_2_ = 0x22b2;
        uStack_1c = 0x538;
        FUN_1def_05d1();
        uVar11 = (undefined1 *)0xffed < (undefined1 *)((int)&uStack_1a + 2);
        uVar12 = &stack0x0000 == (undefined1 *)0x6;
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_1181();
        if ((bool)uVar12) {
          halt_baddata();
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        uVar4 = uStack_98;
        uVar10 = uStack_9a;
        if ((bool)uVar11) {
          uStack_88 = uStack_9a;
          uStack_86 = uStack_98;
          uStack_9a = uStack_10c;
          uStack_98 = uStack_10a;
          uStack_10c = uVar10;
          uStack_10a = uVar4;
        }
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x0002996b();
        func_0x000297e6();
        func_0x00029b6d();
        FUN_28b3_0d8b();
        FUN_28b3_1177();
        func_0x0002996b();
        FUN_28b3_1181();
        if (!(bool)uVar11 && !(bool)uVar12) {
          func_0x000297e6();
          func_0x00029983();
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x0002996b();
        FUN_28b3_1181();
        if ((bool)uVar11) {
          func_0x000297e6();
          func_0x00029983();
        }
        uVar11 = 0;
        func_0x000297e6();
        func_0x00029b6d();
        func_0x0002996b();
        func_0x00029b9d();
        func_0x00029983();
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029b85();
        func_0x0002996b();
        func_0x00029b6d();
        func_0x0002996b();
        FUN_28b3_1181();
        if ((bool)uVar11) {
          func_0x000297e6();
          func_0x00029983();
        }
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029b6d();
        FUN_28b3_1181();
        if ((bool)uVar11) {
          func_0x000297e6();
          func_0x00029b85();
          FUN_28b3_100d();
          func_0x00029d78();
          uStack_11a = FUN_28b3_0f51();
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029bb5();
          func_0x00029d78();
          iStack_120 = FUN_28b3_0f51();
          if (iStack_120 == 0) {
            halt_baddata();
          }
          if (uStack_11a == 0) {
            halt_baddata();
          }
          func_0x000297e6();
          FUN_28b3_0d8b();
          FUN_28b3_1172();
          func_0x00029983();
          func_0x000297e6();
          FUN_28b3_0d8b();
          FUN_28b3_1172();
        }
        else {
          uStack_11a = 0;
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029b85();
          func_0x00029bb5();
          func_0x00029d78();
          iStack_120 = FUN_28b3_0f51();
          if (iStack_120 == 0) {
            halt_baddata();
          }
          func_0x000297e6();
          FUN_28b3_100d();
          FUN_28b3_0d8b();
          FUN_28b3_1172();
          func_0x0002996b();
        }
        func_0x00029983();
        uVar10 = 0x885;
        ppppiStack_c = (int ****)0x7ec;
        func_0x0000daa6();
        pppuStack_7c = (undefined2 ***)0x0;
        for (uStack_a0 = uStack_11a; (int)uStack_a0 <= iStack_120; uStack_a0 = uStack_a0 + 1) {
          if (((int)uStack_11a < 0) && (-1 < (int)uStack_a0)) {
            FUN_28b3_0d8b();
            func_0x00029b6d();
          }
          else {
            FUN_28b3_0d8b();
            func_0x00029b6d();
            func_0x00029bb5();
          }
          func_0x00029983();
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029d78();
          func_0x00029b85();
          func_0x00029c2c();
          uStack_12._2_2_ = (undefined2 ***)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0x85f;
          func_0x000299d1();
          uStack_12._2_2_ = (undefined2 ***)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0x864;
          func_0x0002a10c();
          func_0x00029834();
          func_0x00029b6d();
          func_0x0002996b();
          func_0x00029d78();
          uStack_12._2_2_ = (undefined2 ***)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0x88e;
          func_0x000299d1();
          uStack_12._2_2_ = (undefined2 ***)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0x897;
          func_0x000297e6();
          uStack_1a._2_2_ = 0x22b2;
          uStack_1a._0_2_ = 0x8a1;
          func_0x000299d1();
          uStack_1a._2_2_ = 0;
          uStack_1a._0_2_ = 0x22b2;
          uStack_1c = 0x8a9;
          puVar5 = (undefined2 *)FUN_1def_05d1();
          uStack_11e = *puVar5;
          uStack_11c = puVar5[1];
          func_0x000297e6();
          uStack_12._2_2_ = (undefined2 ***)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0x8ce;
          func_0x000299d1();
          uStack_12._2_2_ = (undefined2 ***)0x22b2;
          uStack_12._0_2_ = (undefined2 *)0x8d7;
          func_0x000297e6();
          uStack_1a._2_2_ = 0x22b2;
          uStack_1a._0_2_ = 0x8e1;
          func_0x000299d1();
          uStack_1a._2_2_ = 0;
          uStack_1a._0_2_ = 0x22b2;
          uStack_1c = 0x8e9;
          puVar5 = (undefined2 *)func_0x0001e558();
          uStack_124 = *puVar5;
          uStack_122 = puVar5[1];
          uVar10 = 0x1bb4;
          uVar11 = uStack_11a < uStack_a0;
          uVar12 = uStack_11a == uStack_a0;
          if ((int)uStack_11a < (int)uStack_a0) {
            func_0x000297e6();
            func_0x000297e6();
            uVar10 = 0x22b2;
            FUN_28b3_1181();
            if (!(bool)uVar11 && !(bool)uVar12) {
              func_0x000297e6();
              func_0x000297e6();
              uVar10 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar11) {
                func_0x000297e6();
                func_0x000297e6();
                uVar10 = 0x22b2;
                FUN_28b3_1181();
                if (!(bool)uVar11 && !(bool)uVar12) {
                  func_0x000297e6();
                  func_0x000297e6();
                  uVar10 = 0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar11) {
                    func_0x000297e6();
                    func_0x000297e6();
                    uVar10 = 0x22b2;
                    FUN_28b3_1181();
                    if (!(bool)uVar11 && !(bool)uVar12) {
                      func_0x000297e6();
                      func_0x000297e6();
                      uVar10 = 0x22b2;
                      FUN_28b3_1181();
                      if ((bool)uVar11) {
                        func_0x000297e6();
                        func_0x000297e6();
                        uVar10 = 0x22b2;
                        FUN_28b3_1181();
                        if (!(bool)uVar11 && !(bool)uVar12) {
                          func_0x000297e6();
                          func_0x000297e6();
                          uVar10 = 0x22b2;
                          FUN_28b3_1181();
                          if ((bool)uVar11) {
                            uStack_49 = *(undefined1 *)0xa6a;
                            uStack_4a = *(undefined1 *)0xa6c;
                            uStack_48 = *(undefined1 *)0xb310;
                            uStack_5a = uStack_112;
                            uStack_58 = uStack_110;
                            uStack_56 = uStack_118;
                            uStack_54 = uStack_116;
                            uStack_52 = uStack_11e;
                            uStack_50 = uStack_11c;
                            uStack_4e = uStack_124;
                            uStack_4c = uStack_122;
                            puVar7 = &uStack_1c;
                            puVar5 = &uStack_5a;
                            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                              puVar3 = puVar7;
                              puVar7 = puVar7 + 1;
                              puVar2 = puVar5;
                              puVar5 = puVar5 + 1;
                              *puVar3 = *puVar2;
                            }
                            uVar10 = 0x11f2;
                            uStack_22._2_2_ = 0xb18;
                            iVar6 = FUN_17a6_0cba();
                            if (0 < iVar6) {
                              pppuStack_7c = (undefined2 ***)((int)pppuStack_7c + 1);
                              if (pppuStack_7c == (undefined2 ***)0x1) {
                                ppppiStack_c = (int ****)0x11f2;
                                ppppuStack_e = (undefined2 ****)0xb35;
                                uVar14 = func_0x0000013f();
                                pbVar1 = (byte *)((int)uVar14 + 0x14);
                                *pbVar1 = *pbVar1 | 0x40;
                                ppppiStack_c = (int ****)0x0;
                                uVar10 = 0;
                                ppppuStack_e = (undefined2 ****)0xb4d;
                                uVar14 = func_0x0000013f();
                                pbVar1 = (byte *)((int)uVar14 + 0x14);
                                *pbVar1 = *pbVar1 & 0x7f;
                              }
                              else {
                                ppppiStack_c = (int ****)0x11f2;
                                ppppuStack_e = (undefined2 ****)0xb67;
                                uVar14 = func_0x0000013f();
                                pbVar1 = (byte *)((int)uVar14 + 0x14);
                                *pbVar1 = *pbVar1 & 0xbf;
                                ppppiStack_c = (int ****)0x0;
                                uVar10 = 0;
                                ppppuStack_e = (undefined2 ****)0xb7f;
                                uVar14 = func_0x0000013f();
                                pbVar1 = (byte *)((int)uVar14 + 0x14);
                                *pbVar1 = *pbVar1 | 0x80;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uStack_112 = uStack_11e;
          uStack_110 = uStack_11c;
          uStack_118 = uStack_124;
          uStack_116 = uStack_122;
        }
        if (1 < (int)pppuStack_7c) {
          ppppuStack_e = (undefined2 ****)0xbf6;
          ppppiStack_c = (int ****)uVar10;
          uVar14 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar14 + 0x14);
          *pbVar1 = *pbVar1 | 0x40;
          ppppiStack_c = (int ****)0x0;
          ppppuStack_e = (undefined2 ****)0xc0e;
          uVar14 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar14 + 0x14);
          *pbVar1 = *pbVar1 | 0x80;
        }
        func_0x0000abfa();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  goto LAB_3ab8_5807;
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  4321 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0003fc74) */

int __cdecl16far FUN_3ab8_4fbd(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  int unaff_BP;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  bool in_ZF;
  undefined1 uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  uVar10 = 0x3ab8;
  if (in_ZF) {
    iStack_6 = 0x3ab8;
    uVar10 = 0x22b2;
    iStack_8 = 0xfb4c;
    FUN_21f2_3454();
  }
  uVar11 = uVar10;
  if (*(int *)(unaff_BP + 6) == 2) {
    uVar11 = 0x22b2;
    iStack_8 = 0xfb61;
    iStack_6 = uVar10;
    FUN_21f2_3454();
  }
  *(undefined2 *)(unaff_BP + -0x7a) = 0;
LAB_3ab8_4fe8:
  do {
    do {
      iStack_8 = 0xfb76;
      iStack_6 = uVar11;
      FUN_21f2_3454();
      iStack_6 = 0x22b2;
      iStack_8 = 0xfb86;
      FUN_21f2_2d26();
      iStack_6 = 0x22b2;
      iStack_8 = 0xfb96;
      FUN_21f2_2d26();
      *(undefined2 *)0xc2c = 1;
      iStack_6 = unaff_BP + -0x12a;
      iStack_8 = unaff_BP + -0x102;
      iStack_a = *(int *)(unaff_BP + -0x7a);
      iStack_c = 0x22b2;
      uVar11 = 0x1bb4;
      iStack_e = -0x446;
      iVar8 = FUN_1def_0904();
      *(int *)(unaff_BP + -0x112) = iVar8;
      *(undefined2 *)0xc2c = 0;
      if ((*(int *)0x158 != 0) || (iVar8 == 0x14)) {
code_r0x00030c25:
        while( true ) {
          if ((*(int *)(unaff_BP + -0x28) != 10000) ||
             (uVar12 = *(int *)(unaff_BP + -0x5e) == 10000, !(bool)uVar12)) {
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
          if ((bool)uVar12) {
            FUN_32b2_6d14();
            FUN_32b2_6d14();
            FUN_32b2_7191();
            if ((bool)uVar12) {
              return 0;
            }
          }
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_718c();
          iStack_a = 0x32b2;
          iStack_c = 0xce2;
          FUN_32b2_6eb1();
          iStack_a = 0x32b2;
          iStack_c = 0xce7;
          puVar6 = (undefined2 *)FUN_32b2_7592();
          *(undefined2 *)(unaff_BP + -0x94) = *puVar6;
          *(undefined2 *)(unaff_BP + -0x92) = puVar6[1];
          *(undefined2 *)(unaff_BP + -0x90) = puVar6[2];
          *(undefined2 *)(unaff_BP + -0x8e) = puVar6[3];
          iStack_6 = unaff_BP + -0xc;
          iStack_8 = 0x32b2;
          iStack_a = 0xd08;
          FUN_32b2_6cc6();
          iStack_8 = 0x32b2;
          iStack_a = 0xd0d;
          FUN_32b2_7258();
          uStack_10 = 0x32b2;
          uStack_12 = 0xd17;
          FUN_32b2_6eb1();
          uStack_10 = 0x32b2;
          uStack_12 = 0xd20;
          FUN_32b2_6cc6();
          uStack_10 = 0x32b2;
          uStack_12 = 0xd25;
          FUN_32b2_7258();
          uStack_1a = 0xd2f;
          FUN_32b2_6eb1();
          uStack_1a = *(undefined2 *)(unaff_BP + -0xd8);
          uStack_1c = *(undefined2 *)(unaff_BP + -0xda);
          uStack_1e = *(undefined2 *)(unaff_BP + -0xdc);
          uStack_20 = *(undefined2 *)(unaff_BP + -0xba);
          uStack_22 = *(undefined2 *)(unaff_BP + -0xbc);
          uStack_24 = *(undefined2 *)(unaff_BP + -0xbe);
          uStack_26 = *(undefined2 *)(unaff_BP + -0xc0);
          uStack_28 = 0x32b2;
          uStack_2a = 0xd53;
          iVar8 = FUN_3ab8_4fbd();
          if (iVar8 == 0) break;
          iStack_6 = 0xd66;
          FUN_32b2_6d14();
          iStack_6 = 0xd6f;
          FUN_32b2_6e99();
          iStack_6 = 0xd77;
          FUN_32b2_6ef9();
          iStack_6 = unaff_BP + -0xe0;
          iStack_8 = 0x32b2;
          iStack_a = 0xd8a;
          FUN_32b2_6cc6();
          iStack_8 = 0x32b2;
          iStack_a = 0xd8f;
          FUN_32b2_7258();
          uStack_10 = 0x32b2;
          uStack_12 = 0xd99;
          FUN_32b2_6eb1();
          uStack_10 = 0x32b2;
          uStack_12 = 0xda1;
          FUN_32b2_6cc6();
          uStack_10 = 0x32b2;
          uStack_12 = 0xda6;
          FUN_32b2_7258();
          uStack_1a = 0xdb0;
          FUN_32b2_6eb1();
          uStack_1a = 0xdb9;
          FUN_32b2_6d14();
          uStack_20 = 0x32b2;
          uStack_22 = 0xdc3;
          FUN_32b2_6eb1();
          uStack_20 = 0x32b2;
          uStack_22 = 0xdcc;
          FUN_32b2_6d14();
          uStack_20 = 0x32b2;
          uStack_22 = 0xdd5;
          FUN_32b2_6e99();
          uStack_28 = 0x32b2;
          uStack_2a = 0xddf;
          FUN_32b2_6eb1();
          uStack_28 = 0x32b2;
          uStack_2a = 0xde8;
          FUN_32b2_6cc6();
          uStack_28 = 0x32b2;
          uStack_2a = 0xded;
          FUN_32b2_7258();
          uStack_30 = 0x32b2;
          uStack_32 = 0xdf7;
          FUN_32b2_6eb1();
          uStack_30 = 0x32b2;
          uStack_32 = 0xe00;
          FUN_32b2_6cc6();
          uStack_30 = 0x32b2;
          uStack_32 = 0xe05;
          FUN_32b2_7258();
          uStack_38 = 0x32b2;
          FUN_32b2_6eb1();
          uStack_38 = 1;
                    /* WARNING: Call to offcut address within same function */
          func_0x0003fc09(0x32b2);
          uVar12 = (undefined1 *)0xffc9 < &uStack_36;
          uVar10 = *(undefined2 *)0x9382;
          *(undefined2 *)(unaff_BP + -0xe4) = *(undefined2 *)0x9380;
          *(undefined2 *)(unaff_BP + -0xe2) = uVar10;
          FUN_32b2_6cc6();
          FUN_32b2_704d();
          FUN_32b2_7258();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_7173();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_6e99();
          FUN_32b2_718c();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_7182();
          FUN_32b2_710c();
          FUN_32b2_6e99();
          FUN_32b2_6ef9();
          FUN_32b2_6d14();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_70f4();
          FUN_32b2_6e99();
          FUN_32b2_7191();
          if (!(bool)uVar12) {
            FUN_32b2_6d14();
            FUN_32b2_6d14();
            FUN_32b2_6fc7();
            FUN_32b2_7191();
            if ((bool)uVar12) {
              *(undefined2 *)(unaff_BP + -0x94) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0x92) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0x8e) = *(undefined2 *)0x93c6;
            }
            iStack_6 = *(undefined2 *)(unaff_BP + -0x92);
            iStack_8 = *(undefined2 *)(unaff_BP + -0x94);
            iStack_a = 0x32b2;
            iStack_c = 0xf53;
            puVar6 = (undefined2 *)FUN_32b2_7592();
            *(undefined2 *)(unaff_BP + -0xd4) = *puVar6;
            *(undefined2 *)(unaff_BP + -0xd2) = puVar6[1];
            *(undefined2 *)(unaff_BP + -0xd0) = puVar6[2];
            *(undefined2 *)(unaff_BP + -0xce) = puVar6[3];
            iStack_6 = unaff_BP + -0xa8;
            iStack_8 = 0x32b2;
            iStack_a = 0xf75;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            iStack_a = 0xf7a;
            FUN_32b2_7258();
            uStack_10 = 0x32b2;
            uStack_12 = 0xf84;
            FUN_32b2_6eb1();
            uStack_10 = 0x32b2;
            uStack_12 = 0xf8c;
            FUN_32b2_6cc6();
            uStack_10 = 0x32b2;
            uStack_12 = 0xf91;
            FUN_32b2_7258();
            uStack_1a = 0xf9b;
            FUN_32b2_6eb1();
            uStack_1a = *(undefined2 *)(unaff_BP + -0xac);
            uStack_1c = *(undefined2 *)(unaff_BP + -0xae);
            uStack_1e = *(undefined2 *)(unaff_BP + -0xb0);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x96);
            uStack_22 = *(undefined2 *)(unaff_BP + -0x98);
            uStack_24 = *(undefined2 *)(unaff_BP + -0x9a);
            uStack_26 = *(undefined2 *)(unaff_BP + -0x9c);
            uStack_28 = *(undefined2 *)(unaff_BP + -0xce);
            uStack_2a = *(undefined2 *)(unaff_BP + -0xd0);
            uStack_2c = *(undefined2 *)(unaff_BP + -0xd2);
            uStack_2e = *(undefined2 *)(unaff_BP + -0xd4);
            uStack_30 = *(undefined2 *)(unaff_BP + -0xb2);
            uStack_32 = *(undefined2 *)(unaff_BP + -0xb4);
            uStack_34 = *(undefined2 *)(unaff_BP + -0xb6);
            uStack_36 = *(undefined2 *)(unaff_BP + -0xb8);
            uStack_38 = 0;
                    /* WARNING: Call to offcut address within same function */
            func_0x0003fc09(0x32b2);
            uVar12 = (undefined1 *)0xffc9 < &uStack_38;
            uVar10 = *(undefined2 *)(unaff_BP + -0xa6);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0xe);
            *puVar6 = *(undefined2 *)(unaff_BP + -0xa8);
            puVar6[1] = uVar10;
            uVar10 = *(undefined2 *)(unaff_BP + -0xca);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x10);
            *puVar6 = *(undefined2 *)(unaff_BP + -0xcc);
            puVar6[1] = uVar10;
            uVar10 = *(undefined2 *)(unaff_BP + -0xa6);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x12);
            *puVar6 = *(undefined2 *)(unaff_BP + -0xa8);
            puVar6[1] = uVar10;
            uVar10 = *(undefined2 *)(unaff_BP + -0xca);
            puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x14);
            *puVar6 = *(undefined2 *)(unaff_BP + -0xcc);
            puVar6[1] = uVar10;
            *(int *)(unaff_BP + -0x6c) = *(int *)(unaff_BP + -0x6c) + 1;
            iStack_6 = 0x1031;
            FUN_32b2_6d14();
            iStack_6 = 0x103a;
            FUN_32b2_6d14();
            iStack_6 = 0x103f;
            FUN_32b2_7191();
            if ((bool)uVar12) {
              iStack_6 = unaff_BP + -0xa8;
              iStack_8 = 0x32b2;
              iStack_a = 0x1057;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              iStack_a = 0x105c;
              FUN_32b2_7258();
              uStack_10 = 0x32b2;
              uStack_12 = 0x1066;
              FUN_32b2_6eb1();
              uStack_10 = 0x32b2;
              uStack_12 = 0x106e;
              FUN_32b2_6cc6();
              uStack_10 = 0x32b2;
              uStack_12 = 0x1073;
              FUN_32b2_7258();
              uStack_1a = 0x107d;
              FUN_32b2_6eb1();
              uStack_1a = *(undefined2 *)(unaff_BP + -0xac);
              uStack_1c = *(undefined2 *)(unaff_BP + -0xae);
              uStack_1e = *(undefined2 *)(unaff_BP + -0xb0);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x96);
              uStack_22 = *(undefined2 *)(unaff_BP + -0x98);
              uStack_24 = *(undefined2 *)(unaff_BP + -0x9a);
              uStack_26 = *(undefined2 *)(unaff_BP + -0x9c);
              uStack_28 = 0x32b2;
              uStack_2a = 0x10a6;
              FUN_32b2_6d14();
              uStack_28 = 0x32b2;
              uStack_2a = 0x10ab;
              FUN_32b2_6fd6();
              uStack_30 = 0x32b2;
              uStack_32 = 0x10b5;
              FUN_32b2_6eb1();
              uStack_30 = *(undefined2 *)(unaff_BP + -0xb2);
              uStack_32 = *(undefined2 *)(unaff_BP + -0xb4);
              uStack_34 = *(undefined2 *)(unaff_BP + -0xb6);
              uStack_36 = *(undefined2 *)(unaff_BP + -0xb8);
              uStack_38 = 0;
                    /* WARNING: Call to offcut address within same function */
              func_0x0003fc09(0x32b2);
              uVar10 = *(undefined2 *)(unaff_BP + -0xa6);
              puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x12);
              *puVar7 = *(undefined2 *)(unaff_BP + -0xa8);
              puVar7[1] = uVar10;
              uVar10 = *(undefined2 *)(unaff_BP + -0xca);
              *puVar6 = *(undefined2 *)(unaff_BP + -0xcc);
              puVar6[1] = uVar10;
              *(int *)(unaff_BP + -0x6c) = *(int *)(unaff_BP + -0x6c) + 1;
            }
            return *(int *)(unaff_BP + -0x6c);
          }
          if (*(int *)(unaff_BP + -0xea) != 0) {
            return 0;
          }
          *(undefined2 *)(unaff_BP + -0xea) = 1;
          iVar9 = -(*(int *)(unaff_BP + 0xc) + (uint)(*(int *)(unaff_BP + 10) != 0));
          iStack_6 = 0x32b2;
          iStack_8 = 0xef8;
          puVar7 = (undefined2 *)FUN_1000_0271();
          puVar6 = (undefined2 *)(unaff_BP + -0x34);
          for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar3 = puVar6;
            puVar6 = puVar6 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar2;
          }
          iVar9 = -(*(int *)(unaff_BP + 8) + (uint)(*(int *)(unaff_BP + 6) != 0));
          iStack_6 = 0x1000;
          iStack_8 = 0xba1;
          puVar7 = (undefined2 *)FUN_1000_0271();
          puVar6 = (undefined2 *)(unaff_BP + -0x6a);
          for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar3 = puVar6;
            puVar6 = puVar6 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar2;
          }
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          uVar10 = *(undefined2 *)(unaff_BP + -0x68);
          *(undefined2 *)(unaff_BP + -0xe0) = *(undefined2 *)(unaff_BP + -0x6a);
          *(undefined2 *)(unaff_BP + -0xde) = uVar10;
          uVar10 = *(undefined2 *)(unaff_BP + -100);
          *(undefined2 *)(unaff_BP + -0xe4) = *(undefined2 *)(unaff_BP + -0x66);
          *(undefined2 *)(unaff_BP + -0xe2) = uVar10;
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6eb1();
          FUN_32b2_6cc6();
          FUN_32b2_7258();
          FUN_32b2_6eb1();
        }
        return 0;
      }
      if (iVar8 == -1) {
        iStack_6 = 0xfbe5;
        func_0x0000daa6();
        func_0x0000c3ca();
        iStack_6 = 0x885;
        while (0 < *(int *)(unaff_BP + -0x7a)) {
          uVar10 = *(undefined2 *)0x14a;
          *(undefined2 *)(unaff_BP + -0x12e) = *(undefined2 *)0x148;
          *(undefined2 *)(unaff_BP + -300) = uVar10;
          iStack_8 = -0x3fd;
          func_0x00018779();
          *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + -1;
          iStack_6 = 0x11f2;
        }
        *(undefined2 *)(unaff_BP + -0x7a) = 0;
        *(undefined2 *)(unaff_BP + -0x94) = 0;
        uVar11 = 0x885;
        iStack_6 = -0x3e0;
        func_0x0000b1d8();
      }
    } while (*(int *)(unaff_BP + -0x94) == 0);
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0xfc43;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0xfc4c;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = -0x3af;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfc5b;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uVar11 = 0x11f2;
    uStack_14 = 0xfc60;
    lVar14 = FUN_13bf_39a0();
    *(undefined2 *)(unaff_BP + -0x92) = (int)lVar14;
    *(undefined2 *)(unaff_BP + -0x90) = (int)((ulong)lVar14 >> 0x10);
    if (0 < lVar14) {
      iStack_6 = 0x11f2;
      iStack_8 = -0x37e;
      func_0x0000013f();
      FUN_28b3_0c98();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xfc9f;
      func_0x000299d1();
      iStack_a = *(undefined2 *)(unaff_BP + -0x90);
      iStack_c = *(undefined2 *)(unaff_BP + -0x92);
      iStack_e = 0x22b2;
      uStack_10 = 0xfcac;
      func_0x0000013f();
      iStack_a = 0;
      iStack_c = 0xfcba;
      FUN_28b3_0c98();
      iStack_a = 0x22b2;
      iStack_c = -0x341;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xfcc9;
      func_0x000299d1();
      uStack_12 = *(undefined2 *)(unaff_BP + -0x90);
      uStack_14 = *(undefined2 *)(unaff_BP + -0x92);
      uStack_16 = 0x22b2;
      func_0x0000013f();
      uStack_12 = 0;
      uStack_14 = 0xfce4;
      FUN_28b3_0c98();
      uStack_12 = 0x22b2;
      uStack_14 = 0xfce9;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      uStack_1c = 0xfcf3;
      func_0x000299d1();
      uStack_1a = *(undefined2 *)(unaff_BP + -0x90);
      uStack_1c = *(undefined2 *)(unaff_BP + -0x92);
      uStack_1e = 0x22b2;
      uStack_20 = 0xfd00;
      func_0x0000013f();
      uStack_1a = 0;
      uStack_1c = 0xfd0b;
      FUN_28b3_0c98();
      uStack_1a = 0x22b2;
      uStack_1c = 0xfd10;
      func_0x00029d78();
      uStack_22 = 0x22b2;
      uStack_24 = 0xfd1a;
      func_0x000299d1();
      uStack_22 = 0x22b2;
      uVar11 = 0x1bb4;
      uStack_24 = 0xfd1f;
      iVar8 = FUN_1def_043a();
      if (iVar8 == 0) goto LAB_3ab8_5240;
LAB_3ab8_51a9:
      iStack_8 = 0xfd37;
      iStack_6 = uVar11;
      FUN_21f2_3454();
      iStack_6 = 0x22b2;
      iStack_8 = 0xfd47;
      FUN_21f2_2d26();
      iStack_6 = 0x22b2;
      iStack_8 = 0xfd57;
      FUN_21f2_2d26();
      iStack_6 = 0x22b2;
      iStack_8 = 0xfd67;
      FUN_21f2_2d26();
      iStack_6 = 0x22b2;
      iStack_8 = 0xfd77;
      FUN_21f2_2d26();
      iStack_6 = 0x22b2;
      iStack_8 = 0xfd87;
      FUN_21f2_2d26();
      iStack_6 = unaff_BP + -0x12a;
      iStack_8 = unaff_BP + -0x102;
      *(undefined2 *)0xc20 = 1;
      iStack_a = 1;
      iStack_c = 0x22b2;
      uVar11 = 0x1bb4;
      iStack_e = -599;
      iVar8 = FUN_1def_0904();
      *(int *)(unaff_BP + -0x112) = iVar8;
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) goto code_r0x00030c25;
      if (iVar8 != -1) {
        if (*(int *)(unaff_BP + -0x94) != 0) {
          iStack_6 = *(int *)(unaff_BP + -0x94);
          iStack_8 = 0x1bb4;
          uVar11 = 0x11f2;
          iStack_a = -0x1eb;
          iVar8 = func_0x00015409();
          if (iVar8 != 0) {
            uVar10 = *(undefined2 *)(unaff_BP + -0x13c);
            *(undefined2 *)(unaff_BP + -0x13a) = *(undefined2 *)(unaff_BP + -0x13e);
            *(undefined2 *)(unaff_BP + -0x138) = uVar10;
            func_0x000297e6();
            func_0x0002996b();
            func_0x00029983();
            iVar8 = *(int *)(unaff_BP + -0x13e);
            uVar10 = *(undefined2 *)(unaff_BP + -0x13c);
            *(int *)0xb37e = iVar8;
            *(undefined2 *)0xb380 = uVar10;
LAB_3ab8_52d9:
            if (*(int *)(unaff_BP + 6) != 1) goto LAB_3ab8_53de;
            func_0x000297e6();
            func_0x0002996b();
            func_0x00029983();
            func_0x0001bb4e();
            iStack_6 = 0xfe8a;
            func_0x00012276();
            iStack_6 = 0x11f2;
            iStack_8 = 0xfe98;
            FUN_1000_0599();
            iStack_6 = 0xfea3;
            func_0x00012276();
            iStack_6 = *(undefined2 *)(unaff_BP + -0x7c);
            iStack_8 = *(undefined2 *)(unaff_BP + -0x7e);
            iStack_a = 0x3d55;
            iStack_c = unaff_BP + -0x32;
            iStack_e = 0x11f2;
            uStack_10 = 0xfebf;
            FUN_10ad_1928();
            iStack_6 = 0x11f2;
            iStack_8 = 0xfecb;
            func_0x00012276();
            iStack_6 = 0x16;
            iStack_8 = unaff_BP + -0x13e;
            iStack_a = unaff_BP + -0x12a;
            iStack_c = unaff_BP + -0x106;
            iStack_e = unaff_BP + -0x7e;
            uStack_10 = 0x11f2;
            uVar11 = 0xad;
            uStack_12 = 0xfeec;
            iVar8 = func_0x000021a4();
            *(int *)(unaff_BP + -0x112) = iVar8;
            iVar8 = iVar8 + 1;
            if (iVar8 != 0) {
              if (*(int *)0x158 == 0) {
                uVar13 = false;
                uVar12 = *(int *)(unaff_BP + -0x112) == 0;
                if (!(bool)uVar12) break;
                goto LAB_3ab8_5394;
              }
              goto code_r0x00030c25;
            }
          }
        }
        goto LAB_3ab8_51a9;
      }
      goto LAB_3ab8_4fe8;
    }
LAB_3ab8_5240:
    if (*(int *)(unaff_BP + -0x90) < 0) {
      iStack_6 = 0xfdd0;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      iStack_6 = 0x11f2;
      iStack_8 = 0xfde4;
      FUN_1000_0599();
      uVar11 = 0x11f2;
      iStack_6 = 0xfdef;
      func_0x00012276();
    }
  } while( true );
  uVar13 = *(uint *)(unaff_BP + -0x112) < 0x66;
  uVar12 = true;
  if (*(uint *)(unaff_BP + -0x112) == 0x66) {
LAB_3ab8_5394:
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    iVar8 = FUN_28b3_1181();
    if (!(bool)uVar13 && !(bool)uVar12) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      iVar8 = FUN_28b3_1181();
      if ((bool)uVar13 || (bool)uVar12) {
        iVar8 = *(int *)(unaff_BP + -0x7e);
        uVar10 = *(undefined2 *)(unaff_BP + -0x7c);
        *(int *)0x3d98 = iVar8;
        *(undefined2 *)0x3d9a = uVar10;
LAB_3ab8_53de:
        if (*(int *)(unaff_BP + 6) != 1) {
          return iVar8;
        }
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029983();
        func_0x0001bb4e();
        iStack_6 = 0xff8f;
        func_0x00012276();
        iStack_6 = 0x11f2;
        iStack_8 = 0xff9d;
        FUN_1000_0599();
        iStack_6 = 0xffa8;
        func_0x00012276();
        iStack_6 = *(undefined2 *)(unaff_BP + -0x7c);
        iStack_8 = *(undefined2 *)(unaff_BP + -0x7e);
        iStack_a = 0x3d6b;
        iStack_c = unaff_BP + -0x32;
        iStack_e = 0x11f2;
        uStack_10 = 0xffc4;
        FUN_10ad_1928();
        iStack_6 = 0x11f2;
        iStack_8 = 0xffd0;
        func_0x00012276();
        iStack_6 = 0x14;
        iStack_8 = unaff_BP + -0x13e;
        iStack_a = unaff_BP + -0x12a;
        iStack_c = unaff_BP + -0x106;
        iStack_e = unaff_BP + -0x7e;
        uStack_10 = 0x11f2;
        uStack_12 = 0xfff1;
        iVar8 = func_0x000021a4();
        *(int *)(unaff_BP + -0x112) = iVar8;
        if (iVar8 != -1) {
          if (*(int *)0x158 != 0) {
            halt_baddata();
          }
          uVar12 = false;
          uVar13 = *(int *)(unaff_BP + -0x112) == 0;
          if (!(bool)uVar13) {
            uVar12 = *(uint *)(unaff_BP + -0x112) < 0x66;
            uVar13 = *(uint *)(unaff_BP + -0x112) == 0x66;
            if (!(bool)uVar13) {
              halt_baddata();
            }
          }
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1181();
          if ((bool)uVar12 || (bool)uVar13) {
            halt_baddata();
          }
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          uVar10 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar12 && !(bool)uVar13) {
            halt_baddata();
          }
          uVar11 = *(undefined2 *)(unaff_BP + -0x7c);
          *(undefined2 *)0x3d9c = *(undefined2 *)(unaff_BP + -0x7e);
          *(undefined2 *)0x3d9e = uVar11;
          goto LAB_3ab8_54e3;
        }
        iVar8 = 0;
      }
    }
  }
  goto LAB_3ab8_52d9;
LAB_3ab8_54e3:
  if (*(int *)(unaff_BP + 6) == 2) {
    iStack_8 = 0x7a;
    iStack_6 = uVar10;
    FUN_21f2_3454();
    iStack_6 = 0x22b2;
    iStack_8 = 0x8a;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0x9a;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xaa;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = 0xba;
    FUN_21f2_2d26();
    iStack_6 = unaff_BP + -0x12a;
    iStack_8 = unaff_BP + -0x102;
    *(undefined2 *)0xc20 = 1;
    iStack_a = 1;
    iStack_c = 0x22b2;
    uVar10 = 0x1bb4;
    iStack_e = 0xdc;
    iVar8 = FUN_1def_0904();
    *(int *)(unaff_BP + -0x112) = iVar8;
    *(undefined2 *)0xc20 = 0;
    if (*(int *)0x158 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar8 == -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(int *)(unaff_BP + -0x94) == 0) goto LAB_3ab8_54e3;
    iStack_6 = *(int *)(unaff_BP + -0x94);
    iStack_8 = 0x1bb4;
    uVar10 = 0x11f2;
    iStack_a = 0x115;
    iVar8 = func_0x00015409();
    if (iVar8 == 0) goto LAB_3ab8_54e3;
  }
  if (*(int *)(unaff_BP + 6) == 2) {
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0x140;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0x149;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = 0x14e;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0x158;
    func_0x000299d1();
    uStack_12 = 1;
    uStack_14 = 0x22b2;
    uStack_16 = 0x161;
    puVar6 = (undefined2 *)FUN_1def_05d1();
    uVar10 = puVar6[1];
    *(undefined2 *)(unaff_BP + -0x8e) = *puVar6;
    *(undefined2 *)(unaff_BP + -0x8c) = uVar10;
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0x18b;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0x194;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = 0x199;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0x1a3;
    func_0x000299d1();
    uStack_12 = 1;
    uStack_14 = 0x22b2;
    uStack_16 = 0x1ac;
    puVar6 = (undefined2 *)func_0x0001e558();
    uVar12 = (undefined1 *)0xffed < &uStack_12;
    uVar10 = puVar6[1];
    *(undefined2 *)(unaff_BP + -0x9c) = *puVar6;
    *(undefined2 *)(unaff_BP + -0x9a) = uVar10;
    func_0x00029834();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029d78();
    FUN_28b3_1181();
    if (!(bool)uVar12) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029ae7();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)uVar12) {
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b9d();
        uVar10 = 0x22b2;
        func_0x00029983();
        goto LAB_3ab8_56ae;
      }
    }
    uVar10 = 0x22b2;
  }
  else {
LAB_3ab8_56ae:
    while( true ) {
      iStack_8 = 0x23c;
      iStack_6 = uVar10;
      FUN_21f2_3454();
      iStack_6 = 0x22b2;
      iStack_8 = 0x24c;
      FUN_21f2_2d26();
      iStack_6 = 0x22b2;
      iStack_8 = 0x25c;
      FUN_21f2_2d26();
      iStack_6 = unaff_BP + -0x12a;
      iStack_8 = unaff_BP + -0x102;
      *(undefined2 *)0xc20 = 1;
      iStack_a = 1;
      iStack_c = 0x22b2;
      uVar10 = 0x1bb4;
      iStack_e = 0x27e;
      iVar8 = FUN_1def_0904();
      *(int *)(unaff_BP + -0x112) = iVar8;
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) {
        halt_baddata();
      }
      if (iVar8 == -1) break;
      if (*(int *)(unaff_BP + -0x94) != 0) {
        iStack_6 = *(undefined2 *)(unaff_BP + -0x94);
        iStack_8 = 0x1bb4;
        uVar10 = 0x11f2;
        iStack_a = 0x2c0;
        iVar8 = func_0x00015409();
        if (iVar8 != 0) {
          uVar11 = *(undefined2 *)(unaff_BP + -0x128);
          *(undefined2 *)(unaff_BP + -0x136) = *(undefined2 *)(unaff_BP + -0x12a);
          *(undefined2 *)(unaff_BP + -0x134) = uVar11;
          uVar11 = *(undefined2 *)(unaff_BP + -0x13c);
          *(undefined2 *)(unaff_BP + -0x3a) = *(undefined2 *)(unaff_BP + -0x13e);
          *(undefined2 *)(unaff_BP + -0x38) = uVar11;
          while( true ) {
            iStack_8 = 0x2f6;
            iStack_6 = uVar10;
            FUN_21f2_3454();
            iStack_6 = 0x22b2;
            iStack_8 = 0x306;
            FUN_21f2_2d26();
            iStack_6 = unaff_BP + -0x12a;
            iStack_8 = unaff_BP + -0x102;
            *(undefined2 *)0xc20 = 1;
            iStack_a = 1;
            iStack_c = 0x22b2;
            uVar10 = 0x1bb4;
            iStack_e = 0x328;
            iVar8 = FUN_1def_0904();
            *(int *)(unaff_BP + -0x112) = iVar8;
            *(undefined2 *)0xc20 = 0;
            if (*(int *)0x158 != 0) {
              halt_baddata();
            }
            if (iVar8 == -1) break;
            if (*(int *)(unaff_BP + -0x94) != 0) {
              iStack_6 = *(undefined2 *)(unaff_BP + -0x94);
              iStack_8 = 0x1bb4;
              uVar10 = 0x11f2;
              iStack_a = 0x361;
              iVar8 = func_0x00015409();
              if (iVar8 != 0) {
                uVar10 = *(undefined2 *)(unaff_BP + -0x128);
                *(undefined2 *)(unaff_BP + -0x36) = *(undefined2 *)(unaff_BP + -0x12a);
                *(undefined2 *)(unaff_BP + -0x34) = uVar10;
                uVar10 = *(undefined2 *)(unaff_BP + -0x13c);
                *(undefined2 *)(unaff_BP + -0x3e) = *(undefined2 *)(unaff_BP + -0x13e);
                *(undefined2 *)(unaff_BP + -0x3c) = uVar10;
LAB_3ab8_5807:
                FUN_28b3_0d8b();
                func_0x0002996b();
                func_0x00029983();
                func_0x0001bb4e();
                iStack_6 = 0x3af;
                func_0x00012276();
                iStack_6 = 0x11f2;
                iStack_8 = 0x3bd;
                FUN_1000_0599();
                iStack_6 = 0x3c8;
                func_0x00012276();
                iStack_6 = *(undefined2 *)(unaff_BP + -0x7c);
                iStack_8 = *(undefined2 *)(unaff_BP + -0x7e);
                iStack_a = 0x3d8b;
                iStack_c = unaff_BP + -0x32;
                iStack_e = 0x11f2;
                uStack_10 = 0x3e4;
                FUN_10ad_1928();
                iStack_6 = 0x11f2;
                iStack_8 = 0x3f0;
                func_0x00012276();
                iStack_6 = 0x14;
                iStack_8 = unaff_BP + -0x13e;
                iStack_a = unaff_BP + -0x12a;
                iStack_c = unaff_BP + -0x106;
                iStack_e = unaff_BP + -0x7e;
                uStack_10 = 0x11f2;
                uVar10 = 0xad;
                uStack_12 = 0x411;
                iVar8 = func_0x000021a4();
                *(int *)(unaff_BP + -0x112) = iVar8;
                if (iVar8 != -1) {
                  if (*(int *)0x158 != 0) {
                    halt_baddata();
                  }
                  uVar13 = false;
                  uVar12 = *(int *)(unaff_BP + -0x112) == 0;
                  if (!(bool)uVar12) goto code_r0x0004042f;
                  goto LAB_3ab8_58b9;
                }
              }
            }
          }
        }
      }
    }
    if (*(int *)(unaff_BP + 6) == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  goto LAB_3ab8_54e3;
code_r0x0004042f:
  uVar13 = *(uint *)(unaff_BP + -0x112) < 0x66;
  uVar12 = true;
  if (*(uint *)(unaff_BP + -0x112) == 0x66) {
LAB_3ab8_58b9:
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar13 || (bool)uVar12) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if ((bool)uVar13 || (bool)uVar12) {
        func_0x000297e6();
        func_0x00029d78();
        uVar10 = FUN_28b3_0f51();
        *(undefined2 *)0x3d96 = uVar10;
        *(undefined2 *)(unaff_BP + -0x7a) = 0;
        func_0x0000c3ca();
        uVar10 = *(undefined2 *)(unaff_BP + -0x124);
        *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0x126);
        *(undefined2 *)0xb30e = uVar10;
        uVar10 = *(undefined2 *)(unaff_BP + -0x138);
        *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -0x13a);
        *(undefined2 *)0xb380 = uVar10;
        func_0x000297e6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0x4c5;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0x4ce;
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = 0x4d3;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0x4dd;
        func_0x000299d1();
        uStack_12 = 1;
        uStack_14 = 0x22b2;
        uStack_16 = 0x4e6;
        puVar6 = (undefined2 *)FUN_1def_05d1();
        uVar10 = puVar6[1];
        *(undefined2 *)(unaff_BP + -0x98) = *puVar6;
        *(undefined2 *)(unaff_BP + -0x96) = uVar10;
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0x518;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0x520;
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = 0x525;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0x52f;
        func_0x000299d1();
        uStack_12 = 1;
        uStack_14 = 0x22b2;
        uStack_16 = 0x538;
        FUN_1def_05d1();
        uVar12 = (undefined1 *)0xffed < &uStack_12;
        uVar13 = &stack0x0000 == (undefined1 *)0x0;
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_1181();
        if ((bool)uVar13) {
          halt_baddata();
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar12) {
          uVar10 = *(undefined2 *)(unaff_BP + -0x96);
          *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x98);
          *(undefined2 *)(unaff_BP + -0x84) = uVar10;
          uVar10 = *(undefined2 *)(unaff_BP + -0x108);
          *(undefined2 *)(unaff_BP + -0x98) = *(undefined2 *)(unaff_BP + -0x10a);
          *(undefined2 *)(unaff_BP + -0x96) = uVar10;
          uVar10 = *(undefined2 *)(unaff_BP + -0x84);
          *(undefined2 *)(unaff_BP + -0x10a) = *(undefined2 *)(unaff_BP + -0x86);
          *(undefined2 *)(unaff_BP + -0x108) = uVar10;
        }
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029b6d();
        func_0x0002996b();
        func_0x000297e6();
        func_0x00029b6d();
        FUN_28b3_0d8b();
        FUN_28b3_1177();
        func_0x0002996b();
        FUN_28b3_1181();
        if (!(bool)uVar12 && !(bool)uVar13) {
          func_0x000297e6();
          func_0x00029983();
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x0002996b();
        FUN_28b3_1181();
        if ((bool)uVar12) {
          func_0x000297e6();
          func_0x00029983();
        }
        uVar12 = *(int *)(unaff_BP + 6) == 0;
        if (*(int *)(unaff_BP + 6) == 1) {
          func_0x000297e6();
          func_0x00029b6d();
          func_0x0002996b();
          func_0x00029b9d();
          func_0x00029983();
          func_0x000297e6();
          func_0x000297e6();
          func_0x00029b85();
          func_0x0002996b();
          func_0x00029b6d();
          func_0x0002996b();
          FUN_28b3_1181();
          if ((bool)uVar12) {
            func_0x000297e6();
            func_0x00029983();
          }
        }
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029b6d();
        FUN_28b3_1181();
        if ((bool)uVar12) {
          func_0x000297e6();
          func_0x00029b85();
          FUN_28b3_100d();
          func_0x00029d78();
          uVar10 = FUN_28b3_0f51();
          *(undefined2 *)(unaff_BP + -0x118) = uVar10;
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029bb5();
          func_0x00029d78();
          iVar8 = FUN_28b3_0f51();
          *(int *)(unaff_BP + -0x11e) = iVar8;
          if (iVar8 == 0) {
            halt_baddata();
          }
          if (*(int *)(unaff_BP + -0x118) == 0) {
            halt_baddata();
          }
          func_0x000297e6();
          FUN_28b3_0d8b();
          FUN_28b3_1172();
          func_0x00029983();
          func_0x000297e6();
          FUN_28b3_0d8b();
          FUN_28b3_1172();
        }
        else {
          *(undefined2 *)(unaff_BP + -0x118) = 0;
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029b85();
          func_0x00029bb5();
          func_0x00029d78();
          iVar8 = FUN_28b3_0f51();
          *(int *)(unaff_BP + -0x11e) = iVar8;
          if (iVar8 == 0) {
            halt_baddata();
          }
          func_0x000297e6();
          FUN_28b3_100d();
          FUN_28b3_0d8b();
          FUN_28b3_1172();
          func_0x0002996b();
        }
        func_0x00029983();
        uVar10 = 0x885;
        iStack_6 = 0x7ec;
        func_0x0000daa6();
        *(undefined2 *)(unaff_BP + -0x7a) = 0;
        *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x118);
        goto LAB_3ab8_602e;
      }
    }
  }
  goto LAB_3ab8_5807;
LAB_3ab8_602e:
  iVar8 = *(int *)(unaff_BP + -0x9e);
  if (*(int *)(unaff_BP + -0x11e) < iVar8) {
    if (1 < *(int *)(unaff_BP + -0x7a)) {
      iStack_8 = 0xbf6;
      iStack_6 = uVar10;
      uVar15 = func_0x0000013f();
      pbVar1 = (byte *)((int)uVar15 + 0x14);
      *pbVar1 = *pbVar1 | 0x40;
      iStack_6 = 0;
      iStack_8 = 0xc0e;
      uVar15 = func_0x0000013f();
      pbVar1 = (byte *)((int)uVar15 + 0x14);
      *pbVar1 = *pbVar1 | 0x80;
    }
    func_0x0000abfa();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(unaff_BP + -0x118) < 0) {
    if (iVar8 < 0) {
      iVar8 = iVar8 - *(int *)(unaff_BP + -0x118);
      goto LAB_3ab8_6042;
    }
    FUN_28b3_0d8b();
    func_0x00029b6d();
  }
  else {
LAB_3ab8_6042:
    *(int *)(unaff_BP + -0x146) = iVar8;
    FUN_28b3_0d8b();
    func_0x00029b6d();
    func_0x00029bb5();
  }
  uVar10 = 0x22b2;
  func_0x00029983();
  if (*(int *)(unaff_BP + 6) == 1) {
    func_0x000297e6();
    func_0x0002996b();
    func_0x00029d78();
    func_0x00029b85();
    func_0x00029c2c();
    iStack_a = 0x22b2;
    iStack_c = 0x85f;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0x864;
    func_0x0002a10c();
    func_0x00029834();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0x88e;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0x897;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0x8a1;
    func_0x000299d1();
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0x8a9;
    puVar6 = (undefined2 *)FUN_1def_05d1();
    uVar10 = puVar6[1];
    *(undefined2 *)(unaff_BP + -0x11c) = *puVar6;
    *(undefined2 *)(unaff_BP + -0x11a) = uVar10;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = 0x8ce;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0x8d7;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0x8e1;
    func_0x000299d1();
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uVar10 = 0x1bb4;
    uStack_16 = 0x8e9;
    puVar6 = (undefined2 *)func_0x0001e558();
    uVar11 = puVar6[1];
    *(undefined2 *)(unaff_BP + -0x122) = *puVar6;
    *(undefined2 *)(unaff_BP + -0x120) = uVar11;
  }
  if (*(int *)(unaff_BP + 6) == 2) {
    func_0x000297e6();
    func_0x0002996b();
    func_0x00029b6d();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0x951;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0x95a;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = 0x95f;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0x969;
    func_0x000299d1();
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0x971;
    puVar6 = (undefined2 *)FUN_1def_05d1();
    uVar10 = puVar6[1];
    *(undefined2 *)(unaff_BP + -0x11c) = *puVar6;
    *(undefined2 *)(unaff_BP + -0x11a) = uVar10;
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0x99b;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0x9a4;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = 0x9a9;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0x9b3;
    func_0x000299d1();
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uVar10 = 0x1bb4;
    uStack_16 = 0x9bb;
    puVar6 = (undefined2 *)func_0x0001e558();
    uVar11 = puVar6[1];
    *(undefined2 *)(unaff_BP + -0x122) = *puVar6;
    *(undefined2 *)(unaff_BP + -0x120) = uVar11;
  }
  uVar4 = *(uint *)(unaff_BP + -0x9e);
  uVar5 = *(uint *)(unaff_BP + -0x118);
  uVar12 = uVar5 < uVar4;
  uVar13 = uVar5 == uVar4;
  if ((int)uVar5 < (int)uVar4) {
    func_0x000297e6();
    func_0x000297e6();
    uVar10 = 0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar12 && !(bool)uVar13) {
      func_0x000297e6();
      func_0x000297e6();
      uVar10 = 0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar12) {
        func_0x000297e6();
        func_0x000297e6();
        uVar10 = 0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar12 && !(bool)uVar13) {
          func_0x000297e6();
          func_0x000297e6();
          uVar10 = 0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar12) {
            func_0x000297e6();
            func_0x000297e6();
            uVar10 = 0x22b2;
            FUN_28b3_1181();
            if (!(bool)uVar12 && !(bool)uVar13) {
              func_0x000297e6();
              func_0x000297e6();
              uVar10 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar12) {
                func_0x000297e6();
                func_0x000297e6();
                uVar10 = 0x22b2;
                FUN_28b3_1181();
                if (!(bool)uVar12 && !(bool)uVar13) {
                  func_0x000297e6();
                  func_0x000297e6();
                  uVar10 = 0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar12) {
                    *(undefined1 *)(unaff_BP + -0x47) = *(undefined1 *)0xa6a;
                    *(undefined1 *)(unaff_BP + -0x48) = *(undefined1 *)0xa6c;
                    *(undefined1 *)(unaff_BP + -0x46) = *(undefined1 *)0xb310;
                    uVar10 = *(undefined2 *)(unaff_BP + -0x10e);
                    *(undefined2 *)(unaff_BP + -0x58) = *(undefined2 *)(unaff_BP + -0x110);
                    *(undefined2 *)(unaff_BP + -0x56) = uVar10;
                    uVar10 = *(undefined2 *)(unaff_BP + -0x114);
                    *(undefined2 *)(unaff_BP + -0x54) = *(undefined2 *)(unaff_BP + -0x116);
                    *(undefined2 *)(unaff_BP + -0x52) = uVar10;
                    uVar10 = *(undefined2 *)(unaff_BP + -0x11a);
                    *(undefined2 *)(unaff_BP + -0x50) = *(undefined2 *)(unaff_BP + -0x11c);
                    *(undefined2 *)(unaff_BP + -0x4e) = uVar10;
                    uVar10 = *(undefined2 *)(unaff_BP + -0x120);
                    *(undefined2 *)(unaff_BP + -0x4c) = *(undefined2 *)(unaff_BP + -0x122);
                    *(undefined2 *)(unaff_BP + -0x4a) = uVar10;
                    puVar7 = &uStack_16;
                    puVar6 = (undefined2 *)(unaff_BP + -0x58);
                    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
                      puVar3 = puVar7;
                      puVar7 = puVar7 + 1;
                      puVar2 = puVar6;
                      puVar6 = puVar6 + 1;
                      *puVar3 = *puVar2;
                    }
                    uVar10 = 0x11f2;
                    uStack_1a = 0xb18;
                    iVar8 = FUN_17a6_0cba();
                    if (0 < iVar8) {
                      *(int *)(unaff_BP + -0x7a) = *(int *)(unaff_BP + -0x7a) + 1;
                      if (*(int *)(unaff_BP + -0x7a) == 1) {
                        iStack_6 = 0x11f2;
                        iStack_8 = 0xb35;
                        uVar15 = func_0x0000013f();
                        pbVar1 = (byte *)((int)uVar15 + 0x14);
                        *pbVar1 = *pbVar1 | 0x40;
                        iStack_6 = 0;
                        uVar10 = 0;
                        iStack_8 = 0xb4d;
                        uVar15 = func_0x0000013f();
                        pbVar1 = (byte *)((int)uVar15 + 0x14);
                        *pbVar1 = *pbVar1 & 0x7f;
                      }
                      else {
                        iStack_6 = 0x11f2;
                        iStack_8 = 0xb67;
                        uVar15 = func_0x0000013f();
                        pbVar1 = (byte *)((int)uVar15 + 0x14);
                        *pbVar1 = *pbVar1 & 0xbf;
                        iStack_6 = 0;
                        uVar10 = 0;
                        iStack_8 = 0xb7f;
                        uVar15 = func_0x0000013f();
                        pbVar1 = (byte *)((int)uVar15 + 0x14);
                        *pbVar1 = *pbVar1 | 0x80;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar11 = *(undefined2 *)(unaff_BP + -0x11a);
  *(undefined2 *)(unaff_BP + -0x110) = *(undefined2 *)(unaff_BP + -0x11c);
  *(undefined2 *)(unaff_BP + -0x10e) = uVar11;
  uVar11 = *(undefined2 *)(unaff_BP + -0x120);
  *(undefined2 *)(unaff_BP + -0x116) = *(undefined2 *)(unaff_BP + -0x122);
  *(undefined2 *)(unaff_BP + -0x114) = uVar11;
  *(int *)(unaff_BP + -0x9e) = *(int *)(unaff_BP + -0x9e) + 1;
  goto LAB_3ab8_602e;
}


