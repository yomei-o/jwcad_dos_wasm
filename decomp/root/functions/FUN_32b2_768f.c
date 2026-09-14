/* 32b2:768f */

undefined2 __cdecl16near FUN_32b2_768f(void)

{
  undefined2 uVar1;
  byte in_AL;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar2;
  
  *(undefined2 *)0x7a2a = *(undefined2 *)(unaff_BP + 6);
  *(undefined2 *)0x7a2c = *(undefined2 *)(unaff_BP + 8);
  *(undefined2 *)0x7a2e = *(undefined2 *)(unaff_BP + 10);
  *(undefined2 *)0x7a30 = *(undefined2 *)(unaff_BP + 0xc);
  *(byte *)0x7a31 = *(byte *)0x7a31 ^ in_AL;
  *(byte *)(unaff_BP + 0xd) = *(byte *)(unaff_BP + 0xd) ^ in_AL;
  uVar1 = *(undefined2 *)0x8ac6;
  *(undefined2 *)0x8ac6 = 0x7a2a;
  FUN_32b2_53cc();
  bVar2 = (*(byte *)0x7a31 & 0x80) == 0;
  if ((char)(*(byte *)0x7a31 & 0x80) < '\0') {
    FUN_32b2_555c();
    if (!bVar2) {
      FUN_32b2_58aa(unaff_BP);
    }
  }
  *(undefined2 *)0x8ac6 = uVar1;
  return 0x7a2a;
}


