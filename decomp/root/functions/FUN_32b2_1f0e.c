/* 32b2:1f0e */

void FUN_32b2_1f0e(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 10) != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_32b2_0621();
    return;
  }
  FUN_32b2_0621();
  return;
}


