/* 32b2:7bf4 */

void __cdecl16far FUN_32b2_7bf4(void)

{
  undefined2 unaff_DS;
  undefined1 in_ZF;
  char in_SF;
  char in_OF;
  
  FUN_32b2_7196(0x32b2);
  if ((bool)in_ZF || in_OF != in_SF) {
    *(int *)0x8ac6 = *(int *)0x8ac6 + 0x18;
  }
  else {
    *(int *)0x8ac6 = *(int *)0x8ac6 + 0x18;
    FUN_32b2_7232();
  }
  *(int *)0x8ac6 = *(int *)0x8ac6 + -0xc;
  return;
}


