/* 1000:0718 */

/* WARNING: Instruction at (ram,0x00010800) overlaps instruction at (ram,0x000107fe)
    */

void FUN_1000_0718(void)

{
  code *pcVar1;
  undefined2 uVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined2 *)0xbc0 = 1;
  if (0 < *(int *)(unaff_BP + -2)) {
    uVar2 = FUN_32b2_0748(0x100,600);
    *(undefined2 *)0xd70 = uVar2;
    FUN_32b2_252e();
    *(undefined2 *)0xd70 = 0;
  }
  *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
  *(undefined2 *)0xc728 = 0xffff;
  *(undefined2 *)0xbee2 = 0xffff;
  if ((0x28 < *(int *)(unaff_BP + -2)) && (*(int *)0xa62 != 0x1e)) {
    *(undefined2 *)0xc22 = 2;
    FUN_1def_26a9(0x14,3);
    FUN_21f2_0356(0x1254,0x6b0);
  }
  if (*(byte *)0xb782 < 4) {
    FUN_10ad_0f45(0);
    if (*(char *)0x118 != '\0') {
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    FUN_1885_3364(*(undefined2 *)0xa62);
  }
  if ((((*(int *)0xa62 == 0xd) || (*(int *)0xa62 == 0xe)) || (*(int *)0xa62 == 0xf)) ||
     ((*(int *)0xa62 == 0x1c || (*(int *)0xa62 == 0x1e)))) {
    *(undefined1 *)0xc13e = 1;
  }
  else {
    *(undefined1 *)0xc13e = 0;
  }
  if ((*(char *)0x124 != '\0') && (*(int *)0xc22 == 0)) {
    FUN_17a6_000a();
  }
  pcVar1 = (code *)swi(0x3f);
  (*pcVar1)();
  FUN_1000_0a81();
  return;
}


