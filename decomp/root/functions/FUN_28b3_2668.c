/* 28b3:2668 */

undefined2 __cdecl16far FUN_28b3_2668(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000018;
  undefined2 auStack_1e [9];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  
  FUN_32b2_02bc();
  puVar6 = auStack_1e;
  puVar5 = (undefined2 *)&stack0x0004;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  FUN_28b3_0a63(0x32b2,1);
  puVar6 = auStack_1e;
  puVar5 = (undefined2 *)&stack0x0004;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  iVar4 = FUN_28b3_2580();
  uVar3 = 0;
  if (iVar4 != 0) {
    if (*(char *)(in_stack_00000018._1_1_ + 0xbb78) == '\0') {
      *(undefined1 *)(in_stack_00000018._1_1_ + 0xbb78) = 1;
      uStack_8 = 0xffff;
      uStack_a = 0x32b2;
      uStack_c = 0xb1f1;
      FUN_1885_2988();
      uStack_8 = 0;
      uStack_a = 0x1885;
      uStack_c = 0xb1fa;
      FUN_1885_5256();
    }
    uVar3 = 1;
  }
  return uVar3;
}


