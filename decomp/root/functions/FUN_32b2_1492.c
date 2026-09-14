/* 32b2:1492 */

uint FUN_32b2_1492(uint param_1)

{
  undefined2 unaff_DS;
  
  if ((*(byte *)(param_1 + 0x7c67) & 4) == 0) {
    param_1 = (param_1 & 0xffdf) - 7;
  }
  return param_1;
}


