/* 20a9:0461 */

uint __cdecl16far FUN_20a9_0461(void)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined1 extraout_AH;
  undefined1 in_ZF;
  
  FUN_32b2_02bc();
  pcVar1 = (code *)swi(0x16);
  uVar4 = (*pcVar1)();
  if ((bool)in_ZF) {
    uVar5 = 0xffff;
  }
  else {
    cVar2 = (char)uVar4;
    if (((char)((uint)uVar4 >> 8) == '\0') ||
       (((cVar2 != '\0' && (cVar2 != -0x20)) && (cVar2 != -0x10)))) {
      pcVar1 = (code *)swi(0x21);
      bVar3 = (*pcVar1)();
      uVar5 = (uint)bVar3;
    }
    else {
      pcVar1 = (code *)swi(0x16);
      (*pcVar1)();
      uVar5 = CONCAT11(0xff,extraout_AH);
    }
  }
  return uVar5;
}


