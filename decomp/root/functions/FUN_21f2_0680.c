/* 21f2:0680 */

uint __cdecl16far FUN_21f2_0680(uint param_1)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if ((*(char *)0xc16 == '\0') || (*(char *)0xc17 != '\0')) {
    if ((*(char *)(param_1 + 0xb388) == '\0') || (*(char *)((param_1 >> 4 & 0xf) + 0xb7c) == '\0'))
    {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    uVar1 = *(byte *)0xc16 ^ uVar1;
  }
  else {
    uVar1 = FUN_21f2_06d1(param_1);
  }
  return uVar1;
}


