/* 21f2:04d8 */

void __cdecl16far FUN_21f2_04d8(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 in_ZF;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  FUN_32b2_02bc();
  FUN_32b2_6cc6();
  FUN_32b2_6cc6();
  FUN_32b2_7191(0x32b2);
  if (!(bool)in_CF && !(bool)in_ZF) {
    FUN_32b2_6cc6();
    FUN_32b2_6cc6();
    FUN_32b2_7191(0x32b2);
    if (!(bool)in_CF && !(bool)in_ZF) {
      FUN_32b2_6cc6();
      FUN_32b2_6cc6();
      FUN_32b2_7191(0x32b2);
    }
  }
  while( true ) {
    uVar4 = 0x2e;
    uVar3 = 0x32b2;
    uVar2 = 0x2483;
    iVar1 = FUN_32b2_2f7a();
    if (iVar1 == 0) break;
    *(undefined1 *)(iVar1 + 1) = uVar4;
  }
  FUN_32b2_6cc6();
  uVar6 = 0x32b2;
  uVar5 = 0x2499;
  FUN_32b2_7258();
  FUN_32b2_6eb1(uVar2,uVar3,uVar5,uVar6);
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_6eb1();
  FUN_32b2_2854(param_1,param_2);
  return;
}


