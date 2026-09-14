/* 2bb4:5bc2 */

void FUN_2bb4_5bc2(void)

{
  undefined2 uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)(unaff_BP + -0x7a);
  *(undefined2 *)(unaff_BP + -0x78) = *(undefined2 *)(unaff_BP + -0x7c);
  *(undefined2 *)(unaff_BP + -0x76) = uVar1;
  uVar1 = *(undefined2 *)(unaff_BP + -0x82);
  *(undefined2 *)(unaff_BP + -0x80) = *(undefined2 *)(unaff_BP + -0x84);
  *(undefined2 *)(unaff_BP + -0x7e) = uVar1;
  *(int *)(unaff_BP + -0x86) = *(int *)(unaff_BP + -0x86) + 1;
  if (*(int *)(unaff_BP + -0x86) < 0x19) {
    FUN_2bb4_5913();
    return;
  }
  FUN_2bb4_589c();
  return;
}


