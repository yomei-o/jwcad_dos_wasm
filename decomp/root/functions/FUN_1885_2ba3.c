/* 1885:2ba3 */

void __cdecl16far FUN_1885_2ba3(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if (*(char *)0xb782 != '\0') {
    return;
  }
  FUN_1885_1f1b(1,0x132,*(int *)0xa5c + -1,0x13e);
  FUN_1def_23c5(0x1a97,1,0x14,7,0);
  if (*(int *)0xa6c < 9) {
    iVar2 = *(int *)0xa6a;
    uVar1 = 0x1aa7;
LAB_1885_2bf9:
    FUN_32b2_2854(0xbf48,uVar1,iVar2);
  }
  else {
    if (*(int *)0xa6c < 0xb) {
      uVar1 = 0x1aaf;
    }
    else {
      if (*(int *)0xa6c < 0x10) {
        iVar2 = *(int *)0xa6c + -10;
        uVar1 = 0x1ab6;
        goto LAB_1885_2bf9;
      }
      if (0x12 < *(int *)0xa6c) goto LAB_1885_2c3d;
      uVar1 = 0x1abf;
    }
    FUN_32b2_2854(0xbf48,uVar1);
  }
LAB_1885_2c3d:
  FUN_1def_23c5(0xbf48,2,0x14,*(undefined2 *)(*(int *)0xa6a * 2 + 0xa70),0);
  FUN_1def_1460(0x40,0x138,0x6e,0x138,*(undefined2 *)(*(int *)0xa6a * 2 + 0xa70),3,
                *(undefined2 *)(*(int *)0xa6c * 2 + 0xa88),0);
  if (*(char *)0xa4c != '\0') {
    FUN_1def_26a9(0xf,0x14);
    FUN_21f2_0356(0x1ac6,*(undefined1 *)(*(int *)(*(int *)0xa6a * 2 + 0xa70) + 0xa4e));
  }
  FUN_1def_0000(0,0x131,*(undefined2 *)0xa5c,0x131,7,0xffff);
  FUN_1def_0000(0,0x130,*(undefined2 *)0xa5c,0x130,7,0xffff);
  FUN_1def_0000(0,*(undefined2 *)0xa5e,0,*(undefined2 *)0xa60,7,0xffff);
  FUN_1def_0000(*(undefined2 *)0xa5c,*(undefined2 *)0xa5e,*(undefined2 *)0xa5c,*(undefined2 *)0xa60,
                7,0xffff);
  return;
}


