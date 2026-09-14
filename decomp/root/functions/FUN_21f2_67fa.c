/* 21f2:67fa */

undefined2 __cdecl16far FUN_21f2_67fa(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte in_stack_00000016;
  undefined2 auStack_1c [7];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  
  FUN_32b2_02bc();
  puStack_8 = &stack0x0004;
  uStack_a = 0;
  uStack_c = 0x32b2;
  uStack_e = 0x8731;
  iVar3 = FUN_21f2_66b3();
  uVar4 = 0;
  if (iVar3 != 0) {
    if (*(char *)(in_stack_00000016 + 0xb4a6) == '\0') {
      *(undefined1 *)(in_stack_00000016 + 0xb4a6) = 1;
      puStack_8 = (undefined1 *)0xffff;
      uStack_a = 0x32b2;
      uStack_c = 0x8750;
      FUN_1885_2988();
      puStack_8 = (undefined1 *)0x0;
      uStack_a = 0x1885;
      uStack_c = 0x8759;
      FUN_1885_5256();
    }
    puVar6 = auStack_1c;
    puVar5 = (undefined2 *)&stack0x0004;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    FUN_21f2_6623();
    uVar4 = 1;
  }
  return uVar4;
}


