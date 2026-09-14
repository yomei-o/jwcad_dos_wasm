/* 32b2:3eaa */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_32b2_3eaa(undefined2 param_1,int param_2,undefined2 param_3,undefined2 param_4,uint param_5
                  )

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_SS;
  int unaff_DS;
  byte bVar5;
  
  if ((param_2 != 1) && (param_2 != 0)) {
    *(undefined2 *)0x7a34 = 0x16;
    FUN_32b2_0621();
    return;
  }
  *(int *)0x88b2 = unaff_DS + (param_5 >> 4);
  *(undefined2 *)0x88b4 = param_4;
  *(int *)0x88b6 = unaff_DS;
  *(int *)0x88ba = unaff_DS;
  *(int *)0x88be = unaff_DS;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(int *)0x8eaa == -0x292a) {
    (*(code *)*(undefined2 *)0x8eac)();
  }
  DAT_32b2_1380 = (undefined2 *)&stack0xfffc;
  DAT_32b2_1384 = *(undefined2 *)0x2e;
  DAT_32b2_1386 = *(undefined2 *)0x30;
  bVar5 = 0;
  pcVar1 = (code *)swi(0x21);
  DAT_32b2_1382 = unaff_SS;
  DAT_32b2_1388 = unaff_DS;
  (*pcVar1)();
  *(undefined2 *)0x7a62 = 1;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  iVar4 = DAT_32b2_1388;
  uVar3 = DAT_32b2_1382;
  puVar2 = DAT_32b2_1380;
  *(undefined2 *)0x30 = DAT_32b2_1386;
  *(undefined2 *)0x2e = DAT_32b2_1384;
  *(undefined2 *)0x7a62 = 0;
  if ((bVar5 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  FUN_32b2_0621();
  return;
}


