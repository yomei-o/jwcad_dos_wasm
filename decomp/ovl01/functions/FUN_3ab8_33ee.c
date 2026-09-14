/* 3ab8:33ee */

undefined2 __cdecl16far FUN_3ab8_33ee(void)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined2 uVar6;
  int unaff_BP;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined4 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  
  if (!in_ZF && in_OF == in_SF) {
    *(undefined1 *)(unaff_BP + -0x16) = 1;
  }
  func_0x00029834(0x3ab8);
  func_0x00029983(0x22b2);
  func_0x00029834(0x22b2);
  uVar7 = 0x22b2;
  func_0x00029983(0x22b2);
  uVar21 = ((undefined2 *)*(int *)(unaff_BP + 0x1c))[1];
  *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)*(int *)(unaff_BP + 0x1c);
  *(undefined2 *)(unaff_BP + -2) = uVar21;
  uVar21 = ((undefined2 *)*(int *)(unaff_BP + 0x1e))[1];
  *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)*(int *)(unaff_BP + 0x1e);
  *(undefined2 *)(unaff_BP + -0xe) = uVar21;
  uVar21 = *(undefined2 *)0x148;
  uVar20 = *(undefined2 *)0x14a;
  *(undefined2 *)(unaff_BP + -0x5e) = uVar21;
  *(undefined2 *)(unaff_BP + -0x5c) = uVar20;
  uVar6 = *(undefined2 *)0x14e;
  *(undefined2 *)(unaff_BP + -0x2a) = *(undefined2 *)0x14c;
  *(undefined2 *)(unaff_BP + -0x28) = uVar6;
  *(undefined2 *)(unaff_BP + -0x4a) = uVar21;
  *(undefined2 *)(unaff_BP + -0x48) = uVar20;
  *(undefined2 *)(unaff_BP + -0x4e) = uVar21;
  *(undefined2 *)(unaff_BP + -0x4c) = uVar20;
LAB_3ab8_3457:
  *(undefined2 *)0xc18 = 0;
  *(undefined1 *)0xc0e = 0;
  *(undefined2 *)0xc20 = 1;
  *(undefined2 *)0xbc0 = 1;
  *(undefined2 *)0xa4a = 1;
  if (*(int *)(unaff_BP + 6) == 0) {
    *(undefined2 *)0xa48 = 2;
  }
  uVar21 = *(undefined2 *)(unaff_BP + 0x1c);
  uVar20 = *(undefined2 *)(unaff_BP + 0x1a);
  uVar6 = func_0x00006608(uVar7,*(undefined2 *)(unaff_BP + 0x18),uVar20,uVar21,
                          *(undefined2 *)(unaff_BP + 0x1e),*(undefined2 *)(unaff_BP + 0x20));
  *(undefined2 *)(unaff_BP + -0x18) = uVar6;
  uVar7 = 0x3bf;
