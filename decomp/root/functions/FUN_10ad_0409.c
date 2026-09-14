/* 10ad:0409 */

undefined2 __cdecl16far FUN_10ad_0409(int param_1)

{
  undefined2 uVar1;
  
  FUN_32b2_02bc();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if ((param_1 == 0x2e) || ((0x2f < param_1 && (param_1 < 0x3a)))) {
    uVar1 = 1;
  }
  else if ((param_1 == 0x40) ||
          ((((param_1 == 0x70 || (param_1 == 0x78)) || (param_1 == 0x79)) ||
           ((param_1 == 0x23 || (param_1 == 0x26)))))) {
    uVar1 = 2;
  }
  else if ((param_1 == 0x2d) || (param_1 == 0x2b)) {
    uVar1 = 3;
  }
  else if ((((param_1 == 0x2a) || (param_1 == 0x2f)) || (param_1 == 0x5e)) || (param_1 == 0x25)) {
    uVar1 = 4;
  }
  else if (param_1 == 0x5b) {
    uVar1 = 5;
  }
  else if (param_1 == 0x5d) {
    uVar1 = 6;
  }
  else if ((((param_1 == 0x61) || (param_1 == 0x69)) || (param_1 == 99)) ||
          ((param_1 == 0x73 || (param_1 == 0x62)))) {
    uVar1 = 7;
  }
  else if ((param_1 == 0xdf) || ((param_1 == 0x27 || (param_1 == 0x22)))) {
    uVar1 = 8;
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}


