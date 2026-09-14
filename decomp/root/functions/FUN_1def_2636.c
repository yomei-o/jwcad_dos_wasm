/* 1def:2636 */

void __cdecl16far FUN_1def_2636(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  FUN_1885_5256(0);
  iVar1 = (*(int *)0x48 + -1) * 0x10;
  iVar3 = *(int *)0x1b3e;
  iVar2 = iVar1 + 0xf;
  if (1 < *(uint *)0x48) {
    iVar3 = iVar3 + -1;
  }
  for (; iVar1 <= iVar2; iVar1 = iVar1 + 1) {
    iVar2 = 0;
    func_0x0002def0(0x1885,0,iVar1,iVar3,iVar1,0,0xffff);
  }
  return;
}


