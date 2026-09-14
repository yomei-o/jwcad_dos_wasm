/* 32b2:60ce */

void __cdecl16near FUN_32b2_60ce(void)

{
  byte bVar1;
  byte in_CH;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  while( true ) {
    bVar1 = FUN_32b2_6108();
    if ((bool)in_ZF) {
      return;
    }
    if (bVar1 != 0x2e) break;
    if ((in_CH & 0x10) != 0) {
      return;
    }
    *(int *)0x8b04 = *(int *)0x8b04 + 1;
    in_CH = in_CH | 0x10;
    in_ZF = in_CH == 0;
  }
  if (bVar1 < 0x30) {
    return;
  }
  if (9 < (byte)(bVar1 - 0x30)) {
    return;
  }
  if ((in_CH & 0x10) != 0) {
    *(int *)0x8b08 = *(int *)0x8b08 + -1;
  }
  *(int *)0x8b06 = *(int *)0x8b06 + 1;
  return;
}


