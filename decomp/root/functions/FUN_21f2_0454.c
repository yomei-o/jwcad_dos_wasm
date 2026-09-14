/* 21f2:0454 */

void __cdecl16far FUN_21f2_0454(void)

{
  undefined2 unaff_DS;
  int iVar1;
  
  FUN_32b2_02bc();
  FUN_1885_5256(0);
  FUN_1885_3b7a();
  FUN_1885_1f1b(*(int *)0xa5c + 1,*(int *)0xa5e + 1,*(int *)0x1b3e + -1,*(int *)0xa60 + -1);
  iVar1 = 2;
  do {
    FUN_1def_26a9(0x11,iVar1);
    iVar1 = 0x1def;
    FUN_1def_2636();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x19);
  FUN_1def_26a9(1,1);
  FUN_2bb4_0064();
  *(undefined2 *)0xc08 = 0;
  *(undefined2 *)0xbc0 = 1;
  FUN_1885_1f49();
  FUN_21f2_27eb(0);
  return;
}


