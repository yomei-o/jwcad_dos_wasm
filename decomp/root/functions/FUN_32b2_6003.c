/* 32b2:6003 */

void __cdecl16near FUN_32b2_6003(void)

{
  byte in_CH;
  uint in_DX;
  uint extraout_DX;
  int in_BX;
  int unaff_BP;
  uint unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar1;
  long lVar2;
  
  if (((((unaff_DI == 0 && unaff_BP == 0) && *(int *)0x8b08 == 0) && ((in_CH & 0x80) == 0)) &&
      (in_BX < 0)) && (*(int *)0x8b0a != 10)) {
    bVar1 = in_DX != 0;
    in_DX = -in_DX;
    in_BX = -(uint)bVar1 - in_BX;
  }
  *(uint *)0x8b10 = in_DX;
  *(int *)0x8b12 = in_BX;
  lVar2 = (ulong)in_DX << 0x10;
  if (((unaff_DI != 0 || unaff_BP != 0) || in_BX != 0) || in_DX != 0) {
    while (unaff_DI < 0x1999) {
      FUN_32b2_6088();
      *(int *)0x8b08 = *(int *)0x8b08 + -1;
      in_DX = extraout_DX;
    }
    lVar2 = CONCAT22(in_DX,0x40);
    while (-1 < (int)unaff_DI) {
      lVar2 = FUN_32b2_609e();
    }
  }
  *(undefined2 *)0x8b14 = (int)((ulong)lVar2 >> 0x10);
  *(int *)0x8b16 = in_BX;
  *(int *)0x8b18 = unaff_BP;
  *(uint *)0x8b1a = unaff_DI;
  *(undefined2 *)0x8b1c = (int)lVar2;
  return;
}