LAB_3ab8_3494:
  do {
    do {
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xa48 = 0;
      if (*(char *)0xc0e != '\0') {
        *(undefined2 *)(unaff_BP + -0x3c) = 0;
        *(undefined2 *)(unaff_BP + -0x3e) = 0;
        *(undefined2 *)(unaff_BP + -0x12) = 0;
        *(undefined2 *)(unaff_BP + -0x14) = 0;
        *(undefined2 *)(unaff_BP + -0x46) = 0;
        *(undefined2 *)(unaff_BP + -0x1e) = 0;
        uVar6 = *(undefined2 *)0x148;
        uVar18 = *(undefined2 *)0x14a;
        *(undefined2 *)(unaff_BP + -0x5e) = uVar6;
        *(undefined2 *)(unaff_BP + -0x5c) = uVar18;
        uVar12 = *(undefined2 *)0x14e;
        *(undefined2 *)(unaff_BP + -0x2a) = *(undefined2 *)0x14c;
        *(undefined2 *)(unaff_BP + -0x28) = uVar12;
        *(undefined2 *)(unaff_BP + -0x4a) = uVar6;
        *(undefined2 *)(unaff_BP + -0x48) = uVar18;
        *(undefined2 *)(unaff_BP + -0x4e) = uVar6;
        *(undefined2 *)(unaff_BP + -0x4c) = uVar18;
      }
      *(undefined2 *)0xbc0 = 1;
      *(undefined1 *)0xc0e = 0;
      if (((*(int *)0x158 != 0) || (*(int *)(unaff_BP + -0x18) != 0)) ||
         (*(int *)*(undefined2 *)(unaff_BP + 0x20) != 0)) {
        uVar21 = 0xe087;
        func_0x0000daa6(uVar7,0);
        func_0x0000c3ca(0x885);
        *(undefined2 *)0xc20 = 0;
        func_0x000297e6(0x885);
        uVar6 = 0xe0a0;
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2,uVar20,uVar21,uVar6);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        uVar21 = *(undefined2 *)(unaff_BP + 0x12);
        uVar20 = *(undefined2 *)(unaff_BP + 0x10);
        FUN_3ab8_096d(0xffff,0xffff,unaff_BP + -0x18,*(undefined2 *)(unaff_BP + 0x18),
                      *(undefined2 *)(unaff_BP + 0x1a),*(undefined2 *)(unaff_BP + 0x1c),
                      *(undefined2 *)(unaff_BP + 0x1e),*(undefined2 *)(unaff_BP + 0x20),
                      *(undefined2 *)(unaff_BP + 0x22),unaff_BP + -0x5e,unaff_BP + -0x3e,
                      *(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10),
                      *(undefined2 *)(unaff_BP + 0xc),*(undefined2 *)(unaff_BP + 0xe),uVar20,uVar21,
                      *(undefined2 *)(unaff_BP + 0x14),*(undefined2 *)(unaff_BP + 0x16));
        uVar6 = *(undefined2 *)(unaff_BP + 0x40);
        func_0x000297e6(0x22b2,uVar6,*(undefined2 *)(unaff_BP + 0x42),
                        *(undefined2 *)(unaff_BP + 0x44),*(undefined2 *)(unaff_BP + 0x46));
        uVar18 = 0x22b2;
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        func_0x000297e6(0x22b2);
        uVar7 = 0xe191;
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        FUN_3ab8_1ce8(0xffff,0xffff,unaff_BP + -0x18,*(undefined2 *)(unaff_BP + 0x18),
                      *(undefined2 *)(unaff_BP + 0x1a),*(undefined2 *)(unaff_BP + 0x1c),
                      *(undefined2 *)(unaff_BP + 0x1e),*(undefined2 *)(unaff_BP + 0x20),
                      *(undefined2 *)(unaff_BP + 0x24),unaff_BP + -0x2a,unaff_BP + -0x14,
                      *(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10),
                      *(undefined2 *)(unaff_BP + 0xc),*(undefined2 *)(unaff_BP + 0xe),
                      *(undefined2 *)(unaff_BP + 0x10),*(undefined2 *)(unaff_BP + 0x12),
                      *(undefined2 *)(unaff_BP + 0x14),*(undefined2 *)(unaff_BP + 0x16),uVar20,
                      uVar21,uVar7);
        func_0x000297e6(0x22b2,*(undefined2 *)(unaff_BP + 0x4a));
        uVar21 = 0xe1ef;
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2,uVar18,uVar6,uVar21);
        func_0x000299d1(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        FUN_3ab8_2ad5(0xffff,unaff_BP + -0x18,*(undefined2 *)(unaff_BP + 0x18),
                      *(undefined2 *)(unaff_BP + 0x1a),*(undefined2 *)(unaff_BP + 0x1c),
                      *(undefined2 *)(unaff_BP + 0x1e),*(undefined2 *)(unaff_BP + 0x20),
                      *(undefined2 *)(unaff_BP + 0x26),unaff_BP + -0x4e,unaff_BP + -0x4a,
                      unaff_BP + -0x46,*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10),
                      *(undefined2 *)(unaff_BP + 0xc),*(undefined2 *)(unaff_BP + 0xe),
                      *(undefined2 *)(unaff_BP + 0x10),*(undefined2 *)(unaff_BP + 0x12),
                      *(undefined2 *)(unaff_BP + 0x14),*(undefined2 *)(unaff_BP + 0x16));
        if (*(int *)(unaff_BP + -0x1e) != 0) {
          FUN_1000_0599(0x22b2,0x11,2);
          func_0x00010526(0xdef);
        }
        if (*(int *)0x158 == 0) {
          uVar21 = *(undefined2 *)(unaff_BP + -0x18);
        }
        else {
          uVar21 = 0xfba9;
        }
        return uVar21;
      }
      if ((*(int *)(unaff_BP + 0x48) == 0) ||
         ((*(int *)*(undefined2 *)(unaff_BP + 0x18) == *(int *)(unaff_BP + -0x54) &&
          (*(int *)*(undefined2 *)(unaff_BP + 0x1a) == *(int *)(unaff_BP + -0x5a)))))
      goto LAB_3ab8_3457;
      func_0x000297e6(uVar7);
      uVar6 = 0xe2dd;
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2,uVar20,uVar21,uVar6);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      uVar7 = 0x22b2;
      func_0x000299d1(0x22b2);
      uVar6 = *(undefined2 *)(unaff_BP + 0x12);
      uVar18 = *(undefined2 *)(unaff_BP + 0x10);
      FUN_3ab8_096d(0,0,unaff_BP + -0x18,*(undefined2 *)(unaff_BP + 0x18),
                    *(undefined2 *)(unaff_BP + 0x1a),*(undefined2 *)(unaff_BP + 0x1c),
                    *(undefined2 *)(unaff_BP + 0x1e),*(undefined2 *)(unaff_BP + 0x20),
                    *(undefined2 *)(unaff_BP + 0x22),unaff_BP + -0x5e,unaff_BP + -0x3e,
                    *(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10),
                    *(undefined2 *)(unaff_BP + 0xc),*(undefined2 *)(unaff_BP + 0xe),uVar18,uVar6,
                    *(undefined2 *)(unaff_BP + 0x14),*(undefined2 *)(unaff_BP + 0x16));
    } while (*(char *)0xc0e != '\0');
    uVar21 = *(undefined2 *)(unaff_BP + 0x42);
    uVar20 = *(undefined2 *)(unaff_BP + 0x40);
    func_0x000297e6(0x22b2,uVar20,uVar21,*(undefined2 *)(unaff_BP + 0x44),
                    *(undefined2 *)(unaff_BP + 0x46));
    uVar19 = 0x22b2;
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    uVar16 = 0x22b2;
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    uVar14 = 0x22b2;
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    uVar12 = 0x22b2;
    uVar7 = 0xe3d5;
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2,uVar18,uVar6,uVar7);
    FUN_3ab8_1ce8(0,0,unaff_BP + -0x18,*(undefined2 *)(unaff_BP + 0x18),
                  *(undefined2 *)(unaff_BP + 0x1a),*(undefined2 *)(unaff_BP + 0x1c),
                  *(undefined2 *)(unaff_BP + 0x1e),*(undefined2 *)(unaff_BP + 0x20),
                  *(undefined2 *)(unaff_BP + 0x24),unaff_BP + -0x2a,unaff_BP + -0x14,
                  *(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10),
                  *(undefined2 *)(unaff_BP + 0xc),*(undefined2 *)(unaff_BP + 0xe),
                  *(undefined2 *)(unaff_BP + 0x10),*(undefined2 *)(unaff_BP + 0x12),
                  *(undefined2 *)(unaff_BP + 0x14),*(undefined2 *)(unaff_BP + 0x16));
    if (*(char *)0xc0e == '\0') {
      func_0x000297e6(0x22b2,*(undefined2 *)(unaff_BP + 0x4a));
      uVar21 = 0xe43a;
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      uVar17 = 0x22b2;
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      uVar15 = 0x22b2;
      func_0x00029d78(0x22b2);
      func_0x000299d1(0x22b2);
      func_0x000297e6(0x22b2);
      uVar13 = 0x22b2;
      func_0x00029d78(0x22b2);
      uVar7 = 0x22b2;
      func_0x000299d1(0x22b2);
      uVar6 = *(undefined2 *)(unaff_BP + 0x16);
      uVar18 = *(undefined2 *)(unaff_BP + 0x14);
      uVar11 = *(undefined2 *)(unaff_BP + 0x12);
      FUN_3ab8_2ad5(0,unaff_BP + -0x18,*(undefined2 *)(unaff_BP + 0x18),
                    *(undefined2 *)(unaff_BP + 0x1a),*(undefined2 *)(unaff_BP + 0x1c),
                    *(undefined2 *)(unaff_BP + 0x1e),*(undefined2 *)(unaff_BP + 0x20),
                    *(undefined2 *)(unaff_BP + 0x26),unaff_BP + -0x4e,unaff_BP + -0x4a,
                    unaff_BP + -0x46,*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10),
                    *(undefined2 *)(unaff_BP + 0xc),*(undefined2 *)(unaff_BP + 0xe),
                    *(undefined2 *)(unaff_BP + 0x10),uVar11,uVar18,uVar6);
      if (((*(char *)0xc0e == '\0') && (*(int *)(unaff_BP + -0x18) == 0)) &&
         (*(int *)*(undefined2 *)(unaff_BP + 0x20) == 0)) {
        if (*(int *)*(undefined2 *)(unaff_BP + 0x1a) <= *(int *)0xa5e) goto LAB_3ab8_3457;
        *(undefined2 *)(unaff_BP + -0x54) = *(undefined2 *)*(undefined2 *)(unaff_BP + 0x18);
        *(undefined2 *)(unaff_BP + -0x5a) = *(undefined2 *)*(undefined2 *)(unaff_BP + 0x1a);
        if (*(int *)(unaff_BP + 6) == 0) {
          func_0x000297e6(0x22b2);
          func_0x00029d78(0x22b2);
          func_0x00029bfc(0x22b2);
          func_0x00029983(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029d78(0x22b2);
          func_0x00029bfc(0x22b2);
          func_0x00029983(0x22b2);
          if (*(int *)(unaff_BP + 0x2e) == 0) goto LAB_3ab8_39c8;
          uVar21 = 0x1bb4;
          FUN_1def_0338(0x22b2,1,unaff_BP + -8,unaff_BP + -0xc);
          if (*(int *)(unaff_BP + 0x2e) == 1) {
            uVar20 = *(undefined2 *)0x943e;
            *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)0x943c;
            *(undefined2 *)(unaff_BP + -10) = uVar20;
          }
          if (*(int *)(unaff_BP + 0x2e) == 2) {
            uVar20 = *(undefined2 *)0x943e;
            *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)0x943c;
            *(undefined2 *)(unaff_BP + -6) = uVar20;
          }
          uVar9 = *(uint *)(unaff_BP + 0x2e) < 3;
          if (*(uint *)(unaff_BP + 0x2e) == 3) {
            func_0x000297e6(0x1bb4);
            func_0x00029ae7(0x22b2);
            func_0x000297e6(0x22b2);
            func_0x00029ae7(0x22b2);
            uVar21 = 0x22b2;
            FUN_28b3_1181(0x22b2);
            if ((bool)uVar9) {
              uVar20 = *(undefined2 *)0x943e;
              *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)0x943c;
              *(undefined2 *)(unaff_BP + -10) = uVar20;
            }
            else {
              uVar20 = *(undefined2 *)0x943e;
              *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)0x943c;
              *(undefined2 *)(unaff_BP + -6) = uVar20;
            }
          }
          uVar8 = 0x1bb4;
          uVar19 = 0xe5d8;
          FUN_1def_0338(uVar21,0,unaff_BP + -8,unaff_BP + -0xc);
        }
        else {
LAB_3ab8_39c8:
          uVar8 = 0x22b2;
        }
        if (*(int *)(unaff_BP + 6) == 2) {
          func_0x000297e6(uVar8);
          func_0x00029bfc(0x22b2);
          func_0x00029983(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029bfc(0x22b2);
          func_0x00029983(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029983(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029983(0x22b2);
          func_0x000297e6(0x22b2,unaff_BP + -0x52,unaff_BP + -0x58);
          uVar21 = 0xe649;
          func_0x00029d78(0x22b2);
          func_0x000299d1(0x22b2,uVar17,uVar19,uVar21);
          func_0x000297e6(0x22b2);
          uVar21 = 0xe660;
          func_0x00029d78(0x22b2);
          func_0x000299d1(0x22b2,uVar15,uVar16,uVar21);
          uVar21 = 0xe672;
          func_0x000297e6(0x22b2);
          func_0x000299d1(0x22b2,uVar13,uVar14,uVar21);
          uVar21 = 0xe684;
          func_0x000297e6(0x22b2);
          uVar8 = 0x22b2;
          func_0x000299d1(0x22b2,uVar6,uVar12,uVar21);
          uVar18 = *(undefined2 *)(unaff_BP + 0x3e);
          uVar11 = *(undefined2 *)(unaff_BP + 0x3c);
          FUN_3ab8_31ae(*(undefined2 *)(unaff_BP + 0x30),*(undefined2 *)(unaff_BP + 0x32),
                        *(undefined2 *)(unaff_BP + 0x34),*(undefined2 *)(unaff_BP + 0x36),
                        *(undefined2 *)(unaff_BP + 0x38),*(undefined2 *)(unaff_BP + 0x3a),uVar11,
                        uVar18);
        }
        *(undefined2 *)0xa4a = 1;
        if (*(int *)(unaff_BP + 6) == 0) {
          *(undefined2 *)0xa48 = 2;
        }
        uVar21 = *(undefined2 *)(unaff_BP + 0x1c);
        uVar20 = *(undefined2 *)(unaff_BP + 0x1a);
        uVar12 = *(undefined2 *)(unaff_BP + 0x18);
        uVar7 = 0x3bf;
        uVar6 = func_0x00006608(uVar8,uVar12,uVar20,uVar21,*(undefined2 *)(unaff_BP + 0x1e),
                                *(undefined2 *)(unaff_BP + 0x20));
        *(undefined2 *)(unaff_BP + -0x18) = uVar6;
        *(undefined2 *)(unaff_BP + -0x3c) = 0;
        *(undefined2 *)(unaff_BP + -0x3e) = 0;
        uVar6 = *(undefined2 *)0x14a;
        *(undefined2 *)(unaff_BP + -0x5e) = *(undefined2 *)0x148;
        *(undefined2 *)(unaff_BP + -0x5c) = uVar6;
        *(undefined2 *)(unaff_BP + -0x1c) = 1;
        *(undefined2 *)(unaff_BP + -0x1a) = 0;
        piVar2 = (int *)*(int *)(unaff_BP + 0x22);
        if (piVar2[1] != 0 || *piVar2 != 0) {
          iVar3 = piVar2[1];
          *(int *)(unaff_BP + -0x1c) = *piVar2;
          *(int *)(unaff_BP + -0x1a) = iVar3;
        }
        uVar6 = *(undefined2 *)(unaff_BP + -0x1a);
        *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -0x1c);
        *(undefined2 *)(unaff_BP + -0x40) = uVar6;
        while( true ) {
          puVar4 = (uint *)*(int *)(unaff_BP + 0x28);
          if (((int)puVar4[1] < *(int *)(unaff_BP + -0x40)) ||
             (((int)puVar4[1] <= *(int *)(unaff_BP + -0x40) &&
              (*puVar4 < *(uint *)(unaff_BP + -0x42))))) break;
          if (((*(int *)(unaff_BP + -0x18) != 0) || (*(int *)*(undefined2 *)(unaff_BP + 0x20) != 0))
             || (((*(int *)*(undefined2 *)(unaff_BP + 0x18) != *(int *)(unaff_BP + -0x54) ||
                  (*(int *)*(undefined2 *)(unaff_BP + 0x1a) != *(int *)(unaff_BP + -0x5a))) &&
                 (*(char *)(unaff_BP + -0x16) != '\0')))) goto LAB_3ab8_3494;
          uVar6 = 0;
          uVar20 = 0xe743;
          uVar21 = uVar7;
          uVar10 = func_0x0000013f(uVar7,*(undefined2 *)(unaff_BP + -0x42),
                                   *(undefined2 *)(unaff_BP + -0x40));
          if ((*(byte *)((int)uVar10 + 0x14) & 2) == 0) {
            uVar7 = uVar6;
            if ((*(byte *)(unaff_BP + -0x42) & 0x7f) == 0x7f) goto LAB_3ab8_3bd9;
          }
          else {
            piVar2 = (int *)*(int *)(unaff_BP + 0x22);
            if (piVar2[1] == 0 && *piVar2 == 0) {
              iVar3 = *(int *)(unaff_BP + -0x40);
              *piVar2 = *(int *)(unaff_BP + -0x42);
              piVar2[1] = iVar3;
              if (*(char *)(unaff_BP + -0x16) == '\0') goto LAB_3ab8_3c47;
            }
            func_0x000297e6(0);
            uVar6 = 0xe7e0;
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2,uVar20,uVar21,uVar6);
            func_0x000297e6(0x22b2);
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2);
            func_0x000297e6(0x22b2);
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2);
            func_0x000297e6(0x22b2);
            func_0x00029d78(0x22b2);
            uVar6 = 0x22b2;
            func_0x000299d1(0x22b2);
            uVar18 = *(undefined2 *)(unaff_BP + 0x12);
            uVar11 = *(undefined2 *)(unaff_BP + 0x10);
            FUN_3ab8_096d(*(undefined2 *)(unaff_BP + -0x42),*(undefined2 *)(unaff_BP + -0x40),
                          unaff_BP + -0x18,*(undefined2 *)(unaff_BP + 0x18),
                          *(undefined2 *)(unaff_BP + 0x1a),*(undefined2 *)(unaff_BP + 0x1c),
                          *(undefined2 *)(unaff_BP + 0x1e),*(undefined2 *)(unaff_BP + 0x20),
                          *(undefined2 *)(unaff_BP + 0x22),unaff_BP + -0x5e,unaff_BP + -0x3e,
                          *(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10),
                          *(undefined2 *)(unaff_BP + 0xc),*(undefined2 *)(unaff_BP + 0xe),uVar11,
                          uVar18,*(undefined2 *)(unaff_BP + 0x14),*(undefined2 *)(unaff_BP + 0x16));
LAB_3ab8_3bd9:
            uVar21 = *(undefined2 *)(unaff_BP + 0x1c);
            uVar20 = *(undefined2 *)(unaff_BP + 0x1a);
            uVar12 = *(undefined2 *)(unaff_BP + 0x18);
            uVar7 = 0x3bf;
            uVar6 = func_0x00006608(uVar6,uVar12,uVar20,uVar21,*(undefined2 *)(unaff_BP + 0x1e),
                                    *(undefined2 *)(unaff_BP + 0x20));
            *(undefined2 *)(unaff_BP + -0x18) = uVar6;
          }
          puVar1 = (uint *)(unaff_BP + -0x42);
          uVar5 = *puVar1;
          *puVar1 = *puVar1 + 1;
          *(int *)(unaff_BP + -0x40) = *(int *)(unaff_BP + -0x40) + (uint)(0xfffe < uVar5);
        }
        uVar5 = *(uint *)(unaff_BP + -0x3c);
        *puVar4 = *(uint *)(unaff_BP + -0x3e);
        puVar4[1] = uVar5;
        *(undefined2 *)(unaff_BP + -0x12) = 0;
        *(undefined2 *)(unaff_BP + -0x14) = 0;
        uVar6 = *(undefined2 *)0x14e;
        *(undefined2 *)(unaff_BP + -0x2a) = *(undefined2 *)0x14c;
        *(undefined2 *)(unaff_BP + -0x28) = uVar6;
        *(undefined2 *)(unaff_BP + -0x1c) = 1;
        *(undefined2 *)(unaff_BP + -0x1a) = 0;
        piVar2 = (int *)*(int *)(unaff_BP + 0x24);
        if (piVar2[1] != 0 || *piVar2 != 0) {
          iVar3 = piVar2[1];
          *(int *)(unaff_BP + -0x1c) = *piVar2;
          *(int *)(unaff_BP + -0x1a) = iVar3;
        }
        uVar6 = *(undefined2 *)(unaff_BP + -0x1a);
        *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -0x1c);
        *(undefined2 *)(unaff_BP + -0x40) = uVar6;
        while( true ) {
          puVar4 = (uint *)*(int *)(unaff_BP + 0x2a);
          if (((int)puVar4[1] < *(int *)(unaff_BP + -0x40)) ||
             (((int)puVar4[1] <= *(int *)(unaff_BP + -0x40) &&
              (*puVar4 < *(uint *)(unaff_BP + -0x42))))) break;
          if (((*(int *)(unaff_BP + -0x18) != 0) || (*(int *)*(undefined2 *)(unaff_BP + 0x20) != 0))
             || (((*(int *)*(undefined2 *)(unaff_BP + 0x18) != *(int *)(unaff_BP + -0x54) ||
                  (*(int *)*(undefined2 *)(unaff_BP + 0x1a) != *(int *)(unaff_BP + -0x5a))) &&
                 (*(char *)(unaff_BP + -0x16) != '\0')))) goto LAB_3ab8_3494;
          uVar6 = 0;
          uVar20 = 0xe8ea;
          uVar21 = uVar7;
          uVar10 = func_0x00000271(uVar7,*(undefined2 *)(unaff_BP + -0x42),
                                   *(undefined2 *)(unaff_BP + -0x40));
          if ((*(byte *)((int)uVar10 + 0x1e) & 2) == 0) {
            uVar7 = uVar6;
            if ((*(byte *)(unaff_BP + -0x42) & 0x7f) == 0x7f) goto LAB_3ab8_3d80;
          }
          else {
            piVar2 = (int *)*(int *)(unaff_BP + 0x24);
            if (piVar2[1] == 0 && *piVar2 == 0) {
              iVar3 = *(int *)(unaff_BP + -0x40);
              *piVar2 = *(int *)(unaff_BP + -0x42);
              piVar2[1] = iVar3;
              if (*(char *)(unaff_BP + -0x16) == '\0') goto LAB_3ab8_3c47;
            }
            func_0x000297e6(0,*(undefined2 *)(unaff_BP + 0x40),*(undefined2 *)(unaff_BP + 0x42),
                            *(undefined2 *)(unaff_BP + 0x44),*(undefined2 *)(unaff_BP + 0x46));
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2);
            func_0x000297e6(0x22b2);
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2);
            func_0x000297e6(0x22b2);
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2);
            func_0x000297e6(0x22b2);
            uVar21 = 0xe9cf;
            func_0x00029d78(0x22b2);
            uVar6 = 0x22b2;
            func_0x000299d1(0x22b2,uVar11,uVar18,uVar21);
            FUN_3ab8_1ce8(*(undefined2 *)(unaff_BP + -0x42),*(undefined2 *)(unaff_BP + -0x40),
                          unaff_BP + -0x18,*(undefined2 *)(unaff_BP + 0x18),
                          *(undefined2 *)(unaff_BP + 0x1a),*(undefined2 *)(unaff_BP + 0x1c),
                          *(undefined2 *)(unaff_BP + 0x1e),*(undefined2 *)(unaff_BP + 0x20),
                          *(undefined2 *)(unaff_BP + 0x24),unaff_BP + -0x2a,unaff_BP + -0x14,
                          *(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10),
                          *(undefined2 *)(unaff_BP + 0xc),*(undefined2 *)(unaff_BP + 0xe),
                          *(undefined2 *)(unaff_BP + 0x10),*(undefined2 *)(unaff_BP + 0x12),
                          *(undefined2 *)(unaff_BP + 0x14),*(undefined2 *)(unaff_BP + 0x16));
