/* 3ab8:4531 */

void FUN_3ab8_4531(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int unaff_BP;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar9;
  undefined2 *puVar10;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  int iStack_4;
  uint uStack_2;
  
  uVar8 = 0x3ab8;
  *(undefined1 *)0xb49c = 1;
  while( true ) {
    puVar7 = &uStack_18;
    puVar6 = (undefined2 *)0xc3a0;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar1 = *puVar10;
    }
    puVar6 = &uStack_18;
    iVar4 = func_0x0001b198(uVar8);
    iVar5 = 0x18b3;
    if (iVar4 != 0) {
      puVar7 = (undefined2 *)0xc3a0;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        puVar10 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar1 = *puVar10;
      }
      func_0x00018a6b(0x18b3,*(undefined2 *)0x150);
      FUN_3ab8_4581();
      return;
    }
    while( true ) {
      do {
        *(int *)(unaff_BP + -0x166) = *(int *)(unaff_BP + -0x166) + 1;
        if (*(int *)(unaff_BP + -0x15a) < *(int *)(unaff_BP + -0x166)) {
          FUN_3ab8_4705();
          return;
        }
        uStack_2 = *(uint *)(unaff_BP + -0x166);
        iStack_6 = -0xee5;
        iStack_4 = iVar5;
        uVar9 = func_0x00000398();
        iVar5 = 0;
      } while ((*(byte *)((int)uVar9 + 0x16) & 2) == 0);
      *(undefined2 *)*(undefined2 *)(unaff_BP + 6) = 1;
      uStack_2 = 0;
      iStack_4 = 0;
      iStack_6 = 0xf136;
      func_0x0000daa6();
      uStack_2 = *(undefined2 *)(unaff_BP + -0x166);
      iStack_4 = 0x885;
      uVar8 = 0;
      iStack_6 = 0xf140;
      puVar10 = (undefined2 *)func_0x00000398();
      puVar6 = (undefined2 *)puVar10;
      puVar7 = (undefined2 *)0xc3a0;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) break;
      uStack_2 = (uint)*(byte *)0xc3b5;
      iStack_4 = 0;
      iVar5 = 0x885;
      iStack_6 = -0xf07;
      iVar4 = func_0x00008854();
      if (iVar4 == 0) {
        FUN_3ab8_4660();
        return;
      }
    }
    uStack_2 = (uint)*(byte *)0xc3b5;
    iStack_4 = *(undefined2 *)(unaff_BP + 8);
    iStack_6 = 0;
    uStack_8 = 0xf16e;
    uVar3 = FUN_3ab8_401b();
    *(undefined1 *)0xc3b5 = uVar3;
    if (0x59 < *(byte *)0xc3b4) break;
    uStack_2 = *(uint *)(unaff_BP + 0x46);
    iStack_4 = unaff_BP + -0x17e;
    iStack_6 = unaff_BP + -0x17a;
    uStack_8 = *(undefined2 *)(unaff_BP + 0x3c);
    uStack_a = *(undefined2 *)(unaff_BP + 0x3a);
    uStack_c = *(undefined2 *)(unaff_BP + 0x38);
    uStack_e = *(undefined2 *)(unaff_BP + 0x36);
    uStack_10 = *(undefined2 *)(unaff_BP + 0x34);
    uStack_12 = *(undefined2 *)(unaff_BP + 0x32);
    uStack_14 = *(undefined2 *)(unaff_BP + 0x30);
    uStack_16 = *(undefined2 *)(unaff_BP + 0x2e);
    uStack_18 = *(undefined2 *)(unaff_BP + 0x2c);
    FUN_3ab8_21e1(0xc3a0,*(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10),
                  *(undefined2 *)(unaff_BP + 0x12),*(undefined2 *)(unaff_BP + 0x14),
                  *(undefined2 *)(unaff_BP + 0x16),*(undefined2 *)(unaff_BP + 0x18),
                  *(undefined2 *)(unaff_BP + 0x1a),*(undefined2 *)(unaff_BP + 0x1c),
                  *(undefined2 *)(unaff_BP + 0x1e),*(undefined2 *)(unaff_BP + 0x20),
                  *(undefined2 *)(unaff_BP + 0x22),*(undefined2 *)(unaff_BP + 0x24),
                  *(undefined2 *)(unaff_BP + 0x26),*(undefined2 *)(unaff_BP + 0x28),
                  *(undefined2 *)(unaff_BP + 0x2a));
  }
  FUN_3ab8_4531();
  return;
}


