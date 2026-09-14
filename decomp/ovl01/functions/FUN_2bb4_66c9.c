/* 2bb4:66c9 */

/* WARNING: Instruction at (ram,0x0003220c) overlaps instruction at (ram,0x0003220b)
    */

void FUN_2bb4_66c9(void)

{
  undefined2 *puVar1;
  int unaff_BP;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 uVar4;
  bool in_OF;
  undefined4 uVar5;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uVar2 = 0x2bb4;
  if (in_OF) {
    uStack_2 = *(undefined2 *)0x93c0;
    uStack_4 = 0x2bb4;
    uVar5 = FUN_1def_2828();
    *(undefined2 *)(unaff_BP + -0x24) = (int)uVar5;
    *(undefined2 *)(unaff_BP + -0x22) = (int)((ulong)uVar5 >> 0x10);
    FUN_32b2_6d14();
    FUN_32b2_70dc();
    FUN_32b2_710c();
    uStack_2 = 0x32b2;
    uStack_4 = 0x21fa;
    FUN_32b2_6eb1();
    uStack_2 = 0x32b2;
    uStack_4 = 0x2203;
    FUN_32b2_6d14();
    uStack_2 = 0x32b2;
    uVar2 = 0x32b2;
    uStack_4 = 0x220c;
    FUN_32b2_70dc();
  }
  uStack_4 = 0x2214;
  uStack_2 = uVar2;
  FUN_32b2_710c();
  FUN_32b2_6eb1();
  uVar5 = FUN_1def_2828(0x32b2,*(undefined2 *)0x93c0,*(undefined2 *)0x93c2,*(undefined2 *)0x93c4,
                        *(undefined2 *)0x93c6,*(undefined2 *)0x93c0,*(undefined2 *)0x93c2,
                        *(undefined2 *)0x93c4,*(undefined2 *)0x93c6);
  *(undefined2 *)(unaff_BP + -0xa0) = (int)uVar5;
  *(undefined2 *)(unaff_BP + -0x9e) = (int)((ulong)uVar5 >> 0x10);
  uVar5 = FUN_32b2_4d78();
  *(undefined2 *)(unaff_BP + -0x28) = (int)uVar5;
  *(undefined2 *)(unaff_BP + -0x26) = (int)((ulong)uVar5 >> 0x10);
  uVar5 = FUN_32b2_4d78();
  *(undefined2 *)(unaff_BP + -0x94) = (int)uVar5;
  *(undefined2 *)(unaff_BP + -0x92) = (int)((ulong)uVar5 >> 0x10);
  FUN_32b2_6d94();
  FUN_32b2_710c();
  FUN_32b2_6e99();
  FUN_32b2_6eb1();
  puVar1 = (undefined2 *)FUN_32b2_75ec();
  *(undefined2 *)(unaff_BP + -0x9c) = *puVar1;
  *(undefined2 *)(unaff_BP + -0x9a) = puVar1[1];
  *(undefined2 *)(unaff_BP + -0x98) = puVar1[2];
  *(undefined2 *)(unaff_BP + -0x96) = puVar1[3];
  FUN_32b2_6d14();
  FUN_32b2_6fc7();
  FUN_32b2_6d14();
  uStack_2 = 0x22dd;
  FUN_32b2_6eb1();
  uStack_2 = 0x22e2;
  FUN_32b2_75fe();
  uVar3 = (undefined1 *)0xfff7 < &stack0x0000;
  uVar4 = &stack0x0000 == (undefined1 *)0xfff8;
  FUN_32b2_6d14();
  FUN_32b2_6e99();
  FUN_32b2_6fc7();
  FUN_32b2_7191();
  if ((bool)uVar3 || (bool)uVar4) {
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_718c();
    FUN_32b2_7124();
  }
  else {
    FUN_32b2_6d14();
    FUN_32b2_7124();
  }
  FUN_32b2_710c();
  FUN_32b2_6eb1();
  FUN_32b2_6d94();
  FUN_32b2_710c();
  FUN_32b2_6e99();
  uStack_2 = 0x32b2;
  uStack_4 = 0x237a;
  FUN_32b2_6eb1();
  uStack_2 = 0x32b2;
  uStack_4 = 0x237f;
  puVar1 = (undefined2 *)FUN_32b2_75ec();
  *(undefined2 *)(unaff_BP + -0x9c) = *puVar1;
  *(undefined2 *)(unaff_BP + -0x9a) = puVar1[1];
  *(undefined2 *)(unaff_BP + -0x98) = puVar1[2];
  *(undefined2 *)(unaff_BP + -0x96) = puVar1[3];
  FUN_32b2_6d14();
  FUN_32b2_6fc7();
  FUN_32b2_6d14();
  uStack_4 = 0x32b2;
  FUN_32b2_6eb1();
  uStack_4 = 0x32b2;
  FUN_32b2_75fe();
  uVar3 = (undefined1 *)0xfff7 < &uStack_4;
  uVar4 = &stack0x0000 == (undefined1 *)0xfffc;
  FUN_32b2_6d14();
  FUN_32b2_6e99();
  FUN_32b2_6fc7();
  FUN_32b2_7191();
  if ((bool)uVar3 || (bool)uVar4) {
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_7173();
    FUN_32b2_7124();
  }
  else {
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_7173();
    FUN_32b2_7124();
  }
  FUN_32b2_710c();
  FUN_32b2_6eb1();
  FUN_32b2_6d14();
  FUN_32b2_70dc();
  FUN_32b2_710c();
  FUN_32b2_6e99();
  FUN_32b2_6eb1();
  FUN_32b2_6d14();
  FUN_32b2_6d14();
  FUN_32b2_7154();
  FUN_32b2_710c();
  FUN_32b2_6e99();
  FUN_32b2_7191();
  if ((bool)uVar3) {
    FUN_32b2_6d14();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    FUN_32b2_6eb1();
    *(undefined2 *)(unaff_BP + -0x28) = *(undefined2 *)(unaff_BP + -0x28);
    *(int *)(unaff_BP + -0x26) = *(int *)(unaff_BP + -0x26) + -0x5a;
    *(undefined2 *)(unaff_BP + -0x94) = *(undefined2 *)(unaff_BP + -0x94);
    *(int *)(unaff_BP + -0x92) = *(int *)(unaff_BP + -0x92) + -0x5a;
  }
  uStack_2 = 0x32b2;
  uStack_4 = 0x24ef;
  uVar5 = FUN_2bb4_63ae();
  *(undefined2 *)(unaff_BP + -10) = (int)uVar5;
  *(undefined2 *)(unaff_BP + -8) = (int)((ulong)uVar5 >> 0x10);
  uStack_2 = 0x32b2;
  uStack_4 = 0x250b;
  uVar5 = FUN_2bb4_63ae();
  *(undefined2 *)(unaff_BP + -0x12) = (int)uVar5;
  *(undefined2 *)(unaff_BP + -0x10) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = CARRY2(*(uint *)(unaff_BP + -0x92),*(uint *)(unaff_BP + -0xc)) ||
          CARRY2(*(uint *)(unaff_BP + -0x92) + *(uint *)(unaff_BP + -0xc),
                 (uint)CARRY2(*(uint *)(unaff_BP + -0x94),*(uint *)(unaff_BP + -0xe)));
  uStack_2 = 0x32b2;
  uStack_4 = 0x2527;
  uVar5 = FUN_2bb4_63ae();
  *(undefined2 *)(unaff_BP + -0xe) = (int)uVar5;
  *(undefined2 *)(unaff_BP + -0xc) = (int)((ulong)uVar5 >> 0x10);
  FUN_32b2_6d14();
  FUN_32b2_6d14();
  FUN_32b2_7191();
  uVar3 = 0;
  if ((bool)uVar4) {
    FUN_32b2_6d14();
    FUN_32b2_6fd6();
    FUN_32b2_6eb1();
    uStack_2 = 0x32b2;
    uStack_4 = 0x256d;
    uVar5 = FUN_2bb4_63ae();
    *(undefined2 *)(unaff_BP + -0x74) = (int)uVar5;
    *(undefined2 *)(unaff_BP + -0x72) = (int)((ulong)uVar5 >> 0x10);
    uVar3 = 0xb4 < *(uint *)(unaff_BP + -0x10) ||
            0xb4 - *(uint *)(unaff_BP + -0x10) < (uint)(*(int *)(unaff_BP + -0x12) != 0);
    uStack_2 = 0x32b2;
    uStack_4 = 0x2586;
    uVar5 = FUN_2bb4_63ae();
    *(undefined2 *)(unaff_BP + -0x80) = (int)uVar5;
    *(undefined2 *)(unaff_BP + -0x7e) = (int)((ulong)uVar5 >> 0x10);
    uVar2 = *(undefined2 *)(unaff_BP + -0x72);
    *(undefined2 *)(unaff_BP + -0x12) = *(undefined2 *)(unaff_BP + -0x74);
    *(undefined2 *)(unaff_BP + -0x10) = uVar2;
    uVar2 = *(undefined2 *)(unaff_BP + -0x7e);
    *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x80);
    *(undefined2 *)(unaff_BP + -0xc) = uVar2;
  }
  FUN_32b2_6d14();
  FUN_32b2_6d14();
  FUN_32b2_7191();
  if ((bool)uVar3) {
    FUN_32b2_6d14();
    FUN_32b2_6fd6();
    FUN_32b2_6eb1();
    uStack_2 = 0x32b2;
    uStack_4 = 0x25e6;
    uVar5 = FUN_2bb4_63ae();
    *(undefined2 *)(unaff_BP + -0x74) = (int)uVar5;
    *(undefined2 *)(unaff_BP + -0x72) = (int)((ulong)uVar5 >> 0x10);
    uStack_2 = 0x32b2;
    uStack_4 = 0x2601;
    uVar5 = FUN_2bb4_63ae();
    *(undefined2 *)(unaff_BP + -0x80) = (int)uVar5;
    *(undefined2 *)(unaff_BP + -0x7e) = (int)((ulong)uVar5 >> 0x10);
    uVar2 = *(undefined2 *)(unaff_BP + -0x72);
    *(undefined2 *)(unaff_BP + -0x12) = *(undefined2 *)(unaff_BP + -0x74);
    *(undefined2 *)(unaff_BP + -0x10) = uVar2;
    uVar2 = *(undefined2 *)(unaff_BP + -0x7e);
    *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x80);
    *(undefined2 *)(unaff_BP + -0xc) = uVar2;
  }
  FUN_32b2_6d14();
                    /* WARNING: Subroutine does not return */
  FUN_32b2_6e63();
}


