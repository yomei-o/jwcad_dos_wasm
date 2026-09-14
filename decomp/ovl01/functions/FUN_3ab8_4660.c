/* 3ab8:4660 */

void FUN_3ab8_4660(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int unaff_BP;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar7;
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
  undefined2 uStack_2;
  
  if (0x59 < *(byte *)0xc3b4) {
    FUN_3ab8_4581();
    return;
  }
  puVar6 = &uStack_18;
  puVar5 = (undefined2 *)0xc3a0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  func_0x00019593(0x3ab8,0);
  uStack_2 = *(undefined2 *)(unaff_BP + 0x46);
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
  uStack_2 = *(undefined2 *)(unaff_BP + -0x166);
  iStack_4 = 0x18b3;
  iStack_6 = 0xf26d;
  uVar7 = func_0x00000398();
  *(undefined2 *)(unaff_BP + -0x182) = (int)uVar7;
  *(undefined2 *)(unaff_BP + -0x180) = (int)((ulong)uVar7 >> 0x10);
  puVar5 = (undefined2 *)0xc3a0;
  puVar1 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x182);
  puVar6 = (undefined2 *)puVar1;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar3 = puVar6;
    puVar6 = puVar6 + 1;
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar2;
  }
  FUN_3ab8_4581();
  return;
}


