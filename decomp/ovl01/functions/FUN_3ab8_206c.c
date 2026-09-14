/* 3ab8:206c */

void FUN_3ab8_206c(void)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  int iVar6;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar10;
  
  uVar5 = 0x3ab8;
  puVar10 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x13e);
  puVar8 = (undefined2 *)puVar10;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar4 = puVar8;
    puVar8 = puVar8 + 1;
    puVar3 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar4 = *puVar3;
  }
  *(int *)(unaff_BP + -0x136) = *(int *)(unaff_BP + -0x136) + 1;
  do {
    if (*(int *)(unaff_BP + -0x136) <= *(int *)(unaff_BP + -0x128)) {
      FUN_3ab8_1f34();
      return;
    }
    do {
      do {
        uVar9 = uVar5;
        if (*(int *)(unaff_BP + -6) != 0) {
          if ((*(byte *)(unaff_BP + -0x134) & 0x7f) == 0x7f) {
            uVar9 = 0x3bf;
            uVar5 = func_0x00006608(uVar5,*(undefined2 *)(unaff_BP + 0xc),
                                    *(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10)
                                    ,*(undefined2 *)(unaff_BP + 0x12),
                                    *(undefined2 *)(unaff_BP + 0x14));
            *(undefined2 *)*(undefined2 *)(unaff_BP + 10) = uVar5;
            if (*(char *)0xc0e != '\0') {
              FUN_3ab8_21db();
              return;
            }
            if ((*(int *)*(undefined2 *)(unaff_BP + 10) != 0) ||
               (*(int *)*(undefined2 *)(unaff_BP + 0x14) != 0)) {
              func_0x0000daa6(0x3bf,0);
              *(undefined2 *)(unaff_BP + -6) = 0;
              uVar9 = 0x885;
              func_0x0000c3ca(0x885);
            }
          }
          else if ((*(byte *)0xc3be & 1) == 0) {
            uVar9 = 0x885;
            func_0x0000daa6(uVar5,1);
          }
          else {
            uVar9 = 0x885;
            func_0x0000dc89(uVar5);
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
        uVar5 = 0;
        puVar10 = (undefined2 *)func_0x00000271(uVar9,*(uint *)(unaff_BP + -0x134),iVar6);
        puVar7 = (undefined2 *)puVar10;
        puVar8 = (undefined2 *)(unaff_BP + -0x106);
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar4 = puVar8;
          puVar8 = puVar8 + 1;
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar4 = *puVar3;
        }
      } while (((*(byte *)(unaff_BP + -0xe8) & 2) == 0) || (0x59 < *(byte *)(unaff_BP + -0xeb)));
      uVar5 = FUN_3ab8_19b2(unaff_BP + -0x106,*(undefined2 *)(unaff_BP + 0x1c),
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
      *(undefined2 *)(unaff_BP + -0x128) = uVar5;
      func_0x000297e6(0);
      func_0x00029b6d(0x22b2);
      func_0x00029d78(0x22b2);
      uVar5 = 0x22b2;
      iVar6 = FUN_28b3_0f51(0x22b2);
    } while (iVar6 == 0);
    *(undefined2 *)(unaff_BP + -0x136) = 1;
  } while( true );
}


