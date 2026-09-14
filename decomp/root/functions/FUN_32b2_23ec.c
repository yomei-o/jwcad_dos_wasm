/* 32b2:23ec */

void __cdecl16far FUN_32b2_23ec(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    uVar1 = FUN_32b2_21c4(param_1);
    FUN_32b2_1e02(0x32b2,2,param_1,uVar1);
    FUN_32b2_1e02(0x32b2,2,0x7d68,2);
  }
  if ((*(int *)0x7a34 < 0) || (*(int *)0x8364 <= *(int *)0x7a34)) {
    iVar2 = *(int *)0x8364;
  }
  else {
    iVar2 = *(int *)0x7a34;
  }
  uVar1 = *(undefined2 *)(iVar2 * 2 + -0x7ce8);
  uVar3 = FUN_32b2_21c4(uVar1);
  FUN_32b2_1e02(0x32b2,2,uVar1,uVar3);
  FUN_32b2_1e02(0x32b2,2,0x7d6b,1);
  return;
}


