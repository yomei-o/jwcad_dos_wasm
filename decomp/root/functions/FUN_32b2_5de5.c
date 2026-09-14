/* 32b2:5de5 */

void FUN_32b2_5de5(void)

{
  undefined2 in_AX;
  undefined2 in_CX;
  undefined2 in_DX;
  undefined2 in_BX;
  uint unaff_BP;
  undefined2 unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  undefined2 uStack_2;
  
  *(undefined1 *)0x8ae8 = 0;
  if (((*(int *)0x8ae9 == 0) || (*(int *)0x8ae9 - 0x4c0U <= unaff_BP)) && (unaff_BP != 0)) {
    uStack_2 = *(undefined2 *)0x8ac6;
    *(undefined2 *)0x8ac6 = 0x8aeb;
    FUN_32b2_5a55();
    *(undefined2 *)0x8ac6 = 0x8af3;
    FUN_32b2_5a00(unaff_DI,unaff_BP,in_BX,in_DX,in_CX,in_AX);
  }
  else {
    uStack_2 = *(undefined2 *)0x8ac6;
    *(undefined2 *)0x8ac6 = 0x8af3;
    FUN_32b2_5a55();
    *(undefined2 *)0x8aeb = 0;
    *(undefined2 *)0x8aed = 0;
    *(undefined2 *)0x8aef = 0;
    *(undefined2 *)0x8af1 = 0;
  }
  *(undefined2 *)0x8ac6 = uStack_2;
  FUN_32b2_5a55();
  return;
}


