/* 21f2:1f26 */

void __cdecl16far FUN_21f2_1f26(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_0000001e;
  undefined2 auStack_26 [14];
  undefined2 uStack_a;
  int iVar6;
  
  FUN_32b2_02bc();
  if ((in_stack_0000001e._1_1_ != 0x5a) && (in_stack_0000001e._1_1_ != 0x5b)) {
    if (in_stack_0000001e._1_1_ == 99) {
      for (iVar6 = 1; iVar6 <= *(int *)0x1d48; iVar6 = iVar6 + 1) {
        puVar5 = auStack_26;
        puVar4 = (undefined2 *)(iVar6 * 0x20 + -0x5272);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar2 = *puVar1;
        }
        FUN_21f2_1c0d();
      }
      *(undefined2 *)0x1d48 = 0;
    }
    else if (in_stack_0000001e._1_1_ < 9) {
      puVar5 = auStack_26;
      puVar4 = (undefined2 *)&stack0x0004;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      FUN_21f2_1aa6();
    }
    else if (*(int *)0x1d48 < 10) {
      uStack_a = 0x3eb5;
      FUN_32b2_6cc6();
      uStack_a = 0x3ebe;
      FUN_32b2_704d();
      uStack_a = 0x3ec3;
      FUN_32b2_7258();
      uStack_a = 0x3ec8;
      iVar6 = FUN_32b2_6f61();
      if (iVar6 != 0) {
        *(int *)0x1d48 = *(int *)0x1d48 + 1;
        puVar5 = (undefined2 *)(*(int *)0x1d48 * 0x20 + -0x5272);
        puVar4 = (undefined2 *)&stack0x0004;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar2 = *puVar1;
        }
        puVar5 = auStack_26;
        puVar4 = (undefined2 *)&stack0x0004;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar2 = *puVar1;
        }
        FUN_21f2_1c0d();
      }
    }
  }
  return;
}


