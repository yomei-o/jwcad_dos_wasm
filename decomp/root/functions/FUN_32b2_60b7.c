/* 32b2:60b7 */

void __cdecl16near FUN_32b2_60b7(void)

{
  byte bVar1;
  char cVar2;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  bVar1 = FUN_32b2_6108();
  if ((!(bool)in_ZF) && (cVar2 = bVar1 - 0x30, 0x2f < bVar1)) {
    if ('\t' < cVar2) {
      cVar2 = bVar1 - 0x37;
    }
    if (cVar2 < *(char *)0x8b0a) {
      *(int *)0x8b06 = *(int *)0x8b06 + 1;
      return;
    }
  }
  return;
}


