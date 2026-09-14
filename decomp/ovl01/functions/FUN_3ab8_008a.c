/* 3ab8:008a */

undefined2 FUN_3ab8_008a(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int in_AX;
  int iVar4;
  int unaff_BP;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar7;
  undefined2 *puVar8;
  undefined2 auStack_a [5];
  
  if (in_AX != 0) {
    piVar1 = (int *)0x148;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    *(int *)0x14a = *(int *)0x14a - (uint)(iVar4 == 0);
    func_0x0000abfa();
    FUN_13bf_0a03();
  }
  *(undefined1 *)0xd14 = 2;
  *(byte *)(unaff_BP + 0x1a) = *(byte *)(unaff_BP + 0x1a) & 0xe0;
  uVar7 = func_0x0000013f();
  *(undefined2 *)(unaff_BP + -6) = (int)uVar7;
  *(undefined2 *)(unaff_BP + -4) = (int)((ulong)uVar7 >> 0x10);
  puVar5 = (undefined2 *)(unaff_BP + 6);
  puVar8 = (undefined2 *)*(undefined4 *)(unaff_BP + -6);
  puVar6 = (undefined2 *)puVar8;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar3 = puVar6;
    puVar6 = puVar6 + 1;
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar2;
  }
  *(uint *)(unaff_BP + -2) = (uint)*(byte *)(unaff_BP + 0x18);
  FUN_13bf_0a80();
  puVar8 = (undefined2 *)func_0x0000013f();
  puVar6 = (undefined2 *)puVar8;
  puVar5 = (undefined2 *)(unaff_BP + 6);
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar3 = puVar5;
    puVar5 = puVar5 + 1;
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar3 = *puVar2;
  }
  puVar6 = auStack_a;
  puVar5 = (undefined2 *)(unaff_BP + 6);
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar8;
  }
  func_0x00018396(0);
  if (*(char *)(*(int *)(unaff_BP + -2) + -0x4b5a) == '\0') {
    *(undefined1 *)(*(int *)(unaff_BP + -2) + -0x4b5a) = 1;
    func_0x0000b1d8();
    func_0x0000daa6();
  }
  return 1;
}


