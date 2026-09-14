/* 20a9:06c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_20a9_06c8(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  iVar2 = 0;
  do {
    FUN_32b2_2a78(0x3ce,iVar2);
    uVar1 = FUN_32b2_2a6a(0x3cf);
    *(undefined1 *)(iVar2 + -0x3eda) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  *(undefined2 *)0x1cc2 = _DAT_0000_044a;
  return;
}


