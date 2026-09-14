/* 3ab8:5ced */

/* WARNING: Control flow encountered bad instruction data */

void FUN_3ab8_5ced(void)

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
  uint uVar10;
  int unaff_BP;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int *piVar13;
  int iVar14;
  undefined2 uVar15;
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
  int iStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  uint uStack_6;
  
  iVar16 = 0x3ab8;
  do {
    do {
      if (*(char *)0xb1ea == '\0') {
        bVar7 = *(byte *)0xc11;
      }
      else {
        bVar7 = *(byte *)0xc12;
      }
      *(uint *)(unaff_BP + -0x220) = (uint)bVar7;
      iVar14 = iVar16;
      if ((*(int *)0xc22 == 0) && (bVar7 == 0)) {
        uStack_6 = 2;
        iStack_8 = 0x42;
        iStack_a = 0x2204;
        iVar14 = 0xdef;
        iStack_e = 0x8a6;
        iStack_c = iVar16;
        FUN_1000_02b5();
        *(undefined2 *)0xc22 = 1;
      }
      uStack_6 = unaff_BP + -0x14;
      iStack_8 = 0x2207;
      iStack_a = unaff_BP + -0x1cc;
      iStack_e = 0x8c9;
      iStack_c = iVar14;
      FUN_21f2_3454();
      uStack_6 = 1;
      iStack_8 = 0x22b2;
      iStack_a = 0x8de;
      func_0x00001d33();
      uStack_6 = 0xad;
      uVar15 = 0x22b2;
      iStack_8 = 0x8ef;
      FUN_21f2_2d26();
      if ((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 6)) {
        uStack_6 = 0x22b2;
        iStack_8 = 0x90d;
        FUN_21f2_2d26();
        func_0x000297e6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0x927;
        func_0x000299d1();
        iStack_a = 0x222f;
        iStack_c = unaff_BP + -0x84;
        iStack_e = 0x22b2;
        uVar15 = 0x22b2;
        uStack_10 = 0x935;
        FUN_21f2_3454();
        if (*(int *)(unaff_BP + -0x1fe) == 6) {
          uStack_6 = 0x22b2;
          iStack_8 = 0x94c;
          FUN_1000_0599();
          func_0x00010526();
          uStack_6 = 2;
          iStack_8 = 0x47;
          iStack_a = unaff_BP + -0x84;
          iStack_c = 0xdef;
          uVar15 = 0xdef;
          iStack_e = 0x96d;
          FUN_1000_02b5();
          *(undefined2 *)0xc22 = 1;
        }
      }
      iStack_8 = 0x980;
      uStack_6 = uVar15;
      FUN_1000_0599();
      uStack_6 = 0x98c;
      func_0x00012276();
      func_0x00010526();
      uStack_6 = 0xdef;
      iStack_8 = 0x9a2;
      func_0x000297e6();
      uStack_6 = 0x22b2;
      iStack_8 = 0x9a7;
      func_0x00029d78();
      iStack_e = 0x22b2;
      uStack_10 = 0x9b1;
      func_0x000299d1();
      iStack_e = 0x22b2;
      uStack_10 = 0x9ba;
      func_0x000297e6();
      iStack_e = 0x22b2;
      uStack_10 = 0x9bf;
      func_0x00029d78();
      uStack_16 = 0x22b2;
      uStack_18 = 0x9c9;
      func_0x000299d1();
      uStack_16 = 0x22b2;
      uStack_18 = 0x9d2;
      func_0x000297e6();
      uStack_16 = 0x22b2;
      uStack_18 = 0x9d7;
      func_0x00029d78();
      uStack_1e = 0x22b2;
      iStack_20 = 0x9e1;
      func_0x000299d1();
      uStack_1e = *(undefined2 *)(unaff_BP + -0x1e6);
      iStack_20 = unaff_BP + -0xca;
      iVar8 = unaff_BP + -0x226;
      iVar14 = unaff_BP + -0x5c;
      iVar24 = unaff_BP + -0x21e;
      iVar23 = unaff_BP + -0x92;
      func_0x000297e6(0x22b2,unaff_BP + -0x58,iVar23,iVar24,unaff_BP + -0x232,unaff_BP + -0x146,
                      iVar14,iVar8,unaff_BP + -0x1e0,unaff_BP + -0x1e4,unaff_BP + -0x132);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      iVar16 = 0x22b2;
      func_0x000299d1(0x22b2);
      iVar9 = FUN_4375_a73f(0x22b2,0);
      *(int *)(unaff_BP + -0x1f0) = iVar9;
      if (*(int *)0x158 != 0) {
        FUN_3ab8_7689();
        return;
      }
    } while (iVar9 == 99);
    if (iVar9 == -1) {
      if (*(int *)(unaff_BP + -0x1fe) != 3) {
        if (*(int *)(unaff_BP + -0x1fe) == 4) goto LAB_3ab8_589f;
        if (*(int *)(unaff_BP + -0x1fe) != 6) goto LAB_3ab8_576c;
        goto LAB_3ab8_5b18;
      }
LAB_3ab8_59bb:
      while (*(int *)(unaff_BP + -0x1fe) == 3) {
        uVar15 = *(undefined2 *)0x106e;
        *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)0x106c;
        *(undefined2 *)(unaff_BP + -0x218) = uVar15;
        uVar15 = *(undefined2 *)0x1072;
        *(undefined2 *)(unaff_BP + -0x1d0) = *(undefined2 *)0x1070;
        *(undefined2 *)(unaff_BP + -0x1ce) = uVar15;
        uStack_6 = 0x21fb;
        iStack_8 = 3;
        iStack_a = 0x2712;
        iStack_e = 0x57e;
        iStack_c = iVar16;
        iVar16 = func_0x00001dd5();
        *(int *)(unaff_BP + -0x1f0) = iVar16;
        if (*(int *)0x158 != 0) {
          FUN_3ab8_7689();
          return;
        }
        uVar17 = iVar16 != -1;
        uVar18 = iVar16 == -1;
        iVar16 = 0xad;
        if ((bool)uVar18) goto LAB_3ab8_576c;
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
                    uVar15 = *(undefined2 *)(unaff_BP + -0x1ce);
                    *(undefined2 *)0x1070 = *(undefined2 *)(unaff_BP + -0x1d0);
                    *(undefined2 *)0x1072 = uVar15;
                    func_0x000297e6();
                    func_0x0002996b();
                    iVar16 = 0x22b2;
                    func_0x00029983();
                    uVar15 = *(undefined2 *)(unaff_BP + -0x1ce);
                    *(undefined2 *)(unaff_BP + -0x204) = *(undefined2 *)(unaff_BP + -0x1d0);
                    *(undefined2 *)(unaff_BP + -0x202) = uVar15;
                    break;
                  }
                }
              }
            }
          }
        }
        uStack_6 = 0x636;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
        uStack_6 = 0x11f2;
        iStack_8 = 0x64a;
        FUN_1000_0599();
        uStack_6 = 0xdef;
        iVar16 = 0x11f2;
        iStack_8 = 0x659;
        func_0x00012276();
      }
