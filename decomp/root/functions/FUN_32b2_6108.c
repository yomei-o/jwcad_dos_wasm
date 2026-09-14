/* 32b2:6108 */

byte __cdecl16near FUN_32b2_6108(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *unaff_SI;
  undefined2 unaff_DS;
  
  do {
    if ((byte *)*(undefined2 *)0x8b02 <= unaff_SI) {
      return 0;
    }
    pbVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    bVar2 = *pbVar1;
  } while ((*(char *)0x8afc != '\0') &&
          ((((bVar2 == 0x20 || (bVar2 == 9)) || (bVar2 == 10)) || (bVar2 == 0xd))));
  if ((0x60 < bVar2) && (bVar2 < 0x7b)) {
    bVar2 = bVar2 & 0x5f;
  }
  return bVar2;
}


