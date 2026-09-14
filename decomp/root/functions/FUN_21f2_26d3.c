/* 21f2:26d3 */

void __cdecl16far FUN_21f2_26d3(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  FUN_1def_23c5(param_1,0x14,2,2,1);
  *(undefined2 *)0xc22 = 1;
  FUN_21f2_02d9(2);
  iVar1 = *(int *)0x13e;
  if ((iVar1 <= *(int *)0x14a) && ((iVar1 < *(int *)0x14a || (*(uint *)0x13c < *(uint *)0x148)))) {
    *(uint *)0x148 = *(uint *)0x13c;
    *(int *)0x14a = iVar1;
  }
  iVar1 = *(int *)0x142;
  if ((iVar1 <= *(int *)0x14e) && ((iVar1 < *(int *)0x14e || (*(uint *)0x140 < *(uint *)0x14c)))) {
    *(uint *)0x14c = *(uint *)0x140;
    *(int *)0x14e = iVar1;
  }
  *(undefined2 *)0xa62 = 0;
  FUN_32b2_3391(0xc074,0);
  return;
}


