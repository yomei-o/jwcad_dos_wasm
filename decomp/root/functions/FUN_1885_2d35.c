/* 1885:2d35 */

void __cdecl16far FUN_1885_2d35(void)

{
  int iVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_32b2_02bc();
  FUN_1885_1f1b(1,0x132,*(int *)0xa5c + -1,0x17f);
  FUN_1def_1460(0,0x160,9,0x180,7,2,0,0);
  FUN_1def_1691(1,0x162,0x141,0,1,0,7);
  FUN_1def_1691(1,0x16c,0x14c,0,1,0,7);
  FUN_1def_1691(1,0x176,0x14c,0,1,0,7);
  iVar2 = 0;
  do {
    iVar1 = (iVar2 + 0x14) * 0x10;
    FUN_1def_1460(0,iVar1,*(undefined2 *)0xa5c,iVar1,7,0,0,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  FUN_1def_1460(9,0x170,*(undefined2 *)0xa5c,0x170,7,0,0,0);
  FUN_1def_1460(9,0x180,*(undefined2 *)0xa5c,0x180,7,0,0,0);
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 0xe + 9;
    FUN_1def_1460(iVar1,0x160,iVar1,0x180,7,0,0,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  FUN_1def_1460(0,0x160,*(undefined2 *)0xa58,0x180,7,1,0,0);
  return;
}