LAB_3ab8_5b18:
      uVar15 = *(undefined2 *)0x9482;
      *(undefined2 *)0xb76a = *(undefined2 *)0x9480;
      *(undefined2 *)0xb76c = uVar15;
      uVar15 = *(undefined2 *)0x943c;
      uVar5 = *(undefined2 *)0x943e;
      *(undefined2 *)0xb784 = uVar15;
      *(undefined2 *)0xb786 = uVar5;
      *(undefined2 *)0xb30c = uVar15;
      *(undefined2 *)0xb30e = uVar5;
      *(undefined2 *)0xb37e = uVar15;
      *(undefined2 *)0xb380 = uVar5;
      *(undefined2 *)(unaff_BP + -0x13c) = *(undefined2 *)0x9454;
      *(undefined2 *)(unaff_BP + -0x13a) = *(undefined2 *)0x9456;
      *(undefined2 *)(unaff_BP + -0x138) = *(undefined2 *)0x9458;
      *(undefined2 *)(unaff_BP + -0x136) = *(undefined2 *)0x945a;
      *(undefined2 *)(unaff_BP + -0x108) = *(undefined2 *)0x9454;
      *(undefined2 *)(unaff_BP + -0x106) = *(undefined2 *)0x9456;
      *(undefined2 *)(unaff_BP + -0x104) = *(undefined2 *)0x9458;
      *(undefined2 *)(unaff_BP + -0x102) = *(undefined2 *)0x945a;
      uVar15 = *(undefined2 *)0x943c;
      uVar5 = *(undefined2 *)0x943e;
      *(undefined2 *)(unaff_BP + -0x24) = uVar15;
      *(undefined2 *)(unaff_BP + -0x22) = uVar5;
      *(undefined2 *)(unaff_BP + -0x20) = uVar15;
      *(undefined2 *)(unaff_BP + -0x1e) = uVar5;
      if (*(int *)(unaff_BP + -0x1fe) == 6) {
        uVar15 = *(undefined2 *)0x1076;
        *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)0x1074;
        *(undefined2 *)(unaff_BP + -0x218) = uVar15;
        pcVar6 = (code *)swi(0x3f);
        iVar14 = (*pcVar6)();
        *(int *)(unaff_BP + -0x1f0) = iVar14;
        if (*(int *)0x158 != 0) {
          FUN_3ab8_7689();
          return;
        }
        if (iVar14 == -1) {
LAB_3ab8_576c:
          do {
            if ((((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 3)) ||
                (*(int *)(unaff_BP + -0x1fe) == 4)) || (*(int *)(unaff_BP + -0x1fe) == 6)) {
LAB_3ab8_578b:
              do {
                do {
                  uStack_6 = 0x5a2;
                  iStack_8 = unaff_BP + -0x14;
                  iStack_a = 0x21e0;
                  iStack_c = unaff_BP + -0x1cc;
                  uStack_10 = 0x329;
                  iStack_e = iVar16;
                  FUN_21f2_3454();
                  uStack_6 = 1;
                  iStack_8 = 0x22b2;
                  iStack_a = 0x33e;
                  func_0x00001d33();
                  uStack_6 = unaff_BP + -0x21e;
                  iStack_8 = unaff_BP + -0x1cc;
                  *(undefined2 *)0xc20 = 1;
                  iStack_a = 1;
                  iStack_c = 0xad;
                  iVar16 = 0x1bb4;
                  iStack_e = 0x361;
                  iVar14 = FUN_1def_0904();
                  *(int *)(unaff_BP + -0x1f0) = iVar14;
                  *(undefined2 *)0xc20 = 0;
                  if (*(int *)0x158 != 0) {
                    FUN_3ab8_7689();
                    return;
                  }
                  if (iVar14 == -1) {
                    halt_baddata();
                  }
                  if (iVar14 == 1) {
                    *(undefined2 *)(unaff_BP + -0x146) = 0;
                    *(int *)(unaff_BP + -0x1e6) = *(int *)(unaff_BP + -0x1e6) + 1;
                    if (3 < *(int *)(unaff_BP + -0x1e6)) {
                      *(undefined2 *)(unaff_BP + -0x1e6) = 0;
                    }
                  }
                } while (*(int *)(unaff_BP + -0x146) == 0);
                iVar14 = iVar16;
                if (0xb < *(byte *)0x123) {
                  iVar16 = 0x7a6;
                  iVar8 = func_0x00007a6a();
                  iVar14 = iVar16;
                  if (iVar8 != 0) {
                    uStack_6 = *(undefined2 *)(unaff_BP + -0x21c);
                    iStack_8 = *(undefined2 *)(unaff_BP + -0x21e);
                    iStack_a = 1;
                    pcVar6 = (code *)swi(0x3f);
                    (*pcVar6)();
                    goto LAB_3ab8_578b;
                  }
                }
                uStack_6 = *(int *)(unaff_BP + -0x146);
                iVar16 = 0x11f2;
                iStack_a = 1000;
                iStack_8 = iVar14;
                iVar14 = func_0x00015409();
              } while (iVar14 == 0);
              uVar15 = *(undefined2 *)(unaff_BP + -0x21c);
              *(undefined2 *)(unaff_BP + -0x144) = *(undefined2 *)(unaff_BP + -0x21e);
              *(undefined2 *)(unaff_BP + -0x142) = uVar15;
              uVar15 = *(undefined2 *)(unaff_BP + -0x230);
              *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x232);
              *(undefined2 *)(unaff_BP + -0x15a) = uVar15;
            }
            if (*(int *)(unaff_BP + -0x1fe) == 0) {
              *(undefined2 *)(unaff_BP + -0x1fe) = 1;
            }
LAB_3ab8_589f:
            if (*(int *)(unaff_BP + -0x1fe) != 4) goto LAB_3ab8_59a4;
            while( true ) {
              uStack_6 = 0x65e;
              iStack_8 = 0x21ec;
              iStack_a = unaff_BP + -0x1cc;
              iStack_e = 0x443;
              iStack_c = iVar16;
              FUN_21f2_3454();
              uStack_6 = unaff_BP + -0x21e;
              iStack_8 = unaff_BP + -0x1cc;
              *(undefined2 *)0xc20 = 1;
              iStack_a = 1;
              iStack_c = 0x22b2;
              iVar16 = 0x1bb4;
              iStack_e = 0x466;
              iVar14 = FUN_1def_0904();
              *(int *)(unaff_BP + -0x1f0) = iVar14;
              *(undefined2 *)0xc20 = 0;
              if (*(int *)0x158 != 0) {
                FUN_3ab8_7689();
                return;
              }
              if (iVar14 == -1) break;
              if (*(int *)(unaff_BP + -0x146) != 0) {
                uStack_6 = *(int *)(unaff_BP + -0x146);
                iStack_8 = 0x1bb4;
                iVar16 = 0x11f2;
                iStack_a = 0x49f;
                iVar14 = func_0x00015409();
                uVar17 = 0;
                uVar18 = iVar14 == 0;
                if (!(bool)uVar18) {
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
                  if (!(bool)uVar17 && !(bool)uVar18) goto LAB_3ab8_59a4;
                  func_0x00029834();
                  func_0x000297e6();
                  func_0x00029ae7();
                  func_0x00029d78();
                  iVar16 = 0x22b2;
                  FUN_28b3_1181();
                  if (!(bool)uVar17 && !(bool)uVar18) goto LAB_3ab8_59a4;
                }
              }
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
        iStack_a = 0x22b2;
        iStack_c = 0x7a4;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0x7a9;
        func_0x0002a11e();
        func_0x00029834();
        func_0x00029983();
        uStack_6 = *(int *)(unaff_BP + -0x13a);
        iStack_8 = *(int *)(unaff_BP + -0x13c);
        iStack_a = 0x22b2;
        iStack_c = 0x7d1;
        func_0x0002a10c();
        func_0x00029834();
        iVar16 = 0x22b2;
        func_0x00029983();
        uVar15 = *(undefined2 *)0x9480;
        uVar5 = *(undefined2 *)0x9482;
        *(undefined2 *)(unaff_BP + -500) = uVar15;
        *(undefined2 *)(unaff_BP + -0x1f2) = uVar5;
        *(undefined2 *)(unaff_BP + -0x204) = uVar15;
        *(undefined2 *)(unaff_BP + -0x202) = uVar5;
      }
      *(undefined2 *)(unaff_BP + -0x124) = 0;
      if ((*(int *)(unaff_BP + -0x1fe) == 3) || (*(int *)(unaff_BP + -0x1fe) == 4)) {
        *(undefined2 *)(unaff_BP + -0x124) = 1;
      }
    }
    else {
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
        uStack_6 = unaff_BP + -0x126;
        iStack_8 = unaff_BP + -0x2a;
        iStack_a = 0x22b2;
        iVar16 = 0x885;
        iStack_c = 0xaf8;
        func_0x0000dcbd();
        uVar10 = (int)*(uint *)0xc1c >> 0xf;
        if ((((int)(((*(uint *)0xc1c ^ uVar10) - uVar10) + *(int *)0xa5e) <
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
        uVar15 = *(undefined2 *)0x1076;
        *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)0x1074;
        *(undefined2 *)(unaff_BP + -0x218) = uVar15;
        pcVar6 = (code *)swi(0x3f);
        iVar14 = (*pcVar6)();
        *(int *)(unaff_BP + -0x1f0) = iVar14;
        if (*(int *)0x158 != 0) {
          FUN_3ab8_7689();
          return;
        }
        if (iVar14 != -1) {
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
          iStack_a = 0x22b2;
          iStack_c = 0xc3a;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0xc3f;
          func_0x0002a11e();
          func_0x00029834();
          func_0x00029983();
          uStack_6 = *(int *)(unaff_BP + -0x13a);
          iStack_8 = *(int *)(unaff_BP + -0x13c);
          iStack_a = 0x22b2;
          iStack_c = 0xc67;
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
        if (0xb < *(byte *)0x123) {
          iVar16 = 0x7a6;
          iVar9 = func_0x00007a6a();
          if (iVar9 != 0) {
            uStack_6 = *(int *)(unaff_BP + -0x21c);
            iStack_8 = *(int *)(unaff_BP + -0x21e);
            iStack_a = 1;
            pcVar6 = (code *)swi(0x3f);
            (*pcVar6)();
            goto LAB_3ab8_5c95;
          }
        }
        if ((*(char *)0x4a != '\0') && (*(int *)(unaff_BP + -0x146) != 2)) {
          uStack_6 = *(undefined2 *)(unaff_BP + -0x15a);
          iStack_8 = *(undefined2 *)(unaff_BP + -0x15c);
          iStack_a = *(undefined2 *)(unaff_BP + -0x142);
          iStack_c = *(int *)(unaff_BP + -0x144);
          uStack_10 = 0xce8;
          iStack_e = iVar16;
          FUN_4375_bf01();
        }
        uStack_6 = *(int *)(unaff_BP + -0x146);
        iStack_a = 0xcfe;
        iStack_8 = iVar16;
        iVar16 = func_0x00015409();
        if (iVar16 == 0) {
          FUN_3ab8_629f();
          return;
        }
code_r0x00040d08:
        iVar16 = 0x11f2;
        if ((((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 3)) ||
            (*(int *)(unaff_BP + -0x1fe) == 4)) || (*(int *)(unaff_BP + -0x1fe) == 6)) {
          uVar15 = *(undefined2 *)(unaff_BP + -0x230);
          *(undefined2 *)(unaff_BP + -0x1d8) = *(undefined2 *)(unaff_BP + -0x232);
          *(undefined2 *)(unaff_BP + -0x1d6) = uVar15;
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
          uVar15 = *(undefined2 *)(unaff_BP + -0x230);
          *(undefined2 *)(unaff_BP + -0x158) = *(undefined2 *)(unaff_BP + -0x232);
          *(undefined2 *)(unaff_BP + -0x156) = uVar15;
        }
        while (*(int *)(unaff_BP + -0x1fe) == 2) {
          uVar15 = *(undefined2 *)0x1066;
          *(undefined2 *)(unaff_BP + -0x21a) = *(undefined2 *)0x1064;
          *(undefined2 *)(unaff_BP + -0x218) = uVar15;
          uVar15 = *(undefined2 *)0x106a;
          *(undefined2 *)(unaff_BP + -0x1d0) = *(undefined2 *)0x1068;
          *(undefined2 *)(unaff_BP + -0x1ce) = uVar15;
          uStack_6 = 0x2236;
          iStack_8 = 2;
          iStack_a = 2;
          iStack_e = 0xe0e;
          iStack_c = iVar16;
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
              uVar15 = *(undefined2 *)(unaff_BP + -0x218);
              *(undefined2 *)0x1064 = *(undefined2 *)(unaff_BP + -0x21a);
              *(undefined2 *)0x1066 = uVar15;
              uVar15 = *(undefined2 *)(unaff_BP + -0x1ce);
              *(undefined2 *)0x1068 = *(undefined2 *)(unaff_BP + -0x1d0);
              *(undefined2 *)0x106a = uVar15;
              func_0x000297e6();
              func_0x00029b6d();
              func_0x0002996b();
              func_0x00029b9d();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029b85();
              func_0x00029983();
              *(undefined2 *)(unaff_BP + -0x1e6) = 0;
              uStack_6 = 0;
              iStack_8 = 0x22b2;
              iStack_a = 0xf1d;
              FUN_1def_0338();
              uVar15 = *(undefined2 *)(unaff_BP + -0x1e8);
              *(undefined2 *)(unaff_BP + -0x208) = *(undefined2 *)(unaff_BP + -0x1ea);
              *(undefined2 *)(unaff_BP + -0x206) = uVar15;
              uVar15 = *(undefined2 *)0x943c;
              uVar5 = *(undefined2 *)0x943e;
              *(undefined2 *)(unaff_BP + -0x144) = uVar15;
              *(undefined2 *)(unaff_BP + -0x142) = uVar5;
              *(undefined2 *)(unaff_BP + -0x15c) = uVar15;
              *(undefined2 *)(unaff_BP + -0x15a) = uVar5;
              func_0x000297e6();
              func_0x0002996b();
              iVar16 = 0x22b2;
              func_0x00029983();
              uVar15 = *(undefined2 *)(unaff_BP + -0x1e8);
              *(undefined2 *)(unaff_BP + -0x1d8) = *(undefined2 *)(unaff_BP + -0x1ea);
              *(undefined2 *)(unaff_BP + -0x1d6) = uVar15;
              uVar15 = *(undefined2 *)0x9480;
              uVar5 = *(undefined2 *)0x9482;
              *(undefined2 *)(unaff_BP + -500) = uVar15;
              *(undefined2 *)(unaff_BP + -0x1f2) = uVar5;
              *(undefined2 *)(unaff_BP + -0x204) = uVar15;
              *(undefined2 *)(unaff_BP + -0x202) = uVar5;
              break;
            }
          }
          uStack_6 = 0xe79;
          func_0x00012276();
          *(undefined2 *)0xc22 = 1;
          uStack_6 = 0x11f2;
          iStack_8 = 0xe8d;
          FUN_1000_0599();
          uStack_6 = 0xdef;
          iVar16 = 0x11f2;
          iStack_8 = 0xe9c;
          func_0x00012276();
        }
        do {
          if (*(int *)(unaff_BP + -0x1fe) == 4) {
            uVar15 = *(undefined2 *)(unaff_BP + -0x1d2);
            *(undefined2 *)(unaff_BP + -0x270) = *(undefined2 *)(unaff_BP + -0x1d4);
            *(undefined2 *)(unaff_BP + -0x26e) = uVar15;
            uVar15 = *(undefined2 *)(unaff_BP + -0x1e8);
            *(undefined2 *)(unaff_BP + -0x264) = *(undefined2 *)(unaff_BP + -0x1ea);
            *(undefined2 *)(unaff_BP + -0x262) = uVar15;
            if (*(int *)(unaff_BP + -0x1e6) != 0) {
              uStack_6 = 1;
              iVar14 = 0x1bb4;
              iStack_a = 0xfd0;
              iStack_8 = iVar16;
              FUN_1def_0338();
              if (*(int *)(unaff_BP + -0x1e6) == 1) {
                uVar15 = *(undefined2 *)0x943e;
                *(undefined2 *)(unaff_BP + -0x264) = *(undefined2 *)0x943c;
                *(undefined2 *)(unaff_BP + -0x262) = uVar15;
              }
              if (*(int *)(unaff_BP + -0x1e6) == 2) {
                uVar15 = *(undefined2 *)0x943e;
                *(undefined2 *)(unaff_BP + -0x270) = *(undefined2 *)0x943c;
                *(undefined2 *)(unaff_BP + -0x26e) = uVar15;
              }
              uVar17 = *(uint *)(unaff_BP + -0x1e6) < 3;
              if (*(uint *)(unaff_BP + -0x1e6) == 3) {
                func_0x000297e6();
                func_0x00029ae7();
                func_0x000297e6();
                func_0x00029ae7();
                iVar14 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar17) {
                  uVar15 = *(undefined2 *)0x943e;
                  *(undefined2 *)(unaff_BP + -0x264) = *(undefined2 *)0x943c;
                  *(undefined2 *)(unaff_BP + -0x262) = uVar15;
                }
                else {
                  uVar15 = *(undefined2 *)0x943e;
                  *(undefined2 *)(unaff_BP + -0x270) = *(undefined2 *)0x943c;
                  *(undefined2 *)(unaff_BP + -0x26e) = uVar15;
                }
              }
              uStack_6 = 0;
              iStack_a = 0x105b;
              iStack_8 = iVar14;
              FUN_1def_0338();
            }
            func_0x000297e6();
            uStack_6 = 0x1071;
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            uStack_6 = 0x108a;
            func_0x00029bb5();
            iVar16 = 0x22b2;
            func_0x00029983();
            do {
              do {
                do {
                  uStack_6 = 0x65e;
                  iStack_8 = unaff_BP + -0x14;
                  iStack_a = 0x223f;
                  iStack_c = unaff_BP + -0x1cc;
                  uStack_10 = 0x10ae;
                  iStack_e = iVar16;
                  FUN_21f2_3454();
                  uStack_6 = 0x22b2;
                  iStack_8 = 0x10bb;
                  FUN_1000_0599();
                  uStack_6 = 0x10c7;
                  func_0x00012276();
                  func_0x00010526();
                  func_0x000297e6();
                  func_0x0002996b();
                  func_0x00029983();
                  uVar15 = *(undefined2 *)(unaff_BP + -0x264);
                  uVar5 = *(undefined2 *)(unaff_BP + -0x262);
                  *(undefined2 *)(unaff_BP + -0x232) = uVar15;
                  *(undefined2 *)(unaff_BP + -0x230) = uVar5;
                  *(undefined2 *)(unaff_BP + -0x1d8) = uVar15;
                  *(undefined2 *)(unaff_BP + -0x1d6) = uVar5;
                  uStack_6 = 0x22b2;
                  iStack_8 = 0x1110;
                  func_0x000297e6();
                  uStack_6 = 0x22b2;
                  iStack_8 = 0x1115;
                  func_0x00029d78();
                  iStack_e = 0x22b2;
                  uStack_10 = 0x111f;
                  func_0x000299d1();
                  iStack_e = 0x22b2;
                  uStack_10 = 0x1128;
                  func_0x000297e6();
                  iStack_e = 0x22b2;
                  uStack_10 = 0x112d;
                  func_0x00029d78();
                  uStack_16 = 0x22b2;
                  uStack_18 = 0x1137;
                  func_0x000299d1();
                  uStack_16 = 0x22b2;
                  uStack_18 = 0x1140;
                  func_0x000297e6();
                  uStack_16 = 0x22b2;
                  uStack_18 = 0x1145;
                  func_0x00029d78();
                  uStack_1e = 0x22b2;
                  iStack_20 = 0x114f;
                  func_0x000299d1();
                  uStack_1e = *(undefined2 *)(unaff_BP + -0x1e6);
                  iStack_20 = unaff_BP + -0xca;
                  iVar14 = unaff_BP + -0x5c;
                  iVar24 = unaff_BP + -0x146;
                  iVar23 = unaff_BP + -0x92;
                  iVar9 = unaff_BP + -0x58;
                  func_0x000297e6(0x22b2,iVar9,iVar23,unaff_BP + -0x21e,unaff_BP + -0x232,iVar24,
                                  iVar14,unaff_BP + -0x226,unaff_BP + -0x1e0,unaff_BP + -0x1e4,
                                  unaff_BP + -0x132);
                  func_0x00029d78(0x22b2);
                  func_0x000299d1(0x22b2);
                  func_0x000297e6(0x22b2);
                  func_0x00029d78(0x22b2);
                  iVar16 = 0x22b2;
                  func_0x000299d1(0x22b2);
                  iVar8 = FUN_4375_a73f(0x22b2,2);
                  *(int *)(unaff_BP + -0x1f0) = iVar8;
                  if (*(int *)0x158 != 0) {
                    FUN_3ab8_7689();
                    return;
                  }
                } while (iVar8 == 99);
                if (iVar8 == -1) goto LAB_3ab8_5c95;
              } while ((*(int *)(unaff_BP + -0x146) == 0) ||
                      (*(int *)(unaff_BP + -0x92) <= *(int *)0xa5e));
              if ((*(char *)0x4a != '\0') && (*(int *)(unaff_BP + -0x146) != 2)) {
                uStack_6 = *(undefined2 *)(unaff_BP + -0x15a);
                iStack_8 = *(undefined2 *)(unaff_BP + -0x15c);
                iStack_a = *(undefined2 *)(unaff_BP + -0x142);
                iStack_c = *(int *)(unaff_BP + -0x144);
                iStack_e = 0x22b2;
                uStack_10 = 0x1223;
                FUN_4375_bf01();
              }
              uStack_6 = *(undefined2 *)(unaff_BP + -0x146);
              iStack_8 = 0x22b2;
              iVar16 = 0x11f2;
              iStack_a = 0x1239;
              iVar8 = func_0x00015409();
            } while (iVar8 == 0);
            uStack_6 = 0x11f2;
            iStack_8 = 0x1256;
            func_0x000297e6();
            uStack_6 = 0x22b2;
            iStack_8 = 0x125b;
            func_0x00029d78();
            iStack_e = 0x22b2;
            uStack_10 = 0x1265;
            func_0x000299d1();
            iStack_e = 0x22b2;
            uStack_10 = 0x126e;
            func_0x000297e6();
            iStack_e = 0x22b2;
            uStack_10 = 0x1273;
            func_0x00029d78();
            uStack_16 = 0x22b2;
            uStack_18 = 0x127d;
            func_0x000299d1();
            uStack_16 = 0x22b2;
            uStack_18 = 0x1286;
            func_0x000297e6();
            uStack_16 = 0x22b2;
            uStack_18 = 0x128b;
            func_0x00029d78();
            uStack_1e = 0x22b2;
            iStack_20 = 0x1295;
            func_0x000299d1();
            uStack_1e = 0x22b2;
            iStack_20 = 0x129e;
            func_0x000297e6();
            uStack_1e = 0x22b2;
            iStack_20 = 0x12a3;
            func_0x00029d78();
            func_0x000299d1(0x22b2);
            func_0x000297e6(0x22b2);
            iVar8 = 0x12bb;
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2,iVar24,iVar14,iVar8);
            func_0x000297e6(0x22b2);
            iVar24 = 0x12d3;
            func_0x00029d78(0x22b2);
            iVar16 = 0x22b2;
            func_0x000299d1(0x22b2,iVar9,iVar23,iVar24);
            FUN_4375_a5de(0x22b2);
            uVar15 = *(undefined2 *)(unaff_BP + -0x1f2);
            *(undefined2 *)0x106c = *(undefined2 *)(unaff_BP + -500);
            *(undefined2 *)0x106e = uVar15;
            uVar15 = *(undefined2 *)(unaff_BP + -0x202);
            *(undefined2 *)0x1070 = *(undefined2 *)(unaff_BP + -0x204);
            *(undefined2 *)0x1072 = uVar15;
          }
          *(undefined1 *)0xb49c = 0;
          if (*(char *)0xb1ea == '\0') {
            if ((*(char *)0x22b0 != '\0') && (iVar9 = FUN_4375_76b1(), iVar9 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (*(int *)0x158 != 0) {
              FUN_3ab8_7689();
              return;
            }
          }
          *(undefined2 *)(unaff_BP + -0x10e) = 0;
          uVar15 = *(undefined2 *)0x14a;
          *(undefined2 *)(unaff_BP + -0x22a) = *(undefined2 *)0x148;
          *(undefined2 *)(unaff_BP + -0x228) = uVar15;
          uVar15 = *(undefined2 *)0x14e;
          *(undefined2 *)(unaff_BP + -0x164) = *(undefined2 *)0x14c;
          *(undefined2 *)(unaff_BP + -0x162) = uVar15;
          *(undefined2 *)(unaff_BP + -0x10c) = *(undefined2 *)0x150;
          *(undefined2 *)(unaff_BP + -0x210) = *(undefined2 *)0x152;
          while( true ) {
            while( true ) {
              if (*(int *)(unaff_BP + -0x1fe) != 5) {
                if (*(int *)0x158 == 0) goto LAB_3ab8_69b3;
                FUN_3ab8_7689();
                return;
              }
              uStack_6 = unaff_BP + -0x1cc;
              iStack_a = 0x1378;
              iStack_8 = iVar16;
              FUN_21f2_3454();
              uStack_6 = unaff_BP + -0x21e;
              iStack_8 = unaff_BP + -0x1cc;
              iStack_a = 1;
              iStack_c = 0x22b2;
              iStack_e = 0x1398;
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
              iStack_a = 0x22b2;
              iStack_c = 0x13ce;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0x13d7;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0x13dc;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0x13e6;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              iVar16 = 0x11f2;
              uStack_14 = 0x13eb;
              lVar20 = FUN_13bf_39a0();
              *(uint *)(unaff_BP + -0x14c) = (uint)lVar20;
              *(undefined2 *)(unaff_BP + -0x14a) = (int)((ulong)lVar20 >> 0x10);
              if (lVar20 != 0) break;
              *(undefined1 *)0xb8c = 0;
            }
            *(undefined1 *)0xb8c = 0;
            if (-1 < *(int *)(unaff_BP + -0x14a)) break;
            uStack_6 = 0x1417;
            func_0x00012276();
            *(undefined2 *)0xc22 = 1;
            uStack_6 = 0x11f2;
            iStack_8 = 0x142b;
            FUN_1000_0599();
            iVar16 = 0x11f2;
            uStack_6 = 0x1436;
            func_0x00012276();
          }
          if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
            *(undefined2 *)(unaff_BP + -0x10e) = 0;
            uVar15 = *(undefined2 *)0x14a;
            *(undefined2 *)(unaff_BP + -0x22a) = *(undefined2 *)0x148;
            *(undefined2 *)(unaff_BP + -0x228) = uVar15;
            uVar15 = *(undefined2 *)0x14e;
            *(undefined2 *)(unaff_BP + -0x164) = *(undefined2 *)0x14c;
            *(undefined2 *)(unaff_BP + -0x162) = uVar15;
            *(undefined2 *)(unaff_BP + -0x10c) = *(undefined2 *)0x150;
            uVar15 = *(undefined2 *)0x152;
            *(undefined2 *)(unaff_BP + -0x210) = uVar15;
            if (*(char *)0x22b0 != '\0') {
              iVar16 = FUN_4375_76b1();
              uVar15 = 0;
              if (iVar16 != 0) {
                halt_baddata();
              }
            }
            if (*(int *)0x158 != 0) {
              FUN_3ab8_7689();
              return;
            }
            uStack_6 = CONCAT11((char)((uint)uVar15 >> 8),*(undefined1 *)0x22b0);
            iStack_8 = *(int *)(unaff_BP + -0x14a);
            iStack_a = *(int *)(unaff_BP + -0x14c);
            iStack_c = 1;
            iStack_e = 0x11f2;
            uStack_10 = 0x14b5;
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
            uStack_6 = (uint)lVar20 & 0xff00;
            iStack_8 = *(int *)(unaff_BP + -0x14a);
            iStack_a = *(int *)(unaff_BP + -0x14c);
            iStack_c = 0;
            iStack_e = 0x11f2;
            uStack_10 = 0x14e5;
            iVar16 = FUN_3ab8_7ce2();
            if (iVar16 == 0) {
              halt_baddata();
            }
            if (*(int *)0x158 != 0) {
              FUN_3ab8_7689();
              return;
            }
            uStack_6 = 0x1501;
            func_0x0000daa6();
            uStack_6 = 0x150b;
            func_0x00008095();
            *(undefined2 *)(unaff_BP + -0x10e) = 0;
          }
          uStack_6 = 0x151a;
          func_0x0000daa6();
          *(undefined2 *)0xbc0 = 1;
          func_0x0000abfa();
LAB_3ab8_6c00:
          *(undefined1 *)0xb49c = 0;
          uStack_6 = 0x178d;
          func_0x0000daa6();
          func_0x0000abfa();
          *(undefined2 *)0xbc0 = 1;
          *(undefined1 *)0xd14 = 2;
          iVar9 = 0x885;
LAB_3ab8_6c1e:
          while( true ) {
            while( true ) {
              *(undefined1 *)(unaff_BP + -0x1cc) = 0;
              if (*(char *)(unaff_BP + -0x134) == '\0') {
                if ((((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 3)) ||
                    (*(int *)(unaff_BP + -0x1fe) == 4)) ||
                   (iVar16 = iVar9, *(int *)(unaff_BP + -0x1fe) == 6)) {
                  *(undefined2 *)0xc20 = 1;
                  uStack_6 = 0x2258;
                  iStack_8 = unaff_BP + -0x1cc;
                  iVar16 = 0x22b2;
                  iStack_c = 0x17e5;
                  iStack_a = iVar9;
                  FUN_21f2_3454();
                }
                iStack_8 = 0x17f6;
                uStack_6 = iVar16;
                FUN_21f2_2d26();
                if (0 < *(int *)(unaff_BP + -0x1fe)) {
                  uStack_6 = 0x22b2;
                  iStack_8 = 0x180d;
                  FUN_21f2_2d26();
                }
                uStack_6 = 0x22b2;
                iStack_8 = 0x181d;
                FUN_21f2_2d26();
                if (((0 < *(int *)(unaff_BP + -0x1fe)) && (*(int *)(unaff_BP + -0x1fe) != 5)) &&
                   ((*(int *)(unaff_BP + -0x1fe) != 7 && (*(char *)0xb1ea != '\x03')))) {
                  uStack_6 = 0x22b2;
                  iStack_8 = 0x1849;
                  FUN_21f2_2d26();
                  uStack_6 = 0x22b2;
                  iStack_8 = 0x1859;
                  FUN_21f2_2d26();
                }
                if (*(int *)0xce6 != 0) {
                  uStack_6 = 0x22b2;
                  iStack_8 = 0x1870;
                  FUN_21f2_2d26();
                }
              }
              else {
                uStack_6 = 0x1885;
                func_0x00008095();
                *(undefined2 *)(unaff_BP + -0x1fe) = 1;
                *(undefined2 *)0xbc0 = 1;
                uStack_6 = 0x7a6;
                iStack_8 = 0x189e;
                FUN_21f2_2d26();
                uStack_6 = 0x22b2;
                iStack_8 = 0x18ae;
                FUN_21f2_2d26();
                uStack_6 = 0x22b2;
                iStack_8 = 0x18be;
                FUN_21f2_2d26();
                uStack_6 = 0x22b2;
                iStack_8 = 0x18ce;
                FUN_21f2_2d26();
                uStack_6 = 0x22b2;
                iStack_8 = 0x18de;
                FUN_21f2_2d26();
                uStack_6 = 0x22b2;
                iStack_8 = 0x18ee;
                FUN_21f2_2d26();
                uStack_6 = 0x22b2;
                iStack_8 = 0x18fe;
                FUN_21f2_2d26();
                uStack_6 = 0x22b2;
                iStack_8 = 0x190e;
                FUN_21f2_2d26();
                uStack_6 = 0x22b2;
                iStack_8 = 0x191e;
                FUN_21f2_2d26();
                uStack_6 = 0x22b2;
                iStack_8 = 0x192e;
                FUN_21f2_2d26();
                uStack_6 = 0x22b2;
                iStack_8 = 0x193e;
                FUN_21f2_2d26();
              }
              uStack_6 = 0x22b2;
              iStack_8 = 0x194e;
              FUN_1def_07a4();
              *(undefined2 *)0xc1a = 1;
              if (*(int *)0xce6 != 0) {
                *(undefined2 *)0xc1a = 0;
              }
              *(undefined2 *)0xcb8 = 1;
              uStack_6 = unaff_BP + -0x21e;
              iStack_8 = unaff_BP + -0x1cc;
              iStack_a = *(int *)(unaff_BP + -0x10e);
              iStack_c = 0x1bb4;
              iVar9 = 0x1bb4;
              iStack_e = 0x1986;
              uVar15 = FUN_1def_0904();
              *(undefined2 *)(unaff_BP + -0x1f0) = uVar15;
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
              uStack_6 = 0x19b5;
              func_0x00008095();
              func_0x000297e6();
              func_0x00029d78();
              iStack_a = 0x22b2;
              iStack_c = 0x19ce;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0x19d7;
              func_0x000297e6();
              iStack_a = 0x22b2;
              iStack_c = 0x19dc;
              func_0x00029d78();
              uStack_12 = 0x22b2;
              uStack_14 = 0x19e6;
              func_0x000299d1();
              uStack_12 = 0x22b2;
              uStack_14 = 0x19eb;
              func_0x0000507a();
              iVar9 = 0x3bf;
            }
            if ((*(int *)(unaff_BP + -0x1f0) != 1) || (*(char *)(unaff_BP + -0x134) == '\0')) break;
            if (*(char *)(unaff_BP + -0x134) == '\x01') {
              *(undefined1 *)0x22b3 = 2;
              *(undefined1 *)(unaff_BP + -0x134) = 2;
              iStack_8 = 0x3e;
              iStack_a = 0xf46;
            }
            else {
              *(undefined1 *)0x22b3 = 1;
              *(undefined1 *)(unaff_BP + -0x134) = 1;
              iStack_8 = 0x3a;
              iStack_a = 0x228f;
            }
            uStack_6 = 2;
            iStack_c = 0x1bb4;
            iStack_e = 0x1a46;
            FUN_1000_02b5();
            *(undefined2 *)0xc22 = 1;
            iVar9 = 0xdef;
          }
          if ((*(int *)(unaff_BP + -0x146) == 2) && (*(char *)(unaff_BP + -0x134) == '\x02')) {
            *(undefined2 *)0xc18 = 0;
            uStack_6 = *(undefined2 *)(unaff_BP + -0x21c);
            iStack_8 = *(int *)(unaff_BP + -0x21e);
            iStack_a = 2;
            pcVar6 = (code *)swi(0x3f);
            uVar15 = (*pcVar6)();
            *(undefined2 *)(unaff_BP + -0x10e) = uVar15;
            goto LAB_3ab8_6c00;
          }
          if (*(int *)(unaff_BP + -0x146) != 0) {
            if (*(byte *)0x123 < 0xc) {
LAB_3ab8_6f1c:
              if (*(char *)(unaff_BP + -0x134) == '\0') goto LAB_3ab8_6f8b;
            }
            else {
              iVar9 = 0x7a6;
              iVar16 = func_0x00007a6a();
              if (iVar16 == 0) goto LAB_3ab8_6f1c;
            }
            *(undefined2 *)0xc1e = 0;
            uStack_6 = *(undefined2 *)(unaff_BP + -0x146);
            iVar16 = 0x11f2;
            iStack_a = 0x1abc;
            iStack_8 = iVar9;
            iVar9 = func_0x00015409();
            if (iVar9 != 0) {
              uStack_6 = *(int *)(unaff_BP + -0x21c);
              iStack_8 = *(int *)(unaff_BP + -0x21e);
              iStack_a = 0;
              pcVar6 = (code *)swi(0x3f);
              iVar9 = (*pcVar6)();
              if (iVar9 != 0) {
                uVar15 = *(undefined2 *)(unaff_BP + -0x21c);
                *(undefined2 *)(unaff_BP + -0x144) = *(undefined2 *)(unaff_BP + -0x21e);
                *(undefined2 *)(unaff_BP + -0x142) = uVar15;
                uVar15 = *(undefined2 *)(unaff_BP + -0x230);
                *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x232);
                *(undefined2 *)(unaff_BP + -0x15a) = uVar15;
                goto LAB_3ab8_5b18;
              }
            }
            goto LAB_3ab8_6c00;
          }
LAB_3ab8_6f8b:
          if ((*(int *)(unaff_BP + -0x1fe) == 0) && (*(int *)(unaff_BP + -0x1f0) == 1)) {
            *(undefined2 *)(unaff_BP + -0x1f0) = 2;
          }
          if (*(int *)(unaff_BP + -0x1f0) == 1) {
            uStack_6 = unaff_BP + -0x268;
            iStack_8 = unaff_BP + -0x270;
            iVar16 = 0x885;
            iStack_c = 0x1b3e;
            iStack_a = iVar9;
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
            uStack_6 = unaff_BP + -0x266;
            iStack_8 = unaff_BP + -0x270;
            iStack_c = 0x1b8c;
            iStack_a = iVar9;
            func_0x0000dcbd();
            uStack_6 = 0x1b97;
            func_0x0000daa6();
            uStack_6 = 0x1ba0;
            func_0x00008095();
            if ((((*(char *)0x15a == '\0') && (0x20 < *(int *)(unaff_BP + -0x268))) &&
                (*(char *)0x124 != '\0')) &&
               ((*(char *)0xb1ea == '\0' || (*(char *)0xb1ea == '\x03')))) {
              *(undefined2 *)0xc22 = 1;
              uStack_6 = 2;
              iStack_8 = 0x14;
              iStack_a = 0x229d;
              iStack_c = 0x7a6;
              uVar15 = 0xdef;
              iStack_e = 0x1be9;
              FUN_1000_02b5();
              *(undefined2 *)(unaff_BP + -0x264) = 1;
              *(undefined2 *)(unaff_BP + -0x262) = 0;
              while( true ) {
                iVar16 = *(int *)(unaff_BP + -0x262);
                if ((*(int *)0x14a < iVar16) ||
                   ((*(int *)0x14a <= iVar16 && (*(uint *)0x148 < *(uint *)(unaff_BP + -0x264)))))
                break;
                uStack_6 = uVar15;
                if ((*(int *)(unaff_BP + -0x228) < iVar16) ||
                   ((*(int *)(unaff_BP + -0x228) <= iVar16 &&
                    (*(uint *)(unaff_BP + -0x22a) < *(uint *)(unaff_BP + -0x264))))) {
                  iStack_8 = 0x1c07;
                  uVar21 = func_0x0000013f();
                  pbVar1 = (byte *)((int)uVar21 + 0x14);
                  *pbVar1 = *pbVar1 | 2;
                }
                else {
                  iStack_8 = 0x1c47;
                  uVar21 = func_0x0000013f();
                  pbVar1 = (byte *)((int)uVar21 + 0x14);
                  *pbVar1 = *pbVar1 & 0xfd;
                }
                uVar15 = 0;
                puVar2 = (uint *)(unaff_BP + -0x264);
                uVar10 = *puVar2;
                *puVar2 = *puVar2 + 1;
                *(int *)(unaff_BP + -0x262) = *(int *)(unaff_BP + -0x262) + (uint)(0xfffe < uVar10);
              }
              *(undefined2 *)(unaff_BP + -0x264) = 1;
              *(undefined2 *)(unaff_BP + -0x262) = 0;
              while( true ) {
                iVar16 = *(int *)(unaff_BP + -0x262);
                if ((*(int *)0x14e < iVar16) ||
                   ((*(int *)0x14e <= iVar16 && (*(uint *)0x14c < *(uint *)(unaff_BP + -0x264)))))
                break;
                uStack_6 = uVar15;
                if ((*(int *)(unaff_BP + -0x162) < iVar16) ||
                   ((*(int *)(unaff_BP + -0x162) <= iVar16 &&
                    (*(uint *)(unaff_BP + -0x164) < *(uint *)(unaff_BP + -0x264))))) {
                  iStack_8 = 0x1c6f;
                  uVar21 = func_0x00000271();
                  pbVar1 = (byte *)((int)uVar21 + 0x1e);
                  *pbVar1 = *pbVar1 | 2;
                }
                else {
                  iStack_8 = 0x1caf;
                  uVar21 = func_0x00000271();
                  pbVar1 = (byte *)((int)uVar21 + 0x1e);
                  *pbVar1 = *pbVar1 & 0xfd;
                }
                uVar15 = 0;
                puVar2 = (uint *)(unaff_BP + -0x264);
                uVar10 = *puVar2;
                *puVar2 = *puVar2 + 1;
                *(int *)(unaff_BP + -0x262) = *(int *)(unaff_BP + -0x262) + (uint)(0xfffe < uVar10);
              }
              *(undefined2 *)(unaff_BP + -0x26c) = 1;
              while (*(int *)(unaff_BP + -0x26c) <= *(int *)0x150) {
                if (*(int *)(unaff_BP + -0x10c) < *(int *)(unaff_BP + -0x26c)) {
                  uStack_6 = 0x1cca;
                  uVar21 = func_0x00000398();
                  pbVar1 = (byte *)((int)uVar21 + 0x16);
                  *pbVar1 = *pbVar1 | 2;
                }
                else {
                  uStack_6 = 0x1cf1;
                  uVar21 = func_0x00000398();
                  pbVar1 = (byte *)((int)uVar21 + 0x16);
                  *pbVar1 = *pbVar1 & 0xfd;
                }
                *(int *)(unaff_BP + -0x26c) = *(int *)(unaff_BP + -0x26c) + 1;
              }
              *(undefined2 *)(unaff_BP + -0x26c) = 1;
              while (*(int *)(unaff_BP + -0x26c) <= *(int *)0x152) {
                if (*(int *)(unaff_BP + -0x210) < *(int *)(unaff_BP + -0x26c)) {
                  uStack_6 = 0x1d0b;
                  uVar21 = func_0x000003ef();
                  pbVar1 = (byte *)((int)uVar21 + 10);
                  *pbVar1 = *pbVar1 | 2;
                }
                else {
                  uStack_6 = 0x1d32;
                  uVar21 = func_0x000003ef();
                  pbVar1 = (byte *)((int)uVar21 + 10);
                  *pbVar1 = *pbVar1 & 0xfd;
                }
                *(int *)(unaff_BP + -0x26c) = *(int *)(unaff_BP + -0x26c) + 1;
              }
              *(undefined2 *)(unaff_BP + -0x10e) = 0;
              uStack_6 = 0x1d4a;
              func_0x0000daa6();
              uStack_6 = 0x1d54;
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
              uStack_6 = 0x1da4;
              func_0x00008095();
              *(undefined2 *)0xbc2 = 0;
              FUN_3ab8_7689();
              return;
            }
          }
          if ((*(int *)(unaff_BP + -0x1f0) == 3) && (*(int *)(unaff_BP + -0x1fe) != 5)) {
            if (*(char *)0xb1ea == '\0') {
              func_0x000297e6();
              uStack_6 = 0x1ddf;
              func_0x00029bb5();
              func_0x00029983();
              func_0x000297e6();
              uStack_6 = 0x1df8;
              func_0x00029bb5();
              func_0x00029983();
              if (*(int *)(unaff_BP + -0x1fe) != 6) goto LAB_3ab8_69b3;
              func_0x00029834();
              uStack_6 = 0x1e1b;
              func_0x00029c74();
              func_0x000299b9();
              iStack_a = 0x22b2;
              iStack_c = 0x1e2b;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0x1e30;
              func_0x0002a11e();
              func_0x00029834();
              func_0x00029983();
              func_0x00029834();
              iStack_a = 0x22b2;
              iStack_c = 0x1e56;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0x1e5b;
              func_0x0002a10c();
              func_0x00029834();
              func_0x00029983();
              func_0x000297e6();
            }
            else {
              uVar15 = *(undefined2 *)(unaff_BP + -0x14e);
              *(undefined2 *)(unaff_BP + -0x144) = *(undefined2 *)(unaff_BP + -0x150);
              *(undefined2 *)(unaff_BP + -0x142) = uVar15;
              uVar15 = *(undefined2 *)(unaff_BP + -0x1d6);
              *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x1d8);
              *(undefined2 *)(unaff_BP + -0x15a) = uVar15;
              func_0x000297e6();
              uStack_6 = 0x1ebb;
              func_0x00029bb5();
              func_0x00029983();
              func_0x000297e6();
            }
            uStack_6 = 0x1e7f;
            func_0x00029bb5();
            func_0x00029983();
LAB_3ab8_69b3:
            uVar15 = *(undefined2 *)0x14a;
            *(undefined2 *)(unaff_BP + -0x22a) = *(undefined2 *)0x148;
            *(undefined2 *)(unaff_BP + -0x228) = uVar15;
            uVar15 = *(undefined2 *)0x14e;
            *(undefined2 *)(unaff_BP + -0x164) = *(undefined2 *)0x14c;
            *(undefined2 *)(unaff_BP + -0x162) = uVar15;
            *(undefined2 *)(unaff_BP + -0x10c) = *(undefined2 *)0x150;
            *(undefined2 *)(unaff_BP + -0x210) = *(undefined2 *)0x152;
            *(undefined2 *)(unaff_BP + -0x10e) = 0;
            uStack_6 = 0x156b;
            func_0x0000daa6();
            func_0x0000c3ca();
            *(undefined1 *)0xb49c = 0;
            if ((((*(int *)(unaff_BP + -0x1fe) == 1) || (*(int *)(unaff_BP + -0x1fe) == 2)) ||
                (*(int *)(unaff_BP + -0x1fe) == 3)) ||
               ((*(int *)(unaff_BP + -0x1fe) == 4 || (*(int *)(unaff_BP + -0x1fe) == 6)))) {
              if ((*(int *)(unaff_BP + -0x1fe) != 3) && (*(int *)(unaff_BP + -0x1fe) != 4)) {
                uVar15 = *(undefined2 *)0x9480;
                uVar5 = *(undefined2 *)0x9482;
                *(undefined2 *)(unaff_BP + -500) = uVar15;
                *(undefined2 *)(unaff_BP + -0x1f2) = uVar5;
                *(undefined2 *)(unaff_BP + -0x204) = uVar15;
                *(undefined2 *)(unaff_BP + -0x202) = uVar5;
              }
              if (*(int *)(unaff_BP + -0x1e6) != 0) {
                uStack_6 = 1;
                iStack_8 = 0x885;
                iVar16 = 0x1bb4;
                iStack_a = 0x15de;
                FUN_1def_0338();
                if (*(int *)(unaff_BP + -0x1e6) == 1) {
                  uVar15 = *(undefined2 *)0x943e;
                  *(undefined2 *)(unaff_BP + -0x1ea) = *(undefined2 *)0x943c;
                  *(undefined2 *)(unaff_BP + -0x1e8) = uVar15;
                }
                if (*(int *)(unaff_BP + -0x1e6) == 2) {
                  uVar15 = *(undefined2 *)0x943e;
                  *(undefined2 *)(unaff_BP + -0x1d4) = *(undefined2 *)0x943c;
                  *(undefined2 *)(unaff_BP + -0x1d2) = uVar15;
                }
                uVar17 = *(uint *)(unaff_BP + -0x1e6) < 3;
                if (*(uint *)(unaff_BP + -0x1e6) == 3) {
                  func_0x000297e6();
                  func_0x00029ae7();
                  func_0x000297e6();
                  func_0x00029ae7();
                  iVar16 = 0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar17) {
                    uVar15 = *(undefined2 *)0x943e;
                    *(undefined2 *)(unaff_BP + -0x1ea) = *(undefined2 *)0x943c;
                    *(undefined2 *)(unaff_BP + -0x1e8) = uVar15;
                  }
                  else {
                    uVar15 = *(undefined2 *)0x943e;
                    *(undefined2 *)(unaff_BP + -0x1d4) = *(undefined2 *)0x943c;
                    *(undefined2 *)(unaff_BP + -0x1d2) = uVar15;
                  }
                }
                uStack_6 = 0;
                iStack_a = 0x1669;
                iStack_8 = iVar16;
                FUN_1def_0338();
              }
              uStack_6 = 0x1678;
              func_0x000297e6();
              uStack_6 = 0x167d;
              func_0x00029d78();
              iStack_c = 0x22b2;
              iStack_e = 0x1687;
              func_0x000299d1();
              iStack_c = 0x22b2;
              iStack_e = 0x1690;
              func_0x000297e6();
              iStack_c = 0x22b2;
              iStack_e = 0x1695;
              func_0x00029d78();
              uStack_14 = 0x22b2;
              uStack_16 = 0x169f;
              func_0x000299d1();
              uStack_14 = 0x22b2;
              uStack_16 = 0x16a8;
              func_0x000297e6();
              uStack_14 = 0x22b2;
              uStack_16 = 0x16ad;
              func_0x00029d78();
              uStack_1c = 0x22b2;
              uStack_1e = 0x16b7;
              func_0x000299d1();
              uStack_1c = 0x22b2;
              uStack_1e = 0x16c0;
              func_0x000297e6();
              uStack_1c = 0x22b2;
              uStack_1e = 0x16c5;
              func_0x00029d78();
              func_0x000299d1(0x22b2);
              func_0x000297e6(0x22b2);
              uVar15 = 0x16dd;
              func_0x00029d78(0x22b2);
              func_0x000299d1(0x22b2,iVar14,iVar8,uVar15);
              func_0x000297e6(0x22b2);
              uVar15 = 0x16f5;
              func_0x00029d78(0x22b2);
              func_0x000299d1(0x22b2,iVar23,iVar24,uVar15);
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
              uStack_6 = 5999;
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
                 (*(int *)(unaff_BP + -0x1fe) == 6)))) && (*(int *)(unaff_BP + -0x146) != 0)) {
              uStack_6 = *(int *)(unaff_BP + -0x146);
              iStack_a = 0x21cb;
              iStack_8 = iVar9;
              iVar16 = func_0x00015409();
              iVar9 = 0x11f2;
              if (iVar16 != 0) {
                if ((*(char *)0xb1ea == '\x01') || (*(char *)0xb1ea == '\x02')) {
                  uVar15 = *(undefined2 *)(unaff_BP + -0x14e);
                  *(undefined2 *)(unaff_BP + -0x144) = *(undefined2 *)(unaff_BP + -0x150);
                  *(undefined2 *)(unaff_BP + -0x142) = uVar15;
                  uVar15 = *(undefined2 *)(unaff_BP + -0x1d6);
                  *(undefined2 *)(unaff_BP + -0x15c) = *(undefined2 *)(unaff_BP + -0x1d8);
                  *(undefined2 *)(unaff_BP + -0x15a) = uVar15;
                }
                goto code_r0x00040d08;
              }
            }
            goto LAB_3ab8_6c1e;
          }
          iVar16 = 0x885;
          uStack_6 = 0x1ee9;
          func_0x0000daa6();
          if (*(int *)(unaff_BP + -0x10e) < 0) {
            if (*(int *)(unaff_BP + -0x10e) == -1) {
              puVar2 = (uint *)0x148;
              uVar10 = *puVar2;
              *puVar2 = *puVar2 + 1;
              *(int *)0x14a = *(int *)0x14a + (uint)(0xfffe < uVar10);
              uStack_6 = 0x885;
              iStack_8 = 0x1f12;
              puVar22 = (undefined2 *)func_0x0000013f();
              puVar11 = (undefined2 *)puVar22;
              puVar12 = (undefined2 *)(unaff_BP + -0x2a6);
              for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
                puVar4 = puVar12;
                puVar12 = puVar12 + 1;
                puVar3 = puVar11;
                puVar11 = puVar11 + 1;
                *puVar4 = *puVar3;
              }
              puVar11 = &uStack_16;
              puVar12 = (undefined2 *)(unaff_BP + -0x2a6);
              for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
                puVar3 = puVar11;
                puVar11 = puVar11 + 1;
                puVar22 = puVar12;
                puVar12 = puVar12 + 1;
                *puVar3 = *puVar22;
              }
              uStack_18 = 0;
              iVar16 = 0x11f2;
              uStack_1a = 0x1f38;
              FUN_17a6_0ae3();
            }
            if (*(int *)(unaff_BP + -0x10e) == -2) {
              puVar2 = (uint *)0x14c;
              uVar10 = *puVar2;
              *puVar2 = *puVar2 + 1;
              *(int *)0x14e = *(int *)0x14e + (uint)(0xfffe < uVar10);
              iStack_8 = 0x1f59;
              uStack_6 = iVar16;
              puVar22 = (undefined2 *)func_0x00000271();
              puVar11 = (undefined2 *)puVar22;
              puVar12 = (undefined2 *)(unaff_BP + -0x290);
              for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
                puVar4 = puVar12;
                puVar12 = puVar12 + 1;
                puVar3 = puVar11;
                puVar11 = puVar11 + 1;
                *puVar4 = *puVar3;
              }
              piVar13 = &iStack_20;
              puVar12 = (undefined2 *)(unaff_BP + -0x290);
              for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
                puVar3 = piVar13;
                piVar13 = piVar13 + 1;
                puVar22 = puVar12;
                puVar12 = puVar12 + 1;
                *puVar3 = *puVar22;
              }
              func_0x00013e46(0);
            }
            *(undefined2 *)(unaff_BP + -0x10e) = 0;
            *(undefined2 *)0xbc0 = 1;
            goto LAB_3ab8_6c00;
          }
          if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) {
            uStack_6 = *(int *)(unaff_BP + -0x162);
            iStack_8 = *(int *)(unaff_BP + -0x164);
            iStack_a = *(int *)(unaff_BP + -0x228);
            iStack_c = *(int *)(unaff_BP + -0x22a);
            pcVar6 = (code *)swi(0x3f);
            (*pcVar6)();
          }
          else {
            if (*(int *)(unaff_BP + -0x1fe) == 6) {
              func_0x00029834();
              func_0x00029af6();
              func_0x000299b9();
              iStack_a = 0x22b2;
              iStack_c = 0x1fea;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0x1fef;
              func_0x0002a11e();
              func_0x00029834();
              func_0x00029983();
              func_0x00029834();
              iStack_a = 0x22b2;
              iStack_c = 0x2015;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0x201a;
              func_0x0002a10c();
              func_0x00029834();
              func_0x00029983();
            }
            uStack_6 = 0x2039;
            func_0x000297e6();
            uStack_6 = 0x203e;
            func_0x00029af6();
            uStack_6 = 0x2043;
            func_0x00029d78();
            iStack_c = 0x22b2;
            iStack_e = 0x204d;
            func_0x000299d1();
            iStack_c = 0x22b2;
            iStack_e = 0x2056;
            func_0x000297e6();
            iStack_c = 0x22b2;
            iStack_e = 0x205b;
            FUN_28b3_1c08();
            iStack_c = 0x22b2;
            iStack_e = 0x2060;
            FUN_28b3_1177();
            iStack_c = 0x22b2;
            iStack_e = 0x2065;
            func_0x00029d78();
            uStack_14 = 0x22b2;
            uStack_16 = 0x206f;
            func_0x000299d1();
            uStack_14 = 0x22b2;
            uStack_16 = 0x2078;
            func_0x000297e6();
            uStack_14 = 0x22b2;
            uStack_16 = 0x207d;
            FUN_28b3_1c08();
            uStack_14 = 0x22b2;
            uStack_16 = 0x2082;
            FUN_28b3_1177();
            uStack_14 = 0x22b2;
            uStack_16 = 0x2087;
            func_0x00029d78();
            uStack_1c = 0x22b2;
            uStack_1e = 0x2091;
            func_0x000299d1();
            uStack_1c = 0x22b2;
            uStack_1e = 0x209a;
            func_0x000297e6();
            uStack_1c = 0x22b2;
            uStack_1e = 0x209f;
            func_0x00029af6();
            uStack_1c = 0x22b2;
            uStack_1e = 0x20a4;
            func_0x00029d78();
            func_0x000299d1(0x22b2);
            func_0x000297e6(0x22b2);
            func_0x00029af6(0x22b2);
            uVar15 = 0x20c1;
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2,iVar14,iVar8,uVar15);
            func_0x000297e6(0x22b2);
            uVar15 = 0x20d9;
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2,iVar23,iVar24,uVar15);
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
              iStack_a = 0x22b2;
              iStack_c = 0x213d;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0x2142;
              func_0x0002a11e();
              func_0x00029834();
              func_0x00029983();
              func_0x00029834();
              iStack_a = 0x22b2;
              iStack_c = 0x2168;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0x216d;
              func_0x0002a10c();
              func_0x00029834();
              iVar16 = 0x22b2;
              func_0x00029983();
            }
          }
          *(undefined2 *)(unaff_BP + -0x10e) = 0;
        } while (*(int *)(unaff_BP + -0x1fe) == 4);
      }
    }
