/* 3ab8:52e6 */

void FUN_3ab8_52e6(void)

{
  int in_AX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if (in_AX == 2) {
    if (*(char *)0x22b0 == '\x01') {
      *(undefined1 *)0x22b0 = 0;
    }
    else {
      *(undefined1 *)0x22b0 = 1;
    }
  }
  if (in_AX == 3) {
    if (*(char *)0x22b0 == '\x02') {
      *(undefined1 *)0x22b0 = 0;
    }
    else {
      *(undefined1 *)0x22b0 = 2;
    }
  }
  if (in_AX == 4) {
    *(char *)0x22b1 = '\x01' - *(char *)0x22b1;
  }
  if (*(int *)(unaff_BP + -0x236) != 5) {
    FUN_3ab8_50d6();
    return;
  }
  *(char *)0x22b2 = '\x01' - *(char *)0x22b2;
  FUN_3ab8_50d6();
  return;
}


