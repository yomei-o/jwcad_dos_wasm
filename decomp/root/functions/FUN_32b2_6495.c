/* 32b2:6495 */

void __cdecl16near FUN_32b2_6495(void)

{
  uint uVar1;
  int iVar2;
  uint unaff_DI;
  
  iVar2 = 0x63e1;
  if ((int)unaff_DI < 0) {
    iVar2 = 0x643b;
    unaff_DI = -unaff_DI;
  }
  iVar2 = iVar2 + -10;
  while (iVar2 = iVar2 + 10, unaff_DI != 0) {
    uVar1 = unaff_DI & 1;
    unaff_DI = unaff_DI >> 1;
    if (uVar1 != 0) {
      FUN_32b2_632f(unaff_DI,iVar2);
    }
  }
  return;
}