LAB_3ab8_5c95:
    *(undefined2 *)(unaff_BP + -0x224) = 0;
    *(undefined2 *)(unaff_BP + -0x226) = 0;
    *(undefined2 *)(unaff_BP + -0x5a) = 0;
    *(undefined2 *)(unaff_BP + -0x5c) = 0;
    *(undefined2 *)(unaff_BP + -0x1e0) = 0;
    uVar15 = *(undefined2 *)0x14a;
    *(undefined2 *)(unaff_BP + -0x1e4) = *(undefined2 *)0x148;
    *(undefined2 *)(unaff_BP + -0x1e2) = uVar15;
    uVar15 = *(undefined2 *)0x14e;
    *(undefined2 *)(unaff_BP + -0x132) = *(undefined2 *)0x14c;
    *(undefined2 *)(unaff_BP + -0x130) = uVar15;
    *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)0x150;
    if (((*(int *)(unaff_BP + -0x1fe) != 1) && (*(int *)(unaff_BP + -0x1fe) != 3)) &&
       ((*(int *)(unaff_BP + -0x1fe) != 4 && (*(int *)(unaff_BP + -0x1fe) != 6)))) {
      FUN_3ab8_6188();
      return;
    }
  } while( true );
LAB_3ab8_59a4:
  uVar15 = *(undefined2 *)0x9480;
  uVar5 = *(undefined2 *)0x9482;
  *(undefined2 *)(unaff_BP + -500) = uVar15;
  *(undefined2 *)(unaff_BP + -0x1f2) = uVar5;
  *(undefined2 *)(unaff_BP + -0x204) = uVar15;
  *(undefined2 *)(unaff_BP + -0x202) = uVar5;
  goto LAB_3ab8_59bb;
}


