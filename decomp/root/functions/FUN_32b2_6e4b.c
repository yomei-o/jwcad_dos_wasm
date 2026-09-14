/* 32b2:6e4b */

void __cdecl16far FUN_32b2_6e4b(void)

{
  int iVar1;
  undefined2 *in_BX;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x8ac6;
  *(int *)0x8ac6 = *(int *)0x8ac6 + 0xc;
  if (*(char *)(iVar1 + -2) == '\x03') {
    puVar2 = (undefined2 *)*(undefined2 *)(iVar1 + -4);
  }
  else {
    *(undefined1 **)0x8ddc = &stack0xfffa;
    puVar2 = (undefined2 *)*(undefined2 *)(iVar1 + -4);
    FUN_32b2_5164();
  }
  *in_BX = *puVar2;
  in_BX[1] = puVar2[1];
  *(int *)0x8ac6 = *(int *)0x8ac6 + -0xc;
  return;
}


