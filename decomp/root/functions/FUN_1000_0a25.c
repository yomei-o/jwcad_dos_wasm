/* 1000:0a25 */

/* WARNING: Instruction at (ram,0x00010800) overlaps instruction at (ram,0x000107fe)
    */

void FUN_1000_0a25(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uStack0010;
  
  uVar2 = 0x1000;
  *(undefined2 *)0xc728 = 0xffff;
  *(undefined2 *)0xbee2 = 0xffff;
  if ((0x28 < *(int *)(unaff_BP + -2)) && (*(int *)0xa62 != 0x1e)) {
    *(undefined2 *)0xc22 = 2;
    uStack0010 = 3;
    FUN_1def_26a9();
    uStack0010 = 0x6b0;
    uVar2 = 0x21f2;
    FUN_21f2_0356();
  }
  if (*(byte *)0xb782 < 4) {
    uStack0010 = 0;
    FUN_10ad_0f45();
    if (*(char *)0x118 != '\0') {
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    uStack0010 = *(undefined2 *)0xa62;
    uVar2 = 0x1885;
    FUN_1885_3364();
  }
  if ((((*(int *)0xa62 == 0xd) || (*(int *)0xa62 == 0xe)) || (*(int *)0xa62 == 0xf)) ||
     ((*(int *)0xa62 == 0x1c || (*(int *)0xa62 == 0x1e)))) {
    *(undefined1 *)0xc13e = 1;
  }
  else {
    *(undefined1 *)0xc13e = 0;
  }
  if ((*(char *)0x124 != '\0') && (*(int *)0xc22 == 0)) {
    uStack0010 = uVar2;
    FUN_17a6_000a();
  }
  uStack0010 = 1;
  pcVar1 = (code *)swi(0x3f);
  (*pcVar1)();
  FUN_1000_0a81();
  return;
}


