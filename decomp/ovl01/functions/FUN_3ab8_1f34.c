/* 3ab8:1f34 */

void FUN_3ab8_1f34(void)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint *puVar5;
  int in_AX;
  int iVar6;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar11;
  undefined2 *puVar12;
  
  puVar8 = (undefined2 *)(unaff_BP + -0x126);
  puVar7 = (undefined2 *)(unaff_BP + in_AX * 0x20 + -0x106);
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar3 = *puVar12;
  }
  *(undefined1 *)(unaff_BP + -0x10b) = 10;
  func_0x000297e6(0x3ab8,*(undefined2 *)(unaff_BP + -0x118),*(undefined2 *)(unaff_BP + -0x116),
                  *(undefined2 *)(unaff_BP + -0x114),*(undefined2 *)(unaff_BP + -0x112),10,
                  *(undefined2 *)((uint)*(byte *)(unaff_BP + -0x10c) * 2 + 0xa88),
                  *(undefined2 *)(unaff_BP + -0x11a),*(undefined2 *)(unaff_BP + -0x110),
                  *(undefined2 *)(unaff_BP + -0x10e));
  func_0x00029b6d(0x22b2,unaff_BP + -0x11e);
  func_0x0002996b(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_100d(0x22b2);
  func_0x00029b6d(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_1168(0x22b2);
  func_0x0002996b(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_100d(0x22b2);
  func_0x00029b6d(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x0002996b(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  uVar9 = 0xdef;
  iVar6 = func_0x0000e118(0x22b2);
  if ((iVar6 != 0) && (*(int *)(unaff_BP + 8) != 0 || *(int *)(unaff_BP + 6) != 0)) {
    puVar5 = (uint *)*(undefined2 *)(unaff_BP + 0x18);
    puVar1 = puVar5;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    puVar5[1] = puVar5[1] + (uint)(0xfffe < uVar2);
    if (((int)puVar5[1] <= *(int *)0x142) &&
       (((int)puVar5[1] < *(int *)0x142 || (*puVar5 < *(uint *)0x140)))) {
      uVar9 = 0;
      uVar11 = func_0x00000271(0xdef,*puVar5,puVar5[1]);
      *(undefined2 *)(unaff_BP + -0x13e) = (int)uVar11;
      *(undefined2 *)(unaff_BP + -0x13c) = (int)((ulong)uVar11 >> 0x10);
      puVar7 = (undefined2 *)(unaff_BP + -0x126);
      puVar12 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x13e);
      puVar8 = (undefined2 *)puVar12;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar4 = puVar8;
        puVar8 = puVar8 + 1;
        puVar3 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar4 = *puVar3;
      }
    }
  }
  *(int *)(unaff_BP + -0x136) = *(int *)(unaff_BP + -0x136) + 1;
  do {
    if (*(int *)(unaff_BP + -0x136) <= *(int *)(unaff_BP + -0x128)) {
      FUN_3ab8_1f34();
      return;
    }
    do {
      do {
        uVar10 = uVar9;
        if (*(int *)(unaff_BP + -6) != 0) {
          if ((*(byte *)(unaff_BP + -0x134) & 0x7f) == 0x7f) {
            uVar10 = 0x3bf;
            uVar9 = func_0x00006608(uVar9,*(undefined2 *)(unaff_BP + 0xc),
                                    *(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10)
                                    ,*(undefined2 *)(unaff_BP + 0x12),
                                    *(undefined2 *)(unaff_BP + 0x14));
            *(undefined2 *)*(undefined2 *)(unaff_BP + 10) = uVar9;
            if (*(char *)0xc0e != '\0') {
              FUN_3ab8_21db();
              return;
            }
            if ((*(int *)*(undefined2 *)(unaff_BP + 10) != 0) ||
               (*(int *)*(undefined2 *)(unaff_BP + 0x14) != 0)) {
              func_0x0000daa6(0x3bf,0);
              *(undefined2 *)(unaff_BP + -6) = 0;
              uVar10 = 0x885;
              func_0x0000c3ca(0x885);
            }
          }
          else if ((*(byte *)0xc3be & 1) == 0) {
            uVar10 = 0x885;
            func_0x0000daa6(uVar9,1);
          }
          else {
            uVar10 = 0x885;
            func_0x0000dc89(uVar9);
          }
        }
        puVar1 = (uint *)(unaff_BP + -0x134);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + 1;
        *(int *)(unaff_BP + -0x132) = *(int *)(unaff_BP + -0x132) + (uint)(0xfffe < uVar2);
        iVar6 = *(int *)(unaff_BP + -0x132);
        if (*(int *)(unaff_BP + -2) < iVar6) {
          FUN_3ab8_21db();
          return;
        }
        if ((*(int *)(unaff_BP + -2) <= iVar6) &&
           (*(uint *)(unaff_BP + -4) < *(uint *)(unaff_BP + -0x134))) {
          FUN_3ab8_21db();
          return;
        }
        uVar9 = 0;
        puVar12 = (undefined2 *)func_0x00000271(uVar10,*(uint *)(unaff_BP + -0x134),iVar6);
        puVar8 = (undefined2 *)puVar12;
        puVar7 = (undefined2 *)(unaff_BP + -0x106);
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar4 = puVar7;
          puVar7 = puVar7 + 1;
          puVar3 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar4 = *puVar3;
        }
      } while (((*(byte *)(unaff_BP + -0xe8) & 2) == 0) || (0x59 < *(byte *)(unaff_BP + -0xeb)));
      uVar9 = FUN_3ab8_19b2(unaff_BP + -0x106,*(undefined2 *)(unaff_BP + 0x1c),
                            *(undefined2 *)(unaff_BP + 0x1e),*(undefined2 *)(unaff_BP + 0x20),
                            *(undefined2 *)(unaff_BP + 0x22),*(undefined2 *)(unaff_BP + 0x24),
                            *(undefined2 *)(unaff_BP + 0x26),*(undefined2 *)(unaff_BP + 0x28),
                            *(undefined2 *)(unaff_BP + 0x2a),*(undefined2 *)(unaff_BP + 0x2c),
                            *(undefined2 *)(unaff_BP + 0x2e),*(undefined2 *)(unaff_BP + 0x30),
                            *(undefined2 *)(unaff_BP + 0x32),*(undefined2 *)(unaff_BP + 0x34),
                            *(undefined2 *)(unaff_BP + 0x36),*(undefined2 *)(unaff_BP + 0x38),
                            *(undefined2 *)(unaff_BP + 0x3a),*(undefined2 *)(unaff_BP + 0x3c),
                            *(undefined2 *)(unaff_BP + 0x3e),*(undefined2 *)(unaff_BP + 0x40),
                            *(undefined2 *)(unaff_BP + 0x42),*(undefined2 *)(unaff_BP + 0x44),
                            *(undefined2 *)(unaff_BP + 0x46),*(undefined2 *)(unaff_BP + 0x48),
                            *(undefined2 *)(unaff_BP + 0x4a),*(undefined2 *)(unaff_BP + 0x4c),
                            *(undefined2 *)(unaff_BP + 0x4e),*(undefined2 *)(unaff_BP + 0x50),
                            *(undefined2 *)(unaff_BP + 0x52));
      *(undefined2 *)(unaff_BP + -0x128) = uVar9;
      func_0x000297e6(0);
      func_0x00029b6d(0x22b2);
      func_0x00029d78(0x22b2);
      uVar9 = 0x22b2;
      iVar6 = FUN_28b3_0f51(0x22b2);
    } while (iVar6 == 0);
    *(undefined2 *)(unaff_BP + -0x136) = 1;
  } while( true );
}


