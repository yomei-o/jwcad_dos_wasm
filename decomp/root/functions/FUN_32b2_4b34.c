/* 32b2:4b34 */

undefined2 __cdecl16far FUN_32b2_4b34(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  pbVar1 = param_1;
  while ((param_1 = pbVar1, param_1 <= param_2 && (*param_1 != 0))) {
    pbVar1 = param_1 + 1;
    if ((*(byte *)(*param_1 + 0x7e09) & 4) != 0) {
      if (param_2 == param_1 + 1) {
        return 0xffff;
      }
      pbVar1 = param_1 + 2;
    }
  }
  return 0;
}


