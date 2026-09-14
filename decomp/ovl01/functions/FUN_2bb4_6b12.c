/* 2bb4:6b12 */

void FUN_2bb4_6b12(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(uint *)(unaff_BP + -0x14) < 100) {
    *(undefined2 *)(unaff_BP + -0x14) = 100;
  }
  if (*(uint *)(unaff_BP + -0x14) < 0x270e) {
    FUN_2bb4_644e();
    return;
  }
  if (0x2712 < *(uint *)(unaff_BP + -0x14)) {
    FUN_2bb4_644e();
    return;
  }
  *(undefined2 *)(unaff_BP + -0x14) = 10000;
  FUN_2bb4_644e();
  return;
}


