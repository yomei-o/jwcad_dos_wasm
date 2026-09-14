/* 3ab8:4945 */

void FUN_3ab8_4945(void)

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
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  
  if (0x59 < *(byte *)(unaff_BP + -3)) {
    FUN_3ab8_4799();
    return;
  }
  func_0x0001f185(0x3ab8,0,*(undefined2 *)(unaff_BP + -0x166));
  uVar10 = *(undefined2 *)(unaff_BP + 0x38);
  uVar11 = *(undefined2 *)(unaff_BP + 0x36);
  uVar9 = *(undefined2 *)(unaff_BP + 0x30);
  uVar8 = *(undefined2 *)(unaff_BP + 0x2e);
  func_0x000297e6(0x1bb4,unaff_BP + -0x16e,unaff_BP + -0x176,uVar8,uVar9,
                  *(undefined2 *)(unaff_BP + 0x32),*(undefined2 *)(unaff_BP + 0x34),uVar11,uVar10,
                  *(undefined2 *)(unaff_BP + 0x3a),*(undefined2 *)(unaff_BP + 0x3c));
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  FUN_3ab8_04af(*(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10),
                *(undefined2 *)(unaff_BP + 0x12),*(undefined2 *)(unaff_BP + 0x14),
                *(undefined2 *)(unaff_BP + 0x16),*(undefined2 *)(unaff_BP + 0x18),
                *(undefined2 *)(unaff_BP + 0x1a),*(undefined2 *)(unaff_BP + 0x1c));
  func_0x000297e6(0x22b2);
  uVar12 = 0xf559;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,uVar11,uVar10,uVar12);
  func_0x000297e6(0x22b2);
  uVar12 = 0xf571;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,uVar8,uVar9,uVar12);
  FUN_1def_05d1(0x22b2,0);
  func_0x000297e6(0x1bb4);
  func_0x00029d78(0x22b2);
  func_0x00029c74(0x22b2);
  func_0x00029c74(0x22b2);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  uVar12 = 0xf5b8;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,uVar11,uVar10,uVar12);
  func_0x000297e6(0x22b2);
  uVar10 = 0xf5d0;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,uVar8,uVar9,uVar10);
  func_0x0001e558(0x22b2,0);
  func_0x000297e6(0x1bb4);
  func_0x00029d78(0x22b2);
  func_0x00029c74(0x22b2);
  func_0x00029c74(0x22b2);
  func_0x00029983(0x22b2);
  uVar7 = func_0x000003ef(0x22b2,*(undefined2 *)(unaff_BP + -0x166));
  *(undefined2 *)(unaff_BP + -0x182) = (int)uVar7;
  *(undefined2 *)(unaff_BP + -0x180) = (int)((ulong)uVar7 >> 0x10);
  puVar5 = (undefined2 *)(unaff_BP + -0xc);
  puVar3 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x182);
  puVar6 = (undefined2 *)puVar3;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  FUN_3ab8_4799();
  return;
}


