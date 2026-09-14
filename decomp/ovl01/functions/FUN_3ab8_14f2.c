/* 3ab8:14f2 */

void FUN_3ab8_14f2(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 in_AX;
  undefined2 in_DX;
  int unaff_BP;
  int iVar5;
  undefined2 unaff_SS;
  
  *(undefined2 *)(unaff_BP + -0x76) = in_AX;
  *(undefined2 *)(unaff_BP + -0x74) = in_DX;
  if (*(int *)(unaff_BP + -0x94) == 0) {
    uVar1 = *(uint *)(unaff_BP + -0x32);
    if ((uVar1 < *(uint *)(unaff_BP + -0x36)) ||
       ((uVar1 <= *(uint *)(unaff_BP + -0x36) &&
        (*(uint *)(unaff_BP + -0x34) <= *(uint *)(unaff_BP + -0x38))))) {
      uVar1 = *(uint *)(unaff_BP + -0x74);
      if ((uVar1 <= *(uint *)(unaff_BP + -0x36)) &&
         (((*(uint *)(unaff_BP + -0x36) != uVar1 ||
           (*(uint *)(unaff_BP + -0x76) <= *(uint *)(unaff_BP + -0x38))) &&
          (*(uint *)(unaff_BP + -0x32) <= uVar1)))) {
        if (*(uint *)(unaff_BP + -0x32) < uVar1) {
          FUN_3ab8_1185();
          return;
        }
        if (*(uint *)(unaff_BP + -0x34) <= *(uint *)(unaff_BP + -0x76)) {
          FUN_3ab8_1185();
          return;
        }
      }
    }
    else {
      uVar2 = *(uint *)(unaff_BP + -0x74);
      if (uVar2 < *(uint *)(unaff_BP + -0x36)) {
        FUN_3ab8_1185();
        return;
      }
      if ((uVar2 <= *(uint *)(unaff_BP + -0x36)) &&
         (*(uint *)(unaff_BP + -0x76) <= *(uint *)(unaff_BP + -0x38))) {
        FUN_3ab8_1185();
        return;
      }
      if (uVar1 <= uVar2) {
        if (uVar1 < uVar2) {
          FUN_3ab8_1185();
          return;
        }
        if (*(uint *)(unaff_BP + -0x34) <= *(uint *)(unaff_BP + -0x76)) {
          FUN_3ab8_1185();
          return;
        }
      }
    }
  }
  uVar3 = *(undefined2 *)(unaff_BP + -0x76);
  uVar4 = *(undefined2 *)(unaff_BP + -0x74);
  *(int *)(unaff_BP + -0x8c) = *(int *)(unaff_BP + -0x8c) + 1;
  iVar5 = *(int *)(unaff_BP + -0x8c) * 4;
  *(undefined2 *)(unaff_BP + iVar5 + -0xd2) = uVar3;
  *(undefined2 *)(unaff_BP + iVar5 + -0xd0) = uVar4;
  FUN_3ab8_1185();
  return;
}


