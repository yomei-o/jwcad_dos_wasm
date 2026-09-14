/* 32b2:38b9 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far entry(void)

{
  code *pcVar1;
  byte bVar2;
  undefined2 in_BX;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  puVar3 = (undefined1 *)0x2ede;
  pcVar1 = (code *)swi(0x21);
  _DAT_5000_2d5e = unaff_DS;
  bVar2 = (*pcVar1)();
  if (bVar2 < 2) {
    *(undefined2 *)(puVar3 + -2) = 0x63ed;
    FUN_32b2_3550();
    *(undefined2 *)(puVar3 + -2) = unaff_ES;
    *(undefined2 *)(puVar3 + -4) = 0;
    return;
  }
  if (2 < bVar2) {
    DAT_4375_874e = 1;
  }
  DAT_4375_7a64 = 1;
  DAT_4375_7a65 = DAT_4375_8ff6;
  puVar4 = (undefined2 *)(puVar3 + -2);
  *(undefined2 *)(puVar3 + -2) = unaff_ES;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_4375_7a66 = in_BX;
  DAT_4375_7a68 = unaff_ES;
  (*pcVar1)();
  *puVar4 = 0x642c;
  FUN_32b2_3916();
  FUN_32b2_0014();
  return;
}


