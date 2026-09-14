/* 3ab8:4d74 */

void FUN_3ab8_4d74(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_21f2_3454(0x3ab8,unaff_BP + -0x14,0x2150);
  if (*(char *)0xb1ea == '\0') {
    *(undefined1 *)0x1062 = 1;
  }
  if (*(char *)0xb1ea == '\x01') {
    FUN_21f2_3454(0x22b2,unaff_BP + -0x14,0x2155);
  }
  if (*(char *)0xb1ea == '\x02') {
    FUN_21f2_3454(0x22b2,unaff_BP + -0x14,0x80a);
  }
  FUN_21f2_3454(0x22b2,unaff_BP + -0x52,unaff_BP + -0x14);
  FUN_21f2_2d26(0x22b2,unaff_BP + -0x52,0x804);
  if (*(char *)(unaff_BP + -0x134) != '\0') {
    *(undefined2 *)(unaff_BP + -0x1fe) = 1;
    FUN_2bb4_5c40();
    return;
  }
  if (*(char *)0xb1ea == '\x03') {
    FUN_21f2_3454(0x22b2,unaff_BP + -0x52,0x7fe);
    FUN_21f2_2d26(0x22b2,unaff_BP + -0x52,unaff_BP + -0x14);
  }
  func_0x0000c3ca(0x22b2);
  if (*(int *)0xbc2 == 0) {
    if (*(char *)0xb1ea == '\x03') {
      if (*(int *)0xc22 == 0) {
        FUN_1000_02b5(unaff_BP + -0x52,0x12,2,7,0xffff);
      }
      *(undefined2 *)0xc22 = 1;
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)(0,0,unaff_BP + -0x52,0,*(undefined2 *)0x9454,*(undefined2 *)0x9456,
                *(undefined2 *)0x9458,*(undefined2 *)0x945a,*(undefined2 *)0x9454,
                *(undefined2 *)0x9456,*(undefined2 *)0x9458,*(undefined2 *)0x945a);
    }
    else {
      if (*(byte *)0xb1ea < 2) {
        if (*(int *)0xce6 == 0) {
          pcVar1 = (code *)swi(0x3f);
          (*pcVar1)(0,0,unaff_BP + -0x52,0,*(undefined2 *)0x9454,*(undefined2 *)0x9456,
                    *(undefined2 *)0x9458,*(undefined2 *)0x945a,*(undefined2 *)0x9454,
                    *(undefined2 *)0x9456,*(undefined2 *)0x9458,*(undefined2 *)0x945a);
        }
        else {
          pcVar1 = (code *)swi(0x3f);
          iVar2 = (*pcVar1)(1,0,unaff_BP + -0x52,0,*(undefined2 *)0x9454,*(undefined2 *)0x9456,
                            *(undefined2 *)0x9458,*(undefined2 *)0x945a,*(undefined2 *)0x9454,
                            *(undefined2 *)0x9456,*(undefined2 *)0x9458,*(undefined2 *)0x945a);
          if (iVar2 == -0x2a3e) {
            FUN_2bb4_66c9();
            return;
          }
        }
      }
      if (*(char *)0xb1ea == '\x02') {
        pcVar1 = (code *)swi(0x3f);
        iVar2 = (*pcVar1)(1,0,unaff_BP + -0x52,0,*(undefined2 *)0x9454,*(undefined2 *)0x9456,
                          *(undefined2 *)0x9458,*(undefined2 *)0x945a,*(undefined2 *)0x9454,
                          *(undefined2 *)0x9456,*(undefined2 *)0x9458,*(undefined2 *)0x945a);
        if (iVar2 == -0x2a3e) {
          FUN_2bb4_66c9();
          return;
        }
      }
    }
  }
  if (*(int *)0x158 != 0) {
    if (*(char *)0x118 != '\0') {
      FUN_2bb4_66c9();
      return;
    }
    if ((((*(char *)0x124 == '\0') || (*(int *)0x158 == 10000)) || (*(int *)0xbc2 != 0)) ||
       (*(char *)0xb1ea != '\0')) {
      FUN_2bb4_66c9();
      return;
    }
    if ((((*(int *)0xa62 != 1) || (*(int *)0xa64 != 1)) &&
        ((*(byte *)0xb782 < 4 || (*(int *)0xa64 != *(int *)0xa62)))) &&
       ((*(byte *)0xb782 < 4 || (*(int *)0xa66 != *(int *)0xa62)))) {
      if (*(byte *)0xb782 < 4) {
        FUN_2bb4_66c9();
        return;
      }
      if (*(int *)0xa62 != 1) {
        FUN_2bb4_66c9();
        return;
      }
    }
    FUN_1885_2ec3();
    *(undefined2 *)0x158 = 0;
    *(undefined1 *)0xb1ea = 3;
    FUN_3ab8_4d74();
    return;
  }
  FUN_3ab8_5218();
  return;
}


