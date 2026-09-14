/* 1885:2065 */

void __cdecl16far FUN_1885_2065(void)

{
  undefined2 unaff_DS;
  int iVar1;
  
  FUN_32b2_02bc();
  iVar1 = 1;
  do {
    if ((*(int *)0x11c == 0) || (iVar1 == 0)) {
      FUN_1885_5256(0);
      FUN_1885_1f1b(0,0,*(undefined2 *)0x1b3e,*(undefined2 *)0xa5e);
      FUN_1885_1f1b(0,*(undefined2 *)0xa60,*(undefined2 *)0x1b3e,*(undefined2 *)0x1b40);
      FUN_1885_1f1b(0,0,*(undefined2 *)0xa5c,0x12f);
      FUN_1885_1faf();
      iVar1 = 0x32b2;
      FUN_1885_23aa();
    }
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_1885_1f49();
  return;
}


