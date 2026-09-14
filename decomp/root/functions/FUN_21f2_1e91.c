/* 21f2:1e91 */

undefined2 __cdecl16far FUN_21f2_1e91(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte in_stack_00000020;
  undefined2 auStack_26 [13];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  
  FUN_32b2_02bc();
  puVar6 = auStack_26;
  puVar5 = (undefined2 *)&stack0x0004;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  iVar4 = FUN_21f2_1d36();
  uVar3 = 0;
  if (iVar4 != 0) {
    if (*(char *)(in_stack_00000020 + 0xb4a6) == '\0') {
      *(undefined1 *)(in_stack_00000020 + 0xb4a6) = 1;
      uStack_8 = 0xffff;
      uStack_a = 0x32b2;
      uStack_c = 0x3df0;
      FUN_1885_2988();
      uStack_8 = 0;
      uStack_a = 0x1885;
      uStack_c = 0x3df9;
      FUN_1885_5256();
    }
    puVar6 = auStack_26;
    puVar5 = (undefined2 *)&stack0x0004;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    FUN_21f2_1f26();
    uVar3 = 1;
  }
  return uVar3;
}


