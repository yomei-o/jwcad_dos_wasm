/* 32b2:2554 */

undefined2 __cdecl16far FUN_32b2_2554(undefined2 param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  int in_DX;
  undefined2 unaff_DS;
  
  iVar1 = FUN_32b2_26de(param_1);
  *param_2 = iVar1;
  param_2[1] = in_DX;
  if ((iVar1 == -1) && (in_DX == -1)) {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


