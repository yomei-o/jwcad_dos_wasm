/* 3ab8:768f */

void __cdecl16far FUN_3ab8_768f(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return;
}


