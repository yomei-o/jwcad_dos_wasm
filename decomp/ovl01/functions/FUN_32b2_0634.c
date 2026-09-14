/* 32b2:0634 */

void __cdecl16near FUN_32b2_0634(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0x7a3f = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_32b2_0658;
  if (*(byte *)0x7a3c < 3) {
LAB_32b2_064e:
    if (0x13 < bVar1) {
LAB_32b2_0652:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_32b2_0652;
    if (bVar1 < 0x20) goto LAB_32b2_064e;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0x7a78);
LAB_32b2_0658:
  *(int *)0x7a34 = (int)cVar2;
  return;
}


