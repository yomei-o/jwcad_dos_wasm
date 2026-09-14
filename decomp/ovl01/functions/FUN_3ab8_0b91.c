/* 3ab8:0b91 */

void FUN_3ab8_0b91(void)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint *puVar5;
  undefined2 uVar6;
  int iVar7;
  int unaff_BP;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar11;
  undefined4 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  
  uVar10 = 0x3ab8;
  do {
    func_0x0000dc89(uVar10);
    uVar6 = 0x885;
    while( true ) {
      while( true ) {
        do {
          puVar1 = (uint *)(unaff_BP + -0x4c);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + 1;
          *(int *)(unaff_BP + -0x4a) = *(int *)(unaff_BP + -0x4a) + (uint)(0xfffe < uVar2);
          iVar7 = *(int *)(unaff_BP + -0x4a);
          if (*(int *)(unaff_BP + -2) < iVar7) {
            FUN_3ab8_0e44();
            return;
          }
          if ((*(int *)(unaff_BP + -2) <= iVar7) &&
             (*(uint *)(unaff_BP + -4) < *(uint *)(unaff_BP + -0x4c))) {
            FUN_3ab8_0e44();
            return;
          }
          uVar10 = 0;
          puVar11 = (undefined2 *)func_0x0000013f(uVar6,*(uint *)(unaff_BP + -0x4c),iVar7);
          puVar9 = (undefined2 *)puVar11;
          puVar8 = (undefined2 *)(unaff_BP + -0x26);
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar4 = puVar8;
            puVar8 = puVar8 + 1;
            puVar3 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar4 = *puVar3;
          }
          if (((*(byte *)(unaff_BP + -0x12) & 2) != 0) && (*(byte *)(unaff_BP + -0x15) < 0x5a)) {
            uVar10 = *(undefined2 *)(unaff_BP + 0x46);
            uVar6 = *(undefined2 *)(unaff_BP + 0x44);
            uVar18 = *(undefined2 *)(unaff_BP + 0x3e);
            uVar17 = *(undefined2 *)(unaff_BP + 0x3c);
            uVar16 = *(undefined2 *)(unaff_BP + 0x36);
            uVar15 = *(undefined2 *)(unaff_BP + 0x34);
            uVar14 = *(undefined2 *)(unaff_BP + 0x2e);
            uVar13 = *(undefined2 *)(unaff_BP + 0x2c);
            FUN_3ab8_0568(unaff_BP + -0x26,*(undefined2 *)(unaff_BP + 0x1c),
                          *(undefined2 *)(unaff_BP + 0x1e),*(undefined2 *)(unaff_BP + 0x20),
                          *(undefined2 *)(unaff_BP + 0x22),*(undefined2 *)(unaff_BP + 0x24),
                          *(undefined2 *)(unaff_BP + 0x26),*(undefined2 *)(unaff_BP + 0x28),
                          *(undefined2 *)(unaff_BP + 0x2a),uVar13,uVar14,
                          *(undefined2 *)(unaff_BP + 0x30),*(undefined2 *)(unaff_BP + 0x32),uVar15,
                          uVar16,*(undefined2 *)(unaff_BP + 0x38),*(undefined2 *)(unaff_BP + 0x3a),
                          uVar17,uVar18,*(undefined2 *)(unaff_BP + 0x40),
                          *(undefined2 *)(unaff_BP + 0x42),uVar6,uVar10,
                          *(undefined2 *)(unaff_BP + 0x48),*(undefined2 *)(unaff_BP + 0x4a));
            func_0x000297e6(0);
            func_0x000299d1(0x22b2);
            func_0x000297e6(0x22b2);
            func_0x000299d1(0x22b2);
            func_0x000297e6(0x22b2);
            func_0x000299d1(0x22b2);
            uVar19 = 0xb7f8;
            func_0x000297e6(0x22b2);
            func_0x000299d1(0x22b2,uVar6,uVar10,uVar19);
            uVar10 = 0xb80a;
            func_0x000297e6(0x22b2);
            func_0x000299d1(0x22b2,uVar17,uVar18,uVar10);
            uVar10 = 0xb81c;
            func_0x000297e6(0x22b2);
            func_0x000299d1(0x22b2,uVar15,uVar16,uVar10);
            func_0x000297e6(0x22b2);
            func_0x00029d78(0x22b2);
            uVar10 = 0xb83b;
            func_0x000299b9(0x22b2);
            func_0x000299d1(0x22b2,uVar13,uVar14,uVar10);
            uVar10 = 0x1bb4;
            iVar7 = FUN_1885_52fe(unaff_BP + -8,unaff_BP + -0x10,unaff_BP + -0xe,unaff_BP + -0x28);
            if (iVar7 == 0) {
              uVar10 = 0x1b6e;
              iVar7 = func_0x0001b72d(0x1bb4,unaff_BP + -8,unaff_BP + -0x10,unaff_BP + -0xe,
                                      unaff_BP + -0x28);
              if (iVar7 != 0) {
                FUN_28b3_0d8b(0x1b6e);
                func_0x00029983(0x22b2);
                FUN_28b3_0d8b(0x22b2);
                func_0x00029983(0x22b2);
                FUN_28b3_0d8b(0x22b2);
                func_0x00029983(0x22b2);
                uVar10 = *(undefined2 *)((uint)*(byte *)(unaff_BP + -0x16) * 2 + 0xa88);
                *(undefined2 *)(unaff_BP + -0x66) = uVar10;
                FUN_28b3_0d8b(0x22b2,2,uVar10);
                func_0x00029d78(0x22b2);
                uVar10 = FUN_28b3_0f51(0x22b2);
                FUN_28b3_0d8b(0x22b2,uVar10);
                func_0x00029d78(0x22b2);
                uVar10 = FUN_28b3_0f51(0x22b2);
                FUN_28b3_0d8b(0x22b2,uVar10);
                func_0x00029d78(0x22b2);
                uVar10 = FUN_28b3_0f51(0x22b2);
                FUN_28b3_0d8b(0x22b2,uVar10);
                func_0x0002996b(0x22b2);
                func_0x00029d78(0x22b2);
                uVar6 = FUN_28b3_0f51(0x22b2);
                uVar10 = 0xdef;
                func_0x0000f19e(0x22b2,uVar6);
                if (*(int *)(unaff_BP + 8) != 0 || *(int *)(unaff_BP + 6) != 0) {
                  puVar5 = (uint *)*(undefined2 *)(unaff_BP + 0x18);
                  puVar1 = puVar5;
                  uVar2 = *puVar1;
                  *puVar1 = *puVar1 + 1;
                  puVar5[1] = puVar5[1] + (uint)(0xfffe < uVar2);
                  if (((int)puVar5[1] <= *(int *)0x13e) &&
                     (((int)puVar5[1] < *(int *)0x13e || (*puVar5 < *(uint *)0x13c)))) {
                    uVar10 = 0;
                    uVar12 = func_0x0000013f(0xdef,*puVar5,puVar5[1]);
                    *(undefined2 *)(unaff_BP + -0x6e) = (int)uVar12;
                    *(undefined2 *)(unaff_BP + -0x6c) = (int)((ulong)uVar12 >> 0x10);
                    puVar8 = (undefined2 *)(unaff_BP + -0x26);
                    puVar11 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x6e);
                    puVar9 = (undefined2 *)puVar11;
                    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
                      puVar4 = puVar9;
                      puVar9 = puVar9 + 1;
                      puVar3 = puVar8;
                      puVar8 = puVar8 + 1;
                      *puVar4 = *puVar3;
                    }
                  }
                }
              }
            }
          }
          uVar6 = uVar10;
        } while (*(int *)(unaff_BP + -6) == 0);
        if ((*(byte *)(unaff_BP + -0x4c) & 0x7f) != 0x7f) break;
        uVar10 = func_0x00006608(uVar10,*(undefined2 *)(unaff_BP + 0xc),
                                 *(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10),
                                 *(undefined2 *)(unaff_BP + 0x12),*(undefined2 *)(unaff_BP + 0x14));
        *(undefined2 *)*(undefined2 *)(unaff_BP + 10) = uVar10;
        if (*(char *)0xc0e != '\0') {
          return;
        }
        if ((*(int *)*(undefined2 *)(unaff_BP + 10) != 0) ||
           (uVar6 = 0x3bf, *(int *)*(undefined2 *)(unaff_BP + 0x14) != 0)) {
          func_0x0000daa6(0x3bf,0);
          *(undefined2 *)(unaff_BP + -6) = 0;
          func_0x0000c3ca(0x885);
          uVar6 = 0x885;
        }
      }
      if ((*(byte *)0xc3be & 1) != 0) break;
      func_0x0000daa6(uVar10,1);
      uVar6 = 0x885;
    }
  } while( true );
}


