/* 32b2:555c */

uint __cdecl16near FUN_32b2_555c(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_SI;
  uint *puVar6;
  uint *unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar7;
  undefined2 unaff_DS;
  bool bVar8;
  
  uVar4 = unaff_SI[3];
  uVar2 = unaff_DI[3];
  if ((uVar4 & 0x7ff0) == 0) {
    if ((uVar2 & 0x7ff0) != 0) {
      return uVar4;
    }
  }
  else {
    if (((~uVar4 & 0x7ff0) == 0) || ((~uVar2 & 0x7ff0) == 0)) {
      uVar2 = FUN_32b2_7308();
      return uVar2;
    }
    bVar1 = (byte)(uVar4 >> 8);
    if ((int)((uint)(byte)(bVar1 ^ (byte)(uVar2 >> 8)) << 8) < 0) {
      return CONCAT11((bVar1 | 0x7f) << 1,(char)uVar4);
    }
    bVar8 = (int)uVar4 < 0;
    uVar3 = uVar4 << 1;
    uVar4 = uVar3;
    uVar5 = uVar2 << 1;
    puVar6 = unaff_SI;
    uVar7 = unaff_ES;
    if (bVar8) {
      uVar4 = uVar2 << 1;
      uVar5 = uVar3;
      puVar6 = unaff_DI;
      unaff_DI = unaff_SI;
      uVar7 = unaff_DS;
      unaff_DS = unaff_ES;
    }
    if (((uVar4 == uVar5) && (uVar4 = puVar6[2], uVar4 == unaff_DI[2])) &&
       (uVar4 = puVar6[1], uVar4 == unaff_DI[1])) {
      uVar4 = *puVar6;
    }
  }
  return uVar4;
}