LAB_3ab8_3d80:
            uVar21 = *(undefined2 *)(unaff_BP + 0x1c);
            uVar20 = *(undefined2 *)(unaff_BP + 0x1a);
            uVar12 = *(undefined2 *)(unaff_BP + 0x18);
            uVar7 = 0x3bf;
            uVar6 = func_0x00006608(uVar6,uVar12,uVar20,uVar21,*(undefined2 *)(unaff_BP + 0x1e),
                                    *(undefined2 *)(unaff_BP + 0x20));
            *(undefined2 *)(unaff_BP + -0x18) = uVar6;
          }
          puVar1 = (uint *)(unaff_BP + -0x42);
          uVar5 = *puVar1;
          *puVar1 = *puVar1 + 1;
          *(int *)(unaff_BP + -0x40) = *(int *)(unaff_BP + -0x40) + (uint)(0xfffe < uVar5);
        }
        uVar5 = *(uint *)(unaff_BP + -0x12);
        *puVar4 = *(uint *)(unaff_BP + -0x14);
        puVar4[1] = uVar5;
        *(undefined2 *)(unaff_BP + -0x46) = 0;
        uVar6 = *(undefined2 *)(unaff_BP + -0x5e);
        uVar18 = *(undefined2 *)(unaff_BP + -0x5c);
        *(undefined2 *)(unaff_BP + -0x4a) = uVar6;
        *(undefined2 *)(unaff_BP + -0x48) = uVar18;
        *(undefined2 *)(unaff_BP + -0x4e) = uVar6;
        *(undefined2 *)(unaff_BP + -0x4c) = uVar18;
        *(undefined2 *)(unaff_BP + -0x60) = 1;
        if (*(int *)*(undefined2 *)(unaff_BP + 0x26) != 0) {
          *(int *)(unaff_BP + -0x60) = *(int *)*(undefined2 *)(unaff_BP + 0x26);
        }
        *(undefined2 *)(unaff_BP + -0x44) = *(undefined2 *)(unaff_BP + -0x60);
        while( true ) {
          if (*(int *)*(undefined2 *)(unaff_BP + 0x2c) < *(int *)(unaff_BP + -0x44)) {
            *(int *)*(undefined2 *)(unaff_BP + 0x2c) = *(int *)(unaff_BP + -0x46);
            goto LAB_3ab8_3457;
          }
          if (((*(int *)(unaff_BP + -0x18) != 0) || (*(int *)*(undefined2 *)(unaff_BP + 0x20) != 0))
             || (((*(int *)*(undefined2 *)(unaff_BP + 0x18) != *(int *)(unaff_BP + -0x54) ||
                  (*(int *)*(undefined2 *)(unaff_BP + 0x1a) != *(int *)(unaff_BP + -0x5a))) &&
                 (*(char *)(unaff_BP + -0x16) != '\0')))) break;
          uVar6 = 0;
          uVar21 = 0xea80;
          uVar10 = func_0x00000398(uVar7,*(undefined2 *)(unaff_BP + -0x44));
          if ((*(byte *)((int)uVar10 + 0x16) & 2) == 0) {
            uVar7 = uVar6;
            if ((*(byte *)(unaff_BP + -0x44) & 0x7f) == 0x7f) goto LAB_3ab8_3f15;
          }
          else {
            if ((*(int *)*(undefined2 *)(unaff_BP + 0x26) == 0) &&
               (*(int *)*(undefined2 *)(unaff_BP + 0x26) = *(int *)(unaff_BP + -0x44),
               *(char *)(unaff_BP + -0x16) == '\0')) goto LAB_3ab8_3c47;
            func_0x000297e6(0,*(undefined2 *)(unaff_BP + 0x4a));
            uVar21 = 0xeaf9;
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2,uVar12,uVar20,uVar21);
            func_0x000297e6(0x22b2);
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2);
            func_0x000297e6(0x22b2);
            func_0x00029d78(0x22b2);
            func_0x000299d1(0x22b2);
            func_0x000297e6(0x22b2);
            func_0x00029d78(0x22b2);
            uVar6 = 0x22b2;
            func_0x000299d1(0x22b2);
            FUN_3ab8_2ad5(*(undefined2 *)(unaff_BP + -0x44),unaff_BP + -0x18,
                          *(undefined2 *)(unaff_BP + 0x18),*(undefined2 *)(unaff_BP + 0x1a),
                          *(undefined2 *)(unaff_BP + 0x1c),*(undefined2 *)(unaff_BP + 0x1e),
                          *(undefined2 *)(unaff_BP + 0x20),*(undefined2 *)(unaff_BP + 0x26),
                          unaff_BP + -0x4e,unaff_BP + -0x4a,unaff_BP + -0x46,
                          *(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10),
                          *(undefined2 *)(unaff_BP + 0xc),*(undefined2 *)(unaff_BP + 0xe),
                          *(undefined2 *)(unaff_BP + 0x10),*(undefined2 *)(unaff_BP + 0x12),
                          *(undefined2 *)(unaff_BP + 0x14),*(undefined2 *)(unaff_BP + 0x16));
LAB_3ab8_3f15:
            uVar21 = *(undefined2 *)(unaff_BP + 0x1c);
            uVar20 = *(undefined2 *)(unaff_BP + 0x1a);
            uVar12 = *(undefined2 *)(unaff_BP + 0x18);
            uVar7 = 0x3bf;
            uVar6 = func_0x00006608(uVar6);
            *(undefined2 *)(unaff_BP + -0x18) = uVar6;
          }
          *(int *)(unaff_BP + -0x44) = *(int *)(unaff_BP + -0x44) + 1;
        }
        goto LAB_3ab8_3494;
      }
    }
    uVar7 = 0x22b2;
  } while( true );
LAB_3ab8_3c47:
  uVar7 = 0;
  *(undefined1 *)(unaff_BP + -0x16) = 1;
  *(undefined2 *)(unaff_BP + -0x54) = 0xd8f1;
  goto LAB_3ab8_3494;
}


