/* 32b2:25f0 */

undefined2 __cdecl16far FUN_32b2_25f0(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar1 = FUN_32b2_21c4(param_1);
  uVar2 = FUN_32b2_0bc6(param_2);
  iVar3 = FUN_32b2_07b0(param_1,1,iVar1,param_2);
  FUN_32b2_0c39(uVar2,param_2);
  if (iVar3 == iVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
}


