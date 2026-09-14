/* 3a75:0260 */

uint __cdecl16far FUN_3a75_0260(uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 & 0xff;
  iVar2 = FUN_32b2_312f(0x3a75,param_1._1_1_);
  if ((iVar2 == 0) || (iVar2 = FUN_32b2_3134(0x32b2,uVar3), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    if (param_1._1_1_ < 0xa0) {
      cVar1 = -0x7f;
    }
    else {
      cVar1 = -0x3f;
    }
    if (uVar3 < 0x9f) {
      if (uVar3 < 0x7f) {
        iVar2 = 0x1f;
      }
      else {
        iVar2 = 0x20;
      }
      uVar3 = uVar3 - iVar2 | (uint)(byte)((param_1._1_1_ - cVar1) * '\x02' + 0x21) << 8;
    }
    else {
      uVar3 = (uint)(byte)(((param_1._1_1_ - cVar1) + '\x11') * '\x02') << 8 | uVar3 - 0x7e;
    }
  }
  return uVar3;
}


