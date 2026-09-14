/* 1885:5224 */

void __cdecl16far FUN_1885_5224(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if ((param_1 != *(int *)0xc3ba) || (param_2 != *(int *)0xc3bc)) {
    FUN_1885_4f03();
    *(int *)0xc3ba = param_1;
    *(int *)0xc3bc = param_2;
    FUN_1885_4f03();
  }
  return;
}


