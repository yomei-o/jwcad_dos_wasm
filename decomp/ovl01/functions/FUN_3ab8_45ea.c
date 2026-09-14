/* 3ab8:45ea */

void FUN_3ab8_45ea(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int unaff_BP;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  int iStack_2;
  
  uVar7 = 0x3ab8;
  while( true ) {
    uStack_4 = 0xf16e;
    iStack_2 = uVar7;
    uVar3 = FUN_3ab8_401b();
    *(undefined1 *)0xc3b5 = uVar3;
    if (0x59 < *(byte *)0xc3b4) {
      FUN_3ab8_4531();
      return;
    }
    iStack_2 = unaff_BP + -0x17a;
    uStack_4 = *(undefined2 *)(unaff_BP + 0x3c);
    uStack_6 = *(undefined2 *)(unaff_BP + 0x3a);
    uStack_8 = *(undefined2 *)(unaff_BP + 0x38);
    uStack_a = *(undefined2 *)(unaff_BP + 0x36);
    uStack_c = *(undefined2 *)(unaff_BP + 0x34);
    uStack_e = *(undefined2 *)(unaff_BP + 0x32);
    uStack_10 = *(undefined2 *)(unaff_BP + 0x30);
    uStack_12 = *(undefined2 *)(unaff_BP + 0x2e);
    uStack_14 = *(undefined2 *)(unaff_BP + 0x2c);
    FUN_3ab8_21e1(0xc3a0,*(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10),
                  *(undefined2 *)(unaff_BP + 0x12),*(undefined2 *)(unaff_BP + 0x14),
                  *(undefined2 *)(unaff_BP + 0x16),*(undefined2 *)(unaff_BP + 0x18),
                  *(undefined2 *)(unaff_BP + 0x1a),*(undefined2 *)(unaff_BP + 0x1c),
                  *(undefined2 *)(unaff_BP + 0x1e),*(undefined2 *)(unaff_BP + 0x20),
                  *(undefined2 *)(unaff_BP + 0x22),*(undefined2 *)(unaff_BP + 0x24),
                  *(undefined2 *)(unaff_BP + 0x26),*(undefined2 *)(unaff_BP + 0x28),
                  *(undefined2 *)(unaff_BP + 0x2a));
    puVar6 = &uStack_14;
    puVar5 = (undefined2 *)0xc3a0;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar9;
    }
    puVar5 = &uStack_14;
    iVar4 = func_0x0001b198(uVar7);
    if (iVar4 != 0) break;
    while( true ) {
      do {
        *(int *)(unaff_BP + -0x166) = *(int *)(unaff_BP + -0x166) + 1;
        if (*(int *)(unaff_BP + -0x15a) < *(int *)(unaff_BP + -0x166)) {
          FUN_3ab8_4705();
          return;
        }
        iStack_2 = -0xee5;
        uVar8 = func_0x00000398();
      } while ((*(byte *)((int)uVar8 + 0x16) & 2) == 0);
      *(undefined2 *)*(undefined2 *)(unaff_BP + 6) = 1;
      iStack_2 = 0xf136;
      func_0x0000daa6();
      uVar7 = 0;
      iStack_2 = 0xf140;
      puVar9 = (undefined2 *)func_0x00000398();
      puVar5 = (undefined2 *)puVar9;
      puVar6 = (undefined2 *)0xc3a0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      if ((*(char *)0xb1ea == '\0') || (*(char *)0xb1ea == '\x03')) break;
      iStack_2 = -0xf07;
      iVar4 = func_0x00008854();
      if (iVar4 == 0) {
        FUN_3ab8_4660();
        return;
      }
    }
  }
  puVar6 = (undefined2 *)0xc3a0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    puVar9 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = *puVar9;
  }
  func_0x00018a6b(0x18b3,*(undefined2 *)0x150);
  FUN_3ab8_4581();
  return;
}


