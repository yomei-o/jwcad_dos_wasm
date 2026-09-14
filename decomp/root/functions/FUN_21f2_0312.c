/* 21f2:0312 */

undefined2 __cdecl16far FUN_21f2_0312(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_32b2_02bc();
  iVar1 = FUN_32b2_21c4(param_2);
  iVar2 = 0;
  while( true ) {
    if (iVar1 <= iVar2) {
      return 1;
    }
    if (*(char *)(iVar2 + param_2) != *(char *)(iVar2 + param_1)) break;
    iVar2 = iVar2 + 1;
  }
  return 0;
}


