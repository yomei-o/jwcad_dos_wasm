/* 32b2:4f1c */

void __stdcall16far FUN_32b2_4f1c(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  uVar1 = FUN_32b2_4e12(*param_1,param_1[1],param_2,param_3);
  *param_1 = (int)uVar1;
  param_1[1] = (int)((ulong)uVar1 >> 0x10);
  return;
}


