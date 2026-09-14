/* 28b3:26d4 */

int __cdecl16far
FUN_28b3_26d4(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  iVar1 = FUN_28b3_2730(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 == 0) {
    *(undefined2 *)0xc22 = 1;
    FUN_1def_26a9(0x20,2);
    iVar1 = 900;
    FUN_21f2_0356(0x1e2);
  }
  return iVar1;
}


