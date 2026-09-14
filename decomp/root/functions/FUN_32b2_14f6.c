/* 32b2:14f6 */

void FUN_32b2_14f6(undefined2 param_1,int *param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  do {
    *param_2 = *param_2 + 1;
    iVar1 = FUN_32b2_14b0(param_1);
  } while ((*(byte *)(iVar1 + 0x7c67) & 8) != 0);
  return;
}


