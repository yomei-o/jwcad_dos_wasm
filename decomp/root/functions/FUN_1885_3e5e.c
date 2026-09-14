/* 1885:3e5e */

void __cdecl16far FUN_1885_3e5e(int *param_1,int *param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if (*param_1 <= *(int *)0x1b3e) {
    FUN_1def_12ae(*param_1,*param_2,*param_1,*param_2 + 6,param_3,0xffff);
    FUN_1def_12ae(*param_1 + -1,*param_2 + 1,*param_1 + -1,*param_2 + 1,param_3,0xffff);
    *param_1 = *param_1 + 3;
  }
  return;
}


