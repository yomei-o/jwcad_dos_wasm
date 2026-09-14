/* 32b2:0014 */

void __cdecl16far FUN_32b2_0014(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined2 unaff_DS;
  
  pcVar2 = (code *)swi(0x21);
  bVar3 = (*pcVar2)();
  if (bVar3 < 2) {
    return;
  }
  uVar5 = *(int *)0x2 + 0xbc8b;
  if (0xfff < uVar5) {
    uVar5 = 0x1000;
  }
  if ((undefined1 *)0x38d1 < &stack0x0004) {
    unaff_DS = 0x4375;
    FUN_32b2_0294();
    FUN_32b2_05af();
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  DAT_4375_79fe = uVar5 * 0x10 + -1;
  DAT_4375_7a00 = 0x4375;
  DAT_4375_7a04 = &stack0xc732;
  DAT_4375_7a0a = &stack0xc730;
  DAT_4375_7a06 = &stack0xc72e;
  DAT_4375_7a08 = &stack0xc72e;
  DAT_4375_79fa = &stack0xc72e;
  *(int *)0x2 = uVar5 + 0x4375;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  puVar6 = (undefined1 *)0xad12;
  DAT_4375_7a3a = unaff_DS;
  for (iVar4 = 0x1a1e; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = 0;
  }
  if (DAT_4375_8ea8 != (code *)0x0) {
    (*DAT_4375_8ea8)();
  }
  FUN_32b2_0506();
  FUN_32b2_0304();
  FUN_32b2_010c();
  FUN_1000_0446();
  FUN_32b2_01d1();
  return;
}


