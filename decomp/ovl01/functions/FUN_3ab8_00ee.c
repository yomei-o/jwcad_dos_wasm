/* 3ab8:00ee */

undefined2 __cdecl16far FUN_3ab8_00ee(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int unaff_BP;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar6;
  undefined2 auStack_16 [8];
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  uStack_6 = 0xac77;
  puVar6 = (undefined2 *)func_0x0000013f();
  puVar4 = (undefined2 *)puVar6;
  puVar5 = (undefined2 *)(unaff_BP + 6);
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puVar4 = auStack_16;
  puVar5 = (undefined2 *)(unaff_BP + 6);
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = *puVar6;
  }
  func_0x00018396(0);
  if (*(char *)(*(int *)(unaff_BP + -2) + -0x4b5a) == '\0') {
    *(undefined1 *)(*(int *)(unaff_BP + -2) + -0x4b5a) = 1;
    uStack_4 = 0xacb9;
    func_0x0000b1d8();
    uStack_4 = 0xacc2;
    func_0x0000daa6();
  }
  return 1;
}


