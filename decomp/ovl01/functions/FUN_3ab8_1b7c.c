/* 3ab8:1b7c */

void FUN_3ab8_1b7c(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  int iVar9;
  int unaff_BP;
  undefined2 *puVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int iStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  int iStack_4;
  
  while( true ) {
    iStack_4 = 0xc701;
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xc70b;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xc713;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xc718;
    func_0x00029d78();
    iStack_12 = 0x22b2;
    iStack_14 = 0xc722;
    func_0x000299d1();
    iStack_12 = 0;
    iStack_14 = 0x22b2;
    uStack_16 = 0xc72a;
    FUN_1def_05d1();
    iStack_4 = 0xc734;
    func_0x000297e6();
    iStack_4 = 0xc739;
    func_0x00029d78();
    iStack_4 = 0xc741;
    func_0x00029c74();
    iStack_4 = 0xc749;
    func_0x00029c74();
    iStack_4 = 0xc751;
    func_0x00029983();
    iStack_4 = 0xc759;
    func_0x000297e6();
    iStack_4 = 0xc75e;
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xc768;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xc770;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xc775;
    func_0x00029d78();
    iStack_12 = 0x22b2;
    iStack_14 = 0xc77f;
    func_0x000299d1();
    iStack_12 = 0;
    iStack_14 = 0x22b2;
    uStack_16 = 0xc787;
    func_0x0001e558();
    iStack_4 = 0xc791;
    func_0x000297e6();
    iStack_4 = 0xc796;
    func_0x00029d78();
    iStack_4 = 0xc79e;
    func_0x00029c74();
    iStack_4 = 0xc7a6;
    func_0x00029c74();
    iStack_4 = 0xc7ae;
    func_0x00029983();
    iStack_4 = 0xc7b7;
    func_0x000297e6();
    iStack_4 = 0xc7c0;
    func_0x00029b6d();
    iStack_4 = 0xc7c5;
    func_0x00029d78();
    iStack_4 = 0xc7ca;
    uVar13 = FUN_28b3_0f51();
    iVar9 = (int)((ulong)uVar13 >> 0x10);
    uVar7 = (uint)uVar13;
    *(uint *)(unaff_BP + -0x30) = uVar7;
    *(int *)(unaff_BP + -0x2e) = iVar9;
    if (*(int *)0xcb6 != 0) {
      uVar5 = *(uint *)(unaff_BP + -10);
      iVar6 = *(int *)(unaff_BP + -8);
      iStack_4 = uVar5 - uVar7;
      *(int *)(unaff_BP + -0x28) = iStack_4;
      *(int *)(unaff_BP + -0x26) = (iVar6 - iVar9) - (uint)(uVar5 < uVar7);
      uStack_6 = 0x22b2;
      uStack_8 = 0xc7ee;
      uVar13 = func_0x00021eee();
      *(undefined2 *)(unaff_BP + -10) = (int)uVar13;
      *(undefined2 *)(unaff_BP + -8) = (int)((ulong)uVar13 >> 0x10);
    }
    iStack_4 = *(undefined2 *)(unaff_BP + 0x34);
    uStack_6 = *(undefined2 *)(unaff_BP + 0x32);
    uStack_8 = *(undefined2 *)(unaff_BP + 0x30);
    uStack_a = *(undefined2 *)(unaff_BP + 0x2e);
    uStack_c = *(undefined2 *)(unaff_BP + 0x2c);
    uStack_e = *(undefined2 *)(unaff_BP + 0x2a);
    uStack_10 = *(undefined2 *)(unaff_BP + 0x28);
    puVar8 = &uStack_30;
    puVar10 = (undefined2 *)(unaff_BP + -0x20);
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar2 = *puVar1;
    }
    puVar8 = (undefined2 *)FUN_21f2_001a();
    puVar10 = (undefined2 *)(unaff_BP + -0x20);
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar2 = puVar10;
      puVar10 = puVar10 + 1;
      puVar1 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = *puVar1;
    }
    uVar11 = 0;
    if (*(int *)0xcb6 != 0) {
      iStack_4 = *(uint *)(unaff_BP + -10) + *(uint *)(unaff_BP + -0x30);
      uVar7 = (uint)CARRY2(*(uint *)(unaff_BP + -10),*(uint *)(unaff_BP + -0x30));
      uVar5 = *(uint *)(unaff_BP + -8) + *(uint *)(unaff_BP + -0x2e);
      uVar11 = CARRY2(*(uint *)(unaff_BP + -8),*(uint *)(unaff_BP + -0x2e)) || CARRY2(uVar5,uVar7);
      *(int *)(unaff_BP + -0x28) = iStack_4;
      *(int *)(unaff_BP + -0x26) = uVar5 + uVar7;
      uStack_6 = 0x1bb4;
      uStack_8 = 0xc854;
      uVar13 = func_0x00021eee();
      *(undefined2 *)(unaff_BP + -10) = (int)uVar13;
      *(undefined2 *)(unaff_BP + -8) = (int)((ulong)uVar13 >> 0x10);
    }
    while( true ) {
      iStack_4 = 0xc5ab;
      func_0x00029834();
      iStack_4 = 0xc5b4;
      func_0x00029834();
      iStack_4 = 0xc5b9;
      FUN_28b3_1181();
      if (!(bool)uVar11) break;
      iStack_4 = 0xc594;
      func_0x00029834();
      iStack_4 = 0x22b2;
      uStack_6 = 0xc59d;
      FUN_28b3_10e4();
      iStack_4 = 0xc5a3;
      func_0x000299d1();
    }
    while( true ) {
      iStack_4 = 0xc5de;
      func_0x00029834();
      iStack_4 = 0xc5e6;
      func_0x00029834();
      iStack_4 = 0xc5eb;
      FUN_28b3_1181();
      if (!(bool)uVar11) break;
      iStack_4 = 0xc5c6;
      func_0x00029834();
      iStack_4 = 0x22b2;
      uStack_6 = 0xc5cf;
      func_0x00029c74();
      iStack_4 = 0xc5d5;
      func_0x000299d1();
    }
    iStack_4 = 0xc5f5;
    func_0x00029834();
    iStack_4 = 0xc5fe;
    func_0x00029c2c();
    uVar3 = *(undefined2 *)(unaff_BP + -10);
    uVar4 = *(undefined2 *)(unaff_BP + -8);
    *(undefined2 *)(unaff_BP + -0x3c) = 0;
    *(undefined2 *)(unaff_BP + -0x3e) = 0;
    *(undefined2 *)(unaff_BP + -0x40) = uVar4;
    *(undefined2 *)(unaff_BP + -0x42) = uVar3;
    iStack_4 = 0xc61c;
    func_0x00029da5();
    iStack_4 = 0xc621;
    FUN_28b3_117c();
    iStack_4 = 0xc626;
    uVar13 = FUN_28b3_0f51();
    iStack_4 = (int)uVar13;
    *(undefined2 *)(unaff_BP + -0x28) = iStack_4;
    *(undefined2 *)(unaff_BP + -0x26) = (int)((ulong)uVar13 >> 0x10);
    uStack_6 = 0x22b2;
    uStack_8 = 0xc633;
    uVar12 = func_0x00021eee();
    iVar9 = (int)(uVar12 >> 0x10);
    *(undefined2 *)(unaff_BP + -10) = (int)uVar12;
    *(int *)(unaff_BP + -8) = iVar9;
    if (0x167ffff < uVar12) {
      *(undefined2 *)(unaff_BP + -10) = (int)uVar12;
      *(int *)(unaff_BP + -8) = iVar9 + -0x168;
    }
    puVar10 = (undefined2 *)(*(int *)(unaff_BP + -0x24) * 0x20 + *(int *)(unaff_BP + 6));
    puVar8 = (undefined2 *)(unaff_BP + -0x20);
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar2 = puVar10;
      puVar10 = puVar10 + 1;
      puVar1 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = *puVar1;
    }
    *(int *)(unaff_BP + -0x24) = *(int *)(unaff_BP + -0x24) + 1;
    if (*(int *)(unaff_BP + -0x22) < *(int *)(unaff_BP + -0x24)) break;
    puVar8 = (undefined2 *)(unaff_BP + -0x20);
    puVar10 = (undefined2 *)(*(int *)(unaff_BP + -0x24) * 0x20 + *(int *)(unaff_BP + 6));
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar2 = *puVar1;
    }
    iStack_4 = *(undefined2 *)(unaff_BP + 0x34);
    uStack_6 = *(undefined2 *)(unaff_BP + 0x32);
    uStack_8 = *(undefined2 *)(unaff_BP + 0x30);
    uStack_a = *(undefined2 *)(unaff_BP + 0x2e);
    uStack_c = *(undefined2 *)(unaff_BP + 0x2c);
    uStack_e = *(undefined2 *)(unaff_BP + 0x2a);
    uStack_10 = *(undefined2 *)(unaff_BP + 0x28);
    iStack_12 = unaff_BP + -0x38;
    iStack_14 = unaff_BP + -0x34;
    uStack_16 = 0x1bb4;
    uStack_18 = 0xc6af;
    func_0x000297e6();
    uStack_16 = 0x22b2;
    uStack_18 = 0xc6b4;
    func_0x00029d78();
    uStack_1e = 0x22b2;
    uStack_20 = 0xc6be;
    func_0x000299d1();
    uStack_1e = 0x22b2;
    uStack_20 = 0xc6c6;
    func_0x000297e6();
    uStack_1e = 0x22b2;
    uStack_20 = 0xc6cb;
    func_0x00029d78();
    uStack_26 = 0x22b2;
    uStack_28 = 0xc6d5;
    func_0x000299d1();
    uStack_26 = *(undefined2 *)(unaff_BP + 0x16);
    uStack_28 = *(undefined2 *)(unaff_BP + 0x14);
    uStack_2a = *(undefined2 *)(unaff_BP + 0x12);
    uStack_2c = *(undefined2 *)(unaff_BP + 0x10);
    uStack_2e = *(undefined2 *)(unaff_BP + 0xe);
    uStack_30 = *(undefined2 *)(unaff_BP + 0xc);
    FUN_3ab8_04af(*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
    iStack_4 = 0xc6fc;
    func_0x000297e6();
  }
  FUN_3ab8_1cdf();
  return;
}


