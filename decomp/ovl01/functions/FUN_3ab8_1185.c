/* 3ab8:1185 */

undefined2 FUN_3ab8_1185(void)

{
  undefined2 uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined1 uVar2;
  
  *(int *)(unaff_BP + -0x8e) = *(int *)(unaff_BP + -0x8e) + 1;
  if (3 < *(int *)(unaff_BP + -0x8e)) {
    uVar1 = FUN_3ab8_157d();
    return uVar1;
  }
  uVar2 = *(int *)(unaff_BP + -0x8e) << 1 < 0;
  func_0x000297e6(0x3ab8);
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
  if (!(bool)uVar2) {
    uVar1 = FUN_3ab8_1065();
    return uVar1;
  }
  return 0;
}


