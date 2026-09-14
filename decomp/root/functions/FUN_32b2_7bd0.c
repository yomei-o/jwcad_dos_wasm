/* 32b2:7bd0 */

void __cdecl16far FUN_32b2_7bd0(void)

{
  undefined2 unaff_DS;
  char in_SF;
  char in_OF;
  
  FUN_32b2_7196(0x32b2);
  if (in_OF == in_SF) {
    *(int *)0x8ac6 = *(int *)0x8ac6 + 0x18;
  }
  else {
    *(int *)0x8ac6 = *(int *)0x8ac6 + 0x18;
    FUN_32b2_7232();
  }
  *(int *)0x8ac6 = *(int *)0x8ac6 + -0xc;
  return;
}


