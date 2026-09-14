/* 3a75:00b2 */

int __cdecl16far FUN_3a75_00b2(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  iVar2 = 0;
  uVar3 = 0x3a75;
  while( true ) {
    if (*param_1 == '\0') {
      return iVar2;
    }
    iVar1 = FUN_32b2_312f(uVar3,*param_1);
    if ((iVar1 != 0) && (param_1 = param_1 + 1, *param_1 == '\0')) break;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
    uVar3 = 0x32b2;
  }
  return iVar2;
}


