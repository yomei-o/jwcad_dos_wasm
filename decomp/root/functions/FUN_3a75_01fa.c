/* 3a75:01fa */

uint __cdecl16far FUN_3a75_01fa(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1 & 0xff;
  uVar2 = param_1 >> 8;
  if ((((uVar2 < 0x21) || (0x7e < uVar2)) || (uVar3 < 0x21)) || (0x7e < uVar3)) {
    uVar3 = 0;
  }
  else {
    if ((param_1 & 0x100) == 0) {
      uVar3 = uVar3 + 0x7e;
    }
    else if (uVar3 < 0x60) {
      uVar3 = uVar3 + 0x1f;
    }
    else {
      uVar3 = uVar3 + 0x20;
    }
    uVar1 = uVar2 - 0x21 >> 1;
    uVar2 = uVar1 + 0x81;
    if (0x9f < uVar2) {
      uVar2 = uVar1 + 0xc1;
    }
    uVar3 = uVar2 << 8 | uVar3;
  }
  return uVar3;
}


