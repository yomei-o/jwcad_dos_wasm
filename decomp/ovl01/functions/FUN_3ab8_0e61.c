/* 3ab8:0e61 */

undefined2 FUN_3ab8_0e61(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar6;
  
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar2 = *puVar1;
  }
  uVar4 = *(undefined2 *)(unaff_BP + -0x3a);
  *(undefined2 *)(unaff_BP + -0x10e) = 0;
  *(undefined2 *)(unaff_BP + -0x110) = 0;
  *(undefined2 *)(unaff_BP + -0x112) = 0;
  *(undefined2 *)(unaff_BP + -0x114) = uVar4;
  func_0x00029da5(0x3ab8);
  func_0x00029d78(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x0002996b(0x22b2);
  uVar4 = *(undefined2 *)(unaff_BP + -0x30);
  uVar3 = *(undefined2 *)(unaff_BP + -0x2e);
  *(undefined2 *)(unaff_BP + -0x10e) = 0;
  *(undefined2 *)(unaff_BP + -0x110) = 0;
  *(undefined2 *)(unaff_BP + -0x112) = uVar3;
  *(undefined2 *)(unaff_BP + -0x114) = uVar4;
  func_0x00029da5(0x22b2);
  func_0x00029c9d(0x22b2);
  func_0x00029983(0x22b2);
  *(undefined2 *)(unaff_BP + -0x94) = 0;
  iVar5 = *(int *)(unaff_BP + -0x32);
  if ((*(int *)(unaff_BP + -0x38) == *(int *)(unaff_BP + -0x34)) &&
     (*(int *)(unaff_BP + -0x36) == iVar5)) {
    *(undefined2 *)(unaff_BP + -0x94) = 1;
  }
  if (((*(int *)(unaff_BP + -0x36) == 0 && *(int *)(unaff_BP + -0x38) == 0) &&
      (*(int *)(unaff_BP + -0x34) == 0)) && (iVar5 == 0x168)) {
    *(undefined2 *)(unaff_BP + -0x94) = 1;
  }
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x0002a11e(0x22b2);
  func_0x00029834(0x22b2);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x0002a10c(0x22b2);
  func_0x00029834(0x22b2);
  func_0x00029983(0x22b2);
  *(undefined2 *)(unaff_BP + -0x8e) = 0;
  do {
    iVar5 = *(int *)(unaff_BP + -0x8e);
    *(int *)(unaff_BP + -0xf4) = iVar5;
    if (iVar5 == 4) {
      *(undefined2 *)(unaff_BP + -0xf4) = 0;
    }
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_117c(0x22b2);
    func_0x00029983(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_1163(0x22b2);
    func_0x00029b85(0x22b2);
    func_0x00029983(0x22b2);
    *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
  } while (*(int *)(unaff_BP + -0x8e) < 5);
  *(undefined2 *)(unaff_BP + -0x50) = 0xffff;
  *(undefined2 *)(unaff_BP + -0x8c) = 0;
  *(undefined2 *)(unaff_BP + -0x8e) = 0;
  if (*(int *)(unaff_BP + -0x8e) < 4) {
    uVar6 = *(int *)(unaff_BP + -0x8e) << 1 < 0;
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x0002996b(0x22b2);
    FUN_28b3_0ee9(0x22b2);
    func_0x00029834(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029b6d(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029b6d(0x22b2);
    FUN_28b3_117c(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029d78(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar6) {
      return 0;
    }
    uVar4 = FUN_3ab8_1065();
    return uVar4;
  }
  uVar4 = FUN_3ab8_157d();
  return uVar4;
}


