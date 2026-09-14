/* 32b2:5e3b */

void FUN_32b2_5e3b(void)

{
  undefined2 uVar1;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x8ae8 = 0;
  uVar1 = *(undefined2 *)0x8ac6;
  *(undefined2 *)0x8ac6 = 0x8af3;
  FUN_32b2_5a55(0,0,0,0,0,0);
  *(undefined2 *)0x8aeb = 0;
  *(undefined2 *)0x8aed = 0;
  *(undefined2 *)0x8aef = 0;
  *(undefined2 *)0x8af1 = 0;
  *(undefined2 *)0x8ac6 = uVar1;
  FUN_32b2_5a55();
  return;
}


