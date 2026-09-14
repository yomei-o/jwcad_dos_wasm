/* 17a6:0144 */

undefined2 __cdecl16far FUN_17a6_0144(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if (param_4 == 8) {
    if (param_1 == *(int *)0xb310) {
      return 1;
    }
  }
  else if ((param_4 != 2) || ((param_3 == *(int *)0xa6a && (param_2 == *(int *)0xa6c)))) {
    uVar1 = FUN_21f2_06d1(param_1);
    return uVar1;
  }
  return 0;
}


