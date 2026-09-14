/* 32b2:238c */

int __cdecl16far FUN_32b2_238c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  
  piVar3 = (int *)*(int *)0x7a5b;
  if ((piVar3 != (int *)0x0) && (param_1 != 0)) {
    iVar1 = FUN_32b2_21c4(param_1);
    for (; *piVar3 != 0; piVar3 = piVar3 + 1) {
      iVar2 = FUN_32b2_21c4(*piVar3);
      if (((iVar1 < iVar2) && (*(char *)(*piVar3 + iVar1) == '=')) &&
         (iVar2 = FUN_32b2_2208(*piVar3,param_1,iVar1), iVar2 == 0)) {
        return *piVar3 + iVar1 + 1;
      }
    }
  }
  return 0;
}


