/* 32b2:6f61 */

void __cdecl16far FUN_32b2_6f61(void)

{
  int iVar1;
  undefined2 in_CX;
  undefined2 in_BX;
  undefined2 unaff_DS;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  
  FUN_32b2_6f9a();
  *(byte *)0x8dd2 = in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF;
  *(undefined1 **)0x8ddc = &stack0xfffa;
  iVar1 = *(int *)0x8ac6;
  *(int *)0x8ac6 = iVar1 + -0xc;
  if (*(char *)(iVar1 + -2) == '\x03') {
    FUN_32b2_4428();
  }
  else {
    (*(code *)0x36f4d)(in_CX,in_BX);
  }
  return;
}


