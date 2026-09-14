/* 3ab8:6136 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_3ab8_6136(void)

{
  byte *pbVar1;
  uint *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  code *pcVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  uint uVar11;
  int unaff_BP;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar17;
  undefined1 uVar18;
  bool bVar19;
  long lVar20;
  undefined4 uVar21;
  undefined2 *puVar22;
  int iVar23;
  int iVar24;
  int iStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  int iStack_4;
  int iStack_2;
  
  iVar16 = 0x3ab8;
LAB_3ab8_5c95:
  do {
    *(undefined2 *)(unaff_BP + -0x224) = 0;
    *(undefined2 *)(unaff_BP + -0x226) = 0;
    *(undefined2 *)(unaff_BP + -0x5a) = 0;
    *(undefined2 *)(unaff_BP + -0x5c) = 0;
    *(undefined2 *)(unaff_BP + -0x1e0) = 0;
    uVar10 = *(undefined2 *)0x14a;
    *(undefined2 *)(unaff_BP + -0x1e4) = *(undefined2 *)0x148;
    *(undefined2 *)(unaff_BP + -0x1e2) = uVar10;
    uVar10 = *(undefined2 *)0x14e;
    *(undefined2 *)(unaff_BP + -0x132) = *(undefined2 *)0x14c;
    *(undefined2 *)(unaff_BP + -0x130) = uVar10;
    *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)0x150;
    if ((((*(int *)(unaff_BP + -0x1fe) != 1) && (*(int *)(unaff_BP + -0x1fe) != 3)) &&
        (*(int *)(unaff_BP + -0x1fe) != 4)) && (*(int *)(unaff_BP + -0x1fe) != 6)) {
      FUN_3ab8_6188();
      return;
    }
    do {
      if (*(char *)0xb1ea == '\0') {
        bVar7 = *(byte *)0xc11;
      }
      else {
        bVar7 = *(byte *)0xc12;
      }
      *(uint *)(unaff_BP + -0x220) = (uint)bVar7;
      iVar15 = iVar16;
      if ((*(int *)0xc22 == 0) && (bVar7 == 0)) {
        iVar15 = 0xdef;
        iStack_4 = 0x8a6;
        iStack_2 = iVar16;
        FUN_1000_02b5();
        *(undefined2 *)0xc22 = 1;
      }
      iStack_4 = 0x8c9;
      iStack_2 = iVar15;
      FUN_21f2_3454();
      func_0x00001d33();
      FUN_21f2_2d26();
      if ((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 6)) {
        FUN_21f2_2d26();
        func_0x000297e6();
        func_0x00029d78();
        iStack_2 = 0x927;
        func_0x000299d1();
        iStack_2 = unaff_BP + -0x84;
        iStack_4 = 0x22b2;
        uStack_6 = 0x935;
        FUN_21f2_3454();
        if (*(int *)(unaff_BP + -0x1fe) == 6) {
          FUN_1000_0599();
          func_0x00010526();
          iStack_2 = 0xdef;
          iStack_4 = 0x96d;
          FUN_1000_02b5();
          *(undefined2 *)0xc22 = 1;
        }
      }
      FUN_1000_0599();
      func_0x00012276();
      func_0x00010526();
      func_0x000297e6();
      func_0x00029d78();
      iStack_4 = 0x22b2;
      uStack_6 = 0x9b1;
      func_0x000299d1();
      iStack_4 = 0x22b2;
      uStack_6 = 0x9ba;
      func_0x000297e6();
      iStack_4 = 0x22b2;
      uStack_6 = 0x9bf;
      func_0x00029d78();
      uStack_c = 0x22b2;
      uStack_e = 0x9c9;
      func_0x000299d1();
      uStack_c = 0x22b2;
      uStack_e = 0x9d2;
      func_0x000297e6();
      uStack_c = 0x22b2;
      uStack_e = 0x9d7;
      func_0x00029d78();
      uStack_14 = 0x22b2;
      iStack_16 = 0x9e1;
      func_0x000299d1();
      uStack_14 = *(undefined2 *)(unaff_BP + -0x1e6);
      iStack_16 = unaff_BP + -0xca;
      iVar9 = unaff_BP + -0x226;
      iVar15 = unaff_BP + -0x5c;
      iVar24 = unaff_BP + -0x21e;
      iVar23 = unaff_BP + -0x92;
      func_0x000297e6(0x22b2,unaff_BP + -0x58,iVar23,iVar24,unaff_BP + -0x232,unaff_BP + -0x146,
                      iVar15,iVar9,unaff_BP + -0x1e0,unaff_BP + -0x1e4,unaff_BP + -0x132);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      iVar16 = 0x22b2;
      func_0x000299d1(0x22b2);
      iVar8 = FUN_4375_a73f(0x22b2,0);
      *(int *)(unaff_BP + -0x1f0) = iVar8;
      if (*(int *)0x158 != 0) {
        FUN_3ab8_7689();
        return;
      }
    } while (iVar8 == 99);
    if (iVar8 != -1) {
      if ((*(int *)(unaff_BP + -0x92) < *(int *)0xa5e) && (*(int *)(unaff_BP + -0x146) != 0)) {
        *(undefined2 *)(unaff_BP + -0x146) = 0;
        if ((0x16b < *(int *)(unaff_BP + -0x58)) && (*(int *)(unaff_BP + -0x58) < 0x1e4)) {
          *(undefined2 *)(unaff_BP + -0x1f0) = 0x31;
        }
        if ((0x1e3 < *(int *)(unaff_BP + -0x58)) && (*(int *)(unaff_BP + -0x58) < 0x22c)) {
          *(undefined2 *)(unaff_BP + -0x1f0) = 0x32;
        }
        if (0x22b < *(int *)(unaff_BP + -0x58)) {
          *(undefined2 *)(unaff_BP + -0x1f0) = 0x33;
        }
        iVar16 = 0x885;
        iStack_2 = 0xaf8;
        func_0x0000dcbd();
        uVar11 = (int)*(uint *)0xc1c >> 0xf;
        if ((((int)(((*(uint *)0xc1c ^ uVar11) - uVar11) + *(int *)0xa5e) <
              *(int *)(unaff_BP + -0x92)) && (*(char *)0x124 != '\0')) &&
           (*(int *)(unaff_BP + -0x124) != 0)) {
          *(undefined2 *)(unaff_BP + -0x1f0) = 0;
          pcVar6 = (code *)swi(0x3f);
          (*pcVar6)();
        }
      }
      if (*(int *)(unaff_BP + -0x1f0) == 0x31) {
        *(undefined2 *)(unaff_BP + -0x146) = 0;
        *(int *)(unaff_BP + -0x1e6) = *(int *)(unaff_BP + -0x1e6) + 1;
        if (3 < *(int *)(unaff_BP + -0x1e6)) {
          *(undefined2 *)(unaff_BP + -0x1e6) = 0;
        }
      }
      if (*(int *)(unaff_BP + -0x1f0) == 0x32) {
        *(undefined2 *)(unaff_BP + -0x146) = 0;
        if (*(char *)0xb1ea == '\0') {
          *(char *)0xc11 = '\x01' - *(char *)0xc11;
        }
        else {
          *(char *)0xc12 = '\x01' - *(char *)0xc12;
        }
      }
      if ((*(int *)(unaff_BP + -0x1f0) == 0x33) &&
         ((*(undefined2 *)(unaff_BP + -0x146) = 0, *(int *)(unaff_BP + -0x1fe) == 1 ||
          (*(int *)(unaff_BP + -0x1fe) == 6)))) {
        uVar10 = *(undefined2 *)0x1076;
        *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)0x1074;
        *(undefined2 *)(unaff_BP + -0x218) = uVar10;
        pcVar6 = (code *)swi(0x3f);
        iVar15 = (*pcVar6)();
        *(int *)(unaff_BP + -0x1f0) = iVar15;
        if (*(int *)0x158 != 0) {
          FUN_3ab8_7689();
          return;
        }
        if (iVar15 != -1) {
          func_0x000297e6();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x000299b9();
          func_0x000299d1();
          func_0x00029834();
          func_0x000299d1();
          func_0x00029834();
          iStack_2 = 0xc3a;
          func_0x000299d1();
          iStack_2 = 0xc3f;
          func_0x0002a11e();
          func_0x00029834();
          func_0x00029983();
          iStack_2 = 0xc67;
          func_0x0002a10c();
          func_0x00029834();
          iVar16 = 0x22b2;
          func_0x00029983();
          *(undefined2 *)(unaff_BP + -0x1fe) = 6;
        }
      }
      else {
        if (*(int *)(unaff_BP + -0x146) == 0) {
          FUN_3ab8_629f();
          return;
        }
        if (*(byte *)0x123 < 0xc) {
LAB_3ab8_613c:
          if ((*(char *)0x4a != '\0') && (*(int *)(unaff_BP + -0x146) != 2)) {
            iStack_2 = *(int *)(unaff_BP + -0x144);
            uStack_6 = 0xce8;
            iStack_4 = iVar16;
            FUN_4375_bf01();
          }
          iVar16 = func_0x00015409();
          if (iVar16 == 0) {
            FUN_3ab8_629f();
            return;
          }
code_r0x00040d08:
          iVar16 = 0x11f2;
          if ((((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 3)) ||
              (*(int *)(unaff_BP + -0x1fe) == 4)) || (*(int *)(unaff_BP + -0x1fe) == 6)) {
            uVar10 = *(undefined2 *)(unaff_BP + -0x230);
            *(undefined2 *)(unaff_BP + -0x1d8) = *(undefined2 *)(unaff_BP + -0x232);
            *(undefined2 *)(unaff_BP + -0x1d6) = uVar10;
            func_0x000297e6();
            func_0x0002996b();
            FUN_28b3_100d();
            func_0x0002996b();
            func_0x00029983();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x0002996b();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029983();
            func_0x000297e6();
            iVar16 = 0x22b2;
            func_0x00029983();
            uVar10 = *(undefined2 *)(unaff_BP + -0x230);
            *(undefined2 *)(unaff_BP + -0x158) = *(undefined2 *)(unaff_BP + -0x232);
            *(undefined2 *)(unaff_BP + -0x156) = uVar10;
          }
          while (*(int *)(unaff_BP + -0x1fe) == 2) {
            uVar10 = *(undefined2 *)0x1066;
            *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)0x1064;
            *(undefined2 *)(unaff_BP + -0x218) = uVar10;
            uVar10 = *(undefined2 *)0x106a;
            *(undefined2 *)(unaff_BP + -0x1d0) = *(undefined2 *)0x1068;
            *(undefined2 *)(unaff_BP + -0x1ce) = uVar10;
            iStack_4 = 0xe0e;
            iStack_2 = iVar16;
            iVar16 = func_0x00001dd5();
            *(int *)(unaff_BP + -0x1f0) = iVar16;
            if (*(int *)0x158 != 0) {
              FUN_3ab8_7689();
              return;
            }
            uVar17 = iVar16 != -1;
            uVar18 = iVar16 == -1;
            if ((bool)uVar18) {
              halt_baddata();
            }
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029ae7();
            FUN_28b3_1181();
            if ((bool)uVar17 || (bool)uVar18) {
              func_0x000297e6();
              func_0x000297e6();
              func_0x00029ae7();
              FUN_28b3_1181();
              if ((bool)uVar17 || (bool)uVar18) {
                uVar10 = *(undefined2 *)(unaff_BP + -0x218);
                *(undefined2 *)0x1064 = *(undefined2 *)(unaff_BP + -0x21a);
                *(undefined2 *)0x1066 = uVar10;
                uVar10 = *(undefined2 *)(unaff_BP + -0x1ce);
                *(undefined2 *)0x1068 = *(undefined2 *)(unaff_BP + -0x1d0);
                *(undefined2 *)0x106a = uVar10;
                func_0x000297e6();
                func_0x00029b6d();
                func_0x0002996b();
                func_0x00029b9d();
                func_0x00029983();
                func_0x000297e6();
                func_0x00029b85();
                func_0x00029983();
                *(undefined2 *)(unaff_BP + -0x1e6) = 0;
                FUN_1def_0338();
                uVar10 = *(undefined2 *)(unaff_BP + -0x1e8);
                *(undefined2 *)(unaff_BP + -0x208) = *(undefined2 *)(unaff_BP + -0x1ea);
                *(undefined2 *)(unaff_BP + -0x206) = uVar10;
                uVar10 = *(undefined2 *)0x943c;
                uVar5 = *(undefined2 *)0x943e;
                *(undefined2 *)(unaff_BP + -0x144) = uVar10;
                *(undefined2 *)(unaff_BP + -0x142) = uVar5;
                *(undefined2 *)(unaff_BP + -0x15c) = uVar10;
                *(undefined2 *)(unaff_BP + -0x15a) = uVar5;
                func_0x000297e6();
                func_0x0002996b();
                func_0x00029983();
                uVar10 = *(undefined2 *)(unaff_BP + -0x1e8);
                *(undefined2 *)(unaff_BP + -0x1d8) = *(undefined2 *)(unaff_BP + -0x1ea);
                *(undefined2 *)(unaff_BP + -0x1d6) = uVar10;
                uVar10 = *(undefined2 *)0x9480;
                uVar5 = *(undefined2 *)0x9482;
                *(undefined2 *)(unaff_BP + -500) = uVar10;
                *(undefined2 *)(unaff_BP + -0x1f2) = uVar5;
                *(undefined2 *)(unaff_BP + -0x204) = uVar10;
                *(undefined2 *)(unaff_BP + -0x202) = uVar5;
                break;
              }
            }
            func_0x00012276();
            *(undefined2 *)0xc22 = 1;
            FUN_1000_0599();
            iVar16 = 0x11f2;
            func_0x00012276();
          }
          do {
            if (*(int *)(unaff_BP + -0x1fe) == 4) {
              uVar10 = *(undefined2 *)(unaff_BP + -0x1d2);
              *(undefined2 *)(unaff_BP + -0x270) = *(undefined2 *)(unaff_BP + -0x1d4);
              *(undefined2 *)(unaff_BP + -0x26e) = uVar10;
              uVar10 = *(undefined2 *)(unaff_BP + -0x1e8);
              *(undefined2 *)(unaff_BP + -0x264) = *(undefined2 *)(unaff_BP + -0x1ea);
              *(undefined2 *)(unaff_BP + -0x262) = uVar10;
              if (*(int *)(unaff_BP + -0x1e6) != 0) {
                FUN_1def_0338();
                if (*(int *)(unaff_BP + -0x1e6) == 1) {
                  uVar10 = *(undefined2 *)0x943e;
                  *(undefined2 *)(unaff_BP + -0x264) = *(undefined2 *)0x943c;
                  *(undefined2 *)(unaff_BP + -0x262) = uVar10;
                }
                if (*(int *)(unaff_BP + -0x1e6) == 2) {
                  uVar10 = *(undefined2 *)0x943e;
                  *(undefined2 *)(unaff_BP + -0x270) = *(undefined2 *)0x943c;
                  *(undefined2 *)(unaff_BP + -0x26e) = uVar10;
                }
                uVar17 = *(uint *)(unaff_BP + -0x1e6) < 3;
                if (*(uint *)(unaff_BP + -0x1e6) == 3) {
                  func_0x000297e6();
                  func_0x00029ae7();
                  func_0x000297e6();
                  func_0x00029ae7();
                  FUN_28b3_1181();
                  if ((bool)uVar17) {
                    uVar10 = *(undefined2 *)0x943e;
                    *(undefined2 *)(unaff_BP + -0x264) = *(undefined2 *)0x943c;
                    *(undefined2 *)(unaff_BP + -0x262) = uVar10;
                  }
                  else {
                    uVar10 = *(undefined2 *)0x943e;
                    *(undefined2 *)(unaff_BP + -0x270) = *(undefined2 *)0x943c;
                    *(undefined2 *)(unaff_BP + -0x26e) = uVar10;
                  }
                }
                FUN_1def_0338();
              }
              func_0x000297e6();
              func_0x00029bb5();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029bb5();
              iVar16 = 0x22b2;
              func_0x00029983();
              do {
                do {
                  do {
                    iStack_2 = unaff_BP + -0x1cc;
                    uStack_6 = 0x10ae;
                    iStack_4 = iVar16;
                    FUN_21f2_3454();
                    FUN_1000_0599();
                    func_0x00012276();
                    func_0x00010526();
                    func_0x000297e6();
                    func_0x0002996b();
                    func_0x00029983();
                    uVar10 = *(undefined2 *)(unaff_BP + -0x264);
                    uVar5 = *(undefined2 *)(unaff_BP + -0x262);
                    *(undefined2 *)(unaff_BP + -0x232) = uVar10;
                    *(undefined2 *)(unaff_BP + -0x230) = uVar5;
                    *(undefined2 *)(unaff_BP + -0x1d8) = uVar10;
                    *(undefined2 *)(unaff_BP + -0x1d6) = uVar5;
                    func_0x000297e6();
                    func_0x00029d78();
                    iStack_4 = 0x22b2;
                    uStack_6 = 0x111f;
                    func_0x000299d1();
                    iStack_4 = 0x22b2;
                    uStack_6 = 0x1128;
                    func_0x000297e6();
                    iStack_4 = 0x22b2;
                    uStack_6 = 0x112d;
                    func_0x00029d78();
                    uStack_c = 0x22b2;
                    uStack_e = 0x1137;
                    func_0x000299d1();
                    uStack_c = 0x22b2;
                    uStack_e = 0x1140;
                    func_0x000297e6();
                    uStack_c = 0x22b2;
                    uStack_e = 0x1145;
                    func_0x00029d78();
                    uStack_14 = 0x22b2;
                    iStack_16 = 0x114f;
                    func_0x000299d1();
                    uStack_14 = *(undefined2 *)(unaff_BP + -0x1e6);
                    iStack_16 = unaff_BP + -0xca;
                    iVar15 = unaff_BP + -0x5c;
                    iVar24 = unaff_BP + -0x146;
                    iVar23 = unaff_BP + -0x92;
                    iVar8 = unaff_BP + -0x58;
                    func_0x000297e6(0x22b2,iVar8,iVar23,unaff_BP + -0x21e,unaff_BP + -0x232,iVar24,
                                    iVar15,unaff_BP + -0x226,unaff_BP + -0x1e0,unaff_BP + -0x1e4,
                                    unaff_BP + -0x132);
                    func_0x00029d78(0x22b2);
                    func_0x000299d1(0x22b2);
                    func_0x000297e6(0x22b2);
                    func_0x00029d78(0x22b2);
                    iVar16 = 0x22b2;
                    func_0x000299d1(0x22b2);
                    iVar9 = FUN_4375_a73f(0x22b2,2);
                    *(int *)(unaff_BP + -0x1f0) = iVar9;
                    if (*(int *)0x158 != 0) {
                      FUN_3ab8_7689();
                      return;
                    }
                  } while (iVar9 == 99);
                  if (iVar9 == -1) goto LAB_3ab8_5c95;
                } while ((*(int *)(unaff_BP + -0x146) == 0) ||
                        (*(int *)(unaff_BP + -0x92) <= *(int *)0xa5e));
                if ((*(char *)0x4a != '\0') && (*(int *)(unaff_BP + -0x146) != 2)) {
                  iStack_2 = *(int *)(unaff_BP + -0x144);
                  iStack_4 = 0x22b2;
                  uStack_6 = 0x1223;
                  FUN_4375_bf01();
                }
                iVar16 = 0x11f2;
                iVar9 = func_0x00015409();
              } while (iVar9 == 0);
              func_0x000297e6();
              func_0x00029d78();
              iStack_4 = 0x22b2;
              uStack_6 = 0x1265;
              func_0x000299d1();
              iStack_4 = 0x22b2;
              uStack_6 = 0x126e;
              func_0x000297e6();
              iStack_4 = 0x22b2;
              uStack_6 = 0x1273;
              func_0x00029d78();
              uStack_c = 0x22b2;
              uStack_e = 0x127d;
              func_0x000299d1();
              uStack_c = 0x22b2;
              uStack_e = 0x1286;
              func_0x000297e6();
              uStack_c = 0x22b2;
              uStack_e = 0x128b;
              func_0x00029d78();
              uStack_14 = 0x22b2;
              iStack_16 = 0x1295;
              func_0x000299d1();
              uStack_14 = 0x22b2;
              iStack_16 = 0x129e;
              func_0x000297e6();
              uStack_14 = 0x22b2;
              iStack_16 = 0x12a3;
              func_0x00029d78();
              func_0x000299d1(0x22b2);
              func_0x000297e6(0x22b2);
              iVar9 = 0x12bb;
              func_0x00029d78(0x22b2);
              func_0x000299d1(0x22b2,iVar24,iVar15,iVar9);
              func_0x000297e6(0x22b2);
              iVar24 = 0x12d3;
              func_0x00029d78(0x22b2);
              func_0x000299d1(0x22b2,iVar8,iVar23,iVar24);
              FUN_4375_a5de(0x22b2);
              uVar10 = *(undefined2 *)(unaff_BP + -0x1f2);
              *(undefined2 *)0x106c = *(undefined2 *)(unaff_BP + -500);
              *(undefined2 *)0x106e = uVar10;
              uVar10 = *(undefined2 *)(unaff_BP + -0x202);
              *(undefined2 *)0x1070 = *(undefined2 *)(unaff_BP + -0x204);
              *(undefined2 *)0x1072 = uVar10;
            }
            *(undefined1 *)0xb49c = 0;
            if (*(char *)0xb1ea == '\0') {
              if ((*(char *)0x22b0 != '\0') && (iVar16 = FUN_4375_76b1(), iVar16 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (*(int *)0x158 != 0) {
                FUN_3ab8_7689();
                return;
              }
            }
            *(undefined2 *)(unaff_BP + -0x10e) = 0;
            uVar10 = *(undefined2 *)0x14a;
            *(undefined2 *)(unaff_BP + -0x22a) = *(undefined2 *)0x148;
            *(undefined2 *)(unaff_BP + -0x228) = uVar10;
            uVar10 = *(undefined2 *)0x14e;
            *(undefined2 *)(unaff_BP + -0x164) = *(undefined2 *)0x14c;
            *(undefined2 *)(unaff_BP + -0x162) = uVar10;
            *(undefined2 *)(unaff_BP + -0x10c) = *(undefined2 *)0x150;
            *(undefined2 *)(unaff_BP + -0x210) = *(undefined2 *)0x152;
            while( true ) {
              while( true ) {
                if (*(int *)(unaff_BP + -0x1fe) != 5) {
                  if (*(int *)0x158 == 0) goto LAB_3ab8_69b3;
                  FUN_3ab8_7689();
                  return;
                }
                FUN_21f2_3454();
                iStack_2 = 0x22b2;
                iStack_4 = 0x1398;
                iVar16 = FUN_1def_0904();
                *(int *)(unaff_BP + -0x1f0) = iVar16;
                if (*(int *)0x158 != 0) {
                  FUN_3ab8_7689();
                  return;
                }
                if (iVar16 == -1) {
                  halt_baddata();
                }
                *(undefined1 *)0xb8c = 1;
                func_0x000297e6();
                func_0x00029d78();
                iStack_2 = 0x13ce;
                func_0x000299d1();
                iStack_2 = 0x13d7;
                func_0x000297e6();
                iStack_2 = 0x13dc;
                func_0x00029d78();
                uStack_8 = 0x22b2;
                uStack_a = 0x13e6;
                func_0x000299d1();
                uStack_8 = 0x22b2;
                uStack_a = 0x13eb;
                lVar20 = FUN_13bf_39a0();
                *(undefined2 *)(unaff_BP + -0x14c) = (int)lVar20;
                *(undefined2 *)(unaff_BP + -0x14a) = (int)((ulong)lVar20 >> 0x10);
                if (lVar20 != 0) break;
                *(undefined1 *)0xb8c = 0;
              }
              *(undefined1 *)0xb8c = 0;
              if (-1 < *(int *)(unaff_BP + -0x14a)) break;
              func_0x00012276();
              *(undefined2 *)0xc22 = 1;
              FUN_1000_0599();
              func_0x00012276();
            }
            if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
              *(undefined2 *)(unaff_BP + -0x10e) = 0;
              uVar10 = *(undefined2 *)0x14a;
              *(undefined2 *)(unaff_BP + -0x22a) = *(undefined2 *)0x148;
              *(undefined2 *)(unaff_BP + -0x228) = uVar10;
              uVar10 = *(undefined2 *)0x14e;
              *(undefined2 *)(unaff_BP + -0x164) = *(undefined2 *)0x14c;
              *(undefined2 *)(unaff_BP + -0x162) = uVar10;
              *(undefined2 *)(unaff_BP + -0x10c) = *(undefined2 *)0x150;
              *(undefined2 *)(unaff_BP + -0x210) = *(undefined2 *)0x152;
              if ((*(char *)0x22b0 != '\0') && (iVar16 = FUN_4375_76b1(), iVar16 != 0)) {
                halt_baddata();
              }
              if (*(int *)0x158 != 0) {
                FUN_3ab8_7689();
                return;
              }
              iStack_2 = 1;
              iStack_4 = 0x11f2;
              uStack_6 = 0x14b5;
              iVar16 = FUN_3ab8_7ce2();
              if (iVar16 == 0) {
                halt_baddata();
              }
              if (*(int *)0x158 != 0) {
                FUN_3ab8_7689();
                return;
              }
              *(undefined2 *)(unaff_BP + -0x10e) = 1;
            }
            else {
              iStack_2 = 0;
              iStack_4 = 0x11f2;
              uStack_6 = 0x14e5;
              iVar16 = FUN_3ab8_7ce2();
              if (iVar16 == 0) {
                halt_baddata();
              }
              if (*(int *)0x158 != 0) {
                FUN_3ab8_7689();
                return;
              }
              func_0x0000daa6();
              func_0x00008095();
              *(undefined2 *)(unaff_BP + -0x10e) = 0;
            }
            func_0x0000daa6();
            *(undefined2 *)0xbc0 = 1;
            func_0x0000abfa();
LAB_3ab8_6c00:
            *(undefined1 *)0xb49c = 0;
            func_0x0000daa6();
            func_0x0000abfa();
            *(undefined2 *)0xbc0 = 1;
            *(undefined1 *)0xd14 = 2;
LAB_3ab8_6c1e:
            while( true ) {
              while( true ) {
                *(undefined1 *)(unaff_BP + -0x1cc) = 0;
                if (*(char *)(unaff_BP + -0x134) == '\0') {
                  if ((((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 3)) ||
                      (*(int *)(unaff_BP + -0x1fe) == 4)) || (*(int *)(unaff_BP + -0x1fe) == 6)) {
                    *(undefined2 *)0xc20 = 1;
                    iStack_2 = 0x17e5;
                    FUN_21f2_3454();
                  }
                  FUN_21f2_2d26();
                  if (0 < *(int *)(unaff_BP + -0x1fe)) {
                    FUN_21f2_2d26();
                  }
                  FUN_21f2_2d26();
                  if (((0 < *(int *)(unaff_BP + -0x1fe)) && (*(int *)(unaff_BP + -0x1fe) != 5)) &&
                     ((*(int *)(unaff_BP + -0x1fe) != 7 && (*(char *)0xb1ea != '\x03')))) {
                    FUN_21f2_2d26();
                    FUN_21f2_2d26();
                  }
                  if (*(int *)0xce6 != 0) {
                    FUN_21f2_2d26();
                  }
                }
                else {
                  func_0x00008095();
                  *(undefined2 *)(unaff_BP + -0x1fe) = 1;
                  *(undefined2 *)0xbc0 = 1;
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                  FUN_21f2_2d26();
                }
                FUN_1def_07a4();
                *(undefined2 *)0xc1a = 1;
                if (*(int *)0xce6 != 0) {
                  *(undefined2 *)0xc1a = 0;
                }
                *(undefined2 *)0xcb8 = 1;
                iStack_2 = 0x1bb4;
                iStack_4 = 0x1986;
                uVar10 = FUN_1def_0904();
                *(undefined2 *)(unaff_BP + -0x1f0) = uVar10;
                *(undefined2 *)0xc1a = 0;
                *(undefined2 *)0xc20 = 0;
                *(undefined2 *)0xcb8 = 0;
                if (*(int *)0x158 != 0) {
                  FUN_3ab8_7689();
                  return;
                }
                if (*(int *)0xc18 == 0) break;
                *(undefined2 *)(unaff_BP + -0x10e) = 0;
                *(undefined2 *)(unaff_BP + -0x1fe) = 0;
                func_0x00008095();
                func_0x000297e6();
                func_0x00029d78();
                iStack_2 = 0x19ce;
                func_0x000299d1();
                iStack_2 = 0x19d7;
                func_0x000297e6();
                iStack_2 = 0x19dc;
                func_0x00029d78();
                uStack_8 = 0x22b2;
                uStack_a = 0x19e6;
                func_0x000299d1();
                uStack_8 = 0x22b2;
                uStack_a = 0x19eb;
                func_0x0000507a();
              }
              if ((*(int *)(unaff_BP + -0x1f0) != 1) || (*(char *)(unaff_BP + -0x134) == '\0'))
              break;
              if (*(char *)(unaff_BP + -0x134) == '\x01') {
                *(undefined1 *)0x22b3 = 2;
                *(undefined1 *)(unaff_BP + -0x134) = 2;
              }
              else {
                *(undefined1 *)0x22b3 = 1;
                *(undefined1 *)(unaff_BP + -0x134) = 1;
              }
              iStack_2 = 0x1bb4;
              iStack_4 = 0x1a46;
              FUN_1000_02b5();
              *(undefined2 *)0xc22 = 1;
            }
            if ((*(int *)(unaff_BP + -0x146) == 2) && (*(char *)(unaff_BP + -0x134) == '\x02')) {
              *(undefined2 *)0xc18 = 0;
              pcVar6 = (code *)swi(0x3f);
              uVar10 = (*pcVar6)();
              *(undefined2 *)(unaff_BP + -0x10e) = uVar10;
              goto LAB_3ab8_6c00;
            }
            if ((*(int *)(unaff_BP + -0x146) != 0) &&
               (((0xb < *(byte *)0x123 && (iVar16 = func_0x00007a6a(), iVar16 != 0)) ||
                (*(char *)(unaff_BP + -0x134) != '\0')))) {
              *(undefined2 *)0xc1e = 0;
              iVar16 = 0x11f2;
              iVar8 = func_0x00015409();
              if (iVar8 == 0) goto LAB_3ab8_6c00;
              pcVar6 = (code *)swi(0x3f);
              iVar8 = (*pcVar6)();
              if (iVar8 == 0) goto LAB_3ab8_6c00;
              uVar10 = *(undefined2 *)(unaff_BP + -0x21c);
              *(undefined2 *)(unaff_BP + -0x144) = *(undefined2 *)(unaff_BP + -0x21e);
              *(undefined2 *)(unaff_BP + -0x142) = uVar10;
              uVar10 = *(undefined2 *)(unaff_BP + -0x230);
              *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x232);
              *(undefined2 *)(unaff_BP + -0x15a) = uVar10;
              goto LAB_3ab8_5b18;
            }
            if ((*(int *)(unaff_BP + -0x1fe) == 0) && (*(int *)(unaff_BP + -0x1f0) == 1)) {
              *(undefined2 *)(unaff_BP + -0x1f0) = 2;
            }
            if (*(int *)(unaff_BP + -0x1f0) == 1) {
              iVar16 = 0x885;
              iStack_2 = 0x1b3e;
              func_0x0000dcbd();
              if (*(char *)0x15a != '\0') {
                halt_baddata();
              }
              if (*(int *)(unaff_BP + -0x26a) < 0x21) {
                halt_baddata();
              }
              if (*(char *)0xb1ea != '\0') {
                halt_baddata();
              }
              if (*(char *)0x124 == '\0') {
                halt_baddata();
              }
              *(undefined2 *)(unaff_BP + -0x10e) = 0;
              break;
            }
            if (*(int *)(unaff_BP + -0x1f0) == 2) {
              iStack_2 = 0x1b8c;
              func_0x0000dcbd();
              func_0x0000daa6();
              func_0x00008095();
              if ((((*(char *)0x15a == '\0') && (0x20 < *(int *)(unaff_BP + -0x268))) &&
                  (*(char *)0x124 != '\0')) &&
                 ((*(char *)0xb1ea == '\0' || (*(char *)0xb1ea == '\x03')))) {
                *(undefined2 *)0xc22 = 1;
                iStack_2 = 0x7a6;
                iStack_4 = 0x1be9;
                FUN_1000_02b5();
                *(undefined2 *)(unaff_BP + -0x264) = 1;
                *(undefined2 *)(unaff_BP + -0x262) = 0;
                while( true ) {
                  iVar16 = *(int *)(unaff_BP + -0x262);
                  if ((*(int *)0x14a < iVar16) ||
                     ((*(int *)0x14a <= iVar16 && (*(uint *)0x148 < *(uint *)(unaff_BP + -0x264)))))
                  break;
                  if ((*(int *)(unaff_BP + -0x228) < iVar16) ||
                     ((*(int *)(unaff_BP + -0x228) <= iVar16 &&
                      (*(uint *)(unaff_BP + -0x22a) < *(uint *)(unaff_BP + -0x264))))) {
                    uVar21 = func_0x0000013f();
                    pbVar1 = (byte *)((int)uVar21 + 0x14);
                    *pbVar1 = *pbVar1 | 2;
                  }
                  else {
                    uVar21 = func_0x0000013f();
                    pbVar1 = (byte *)((int)uVar21 + 0x14);
                    *pbVar1 = *pbVar1 & 0xfd;
                  }
                  puVar2 = (uint *)(unaff_BP + -0x264);
                  uVar11 = *puVar2;
                  *puVar2 = *puVar2 + 1;
                  *(int *)(unaff_BP + -0x262) =
                       *(int *)(unaff_BP + -0x262) + (uint)(0xfffe < uVar11);
                }
                *(undefined2 *)(unaff_BP + -0x264) = 1;
                *(undefined2 *)(unaff_BP + -0x262) = 0;
                while( true ) {
                  iVar16 = *(int *)(unaff_BP + -0x262);
                  if ((*(int *)0x14e < iVar16) ||
                     ((*(int *)0x14e <= iVar16 && (*(uint *)0x14c < *(uint *)(unaff_BP + -0x264)))))
                  break;
                  if ((*(int *)(unaff_BP + -0x162) < iVar16) ||
                     ((*(int *)(unaff_BP + -0x162) <= iVar16 &&
                      (*(uint *)(unaff_BP + -0x164) < *(uint *)(unaff_BP + -0x264))))) {
                    uVar21 = func_0x00000271();
                    pbVar1 = (byte *)((int)uVar21 + 0x1e);
                    *pbVar1 = *pbVar1 | 2;
                  }
                  else {
                    uVar21 = func_0x00000271();
                    pbVar1 = (byte *)((int)uVar21 + 0x1e);
                    *pbVar1 = *pbVar1 & 0xfd;
                  }
                  puVar2 = (uint *)(unaff_BP + -0x264);
                  uVar11 = *puVar2;
                  *puVar2 = *puVar2 + 1;
                  *(int *)(unaff_BP + -0x262) =
                       *(int *)(unaff_BP + -0x262) + (uint)(0xfffe < uVar11);
                }
                *(undefined2 *)(unaff_BP + -0x26c) = 1;
                while (*(int *)(unaff_BP + -0x26c) <= *(int *)0x150) {
                  if (*(int *)(unaff_BP + -0x10c) < *(int *)(unaff_BP + -0x26c)) {
                    uVar21 = func_0x00000398();
                    pbVar1 = (byte *)((int)uVar21 + 0x16);
                    *pbVar1 = *pbVar1 | 2;
                  }
                  else {
                    uVar21 = func_0x00000398();
                    pbVar1 = (byte *)((int)uVar21 + 0x16);
                    *pbVar1 = *pbVar1 & 0xfd;
                  }
                  *(int *)(unaff_BP + -0x26c) = *(int *)(unaff_BP + -0x26c) + 1;
                }
                *(undefined2 *)(unaff_BP + -0x26c) = 1;
                while (*(int *)(unaff_BP + -0x26c) <= *(int *)0x152) {
                  if (*(int *)(unaff_BP + -0x210) < *(int *)(unaff_BP + -0x26c)) {
                    uVar21 = func_0x000003ef();
                    pbVar1 = (byte *)((int)uVar21 + 10);
                    *pbVar1 = *pbVar1 | 2;
                  }
                  else {
                    uVar21 = func_0x000003ef();
                    pbVar1 = (byte *)((int)uVar21 + 10);
                    *pbVar1 = *pbVar1 & 0xfd;
                  }
                  *(int *)(unaff_BP + -0x26c) = *(int *)(unaff_BP + -0x26c) + 1;
                }
                *(undefined2 *)(unaff_BP + -0x10e) = 0;
                func_0x0000daa6();
                func_0x00008095();
                halt_baddata();
              }
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (*(int *)0xce6 != 0) {
              *(undefined2 *)(unaff_BP + -0x270) = 0;
              if ((((*(int *)(unaff_BP + -0x1fe) < 1) || (*(int *)(unaff_BP + -0x1fe) == 5)) ||
                  (*(int *)(unaff_BP + -0x1fe) == 7)) || (*(char *)0xb1ea == '\x03')) {
                bVar19 = *(int *)(unaff_BP + -0x1f0) == 3;
              }
              else {
                bVar19 = *(int *)(unaff_BP + -0x1f0) == 4;
              }
              if (bVar19) {
                *(undefined2 *)(unaff_BP + -0x270) = 1;
              }
              if ((*(int *)(unaff_BP + -0x270) == 1) && (*(int *)0xbc2 != 0)) {
                func_0x00008095();
                *(undefined2 *)0xbc2 = 0;
                FUN_3ab8_7689();
                return;
              }
            }
            if ((*(int *)(unaff_BP + -0x1f0) == 3) && (*(int *)(unaff_BP + -0x1fe) != 5)) {
              if (*(char *)0xb1ea == '\0') {
                func_0x000297e6();
                func_0x00029bb5();
                func_0x00029983();
                func_0x000297e6();
                func_0x00029bb5();
                func_0x00029983();
                if (*(int *)(unaff_BP + -0x1fe) != 6) goto LAB_3ab8_69b3;
                func_0x00029834();
                func_0x00029c74();
                func_0x000299b9();
                iStack_2 = 0x1e2b;
                func_0x000299d1();
                iStack_2 = 0x1e30;
                func_0x0002a11e();
                func_0x00029834();
                func_0x00029983();
                func_0x00029834();
                iStack_2 = 0x1e56;
                func_0x000299d1();
                iStack_2 = 0x1e5b;
                func_0x0002a10c();
                func_0x00029834();
                func_0x00029983();
                func_0x000297e6();
              }
              else {
                uVar10 = *(undefined2 *)(unaff_BP + -0x14e);
                *(undefined2 *)(unaff_BP + -0x144) = *(undefined2 *)(unaff_BP + -0x150);
                *(undefined2 *)(unaff_BP + -0x142) = uVar10;
                uVar10 = *(undefined2 *)(unaff_BP + -0x1d6);
                *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x1d8);
                *(undefined2 *)(unaff_BP + -0x15a) = uVar10;
                func_0x000297e6();
                func_0x00029bb5();
                func_0x00029983();
                func_0x000297e6();
              }
              func_0x00029bb5();
              func_0x00029983();
LAB_3ab8_69b3:
              uVar10 = *(undefined2 *)0x14a;
              *(undefined2 *)(unaff_BP + -0x22a) = *(undefined2 *)0x148;
              *(undefined2 *)(unaff_BP + -0x228) = uVar10;
              uVar10 = *(undefined2 *)0x14e;
              *(undefined2 *)(unaff_BP + -0x164) = *(undefined2 *)0x14c;
              *(undefined2 *)(unaff_BP + -0x162) = uVar10;
              *(undefined2 *)(unaff_BP + -0x10c) = *(undefined2 *)0x150;
              *(undefined2 *)(unaff_BP + -0x210) = *(undefined2 *)0x152;
              *(undefined2 *)(unaff_BP + -0x10e) = 0;
              func_0x0000daa6();
              func_0x0000c3ca();
              *(undefined1 *)0xb49c = 0;
              if ((((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 2)) ||
                  (*(int *)(unaff_BP + -0x1fe) == 3)) ||
                 ((*(int *)(unaff_BP + -0x1fe) == 4 || (*(int *)(unaff_BP + -0x1fe) == 6)))) {
                if ((*(int *)(unaff_BP + -0x1fe) != 3) && (*(int *)(unaff_BP + -0x1fe) != 4)) {
                  uVar10 = *(undefined2 *)0x9480;
                  uVar5 = *(undefined2 *)0x9482;
                  *(undefined2 *)(unaff_BP + -500) = uVar10;
                  *(undefined2 *)(unaff_BP + -0x1f2) = uVar5;
                  *(undefined2 *)(unaff_BP + -0x204) = uVar10;
                  *(undefined2 *)(unaff_BP + -0x202) = uVar5;
                }
                if (*(int *)(unaff_BP + -0x1e6) != 0) {
                  FUN_1def_0338();
                  if (*(int *)(unaff_BP + -0x1e6) == 1) {
                    uVar10 = *(undefined2 *)0x943e;
                    *(undefined2 *)(unaff_BP + -0x1ea) = *(undefined2 *)0x943c;
                    *(undefined2 *)(unaff_BP + -0x1e8) = uVar10;
                  }
                  if (*(int *)(unaff_BP + -0x1e6) == 2) {
                    uVar10 = *(undefined2 *)0x943e;
                    *(undefined2 *)(unaff_BP + -0x1d4) = *(undefined2 *)0x943c;
                    *(undefined2 *)(unaff_BP + -0x1d2) = uVar10;
                  }
                  uVar17 = *(uint *)(unaff_BP + -0x1e6) < 3;
                  if (*(uint *)(unaff_BP + -0x1e6) == 3) {
                    func_0x000297e6();
                    func_0x00029ae7();
                    func_0x000297e6();
                    func_0x00029ae7();
                    FUN_28b3_1181();
                    if ((bool)uVar17) {
                      uVar10 = *(undefined2 *)0x943e;
                      *(undefined2 *)(unaff_BP + -0x1ea) = *(undefined2 *)0x943c;
                      *(undefined2 *)(unaff_BP + -0x1e8) = uVar10;
                    }
                    else {
                      uVar10 = *(undefined2 *)0x943e;
                      *(undefined2 *)(unaff_BP + -0x1d4) = *(undefined2 *)0x943c;
                      *(undefined2 *)(unaff_BP + -0x1d2) = uVar10;
                    }
                  }
                  FUN_1def_0338();
                }
                func_0x000297e6();
                func_0x00029d78();
                iStack_2 = 0x22b2;
                iStack_4 = 0x1687;
                func_0x000299d1();
                iStack_2 = 0x22b2;
                iStack_4 = 0x1690;
                func_0x000297e6();
                iStack_2 = 0x22b2;
                iStack_4 = 0x1695;
                func_0x00029d78();
                uStack_a = 0x22b2;
                uStack_c = 0x169f;
                func_0x000299d1();
                uStack_a = 0x22b2;
                uStack_c = 0x16a8;
                func_0x000297e6();
                uStack_a = 0x22b2;
                uStack_c = 0x16ad;
                func_0x00029d78();
                uStack_12 = 0x22b2;
                uStack_14 = 0x16b7;
                func_0x000299d1();
                uStack_12 = 0x22b2;
                uStack_14 = 0x16c0;
                func_0x000297e6();
                uStack_12 = 0x22b2;
                uStack_14 = 0x16c5;
                func_0x00029d78();
                func_0x000299d1(0x22b2);
                func_0x000297e6(0x22b2);
                uVar10 = 0x16dd;
                func_0x00029d78(0x22b2);
                func_0x000299d1(0x22b2,iVar15,iVar9,uVar10);
                func_0x000297e6(0x22b2);
                uVar10 = 0x16f5;
                func_0x00029d78(0x22b2);
                func_0x000299d1(0x22b2,iVar23,iVar24,uVar10);
                func_0x000297e6(0x22b2);
                func_0x00029d78(0x22b2);
                func_0x000299d1(0x22b2);
                FUN_4375_b4b4(0x22b2,unaff_BP + -0x10e,*(undefined1 *)0x22b0,*(undefined1 *)0x22b1,
                              *(undefined1 *)0x22b2);
                func_0x000297e6();
                func_0x00029bb5();
                func_0x00029983();
                func_0x000297e6();
                func_0x00029bb5();
                func_0x00029983();
                func_0x0000daa6();
                *(undefined2 *)0xbc0 = 1;
                func_0x0000abfa();
                *(undefined1 *)0xd14 = 2;
              }
              goto LAB_3ab8_6c00;
            }
            if ((*(int *)(unaff_BP + -0x1f0) != -1) || (*(int *)(unaff_BP + -0x10e) == 0)) {
              if (((*(int *)(unaff_BP + -0x1fe) == 1) ||
                  (((*(int *)(unaff_BP + -0x1fe) == 3 || (*(int *)(unaff_BP + -0x1fe) == 4)) ||
                   (*(int *)(unaff_BP + -0x1fe) == 6)))) &&
                 ((*(int *)(unaff_BP + -0x146) != 0 && (iVar16 = func_0x00015409(), iVar16 != 0))))
              {
                if ((*(char *)0xb1ea == '\x01') || (*(char *)0xb1ea == '\x02')) {
                  uVar10 = *(undefined2 *)(unaff_BP + -0x14e);
                  *(undefined2 *)(unaff_BP + -0x144) = *(undefined2 *)(unaff_BP + -0x150);
                  *(undefined2 *)(unaff_BP + -0x142) = uVar10;
                  uVar10 = *(undefined2 *)(unaff_BP + -0x1d6);
                  *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x1d8);
                  *(undefined2 *)(unaff_BP + -0x15a) = uVar10;
                }
                goto code_r0x00040d08;
              }
              goto LAB_3ab8_6c1e;
            }
            iVar16 = 0x885;
            func_0x0000daa6();
            if (*(int *)(unaff_BP + -0x10e) < 0) {
              if (*(int *)(unaff_BP + -0x10e) == -1) {
                puVar2 = (uint *)0x148;
                uVar11 = *puVar2;
                *puVar2 = *puVar2 + 1;
                *(int *)0x14a = *(int *)0x14a + (uint)(0xfffe < uVar11);
                puVar22 = (undefined2 *)func_0x0000013f();
                puVar12 = (undefined2 *)puVar22;
                puVar13 = (undefined2 *)(unaff_BP + -0x2a6);
                for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
                  puVar4 = puVar13;
                  puVar13 = puVar13 + 1;
                  puVar3 = puVar12;
                  puVar12 = puVar12 + 1;
                  *puVar4 = *puVar3;
                }
                puVar12 = &uStack_c;
                puVar13 = (undefined2 *)(unaff_BP + -0x2a6);
                for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
                  puVar3 = puVar12;
                  puVar12 = puVar12 + 1;
                  puVar22 = puVar13;
                  puVar13 = puVar13 + 1;
                  *puVar3 = *puVar22;
                }
                uStack_e = 0;
                uStack_10 = 0x1f38;
                FUN_17a6_0ae3();
              }
              if (*(int *)(unaff_BP + -0x10e) == -2) {
                puVar2 = (uint *)0x14c;
                uVar11 = *puVar2;
                *puVar2 = *puVar2 + 1;
                *(int *)0x14e = *(int *)0x14e + (uint)(0xfffe < uVar11);
                puVar22 = (undefined2 *)func_0x00000271();
                puVar12 = (undefined2 *)puVar22;
                puVar13 = (undefined2 *)(unaff_BP + -0x290);
                for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
                  puVar4 = puVar13;
                  puVar13 = puVar13 + 1;
                  puVar3 = puVar12;
                  puVar12 = puVar12 + 1;
                  *puVar4 = *puVar3;
                }
                piVar14 = &iStack_16;
                puVar13 = (undefined2 *)(unaff_BP + -0x290);
                for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
                  puVar3 = piVar14;
                  piVar14 = piVar14 + 1;
                  puVar22 = puVar13;
                  puVar13 = puVar13 + 1;
                  *puVar3 = *puVar22;
                }
                func_0x00013e46(0);
              }
              *(undefined2 *)(unaff_BP + -0x10e) = 0;
              *(undefined2 *)0xbc0 = 1;
              goto LAB_3ab8_6c00;
            }
            if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
              iStack_2 = *(int *)(unaff_BP + -0x22a);
              pcVar6 = (code *)swi(0x3f);
              (*pcVar6)();
            }
            else {
              if (*(int *)(unaff_BP + -0x1fe) == 6) {
                func_0x00029834();
                func_0x00029af6();
                func_0x000299b9();
                iStack_2 = 0x1fea;
                func_0x000299d1();
                iStack_2 = 0x1fef;
                func_0x0002a11e();
                func_0x00029834();
                func_0x00029983();
                func_0x00029834();
                iStack_2 = 0x2015;
                func_0x000299d1();
                iStack_2 = 0x201a;
                func_0x0002a10c();
                func_0x00029834();
                func_0x00029983();
              }
              func_0x000297e6();
              func_0x00029af6();
              func_0x00029d78();
              iStack_2 = 0x22b2;
              iStack_4 = 0x204d;
              func_0x000299d1();
              iStack_2 = 0x22b2;
              iStack_4 = 0x2056;
              func_0x000297e6();
              iStack_2 = 0x22b2;
              iStack_4 = 0x205b;
              FUN_28b3_1c08();
              iStack_2 = 0x22b2;
              iStack_4 = 0x2060;
              FUN_28b3_1177();
              iStack_2 = 0x22b2;
              iStack_4 = 0x2065;
              func_0x00029d78();
              uStack_a = 0x22b2;
              uStack_c = 0x206f;
              func_0x000299d1();
              uStack_a = 0x22b2;
              uStack_c = 0x2078;
              func_0x000297e6();
              uStack_a = 0x22b2;
              uStack_c = 0x207d;
              FUN_28b3_1c08();
              uStack_a = 0x22b2;
              uStack_c = 0x2082;
              FUN_28b3_1177();
              uStack_a = 0x22b2;
              uStack_c = 0x2087;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0x2091;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              uStack_14 = 0x209a;
              func_0x000297e6();
              uStack_12 = 0x22b2;
              uStack_14 = 0x209f;
              func_0x00029af6();
              uStack_12 = 0x22b2;
              uStack_14 = 0x20a4;
              func_0x00029d78();
              func_0x000299d1(0x22b2);
              func_0x000297e6(0x22b2);
              func_0x00029af6(0x22b2);
              uVar10 = 0x20c1;
              func_0x00029d78(0x22b2);
              func_0x000299d1(0x22b2,iVar15,iVar9,uVar10);
              func_0x000297e6(0x22b2);
              uVar10 = 0x20d9;
              func_0x00029d78(0x22b2);
              func_0x000299d1(0x22b2,iVar23,iVar24,uVar10);
              func_0x000297e6(0x22b2);
              func_0x00029d78(0x22b2);
              iVar16 = 0x22b2;
              func_0x000299d1(0x22b2);
              FUN_4375_b4b4(0x22b2,unaff_BP + -0x10e,*(undefined1 *)0x22b0,*(undefined1 *)0x22b1,
                            *(undefined1 *)0x22b2);
              if (*(int *)(unaff_BP + -0x1fe) == 6) {
                func_0x00029834();
                func_0x00029af6();
                func_0x000299b9();
                iStack_2 = 0x213d;
                func_0x000299d1();
                iStack_2 = 0x2142;
                func_0x0002a11e();
                func_0x00029834();
                func_0x00029983();
                func_0x00029834();
                iStack_2 = 0x2168;
                func_0x000299d1();
                iStack_2 = 0x216d;
                func_0x0002a10c();
                func_0x00029834();
                iVar16 = 0x22b2;
                func_0x00029983();
              }
            }
            *(undefined2 *)(unaff_BP + -0x10e) = 0;
          } while (*(int *)(unaff_BP + -0x1fe) == 4);
        }
        else {
          iVar16 = 0x7a6;
          iVar8 = func_0x00007a6a();
          if (iVar8 == 0) goto LAB_3ab8_613c;
          pcVar6 = (code *)swi(0x3f);
          (*pcVar6)();
        }
      }
      goto LAB_3ab8_5c95;
    }
    if (*(int *)(unaff_BP + -0x1fe) == 3) goto LAB_3ab8_59bb;
    if (*(int *)(unaff_BP + -0x1fe) == 4) goto LAB_3ab8_589f;
    if (*(int *)(unaff_BP + -0x1fe) != 6) goto LAB_3ab8_576c;
LAB_3ab8_5b18:
    uVar10 = *(undefined2 *)0x9482;
    *(undefined2 *)0xb76a = *(undefined2 *)0x9480;
    *(undefined2 *)0xb76c = uVar10;
    uVar10 = *(undefined2 *)0x943c;
    uVar5 = *(undefined2 *)0x943e;
    *(undefined2 *)0xb784 = uVar10;
    *(undefined2 *)0xb786 = uVar5;
    *(undefined2 *)0xb30c = uVar10;
    *(undefined2 *)0xb30e = uVar5;
    *(undefined2 *)0xb37e = uVar10;
    *(undefined2 *)0xb380 = uVar5;
    *(undefined2 *)(unaff_BP + -0x13c) = *(undefined2 *)0x9454;
    *(undefined2 *)(unaff_BP + -0x13a) = *(undefined2 *)0x9456;
    *(undefined2 *)(unaff_BP + -0x138) = *(undefined2 *)0x9458;
    *(undefined2 *)(unaff_BP + -0x136) = *(undefined2 *)0x945a;
    *(undefined2 *)(unaff_BP + -0x108) = *(undefined2 *)0x9454;
    *(undefined2 *)(unaff_BP + -0x106) = *(undefined2 *)0x9456;
    *(undefined2 *)(unaff_BP + -0x104) = *(undefined2 *)0x9458;
    *(undefined2 *)(unaff_BP + -0x102) = *(undefined2 *)0x945a;
    uVar10 = *(undefined2 *)0x943c;
    uVar5 = *(undefined2 *)0x943e;
    *(undefined2 *)(unaff_BP + -0x24) = uVar10;
    *(undefined2 *)(unaff_BP + -0x22) = uVar5;
    *(undefined2 *)(unaff_BP + -0x20) = uVar10;
    *(undefined2 *)(unaff_BP + -0x1e) = uVar5;
    if (*(int *)(unaff_BP + -0x1fe) == 6) {
      uVar10 = *(undefined2 *)0x1076;
      *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)0x1074;
      *(undefined2 *)(unaff_BP + -0x218) = uVar10;
      pcVar6 = (code *)swi(0x3f);
      iVar15 = (*pcVar6)();
      *(int *)(unaff_BP + -0x1f0) = iVar15;
      if (*(int *)0x158 != 0) {
        FUN_3ab8_7689();
        return;
      }
      if (iVar15 == -1) {
LAB_3ab8_576c:
        do {
          if (((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 3)) ||
             ((*(int *)(unaff_BP + -0x1fe) == 4 || (*(int *)(unaff_BP + -0x1fe) == 6)))) {
LAB_3ab8_578b:
            do {
              do {
                iStack_2 = unaff_BP + -0x1cc;
                uStack_6 = 0x329;
                iStack_4 = iVar16;
                FUN_21f2_3454();
                func_0x00001d33();
                *(undefined2 *)0xc20 = 1;
                iStack_2 = 0xad;
                iVar16 = 0x1bb4;
                iStack_4 = 0x361;
                iVar15 = FUN_1def_0904();
                *(int *)(unaff_BP + -0x1f0) = iVar15;
                *(undefined2 *)0xc20 = 0;
                if (*(int *)0x158 != 0) {
                  FUN_3ab8_7689();
                  return;
                }
                if (iVar15 == -1) {
                  halt_baddata();
                }
                if (iVar15 == 1) {
                  *(undefined2 *)(unaff_BP + -0x146) = 0;
                  *(int *)(unaff_BP + -0x1e6) = *(int *)(unaff_BP + -0x1e6) + 1;
                  if (3 < *(int *)(unaff_BP + -0x1e6)) {
                    *(undefined2 *)(unaff_BP + -0x1e6) = 0;
                  }
                }
              } while (*(int *)(unaff_BP + -0x146) == 0);
              if (0xb < *(byte *)0x123) {
                iVar16 = 0x7a6;
                iVar15 = func_0x00007a6a();
                if (iVar15 != 0) {
                  pcVar6 = (code *)swi(0x3f);
                  (*pcVar6)();
                  goto LAB_3ab8_578b;
                }
              }
              iVar16 = 0x11f2;
              iVar15 = func_0x00015409();
            } while (iVar15 == 0);
            uVar10 = *(undefined2 *)(unaff_BP + -0x21c);
            *(undefined2 *)(unaff_BP + -0x144) = *(undefined2 *)(unaff_BP + -0x21e);
            *(undefined2 *)(unaff_BP + -0x142) = uVar10;
            uVar10 = *(undefined2 *)(unaff_BP + -0x230);
            *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x232);
            *(undefined2 *)(unaff_BP + -0x15a) = uVar10;
          }
          if (*(int *)(unaff_BP + -0x1fe) == 0) {
            *(undefined2 *)(unaff_BP + -0x1fe) = 1;
          }
LAB_3ab8_589f:
          if (*(int *)(unaff_BP + -0x1fe) == 4) {
            do {
              do {
                do {
                  iStack_4 = 0x443;
                  iStack_2 = iVar16;
                  FUN_21f2_3454();
                  *(undefined2 *)0xc20 = 1;
                  iStack_2 = 0x22b2;
                  iVar16 = 0x1bb4;
                  iStack_4 = 0x466;
                  iVar15 = FUN_1def_0904();
                  *(int *)(unaff_BP + -0x1f0) = iVar15;
                  *(undefined2 *)0xc20 = 0;
                  if (*(int *)0x158 != 0) {
                    FUN_3ab8_7689();
                    return;
                  }
                  if (iVar15 == -1) goto LAB_3ab8_576c;
                } while (*(int *)(unaff_BP + -0x146) == 0);
                iVar16 = 0x11f2;
                iVar15 = func_0x00015409();
                uVar17 = 0;
                uVar18 = iVar15 == 0;
              } while ((bool)uVar18);
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x0002996b();
              FUN_28b3_0ee9();
              func_0x00029834();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x0002996b();
              func_0x00029ae7();
              func_0x00029d78();
              iVar16 = 0x22b2;
              FUN_28b3_1181();
              if (!(bool)uVar17 && !(bool)uVar18) break;
              func_0x00029834();
              func_0x000297e6();
              func_0x00029ae7();
              func_0x00029d78();
              iVar16 = 0x22b2;
              FUN_28b3_1181();
            } while ((bool)uVar17 || (bool)uVar18);
          }
          uVar10 = *(undefined2 *)0x9480;
          uVar5 = *(undefined2 *)0x9482;
          *(undefined2 *)(unaff_BP + -500) = uVar10;
          *(undefined2 *)(unaff_BP + -0x1f2) = uVar5;
          *(undefined2 *)(unaff_BP + -0x204) = uVar10;
          *(undefined2 *)(unaff_BP + -0x202) = uVar5;
LAB_3ab8_59bb:
          while( true ) {
            if (*(int *)(unaff_BP + -0x1fe) != 3) goto LAB_3ab8_5b18;
            uVar10 = *(undefined2 *)0x106e;
            *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)0x106c;
            *(undefined2 *)(unaff_BP + -0x218) = uVar10;
            uVar10 = *(undefined2 *)0x1072;
            *(undefined2 *)(unaff_BP + -0x1d0) = *(undefined2 *)0x1070;
            *(undefined2 *)(unaff_BP + -0x1ce) = uVar10;
            iStack_4 = 0x57e;
            iStack_2 = iVar16;
            iVar16 = func_0x00001dd5();
            *(int *)(unaff_BP + -0x1f0) = iVar16;
            if (*(int *)0x158 != 0) {
              FUN_3ab8_7689();
              return;
            }
            uVar17 = iVar16 != -1;
            uVar18 = iVar16 == -1;
            iVar16 = 0xad;
            if ((bool)uVar18) break;
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)uVar18) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar18) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar17 || (bool)uVar18) {
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if ((bool)uVar17 || (bool)uVar18) {
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if (!(bool)uVar17) {
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_1181();
                      if (!(bool)uVar17) {
                        uVar10 = *(undefined2 *)(unaff_BP + -0x1ce);
                        *(undefined2 *)0x1070 = *(undefined2 *)(unaff_BP + -0x1d0);
                        *(undefined2 *)0x1072 = uVar10;
                        func_0x000297e6();
                        func_0x0002996b();
                        iVar16 = 0x22b2;
                        func_0x00029983();
                        uVar10 = *(undefined2 *)(unaff_BP + -0x1ce);
                        *(undefined2 *)(unaff_BP + -0x204) = *(undefined2 *)(unaff_BP + -0x1d0);
                        *(undefined2 *)(unaff_BP + -0x202) = uVar10;
                        goto LAB_3ab8_5b18;
                      }
                    }
                  }
                }
              }
            }
            func_0x00012276();
            *(undefined2 *)0xc22 = 1;
            FUN_1000_0599();
            iVar16 = 0x11f2;
            func_0x00012276();
          }
        } while( true );
      }
      func_0x000297e6();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029c2c();
      func_0x000299b9();
      func_0x000299d1();
      func_0x00029834();
      func_0x000299d1();
      func_0x00029834();
      iStack_2 = 0x7a4;
      func_0x000299d1();
      iStack_2 = 0x7a9;
      func_0x0002a11e();
      func_0x00029834();
      func_0x00029983();
      iStack_2 = 0x7d1;
      func_0x0002a10c();
      func_0x00029834();
      iVar16 = 0x22b2;
      func_0x00029983();
      uVar10 = *(undefined2 *)0x9480;
      uVar5 = *(undefined2 *)0x9482;
      *(undefined2 *)(unaff_BP + -500) = uVar10;
      *(undefined2 *)(unaff_BP + -0x1f2) = uVar5;
      *(undefined2 *)(unaff_BP + -0x204) = uVar10;
      *(undefined2 *)(unaff_BP + -0x202) = uVar5;
    }
    *(undefined2 *)(unaff_BP + -0x124) = 0;
    if ((*(int *)(unaff_BP + -0x1fe) == 3) || (*(int *)(unaff_BP + -0x1fe) == 4)) {
      *(undefined2 *)(unaff_BP + -0x124) = 1;
    }
  } while( true );
}


