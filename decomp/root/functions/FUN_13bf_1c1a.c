/* 13bf:1c1a */

undefined2 __cdecl16far FUN_13bf_1c1a(int param_1,int param_2,int *param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if (param_1 == 0) {
    if (*param_3 != *(int *)0xa62) {
      FUN_1885_3647(6,*param_3);
    }
    uVar1 = 0;
    *param_3 = 0;
  }
  else {
    if (*param_3 != param_2) {
      if (*param_3 != *(int *)0xa62) {
        FUN_1885_3647(6,*param_3);
      }
      if (*(int *)0xa62 != param_2) {
        FUN_1885_3647(0xfff9,param_2);
      }
      *param_3 = param_2;
    }
    uVar1 = 1;
  }
  return uVar1;
}


