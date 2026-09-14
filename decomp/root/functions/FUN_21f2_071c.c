/* 21f2:071c */

undefined2 __cdecl16far FUN_21f2_071c(undefined2 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  iVar1 = FUN_32b2_21c4(param_2);
  iVar1 = iVar1 + -1;
  FUN_32b2_2854(param_1,param_2);
  iVar2 = FUN_3a75_02e8(param_2,iVar1);
  if ((iVar2 != 0) || ((*(char *)(iVar1 + param_2) != '\\' && (2 < iVar1)))) {
    FUN_32b2_2126(param_1,0x1d10);
  }
  FUN_32b2_2126(param_1,param_3);
  return param_1;
}


